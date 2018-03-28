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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AllocationReport msg;

  list<multiset<string>> all_values;
  multiset<string> AllocationReport_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_2;
  AccruedInterestAmt_2.setString("3776187");
  msg.set(AccruedInterestAmt_2);
  AllocationReport_0.insert(AccruedInterestAmt_2.getString());
  FIX::AccruedInterestRate AccruedInterestRate_2;
  AccruedInterestRate_2.setString("36.720000");
  msg.set(AccruedInterestRate_2);
  AllocationReport_0.insert(AccruedInterestRate_2.getString());
  FIX::AllocCancReplaceReason AllocCancReplaceReason_2(2);
  msg.set(AllocCancReplaceReason_2);
  AllocationReport_0.insert(AllocCancReplaceReason_2.getString());
  FIX::AllocID AllocID_3("STRING_1351709766");
  msg.set(AllocID_3);
  AllocationReport_0.insert(AllocID_3.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_3(1);
  msg.set(AllocIntermedReqType_3);
  AllocationReport_0.insert(AllocIntermedReqType_3.getString());
  FIX::AllocLinkID AllocLinkID_2("STRING_1747076688");
  msg.set(AllocLinkID_2);
  AllocationReport_0.insert(AllocLinkID_2.getString());
  FIX::AllocLinkType AllocLinkType_2(0);
  msg.set(AllocLinkType_2);
  AllocationReport_0.insert(AllocLinkType_2.getString());
  FIX::AllocNoOrdersType AllocNoOrdersType_2(1);
  msg.set(AllocNoOrdersType_2);
  AllocationReport_0.insert(AllocNoOrdersType_2.getString());
  FIX::AllocRejCode AllocRejCode_1(12);
  msg.set(AllocRejCode_1);
  AllocationReport_0.insert(AllocRejCode_1.getString());
  FIX::AllocReportID AllocReportID_0("STRING_959128947");
  msg.set(AllocReportID_0);
  AllocationReport_0.insert(AllocReportID_0.getString());
  FIX::AllocReportRefID AllocReportRefID_0("STRING_1167167465");
  msg.set(AllocReportRefID_0);
  AllocationReport_0.insert(AllocReportRefID_0.getString());
  FIX::AllocReportType AllocReportType_0(2);
  msg.set(AllocReportType_0);
  AllocationReport_0.insert(AllocReportType_0.getString());
  FIX::AllocStatus AllocStatus_1(2);
  msg.set(AllocStatus_1);
  AllocationReport_0.insert(AllocStatus_1.getString());
  FIX::AllocTransType AllocTransType_2('1');
  msg.set(AllocTransType_2);
  AllocationReport_0.insert(AllocTransType_2.getString());
  FIX::AutoAcceptIndicator AutoAcceptIndicator_2(true);
  msg.set(AutoAcceptIndicator_2);
  AllocationReport_0.insert(AutoAcceptIndicator_2.getString());
  FIX::AvgParPx AvgParPx_2;
  AvgParPx_2.setString("17566177");
  msg.set(AvgParPx_2);
  AllocationReport_0.insert(AvgParPx_2.getString());
  FIX::AvgPx AvgPx_2;
  AvgPx_2.setString("17142364");
  msg.set(AvgPx_2);
  AllocationReport_0.insert(AvgPx_2.getString());
  FIX::AvgPxIndicator AvgPxIndicator_2(2);
  msg.set(AvgPxIndicator_2);
  AllocationReport_0.insert(AvgPxIndicator_2.getString());
  FIX::AvgPxPrecision AvgPxPrecision_2(1794176153);
  msg.set(AvgPxPrecision_2);
  AllocationReport_0.insert(AvgPxPrecision_2.getString());
  FIX::BookingRefID BookingRefID_2("STRING_1808113423");
  msg.set(BookingRefID_2);
  AllocationReport_0.insert(BookingRefID_2.getString());
  FIX::BookingType BookingType_2(2);
  msg.set(BookingType_2);
  AllocationReport_0.insert(BookingType_2.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_3("LOCALMKTDATE_421262243");
  msg.set(ClearingBusinessDate_3);
  AllocationReport_0.insert(ClearingBusinessDate_3.getString());
  FIX::Concession Concession_2;
  Concession_2.setString("16564186");
  msg.set(Concession_2);
  AllocationReport_0.insert(Concession_2.getString());
  FIX::Currency Currency_3("JPY");
  msg.set(Currency_3);
  AllocationReport_0.insert(Currency_3.getString());
  FIX::CustOrderCapacity CustOrderCapacity_2(4);
  msg.set(CustOrderCapacity_2);
  AllocationReport_0.insert(CustOrderCapacity_2.getString());
  FIX::EncodedText EncodedText_4("DATA_948237102");
  msg.set(EncodedText_4);
  AllocationReport_0.insert(EncodedText_4.getString());
  FIX::EncodedTextLen EncodedTextLen_4(2146349928);
  msg.set(EncodedTextLen_4);
  AllocationReport_0.insert(EncodedTextLen_4.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_2;
  EndAccruedInterestAmt_2.setString("6056796");
  msg.set(EndAccruedInterestAmt_2);
  AllocationReport_0.insert(EndAccruedInterestAmt_2.getString());
  FIX::EndCash EndCash_2;
  EndCash_2.setString("17655518");
  msg.set(EndCash_2);
  AllocationReport_0.insert(EndCash_2.getString());
  FIX::GrossTradeAmt GrossTradeAmt_2;
  GrossTradeAmt_2.setString("14778306");
  msg.set(GrossTradeAmt_2);
  AllocationReport_0.insert(GrossTradeAmt_2.getString());
  FIX::InterestAtMaturity InterestAtMaturity_2;
  InterestAtMaturity_2.setString("9832983");
  msg.set(InterestAtMaturity_2);
  AllocationReport_0.insert(InterestAtMaturity_2.getString());
  FIX::LastFragment LastFragment_2(true);
  msg.set(LastFragment_2);
  AllocationReport_0.insert(LastFragment_2.getString());
  FIX::LastMkt LastMkt_3("EXCHANGE_68476537");
  msg.set(LastMkt_3);
  AllocationReport_0.insert(LastMkt_3.getString());
  FIX::LegalConfirm LegalConfirm_2(false);
  msg.set(LegalConfirm_2);
  AllocationReport_0.insert(LegalConfirm_2.getString());
  FIX::MatchType MatchType_2("STRING_MT");
  msg.set(MatchType_2);
  AllocationReport_0.insert(MatchType_2.getString());
  FIX::MessageEventSource MessageEventSource_2("STRING_1815553225");
  msg.set(MessageEventSource_2);
  AllocationReport_0.insert(MessageEventSource_2.getString());
  FIX::MultiLegReportingType MultiLegReportingType_2('2');
  msg.set(MultiLegReportingType_2);
  AllocationReport_0.insert(MultiLegReportingType_2.getString());
  FIX::NetMoney NetMoney_2;
  NetMoney_2.setString("8747873");
  msg.set(NetMoney_2);
  AllocationReport_0.insert(NetMoney_2.getString());
  FIX::NumDaysInterest NumDaysInterest_2(2013200933);
  msg.set(NumDaysInterest_2);
  AllocationReport_0.insert(NumDaysInterest_2.getString());
  FIX::PositionEffect PositionEffect_2('O');
  msg.set(PositionEffect_2);
  AllocationReport_0.insert(PositionEffect_2.getString());
  FIX::PreviouslyReported PreviouslyReported_2(false);
  msg.set(PreviouslyReported_2);
  AllocationReport_0.insert(PreviouslyReported_2.getString());
  FIX::PriceType PriceType_2(17);
  msg.set(PriceType_2);
  AllocationReport_0.insert(PriceType_2.getString());
  FIX::QtyType QtyType_3(2);
  msg.set(QtyType_3);
  AllocationReport_0.insert(QtyType_3.getString());
  FIX::Quantity Quantity_3;
  Quantity_3.setString("7232966");
  msg.set(Quantity_3);
  AllocationReport_0.insert(Quantity_3.getString());
  FIX::RefAllocID RefAllocID_2("STRING_1429163420");
  msg.set(RefAllocID_2);
  AllocationReport_0.insert(RefAllocID_2.getString());
  FIX::ReversalIndicator ReversalIndicator_2(false);
  msg.set(ReversalIndicator_2);
  AllocationReport_0.insert(ReversalIndicator_2.getString());
  FIX::RndPx RndPx_2;
  RndPx_2.setString("2900493");
  msg.set(RndPx_2);
  AllocationReport_0.insert(RndPx_2.getString());
  FIX::SecondaryAllocID SecondaryAllocID_3("STRING_1334241026");
  msg.set(SecondaryAllocID_3);
  AllocationReport_0.insert(SecondaryAllocID_3.getString());
  FIX::SettlDate SettlDate_2("LOCALMKTDATE_25622820");
  msg.set(SettlDate_2);
  AllocationReport_0.insert(SettlDate_2.getString());
  FIX::SettlType SettlType_2("STRING_3");
  msg.set(SettlType_2);
  AllocationReport_0.insert(SettlType_2.getString());
  FIX::Side Side_2('C');
  msg.set(Side_2);
  AllocationReport_0.insert(Side_2.getString());
  FIX::StartCash StartCash_2;
  StartCash_2.setString("4468850");
  msg.set(StartCash_2);
  AllocationReport_0.insert(StartCash_2.getString());
  FIX::Text Text_4("STRING_1607097799");
  msg.set(Text_4);
  AllocationReport_0.insert(Text_4.getString());
  FIX::TotNoAllocs TotNoAllocs_2(45176829);
  msg.set(TotNoAllocs_2);
  AllocationReport_0.insert(TotNoAllocs_2.getString());
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_2;
  TotalAccruedInterestAmt_2.setString("4147571");
  msg.set(TotalAccruedInterestAmt_2);
  AllocationReport_0.insert(TotalAccruedInterestAmt_2.getString());
  FIX::TotalTakedown TotalTakedown_2;
  TotalTakedown_2.setString("4310009");
  msg.set(TotalTakedown_2);
  AllocationReport_0.insert(TotalTakedown_2.getString());
  FIX::TradeDate TradeDate_4("LOCALMKTDATE_993413932");
  msg.set(TradeDate_4);
  AllocationReport_0.insert(TradeDate_4.getString());
  FIX::TradeInputDevice TradeInputDevice_0("STRING_413623422");
  msg.set(TradeInputDevice_0);
  AllocationReport_0.insert(TradeInputDevice_0.getString());
  FIX::TradeInputSource TradeInputSource_2("STRING_1036680585");
  msg.set(TradeInputSource_2);
  AllocationReport_0.insert(TradeInputSource_2.getString());
  FIX::TradeOriginationDate TradeOriginationDate_2("LOCALMKTDATE_611482176");
  msg.set(TradeOriginationDate_2);
  AllocationReport_0.insert(TradeOriginationDate_2.getString());
  FIX::TradingSessionID TradingSessionID_3("STRING_3");
  msg.set(TradingSessionID_3);
  AllocationReport_0.insert(TradingSessionID_3.getString());
  FIX::TradingSessionSubID TradingSessionSubID_3("STRING_6");
  msg.set(TradingSessionSubID_3);
  AllocationReport_0.insert(TradingSessionSubID_3.getString());
  FIX::TransactTime TransactTime_4(FIX::UTCTIMESTAMP(15, 50, 47, 0, 4, 2001));
  msg.set(TransactTime_4);
  AllocationReport_0.insert(TransactTime_4.getString());
  FIX::TrdSubType TrdSubType_2(23);
  msg.set(TrdSubType_2);
  AllocationReport_0.insert(TrdSubType_2.getString());
  FIX::TrdType TrdType_2(11);
  msg.set(TrdType_2);
  AllocationReport_0.insert(TrdType_2.getString());
  all_values.push_back(AllocationReport_0);

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationReport::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_4;
    FIX::AllocAccount AllocAccount_6("STRING_1547458833");
    noAllocs_0_0.set(AllocAccount_6);
    AllocGrp_NoAllocs_4.insert(AllocAccount_6.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_4;
    AllocAccruedInterestAmt_4.setString("7884029");
    noAllocs_0_0.set(AllocAccruedInterestAmt_4);
    AllocGrp_NoAllocs_4.insert(AllocAccruedInterestAmt_4.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_6(146777767);
    noAllocs_0_0.set(AllocAcctIDSource_6);
    AllocGrp_NoAllocs_4.insert(AllocAcctIDSource_6.getString());
    FIX::AllocAvgPx AllocAvgPx_4;
    AllocAvgPx_4.setString("8291386");
    noAllocs_0_0.set(AllocAvgPx_4);
    AllocGrp_NoAllocs_4.insert(AllocAvgPx_4.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_6("STRING_1167333246");
    noAllocs_0_0.set(AllocCustomerCapacity_6);
    AllocGrp_NoAllocs_4.insert(AllocCustomerCapacity_6.getString());
    FIX::AllocHandlInst AllocHandlInst_4(3);
    noAllocs_0_0.set(AllocHandlInst_4);
    AllocGrp_NoAllocs_4.insert(AllocHandlInst_4.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_4;
    AllocInterestAtMaturity_4.setString("158959");
    noAllocs_0_0.set(AllocInterestAtMaturity_4);
    AllocGrp_NoAllocs_4.insert(AllocInterestAtMaturity_4.getString());
    FIX::AllocMethod AllocMethod_4(1);
    noAllocs_0_0.set(AllocMethod_4);
    AllocGrp_NoAllocs_4.insert(AllocMethod_4.getString());
    FIX::AllocNetMoney AllocNetMoney_4;
    AllocNetMoney_4.setString("3875063");
    noAllocs_0_0.set(AllocNetMoney_4);
    AllocGrp_NoAllocs_4.insert(AllocNetMoney_4.getString());
    FIX::AllocPositionEffect AllocPositionEffect_6('R');
    noAllocs_0_0.set(AllocPositionEffect_6);
    AllocGrp_NoAllocs_4.insert(AllocPositionEffect_6.getString());
    FIX::AllocPrice AllocPrice_6;
    AllocPrice_6.setString("16398411");
    noAllocs_0_0.set(AllocPrice_6);
    AllocGrp_NoAllocs_4.insert(AllocPrice_6.getString());
    FIX::AllocQty AllocQty_6;
    AllocQty_6.setString("19946041");
    noAllocs_0_0.set(AllocQty_6);
    AllocGrp_NoAllocs_4.insert(AllocQty_6.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_4;
    AllocSettlCurrAmt_4.setString("20412463");
    noAllocs_0_0.set(AllocSettlCurrAmt_4);
    AllocGrp_NoAllocs_4.insert(AllocSettlCurrAmt_4.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_4("USD");
    noAllocs_0_0.set(AllocSettlCurrency_4);
    AllocGrp_NoAllocs_4.insert(AllocSettlCurrency_4.getString());
    FIX::AllocSettlInstType AllocSettlInstType_4(2);
    noAllocs_0_0.set(AllocSettlInstType_4);
    AllocGrp_NoAllocs_4.insert(AllocSettlInstType_4.getString());
    FIX::AllocText AllocText_6("STRING_320738047");
    noAllocs_0_0.set(AllocText_6);
    AllocGrp_NoAllocs_4.insert(AllocText_6.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_4("STRING_M");
    noAllocs_0_0.set(ClearingFeeIndicator_4);
    AllocGrp_NoAllocs_4.insert(ClearingFeeIndicator_4.getString());
    FIX::EncodedAllocText EncodedAllocText_6("DATA_1498658788");
    noAllocs_0_0.set(EncodedAllocText_6);
    AllocGrp_NoAllocs_4.insert(EncodedAllocText_6.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_6(64708477);
    noAllocs_0_0.set(EncodedAllocTextLen_6);
    AllocGrp_NoAllocs_4.insert(EncodedAllocTextLen_6.getString());
    FIX::IndividualAllocID IndividualAllocID_6("STRING_1187297309");
    noAllocs_0_0.set(IndividualAllocID_6);
    AllocGrp_NoAllocs_4.insert(IndividualAllocID_6.getString());
    FIX::IndividualAllocType IndividualAllocType_6(1);
    noAllocs_0_0.set(IndividualAllocType_6);
    AllocGrp_NoAllocs_4.insert(IndividualAllocType_6.getString());
    FIX::MatchStatus MatchStatus_5('1');
    noAllocs_0_0.set(MatchStatus_5);
    AllocGrp_NoAllocs_4.insert(MatchStatus_5.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_4(false);
    noAllocs_0_0.set(NotifyBrokerOfCredit_4);
    AllocGrp_NoAllocs_4.insert(NotifyBrokerOfCredit_4.getString());
    FIX::ProcessCode ProcessCode_4('3');
    noAllocs_0_0.set(ProcessCode_4);
    AllocGrp_NoAllocs_4.insert(ProcessCode_4.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_6("STRING_1505155636");
    noAllocs_0_0.set(SecondaryIndividualAllocID_6);
    AllocGrp_NoAllocs_4.insert(SecondaryIndividualAllocID_6.getString());
    FIX::SettlCurrAmt SettlCurrAmt_4;
    SettlCurrAmt_4.setString("8070658");
    noAllocs_0_0.set(SettlCurrAmt_4);
    AllocGrp_NoAllocs_4.insert(SettlCurrAmt_4.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_4;
    SettlCurrFxRate_4.setString("14467355");
    noAllocs_0_0.set(SettlCurrFxRate_4);
    AllocGrp_NoAllocs_4.insert(SettlCurrFxRate_4.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_4('M');
    noAllocs_0_0.set(SettlCurrFxRateCalc_4);
    AllocGrp_NoAllocs_4.insert(SettlCurrFxRateCalc_4.getString());
    FIX::SettlCurrency SettlCurrency_4("USD");
    noAllocs_0_0.set(SettlCurrency_4);
    AllocGrp_NoAllocs_4.insert(SettlCurrency_4.getString());
    all_values.push_back(AllocGrp_NoAllocs_4);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_9;
      FIX::ClearingInstruction ClearingInstruction_9(10);
      noClearingInstructions_0_1_0.set(ClearingInstruction_9);
      ClrInstGrp_NoClearingInstructions_9.insert(ClearingInstruction_9.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_9);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_4;
    FIX::CommCurrency CommCurrency_4("USD");
    noAllocs_0_0.set(CommCurrency_4);
    CommissionData_4.insert(CommCurrency_4.getString());
    FIX::CommType CommType_4('3');
    noAllocs_0_0.set(CommType_4);
    CommissionData_4.insert(CommType_4.getString());
    FIX::Commission Commission_4;
    Commission_4.setString("14538216");
    noAllocs_0_0.set(Commission_4);
    CommissionData_4.insert(Commission_4.getString());
    FIX::FundRenewWaiv FundRenewWaiv_4('Y');
    noAllocs_0_0.set(FundRenewWaiv_4);
    CommissionData_4.insert(FundRenewWaiv_4.getString());
    all_values.push_back(CommissionData_4);

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_9;
      FIX::MiscFeeAmt MiscFeeAmt_9;
      MiscFeeAmt_9.setString("18413279");
      noMiscFees_0_1_0.set(MiscFeeAmt_9);
      MiscFeesGrp_NoMiscFees_9.insert(MiscFeeAmt_9.getString());
      FIX::MiscFeeBasis MiscFeeBasis_9(2);
      noMiscFees_0_1_0.set(MiscFeeBasis_9);
      MiscFeesGrp_NoMiscFees_9.insert(MiscFeeBasis_9.getString());
      FIX::MiscFeeCurr MiscFeeCurr_9("JPY");
      noMiscFees_0_1_0.set(MiscFeeCurr_9);
      MiscFeesGrp_NoMiscFees_9.insert(MiscFeeCurr_9.getString());
      FIX::MiscFeeType MiscFeeType_9("STRING_14");
      noMiscFees_0_1_0.set(MiscFeeType_9);
      MiscFeesGrp_NoMiscFees_9.insert(MiscFeeType_9.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_9);

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_10;
      FIX::MiscFeeAmt MiscFeeAmt_10;
      MiscFeeAmt_10.setString("12263532");
      noMiscFees_0_1_1.set(MiscFeeAmt_10);
      MiscFeesGrp_NoMiscFees_10.insert(MiscFeeAmt_10.getString());
      FIX::MiscFeeBasis MiscFeeBasis_10(1);
      noMiscFees_0_1_1.set(MiscFeeBasis_10);
      MiscFeesGrp_NoMiscFees_10.insert(MiscFeeBasis_10.getString());
      FIX::MiscFeeCurr MiscFeeCurr_10("GBP");
      noMiscFees_0_1_1.set(MiscFeeCurr_10);
      MiscFeesGrp_NoMiscFees_10.insert(MiscFeeCurr_10.getString());
      FIX::MiscFeeType MiscFeeType_10("STRING_12");
      noMiscFees_0_1_1.set(MiscFeeType_10);
      MiscFeesGrp_NoMiscFees_10.insert(MiscFeeType_10.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_10);

      noAllocs_0_0.addGroup(noMiscFees_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_0_1_2;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_11;
      FIX::MiscFeeAmt MiscFeeAmt_11;
      MiscFeeAmt_11.setString("10770995");
      noMiscFees_0_1_2.set(MiscFeeAmt_11);
      MiscFeesGrp_NoMiscFees_11.insert(MiscFeeAmt_11.getString());
      FIX::MiscFeeBasis MiscFeeBasis_11(0);
      noMiscFees_0_1_2.set(MiscFeeBasis_11);
      MiscFeesGrp_NoMiscFees_11.insert(MiscFeeBasis_11.getString());
      FIX::MiscFeeCurr MiscFeeCurr_11("USD");
      noMiscFees_0_1_2.set(MiscFeeCurr_11);
      MiscFeesGrp_NoMiscFees_11.insert(MiscFeeCurr_11.getString());
      FIX::MiscFeeType MiscFeeType_11("STRING_4");
      noMiscFees_0_1_2.set(MiscFeeType_11);
      MiscFeesGrp_NoMiscFees_11.insert(MiscFeeType_11.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_11);

      noAllocs_0_0.addGroup(noMiscFees_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_13;
      FIX::NestedPartyID NestedPartyID_13("STRING_1963360646");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_13);
      NestedParties_NoNestedPartyIDs_13.insert(NestedPartyID_13.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_13('8');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_13);
      NestedParties_NoNestedPartyIDs_13.insert(NestedPartyIDSource_13.getString());
      FIX::NestedPartyRole NestedPartyRole_13(80601179);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_13);
      NestedParties_NoNestedPartyIDs_13.insert(NestedPartyRole_13.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_13);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_25;
        FIX::NestedPartySubID NestedPartySubID_25("STRING_1698016660");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_25);
        NstdPtysSubGrp_NoNestedPartySubIDs_25.insert(NestedPartySubID_25.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_25(906273714);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_25);
        NstdPtysSubGrp_NoNestedPartySubIDs_25.insert(NestedPartySubIDType_25.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_25);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_26;
        FIX::NestedPartySubID NestedPartySubID_26("STRING_2132829242");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_26);
        NstdPtysSubGrp_NoNestedPartySubIDs_26.insert(NestedPartySubID_26.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_26(1949381311);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_26);
        NstdPtysSubGrp_NoNestedPartySubIDs_26.insert(NestedPartySubIDType_26.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_26);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_14;
      FIX::NestedPartyID NestedPartyID_14("STRING_372865532");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_14);
      NestedParties_NoNestedPartyIDs_14.insert(NestedPartyID_14.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_14('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_14);
      NestedParties_NoNestedPartyIDs_14.insert(NestedPartyIDSource_14.getString());
      FIX::NestedPartyRole NestedPartyRole_14(882400919);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_14);
      NestedParties_NoNestedPartyIDs_14.insert(NestedPartyRole_14.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_14);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_27;
        FIX::NestedPartySubID NestedPartySubID_27("STRING_308678043");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_27);
        NstdPtysSubGrp_NoNestedPartySubIDs_27.insert(NestedPartySubID_27.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_27(1978800158);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_27);
        NstdPtysSubGrp_NoNestedPartySubIDs_27.insert(NestedPartySubIDType_27.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_27);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_28;
        FIX::NestedPartySubID NestedPartySubID_28("STRING_686188079");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_28);
        NstdPtysSubGrp_NoNestedPartySubIDs_28.insert(NestedPartySubID_28.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_28(2522349);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_28);
        NstdPtysSubGrp_NoNestedPartySubIDs_28.insert(NestedPartySubIDType_28.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_28);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_4;
    FIX::SettlDeliveryType SettlDeliveryType_4(3);
    noAllocs_0_0.set(SettlDeliveryType_4);
    SettlInstructionsData_4.insert(SettlDeliveryType_4.getString());
    FIX::StandInstDbID StandInstDbID_4("STRING_2005426692");
    noAllocs_0_0.set(StandInstDbID_4);
    SettlInstructionsData_4.insert(StandInstDbID_4.getString());
    FIX::StandInstDbName StandInstDbName_4("STRING_1690970779");
    noAllocs_0_0.set(StandInstDbName_4);
    SettlInstructionsData_4.insert(StandInstDbName_4.getString());
    FIX::StandInstDbType StandInstDbType_4(4);
    noAllocs_0_0.set(StandInstDbType_4);
    SettlInstructionsData_4.insert(StandInstDbType_4.getString());
    all_values.push_back(SettlInstructionsData_4);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_8;
      FIX::DlvyInstType DlvyInstType_8('C');
      noDlvyInst_0_1_0.set(DlvyInstType_8);
      DlvyInstGrp_NoDlvyInst_8.insert(DlvyInstType_8.getString());
      FIX::SettlInstSource SettlInstSource_8('1');
      noDlvyInst_0_1_0.set(SettlInstSource_8);
      DlvyInstGrp_NoDlvyInst_8.insert(SettlInstSource_8.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_8);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_19;
        FIX::SettlPartyID SettlPartyID_19("STRING_496461541");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_19);
        SettlParties_NoSettlPartyIDs_19.insert(SettlPartyID_19.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_19('1');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_19);
        SettlParties_NoSettlPartyIDs_19.insert(SettlPartyIDSource_19.getString());
        FIX::SettlPartyRole SettlPartyRole_19(2095703679);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_19);
        SettlParties_NoSettlPartyIDs_19.insert(SettlPartyRole_19.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_19);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_40;
          FIX::SettlPartySubID SettlPartySubID_40("STRING_168741082");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_40);
          SettlPtysSubGrp_NoSettlPartySubIDs_40.insert(SettlPartySubID_40.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_40(1437175237);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_40);
          SettlPtysSubGrp_NoSettlPartySubIDs_40.insert(SettlPartySubIDType_40.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_40);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_41;
          FIX::SettlPartySubID SettlPartySubID_41("STRING_2091182379");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_41);
          SettlPtysSubGrp_NoSettlPartySubIDs_41.insert(SettlPartySubID_41.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_41(2132101728);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_41);
          SettlPtysSubGrp_NoSettlPartySubIDs_41.insert(SettlPartySubIDType_41.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_41);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_0_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_9;
      FIX::DlvyInstType DlvyInstType_9('S');
      noDlvyInst_0_1_1.set(DlvyInstType_9);
      DlvyInstGrp_NoDlvyInst_9.insert(DlvyInstType_9.getString());
      FIX::SettlInstSource SettlInstSource_9('1');
      noDlvyInst_0_1_1.set(SettlInstSource_9);
      DlvyInstGrp_NoDlvyInst_9.insert(SettlInstSource_9.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_9);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_20;
        FIX::SettlPartyID SettlPartyID_20("STRING_1834335443");
        noSettlPartyIDs_0_1_2_0.set(SettlPartyID_20);
        SettlParties_NoSettlPartyIDs_20.insert(SettlPartyID_20.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_20('9');
        noSettlPartyIDs_0_1_2_0.set(SettlPartyIDSource_20);
        SettlParties_NoSettlPartyIDs_20.insert(SettlPartyIDSource_20.getString());
        FIX::SettlPartyRole SettlPartyRole_20(1232576213);
        noSettlPartyIDs_0_1_2_0.set(SettlPartyRole_20);
        SettlParties_NoSettlPartyIDs_20.insert(SettlPartyRole_20.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_20);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_42;
          FIX::SettlPartySubID SettlPartySubID_42("STRING_1303439157");
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubID_42);
          SettlPtysSubGrp_NoSettlPartySubIDs_42.insert(SettlPartySubID_42.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_42(87432629);
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubIDType_42);
          SettlPtysSubGrp_NoSettlPartySubIDs_42.insert(SettlPartySubIDType_42.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_42);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_43;
          FIX::SettlPartySubID SettlPartySubID_43("STRING_371150377");
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubID_43);
          SettlPtysSubGrp_NoSettlPartySubIDs_43.insert(SettlPartySubID_43.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_43(162746106);
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubIDType_43);
          SettlPtysSubGrp_NoSettlPartySubIDs_43.insert(SettlPartySubIDType_43.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_43);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_1);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_21;
        FIX::SettlPartyID SettlPartyID_21("STRING_396110672");
        noSettlPartyIDs_0_1_2_1.set(SettlPartyID_21);
        SettlParties_NoSettlPartyIDs_21.insert(SettlPartyID_21.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_21('2');
        noSettlPartyIDs_0_1_2_1.set(SettlPartyIDSource_21);
        SettlParties_NoSettlPartyIDs_21.insert(SettlPartyIDSource_21.getString());
        FIX::SettlPartyRole SettlPartyRole_21(848934185);
        noSettlPartyIDs_0_1_2_1.set(SettlPartyRole_21);
        SettlParties_NoSettlPartyIDs_21.insert(SettlPartyRole_21.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_21);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_44;
          FIX::SettlPartySubID SettlPartySubID_44("STRING_978768486");
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubID_44);
          SettlPtysSubGrp_NoSettlPartySubIDs_44.insert(SettlPartySubID_44.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_44(706877229);
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubIDType_44);
          SettlPtysSubGrp_NoSettlPartySubIDs_44.insert(SettlPartySubIDType_44.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_44);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_45;
          FIX::SettlPartySubID SettlPartySubID_45("STRING_2089603801");
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubID_45);
          SettlPtysSubGrp_NoSettlPartySubIDs_45.insert(SettlPartySubID_45.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_45(446334207);
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubIDType_45);
          SettlPtysSubGrp_NoSettlPartySubIDs_45.insert(SettlPartySubIDType_45.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_45);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_46;
          FIX::SettlPartySubID SettlPartySubID_46("STRING_1791173510");
          noSettlPartySubIDs_0_1_1_3_2.set(SettlPartySubID_46);
          SettlPtysSubGrp_NoSettlPartySubIDs_46.insert(SettlPartySubID_46.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_46(1452177135);
          noSettlPartySubIDs_0_1_1_3_2.set(SettlPartySubIDType_46);
          SettlPtysSubGrp_NoSettlPartySubIDs_46.insert(SettlPartySubIDType_46.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_46);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_2);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_22;
        FIX::SettlPartyID SettlPartyID_22("STRING_1639824310");
        noSettlPartyIDs_0_1_2_2.set(SettlPartyID_22);
        SettlParties_NoSettlPartyIDs_22.insert(SettlPartyID_22.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_22('1');
        noSettlPartyIDs_0_1_2_2.set(SettlPartyIDSource_22);
        SettlParties_NoSettlPartyIDs_22.insert(SettlPartyIDSource_22.getString());
        FIX::SettlPartyRole SettlPartyRole_22(1948638676);
        noSettlPartyIDs_0_1_2_2.set(SettlPartyRole_22);
        SettlParties_NoSettlPartyIDs_22.insert(SettlPartyRole_22.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_22);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_47;
          FIX::SettlPartySubID SettlPartySubID_47("STRING_75813812");
          noSettlPartySubIDs_0_1_2_3_0.set(SettlPartySubID_47);
          SettlPtysSubGrp_NoSettlPartySubIDs_47.insert(SettlPartySubID_47.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_47(471318439);
          noSettlPartySubIDs_0_1_2_3_0.set(SettlPartySubIDType_47);
          SettlPtysSubGrp_NoSettlPartySubIDs_47.insert(SettlPartySubIDType_47.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_47);

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_48;
          FIX::SettlPartySubID SettlPartySubID_48("STRING_1931671368");
          noSettlPartySubIDs_0_1_2_3_1.set(SettlPartySubID_48);
          SettlPtysSubGrp_NoSettlPartySubIDs_48.insert(SettlPartySubID_48.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_48(1512989049);
          noSettlPartySubIDs_0_1_2_3_1.set(SettlPartySubIDType_48);
          SettlPtysSubGrp_NoSettlPartySubIDs_48.insert(SettlPartySubIDType_48.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_48);

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_1);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_49;
          FIX::SettlPartySubID SettlPartySubID_49("STRING_415017170");
          noSettlPartySubIDs_0_1_2_3_2.set(SettlPartySubID_49);
          SettlPtysSubGrp_NoSettlPartySubIDs_49.insert(SettlPartySubID_49.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_49(1916289448);
          noSettlPartySubIDs_0_1_2_3_2.set(SettlPartySubIDType_49);
          SettlPtysSubGrp_NoSettlPartySubIDs_49.insert(SettlPartySubIDType_49.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_49);

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_2);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_2);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_0_1_2;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_10;
      FIX::DlvyInstType DlvyInstType_10('C');
      noDlvyInst_0_1_2.set(DlvyInstType_10);
      DlvyInstGrp_NoDlvyInst_10.insert(DlvyInstType_10.getString());
      FIX::SettlInstSource SettlInstSource_10('3');
      noDlvyInst_0_1_2.set(SettlInstSource_10);
      DlvyInstGrp_NoDlvyInst_10.insert(SettlInstSource_10.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_10);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_23;
        FIX::SettlPartyID SettlPartyID_23("STRING_1336159627");
        noSettlPartyIDs_0_2_2_0.set(SettlPartyID_23);
        SettlParties_NoSettlPartyIDs_23.insert(SettlPartyID_23.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_23('1');
        noSettlPartyIDs_0_2_2_0.set(SettlPartyIDSource_23);
        SettlParties_NoSettlPartyIDs_23.insert(SettlPartyIDSource_23.getString());
        FIX::SettlPartyRole SettlPartyRole_23(101128985);
        noSettlPartyIDs_0_2_2_0.set(SettlPartyRole_23);
        SettlParties_NoSettlPartyIDs_23.insert(SettlPartyRole_23.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_23);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_50;
          FIX::SettlPartySubID SettlPartySubID_50("STRING_525846215");
          noSettlPartySubIDs_0_2_0_3_0.set(SettlPartySubID_50);
          SettlPtysSubGrp_NoSettlPartySubIDs_50.insert(SettlPartySubID_50.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_50(188561614);
          noSettlPartySubIDs_0_2_0_3_0.set(SettlPartySubIDType_50);
          SettlPtysSubGrp_NoSettlPartySubIDs_50.insert(SettlPartySubIDType_50.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_50);

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_0);
        }
        noDlvyInst_0_1_2.addGroup(noSettlPartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_2_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_24;
        FIX::SettlPartyID SettlPartyID_24("STRING_1196059462");
        noSettlPartyIDs_0_2_2_1.set(SettlPartyID_24);
        SettlParties_NoSettlPartyIDs_24.insert(SettlPartyID_24.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_24('6');
        noSettlPartyIDs_0_2_2_1.set(SettlPartyIDSource_24);
        SettlParties_NoSettlPartyIDs_24.insert(SettlPartyIDSource_24.getString());
        FIX::SettlPartyRole SettlPartyRole_24(584672286);
        noSettlPartyIDs_0_2_2_1.set(SettlPartyRole_24);
        SettlParties_NoSettlPartyIDs_24.insert(SettlPartyRole_24.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_24);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_51;
          FIX::SettlPartySubID SettlPartySubID_51("STRING_1537526506");
          noSettlPartySubIDs_0_2_1_3_0.set(SettlPartySubID_51);
          SettlPtysSubGrp_NoSettlPartySubIDs_51.insert(SettlPartySubID_51.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_51(983305308);
          noSettlPartySubIDs_0_2_1_3_0.set(SettlPartySubIDType_51);
          SettlPtysSubGrp_NoSettlPartySubIDs_51.insert(SettlPartySubIDType_51.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_51);

          noSettlPartyIDs_0_2_2_1.addGroup(noSettlPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_52;
          FIX::SettlPartySubID SettlPartySubID_52("STRING_229811187");
          noSettlPartySubIDs_0_2_1_3_1.set(SettlPartySubID_52);
          SettlPtysSubGrp_NoSettlPartySubIDs_52.insert(SettlPartySubID_52.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_52(96920087);
          noSettlPartySubIDs_0_2_1_3_1.set(SettlPartySubIDType_52);
          SettlPtysSubGrp_NoSettlPartySubIDs_52.insert(SettlPartySubIDType_52.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_52);

          noSettlPartyIDs_0_2_2_1.addGroup(noSettlPartySubIDs_0_2_1_3_1);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_53;
          FIX::SettlPartySubID SettlPartySubID_53("STRING_925425461");
          noSettlPartySubIDs_0_2_1_3_2.set(SettlPartySubID_53);
          SettlPtysSubGrp_NoSettlPartySubIDs_53.insert(SettlPartySubID_53.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_53(676145395);
          noSettlPartySubIDs_0_2_1_3_2.set(SettlPartySubIDType_53);
          SettlPtysSubGrp_NoSettlPartySubIDs_53.insert(SettlPartySubIDType_53.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_53);

          noSettlPartyIDs_0_2_2_1.addGroup(noSettlPartySubIDs_0_2_1_3_2);
        }
        noDlvyInst_0_1_2.addGroup(noSettlPartyIDs_0_2_2_1);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoAllocs noAllocs_0_1;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_5;
    FIX::AllocAccount AllocAccount_7("STRING_1888093597");
    noAllocs_0_1.set(AllocAccount_7);
    AllocGrp_NoAllocs_5.insert(AllocAccount_7.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_5;
    AllocAccruedInterestAmt_5.setString("2301189");
    noAllocs_0_1.set(AllocAccruedInterestAmt_5);
    AllocGrp_NoAllocs_5.insert(AllocAccruedInterestAmt_5.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_7(168486057);
    noAllocs_0_1.set(AllocAcctIDSource_7);
    AllocGrp_NoAllocs_5.insert(AllocAcctIDSource_7.getString());
    FIX::AllocAvgPx AllocAvgPx_5;
    AllocAvgPx_5.setString("20156873");
    noAllocs_0_1.set(AllocAvgPx_5);
    AllocGrp_NoAllocs_5.insert(AllocAvgPx_5.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_7("STRING_31273976");
    noAllocs_0_1.set(AllocCustomerCapacity_7);
    AllocGrp_NoAllocs_5.insert(AllocCustomerCapacity_7.getString());
    FIX::AllocHandlInst AllocHandlInst_5(3);
    noAllocs_0_1.set(AllocHandlInst_5);
    AllocGrp_NoAllocs_5.insert(AllocHandlInst_5.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_5;
    AllocInterestAtMaturity_5.setString("20915011");
    noAllocs_0_1.set(AllocInterestAtMaturity_5);
    AllocGrp_NoAllocs_5.insert(AllocInterestAtMaturity_5.getString());
    FIX::AllocMethod AllocMethod_5(1);
    noAllocs_0_1.set(AllocMethod_5);
    AllocGrp_NoAllocs_5.insert(AllocMethod_5.getString());
    FIX::AllocNetMoney AllocNetMoney_5;
    AllocNetMoney_5.setString("17156040");
    noAllocs_0_1.set(AllocNetMoney_5);
    AllocGrp_NoAllocs_5.insert(AllocNetMoney_5.getString());
    FIX::AllocPositionEffect AllocPositionEffect_7('F');
    noAllocs_0_1.set(AllocPositionEffect_7);
    AllocGrp_NoAllocs_5.insert(AllocPositionEffect_7.getString());
    FIX::AllocPrice AllocPrice_7;
    AllocPrice_7.setString("9176095");
    noAllocs_0_1.set(AllocPrice_7);
    AllocGrp_NoAllocs_5.insert(AllocPrice_7.getString());
    FIX::AllocQty AllocQty_7;
    AllocQty_7.setString("14844098");
    noAllocs_0_1.set(AllocQty_7);
    AllocGrp_NoAllocs_5.insert(AllocQty_7.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_5;
    AllocSettlCurrAmt_5.setString("9588307");
    noAllocs_0_1.set(AllocSettlCurrAmt_5);
    AllocGrp_NoAllocs_5.insert(AllocSettlCurrAmt_5.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_5("JPY");
    noAllocs_0_1.set(AllocSettlCurrency_5);
    AllocGrp_NoAllocs_5.insert(AllocSettlCurrency_5.getString());
    FIX::AllocSettlInstType AllocSettlInstType_5(4);
    noAllocs_0_1.set(AllocSettlInstType_5);
    AllocGrp_NoAllocs_5.insert(AllocSettlInstType_5.getString());
    FIX::AllocText AllocText_7("STRING_579333723");
    noAllocs_0_1.set(AllocText_7);
    AllocGrp_NoAllocs_5.insert(AllocText_7.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_5("STRING_F");
    noAllocs_0_1.set(ClearingFeeIndicator_5);
    AllocGrp_NoAllocs_5.insert(ClearingFeeIndicator_5.getString());
    FIX::EncodedAllocText EncodedAllocText_7("DATA_972415839");
    noAllocs_0_1.set(EncodedAllocText_7);
    AllocGrp_NoAllocs_5.insert(EncodedAllocText_7.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_7(1105179938);
    noAllocs_0_1.set(EncodedAllocTextLen_7);
    AllocGrp_NoAllocs_5.insert(EncodedAllocTextLen_7.getString());
    FIX::IndividualAllocID IndividualAllocID_7("STRING_642653233");
    noAllocs_0_1.set(IndividualAllocID_7);
    AllocGrp_NoAllocs_5.insert(IndividualAllocID_7.getString());
    FIX::IndividualAllocType IndividualAllocType_7(2);
    noAllocs_0_1.set(IndividualAllocType_7);
    AllocGrp_NoAllocs_5.insert(IndividualAllocType_7.getString());
    FIX::MatchStatus MatchStatus_6('1');
    noAllocs_0_1.set(MatchStatus_6);
    AllocGrp_NoAllocs_5.insert(MatchStatus_6.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_5(true);
    noAllocs_0_1.set(NotifyBrokerOfCredit_5);
    AllocGrp_NoAllocs_5.insert(NotifyBrokerOfCredit_5.getString());
    FIX::ProcessCode ProcessCode_5('0');
    noAllocs_0_1.set(ProcessCode_5);
    AllocGrp_NoAllocs_5.insert(ProcessCode_5.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_7("STRING_1183815117");
    noAllocs_0_1.set(SecondaryIndividualAllocID_7);
    AllocGrp_NoAllocs_5.insert(SecondaryIndividualAllocID_7.getString());
    FIX::SettlCurrAmt SettlCurrAmt_5;
    SettlCurrAmt_5.setString("631471");
    noAllocs_0_1.set(SettlCurrAmt_5);
    AllocGrp_NoAllocs_5.insert(SettlCurrAmt_5.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_5;
    SettlCurrFxRate_5.setString("16493291");
    noAllocs_0_1.set(SettlCurrFxRate_5);
    AllocGrp_NoAllocs_5.insert(SettlCurrFxRate_5.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_5('M');
    noAllocs_0_1.set(SettlCurrFxRateCalc_5);
    AllocGrp_NoAllocs_5.insert(SettlCurrFxRateCalc_5.getString());
    FIX::SettlCurrency SettlCurrency_5("USD");
    noAllocs_0_1.set(SettlCurrency_5);
    AllocGrp_NoAllocs_5.insert(SettlCurrency_5.getString());
    all_values.push_back(AllocGrp_NoAllocs_5);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_10;
      FIX::ClearingInstruction ClearingInstruction_10(3);
      noClearingInstructions_1_1_0.set(ClearingInstruction_10);
      ClrInstGrp_NoClearingInstructions_10.insert(ClearingInstruction_10.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_10);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_11;
      FIX::ClearingInstruction ClearingInstruction_11(9);
      noClearingInstructions_1_1_1.set(ClearingInstruction_11);
      ClrInstGrp_NoClearingInstructions_11.insert(ClearingInstruction_11.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_11);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_12;
      FIX::ClearingInstruction ClearingInstruction_12(0);
      noClearingInstructions_1_1_2.set(ClearingInstruction_12);
      ClrInstGrp_NoClearingInstructions_12.insert(ClearingInstruction_12.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_12);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_5;
    FIX::CommCurrency CommCurrency_5("USD");
    noAllocs_0_1.set(CommCurrency_5);
    CommissionData_5.insert(CommCurrency_5.getString());
    FIX::CommType CommType_5('5');
    noAllocs_0_1.set(CommType_5);
    CommissionData_5.insert(CommType_5.getString());
    FIX::Commission Commission_5;
    Commission_5.setString("17525579");
    noAllocs_0_1.set(Commission_5);
    CommissionData_5.insert(Commission_5.getString());
    FIX::FundRenewWaiv FundRenewWaiv_5('Y');
    noAllocs_0_1.set(FundRenewWaiv_5);
    CommissionData_5.insert(FundRenewWaiv_5.getString());
    all_values.push_back(CommissionData_5);

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_12;
      FIX::MiscFeeAmt MiscFeeAmt_12;
      MiscFeeAmt_12.setString("5226839");
      noMiscFees_1_1_0.set(MiscFeeAmt_12);
      MiscFeesGrp_NoMiscFees_12.insert(MiscFeeAmt_12.getString());
      FIX::MiscFeeBasis MiscFeeBasis_12(0);
      noMiscFees_1_1_0.set(MiscFeeBasis_12);
      MiscFeesGrp_NoMiscFees_12.insert(MiscFeeBasis_12.getString());
      FIX::MiscFeeCurr MiscFeeCurr_12("JPY");
      noMiscFees_1_1_0.set(MiscFeeCurr_12);
      MiscFeesGrp_NoMiscFees_12.insert(MiscFeeCurr_12.getString());
      FIX::MiscFeeType MiscFeeType_12("STRING_10");
      noMiscFees_1_1_0.set(MiscFeeType_12);
      MiscFeesGrp_NoMiscFees_12.insert(MiscFeeType_12.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_12);

      noAllocs_0_1.addGroup(noMiscFees_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_1_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_13;
      FIX::MiscFeeAmt MiscFeeAmt_13;
      MiscFeeAmt_13.setString("12494268");
      noMiscFees_1_1_1.set(MiscFeeAmt_13);
      MiscFeesGrp_NoMiscFees_13.insert(MiscFeeAmt_13.getString());
      FIX::MiscFeeBasis MiscFeeBasis_13(0);
      noMiscFees_1_1_1.set(MiscFeeBasis_13);
      MiscFeesGrp_NoMiscFees_13.insert(MiscFeeBasis_13.getString());
      FIX::MiscFeeCurr MiscFeeCurr_13("CHF");
      noMiscFees_1_1_1.set(MiscFeeCurr_13);
      MiscFeesGrp_NoMiscFees_13.insert(MiscFeeCurr_13.getString());
      FIX::MiscFeeType MiscFeeType_13("STRING_3");
      noMiscFees_1_1_1.set(MiscFeeType_13);
      MiscFeesGrp_NoMiscFees_13.insert(MiscFeeType_13.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_13);

      noAllocs_0_1.addGroup(noMiscFees_1_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_15;
      FIX::NestedPartyID NestedPartyID_15("STRING_95350742");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_15);
      NestedParties_NoNestedPartyIDs_15.insert(NestedPartyID_15.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_15('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_15);
      NestedParties_NoNestedPartyIDs_15.insert(NestedPartyIDSource_15.getString());
      FIX::NestedPartyRole NestedPartyRole_15(1712489326);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_15);
      NestedParties_NoNestedPartyIDs_15.insert(NestedPartyRole_15.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_15);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_29;
        FIX::NestedPartySubID NestedPartySubID_29("STRING_99260679");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_29);
        NstdPtysSubGrp_NoNestedPartySubIDs_29.insert(NestedPartySubID_29.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_29(1775636506);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_29);
        NstdPtysSubGrp_NoNestedPartySubIDs_29.insert(NestedPartySubIDType_29.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_29);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_16;
      FIX::NestedPartyID NestedPartyID_16("STRING_1016714285");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_16);
      NestedParties_NoNestedPartyIDs_16.insert(NestedPartyID_16.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_16('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_16);
      NestedParties_NoNestedPartyIDs_16.insert(NestedPartyIDSource_16.getString());
      FIX::NestedPartyRole NestedPartyRole_16(616725499);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_16);
      NestedParties_NoNestedPartyIDs_16.insert(NestedPartyRole_16.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_16);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_30;
        FIX::NestedPartySubID NestedPartySubID_30("STRING_253857390");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_30);
        NstdPtysSubGrp_NoNestedPartySubIDs_30.insert(NestedPartySubID_30.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_30(1835417088);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_30);
        NstdPtysSubGrp_NoNestedPartySubIDs_30.insert(NestedPartySubIDType_30.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_30);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_17;
      FIX::NestedPartyID NestedPartyID_17("STRING_1541182215");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_17);
      NestedParties_NoNestedPartyIDs_17.insert(NestedPartyID_17.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_17('1');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_17);
      NestedParties_NoNestedPartyIDs_17.insert(NestedPartyIDSource_17.getString());
      FIX::NestedPartyRole NestedPartyRole_17(937899005);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_17);
      NestedParties_NoNestedPartyIDs_17.insert(NestedPartyRole_17.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_17);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_31;
        FIX::NestedPartySubID NestedPartySubID_31("STRING_1976972700");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_31);
        NstdPtysSubGrp_NoNestedPartySubIDs_31.insert(NestedPartySubID_31.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_31(542973338);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_31);
        NstdPtysSubGrp_NoNestedPartySubIDs_31.insert(NestedPartySubIDType_31.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_31);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_32;
        FIX::NestedPartySubID NestedPartySubID_32("STRING_1370122007");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_32);
        NstdPtysSubGrp_NoNestedPartySubIDs_32.insert(NestedPartySubID_32.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_32(2120062069);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_32);
        NstdPtysSubGrp_NoNestedPartySubIDs_32.insert(NestedPartySubIDType_32.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_32);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_5;
    FIX::SettlDeliveryType SettlDeliveryType_5(1);
    noAllocs_0_1.set(SettlDeliveryType_5);
    SettlInstructionsData_5.insert(SettlDeliveryType_5.getString());
    FIX::StandInstDbID StandInstDbID_5("STRING_405578326");
    noAllocs_0_1.set(StandInstDbID_5);
    SettlInstructionsData_5.insert(StandInstDbID_5.getString());
    FIX::StandInstDbName StandInstDbName_5("STRING_1074498565");
    noAllocs_0_1.set(StandInstDbName_5);
    SettlInstructionsData_5.insert(StandInstDbName_5.getString());
    FIX::StandInstDbType StandInstDbType_5(3);
    noAllocs_0_1.set(StandInstDbType_5);
    SettlInstructionsData_5.insert(StandInstDbType_5.getString());
    all_values.push_back(SettlInstructionsData_5);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_11;
      FIX::DlvyInstType DlvyInstType_11('S');
      noDlvyInst_1_1_0.set(DlvyInstType_11);
      DlvyInstGrp_NoDlvyInst_11.insert(DlvyInstType_11.getString());
      FIX::SettlInstSource SettlInstSource_11('2');
      noDlvyInst_1_1_0.set(SettlInstSource_11);
      DlvyInstGrp_NoDlvyInst_11.insert(SettlInstSource_11.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_11);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_25;
        FIX::SettlPartyID SettlPartyID_25("STRING_250800904");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_25);
        SettlParties_NoSettlPartyIDs_25.insert(SettlPartyID_25.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_25('3');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_25);
        SettlParties_NoSettlPartyIDs_25.insert(SettlPartyIDSource_25.getString());
        FIX::SettlPartyRole SettlPartyRole_25(121671657);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_25);
        SettlParties_NoSettlPartyIDs_25.insert(SettlPartyRole_25.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_25);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_54;
          FIX::SettlPartySubID SettlPartySubID_54("STRING_1441331014");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_54);
          SettlPtysSubGrp_NoSettlPartySubIDs_54.insert(SettlPartySubID_54.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_54(1834160983);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_54);
          SettlPtysSubGrp_NoSettlPartySubIDs_54.insert(SettlPartySubIDType_54.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_54);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noDlvyInst_1_1_0);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // ExecAllocGrp
  // Group ExecAllocGrp.NoExecs
  {
    FIX50SP2::AllocationReport::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_5;
    FIX::ExecID ExecID_5("STRING_1540591693");
    noExecs_0_0.set(ExecID_5);
    ExecAllocGrp_NoExecs_5.insert(ExecID_5.getString());
    FIX::FirmTradeID FirmTradeID_5("STRING_1462313841");
    noExecs_0_0.set(FirmTradeID_5);
    ExecAllocGrp_NoExecs_5.insert(FirmTradeID_5.getString());
    FIX::LastCapacity LastCapacity_5('4');
    noExecs_0_0.set(LastCapacity_5);
    ExecAllocGrp_NoExecs_5.insert(LastCapacity_5.getString());
    FIX::LastParPx LastParPx_5;
    LastParPx_5.setString("7731039");
    noExecs_0_0.set(LastParPx_5);
    ExecAllocGrp_NoExecs_5.insert(LastParPx_5.getString());
    FIX::LastPx LastPx_5;
    LastPx_5.setString("20790393");
    noExecs_0_0.set(LastPx_5);
    ExecAllocGrp_NoExecs_5.insert(LastPx_5.getString());
    FIX::LastQty LastQty_5;
    LastQty_5.setString("19249562");
    noExecs_0_0.set(LastQty_5);
    ExecAllocGrp_NoExecs_5.insert(LastQty_5.getString());
    FIX::SecondaryExecID SecondaryExecID_5("STRING_1026961319");
    noExecs_0_0.set(SecondaryExecID_5);
    ExecAllocGrp_NoExecs_5.insert(SecondaryExecID_5.getString());
    FIX::TradeID TradeID_5("STRING_1766972780");
    noExecs_0_0.set(TradeID_5);
    ExecAllocGrp_NoExecs_5.insert(TradeID_5.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_5);

    msg.addGroup(noExecs_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_2;
  FIX::AgreementCurrency AgreementCurrency_2("CAN");
  msg.set(AgreementCurrency_2);
  FinancingDetails_2.insert(AgreementCurrency_2.getString());
  FIX::AgreementDate AgreementDate_2("LOCALMKTDATE_557388138");
  msg.set(AgreementDate_2);
  FinancingDetails_2.insert(AgreementDate_2.getString());
  FIX::AgreementDesc AgreementDesc_2("STRING_842763073");
  msg.set(AgreementDesc_2);
  FinancingDetails_2.insert(AgreementDesc_2.getString());
  FIX::AgreementID AgreementID_2("STRING_1999856645");
  msg.set(AgreementID_2);
  FinancingDetails_2.insert(AgreementID_2.getString());
  FIX::DeliveryType DeliveryType_2(0);
  msg.set(DeliveryType_2);
  FinancingDetails_2.insert(DeliveryType_2.getString());
  FIX::EndDate EndDate_2("LOCALMKTDATE_65401432");
  msg.set(EndDate_2);
  FinancingDetails_2.insert(EndDate_2.getString());
  FIX::MarginRatio MarginRatio_2;
  MarginRatio_2.setString("50.660000");
  msg.set(MarginRatio_2);
  FinancingDetails_2.insert(MarginRatio_2.getString());
  FIX::StartDate StartDate_2("LOCALMKTDATE_18535085");
  msg.set(StartDate_2);
  FinancingDetails_2.insert(StartDate_2.getString());
  FIX::TerminationType TerminationType_2(3);
  msg.set(TerminationType_2);
  FinancingDetails_2.insert(TerminationType_2.getString());
  all_values.push_back(FinancingDetails_2);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AllocationReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_6;
    FIX::EncodedLegIssuer EncodedLegIssuer_6("DATA_816319279");
    noLegs_0_0.set(EncodedLegIssuer_6);
    InstrumentLeg_6.insert(EncodedLegIssuer_6.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_6(264977037);
    noLegs_0_0.set(EncodedLegIssuerLen_6);
    InstrumentLeg_6.insert(EncodedLegIssuerLen_6.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_6("DATA_1075891798");
    noLegs_0_0.set(EncodedLegSecurityDesc_6);
    InstrumentLeg_6.insert(EncodedLegSecurityDesc_6.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_6(1925564132);
    noLegs_0_0.set(EncodedLegSecurityDescLen_6);
    InstrumentLeg_6.insert(EncodedLegSecurityDescLen_6.getString());
    FIX::LegCFICode LegCFICode_6("STRING_2048968537");
    noLegs_0_0.set(LegCFICode_6);
    InstrumentLeg_6.insert(LegCFICode_6.getString());
    FIX::LegContractMultiplier LegContractMultiplier_6;
    LegContractMultiplier_6.setString("13266927");
    noLegs_0_0.set(LegContractMultiplier_6);
    InstrumentLeg_6.insert(LegContractMultiplier_6.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_6(156482288);
    noLegs_0_0.set(LegContractMultiplierUnit_6);
    InstrumentLeg_6.insert(LegContractMultiplierUnit_6.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_6("MONTHYEAR_23156546");
    noLegs_0_0.set(LegContractSettlMonth_6);
    InstrumentLeg_6.insert(LegContractSettlMonth_6.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_6("COUNTRY_1672844348");
    noLegs_0_0.set(LegCountryOfIssue_6);
    InstrumentLeg_6.insert(LegCountryOfIssue_6.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_6("LOCALMKTDATE_1597813302");
    noLegs_0_0.set(LegCouponPaymentDate_6);
    InstrumentLeg_6.insert(LegCouponPaymentDate_6.getString());
    FIX::LegCouponRate LegCouponRate_6;
    LegCouponRate_6.setString("75.300000");
    noLegs_0_0.set(LegCouponRate_6);
    InstrumentLeg_6.insert(LegCouponRate_6.getString());
    FIX::LegCreditRating LegCreditRating_6("STRING_1386381090");
    noLegs_0_0.set(LegCreditRating_6);
    InstrumentLeg_6.insert(LegCreditRating_6.getString());
    FIX::LegCurrency LegCurrency_6("CAN");
    noLegs_0_0.set(LegCurrency_6);
    InstrumentLeg_6.insert(LegCurrency_6.getString());
    FIX::LegDatedDate LegDatedDate_6("LOCALMKTDATE_2116632118");
    noLegs_0_0.set(LegDatedDate_6);
    InstrumentLeg_6.insert(LegDatedDate_6.getString());
    FIX::LegExerciseStyle LegExerciseStyle_6(1764025277);
    noLegs_0_0.set(LegExerciseStyle_6);
    InstrumentLeg_6.insert(LegExerciseStyle_6.getString());
    FIX::LegFactor LegFactor_6;
    LegFactor_6.setString("11037034");
    noLegs_0_0.set(LegFactor_6);
    InstrumentLeg_6.insert(LegFactor_6.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_6(1894104719);
    noLegs_0_0.set(LegFlowScheduleType_6);
    InstrumentLeg_6.insert(LegFlowScheduleType_6.getString());
    FIX::LegInstrRegistry LegInstrRegistry_6("STRING_643502949");
    noLegs_0_0.set(LegInstrRegistry_6);
    InstrumentLeg_6.insert(LegInstrRegistry_6.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_6("LOCALMKTDATE_723192548");
    noLegs_0_0.set(LegInterestAccrualDate_6);
    InstrumentLeg_6.insert(LegInterestAccrualDate_6.getString());
    FIX::LegIssueDate LegIssueDate_6("LOCALMKTDATE_1065275888");
    noLegs_0_0.set(LegIssueDate_6);
    InstrumentLeg_6.insert(LegIssueDate_6.getString());
    FIX::LegIssuer LegIssuer_6("STRING_666386894");
    noLegs_0_0.set(LegIssuer_6);
    InstrumentLeg_6.insert(LegIssuer_6.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_6("STRING_1280580686");
    noLegs_0_0.set(LegLocaleOfIssue_6);
    InstrumentLeg_6.insert(LegLocaleOfIssue_6.getString());
    FIX::LegMaturityDate LegMaturityDate_6("LOCALMKTDATE_1908038961");
    noLegs_0_0.set(LegMaturityDate_6);
    InstrumentLeg_6.insert(LegMaturityDate_6.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_6("MONTHYEAR_518759892");
    noLegs_0_0.set(LegMaturityMonthYear_6);
    InstrumentLeg_6.insert(LegMaturityMonthYear_6.getString());
    FIX::LegMaturityTime LegMaturityTime_6("TZTIMEONLY_233458515");
    noLegs_0_0.set(LegMaturityTime_6);
    InstrumentLeg_6.insert(LegMaturityTime_6.getString());
    FIX::LegOptAttribute LegOptAttribute_6('1');
    noLegs_0_0.set(LegOptAttribute_6);
    InstrumentLeg_6.insert(LegOptAttribute_6.getString());
    FIX::LegOptionRatio LegOptionRatio_6;
    LegOptionRatio_6.setString("3437113");
    noLegs_0_0.set(LegOptionRatio_6);
    InstrumentLeg_6.insert(LegOptionRatio_6.getString());
    FIX::LegPool LegPool_6("STRING_251993600");
    noLegs_0_0.set(LegPool_6);
    InstrumentLeg_6.insert(LegPool_6.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_6("STRING_296936504");
    noLegs_0_0.set(LegPriceUnitOfMeasure_6);
    InstrumentLeg_6.insert(LegPriceUnitOfMeasure_6.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_6;
    LegPriceUnitOfMeasureQty_6.setString("12431612");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_6);
    InstrumentLeg_6.insert(LegPriceUnitOfMeasureQty_6.getString());
    FIX::LegProduct LegProduct_6(1068312879);
    noLegs_0_0.set(LegProduct_6);
    InstrumentLeg_6.insert(LegProduct_6.getString());
    FIX::LegPutOrCall LegPutOrCall_6(561913542);
    noLegs_0_0.set(LegPutOrCall_6);
    InstrumentLeg_6.insert(LegPutOrCall_6.getString());
    FIX::LegRatioQty LegRatioQty_6;
    LegRatioQty_6.setString("1715694");
    noLegs_0_0.set(LegRatioQty_6);
    InstrumentLeg_6.insert(LegRatioQty_6.getString());
    FIX::LegRedemptionDate LegRedemptionDate_6("LOCALMKTDATE_846393364");
    noLegs_0_0.set(LegRedemptionDate_6);
    InstrumentLeg_6.insert(LegRedemptionDate_6.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_6("STRING_463398431");
    noLegs_0_0.set(LegRepoCollateralSecurityType_6);
    InstrumentLeg_6.insert(LegRepoCollateralSecurityType_6.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_6;
    LegRepurchaseRate_6.setString("21.470000");
    noLegs_0_0.set(LegRepurchaseRate_6);
    InstrumentLeg_6.insert(LegRepurchaseRate_6.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_6(1002875652);
    noLegs_0_0.set(LegRepurchaseTerm_6);
    InstrumentLeg_6.insert(LegRepurchaseTerm_6.getString());
    FIX::LegSecurityDesc LegSecurityDesc_6("STRING_486554977");
    noLegs_0_0.set(LegSecurityDesc_6);
    InstrumentLeg_6.insert(LegSecurityDesc_6.getString());
    FIX::LegSecurityExchange LegSecurityExchange_6("EXCHANGE_1023622847");
    noLegs_0_0.set(LegSecurityExchange_6);
    InstrumentLeg_6.insert(LegSecurityExchange_6.getString());
    FIX::LegSecurityID LegSecurityID_6("STRING_453205307");
    noLegs_0_0.set(LegSecurityID_6);
    InstrumentLeg_6.insert(LegSecurityID_6.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_6("STRING_196388859");
    noLegs_0_0.set(LegSecurityIDSource_6);
    InstrumentLeg_6.insert(LegSecurityIDSource_6.getString());
    FIX::LegSecuritySubType LegSecuritySubType_6("STRING_262520290");
    noLegs_0_0.set(LegSecuritySubType_6);
    InstrumentLeg_6.insert(LegSecuritySubType_6.getString());
    FIX::LegSecurityType LegSecurityType_6("STRING_1444126655");
    noLegs_0_0.set(LegSecurityType_6);
    InstrumentLeg_6.insert(LegSecurityType_6.getString());
    FIX::LegSide LegSide_6('1');
    noLegs_0_0.set(LegSide_6);
    InstrumentLeg_6.insert(LegSide_6.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_6("STRING_231668760");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_6);
    InstrumentLeg_6.insert(LegStateOrProvinceOfIssue_6.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_6("CHF");
    noLegs_0_0.set(LegStrikeCurrency_6);
    InstrumentLeg_6.insert(LegStrikeCurrency_6.getString());
    FIX::LegStrikePrice LegStrikePrice_6;
    LegStrikePrice_6.setString("21257734");
    noLegs_0_0.set(LegStrikePrice_6);
    InstrumentLeg_6.insert(LegStrikePrice_6.getString());
    FIX::LegSymbol LegSymbol_6("STRING_1704171233");
    noLegs_0_0.set(LegSymbol_6);
    InstrumentLeg_6.insert(LegSymbol_6.getString());
    FIX::LegSymbolSfx LegSymbolSfx_6("STRING_1047948899");
    noLegs_0_0.set(LegSymbolSfx_6);
    InstrumentLeg_6.insert(LegSymbolSfx_6.getString());
    FIX::LegTimeUnit LegTimeUnit_6("STRING_1043565720");
    noLegs_0_0.set(LegTimeUnit_6);
    InstrumentLeg_6.insert(LegTimeUnit_6.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_6("STRING_223074480");
    noLegs_0_0.set(LegUnitOfMeasure_6);
    InstrumentLeg_6.insert(LegUnitOfMeasure_6.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_6;
    LegUnitOfMeasureQty_6.setString("1810459");
    noLegs_0_0.set(LegUnitOfMeasureQty_6);
    InstrumentLeg_6.insert(LegUnitOfMeasureQty_6.getString());
    all_values.push_back(InstrumentLeg_6);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_11;
      FIX::LegSecurityAltID LegSecurityAltID_11("STRING_741834372");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_11);
      LegSecAltIDGrp_NoLegSecurityAltID_11.insert(LegSecurityAltID_11.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_11("STRING_414504453");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_11);
      LegSecAltIDGrp_NoLegSecurityAltID_11.insert(LegSecurityAltIDSource_11.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_11);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_12;
      FIX::LegSecurityAltID LegSecurityAltID_12("STRING_630077779");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_12);
      LegSecAltIDGrp_NoLegSecurityAltID_12.insert(LegSecurityAltID_12.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_12("STRING_1085545682");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_12);
      LegSecAltIDGrp_NoLegSecurityAltID_12.insert(LegSecurityAltIDSource_12.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_12);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_6;
  FIX::AttachmentPoint AttachmentPoint_6;
  AttachmentPoint_6.setString("80.530000");
  msg.set(AttachmentPoint_6);
  Instrument_6.insert(AttachmentPoint_6.getString());
  FIX::CFICode CFICode_6("STRING_927014284");
  msg.set(CFICode_6);
  Instrument_6.insert(CFICode_6.getString());
  FIX::CPProgram CPProgram_6(1);
  msg.set(CPProgram_6);
  Instrument_6.insert(CPProgram_6.getString());
  FIX::CPRegType CPRegType_6("STRING_1734810933");
  msg.set(CPRegType_6);
  Instrument_6.insert(CPRegType_6.getString());
  FIX::CapPrice CapPrice_6;
  CapPrice_6.setString("14889278");
  msg.set(CapPrice_6);
  Instrument_6.insert(CapPrice_6.getString());
  FIX::ContractMultiplier ContractMultiplier_6;
  ContractMultiplier_6.setString("3527927");
  msg.set(ContractMultiplier_6);
  Instrument_6.insert(ContractMultiplier_6.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_6(2);
  msg.set(ContractMultiplierUnit_6);
  Instrument_6.insert(ContractMultiplierUnit_6.getString());
  FIX::ContractSettlMonth ContractSettlMonth_6("MONTHYEAR_1952326257");
  msg.set(ContractSettlMonth_6);
  Instrument_6.insert(ContractSettlMonth_6.getString());
  FIX::CountryOfIssue CountryOfIssue_6("COUNTRY_1851054920");
  msg.set(CountryOfIssue_6);
  Instrument_6.insert(CountryOfIssue_6.getString());
  FIX::CouponPaymentDate CouponPaymentDate_6("LOCALMKTDATE_1436596301");
  msg.set(CouponPaymentDate_6);
  Instrument_6.insert(CouponPaymentDate_6.getString());
  FIX::CouponRate CouponRate_6;
  CouponRate_6.setString("75.860000");
  msg.set(CouponRate_6);
  Instrument_6.insert(CouponRate_6.getString());
  FIX::CreditRating CreditRating_6("STRING_727194119");
  msg.set(CreditRating_6);
  Instrument_6.insert(CreditRating_6.getString());
  FIX::DatedDate DatedDate_6("LOCALMKTDATE_1889801608");
  msg.set(DatedDate_6);
  Instrument_6.insert(DatedDate_6.getString());
  FIX::DetachmentPoint DetachmentPoint_6;
  DetachmentPoint_6.setString("64.460000");
  msg.set(DetachmentPoint_6);
  Instrument_6.insert(DetachmentPoint_6.getString());
  FIX::EncodedIssuer EncodedIssuer_6("DATA_989714409");
  msg.set(EncodedIssuer_6);
  Instrument_6.insert(EncodedIssuer_6.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_6(1186444615);
  msg.set(EncodedIssuerLen_6);
  Instrument_6.insert(EncodedIssuerLen_6.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_6("DATA_1856323029");
  msg.set(EncodedSecurityDesc_6);
  Instrument_6.insert(EncodedSecurityDesc_6.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_6(1221383169);
  msg.set(EncodedSecurityDescLen_6);
  Instrument_6.insert(EncodedSecurityDescLen_6.getString());
  FIX::ExerciseStyle ExerciseStyle_6(2);
  msg.set(ExerciseStyle_6);
  Instrument_6.insert(ExerciseStyle_6.getString());
  FIX::Factor Factor_6;
  Factor_6.setString("335957");
  msg.set(Factor_6);
  Instrument_6.insert(Factor_6.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_6(false);
  msg.set(FlexProductEligibilityIndicator_6);
  Instrument_6.insert(FlexProductEligibilityIndicator_6.getString());
  FIX::FlexibleIndicator FlexibleIndicator_6(false);
  msg.set(FlexibleIndicator_6);
  Instrument_6.insert(FlexibleIndicator_6.getString());
  FIX::FloorPrice FloorPrice_6;
  FloorPrice_6.setString("10815446");
  msg.set(FloorPrice_6);
  Instrument_6.insert(FloorPrice_6.getString());
  FIX::FlowScheduleType FlowScheduleType_6(3);
  msg.set(FlowScheduleType_6);
  Instrument_6.insert(FlowScheduleType_6.getString());
  FIX::InstrRegistry InstrRegistry_6("STRING_2026874965");
  msg.set(InstrRegistry_6);
  Instrument_6.insert(InstrRegistry_6.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_6('1');
  msg.set(InstrmtAssignmentMethod_6);
  Instrument_6.insert(InstrmtAssignmentMethod_6.getString());
  FIX::InterestAccrualDate InterestAccrualDate_6("LOCALMKTDATE_899876106");
  msg.set(InterestAccrualDate_6);
  Instrument_6.insert(InterestAccrualDate_6.getString());
  FIX::IssueDate IssueDate_6("LOCALMKTDATE_621225689");
  msg.set(IssueDate_6);
  Instrument_6.insert(IssueDate_6.getString());
  FIX::Issuer Issuer_6("STRING_1677095022");
  msg.set(Issuer_6);
  Instrument_6.insert(Issuer_6.getString());
  FIX::ListMethod ListMethod_6(0);
  msg.set(ListMethod_6);
  Instrument_6.insert(ListMethod_6.getString());
  FIX::LocaleOfIssue LocaleOfIssue_6("STRING_1706771372");
  msg.set(LocaleOfIssue_6);
  Instrument_6.insert(LocaleOfIssue_6.getString());
  FIX::MaturityDate MaturityDate_6("LOCALMKTDATE_196109428");
  msg.set(MaturityDate_6);
  Instrument_6.insert(MaturityDate_6.getString());
  FIX::MaturityMonthYear MaturityMonthYear_6("MONTHYEAR_309484522");
  msg.set(MaturityMonthYear_6);
  Instrument_6.insert(MaturityMonthYear_6.getString());
  FIX::MaturityTime MaturityTime_6("TZTIMEONLY_1887994700");
  msg.set(MaturityTime_6);
  Instrument_6.insert(MaturityTime_6.getString());
  FIX::MinPriceIncrement MinPriceIncrement_6;
  MinPriceIncrement_6.setString("19309203");
  msg.set(MinPriceIncrement_6);
  Instrument_6.insert(MinPriceIncrement_6.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_6;
  MinPriceIncrementAmount_6.setString("17984123");
  msg.set(MinPriceIncrementAmount_6);
  Instrument_6.insert(MinPriceIncrementAmount_6.getString());
  FIX::NTPositionLimit NTPositionLimit_6(93303825);
  msg.set(NTPositionLimit_6);
  Instrument_6.insert(NTPositionLimit_6.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_6;
  NotionalPercentageOutstanding_6.setString("73.620000");
  msg.set(NotionalPercentageOutstanding_6);
  Instrument_6.insert(NotionalPercentageOutstanding_6.getString());
  FIX::OptAttribute OptAttribute_6('1');
  msg.set(OptAttribute_6);
  Instrument_6.insert(OptAttribute_6.getString());
  FIX::OptPayoutAmount OptPayoutAmount_6;
  OptPayoutAmount_6.setString("19443587");
  msg.set(OptPayoutAmount_6);
  Instrument_6.insert(OptPayoutAmount_6.getString());
  FIX::OptPayoutType OptPayoutType_6(1);
  msg.set(OptPayoutType_6);
  Instrument_6.insert(OptPayoutType_6.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_6;
  OriginalNotionalPercentageOutstanding_6.setString("25.430000");
  msg.set(OriginalNotionalPercentageOutstanding_6);
  Instrument_6.insert(OriginalNotionalPercentageOutstanding_6.getString());
  FIX::Pool Pool_6("STRING_524069217");
  msg.set(Pool_6);
  Instrument_6.insert(Pool_6.getString());
  FIX::PositionLimit PositionLimit_6(1396071624);
  msg.set(PositionLimit_6);
  Instrument_6.insert(PositionLimit_6.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_6("STRING_INX");
  msg.set(PriceQuoteMethod_6);
  Instrument_6.insert(PriceQuoteMethod_6.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_6("STRING_1513783626");
  msg.set(PriceUnitOfMeasure_6);
  Instrument_6.insert(PriceUnitOfMeasure_6.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_6;
  PriceUnitOfMeasureQty_6.setString("4350325");
  msg.set(PriceUnitOfMeasureQty_6);
  Instrument_6.insert(PriceUnitOfMeasureQty_6.getString());
  FIX::Product Product_7(13);
  msg.set(Product_7);
  Instrument_6.insert(Product_7.getString());
  FIX::ProductComplex ProductComplex_6("STRING_587683148");
  msg.set(ProductComplex_6);
  Instrument_6.insert(ProductComplex_6.getString());
  FIX::PutOrCall PutOrCall_6(1);
  msg.set(PutOrCall_6);
  Instrument_6.insert(PutOrCall_6.getString());
  FIX::RedemptionDate RedemptionDate_6("LOCALMKTDATE_2124874102");
  msg.set(RedemptionDate_6);
  Instrument_6.insert(RedemptionDate_6.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_6("STRING_1787356149");
  msg.set(RepoCollateralSecurityType_6);
  Instrument_6.insert(RepoCollateralSecurityType_6.getString());
  FIX::RepurchaseRate RepurchaseRate_6;
  RepurchaseRate_6.setString("86.810000");
  msg.set(RepurchaseRate_6);
  Instrument_6.insert(RepurchaseRate_6.getString());
  FIX::RepurchaseTerm RepurchaseTerm_6(1058935086);
  msg.set(RepurchaseTerm_6);
  Instrument_6.insert(RepurchaseTerm_6.getString());
  FIX::RestructuringType RestructuringType_6("STRING_MM");
  msg.set(RestructuringType_6);
  Instrument_6.insert(RestructuringType_6.getString());
  FIX::SecurityDesc SecurityDesc_6("STRING_70369998");
  msg.set(SecurityDesc_6);
  Instrument_6.insert(SecurityDesc_6.getString());
  FIX::SecurityExchange SecurityExchange_6("EXCHANGE_174042007");
  msg.set(SecurityExchange_6);
  Instrument_6.insert(SecurityExchange_6.getString());
  FIX::SecurityGroup SecurityGroup_6("STRING_635503680");
  msg.set(SecurityGroup_6);
  Instrument_6.insert(SecurityGroup_6.getString());
  FIX::SecurityID SecurityID_6("STRING_691595688");
  msg.set(SecurityID_6);
  Instrument_6.insert(SecurityID_6.getString());
  FIX::SecurityIDSource SecurityIDSource_6("STRING_7");
  msg.set(SecurityIDSource_6);
  Instrument_6.insert(SecurityIDSource_6.getString());
  FIX::SecurityStatus SecurityStatus_6("STRING_1");
  msg.set(SecurityStatus_6);
  Instrument_6.insert(SecurityStatus_6.getString());
  FIX::SecuritySubType SecuritySubType_6("STRING_250883412");
  msg.set(SecuritySubType_6);
  Instrument_6.insert(SecuritySubType_6.getString());
  FIX::SecurityType SecurityType_7("STRING_SECLOAN");
  msg.set(SecurityType_7);
  Instrument_6.insert(SecurityType_7.getString());
  FIX::Seniority Seniority_6("STRING_SR");
  msg.set(Seniority_6);
  Instrument_6.insert(Seniority_6.getString());
  FIX::SettlMethod SettlMethod_6('C');
  msg.set(SettlMethod_6);
  Instrument_6.insert(SettlMethod_6.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_6("STRING_1830683171");
  msg.set(SettleOnOpenFlag_6);
  Instrument_6.insert(SettleOnOpenFlag_6.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_6("STRING_2125870788");
  msg.set(StateOrProvinceOfIssue_6);
  Instrument_6.insert(StateOrProvinceOfIssue_6.getString());
  FIX::StrikeCurrency StrikeCurrency_6("CHF");
  msg.set(StrikeCurrency_6);
  Instrument_6.insert(StrikeCurrency_6.getString());
  FIX::StrikeMultiplier StrikeMultiplier_6;
  StrikeMultiplier_6.setString("15816420");
  msg.set(StrikeMultiplier_6);
  Instrument_6.insert(StrikeMultiplier_6.getString());
  FIX::StrikePrice StrikePrice_6;
  StrikePrice_6.setString("20290570");
  msg.set(StrikePrice_6);
  Instrument_6.insert(StrikePrice_6.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_6(4);
  msg.set(StrikePriceBoundaryMethod_6);
  Instrument_6.insert(StrikePriceBoundaryMethod_6.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_6;
  StrikePriceBoundaryPrecision_6.setString("9.930000");
  msg.set(StrikePriceBoundaryPrecision_6);
  Instrument_6.insert(StrikePriceBoundaryPrecision_6.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_6(1);
  msg.set(StrikePriceDeterminationMethod_6);
  Instrument_6.insert(StrikePriceDeterminationMethod_6.getString());
  FIX::StrikeValue StrikeValue_6;
  StrikeValue_6.setString("8026985");
  msg.set(StrikeValue_6);
  Instrument_6.insert(StrikeValue_6.getString());
  FIX::Symbol Symbol_6("STRING_1563766334");
  msg.set(Symbol_6);
  Instrument_6.insert(Symbol_6.getString());
  FIX::SymbolSfx SymbolSfx_6("STRING_WI");
  msg.set(SymbolSfx_6);
  Instrument_6.insert(SymbolSfx_6.getString());
  FIX::TimeUnit TimeUnit_6("STRING_Yr");
  msg.set(TimeUnit_6);
  Instrument_6.insert(TimeUnit_6.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_6(2);
  msg.set(UnderlyingPriceDeterminationMethod_6);
  Instrument_6.insert(UnderlyingPriceDeterminationMethod_6.getString());
  FIX::UnitOfMeasure UnitOfMeasure_6("STRING_tn");
  msg.set(UnitOfMeasure_6);
  Instrument_6.insert(UnitOfMeasure_6.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_6;
  UnitOfMeasureQty_6.setString("17723929");
  msg.set(UnitOfMeasureQty_6);
  Instrument_6.insert(UnitOfMeasureQty_6.getString());
  FIX::ValuationMethod ValuationMethod_6("STRING_FUT");
  msg.set(ValuationMethod_6);
  Instrument_6.insert(ValuationMethod_6.getString());
  all_values.push_back(Instrument_6);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_10;
    FIX::ComplexEventCondition ComplexEventCondition_10(1);
    noComplexEvents_0_0.set(ComplexEventCondition_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventCondition_10.getString());
    FIX::ComplexEventPrice ComplexEventPrice_10;
    ComplexEventPrice_10.setString("3964029");
    noComplexEvents_0_0.set(ComplexEventPrice_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPrice_10.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_10(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPriceBoundaryMethod_10.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_10;
    ComplexEventPriceBoundaryPrecision_10.setString("16.390000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPriceBoundaryPrecision_10.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_10(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPriceTimeType_10.getString());
    FIX::ComplexEventType ComplexEventType_10(1);
    noComplexEvents_0_0.set(ComplexEventType_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventType_10.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_10;
    ComplexOptPayoutAmount_10.setString("5778536");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexOptPayoutAmount_10.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_10);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_16;
      FIX::ComplexEventEndDate ComplexEventEndDate_16(FIX::UTCTIMESTAMP(3, 49, 5, 19, 1, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_16);
      ComplexEventDates_NoComplexEventDates_16.insert(ComplexEventEndDate_16.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_16(FIX::UTCTIMESTAMP(13, 15, 33, 13, 9, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_16);
      ComplexEventDates_NoComplexEventDates_16.insert(ComplexEventStartDate_16.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_16);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_30;
        FIX::ComplexEventEndTime ComplexEventEndTime_30(FIX::UTCTIMEONLY(4, 18, 44));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_30);
        ComplexEventTimes_NoComplexEventTimes_30.insert(ComplexEventEndTime_30.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_30(FIX::UTCTIMEONLY(1, 35, 3));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_30);
        ComplexEventTimes_NoComplexEventTimes_30.insert(ComplexEventStartTime_30.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_30);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_11;
    FIX::ComplexEventCondition ComplexEventCondition_11(1);
    noComplexEvents_0_1.set(ComplexEventCondition_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventCondition_11.getString());
    FIX::ComplexEventPrice ComplexEventPrice_11;
    ComplexEventPrice_11.setString("21151329");
    noComplexEvents_0_1.set(ComplexEventPrice_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPrice_11.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_11(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPriceBoundaryMethod_11.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_11;
    ComplexEventPriceBoundaryPrecision_11.setString("93.930000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPriceBoundaryPrecision_11.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_11(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPriceTimeType_11.getString());
    FIX::ComplexEventType ComplexEventType_11(2);
    noComplexEvents_0_1.set(ComplexEventType_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventType_11.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_11;
    ComplexOptPayoutAmount_11.setString("11093830");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexOptPayoutAmount_11.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_11);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_17;
      FIX::ComplexEventEndDate ComplexEventEndDate_17(FIX::UTCTIMESTAMP(19, 42, 38, 10, 11, 2006));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_17);
      ComplexEventDates_NoComplexEventDates_17.insert(ComplexEventEndDate_17.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_17(FIX::UTCTIMESTAMP(3, 40, 41, 8, 5, 2006));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_17);
      ComplexEventDates_NoComplexEventDates_17.insert(ComplexEventStartDate_17.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_17);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_31;
        FIX::ComplexEventEndTime ComplexEventEndTime_31(FIX::UTCTIMEONLY(15, 8, 39));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_31);
        ComplexEventTimes_NoComplexEventTimes_31.insert(ComplexEventEndTime_31.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_31(FIX::UTCTIMEONLY(22, 7, 38));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_31);
        ComplexEventTimes_NoComplexEventTimes_31.insert(ComplexEventStartTime_31.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_31);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_32;
        FIX::ComplexEventEndTime ComplexEventEndTime_32(FIX::UTCTIMEONLY(12, 47, 25));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_32);
        ComplexEventTimes_NoComplexEventTimes_32.insert(ComplexEventEndTime_32.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_32(FIX::UTCTIMEONLY(7, 17, 23));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_32);
        ComplexEventTimes_NoComplexEventTimes_32.insert(ComplexEventStartTime_32.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_32);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_18;
      FIX::ComplexEventEndDate ComplexEventEndDate_18(FIX::UTCTIMESTAMP(4, 5, 7, 26, 8, 2007));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_18);
      ComplexEventDates_NoComplexEventDates_18.insert(ComplexEventEndDate_18.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_18(FIX::UTCTIMESTAMP(10, 3, 31, 26, 9, 2000));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_18);
      ComplexEventDates_NoComplexEventDates_18.insert(ComplexEventStartDate_18.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_18);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_33;
        FIX::ComplexEventEndTime ComplexEventEndTime_33(FIX::UTCTIMEONLY(21, 49, 3));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_33);
        ComplexEventTimes_NoComplexEventTimes_33.insert(ComplexEventEndTime_33.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_33(FIX::UTCTIMEONLY(3, 10, 45));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_33);
        ComplexEventTimes_NoComplexEventTimes_33.insert(ComplexEventStartTime_33.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_33);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_34;
        FIX::ComplexEventEndTime ComplexEventEndTime_34(FIX::UTCTIMEONLY(14, 25, 16));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_34);
        ComplexEventTimes_NoComplexEventTimes_34.insert(ComplexEventEndTime_34.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_34(FIX::UTCTIMEONLY(20, 25, 19));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_34);
        ComplexEventTimes_NoComplexEventTimes_34.insert(ComplexEventStartTime_34.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_34);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_35;
        FIX::ComplexEventEndTime ComplexEventEndTime_35(FIX::UTCTIMEONLY(9, 24, 48));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_35);
        ComplexEventTimes_NoComplexEventTimes_35.insert(ComplexEventEndTime_35.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_35(FIX::UTCTIMEONLY(19, 11, 26));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_35);
        ComplexEventTimes_NoComplexEventTimes_35.insert(ComplexEventStartTime_35.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_35);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_19;
      FIX::ComplexEventEndDate ComplexEventEndDate_19(FIX::UTCTIMESTAMP(7, 50, 59, 7, 9, 2010));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_19);
      ComplexEventDates_NoComplexEventDates_19.insert(ComplexEventEndDate_19.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_19(FIX::UTCTIMESTAMP(9, 30, 17, 20, 2, 2001));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_19);
      ComplexEventDates_NoComplexEventDates_19.insert(ComplexEventStartDate_19.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_19);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_36;
        FIX::ComplexEventEndTime ComplexEventEndTime_36(FIX::UTCTIMEONLY(9, 7, 1));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_36);
        ComplexEventTimes_NoComplexEventTimes_36.insert(ComplexEventEndTime_36.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_36(FIX::UTCTIMEONLY(7, 19, 52));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_36);
        ComplexEventTimes_NoComplexEventTimes_36.insert(ComplexEventStartTime_36.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_36);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_12;
    FIX::ComplexEventCondition ComplexEventCondition_12(1);
    noComplexEvents_0_2.set(ComplexEventCondition_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventCondition_12.getString());
    FIX::ComplexEventPrice ComplexEventPrice_12;
    ComplexEventPrice_12.setString("16857669");
    noComplexEvents_0_2.set(ComplexEventPrice_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPrice_12.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_12(2);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPriceBoundaryMethod_12.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_12;
    ComplexEventPriceBoundaryPrecision_12.setString("52.880000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPriceBoundaryPrecision_12.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_12(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPriceTimeType_12.getString());
    FIX::ComplexEventType ComplexEventType_12(1);
    noComplexEvents_0_2.set(ComplexEventType_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventType_12.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_12;
    ComplexOptPayoutAmount_12.setString("12839428");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexOptPayoutAmount_12.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_12);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_20;
      FIX::ComplexEventEndDate ComplexEventEndDate_20(FIX::UTCTIMESTAMP(11, 21, 4, 14, 10, 2000));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_20);
      ComplexEventDates_NoComplexEventDates_20.insert(ComplexEventEndDate_20.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_20(FIX::UTCTIMESTAMP(6, 58, 6, 14, 1, 2011));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_20);
      ComplexEventDates_NoComplexEventDates_20.insert(ComplexEventStartDate_20.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_20);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_37;
        FIX::ComplexEventEndTime ComplexEventEndTime_37(FIX::UTCTIMEONLY(15, 27, 46));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_37);
        ComplexEventTimes_NoComplexEventTimes_37.insert(ComplexEventEndTime_37.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_37(FIX::UTCTIMEONLY(11, 57, 29));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_37);
        ComplexEventTimes_NoComplexEventTimes_37.insert(ComplexEventStartTime_37.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_37);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_38;
        FIX::ComplexEventEndTime ComplexEventEndTime_38(FIX::UTCTIMEONLY(14, 37, 20));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_38);
        ComplexEventTimes_NoComplexEventTimes_38.insert(ComplexEventEndTime_38.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_38(FIX::UTCTIMEONLY(9, 12, 53));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_38);
        ComplexEventTimes_NoComplexEventTimes_38.insert(ComplexEventStartTime_38.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_38);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_39;
        FIX::ComplexEventEndTime ComplexEventEndTime_39(FIX::UTCTIMEONLY(15, 6, 33));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_39);
        ComplexEventTimes_NoComplexEventTimes_39.insert(ComplexEventEndTime_39.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_39(FIX::UTCTIMEONLY(7, 10, 25));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_39);
        ComplexEventTimes_NoComplexEventTimes_39.insert(ComplexEventStartTime_39.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_39);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_21;
      FIX::ComplexEventEndDate ComplexEventEndDate_21(FIX::UTCTIMESTAMP(8, 23, 56, 0, 6, 2004));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_21);
      ComplexEventDates_NoComplexEventDates_21.insert(ComplexEventEndDate_21.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_21(FIX::UTCTIMESTAMP(12, 36, 32, 4, 4, 2005));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_21);
      ComplexEventDates_NoComplexEventDates_21.insert(ComplexEventStartDate_21.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_21);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_40;
        FIX::ComplexEventEndTime ComplexEventEndTime_40(FIX::UTCTIMEONLY(23, 55, 14));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_40);
        ComplexEventTimes_NoComplexEventTimes_40.insert(ComplexEventEndTime_40.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_40(FIX::UTCTIMEONLY(16, 18, 55));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_40);
        ComplexEventTimes_NoComplexEventTimes_40.insert(ComplexEventStartTime_40.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_40);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_41;
        FIX::ComplexEventEndTime ComplexEventEndTime_41(FIX::UTCTIMEONLY(1, 54, 23));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_41);
        ComplexEventTimes_NoComplexEventTimes_41.insert(ComplexEventEndTime_41.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_41(FIX::UTCTIMEONLY(1, 33, 8));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_41);
        ComplexEventTimes_NoComplexEventTimes_41.insert(ComplexEventStartTime_41.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_41);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AllocationReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_13;
    FIX::EventDate EventDate_13("LOCALMKTDATE_133430493");
    noEvents_0_0.set(EventDate_13);
    EvntGrp_NoEvents_13.insert(EventDate_13.getString());
    FIX::EventPx EventPx_13;
    EventPx_13.setString("12413596");
    noEvents_0_0.set(EventPx_13);
    EvntGrp_NoEvents_13.insert(EventPx_13.getString());
    FIX::EventText EventText_13("STRING_210091903");
    noEvents_0_0.set(EventText_13);
    EvntGrp_NoEvents_13.insert(EventText_13.getString());
    FIX::EventTime EventTime_13(FIX::UTCTIMESTAMP(16, 59, 27, 12, 4, 2009));
    noEvents_0_0.set(EventTime_13);
    EvntGrp_NoEvents_13.insert(EventTime_13.getString());
    FIX::EventType EventType_13(18);
    noEvents_0_0.set(EventType_13);
    EvntGrp_NoEvents_13.insert(EventType_13.getString());
    all_values.push_back(EvntGrp_NoEvents_13);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_14;
    FIX::EventDate EventDate_14("LOCALMKTDATE_1141343322");
    noEvents_0_1.set(EventDate_14);
    EvntGrp_NoEvents_14.insert(EventDate_14.getString());
    FIX::EventPx EventPx_14;
    EventPx_14.setString("9657257");
    noEvents_0_1.set(EventPx_14);
    EvntGrp_NoEvents_14.insert(EventPx_14.getString());
    FIX::EventText EventText_14("STRING_749631482");
    noEvents_0_1.set(EventText_14);
    EvntGrp_NoEvents_14.insert(EventText_14.getString());
    FIX::EventTime EventTime_14(FIX::UTCTIMESTAMP(0, 57, 43, 2, 6, 2012));
    noEvents_0_1.set(EventTime_14);
    EvntGrp_NoEvents_14.insert(EventTime_14.getString());
    FIX::EventType EventType_14(11);
    noEvents_0_1.set(EventType_14);
    EvntGrp_NoEvents_14.insert(EventType_14.getString());
    all_values.push_back(EvntGrp_NoEvents_14);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_13;
    FIX::InstrumentPartyID InstrumentPartyID_13("STRING_1648522987");
    noInstrumentParties_0_0.set(InstrumentPartyID_13);
    InstrumentParties_NoInstrumentParties_13.insert(InstrumentPartyID_13.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_13('9');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_13);
    InstrumentParties_NoInstrumentParties_13.insert(InstrumentPartyIDSource_13.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_13(1696214258);
    noInstrumentParties_0_0.set(InstrumentPartyRole_13);
    InstrumentParties_NoInstrumentParties_13.insert(InstrumentPartyRole_13.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_13);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24;
      FIX::InstrumentPartySubID InstrumentPartySubID_24("STRING_103834273");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_24);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24.insert(InstrumentPartySubID_24.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_24(701348943);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_24);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24.insert(InstrumentPartySubIDType_24.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25;
      FIX::InstrumentPartySubID InstrumentPartySubID_25("STRING_1179459958");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_25);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25.insert(InstrumentPartySubID_25.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_25(1608062888);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_25);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25.insert(InstrumentPartySubIDType_25.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26;
      FIX::InstrumentPartySubID InstrumentPartySubID_26("STRING_834779436");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_26);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26.insert(InstrumentPartySubID_26.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_26(273335961);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_26);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26.insert(InstrumentPartySubIDType_26.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_14;
    FIX::SecurityAltID SecurityAltID_14("STRING_728292250");
    noSecurityAltID_0_0.set(SecurityAltID_14);
    SecAltIDGrp_NoSecurityAltID_14.insert(SecurityAltID_14.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_14("STRING_745396466");
    noSecurityAltID_0_0.set(SecurityAltIDSource_14);
    SecAltIDGrp_NoSecurityAltID_14.insert(SecurityAltIDSource_14.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_14);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_12;
  FIX::SecurityXML SecurityXML_13("XMLDATA_1402855903");
  msg.set(SecurityXML_13);
  FIX::SecurityXMLLen SecurityXMLLen_6(662759130);
  msg.set(SecurityXMLLen_6);
  FIX::SecurityXMLSchema SecurityXMLSchema_6("STRING_337661638");
  msg.set(SecurityXMLSchema_6);
  SecurityXML_12.insert(SecurityXMLSchema_6.getString());
  all_values.push_back(SecurityXML_12);

  // InstrumentExtension
  multiset<string> InstrumentExtension_2;
  FIX::DeliveryForm DeliveryForm_2(1);
  msg.set(DeliveryForm_2);
  InstrumentExtension_2.insert(DeliveryForm_2.getString());
  FIX::PctAtRisk PctAtRisk_2;
  PctAtRisk_2.setString("70.730000");
  msg.set(PctAtRisk_2);
  InstrumentExtension_2.insert(PctAtRisk_2.getString());
  all_values.push_back(InstrumentExtension_2);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationReport::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_4;
    FIX::InstrAttribType InstrAttribType_4(16);
    noInstrAttrib_0_0.set(InstrAttribType_4);
    AttrbGrp_NoInstrAttrib_4.insert(InstrAttribType_4.getString());
    FIX::InstrAttribValue InstrAttribValue_4("STRING_996172826");
    noInstrAttrib_0_0.set(InstrAttribValue_4);
    AttrbGrp_NoInstrAttrib_4.insert(InstrAttribValue_4.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_4);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_5;
    FIX::InstrAttribType InstrAttribType_5(9);
    noInstrAttrib_0_1.set(InstrAttribType_5);
    AttrbGrp_NoInstrAttrib_5.insert(InstrAttribType_5.getString());
    FIX::InstrAttribValue InstrAttribValue_5("STRING_1079547374");
    noInstrAttrib_0_1.set(InstrAttribValue_5);
    AttrbGrp_NoInstrAttrib_5.insert(InstrAttribValue_5.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_5);

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_6;
    FIX::InstrAttribType InstrAttribType_6(20);
    noInstrAttrib_0_2.set(InstrAttribType_6);
    AttrbGrp_NoInstrAttrib_6.insert(InstrAttribType_6.getString());
    FIX::InstrAttribValue InstrAttribValue_6("STRING_63055467");
    noInstrAttrib_0_2.set(InstrAttribValue_6);
    AttrbGrp_NoInstrAttrib_6.insert(InstrAttribValue_6.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_6);

    msg.addGroup(noInstrAttrib_0_2);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::AllocationReport::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_5;
    FIX::ClOrdID ClOrdID_5("STRING_258534913");
    noOrders_0_0.set(ClOrdID_5);
    OrdAllocGrp_NoOrders_5.insert(ClOrdID_5.getString());
    FIX::ListID ListID_5("STRING_306047805");
    noOrders_0_0.set(ListID_5);
    OrdAllocGrp_NoOrders_5.insert(ListID_5.getString());
    FIX::OrderAvgPx OrderAvgPx_5;
    OrderAvgPx_5.setString("20178002");
    noOrders_0_0.set(OrderAvgPx_5);
    OrdAllocGrp_NoOrders_5.insert(OrderAvgPx_5.getString());
    FIX::OrderBookingQty OrderBookingQty_5;
    OrderBookingQty_5.setString("6811625");
    noOrders_0_0.set(OrderBookingQty_5);
    OrdAllocGrp_NoOrders_5.insert(OrderBookingQty_5.getString());
    FIX::OrderID OrderID_5("STRING_1884971400");
    noOrders_0_0.set(OrderID_5);
    OrdAllocGrp_NoOrders_5.insert(OrderID_5.getString());
    FIX::OrderQty OrderQty_5;
    OrderQty_5.setString("15188395");
    noOrders_0_0.set(OrderQty_5);
    OrdAllocGrp_NoOrders_5.insert(OrderQty_5.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_5("STRING_1680612287");
    noOrders_0_0.set(SecondaryClOrdID_5);
    OrdAllocGrp_NoOrders_5.insert(SecondaryClOrdID_5.getString());
    FIX::SecondaryOrderID SecondaryOrderID_5("STRING_1433702010");
    noOrders_0_0.set(SecondaryOrderID_5);
    OrdAllocGrp_NoOrders_5.insert(SecondaryOrderID_5.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_5);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_9;
      FIX::Nested2PartyID Nested2PartyID_9("STRING_1784446561");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_9);
      NestedParties2_NoNested2PartyIDs_9.insert(Nested2PartyID_9.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_9('2');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_9);
      NestedParties2_NoNested2PartyIDs_9.insert(Nested2PartyIDSource_9.getString());
      FIX::Nested2PartyRole Nested2PartyRole_9(1354973723);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_9);
      NestedParties2_NoNested2PartyIDs_9.insert(Nested2PartyRole_9.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_9);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_20;
        FIX::Nested2PartySubID Nested2PartySubID_20("STRING_822346741");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_20);
        NstdPtys2SubGrp_NoNested2PartySubIDs_20.insert(Nested2PartySubID_20.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_20(1628309684);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_20);
        NstdPtys2SubGrp_NoNested2PartySubIDs_20.insert(Nested2PartySubIDType_20.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_20);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_21;
        FIX::Nested2PartySubID Nested2PartySubID_21("STRING_915696945");
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubID_21);
        NstdPtys2SubGrp_NoNested2PartySubIDs_21.insert(Nested2PartySubID_21.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_21(1550638992);
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubIDType_21);
        NstdPtys2SubGrp_NoNested2PartySubIDs_21.insert(Nested2PartySubIDType_21.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_21);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_10;
      FIX::Nested2PartyID Nested2PartyID_10("STRING_226222502");
      noNested2PartyIDs_0_1_1.set(Nested2PartyID_10);
      NestedParties2_NoNested2PartyIDs_10.insert(Nested2PartyID_10.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_10('1');
      noNested2PartyIDs_0_1_1.set(Nested2PartyIDSource_10);
      NestedParties2_NoNested2PartyIDs_10.insert(Nested2PartyIDSource_10.getString());
      FIX::Nested2PartyRole Nested2PartyRole_10(65914474);
      noNested2PartyIDs_0_1_1.set(Nested2PartyRole_10);
      NestedParties2_NoNested2PartyIDs_10.insert(Nested2PartyRole_10.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_10);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_22;
        FIX::Nested2PartySubID Nested2PartySubID_22("STRING_2034377250");
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubID_22);
        NstdPtys2SubGrp_NoNested2PartySubIDs_22.insert(Nested2PartySubID_22.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_22(96361547);
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubIDType_22);
        NstdPtys2SubGrp_NoNested2PartySubIDs_22.insert(Nested2PartySubIDType_22.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_22);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_23;
        FIX::Nested2PartySubID Nested2PartySubID_23("STRING_1243530276");
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubID_23);
        NstdPtys2SubGrp_NoNested2PartySubIDs_23.insert(Nested2PartySubID_23.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_23(744061327);
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubIDType_23);
        NstdPtys2SubGrp_NoNested2PartySubIDs_23.insert(Nested2PartySubIDType_23.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_23);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_6;
    FIX::ClOrdID ClOrdID_6("STRING_1092534374");
    noOrders_0_1.set(ClOrdID_6);
    OrdAllocGrp_NoOrders_6.insert(ClOrdID_6.getString());
    FIX::ListID ListID_6("STRING_525324246");
    noOrders_0_1.set(ListID_6);
    OrdAllocGrp_NoOrders_6.insert(ListID_6.getString());
    FIX::OrderAvgPx OrderAvgPx_6;
    OrderAvgPx_6.setString("18236087");
    noOrders_0_1.set(OrderAvgPx_6);
    OrdAllocGrp_NoOrders_6.insert(OrderAvgPx_6.getString());
    FIX::OrderBookingQty OrderBookingQty_6;
    OrderBookingQty_6.setString("20606035");
    noOrders_0_1.set(OrderBookingQty_6);
    OrdAllocGrp_NoOrders_6.insert(OrderBookingQty_6.getString());
    FIX::OrderID OrderID_6("STRING_588379714");
    noOrders_0_1.set(OrderID_6);
    OrdAllocGrp_NoOrders_6.insert(OrderID_6.getString());
    FIX::OrderQty OrderQty_6;
    OrderQty_6.setString("5506988");
    noOrders_0_1.set(OrderQty_6);
    OrdAllocGrp_NoOrders_6.insert(OrderQty_6.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_6("STRING_171654818");
    noOrders_0_1.set(SecondaryClOrdID_6);
    OrdAllocGrp_NoOrders_6.insert(SecondaryClOrdID_6.getString());
    FIX::SecondaryOrderID SecondaryOrderID_6("STRING_894427519");
    noOrders_0_1.set(SecondaryOrderID_6);
    OrdAllocGrp_NoOrders_6.insert(SecondaryOrderID_6.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_6);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_11;
      FIX::Nested2PartyID Nested2PartyID_11("STRING_852817362");
      noNested2PartyIDs_1_1_0.set(Nested2PartyID_11);
      NestedParties2_NoNested2PartyIDs_11.insert(Nested2PartyID_11.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_11('6');
      noNested2PartyIDs_1_1_0.set(Nested2PartyIDSource_11);
      NestedParties2_NoNested2PartyIDs_11.insert(Nested2PartyIDSource_11.getString());
      FIX::Nested2PartyRole Nested2PartyRole_11(1939854981);
      noNested2PartyIDs_1_1_0.set(Nested2PartyRole_11);
      NestedParties2_NoNested2PartyIDs_11.insert(Nested2PartyRole_11.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_11);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_24;
        FIX::Nested2PartySubID Nested2PartySubID_24("STRING_2065617281");
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubID_24);
        NstdPtys2SubGrp_NoNested2PartySubIDs_24.insert(Nested2PartySubID_24.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_24(2115368746);
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubIDType_24);
        NstdPtys2SubGrp_NoNested2PartySubIDs_24.insert(Nested2PartySubIDType_24.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_24);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_12;
      FIX::Nested2PartyID Nested2PartyID_12("STRING_22908914");
      noNested2PartyIDs_1_1_1.set(Nested2PartyID_12);
      NestedParties2_NoNested2PartyIDs_12.insert(Nested2PartyID_12.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_12('2');
      noNested2PartyIDs_1_1_1.set(Nested2PartyIDSource_12);
      NestedParties2_NoNested2PartyIDs_12.insert(Nested2PartyIDSource_12.getString());
      FIX::Nested2PartyRole Nested2PartyRole_12(1322858821);
      noNested2PartyIDs_1_1_1.set(Nested2PartyRole_12);
      NestedParties2_NoNested2PartyIDs_12.insert(Nested2PartyRole_12.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_12);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_25;
        FIX::Nested2PartySubID Nested2PartySubID_25("STRING_728047679");
        noNested2PartySubIDs_1_1_2_0.set(Nested2PartySubID_25);
        NstdPtys2SubGrp_NoNested2PartySubIDs_25.insert(Nested2PartySubID_25.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_25(803684858);
        noNested2PartySubIDs_1_1_2_0.set(Nested2PartySubIDType_25);
        NstdPtys2SubGrp_NoNested2PartySubIDs_25.insert(Nested2PartySubIDType_25.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_25);

        noNested2PartyIDs_1_1_1.addGroup(noNested2PartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_26;
        FIX::Nested2PartySubID Nested2PartySubID_26("STRING_36148013");
        noNested2PartySubIDs_1_1_2_1.set(Nested2PartySubID_26);
        NstdPtys2SubGrp_NoNested2PartySubIDs_26.insert(Nested2PartySubID_26.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_26(131203023);
        noNested2PartySubIDs_1_1_2_1.set(Nested2PartySubIDType_26);
        NstdPtys2SubGrp_NoNested2PartySubIDs_26.insert(Nested2PartySubIDType_26.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_26);

        noNested2PartyIDs_1_1_1.addGroup(noNested2PartySubIDs_1_1_2_1);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_13;
      FIX::Nested2PartyID Nested2PartyID_13("STRING_1029907360");
      noNested2PartyIDs_1_1_2.set(Nested2PartyID_13);
      NestedParties2_NoNested2PartyIDs_13.insert(Nested2PartyID_13.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_13('2');
      noNested2PartyIDs_1_1_2.set(Nested2PartyIDSource_13);
      NestedParties2_NoNested2PartyIDs_13.insert(Nested2PartyIDSource_13.getString());
      FIX::Nested2PartyRole Nested2PartyRole_13(197117497);
      noNested2PartyIDs_1_1_2.set(Nested2PartyRole_13);
      NestedParties2_NoNested2PartyIDs_13.insert(Nested2PartyRole_13.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_13);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_27;
        FIX::Nested2PartySubID Nested2PartySubID_27("STRING_94110815");
        noNested2PartySubIDs_1_2_2_0.set(Nested2PartySubID_27);
        NstdPtys2SubGrp_NoNested2PartySubIDs_27.insert(Nested2PartySubID_27.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_27(293479045);
        noNested2PartySubIDs_1_2_2_0.set(Nested2PartySubIDType_27);
        NstdPtys2SubGrp_NoNested2PartySubIDs_27.insert(Nested2PartySubIDType_27.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_27);

        noNested2PartyIDs_1_1_2.addGroup(noNested2PartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_28;
        FIX::Nested2PartySubID Nested2PartySubID_28("STRING_689838130");
        noNested2PartySubIDs_1_2_2_1.set(Nested2PartySubID_28);
        NstdPtys2SubGrp_NoNested2PartySubIDs_28.insert(Nested2PartySubID_28.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_28(838172143);
        noNested2PartySubIDs_1_2_2_1.set(Nested2PartySubIDType_28);
        NstdPtys2SubGrp_NoNested2PartySubIDs_28.insert(Nested2PartySubIDType_28.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_28);

        noNested2PartyIDs_1_1_2.addGroup(noNested2PartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_29;
        FIX::Nested2PartySubID Nested2PartySubID_29("STRING_1386013419");
        noNested2PartySubIDs_1_2_2_2.set(Nested2PartySubID_29);
        NstdPtys2SubGrp_NoNested2PartySubIDs_29.insert(Nested2PartySubID_29.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_29(1215162376);
        noNested2PartySubIDs_1_2_2_2.set(Nested2PartySubIDType_29);
        NstdPtys2SubGrp_NoNested2PartySubIDs_29.insert(Nested2PartySubIDType_29.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_29);

        noNested2PartyIDs_1_1_2.addGroup(noNested2PartySubIDs_1_2_2_2);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_2);
    }
    msg.addGroup(noOrders_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_7;
    FIX::PartyID PartyID_7("STRING_1299133324");
    noPartyIDs_0_0.set(PartyID_7);
    Parties_NoPartyIDs_7.insert(PartyID_7.getString());
    FIX::PartyIDSource PartyIDSource_7('E');
    noPartyIDs_0_0.set(PartyIDSource_7);
    Parties_NoPartyIDs_7.insert(PartyIDSource_7.getString());
    FIX::PartyRole PartyRole_7(25);
    noPartyIDs_0_0.set(PartyRole_7);
    Parties_NoPartyIDs_7.insert(PartyRole_7.getString());
    all_values.push_back(Parties_NoPartyIDs_7);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_16;
      FIX::PartySubID PartySubID_16("STRING_550485961");
      noPartySubIDs_0_1_0.set(PartySubID_16);
      PtysSubGrp_NoPartySubIDs_16.insert(PartySubID_16.getString());
      FIX::PartySubIDType PartySubIDType_16(9);
      noPartySubIDs_0_1_0.set(PartySubIDType_16);
      PtysSubGrp_NoPartySubIDs_16.insert(PartySubIDType_16.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_16);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_8;
    FIX::PartyID PartyID_8("STRING_176121856");
    noPartyIDs_0_1.set(PartyID_8);
    Parties_NoPartyIDs_8.insert(PartyID_8.getString());
    FIX::PartyIDSource PartyIDSource_8('2');
    noPartyIDs_0_1.set(PartyIDSource_8);
    Parties_NoPartyIDs_8.insert(PartyIDSource_8.getString());
    FIX::PartyRole PartyRole_8(65);
    noPartyIDs_0_1.set(PartyRole_8);
    Parties_NoPartyIDs_8.insert(PartyRole_8.getString());
    all_values.push_back(Parties_NoPartyIDs_8);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_17;
      FIX::PartySubID PartySubID_17("STRING_1100534865");
      noPartySubIDs_1_1_0.set(PartySubID_17);
      PtysSubGrp_NoPartySubIDs_17.insert(PartySubID_17.getString());
      FIX::PartySubIDType PartySubIDType_17(22);
      noPartySubIDs_1_1_0.set(PartySubIDType_17);
      PtysSubGrp_NoPartySubIDs_17.insert(PartySubIDType_17.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_17);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_18;
      FIX::PartySubID PartySubID_18("STRING_584976772");
      noPartySubIDs_1_1_1.set(PartySubID_18);
      PtysSubGrp_NoPartySubIDs_18.insert(PartySubID_18.getString());
      FIX::PartySubIDType PartySubIDType_18(2);
      noPartySubIDs_1_1_1.set(PartySubIDType_18);
      PtysSubGrp_NoPartySubIDs_18.insert(PartySubIDType_18.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_18);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_19;
      FIX::PartySubID PartySubID_19("STRING_421643063");
      noPartySubIDs_1_1_2.set(PartySubID_19);
      PtysSubGrp_NoPartySubIDs_19.insert(PartySubID_19.getString());
      FIX::PartySubIDType PartySubIDType_19(33);
      noPartySubIDs_1_1_2.set(PartySubIDType_19);
      PtysSubGrp_NoPartySubIDs_19.insert(PartySubIDType_19.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_19);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_9;
    FIX::PartyID PartyID_9("STRING_1734283483");
    noPartyIDs_0_2.set(PartyID_9);
    Parties_NoPartyIDs_9.insert(PartyID_9.getString());
    FIX::PartyIDSource PartyIDSource_9('3');
    noPartyIDs_0_2.set(PartyIDSource_9);
    Parties_NoPartyIDs_9.insert(PartyIDSource_9.getString());
    FIX::PartyRole PartyRole_9(51);
    noPartyIDs_0_2.set(PartyRole_9);
    Parties_NoPartyIDs_9.insert(PartyRole_9.getString());
    all_values.push_back(Parties_NoPartyIDs_9);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_20;
      FIX::PartySubID PartySubID_20("STRING_107751634");
      noPartySubIDs_2_1_0.set(PartySubID_20);
      PtysSubGrp_NoPartySubIDs_20.insert(PartySubID_20.getString());
      FIX::PartySubIDType PartySubIDType_20(27);
      noPartySubIDs_2_1_0.set(PartySubIDType_20);
      PtysSubGrp_NoPartySubIDs_20.insert(PartySubIDType_20.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_20);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_21;
      FIX::PartySubID PartySubID_21("STRING_2062604004");
      noPartySubIDs_2_1_1.set(PartySubID_21);
      PtysSubGrp_NoPartySubIDs_21.insert(PartySubID_21.getString());
      FIX::PartySubIDType PartySubIDType_21(7);
      noPartySubIDs_2_1_1.set(PartySubIDType_21);
      PtysSubGrp_NoPartySubIDs_21.insert(PartySubIDType_21.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_21);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_4;
    FIX::PosAmt PosAmt_4;
    PosAmt_4.setString("2085994");
    noPosAmt_0_0.set(PosAmt_4);
    PositionAmountData_NoPosAmt_4.insert(PosAmt_4.getString());
    FIX::PosAmtType PosAmtType_4("STRING_CPN");
    noPosAmt_0_0.set(PosAmtType_4);
    PositionAmountData_NoPosAmt_4.insert(PosAmtType_4.getString());
    FIX::PositionCurrency PositionCurrency_4("STRING_881076025");
    noPosAmt_0_0.set(PositionCurrency_4);
    PositionAmountData_NoPosAmt_4.insert(PositionCurrency_4.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_4);

    msg.addGroup(noPosAmt_0_0);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::AllocationReport::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_1;
    FIX::RateSource RateSource_3(2);
    noRateSources_0_0.set(RateSource_3);
    RateSource_NoRateSources_1.insert(RateSource_3.getString());
    FIX::RateSourceType RateSourceType_1(1);
    noRateSources_0_0.set(RateSourceType_1);
    RateSource_NoRateSources_1.insert(RateSourceType_1.getString());
    FIX::ReferencePage ReferencePage_1("STRING_746262496");
    noRateSources_0_0.set(ReferencePage_1);
    RateSource_NoRateSources_1.insert(ReferencePage_1.getString());
    all_values.push_back(RateSource_NoRateSources_1);

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_2;
    FIX::RateSource RateSource_4(0);
    noRateSources_0_1.set(RateSource_4);
    RateSource_NoRateSources_2.insert(RateSource_4.getString());
    FIX::RateSourceType RateSourceType_2(1);
    noRateSources_0_1.set(RateSourceType_2);
    RateSource_NoRateSources_2.insert(RateSourceType_2.getString());
    FIX::ReferencePage ReferencePage_2("STRING_69566990");
    noRateSources_0_1.set(ReferencePage_2);
    RateSource_NoRateSources_2.insert(ReferencePage_2.getString());
    all_values.push_back(RateSource_NoRateSources_2);

    msg.addGroup(noRateSources_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoRateSources noRateSources_0_2;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_3;
    FIX::RateSource RateSource_5(2);
    noRateSources_0_2.set(RateSource_5);
    RateSource_NoRateSources_3.insert(RateSource_5.getString());
    FIX::RateSourceType RateSourceType_3(1);
    noRateSources_0_2.set(RateSourceType_3);
    RateSource_NoRateSources_3.insert(RateSourceType_3.getString());
    FIX::ReferencePage ReferencePage_3("STRING_245688847");
    noRateSources_0_2.set(ReferencePage_3);
    RateSource_NoRateSources_3.insert(ReferencePage_3.getString());
    all_values.push_back(RateSource_NoRateSources_3);

    msg.addGroup(noRateSources_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_2;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_2("JPY");
  msg.set(BenchmarkCurveCurrency_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkCurveCurrency_2.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_2("STRING_SONIA");
  msg.set(BenchmarkCurveName_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkCurveName_2.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_2("STRING_1801056848");
  msg.set(BenchmarkCurvePoint_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkCurvePoint_2.getString());
  FIX::BenchmarkPrice BenchmarkPrice_2;
  BenchmarkPrice_2.setString("285804");
  msg.set(BenchmarkPrice_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkPrice_2.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_2(1392733477);
  msg.set(BenchmarkPriceType_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkPriceType_2.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_2("STRING_659809003");
  msg.set(BenchmarkSecurityID_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkSecurityID_2.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_2("STRING_450223520");
  msg.set(BenchmarkSecurityIDSource_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkSecurityIDSource_2.getString());
  FIX::Spread Spread_2;
  Spread_2.setString("10981613");
  msg.set(Spread_2);
  SpreadOrBenchmarkCurveData_2.insert(Spread_2.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_2);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_4;
    FIX::StipulationType StipulationType_4("STRING_AUTOREINV");
    noStipulations_0_0.set(StipulationType_4);
    Stipulations_NoStipulations_4.insert(StipulationType_4.getString());
    FIX::StipulationValue StipulationValue_4("STRING_839737171");
    noStipulations_0_0.set(StipulationValue_4);
    Stipulations_NoStipulations_4.insert(StipulationValue_4.getString());
    all_values.push_back(Stipulations_NoStipulations_4);

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_7;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_7("DATA_1783303075");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingIssuer_7.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_7(788530238);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingIssuerLen_7.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_7("DATA_2027215701");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingSecurityDesc_7.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_7(1337362563);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingSecurityDescLen_7.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_7;
    UnderlyingAdjustedQuantity_7.setString("8314341");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_7);
    UnderlyingInstrument_7.insert(UnderlyingAdjustedQuantity_7.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_7;
    UnderlyingAllocationPercent_7.setString("14.540000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_7);
    UnderlyingInstrument_7.insert(UnderlyingAllocationPercent_7.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_7;
    UnderlyingAttachmentPoint_7.setString("1.800000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_7);
    UnderlyingInstrument_7.insert(UnderlyingAttachmentPoint_7.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_7("STRING_1712510145");
    noUnderlyings_0_0.set(UnderlyingCFICode_7);
    UnderlyingInstrument_7.insert(UnderlyingCFICode_7.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_7("STRING_1682944274");
    noUnderlyings_0_0.set(UnderlyingCPProgram_7);
    UnderlyingInstrument_7.insert(UnderlyingCPProgram_7.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_7("STRING_892836526");
    noUnderlyings_0_0.set(UnderlyingCPRegType_7);
    UnderlyingInstrument_7.insert(UnderlyingCPRegType_7.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_7;
    UnderlyingCapValue_7.setString("9603997");
    noUnderlyings_0_0.set(UnderlyingCapValue_7);
    UnderlyingInstrument_7.insert(UnderlyingCapValue_7.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_7;
    UnderlyingCashAmount_7.setString("2817231");
    noUnderlyings_0_0.set(UnderlyingCashAmount_7);
    UnderlyingInstrument_7.insert(UnderlyingCashAmount_7.getString());
    FIX::UnderlyingCashType UnderlyingCashType_7("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_7);
    UnderlyingInstrument_7.insert(UnderlyingCashType_7.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_7;
    UnderlyingContractMultiplier_7.setString("12732853");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_7);
    UnderlyingInstrument_7.insert(UnderlyingContractMultiplier_7.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_7(351290112);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_7);
    UnderlyingInstrument_7.insert(UnderlyingContractMultiplierUnit_7.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_7("COUNTRY_1526075713");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_7);
    UnderlyingInstrument_7.insert(UnderlyingCountryOfIssue_7.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_7("LOCALMKTDATE_924698754");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_7);
    UnderlyingInstrument_7.insert(UnderlyingCouponPaymentDate_7.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_7;
    UnderlyingCouponRate_7.setString("89.590000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_7);
    UnderlyingInstrument_7.insert(UnderlyingCouponRate_7.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_7("STRING_79114047");
    noUnderlyings_0_0.set(UnderlyingCreditRating_7);
    UnderlyingInstrument_7.insert(UnderlyingCreditRating_7.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_7("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_7);
    UnderlyingInstrument_7.insert(UnderlyingCurrency_7.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_7;
    UnderlyingCurrentValue_7.setString("18801708");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_7);
    UnderlyingInstrument_7.insert(UnderlyingCurrentValue_7.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_7;
    UnderlyingDetachmentPoint_7.setString("54.250000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_7);
    UnderlyingInstrument_7.insert(UnderlyingDetachmentPoint_7.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_7;
    UnderlyingDirtyPrice_7.setString("6499854");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_7);
    UnderlyingInstrument_7.insert(UnderlyingDirtyPrice_7.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_7;
    UnderlyingEndPrice_7.setString("3924962");
    noUnderlyings_0_0.set(UnderlyingEndPrice_7);
    UnderlyingInstrument_7.insert(UnderlyingEndPrice_7.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_7;
    UnderlyingEndValue_7.setString("1858152");
    noUnderlyings_0_0.set(UnderlyingEndValue_7);
    UnderlyingInstrument_7.insert(UnderlyingEndValue_7.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_7(1748146812);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_7);
    UnderlyingInstrument_7.insert(UnderlyingExerciseStyle_7.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_7;
    UnderlyingFXRate_7.setString("6391050");
    noUnderlyings_0_0.set(UnderlyingFXRate_7);
    UnderlyingInstrument_7.insert(UnderlyingFXRate_7.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_7('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_7);
    UnderlyingInstrument_7.insert(UnderlyingFXRateCalc_7.getString());
    FIX::UnderlyingFactor UnderlyingFactor_7;
    UnderlyingFactor_7.setString("4404003");
    noUnderlyings_0_0.set(UnderlyingFactor_7);
    UnderlyingInstrument_7.insert(UnderlyingFactor_7.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_7(603716786);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_7);
    UnderlyingInstrument_7.insert(UnderlyingFlowScheduleType_7.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_7("STRING_1497186166");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_7);
    UnderlyingInstrument_7.insert(UnderlyingInstrRegistry_7.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_7("LOCALMKTDATE_1228930573");
    noUnderlyings_0_0.set(UnderlyingIssueDate_7);
    UnderlyingInstrument_7.insert(UnderlyingIssueDate_7.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_7("STRING_483448839");
    noUnderlyings_0_0.set(UnderlyingIssuer_7);
    UnderlyingInstrument_7.insert(UnderlyingIssuer_7.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_7("STRING_687065081");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_7);
    UnderlyingInstrument_7.insert(UnderlyingLocaleOfIssue_7.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_7("LOCALMKTDATE_2060364693");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_7);
    UnderlyingInstrument_7.insert(UnderlyingMaturityDate_7.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_7("MONTHYEAR_571780293");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_7);
    UnderlyingInstrument_7.insert(UnderlyingMaturityMonthYear_7.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_7("TZTIMEONLY_120841614");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_7);
    UnderlyingInstrument_7.insert(UnderlyingMaturityTime_7.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_7;
    UnderlyingNotionalPercentageOutstanding_7.setString("11.900000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_7);
    UnderlyingInstrument_7.insert(UnderlyingNotionalPercentageOutstanding_7.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_7('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_7);
    UnderlyingInstrument_7.insert(UnderlyingOptAttribute_7.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_7;
    UnderlyingOriginalNotionalPercentageOutstanding_7.setString("81.400000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_7);
    UnderlyingInstrument_7.insert(UnderlyingOriginalNotionalPercentageOutstanding_7.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_7("STRING_438307261");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_7);
    UnderlyingInstrument_7.insert(UnderlyingPriceUnitOfMeasure_7.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_7;
    UnderlyingPriceUnitOfMeasureQty_7.setString("3889640");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_7);
    UnderlyingInstrument_7.insert(UnderlyingPriceUnitOfMeasureQty_7.getString());
    FIX::UnderlyingProduct UnderlyingProduct_7(874149455);
    noUnderlyings_0_0.set(UnderlyingProduct_7);
    UnderlyingInstrument_7.insert(UnderlyingProduct_7.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_7(1711592592);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_7);
    UnderlyingInstrument_7.insert(UnderlyingPutOrCall_7.getString());
    FIX::UnderlyingPx UnderlyingPx_7;
    UnderlyingPx_7.setString("7402541");
    noUnderlyings_0_0.set(UnderlyingPx_7);
    UnderlyingInstrument_7.insert(UnderlyingPx_7.getString());
    FIX::UnderlyingQty UnderlyingQty_7;
    UnderlyingQty_7.setString("2527415");
    noUnderlyings_0_0.set(UnderlyingQty_7);
    UnderlyingInstrument_7.insert(UnderlyingQty_7.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_7("LOCALMKTDATE_488807699");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_7);
    UnderlyingInstrument_7.insert(UnderlyingRedemptionDate_7.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_7("STRING_1337233113");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_7);
    UnderlyingInstrument_7.insert(UnderlyingRepoCollateralSecurityType_7.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_7;
    UnderlyingRepurchaseRate_7.setString("55.680000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_7);
    UnderlyingInstrument_7.insert(UnderlyingRepurchaseRate_7.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_7(195819020);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_7);
    UnderlyingInstrument_7.insert(UnderlyingRepurchaseTerm_7.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_7("STRING_594485130");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_7);
    UnderlyingInstrument_7.insert(UnderlyingRestructuringType_7.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_7("STRING_64542815");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityDesc_7.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_7("EXCHANGE_2078894445");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityExchange_7.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_7("STRING_1244470624");
    noUnderlyings_0_0.set(UnderlyingSecurityID_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityID_7.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_7("STRING_457039066");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityIDSource_7.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_7("STRING_117226095");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_7);
    UnderlyingInstrument_7.insert(UnderlyingSecuritySubType_7.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_7("STRING_845133788");
    noUnderlyings_0_0.set(UnderlyingSecurityType_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityType_7.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_7("STRING_1096144156");
    noUnderlyings_0_0.set(UnderlyingSeniority_7);
    UnderlyingInstrument_7.insert(UnderlyingSeniority_7.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_7("STRING_1978592834");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_7);
    UnderlyingInstrument_7.insert(UnderlyingSettlMethod_7.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_7(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_7);
    UnderlyingInstrument_7.insert(UnderlyingSettlementType_7.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_7;
    UnderlyingStartValue_7.setString("16998609");
    noUnderlyings_0_0.set(UnderlyingStartValue_7);
    UnderlyingInstrument_7.insert(UnderlyingStartValue_7.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_7("STRING_1328295352");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_7);
    UnderlyingInstrument_7.insert(UnderlyingStateOrProvinceOfIssue_7.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_7("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_7);
    UnderlyingInstrument_7.insert(UnderlyingStrikeCurrency_7.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_7;
    UnderlyingStrikePrice_7.setString("20153604");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_7);
    UnderlyingInstrument_7.insert(UnderlyingStrikePrice_7.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_7("STRING_279862094");
    noUnderlyings_0_0.set(UnderlyingSymbol_7);
    UnderlyingInstrument_7.insert(UnderlyingSymbol_7.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_7("STRING_607606427");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_7);
    UnderlyingInstrument_7.insert(UnderlyingSymbolSfx_7.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_7("STRING_2136202048");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_7);
    UnderlyingInstrument_7.insert(UnderlyingTimeUnit_7.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_7("STRING_1905253285");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_7);
    UnderlyingInstrument_7.insert(UnderlyingUnitOfMeasure_7.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_7;
    UnderlyingUnitOfMeasureQty_7.setString("7148473");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_7);
    UnderlyingInstrument_7.insert(UnderlyingUnitOfMeasureQty_7.getString());
    all_values.push_back(UnderlyingInstrument_7);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_16;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_16("STRING_196076898");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_16);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_16.insert(UnderlyingSecurityAltID_16.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_16("STRING_1103811388");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_16);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_16.insert(UnderlyingSecurityAltIDSource_16.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_16);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_13;
      FIX::UnderlyingStipType UnderlyingStipType_13("STRING_1907669490");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_13);
      UnderlyingStipulations_NoUnderlyingStips_13.insert(UnderlyingStipType_13.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_13("STRING_1844065542");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_13);
      UnderlyingStipulations_NoUnderlyingStips_13.insert(UnderlyingStipValue_13.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_13);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_14;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_14("STRING_248993541");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_14);
      UndlyInstrumentParties_NoUndlyInstrumentParties_14.insert(UnderlyingInstrumentPartyID_14.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_14('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_14);
      UndlyInstrumentParties_NoUndlyInstrumentParties_14.insert(UnderlyingInstrumentPartyIDSource_14.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_14(313659436);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_14);
      UndlyInstrumentParties_NoUndlyInstrumentParties_14.insert(UnderlyingInstrumentPartyRole_14.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_14);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_26("STRING_1628300138");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_26);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26.insert(UnderlyingInstrumentPartySubID_26.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_26(378202252);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_26);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26.insert(UnderlyingInstrumentPartySubIDType_26.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_27("STRING_376223359");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_27);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27.insert(UnderlyingInstrumentPartySubID_27.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_27(725287114);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_27);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27.insert(UnderlyingInstrumentPartySubIDType_27.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_28("STRING_835241318");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_28);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28.insert(UnderlyingInstrumentPartySubID_28.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_28(493449454);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_28);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28.insert(UnderlyingInstrumentPartySubIDType_28.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_15;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_15("STRING_1570420902");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_15);
      UndlyInstrumentParties_NoUndlyInstrumentParties_15.insert(UnderlyingInstrumentPartyID_15.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_15('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_15);
      UndlyInstrumentParties_NoUndlyInstrumentParties_15.insert(UnderlyingInstrumentPartyIDSource_15.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_15(324558640);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_15);
      UndlyInstrumentParties_NoUndlyInstrumentParties_15.insert(UnderlyingInstrumentPartyRole_15.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_15);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_29("STRING_1483762769");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_29);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29.insert(UnderlyingInstrumentPartySubID_29.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_29(1652853992);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_29);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29.insert(UnderlyingInstrumentPartySubIDType_29.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_30("STRING_1075452426");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_30);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30.insert(UnderlyingInstrumentPartySubID_30.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_30(1519588903);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_30);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30.insert(UnderlyingInstrumentPartySubIDType_30.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_31("STRING_1520730778");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_31);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31.insert(UnderlyingInstrumentPartySubID_31.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_31(1355314521);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_31);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31.insert(UnderlyingInstrumentPartySubIDType_31.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_8;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_8("DATA_2127195330");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingIssuer_8.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_8(1509449178);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingIssuerLen_8.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_8("DATA_1113084158");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingSecurityDesc_8.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_8(694559029);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingSecurityDescLen_8.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_8;
    UnderlyingAdjustedQuantity_8.setString("3643620");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_8);
    UnderlyingInstrument_8.insert(UnderlyingAdjustedQuantity_8.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_8;
    UnderlyingAllocationPercent_8.setString("10.560000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_8);
    UnderlyingInstrument_8.insert(UnderlyingAllocationPercent_8.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_8;
    UnderlyingAttachmentPoint_8.setString("4.180000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_8);
    UnderlyingInstrument_8.insert(UnderlyingAttachmentPoint_8.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_8("STRING_93424419");
    noUnderlyings_0_1.set(UnderlyingCFICode_8);
    UnderlyingInstrument_8.insert(UnderlyingCFICode_8.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_8("STRING_1069346898");
    noUnderlyings_0_1.set(UnderlyingCPProgram_8);
    UnderlyingInstrument_8.insert(UnderlyingCPProgram_8.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_8("STRING_1494952312");
    noUnderlyings_0_1.set(UnderlyingCPRegType_8);
    UnderlyingInstrument_8.insert(UnderlyingCPRegType_8.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_8;
    UnderlyingCapValue_8.setString("752282");
    noUnderlyings_0_1.set(UnderlyingCapValue_8);
    UnderlyingInstrument_8.insert(UnderlyingCapValue_8.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_8;
    UnderlyingCashAmount_8.setString("13183404");
    noUnderlyings_0_1.set(UnderlyingCashAmount_8);
    UnderlyingInstrument_8.insert(UnderlyingCashAmount_8.getString());
    FIX::UnderlyingCashType UnderlyingCashType_8("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_8);
    UnderlyingInstrument_8.insert(UnderlyingCashType_8.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_8;
    UnderlyingContractMultiplier_8.setString("3888877");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_8);
    UnderlyingInstrument_8.insert(UnderlyingContractMultiplier_8.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_8(1763153001);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_8);
    UnderlyingInstrument_8.insert(UnderlyingContractMultiplierUnit_8.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_8("COUNTRY_2009583810");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_8);
    UnderlyingInstrument_8.insert(UnderlyingCountryOfIssue_8.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_8("LOCALMKTDATE_767089976");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_8);
    UnderlyingInstrument_8.insert(UnderlyingCouponPaymentDate_8.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_8;
    UnderlyingCouponRate_8.setString("63.600000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_8);
    UnderlyingInstrument_8.insert(UnderlyingCouponRate_8.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_8("STRING_587387276");
    noUnderlyings_0_1.set(UnderlyingCreditRating_8);
    UnderlyingInstrument_8.insert(UnderlyingCreditRating_8.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_8("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_8);
    UnderlyingInstrument_8.insert(UnderlyingCurrency_8.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_8;
    UnderlyingCurrentValue_8.setString("103245");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_8);
    UnderlyingInstrument_8.insert(UnderlyingCurrentValue_8.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_8;
    UnderlyingDetachmentPoint_8.setString("31.210000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_8);
    UnderlyingInstrument_8.insert(UnderlyingDetachmentPoint_8.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_8;
    UnderlyingDirtyPrice_8.setString("8099008");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_8);
    UnderlyingInstrument_8.insert(UnderlyingDirtyPrice_8.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_8;
    UnderlyingEndPrice_8.setString("7187959");
    noUnderlyings_0_1.set(UnderlyingEndPrice_8);
    UnderlyingInstrument_8.insert(UnderlyingEndPrice_8.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_8;
    UnderlyingEndValue_8.setString("7225122");
    noUnderlyings_0_1.set(UnderlyingEndValue_8);
    UnderlyingInstrument_8.insert(UnderlyingEndValue_8.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_8(315271151);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_8);
    UnderlyingInstrument_8.insert(UnderlyingExerciseStyle_8.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_8;
    UnderlyingFXRate_8.setString("17942483");
    noUnderlyings_0_1.set(UnderlyingFXRate_8);
    UnderlyingInstrument_8.insert(UnderlyingFXRate_8.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_8('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_8);
    UnderlyingInstrument_8.insert(UnderlyingFXRateCalc_8.getString());
    FIX::UnderlyingFactor UnderlyingFactor_8;
    UnderlyingFactor_8.setString("18360019");
    noUnderlyings_0_1.set(UnderlyingFactor_8);
    UnderlyingInstrument_8.insert(UnderlyingFactor_8.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_8(1002079207);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_8);
    UnderlyingInstrument_8.insert(UnderlyingFlowScheduleType_8.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_8("STRING_74329179");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_8);
    UnderlyingInstrument_8.insert(UnderlyingInstrRegistry_8.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_8("LOCALMKTDATE_1197967460");
    noUnderlyings_0_1.set(UnderlyingIssueDate_8);
    UnderlyingInstrument_8.insert(UnderlyingIssueDate_8.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_8("STRING_2115163365");
    noUnderlyings_0_1.set(UnderlyingIssuer_8);
    UnderlyingInstrument_8.insert(UnderlyingIssuer_8.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_8("STRING_768888209");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_8);
    UnderlyingInstrument_8.insert(UnderlyingLocaleOfIssue_8.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_8("LOCALMKTDATE_1562329531");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_8);
    UnderlyingInstrument_8.insert(UnderlyingMaturityDate_8.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_8("MONTHYEAR_1276840773");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_8);
    UnderlyingInstrument_8.insert(UnderlyingMaturityMonthYear_8.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_8("TZTIMEONLY_419774979");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_8);
    UnderlyingInstrument_8.insert(UnderlyingMaturityTime_8.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_8;
    UnderlyingNotionalPercentageOutstanding_8.setString("39.500000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_8);
    UnderlyingInstrument_8.insert(UnderlyingNotionalPercentageOutstanding_8.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_8('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_8);
    UnderlyingInstrument_8.insert(UnderlyingOptAttribute_8.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_8;
    UnderlyingOriginalNotionalPercentageOutstanding_8.setString("72.910000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_8);
    UnderlyingInstrument_8.insert(UnderlyingOriginalNotionalPercentageOutstanding_8.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_8("STRING_1730982237");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_8);
    UnderlyingInstrument_8.insert(UnderlyingPriceUnitOfMeasure_8.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_8;
    UnderlyingPriceUnitOfMeasureQty_8.setString("15170444");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_8);
    UnderlyingInstrument_8.insert(UnderlyingPriceUnitOfMeasureQty_8.getString());
    FIX::UnderlyingProduct UnderlyingProduct_8(148527316);
    noUnderlyings_0_1.set(UnderlyingProduct_8);
    UnderlyingInstrument_8.insert(UnderlyingProduct_8.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_8(2119869961);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_8);
    UnderlyingInstrument_8.insert(UnderlyingPutOrCall_8.getString());
    FIX::UnderlyingPx UnderlyingPx_8;
    UnderlyingPx_8.setString("11327138");
    noUnderlyings_0_1.set(UnderlyingPx_8);
    UnderlyingInstrument_8.insert(UnderlyingPx_8.getString());
    FIX::UnderlyingQty UnderlyingQty_8;
    UnderlyingQty_8.setString("106274");
    noUnderlyings_0_1.set(UnderlyingQty_8);
    UnderlyingInstrument_8.insert(UnderlyingQty_8.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_8("LOCALMKTDATE_739476289");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_8);
    UnderlyingInstrument_8.insert(UnderlyingRedemptionDate_8.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_8("STRING_1124606530");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_8);
    UnderlyingInstrument_8.insert(UnderlyingRepoCollateralSecurityType_8.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_8;
    UnderlyingRepurchaseRate_8.setString("47.550000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_8);
    UnderlyingInstrument_8.insert(UnderlyingRepurchaseRate_8.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_8(194323936);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_8);
    UnderlyingInstrument_8.insert(UnderlyingRepurchaseTerm_8.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_8("STRING_1609948696");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_8);
    UnderlyingInstrument_8.insert(UnderlyingRestructuringType_8.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_8("STRING_608339285");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityDesc_8.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_8("EXCHANGE_1580557057");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityExchange_8.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_8("STRING_272365855");
    noUnderlyings_0_1.set(UnderlyingSecurityID_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityID_8.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_8("STRING_1327135193");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityIDSource_8.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_8("STRING_155585651");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_8);
    UnderlyingInstrument_8.insert(UnderlyingSecuritySubType_8.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_8("STRING_587637006");
    noUnderlyings_0_1.set(UnderlyingSecurityType_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityType_8.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_8("STRING_973899880");
    noUnderlyings_0_1.set(UnderlyingSeniority_8);
    UnderlyingInstrument_8.insert(UnderlyingSeniority_8.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_8("STRING_250203148");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_8);
    UnderlyingInstrument_8.insert(UnderlyingSettlMethod_8.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_8(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_8);
    UnderlyingInstrument_8.insert(UnderlyingSettlementType_8.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_8;
    UnderlyingStartValue_8.setString("19759790");
    noUnderlyings_0_1.set(UnderlyingStartValue_8);
    UnderlyingInstrument_8.insert(UnderlyingStartValue_8.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_8("STRING_324532327");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_8);
    UnderlyingInstrument_8.insert(UnderlyingStateOrProvinceOfIssue_8.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_8("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_8);
    UnderlyingInstrument_8.insert(UnderlyingStrikeCurrency_8.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_8;
    UnderlyingStrikePrice_8.setString("10934205");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_8);
    UnderlyingInstrument_8.insert(UnderlyingStrikePrice_8.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_8("STRING_888968630");
    noUnderlyings_0_1.set(UnderlyingSymbol_8);
    UnderlyingInstrument_8.insert(UnderlyingSymbol_8.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_8("STRING_1073015930");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_8);
    UnderlyingInstrument_8.insert(UnderlyingSymbolSfx_8.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_8("STRING_1513195515");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_8);
    UnderlyingInstrument_8.insert(UnderlyingTimeUnit_8.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_8("STRING_397238932");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_8);
    UnderlyingInstrument_8.insert(UnderlyingUnitOfMeasure_8.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_8;
    UnderlyingUnitOfMeasureQty_8.setString("12717199");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_8);
    UnderlyingInstrument_8.insert(UnderlyingUnitOfMeasureQty_8.getString());
    all_values.push_back(UnderlyingInstrument_8);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_17;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_17("STRING_2128221170");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_17);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_17.insert(UnderlyingSecurityAltID_17.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_17("STRING_641280770");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_17);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_17.insert(UnderlyingSecurityAltIDSource_17.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_17);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_14;
      FIX::UnderlyingStipType UnderlyingStipType_14("STRING_2100607483");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_14);
      UnderlyingStipulations_NoUnderlyingStips_14.insert(UnderlyingStipType_14.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_14("STRING_1773994588");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_14);
      UnderlyingStipulations_NoUnderlyingStips_14.insert(UnderlyingStipValue_14.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_14);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_15;
      FIX::UnderlyingStipType UnderlyingStipType_15("STRING_1439593953");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_15);
      UnderlyingStipulations_NoUnderlyingStips_15.insert(UnderlyingStipType_15.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_15("STRING_692600125");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_15);
      UnderlyingStipulations_NoUnderlyingStips_15.insert(UnderlyingStipValue_15.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_15);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_16;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_16("STRING_2037608708");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_16);
      UndlyInstrumentParties_NoUndlyInstrumentParties_16.insert(UnderlyingInstrumentPartyID_16.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_16('8');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_16);
      UndlyInstrumentParties_NoUndlyInstrumentParties_16.insert(UnderlyingInstrumentPartyIDSource_16.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_16(213582518);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_16);
      UndlyInstrumentParties_NoUndlyInstrumentParties_16.insert(UnderlyingInstrumentPartyRole_16.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_16);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_32("STRING_319997470");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_32);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32.insert(UnderlyingInstrumentPartySubID_32.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_32(485948373);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_32);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32.insert(UnderlyingInstrumentPartySubIDType_32.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_9;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_9("DATA_1825599539");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingIssuer_9.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_9(475583121);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingIssuerLen_9.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_9("DATA_1073585379");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingSecurityDesc_9.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_9(652015771);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingSecurityDescLen_9.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_9;
    UnderlyingAdjustedQuantity_9.setString("7257862");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_9);
    UnderlyingInstrument_9.insert(UnderlyingAdjustedQuantity_9.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_9;
    UnderlyingAllocationPercent_9.setString("6.670000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_9);
    UnderlyingInstrument_9.insert(UnderlyingAllocationPercent_9.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_9;
    UnderlyingAttachmentPoint_9.setString("12.110000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_9);
    UnderlyingInstrument_9.insert(UnderlyingAttachmentPoint_9.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_9("STRING_1050318596");
    noUnderlyings_0_2.set(UnderlyingCFICode_9);
    UnderlyingInstrument_9.insert(UnderlyingCFICode_9.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_9("STRING_676379766");
    noUnderlyings_0_2.set(UnderlyingCPProgram_9);
    UnderlyingInstrument_9.insert(UnderlyingCPProgram_9.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_9("STRING_276686368");
    noUnderlyings_0_2.set(UnderlyingCPRegType_9);
    UnderlyingInstrument_9.insert(UnderlyingCPRegType_9.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_9;
    UnderlyingCapValue_9.setString("21437391");
    noUnderlyings_0_2.set(UnderlyingCapValue_9);
    UnderlyingInstrument_9.insert(UnderlyingCapValue_9.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_9;
    UnderlyingCashAmount_9.setString("15653483");
    noUnderlyings_0_2.set(UnderlyingCashAmount_9);
    UnderlyingInstrument_9.insert(UnderlyingCashAmount_9.getString());
    FIX::UnderlyingCashType UnderlyingCashType_9("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_9);
    UnderlyingInstrument_9.insert(UnderlyingCashType_9.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_9;
    UnderlyingContractMultiplier_9.setString("15094510");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_9);
    UnderlyingInstrument_9.insert(UnderlyingContractMultiplier_9.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_9(1962587329);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_9);
    UnderlyingInstrument_9.insert(UnderlyingContractMultiplierUnit_9.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_9("COUNTRY_473938605");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_9);
    UnderlyingInstrument_9.insert(UnderlyingCountryOfIssue_9.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_9("LOCALMKTDATE_642406511");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_9);
    UnderlyingInstrument_9.insert(UnderlyingCouponPaymentDate_9.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_9;
    UnderlyingCouponRate_9.setString("48.510000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_9);
    UnderlyingInstrument_9.insert(UnderlyingCouponRate_9.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_9("STRING_1115219375");
    noUnderlyings_0_2.set(UnderlyingCreditRating_9);
    UnderlyingInstrument_9.insert(UnderlyingCreditRating_9.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_9("EUR");
    noUnderlyings_0_2.set(UnderlyingCurrency_9);
    UnderlyingInstrument_9.insert(UnderlyingCurrency_9.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_9;
    UnderlyingCurrentValue_9.setString("7417303");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_9);
    UnderlyingInstrument_9.insert(UnderlyingCurrentValue_9.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_9;
    UnderlyingDetachmentPoint_9.setString("32.920000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_9);
    UnderlyingInstrument_9.insert(UnderlyingDetachmentPoint_9.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_9;
    UnderlyingDirtyPrice_9.setString("4415651");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_9);
    UnderlyingInstrument_9.insert(UnderlyingDirtyPrice_9.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_9;
    UnderlyingEndPrice_9.setString("14928477");
    noUnderlyings_0_2.set(UnderlyingEndPrice_9);
    UnderlyingInstrument_9.insert(UnderlyingEndPrice_9.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_9;
    UnderlyingEndValue_9.setString("12536083");
    noUnderlyings_0_2.set(UnderlyingEndValue_9);
    UnderlyingInstrument_9.insert(UnderlyingEndValue_9.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_9(1328489225);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_9);
    UnderlyingInstrument_9.insert(UnderlyingExerciseStyle_9.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_9;
    UnderlyingFXRate_9.setString("17064303");
    noUnderlyings_0_2.set(UnderlyingFXRate_9);
    UnderlyingInstrument_9.insert(UnderlyingFXRate_9.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_9('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_9);
    UnderlyingInstrument_9.insert(UnderlyingFXRateCalc_9.getString());
    FIX::UnderlyingFactor UnderlyingFactor_9;
    UnderlyingFactor_9.setString("16484866");
    noUnderlyings_0_2.set(UnderlyingFactor_9);
    UnderlyingInstrument_9.insert(UnderlyingFactor_9.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_9(44895029);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_9);
    UnderlyingInstrument_9.insert(UnderlyingFlowScheduleType_9.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_9("STRING_1430188590");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_9);
    UnderlyingInstrument_9.insert(UnderlyingInstrRegistry_9.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_9("LOCALMKTDATE_2124069816");
    noUnderlyings_0_2.set(UnderlyingIssueDate_9);
    UnderlyingInstrument_9.insert(UnderlyingIssueDate_9.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_9("STRING_1118480409");
    noUnderlyings_0_2.set(UnderlyingIssuer_9);
    UnderlyingInstrument_9.insert(UnderlyingIssuer_9.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_9("STRING_2082204361");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_9);
    UnderlyingInstrument_9.insert(UnderlyingLocaleOfIssue_9.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_9("LOCALMKTDATE_702372437");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_9);
    UnderlyingInstrument_9.insert(UnderlyingMaturityDate_9.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_9("MONTHYEAR_320737428");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_9);
    UnderlyingInstrument_9.insert(UnderlyingMaturityMonthYear_9.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_9("TZTIMEONLY_415231924");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_9);
    UnderlyingInstrument_9.insert(UnderlyingMaturityTime_9.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_9;
    UnderlyingNotionalPercentageOutstanding_9.setString("10.330000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_9);
    UnderlyingInstrument_9.insert(UnderlyingNotionalPercentageOutstanding_9.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_9('9');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_9);
    UnderlyingInstrument_9.insert(UnderlyingOptAttribute_9.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_9;
    UnderlyingOriginalNotionalPercentageOutstanding_9.setString("82.920000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_9);
    UnderlyingInstrument_9.insert(UnderlyingOriginalNotionalPercentageOutstanding_9.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_9("STRING_1748946518");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_9);
    UnderlyingInstrument_9.insert(UnderlyingPriceUnitOfMeasure_9.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_9;
    UnderlyingPriceUnitOfMeasureQty_9.setString("4149819");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_9);
    UnderlyingInstrument_9.insert(UnderlyingPriceUnitOfMeasureQty_9.getString());
    FIX::UnderlyingProduct UnderlyingProduct_9(2041620591);
    noUnderlyings_0_2.set(UnderlyingProduct_9);
    UnderlyingInstrument_9.insert(UnderlyingProduct_9.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_9(1110913871);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_9);
    UnderlyingInstrument_9.insert(UnderlyingPutOrCall_9.getString());
    FIX::UnderlyingPx UnderlyingPx_9;
    UnderlyingPx_9.setString("2300856");
    noUnderlyings_0_2.set(UnderlyingPx_9);
    UnderlyingInstrument_9.insert(UnderlyingPx_9.getString());
    FIX::UnderlyingQty UnderlyingQty_9;
    UnderlyingQty_9.setString("3680755");
    noUnderlyings_0_2.set(UnderlyingQty_9);
    UnderlyingInstrument_9.insert(UnderlyingQty_9.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_9("LOCALMKTDATE_1753320382");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_9);
    UnderlyingInstrument_9.insert(UnderlyingRedemptionDate_9.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_9("STRING_25926828");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_9);
    UnderlyingInstrument_9.insert(UnderlyingRepoCollateralSecurityType_9.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_9;
    UnderlyingRepurchaseRate_9.setString("49.230000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_9);
    UnderlyingInstrument_9.insert(UnderlyingRepurchaseRate_9.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_9(1677209721);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_9);
    UnderlyingInstrument_9.insert(UnderlyingRepurchaseTerm_9.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_9("STRING_1922375515");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_9);
    UnderlyingInstrument_9.insert(UnderlyingRestructuringType_9.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_9("STRING_77541591");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityDesc_9.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_9("EXCHANGE_893209365");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityExchange_9.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_9("STRING_216457031");
    noUnderlyings_0_2.set(UnderlyingSecurityID_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityID_9.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_9("STRING_1570389376");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityIDSource_9.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_9("STRING_2146817717");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_9);
    UnderlyingInstrument_9.insert(UnderlyingSecuritySubType_9.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_9("STRING_1544946256");
    noUnderlyings_0_2.set(UnderlyingSecurityType_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityType_9.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_9("STRING_1129336032");
    noUnderlyings_0_2.set(UnderlyingSeniority_9);
    UnderlyingInstrument_9.insert(UnderlyingSeniority_9.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_9("STRING_1751406768");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_9);
    UnderlyingInstrument_9.insert(UnderlyingSettlMethod_9.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_9(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_9);
    UnderlyingInstrument_9.insert(UnderlyingSettlementType_9.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_9;
    UnderlyingStartValue_9.setString("11742310");
    noUnderlyings_0_2.set(UnderlyingStartValue_9);
    UnderlyingInstrument_9.insert(UnderlyingStartValue_9.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_9("STRING_1034111710");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_9);
    UnderlyingInstrument_9.insert(UnderlyingStateOrProvinceOfIssue_9.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_9("EUR");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_9);
    UnderlyingInstrument_9.insert(UnderlyingStrikeCurrency_9.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_9;
    UnderlyingStrikePrice_9.setString("9688324");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_9);
    UnderlyingInstrument_9.insert(UnderlyingStrikePrice_9.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_9("STRING_1724907908");
    noUnderlyings_0_2.set(UnderlyingSymbol_9);
    UnderlyingInstrument_9.insert(UnderlyingSymbol_9.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_9("STRING_465965251");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_9);
    UnderlyingInstrument_9.insert(UnderlyingSymbolSfx_9.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_9("STRING_1384064348");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_9);
    UnderlyingInstrument_9.insert(UnderlyingTimeUnit_9.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_9("STRING_1330115294");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_9);
    UnderlyingInstrument_9.insert(UnderlyingUnitOfMeasure_9.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_9;
    UnderlyingUnitOfMeasureQty_9.setString("14630824");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_9);
    UnderlyingInstrument_9.insert(UnderlyingUnitOfMeasureQty_9.getString());
    all_values.push_back(UnderlyingInstrument_9);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_18;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_18("STRING_931578164");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_18);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_18.insert(UnderlyingSecurityAltID_18.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_18("STRING_1878064389");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_18);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_18.insert(UnderlyingSecurityAltIDSource_18.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_18);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_19;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_19("STRING_1970119583");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_19);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_19.insert(UnderlyingSecurityAltID_19.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_19("STRING_2042492035");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_19);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_19.insert(UnderlyingSecurityAltIDSource_19.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_19);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_16;
      FIX::UnderlyingStipType UnderlyingStipType_16("STRING_190711483");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_16);
      UnderlyingStipulations_NoUnderlyingStips_16.insert(UnderlyingStipType_16.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_16("STRING_1648328770");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_16);
      UnderlyingStipulations_NoUnderlyingStips_16.insert(UnderlyingStipValue_16.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_16);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_17;
      FIX::UnderlyingStipType UnderlyingStipType_17("STRING_2134076842");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_17);
      UnderlyingStipulations_NoUnderlyingStips_17.insert(UnderlyingStipType_17.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_17("STRING_1674006407");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_17);
      UnderlyingStipulations_NoUnderlyingStips_17.insert(UnderlyingStipValue_17.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_17);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_17;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_17("STRING_1908968710");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_17);
      UndlyInstrumentParties_NoUndlyInstrumentParties_17.insert(UnderlyingInstrumentPartyID_17.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_17('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_17);
      UndlyInstrumentParties_NoUndlyInstrumentParties_17.insert(UnderlyingInstrumentPartyIDSource_17.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_17(2071264208);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_17);
      UndlyInstrumentParties_NoUndlyInstrumentParties_17.insert(UnderlyingInstrumentPartyRole_17.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_17);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_33("STRING_1174453726");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_33);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33.insert(UnderlyingInstrumentPartySubID_33.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_33(2070598277);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_33);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33.insert(UnderlyingInstrumentPartySubIDType_33.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_18;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_18("STRING_1522888350");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_18);
      UndlyInstrumentParties_NoUndlyInstrumentParties_18.insert(UnderlyingInstrumentPartyID_18.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_18('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_18);
      UndlyInstrumentParties_NoUndlyInstrumentParties_18.insert(UnderlyingInstrumentPartyIDSource_18.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_18(1674521397);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_18);
      UndlyInstrumentParties_NoUndlyInstrumentParties_18.insert(UnderlyingInstrumentPartyRole_18.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_18);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_34("STRING_1330537173");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_34);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34.insert(UnderlyingInstrumentPartySubID_34.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_34(561149459);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_34);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34.insert(UnderlyingInstrumentPartySubIDType_34.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_19;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_19("STRING_1443889477");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_19);
      UndlyInstrumentParties_NoUndlyInstrumentParties_19.insert(UnderlyingInstrumentPartyID_19.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_19('1');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_19);
      UndlyInstrumentParties_NoUndlyInstrumentParties_19.insert(UnderlyingInstrumentPartyIDSource_19.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_19(1529981883);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_19);
      UndlyInstrumentParties_NoUndlyInstrumentParties_19.insert(UnderlyingInstrumentPartyRole_19.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_19);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_35("STRING_1941730247");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_35);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35.insert(UnderlyingInstrumentPartySubID_35.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_35(766562583);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_35);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35.insert(UnderlyingInstrumentPartySubIDType_35.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_36("STRING_203945383");
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubID_36);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36.insert(UnderlyingInstrumentPartySubID_36.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_36(1257329044);
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubIDType_36);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36.insert(UnderlyingInstrumentPartySubIDType_36.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_2;
  FIX::Yield Yield_2;
  Yield_2.setString("15.750000");
  msg.set(Yield_2);
  YieldData_2.insert(Yield_2.getString());
  FIX::YieldCalcDate YieldCalcDate_2("LOCALMKTDATE_1135523548");
  msg.set(YieldCalcDate_2);
  YieldData_2.insert(YieldCalcDate_2.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_2("LOCALMKTDATE_987909785");
  msg.set(YieldRedemptionDate_2);
  YieldData_2.insert(YieldRedemptionDate_2.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_2;
  YieldRedemptionPrice_2.setString("5176975");
  msg.set(YieldRedemptionPrice_2);
  YieldData_2.insert(YieldRedemptionPrice_2.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_2(1030531935);
  msg.set(YieldRedemptionPriceType_2);
  YieldData_2.insert(YieldRedemptionPriceType_2.getString());
  FIX::YieldType YieldType_2("STRING_MARK");
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
