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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AllocationInstructionAlert msg;

  list<multiset<string>> all_values;
  multiset<string> AllocationInstructionAlert_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_1;
  AccruedInterestAmt_1.setString("15649017");
  msg.set(AccruedInterestAmt_1);
  AllocationInstructionAlert_0.insert(AccruedInterestAmt_1.getString());
  FIX::AccruedInterestRate AccruedInterestRate_1;
  AccruedInterestRate_1.setString("50.010000");
  msg.set(AccruedInterestRate_1);
  AllocationInstructionAlert_0.insert(AccruedInterestRate_1.getString());
  FIX::AllocCancReplaceReason AllocCancReplaceReason_1(2);
  msg.set(AllocCancReplaceReason_1);
  AllocationInstructionAlert_0.insert(AllocCancReplaceReason_1.getString());
  FIX::AllocID AllocID_2("STRING_638729159");
  msg.set(AllocID_2);
  AllocationInstructionAlert_0.insert(AllocID_2.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_2(3);
  msg.set(AllocIntermedReqType_2);
  AllocationInstructionAlert_0.insert(AllocIntermedReqType_2.getString());
  FIX::AllocLinkID AllocLinkID_1("STRING_1583719618");
  msg.set(AllocLinkID_1);
  AllocationInstructionAlert_0.insert(AllocLinkID_1.getString());
  FIX::AllocLinkType AllocLinkType_1(0);
  msg.set(AllocLinkType_1);
  AllocationInstructionAlert_0.insert(AllocLinkType_1.getString());
  FIX::AllocNoOrdersType AllocNoOrdersType_1(1);
  msg.set(AllocNoOrdersType_1);
  AllocationInstructionAlert_0.insert(AllocNoOrdersType_1.getString());
  FIX::AllocTransType AllocTransType_1('4');
  msg.set(AllocTransType_1);
  AllocationInstructionAlert_0.insert(AllocTransType_1.getString());
  FIX::AllocType AllocType_2(4);
  msg.set(AllocType_2);
  AllocationInstructionAlert_0.insert(AllocType_2.getString());
  FIX::AutoAcceptIndicator AutoAcceptIndicator_1(false);
  msg.set(AutoAcceptIndicator_1);
  AllocationInstructionAlert_0.insert(AutoAcceptIndicator_1.getString());
  FIX::AvgParPx AvgParPx_1;
  AvgParPx_1.setString("10432316");
  msg.set(AvgParPx_1);
  AllocationInstructionAlert_0.insert(AvgParPx_1.getString());
  FIX::AvgPx AvgPx_1;
  AvgPx_1.setString("9837324");
  msg.set(AvgPx_1);
  AllocationInstructionAlert_0.insert(AvgPx_1.getString());
  FIX::AvgPxIndicator AvgPxIndicator_1(2);
  msg.set(AvgPxIndicator_1);
  AllocationInstructionAlert_0.insert(AvgPxIndicator_1.getString());
  FIX::AvgPxPrecision AvgPxPrecision_1(1715045937);
  msg.set(AvgPxPrecision_1);
  AllocationInstructionAlert_0.insert(AvgPxPrecision_1.getString());
  FIX::BookingRefID BookingRefID_1("STRING_2111681377");
  msg.set(BookingRefID_1);
  AllocationInstructionAlert_0.insert(BookingRefID_1.getString());
  FIX::BookingType BookingType_1(1);
  msg.set(BookingType_1);
  AllocationInstructionAlert_0.insert(BookingType_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_2("LOCALMKTDATE_1329906085");
  msg.set(ClearingBusinessDate_2);
  AllocationInstructionAlert_0.insert(ClearingBusinessDate_2.getString());
  FIX::Concession Concession_1;
  Concession_1.setString("11804985");
  msg.set(Concession_1);
  AllocationInstructionAlert_0.insert(Concession_1.getString());
  FIX::Currency Currency_2("USD");
  msg.set(Currency_2);
  AllocationInstructionAlert_0.insert(Currency_2.getString());
  FIX::CustOrderCapacity CustOrderCapacity_1(1);
  msg.set(CustOrderCapacity_1);
  AllocationInstructionAlert_0.insert(CustOrderCapacity_1.getString());
  FIX::EncodedText EncodedText_3("DATA_1504249857");
  msg.set(EncodedText_3);
  AllocationInstructionAlert_0.insert(EncodedText_3.getString());
  FIX::EncodedTextLen EncodedTextLen_3(1025047799);
  msg.set(EncodedTextLen_3);
  AllocationInstructionAlert_0.insert(EncodedTextLen_3.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_1;
  EndAccruedInterestAmt_1.setString("7923693");
  msg.set(EndAccruedInterestAmt_1);
  AllocationInstructionAlert_0.insert(EndAccruedInterestAmt_1.getString());
  FIX::EndCash EndCash_1;
  EndCash_1.setString("21159852");
  msg.set(EndCash_1);
  AllocationInstructionAlert_0.insert(EndCash_1.getString());
  FIX::GrossTradeAmt GrossTradeAmt_1;
  GrossTradeAmt_1.setString("16131468");
  msg.set(GrossTradeAmt_1);
  AllocationInstructionAlert_0.insert(GrossTradeAmt_1.getString());
  FIX::InterestAtMaturity InterestAtMaturity_1;
  InterestAtMaturity_1.setString("12703478");
  msg.set(InterestAtMaturity_1);
  AllocationInstructionAlert_0.insert(InterestAtMaturity_1.getString());
  FIX::LastFragment LastFragment_1(true);
  msg.set(LastFragment_1);
  AllocationInstructionAlert_0.insert(LastFragment_1.getString());
  FIX::LastMkt LastMkt_2("EXCHANGE_313982300");
  msg.set(LastMkt_2);
  AllocationInstructionAlert_0.insert(LastMkt_2.getString());
  FIX::LegalConfirm LegalConfirm_1(true);
  msg.set(LegalConfirm_1);
  AllocationInstructionAlert_0.insert(LegalConfirm_1.getString());
  FIX::MatchType MatchType_1("STRING_S5");
  msg.set(MatchType_1);
  AllocationInstructionAlert_0.insert(MatchType_1.getString());
  FIX::MessageEventSource MessageEventSource_1("STRING_996127301");
  msg.set(MessageEventSource_1);
  AllocationInstructionAlert_0.insert(MessageEventSource_1.getString());
  FIX::MultiLegReportingType MultiLegReportingType_1('2');
  msg.set(MultiLegReportingType_1);
  AllocationInstructionAlert_0.insert(MultiLegReportingType_1.getString());
  FIX::NetMoney NetMoney_1;
  NetMoney_1.setString("220632");
  msg.set(NetMoney_1);
  AllocationInstructionAlert_0.insert(NetMoney_1.getString());
  FIX::NumDaysInterest NumDaysInterest_1(1959942379);
  msg.set(NumDaysInterest_1);
  AllocationInstructionAlert_0.insert(NumDaysInterest_1.getString());
  FIX::PositionEffect PositionEffect_1('C');
  msg.set(PositionEffect_1);
  AllocationInstructionAlert_0.insert(PositionEffect_1.getString());
  FIX::PreviouslyReported PreviouslyReported_1(false);
  msg.set(PreviouslyReported_1);
  AllocationInstructionAlert_0.insert(PreviouslyReported_1.getString());
  FIX::PriceType PriceType_1(5);
  msg.set(PriceType_1);
  AllocationInstructionAlert_0.insert(PriceType_1.getString());
  FIX::QtyType QtyType_2(1);
  msg.set(QtyType_2);
  AllocationInstructionAlert_0.insert(QtyType_2.getString());
  FIX::Quantity Quantity_2;
  Quantity_2.setString("4665293");
  msg.set(Quantity_2);
  AllocationInstructionAlert_0.insert(Quantity_2.getString());
  FIX::RefAllocID RefAllocID_1("STRING_1842854052");
  msg.set(RefAllocID_1);
  AllocationInstructionAlert_0.insert(RefAllocID_1.getString());
  FIX::ReversalIndicator ReversalIndicator_1(true);
  msg.set(ReversalIndicator_1);
  AllocationInstructionAlert_0.insert(ReversalIndicator_1.getString());
  FIX::RndPx RndPx_1;
  RndPx_1.setString("14502618");
  msg.set(RndPx_1);
  AllocationInstructionAlert_0.insert(RndPx_1.getString());
  FIX::SecondaryAllocID SecondaryAllocID_2("STRING_1405872618");
  msg.set(SecondaryAllocID_2);
  AllocationInstructionAlert_0.insert(SecondaryAllocID_2.getString());
  FIX::SettlDate SettlDate_1("LOCALMKTDATE_446464465");
  msg.set(SettlDate_1);
  AllocationInstructionAlert_0.insert(SettlDate_1.getString());
  FIX::SettlType SettlType_1("STRING_2");
  msg.set(SettlType_1);
  AllocationInstructionAlert_0.insert(SettlType_1.getString());
  FIX::Side Side_1('5');
  msg.set(Side_1);
  AllocationInstructionAlert_0.insert(Side_1.getString());
  FIX::StartCash StartCash_1;
  StartCash_1.setString("17763705");
  msg.set(StartCash_1);
  AllocationInstructionAlert_0.insert(StartCash_1.getString());
  FIX::Text Text_3("STRING_447474447");
  msg.set(Text_3);
  AllocationInstructionAlert_0.insert(Text_3.getString());
  FIX::TotNoAllocs TotNoAllocs_1(1655560102);
  msg.set(TotNoAllocs_1);
  AllocationInstructionAlert_0.insert(TotNoAllocs_1.getString());
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_1;
  TotalAccruedInterestAmt_1.setString("2087259");
  msg.set(TotalAccruedInterestAmt_1);
  AllocationInstructionAlert_0.insert(TotalAccruedInterestAmt_1.getString());
  FIX::TotalTakedown TotalTakedown_1;
  TotalTakedown_1.setString("14523781");
  msg.set(TotalTakedown_1);
  AllocationInstructionAlert_0.insert(TotalTakedown_1.getString());
  FIX::TradeDate TradeDate_3("LOCALMKTDATE_1012326312");
  msg.set(TradeDate_3);
  AllocationInstructionAlert_0.insert(TradeDate_3.getString());
  FIX::TradeInputSource TradeInputSource_1("STRING_1233773772");
  msg.set(TradeInputSource_1);
  AllocationInstructionAlert_0.insert(TradeInputSource_1.getString());
  FIX::TradeOriginationDate TradeOriginationDate_1("LOCALMKTDATE_97263922");
  msg.set(TradeOriginationDate_1);
  AllocationInstructionAlert_0.insert(TradeOriginationDate_1.getString());
  FIX::TradingSessionID TradingSessionID_2("STRING_4");
  msg.set(TradingSessionID_2);
  AllocationInstructionAlert_0.insert(TradingSessionID_2.getString());
  FIX::TradingSessionSubID TradingSessionSubID_2("STRING_5");
  msg.set(TradingSessionSubID_2);
  AllocationInstructionAlert_0.insert(TradingSessionSubID_2.getString());
  FIX::TransactTime TransactTime_3(FIX::UTCTIMESTAMP(17, 24, 55, 6, 6, 2015));
  msg.set(TransactTime_3);
  AllocationInstructionAlert_0.insert(TransactTime_3.getString());
  FIX::TrdSubType TrdSubType_1(25);
  msg.set(TrdSubType_1);
  AllocationInstructionAlert_0.insert(TrdSubType_1.getString());
  FIX::TrdType TrdType_1(16);
  msg.set(TrdType_1);
  AllocationInstructionAlert_0.insert(TrdType_1.getString());
  all_values.push_back(AllocationInstructionAlert_0);

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationInstructionAlert::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_2;
    FIX::AllocAccount AllocAccount_4("STRING_1585354519");
    noAllocs_0_0.set(AllocAccount_4);
    AllocGrp_NoAllocs_2.insert(AllocAccount_4.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_2;
    AllocAccruedInterestAmt_2.setString("6959826");
    noAllocs_0_0.set(AllocAccruedInterestAmt_2);
    AllocGrp_NoAllocs_2.insert(AllocAccruedInterestAmt_2.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_4(1094256669);
    noAllocs_0_0.set(AllocAcctIDSource_4);
    AllocGrp_NoAllocs_2.insert(AllocAcctIDSource_4.getString());
    FIX::AllocAvgPx AllocAvgPx_2;
    AllocAvgPx_2.setString("20518838");
    noAllocs_0_0.set(AllocAvgPx_2);
    AllocGrp_NoAllocs_2.insert(AllocAvgPx_2.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_4("STRING_391353101");
    noAllocs_0_0.set(AllocCustomerCapacity_4);
    AllocGrp_NoAllocs_2.insert(AllocCustomerCapacity_4.getString());
    FIX::AllocHandlInst AllocHandlInst_2(1);
    noAllocs_0_0.set(AllocHandlInst_2);
    AllocGrp_NoAllocs_2.insert(AllocHandlInst_2.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_2;
    AllocInterestAtMaturity_2.setString("13546620");
    noAllocs_0_0.set(AllocInterestAtMaturity_2);
    AllocGrp_NoAllocs_2.insert(AllocInterestAtMaturity_2.getString());
    FIX::AllocMethod AllocMethod_2(3);
    noAllocs_0_0.set(AllocMethod_2);
    AllocGrp_NoAllocs_2.insert(AllocMethod_2.getString());
    FIX::AllocNetMoney AllocNetMoney_2;
    AllocNetMoney_2.setString("2721396");
    noAllocs_0_0.set(AllocNetMoney_2);
    AllocGrp_NoAllocs_2.insert(AllocNetMoney_2.getString());
    FIX::AllocPositionEffect AllocPositionEffect_4('R');
    noAllocs_0_0.set(AllocPositionEffect_4);
    AllocGrp_NoAllocs_2.insert(AllocPositionEffect_4.getString());
    FIX::AllocPrice AllocPrice_4;
    AllocPrice_4.setString("4531568");
    noAllocs_0_0.set(AllocPrice_4);
    AllocGrp_NoAllocs_2.insert(AllocPrice_4.getString());
    FIX::AllocQty AllocQty_4;
    AllocQty_4.setString("20485102");
    noAllocs_0_0.set(AllocQty_4);
    AllocGrp_NoAllocs_2.insert(AllocQty_4.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_2;
    AllocSettlCurrAmt_2.setString("10691124");
    noAllocs_0_0.set(AllocSettlCurrAmt_2);
    AllocGrp_NoAllocs_2.insert(AllocSettlCurrAmt_2.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_2("CAN");
    noAllocs_0_0.set(AllocSettlCurrency_2);
    AllocGrp_NoAllocs_2.insert(AllocSettlCurrency_2.getString());
    FIX::AllocSettlInstType AllocSettlInstType_2(1);
    noAllocs_0_0.set(AllocSettlInstType_2);
    AllocGrp_NoAllocs_2.insert(AllocSettlInstType_2.getString());
    FIX::AllocText AllocText_4("STRING_973559641");
    noAllocs_0_0.set(AllocText_4);
    AllocGrp_NoAllocs_2.insert(AllocText_4.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_2("STRING_2");
    noAllocs_0_0.set(ClearingFeeIndicator_2);
    AllocGrp_NoAllocs_2.insert(ClearingFeeIndicator_2.getString());
    FIX::EncodedAllocText EncodedAllocText_4("DATA_471270884");
    noAllocs_0_0.set(EncodedAllocText_4);
    AllocGrp_NoAllocs_2.insert(EncodedAllocText_4.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_4(1954387510);
    noAllocs_0_0.set(EncodedAllocTextLen_4);
    AllocGrp_NoAllocs_2.insert(EncodedAllocTextLen_4.getString());
    FIX::IndividualAllocID IndividualAllocID_4("STRING_2042963235");
    noAllocs_0_0.set(IndividualAllocID_4);
    AllocGrp_NoAllocs_2.insert(IndividualAllocID_4.getString());
    FIX::IndividualAllocType IndividualAllocType_4(2);
    noAllocs_0_0.set(IndividualAllocType_4);
    AllocGrp_NoAllocs_2.insert(IndividualAllocType_4.getString());
    FIX::MatchStatus MatchStatus_3('2');
    noAllocs_0_0.set(MatchStatus_3);
    AllocGrp_NoAllocs_2.insert(MatchStatus_3.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_2(true);
    noAllocs_0_0.set(NotifyBrokerOfCredit_2);
    AllocGrp_NoAllocs_2.insert(NotifyBrokerOfCredit_2.getString());
    FIX::ProcessCode ProcessCode_2('2');
    noAllocs_0_0.set(ProcessCode_2);
    AllocGrp_NoAllocs_2.insert(ProcessCode_2.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_4("STRING_1083725486");
    noAllocs_0_0.set(SecondaryIndividualAllocID_4);
    AllocGrp_NoAllocs_2.insert(SecondaryIndividualAllocID_4.getString());
    FIX::SettlCurrAmt SettlCurrAmt_2;
    SettlCurrAmt_2.setString("7709616");
    noAllocs_0_0.set(SettlCurrAmt_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrAmt_2.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_2;
    SettlCurrFxRate_2.setString("11529169");
    noAllocs_0_0.set(SettlCurrFxRate_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrFxRate_2.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_2('D');
    noAllocs_0_0.set(SettlCurrFxRateCalc_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrFxRateCalc_2.getString());
    FIX::SettlCurrency SettlCurrency_2("GBP");
    noAllocs_0_0.set(SettlCurrency_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrency_2.getString());
    all_values.push_back(AllocGrp_NoAllocs_2);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_5;
      FIX::ClearingInstruction ClearingInstruction_5(5);
      noClearingInstructions_0_1_0.set(ClearingInstruction_5);
      ClrInstGrp_NoClearingInstructions_5.insert(ClearingInstruction_5.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_5);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_2;
    FIX::CommCurrency CommCurrency_2("JPY");
    noAllocs_0_0.set(CommCurrency_2);
    CommissionData_2.insert(CommCurrency_2.getString());
    FIX::CommType CommType_2('3');
    noAllocs_0_0.set(CommType_2);
    CommissionData_2.insert(CommType_2.getString());
    FIX::Commission Commission_2;
    Commission_2.setString("11839513");
    noAllocs_0_0.set(Commission_2);
    CommissionData_2.insert(Commission_2.getString());
    FIX::FundRenewWaiv FundRenewWaiv_2('N');
    noAllocs_0_0.set(FundRenewWaiv_2);
    CommissionData_2.insert(FundRenewWaiv_2.getString());
    all_values.push_back(CommissionData_2);

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_5;
      FIX::MiscFeeAmt MiscFeeAmt_5;
      MiscFeeAmt_5.setString("14560909");
      noMiscFees_0_1_0.set(MiscFeeAmt_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeAmt_5.getString());
      FIX::MiscFeeBasis MiscFeeBasis_5(2);
      noMiscFees_0_1_0.set(MiscFeeBasis_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeBasis_5.getString());
      FIX::MiscFeeCurr MiscFeeCurr_5("GBP");
      noMiscFees_0_1_0.set(MiscFeeCurr_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeCurr_5.getString());
      FIX::MiscFeeType MiscFeeType_5("STRING_8");
      noMiscFees_0_1_0.set(MiscFeeType_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeType_5.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_5);

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_6;
      FIX::MiscFeeAmt MiscFeeAmt_6;
      MiscFeeAmt_6.setString("15969513");
      noMiscFees_0_1_1.set(MiscFeeAmt_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeAmt_6.getString());
      FIX::MiscFeeBasis MiscFeeBasis_6(1);
      noMiscFees_0_1_1.set(MiscFeeBasis_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeBasis_6.getString());
      FIX::MiscFeeCurr MiscFeeCurr_6("CAN");
      noMiscFees_0_1_1.set(MiscFeeCurr_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeCurr_6.getString());
      FIX::MiscFeeType MiscFeeType_6("STRING_11");
      noMiscFees_0_1_1.set(MiscFeeType_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeType_6.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_6);

      noAllocs_0_0.addGroup(noMiscFees_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_0_1_2;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_7;
      FIX::MiscFeeAmt MiscFeeAmt_7;
      MiscFeeAmt_7.setString("3738606");
      noMiscFees_0_1_2.set(MiscFeeAmt_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeAmt_7.getString());
      FIX::MiscFeeBasis MiscFeeBasis_7(1);
      noMiscFees_0_1_2.set(MiscFeeBasis_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeBasis_7.getString());
      FIX::MiscFeeCurr MiscFeeCurr_7("JPY");
      noMiscFees_0_1_2.set(MiscFeeCurr_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeCurr_7.getString());
      FIX::MiscFeeType MiscFeeType_7("STRING_14");
      noMiscFees_0_1_2.set(MiscFeeType_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeType_7.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_7);

      noAllocs_0_0.addGroup(noMiscFees_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_10;
      FIX::NestedPartyID NestedPartyID_10("STRING_839381737");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_10);
      NestedParties_NoNestedPartyIDs_10.insert(NestedPartyID_10.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_10('2');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_10);
      NestedParties_NoNestedPartyIDs_10.insert(NestedPartyIDSource_10.getString());
      FIX::NestedPartyRole NestedPartyRole_10(90769205);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_10);
      NestedParties_NoNestedPartyIDs_10.insert(NestedPartyRole_10.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_10);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_19;
        FIX::NestedPartySubID NestedPartySubID_19("STRING_1355687249");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_19);
        NstdPtysSubGrp_NoNestedPartySubIDs_19.insert(NestedPartySubID_19.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_19(536252503);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_19);
        NstdPtysSubGrp_NoNestedPartySubIDs_19.insert(NestedPartySubIDType_19.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_19);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_20;
        FIX::NestedPartySubID NestedPartySubID_20("STRING_108834524");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_20);
        NstdPtysSubGrp_NoNestedPartySubIDs_20.insert(NestedPartySubID_20.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_20(81941007);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_20);
        NstdPtysSubGrp_NoNestedPartySubIDs_20.insert(NestedPartySubIDType_20.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_20);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_21;
        FIX::NestedPartySubID NestedPartySubID_21("STRING_1677718498");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_21);
        NstdPtysSubGrp_NoNestedPartySubIDs_21.insert(NestedPartySubID_21.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_21(1467110660);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_21);
        NstdPtysSubGrp_NoNestedPartySubIDs_21.insert(NestedPartySubIDType_21.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_21);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_11;
      FIX::NestedPartyID NestedPartyID_11("STRING_860078641");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_11);
      NestedParties_NoNestedPartyIDs_11.insert(NestedPartyID_11.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_11('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_11);
      NestedParties_NoNestedPartyIDs_11.insert(NestedPartyIDSource_11.getString());
      FIX::NestedPartyRole NestedPartyRole_11(503578345);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_11);
      NestedParties_NoNestedPartyIDs_11.insert(NestedPartyRole_11.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_11);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_22;
        FIX::NestedPartySubID NestedPartySubID_22("STRING_98131465");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_22);
        NstdPtysSubGrp_NoNestedPartySubIDs_22.insert(NestedPartySubID_22.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_22(1959669341);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_22);
        NstdPtysSubGrp_NoNestedPartySubIDs_22.insert(NestedPartySubIDType_22.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_22);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_2;
    FIX::SettlDeliveryType SettlDeliveryType_2(3);
    noAllocs_0_0.set(SettlDeliveryType_2);
    SettlInstructionsData_2.insert(SettlDeliveryType_2.getString());
    FIX::StandInstDbID StandInstDbID_2("STRING_1733849507");
    noAllocs_0_0.set(StandInstDbID_2);
    SettlInstructionsData_2.insert(StandInstDbID_2.getString());
    FIX::StandInstDbName StandInstDbName_2("STRING_1169303255");
    noAllocs_0_0.set(StandInstDbName_2);
    SettlInstructionsData_2.insert(StandInstDbName_2.getString());
    FIX::StandInstDbType StandInstDbType_2(1);
    noAllocs_0_0.set(StandInstDbType_2);
    SettlInstructionsData_2.insert(StandInstDbType_2.getString());
    all_values.push_back(SettlInstructionsData_2);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_3;
      FIX::DlvyInstType DlvyInstType_3('C');
      noDlvyInst_0_1_0.set(DlvyInstType_3);
      DlvyInstGrp_NoDlvyInst_3.insert(DlvyInstType_3.getString());
      FIX::SettlInstSource SettlInstSource_3('2');
      noDlvyInst_0_1_0.set(SettlInstSource_3);
      DlvyInstGrp_NoDlvyInst_3.insert(SettlInstSource_3.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_3);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_8;
        FIX::SettlPartyID SettlPartyID_8("STRING_1151602472");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_8);
        SettlParties_NoSettlPartyIDs_8.insert(SettlPartyID_8.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_8('1');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_8);
        SettlParties_NoSettlPartyIDs_8.insert(SettlPartyIDSource_8.getString());
        FIX::SettlPartyRole SettlPartyRole_8(1836275823);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_8);
        SettlParties_NoSettlPartyIDs_8.insert(SettlPartyRole_8.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_8);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_17;
          FIX::SettlPartySubID SettlPartySubID_17("STRING_1322641505");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_17);
          SettlPtysSubGrp_NoSettlPartySubIDs_17.insert(SettlPartySubID_17.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_17(672371050);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_17);
          SettlPtysSubGrp_NoSettlPartySubIDs_17.insert(SettlPartySubIDType_17.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_17);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_18;
          FIX::SettlPartySubID SettlPartySubID_18("STRING_1029802339");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_18);
          SettlPtysSubGrp_NoSettlPartySubIDs_18.insert(SettlPartySubID_18.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_18(14539595);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_18);
          SettlPtysSubGrp_NoSettlPartySubIDs_18.insert(SettlPartySubIDType_18.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_18);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_9;
        FIX::SettlPartyID SettlPartyID_9("STRING_592191764");
        noSettlPartyIDs_0_0_2_1.set(SettlPartyID_9);
        SettlParties_NoSettlPartyIDs_9.insert(SettlPartyID_9.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_9('1');
        noSettlPartyIDs_0_0_2_1.set(SettlPartyIDSource_9);
        SettlParties_NoSettlPartyIDs_9.insert(SettlPartyIDSource_9.getString());
        FIX::SettlPartyRole SettlPartyRole_9(2006838301);
        noSettlPartyIDs_0_0_2_1.set(SettlPartyRole_9);
        SettlParties_NoSettlPartyIDs_9.insert(SettlPartyRole_9.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_9);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_19;
          FIX::SettlPartySubID SettlPartySubID_19("STRING_1656824047");
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubID_19);
          SettlPtysSubGrp_NoSettlPartySubIDs_19.insert(SettlPartySubID_19.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_19(2115672825);
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubIDType_19);
          SettlPtysSubGrp_NoSettlPartySubIDs_19.insert(SettlPartySubIDType_19.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_19);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_20;
          FIX::SettlPartySubID SettlPartySubID_20("STRING_2029820020");
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubID_20);
          SettlPtysSubGrp_NoSettlPartySubIDs_20.insert(SettlPartySubID_20.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_20(1187058897);
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubIDType_20);
          SettlPtysSubGrp_NoSettlPartySubIDs_20.insert(SettlPartySubIDType_20.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_20);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_1);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_0_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_4;
      FIX::DlvyInstType DlvyInstType_4('S');
      noDlvyInst_0_1_1.set(DlvyInstType_4);
      DlvyInstGrp_NoDlvyInst_4.insert(DlvyInstType_4.getString());
      FIX::SettlInstSource SettlInstSource_4('2');
      noDlvyInst_0_1_1.set(SettlInstSource_4);
      DlvyInstGrp_NoDlvyInst_4.insert(SettlInstSource_4.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_4);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_10;
        FIX::SettlPartyID SettlPartyID_10("STRING_1938878182");
        noSettlPartyIDs_0_1_2_0.set(SettlPartyID_10);
        SettlParties_NoSettlPartyIDs_10.insert(SettlPartyID_10.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_10('1');
        noSettlPartyIDs_0_1_2_0.set(SettlPartyIDSource_10);
        SettlParties_NoSettlPartyIDs_10.insert(SettlPartyIDSource_10.getString());
        FIX::SettlPartyRole SettlPartyRole_10(200760660);
        noSettlPartyIDs_0_1_2_0.set(SettlPartyRole_10);
        SettlParties_NoSettlPartyIDs_10.insert(SettlPartyRole_10.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_10);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_21;
          FIX::SettlPartySubID SettlPartySubID_21("STRING_892674761");
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubID_21);
          SettlPtysSubGrp_NoSettlPartySubIDs_21.insert(SettlPartySubID_21.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_21(1934610167);
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubIDType_21);
          SettlPtysSubGrp_NoSettlPartySubIDs_21.insert(SettlPartySubIDType_21.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_21);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_22;
          FIX::SettlPartySubID SettlPartySubID_22("STRING_772883482");
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubID_22);
          SettlPtysSubGrp_NoSettlPartySubIDs_22.insert(SettlPartySubID_22.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_22(1873606262);
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubIDType_22);
          SettlPtysSubGrp_NoSettlPartySubIDs_22.insert(SettlPartySubIDType_22.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_22);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_1);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_11;
        FIX::SettlPartyID SettlPartyID_11("STRING_970443749");
        noSettlPartyIDs_0_1_2_1.set(SettlPartyID_11);
        SettlParties_NoSettlPartyIDs_11.insert(SettlPartyID_11.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_11('1');
        noSettlPartyIDs_0_1_2_1.set(SettlPartyIDSource_11);
        SettlParties_NoSettlPartyIDs_11.insert(SettlPartyIDSource_11.getString());
        FIX::SettlPartyRole SettlPartyRole_11(609643870);
        noSettlPartyIDs_0_1_2_1.set(SettlPartyRole_11);
        SettlParties_NoSettlPartyIDs_11.insert(SettlPartyRole_11.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_11);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_23;
          FIX::SettlPartySubID SettlPartySubID_23("STRING_265692014");
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubID_23);
          SettlPtysSubGrp_NoSettlPartySubIDs_23.insert(SettlPartySubID_23.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_23(1867025765);
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubIDType_23);
          SettlPtysSubGrp_NoSettlPartySubIDs_23.insert(SettlPartySubIDType_23.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_23);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_24;
          FIX::SettlPartySubID SettlPartySubID_24("STRING_118096872");
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubID_24);
          SettlPtysSubGrp_NoSettlPartySubIDs_24.insert(SettlPartySubID_24.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_24(1975686838);
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubIDType_24);
          SettlPtysSubGrp_NoSettlPartySubIDs_24.insert(SettlPartySubIDType_24.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_24);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_25;
          FIX::SettlPartySubID SettlPartySubID_25("STRING_1042183622");
          noSettlPartySubIDs_0_1_1_3_2.set(SettlPartySubID_25);
          SettlPtysSubGrp_NoSettlPartySubIDs_25.insert(SettlPartySubID_25.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_25(790467922);
          noSettlPartySubIDs_0_1_1_3_2.set(SettlPartySubIDType_25);
          SettlPtysSubGrp_NoSettlPartySubIDs_25.insert(SettlPartySubIDType_25.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_25);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_2);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_12;
        FIX::SettlPartyID SettlPartyID_12("STRING_858005529");
        noSettlPartyIDs_0_1_2_2.set(SettlPartyID_12);
        SettlParties_NoSettlPartyIDs_12.insert(SettlPartyID_12.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_12('1');
        noSettlPartyIDs_0_1_2_2.set(SettlPartyIDSource_12);
        SettlParties_NoSettlPartyIDs_12.insert(SettlPartyIDSource_12.getString());
        FIX::SettlPartyRole SettlPartyRole_12(1382659686);
        noSettlPartyIDs_0_1_2_2.set(SettlPartyRole_12);
        SettlParties_NoSettlPartyIDs_12.insert(SettlPartyRole_12.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_12);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_26;
          FIX::SettlPartySubID SettlPartySubID_26("STRING_916077870");
          noSettlPartySubIDs_0_1_2_3_0.set(SettlPartySubID_26);
          SettlPtysSubGrp_NoSettlPartySubIDs_26.insert(SettlPartySubID_26.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_26(1183055051);
          noSettlPartySubIDs_0_1_2_3_0.set(SettlPartySubIDType_26);
          SettlPtysSubGrp_NoSettlPartySubIDs_26.insert(SettlPartySubIDType_26.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_26);

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_0);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_2);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_0_1_2;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_5;
      FIX::DlvyInstType DlvyInstType_5('C');
      noDlvyInst_0_1_2.set(DlvyInstType_5);
      DlvyInstGrp_NoDlvyInst_5.insert(DlvyInstType_5.getString());
      FIX::SettlInstSource SettlInstSource_5('3');
      noDlvyInst_0_1_2.set(SettlInstSource_5);
      DlvyInstGrp_NoDlvyInst_5.insert(SettlInstSource_5.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_5);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_13;
        FIX::SettlPartyID SettlPartyID_13("STRING_527492721");
        noSettlPartyIDs_0_2_2_0.set(SettlPartyID_13);
        SettlParties_NoSettlPartyIDs_13.insert(SettlPartyID_13.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_13('1');
        noSettlPartyIDs_0_2_2_0.set(SettlPartyIDSource_13);
        SettlParties_NoSettlPartyIDs_13.insert(SettlPartyIDSource_13.getString());
        FIX::SettlPartyRole SettlPartyRole_13(1807806438);
        noSettlPartyIDs_0_2_2_0.set(SettlPartyRole_13);
        SettlParties_NoSettlPartyIDs_13.insert(SettlPartyRole_13.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_13);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_27;
          FIX::SettlPartySubID SettlPartySubID_27("STRING_2110961420");
          noSettlPartySubIDs_0_2_0_3_0.set(SettlPartySubID_27);
          SettlPtysSubGrp_NoSettlPartySubIDs_27.insert(SettlPartySubID_27.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_27(1248132491);
          noSettlPartySubIDs_0_2_0_3_0.set(SettlPartySubIDType_27);
          SettlPtysSubGrp_NoSettlPartySubIDs_27.insert(SettlPartySubIDType_27.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_27);

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_28;
          FIX::SettlPartySubID SettlPartySubID_28("STRING_830882576");
          noSettlPartySubIDs_0_2_0_3_1.set(SettlPartySubID_28);
          SettlPtysSubGrp_NoSettlPartySubIDs_28.insert(SettlPartySubID_28.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_28(1714541647);
          noSettlPartySubIDs_0_2_0_3_1.set(SettlPartySubIDType_28);
          SettlPtysSubGrp_NoSettlPartySubIDs_28.insert(SettlPartySubIDType_28.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_28);

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_29;
          FIX::SettlPartySubID SettlPartySubID_29("STRING_2140807252");
          noSettlPartySubIDs_0_2_0_3_2.set(SettlPartySubID_29);
          SettlPtysSubGrp_NoSettlPartySubIDs_29.insert(SettlPartySubID_29.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_29(618009095);
          noSettlPartySubIDs_0_2_0_3_2.set(SettlPartySubIDType_29);
          SettlPtysSubGrp_NoSettlPartySubIDs_29.insert(SettlPartySubIDType_29.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_29);

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_2);
        }
        noDlvyInst_0_1_2.addGroup(noSettlPartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_2_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_14;
        FIX::SettlPartyID SettlPartyID_14("STRING_339941482");
        noSettlPartyIDs_0_2_2_1.set(SettlPartyID_14);
        SettlParties_NoSettlPartyIDs_14.insert(SettlPartyID_14.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_14('1');
        noSettlPartyIDs_0_2_2_1.set(SettlPartyIDSource_14);
        SettlParties_NoSettlPartyIDs_14.insert(SettlPartyIDSource_14.getString());
        FIX::SettlPartyRole SettlPartyRole_14(1588452844);
        noSettlPartyIDs_0_2_2_1.set(SettlPartyRole_14);
        SettlParties_NoSettlPartyIDs_14.insert(SettlPartyRole_14.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_14);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_30;
          FIX::SettlPartySubID SettlPartySubID_30("STRING_329090088");
          noSettlPartySubIDs_0_2_1_3_0.set(SettlPartySubID_30);
          SettlPtysSubGrp_NoSettlPartySubIDs_30.insert(SettlPartySubID_30.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_30(2017757541);
          noSettlPartySubIDs_0_2_1_3_0.set(SettlPartySubIDType_30);
          SettlPtysSubGrp_NoSettlPartySubIDs_30.insert(SettlPartySubIDType_30.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_30);

          noSettlPartyIDs_0_2_2_1.addGroup(noSettlPartySubIDs_0_2_1_3_0);
        }
        noDlvyInst_0_1_2.addGroup(noSettlPartyIDs_0_2_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_2_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_15;
        FIX::SettlPartyID SettlPartyID_15("STRING_1867206687");
        noSettlPartyIDs_0_2_2_2.set(SettlPartyID_15);
        SettlParties_NoSettlPartyIDs_15.insert(SettlPartyID_15.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_15('4');
        noSettlPartyIDs_0_2_2_2.set(SettlPartyIDSource_15);
        SettlParties_NoSettlPartyIDs_15.insert(SettlPartyIDSource_15.getString());
        FIX::SettlPartyRole SettlPartyRole_15(2135854413);
        noSettlPartyIDs_0_2_2_2.set(SettlPartyRole_15);
        SettlParties_NoSettlPartyIDs_15.insert(SettlPartyRole_15.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_15);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_31;
          FIX::SettlPartySubID SettlPartySubID_31("STRING_1090815828");
          noSettlPartySubIDs_0_2_2_3_0.set(SettlPartySubID_31);
          SettlPtysSubGrp_NoSettlPartySubIDs_31.insert(SettlPartySubID_31.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_31(778838688);
          noSettlPartySubIDs_0_2_2_3_0.set(SettlPartySubIDType_31);
          SettlPtysSubGrp_NoSettlPartySubIDs_31.insert(SettlPartySubIDType_31.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_31);

          noSettlPartyIDs_0_2_2_2.addGroup(noSettlPartySubIDs_0_2_2_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_32;
          FIX::SettlPartySubID SettlPartySubID_32("STRING_405931758");
          noSettlPartySubIDs_0_2_2_3_1.set(SettlPartySubID_32);
          SettlPtysSubGrp_NoSettlPartySubIDs_32.insert(SettlPartySubID_32.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_32(55397);
          noSettlPartySubIDs_0_2_2_3_1.set(SettlPartySubIDType_32);
          SettlPtysSubGrp_NoSettlPartySubIDs_32.insert(SettlPartySubIDType_32.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_32);

          noSettlPartyIDs_0_2_2_2.addGroup(noSettlPartySubIDs_0_2_2_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_33;
          FIX::SettlPartySubID SettlPartySubID_33("STRING_14014726");
          noSettlPartySubIDs_0_2_2_3_2.set(SettlPartySubID_33);
          SettlPtysSubGrp_NoSettlPartySubIDs_33.insert(SettlPartySubID_33.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_33(237025183);
          noSettlPartySubIDs_0_2_2_3_2.set(SettlPartySubIDType_33);
          SettlPtysSubGrp_NoSettlPartySubIDs_33.insert(SettlPartySubIDType_33.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_33);

          noSettlPartyIDs_0_2_2_2.addGroup(noSettlPartySubIDs_0_2_2_3_2);
        }
        noDlvyInst_0_1_2.addGroup(noSettlPartyIDs_0_2_2_2);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoAllocs noAllocs_0_1;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_3;
    FIX::AllocAccount AllocAccount_5("STRING_916133268");
    noAllocs_0_1.set(AllocAccount_5);
    AllocGrp_NoAllocs_3.insert(AllocAccount_5.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_3;
    AllocAccruedInterestAmt_3.setString("11970697");
    noAllocs_0_1.set(AllocAccruedInterestAmt_3);
    AllocGrp_NoAllocs_3.insert(AllocAccruedInterestAmt_3.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_5(1724942655);
    noAllocs_0_1.set(AllocAcctIDSource_5);
    AllocGrp_NoAllocs_3.insert(AllocAcctIDSource_5.getString());
    FIX::AllocAvgPx AllocAvgPx_3;
    AllocAvgPx_3.setString("18004003");
    noAllocs_0_1.set(AllocAvgPx_3);
    AllocGrp_NoAllocs_3.insert(AllocAvgPx_3.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_5("STRING_114977554");
    noAllocs_0_1.set(AllocCustomerCapacity_5);
    AllocGrp_NoAllocs_3.insert(AllocCustomerCapacity_5.getString());
    FIX::AllocHandlInst AllocHandlInst_3(2);
    noAllocs_0_1.set(AllocHandlInst_3);
    AllocGrp_NoAllocs_3.insert(AllocHandlInst_3.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_3;
    AllocInterestAtMaturity_3.setString("19724835");
    noAllocs_0_1.set(AllocInterestAtMaturity_3);
    AllocGrp_NoAllocs_3.insert(AllocInterestAtMaturity_3.getString());
    FIX::AllocMethod AllocMethod_3(2);
    noAllocs_0_1.set(AllocMethod_3);
    AllocGrp_NoAllocs_3.insert(AllocMethod_3.getString());
    FIX::AllocNetMoney AllocNetMoney_3;
    AllocNetMoney_3.setString("7350736");
    noAllocs_0_1.set(AllocNetMoney_3);
    AllocGrp_NoAllocs_3.insert(AllocNetMoney_3.getString());
    FIX::AllocPositionEffect AllocPositionEffect_5('C');
    noAllocs_0_1.set(AllocPositionEffect_5);
    AllocGrp_NoAllocs_3.insert(AllocPositionEffect_5.getString());
    FIX::AllocPrice AllocPrice_5;
    AllocPrice_5.setString("10234328");
    noAllocs_0_1.set(AllocPrice_5);
    AllocGrp_NoAllocs_3.insert(AllocPrice_5.getString());
    FIX::AllocQty AllocQty_5;
    AllocQty_5.setString("15659562");
    noAllocs_0_1.set(AllocQty_5);
    AllocGrp_NoAllocs_3.insert(AllocQty_5.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_3;
    AllocSettlCurrAmt_3.setString("15030193");
    noAllocs_0_1.set(AllocSettlCurrAmt_3);
    AllocGrp_NoAllocs_3.insert(AllocSettlCurrAmt_3.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_3("CAN");
    noAllocs_0_1.set(AllocSettlCurrency_3);
    AllocGrp_NoAllocs_3.insert(AllocSettlCurrency_3.getString());
    FIX::AllocSettlInstType AllocSettlInstType_3(2);
    noAllocs_0_1.set(AllocSettlInstType_3);
    AllocGrp_NoAllocs_3.insert(AllocSettlInstType_3.getString());
    FIX::AllocText AllocText_5("STRING_736202658");
    noAllocs_0_1.set(AllocText_5);
    AllocGrp_NoAllocs_3.insert(AllocText_5.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_3("STRING_I");
    noAllocs_0_1.set(ClearingFeeIndicator_3);
    AllocGrp_NoAllocs_3.insert(ClearingFeeIndicator_3.getString());
    FIX::EncodedAllocText EncodedAllocText_5("DATA_1296991831");
    noAllocs_0_1.set(EncodedAllocText_5);
    AllocGrp_NoAllocs_3.insert(EncodedAllocText_5.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_5(1065292747);
    noAllocs_0_1.set(EncodedAllocTextLen_5);
    AllocGrp_NoAllocs_3.insert(EncodedAllocTextLen_5.getString());
    FIX::IndividualAllocID IndividualAllocID_5("STRING_1495208405");
    noAllocs_0_1.set(IndividualAllocID_5);
    AllocGrp_NoAllocs_3.insert(IndividualAllocID_5.getString());
    FIX::IndividualAllocType IndividualAllocType_5(1);
    noAllocs_0_1.set(IndividualAllocType_5);
    AllocGrp_NoAllocs_3.insert(IndividualAllocType_5.getString());
    FIX::MatchStatus MatchStatus_4('1');
    noAllocs_0_1.set(MatchStatus_4);
    AllocGrp_NoAllocs_3.insert(MatchStatus_4.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_3(true);
    noAllocs_0_1.set(NotifyBrokerOfCredit_3);
    AllocGrp_NoAllocs_3.insert(NotifyBrokerOfCredit_3.getString());
    FIX::ProcessCode ProcessCode_3('1');
    noAllocs_0_1.set(ProcessCode_3);
    AllocGrp_NoAllocs_3.insert(ProcessCode_3.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_5("STRING_57257132");
    noAllocs_0_1.set(SecondaryIndividualAllocID_5);
    AllocGrp_NoAllocs_3.insert(SecondaryIndividualAllocID_5.getString());
    FIX::SettlCurrAmt SettlCurrAmt_3;
    SettlCurrAmt_3.setString("1149342");
    noAllocs_0_1.set(SettlCurrAmt_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrAmt_3.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_3;
    SettlCurrFxRate_3.setString("9705728");
    noAllocs_0_1.set(SettlCurrFxRate_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrFxRate_3.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_3('M');
    noAllocs_0_1.set(SettlCurrFxRateCalc_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrFxRateCalc_3.getString());
    FIX::SettlCurrency SettlCurrency_3("USD");
    noAllocs_0_1.set(SettlCurrency_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrency_3.getString());
    all_values.push_back(AllocGrp_NoAllocs_3);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_6;
      FIX::ClearingInstruction ClearingInstruction_6(7);
      noClearingInstructions_1_1_0.set(ClearingInstruction_6);
      ClrInstGrp_NoClearingInstructions_6.insert(ClearingInstruction_6.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_6);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_7;
      FIX::ClearingInstruction ClearingInstruction_7(5);
      noClearingInstructions_1_1_1.set(ClearingInstruction_7);
      ClrInstGrp_NoClearingInstructions_7.insert(ClearingInstruction_7.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_7);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_8;
      FIX::ClearingInstruction ClearingInstruction_8(2);
      noClearingInstructions_1_1_2.set(ClearingInstruction_8);
      ClrInstGrp_NoClearingInstructions_8.insert(ClearingInstruction_8.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_8);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_3;
    FIX::CommCurrency CommCurrency_3("CAN");
    noAllocs_0_1.set(CommCurrency_3);
    CommissionData_3.insert(CommCurrency_3.getString());
    FIX::CommType CommType_3('6');
    noAllocs_0_1.set(CommType_3);
    CommissionData_3.insert(CommType_3.getString());
    FIX::Commission Commission_3;
    Commission_3.setString("12162966");
    noAllocs_0_1.set(Commission_3);
    CommissionData_3.insert(Commission_3.getString());
    FIX::FundRenewWaiv FundRenewWaiv_3('Y');
    noAllocs_0_1.set(FundRenewWaiv_3);
    CommissionData_3.insert(FundRenewWaiv_3.getString());
    all_values.push_back(CommissionData_3);

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_8;
      FIX::MiscFeeAmt MiscFeeAmt_8;
      MiscFeeAmt_8.setString("922458");
      noMiscFees_1_1_0.set(MiscFeeAmt_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeAmt_8.getString());
      FIX::MiscFeeBasis MiscFeeBasis_8(2);
      noMiscFees_1_1_0.set(MiscFeeBasis_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeBasis_8.getString());
      FIX::MiscFeeCurr MiscFeeCurr_8("JPY");
      noMiscFees_1_1_0.set(MiscFeeCurr_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeCurr_8.getString());
      FIX::MiscFeeType MiscFeeType_8("STRING_9");
      noMiscFees_1_1_0.set(MiscFeeType_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeType_8.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_8);

      noAllocs_0_1.addGroup(noMiscFees_1_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_12;
      FIX::NestedPartyID NestedPartyID_12("STRING_1845204899");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_12);
      NestedParties_NoNestedPartyIDs_12.insert(NestedPartyID_12.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_12('5');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_12);
      NestedParties_NoNestedPartyIDs_12.insert(NestedPartyIDSource_12.getString());
      FIX::NestedPartyRole NestedPartyRole_12(587844716);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_12);
      NestedParties_NoNestedPartyIDs_12.insert(NestedPartyRole_12.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_12);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_23;
        FIX::NestedPartySubID NestedPartySubID_23("STRING_2052695927");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_23);
        NstdPtysSubGrp_NoNestedPartySubIDs_23.insert(NestedPartySubID_23.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_23(1604559587);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_23);
        NstdPtysSubGrp_NoNestedPartySubIDs_23.insert(NestedPartySubIDType_23.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_23);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_24;
        FIX::NestedPartySubID NestedPartySubID_24("STRING_1876938950");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_24);
        NstdPtysSubGrp_NoNestedPartySubIDs_24.insert(NestedPartySubID_24.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_24(1388791449);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_24);
        NstdPtysSubGrp_NoNestedPartySubIDs_24.insert(NestedPartySubIDType_24.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_24);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_3;
    FIX::SettlDeliveryType SettlDeliveryType_3(2);
    noAllocs_0_1.set(SettlDeliveryType_3);
    SettlInstructionsData_3.insert(SettlDeliveryType_3.getString());
    FIX::StandInstDbID StandInstDbID_3("STRING_1934196083");
    noAllocs_0_1.set(StandInstDbID_3);
    SettlInstructionsData_3.insert(StandInstDbID_3.getString());
    FIX::StandInstDbName StandInstDbName_3("STRING_1503725660");
    noAllocs_0_1.set(StandInstDbName_3);
    SettlInstructionsData_3.insert(StandInstDbName_3.getString());
    FIX::StandInstDbType StandInstDbType_3(1);
    noAllocs_0_1.set(StandInstDbType_3);
    SettlInstructionsData_3.insert(StandInstDbType_3.getString());
    all_values.push_back(SettlInstructionsData_3);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_6;
      FIX::DlvyInstType DlvyInstType_6('S');
      noDlvyInst_1_1_0.set(DlvyInstType_6);
      DlvyInstGrp_NoDlvyInst_6.insert(DlvyInstType_6.getString());
      FIX::SettlInstSource SettlInstSource_6('1');
      noDlvyInst_1_1_0.set(SettlInstSource_6);
      DlvyInstGrp_NoDlvyInst_6.insert(SettlInstSource_6.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_6);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_16;
        FIX::SettlPartyID SettlPartyID_16("STRING_811209664");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_16);
        SettlParties_NoSettlPartyIDs_16.insert(SettlPartyID_16.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_16('8');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_16);
        SettlParties_NoSettlPartyIDs_16.insert(SettlPartyIDSource_16.getString());
        FIX::SettlPartyRole SettlPartyRole_16(1443833229);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_16);
        SettlParties_NoSettlPartyIDs_16.insert(SettlPartyRole_16.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_16);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_34;
          FIX::SettlPartySubID SettlPartySubID_34("STRING_1727470111");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_34);
          SettlPtysSubGrp_NoSettlPartySubIDs_34.insert(SettlPartySubID_34.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_34(1895195600);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_34);
          SettlPtysSubGrp_NoSettlPartySubIDs_34.insert(SettlPartySubIDType_34.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_34);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_35;
          FIX::SettlPartySubID SettlPartySubID_35("STRING_1321018898");
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubID_35);
          SettlPtysSubGrp_NoSettlPartySubIDs_35.insert(SettlPartySubID_35.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_35(1205068883);
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubIDType_35);
          SettlPtysSubGrp_NoSettlPartySubIDs_35.insert(SettlPartySubIDType_35.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_35);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_17;
        FIX::SettlPartyID SettlPartyID_17("STRING_2135035649");
        noSettlPartyIDs_1_0_2_1.set(SettlPartyID_17);
        SettlParties_NoSettlPartyIDs_17.insert(SettlPartyID_17.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_17('1');
        noSettlPartyIDs_1_0_2_1.set(SettlPartyIDSource_17);
        SettlParties_NoSettlPartyIDs_17.insert(SettlPartyIDSource_17.getString());
        FIX::SettlPartyRole SettlPartyRole_17(101140226);
        noSettlPartyIDs_1_0_2_1.set(SettlPartyRole_17);
        SettlParties_NoSettlPartyIDs_17.insert(SettlPartyRole_17.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_17);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_36;
          FIX::SettlPartySubID SettlPartySubID_36("STRING_374783291");
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubID_36);
          SettlPtysSubGrp_NoSettlPartySubIDs_36.insert(SettlPartySubID_36.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_36(1181176885);
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubIDType_36);
          SettlPtysSubGrp_NoSettlPartySubIDs_36.insert(SettlPartySubIDType_36.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_36);

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_37;
          FIX::SettlPartySubID SettlPartySubID_37("STRING_1021264260");
          noSettlPartySubIDs_1_0_1_3_1.set(SettlPartySubID_37);
          SettlPtysSubGrp_NoSettlPartySubIDs_37.insert(SettlPartySubID_37.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_37(72504542);
          noSettlPartySubIDs_1_0_1_3_1.set(SettlPartySubIDType_37);
          SettlPtysSubGrp_NoSettlPartySubIDs_37.insert(SettlPartySubIDType_37.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_37);

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_38;
          FIX::SettlPartySubID SettlPartySubID_38("STRING_1738664407");
          noSettlPartySubIDs_1_0_1_3_2.set(SettlPartySubID_38);
          SettlPtysSubGrp_NoSettlPartySubIDs_38.insert(SettlPartySubID_38.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_38(1609108977);
          noSettlPartySubIDs_1_0_1_3_2.set(SettlPartySubIDType_38);
          SettlPtysSubGrp_NoSettlPartySubIDs_38.insert(SettlPartySubIDType_38.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_38);

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_2);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      noAllocs_0_1.addGroup(noDlvyInst_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_1_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_7;
      FIX::DlvyInstType DlvyInstType_7('C');
      noDlvyInst_1_1_1.set(DlvyInstType_7);
      DlvyInstGrp_NoDlvyInst_7.insert(DlvyInstType_7.getString());
      FIX::SettlInstSource SettlInstSource_7('2');
      noDlvyInst_1_1_1.set(SettlInstSource_7);
      DlvyInstGrp_NoDlvyInst_7.insert(SettlInstSource_7.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_7);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_18;
        FIX::SettlPartyID SettlPartyID_18("STRING_564973842");
        noSettlPartyIDs_1_1_2_0.set(SettlPartyID_18);
        SettlParties_NoSettlPartyIDs_18.insert(SettlPartyID_18.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_18('8');
        noSettlPartyIDs_1_1_2_0.set(SettlPartyIDSource_18);
        SettlParties_NoSettlPartyIDs_18.insert(SettlPartyIDSource_18.getString());
        FIX::SettlPartyRole SettlPartyRole_18(1087901954);
        noSettlPartyIDs_1_1_2_0.set(SettlPartyRole_18);
        SettlParties_NoSettlPartyIDs_18.insert(SettlPartyRole_18.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_18);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_39;
          FIX::SettlPartySubID SettlPartySubID_39("STRING_241426499");
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubID_39);
          SettlPtysSubGrp_NoSettlPartySubIDs_39.insert(SettlPartySubID_39.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_39(2080191850);
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubIDType_39);
          SettlPtysSubGrp_NoSettlPartySubIDs_39.insert(SettlPartySubIDType_39.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_39);

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_0);
        }
        noDlvyInst_1_1_1.addGroup(noSettlPartyIDs_1_1_2_0);
      }
      noAllocs_0_1.addGroup(noDlvyInst_1_1_1);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // ExecAllocGrp
  // Group ExecAllocGrp.NoExecs
  {
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_2;
    FIX::ExecID ExecID_2("STRING_1874101096");
    noExecs_0_0.set(ExecID_2);
    ExecAllocGrp_NoExecs_2.insert(ExecID_2.getString());
    FIX::FirmTradeID FirmTradeID_2("STRING_2132596139");
    noExecs_0_0.set(FirmTradeID_2);
    ExecAllocGrp_NoExecs_2.insert(FirmTradeID_2.getString());
    FIX::LastCapacity LastCapacity_2('2');
    noExecs_0_0.set(LastCapacity_2);
    ExecAllocGrp_NoExecs_2.insert(LastCapacity_2.getString());
    FIX::LastParPx LastParPx_2;
    LastParPx_2.setString("5378271");
    noExecs_0_0.set(LastParPx_2);
    ExecAllocGrp_NoExecs_2.insert(LastParPx_2.getString());
    FIX::LastPx LastPx_2;
    LastPx_2.setString("8225738");
    noExecs_0_0.set(LastPx_2);
    ExecAllocGrp_NoExecs_2.insert(LastPx_2.getString());
    FIX::LastQty LastQty_2;
    LastQty_2.setString("3095315");
    noExecs_0_0.set(LastQty_2);
    ExecAllocGrp_NoExecs_2.insert(LastQty_2.getString());
    FIX::SecondaryExecID SecondaryExecID_2("STRING_642549397");
    noExecs_0_0.set(SecondaryExecID_2);
    ExecAllocGrp_NoExecs_2.insert(SecondaryExecID_2.getString());
    FIX::TradeID TradeID_2("STRING_402560290");
    noExecs_0_0.set(TradeID_2);
    ExecAllocGrp_NoExecs_2.insert(TradeID_2.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_2);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_1;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_3;
    FIX::ExecID ExecID_3("STRING_57243539");
    noExecs_0_1.set(ExecID_3);
    ExecAllocGrp_NoExecs_3.insert(ExecID_3.getString());
    FIX::FirmTradeID FirmTradeID_3("STRING_1963568295");
    noExecs_0_1.set(FirmTradeID_3);
    ExecAllocGrp_NoExecs_3.insert(FirmTradeID_3.getString());
    FIX::LastCapacity LastCapacity_3('2');
    noExecs_0_1.set(LastCapacity_3);
    ExecAllocGrp_NoExecs_3.insert(LastCapacity_3.getString());
    FIX::LastParPx LastParPx_3;
    LastParPx_3.setString("447955");
    noExecs_0_1.set(LastParPx_3);
    ExecAllocGrp_NoExecs_3.insert(LastParPx_3.getString());
    FIX::LastPx LastPx_3;
    LastPx_3.setString("12293493");
    noExecs_0_1.set(LastPx_3);
    ExecAllocGrp_NoExecs_3.insert(LastPx_3.getString());
    FIX::LastQty LastQty_3;
    LastQty_3.setString("17087694");
    noExecs_0_1.set(LastQty_3);
    ExecAllocGrp_NoExecs_3.insert(LastQty_3.getString());
    FIX::SecondaryExecID SecondaryExecID_3("STRING_1775206916");
    noExecs_0_1.set(SecondaryExecID_3);
    ExecAllocGrp_NoExecs_3.insert(SecondaryExecID_3.getString());
    FIX::TradeID TradeID_3("STRING_1604132637");
    noExecs_0_1.set(TradeID_3);
    ExecAllocGrp_NoExecs_3.insert(TradeID_3.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_3);

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_2;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_4;
    FIX::ExecID ExecID_4("STRING_742462637");
    noExecs_0_2.set(ExecID_4);
    ExecAllocGrp_NoExecs_4.insert(ExecID_4.getString());
    FIX::FirmTradeID FirmTradeID_4("STRING_648987528");
    noExecs_0_2.set(FirmTradeID_4);
    ExecAllocGrp_NoExecs_4.insert(FirmTradeID_4.getString());
    FIX::LastCapacity LastCapacity_4('4');
    noExecs_0_2.set(LastCapacity_4);
    ExecAllocGrp_NoExecs_4.insert(LastCapacity_4.getString());
    FIX::LastParPx LastParPx_4;
    LastParPx_4.setString("3336433");
    noExecs_0_2.set(LastParPx_4);
    ExecAllocGrp_NoExecs_4.insert(LastParPx_4.getString());
    FIX::LastPx LastPx_4;
    LastPx_4.setString("1106128");
    noExecs_0_2.set(LastPx_4);
    ExecAllocGrp_NoExecs_4.insert(LastPx_4.getString());
    FIX::LastQty LastQty_4;
    LastQty_4.setString("3646720");
    noExecs_0_2.set(LastQty_4);
    ExecAllocGrp_NoExecs_4.insert(LastQty_4.getString());
    FIX::SecondaryExecID SecondaryExecID_4("STRING_1977520082");
    noExecs_0_2.set(SecondaryExecID_4);
    ExecAllocGrp_NoExecs_4.insert(SecondaryExecID_4.getString());
    FIX::TradeID TradeID_4("STRING_1176797773");
    noExecs_0_2.set(TradeID_4);
    ExecAllocGrp_NoExecs_4.insert(TradeID_4.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_4);

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_1;
  FIX::AgreementCurrency AgreementCurrency_1("CAN");
  msg.set(AgreementCurrency_1);
  FinancingDetails_1.insert(AgreementCurrency_1.getString());
  FIX::AgreementDate AgreementDate_1("LOCALMKTDATE_117216080");
  msg.set(AgreementDate_1);
  FinancingDetails_1.insert(AgreementDate_1.getString());
  FIX::AgreementDesc AgreementDesc_1("STRING_1281332191");
  msg.set(AgreementDesc_1);
  FinancingDetails_1.insert(AgreementDesc_1.getString());
  FIX::AgreementID AgreementID_1("STRING_956647421");
  msg.set(AgreementID_1);
  FinancingDetails_1.insert(AgreementID_1.getString());
  FIX::DeliveryType DeliveryType_1(2);
  msg.set(DeliveryType_1);
  FinancingDetails_1.insert(DeliveryType_1.getString());
  FIX::EndDate EndDate_1("LOCALMKTDATE_1477043433");
  msg.set(EndDate_1);
  FinancingDetails_1.insert(EndDate_1.getString());
  FIX::MarginRatio MarginRatio_1;
  MarginRatio_1.setString("48.690000");
  msg.set(MarginRatio_1);
  FinancingDetails_1.insert(MarginRatio_1.getString());
  FIX::StartDate StartDate_1("LOCALMKTDATE_35036773");
  msg.set(StartDate_1);
  FinancingDetails_1.insert(StartDate_1.getString());
  FIX::TerminationType TerminationType_1(4);
  msg.set(TerminationType_1);
  FinancingDetails_1.insert(TerminationType_1.getString());
  all_values.push_back(FinancingDetails_1);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AllocationInstructionAlert::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_3;
    FIX::EncodedLegIssuer EncodedLegIssuer_3("DATA_857610600");
    noLegs_0_0.set(EncodedLegIssuer_3);
    InstrumentLeg_3.insert(EncodedLegIssuer_3.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_3(652273377);
    noLegs_0_0.set(EncodedLegIssuerLen_3);
    InstrumentLeg_3.insert(EncodedLegIssuerLen_3.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_3("DATA_1863641379");
    noLegs_0_0.set(EncodedLegSecurityDesc_3);
    InstrumentLeg_3.insert(EncodedLegSecurityDesc_3.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_3(1260170891);
    noLegs_0_0.set(EncodedLegSecurityDescLen_3);
    InstrumentLeg_3.insert(EncodedLegSecurityDescLen_3.getString());
    FIX::LegCFICode LegCFICode_3("STRING_709516916");
    noLegs_0_0.set(LegCFICode_3);
    InstrumentLeg_3.insert(LegCFICode_3.getString());
    FIX::LegContractMultiplier LegContractMultiplier_3;
    LegContractMultiplier_3.setString("16797260");
    noLegs_0_0.set(LegContractMultiplier_3);
    InstrumentLeg_3.insert(LegContractMultiplier_3.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_3(720316416);
    noLegs_0_0.set(LegContractMultiplierUnit_3);
    InstrumentLeg_3.insert(LegContractMultiplierUnit_3.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_3("MONTHYEAR_754312457");
    noLegs_0_0.set(LegContractSettlMonth_3);
    InstrumentLeg_3.insert(LegContractSettlMonth_3.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_3("COUNTRY_761591725");
    noLegs_0_0.set(LegCountryOfIssue_3);
    InstrumentLeg_3.insert(LegCountryOfIssue_3.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_3("LOCALMKTDATE_281602168");
    noLegs_0_0.set(LegCouponPaymentDate_3);
    InstrumentLeg_3.insert(LegCouponPaymentDate_3.getString());
    FIX::LegCouponRate LegCouponRate_3;
    LegCouponRate_3.setString("57.250000");
    noLegs_0_0.set(LegCouponRate_3);
    InstrumentLeg_3.insert(LegCouponRate_3.getString());
    FIX::LegCreditRating LegCreditRating_3("STRING_218240714");
    noLegs_0_0.set(LegCreditRating_3);
    InstrumentLeg_3.insert(LegCreditRating_3.getString());
    FIX::LegCurrency LegCurrency_3("CAN");
    noLegs_0_0.set(LegCurrency_3);
    InstrumentLeg_3.insert(LegCurrency_3.getString());
    FIX::LegDatedDate LegDatedDate_3("LOCALMKTDATE_1894877893");
    noLegs_0_0.set(LegDatedDate_3);
    InstrumentLeg_3.insert(LegDatedDate_3.getString());
    FIX::LegExerciseStyle LegExerciseStyle_3(1357708201);
    noLegs_0_0.set(LegExerciseStyle_3);
    InstrumentLeg_3.insert(LegExerciseStyle_3.getString());
    FIX::LegFactor LegFactor_3;
    LegFactor_3.setString("11416361");
    noLegs_0_0.set(LegFactor_3);
    InstrumentLeg_3.insert(LegFactor_3.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_3(112066316);
    noLegs_0_0.set(LegFlowScheduleType_3);
    InstrumentLeg_3.insert(LegFlowScheduleType_3.getString());
    FIX::LegInstrRegistry LegInstrRegistry_3("STRING_1187744635");
    noLegs_0_0.set(LegInstrRegistry_3);
    InstrumentLeg_3.insert(LegInstrRegistry_3.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_3("LOCALMKTDATE_170950236");
    noLegs_0_0.set(LegInterestAccrualDate_3);
    InstrumentLeg_3.insert(LegInterestAccrualDate_3.getString());
    FIX::LegIssueDate LegIssueDate_3("LOCALMKTDATE_1041712229");
    noLegs_0_0.set(LegIssueDate_3);
    InstrumentLeg_3.insert(LegIssueDate_3.getString());
    FIX::LegIssuer LegIssuer_3("STRING_1902965557");
    noLegs_0_0.set(LegIssuer_3);
    InstrumentLeg_3.insert(LegIssuer_3.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_3("STRING_288166316");
    noLegs_0_0.set(LegLocaleOfIssue_3);
    InstrumentLeg_3.insert(LegLocaleOfIssue_3.getString());
    FIX::LegMaturityDate LegMaturityDate_3("LOCALMKTDATE_175560772");
    noLegs_0_0.set(LegMaturityDate_3);
    InstrumentLeg_3.insert(LegMaturityDate_3.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_3("MONTHYEAR_712129330");
    noLegs_0_0.set(LegMaturityMonthYear_3);
    InstrumentLeg_3.insert(LegMaturityMonthYear_3.getString());
    FIX::LegMaturityTime LegMaturityTime_3("TZTIMEONLY_338090599");
    noLegs_0_0.set(LegMaturityTime_3);
    InstrumentLeg_3.insert(LegMaturityTime_3.getString());
    FIX::LegOptAttribute LegOptAttribute_3('1');
    noLegs_0_0.set(LegOptAttribute_3);
    InstrumentLeg_3.insert(LegOptAttribute_3.getString());
    FIX::LegOptionRatio LegOptionRatio_3;
    LegOptionRatio_3.setString("13953941");
    noLegs_0_0.set(LegOptionRatio_3);
    InstrumentLeg_3.insert(LegOptionRatio_3.getString());
    FIX::LegPool LegPool_3("STRING_373127372");
    noLegs_0_0.set(LegPool_3);
    InstrumentLeg_3.insert(LegPool_3.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_3("STRING_1995345997");
    noLegs_0_0.set(LegPriceUnitOfMeasure_3);
    InstrumentLeg_3.insert(LegPriceUnitOfMeasure_3.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_3;
    LegPriceUnitOfMeasureQty_3.setString("4690025");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_3);
    InstrumentLeg_3.insert(LegPriceUnitOfMeasureQty_3.getString());
    FIX::LegProduct LegProduct_3(1230737973);
    noLegs_0_0.set(LegProduct_3);
    InstrumentLeg_3.insert(LegProduct_3.getString());
    FIX::LegPutOrCall LegPutOrCall_3(500135726);
    noLegs_0_0.set(LegPutOrCall_3);
    InstrumentLeg_3.insert(LegPutOrCall_3.getString());
    FIX::LegRatioQty LegRatioQty_3;
    LegRatioQty_3.setString("1851602");
    noLegs_0_0.set(LegRatioQty_3);
    InstrumentLeg_3.insert(LegRatioQty_3.getString());
    FIX::LegRedemptionDate LegRedemptionDate_3("LOCALMKTDATE_343425216");
    noLegs_0_0.set(LegRedemptionDate_3);
    InstrumentLeg_3.insert(LegRedemptionDate_3.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_3("STRING_1209652643");
    noLegs_0_0.set(LegRepoCollateralSecurityType_3);
    InstrumentLeg_3.insert(LegRepoCollateralSecurityType_3.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_3;
    LegRepurchaseRate_3.setString("62.920000");
    noLegs_0_0.set(LegRepurchaseRate_3);
    InstrumentLeg_3.insert(LegRepurchaseRate_3.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_3(1063741632);
    noLegs_0_0.set(LegRepurchaseTerm_3);
    InstrumentLeg_3.insert(LegRepurchaseTerm_3.getString());
    FIX::LegSecurityDesc LegSecurityDesc_3("STRING_1963965100");
    noLegs_0_0.set(LegSecurityDesc_3);
    InstrumentLeg_3.insert(LegSecurityDesc_3.getString());
    FIX::LegSecurityExchange LegSecurityExchange_3("EXCHANGE_478994369");
    noLegs_0_0.set(LegSecurityExchange_3);
    InstrumentLeg_3.insert(LegSecurityExchange_3.getString());
    FIX::LegSecurityID LegSecurityID_3("STRING_1345343801");
    noLegs_0_0.set(LegSecurityID_3);
    InstrumentLeg_3.insert(LegSecurityID_3.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_3("STRING_198517177");
    noLegs_0_0.set(LegSecurityIDSource_3);
    InstrumentLeg_3.insert(LegSecurityIDSource_3.getString());
    FIX::LegSecuritySubType LegSecuritySubType_3("STRING_697235083");
    noLegs_0_0.set(LegSecuritySubType_3);
    InstrumentLeg_3.insert(LegSecuritySubType_3.getString());
    FIX::LegSecurityType LegSecurityType_3("STRING_221924958");
    noLegs_0_0.set(LegSecurityType_3);
    InstrumentLeg_3.insert(LegSecurityType_3.getString());
    FIX::LegSide LegSide_3('1');
    noLegs_0_0.set(LegSide_3);
    InstrumentLeg_3.insert(LegSide_3.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_3("STRING_444629328");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_3);
    InstrumentLeg_3.insert(LegStateOrProvinceOfIssue_3.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_3("CAN");
    noLegs_0_0.set(LegStrikeCurrency_3);
    InstrumentLeg_3.insert(LegStrikeCurrency_3.getString());
    FIX::LegStrikePrice LegStrikePrice_3;
    LegStrikePrice_3.setString("5566956");
    noLegs_0_0.set(LegStrikePrice_3);
    InstrumentLeg_3.insert(LegStrikePrice_3.getString());
    FIX::LegSymbol LegSymbol_3("STRING_619894147");
    noLegs_0_0.set(LegSymbol_3);
    InstrumentLeg_3.insert(LegSymbol_3.getString());
    FIX::LegSymbolSfx LegSymbolSfx_3("STRING_394643130");
    noLegs_0_0.set(LegSymbolSfx_3);
    InstrumentLeg_3.insert(LegSymbolSfx_3.getString());
    FIX::LegTimeUnit LegTimeUnit_3("STRING_1598407873");
    noLegs_0_0.set(LegTimeUnit_3);
    InstrumentLeg_3.insert(LegTimeUnit_3.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_3("STRING_375376056");
    noLegs_0_0.set(LegUnitOfMeasure_3);
    InstrumentLeg_3.insert(LegUnitOfMeasure_3.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_3;
    LegUnitOfMeasureQty_3.setString("6828094");
    noLegs_0_0.set(LegUnitOfMeasureQty_3);
    InstrumentLeg_3.insert(LegUnitOfMeasureQty_3.getString());
    all_values.push_back(InstrumentLeg_3);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_5;
      FIX::LegSecurityAltID LegSecurityAltID_5("STRING_1087505386");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_5);
      LegSecAltIDGrp_NoLegSecurityAltID_5.insert(LegSecurityAltID_5.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_5("STRING_1020900045");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_5);
      LegSecAltIDGrp_NoLegSecurityAltID_5.insert(LegSecurityAltIDSource_5.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_5);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_4;
    FIX::EncodedLegIssuer EncodedLegIssuer_4("DATA_1279089204");
    noLegs_0_1.set(EncodedLegIssuer_4);
    InstrumentLeg_4.insert(EncodedLegIssuer_4.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_4(335415938);
    noLegs_0_1.set(EncodedLegIssuerLen_4);
    InstrumentLeg_4.insert(EncodedLegIssuerLen_4.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_4("DATA_1394027418");
    noLegs_0_1.set(EncodedLegSecurityDesc_4);
    InstrumentLeg_4.insert(EncodedLegSecurityDesc_4.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_4(1126951553);
    noLegs_0_1.set(EncodedLegSecurityDescLen_4);
    InstrumentLeg_4.insert(EncodedLegSecurityDescLen_4.getString());
    FIX::LegCFICode LegCFICode_4("STRING_804418471");
    noLegs_0_1.set(LegCFICode_4);
    InstrumentLeg_4.insert(LegCFICode_4.getString());
    FIX::LegContractMultiplier LegContractMultiplier_4;
    LegContractMultiplier_4.setString("4772817");
    noLegs_0_1.set(LegContractMultiplier_4);
    InstrumentLeg_4.insert(LegContractMultiplier_4.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_4(1627087279);
    noLegs_0_1.set(LegContractMultiplierUnit_4);
    InstrumentLeg_4.insert(LegContractMultiplierUnit_4.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_4("MONTHYEAR_989578736");
    noLegs_0_1.set(LegContractSettlMonth_4);
    InstrumentLeg_4.insert(LegContractSettlMonth_4.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_4("COUNTRY_820706959");
    noLegs_0_1.set(LegCountryOfIssue_4);
    InstrumentLeg_4.insert(LegCountryOfIssue_4.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_4("LOCALMKTDATE_689256274");
    noLegs_0_1.set(LegCouponPaymentDate_4);
    InstrumentLeg_4.insert(LegCouponPaymentDate_4.getString());
    FIX::LegCouponRate LegCouponRate_4;
    LegCouponRate_4.setString("13.800000");
    noLegs_0_1.set(LegCouponRate_4);
    InstrumentLeg_4.insert(LegCouponRate_4.getString());
    FIX::LegCreditRating LegCreditRating_4("STRING_1884448591");
    noLegs_0_1.set(LegCreditRating_4);
    InstrumentLeg_4.insert(LegCreditRating_4.getString());
    FIX::LegCurrency LegCurrency_4("CAN");
    noLegs_0_1.set(LegCurrency_4);
    InstrumentLeg_4.insert(LegCurrency_4.getString());
    FIX::LegDatedDate LegDatedDate_4("LOCALMKTDATE_1082308744");
    noLegs_0_1.set(LegDatedDate_4);
    InstrumentLeg_4.insert(LegDatedDate_4.getString());
    FIX::LegExerciseStyle LegExerciseStyle_4(704254903);
    noLegs_0_1.set(LegExerciseStyle_4);
    InstrumentLeg_4.insert(LegExerciseStyle_4.getString());
    FIX::LegFactor LegFactor_4;
    LegFactor_4.setString("18832108");
    noLegs_0_1.set(LegFactor_4);
    InstrumentLeg_4.insert(LegFactor_4.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_4(1304233703);
    noLegs_0_1.set(LegFlowScheduleType_4);
    InstrumentLeg_4.insert(LegFlowScheduleType_4.getString());
    FIX::LegInstrRegistry LegInstrRegistry_4("STRING_1933795334");
    noLegs_0_1.set(LegInstrRegistry_4);
    InstrumentLeg_4.insert(LegInstrRegistry_4.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_4("LOCALMKTDATE_180356512");
    noLegs_0_1.set(LegInterestAccrualDate_4);
    InstrumentLeg_4.insert(LegInterestAccrualDate_4.getString());
    FIX::LegIssueDate LegIssueDate_4("LOCALMKTDATE_736383215");
    noLegs_0_1.set(LegIssueDate_4);
    InstrumentLeg_4.insert(LegIssueDate_4.getString());
    FIX::LegIssuer LegIssuer_4("STRING_10004579");
    noLegs_0_1.set(LegIssuer_4);
    InstrumentLeg_4.insert(LegIssuer_4.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_4("STRING_737052156");
    noLegs_0_1.set(LegLocaleOfIssue_4);
    InstrumentLeg_4.insert(LegLocaleOfIssue_4.getString());
    FIX::LegMaturityDate LegMaturityDate_4("LOCALMKTDATE_1356277362");
    noLegs_0_1.set(LegMaturityDate_4);
    InstrumentLeg_4.insert(LegMaturityDate_4.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_4("MONTHYEAR_404647709");
    noLegs_0_1.set(LegMaturityMonthYear_4);
    InstrumentLeg_4.insert(LegMaturityMonthYear_4.getString());
    FIX::LegMaturityTime LegMaturityTime_4("TZTIMEONLY_187976382");
    noLegs_0_1.set(LegMaturityTime_4);
    InstrumentLeg_4.insert(LegMaturityTime_4.getString());
    FIX::LegOptAttribute LegOptAttribute_4('1');
    noLegs_0_1.set(LegOptAttribute_4);
    InstrumentLeg_4.insert(LegOptAttribute_4.getString());
    FIX::LegOptionRatio LegOptionRatio_4;
    LegOptionRatio_4.setString("10874571");
    noLegs_0_1.set(LegOptionRatio_4);
    InstrumentLeg_4.insert(LegOptionRatio_4.getString());
    FIX::LegPool LegPool_4("STRING_1961945028");
    noLegs_0_1.set(LegPool_4);
    InstrumentLeg_4.insert(LegPool_4.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_4("STRING_671675157");
    noLegs_0_1.set(LegPriceUnitOfMeasure_4);
    InstrumentLeg_4.insert(LegPriceUnitOfMeasure_4.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_4;
    LegPriceUnitOfMeasureQty_4.setString("21083572");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_4);
    InstrumentLeg_4.insert(LegPriceUnitOfMeasureQty_4.getString());
    FIX::LegProduct LegProduct_4(1093550584);
    noLegs_0_1.set(LegProduct_4);
    InstrumentLeg_4.insert(LegProduct_4.getString());
    FIX::LegPutOrCall LegPutOrCall_4(1007091095);
    noLegs_0_1.set(LegPutOrCall_4);
    InstrumentLeg_4.insert(LegPutOrCall_4.getString());
    FIX::LegRatioQty LegRatioQty_4;
    LegRatioQty_4.setString("13549009");
    noLegs_0_1.set(LegRatioQty_4);
    InstrumentLeg_4.insert(LegRatioQty_4.getString());
    FIX::LegRedemptionDate LegRedemptionDate_4("LOCALMKTDATE_73018489");
    noLegs_0_1.set(LegRedemptionDate_4);
    InstrumentLeg_4.insert(LegRedemptionDate_4.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_4("STRING_1811509567");
    noLegs_0_1.set(LegRepoCollateralSecurityType_4);
    InstrumentLeg_4.insert(LegRepoCollateralSecurityType_4.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_4;
    LegRepurchaseRate_4.setString("27.140000");
    noLegs_0_1.set(LegRepurchaseRate_4);
    InstrumentLeg_4.insert(LegRepurchaseRate_4.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_4(1700105768);
    noLegs_0_1.set(LegRepurchaseTerm_4);
    InstrumentLeg_4.insert(LegRepurchaseTerm_4.getString());
    FIX::LegSecurityDesc LegSecurityDesc_4("STRING_653604655");
    noLegs_0_1.set(LegSecurityDesc_4);
    InstrumentLeg_4.insert(LegSecurityDesc_4.getString());
    FIX::LegSecurityExchange LegSecurityExchange_4("EXCHANGE_505406025");
    noLegs_0_1.set(LegSecurityExchange_4);
    InstrumentLeg_4.insert(LegSecurityExchange_4.getString());
    FIX::LegSecurityID LegSecurityID_4("STRING_241878395");
    noLegs_0_1.set(LegSecurityID_4);
    InstrumentLeg_4.insert(LegSecurityID_4.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_4("STRING_1360586036");
    noLegs_0_1.set(LegSecurityIDSource_4);
    InstrumentLeg_4.insert(LegSecurityIDSource_4.getString());
    FIX::LegSecuritySubType LegSecuritySubType_4("STRING_242370969");
    noLegs_0_1.set(LegSecuritySubType_4);
    InstrumentLeg_4.insert(LegSecuritySubType_4.getString());
    FIX::LegSecurityType LegSecurityType_4("STRING_747616121");
    noLegs_0_1.set(LegSecurityType_4);
    InstrumentLeg_4.insert(LegSecurityType_4.getString());
    FIX::LegSide LegSide_4('3');
    noLegs_0_1.set(LegSide_4);
    InstrumentLeg_4.insert(LegSide_4.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_4("STRING_1324679713");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_4);
    InstrumentLeg_4.insert(LegStateOrProvinceOfIssue_4.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_4("JPY");
    noLegs_0_1.set(LegStrikeCurrency_4);
    InstrumentLeg_4.insert(LegStrikeCurrency_4.getString());
    FIX::LegStrikePrice LegStrikePrice_4;
    LegStrikePrice_4.setString("4814297");
    noLegs_0_1.set(LegStrikePrice_4);
    InstrumentLeg_4.insert(LegStrikePrice_4.getString());
    FIX::LegSymbol LegSymbol_4("STRING_1238182711");
    noLegs_0_1.set(LegSymbol_4);
    InstrumentLeg_4.insert(LegSymbol_4.getString());
    FIX::LegSymbolSfx LegSymbolSfx_4("STRING_315161834");
    noLegs_0_1.set(LegSymbolSfx_4);
    InstrumentLeg_4.insert(LegSymbolSfx_4.getString());
    FIX::LegTimeUnit LegTimeUnit_4("STRING_1217812983");
    noLegs_0_1.set(LegTimeUnit_4);
    InstrumentLeg_4.insert(LegTimeUnit_4.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_4("STRING_1248187290");
    noLegs_0_1.set(LegUnitOfMeasure_4);
    InstrumentLeg_4.insert(LegUnitOfMeasure_4.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_4;
    LegUnitOfMeasureQty_4.setString("10522139");
    noLegs_0_1.set(LegUnitOfMeasureQty_4);
    InstrumentLeg_4.insert(LegUnitOfMeasureQty_4.getString());
    all_values.push_back(InstrumentLeg_4);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_6;
      FIX::LegSecurityAltID LegSecurityAltID_6("STRING_1652835000");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_6);
      LegSecAltIDGrp_NoLegSecurityAltID_6.insert(LegSecurityAltID_6.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_6("STRING_1240190373");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_6);
      LegSecAltIDGrp_NoLegSecurityAltID_6.insert(LegSecurityAltIDSource_6.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_6);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_7;
      FIX::LegSecurityAltID LegSecurityAltID_7("STRING_10776469");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_7);
      LegSecAltIDGrp_NoLegSecurityAltID_7.insert(LegSecurityAltID_7.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_7("STRING_592808508");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_7);
      LegSecAltIDGrp_NoLegSecurityAltID_7.insert(LegSecurityAltIDSource_7.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_7);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_8;
      FIX::LegSecurityAltID LegSecurityAltID_8("STRING_1054651753");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_8);
      LegSecAltIDGrp_NoLegSecurityAltID_8.insert(LegSecurityAltID_8.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_8("STRING_682451626");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_8);
      LegSecAltIDGrp_NoLegSecurityAltID_8.insert(LegSecurityAltIDSource_8.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_8);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_5;
    FIX::EncodedLegIssuer EncodedLegIssuer_5("DATA_553682061");
    noLegs_0_2.set(EncodedLegIssuer_5);
    InstrumentLeg_5.insert(EncodedLegIssuer_5.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_5(718689);
    noLegs_0_2.set(EncodedLegIssuerLen_5);
    InstrumentLeg_5.insert(EncodedLegIssuerLen_5.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_5("DATA_1689542722");
    noLegs_0_2.set(EncodedLegSecurityDesc_5);
    InstrumentLeg_5.insert(EncodedLegSecurityDesc_5.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_5(1908583033);
    noLegs_0_2.set(EncodedLegSecurityDescLen_5);
    InstrumentLeg_5.insert(EncodedLegSecurityDescLen_5.getString());
    FIX::LegCFICode LegCFICode_5("STRING_73737178");
    noLegs_0_2.set(LegCFICode_5);
    InstrumentLeg_5.insert(LegCFICode_5.getString());
    FIX::LegContractMultiplier LegContractMultiplier_5;
    LegContractMultiplier_5.setString("13535686");
    noLegs_0_2.set(LegContractMultiplier_5);
    InstrumentLeg_5.insert(LegContractMultiplier_5.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_5(1593282099);
    noLegs_0_2.set(LegContractMultiplierUnit_5);
    InstrumentLeg_5.insert(LegContractMultiplierUnit_5.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_5("MONTHYEAR_1773842946");
    noLegs_0_2.set(LegContractSettlMonth_5);
    InstrumentLeg_5.insert(LegContractSettlMonth_5.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_5("COUNTRY_2007173296");
    noLegs_0_2.set(LegCountryOfIssue_5);
    InstrumentLeg_5.insert(LegCountryOfIssue_5.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_5("LOCALMKTDATE_2098688125");
    noLegs_0_2.set(LegCouponPaymentDate_5);
    InstrumentLeg_5.insert(LegCouponPaymentDate_5.getString());
    FIX::LegCouponRate LegCouponRate_5;
    LegCouponRate_5.setString("13.410000");
    noLegs_0_2.set(LegCouponRate_5);
    InstrumentLeg_5.insert(LegCouponRate_5.getString());
    FIX::LegCreditRating LegCreditRating_5("STRING_1220275684");
    noLegs_0_2.set(LegCreditRating_5);
    InstrumentLeg_5.insert(LegCreditRating_5.getString());
    FIX::LegCurrency LegCurrency_5("CHF");
    noLegs_0_2.set(LegCurrency_5);
    InstrumentLeg_5.insert(LegCurrency_5.getString());
    FIX::LegDatedDate LegDatedDate_5("LOCALMKTDATE_1619353822");
    noLegs_0_2.set(LegDatedDate_5);
    InstrumentLeg_5.insert(LegDatedDate_5.getString());
    FIX::LegExerciseStyle LegExerciseStyle_5(1518255159);
    noLegs_0_2.set(LegExerciseStyle_5);
    InstrumentLeg_5.insert(LegExerciseStyle_5.getString());
    FIX::LegFactor LegFactor_5;
    LegFactor_5.setString("20677248");
    noLegs_0_2.set(LegFactor_5);
    InstrumentLeg_5.insert(LegFactor_5.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_5(1754159144);
    noLegs_0_2.set(LegFlowScheduleType_5);
    InstrumentLeg_5.insert(LegFlowScheduleType_5.getString());
    FIX::LegInstrRegistry LegInstrRegistry_5("STRING_1999684928");
    noLegs_0_2.set(LegInstrRegistry_5);
    InstrumentLeg_5.insert(LegInstrRegistry_5.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_5("LOCALMKTDATE_1158423903");
    noLegs_0_2.set(LegInterestAccrualDate_5);
    InstrumentLeg_5.insert(LegInterestAccrualDate_5.getString());
    FIX::LegIssueDate LegIssueDate_5("LOCALMKTDATE_2069320978");
    noLegs_0_2.set(LegIssueDate_5);
    InstrumentLeg_5.insert(LegIssueDate_5.getString());
    FIX::LegIssuer LegIssuer_5("STRING_1070014263");
    noLegs_0_2.set(LegIssuer_5);
    InstrumentLeg_5.insert(LegIssuer_5.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_5("STRING_259127545");
    noLegs_0_2.set(LegLocaleOfIssue_5);
    InstrumentLeg_5.insert(LegLocaleOfIssue_5.getString());
    FIX::LegMaturityDate LegMaturityDate_5("LOCALMKTDATE_974051321");
    noLegs_0_2.set(LegMaturityDate_5);
    InstrumentLeg_5.insert(LegMaturityDate_5.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_5("MONTHYEAR_1496620961");
    noLegs_0_2.set(LegMaturityMonthYear_5);
    InstrumentLeg_5.insert(LegMaturityMonthYear_5.getString());
    FIX::LegMaturityTime LegMaturityTime_5("TZTIMEONLY_1911962545");
    noLegs_0_2.set(LegMaturityTime_5);
    InstrumentLeg_5.insert(LegMaturityTime_5.getString());
    FIX::LegOptAttribute LegOptAttribute_5('6');
    noLegs_0_2.set(LegOptAttribute_5);
    InstrumentLeg_5.insert(LegOptAttribute_5.getString());
    FIX::LegOptionRatio LegOptionRatio_5;
    LegOptionRatio_5.setString("15073974");
    noLegs_0_2.set(LegOptionRatio_5);
    InstrumentLeg_5.insert(LegOptionRatio_5.getString());
    FIX::LegPool LegPool_5("STRING_357287405");
    noLegs_0_2.set(LegPool_5);
    InstrumentLeg_5.insert(LegPool_5.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_5("STRING_1121409799");
    noLegs_0_2.set(LegPriceUnitOfMeasure_5);
    InstrumentLeg_5.insert(LegPriceUnitOfMeasure_5.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_5;
    LegPriceUnitOfMeasureQty_5.setString("423654");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_5);
    InstrumentLeg_5.insert(LegPriceUnitOfMeasureQty_5.getString());
    FIX::LegProduct LegProduct_5(910969467);
    noLegs_0_2.set(LegProduct_5);
    InstrumentLeg_5.insert(LegProduct_5.getString());
    FIX::LegPutOrCall LegPutOrCall_5(1122128488);
    noLegs_0_2.set(LegPutOrCall_5);
    InstrumentLeg_5.insert(LegPutOrCall_5.getString());
    FIX::LegRatioQty LegRatioQty_5;
    LegRatioQty_5.setString("17319081");
    noLegs_0_2.set(LegRatioQty_5);
    InstrumentLeg_5.insert(LegRatioQty_5.getString());
    FIX::LegRedemptionDate LegRedemptionDate_5("LOCALMKTDATE_672068852");
    noLegs_0_2.set(LegRedemptionDate_5);
    InstrumentLeg_5.insert(LegRedemptionDate_5.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_5("STRING_1195865666");
    noLegs_0_2.set(LegRepoCollateralSecurityType_5);
    InstrumentLeg_5.insert(LegRepoCollateralSecurityType_5.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_5;
    LegRepurchaseRate_5.setString("31.240000");
    noLegs_0_2.set(LegRepurchaseRate_5);
    InstrumentLeg_5.insert(LegRepurchaseRate_5.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_5(117867303);
    noLegs_0_2.set(LegRepurchaseTerm_5);
    InstrumentLeg_5.insert(LegRepurchaseTerm_5.getString());
    FIX::LegSecurityDesc LegSecurityDesc_5("STRING_822224965");
    noLegs_0_2.set(LegSecurityDesc_5);
    InstrumentLeg_5.insert(LegSecurityDesc_5.getString());
    FIX::LegSecurityExchange LegSecurityExchange_5("EXCHANGE_797682772");
    noLegs_0_2.set(LegSecurityExchange_5);
    InstrumentLeg_5.insert(LegSecurityExchange_5.getString());
    FIX::LegSecurityID LegSecurityID_5("STRING_69071780");
    noLegs_0_2.set(LegSecurityID_5);
    InstrumentLeg_5.insert(LegSecurityID_5.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_5("STRING_690462658");
    noLegs_0_2.set(LegSecurityIDSource_5);
    InstrumentLeg_5.insert(LegSecurityIDSource_5.getString());
    FIX::LegSecuritySubType LegSecuritySubType_5("STRING_2017958457");
    noLegs_0_2.set(LegSecuritySubType_5);
    InstrumentLeg_5.insert(LegSecuritySubType_5.getString());
    FIX::LegSecurityType LegSecurityType_5("STRING_262647226");
    noLegs_0_2.set(LegSecurityType_5);
    InstrumentLeg_5.insert(LegSecurityType_5.getString());
    FIX::LegSide LegSide_5('1');
    noLegs_0_2.set(LegSide_5);
    InstrumentLeg_5.insert(LegSide_5.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_5("STRING_1489828631");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_5);
    InstrumentLeg_5.insert(LegStateOrProvinceOfIssue_5.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_5("CHF");
    noLegs_0_2.set(LegStrikeCurrency_5);
    InstrumentLeg_5.insert(LegStrikeCurrency_5.getString());
    FIX::LegStrikePrice LegStrikePrice_5;
    LegStrikePrice_5.setString("10965041");
    noLegs_0_2.set(LegStrikePrice_5);
    InstrumentLeg_5.insert(LegStrikePrice_5.getString());
    FIX::LegSymbol LegSymbol_5("STRING_1633103666");
    noLegs_0_2.set(LegSymbol_5);
    InstrumentLeg_5.insert(LegSymbol_5.getString());
    FIX::LegSymbolSfx LegSymbolSfx_5("STRING_237497920");
    noLegs_0_2.set(LegSymbolSfx_5);
    InstrumentLeg_5.insert(LegSymbolSfx_5.getString());
    FIX::LegTimeUnit LegTimeUnit_5("STRING_1018341457");
    noLegs_0_2.set(LegTimeUnit_5);
    InstrumentLeg_5.insert(LegTimeUnit_5.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_5("STRING_555634281");
    noLegs_0_2.set(LegUnitOfMeasure_5);
    InstrumentLeg_5.insert(LegUnitOfMeasure_5.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_5;
    LegUnitOfMeasureQty_5.setString("4966254");
    noLegs_0_2.set(LegUnitOfMeasureQty_5);
    InstrumentLeg_5.insert(LegUnitOfMeasureQty_5.getString());
    all_values.push_back(InstrumentLeg_5);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_9;
      FIX::LegSecurityAltID LegSecurityAltID_9("STRING_2052255243");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_9);
      LegSecAltIDGrp_NoLegSecurityAltID_9.insert(LegSecurityAltID_9.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_9("STRING_261104363");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_9);
      LegSecAltIDGrp_NoLegSecurityAltID_9.insert(LegSecurityAltIDSource_9.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_9);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_10;
      FIX::LegSecurityAltID LegSecurityAltID_10("STRING_2059150825");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_10);
      LegSecAltIDGrp_NoLegSecurityAltID_10.insert(LegSecurityAltID_10.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_10("STRING_1412169025");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_10);
      LegSecAltIDGrp_NoLegSecurityAltID_10.insert(LegSecurityAltIDSource_10.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_10);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_5;
  FIX::AttachmentPoint AttachmentPoint_5;
  AttachmentPoint_5.setString("17.690000");
  msg.set(AttachmentPoint_5);
  Instrument_5.insert(AttachmentPoint_5.getString());
  FIX::CFICode CFICode_5("STRING_1033076977");
  msg.set(CFICode_5);
  Instrument_5.insert(CFICode_5.getString());
  FIX::CPProgram CPProgram_5(2);
  msg.set(CPProgram_5);
  Instrument_5.insert(CPProgram_5.getString());
  FIX::CPRegType CPRegType_5("STRING_1529361236");
  msg.set(CPRegType_5);
  Instrument_5.insert(CPRegType_5.getString());
  FIX::CapPrice CapPrice_5;
  CapPrice_5.setString("77218");
  msg.set(CapPrice_5);
  Instrument_5.insert(CapPrice_5.getString());
  FIX::ContractMultiplier ContractMultiplier_5;
  ContractMultiplier_5.setString("10389589");
  msg.set(ContractMultiplier_5);
  Instrument_5.insert(ContractMultiplier_5.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_5(2);
  msg.set(ContractMultiplierUnit_5);
  Instrument_5.insert(ContractMultiplierUnit_5.getString());
  FIX::ContractSettlMonth ContractSettlMonth_5("MONTHYEAR_1203587484");
  msg.set(ContractSettlMonth_5);
  Instrument_5.insert(ContractSettlMonth_5.getString());
  FIX::CountryOfIssue CountryOfIssue_5("COUNTRY_1976952041");
  msg.set(CountryOfIssue_5);
  Instrument_5.insert(CountryOfIssue_5.getString());
  FIX::CouponPaymentDate CouponPaymentDate_5("LOCALMKTDATE_171813743");
  msg.set(CouponPaymentDate_5);
  Instrument_5.insert(CouponPaymentDate_5.getString());
  FIX::CouponRate CouponRate_5;
  CouponRate_5.setString("24.490000");
  msg.set(CouponRate_5);
  Instrument_5.insert(CouponRate_5.getString());
  FIX::CreditRating CreditRating_5("STRING_627151166");
  msg.set(CreditRating_5);
  Instrument_5.insert(CreditRating_5.getString());
  FIX::DatedDate DatedDate_5("LOCALMKTDATE_240885524");
  msg.set(DatedDate_5);
  Instrument_5.insert(DatedDate_5.getString());
  FIX::DetachmentPoint DetachmentPoint_5;
  DetachmentPoint_5.setString("14.590000");
  msg.set(DetachmentPoint_5);
  Instrument_5.insert(DetachmentPoint_5.getString());
  FIX::EncodedIssuer EncodedIssuer_5("DATA_497625975");
  msg.set(EncodedIssuer_5);
  Instrument_5.insert(EncodedIssuer_5.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_5(503532750);
  msg.set(EncodedIssuerLen_5);
  Instrument_5.insert(EncodedIssuerLen_5.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_5("DATA_1875107933");
  msg.set(EncodedSecurityDesc_5);
  Instrument_5.insert(EncodedSecurityDesc_5.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_5(1987454606);
  msg.set(EncodedSecurityDescLen_5);
  Instrument_5.insert(EncodedSecurityDescLen_5.getString());
  FIX::ExerciseStyle ExerciseStyle_5(0);
  msg.set(ExerciseStyle_5);
  Instrument_5.insert(ExerciseStyle_5.getString());
  FIX::Factor Factor_5;
  Factor_5.setString("9541819");
  msg.set(Factor_5);
  Instrument_5.insert(Factor_5.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_5(false);
  msg.set(FlexProductEligibilityIndicator_5);
  Instrument_5.insert(FlexProductEligibilityIndicator_5.getString());
  FIX::FlexibleIndicator FlexibleIndicator_5(true);
  msg.set(FlexibleIndicator_5);
  Instrument_5.insert(FlexibleIndicator_5.getString());
  FIX::FloorPrice FloorPrice_5;
  FloorPrice_5.setString("11916798");
  msg.set(FloorPrice_5);
  Instrument_5.insert(FloorPrice_5.getString());
  FIX::FlowScheduleType FlowScheduleType_5(2);
  msg.set(FlowScheduleType_5);
  Instrument_5.insert(FlowScheduleType_5.getString());
  FIX::InstrRegistry InstrRegistry_5("STRING_178205788");
  msg.set(InstrRegistry_5);
  Instrument_5.insert(InstrRegistry_5.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_5('1');
  msg.set(InstrmtAssignmentMethod_5);
  Instrument_5.insert(InstrmtAssignmentMethod_5.getString());
  FIX::InterestAccrualDate InterestAccrualDate_5("LOCALMKTDATE_1799725673");
  msg.set(InterestAccrualDate_5);
  Instrument_5.insert(InterestAccrualDate_5.getString());
  FIX::IssueDate IssueDate_5("LOCALMKTDATE_82977383");
  msg.set(IssueDate_5);
  Instrument_5.insert(IssueDate_5.getString());
  FIX::Issuer Issuer_5("STRING_1949409700");
  msg.set(Issuer_5);
  Instrument_5.insert(Issuer_5.getString());
  FIX::ListMethod ListMethod_5(1);
  msg.set(ListMethod_5);
  Instrument_5.insert(ListMethod_5.getString());
  FIX::LocaleOfIssue LocaleOfIssue_5("STRING_1495146408");
  msg.set(LocaleOfIssue_5);
  Instrument_5.insert(LocaleOfIssue_5.getString());
  FIX::MaturityDate MaturityDate_5("LOCALMKTDATE_420317821");
  msg.set(MaturityDate_5);
  Instrument_5.insert(MaturityDate_5.getString());
  FIX::MaturityMonthYear MaturityMonthYear_5("MONTHYEAR_596986180");
  msg.set(MaturityMonthYear_5);
  Instrument_5.insert(MaturityMonthYear_5.getString());
  FIX::MaturityTime MaturityTime_5("TZTIMEONLY_802197195");
  msg.set(MaturityTime_5);
  Instrument_5.insert(MaturityTime_5.getString());
  FIX::MinPriceIncrement MinPriceIncrement_5;
  MinPriceIncrement_5.setString("19496790");
  msg.set(MinPriceIncrement_5);
  Instrument_5.insert(MinPriceIncrement_5.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_5;
  MinPriceIncrementAmount_5.setString("6047079");
  msg.set(MinPriceIncrementAmount_5);
  Instrument_5.insert(MinPriceIncrementAmount_5.getString());
  FIX::NTPositionLimit NTPositionLimit_5(1841156112);
  msg.set(NTPositionLimit_5);
  Instrument_5.insert(NTPositionLimit_5.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_5;
  NotionalPercentageOutstanding_5.setString("54.970000");
  msg.set(NotionalPercentageOutstanding_5);
  Instrument_5.insert(NotionalPercentageOutstanding_5.getString());
  FIX::OptAttribute OptAttribute_5('1');
  msg.set(OptAttribute_5);
  Instrument_5.insert(OptAttribute_5.getString());
  FIX::OptPayoutAmount OptPayoutAmount_5;
  OptPayoutAmount_5.setString("16706245");
  msg.set(OptPayoutAmount_5);
  Instrument_5.insert(OptPayoutAmount_5.getString());
  FIX::OptPayoutType OptPayoutType_5(1);
  msg.set(OptPayoutType_5);
  Instrument_5.insert(OptPayoutType_5.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_5;
  OriginalNotionalPercentageOutstanding_5.setString("42.820000");
  msg.set(OriginalNotionalPercentageOutstanding_5);
  Instrument_5.insert(OriginalNotionalPercentageOutstanding_5.getString());
  FIX::Pool Pool_5("STRING_150292024");
  msg.set(Pool_5);
  Instrument_5.insert(Pool_5.getString());
  FIX::PositionLimit PositionLimit_5(268841117);
  msg.set(PositionLimit_5);
  Instrument_5.insert(PositionLimit_5.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_5("STRING_INT");
  msg.set(PriceQuoteMethod_5);
  Instrument_5.insert(PriceQuoteMethod_5.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_5("STRING_647917999");
  msg.set(PriceUnitOfMeasure_5);
  Instrument_5.insert(PriceUnitOfMeasure_5.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_5;
  PriceUnitOfMeasureQty_5.setString("7723738");
  msg.set(PriceUnitOfMeasureQty_5);
  Instrument_5.insert(PriceUnitOfMeasureQty_5.getString());
  FIX::Product Product_6(8);
  msg.set(Product_6);
  Instrument_5.insert(Product_6.getString());
  FIX::ProductComplex ProductComplex_5("STRING_487888957");
  msg.set(ProductComplex_5);
  Instrument_5.insert(ProductComplex_5.getString());
  FIX::PutOrCall PutOrCall_5(0);
  msg.set(PutOrCall_5);
  Instrument_5.insert(PutOrCall_5.getString());
  FIX::RedemptionDate RedemptionDate_5("LOCALMKTDATE_789738329");
  msg.set(RedemptionDate_5);
  Instrument_5.insert(RedemptionDate_5.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_5("STRING_1424364042");
  msg.set(RepoCollateralSecurityType_5);
  Instrument_5.insert(RepoCollateralSecurityType_5.getString());
  FIX::RepurchaseRate RepurchaseRate_5;
  RepurchaseRate_5.setString("68.620000");
  msg.set(RepurchaseRate_5);
  Instrument_5.insert(RepurchaseRate_5.getString());
  FIX::RepurchaseTerm RepurchaseTerm_5(1981418200);
  msg.set(RepurchaseTerm_5);
  Instrument_5.insert(RepurchaseTerm_5.getString());
  FIX::RestructuringType RestructuringType_5("STRING_FR");
  msg.set(RestructuringType_5);
  Instrument_5.insert(RestructuringType_5.getString());
  FIX::SecurityDesc SecurityDesc_5("STRING_710102650");
  msg.set(SecurityDesc_5);
  Instrument_5.insert(SecurityDesc_5.getString());
  FIX::SecurityExchange SecurityExchange_5("EXCHANGE_1522239889");
  msg.set(SecurityExchange_5);
  Instrument_5.insert(SecurityExchange_5.getString());
  FIX::SecurityGroup SecurityGroup_5("STRING_883938962");
  msg.set(SecurityGroup_5);
  Instrument_5.insert(SecurityGroup_5.getString());
  FIX::SecurityID SecurityID_5("STRING_793080033");
  msg.set(SecurityID_5);
  Instrument_5.insert(SecurityID_5.getString());
  FIX::SecurityIDSource SecurityIDSource_5("STRING_1");
  msg.set(SecurityIDSource_5);
  Instrument_5.insert(SecurityIDSource_5.getString());
  FIX::SecurityStatus SecurityStatus_5("STRING_2");
  msg.set(SecurityStatus_5);
  Instrument_5.insert(SecurityStatus_5.getString());
  FIX::SecuritySubType SecuritySubType_5("STRING_140742794");
  msg.set(SecuritySubType_5);
  Instrument_5.insert(SecuritySubType_5.getString());
  FIX::SecurityType SecurityType_6("STRING_CMO");
  msg.set(SecurityType_6);
  Instrument_5.insert(SecurityType_6.getString());
  FIX::Seniority Seniority_5("STRING_SD");
  msg.set(Seniority_5);
  Instrument_5.insert(Seniority_5.getString());
  FIX::SettlMethod SettlMethod_5('P');
  msg.set(SettlMethod_5);
  Instrument_5.insert(SettlMethod_5.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_5("STRING_1546679173");
  msg.set(SettleOnOpenFlag_5);
  Instrument_5.insert(SettleOnOpenFlag_5.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_5("STRING_1649542342");
  msg.set(StateOrProvinceOfIssue_5);
  Instrument_5.insert(StateOrProvinceOfIssue_5.getString());
  FIX::StrikeCurrency StrikeCurrency_5("JPY");
  msg.set(StrikeCurrency_5);
  Instrument_5.insert(StrikeCurrency_5.getString());
  FIX::StrikeMultiplier StrikeMultiplier_5;
  StrikeMultiplier_5.setString("13103541");
  msg.set(StrikeMultiplier_5);
  Instrument_5.insert(StrikeMultiplier_5.getString());
  FIX::StrikePrice StrikePrice_5;
  StrikePrice_5.setString("1597533");
  msg.set(StrikePrice_5);
  Instrument_5.insert(StrikePrice_5.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_5(1);
  msg.set(StrikePriceBoundaryMethod_5);
  Instrument_5.insert(StrikePriceBoundaryMethod_5.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_5;
  StrikePriceBoundaryPrecision_5.setString("48.100000");
  msg.set(StrikePriceBoundaryPrecision_5);
  Instrument_5.insert(StrikePriceBoundaryPrecision_5.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_5(4);
  msg.set(StrikePriceDeterminationMethod_5);
  Instrument_5.insert(StrikePriceDeterminationMethod_5.getString());
  FIX::StrikeValue StrikeValue_5;
  StrikeValue_5.setString("16996177");
  msg.set(StrikeValue_5);
  Instrument_5.insert(StrikeValue_5.getString());
  FIX::Symbol Symbol_5("STRING_957426904");
  msg.set(Symbol_5);
  Instrument_5.insert(Symbol_5.getString());
  FIX::SymbolSfx SymbolSfx_5("STRING_CD");
  msg.set(SymbolSfx_5);
  Instrument_5.insert(SymbolSfx_5.getString());
  FIX::TimeUnit TimeUnit_5("STRING_Yr");
  msg.set(TimeUnit_5);
  Instrument_5.insert(TimeUnit_5.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_5(4);
  msg.set(UnderlyingPriceDeterminationMethod_5);
  Instrument_5.insert(UnderlyingPriceDeterminationMethod_5.getString());
  FIX::UnitOfMeasure UnitOfMeasure_5("STRING_Bcf");
  msg.set(UnitOfMeasure_5);
  Instrument_5.insert(UnitOfMeasure_5.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_5;
  UnitOfMeasureQty_5.setString("12338333");
  msg.set(UnitOfMeasureQty_5);
  Instrument_5.insert(UnitOfMeasureQty_5.getString());
  FIX::ValuationMethod ValuationMethod_5("STRING_CDS");
  msg.set(ValuationMethod_5);
  Instrument_5.insert(ValuationMethod_5.getString());
  all_values.push_back(Instrument_5);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationInstructionAlert::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_9;
    FIX::ComplexEventCondition ComplexEventCondition_9(1);
    noComplexEvents_0_0.set(ComplexEventCondition_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventCondition_9.getString());
    FIX::ComplexEventPrice ComplexEventPrice_9;
    ComplexEventPrice_9.setString("14166561");
    noComplexEvents_0_0.set(ComplexEventPrice_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPrice_9.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_9(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPriceBoundaryMethod_9.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_9;
    ComplexEventPriceBoundaryPrecision_9.setString("91.730000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPriceBoundaryPrecision_9.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_9(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPriceTimeType_9.getString());
    FIX::ComplexEventType ComplexEventType_9(9);
    noComplexEvents_0_0.set(ComplexEventType_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventType_9.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_9;
    ComplexOptPayoutAmount_9.setString("11214292");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexOptPayoutAmount_9.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_9);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_15;
      FIX::ComplexEventEndDate ComplexEventEndDate_15(FIX::UTCTIMESTAMP(0, 24, 38, 1, 6, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_15);
      ComplexEventDates_NoComplexEventDates_15.insert(ComplexEventEndDate_15.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_15(FIX::UTCTIMESTAMP(20, 8, 6, 27, 12, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_15);
      ComplexEventDates_NoComplexEventDates_15.insert(ComplexEventStartDate_15.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_15);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_27;
        FIX::ComplexEventEndTime ComplexEventEndTime_27(FIX::UTCTIMEONLY(8, 36, 59));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_27);
        ComplexEventTimes_NoComplexEventTimes_27.insert(ComplexEventEndTime_27.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_27(FIX::UTCTIMEONLY(20, 24, 45));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_27);
        ComplexEventTimes_NoComplexEventTimes_27.insert(ComplexEventStartTime_27.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_27);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_28;
        FIX::ComplexEventEndTime ComplexEventEndTime_28(FIX::UTCTIMEONLY(21, 39, 11));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_28);
        ComplexEventTimes_NoComplexEventTimes_28.insert(ComplexEventEndTime_28.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_28(FIX::UTCTIMEONLY(15, 58, 9));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_28);
        ComplexEventTimes_NoComplexEventTimes_28.insert(ComplexEventStartTime_28.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_28);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_29;
        FIX::ComplexEventEndTime ComplexEventEndTime_29(FIX::UTCTIMEONLY(2, 26, 6));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_29);
        ComplexEventTimes_NoComplexEventTimes_29.insert(ComplexEventEndTime_29.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_29(FIX::UTCTIMEONLY(7, 59, 7));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_29);
        ComplexEventTimes_NoComplexEventTimes_29.insert(ComplexEventStartTime_29.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_29);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AllocationInstructionAlert::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_12;
    FIX::EventDate EventDate_12("LOCALMKTDATE_2054907427");
    noEvents_0_0.set(EventDate_12);
    EvntGrp_NoEvents_12.insert(EventDate_12.getString());
    FIX::EventPx EventPx_12;
    EventPx_12.setString("4019725");
    noEvents_0_0.set(EventPx_12);
    EvntGrp_NoEvents_12.insert(EventPx_12.getString());
    FIX::EventText EventText_12("STRING_1459220111");
    noEvents_0_0.set(EventText_12);
    EvntGrp_NoEvents_12.insert(EventText_12.getString());
    FIX::EventTime EventTime_12(FIX::UTCTIMESTAMP(15, 47, 54, 20, 4, 2003));
    noEvents_0_0.set(EventTime_12);
    EvntGrp_NoEvents_12.insert(EventTime_12.getString());
    FIX::EventType EventType_12(9);
    noEvents_0_0.set(EventType_12);
    EvntGrp_NoEvents_12.insert(EventType_12.getString());
    all_values.push_back(EvntGrp_NoEvents_12);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_10;
    FIX::InstrumentPartyID InstrumentPartyID_10("STRING_2002940349");
    noInstrumentParties_0_0.set(InstrumentPartyID_10);
    InstrumentParties_NoInstrumentParties_10.insert(InstrumentPartyID_10.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_10('8');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_10);
    InstrumentParties_NoInstrumentParties_10.insert(InstrumentPartyIDSource_10.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_10(1328810769);
    noInstrumentParties_0_0.set(InstrumentPartyRole_10);
    InstrumentParties_NoInstrumentParties_10.insert(InstrumentPartyRole_10.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_10);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19;
      FIX::InstrumentPartySubID InstrumentPartySubID_19("STRING_611605757");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_19);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19.insert(InstrumentPartySubID_19.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_19(2036286141);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_19);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19.insert(InstrumentPartySubIDType_19.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_11;
    FIX::InstrumentPartyID InstrumentPartyID_11("STRING_657526111");
    noInstrumentParties_0_1.set(InstrumentPartyID_11);
    InstrumentParties_NoInstrumentParties_11.insert(InstrumentPartyID_11.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_11('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_11);
    InstrumentParties_NoInstrumentParties_11.insert(InstrumentPartyIDSource_11.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_11(1717707071);
    noInstrumentParties_0_1.set(InstrumentPartyRole_11);
    InstrumentParties_NoInstrumentParties_11.insert(InstrumentPartyRole_11.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_11);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20;
      FIX::InstrumentPartySubID InstrumentPartySubID_20("STRING_589757945");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_20);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20.insert(InstrumentPartySubID_20.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_20(513816353);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_20);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20.insert(InstrumentPartySubIDType_20.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21;
      FIX::InstrumentPartySubID InstrumentPartySubID_21("STRING_1752292146");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_21);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21.insert(InstrumentPartySubID_21.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_21(110542563);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_21);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21.insert(InstrumentPartySubIDType_21.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_12;
    FIX::InstrumentPartyID InstrumentPartyID_12("STRING_1515037625");
    noInstrumentParties_0_2.set(InstrumentPartyID_12);
    InstrumentParties_NoInstrumentParties_12.insert(InstrumentPartyID_12.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_12('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_12);
    InstrumentParties_NoInstrumentParties_12.insert(InstrumentPartyIDSource_12.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_12(1316953322);
    noInstrumentParties_0_2.set(InstrumentPartyRole_12);
    InstrumentParties_NoInstrumentParties_12.insert(InstrumentPartyRole_12.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_12);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22;
      FIX::InstrumentPartySubID InstrumentPartySubID_22("STRING_707845045");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_22);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22.insert(InstrumentPartySubID_22.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_22(1224377102);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_22);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22.insert(InstrumentPartySubIDType_22.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23;
      FIX::InstrumentPartySubID InstrumentPartySubID_23("STRING_1464988570");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_23);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23.insert(InstrumentPartySubID_23.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_23(19581508);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_23);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23.insert(InstrumentPartySubIDType_23.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationInstructionAlert::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_12;
    FIX::SecurityAltID SecurityAltID_12("STRING_883516889");
    noSecurityAltID_0_0.set(SecurityAltID_12);
    SecAltIDGrp_NoSecurityAltID_12.insert(SecurityAltID_12.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_12("STRING_681340035");
    noSecurityAltID_0_0.set(SecurityAltIDSource_12);
    SecAltIDGrp_NoSecurityAltID_12.insert(SecurityAltIDSource_12.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_12);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_13;
    FIX::SecurityAltID SecurityAltID_13("STRING_648175058");
    noSecurityAltID_0_1.set(SecurityAltID_13);
    SecAltIDGrp_NoSecurityAltID_13.insert(SecurityAltID_13.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_13("STRING_276564337");
    noSecurityAltID_0_1.set(SecurityAltIDSource_13);
    SecAltIDGrp_NoSecurityAltID_13.insert(SecurityAltIDSource_13.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_13);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_10;
  FIX::SecurityXML SecurityXML_11("XMLDATA_870144930");
  msg.set(SecurityXML_11);
  FIX::SecurityXMLLen SecurityXMLLen_5(1914959423);
  msg.set(SecurityXMLLen_5);
  FIX::SecurityXMLSchema SecurityXMLSchema_5("STRING_1089983205");
  msg.set(SecurityXMLSchema_5);
  SecurityXML_10.insert(SecurityXMLSchema_5.getString());
  all_values.push_back(SecurityXML_10);

  // InstrumentExtension
  multiset<string> InstrumentExtension_1;
  FIX::DeliveryForm DeliveryForm_1(2);
  msg.set(DeliveryForm_1);
  InstrumentExtension_1.insert(DeliveryForm_1.getString());
  FIX::PctAtRisk PctAtRisk_1;
  PctAtRisk_1.setString("61.240000");
  msg.set(PctAtRisk_1);
  InstrumentExtension_1.insert(PctAtRisk_1.getString());
  all_values.push_back(InstrumentExtension_1);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_2;
    FIX::InstrAttribType InstrAttribType_2(14);
    noInstrAttrib_0_0.set(InstrAttribType_2);
    AttrbGrp_NoInstrAttrib_2.insert(InstrAttribType_2.getString());
    FIX::InstrAttribValue InstrAttribValue_2("STRING_1631201327");
    noInstrAttrib_0_0.set(InstrAttribValue_2);
    AttrbGrp_NoInstrAttrib_2.insert(InstrAttribValue_2.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_2);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_3;
    FIX::InstrAttribType InstrAttribType_3(11);
    noInstrAttrib_0_1.set(InstrAttribType_3);
    AttrbGrp_NoInstrAttrib_3.insert(InstrAttribType_3.getString());
    FIX::InstrAttribValue InstrAttribValue_3("STRING_889959116");
    noInstrAttrib_0_1.set(InstrAttribValue_3);
    AttrbGrp_NoInstrAttrib_3.insert(InstrAttribValue_3.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_3);

    msg.addGroup(noInstrAttrib_0_1);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::AllocationInstructionAlert::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_3;
    FIX::ClOrdID ClOrdID_3("STRING_1468201764");
    noOrders_0_0.set(ClOrdID_3);
    OrdAllocGrp_NoOrders_3.insert(ClOrdID_3.getString());
    FIX::ListID ListID_3("STRING_460182539");
    noOrders_0_0.set(ListID_3);
    OrdAllocGrp_NoOrders_3.insert(ListID_3.getString());
    FIX::OrderAvgPx OrderAvgPx_3;
    OrderAvgPx_3.setString("15636055");
    noOrders_0_0.set(OrderAvgPx_3);
    OrdAllocGrp_NoOrders_3.insert(OrderAvgPx_3.getString());
    FIX::OrderBookingQty OrderBookingQty_3;
    OrderBookingQty_3.setString("20579597");
    noOrders_0_0.set(OrderBookingQty_3);
    OrdAllocGrp_NoOrders_3.insert(OrderBookingQty_3.getString());
    FIX::OrderID OrderID_3("STRING_973998892");
    noOrders_0_0.set(OrderID_3);
    OrdAllocGrp_NoOrders_3.insert(OrderID_3.getString());
    FIX::OrderQty OrderQty_3;
    OrderQty_3.setString("11684140");
    noOrders_0_0.set(OrderQty_3);
    OrdAllocGrp_NoOrders_3.insert(OrderQty_3.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_3("STRING_21018625");
    noOrders_0_0.set(SecondaryClOrdID_3);
    OrdAllocGrp_NoOrders_3.insert(SecondaryClOrdID_3.getString());
    FIX::SecondaryOrderID SecondaryOrderID_3("STRING_341552870");
    noOrders_0_0.set(SecondaryOrderID_3);
    OrdAllocGrp_NoOrders_3.insert(SecondaryOrderID_3.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_3);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_5;
      FIX::Nested2PartyID Nested2PartyID_5("STRING_1337971947");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_5);
      NestedParties2_NoNested2PartyIDs_5.insert(Nested2PartyID_5.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_5('1');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_5);
      NestedParties2_NoNested2PartyIDs_5.insert(Nested2PartyIDSource_5.getString());
      FIX::Nested2PartyRole Nested2PartyRole_5(775288320);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_5);
      NestedParties2_NoNested2PartyIDs_5.insert(Nested2PartyRole_5.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_5);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_11;
        FIX::Nested2PartySubID Nested2PartySubID_11("STRING_722073836");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_11);
        NstdPtys2SubGrp_NoNested2PartySubIDs_11.insert(Nested2PartySubID_11.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_11(794869829);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_11);
        NstdPtys2SubGrp_NoNested2PartySubIDs_11.insert(Nested2PartySubIDType_11.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_11);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_6;
      FIX::Nested2PartyID Nested2PartyID_6("STRING_1097174114");
      noNested2PartyIDs_0_1_1.set(Nested2PartyID_6);
      NestedParties2_NoNested2PartyIDs_6.insert(Nested2PartyID_6.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_6('1');
      noNested2PartyIDs_0_1_1.set(Nested2PartyIDSource_6);
      NestedParties2_NoNested2PartyIDs_6.insert(Nested2PartyIDSource_6.getString());
      FIX::Nested2PartyRole Nested2PartyRole_6(1476209864);
      noNested2PartyIDs_0_1_1.set(Nested2PartyRole_6);
      NestedParties2_NoNested2PartyIDs_6.insert(Nested2PartyRole_6.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_6);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_12;
        FIX::Nested2PartySubID Nested2PartySubID_12("STRING_1882155063");
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubID_12);
        NstdPtys2SubGrp_NoNested2PartySubIDs_12.insert(Nested2PartySubID_12.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_12(198871147);
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubIDType_12);
        NstdPtys2SubGrp_NoNested2PartySubIDs_12.insert(Nested2PartySubIDType_12.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_12);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_13;
        FIX::Nested2PartySubID Nested2PartySubID_13("STRING_1512824948");
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubID_13);
        NstdPtys2SubGrp_NoNested2PartySubIDs_13.insert(Nested2PartySubID_13.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_13(824654621);
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubIDType_13);
        NstdPtys2SubGrp_NoNested2PartySubIDs_13.insert(Nested2PartySubIDType_13.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_13);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_7;
      FIX::Nested2PartyID Nested2PartyID_7("STRING_2018700648");
      noNested2PartyIDs_0_1_2.set(Nested2PartyID_7);
      NestedParties2_NoNested2PartyIDs_7.insert(Nested2PartyID_7.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_7('1');
      noNested2PartyIDs_0_1_2.set(Nested2PartyIDSource_7);
      NestedParties2_NoNested2PartyIDs_7.insert(Nested2PartyIDSource_7.getString());
      FIX::Nested2PartyRole Nested2PartyRole_7(576193504);
      noNested2PartyIDs_0_1_2.set(Nested2PartyRole_7);
      NestedParties2_NoNested2PartyIDs_7.insert(Nested2PartyRole_7.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_7);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_14;
        FIX::Nested2PartySubID Nested2PartySubID_14("STRING_619475103");
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubID_14);
        NstdPtys2SubGrp_NoNested2PartySubIDs_14.insert(Nested2PartySubID_14.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_14(939338144);
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubIDType_14);
        NstdPtys2SubGrp_NoNested2PartySubIDs_14.insert(Nested2PartySubIDType_14.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_14);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_15;
        FIX::Nested2PartySubID Nested2PartySubID_15("STRING_1762332739");
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubID_15);
        NstdPtys2SubGrp_NoNested2PartySubIDs_15.insert(Nested2PartySubID_15.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_15(760718893);
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubIDType_15);
        NstdPtys2SubGrp_NoNested2PartySubIDs_15.insert(Nested2PartySubIDType_15.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_15);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_16;
        FIX::Nested2PartySubID Nested2PartySubID_16("STRING_260056260");
        noNested2PartySubIDs_0_2_2_2.set(Nested2PartySubID_16);
        NstdPtys2SubGrp_NoNested2PartySubIDs_16.insert(Nested2PartySubID_16.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_16(75031630);
        noNested2PartySubIDs_0_2_2_2.set(Nested2PartySubIDType_16);
        NstdPtys2SubGrp_NoNested2PartySubIDs_16.insert(Nested2PartySubIDType_16.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_16);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_4;
    FIX::ClOrdID ClOrdID_4("STRING_176840756");
    noOrders_0_1.set(ClOrdID_4);
    OrdAllocGrp_NoOrders_4.insert(ClOrdID_4.getString());
    FIX::ListID ListID_4("STRING_170532322");
    noOrders_0_1.set(ListID_4);
    OrdAllocGrp_NoOrders_4.insert(ListID_4.getString());
    FIX::OrderAvgPx OrderAvgPx_4;
    OrderAvgPx_4.setString("10490305");
    noOrders_0_1.set(OrderAvgPx_4);
    OrdAllocGrp_NoOrders_4.insert(OrderAvgPx_4.getString());
    FIX::OrderBookingQty OrderBookingQty_4;
    OrderBookingQty_4.setString("13452547");
    noOrders_0_1.set(OrderBookingQty_4);
    OrdAllocGrp_NoOrders_4.insert(OrderBookingQty_4.getString());
    FIX::OrderID OrderID_4("STRING_191550947");
    noOrders_0_1.set(OrderID_4);
    OrdAllocGrp_NoOrders_4.insert(OrderID_4.getString());
    FIX::OrderQty OrderQty_4;
    OrderQty_4.setString("13905833");
    noOrders_0_1.set(OrderQty_4);
    OrdAllocGrp_NoOrders_4.insert(OrderQty_4.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_4("STRING_1412698040");
    noOrders_0_1.set(SecondaryClOrdID_4);
    OrdAllocGrp_NoOrders_4.insert(SecondaryClOrdID_4.getString());
    FIX::SecondaryOrderID SecondaryOrderID_4("STRING_1529522894");
    noOrders_0_1.set(SecondaryOrderID_4);
    OrdAllocGrp_NoOrders_4.insert(SecondaryOrderID_4.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_4);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_8;
      FIX::Nested2PartyID Nested2PartyID_8("STRING_40502712");
      noNested2PartyIDs_1_1_0.set(Nested2PartyID_8);
      NestedParties2_NoNested2PartyIDs_8.insert(Nested2PartyID_8.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_8('1');
      noNested2PartyIDs_1_1_0.set(Nested2PartyIDSource_8);
      NestedParties2_NoNested2PartyIDs_8.insert(Nested2PartyIDSource_8.getString());
      FIX::Nested2PartyRole Nested2PartyRole_8(1369742496);
      noNested2PartyIDs_1_1_0.set(Nested2PartyRole_8);
      NestedParties2_NoNested2PartyIDs_8.insert(Nested2PartyRole_8.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_8);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_17;
        FIX::Nested2PartySubID Nested2PartySubID_17("STRING_894078762");
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubID_17);
        NstdPtys2SubGrp_NoNested2PartySubIDs_17.insert(Nested2PartySubID_17.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_17(827849574);
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubIDType_17);
        NstdPtys2SubGrp_NoNested2PartySubIDs_17.insert(Nested2PartySubIDType_17.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_17);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_18;
        FIX::Nested2PartySubID Nested2PartySubID_18("STRING_164098758");
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubID_18);
        NstdPtys2SubGrp_NoNested2PartySubIDs_18.insert(Nested2PartySubID_18.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_18(491944286);
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubIDType_18);
        NstdPtys2SubGrp_NoNested2PartySubIDs_18.insert(Nested2PartySubIDType_18.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_18);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_19;
        FIX::Nested2PartySubID Nested2PartySubID_19("STRING_562520989");
        noNested2PartySubIDs_1_0_2_2.set(Nested2PartySubID_19);
        NstdPtys2SubGrp_NoNested2PartySubIDs_19.insert(Nested2PartySubID_19.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_19(362969905);
        noNested2PartySubIDs_1_0_2_2.set(Nested2PartySubIDType_19);
        NstdPtys2SubGrp_NoNested2PartySubIDs_19.insert(Nested2PartySubIDType_19.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_19);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_2);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_0);
    }
    msg.addGroup(noOrders_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationInstructionAlert::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_5;
    FIX::PartyID PartyID_5("STRING_1387175610");
    noPartyIDs_0_0.set(PartyID_5);
    Parties_NoPartyIDs_5.insert(PartyID_5.getString());
    FIX::PartyIDSource PartyIDSource_5('B');
    noPartyIDs_0_0.set(PartyIDSource_5);
    Parties_NoPartyIDs_5.insert(PartyIDSource_5.getString());
    FIX::PartyRole PartyRole_5(53);
    noPartyIDs_0_0.set(PartyRole_5);
    Parties_NoPartyIDs_5.insert(PartyRole_5.getString());
    all_values.push_back(Parties_NoPartyIDs_5);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_11;
      FIX::PartySubID PartySubID_11("STRING_1106560529");
      noPartySubIDs_0_1_0.set(PartySubID_11);
      PtysSubGrp_NoPartySubIDs_11.insert(PartySubID_11.getString());
      FIX::PartySubIDType PartySubIDType_11(10);
      noPartySubIDs_0_1_0.set(PartySubIDType_11);
      PtysSubGrp_NoPartySubIDs_11.insert(PartySubIDType_11.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_11);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_12;
      FIX::PartySubID PartySubID_12("STRING_755223610");
      noPartySubIDs_0_1_1.set(PartySubID_12);
      PtysSubGrp_NoPartySubIDs_12.insert(PartySubID_12.getString());
      FIX::PartySubIDType PartySubIDType_12(20);
      noPartySubIDs_0_1_1.set(PartySubIDType_12);
      PtysSubGrp_NoPartySubIDs_12.insert(PartySubIDType_12.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_12);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_6;
    FIX::PartyID PartyID_6("STRING_225753360");
    noPartyIDs_0_1.set(PartyID_6);
    Parties_NoPartyIDs_6.insert(PartyID_6.getString());
    FIX::PartyIDSource PartyIDSource_6('1');
    noPartyIDs_0_1.set(PartyIDSource_6);
    Parties_NoPartyIDs_6.insert(PartyIDSource_6.getString());
    FIX::PartyRole PartyRole_6(41);
    noPartyIDs_0_1.set(PartyRole_6);
    Parties_NoPartyIDs_6.insert(PartyRole_6.getString());
    all_values.push_back(Parties_NoPartyIDs_6);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_13;
      FIX::PartySubID PartySubID_13("STRING_1185812193");
      noPartySubIDs_1_1_0.set(PartySubID_13);
      PtysSubGrp_NoPartySubIDs_13.insert(PartySubID_13.getString());
      FIX::PartySubIDType PartySubIDType_13(4);
      noPartySubIDs_1_1_0.set(PartySubIDType_13);
      PtysSubGrp_NoPartySubIDs_13.insert(PartySubIDType_13.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_13);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_14;
      FIX::PartySubID PartySubID_14("STRING_1747848881");
      noPartySubIDs_1_1_1.set(PartySubID_14);
      PtysSubGrp_NoPartySubIDs_14.insert(PartySubID_14.getString());
      FIX::PartySubIDType PartySubIDType_14(33);
      noPartySubIDs_1_1_1.set(PartySubIDType_14);
      PtysSubGrp_NoPartySubIDs_14.insert(PartySubIDType_14.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_14);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_15;
      FIX::PartySubID PartySubID_15("STRING_1088571519");
      noPartySubIDs_1_1_2.set(PartySubID_15);
      PtysSubGrp_NoPartySubIDs_15.insert(PartySubID_15.getString());
      FIX::PartySubIDType PartySubIDType_15(3);
      noPartySubIDs_1_1_2.set(PartySubIDType_15);
      PtysSubGrp_NoPartySubIDs_15.insert(PartySubIDType_15.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_15);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationInstructionAlert::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_1;
    FIX::PosAmt PosAmt_1;
    PosAmt_1.setString("17362401");
    noPosAmt_0_0.set(PosAmt_1);
    PositionAmountData_NoPosAmt_1.insert(PosAmt_1.getString());
    FIX::PosAmtType PosAmtType_1("STRING_CPN");
    noPosAmt_0_0.set(PosAmtType_1);
    PositionAmountData_NoPosAmt_1.insert(PosAmtType_1.getString());
    FIX::PositionCurrency PositionCurrency_1("STRING_556307034");
    noPosAmt_0_0.set(PositionCurrency_1);
    PositionAmountData_NoPosAmt_1.insert(PositionCurrency_1.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_1);

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_2;
    FIX::PosAmt PosAmt_2;
    PosAmt_2.setString("9584990");
    noPosAmt_0_1.set(PosAmt_2);
    PositionAmountData_NoPosAmt_2.insert(PosAmt_2.getString());
    FIX::PosAmtType PosAmtType_2("STRING_SMTM");
    noPosAmt_0_1.set(PosAmtType_2);
    PositionAmountData_NoPosAmt_2.insert(PosAmtType_2.getString());
    FIX::PositionCurrency PositionCurrency_2("STRING_1450385796");
    noPosAmt_0_1.set(PositionCurrency_2);
    PositionAmountData_NoPosAmt_2.insert(PositionCurrency_2.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_2);

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_3;
    FIX::PosAmt PosAmt_3;
    PosAmt_3.setString("17863486");
    noPosAmt_0_2.set(PosAmt_3);
    PositionAmountData_NoPosAmt_3.insert(PosAmt_3.getString());
    FIX::PosAmtType PosAmtType_3("STRING_COLAT");
    noPosAmt_0_2.set(PosAmtType_3);
    PositionAmountData_NoPosAmt_3.insert(PosAmtType_3.getString());
    FIX::PositionCurrency PositionCurrency_3("STRING_1942330083");
    noPosAmt_0_2.set(PositionCurrency_3);
    PositionAmountData_NoPosAmt_3.insert(PositionCurrency_3.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_3);

    msg.addGroup(noPosAmt_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_1;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_1("JPY");
  msg.set(BenchmarkCurveCurrency_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkCurveCurrency_1.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_1("STRING_LIBOR");
  msg.set(BenchmarkCurveName_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkCurveName_1.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_1("STRING_1588561552");
  msg.set(BenchmarkCurvePoint_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkCurvePoint_1.getString());
  FIX::BenchmarkPrice BenchmarkPrice_1;
  BenchmarkPrice_1.setString("5027104");
  msg.set(BenchmarkPrice_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkPrice_1.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_1(645175032);
  msg.set(BenchmarkPriceType_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkPriceType_1.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_1("STRING_1404447019");
  msg.set(BenchmarkSecurityID_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkSecurityID_1.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_1("STRING_1609270976");
  msg.set(BenchmarkSecurityIDSource_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkSecurityIDSource_1.getString());
  FIX::Spread Spread_1;
  Spread_1.setString("1102094");
  msg.set(Spread_1);
  SpreadOrBenchmarkCurveData_1.insert(Spread_1.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_1);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationInstructionAlert::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_3;
    FIX::StipulationType StipulationType_3("STRING_YTM");
    noStipulations_0_0.set(StipulationType_3);
    Stipulations_NoStipulations_3.insert(StipulationType_3.getString());
    FIX::StipulationValue StipulationValue_3("STRING_335962859");
    noStipulations_0_0.set(StipulationValue_3);
    Stipulations_NoStipulations_3.insert(StipulationValue_3.getString());
    all_values.push_back(Stipulations_NoStipulations_3);

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationInstructionAlert::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_4;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_4("DATA_979638200");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingIssuer_4.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_4(738556975);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingIssuerLen_4.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_4("DATA_65795397");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingSecurityDesc_4.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_4(677626326);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingSecurityDescLen_4.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_4;
    UnderlyingAdjustedQuantity_4.setString("3389222");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_4);
    UnderlyingInstrument_4.insert(UnderlyingAdjustedQuantity_4.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_4;
    UnderlyingAllocationPercent_4.setString("85.370000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_4);
    UnderlyingInstrument_4.insert(UnderlyingAllocationPercent_4.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_4;
    UnderlyingAttachmentPoint_4.setString("78.450000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_4);
    UnderlyingInstrument_4.insert(UnderlyingAttachmentPoint_4.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_4("STRING_1351985481");
    noUnderlyings_0_0.set(UnderlyingCFICode_4);
    UnderlyingInstrument_4.insert(UnderlyingCFICode_4.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_4("STRING_55077276");
    noUnderlyings_0_0.set(UnderlyingCPProgram_4);
    UnderlyingInstrument_4.insert(UnderlyingCPProgram_4.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_4("STRING_1354954375");
    noUnderlyings_0_0.set(UnderlyingCPRegType_4);
    UnderlyingInstrument_4.insert(UnderlyingCPRegType_4.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_4;
    UnderlyingCapValue_4.setString("2580678");
    noUnderlyings_0_0.set(UnderlyingCapValue_4);
    UnderlyingInstrument_4.insert(UnderlyingCapValue_4.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_4;
    UnderlyingCashAmount_4.setString("6113843");
    noUnderlyings_0_0.set(UnderlyingCashAmount_4);
    UnderlyingInstrument_4.insert(UnderlyingCashAmount_4.getString());
    FIX::UnderlyingCashType UnderlyingCashType_4("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_4);
    UnderlyingInstrument_4.insert(UnderlyingCashType_4.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_4;
    UnderlyingContractMultiplier_4.setString("21470063");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_4);
    UnderlyingInstrument_4.insert(UnderlyingContractMultiplier_4.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_4(2061770107);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_4);
    UnderlyingInstrument_4.insert(UnderlyingContractMultiplierUnit_4.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_4("COUNTRY_1952318354");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_4);
    UnderlyingInstrument_4.insert(UnderlyingCountryOfIssue_4.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_4("LOCALMKTDATE_2052559982");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_4);
    UnderlyingInstrument_4.insert(UnderlyingCouponPaymentDate_4.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_4;
    UnderlyingCouponRate_4.setString("65.420000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_4);
    UnderlyingInstrument_4.insert(UnderlyingCouponRate_4.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_4("STRING_6220648");
    noUnderlyings_0_0.set(UnderlyingCreditRating_4);
    UnderlyingInstrument_4.insert(UnderlyingCreditRating_4.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_4("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_4);
    UnderlyingInstrument_4.insert(UnderlyingCurrency_4.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_4;
    UnderlyingCurrentValue_4.setString("15947822");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_4);
    UnderlyingInstrument_4.insert(UnderlyingCurrentValue_4.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_4;
    UnderlyingDetachmentPoint_4.setString("3.240000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_4);
    UnderlyingInstrument_4.insert(UnderlyingDetachmentPoint_4.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_4;
    UnderlyingDirtyPrice_4.setString("64399");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_4);
    UnderlyingInstrument_4.insert(UnderlyingDirtyPrice_4.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_4;
    UnderlyingEndPrice_4.setString("8517455");
    noUnderlyings_0_0.set(UnderlyingEndPrice_4);
    UnderlyingInstrument_4.insert(UnderlyingEndPrice_4.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_4;
    UnderlyingEndValue_4.setString("1380976");
    noUnderlyings_0_0.set(UnderlyingEndValue_4);
    UnderlyingInstrument_4.insert(UnderlyingEndValue_4.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_4(116649447);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_4);
    UnderlyingInstrument_4.insert(UnderlyingExerciseStyle_4.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_4;
    UnderlyingFXRate_4.setString("8639325");
    noUnderlyings_0_0.set(UnderlyingFXRate_4);
    UnderlyingInstrument_4.insert(UnderlyingFXRate_4.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_4('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_4);
    UnderlyingInstrument_4.insert(UnderlyingFXRateCalc_4.getString());
    FIX::UnderlyingFactor UnderlyingFactor_4;
    UnderlyingFactor_4.setString("4526123");
    noUnderlyings_0_0.set(UnderlyingFactor_4);
    UnderlyingInstrument_4.insert(UnderlyingFactor_4.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_4(1891399406);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_4);
    UnderlyingInstrument_4.insert(UnderlyingFlowScheduleType_4.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_4("STRING_1300932801");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_4);
    UnderlyingInstrument_4.insert(UnderlyingInstrRegistry_4.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_4("LOCALMKTDATE_1191169281");
    noUnderlyings_0_0.set(UnderlyingIssueDate_4);
    UnderlyingInstrument_4.insert(UnderlyingIssueDate_4.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_4("STRING_1957194803");
    noUnderlyings_0_0.set(UnderlyingIssuer_4);
    UnderlyingInstrument_4.insert(UnderlyingIssuer_4.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_4("STRING_1978559127");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_4);
    UnderlyingInstrument_4.insert(UnderlyingLocaleOfIssue_4.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_4("LOCALMKTDATE_1530091489");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_4);
    UnderlyingInstrument_4.insert(UnderlyingMaturityDate_4.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_4("MONTHYEAR_1252869693");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_4);
    UnderlyingInstrument_4.insert(UnderlyingMaturityMonthYear_4.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_4("TZTIMEONLY_1597273324");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_4);
    UnderlyingInstrument_4.insert(UnderlyingMaturityTime_4.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_4;
    UnderlyingNotionalPercentageOutstanding_4.setString("33.220000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_4);
    UnderlyingInstrument_4.insert(UnderlyingNotionalPercentageOutstanding_4.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_4('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_4);
    UnderlyingInstrument_4.insert(UnderlyingOptAttribute_4.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_4;
    UnderlyingOriginalNotionalPercentageOutstanding_4.setString("40.520000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_4);
    UnderlyingInstrument_4.insert(UnderlyingOriginalNotionalPercentageOutstanding_4.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_4("STRING_992661140");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_4);
    UnderlyingInstrument_4.insert(UnderlyingPriceUnitOfMeasure_4.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_4;
    UnderlyingPriceUnitOfMeasureQty_4.setString("19193312");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_4);
    UnderlyingInstrument_4.insert(UnderlyingPriceUnitOfMeasureQty_4.getString());
    FIX::UnderlyingProduct UnderlyingProduct_4(970713806);
    noUnderlyings_0_0.set(UnderlyingProduct_4);
    UnderlyingInstrument_4.insert(UnderlyingProduct_4.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_4(992183838);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_4);
    UnderlyingInstrument_4.insert(UnderlyingPutOrCall_4.getString());
    FIX::UnderlyingPx UnderlyingPx_4;
    UnderlyingPx_4.setString("18336177");
    noUnderlyings_0_0.set(UnderlyingPx_4);
    UnderlyingInstrument_4.insert(UnderlyingPx_4.getString());
    FIX::UnderlyingQty UnderlyingQty_4;
    UnderlyingQty_4.setString("7755485");
    noUnderlyings_0_0.set(UnderlyingQty_4);
    UnderlyingInstrument_4.insert(UnderlyingQty_4.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_4("LOCALMKTDATE_897260172");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_4);
    UnderlyingInstrument_4.insert(UnderlyingRedemptionDate_4.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_4("STRING_1542750632");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_4);
    UnderlyingInstrument_4.insert(UnderlyingRepoCollateralSecurityType_4.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_4;
    UnderlyingRepurchaseRate_4.setString("91.610000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_4);
    UnderlyingInstrument_4.insert(UnderlyingRepurchaseRate_4.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_4(1070860049);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_4);
    UnderlyingInstrument_4.insert(UnderlyingRepurchaseTerm_4.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_4("STRING_904015548");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_4);
    UnderlyingInstrument_4.insert(UnderlyingRestructuringType_4.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_4("STRING_229067714");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityDesc_4.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_4("EXCHANGE_1747170373");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityExchange_4.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_4("STRING_910455496");
    noUnderlyings_0_0.set(UnderlyingSecurityID_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityID_4.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_4("STRING_1080813286");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityIDSource_4.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_4("STRING_1885268025");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_4);
    UnderlyingInstrument_4.insert(UnderlyingSecuritySubType_4.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_4("STRING_1027104943");
    noUnderlyings_0_0.set(UnderlyingSecurityType_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityType_4.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_4("STRING_1944745839");
    noUnderlyings_0_0.set(UnderlyingSeniority_4);
    UnderlyingInstrument_4.insert(UnderlyingSeniority_4.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_4("STRING_59078979");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_4);
    UnderlyingInstrument_4.insert(UnderlyingSettlMethod_4.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_4(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_4);
    UnderlyingInstrument_4.insert(UnderlyingSettlementType_4.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_4;
    UnderlyingStartValue_4.setString("16886615");
    noUnderlyings_0_0.set(UnderlyingStartValue_4);
    UnderlyingInstrument_4.insert(UnderlyingStartValue_4.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_4("STRING_1360011780");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_4);
    UnderlyingInstrument_4.insert(UnderlyingStateOrProvinceOfIssue_4.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_4("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_4);
    UnderlyingInstrument_4.insert(UnderlyingStrikeCurrency_4.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_4;
    UnderlyingStrikePrice_4.setString("11910872");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_4);
    UnderlyingInstrument_4.insert(UnderlyingStrikePrice_4.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_4("STRING_2053494371");
    noUnderlyings_0_0.set(UnderlyingSymbol_4);
    UnderlyingInstrument_4.insert(UnderlyingSymbol_4.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_4("STRING_603758798");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_4);
    UnderlyingInstrument_4.insert(UnderlyingSymbolSfx_4.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_4("STRING_640876936");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_4);
    UnderlyingInstrument_4.insert(UnderlyingTimeUnit_4.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_4("STRING_640604045");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_4);
    UnderlyingInstrument_4.insert(UnderlyingUnitOfMeasure_4.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_4;
    UnderlyingUnitOfMeasureQty_4.setString("19117057");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_4);
    UnderlyingInstrument_4.insert(UnderlyingUnitOfMeasureQty_4.getString());
    all_values.push_back(UnderlyingInstrument_4);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_9;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_9("STRING_1633265185");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_9);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_9.insert(UnderlyingSecurityAltID_9.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_9("STRING_1683553398");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_9);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_9.insert(UnderlyingSecurityAltIDSource_9.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_9);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_10;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_10("STRING_268851146");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_10);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_10.insert(UnderlyingSecurityAltID_10.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_10("STRING_477965375");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_10);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_10.insert(UnderlyingSecurityAltIDSource_10.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_10);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_11;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_11("STRING_1369687489");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_11);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_11.insert(UnderlyingSecurityAltID_11.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_11("STRING_1044399659");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_11);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_11.insert(UnderlyingSecurityAltIDSource_11.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_11);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_8;
      FIX::UnderlyingStipType UnderlyingStipType_8("STRING_764954473");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_8);
      UnderlyingStipulations_NoUnderlyingStips_8.insert(UnderlyingStipType_8.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_8("STRING_1826168820");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_8);
      UnderlyingStipulations_NoUnderlyingStips_8.insert(UnderlyingStipValue_8.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_8);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_9;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_9("STRING_1668970021");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_9);
      UndlyInstrumentParties_NoUndlyInstrumentParties_9.insert(UnderlyingInstrumentPartyID_9.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_9('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_9);
      UndlyInstrumentParties_NoUndlyInstrumentParties_9.insert(UnderlyingInstrumentPartyIDSource_9.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_9(2045772322);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_9);
      UndlyInstrumentParties_NoUndlyInstrumentParties_9.insert(UnderlyingInstrumentPartyRole_9.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_9);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_16("STRING_988566172");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_16);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16.insert(UnderlyingInstrumentPartySubID_16.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_16(1783556699);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_16);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16.insert(UnderlyingInstrumentPartySubIDType_16.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_5;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_5("DATA_1459046812");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingIssuer_5.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_5(785828363);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingIssuerLen_5.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_5("DATA_1842635678");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingSecurityDesc_5.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_5(791280413);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingSecurityDescLen_5.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_5;
    UnderlyingAdjustedQuantity_5.setString("3270063");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_5);
    UnderlyingInstrument_5.insert(UnderlyingAdjustedQuantity_5.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_5;
    UnderlyingAllocationPercent_5.setString("38.110000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_5);
    UnderlyingInstrument_5.insert(UnderlyingAllocationPercent_5.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_5;
    UnderlyingAttachmentPoint_5.setString("32.950000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_5);
    UnderlyingInstrument_5.insert(UnderlyingAttachmentPoint_5.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_5("STRING_1825379066");
    noUnderlyings_0_1.set(UnderlyingCFICode_5);
    UnderlyingInstrument_5.insert(UnderlyingCFICode_5.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_5("STRING_98767423");
    noUnderlyings_0_1.set(UnderlyingCPProgram_5);
    UnderlyingInstrument_5.insert(UnderlyingCPProgram_5.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_5("STRING_1220694018");
    noUnderlyings_0_1.set(UnderlyingCPRegType_5);
    UnderlyingInstrument_5.insert(UnderlyingCPRegType_5.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_5;
    UnderlyingCapValue_5.setString("2816542");
    noUnderlyings_0_1.set(UnderlyingCapValue_5);
    UnderlyingInstrument_5.insert(UnderlyingCapValue_5.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_5;
    UnderlyingCashAmount_5.setString("7396443");
    noUnderlyings_0_1.set(UnderlyingCashAmount_5);
    UnderlyingInstrument_5.insert(UnderlyingCashAmount_5.getString());
    FIX::UnderlyingCashType UnderlyingCashType_5("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_5);
    UnderlyingInstrument_5.insert(UnderlyingCashType_5.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_5;
    UnderlyingContractMultiplier_5.setString("458763");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_5);
    UnderlyingInstrument_5.insert(UnderlyingContractMultiplier_5.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_5(37781700);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_5);
    UnderlyingInstrument_5.insert(UnderlyingContractMultiplierUnit_5.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_5("COUNTRY_1347079601");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_5);
    UnderlyingInstrument_5.insert(UnderlyingCountryOfIssue_5.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_5("LOCALMKTDATE_1729429733");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_5);
    UnderlyingInstrument_5.insert(UnderlyingCouponPaymentDate_5.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_5;
    UnderlyingCouponRate_5.setString("28.460000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_5);
    UnderlyingInstrument_5.insert(UnderlyingCouponRate_5.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_5("STRING_1825044976");
    noUnderlyings_0_1.set(UnderlyingCreditRating_5);
    UnderlyingInstrument_5.insert(UnderlyingCreditRating_5.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_5("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_5);
    UnderlyingInstrument_5.insert(UnderlyingCurrency_5.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_5;
    UnderlyingCurrentValue_5.setString("10527868");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_5);
    UnderlyingInstrument_5.insert(UnderlyingCurrentValue_5.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_5;
    UnderlyingDetachmentPoint_5.setString("80.480000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_5);
    UnderlyingInstrument_5.insert(UnderlyingDetachmentPoint_5.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_5;
    UnderlyingDirtyPrice_5.setString("10297176");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_5);
    UnderlyingInstrument_5.insert(UnderlyingDirtyPrice_5.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_5;
    UnderlyingEndPrice_5.setString("13513888");
    noUnderlyings_0_1.set(UnderlyingEndPrice_5);
    UnderlyingInstrument_5.insert(UnderlyingEndPrice_5.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_5;
    UnderlyingEndValue_5.setString("12380744");
    noUnderlyings_0_1.set(UnderlyingEndValue_5);
    UnderlyingInstrument_5.insert(UnderlyingEndValue_5.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_5(937470563);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_5);
    UnderlyingInstrument_5.insert(UnderlyingExerciseStyle_5.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_5;
    UnderlyingFXRate_5.setString("12496774");
    noUnderlyings_0_1.set(UnderlyingFXRate_5);
    UnderlyingInstrument_5.insert(UnderlyingFXRate_5.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_5('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_5);
    UnderlyingInstrument_5.insert(UnderlyingFXRateCalc_5.getString());
    FIX::UnderlyingFactor UnderlyingFactor_5;
    UnderlyingFactor_5.setString("19260367");
    noUnderlyings_0_1.set(UnderlyingFactor_5);
    UnderlyingInstrument_5.insert(UnderlyingFactor_5.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_5(885750551);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_5);
    UnderlyingInstrument_5.insert(UnderlyingFlowScheduleType_5.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_5("STRING_981579455");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_5);
    UnderlyingInstrument_5.insert(UnderlyingInstrRegistry_5.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_5("LOCALMKTDATE_564381451");
    noUnderlyings_0_1.set(UnderlyingIssueDate_5);
    UnderlyingInstrument_5.insert(UnderlyingIssueDate_5.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_5("STRING_580902581");
    noUnderlyings_0_1.set(UnderlyingIssuer_5);
    UnderlyingInstrument_5.insert(UnderlyingIssuer_5.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_5("STRING_1772859869");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_5);
    UnderlyingInstrument_5.insert(UnderlyingLocaleOfIssue_5.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_5("LOCALMKTDATE_891387764");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_5);
    UnderlyingInstrument_5.insert(UnderlyingMaturityDate_5.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_5("MONTHYEAR_1636066392");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_5);
    UnderlyingInstrument_5.insert(UnderlyingMaturityMonthYear_5.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_5("TZTIMEONLY_940059516");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_5);
    UnderlyingInstrument_5.insert(UnderlyingMaturityTime_5.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_5;
    UnderlyingNotionalPercentageOutstanding_5.setString("31.820000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_5);
    UnderlyingInstrument_5.insert(UnderlyingNotionalPercentageOutstanding_5.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_5('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_5);
    UnderlyingInstrument_5.insert(UnderlyingOptAttribute_5.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_5;
    UnderlyingOriginalNotionalPercentageOutstanding_5.setString("98.870000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_5);
    UnderlyingInstrument_5.insert(UnderlyingOriginalNotionalPercentageOutstanding_5.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_5("STRING_850937398");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_5);
    UnderlyingInstrument_5.insert(UnderlyingPriceUnitOfMeasure_5.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_5;
    UnderlyingPriceUnitOfMeasureQty_5.setString("3269945");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_5);
    UnderlyingInstrument_5.insert(UnderlyingPriceUnitOfMeasureQty_5.getString());
    FIX::UnderlyingProduct UnderlyingProduct_5(1874567950);
    noUnderlyings_0_1.set(UnderlyingProduct_5);
    UnderlyingInstrument_5.insert(UnderlyingProduct_5.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_5(896813733);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_5);
    UnderlyingInstrument_5.insert(UnderlyingPutOrCall_5.getString());
    FIX::UnderlyingPx UnderlyingPx_5;
    UnderlyingPx_5.setString("3647762");
    noUnderlyings_0_1.set(UnderlyingPx_5);
    UnderlyingInstrument_5.insert(UnderlyingPx_5.getString());
    FIX::UnderlyingQty UnderlyingQty_5;
    UnderlyingQty_5.setString("10741639");
    noUnderlyings_0_1.set(UnderlyingQty_5);
    UnderlyingInstrument_5.insert(UnderlyingQty_5.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_5("LOCALMKTDATE_478759818");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_5);
    UnderlyingInstrument_5.insert(UnderlyingRedemptionDate_5.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_5("STRING_671409073");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_5);
    UnderlyingInstrument_5.insert(UnderlyingRepoCollateralSecurityType_5.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_5;
    UnderlyingRepurchaseRate_5.setString("52.320000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_5);
    UnderlyingInstrument_5.insert(UnderlyingRepurchaseRate_5.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_5(1430393393);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_5);
    UnderlyingInstrument_5.insert(UnderlyingRepurchaseTerm_5.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_5("STRING_2022441579");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_5);
    UnderlyingInstrument_5.insert(UnderlyingRestructuringType_5.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_5("STRING_1804512108");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityDesc_5.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_5("EXCHANGE_999497793");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityExchange_5.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_5("STRING_904675608");
    noUnderlyings_0_1.set(UnderlyingSecurityID_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityID_5.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_5("STRING_1008417286");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityIDSource_5.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_5("STRING_90088566");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_5);
    UnderlyingInstrument_5.insert(UnderlyingSecuritySubType_5.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_5("STRING_1842146172");
    noUnderlyings_0_1.set(UnderlyingSecurityType_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityType_5.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_5("STRING_110611137");
    noUnderlyings_0_1.set(UnderlyingSeniority_5);
    UnderlyingInstrument_5.insert(UnderlyingSeniority_5.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_5("STRING_1760104857");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_5);
    UnderlyingInstrument_5.insert(UnderlyingSettlMethod_5.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_5(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_5);
    UnderlyingInstrument_5.insert(UnderlyingSettlementType_5.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_5;
    UnderlyingStartValue_5.setString("9963616");
    noUnderlyings_0_1.set(UnderlyingStartValue_5);
    UnderlyingInstrument_5.insert(UnderlyingStartValue_5.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_5("STRING_594200665");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_5);
    UnderlyingInstrument_5.insert(UnderlyingStateOrProvinceOfIssue_5.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_5("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_5);
    UnderlyingInstrument_5.insert(UnderlyingStrikeCurrency_5.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_5;
    UnderlyingStrikePrice_5.setString("2195768");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_5);
    UnderlyingInstrument_5.insert(UnderlyingStrikePrice_5.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_5("STRING_928984826");
    noUnderlyings_0_1.set(UnderlyingSymbol_5);
    UnderlyingInstrument_5.insert(UnderlyingSymbol_5.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_5("STRING_1065847014");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_5);
    UnderlyingInstrument_5.insert(UnderlyingSymbolSfx_5.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_5("STRING_1159636402");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_5);
    UnderlyingInstrument_5.insert(UnderlyingTimeUnit_5.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_5("STRING_1498268008");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_5);
    UnderlyingInstrument_5.insert(UnderlyingUnitOfMeasure_5.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_5;
    UnderlyingUnitOfMeasureQty_5.setString("6531971");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_5);
    UnderlyingInstrument_5.insert(UnderlyingUnitOfMeasureQty_5.getString());
    all_values.push_back(UnderlyingInstrument_5);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_12;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_12("STRING_201721758");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_12);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_12.insert(UnderlyingSecurityAltID_12.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_12("STRING_980191709");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_12);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_12.insert(UnderlyingSecurityAltIDSource_12.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_12);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_9;
      FIX::UnderlyingStipType UnderlyingStipType_9("STRING_1098535491");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_9);
      UnderlyingStipulations_NoUnderlyingStips_9.insert(UnderlyingStipType_9.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_9("STRING_1344967936");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_9);
      UnderlyingStipulations_NoUnderlyingStips_9.insert(UnderlyingStipValue_9.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_9);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_10;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_10("STRING_1577295310");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_10);
      UndlyInstrumentParties_NoUndlyInstrumentParties_10.insert(UnderlyingInstrumentPartyID_10.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_10('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_10);
      UndlyInstrumentParties_NoUndlyInstrumentParties_10.insert(UnderlyingInstrumentPartyIDSource_10.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_10(578396079);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_10);
      UndlyInstrumentParties_NoUndlyInstrumentParties_10.insert(UnderlyingInstrumentPartyRole_10.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_10);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_17("STRING_1891334940");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_17);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17.insert(UnderlyingInstrumentPartySubID_17.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_17(235424540);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_17);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17.insert(UnderlyingInstrumentPartySubIDType_17.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_18("STRING_1859702848");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_18);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18.insert(UnderlyingInstrumentPartySubID_18.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_18(648526901);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_18);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18.insert(UnderlyingInstrumentPartySubIDType_18.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_11;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_11("STRING_1243841826");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_11);
      UndlyInstrumentParties_NoUndlyInstrumentParties_11.insert(UnderlyingInstrumentPartyID_11.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_11('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_11);
      UndlyInstrumentParties_NoUndlyInstrumentParties_11.insert(UnderlyingInstrumentPartyIDSource_11.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_11(343189425);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_11);
      UndlyInstrumentParties_NoUndlyInstrumentParties_11.insert(UnderlyingInstrumentPartyRole_11.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_11);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_19("STRING_1562412624");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_19);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19.insert(UnderlyingInstrumentPartySubID_19.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_19(1963888684);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_19);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19.insert(UnderlyingInstrumentPartySubIDType_19.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_6;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_6("DATA_203331004");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingIssuer_6.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_6(9129641);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingIssuerLen_6.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_6("DATA_2001485747");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingSecurityDesc_6.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_6(1780595274);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingSecurityDescLen_6.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_6;
    UnderlyingAdjustedQuantity_6.setString("2287065");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_6);
    UnderlyingInstrument_6.insert(UnderlyingAdjustedQuantity_6.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_6;
    UnderlyingAllocationPercent_6.setString("69.250000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_6);
    UnderlyingInstrument_6.insert(UnderlyingAllocationPercent_6.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_6;
    UnderlyingAttachmentPoint_6.setString("86.400000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_6);
    UnderlyingInstrument_6.insert(UnderlyingAttachmentPoint_6.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_6("STRING_1388342929");
    noUnderlyings_0_2.set(UnderlyingCFICode_6);
    UnderlyingInstrument_6.insert(UnderlyingCFICode_6.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_6("STRING_133771286");
    noUnderlyings_0_2.set(UnderlyingCPProgram_6);
    UnderlyingInstrument_6.insert(UnderlyingCPProgram_6.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_6("STRING_1352155822");
    noUnderlyings_0_2.set(UnderlyingCPRegType_6);
    UnderlyingInstrument_6.insert(UnderlyingCPRegType_6.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_6;
    UnderlyingCapValue_6.setString("4137655");
    noUnderlyings_0_2.set(UnderlyingCapValue_6);
    UnderlyingInstrument_6.insert(UnderlyingCapValue_6.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_6;
    UnderlyingCashAmount_6.setString("3354930");
    noUnderlyings_0_2.set(UnderlyingCashAmount_6);
    UnderlyingInstrument_6.insert(UnderlyingCashAmount_6.getString());
    FIX::UnderlyingCashType UnderlyingCashType_6("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_6);
    UnderlyingInstrument_6.insert(UnderlyingCashType_6.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_6;
    UnderlyingContractMultiplier_6.setString("13137561");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_6);
    UnderlyingInstrument_6.insert(UnderlyingContractMultiplier_6.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_6(1434028536);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_6);
    UnderlyingInstrument_6.insert(UnderlyingContractMultiplierUnit_6.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_6("COUNTRY_1529831819");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_6);
    UnderlyingInstrument_6.insert(UnderlyingCountryOfIssue_6.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_6("LOCALMKTDATE_1140427010");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_6);
    UnderlyingInstrument_6.insert(UnderlyingCouponPaymentDate_6.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_6;
    UnderlyingCouponRate_6.setString("1.980000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_6);
    UnderlyingInstrument_6.insert(UnderlyingCouponRate_6.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_6("STRING_1398725181");
    noUnderlyings_0_2.set(UnderlyingCreditRating_6);
    UnderlyingInstrument_6.insert(UnderlyingCreditRating_6.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_6("CHF");
    noUnderlyings_0_2.set(UnderlyingCurrency_6);
    UnderlyingInstrument_6.insert(UnderlyingCurrency_6.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_6;
    UnderlyingCurrentValue_6.setString("11425764");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_6);
    UnderlyingInstrument_6.insert(UnderlyingCurrentValue_6.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_6;
    UnderlyingDetachmentPoint_6.setString("76.300000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_6);
    UnderlyingInstrument_6.insert(UnderlyingDetachmentPoint_6.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_6;
    UnderlyingDirtyPrice_6.setString("14362644");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_6);
    UnderlyingInstrument_6.insert(UnderlyingDirtyPrice_6.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_6;
    UnderlyingEndPrice_6.setString("17911033");
    noUnderlyings_0_2.set(UnderlyingEndPrice_6);
    UnderlyingInstrument_6.insert(UnderlyingEndPrice_6.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_6;
    UnderlyingEndValue_6.setString("10506058");
    noUnderlyings_0_2.set(UnderlyingEndValue_6);
    UnderlyingInstrument_6.insert(UnderlyingEndValue_6.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_6(1238572219);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_6);
    UnderlyingInstrument_6.insert(UnderlyingExerciseStyle_6.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_6;
    UnderlyingFXRate_6.setString("21342927");
    noUnderlyings_0_2.set(UnderlyingFXRate_6);
    UnderlyingInstrument_6.insert(UnderlyingFXRate_6.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_6('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_6);
    UnderlyingInstrument_6.insert(UnderlyingFXRateCalc_6.getString());
    FIX::UnderlyingFactor UnderlyingFactor_6;
    UnderlyingFactor_6.setString("6535011");
    noUnderlyings_0_2.set(UnderlyingFactor_6);
    UnderlyingInstrument_6.insert(UnderlyingFactor_6.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_6(1950697836);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_6);
    UnderlyingInstrument_6.insert(UnderlyingFlowScheduleType_6.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_6("STRING_460906127");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_6);
    UnderlyingInstrument_6.insert(UnderlyingInstrRegistry_6.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_6("LOCALMKTDATE_662630836");
    noUnderlyings_0_2.set(UnderlyingIssueDate_6);
    UnderlyingInstrument_6.insert(UnderlyingIssueDate_6.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_6("STRING_1804699935");
    noUnderlyings_0_2.set(UnderlyingIssuer_6);
    UnderlyingInstrument_6.insert(UnderlyingIssuer_6.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_6("STRING_94017753");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_6);
    UnderlyingInstrument_6.insert(UnderlyingLocaleOfIssue_6.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_6("LOCALMKTDATE_891337363");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_6);
    UnderlyingInstrument_6.insert(UnderlyingMaturityDate_6.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_6("MONTHYEAR_440203212");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_6);
    UnderlyingInstrument_6.insert(UnderlyingMaturityMonthYear_6.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_6("TZTIMEONLY_792976394");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_6);
    UnderlyingInstrument_6.insert(UnderlyingMaturityTime_6.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_6;
    UnderlyingNotionalPercentageOutstanding_6.setString("66.450000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_6);
    UnderlyingInstrument_6.insert(UnderlyingNotionalPercentageOutstanding_6.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_6('5');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_6);
    UnderlyingInstrument_6.insert(UnderlyingOptAttribute_6.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_6;
    UnderlyingOriginalNotionalPercentageOutstanding_6.setString("22.160000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_6);
    UnderlyingInstrument_6.insert(UnderlyingOriginalNotionalPercentageOutstanding_6.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_6("STRING_545962216");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_6);
    UnderlyingInstrument_6.insert(UnderlyingPriceUnitOfMeasure_6.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_6;
    UnderlyingPriceUnitOfMeasureQty_6.setString("9094675");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_6);
    UnderlyingInstrument_6.insert(UnderlyingPriceUnitOfMeasureQty_6.getString());
    FIX::UnderlyingProduct UnderlyingProduct_6(182512452);
    noUnderlyings_0_2.set(UnderlyingProduct_6);
    UnderlyingInstrument_6.insert(UnderlyingProduct_6.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_6(1859718379);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_6);
    UnderlyingInstrument_6.insert(UnderlyingPutOrCall_6.getString());
    FIX::UnderlyingPx UnderlyingPx_6;
    UnderlyingPx_6.setString("1960124");
    noUnderlyings_0_2.set(UnderlyingPx_6);
    UnderlyingInstrument_6.insert(UnderlyingPx_6.getString());
    FIX::UnderlyingQty UnderlyingQty_6;
    UnderlyingQty_6.setString("17123442");
    noUnderlyings_0_2.set(UnderlyingQty_6);
    UnderlyingInstrument_6.insert(UnderlyingQty_6.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_6("LOCALMKTDATE_852661741");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_6);
    UnderlyingInstrument_6.insert(UnderlyingRedemptionDate_6.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_6("STRING_1059852629");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_6);
    UnderlyingInstrument_6.insert(UnderlyingRepoCollateralSecurityType_6.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_6;
    UnderlyingRepurchaseRate_6.setString("58.040000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_6);
    UnderlyingInstrument_6.insert(UnderlyingRepurchaseRate_6.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_6(424001183);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_6);
    UnderlyingInstrument_6.insert(UnderlyingRepurchaseTerm_6.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_6("STRING_636414234");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_6);
    UnderlyingInstrument_6.insert(UnderlyingRestructuringType_6.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_6("STRING_2106162278");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityDesc_6.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_6("EXCHANGE_230765165");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityExchange_6.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_6("STRING_2072678687");
    noUnderlyings_0_2.set(UnderlyingSecurityID_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityID_6.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_6("STRING_1749782004");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityIDSource_6.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_6("STRING_1281370973");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_6);
    UnderlyingInstrument_6.insert(UnderlyingSecuritySubType_6.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_6("STRING_1163767258");
    noUnderlyings_0_2.set(UnderlyingSecurityType_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityType_6.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_6("STRING_1736591156");
    noUnderlyings_0_2.set(UnderlyingSeniority_6);
    UnderlyingInstrument_6.insert(UnderlyingSeniority_6.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_6("STRING_1538946097");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_6);
    UnderlyingInstrument_6.insert(UnderlyingSettlMethod_6.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_6(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_6);
    UnderlyingInstrument_6.insert(UnderlyingSettlementType_6.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_6;
    UnderlyingStartValue_6.setString("15398053");
    noUnderlyings_0_2.set(UnderlyingStartValue_6);
    UnderlyingInstrument_6.insert(UnderlyingStartValue_6.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_6("STRING_1999852224");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_6);
    UnderlyingInstrument_6.insert(UnderlyingStateOrProvinceOfIssue_6.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_6("EUR");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_6);
    UnderlyingInstrument_6.insert(UnderlyingStrikeCurrency_6.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_6;
    UnderlyingStrikePrice_6.setString("20938699");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_6);
    UnderlyingInstrument_6.insert(UnderlyingStrikePrice_6.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_6("STRING_1223753006");
    noUnderlyings_0_2.set(UnderlyingSymbol_6);
    UnderlyingInstrument_6.insert(UnderlyingSymbol_6.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_6("STRING_1637224843");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_6);
    UnderlyingInstrument_6.insert(UnderlyingSymbolSfx_6.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_6("STRING_739362724");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_6);
    UnderlyingInstrument_6.insert(UnderlyingTimeUnit_6.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_6("STRING_1355949651");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_6);
    UnderlyingInstrument_6.insert(UnderlyingUnitOfMeasure_6.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_6;
    UnderlyingUnitOfMeasureQty_6.setString("637156");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_6);
    UnderlyingInstrument_6.insert(UnderlyingUnitOfMeasureQty_6.getString());
    all_values.push_back(UnderlyingInstrument_6);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_13;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_13("STRING_1901911867");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_13);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_13.insert(UnderlyingSecurityAltID_13.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_13("STRING_973183237");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_13);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_13.insert(UnderlyingSecurityAltIDSource_13.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_13);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_14;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_14("STRING_919523744");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_14);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_14.insert(UnderlyingSecurityAltID_14.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_14("STRING_1614146598");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_14);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_14.insert(UnderlyingSecurityAltIDSource_14.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_14);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_15;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_15("STRING_1169195668");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_15);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_15.insert(UnderlyingSecurityAltID_15.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_15("STRING_484384368");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_15);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_15.insert(UnderlyingSecurityAltIDSource_15.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_15);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_10;
      FIX::UnderlyingStipType UnderlyingStipType_10("STRING_81564649");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_10);
      UnderlyingStipulations_NoUnderlyingStips_10.insert(UnderlyingStipType_10.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_10("STRING_1447970172");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_10);
      UnderlyingStipulations_NoUnderlyingStips_10.insert(UnderlyingStipValue_10.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_10);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_11;
      FIX::UnderlyingStipType UnderlyingStipType_11("STRING_743325875");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_11);
      UnderlyingStipulations_NoUnderlyingStips_11.insert(UnderlyingStipType_11.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_11("STRING_717978883");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_11);
      UnderlyingStipulations_NoUnderlyingStips_11.insert(UnderlyingStipValue_11.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_11);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_12;
      FIX::UnderlyingStipType UnderlyingStipType_12("STRING_1406648802");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_12);
      UnderlyingStipulations_NoUnderlyingStips_12.insert(UnderlyingStipType_12.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_12("STRING_974091040");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_12);
      UnderlyingStipulations_NoUnderlyingStips_12.insert(UnderlyingStipValue_12.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_12);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_12;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_12("STRING_1008947159");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_12);
      UndlyInstrumentParties_NoUndlyInstrumentParties_12.insert(UnderlyingInstrumentPartyID_12.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_12('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_12);
      UndlyInstrumentParties_NoUndlyInstrumentParties_12.insert(UnderlyingInstrumentPartyIDSource_12.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_12(1806941180);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_12);
      UndlyInstrumentParties_NoUndlyInstrumentParties_12.insert(UnderlyingInstrumentPartyRole_12.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_12);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_20("STRING_1646924463");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_20);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20.insert(UnderlyingInstrumentPartySubID_20.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_20(1476725986);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_20);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20.insert(UnderlyingInstrumentPartySubIDType_20.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_21("STRING_2137860011");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_21);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21.insert(UnderlyingInstrumentPartySubID_21.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_21(1499293039);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_21);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21.insert(UnderlyingInstrumentPartySubIDType_21.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_22("STRING_1809141629");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_22);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22.insert(UnderlyingInstrumentPartySubID_22.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_22(1187397994);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_22);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22.insert(UnderlyingInstrumentPartySubIDType_22.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_13;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_13("STRING_1445679369");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_13);
      UndlyInstrumentParties_NoUndlyInstrumentParties_13.insert(UnderlyingInstrumentPartyID_13.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_13('8');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_13);
      UndlyInstrumentParties_NoUndlyInstrumentParties_13.insert(UnderlyingInstrumentPartyIDSource_13.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_13(677139189);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_13);
      UndlyInstrumentParties_NoUndlyInstrumentParties_13.insert(UnderlyingInstrumentPartyRole_13.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_13);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_23("STRING_93876990");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_23);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23.insert(UnderlyingInstrumentPartySubID_23.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_23(740854883);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_23);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23.insert(UnderlyingInstrumentPartySubIDType_23.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_24("STRING_774569738");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_24);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24.insert(UnderlyingInstrumentPartySubID_24.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_24(1995788857);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_24);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24.insert(UnderlyingInstrumentPartySubIDType_24.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_25("STRING_1714038120");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_25);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25.insert(UnderlyingInstrumentPartySubID_25.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_25(1694093482);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_25);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25.insert(UnderlyingInstrumentPartySubIDType_25.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_1;
  FIX::Yield Yield_1;
  Yield_1.setString("18.070000");
  msg.set(Yield_1);
  YieldData_1.insert(Yield_1.getString());
  FIX::YieldCalcDate YieldCalcDate_1("LOCALMKTDATE_735750140");
  msg.set(YieldCalcDate_1);
  YieldData_1.insert(YieldCalcDate_1.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_1("LOCALMKTDATE_30994202");
  msg.set(YieldRedemptionDate_1);
  YieldData_1.insert(YieldRedemptionDate_1.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_1;
  YieldRedemptionPrice_1.setString("17817764");
  msg.set(YieldRedemptionPrice_1);
  YieldData_1.insert(YieldRedemptionPrice_1.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_1(817314789);
  msg.set(YieldRedemptionPriceType_1);
  YieldData_1.insert(YieldRedemptionPriceType_1.getString());
  FIX::YieldType YieldType_1("STRING_CLOSE");
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
