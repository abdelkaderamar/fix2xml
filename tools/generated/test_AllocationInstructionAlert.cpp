#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/AllocationInstructionAlert.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationInstructionAlert, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AllocationInstructionAlert msg;

  list<multiset<string>> all_values;
  multiset<string> AllocationInstructionAlert_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_1;
  AccruedInterestAmt_1.setString("10451603");
  msg.set(AccruedInterestAmt_1);
  AllocationInstructionAlert_0.insert(AccruedInterestAmt_1.getString());
  FIX::AccruedInterestRate AccruedInterestRate_1;
  AccruedInterestRate_1.setString("19.060000");
  msg.set(AccruedInterestRate_1);
  AllocationInstructionAlert_0.insert(AccruedInterestRate_1.getString());
  FIX::AllocCancReplaceReason AllocCancReplaceReason_1(2);
  msg.set(AllocCancReplaceReason_1);
  AllocationInstructionAlert_0.insert(AllocCancReplaceReason_1.getString());
  FIX::AllocID AllocID_2("STRING_1645053417");
  msg.set(AllocID_2);
  AllocationInstructionAlert_0.insert(AllocID_2.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_2(6);
  msg.set(AllocIntermedReqType_2);
  AllocationInstructionAlert_0.insert(AllocIntermedReqType_2.getString());
  FIX::AllocLinkID AllocLinkID_1("STRING_628770689");
  msg.set(AllocLinkID_1);
  AllocationInstructionAlert_0.insert(AllocLinkID_1.getString());
  FIX::AllocLinkType AllocLinkType_1(1);
  msg.set(AllocLinkType_1);
  AllocationInstructionAlert_0.insert(AllocLinkType_1.getString());
  FIX::AllocNoOrdersType AllocNoOrdersType_1(0);
  msg.set(AllocNoOrdersType_1);
  AllocationInstructionAlert_0.insert(AllocNoOrdersType_1.getString());
  FIX::AllocTransType AllocTransType_1('1');
  msg.set(AllocTransType_1);
  AllocationInstructionAlert_0.insert(AllocTransType_1.getString());
  FIX::AllocType AllocType_2(9);
  msg.set(AllocType_2);
  AllocationInstructionAlert_0.insert(AllocType_2.getString());
  FIX::AutoAcceptIndicator AutoAcceptIndicator_1(true);
  msg.set(AutoAcceptIndicator_1);
  AllocationInstructionAlert_0.insert(AutoAcceptIndicator_1.getString());
  FIX::AvgParPx AvgParPx_1;
  AvgParPx_1.setString("9706766");
  msg.set(AvgParPx_1);
  AllocationInstructionAlert_0.insert(AvgParPx_1.getString());
  FIX::AvgPx AvgPx_1;
  AvgPx_1.setString("5905862");
  msg.set(AvgPx_1);
  AllocationInstructionAlert_0.insert(AvgPx_1.getString());
  FIX::AvgPxIndicator AvgPxIndicator_1(0);
  msg.set(AvgPxIndicator_1);
  AllocationInstructionAlert_0.insert(AvgPxIndicator_1.getString());
  FIX::AvgPxPrecision AvgPxPrecision_1(1877360478);
  msg.set(AvgPxPrecision_1);
  AllocationInstructionAlert_0.insert(AvgPxPrecision_1.getString());
  FIX::BookingRefID BookingRefID_1("STRING_675719942");
  msg.set(BookingRefID_1);
  AllocationInstructionAlert_0.insert(BookingRefID_1.getString());
  FIX::BookingType BookingType_1(2);
  msg.set(BookingType_1);
  AllocationInstructionAlert_0.insert(BookingType_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_2("LOCALMKTDATE_609104246");
  msg.set(ClearingBusinessDate_2);
  AllocationInstructionAlert_0.insert(ClearingBusinessDate_2.getString());
  FIX::Concession Concession_1;
  Concession_1.setString("17515643");
  msg.set(Concession_1);
  AllocationInstructionAlert_0.insert(Concession_1.getString());
  FIX::Currency Currency_2("CHF");
  msg.set(Currency_2);
  AllocationInstructionAlert_0.insert(Currency_2.getString());
  FIX::CustOrderCapacity CustOrderCapacity_1(2);
  msg.set(CustOrderCapacity_1);
  AllocationInstructionAlert_0.insert(CustOrderCapacity_1.getString());
  FIX::EncodedText EncodedText_3("DATA_1616839634");
  msg.set(EncodedText_3);
  AllocationInstructionAlert_0.insert(EncodedText_3.getString());
  FIX::EncodedTextLen EncodedTextLen_3(27741750);
  msg.set(EncodedTextLen_3);
  AllocationInstructionAlert_0.insert(EncodedTextLen_3.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_1;
  EndAccruedInterestAmt_1.setString("10177951");
  msg.set(EndAccruedInterestAmt_1);
  AllocationInstructionAlert_0.insert(EndAccruedInterestAmt_1.getString());
  FIX::EndCash EndCash_1;
  EndCash_1.setString("9644033");
  msg.set(EndCash_1);
  AllocationInstructionAlert_0.insert(EndCash_1.getString());
  FIX::GrossTradeAmt GrossTradeAmt_1;
  GrossTradeAmt_1.setString("6769123");
  msg.set(GrossTradeAmt_1);
  AllocationInstructionAlert_0.insert(GrossTradeAmt_1.getString());
  FIX::InterestAtMaturity InterestAtMaturity_1;
  InterestAtMaturity_1.setString("493515");
  msg.set(InterestAtMaturity_1);
  AllocationInstructionAlert_0.insert(InterestAtMaturity_1.getString());
  FIX::LastFragment LastFragment_1(true);
  msg.set(LastFragment_1);
  AllocationInstructionAlert_0.insert(LastFragment_1.getString());
  FIX::LastMkt LastMkt_2("EXCHANGE_2031601289");
  msg.set(LastMkt_2);
  AllocationInstructionAlert_0.insert(LastMkt_2.getString());
  FIX::LegalConfirm LegalConfirm_1(false);
  msg.set(LegalConfirm_1);
  AllocationInstructionAlert_0.insert(LegalConfirm_1.getString());
  FIX::MatchType MatchType_1("STRING_4");
  msg.set(MatchType_1);
  AllocationInstructionAlert_0.insert(MatchType_1.getString());
  FIX::MessageEventSource MessageEventSource_1("STRING_1380969547");
  msg.set(MessageEventSource_1);
  AllocationInstructionAlert_0.insert(MessageEventSource_1.getString());
  FIX::MultiLegReportingType MultiLegReportingType_1('3');
  msg.set(MultiLegReportingType_1);
  AllocationInstructionAlert_0.insert(MultiLegReportingType_1.getString());
  FIX::NetMoney NetMoney_1;
  NetMoney_1.setString("20353598");
  msg.set(NetMoney_1);
  AllocationInstructionAlert_0.insert(NetMoney_1.getString());
  FIX::NumDaysInterest NumDaysInterest_1(1281433198);
  msg.set(NumDaysInterest_1);
  AllocationInstructionAlert_0.insert(NumDaysInterest_1.getString());
  FIX::PositionEffect PositionEffect_1('D');
  msg.set(PositionEffect_1);
  AllocationInstructionAlert_0.insert(PositionEffect_1.getString());
  FIX::PreviouslyReported PreviouslyReported_1(true);
  msg.set(PreviouslyReported_1);
  AllocationInstructionAlert_0.insert(PreviouslyReported_1.getString());
  FIX::PriceType PriceType_1(18);
  msg.set(PriceType_1);
  AllocationInstructionAlert_0.insert(PriceType_1.getString());
  FIX::QtyType QtyType_2(1);
  msg.set(QtyType_2);
  AllocationInstructionAlert_0.insert(QtyType_2.getString());
  FIX::Quantity Quantity_2;
  Quantity_2.setString("2308805");
  msg.set(Quantity_2);
  AllocationInstructionAlert_0.insert(Quantity_2.getString());
  FIX::RefAllocID RefAllocID_1("STRING_558053235");
  msg.set(RefAllocID_1);
  AllocationInstructionAlert_0.insert(RefAllocID_1.getString());
  FIX::ReversalIndicator ReversalIndicator_1(false);
  msg.set(ReversalIndicator_1);
  AllocationInstructionAlert_0.insert(ReversalIndicator_1.getString());
  FIX::RndPx RndPx_1;
  RndPx_1.setString("8214667");
  msg.set(RndPx_1);
  AllocationInstructionAlert_0.insert(RndPx_1.getString());
  FIX::SecondaryAllocID SecondaryAllocID_2("STRING_603338286");
  msg.set(SecondaryAllocID_2);
  AllocationInstructionAlert_0.insert(SecondaryAllocID_2.getString());
  FIX::SettlDate SettlDate_1("LOCALMKTDATE_863017663");
  msg.set(SettlDate_1);
  AllocationInstructionAlert_0.insert(SettlDate_1.getString());
  FIX::SettlType SettlType_1("STRING_5");
  msg.set(SettlType_1);
  AllocationInstructionAlert_0.insert(SettlType_1.getString());
  FIX::Side Side_1('4');
  msg.set(Side_1);
  AllocationInstructionAlert_0.insert(Side_1.getString());
  FIX::StartCash StartCash_1;
  StartCash_1.setString("14721219");
  msg.set(StartCash_1);
  AllocationInstructionAlert_0.insert(StartCash_1.getString());
  FIX::Text Text_3("STRING_1101267406");
  msg.set(Text_3);
  AllocationInstructionAlert_0.insert(Text_3.getString());
  FIX::TotNoAllocs TotNoAllocs_1(1907627065);
  msg.set(TotNoAllocs_1);
  AllocationInstructionAlert_0.insert(TotNoAllocs_1.getString());
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_1;
  TotalAccruedInterestAmt_1.setString("7867659");
  msg.set(TotalAccruedInterestAmt_1);
  AllocationInstructionAlert_0.insert(TotalAccruedInterestAmt_1.getString());
  FIX::TotalTakedown TotalTakedown_1;
  TotalTakedown_1.setString("4986214");
  msg.set(TotalTakedown_1);
  AllocationInstructionAlert_0.insert(TotalTakedown_1.getString());
  FIX::TradeDate TradeDate_3("LOCALMKTDATE_1376983051");
  msg.set(TradeDate_3);
  AllocationInstructionAlert_0.insert(TradeDate_3.getString());
  FIX::TradeInputSource TradeInputSource_1("STRING_814507697");
  msg.set(TradeInputSource_1);
  AllocationInstructionAlert_0.insert(TradeInputSource_1.getString());
  FIX::TradeOriginationDate TradeOriginationDate_1("LOCALMKTDATE_1516416517");
  msg.set(TradeOriginationDate_1);
  AllocationInstructionAlert_0.insert(TradeOriginationDate_1.getString());
  FIX::TradingSessionID TradingSessionID_2("STRING_4");
  msg.set(TradingSessionID_2);
  AllocationInstructionAlert_0.insert(TradingSessionID_2.getString());
  FIX::TradingSessionSubID TradingSessionSubID_2("STRING_6");
  msg.set(TradingSessionSubID_2);
  AllocationInstructionAlert_0.insert(TradingSessionSubID_2.getString());
  FIX::TransactTime TransactTime_3(FIX::UTCTIMESTAMP(6, 1, 55, 27, 22011));
  msg.set(TransactTime_3);
  AllocationInstructionAlert_0.insert(TransactTime_3.getString());
  FIX::TrdSubType TrdSubType_1(14);
  msg.set(TrdSubType_1);
  AllocationInstructionAlert_0.insert(TrdSubType_1.getString());
  FIX::TrdType TrdType_1(49);
  msg.set(TrdType_1);
  AllocationInstructionAlert_0.insert(TrdType_1.getString());
  all_values.push_back(AllocationInstructionAlert_0);

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationInstructionAlert::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_1;
    FIX::AllocAccount AllocAccount_3("STRING_1711829901");
    noAllocs_0_0.set(AllocAccount_3);
    AllocGrp_NoAllocs_1.insert(AllocAccount_3.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_1;
    AllocAccruedInterestAmt_1.setString("16475971");
    noAllocs_0_0.set(AllocAccruedInterestAmt_1);
    AllocGrp_NoAllocs_1.insert(AllocAccruedInterestAmt_1.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_3(936015948);
    noAllocs_0_0.set(AllocAcctIDSource_3);
    AllocGrp_NoAllocs_1.insert(AllocAcctIDSource_3.getString());
    FIX::AllocAvgPx AllocAvgPx_1;
    AllocAvgPx_1.setString("19427104");
    noAllocs_0_0.set(AllocAvgPx_1);
    AllocGrp_NoAllocs_1.insert(AllocAvgPx_1.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_3("STRING_58166727");
    noAllocs_0_0.set(AllocCustomerCapacity_3);
    AllocGrp_NoAllocs_1.insert(AllocCustomerCapacity_3.getString());
    FIX::AllocHandlInst AllocHandlInst_1(2);
    noAllocs_0_0.set(AllocHandlInst_1);
    AllocGrp_NoAllocs_1.insert(AllocHandlInst_1.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_1;
    AllocInterestAtMaturity_1.setString("6166935");
    noAllocs_0_0.set(AllocInterestAtMaturity_1);
    AllocGrp_NoAllocs_1.insert(AllocInterestAtMaturity_1.getString());
    FIX::AllocMethod AllocMethod_1(1);
    noAllocs_0_0.set(AllocMethod_1);
    AllocGrp_NoAllocs_1.insert(AllocMethod_1.getString());
    FIX::AllocNetMoney AllocNetMoney_1;
    AllocNetMoney_1.setString("7846907");
    noAllocs_0_0.set(AllocNetMoney_1);
    AllocGrp_NoAllocs_1.insert(AllocNetMoney_1.getString());
    FIX::AllocPositionEffect AllocPositionEffect_3('R');
    noAllocs_0_0.set(AllocPositionEffect_3);
    AllocGrp_NoAllocs_1.insert(AllocPositionEffect_3.getString());
    FIX::AllocPrice AllocPrice_3;
    AllocPrice_3.setString("9808436");
    noAllocs_0_0.set(AllocPrice_3);
    AllocGrp_NoAllocs_1.insert(AllocPrice_3.getString());
    FIX::AllocQty AllocQty_3;
    AllocQty_3.setString("1093290");
    noAllocs_0_0.set(AllocQty_3);
    AllocGrp_NoAllocs_1.insert(AllocQty_3.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_1;
    AllocSettlCurrAmt_1.setString("10676639");
    noAllocs_0_0.set(AllocSettlCurrAmt_1);
    AllocGrp_NoAllocs_1.insert(AllocSettlCurrAmt_1.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_1("CHF");
    noAllocs_0_0.set(AllocSettlCurrency_1);
    AllocGrp_NoAllocs_1.insert(AllocSettlCurrency_1.getString());
    FIX::AllocSettlInstType AllocSettlInstType_1(1);
    noAllocs_0_0.set(AllocSettlInstType_1);
    AllocGrp_NoAllocs_1.insert(AllocSettlInstType_1.getString());
    FIX::AllocText AllocText_3("STRING_2117970077");
    noAllocs_0_0.set(AllocText_3);
    AllocGrp_NoAllocs_1.insert(AllocText_3.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_1("STRING_5");
    noAllocs_0_0.set(ClearingFeeIndicator_1);
    AllocGrp_NoAllocs_1.insert(ClearingFeeIndicator_1.getString());
    FIX::EncodedAllocText EncodedAllocText_3("DATA_935218245");
    noAllocs_0_0.set(EncodedAllocText_3);
    AllocGrp_NoAllocs_1.insert(EncodedAllocText_3.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_3(164389183);
    noAllocs_0_0.set(EncodedAllocTextLen_3);
    AllocGrp_NoAllocs_1.insert(EncodedAllocTextLen_3.getString());
    FIX::IndividualAllocID IndividualAllocID_3("STRING_1054539094");
    noAllocs_0_0.set(IndividualAllocID_3);
    AllocGrp_NoAllocs_1.insert(IndividualAllocID_3.getString());
    FIX::IndividualAllocType IndividualAllocType_3(2);
    noAllocs_0_0.set(IndividualAllocType_3);
    AllocGrp_NoAllocs_1.insert(IndividualAllocType_3.getString());
    FIX::MatchStatus MatchStatus_2('1');
    noAllocs_0_0.set(MatchStatus_2);
    AllocGrp_NoAllocs_1.insert(MatchStatus_2.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_1(true);
    noAllocs_0_0.set(NotifyBrokerOfCredit_1);
    AllocGrp_NoAllocs_1.insert(NotifyBrokerOfCredit_1.getString());
    FIX::ProcessCode ProcessCode_1('3');
    noAllocs_0_0.set(ProcessCode_1);
    AllocGrp_NoAllocs_1.insert(ProcessCode_1.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_3("STRING_1780276988");
    noAllocs_0_0.set(SecondaryIndividualAllocID_3);
    AllocGrp_NoAllocs_1.insert(SecondaryIndividualAllocID_3.getString());
    FIX::SettlCurrAmt SettlCurrAmt_1;
    SettlCurrAmt_1.setString("8916167");
    noAllocs_0_0.set(SettlCurrAmt_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrAmt_1.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_1;
    SettlCurrFxRate_1.setString("8644695");
    noAllocs_0_0.set(SettlCurrFxRate_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrFxRate_1.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_1('D');
    noAllocs_0_0.set(SettlCurrFxRateCalc_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrFxRateCalc_1.getString());
    FIX::SettlCurrency SettlCurrency_1("GBP");
    noAllocs_0_0.set(SettlCurrency_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrency_1.getString());
    all_values.push_back(AllocGrp_NoAllocs_1);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_2;
      FIX::ClearingInstruction ClearingInstruction_2(8);
      noClearingInstructions_0_1_0.set(ClearingInstruction_2);
      ClrInstGrp_NoClearingInstructions_2.insert(ClearingInstruction_2.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_2);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_3;
      FIX::ClearingInstruction ClearingInstruction_3(10);
      noClearingInstructions_0_1_1.set(ClearingInstruction_3);
      ClrInstGrp_NoClearingInstructions_3.insert(ClearingInstruction_3.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_3);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_1;
    FIX::CommCurrency CommCurrency_1("CAN");
    noAllocs_0_0.set(CommCurrency_1);
    CommissionData_1.insert(CommCurrency_1.getString());
    FIX::CommType CommType_1('3');
    noAllocs_0_0.set(CommType_1);
    CommissionData_1.insert(CommType_1.getString());
    FIX::Commission Commission_1;
    Commission_1.setString("15737750");
    noAllocs_0_0.set(Commission_1);
    CommissionData_1.insert(Commission_1.getString());
    FIX::FundRenewWaiv FundRenewWaiv_1('Y');
    noAllocs_0_0.set(FundRenewWaiv_1);
    CommissionData_1.insert(FundRenewWaiv_1.getString());
    all_values.push_back(CommissionData_1);

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_2;
      FIX::MiscFeeAmt MiscFeeAmt_2;
      MiscFeeAmt_2.setString("15401716");
      noMiscFees_0_1_0.set(MiscFeeAmt_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeAmt_2.getString());
      FIX::MiscFeeBasis MiscFeeBasis_2(1);
      noMiscFees_0_1_0.set(MiscFeeBasis_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeBasis_2.getString());
      FIX::MiscFeeCurr MiscFeeCurr_2("USD");
      noMiscFees_0_1_0.set(MiscFeeCurr_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeCurr_2.getString());
      FIX::MiscFeeType MiscFeeType_2("STRING_4");
      noMiscFees_0_1_0.set(MiscFeeType_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeType_2.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_2);

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_8;
      FIX::NestedPartyID NestedPartyID_8("STRING_2026637320");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_8);
      NestedParties_NoNestedPartyIDs_8.insert(NestedPartyID_8.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_8('3');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_8);
      NestedParties_NoNestedPartyIDs_8.insert(NestedPartyIDSource_8.getString());
      FIX::NestedPartyRole NestedPartyRole_8(1701460755);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_8);
      NestedParties_NoNestedPartyIDs_8.insert(NestedPartyRole_8.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_8);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_10;
        FIX::NestedPartySubID NestedPartySubID_10("STRING_563597672");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_10);
        NstdPtysSubGrp_NoNestedPartySubIDs_10.insert(NestedPartySubID_10.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_10(608516201);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_10);
        NstdPtysSubGrp_NoNestedPartySubIDs_10.insert(NestedPartySubIDType_10.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_10);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_9;
      FIX::NestedPartyID NestedPartyID_9("STRING_1167874609");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_9);
      NestedParties_NoNestedPartyIDs_9.insert(NestedPartyID_9.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_9('2');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_9);
      NestedParties_NoNestedPartyIDs_9.insert(NestedPartyIDSource_9.getString());
      FIX::NestedPartyRole NestedPartyRole_9(891109329);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_9);
      NestedParties_NoNestedPartyIDs_9.insert(NestedPartyRole_9.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_9);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_11;
        FIX::NestedPartySubID NestedPartySubID_11("STRING_2047312689");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_11);
        NstdPtysSubGrp_NoNestedPartySubIDs_11.insert(NestedPartySubID_11.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_11(1782726038);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_11);
        NstdPtysSubGrp_NoNestedPartySubIDs_11.insert(NestedPartySubIDType_11.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_11);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_12;
        FIX::NestedPartySubID NestedPartySubID_12("STRING_1962403244");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_12);
        NstdPtysSubGrp_NoNestedPartySubIDs_12.insert(NestedPartySubID_12.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_12(1497337576);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_12);
        NstdPtysSubGrp_NoNestedPartySubIDs_12.insert(NestedPartySubIDType_12.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_12);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_13;
        FIX::NestedPartySubID NestedPartySubID_13("STRING_269832231");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_13);
        NstdPtysSubGrp_NoNestedPartySubIDs_13.insert(NestedPartySubID_13.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_13(1452941000);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_13);
        NstdPtysSubGrp_NoNestedPartySubIDs_13.insert(NestedPartySubIDType_13.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_13);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_10;
      FIX::NestedPartyID NestedPartyID_10("STRING_511708716");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_10);
      NestedParties_NoNestedPartyIDs_10.insert(NestedPartyID_10.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_10('4');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_10);
      NestedParties_NoNestedPartyIDs_10.insert(NestedPartyIDSource_10.getString());
      FIX::NestedPartyRole NestedPartyRole_10(1879494705);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_10);
      NestedParties_NoNestedPartyIDs_10.insert(NestedPartyRole_10.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_10);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_14;
        FIX::NestedPartySubID NestedPartySubID_14("STRING_597405623");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_14);
        NstdPtysSubGrp_NoNestedPartySubIDs_14.insert(NestedPartySubID_14.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_14(80237895);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_14);
        NstdPtysSubGrp_NoNestedPartySubIDs_14.insert(NestedPartySubIDType_14.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_14);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_15;
        FIX::NestedPartySubID NestedPartySubID_15("STRING_895081664");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_15);
        NstdPtysSubGrp_NoNestedPartySubIDs_15.insert(NestedPartySubID_15.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_15(1451780696);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_15);
        NstdPtysSubGrp_NoNestedPartySubIDs_15.insert(NestedPartySubIDType_15.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_15);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_16;
        FIX::NestedPartySubID NestedPartySubID_16("STRING_1213155531");
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubID_16);
        NstdPtysSubGrp_NoNestedPartySubIDs_16.insert(NestedPartySubID_16.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_16(287769636);
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubIDType_16);
        NstdPtysSubGrp_NoNestedPartySubIDs_16.insert(NestedPartySubIDType_16.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_16);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_1;
    FIX::SettlDeliveryType SettlDeliveryType_1(1);
    noAllocs_0_0.set(SettlDeliveryType_1);
    SettlInstructionsData_1.insert(SettlDeliveryType_1.getString());
    FIX::StandInstDbID StandInstDbID_1("STRING_307918578");
    noAllocs_0_0.set(StandInstDbID_1);
    SettlInstructionsData_1.insert(StandInstDbID_1.getString());
    FIX::StandInstDbName StandInstDbName_1("STRING_748121580");
    noAllocs_0_0.set(StandInstDbName_1);
    SettlInstructionsData_1.insert(StandInstDbName_1.getString());
    FIX::StandInstDbType StandInstDbType_1(4);
    noAllocs_0_0.set(StandInstDbType_1);
    SettlInstructionsData_1.insert(StandInstDbType_1.getString());
    all_values.push_back(SettlInstructionsData_1);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_2;
      FIX::DlvyInstType DlvyInstType_2('S');
      noDlvyInst_0_1_0.set(DlvyInstType_2);
      DlvyInstGrp_NoDlvyInst_2.insert(DlvyInstType_2.getString());
      FIX::SettlInstSource SettlInstSource_2('1');
      noDlvyInst_0_1_0.set(SettlInstSource_2);
      DlvyInstGrp_NoDlvyInst_2.insert(SettlInstSource_2.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_2);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_4;
        FIX::SettlPartyID SettlPartyID_4("STRING_1441647171");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_4);
        SettlParties_NoSettlPartyIDs_4.insert(SettlPartyID_4.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_4('3');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_4);
        SettlParties_NoSettlPartyIDs_4.insert(SettlPartyIDSource_4.getString());
        FIX::SettlPartyRole SettlPartyRole_4(461269939);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_4);
        SettlParties_NoSettlPartyIDs_4.insert(SettlPartyRole_4.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_4);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_5;
          FIX::SettlPartySubID SettlPartySubID_5("STRING_650596003");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_5);
          SettlPtysSubGrp_NoSettlPartySubIDs_5.insert(SettlPartySubID_5.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_5(1352379269);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_5);
          SettlPtysSubGrp_NoSettlPartySubIDs_5.insert(SettlPartySubIDType_5.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_5);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_6;
          FIX::SettlPartySubID SettlPartySubID_6("STRING_1559971781");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_6);
          SettlPtysSubGrp_NoSettlPartySubIDs_6.insert(SettlPartySubID_6.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_6(550425044);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_6);
          SettlPtysSubGrp_NoSettlPartySubIDs_6.insert(SettlPartySubIDType_6.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_6);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_7;
          FIX::SettlPartySubID SettlPartySubID_7("STRING_987621659");
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubID_7);
          SettlPtysSubGrp_NoSettlPartySubIDs_7.insert(SettlPartySubID_7.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_7(1374891377);
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubIDType_7);
          SettlPtysSubGrp_NoSettlPartySubIDs_7.insert(SettlPartySubIDType_7.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_7);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_2);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_5;
        FIX::SettlPartyID SettlPartyID_5("STRING_2047762621");
        noSettlPartyIDs_0_0_2_1.set(SettlPartyID_5);
        SettlParties_NoSettlPartyIDs_5.insert(SettlPartyID_5.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_5('1');
        noSettlPartyIDs_0_0_2_1.set(SettlPartyIDSource_5);
        SettlParties_NoSettlPartyIDs_5.insert(SettlPartyIDSource_5.getString());
        FIX::SettlPartyRole SettlPartyRole_5(680348730);
        noSettlPartyIDs_0_0_2_1.set(SettlPartyRole_5);
        SettlParties_NoSettlPartyIDs_5.insert(SettlPartyRole_5.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_5);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_8;
          FIX::SettlPartySubID SettlPartySubID_8("STRING_1661989454");
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubID_8);
          SettlPtysSubGrp_NoSettlPartySubIDs_8.insert(SettlPartySubID_8.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_8(412359787);
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubIDType_8);
          SettlPtysSubGrp_NoSettlPartySubIDs_8.insert(SettlPartySubIDType_8.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_8);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_9;
          FIX::SettlPartySubID SettlPartySubID_9("STRING_1880777947");
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubID_9);
          SettlPtysSubGrp_NoSettlPartySubIDs_9.insert(SettlPartySubID_9.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_9(111911429);
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubIDType_9);
          SettlPtysSubGrp_NoSettlPartySubIDs_9.insert(SettlPartySubIDType_9.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_9);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_10;
          FIX::SettlPartySubID SettlPartySubID_10("STRING_492597682");
          noSettlPartySubIDs_0_0_1_3_2.set(SettlPartySubID_10);
          SettlPtysSubGrp_NoSettlPartySubIDs_10.insert(SettlPartySubID_10.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_10(628375963);
          noSettlPartySubIDs_0_0_1_3_2.set(SettlPartySubIDType_10);
          SettlPtysSubGrp_NoSettlPartySubIDs_10.insert(SettlPartySubIDType_10.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_10);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_2);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_0_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_3;
      FIX::DlvyInstType DlvyInstType_3('S');
      noDlvyInst_0_1_1.set(DlvyInstType_3);
      DlvyInstGrp_NoDlvyInst_3.insert(DlvyInstType_3.getString());
      FIX::SettlInstSource SettlInstSource_3('3');
      noDlvyInst_0_1_1.set(SettlInstSource_3);
      DlvyInstGrp_NoDlvyInst_3.insert(SettlInstSource_3.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_3);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_6;
        FIX::SettlPartyID SettlPartyID_6("STRING_555724206");
        noSettlPartyIDs_0_1_2_0.set(SettlPartyID_6);
        SettlParties_NoSettlPartyIDs_6.insert(SettlPartyID_6.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_6('2');
        noSettlPartyIDs_0_1_2_0.set(SettlPartyIDSource_6);
        SettlParties_NoSettlPartyIDs_6.insert(SettlPartyIDSource_6.getString());
        FIX::SettlPartyRole SettlPartyRole_6(1664267180);
        noSettlPartyIDs_0_1_2_0.set(SettlPartyRole_6);
        SettlParties_NoSettlPartyIDs_6.insert(SettlPartyRole_6.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_6);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_11;
          FIX::SettlPartySubID SettlPartySubID_11("STRING_164964775");
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubID_11);
          SettlPtysSubGrp_NoSettlPartySubIDs_11.insert(SettlPartySubID_11.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_11(144058785);
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubIDType_11);
          SettlPtysSubGrp_NoSettlPartySubIDs_11.insert(SettlPartySubIDType_11.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_11);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_12;
          FIX::SettlPartySubID SettlPartySubID_12("STRING_1943924625");
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubID_12);
          SettlPtysSubGrp_NoSettlPartySubIDs_12.insert(SettlPartySubID_12.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_12(17718513);
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubIDType_12);
          SettlPtysSubGrp_NoSettlPartySubIDs_12.insert(SettlPartySubIDType_12.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_12);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_13;
          FIX::SettlPartySubID SettlPartySubID_13("STRING_1585705956");
          noSettlPartySubIDs_0_1_0_3_2.set(SettlPartySubID_13);
          SettlPtysSubGrp_NoSettlPartySubIDs_13.insert(SettlPartySubID_13.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_13(180001279);
          noSettlPartySubIDs_0_1_0_3_2.set(SettlPartySubIDType_13);
          SettlPtysSubGrp_NoSettlPartySubIDs_13.insert(SettlPartySubIDType_13.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_13);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_2);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_7;
        FIX::SettlPartyID SettlPartyID_7("STRING_478988453");
        noSettlPartyIDs_0_1_2_1.set(SettlPartyID_7);
        SettlParties_NoSettlPartyIDs_7.insert(SettlPartyID_7.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_7('2');
        noSettlPartyIDs_0_1_2_1.set(SettlPartyIDSource_7);
        SettlParties_NoSettlPartyIDs_7.insert(SettlPartyIDSource_7.getString());
        FIX::SettlPartyRole SettlPartyRole_7(830597282);
        noSettlPartyIDs_0_1_2_1.set(SettlPartyRole_7);
        SettlParties_NoSettlPartyIDs_7.insert(SettlPartyRole_7.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_7);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_14;
          FIX::SettlPartySubID SettlPartySubID_14("STRING_1460232221");
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubID_14);
          SettlPtysSubGrp_NoSettlPartySubIDs_14.insert(SettlPartySubID_14.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_14(1381022327);
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubIDType_14);
          SettlPtysSubGrp_NoSettlPartySubIDs_14.insert(SettlPartySubIDType_14.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_14);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_15;
          FIX::SettlPartySubID SettlPartySubID_15("STRING_671505733");
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubID_15);
          SettlPtysSubGrp_NoSettlPartySubIDs_15.insert(SettlPartySubID_15.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_15(687639951);
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubIDType_15);
          SettlPtysSubGrp_NoSettlPartySubIDs_15.insert(SettlPartySubIDType_15.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_15);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_1);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_1);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoAllocs noAllocs_0_1;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_2;
    FIX::AllocAccount AllocAccount_4("STRING_1281301300");
    noAllocs_0_1.set(AllocAccount_4);
    AllocGrp_NoAllocs_2.insert(AllocAccount_4.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_2;
    AllocAccruedInterestAmt_2.setString("19289596");
    noAllocs_0_1.set(AllocAccruedInterestAmt_2);
    AllocGrp_NoAllocs_2.insert(AllocAccruedInterestAmt_2.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_4(1367988681);
    noAllocs_0_1.set(AllocAcctIDSource_4);
    AllocGrp_NoAllocs_2.insert(AllocAcctIDSource_4.getString());
    FIX::AllocAvgPx AllocAvgPx_2;
    AllocAvgPx_2.setString("16932889");
    noAllocs_0_1.set(AllocAvgPx_2);
    AllocGrp_NoAllocs_2.insert(AllocAvgPx_2.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_4("STRING_1443465430");
    noAllocs_0_1.set(AllocCustomerCapacity_4);
    AllocGrp_NoAllocs_2.insert(AllocCustomerCapacity_4.getString());
    FIX::AllocHandlInst AllocHandlInst_2(2);
    noAllocs_0_1.set(AllocHandlInst_2);
    AllocGrp_NoAllocs_2.insert(AllocHandlInst_2.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_2;
    AllocInterestAtMaturity_2.setString("14265832");
    noAllocs_0_1.set(AllocInterestAtMaturity_2);
    AllocGrp_NoAllocs_2.insert(AllocInterestAtMaturity_2.getString());
    FIX::AllocMethod AllocMethod_2(1);
    noAllocs_0_1.set(AllocMethod_2);
    AllocGrp_NoAllocs_2.insert(AllocMethod_2.getString());
    FIX::AllocNetMoney AllocNetMoney_2;
    AllocNetMoney_2.setString("1254625");
    noAllocs_0_1.set(AllocNetMoney_2);
    AllocGrp_NoAllocs_2.insert(AllocNetMoney_2.getString());
    FIX::AllocPositionEffect AllocPositionEffect_4('O');
    noAllocs_0_1.set(AllocPositionEffect_4);
    AllocGrp_NoAllocs_2.insert(AllocPositionEffect_4.getString());
    FIX::AllocPrice AllocPrice_4;
    AllocPrice_4.setString("9715853");
    noAllocs_0_1.set(AllocPrice_4);
    AllocGrp_NoAllocs_2.insert(AllocPrice_4.getString());
    FIX::AllocQty AllocQty_4;
    AllocQty_4.setString("18312157");
    noAllocs_0_1.set(AllocQty_4);
    AllocGrp_NoAllocs_2.insert(AllocQty_4.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_2;
    AllocSettlCurrAmt_2.setString("8236212");
    noAllocs_0_1.set(AllocSettlCurrAmt_2);
    AllocGrp_NoAllocs_2.insert(AllocSettlCurrAmt_2.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_2("CHF");
    noAllocs_0_1.set(AllocSettlCurrency_2);
    AllocGrp_NoAllocs_2.insert(AllocSettlCurrency_2.getString());
    FIX::AllocSettlInstType AllocSettlInstType_2(1);
    noAllocs_0_1.set(AllocSettlInstType_2);
    AllocGrp_NoAllocs_2.insert(AllocSettlInstType_2.getString());
    FIX::AllocText AllocText_4("STRING_1503787890");
    noAllocs_0_1.set(AllocText_4);
    AllocGrp_NoAllocs_2.insert(AllocText_4.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_2("STRING_3");
    noAllocs_0_1.set(ClearingFeeIndicator_2);
    AllocGrp_NoAllocs_2.insert(ClearingFeeIndicator_2.getString());
    FIX::EncodedAllocText EncodedAllocText_4("DATA_484463521");
    noAllocs_0_1.set(EncodedAllocText_4);
    AllocGrp_NoAllocs_2.insert(EncodedAllocText_4.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_4(1300228867);
    noAllocs_0_1.set(EncodedAllocTextLen_4);
    AllocGrp_NoAllocs_2.insert(EncodedAllocTextLen_4.getString());
    FIX::IndividualAllocID IndividualAllocID_4("STRING_1880087150");
    noAllocs_0_1.set(IndividualAllocID_4);
    AllocGrp_NoAllocs_2.insert(IndividualAllocID_4.getString());
    FIX::IndividualAllocType IndividualAllocType_4(2);
    noAllocs_0_1.set(IndividualAllocType_4);
    AllocGrp_NoAllocs_2.insert(IndividualAllocType_4.getString());
    FIX::MatchStatus MatchStatus_3('0');
    noAllocs_0_1.set(MatchStatus_3);
    AllocGrp_NoAllocs_2.insert(MatchStatus_3.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_2(false);
    noAllocs_0_1.set(NotifyBrokerOfCredit_2);
    AllocGrp_NoAllocs_2.insert(NotifyBrokerOfCredit_2.getString());
    FIX::ProcessCode ProcessCode_2('1');
    noAllocs_0_1.set(ProcessCode_2);
    AllocGrp_NoAllocs_2.insert(ProcessCode_2.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_4("STRING_163343781");
    noAllocs_0_1.set(SecondaryIndividualAllocID_4);
    AllocGrp_NoAllocs_2.insert(SecondaryIndividualAllocID_4.getString());
    FIX::SettlCurrAmt SettlCurrAmt_2;
    SettlCurrAmt_2.setString("20429596");
    noAllocs_0_1.set(SettlCurrAmt_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrAmt_2.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_2;
    SettlCurrFxRate_2.setString("12831784");
    noAllocs_0_1.set(SettlCurrFxRate_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrFxRate_2.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_2('M');
    noAllocs_0_1.set(SettlCurrFxRateCalc_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrFxRateCalc_2.getString());
    FIX::SettlCurrency SettlCurrency_2("GBP");
    noAllocs_0_1.set(SettlCurrency_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrency_2.getString());
    all_values.push_back(AllocGrp_NoAllocs_2);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_4;
      FIX::ClearingInstruction ClearingInstruction_4(6);
      noClearingInstructions_1_1_0.set(ClearingInstruction_4);
      ClrInstGrp_NoClearingInstructions_4.insert(ClearingInstruction_4.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_4);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_5;
      FIX::ClearingInstruction ClearingInstruction_5(13);
      noClearingInstructions_1_1_1.set(ClearingInstruction_5);
      ClrInstGrp_NoClearingInstructions_5.insert(ClearingInstruction_5.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_5);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_2;
    FIX::CommCurrency CommCurrency_2("GBP");
    noAllocs_0_1.set(CommCurrency_2);
    CommissionData_2.insert(CommCurrency_2.getString());
    FIX::CommType CommType_2('6');
    noAllocs_0_1.set(CommType_2);
    CommissionData_2.insert(CommType_2.getString());
    FIX::Commission Commission_2;
    Commission_2.setString("16505723");
    noAllocs_0_1.set(Commission_2);
    CommissionData_2.insert(Commission_2.getString());
    FIX::FundRenewWaiv FundRenewWaiv_2('Y');
    noAllocs_0_1.set(FundRenewWaiv_2);
    CommissionData_2.insert(FundRenewWaiv_2.getString());
    all_values.push_back(CommissionData_2);

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_3;
      FIX::MiscFeeAmt MiscFeeAmt_3;
      MiscFeeAmt_3.setString("15580479");
      noMiscFees_1_1_0.set(MiscFeeAmt_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeAmt_3.getString());
      FIX::MiscFeeBasis MiscFeeBasis_3(0);
      noMiscFees_1_1_0.set(MiscFeeBasis_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeBasis_3.getString());
      FIX::MiscFeeCurr MiscFeeCurr_3("EUR");
      noMiscFees_1_1_0.set(MiscFeeCurr_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeCurr_3.getString());
      FIX::MiscFeeType MiscFeeType_3("STRING_3");
      noMiscFees_1_1_0.set(MiscFeeType_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeType_3.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_3);

      noAllocs_0_1.addGroup(noMiscFees_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_1_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_4;
      FIX::MiscFeeAmt MiscFeeAmt_4;
      MiscFeeAmt_4.setString("1833030");
      noMiscFees_1_1_1.set(MiscFeeAmt_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeAmt_4.getString());
      FIX::MiscFeeBasis MiscFeeBasis_4(2);
      noMiscFees_1_1_1.set(MiscFeeBasis_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeBasis_4.getString());
      FIX::MiscFeeCurr MiscFeeCurr_4("CAN");
      noMiscFees_1_1_1.set(MiscFeeCurr_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeCurr_4.getString());
      FIX::MiscFeeType MiscFeeType_4("STRING_9");
      noMiscFees_1_1_1.set(MiscFeeType_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeType_4.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_4);

      noAllocs_0_1.addGroup(noMiscFees_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_1_1_2;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_5;
      FIX::MiscFeeAmt MiscFeeAmt_5;
      MiscFeeAmt_5.setString("602770");
      noMiscFees_1_1_2.set(MiscFeeAmt_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeAmt_5.getString());
      FIX::MiscFeeBasis MiscFeeBasis_5(2);
      noMiscFees_1_1_2.set(MiscFeeBasis_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeBasis_5.getString());
      FIX::MiscFeeCurr MiscFeeCurr_5("USD");
      noMiscFees_1_1_2.set(MiscFeeCurr_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeCurr_5.getString());
      FIX::MiscFeeType MiscFeeType_5("STRING_7");
      noMiscFees_1_1_2.set(MiscFeeType_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeType_5.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_5);

      noAllocs_0_1.addGroup(noMiscFees_1_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_11;
      FIX::NestedPartyID NestedPartyID_11("STRING_1703851000");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_11);
      NestedParties_NoNestedPartyIDs_11.insert(NestedPartyID_11.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_11('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_11);
      NestedParties_NoNestedPartyIDs_11.insert(NestedPartyIDSource_11.getString());
      FIX::NestedPartyRole NestedPartyRole_11(2087864398);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_11);
      NestedParties_NoNestedPartyIDs_11.insert(NestedPartyRole_11.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_11);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_17;
        FIX::NestedPartySubID NestedPartySubID_17("STRING_304841316");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_17);
        NstdPtysSubGrp_NoNestedPartySubIDs_17.insert(NestedPartySubID_17.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_17(1911199192);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_17);
        NstdPtysSubGrp_NoNestedPartySubIDs_17.insert(NestedPartySubIDType_17.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_17);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_18;
        FIX::NestedPartySubID NestedPartySubID_18("STRING_1778917221");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_18);
        NstdPtysSubGrp_NoNestedPartySubIDs_18.insert(NestedPartySubID_18.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_18(653299054);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_18);
        NstdPtysSubGrp_NoNestedPartySubIDs_18.insert(NestedPartySubIDType_18.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_18);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_12;
      FIX::NestedPartyID NestedPartyID_12("STRING_955039019");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_12);
      NestedParties_NoNestedPartyIDs_12.insert(NestedPartyID_12.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_12('2');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_12);
      NestedParties_NoNestedPartyIDs_12.insert(NestedPartyIDSource_12.getString());
      FIX::NestedPartyRole NestedPartyRole_12(297738575);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_12);
      NestedParties_NoNestedPartyIDs_12.insert(NestedPartyRole_12.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_12);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_19;
        FIX::NestedPartySubID NestedPartySubID_19("STRING_1505995066");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_19);
        NstdPtysSubGrp_NoNestedPartySubIDs_19.insert(NestedPartySubID_19.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_19(1497554954);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_19);
        NstdPtysSubGrp_NoNestedPartySubIDs_19.insert(NestedPartySubIDType_19.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_19);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_20;
        FIX::NestedPartySubID NestedPartySubID_20("STRING_581394463");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_20);
        NstdPtysSubGrp_NoNestedPartySubIDs_20.insert(NestedPartySubID_20.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_20(916559413);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_20);
        NstdPtysSubGrp_NoNestedPartySubIDs_20.insert(NestedPartySubIDType_20.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_20);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_13;
      FIX::NestedPartyID NestedPartyID_13("STRING_1521473022");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_13);
      NestedParties_NoNestedPartyIDs_13.insert(NestedPartyID_13.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_13('1');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_13);
      NestedParties_NoNestedPartyIDs_13.insert(NestedPartyIDSource_13.getString());
      FIX::NestedPartyRole NestedPartyRole_13(1150744965);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_13);
      NestedParties_NoNestedPartyIDs_13.insert(NestedPartyRole_13.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_13);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_21;
        FIX::NestedPartySubID NestedPartySubID_21("STRING_1398080408");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_21);
        NstdPtysSubGrp_NoNestedPartySubIDs_21.insert(NestedPartySubID_21.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_21(1725335252);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_21);
        NstdPtysSubGrp_NoNestedPartySubIDs_21.insert(NestedPartySubIDType_21.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_21);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_22;
        FIX::NestedPartySubID NestedPartySubID_22("STRING_1832748836");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_22);
        NstdPtysSubGrp_NoNestedPartySubIDs_22.insert(NestedPartySubID_22.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_22(1296268476);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_22);
        NstdPtysSubGrp_NoNestedPartySubIDs_22.insert(NestedPartySubIDType_22.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_22);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_2;
    FIX::SettlDeliveryType SettlDeliveryType_2(1);
    noAllocs_0_1.set(SettlDeliveryType_2);
    SettlInstructionsData_2.insert(SettlDeliveryType_2.getString());
    FIX::StandInstDbID StandInstDbID_2("STRING_1893025907");
    noAllocs_0_1.set(StandInstDbID_2);
    SettlInstructionsData_2.insert(StandInstDbID_2.getString());
    FIX::StandInstDbName StandInstDbName_2("STRING_927060045");
    noAllocs_0_1.set(StandInstDbName_2);
    SettlInstructionsData_2.insert(StandInstDbName_2.getString());
    FIX::StandInstDbType StandInstDbType_2(0);
    noAllocs_0_1.set(StandInstDbType_2);
    SettlInstructionsData_2.insert(StandInstDbType_2.getString());
    all_values.push_back(SettlInstructionsData_2);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_4;
      FIX::DlvyInstType DlvyInstType_4('C');
      noDlvyInst_1_1_0.set(DlvyInstType_4);
      DlvyInstGrp_NoDlvyInst_4.insert(DlvyInstType_4.getString());
      FIX::SettlInstSource SettlInstSource_4('1');
      noDlvyInst_1_1_0.set(SettlInstSource_4);
      DlvyInstGrp_NoDlvyInst_4.insert(SettlInstSource_4.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_4);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_8;
        FIX::SettlPartyID SettlPartyID_8("STRING_507303123");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_8);
        SettlParties_NoSettlPartyIDs_8.insert(SettlPartyID_8.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_8('2');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_8);
        SettlParties_NoSettlPartyIDs_8.insert(SettlPartyIDSource_8.getString());
        FIX::SettlPartyRole SettlPartyRole_8(1943150290);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_8);
        SettlParties_NoSettlPartyIDs_8.insert(SettlPartyRole_8.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_8);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_16;
          FIX::SettlPartySubID SettlPartySubID_16("STRING_2127427251");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_16);
          SettlPtysSubGrp_NoSettlPartySubIDs_16.insert(SettlPartySubID_16.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_16(1574583863);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_16);
          SettlPtysSubGrp_NoSettlPartySubIDs_16.insert(SettlPartySubIDType_16.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_16);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noDlvyInst_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_1_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_5;
      FIX::DlvyInstType DlvyInstType_5('C');
      noDlvyInst_1_1_1.set(DlvyInstType_5);
      DlvyInstGrp_NoDlvyInst_5.insert(DlvyInstType_5.getString());
      FIX::SettlInstSource SettlInstSource_5('1');
      noDlvyInst_1_1_1.set(SettlInstSource_5);
      DlvyInstGrp_NoDlvyInst_5.insert(SettlInstSource_5.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_5);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_9;
        FIX::SettlPartyID SettlPartyID_9("STRING_1763182069");
        noSettlPartyIDs_1_1_2_0.set(SettlPartyID_9);
        SettlParties_NoSettlPartyIDs_9.insert(SettlPartyID_9.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_9('5');
        noSettlPartyIDs_1_1_2_0.set(SettlPartyIDSource_9);
        SettlParties_NoSettlPartyIDs_9.insert(SettlPartyIDSource_9.getString());
        FIX::SettlPartyRole SettlPartyRole_9(788517956);
        noSettlPartyIDs_1_1_2_0.set(SettlPartyRole_9);
        SettlParties_NoSettlPartyIDs_9.insert(SettlPartyRole_9.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_9);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_17;
          FIX::SettlPartySubID SettlPartySubID_17("STRING_1148120752");
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubID_17);
          SettlPtysSubGrp_NoSettlPartySubIDs_17.insert(SettlPartySubID_17.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_17(1705077370);
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubIDType_17);
          SettlPtysSubGrp_NoSettlPartySubIDs_17.insert(SettlPartySubIDType_17.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_17);

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_18;
          FIX::SettlPartySubID SettlPartySubID_18("STRING_487242749");
          noSettlPartySubIDs_1_1_0_3_1.set(SettlPartySubID_18);
          SettlPtysSubGrp_NoSettlPartySubIDs_18.insert(SettlPartySubID_18.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_18(215414433);
          noSettlPartySubIDs_1_1_0_3_1.set(SettlPartySubIDType_18);
          SettlPtysSubGrp_NoSettlPartySubIDs_18.insert(SettlPartySubIDType_18.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_18);

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_1);
        }
        noDlvyInst_1_1_1.addGroup(noSettlPartyIDs_1_1_2_0);
      }
      noAllocs_0_1.addGroup(noDlvyInst_1_1_1);
    }
    msg.addGroup(noAllocs_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoAllocs noAllocs_0_2;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_3;
    FIX::AllocAccount AllocAccount_5("STRING_708338687");
    noAllocs_0_2.set(AllocAccount_5);
    AllocGrp_NoAllocs_3.insert(AllocAccount_5.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_3;
    AllocAccruedInterestAmt_3.setString("14124597");
    noAllocs_0_2.set(AllocAccruedInterestAmt_3);
    AllocGrp_NoAllocs_3.insert(AllocAccruedInterestAmt_3.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_5(1613494842);
    noAllocs_0_2.set(AllocAcctIDSource_5);
    AllocGrp_NoAllocs_3.insert(AllocAcctIDSource_5.getString());
    FIX::AllocAvgPx AllocAvgPx_3;
    AllocAvgPx_3.setString("2861902");
    noAllocs_0_2.set(AllocAvgPx_3);
    AllocGrp_NoAllocs_3.insert(AllocAvgPx_3.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_5("STRING_1097724921");
    noAllocs_0_2.set(AllocCustomerCapacity_5);
    AllocGrp_NoAllocs_3.insert(AllocCustomerCapacity_5.getString());
    FIX::AllocHandlInst AllocHandlInst_3(2);
    noAllocs_0_2.set(AllocHandlInst_3);
    AllocGrp_NoAllocs_3.insert(AllocHandlInst_3.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_3;
    AllocInterestAtMaturity_3.setString("9230957");
    noAllocs_0_2.set(AllocInterestAtMaturity_3);
    AllocGrp_NoAllocs_3.insert(AllocInterestAtMaturity_3.getString());
    FIX::AllocMethod AllocMethod_3(2);
    noAllocs_0_2.set(AllocMethod_3);
    AllocGrp_NoAllocs_3.insert(AllocMethod_3.getString());
    FIX::AllocNetMoney AllocNetMoney_3;
    AllocNetMoney_3.setString("16893397");
    noAllocs_0_2.set(AllocNetMoney_3);
    AllocGrp_NoAllocs_3.insert(AllocNetMoney_3.getString());
    FIX::AllocPositionEffect AllocPositionEffect_5('F');
    noAllocs_0_2.set(AllocPositionEffect_5);
    AllocGrp_NoAllocs_3.insert(AllocPositionEffect_5.getString());
    FIX::AllocPrice AllocPrice_5;
    AllocPrice_5.setString("21293166");
    noAllocs_0_2.set(AllocPrice_5);
    AllocGrp_NoAllocs_3.insert(AllocPrice_5.getString());
    FIX::AllocQty AllocQty_5;
    AllocQty_5.setString("3112996");
    noAllocs_0_2.set(AllocQty_5);
    AllocGrp_NoAllocs_3.insert(AllocQty_5.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_3;
    AllocSettlCurrAmt_3.setString("6701044");
    noAllocs_0_2.set(AllocSettlCurrAmt_3);
    AllocGrp_NoAllocs_3.insert(AllocSettlCurrAmt_3.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_3("CHF");
    noAllocs_0_2.set(AllocSettlCurrency_3);
    AllocGrp_NoAllocs_3.insert(AllocSettlCurrency_3.getString());
    FIX::AllocSettlInstType AllocSettlInstType_3(1);
    noAllocs_0_2.set(AllocSettlInstType_3);
    AllocGrp_NoAllocs_3.insert(AllocSettlInstType_3.getString());
    FIX::AllocText AllocText_5("STRING_619916483");
    noAllocs_0_2.set(AllocText_5);
    AllocGrp_NoAllocs_3.insert(AllocText_5.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_3("STRING_L");
    noAllocs_0_2.set(ClearingFeeIndicator_3);
    AllocGrp_NoAllocs_3.insert(ClearingFeeIndicator_3.getString());
    FIX::EncodedAllocText EncodedAllocText_5("DATA_866276079");
    noAllocs_0_2.set(EncodedAllocText_5);
    AllocGrp_NoAllocs_3.insert(EncodedAllocText_5.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_5(47016699);
    noAllocs_0_2.set(EncodedAllocTextLen_5);
    AllocGrp_NoAllocs_3.insert(EncodedAllocTextLen_5.getString());
    FIX::IndividualAllocID IndividualAllocID_5("STRING_948707046");
    noAllocs_0_2.set(IndividualAllocID_5);
    AllocGrp_NoAllocs_3.insert(IndividualAllocID_5.getString());
    FIX::IndividualAllocType IndividualAllocType_5(1);
    noAllocs_0_2.set(IndividualAllocType_5);
    AllocGrp_NoAllocs_3.insert(IndividualAllocType_5.getString());
    FIX::MatchStatus MatchStatus_4('0');
    noAllocs_0_2.set(MatchStatus_4);
    AllocGrp_NoAllocs_3.insert(MatchStatus_4.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_3(false);
    noAllocs_0_2.set(NotifyBrokerOfCredit_3);
    AllocGrp_NoAllocs_3.insert(NotifyBrokerOfCredit_3.getString());
    FIX::ProcessCode ProcessCode_3('5');
    noAllocs_0_2.set(ProcessCode_3);
    AllocGrp_NoAllocs_3.insert(ProcessCode_3.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_5("STRING_118057546");
    noAllocs_0_2.set(SecondaryIndividualAllocID_5);
    AllocGrp_NoAllocs_3.insert(SecondaryIndividualAllocID_5.getString());
    FIX::SettlCurrAmt SettlCurrAmt_3;
    SettlCurrAmt_3.setString("16776588");
    noAllocs_0_2.set(SettlCurrAmt_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrAmt_3.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_3;
    SettlCurrFxRate_3.setString("13686220");
    noAllocs_0_2.set(SettlCurrFxRate_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrFxRate_3.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_3('M');
    noAllocs_0_2.set(SettlCurrFxRateCalc_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrFxRateCalc_3.getString());
    FIX::SettlCurrency SettlCurrency_3("USD");
    noAllocs_0_2.set(SettlCurrency_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrency_3.getString());
    all_values.push_back(AllocGrp_NoAllocs_3);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_2_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_6;
      FIX::ClearingInstruction ClearingInstruction_6(12);
      noClearingInstructions_2_1_0.set(ClearingInstruction_6);
      ClrInstGrp_NoClearingInstructions_6.insert(ClearingInstruction_6.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_6);

      noAllocs_0_2.addGroup(noClearingInstructions_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_2_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_7;
      FIX::ClearingInstruction ClearingInstruction_7(10);
      noClearingInstructions_2_1_1.set(ClearingInstruction_7);
      ClrInstGrp_NoClearingInstructions_7.insert(ClearingInstruction_7.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_7);

      noAllocs_0_2.addGroup(noClearingInstructions_2_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_2_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_8;
      FIX::ClearingInstruction ClearingInstruction_8(8);
      noClearingInstructions_2_1_2.set(ClearingInstruction_8);
      ClrInstGrp_NoClearingInstructions_8.insert(ClearingInstruction_8.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_8);

      noAllocs_0_2.addGroup(noClearingInstructions_2_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_3;
    FIX::CommCurrency CommCurrency_3("GBP");
    noAllocs_0_2.set(CommCurrency_3);
    CommissionData_3.insert(CommCurrency_3.getString());
    FIX::CommType CommType_3('6');
    noAllocs_0_2.set(CommType_3);
    CommissionData_3.insert(CommType_3.getString());
    FIX::Commission Commission_3;
    Commission_3.setString("12233861");
    noAllocs_0_2.set(Commission_3);
    CommissionData_3.insert(Commission_3.getString());
    FIX::FundRenewWaiv FundRenewWaiv_3('Y');
    noAllocs_0_2.set(FundRenewWaiv_3);
    CommissionData_3.insert(FundRenewWaiv_3.getString());
    all_values.push_back(CommissionData_3);

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_2_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_6;
      FIX::MiscFeeAmt MiscFeeAmt_6;
      MiscFeeAmt_6.setString("12052191");
      noMiscFees_2_1_0.set(MiscFeeAmt_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeAmt_6.getString());
      FIX::MiscFeeBasis MiscFeeBasis_6(1);
      noMiscFees_2_1_0.set(MiscFeeBasis_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeBasis_6.getString());
      FIX::MiscFeeCurr MiscFeeCurr_6("JPY");
      noMiscFees_2_1_0.set(MiscFeeCurr_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeCurr_6.getString());
      FIX::MiscFeeType MiscFeeType_6("STRING_1");
      noMiscFees_2_1_0.set(MiscFeeType_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeType_6.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_6);

      noAllocs_0_2.addGroup(noMiscFees_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_2_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_7;
      FIX::MiscFeeAmt MiscFeeAmt_7;
      MiscFeeAmt_7.setString("13964863");
      noMiscFees_2_1_1.set(MiscFeeAmt_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeAmt_7.getString());
      FIX::MiscFeeBasis MiscFeeBasis_7(2);
      noMiscFees_2_1_1.set(MiscFeeBasis_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeBasis_7.getString());
      FIX::MiscFeeCurr MiscFeeCurr_7("GBP");
      noMiscFees_2_1_1.set(MiscFeeCurr_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeCurr_7.getString());
      FIX::MiscFeeType MiscFeeType_7("STRING_10");
      noMiscFees_2_1_1.set(MiscFeeType_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeType_7.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_7);

      noAllocs_0_2.addGroup(noMiscFees_2_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_14;
      FIX::NestedPartyID NestedPartyID_14("STRING_1916537436");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_14);
      NestedParties_NoNestedPartyIDs_14.insert(NestedPartyID_14.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_14('2');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_14);
      NestedParties_NoNestedPartyIDs_14.insert(NestedPartyIDSource_14.getString());
      FIX::NestedPartyRole NestedPartyRole_14(1332978276);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_14);
      NestedParties_NoNestedPartyIDs_14.insert(NestedPartyRole_14.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_14);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_23;
        FIX::NestedPartySubID NestedPartySubID_23("STRING_2143999302");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_23);
        NstdPtysSubGrp_NoNestedPartySubIDs_23.insert(NestedPartySubID_23.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_23(863153471);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_23);
        NstdPtysSubGrp_NoNestedPartySubIDs_23.insert(NestedPartySubIDType_23.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_23);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_24;
        FIX::NestedPartySubID NestedPartySubID_24("STRING_1358177225");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_24);
        NstdPtysSubGrp_NoNestedPartySubIDs_24.insert(NestedPartySubID_24.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_24(1819650570);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_24);
        NstdPtysSubGrp_NoNestedPartySubIDs_24.insert(NestedPartySubIDType_24.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_24);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_15;
      FIX::NestedPartyID NestedPartyID_15("STRING_880571416");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_15);
      NestedParties_NoNestedPartyIDs_15.insert(NestedPartyID_15.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_15('7');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_15);
      NestedParties_NoNestedPartyIDs_15.insert(NestedPartyIDSource_15.getString());
      FIX::NestedPartyRole NestedPartyRole_15(56156877);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_15);
      NestedParties_NoNestedPartyIDs_15.insert(NestedPartyRole_15.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_15);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_25;
        FIX::NestedPartySubID NestedPartySubID_25("STRING_1844777827");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_25);
        NstdPtysSubGrp_NoNestedPartySubIDs_25.insert(NestedPartySubID_25.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_25(726337124);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_25);
        NstdPtysSubGrp_NoNestedPartySubIDs_25.insert(NestedPartySubIDType_25.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_25);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_26;
        FIX::NestedPartySubID NestedPartySubID_26("STRING_543084397");
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubID_26);
        NstdPtysSubGrp_NoNestedPartySubIDs_26.insert(NestedPartySubID_26.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_26(1509621571);
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubIDType_26);
        NstdPtysSubGrp_NoNestedPartySubIDs_26.insert(NestedPartySubIDType_26.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_26);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_3;
    FIX::SettlDeliveryType SettlDeliveryType_3(3);
    noAllocs_0_2.set(SettlDeliveryType_3);
    SettlInstructionsData_3.insert(SettlDeliveryType_3.getString());
    FIX::StandInstDbID StandInstDbID_3("STRING_1766470530");
    noAllocs_0_2.set(StandInstDbID_3);
    SettlInstructionsData_3.insert(StandInstDbID_3.getString());
    FIX::StandInstDbName StandInstDbName_3("STRING_716321382");
    noAllocs_0_2.set(StandInstDbName_3);
    SettlInstructionsData_3.insert(StandInstDbName_3.getString());
    FIX::StandInstDbType StandInstDbType_3(2);
    noAllocs_0_2.set(StandInstDbType_3);
    SettlInstructionsData_3.insert(StandInstDbType_3.getString());
    all_values.push_back(SettlInstructionsData_3);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_2_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_6;
      FIX::DlvyInstType DlvyInstType_6('S');
      noDlvyInst_2_1_0.set(DlvyInstType_6);
      DlvyInstGrp_NoDlvyInst_6.insert(DlvyInstType_6.getString());
      FIX::SettlInstSource SettlInstSource_6('3');
      noDlvyInst_2_1_0.set(SettlInstSource_6);
      DlvyInstGrp_NoDlvyInst_6.insert(SettlInstSource_6.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_6);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_10;
        FIX::SettlPartyID SettlPartyID_10("STRING_570923041");
        noSettlPartyIDs_2_0_2_0.set(SettlPartyID_10);
        SettlParties_NoSettlPartyIDs_10.insert(SettlPartyID_10.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_10('1');
        noSettlPartyIDs_2_0_2_0.set(SettlPartyIDSource_10);
        SettlParties_NoSettlPartyIDs_10.insert(SettlPartyIDSource_10.getString());
        FIX::SettlPartyRole SettlPartyRole_10(1208093182);
        noSettlPartyIDs_2_0_2_0.set(SettlPartyRole_10);
        SettlParties_NoSettlPartyIDs_10.insert(SettlPartyRole_10.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_10);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_19;
          FIX::SettlPartySubID SettlPartySubID_19("STRING_2034097700");
          noSettlPartySubIDs_2_0_0_3_0.set(SettlPartySubID_19);
          SettlPtysSubGrp_NoSettlPartySubIDs_19.insert(SettlPartySubID_19.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_19(1757011701);
          noSettlPartySubIDs_2_0_0_3_0.set(SettlPartySubIDType_19);
          SettlPtysSubGrp_NoSettlPartySubIDs_19.insert(SettlPartySubIDType_19.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_19);

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_20;
          FIX::SettlPartySubID SettlPartySubID_20("STRING_1159361613");
          noSettlPartySubIDs_2_0_0_3_1.set(SettlPartySubID_20);
          SettlPtysSubGrp_NoSettlPartySubIDs_20.insert(SettlPartySubID_20.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_20(1803151488);
          noSettlPartySubIDs_2_0_0_3_1.set(SettlPartySubIDType_20);
          SettlPtysSubGrp_NoSettlPartySubIDs_20.insert(SettlPartySubIDType_20.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_20);

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_21;
          FIX::SettlPartySubID SettlPartySubID_21("STRING_1635469809");
          noSettlPartySubIDs_2_0_0_3_2.set(SettlPartySubID_21);
          SettlPtysSubGrp_NoSettlPartySubIDs_21.insert(SettlPartySubID_21.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_21(344856241);
          noSettlPartySubIDs_2_0_0_3_2.set(SettlPartySubIDType_21);
          SettlPtysSubGrp_NoSettlPartySubIDs_21.insert(SettlPartySubIDType_21.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_21);

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_2);
        }
        noDlvyInst_2_1_0.addGroup(noSettlPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_11;
        FIX::SettlPartyID SettlPartyID_11("STRING_1792706618");
        noSettlPartyIDs_2_0_2_1.set(SettlPartyID_11);
        SettlParties_NoSettlPartyIDs_11.insert(SettlPartyID_11.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_11('1');
        noSettlPartyIDs_2_0_2_1.set(SettlPartyIDSource_11);
        SettlParties_NoSettlPartyIDs_11.insert(SettlPartyIDSource_11.getString());
        FIX::SettlPartyRole SettlPartyRole_11(1208009713);
        noSettlPartyIDs_2_0_2_1.set(SettlPartyRole_11);
        SettlParties_NoSettlPartyIDs_11.insert(SettlPartyRole_11.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_11);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_22;
          FIX::SettlPartySubID SettlPartySubID_22("STRING_1304152386");
          noSettlPartySubIDs_2_0_1_3_0.set(SettlPartySubID_22);
          SettlPtysSubGrp_NoSettlPartySubIDs_22.insert(SettlPartySubID_22.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_22(2088581129);
          noSettlPartySubIDs_2_0_1_3_0.set(SettlPartySubIDType_22);
          SettlPtysSubGrp_NoSettlPartySubIDs_22.insert(SettlPartySubIDType_22.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_22);

          noSettlPartyIDs_2_0_2_1.addGroup(noSettlPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_23;
          FIX::SettlPartySubID SettlPartySubID_23("STRING_1798130300");
          noSettlPartySubIDs_2_0_1_3_1.set(SettlPartySubID_23);
          SettlPtysSubGrp_NoSettlPartySubIDs_23.insert(SettlPartySubID_23.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_23(1360309264);
          noSettlPartySubIDs_2_0_1_3_1.set(SettlPartySubIDType_23);
          SettlPtysSubGrp_NoSettlPartySubIDs_23.insert(SettlPartySubIDType_23.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_23);

          noSettlPartyIDs_2_0_2_1.addGroup(noSettlPartySubIDs_2_0_1_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_24;
          FIX::SettlPartySubID SettlPartySubID_24("STRING_104062927");
          noSettlPartySubIDs_2_0_1_3_2.set(SettlPartySubID_24);
          SettlPtysSubGrp_NoSettlPartySubIDs_24.insert(SettlPartySubID_24.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_24(1495424479);
          noSettlPartySubIDs_2_0_1_3_2.set(SettlPartySubIDType_24);
          SettlPtysSubGrp_NoSettlPartySubIDs_24.insert(SettlPartySubIDType_24.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_24);

          noSettlPartyIDs_2_0_2_1.addGroup(noSettlPartySubIDs_2_0_1_3_2);
        }
        noDlvyInst_2_1_0.addGroup(noSettlPartyIDs_2_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_12;
        FIX::SettlPartyID SettlPartyID_12("STRING_2086646388");
        noSettlPartyIDs_2_0_2_2.set(SettlPartyID_12);
        SettlParties_NoSettlPartyIDs_12.insert(SettlPartyID_12.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_12('6');
        noSettlPartyIDs_2_0_2_2.set(SettlPartyIDSource_12);
        SettlParties_NoSettlPartyIDs_12.insert(SettlPartyIDSource_12.getString());
        FIX::SettlPartyRole SettlPartyRole_12(857562402);
        noSettlPartyIDs_2_0_2_2.set(SettlPartyRole_12);
        SettlParties_NoSettlPartyIDs_12.insert(SettlPartyRole_12.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_12);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_25;
          FIX::SettlPartySubID SettlPartySubID_25("STRING_266134206");
          noSettlPartySubIDs_2_0_2_3_0.set(SettlPartySubID_25);
          SettlPtysSubGrp_NoSettlPartySubIDs_25.insert(SettlPartySubID_25.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_25(1573883785);
          noSettlPartySubIDs_2_0_2_3_0.set(SettlPartySubIDType_25);
          SettlPtysSubGrp_NoSettlPartySubIDs_25.insert(SettlPartySubIDType_25.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_25);

          noSettlPartyIDs_2_0_2_2.addGroup(noSettlPartySubIDs_2_0_2_3_0);
        }
        noDlvyInst_2_1_0.addGroup(noSettlPartyIDs_2_0_2_2);
      }
      noAllocs_0_2.addGroup(noDlvyInst_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_2_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_7;
      FIX::DlvyInstType DlvyInstType_7('C');
      noDlvyInst_2_1_1.set(DlvyInstType_7);
      DlvyInstGrp_NoDlvyInst_7.insert(DlvyInstType_7.getString());
      FIX::SettlInstSource SettlInstSource_7('1');
      noDlvyInst_2_1_1.set(SettlInstSource_7);
      DlvyInstGrp_NoDlvyInst_7.insert(SettlInstSource_7.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_7);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_13;
        FIX::SettlPartyID SettlPartyID_13("STRING_645803667");
        noSettlPartyIDs_2_1_2_0.set(SettlPartyID_13);
        SettlParties_NoSettlPartyIDs_13.insert(SettlPartyID_13.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_13('1');
        noSettlPartyIDs_2_1_2_0.set(SettlPartyIDSource_13);
        SettlParties_NoSettlPartyIDs_13.insert(SettlPartyIDSource_13.getString());
        FIX::SettlPartyRole SettlPartyRole_13(231644010);
        noSettlPartyIDs_2_1_2_0.set(SettlPartyRole_13);
        SettlParties_NoSettlPartyIDs_13.insert(SettlPartyRole_13.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_13);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_26;
          FIX::SettlPartySubID SettlPartySubID_26("STRING_857141128");
          noSettlPartySubIDs_2_1_0_3_0.set(SettlPartySubID_26);
          SettlPtysSubGrp_NoSettlPartySubIDs_26.insert(SettlPartySubID_26.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_26(622432814);
          noSettlPartySubIDs_2_1_0_3_0.set(SettlPartySubIDType_26);
          SettlPtysSubGrp_NoSettlPartySubIDs_26.insert(SettlPartySubIDType_26.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_26);

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_27;
          FIX::SettlPartySubID SettlPartySubID_27("STRING_303753037");
          noSettlPartySubIDs_2_1_0_3_1.set(SettlPartySubID_27);
          SettlPtysSubGrp_NoSettlPartySubIDs_27.insert(SettlPartySubID_27.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_27(466669181);
          noSettlPartySubIDs_2_1_0_3_1.set(SettlPartySubIDType_27);
          SettlPtysSubGrp_NoSettlPartySubIDs_27.insert(SettlPartySubIDType_27.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_27);

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_1);
        }
        noDlvyInst_2_1_1.addGroup(noSettlPartyIDs_2_1_2_0);
      }
      noAllocs_0_2.addGroup(noDlvyInst_2_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_2_1_2;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_8;
      FIX::DlvyInstType DlvyInstType_8('S');
      noDlvyInst_2_1_2.set(DlvyInstType_8);
      DlvyInstGrp_NoDlvyInst_8.insert(DlvyInstType_8.getString());
      FIX::SettlInstSource SettlInstSource_8('2');
      noDlvyInst_2_1_2.set(SettlInstSource_8);
      DlvyInstGrp_NoDlvyInst_8.insert(SettlInstSource_8.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_8);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_14;
        FIX::SettlPartyID SettlPartyID_14("STRING_2126650668");
        noSettlPartyIDs_2_2_2_0.set(SettlPartyID_14);
        SettlParties_NoSettlPartyIDs_14.insert(SettlPartyID_14.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_14('1');
        noSettlPartyIDs_2_2_2_0.set(SettlPartyIDSource_14);
        SettlParties_NoSettlPartyIDs_14.insert(SettlPartyIDSource_14.getString());
        FIX::SettlPartyRole SettlPartyRole_14(1586640806);
        noSettlPartyIDs_2_2_2_0.set(SettlPartyRole_14);
        SettlParties_NoSettlPartyIDs_14.insert(SettlPartyRole_14.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_14);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_28;
          FIX::SettlPartySubID SettlPartySubID_28("STRING_608044043");
          noSettlPartySubIDs_2_2_0_3_0.set(SettlPartySubID_28);
          SettlPtysSubGrp_NoSettlPartySubIDs_28.insert(SettlPartySubID_28.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_28(743309545);
          noSettlPartySubIDs_2_2_0_3_0.set(SettlPartySubIDType_28);
          SettlPtysSubGrp_NoSettlPartySubIDs_28.insert(SettlPartySubIDType_28.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_28);

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_29;
          FIX::SettlPartySubID SettlPartySubID_29("STRING_1128274214");
          noSettlPartySubIDs_2_2_0_3_1.set(SettlPartySubID_29);
          SettlPtysSubGrp_NoSettlPartySubIDs_29.insert(SettlPartySubID_29.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_29(258690696);
          noSettlPartySubIDs_2_2_0_3_1.set(SettlPartySubIDType_29);
          SettlPtysSubGrp_NoSettlPartySubIDs_29.insert(SettlPartySubIDType_29.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_29);

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_30;
          FIX::SettlPartySubID SettlPartySubID_30("STRING_2103618809");
          noSettlPartySubIDs_2_2_0_3_2.set(SettlPartySubID_30);
          SettlPtysSubGrp_NoSettlPartySubIDs_30.insert(SettlPartySubID_30.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_30(1232337141);
          noSettlPartySubIDs_2_2_0_3_2.set(SettlPartySubIDType_30);
          SettlPtysSubGrp_NoSettlPartySubIDs_30.insert(SettlPartySubIDType_30.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_30);

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_2);
        }
        noDlvyInst_2_1_2.addGroup(noSettlPartyIDs_2_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_2_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_15;
        FIX::SettlPartyID SettlPartyID_15("STRING_1754115175");
        noSettlPartyIDs_2_2_2_1.set(SettlPartyID_15);
        SettlParties_NoSettlPartyIDs_15.insert(SettlPartyID_15.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_15('2');
        noSettlPartyIDs_2_2_2_1.set(SettlPartyIDSource_15);
        SettlParties_NoSettlPartyIDs_15.insert(SettlPartyIDSource_15.getString());
        FIX::SettlPartyRole SettlPartyRole_15(1879484466);
        noSettlPartyIDs_2_2_2_1.set(SettlPartyRole_15);
        SettlParties_NoSettlPartyIDs_15.insert(SettlPartyRole_15.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_15);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_31;
          FIX::SettlPartySubID SettlPartySubID_31("STRING_6590068");
          noSettlPartySubIDs_2_2_1_3_0.set(SettlPartySubID_31);
          SettlPtysSubGrp_NoSettlPartySubIDs_31.insert(SettlPartySubID_31.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_31(2145618672);
          noSettlPartySubIDs_2_2_1_3_0.set(SettlPartySubIDType_31);
          SettlPtysSubGrp_NoSettlPartySubIDs_31.insert(SettlPartySubIDType_31.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_31);

          noSettlPartyIDs_2_2_2_1.addGroup(noSettlPartySubIDs_2_2_1_3_0);
        }
        noDlvyInst_2_1_2.addGroup(noSettlPartyIDs_2_2_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_2_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_16;
        FIX::SettlPartyID SettlPartyID_16("STRING_2038077715");
        noSettlPartyIDs_2_2_2_2.set(SettlPartyID_16);
        SettlParties_NoSettlPartyIDs_16.insert(SettlPartyID_16.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_16('1');
        noSettlPartyIDs_2_2_2_2.set(SettlPartyIDSource_16);
        SettlParties_NoSettlPartyIDs_16.insert(SettlPartyIDSource_16.getString());
        FIX::SettlPartyRole SettlPartyRole_16(1088475256);
        noSettlPartyIDs_2_2_2_2.set(SettlPartyRole_16);
        SettlParties_NoSettlPartyIDs_16.insert(SettlPartyRole_16.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_16);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_32;
          FIX::SettlPartySubID SettlPartySubID_32("STRING_775864739");
          noSettlPartySubIDs_2_2_2_3_0.set(SettlPartySubID_32);
          SettlPtysSubGrp_NoSettlPartySubIDs_32.insert(SettlPartySubID_32.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_32(737523202);
          noSettlPartySubIDs_2_2_2_3_0.set(SettlPartySubIDType_32);
          SettlPtysSubGrp_NoSettlPartySubIDs_32.insert(SettlPartySubIDType_32.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_32);

          noSettlPartyIDs_2_2_2_2.addGroup(noSettlPartySubIDs_2_2_2_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_33;
          FIX::SettlPartySubID SettlPartySubID_33("STRING_1930442693");
          noSettlPartySubIDs_2_2_2_3_1.set(SettlPartySubID_33);
          SettlPtysSubGrp_NoSettlPartySubIDs_33.insert(SettlPartySubID_33.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_33(1193003725);
          noSettlPartySubIDs_2_2_2_3_1.set(SettlPartySubIDType_33);
          SettlPtysSubGrp_NoSettlPartySubIDs_33.insert(SettlPartySubIDType_33.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_33);

          noSettlPartyIDs_2_2_2_2.addGroup(noSettlPartySubIDs_2_2_2_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_2_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_34;
          FIX::SettlPartySubID SettlPartySubID_34("STRING_1594664330");
          noSettlPartySubIDs_2_2_2_3_2.set(SettlPartySubID_34);
          SettlPtysSubGrp_NoSettlPartySubIDs_34.insert(SettlPartySubID_34.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_34(405391859);
          noSettlPartySubIDs_2_2_2_3_2.set(SettlPartySubIDType_34);
          SettlPtysSubGrp_NoSettlPartySubIDs_34.insert(SettlPartySubIDType_34.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_34);

          noSettlPartyIDs_2_2_2_2.addGroup(noSettlPartySubIDs_2_2_2_3_2);
        }
        noDlvyInst_2_1_2.addGroup(noSettlPartyIDs_2_2_2_2);
      }
      noAllocs_0_2.addGroup(noDlvyInst_2_1_2);
    }
    msg.addGroup(noAllocs_0_2);
  }
  // ExecAllocGrp
  // Group ExecAllocGrp.NoExecs
  {
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_3;
    FIX::ExecID ExecID_3("STRING_2061333511");
    noExecs_0_0.set(ExecID_3);
    ExecAllocGrp_NoExecs_3.insert(ExecID_3.getString());
    FIX::FirmTradeID FirmTradeID_3("STRING_39702638");
    noExecs_0_0.set(FirmTradeID_3);
    ExecAllocGrp_NoExecs_3.insert(FirmTradeID_3.getString());
    FIX::LastCapacity LastCapacity_3('1');
    noExecs_0_0.set(LastCapacity_3);
    ExecAllocGrp_NoExecs_3.insert(LastCapacity_3.getString());
    FIX::LastParPx LastParPx_3;
    LastParPx_3.setString("20159888");
    noExecs_0_0.set(LastParPx_3);
    ExecAllocGrp_NoExecs_3.insert(LastParPx_3.getString());
    FIX::LastPx LastPx_3;
    LastPx_3.setString("188696");
    noExecs_0_0.set(LastPx_3);
    ExecAllocGrp_NoExecs_3.insert(LastPx_3.getString());
    FIX::LastQty LastQty_3;
    LastQty_3.setString("10608214");
    noExecs_0_0.set(LastQty_3);
    ExecAllocGrp_NoExecs_3.insert(LastQty_3.getString());
    FIX::SecondaryExecID SecondaryExecID_3("STRING_1455146012");
    noExecs_0_0.set(SecondaryExecID_3);
    ExecAllocGrp_NoExecs_3.insert(SecondaryExecID_3.getString());
    FIX::TradeID TradeID_3("STRING_1206046392");
    noExecs_0_0.set(TradeID_3);
    ExecAllocGrp_NoExecs_3.insert(TradeID_3.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_3);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_1;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_4;
    FIX::ExecID ExecID_4("STRING_1668865531");
    noExecs_0_1.set(ExecID_4);
    ExecAllocGrp_NoExecs_4.insert(ExecID_4.getString());
    FIX::FirmTradeID FirmTradeID_4("STRING_50971909");
    noExecs_0_1.set(FirmTradeID_4);
    ExecAllocGrp_NoExecs_4.insert(FirmTradeID_4.getString());
    FIX::LastCapacity LastCapacity_4('4');
    noExecs_0_1.set(LastCapacity_4);
    ExecAllocGrp_NoExecs_4.insert(LastCapacity_4.getString());
    FIX::LastParPx LastParPx_4;
    LastParPx_4.setString("19275562");
    noExecs_0_1.set(LastParPx_4);
    ExecAllocGrp_NoExecs_4.insert(LastParPx_4.getString());
    FIX::LastPx LastPx_4;
    LastPx_4.setString("71070");
    noExecs_0_1.set(LastPx_4);
    ExecAllocGrp_NoExecs_4.insert(LastPx_4.getString());
    FIX::LastQty LastQty_4;
    LastQty_4.setString("14191741");
    noExecs_0_1.set(LastQty_4);
    ExecAllocGrp_NoExecs_4.insert(LastQty_4.getString());
    FIX::SecondaryExecID SecondaryExecID_4("STRING_1534187755");
    noExecs_0_1.set(SecondaryExecID_4);
    ExecAllocGrp_NoExecs_4.insert(SecondaryExecID_4.getString());
    FIX::TradeID TradeID_4("STRING_2049888619");
    noExecs_0_1.set(TradeID_4);
    ExecAllocGrp_NoExecs_4.insert(TradeID_4.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_4);

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_2;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_5;
    FIX::ExecID ExecID_5("STRING_1151174918");
    noExecs_0_2.set(ExecID_5);
    ExecAllocGrp_NoExecs_5.insert(ExecID_5.getString());
    FIX::FirmTradeID FirmTradeID_5("STRING_1998381685");
    noExecs_0_2.set(FirmTradeID_5);
    ExecAllocGrp_NoExecs_5.insert(FirmTradeID_5.getString());
    FIX::LastCapacity LastCapacity_5('4');
    noExecs_0_2.set(LastCapacity_5);
    ExecAllocGrp_NoExecs_5.insert(LastCapacity_5.getString());
    FIX::LastParPx LastParPx_5;
    LastParPx_5.setString("11493099");
    noExecs_0_2.set(LastParPx_5);
    ExecAllocGrp_NoExecs_5.insert(LastParPx_5.getString());
    FIX::LastPx LastPx_5;
    LastPx_5.setString("18889757");
    noExecs_0_2.set(LastPx_5);
    ExecAllocGrp_NoExecs_5.insert(LastPx_5.getString());
    FIX::LastQty LastQty_5;
    LastQty_5.setString("390561");
    noExecs_0_2.set(LastQty_5);
    ExecAllocGrp_NoExecs_5.insert(LastQty_5.getString());
    FIX::SecondaryExecID SecondaryExecID_5("STRING_90301551");
    noExecs_0_2.set(SecondaryExecID_5);
    ExecAllocGrp_NoExecs_5.insert(SecondaryExecID_5.getString());
    FIX::TradeID TradeID_5("STRING_1440290787");
    noExecs_0_2.set(TradeID_5);
    ExecAllocGrp_NoExecs_5.insert(TradeID_5.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_5);

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_1;
  FIX::AgreementCurrency AgreementCurrency_1("GBP");
  msg.set(AgreementCurrency_1);
  FinancingDetails_1.insert(AgreementCurrency_1.getString());
  FIX::AgreementDate AgreementDate_1("LOCALMKTDATE_1223249833");
  msg.set(AgreementDate_1);
  FinancingDetails_1.insert(AgreementDate_1.getString());
  FIX::AgreementDesc AgreementDesc_1("STRING_2007924576");
  msg.set(AgreementDesc_1);
  FinancingDetails_1.insert(AgreementDesc_1.getString());
  FIX::AgreementID AgreementID_1("STRING_275005436");
  msg.set(AgreementID_1);
  FinancingDetails_1.insert(AgreementID_1.getString());
  FIX::DeliveryType DeliveryType_1(0);
  msg.set(DeliveryType_1);
  FinancingDetails_1.insert(DeliveryType_1.getString());
  FIX::EndDate EndDate_1("LOCALMKTDATE_1357197690");
  msg.set(EndDate_1);
  FinancingDetails_1.insert(EndDate_1.getString());
  FIX::MarginRatio MarginRatio_1;
  MarginRatio_1.setString("53.000000");
  msg.set(MarginRatio_1);
  FinancingDetails_1.insert(MarginRatio_1.getString());
  FIX::StartDate StartDate_1("LOCALMKTDATE_1668344331");
  msg.set(StartDate_1);
  FinancingDetails_1.insert(StartDate_1.getString());
  FIX::TerminationType TerminationType_1(3);
  msg.set(TerminationType_1);
  FinancingDetails_1.insert(TerminationType_1.getString());
  all_values.push_back(FinancingDetails_1);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AllocationInstructionAlert::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_4;
    FIX::EncodedLegIssuer EncodedLegIssuer_4("DATA_1687213990");
    noLegs_0_0.set(EncodedLegIssuer_4);
    InstrumentLeg_4.insert(EncodedLegIssuer_4.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_4(1726713170);
    noLegs_0_0.set(EncodedLegIssuerLen_4);
    InstrumentLeg_4.insert(EncodedLegIssuerLen_4.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_4("DATA_1512506518");
    noLegs_0_0.set(EncodedLegSecurityDesc_4);
    InstrumentLeg_4.insert(EncodedLegSecurityDesc_4.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_4(745776734);
    noLegs_0_0.set(EncodedLegSecurityDescLen_4);
    InstrumentLeg_4.insert(EncodedLegSecurityDescLen_4.getString());
    FIX::LegCFICode LegCFICode_4("STRING_1248095054");
    noLegs_0_0.set(LegCFICode_4);
    InstrumentLeg_4.insert(LegCFICode_4.getString());
    FIX::LegContractMultiplier LegContractMultiplier_4;
    LegContractMultiplier_4.setString("15634784");
    noLegs_0_0.set(LegContractMultiplier_4);
    InstrumentLeg_4.insert(LegContractMultiplier_4.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_4(932613693);
    noLegs_0_0.set(LegContractMultiplierUnit_4);
    InstrumentLeg_4.insert(LegContractMultiplierUnit_4.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_4("MONTHYEAR_1028167633");
    noLegs_0_0.set(LegContractSettlMonth_4);
    InstrumentLeg_4.insert(LegContractSettlMonth_4.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_4("COUNTRY_1570585498");
    noLegs_0_0.set(LegCountryOfIssue_4);
    InstrumentLeg_4.insert(LegCountryOfIssue_4.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_4("LOCALMKTDATE_204304146");
    noLegs_0_0.set(LegCouponPaymentDate_4);
    InstrumentLeg_4.insert(LegCouponPaymentDate_4.getString());
    FIX::LegCouponRate LegCouponRate_4;
    LegCouponRate_4.setString("17.400000");
    noLegs_0_0.set(LegCouponRate_4);
    InstrumentLeg_4.insert(LegCouponRate_4.getString());
    FIX::LegCreditRating LegCreditRating_4("STRING_1472990470");
    noLegs_0_0.set(LegCreditRating_4);
    InstrumentLeg_4.insert(LegCreditRating_4.getString());
    FIX::LegCurrency LegCurrency_4("CAN");
    noLegs_0_0.set(LegCurrency_4);
    InstrumentLeg_4.insert(LegCurrency_4.getString());
    FIX::LegDatedDate LegDatedDate_4("LOCALMKTDATE_1381985509");
    noLegs_0_0.set(LegDatedDate_4);
    InstrumentLeg_4.insert(LegDatedDate_4.getString());
    FIX::LegExerciseStyle LegExerciseStyle_4(357305359);
    noLegs_0_0.set(LegExerciseStyle_4);
    InstrumentLeg_4.insert(LegExerciseStyle_4.getString());
    FIX::LegFactor LegFactor_4;
    LegFactor_4.setString("72618");
    noLegs_0_0.set(LegFactor_4);
    InstrumentLeg_4.insert(LegFactor_4.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_4(1421041621);
    noLegs_0_0.set(LegFlowScheduleType_4);
    InstrumentLeg_4.insert(LegFlowScheduleType_4.getString());
    FIX::LegInstrRegistry LegInstrRegistry_4("STRING_447606911");
    noLegs_0_0.set(LegInstrRegistry_4);
    InstrumentLeg_4.insert(LegInstrRegistry_4.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_4("LOCALMKTDATE_1447552669");
    noLegs_0_0.set(LegInterestAccrualDate_4);
    InstrumentLeg_4.insert(LegInterestAccrualDate_4.getString());
    FIX::LegIssueDate LegIssueDate_4("LOCALMKTDATE_88478824");
    noLegs_0_0.set(LegIssueDate_4);
    InstrumentLeg_4.insert(LegIssueDate_4.getString());
    FIX::LegIssuer LegIssuer_4("STRING_1275431665");
    noLegs_0_0.set(LegIssuer_4);
    InstrumentLeg_4.insert(LegIssuer_4.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_4("STRING_523318854");
    noLegs_0_0.set(LegLocaleOfIssue_4);
    InstrumentLeg_4.insert(LegLocaleOfIssue_4.getString());
    FIX::LegMaturityDate LegMaturityDate_4("LOCALMKTDATE_2096403400");
    noLegs_0_0.set(LegMaturityDate_4);
    InstrumentLeg_4.insert(LegMaturityDate_4.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_4("MONTHYEAR_1550437101");
    noLegs_0_0.set(LegMaturityMonthYear_4);
    InstrumentLeg_4.insert(LegMaturityMonthYear_4.getString());
    FIX::LegMaturityTime LegMaturityTime_4("TZTIMEONLY_4476898");
    noLegs_0_0.set(LegMaturityTime_4);
    InstrumentLeg_4.insert(LegMaturityTime_4.getString());
    FIX::LegOptAttribute LegOptAttribute_4('1');
    noLegs_0_0.set(LegOptAttribute_4);
    InstrumentLeg_4.insert(LegOptAttribute_4.getString());
    FIX::LegOptionRatio LegOptionRatio_4;
    LegOptionRatio_4.setString("17392924");
    noLegs_0_0.set(LegOptionRatio_4);
    InstrumentLeg_4.insert(LegOptionRatio_4.getString());
    FIX::LegPool LegPool_4("STRING_1672821229");
    noLegs_0_0.set(LegPool_4);
    InstrumentLeg_4.insert(LegPool_4.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_4("STRING_1972009125");
    noLegs_0_0.set(LegPriceUnitOfMeasure_4);
    InstrumentLeg_4.insert(LegPriceUnitOfMeasure_4.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_4;
    LegPriceUnitOfMeasureQty_4.setString("17966529");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_4);
    InstrumentLeg_4.insert(LegPriceUnitOfMeasureQty_4.getString());
    FIX::LegProduct LegProduct_4(1212551571);
    noLegs_0_0.set(LegProduct_4);
    InstrumentLeg_4.insert(LegProduct_4.getString());
    FIX::LegPutOrCall LegPutOrCall_4(1551238647);
    noLegs_0_0.set(LegPutOrCall_4);
    InstrumentLeg_4.insert(LegPutOrCall_4.getString());
    FIX::LegRatioQty LegRatioQty_4;
    LegRatioQty_4.setString("11616757");
    noLegs_0_0.set(LegRatioQty_4);
    InstrumentLeg_4.insert(LegRatioQty_4.getString());
    FIX::LegRedemptionDate LegRedemptionDate_4("LOCALMKTDATE_1958328306");
    noLegs_0_0.set(LegRedemptionDate_4);
    InstrumentLeg_4.insert(LegRedemptionDate_4.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_4("STRING_651850053");
    noLegs_0_0.set(LegRepoCollateralSecurityType_4);
    InstrumentLeg_4.insert(LegRepoCollateralSecurityType_4.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_4;
    LegRepurchaseRate_4.setString("5.580000");
    noLegs_0_0.set(LegRepurchaseRate_4);
    InstrumentLeg_4.insert(LegRepurchaseRate_4.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_4(743458351);
    noLegs_0_0.set(LegRepurchaseTerm_4);
    InstrumentLeg_4.insert(LegRepurchaseTerm_4.getString());
    FIX::LegSecurityDesc LegSecurityDesc_4("STRING_1680017687");
    noLegs_0_0.set(LegSecurityDesc_4);
    InstrumentLeg_4.insert(LegSecurityDesc_4.getString());
    FIX::LegSecurityExchange LegSecurityExchange_4("EXCHANGE_772408");
    noLegs_0_0.set(LegSecurityExchange_4);
    InstrumentLeg_4.insert(LegSecurityExchange_4.getString());
    FIX::LegSecurityID LegSecurityID_4("STRING_947762497");
    noLegs_0_0.set(LegSecurityID_4);
    InstrumentLeg_4.insert(LegSecurityID_4.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_4("STRING_2094889427");
    noLegs_0_0.set(LegSecurityIDSource_4);
    InstrumentLeg_4.insert(LegSecurityIDSource_4.getString());
    FIX::LegSecuritySubType LegSecuritySubType_4("STRING_1473762878");
    noLegs_0_0.set(LegSecuritySubType_4);
    InstrumentLeg_4.insert(LegSecuritySubType_4.getString());
    FIX::LegSecurityType LegSecurityType_4("STRING_155757914");
    noLegs_0_0.set(LegSecurityType_4);
    InstrumentLeg_4.insert(LegSecurityType_4.getString());
    FIX::LegSide LegSide_4('2');
    noLegs_0_0.set(LegSide_4);
    InstrumentLeg_4.insert(LegSide_4.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_4("STRING_708264740");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_4);
    InstrumentLeg_4.insert(LegStateOrProvinceOfIssue_4.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_4("USD");
    noLegs_0_0.set(LegStrikeCurrency_4);
    InstrumentLeg_4.insert(LegStrikeCurrency_4.getString());
    FIX::LegStrikePrice LegStrikePrice_4;
    LegStrikePrice_4.setString("21293063");
    noLegs_0_0.set(LegStrikePrice_4);
    InstrumentLeg_4.insert(LegStrikePrice_4.getString());
    FIX::LegSymbol LegSymbol_4("STRING_960670184");
    noLegs_0_0.set(LegSymbol_4);
    InstrumentLeg_4.insert(LegSymbol_4.getString());
    FIX::LegSymbolSfx LegSymbolSfx_4("STRING_1667990107");
    noLegs_0_0.set(LegSymbolSfx_4);
    InstrumentLeg_4.insert(LegSymbolSfx_4.getString());
    FIX::LegTimeUnit LegTimeUnit_4("STRING_70301537");
    noLegs_0_0.set(LegTimeUnit_4);
    InstrumentLeg_4.insert(LegTimeUnit_4.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_4("STRING_88618201");
    noLegs_0_0.set(LegUnitOfMeasure_4);
    InstrumentLeg_4.insert(LegUnitOfMeasure_4.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_4;
    LegUnitOfMeasureQty_4.setString("438253");
    noLegs_0_0.set(LegUnitOfMeasureQty_4);
    InstrumentLeg_4.insert(LegUnitOfMeasureQty_4.getString());
    all_values.push_back(InstrumentLeg_4);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_6;
      FIX::LegSecurityAltID LegSecurityAltID_6("STRING_1639055303");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_6);
      LegSecAltIDGrp_NoLegSecurityAltID_6.insert(LegSecurityAltID_6.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_6("STRING_48302212");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_6);
      LegSecAltIDGrp_NoLegSecurityAltID_6.insert(LegSecurityAltIDSource_6.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_6);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_7;
      FIX::LegSecurityAltID LegSecurityAltID_7("STRING_1325338731");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_7);
      LegSecAltIDGrp_NoLegSecurityAltID_7.insert(LegSecurityAltID_7.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_7("STRING_1230864056");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_7);
      LegSecAltIDGrp_NoLegSecurityAltID_7.insert(LegSecurityAltIDSource_7.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_7);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_5;
    FIX::EncodedLegIssuer EncodedLegIssuer_5("DATA_1721123441");
    noLegs_0_1.set(EncodedLegIssuer_5);
    InstrumentLeg_5.insert(EncodedLegIssuer_5.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_5(1149864208);
    noLegs_0_1.set(EncodedLegIssuerLen_5);
    InstrumentLeg_5.insert(EncodedLegIssuerLen_5.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_5("DATA_880033316");
    noLegs_0_1.set(EncodedLegSecurityDesc_5);
    InstrumentLeg_5.insert(EncodedLegSecurityDesc_5.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_5(786191365);
    noLegs_0_1.set(EncodedLegSecurityDescLen_5);
    InstrumentLeg_5.insert(EncodedLegSecurityDescLen_5.getString());
    FIX::LegCFICode LegCFICode_5("STRING_553619208");
    noLegs_0_1.set(LegCFICode_5);
    InstrumentLeg_5.insert(LegCFICode_5.getString());
    FIX::LegContractMultiplier LegContractMultiplier_5;
    LegContractMultiplier_5.setString("20417090");
    noLegs_0_1.set(LegContractMultiplier_5);
    InstrumentLeg_5.insert(LegContractMultiplier_5.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_5(597036023);
    noLegs_0_1.set(LegContractMultiplierUnit_5);
    InstrumentLeg_5.insert(LegContractMultiplierUnit_5.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_5("MONTHYEAR_1205469261");
    noLegs_0_1.set(LegContractSettlMonth_5);
    InstrumentLeg_5.insert(LegContractSettlMonth_5.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_5("COUNTRY_471896004");
    noLegs_0_1.set(LegCountryOfIssue_5);
    InstrumentLeg_5.insert(LegCountryOfIssue_5.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_5("LOCALMKTDATE_1340494374");
    noLegs_0_1.set(LegCouponPaymentDate_5);
    InstrumentLeg_5.insert(LegCouponPaymentDate_5.getString());
    FIX::LegCouponRate LegCouponRate_5;
    LegCouponRate_5.setString("33.000000");
    noLegs_0_1.set(LegCouponRate_5);
    InstrumentLeg_5.insert(LegCouponRate_5.getString());
    FIX::LegCreditRating LegCreditRating_5("STRING_472668412");
    noLegs_0_1.set(LegCreditRating_5);
    InstrumentLeg_5.insert(LegCreditRating_5.getString());
    FIX::LegCurrency LegCurrency_5("JPY");
    noLegs_0_1.set(LegCurrency_5);
    InstrumentLeg_5.insert(LegCurrency_5.getString());
    FIX::LegDatedDate LegDatedDate_5("LOCALMKTDATE_1946431291");
    noLegs_0_1.set(LegDatedDate_5);
    InstrumentLeg_5.insert(LegDatedDate_5.getString());
    FIX::LegExerciseStyle LegExerciseStyle_5(296531138);
    noLegs_0_1.set(LegExerciseStyle_5);
    InstrumentLeg_5.insert(LegExerciseStyle_5.getString());
    FIX::LegFactor LegFactor_5;
    LegFactor_5.setString("8985846");
    noLegs_0_1.set(LegFactor_5);
    InstrumentLeg_5.insert(LegFactor_5.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_5(507212383);
    noLegs_0_1.set(LegFlowScheduleType_5);
    InstrumentLeg_5.insert(LegFlowScheduleType_5.getString());
    FIX::LegInstrRegistry LegInstrRegistry_5("STRING_809594411");
    noLegs_0_1.set(LegInstrRegistry_5);
    InstrumentLeg_5.insert(LegInstrRegistry_5.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_5("LOCALMKTDATE_1119022075");
    noLegs_0_1.set(LegInterestAccrualDate_5);
    InstrumentLeg_5.insert(LegInterestAccrualDate_5.getString());
    FIX::LegIssueDate LegIssueDate_5("LOCALMKTDATE_489035096");
    noLegs_0_1.set(LegIssueDate_5);
    InstrumentLeg_5.insert(LegIssueDate_5.getString());
    FIX::LegIssuer LegIssuer_5("STRING_1770264596");
    noLegs_0_1.set(LegIssuer_5);
    InstrumentLeg_5.insert(LegIssuer_5.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_5("STRING_639528535");
    noLegs_0_1.set(LegLocaleOfIssue_5);
    InstrumentLeg_5.insert(LegLocaleOfIssue_5.getString());
    FIX::LegMaturityDate LegMaturityDate_5("LOCALMKTDATE_559336633");
    noLegs_0_1.set(LegMaturityDate_5);
    InstrumentLeg_5.insert(LegMaturityDate_5.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_5("MONTHYEAR_1858882797");
    noLegs_0_1.set(LegMaturityMonthYear_5);
    InstrumentLeg_5.insert(LegMaturityMonthYear_5.getString());
    FIX::LegMaturityTime LegMaturityTime_5("TZTIMEONLY_683353848");
    noLegs_0_1.set(LegMaturityTime_5);
    InstrumentLeg_5.insert(LegMaturityTime_5.getString());
    FIX::LegOptAttribute LegOptAttribute_5('5');
    noLegs_0_1.set(LegOptAttribute_5);
    InstrumentLeg_5.insert(LegOptAttribute_5.getString());
    FIX::LegOptionRatio LegOptionRatio_5;
    LegOptionRatio_5.setString("13504544");
    noLegs_0_1.set(LegOptionRatio_5);
    InstrumentLeg_5.insert(LegOptionRatio_5.getString());
    FIX::LegPool LegPool_5("STRING_731656060");
    noLegs_0_1.set(LegPool_5);
    InstrumentLeg_5.insert(LegPool_5.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_5("STRING_1903896653");
    noLegs_0_1.set(LegPriceUnitOfMeasure_5);
    InstrumentLeg_5.insert(LegPriceUnitOfMeasure_5.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_5;
    LegPriceUnitOfMeasureQty_5.setString("4338348");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_5);
    InstrumentLeg_5.insert(LegPriceUnitOfMeasureQty_5.getString());
    FIX::LegProduct LegProduct_5(305295854);
    noLegs_0_1.set(LegProduct_5);
    InstrumentLeg_5.insert(LegProduct_5.getString());
    FIX::LegPutOrCall LegPutOrCall_5(906277214);
    noLegs_0_1.set(LegPutOrCall_5);
    InstrumentLeg_5.insert(LegPutOrCall_5.getString());
    FIX::LegRatioQty LegRatioQty_5;
    LegRatioQty_5.setString("13138681");
    noLegs_0_1.set(LegRatioQty_5);
    InstrumentLeg_5.insert(LegRatioQty_5.getString());
    FIX::LegRedemptionDate LegRedemptionDate_5("LOCALMKTDATE_1091487219");
    noLegs_0_1.set(LegRedemptionDate_5);
    InstrumentLeg_5.insert(LegRedemptionDate_5.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_5("STRING_1459896422");
    noLegs_0_1.set(LegRepoCollateralSecurityType_5);
    InstrumentLeg_5.insert(LegRepoCollateralSecurityType_5.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_5;
    LegRepurchaseRate_5.setString("36.230000");
    noLegs_0_1.set(LegRepurchaseRate_5);
    InstrumentLeg_5.insert(LegRepurchaseRate_5.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_5(1688523242);
    noLegs_0_1.set(LegRepurchaseTerm_5);
    InstrumentLeg_5.insert(LegRepurchaseTerm_5.getString());
    FIX::LegSecurityDesc LegSecurityDesc_5("STRING_517882035");
    noLegs_0_1.set(LegSecurityDesc_5);
    InstrumentLeg_5.insert(LegSecurityDesc_5.getString());
    FIX::LegSecurityExchange LegSecurityExchange_5("EXCHANGE_1679989627");
    noLegs_0_1.set(LegSecurityExchange_5);
    InstrumentLeg_5.insert(LegSecurityExchange_5.getString());
    FIX::LegSecurityID LegSecurityID_5("STRING_881533968");
    noLegs_0_1.set(LegSecurityID_5);
    InstrumentLeg_5.insert(LegSecurityID_5.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_5("STRING_1255885336");
    noLegs_0_1.set(LegSecurityIDSource_5);
    InstrumentLeg_5.insert(LegSecurityIDSource_5.getString());
    FIX::LegSecuritySubType LegSecuritySubType_5("STRING_5174391");
    noLegs_0_1.set(LegSecuritySubType_5);
    InstrumentLeg_5.insert(LegSecuritySubType_5.getString());
    FIX::LegSecurityType LegSecurityType_5("STRING_1022307192");
    noLegs_0_1.set(LegSecurityType_5);
    InstrumentLeg_5.insert(LegSecurityType_5.getString());
    FIX::LegSide LegSide_5('1');
    noLegs_0_1.set(LegSide_5);
    InstrumentLeg_5.insert(LegSide_5.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_5("STRING_1951605682");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_5);
    InstrumentLeg_5.insert(LegStateOrProvinceOfIssue_5.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_5("EUR");
    noLegs_0_1.set(LegStrikeCurrency_5);
    InstrumentLeg_5.insert(LegStrikeCurrency_5.getString());
    FIX::LegStrikePrice LegStrikePrice_5;
    LegStrikePrice_5.setString("3113344");
    noLegs_0_1.set(LegStrikePrice_5);
    InstrumentLeg_5.insert(LegStrikePrice_5.getString());
    FIX::LegSymbol LegSymbol_5("STRING_2128432742");
    noLegs_0_1.set(LegSymbol_5);
    InstrumentLeg_5.insert(LegSymbol_5.getString());
    FIX::LegSymbolSfx LegSymbolSfx_5("STRING_1811417480");
    noLegs_0_1.set(LegSymbolSfx_5);
    InstrumentLeg_5.insert(LegSymbolSfx_5.getString());
    FIX::LegTimeUnit LegTimeUnit_5("STRING_800369513");
    noLegs_0_1.set(LegTimeUnit_5);
    InstrumentLeg_5.insert(LegTimeUnit_5.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_5("STRING_1751213690");
    noLegs_0_1.set(LegUnitOfMeasure_5);
    InstrumentLeg_5.insert(LegUnitOfMeasure_5.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_5;
    LegUnitOfMeasureQty_5.setString("3034623");
    noLegs_0_1.set(LegUnitOfMeasureQty_5);
    InstrumentLeg_5.insert(LegUnitOfMeasureQty_5.getString());
    all_values.push_back(InstrumentLeg_5);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_8;
      FIX::LegSecurityAltID LegSecurityAltID_8("STRING_1462612839");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_8);
      LegSecAltIDGrp_NoLegSecurityAltID_8.insert(LegSecurityAltID_8.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_8("STRING_986816216");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_8);
      LegSecAltIDGrp_NoLegSecurityAltID_8.insert(LegSecurityAltIDSource_8.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_8);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_6;
    FIX::EncodedLegIssuer EncodedLegIssuer_6("DATA_1938264068");
    noLegs_0_2.set(EncodedLegIssuer_6);
    InstrumentLeg_6.insert(EncodedLegIssuer_6.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_6(665583644);
    noLegs_0_2.set(EncodedLegIssuerLen_6);
    InstrumentLeg_6.insert(EncodedLegIssuerLen_6.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_6("DATA_1718472276");
    noLegs_0_2.set(EncodedLegSecurityDesc_6);
    InstrumentLeg_6.insert(EncodedLegSecurityDesc_6.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_6(1694677074);
    noLegs_0_2.set(EncodedLegSecurityDescLen_6);
    InstrumentLeg_6.insert(EncodedLegSecurityDescLen_6.getString());
    FIX::LegCFICode LegCFICode_6("STRING_1099418505");
    noLegs_0_2.set(LegCFICode_6);
    InstrumentLeg_6.insert(LegCFICode_6.getString());
    FIX::LegContractMultiplier LegContractMultiplier_6;
    LegContractMultiplier_6.setString("20237681");
    noLegs_0_2.set(LegContractMultiplier_6);
    InstrumentLeg_6.insert(LegContractMultiplier_6.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_6(453470640);
    noLegs_0_2.set(LegContractMultiplierUnit_6);
    InstrumentLeg_6.insert(LegContractMultiplierUnit_6.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_6("MONTHYEAR_265803034");
    noLegs_0_2.set(LegContractSettlMonth_6);
    InstrumentLeg_6.insert(LegContractSettlMonth_6.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_6("COUNTRY_967771701");
    noLegs_0_2.set(LegCountryOfIssue_6);
    InstrumentLeg_6.insert(LegCountryOfIssue_6.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_6("LOCALMKTDATE_1913367062");
    noLegs_0_2.set(LegCouponPaymentDate_6);
    InstrumentLeg_6.insert(LegCouponPaymentDate_6.getString());
    FIX::LegCouponRate LegCouponRate_6;
    LegCouponRate_6.setString("66.570000");
    noLegs_0_2.set(LegCouponRate_6);
    InstrumentLeg_6.insert(LegCouponRate_6.getString());
    FIX::LegCreditRating LegCreditRating_6("STRING_508811295");
    noLegs_0_2.set(LegCreditRating_6);
    InstrumentLeg_6.insert(LegCreditRating_6.getString());
    FIX::LegCurrency LegCurrency_6("JPY");
    noLegs_0_2.set(LegCurrency_6);
    InstrumentLeg_6.insert(LegCurrency_6.getString());
    FIX::LegDatedDate LegDatedDate_6("LOCALMKTDATE_1390345264");
    noLegs_0_2.set(LegDatedDate_6);
    InstrumentLeg_6.insert(LegDatedDate_6.getString());
    FIX::LegExerciseStyle LegExerciseStyle_6(1539650785);
    noLegs_0_2.set(LegExerciseStyle_6);
    InstrumentLeg_6.insert(LegExerciseStyle_6.getString());
    FIX::LegFactor LegFactor_6;
    LegFactor_6.setString("10115770");
    noLegs_0_2.set(LegFactor_6);
    InstrumentLeg_6.insert(LegFactor_6.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_6(265168808);
    noLegs_0_2.set(LegFlowScheduleType_6);
    InstrumentLeg_6.insert(LegFlowScheduleType_6.getString());
    FIX::LegInstrRegistry LegInstrRegistry_6("STRING_1333461553");
    noLegs_0_2.set(LegInstrRegistry_6);
    InstrumentLeg_6.insert(LegInstrRegistry_6.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_6("LOCALMKTDATE_815699062");
    noLegs_0_2.set(LegInterestAccrualDate_6);
    InstrumentLeg_6.insert(LegInterestAccrualDate_6.getString());
    FIX::LegIssueDate LegIssueDate_6("LOCALMKTDATE_1584007139");
    noLegs_0_2.set(LegIssueDate_6);
    InstrumentLeg_6.insert(LegIssueDate_6.getString());
    FIX::LegIssuer LegIssuer_6("STRING_2025856958");
    noLegs_0_2.set(LegIssuer_6);
    InstrumentLeg_6.insert(LegIssuer_6.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_6("STRING_1127033479");
    noLegs_0_2.set(LegLocaleOfIssue_6);
    InstrumentLeg_6.insert(LegLocaleOfIssue_6.getString());
    FIX::LegMaturityDate LegMaturityDate_6("LOCALMKTDATE_1564956233");
    noLegs_0_2.set(LegMaturityDate_6);
    InstrumentLeg_6.insert(LegMaturityDate_6.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_6("MONTHYEAR_1689790791");
    noLegs_0_2.set(LegMaturityMonthYear_6);
    InstrumentLeg_6.insert(LegMaturityMonthYear_6.getString());
    FIX::LegMaturityTime LegMaturityTime_6("TZTIMEONLY_1927402993");
    noLegs_0_2.set(LegMaturityTime_6);
    InstrumentLeg_6.insert(LegMaturityTime_6.getString());
    FIX::LegOptAttribute LegOptAttribute_6('1');
    noLegs_0_2.set(LegOptAttribute_6);
    InstrumentLeg_6.insert(LegOptAttribute_6.getString());
    FIX::LegOptionRatio LegOptionRatio_6;
    LegOptionRatio_6.setString("19932531");
    noLegs_0_2.set(LegOptionRatio_6);
    InstrumentLeg_6.insert(LegOptionRatio_6.getString());
    FIX::LegPool LegPool_6("STRING_1139625491");
    noLegs_0_2.set(LegPool_6);
    InstrumentLeg_6.insert(LegPool_6.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_6("STRING_483815466");
    noLegs_0_2.set(LegPriceUnitOfMeasure_6);
    InstrumentLeg_6.insert(LegPriceUnitOfMeasure_6.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_6;
    LegPriceUnitOfMeasureQty_6.setString("8325857");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_6);
    InstrumentLeg_6.insert(LegPriceUnitOfMeasureQty_6.getString());
    FIX::LegProduct LegProduct_6(930405912);
    noLegs_0_2.set(LegProduct_6);
    InstrumentLeg_6.insert(LegProduct_6.getString());
    FIX::LegPutOrCall LegPutOrCall_6(1149399110);
    noLegs_0_2.set(LegPutOrCall_6);
    InstrumentLeg_6.insert(LegPutOrCall_6.getString());
    FIX::LegRatioQty LegRatioQty_6;
    LegRatioQty_6.setString("4035743");
    noLegs_0_2.set(LegRatioQty_6);
    InstrumentLeg_6.insert(LegRatioQty_6.getString());
    FIX::LegRedemptionDate LegRedemptionDate_6("LOCALMKTDATE_477599338");
    noLegs_0_2.set(LegRedemptionDate_6);
    InstrumentLeg_6.insert(LegRedemptionDate_6.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_6("STRING_101333967");
    noLegs_0_2.set(LegRepoCollateralSecurityType_6);
    InstrumentLeg_6.insert(LegRepoCollateralSecurityType_6.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_6;
    LegRepurchaseRate_6.setString("88.370000");
    noLegs_0_2.set(LegRepurchaseRate_6);
    InstrumentLeg_6.insert(LegRepurchaseRate_6.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_6(931069978);
    noLegs_0_2.set(LegRepurchaseTerm_6);
    InstrumentLeg_6.insert(LegRepurchaseTerm_6.getString());
    FIX::LegSecurityDesc LegSecurityDesc_6("STRING_367137001");
    noLegs_0_2.set(LegSecurityDesc_6);
    InstrumentLeg_6.insert(LegSecurityDesc_6.getString());
    FIX::LegSecurityExchange LegSecurityExchange_6("EXCHANGE_1247630539");
    noLegs_0_2.set(LegSecurityExchange_6);
    InstrumentLeg_6.insert(LegSecurityExchange_6.getString());
    FIX::LegSecurityID LegSecurityID_6("STRING_696953392");
    noLegs_0_2.set(LegSecurityID_6);
    InstrumentLeg_6.insert(LegSecurityID_6.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_6("STRING_1841033658");
    noLegs_0_2.set(LegSecurityIDSource_6);
    InstrumentLeg_6.insert(LegSecurityIDSource_6.getString());
    FIX::LegSecuritySubType LegSecuritySubType_6("STRING_1756441834");
    noLegs_0_2.set(LegSecuritySubType_6);
    InstrumentLeg_6.insert(LegSecuritySubType_6.getString());
    FIX::LegSecurityType LegSecurityType_6("STRING_980718841");
    noLegs_0_2.set(LegSecurityType_6);
    InstrumentLeg_6.insert(LegSecurityType_6.getString());
    FIX::LegSide LegSide_6('6');
    noLegs_0_2.set(LegSide_6);
    InstrumentLeg_6.insert(LegSide_6.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_6("STRING_999303450");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_6);
    InstrumentLeg_6.insert(LegStateOrProvinceOfIssue_6.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_6("JPY");
    noLegs_0_2.set(LegStrikeCurrency_6);
    InstrumentLeg_6.insert(LegStrikeCurrency_6.getString());
    FIX::LegStrikePrice LegStrikePrice_6;
    LegStrikePrice_6.setString("12644722");
    noLegs_0_2.set(LegStrikePrice_6);
    InstrumentLeg_6.insert(LegStrikePrice_6.getString());
    FIX::LegSymbol LegSymbol_6("STRING_1706347532");
    noLegs_0_2.set(LegSymbol_6);
    InstrumentLeg_6.insert(LegSymbol_6.getString());
    FIX::LegSymbolSfx LegSymbolSfx_6("STRING_379745088");
    noLegs_0_2.set(LegSymbolSfx_6);
    InstrumentLeg_6.insert(LegSymbolSfx_6.getString());
    FIX::LegTimeUnit LegTimeUnit_6("STRING_700995750");
    noLegs_0_2.set(LegTimeUnit_6);
    InstrumentLeg_6.insert(LegTimeUnit_6.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_6("STRING_1584720843");
    noLegs_0_2.set(LegUnitOfMeasure_6);
    InstrumentLeg_6.insert(LegUnitOfMeasure_6.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_6;
    LegUnitOfMeasureQty_6.setString("15067785");
    noLegs_0_2.set(LegUnitOfMeasureQty_6);
    InstrumentLeg_6.insert(LegUnitOfMeasureQty_6.getString());
    all_values.push_back(InstrumentLeg_6);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_9;
      FIX::LegSecurityAltID LegSecurityAltID_9("STRING_1127027986");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_9);
      LegSecAltIDGrp_NoLegSecurityAltID_9.insert(LegSecurityAltID_9.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_9("STRING_1286697912");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_9);
      LegSecAltIDGrp_NoLegSecurityAltID_9.insert(LegSecurityAltIDSource_9.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_9);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_4;
  FIX::AttachmentPoint AttachmentPoint_4;
  AttachmentPoint_4.setString("46.100000");
  msg.set(AttachmentPoint_4);
  Instrument_4.insert(AttachmentPoint_4.getString());
  FIX::CFICode CFICode_4("STRING_972797496");
  msg.set(CFICode_4);
  Instrument_4.insert(CFICode_4.getString());
  FIX::CPProgram CPProgram_4(2);
  msg.set(CPProgram_4);
  Instrument_4.insert(CPProgram_4.getString());
  FIX::CPRegType CPRegType_4("STRING_1770970076");
  msg.set(CPRegType_4);
  Instrument_4.insert(CPRegType_4.getString());
  FIX::CapPrice CapPrice_4;
  CapPrice_4.setString("18053832");
  msg.set(CapPrice_4);
  Instrument_4.insert(CapPrice_4.getString());
  FIX::ContractMultiplier ContractMultiplier_4;
  ContractMultiplier_4.setString("12092456");
  msg.set(ContractMultiplier_4);
  Instrument_4.insert(ContractMultiplier_4.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_4(0);
  msg.set(ContractMultiplierUnit_4);
  Instrument_4.insert(ContractMultiplierUnit_4.getString());
  FIX::ContractSettlMonth ContractSettlMonth_4("MONTHYEAR_61473930");
  msg.set(ContractSettlMonth_4);
  Instrument_4.insert(ContractSettlMonth_4.getString());
  FIX::CountryOfIssue CountryOfIssue_4("COUNTRY_1686845006");
  msg.set(CountryOfIssue_4);
  Instrument_4.insert(CountryOfIssue_4.getString());
  FIX::CouponPaymentDate CouponPaymentDate_4("LOCALMKTDATE_874219506");
  msg.set(CouponPaymentDate_4);
  Instrument_4.insert(CouponPaymentDate_4.getString());
  FIX::CouponRate CouponRate_4;
  CouponRate_4.setString("27.670000");
  msg.set(CouponRate_4);
  Instrument_4.insert(CouponRate_4.getString());
  FIX::CreditRating CreditRating_4("STRING_470431336");
  msg.set(CreditRating_4);
  Instrument_4.insert(CreditRating_4.getString());
  FIX::DatedDate DatedDate_4("LOCALMKTDATE_1241356508");
  msg.set(DatedDate_4);
  Instrument_4.insert(DatedDate_4.getString());
  FIX::DetachmentPoint DetachmentPoint_4;
  DetachmentPoint_4.setString("33.060000");
  msg.set(DetachmentPoint_4);
  Instrument_4.insert(DetachmentPoint_4.getString());
  FIX::EncodedIssuer EncodedIssuer_4("DATA_1167384728");
  msg.set(EncodedIssuer_4);
  Instrument_4.insert(EncodedIssuer_4.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_4(934906518);
  msg.set(EncodedIssuerLen_4);
  Instrument_4.insert(EncodedIssuerLen_4.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_4("DATA_1197921493");
  msg.set(EncodedSecurityDesc_4);
  Instrument_4.insert(EncodedSecurityDesc_4.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_4(619921);
  msg.set(EncodedSecurityDescLen_4);
  Instrument_4.insert(EncodedSecurityDescLen_4.getString());
  FIX::ExerciseStyle ExerciseStyle_4(0);
  msg.set(ExerciseStyle_4);
  Instrument_4.insert(ExerciseStyle_4.getString());
  FIX::Factor Factor_4;
  Factor_4.setString("497412");
  msg.set(Factor_4);
  Instrument_4.insert(Factor_4.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_4(true);
  msg.set(FlexProductEligibilityIndicator_4);
  Instrument_4.insert(FlexProductEligibilityIndicator_4.getString());
  FIX::FlexibleIndicator FlexibleIndicator_4(false);
  msg.set(FlexibleIndicator_4);
  Instrument_4.insert(FlexibleIndicator_4.getString());
  FIX::FloorPrice FloorPrice_4;
  FloorPrice_4.setString("13142135");
  msg.set(FloorPrice_4);
  Instrument_4.insert(FloorPrice_4.getString());
  FIX::FlowScheduleType FlowScheduleType_4(3);
  msg.set(FlowScheduleType_4);
  Instrument_4.insert(FlowScheduleType_4.getString());
  FIX::InstrRegistry InstrRegistry_4("STRING_1578650279");
  msg.set(InstrRegistry_4);
  Instrument_4.insert(InstrRegistry_4.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_4('2');
  msg.set(InstrmtAssignmentMethod_4);
  Instrument_4.insert(InstrmtAssignmentMethod_4.getString());
  FIX::InterestAccrualDate InterestAccrualDate_4("LOCALMKTDATE_1517090628");
  msg.set(InterestAccrualDate_4);
  Instrument_4.insert(InterestAccrualDate_4.getString());
  FIX::IssueDate IssueDate_4("LOCALMKTDATE_937945198");
  msg.set(IssueDate_4);
  Instrument_4.insert(IssueDate_4.getString());
  FIX::Issuer Issuer_4("STRING_2133677639");
  msg.set(Issuer_4);
  Instrument_4.insert(Issuer_4.getString());
  FIX::ListMethod ListMethod_4(0);
  msg.set(ListMethod_4);
  Instrument_4.insert(ListMethod_4.getString());
  FIX::LocaleOfIssue LocaleOfIssue_4("STRING_77159463");
  msg.set(LocaleOfIssue_4);
  Instrument_4.insert(LocaleOfIssue_4.getString());
  FIX::MaturityDate MaturityDate_4("LOCALMKTDATE_1273348601");
  msg.set(MaturityDate_4);
  Instrument_4.insert(MaturityDate_4.getString());
  FIX::MaturityMonthYear MaturityMonthYear_4("MONTHYEAR_1469432462");
  msg.set(MaturityMonthYear_4);
  Instrument_4.insert(MaturityMonthYear_4.getString());
  FIX::MaturityTime MaturityTime_4("TZTIMEONLY_355999219");
  msg.set(MaturityTime_4);
  Instrument_4.insert(MaturityTime_4.getString());
  FIX::MinPriceIncrement MinPriceIncrement_4;
  MinPriceIncrement_4.setString("8968350");
  msg.set(MinPriceIncrement_4);
  Instrument_4.insert(MinPriceIncrement_4.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_4;
  MinPriceIncrementAmount_4.setString("11273320");
  msg.set(MinPriceIncrementAmount_4);
  Instrument_4.insert(MinPriceIncrementAmount_4.getString());
  FIX::NTPositionLimit NTPositionLimit_4(1565244887);
  msg.set(NTPositionLimit_4);
  Instrument_4.insert(NTPositionLimit_4.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_4;
  NotionalPercentageOutstanding_4.setString("5.690000");
  msg.set(NotionalPercentageOutstanding_4);
  Instrument_4.insert(NotionalPercentageOutstanding_4.getString());
  FIX::OptAttribute OptAttribute_4('1');
  msg.set(OptAttribute_4);
  Instrument_4.insert(OptAttribute_4.getString());
  FIX::OptPayoutAmount OptPayoutAmount_4;
  OptPayoutAmount_4.setString("11046062");
  msg.set(OptPayoutAmount_4);
  Instrument_4.insert(OptPayoutAmount_4.getString());
  FIX::OptPayoutType OptPayoutType_4(2);
  msg.set(OptPayoutType_4);
  Instrument_4.insert(OptPayoutType_4.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_4;
  OriginalNotionalPercentageOutstanding_4.setString("87.350000");
  msg.set(OriginalNotionalPercentageOutstanding_4);
  Instrument_4.insert(OriginalNotionalPercentageOutstanding_4.getString());
  FIX::Pool Pool_4("STRING_1575037581");
  msg.set(Pool_4);
  Instrument_4.insert(Pool_4.getString());
  FIX::PositionLimit PositionLimit_4(1637812935);
  msg.set(PositionLimit_4);
  Instrument_4.insert(PositionLimit_4.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_4("STRING_INX");
  msg.set(PriceQuoteMethod_4);
  Instrument_4.insert(PriceQuoteMethod_4.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_4("STRING_594938661");
  msg.set(PriceUnitOfMeasure_4);
  Instrument_4.insert(PriceUnitOfMeasure_4.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_4;
  PriceUnitOfMeasureQty_4.setString("4252358");
  msg.set(PriceUnitOfMeasureQty_4);
  Instrument_4.insert(PriceUnitOfMeasureQty_4.getString());
  FIX::Product Product_5(10);
  msg.set(Product_5);
  Instrument_4.insert(Product_5.getString());
  FIX::ProductComplex ProductComplex_4("STRING_595558582");
  msg.set(ProductComplex_4);
  Instrument_4.insert(ProductComplex_4.getString());
  FIX::PutOrCall PutOrCall_4(1);
  msg.set(PutOrCall_4);
  Instrument_4.insert(PutOrCall_4.getString());
  FIX::RedemptionDate RedemptionDate_4("LOCALMKTDATE_71797534");
  msg.set(RedemptionDate_4);
  Instrument_4.insert(RedemptionDate_4.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_4("STRING_969064483");
  msg.set(RepoCollateralSecurityType_4);
  Instrument_4.insert(RepoCollateralSecurityType_4.getString());
  FIX::RepurchaseRate RepurchaseRate_4;
  RepurchaseRate_4.setString("65.140000");
  msg.set(RepurchaseRate_4);
  Instrument_4.insert(RepurchaseRate_4.getString());
  FIX::RepurchaseTerm RepurchaseTerm_4(1386011088);
  msg.set(RepurchaseTerm_4);
  Instrument_4.insert(RepurchaseTerm_4.getString());
  FIX::RestructuringType RestructuringType_4("STRING_FR");
  msg.set(RestructuringType_4);
  Instrument_4.insert(RestructuringType_4.getString());
  FIX::SecurityDesc SecurityDesc_4("STRING_542683145");
  msg.set(SecurityDesc_4);
  Instrument_4.insert(SecurityDesc_4.getString());
  FIX::SecurityExchange SecurityExchange_4("EXCHANGE_1253736745");
  msg.set(SecurityExchange_4);
  Instrument_4.insert(SecurityExchange_4.getString());
  FIX::SecurityGroup SecurityGroup_4("STRING_271041248");
  msg.set(SecurityGroup_4);
  Instrument_4.insert(SecurityGroup_4.getString());
  FIX::SecurityID SecurityID_4("STRING_1480628343");
  msg.set(SecurityID_4);
  Instrument_4.insert(SecurityID_4.getString());
  FIX::SecurityIDSource SecurityIDSource_4("STRING_1");
  msg.set(SecurityIDSource_4);
  Instrument_4.insert(SecurityIDSource_4.getString());
  FIX::SecurityStatus SecurityStatus_4("STRING_1");
  msg.set(SecurityStatus_4);
  Instrument_4.insert(SecurityStatus_4.getString());
  FIX::SecuritySubType SecuritySubType_4("STRING_1557787806");
  msg.set(SecuritySubType_4);
  Instrument_4.insert(SecuritySubType_4.getString());
  FIX::SecurityType SecurityType_5("STRING_AMENDED");
  msg.set(SecurityType_5);
  Instrument_4.insert(SecurityType_5.getString());
  FIX::Seniority Seniority_4("STRING_SR");
  msg.set(Seniority_4);
  Instrument_4.insert(Seniority_4.getString());
  FIX::SettlMethod SettlMethod_4('P');
  msg.set(SettlMethod_4);
  Instrument_4.insert(SettlMethod_4.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_4("STRING_1262630720");
  msg.set(SettleOnOpenFlag_4);
  Instrument_4.insert(SettleOnOpenFlag_4.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_4("STRING_1216957066");
  msg.set(StateOrProvinceOfIssue_4);
  Instrument_4.insert(StateOrProvinceOfIssue_4.getString());
  FIX::StrikeCurrency StrikeCurrency_4("CHF");
  msg.set(StrikeCurrency_4);
  Instrument_4.insert(StrikeCurrency_4.getString());
  FIX::StrikeMultiplier StrikeMultiplier_4;
  StrikeMultiplier_4.setString("2582793");
  msg.set(StrikeMultiplier_4);
  Instrument_4.insert(StrikeMultiplier_4.getString());
  FIX::StrikePrice StrikePrice_4;
  StrikePrice_4.setString("2886708");
  msg.set(StrikePrice_4);
  Instrument_4.insert(StrikePrice_4.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_4(4);
  msg.set(StrikePriceBoundaryMethod_4);
  Instrument_4.insert(StrikePriceBoundaryMethod_4.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_4;
  StrikePriceBoundaryPrecision_4.setString("81.200000");
  msg.set(StrikePriceBoundaryPrecision_4);
  Instrument_4.insert(StrikePriceBoundaryPrecision_4.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_4(3);
  msg.set(StrikePriceDeterminationMethod_4);
  Instrument_4.insert(StrikePriceDeterminationMethod_4.getString());
  FIX::StrikeValue StrikeValue_4;
  StrikeValue_4.setString("6716533");
  msg.set(StrikeValue_4);
  Instrument_4.insert(StrikeValue_4.getString());
  FIX::Symbol Symbol_4("STRING_612552866");
  msg.set(Symbol_4);
  Instrument_4.insert(Symbol_4.getString());
  FIX::SymbolSfx SymbolSfx_4("STRING_WI");
  msg.set(SymbolSfx_4);
  Instrument_4.insert(SymbolSfx_4.getString());
  FIX::TimeUnit TimeUnit_4("STRING_Mo");
  msg.set(TimeUnit_4);
  Instrument_4.insert(TimeUnit_4.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_4(1);
  msg.set(UnderlyingPriceDeterminationMethod_4);
  Instrument_4.insert(UnderlyingPriceDeterminationMethod_4.getString());
  FIX::UnitOfMeasure UnitOfMeasure_4("STRING_MMbbl");
  msg.set(UnitOfMeasure_4);
  Instrument_4.insert(UnitOfMeasure_4.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_4;
  UnitOfMeasureQty_4.setString("10095004");
  msg.set(UnitOfMeasureQty_4);
  Instrument_4.insert(UnitOfMeasureQty_4.getString());
  FIX::ValuationMethod ValuationMethod_4("STRING_CDS");
  msg.set(ValuationMethod_4);
  Instrument_4.insert(ValuationMethod_4.getString());
  all_values.push_back(Instrument_4);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationInstructionAlert::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_8;
    FIX::ComplexEventCondition ComplexEventCondition_8(2);
    noComplexEvents_0_0.set(ComplexEventCondition_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventCondition_8.getString());
    FIX::ComplexEventPrice ComplexEventPrice_8;
    ComplexEventPrice_8.setString("20924177");
    noComplexEvents_0_0.set(ComplexEventPrice_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPrice_8.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_8(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPriceBoundaryMethod_8.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_8;
    ComplexEventPriceBoundaryPrecision_8.setString("64.960000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPriceBoundaryPrecision_8.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_8(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPriceTimeType_8.getString());
    FIX::ComplexEventType ComplexEventType_8(7);
    noComplexEvents_0_0.set(ComplexEventType_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventType_8.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_8;
    ComplexOptPayoutAmount_8.setString("19968448");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexOptPayoutAmount_8.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_8);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_17;
      FIX::ComplexEventEndDate ComplexEventEndDate_17(FIX::UTCTIMESTAMP(6, 2, 11, 11, 112007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_17);
      ComplexEventDates_NoComplexEventDates_17.insert(ComplexEventEndDate_17.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_17(FIX::UTCTIMESTAMP(11, 15, 33, 8, 122000));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_17);
      ComplexEventDates_NoComplexEventDates_17.insert(ComplexEventStartDate_17.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_17);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_29;
        FIX::ComplexEventEndTime ComplexEventEndTime_29(FIX::UTCTIMEONLY(23, 34, 38));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_29);
        ComplexEventTimes_NoComplexEventTimes_29.insert(ComplexEventEndTime_29.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_29(FIX::UTCTIMEONLY(19, 28, 54));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_29);
        ComplexEventTimes_NoComplexEventTimes_29.insert(ComplexEventStartTime_29.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_29);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_30;
        FIX::ComplexEventEndTime ComplexEventEndTime_30(FIX::UTCTIMEONLY(19, 55, 58));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_30);
        ComplexEventTimes_NoComplexEventTimes_30.insert(ComplexEventEndTime_30.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_30(FIX::UTCTIMEONLY(8, 9, 24));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_30);
        ComplexEventTimes_NoComplexEventTimes_30.insert(ComplexEventStartTime_30.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_30);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_31;
        FIX::ComplexEventEndTime ComplexEventEndTime_31(FIX::UTCTIMEONLY(15, 18, 43));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_31);
        ComplexEventTimes_NoComplexEventTimes_31.insert(ComplexEventEndTime_31.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_31(FIX::UTCTIMEONLY(9, 24, 27));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_31);
        ComplexEventTimes_NoComplexEventTimes_31.insert(ComplexEventStartTime_31.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_31);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_9;
    FIX::ComplexEventCondition ComplexEventCondition_9(1);
    noComplexEvents_0_1.set(ComplexEventCondition_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventCondition_9.getString());
    FIX::ComplexEventPrice ComplexEventPrice_9;
    ComplexEventPrice_9.setString("17365853");
    noComplexEvents_0_1.set(ComplexEventPrice_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPrice_9.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_9(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPriceBoundaryMethod_9.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_9;
    ComplexEventPriceBoundaryPrecision_9.setString("23.640000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPriceBoundaryPrecision_9.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_9(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPriceTimeType_9.getString());
    FIX::ComplexEventType ComplexEventType_9(5);
    noComplexEvents_0_1.set(ComplexEventType_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventType_9.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_9;
    ComplexOptPayoutAmount_9.setString("6591844");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexOptPayoutAmount_9.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_9);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_18;
      FIX::ComplexEventEndDate ComplexEventEndDate_18(FIX::UTCTIMESTAMP(22, 2, 17, 17, 82006));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_18);
      ComplexEventDates_NoComplexEventDates_18.insert(ComplexEventEndDate_18.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_18(FIX::UTCTIMESTAMP(6, 59, 13, 10, 92005));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_18);
      ComplexEventDates_NoComplexEventDates_18.insert(ComplexEventStartDate_18.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_18);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_32;
        FIX::ComplexEventEndTime ComplexEventEndTime_32(FIX::UTCTIMEONLY(6, 8, 2));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_32);
        ComplexEventTimes_NoComplexEventTimes_32.insert(ComplexEventEndTime_32.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_32(FIX::UTCTIMEONLY(5, 19, 56));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_32);
        ComplexEventTimes_NoComplexEventTimes_32.insert(ComplexEventStartTime_32.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_32);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_33;
        FIX::ComplexEventEndTime ComplexEventEndTime_33(FIX::UTCTIMEONLY(14, 49, 54));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_33);
        ComplexEventTimes_NoComplexEventTimes_33.insert(ComplexEventEndTime_33.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_33(FIX::UTCTIMEONLY(5, 23, 34));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_33);
        ComplexEventTimes_NoComplexEventTimes_33.insert(ComplexEventStartTime_33.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_33);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_19;
      FIX::ComplexEventEndDate ComplexEventEndDate_19(FIX::UTCTIMESTAMP(13, 36, 43, 15, 122005));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_19);
      ComplexEventDates_NoComplexEventDates_19.insert(ComplexEventEndDate_19.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_19(FIX::UTCTIMESTAMP(18, 46, 28, 0, 112013));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_19);
      ComplexEventDates_NoComplexEventDates_19.insert(ComplexEventStartDate_19.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_19);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_34;
        FIX::ComplexEventEndTime ComplexEventEndTime_34(FIX::UTCTIMEONLY(5, 2, 48));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_34);
        ComplexEventTimes_NoComplexEventTimes_34.insert(ComplexEventEndTime_34.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_34(FIX::UTCTIMEONLY(20, 59, 43));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_34);
        ComplexEventTimes_NoComplexEventTimes_34.insert(ComplexEventStartTime_34.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_34);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_20;
      FIX::ComplexEventEndDate ComplexEventEndDate_20(FIX::UTCTIMESTAMP(2, 24, 12, 7, 112005));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_20);
      ComplexEventDates_NoComplexEventDates_20.insert(ComplexEventEndDate_20.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_20(FIX::UTCTIMESTAMP(23, 1, 2, 6, 12007));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_20);
      ComplexEventDates_NoComplexEventDates_20.insert(ComplexEventStartDate_20.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_20);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_35;
        FIX::ComplexEventEndTime ComplexEventEndTime_35(FIX::UTCTIMEONLY(11, 20, 34));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_35);
        ComplexEventTimes_NoComplexEventTimes_35.insert(ComplexEventEndTime_35.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_35(FIX::UTCTIMEONLY(22, 17, 5));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_35);
        ComplexEventTimes_NoComplexEventTimes_35.insert(ComplexEventStartTime_35.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_35);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_36;
        FIX::ComplexEventEndTime ComplexEventEndTime_36(FIX::UTCTIMEONLY(23, 8, 21));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_36);
        ComplexEventTimes_NoComplexEventTimes_36.insert(ComplexEventEndTime_36.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_36(FIX::UTCTIMEONLY(20, 12, 57));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_36);
        ComplexEventTimes_NoComplexEventTimes_36.insert(ComplexEventStartTime_36.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_36);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_37;
        FIX::ComplexEventEndTime ComplexEventEndTime_37(FIX::UTCTIMEONLY(2, 14, 14));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_37);
        ComplexEventTimes_NoComplexEventTimes_37.insert(ComplexEventEndTime_37.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_37(FIX::UTCTIMEONLY(0, 50, 27));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_37);
        ComplexEventTimes_NoComplexEventTimes_37.insert(ComplexEventStartTime_37.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_37);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_10;
    FIX::ComplexEventCondition ComplexEventCondition_10(2);
    noComplexEvents_0_2.set(ComplexEventCondition_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventCondition_10.getString());
    FIX::ComplexEventPrice ComplexEventPrice_10;
    ComplexEventPrice_10.setString("19287642");
    noComplexEvents_0_2.set(ComplexEventPrice_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPrice_10.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_10(5);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPriceBoundaryMethod_10.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_10;
    ComplexEventPriceBoundaryPrecision_10.setString("17.780000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPriceBoundaryPrecision_10.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_10(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPriceTimeType_10.getString());
    FIX::ComplexEventType ComplexEventType_10(6);
    noComplexEvents_0_2.set(ComplexEventType_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventType_10.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_10;
    ComplexOptPayoutAmount_10.setString("8118386");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexOptPayoutAmount_10.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_10);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_21;
      FIX::ComplexEventEndDate ComplexEventEndDate_21(FIX::UTCTIMESTAMP(3, 32, 58, 18, 62003));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_21);
      ComplexEventDates_NoComplexEventDates_21.insert(ComplexEventEndDate_21.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_21(FIX::UTCTIMESTAMP(16, 3, 15, 26, 122004));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_21);
      ComplexEventDates_NoComplexEventDates_21.insert(ComplexEventStartDate_21.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_21);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_38;
        FIX::ComplexEventEndTime ComplexEventEndTime_38(FIX::UTCTIMEONLY(18, 34, 56));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_38);
        ComplexEventTimes_NoComplexEventTimes_38.insert(ComplexEventEndTime_38.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_38(FIX::UTCTIMEONLY(22, 38, 52));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_38);
        ComplexEventTimes_NoComplexEventTimes_38.insert(ComplexEventStartTime_38.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_38);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_39;
        FIX::ComplexEventEndTime ComplexEventEndTime_39(FIX::UTCTIMEONLY(17, 13, 35));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_39);
        ComplexEventTimes_NoComplexEventTimes_39.insert(ComplexEventEndTime_39.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_39(FIX::UTCTIMEONLY(0, 59, 1));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_39);
        ComplexEventTimes_NoComplexEventTimes_39.insert(ComplexEventStartTime_39.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_39);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_40;
        FIX::ComplexEventEndTime ComplexEventEndTime_40(FIX::UTCTIMEONLY(18, 25, 13));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_40);
        ComplexEventTimes_NoComplexEventTimes_40.insert(ComplexEventEndTime_40.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_40(FIX::UTCTIMEONLY(11, 8, 15));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_40);
        ComplexEventTimes_NoComplexEventTimes_40.insert(ComplexEventStartTime_40.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_40);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AllocationInstructionAlert::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_7;
    FIX::EventDate EventDate_7("LOCALMKTDATE_1751366172");
    noEvents_0_0.set(EventDate_7);
    EvntGrp_NoEvents_7.insert(EventDate_7.getString());
    FIX::EventPx EventPx_7;
    EventPx_7.setString("2275644");
    noEvents_0_0.set(EventPx_7);
    EvntGrp_NoEvents_7.insert(EventPx_7.getString());
    FIX::EventText EventText_7("STRING_1558949318");
    noEvents_0_0.set(EventText_7);
    EvntGrp_NoEvents_7.insert(EventText_7.getString());
    FIX::EventTime EventTime_7(FIX::UTCTIMESTAMP(14, 58, 33, 25, 92009));
    noEvents_0_0.set(EventTime_7);
    EvntGrp_NoEvents_7.insert(EventTime_7.getString());
    FIX::EventType EventType_7(18);
    noEvents_0_0.set(EventType_7);
    EvntGrp_NoEvents_7.insert(EventType_7.getString());
    all_values.push_back(EvntGrp_NoEvents_7);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_8;
    FIX::EventDate EventDate_8("LOCALMKTDATE_684225718");
    noEvents_0_1.set(EventDate_8);
    EvntGrp_NoEvents_8.insert(EventDate_8.getString());
    FIX::EventPx EventPx_8;
    EventPx_8.setString("8034892");
    noEvents_0_1.set(EventPx_8);
    EvntGrp_NoEvents_8.insert(EventPx_8.getString());
    FIX::EventText EventText_8("STRING_368565741");
    noEvents_0_1.set(EventText_8);
    EvntGrp_NoEvents_8.insert(EventText_8.getString());
    FIX::EventTime EventTime_8(FIX::UTCTIMESTAMP(8, 35, 3, 8, 122014));
    noEvents_0_1.set(EventTime_8);
    EvntGrp_NoEvents_8.insert(EventTime_8.getString());
    FIX::EventType EventType_8(18);
    noEvents_0_1.set(EventType_8);
    EvntGrp_NoEvents_8.insert(EventType_8.getString());
    all_values.push_back(EvntGrp_NoEvents_8);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_7;
    FIX::InstrumentPartyID InstrumentPartyID_7("STRING_393951764");
    noInstrumentParties_0_0.set(InstrumentPartyID_7);
    InstrumentParties_NoInstrumentParties_7.insert(InstrumentPartyID_7.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_7('4');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_7);
    InstrumentParties_NoInstrumentParties_7.insert(InstrumentPartyIDSource_7.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_7(114564983);
    noInstrumentParties_0_0.set(InstrumentPartyRole_7);
    InstrumentParties_NoInstrumentParties_7.insert(InstrumentPartyRole_7.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_7);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12;
      FIX::InstrumentPartySubID InstrumentPartySubID_12("STRING_835908034");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_12);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12.insert(InstrumentPartySubID_12.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_12(1173053132);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_12);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12.insert(InstrumentPartySubIDType_12.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationInstructionAlert::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_9;
    FIX::SecurityAltID SecurityAltID_9("STRING_1129221821");
    noSecurityAltID_0_0.set(SecurityAltID_9);
    SecAltIDGrp_NoSecurityAltID_9.insert(SecurityAltID_9.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_9("STRING_776935656");
    noSecurityAltID_0_0.set(SecurityAltIDSource_9);
    SecAltIDGrp_NoSecurityAltID_9.insert(SecurityAltIDSource_9.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_9);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_10;
    FIX::SecurityAltID SecurityAltID_10("STRING_757421486");
    noSecurityAltID_0_1.set(SecurityAltID_10);
    SecAltIDGrp_NoSecurityAltID_10.insert(SecurityAltID_10.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_10("STRING_540687491");
    noSecurityAltID_0_1.set(SecurityAltIDSource_10);
    SecAltIDGrp_NoSecurityAltID_10.insert(SecurityAltIDSource_10.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_10);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_8;
  FIX::SecurityXML SecurityXML_9("XMLDATA_336074719");
  msg.set(SecurityXML_9);
  FIX::SecurityXMLLen SecurityXMLLen_4(1842984317);
  msg.set(SecurityXMLLen_4);
  FIX::SecurityXMLSchema SecurityXMLSchema_4("STRING_145409941");
  msg.set(SecurityXMLSchema_4);
  SecurityXML_8.insert(SecurityXMLSchema_4.getString());
  all_values.push_back(SecurityXML_8);

  // InstrumentExtension
  multiset<string> InstrumentExtension_1;
  FIX::DeliveryForm DeliveryForm_1(1);
  msg.set(DeliveryForm_1);
  InstrumentExtension_1.insert(DeliveryForm_1.getString());
  FIX::PctAtRisk PctAtRisk_1;
  PctAtRisk_1.setString("91.020000");
  msg.set(PctAtRisk_1);
  InstrumentExtension_1.insert(PctAtRisk_1.getString());
  all_values.push_back(InstrumentExtension_1);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_2;
    FIX::InstrAttribType InstrAttribType_2(6);
    noInstrAttrib_0_0.set(InstrAttribType_2);
    AttrbGrp_NoInstrAttrib_2.insert(InstrAttribType_2.getString());
    FIX::InstrAttribValue InstrAttribValue_2("STRING_1220974799");
    noInstrAttrib_0_0.set(InstrAttribValue_2);
    AttrbGrp_NoInstrAttrib_2.insert(InstrAttribValue_2.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_2);

    msg.addGroup(noInstrAttrib_0_0);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::AllocationInstructionAlert::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_1;
    FIX::ClOrdID ClOrdID_1("STRING_1606638844");
    noOrders_0_0.set(ClOrdID_1);
    OrdAllocGrp_NoOrders_1.insert(ClOrdID_1.getString());
    FIX::ListID ListID_1("STRING_1589540541");
    noOrders_0_0.set(ListID_1);
    OrdAllocGrp_NoOrders_1.insert(ListID_1.getString());
    FIX::OrderAvgPx OrderAvgPx_1;
    OrderAvgPx_1.setString("16501103");
    noOrders_0_0.set(OrderAvgPx_1);
    OrdAllocGrp_NoOrders_1.insert(OrderAvgPx_1.getString());
    FIX::OrderBookingQty OrderBookingQty_1;
    OrderBookingQty_1.setString("1487773");
    noOrders_0_0.set(OrderBookingQty_1);
    OrdAllocGrp_NoOrders_1.insert(OrderBookingQty_1.getString());
    FIX::OrderID OrderID_1("STRING_2130398696");
    noOrders_0_0.set(OrderID_1);
    OrdAllocGrp_NoOrders_1.insert(OrderID_1.getString());
    FIX::OrderQty OrderQty_1;
    OrderQty_1.setString("19167360");
    noOrders_0_0.set(OrderQty_1);
    OrdAllocGrp_NoOrders_1.insert(OrderQty_1.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_1("STRING_1210171360");
    noOrders_0_0.set(SecondaryClOrdID_1);
    OrdAllocGrp_NoOrders_1.insert(SecondaryClOrdID_1.getString());
    FIX::SecondaryOrderID SecondaryOrderID_1("STRING_1418443259");
    noOrders_0_0.set(SecondaryOrderID_1);
    OrdAllocGrp_NoOrders_1.insert(SecondaryOrderID_1.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_1);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_3;
      FIX::Nested2PartyID Nested2PartyID_3("STRING_2070782998");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_3);
      NestedParties2_NoNested2PartyIDs_3.insert(Nested2PartyID_3.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_3('1');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_3);
      NestedParties2_NoNested2PartyIDs_3.insert(Nested2PartyIDSource_3.getString());
      FIX::Nested2PartyRole Nested2PartyRole_3(518337400);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_3);
      NestedParties2_NoNested2PartyIDs_3.insert(Nested2PartyRole_3.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_3);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_7;
        FIX::Nested2PartySubID Nested2PartySubID_7("STRING_1785332861");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_7);
        NstdPtys2SubGrp_NoNested2PartySubIDs_7.insert(Nested2PartySubID_7.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_7(1594615537);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_7);
        NstdPtys2SubGrp_NoNested2PartySubIDs_7.insert(Nested2PartySubIDType_7.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_7);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_8;
        FIX::Nested2PartySubID Nested2PartySubID_8("STRING_1171501679");
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubID_8);
        NstdPtys2SubGrp_NoNested2PartySubIDs_8.insert(Nested2PartySubID_8.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_8(810902345);
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubIDType_8);
        NstdPtys2SubGrp_NoNested2PartySubIDs_8.insert(Nested2PartySubIDType_8.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_8);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_4;
      FIX::Nested2PartyID Nested2PartyID_4("STRING_2124472601");
      noNested2PartyIDs_0_1_1.set(Nested2PartyID_4);
      NestedParties2_NoNested2PartyIDs_4.insert(Nested2PartyID_4.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_4('1');
      noNested2PartyIDs_0_1_1.set(Nested2PartyIDSource_4);
      NestedParties2_NoNested2PartyIDs_4.insert(Nested2PartyIDSource_4.getString());
      FIX::Nested2PartyRole Nested2PartyRole_4(1587838001);
      noNested2PartyIDs_0_1_1.set(Nested2PartyRole_4);
      NestedParties2_NoNested2PartyIDs_4.insert(Nested2PartyRole_4.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_4);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_9;
        FIX::Nested2PartySubID Nested2PartySubID_9("STRING_693927344");
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubID_9);
        NstdPtys2SubGrp_NoNested2PartySubIDs_9.insert(Nested2PartySubID_9.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_9(1923912721);
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubIDType_9);
        NstdPtys2SubGrp_NoNested2PartySubIDs_9.insert(Nested2PartySubIDType_9.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_9);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_5;
      FIX::Nested2PartyID Nested2PartyID_5("STRING_429911109");
      noNested2PartyIDs_0_1_2.set(Nested2PartyID_5);
      NestedParties2_NoNested2PartyIDs_5.insert(Nested2PartyID_5.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_5('8');
      noNested2PartyIDs_0_1_2.set(Nested2PartyIDSource_5);
      NestedParties2_NoNested2PartyIDs_5.insert(Nested2PartyIDSource_5.getString());
      FIX::Nested2PartyRole Nested2PartyRole_5(2028425325);
      noNested2PartyIDs_0_1_2.set(Nested2PartyRole_5);
      NestedParties2_NoNested2PartyIDs_5.insert(Nested2PartyRole_5.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_5);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_10;
        FIX::Nested2PartySubID Nested2PartySubID_10("STRING_815265371");
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubID_10);
        NstdPtys2SubGrp_NoNested2PartySubIDs_10.insert(Nested2PartySubID_10.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_10(684091243);
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubIDType_10);
        NstdPtys2SubGrp_NoNested2PartySubIDs_10.insert(Nested2PartySubIDType_10.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_10);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_11;
        FIX::Nested2PartySubID Nested2PartySubID_11("STRING_1693085010");
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubID_11);
        NstdPtys2SubGrp_NoNested2PartySubIDs_11.insert(Nested2PartySubID_11.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_11(1475419174);
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubIDType_11);
        NstdPtys2SubGrp_NoNested2PartySubIDs_11.insert(Nested2PartySubIDType_11.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_11);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_2;
    FIX::ClOrdID ClOrdID_2("STRING_143246439");
    noOrders_0_1.set(ClOrdID_2);
    OrdAllocGrp_NoOrders_2.insert(ClOrdID_2.getString());
    FIX::ListID ListID_2("STRING_1135141903");
    noOrders_0_1.set(ListID_2);
    OrdAllocGrp_NoOrders_2.insert(ListID_2.getString());
    FIX::OrderAvgPx OrderAvgPx_2;
    OrderAvgPx_2.setString("9780459");
    noOrders_0_1.set(OrderAvgPx_2);
    OrdAllocGrp_NoOrders_2.insert(OrderAvgPx_2.getString());
    FIX::OrderBookingQty OrderBookingQty_2;
    OrderBookingQty_2.setString("2920238");
    noOrders_0_1.set(OrderBookingQty_2);
    OrdAllocGrp_NoOrders_2.insert(OrderBookingQty_2.getString());
    FIX::OrderID OrderID_2("STRING_1118056951");
    noOrders_0_1.set(OrderID_2);
    OrdAllocGrp_NoOrders_2.insert(OrderID_2.getString());
    FIX::OrderQty OrderQty_2;
    OrderQty_2.setString("7472982");
    noOrders_0_1.set(OrderQty_2);
    OrdAllocGrp_NoOrders_2.insert(OrderQty_2.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_2("STRING_1502195196");
    noOrders_0_1.set(SecondaryClOrdID_2);
    OrdAllocGrp_NoOrders_2.insert(SecondaryClOrdID_2.getString());
    FIX::SecondaryOrderID SecondaryOrderID_2("STRING_389016563");
    noOrders_0_1.set(SecondaryOrderID_2);
    OrdAllocGrp_NoOrders_2.insert(SecondaryOrderID_2.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_2);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_6;
      FIX::Nested2PartyID Nested2PartyID_6("STRING_1425494546");
      noNested2PartyIDs_1_1_0.set(Nested2PartyID_6);
      NestedParties2_NoNested2PartyIDs_6.insert(Nested2PartyID_6.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_6('2');
      noNested2PartyIDs_1_1_0.set(Nested2PartyIDSource_6);
      NestedParties2_NoNested2PartyIDs_6.insert(Nested2PartyIDSource_6.getString());
      FIX::Nested2PartyRole Nested2PartyRole_6(1390021316);
      noNested2PartyIDs_1_1_0.set(Nested2PartyRole_6);
      NestedParties2_NoNested2PartyIDs_6.insert(Nested2PartyRole_6.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_6);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_12;
        FIX::Nested2PartySubID Nested2PartySubID_12("STRING_1697633654");
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubID_12);
        NstdPtys2SubGrp_NoNested2PartySubIDs_12.insert(Nested2PartySubID_12.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_12(837153205);
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubIDType_12);
        NstdPtys2SubGrp_NoNested2PartySubIDs_12.insert(Nested2PartySubIDType_12.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_12);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_0);
    }
    msg.addGroup(noOrders_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoOrders noOrders_0_2;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_3;
    FIX::ClOrdID ClOrdID_3("STRING_785106222");
    noOrders_0_2.set(ClOrdID_3);
    OrdAllocGrp_NoOrders_3.insert(ClOrdID_3.getString());
    FIX::ListID ListID_3("STRING_361052352");
    noOrders_0_2.set(ListID_3);
    OrdAllocGrp_NoOrders_3.insert(ListID_3.getString());
    FIX::OrderAvgPx OrderAvgPx_3;
    OrderAvgPx_3.setString("8141421");
    noOrders_0_2.set(OrderAvgPx_3);
    OrdAllocGrp_NoOrders_3.insert(OrderAvgPx_3.getString());
    FIX::OrderBookingQty OrderBookingQty_3;
    OrderBookingQty_3.setString("9383460");
    noOrders_0_2.set(OrderBookingQty_3);
    OrdAllocGrp_NoOrders_3.insert(OrderBookingQty_3.getString());
    FIX::OrderID OrderID_3("STRING_1948890353");
    noOrders_0_2.set(OrderID_3);
    OrdAllocGrp_NoOrders_3.insert(OrderID_3.getString());
    FIX::OrderQty OrderQty_3;
    OrderQty_3.setString("15485525");
    noOrders_0_2.set(OrderQty_3);
    OrdAllocGrp_NoOrders_3.insert(OrderQty_3.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_3("STRING_1632273419");
    noOrders_0_2.set(SecondaryClOrdID_3);
    OrdAllocGrp_NoOrders_3.insert(SecondaryClOrdID_3.getString());
    FIX::SecondaryOrderID SecondaryOrderID_3("STRING_1725319426");
    noOrders_0_2.set(SecondaryOrderID_3);
    OrdAllocGrp_NoOrders_3.insert(SecondaryOrderID_3.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_3);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_7;
      FIX::Nested2PartyID Nested2PartyID_7("STRING_324127056");
      noNested2PartyIDs_2_1_0.set(Nested2PartyID_7);
      NestedParties2_NoNested2PartyIDs_7.insert(Nested2PartyID_7.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_7('1');
      noNested2PartyIDs_2_1_0.set(Nested2PartyIDSource_7);
      NestedParties2_NoNested2PartyIDs_7.insert(Nested2PartyIDSource_7.getString());
      FIX::Nested2PartyRole Nested2PartyRole_7(303090271);
      noNested2PartyIDs_2_1_0.set(Nested2PartyRole_7);
      NestedParties2_NoNested2PartyIDs_7.insert(Nested2PartyRole_7.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_7);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_13;
        FIX::Nested2PartySubID Nested2PartySubID_13("STRING_142868699");
        noNested2PartySubIDs_2_0_2_0.set(Nested2PartySubID_13);
        NstdPtys2SubGrp_NoNested2PartySubIDs_13.insert(Nested2PartySubID_13.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_13(1996175281);
        noNested2PartySubIDs_2_0_2_0.set(Nested2PartySubIDType_13);
        NstdPtys2SubGrp_NoNested2PartySubIDs_13.insert(Nested2PartySubIDType_13.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_13);

        noNested2PartyIDs_2_1_0.addGroup(noNested2PartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_14;
        FIX::Nested2PartySubID Nested2PartySubID_14("STRING_467327954");
        noNested2PartySubIDs_2_0_2_1.set(Nested2PartySubID_14);
        NstdPtys2SubGrp_NoNested2PartySubIDs_14.insert(Nested2PartySubID_14.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_14(286115138);
        noNested2PartySubIDs_2_0_2_1.set(Nested2PartySubIDType_14);
        NstdPtys2SubGrp_NoNested2PartySubIDs_14.insert(Nested2PartySubIDType_14.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_14);

        noNested2PartyIDs_2_1_0.addGroup(noNested2PartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_15;
        FIX::Nested2PartySubID Nested2PartySubID_15("STRING_983833537");
        noNested2PartySubIDs_2_0_2_2.set(Nested2PartySubID_15);
        NstdPtys2SubGrp_NoNested2PartySubIDs_15.insert(Nested2PartySubID_15.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_15(1445373879);
        noNested2PartySubIDs_2_0_2_2.set(Nested2PartySubIDType_15);
        NstdPtys2SubGrp_NoNested2PartySubIDs_15.insert(Nested2PartySubIDType_15.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_15);

        noNested2PartyIDs_2_1_0.addGroup(noNested2PartySubIDs_2_0_2_2);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_8;
      FIX::Nested2PartyID Nested2PartyID_8("STRING_578138974");
      noNested2PartyIDs_2_1_1.set(Nested2PartyID_8);
      NestedParties2_NoNested2PartyIDs_8.insert(Nested2PartyID_8.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_8('2');
      noNested2PartyIDs_2_1_1.set(Nested2PartyIDSource_8);
      NestedParties2_NoNested2PartyIDs_8.insert(Nested2PartyIDSource_8.getString());
      FIX::Nested2PartyRole Nested2PartyRole_8(45188511);
      noNested2PartyIDs_2_1_1.set(Nested2PartyRole_8);
      NestedParties2_NoNested2PartyIDs_8.insert(Nested2PartyRole_8.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_8);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_16;
        FIX::Nested2PartySubID Nested2PartySubID_16("STRING_343423403");
        noNested2PartySubIDs_2_1_2_0.set(Nested2PartySubID_16);
        NstdPtys2SubGrp_NoNested2PartySubIDs_16.insert(Nested2PartySubID_16.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_16(916872426);
        noNested2PartySubIDs_2_1_2_0.set(Nested2PartySubIDType_16);
        NstdPtys2SubGrp_NoNested2PartySubIDs_16.insert(Nested2PartySubIDType_16.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_16);

        noNested2PartyIDs_2_1_1.addGroup(noNested2PartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_17;
        FIX::Nested2PartySubID Nested2PartySubID_17("STRING_1358345069");
        noNested2PartySubIDs_2_1_2_1.set(Nested2PartySubID_17);
        NstdPtys2SubGrp_NoNested2PartySubIDs_17.insert(Nested2PartySubID_17.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_17(255724196);
        noNested2PartySubIDs_2_1_2_1.set(Nested2PartySubIDType_17);
        NstdPtys2SubGrp_NoNested2PartySubIDs_17.insert(Nested2PartySubIDType_17.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_17);

        noNested2PartyIDs_2_1_1.addGroup(noNested2PartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_18;
        FIX::Nested2PartySubID Nested2PartySubID_18("STRING_159410094");
        noNested2PartySubIDs_2_1_2_2.set(Nested2PartySubID_18);
        NstdPtys2SubGrp_NoNested2PartySubIDs_18.insert(Nested2PartySubID_18.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_18(971949613);
        noNested2PartySubIDs_2_1_2_2.set(Nested2PartySubIDType_18);
        NstdPtys2SubGrp_NoNested2PartySubIDs_18.insert(Nested2PartySubIDType_18.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_18);

        noNested2PartyIDs_2_1_1.addGroup(noNested2PartySubIDs_2_1_2_2);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_9;
      FIX::Nested2PartyID Nested2PartyID_9("STRING_1953357851");
      noNested2PartyIDs_2_1_2.set(Nested2PartyID_9);
      NestedParties2_NoNested2PartyIDs_9.insert(Nested2PartyID_9.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_9('9');
      noNested2PartyIDs_2_1_2.set(Nested2PartyIDSource_9);
      NestedParties2_NoNested2PartyIDs_9.insert(Nested2PartyIDSource_9.getString());
      FIX::Nested2PartyRole Nested2PartyRole_9(1757055835);
      noNested2PartyIDs_2_1_2.set(Nested2PartyRole_9);
      NestedParties2_NoNested2PartyIDs_9.insert(Nested2PartyRole_9.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_9);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_19;
        FIX::Nested2PartySubID Nested2PartySubID_19("STRING_1810705459");
        noNested2PartySubIDs_2_2_2_0.set(Nested2PartySubID_19);
        NstdPtys2SubGrp_NoNested2PartySubIDs_19.insert(Nested2PartySubID_19.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_19(547918262);
        noNested2PartySubIDs_2_2_2_0.set(Nested2PartySubIDType_19);
        NstdPtys2SubGrp_NoNested2PartySubIDs_19.insert(Nested2PartySubIDType_19.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_19);

        noNested2PartyIDs_2_1_2.addGroup(noNested2PartySubIDs_2_2_2_0);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_2);
    }
    msg.addGroup(noOrders_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationInstructionAlert::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_8;
    FIX::PartyID PartyID_8("STRING_1211774410");
    noPartyIDs_0_0.set(PartyID_8);
    Parties_NoPartyIDs_8.insert(PartyID_8.getString());
    FIX::PartyIDSource PartyIDSource_8('H');
    noPartyIDs_0_0.set(PartyIDSource_8);
    Parties_NoPartyIDs_8.insert(PartyIDSource_8.getString());
    FIX::PartyRole PartyRole_8(85);
    noPartyIDs_0_0.set(PartyRole_8);
    Parties_NoPartyIDs_8.insert(PartyRole_8.getString());
    all_values.push_back(Parties_NoPartyIDs_8);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_19;
      FIX::PartySubID PartySubID_19("STRING_356835090");
      noPartySubIDs_0_1_0.set(PartySubID_19);
      PtysSubGrp_NoPartySubIDs_19.insert(PartySubID_19.getString());
      FIX::PartySubIDType PartySubIDType_19(19);
      noPartySubIDs_0_1_0.set(PartySubIDType_19);
      PtysSubGrp_NoPartySubIDs_19.insert(PartySubIDType_19.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_19);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_20;
      FIX::PartySubID PartySubID_20("STRING_1345844741");
      noPartySubIDs_0_1_1.set(PartySubID_20);
      PtysSubGrp_NoPartySubIDs_20.insert(PartySubID_20.getString());
      FIX::PartySubIDType PartySubIDType_20(27);
      noPartySubIDs_0_1_1.set(PartySubIDType_20);
      PtysSubGrp_NoPartySubIDs_20.insert(PartySubIDType_20.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_20);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_9;
    FIX::PartyID PartyID_9("STRING_1295298842");
    noPartyIDs_0_1.set(PartyID_9);
    Parties_NoPartyIDs_9.insert(PartyID_9.getString());
    FIX::PartyIDSource PartyIDSource_9('G');
    noPartyIDs_0_1.set(PartyIDSource_9);
    Parties_NoPartyIDs_9.insert(PartyIDSource_9.getString());
    FIX::PartyRole PartyRole_9(33);
    noPartyIDs_0_1.set(PartyRole_9);
    Parties_NoPartyIDs_9.insert(PartyRole_9.getString());
    all_values.push_back(Parties_NoPartyIDs_9);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_21;
      FIX::PartySubID PartySubID_21("STRING_30886263");
      noPartySubIDs_1_1_0.set(PartySubID_21);
      PtysSubGrp_NoPartySubIDs_21.insert(PartySubID_21.getString());
      FIX::PartySubIDType PartySubIDType_21(13);
      noPartySubIDs_1_1_0.set(PartySubIDType_21);
      PtysSubGrp_NoPartySubIDs_21.insert(PartySubIDType_21.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_21);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_22;
      FIX::PartySubID PartySubID_22("STRING_12069307");
      noPartySubIDs_1_1_1.set(PartySubID_22);
      PtysSubGrp_NoPartySubIDs_22.insert(PartySubID_22.getString());
      FIX::PartySubIDType PartySubIDType_22(19);
      noPartySubIDs_1_1_1.set(PartySubIDType_22);
      PtysSubGrp_NoPartySubIDs_22.insert(PartySubIDType_22.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_22);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_10;
    FIX::PartyID PartyID_10("STRING_1306634214");
    noPartyIDs_0_2.set(PartyID_10);
    Parties_NoPartyIDs_10.insert(PartyID_10.getString());
    FIX::PartyIDSource PartyIDSource_10('C');
    noPartyIDs_0_2.set(PartyIDSource_10);
    Parties_NoPartyIDs_10.insert(PartyIDSource_10.getString());
    FIX::PartyRole PartyRole_10(65);
    noPartyIDs_0_2.set(PartyRole_10);
    Parties_NoPartyIDs_10.insert(PartyRole_10.getString());
    all_values.push_back(Parties_NoPartyIDs_10);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_23;
      FIX::PartySubID PartySubID_23("STRING_1303264899");
      noPartySubIDs_2_1_0.set(PartySubID_23);
      PtysSubGrp_NoPartySubIDs_23.insert(PartySubID_23.getString());
      FIX::PartySubIDType PartySubIDType_23(13);
      noPartySubIDs_2_1_0.set(PartySubIDType_23);
      PtysSubGrp_NoPartySubIDs_23.insert(PartySubIDType_23.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_23);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_24;
      FIX::PartySubID PartySubID_24("STRING_235433087");
      noPartySubIDs_2_1_1.set(PartySubID_24);
      PtysSubGrp_NoPartySubIDs_24.insert(PartySubID_24.getString());
      FIX::PartySubIDType PartySubIDType_24(9);
      noPartySubIDs_2_1_1.set(PartySubIDType_24);
      PtysSubGrp_NoPartySubIDs_24.insert(PartySubIDType_24.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_24);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationInstructionAlert::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_2;
    FIX::PosAmt PosAmt_2;
    PosAmt_2.setString("12319963");
    noPosAmt_0_0.set(PosAmt_2);
    PositionAmountData_NoPosAmt_2.insert(PosAmt_2.getString());
    FIX::PosAmtType PosAmtType_2("STRING_PREM");
    noPosAmt_0_0.set(PosAmtType_2);
    PositionAmountData_NoPosAmt_2.insert(PosAmtType_2.getString());
    FIX::PositionCurrency PositionCurrency_2("STRING_557241462");
    noPosAmt_0_0.set(PositionCurrency_2);
    PositionAmountData_NoPosAmt_2.insert(PositionCurrency_2.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_2);

    msg.addGroup(noPosAmt_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_1;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_1("JPY");
  msg.set(BenchmarkCurveCurrency_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkCurveCurrency_1.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_1("STRING_MuniAAA");
  msg.set(BenchmarkCurveName_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkCurveName_1.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_1("STRING_2106992608");
  msg.set(BenchmarkCurvePoint_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkCurvePoint_1.getString());
  FIX::BenchmarkPrice BenchmarkPrice_1;
  BenchmarkPrice_1.setString("3179293");
  msg.set(BenchmarkPrice_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkPrice_1.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_1(71743761);
  msg.set(BenchmarkPriceType_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkPriceType_1.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_1("STRING_1002263430");
  msg.set(BenchmarkSecurityID_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkSecurityID_1.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_1("STRING_674764438");
  msg.set(BenchmarkSecurityIDSource_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkSecurityIDSource_1.getString());
  FIX::Spread Spread_1;
  Spread_1.setString("12241739");
  msg.set(Spread_1);
  SpreadOrBenchmarkCurveData_1.insert(Spread_1.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_1);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationInstructionAlert::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_1;
    FIX::StipulationType StipulationType_1("STRING_TRADERCREDIT");
    noStipulations_0_0.set(StipulationType_1);
    Stipulations_NoStipulations_1.insert(StipulationType_1.getString());
    FIX::StipulationValue StipulationValue_1("STRING_371989098");
    noStipulations_0_0.set(StipulationValue_1);
    Stipulations_NoStipulations_1.insert(StipulationValue_1.getString());
    all_values.push_back(Stipulations_NoStipulations_1);

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationInstructionAlert::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_2;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_2("DATA_1987063779");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingIssuer_2.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_2(1953403079);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingIssuerLen_2.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_2("DATA_1426047161");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingSecurityDesc_2.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_2(1101025834);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingSecurityDescLen_2.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_2;
    UnderlyingAdjustedQuantity_2.setString("19654723");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_2);
    UnderlyingInstrument_2.insert(UnderlyingAdjustedQuantity_2.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_2;
    UnderlyingAllocationPercent_2.setString("2.650000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_2);
    UnderlyingInstrument_2.insert(UnderlyingAllocationPercent_2.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_2;
    UnderlyingAttachmentPoint_2.setString("64.000000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_2);
    UnderlyingInstrument_2.insert(UnderlyingAttachmentPoint_2.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_2("STRING_1910392216");
    noUnderlyings_0_0.set(UnderlyingCFICode_2);
    UnderlyingInstrument_2.insert(UnderlyingCFICode_2.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_2("STRING_1740056772");
    noUnderlyings_0_0.set(UnderlyingCPProgram_2);
    UnderlyingInstrument_2.insert(UnderlyingCPProgram_2.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_2("STRING_336199392");
    noUnderlyings_0_0.set(UnderlyingCPRegType_2);
    UnderlyingInstrument_2.insert(UnderlyingCPRegType_2.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_2;
    UnderlyingCapValue_2.setString("10661734");
    noUnderlyings_0_0.set(UnderlyingCapValue_2);
    UnderlyingInstrument_2.insert(UnderlyingCapValue_2.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_2;
    UnderlyingCashAmount_2.setString("1770138");
    noUnderlyings_0_0.set(UnderlyingCashAmount_2);
    UnderlyingInstrument_2.insert(UnderlyingCashAmount_2.getString());
    FIX::UnderlyingCashType UnderlyingCashType_2("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_2);
    UnderlyingInstrument_2.insert(UnderlyingCashType_2.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_2;
    UnderlyingContractMultiplier_2.setString("11939043");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_2);
    UnderlyingInstrument_2.insert(UnderlyingContractMultiplier_2.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_2(567328735);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_2);
    UnderlyingInstrument_2.insert(UnderlyingContractMultiplierUnit_2.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_2("COUNTRY_1803628866");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_2);
    UnderlyingInstrument_2.insert(UnderlyingCountryOfIssue_2.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_2("LOCALMKTDATE_931207384");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_2);
    UnderlyingInstrument_2.insert(UnderlyingCouponPaymentDate_2.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_2;
    UnderlyingCouponRate_2.setString("1.970000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_2);
    UnderlyingInstrument_2.insert(UnderlyingCouponRate_2.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_2("STRING_551363416");
    noUnderlyings_0_0.set(UnderlyingCreditRating_2);
    UnderlyingInstrument_2.insert(UnderlyingCreditRating_2.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_2("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_2);
    UnderlyingInstrument_2.insert(UnderlyingCurrency_2.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_2;
    UnderlyingCurrentValue_2.setString("5108723");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_2);
    UnderlyingInstrument_2.insert(UnderlyingCurrentValue_2.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_2;
    UnderlyingDetachmentPoint_2.setString("80.460000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_2);
    UnderlyingInstrument_2.insert(UnderlyingDetachmentPoint_2.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_2;
    UnderlyingDirtyPrice_2.setString("17218886");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_2);
    UnderlyingInstrument_2.insert(UnderlyingDirtyPrice_2.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_2;
    UnderlyingEndPrice_2.setString("15131358");
    noUnderlyings_0_0.set(UnderlyingEndPrice_2);
    UnderlyingInstrument_2.insert(UnderlyingEndPrice_2.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_2;
    UnderlyingEndValue_2.setString("616388");
    noUnderlyings_0_0.set(UnderlyingEndValue_2);
    UnderlyingInstrument_2.insert(UnderlyingEndValue_2.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_2(798578938);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_2);
    UnderlyingInstrument_2.insert(UnderlyingExerciseStyle_2.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_2;
    UnderlyingFXRate_2.setString("17137603");
    noUnderlyings_0_0.set(UnderlyingFXRate_2);
    UnderlyingInstrument_2.insert(UnderlyingFXRate_2.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_2('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_2);
    UnderlyingInstrument_2.insert(UnderlyingFXRateCalc_2.getString());
    FIX::UnderlyingFactor UnderlyingFactor_2;
    UnderlyingFactor_2.setString("11705680");
    noUnderlyings_0_0.set(UnderlyingFactor_2);
    UnderlyingInstrument_2.insert(UnderlyingFactor_2.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_2(961437579);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_2);
    UnderlyingInstrument_2.insert(UnderlyingFlowScheduleType_2.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_2("STRING_2072210923");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_2);
    UnderlyingInstrument_2.insert(UnderlyingInstrRegistry_2.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_2("LOCALMKTDATE_976487467");
    noUnderlyings_0_0.set(UnderlyingIssueDate_2);
    UnderlyingInstrument_2.insert(UnderlyingIssueDate_2.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_2("STRING_240001092");
    noUnderlyings_0_0.set(UnderlyingIssuer_2);
    UnderlyingInstrument_2.insert(UnderlyingIssuer_2.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_2("STRING_1025753109");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_2);
    UnderlyingInstrument_2.insert(UnderlyingLocaleOfIssue_2.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_2("LOCALMKTDATE_794476205");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_2);
    UnderlyingInstrument_2.insert(UnderlyingMaturityDate_2.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_2("MONTHYEAR_1651341357");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_2);
    UnderlyingInstrument_2.insert(UnderlyingMaturityMonthYear_2.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_2("TZTIMEONLY_1285929509");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_2);
    UnderlyingInstrument_2.insert(UnderlyingMaturityTime_2.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_2;
    UnderlyingNotionalPercentageOutstanding_2.setString("47.730000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_2);
    UnderlyingInstrument_2.insert(UnderlyingNotionalPercentageOutstanding_2.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_2('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_2);
    UnderlyingInstrument_2.insert(UnderlyingOptAttribute_2.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_2;
    UnderlyingOriginalNotionalPercentageOutstanding_2.setString("89.010000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_2);
    UnderlyingInstrument_2.insert(UnderlyingOriginalNotionalPercentageOutstanding_2.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_2("STRING_1623558241");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_2);
    UnderlyingInstrument_2.insert(UnderlyingPriceUnitOfMeasure_2.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_2;
    UnderlyingPriceUnitOfMeasureQty_2.setString("14209283");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_2);
    UnderlyingInstrument_2.insert(UnderlyingPriceUnitOfMeasureQty_2.getString());
    FIX::UnderlyingProduct UnderlyingProduct_2(46277733);
    noUnderlyings_0_0.set(UnderlyingProduct_2);
    UnderlyingInstrument_2.insert(UnderlyingProduct_2.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_2(669978925);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_2);
    UnderlyingInstrument_2.insert(UnderlyingPutOrCall_2.getString());
    FIX::UnderlyingPx UnderlyingPx_2;
    UnderlyingPx_2.setString("19882570");
    noUnderlyings_0_0.set(UnderlyingPx_2);
    UnderlyingInstrument_2.insert(UnderlyingPx_2.getString());
    FIX::UnderlyingQty UnderlyingQty_2;
    UnderlyingQty_2.setString("18499065");
    noUnderlyings_0_0.set(UnderlyingQty_2);
    UnderlyingInstrument_2.insert(UnderlyingQty_2.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_2("LOCALMKTDATE_1601186309");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_2);
    UnderlyingInstrument_2.insert(UnderlyingRedemptionDate_2.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_2("STRING_965343595");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_2);
    UnderlyingInstrument_2.insert(UnderlyingRepoCollateralSecurityType_2.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_2;
    UnderlyingRepurchaseRate_2.setString("63.680000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_2);
    UnderlyingInstrument_2.insert(UnderlyingRepurchaseRate_2.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_2(670131359);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_2);
    UnderlyingInstrument_2.insert(UnderlyingRepurchaseTerm_2.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_2("STRING_468004867");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_2);
    UnderlyingInstrument_2.insert(UnderlyingRestructuringType_2.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_2("STRING_764658744");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityDesc_2.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_2("EXCHANGE_57005758");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityExchange_2.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_2("STRING_42409900");
    noUnderlyings_0_0.set(UnderlyingSecurityID_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityID_2.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_2("STRING_130310903");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityIDSource_2.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_2("STRING_118644594");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_2);
    UnderlyingInstrument_2.insert(UnderlyingSecuritySubType_2.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_2("STRING_840988838");
    noUnderlyings_0_0.set(UnderlyingSecurityType_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityType_2.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_2("STRING_1844071232");
    noUnderlyings_0_0.set(UnderlyingSeniority_2);
    UnderlyingInstrument_2.insert(UnderlyingSeniority_2.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_2("STRING_203791738");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_2);
    UnderlyingInstrument_2.insert(UnderlyingSettlMethod_2.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_2(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_2);
    UnderlyingInstrument_2.insert(UnderlyingSettlementType_2.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_2;
    UnderlyingStartValue_2.setString("6580251");
    noUnderlyings_0_0.set(UnderlyingStartValue_2);
    UnderlyingInstrument_2.insert(UnderlyingStartValue_2.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_2("STRING_128519013");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_2);
    UnderlyingInstrument_2.insert(UnderlyingStateOrProvinceOfIssue_2.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_2("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_2);
    UnderlyingInstrument_2.insert(UnderlyingStrikeCurrency_2.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_2;
    UnderlyingStrikePrice_2.setString("11542721");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_2);
    UnderlyingInstrument_2.insert(UnderlyingStrikePrice_2.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_2("STRING_1635036900");
    noUnderlyings_0_0.set(UnderlyingSymbol_2);
    UnderlyingInstrument_2.insert(UnderlyingSymbol_2.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_2("STRING_401883964");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_2);
    UnderlyingInstrument_2.insert(UnderlyingSymbolSfx_2.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_2("STRING_292717983");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_2);
    UnderlyingInstrument_2.insert(UnderlyingTimeUnit_2.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_2("STRING_44938025");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_2);
    UnderlyingInstrument_2.insert(UnderlyingUnitOfMeasure_2.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_2;
    UnderlyingUnitOfMeasureQty_2.setString("16457984");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_2);
    UnderlyingInstrument_2.insert(UnderlyingUnitOfMeasureQty_2.getString());
    all_values.push_back(UnderlyingInstrument_2);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_5;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_5("STRING_1668496266");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_5);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_5.insert(UnderlyingSecurityAltID_5.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_5("STRING_919243108");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_5);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_5.insert(UnderlyingSecurityAltIDSource_5.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_5);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_4;
      FIX::UnderlyingStipType UnderlyingStipType_4("STRING_190991543");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_4);
      UnderlyingStipulations_NoUnderlyingStips_4.insert(UnderlyingStipType_4.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_4("STRING_760016505");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_4);
      UnderlyingStipulations_NoUnderlyingStips_4.insert(UnderlyingStipValue_4.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_4);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_3;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_3("STRING_1792177852");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_3);
      UndlyInstrumentParties_NoUndlyInstrumentParties_3.insert(UnderlyingInstrumentPartyID_3.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_3('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_3);
      UndlyInstrumentParties_NoUndlyInstrumentParties_3.insert(UnderlyingInstrumentPartyIDSource_3.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_3(1917333937);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_3);
      UndlyInstrumentParties_NoUndlyInstrumentParties_3.insert(UnderlyingInstrumentPartyRole_3.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_3);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_6("STRING_45881319");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_6);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6.insert(UnderlyingInstrumentPartySubID_6.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_6(534509034);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_6);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6.insert(UnderlyingInstrumentPartySubIDType_6.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_7("STRING_371831322");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_7);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7.insert(UnderlyingInstrumentPartySubID_7.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_7(88291220);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_7);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7.insert(UnderlyingInstrumentPartySubIDType_7.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_8("STRING_664819937");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_8);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8.insert(UnderlyingInstrumentPartySubID_8.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_8(490475916);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_8);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8.insert(UnderlyingInstrumentPartySubIDType_8.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_4;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_4("STRING_929280058");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_4);
      UndlyInstrumentParties_NoUndlyInstrumentParties_4.insert(UnderlyingInstrumentPartyID_4.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_4('3');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_4);
      UndlyInstrumentParties_NoUndlyInstrumentParties_4.insert(UnderlyingInstrumentPartyIDSource_4.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_4(694267655);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_4);
      UndlyInstrumentParties_NoUndlyInstrumentParties_4.insert(UnderlyingInstrumentPartyRole_4.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_4);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_9("STRING_1019432685");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_9);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9.insert(UnderlyingInstrumentPartySubID_9.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_9(822786668);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_9);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9.insert(UnderlyingInstrumentPartySubIDType_9.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_3;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_3("DATA_1633913980");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingIssuer_3.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_3(1917458940);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingIssuerLen_3.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_3("DATA_1977058791");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingSecurityDesc_3.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_3(1121467232);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingSecurityDescLen_3.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_3;
    UnderlyingAdjustedQuantity_3.setString("1718592");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_3);
    UnderlyingInstrument_3.insert(UnderlyingAdjustedQuantity_3.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_3;
    UnderlyingAllocationPercent_3.setString("31.260000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_3);
    UnderlyingInstrument_3.insert(UnderlyingAllocationPercent_3.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_3;
    UnderlyingAttachmentPoint_3.setString("52.570000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_3);
    UnderlyingInstrument_3.insert(UnderlyingAttachmentPoint_3.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_3("STRING_1817657703");
    noUnderlyings_0_1.set(UnderlyingCFICode_3);
    UnderlyingInstrument_3.insert(UnderlyingCFICode_3.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_3("STRING_2037140011");
    noUnderlyings_0_1.set(UnderlyingCPProgram_3);
    UnderlyingInstrument_3.insert(UnderlyingCPProgram_3.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_3("STRING_687417876");
    noUnderlyings_0_1.set(UnderlyingCPRegType_3);
    UnderlyingInstrument_3.insert(UnderlyingCPRegType_3.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_3;
    UnderlyingCapValue_3.setString("5894171");
    noUnderlyings_0_1.set(UnderlyingCapValue_3);
    UnderlyingInstrument_3.insert(UnderlyingCapValue_3.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_3;
    UnderlyingCashAmount_3.setString("18507809");
    noUnderlyings_0_1.set(UnderlyingCashAmount_3);
    UnderlyingInstrument_3.insert(UnderlyingCashAmount_3.getString());
    FIX::UnderlyingCashType UnderlyingCashType_3("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_3);
    UnderlyingInstrument_3.insert(UnderlyingCashType_3.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_3;
    UnderlyingContractMultiplier_3.setString("13494336");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_3);
    UnderlyingInstrument_3.insert(UnderlyingContractMultiplier_3.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_3(1366844903);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_3);
    UnderlyingInstrument_3.insert(UnderlyingContractMultiplierUnit_3.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_3("COUNTRY_523103624");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_3);
    UnderlyingInstrument_3.insert(UnderlyingCountryOfIssue_3.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_3("LOCALMKTDATE_927310121");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_3);
    UnderlyingInstrument_3.insert(UnderlyingCouponPaymentDate_3.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_3;
    UnderlyingCouponRate_3.setString("51.920000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_3);
    UnderlyingInstrument_3.insert(UnderlyingCouponRate_3.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_3("STRING_837929188");
    noUnderlyings_0_1.set(UnderlyingCreditRating_3);
    UnderlyingInstrument_3.insert(UnderlyingCreditRating_3.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_3("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_3);
    UnderlyingInstrument_3.insert(UnderlyingCurrency_3.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_3;
    UnderlyingCurrentValue_3.setString("12097605");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_3);
    UnderlyingInstrument_3.insert(UnderlyingCurrentValue_3.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_3;
    UnderlyingDetachmentPoint_3.setString("26.600000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_3);
    UnderlyingInstrument_3.insert(UnderlyingDetachmentPoint_3.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_3;
    UnderlyingDirtyPrice_3.setString("1885405");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_3);
    UnderlyingInstrument_3.insert(UnderlyingDirtyPrice_3.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_3;
    UnderlyingEndPrice_3.setString("17002364");
    noUnderlyings_0_1.set(UnderlyingEndPrice_3);
    UnderlyingInstrument_3.insert(UnderlyingEndPrice_3.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_3;
    UnderlyingEndValue_3.setString("19907627");
    noUnderlyings_0_1.set(UnderlyingEndValue_3);
    UnderlyingInstrument_3.insert(UnderlyingEndValue_3.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_3(549948037);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_3);
    UnderlyingInstrument_3.insert(UnderlyingExerciseStyle_3.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_3;
    UnderlyingFXRate_3.setString("2470204");
    noUnderlyings_0_1.set(UnderlyingFXRate_3);
    UnderlyingInstrument_3.insert(UnderlyingFXRate_3.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_3('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_3);
    UnderlyingInstrument_3.insert(UnderlyingFXRateCalc_3.getString());
    FIX::UnderlyingFactor UnderlyingFactor_3;
    UnderlyingFactor_3.setString("15693807");
    noUnderlyings_0_1.set(UnderlyingFactor_3);
    UnderlyingInstrument_3.insert(UnderlyingFactor_3.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_3(1069807102);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_3);
    UnderlyingInstrument_3.insert(UnderlyingFlowScheduleType_3.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_3("STRING_123062688");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_3);
    UnderlyingInstrument_3.insert(UnderlyingInstrRegistry_3.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_3("LOCALMKTDATE_1339356014");
    noUnderlyings_0_1.set(UnderlyingIssueDate_3);
    UnderlyingInstrument_3.insert(UnderlyingIssueDate_3.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_3("STRING_899382245");
    noUnderlyings_0_1.set(UnderlyingIssuer_3);
    UnderlyingInstrument_3.insert(UnderlyingIssuer_3.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_3("STRING_1244529920");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_3);
    UnderlyingInstrument_3.insert(UnderlyingLocaleOfIssue_3.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_3("LOCALMKTDATE_1511215271");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_3);
    UnderlyingInstrument_3.insert(UnderlyingMaturityDate_3.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_3("MONTHYEAR_1021675371");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_3);
    UnderlyingInstrument_3.insert(UnderlyingMaturityMonthYear_3.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_3("TZTIMEONLY_263451530");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_3);
    UnderlyingInstrument_3.insert(UnderlyingMaturityTime_3.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_3;
    UnderlyingNotionalPercentageOutstanding_3.setString("93.260000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_3);
    UnderlyingInstrument_3.insert(UnderlyingNotionalPercentageOutstanding_3.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_3('9');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_3);
    UnderlyingInstrument_3.insert(UnderlyingOptAttribute_3.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_3;
    UnderlyingOriginalNotionalPercentageOutstanding_3.setString("94.060000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_3);
    UnderlyingInstrument_3.insert(UnderlyingOriginalNotionalPercentageOutstanding_3.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_3("STRING_1770806489");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_3);
    UnderlyingInstrument_3.insert(UnderlyingPriceUnitOfMeasure_3.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_3;
    UnderlyingPriceUnitOfMeasureQty_3.setString("6146290");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_3);
    UnderlyingInstrument_3.insert(UnderlyingPriceUnitOfMeasureQty_3.getString());
    FIX::UnderlyingProduct UnderlyingProduct_3(1829278825);
    noUnderlyings_0_1.set(UnderlyingProduct_3);
    UnderlyingInstrument_3.insert(UnderlyingProduct_3.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_3(972756510);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_3);
    UnderlyingInstrument_3.insert(UnderlyingPutOrCall_3.getString());
    FIX::UnderlyingPx UnderlyingPx_3;
    UnderlyingPx_3.setString("19814739");
    noUnderlyings_0_1.set(UnderlyingPx_3);
    UnderlyingInstrument_3.insert(UnderlyingPx_3.getString());
    FIX::UnderlyingQty UnderlyingQty_3;
    UnderlyingQty_3.setString("2048988");
    noUnderlyings_0_1.set(UnderlyingQty_3);
    UnderlyingInstrument_3.insert(UnderlyingQty_3.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_3("LOCALMKTDATE_1900066631");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_3);
    UnderlyingInstrument_3.insert(UnderlyingRedemptionDate_3.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_3("STRING_970685516");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_3);
    UnderlyingInstrument_3.insert(UnderlyingRepoCollateralSecurityType_3.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_3;
    UnderlyingRepurchaseRate_3.setString("79.890000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_3);
    UnderlyingInstrument_3.insert(UnderlyingRepurchaseRate_3.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_3(725774423);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_3);
    UnderlyingInstrument_3.insert(UnderlyingRepurchaseTerm_3.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_3("STRING_494406094");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_3);
    UnderlyingInstrument_3.insert(UnderlyingRestructuringType_3.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_3("STRING_105104851");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityDesc_3.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_3("EXCHANGE_1787257084");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityExchange_3.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_3("STRING_682946610");
    noUnderlyings_0_1.set(UnderlyingSecurityID_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityID_3.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_3("STRING_1805341278");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityIDSource_3.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_3("STRING_1630536155");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_3);
    UnderlyingInstrument_3.insert(UnderlyingSecuritySubType_3.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_3("STRING_1232894647");
    noUnderlyings_0_1.set(UnderlyingSecurityType_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityType_3.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_3("STRING_2052361711");
    noUnderlyings_0_1.set(UnderlyingSeniority_3);
    UnderlyingInstrument_3.insert(UnderlyingSeniority_3.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_3("STRING_119684863");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_3);
    UnderlyingInstrument_3.insert(UnderlyingSettlMethod_3.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_3(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_3);
    UnderlyingInstrument_3.insert(UnderlyingSettlementType_3.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_3;
    UnderlyingStartValue_3.setString("9746851");
    noUnderlyings_0_1.set(UnderlyingStartValue_3);
    UnderlyingInstrument_3.insert(UnderlyingStartValue_3.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_3("STRING_242747552");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_3);
    UnderlyingInstrument_3.insert(UnderlyingStateOrProvinceOfIssue_3.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_3("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_3);
    UnderlyingInstrument_3.insert(UnderlyingStrikeCurrency_3.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_3;
    UnderlyingStrikePrice_3.setString("14872774");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_3);
    UnderlyingInstrument_3.insert(UnderlyingStrikePrice_3.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_3("STRING_1357879359");
    noUnderlyings_0_1.set(UnderlyingSymbol_3);
    UnderlyingInstrument_3.insert(UnderlyingSymbol_3.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_3("STRING_748259134");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_3);
    UnderlyingInstrument_3.insert(UnderlyingSymbolSfx_3.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_3("STRING_1750729002");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_3);
    UnderlyingInstrument_3.insert(UnderlyingTimeUnit_3.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_3("STRING_391785037");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_3);
    UnderlyingInstrument_3.insert(UnderlyingUnitOfMeasure_3.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_3;
    UnderlyingUnitOfMeasureQty_3.setString("16595908");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_3);
    UnderlyingInstrument_3.insert(UnderlyingUnitOfMeasureQty_3.getString());
    all_values.push_back(UnderlyingInstrument_3);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_6;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_6("STRING_15107879");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_6);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_6.insert(UnderlyingSecurityAltID_6.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_6("STRING_126736289");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_6);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_6.insert(UnderlyingSecurityAltIDSource_6.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_6);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_5;
      FIX::UnderlyingStipType UnderlyingStipType_5("STRING_987864389");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_5);
      UnderlyingStipulations_NoUnderlyingStips_5.insert(UnderlyingStipType_5.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_5("STRING_2108210261");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_5);
      UnderlyingStipulations_NoUnderlyingStips_5.insert(UnderlyingStipValue_5.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_5);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_5;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_5("STRING_740447372");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_5);
      UndlyInstrumentParties_NoUndlyInstrumentParties_5.insert(UnderlyingInstrumentPartyID_5.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_5('9');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_5);
      UndlyInstrumentParties_NoUndlyInstrumentParties_5.insert(UnderlyingInstrumentPartyIDSource_5.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_5(1483636729);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_5);
      UndlyInstrumentParties_NoUndlyInstrumentParties_5.insert(UnderlyingInstrumentPartyRole_5.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_5);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_10("STRING_1425818223");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_10);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10.insert(UnderlyingInstrumentPartySubID_10.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_10(1588741580);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_10);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10.insert(UnderlyingInstrumentPartySubIDType_10.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_11("STRING_1105995231");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_11);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11.insert(UnderlyingInstrumentPartySubID_11.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_11(2108764833);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_11);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11.insert(UnderlyingInstrumentPartySubIDType_11.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_6;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_6("STRING_1246599210");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_6);
      UndlyInstrumentParties_NoUndlyInstrumentParties_6.insert(UnderlyingInstrumentPartyID_6.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_6('5');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_6);
      UndlyInstrumentParties_NoUndlyInstrumentParties_6.insert(UnderlyingInstrumentPartyIDSource_6.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_6(1194175832);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_6);
      UndlyInstrumentParties_NoUndlyInstrumentParties_6.insert(UnderlyingInstrumentPartyRole_6.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_6);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_12("STRING_708732602");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_12);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12.insert(UnderlyingInstrumentPartySubID_12.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_12(1848967553);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_12);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12.insert(UnderlyingInstrumentPartySubIDType_12.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_1;
  FIX::Yield Yield_1;
  Yield_1.setString("24.390000");
  msg.set(Yield_1);
  YieldData_1.insert(Yield_1.getString());
  FIX::YieldCalcDate YieldCalcDate_1("LOCALMKTDATE_951480154");
  msg.set(YieldCalcDate_1);
  YieldData_1.insert(YieldCalcDate_1.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_1("LOCALMKTDATE_1695631641");
  msg.set(YieldRedemptionDate_1);
  YieldData_1.insert(YieldRedemptionDate_1.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_1;
  YieldRedemptionPrice_1.setString("18527462");
  msg.set(YieldRedemptionPrice_1);
  YieldData_1.insert(YieldRedemptionPrice_1.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_1(291273978);
  msg.set(YieldRedemptionPriceType_1);
  YieldData_1.insert(YieldRedemptionPriceType_1.getString());
  FIX::YieldType YieldType_1("STRING_GOVTEQUIV");
  msg.set(YieldType_1);
  YieldData_1.insert(YieldType_1.getString());
  all_values.push_back(YieldData_1);


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
