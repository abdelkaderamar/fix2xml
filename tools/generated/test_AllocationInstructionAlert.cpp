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
  multiset<string> all_compo_names;
  multiset<string> AllocationInstructionAlert_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_1;
  AccruedInterestAmt_1.setString("13931345");
  msg.set(AccruedInterestAmt_1);
  AllocationInstructionAlert_0.insert(AccruedInterestAmt_1.getString());
  FIX::AccruedInterestRate AccruedInterestRate_1;
  AccruedInterestRate_1.setString("84.620000");
  msg.set(AccruedInterestRate_1);
  AllocationInstructionAlert_0.insert(AccruedInterestRate_1.getString());
  FIX::AllocCancReplaceReason AllocCancReplaceReason_1(2);
  msg.set(AllocCancReplaceReason_1);
  AllocationInstructionAlert_0.insert(AllocCancReplaceReason_1.getString());
  FIX::AllocID AllocID_2("STRING_55089172");
  msg.set(AllocID_2);
  AllocationInstructionAlert_0.insert(AllocID_2.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_2(1);
  msg.set(AllocIntermedReqType_2);
  AllocationInstructionAlert_0.insert(AllocIntermedReqType_2.getString());
  FIX::AllocLinkID AllocLinkID_1("STRING_410558207");
  msg.set(AllocLinkID_1);
  AllocationInstructionAlert_0.insert(AllocLinkID_1.getString());
  FIX::AllocLinkType AllocLinkType_1(1);
  msg.set(AllocLinkType_1);
  AllocationInstructionAlert_0.insert(AllocLinkType_1.getString());
  FIX::AllocNoOrdersType AllocNoOrdersType_1(1);
  msg.set(AllocNoOrdersType_1);
  AllocationInstructionAlert_0.insert(AllocNoOrdersType_1.getString());
  FIX::AllocTransType AllocTransType_1('1');
  msg.set(AllocTransType_1);
  AllocationInstructionAlert_0.insert(AllocTransType_1.getString());
  FIX::AllocType AllocType_2(13);
  msg.set(AllocType_2);
  AllocationInstructionAlert_0.insert(AllocType_2.getString());
  FIX::AutoAcceptIndicator AutoAcceptIndicator_1(true);
  msg.set(AutoAcceptIndicator_1);
  AllocationInstructionAlert_0.insert(AutoAcceptIndicator_1.getString());
  FIX::AvgParPx AvgParPx_1;
  AvgParPx_1.setString("21426034");
  msg.set(AvgParPx_1);
  AllocationInstructionAlert_0.insert(AvgParPx_1.getString());
  FIX::AvgPx AvgPx_1;
  AvgPx_1.setString("6596426");
  msg.set(AvgPx_1);
  AllocationInstructionAlert_0.insert(AvgPx_1.getString());
  FIX::AvgPxIndicator AvgPxIndicator_1(2);
  msg.set(AvgPxIndicator_1);
  AllocationInstructionAlert_0.insert(AvgPxIndicator_1.getString());
  FIX::AvgPxPrecision AvgPxPrecision_1(33014370);
  msg.set(AvgPxPrecision_1);
  AllocationInstructionAlert_0.insert(AvgPxPrecision_1.getString());
  FIX::BookingRefID BookingRefID_1("STRING_1824693403");
  msg.set(BookingRefID_1);
  AllocationInstructionAlert_0.insert(BookingRefID_1.getString());
  FIX::BookingType BookingType_1(1);
  msg.set(BookingType_1);
  AllocationInstructionAlert_0.insert(BookingType_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_2("LOCALMKTDATE_1371641869");
  msg.set(ClearingBusinessDate_2);
  AllocationInstructionAlert_0.insert(ClearingBusinessDate_2.getString());
  FIX::Concession Concession_1;
  Concession_1.setString("16668327");
  msg.set(Concession_1);
  AllocationInstructionAlert_0.insert(Concession_1.getString());
  FIX::Currency Currency_2("GBP");
  msg.set(Currency_2);
  AllocationInstructionAlert_0.insert(Currency_2.getString());
  FIX::CustOrderCapacity CustOrderCapacity_1(1);
  msg.set(CustOrderCapacity_1);
  AllocationInstructionAlert_0.insert(CustOrderCapacity_1.getString());
  FIX::EncodedText EncodedText_3("DATA_1686632980");
  msg.set(EncodedText_3);
  AllocationInstructionAlert_0.insert(EncodedText_3.getString());
  FIX::EncodedTextLen EncodedTextLen_3(907010528);
  msg.set(EncodedTextLen_3);
  AllocationInstructionAlert_0.insert(EncodedTextLen_3.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_1;
  EndAccruedInterestAmt_1.setString("6141975");
  msg.set(EndAccruedInterestAmt_1);
  AllocationInstructionAlert_0.insert(EndAccruedInterestAmt_1.getString());
  FIX::EndCash EndCash_1;
  EndCash_1.setString("16228188");
  msg.set(EndCash_1);
  AllocationInstructionAlert_0.insert(EndCash_1.getString());
  FIX::GrossTradeAmt GrossTradeAmt_1;
  GrossTradeAmt_1.setString("3949570");
  msg.set(GrossTradeAmt_1);
  AllocationInstructionAlert_0.insert(GrossTradeAmt_1.getString());
  FIX::InterestAtMaturity InterestAtMaturity_1;
  InterestAtMaturity_1.setString("12562178");
  msg.set(InterestAtMaturity_1);
  AllocationInstructionAlert_0.insert(InterestAtMaturity_1.getString());
  FIX::LastFragment LastFragment_1(false);
  msg.set(LastFragment_1);
  AllocationInstructionAlert_0.insert(LastFragment_1.getString());
  FIX::LastMkt LastMkt_2("EXCHANGE_87367727");
  msg.set(LastMkt_2);
  AllocationInstructionAlert_0.insert(LastMkt_2.getString());
  FIX::LegalConfirm LegalConfirm_1(true);
  msg.set(LegalConfirm_1);
  AllocationInstructionAlert_0.insert(LegalConfirm_1.getString());
  FIX::MatchType MatchType_1("STRING_6");
  msg.set(MatchType_1);
  AllocationInstructionAlert_0.insert(MatchType_1.getString());
  FIX::MessageEventSource MessageEventSource_1("STRING_163666189");
  msg.set(MessageEventSource_1);
  AllocationInstructionAlert_0.insert(MessageEventSource_1.getString());
  FIX::MultiLegReportingType MultiLegReportingType_1('3');
  msg.set(MultiLegReportingType_1);
  AllocationInstructionAlert_0.insert(MultiLegReportingType_1.getString());
  FIX::NetMoney NetMoney_1;
  NetMoney_1.setString("18339486");
  msg.set(NetMoney_1);
  AllocationInstructionAlert_0.insert(NetMoney_1.getString());
  FIX::NumDaysInterest NumDaysInterest_1(1477250828);
  msg.set(NumDaysInterest_1);
  AllocationInstructionAlert_0.insert(NumDaysInterest_1.getString());
  FIX::PositionEffect PositionEffect_1('N');
  msg.set(PositionEffect_1);
  AllocationInstructionAlert_0.insert(PositionEffect_1.getString());
  FIX::PreviouslyReported PreviouslyReported_1(true);
  msg.set(PreviouslyReported_1);
  AllocationInstructionAlert_0.insert(PreviouslyReported_1.getString());
  FIX::PriceType PriceType_1(17);
  msg.set(PriceType_1);
  AllocationInstructionAlert_0.insert(PriceType_1.getString());
  FIX::QtyType QtyType_2(1);
  msg.set(QtyType_2);
  AllocationInstructionAlert_0.insert(QtyType_2.getString());
  FIX::Quantity Quantity_2;
  Quantity_2.setString("18016156");
  msg.set(Quantity_2);
  AllocationInstructionAlert_0.insert(Quantity_2.getString());
  FIX::RefAllocID RefAllocID_1("STRING_674658539");
  msg.set(RefAllocID_1);
  AllocationInstructionAlert_0.insert(RefAllocID_1.getString());
  FIX::ReversalIndicator ReversalIndicator_1(false);
  msg.set(ReversalIndicator_1);
  AllocationInstructionAlert_0.insert(ReversalIndicator_1.getString());
  FIX::RndPx RndPx_1;
  RndPx_1.setString("3137745");
  msg.set(RndPx_1);
  AllocationInstructionAlert_0.insert(RndPx_1.getString());
  FIX::SecondaryAllocID SecondaryAllocID_2("STRING_1566043748");
  msg.set(SecondaryAllocID_2);
  AllocationInstructionAlert_0.insert(SecondaryAllocID_2.getString());
  FIX::SettlDate SettlDate_1("LOCALMKTDATE_869802251");
  msg.set(SettlDate_1);
  AllocationInstructionAlert_0.insert(SettlDate_1.getString());
  FIX::SettlType SettlType_1("STRING_B");
  msg.set(SettlType_1);
  AllocationInstructionAlert_0.insert(SettlType_1.getString());
  FIX::Side Side_1('9');
  msg.set(Side_1);
  AllocationInstructionAlert_0.insert(Side_1.getString());
  FIX::StartCash StartCash_1;
  StartCash_1.setString("939604");
  msg.set(StartCash_1);
  AllocationInstructionAlert_0.insert(StartCash_1.getString());
  FIX::Text Text_3("STRING_1657817112");
  msg.set(Text_3);
  AllocationInstructionAlert_0.insert(Text_3.getString());
  FIX::TotNoAllocs TotNoAllocs_1(1301601796);
  msg.set(TotNoAllocs_1);
  AllocationInstructionAlert_0.insert(TotNoAllocs_1.getString());
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_1;
  TotalAccruedInterestAmt_1.setString("12682343");
  msg.set(TotalAccruedInterestAmt_1);
  AllocationInstructionAlert_0.insert(TotalAccruedInterestAmt_1.getString());
  FIX::TotalTakedown TotalTakedown_1;
  TotalTakedown_1.setString("12760100");
  msg.set(TotalTakedown_1);
  AllocationInstructionAlert_0.insert(TotalTakedown_1.getString());
  FIX::TradeDate TradeDate_3("LOCALMKTDATE_840751128");
  msg.set(TradeDate_3);
  AllocationInstructionAlert_0.insert(TradeDate_3.getString());
  FIX::TradeInputSource TradeInputSource_1("STRING_27761221");
  msg.set(TradeInputSource_1);
  AllocationInstructionAlert_0.insert(TradeInputSource_1.getString());
  FIX::TradeOriginationDate TradeOriginationDate_1("LOCALMKTDATE_1890207598");
  msg.set(TradeOriginationDate_1);
  AllocationInstructionAlert_0.insert(TradeOriginationDate_1.getString());
  FIX::TradingSessionID TradingSessionID_2("STRING_2");
  msg.set(TradingSessionID_2);
  AllocationInstructionAlert_0.insert(TradingSessionID_2.getString());
  FIX::TradingSessionSubID TradingSessionSubID_2("STRING_3");
  msg.set(TradingSessionSubID_2);
  AllocationInstructionAlert_0.insert(TradingSessionSubID_2.getString());
  FIX::TransactTime TransactTime_3(FIX::UTCTIMESTAMP(6, 17, 51, 25, 8, 2000));
  msg.set(TransactTime_3);
  AllocationInstructionAlert_0.insert(TransactTime_3.getString());
  FIX::TrdSubType TrdSubType_1(6);
  msg.set(TrdSubType_1);
  AllocationInstructionAlert_0.insert(TrdSubType_1.getString());
  FIX::TrdType TrdType_1(52);
  msg.set(TrdType_1);
  AllocationInstructionAlert_0.insert(TrdType_1.getString());
  all_values.push_back(AllocationInstructionAlert_0);

  all_compo_names.insert("AllocationInstructionAlert");

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationInstructionAlert::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_1;
    FIX::AllocAccount AllocAccount_3("STRING_613979290");
    noAllocs_0_0.set(AllocAccount_3);
    AllocGrp_NoAllocs_1.insert(AllocAccount_3.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_1;
    AllocAccruedInterestAmt_1.setString("6565129");
    noAllocs_0_0.set(AllocAccruedInterestAmt_1);
    AllocGrp_NoAllocs_1.insert(AllocAccruedInterestAmt_1.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_3(889607332);
    noAllocs_0_0.set(AllocAcctIDSource_3);
    AllocGrp_NoAllocs_1.insert(AllocAcctIDSource_3.getString());
    FIX::AllocAvgPx AllocAvgPx_1;
    AllocAvgPx_1.setString("2681112");
    noAllocs_0_0.set(AllocAvgPx_1);
    AllocGrp_NoAllocs_1.insert(AllocAvgPx_1.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_3("STRING_1331171446");
    noAllocs_0_0.set(AllocCustomerCapacity_3);
    AllocGrp_NoAllocs_1.insert(AllocCustomerCapacity_3.getString());
    FIX::AllocHandlInst AllocHandlInst_1(1);
    noAllocs_0_0.set(AllocHandlInst_1);
    AllocGrp_NoAllocs_1.insert(AllocHandlInst_1.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_1;
    AllocInterestAtMaturity_1.setString("5818858");
    noAllocs_0_0.set(AllocInterestAtMaturity_1);
    AllocGrp_NoAllocs_1.insert(AllocInterestAtMaturity_1.getString());
    FIX::AllocMethod AllocMethod_1(2);
    noAllocs_0_0.set(AllocMethod_1);
    AllocGrp_NoAllocs_1.insert(AllocMethod_1.getString());
    FIX::AllocNetMoney AllocNetMoney_1;
    AllocNetMoney_1.setString("4487138");
    noAllocs_0_0.set(AllocNetMoney_1);
    AllocGrp_NoAllocs_1.insert(AllocNetMoney_1.getString());
    FIX::AllocPositionEffect AllocPositionEffect_3('C');
    noAllocs_0_0.set(AllocPositionEffect_3);
    AllocGrp_NoAllocs_1.insert(AllocPositionEffect_3.getString());
    FIX::AllocPrice AllocPrice_3;
    AllocPrice_3.setString("21017861");
    noAllocs_0_0.set(AllocPrice_3);
    AllocGrp_NoAllocs_1.insert(AllocPrice_3.getString());
    FIX::AllocQty AllocQty_3;
    AllocQty_3.setString("5426742");
    noAllocs_0_0.set(AllocQty_3);
    AllocGrp_NoAllocs_1.insert(AllocQty_3.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_1;
    AllocSettlCurrAmt_1.setString("832035");
    noAllocs_0_0.set(AllocSettlCurrAmt_1);
    AllocGrp_NoAllocs_1.insert(AllocSettlCurrAmt_1.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_1("CAN");
    noAllocs_0_0.set(AllocSettlCurrency_1);
    AllocGrp_NoAllocs_1.insert(AllocSettlCurrency_1.getString());
    FIX::AllocSettlInstType AllocSettlInstType_1(0);
    noAllocs_0_0.set(AllocSettlInstType_1);
    AllocGrp_NoAllocs_1.insert(AllocSettlInstType_1.getString());
    FIX::AllocText AllocText_3("STRING_2096655406");
    noAllocs_0_0.set(AllocText_3);
    AllocGrp_NoAllocs_1.insert(AllocText_3.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_1("STRING_H");
    noAllocs_0_0.set(ClearingFeeIndicator_1);
    AllocGrp_NoAllocs_1.insert(ClearingFeeIndicator_1.getString());
    FIX::EncodedAllocText EncodedAllocText_3("DATA_1101937600");
    noAllocs_0_0.set(EncodedAllocText_3);
    AllocGrp_NoAllocs_1.insert(EncodedAllocText_3.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_3(265258077);
    noAllocs_0_0.set(EncodedAllocTextLen_3);
    AllocGrp_NoAllocs_1.insert(EncodedAllocTextLen_3.getString());
    FIX::IndividualAllocID IndividualAllocID_3("STRING_113904472");
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
    FIX::ProcessCode ProcessCode_1('4');
    noAllocs_0_0.set(ProcessCode_1);
    AllocGrp_NoAllocs_1.insert(ProcessCode_1.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_3("STRING_1300256569");
    noAllocs_0_0.set(SecondaryIndividualAllocID_3);
    AllocGrp_NoAllocs_1.insert(SecondaryIndividualAllocID_3.getString());
    FIX::SettlCurrAmt SettlCurrAmt_1;
    SettlCurrAmt_1.setString("12977426");
    noAllocs_0_0.set(SettlCurrAmt_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrAmt_1.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_1;
    SettlCurrFxRate_1.setString("9540960");
    noAllocs_0_0.set(SettlCurrFxRate_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrFxRate_1.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_1('M');
    noAllocs_0_0.set(SettlCurrFxRateCalc_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrFxRateCalc_1.getString());
    FIX::SettlCurrency SettlCurrency_1("EUR");
    noAllocs_0_0.set(SettlCurrency_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrency_1.getString());
    all_values.push_back(AllocGrp_NoAllocs_1);
    all_compo_names.insert("AllocGrp.NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_3;
      FIX::ClearingInstruction ClearingInstruction_3(6);
      noClearingInstructions_0_1_0.set(ClearingInstruction_3);
      ClrInstGrp_NoClearingInstructions_3.insert(ClearingInstruction_3.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_3);
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_4;
      FIX::ClearingInstruction ClearingInstruction_4(2);
      noClearingInstructions_0_1_1.set(ClearingInstruction_4);
      ClrInstGrp_NoClearingInstructions_4.insert(ClearingInstruction_4.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_4);
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_1;
    FIX::CommCurrency CommCurrency_1("USD");
    noAllocs_0_0.set(CommCurrency_1);
    CommissionData_1.insert(CommCurrency_1.getString());
    FIX::CommType CommType_1('2');
    noAllocs_0_0.set(CommType_1);
    CommissionData_1.insert(CommType_1.getString());
    FIX::Commission Commission_1;
    Commission_1.setString("6364014");
    noAllocs_0_0.set(Commission_1);
    CommissionData_1.insert(Commission_1.getString());
    FIX::FundRenewWaiv FundRenewWaiv_1('N');
    noAllocs_0_0.set(FundRenewWaiv_1);
    CommissionData_1.insert(FundRenewWaiv_1.getString());
    all_values.push_back(CommissionData_1);
    all_compo_names.insert("CommissionData");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_1;
      FIX::MiscFeeAmt MiscFeeAmt_1;
      MiscFeeAmt_1.setString("12092715");
      noMiscFees_0_1_0.set(MiscFeeAmt_1);
      MiscFeesGrp_NoMiscFees_1.insert(MiscFeeAmt_1.getString());
      FIX::MiscFeeBasis MiscFeeBasis_1(2);
      noMiscFees_0_1_0.set(MiscFeeBasis_1);
      MiscFeesGrp_NoMiscFees_1.insert(MiscFeeBasis_1.getString());
      FIX::MiscFeeCurr MiscFeeCurr_1("USD");
      noMiscFees_0_1_0.set(MiscFeeCurr_1);
      MiscFeesGrp_NoMiscFees_1.insert(MiscFeeCurr_1.getString());
      FIX::MiscFeeType MiscFeeType_1("STRING_4");
      noMiscFees_0_1_0.set(MiscFeeType_1);
      MiscFeesGrp_NoMiscFees_1.insert(MiscFeeType_1.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_1);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_2;
      FIX::MiscFeeAmt MiscFeeAmt_2;
      MiscFeeAmt_2.setString("21253673");
      noMiscFees_0_1_1.set(MiscFeeAmt_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeAmt_2.getString());
      FIX::MiscFeeBasis MiscFeeBasis_2(0);
      noMiscFees_0_1_1.set(MiscFeeBasis_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeBasis_2.getString());
      FIX::MiscFeeCurr MiscFeeCurr_2("EUR");
      noMiscFees_0_1_1.set(MiscFeeCurr_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeCurr_2.getString());
      FIX::MiscFeeType MiscFeeType_2("STRING_6");
      noMiscFees_0_1_1.set(MiscFeeType_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeType_2.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_2);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_0_1_2;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_3;
      FIX::MiscFeeAmt MiscFeeAmt_3;
      MiscFeeAmt_3.setString("11683472");
      noMiscFees_0_1_2.set(MiscFeeAmt_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeAmt_3.getString());
      FIX::MiscFeeBasis MiscFeeBasis_3(0);
      noMiscFees_0_1_2.set(MiscFeeBasis_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeBasis_3.getString());
      FIX::MiscFeeCurr MiscFeeCurr_3("CAN");
      noMiscFees_0_1_2.set(MiscFeeCurr_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeCurr_3.getString());
      FIX::MiscFeeType MiscFeeType_3("STRING_3");
      noMiscFees_0_1_2.set(MiscFeeType_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeType_3.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_3);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_7;
      FIX::NestedPartyID NestedPartyID_7("STRING_1288189541");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_7);
      NestedParties_NoNestedPartyIDs_7.insert(NestedPartyID_7.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_7('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_7);
      NestedParties_NoNestedPartyIDs_7.insert(NestedPartyIDSource_7.getString());
      FIX::NestedPartyRole NestedPartyRole_7(1107553254);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_7);
      NestedParties_NoNestedPartyIDs_7.insert(NestedPartyRole_7.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_7);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_16;
        FIX::NestedPartySubID NestedPartySubID_16("STRING_858485873");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_16);
        NstdPtysSubGrp_NoNestedPartySubIDs_16.insert(NestedPartySubID_16.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_16(2109588614);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_16);
        NstdPtysSubGrp_NoNestedPartySubIDs_16.insert(NestedPartySubIDType_16.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_16);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_8;
      FIX::NestedPartyID NestedPartyID_8("STRING_247019075");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_8);
      NestedParties_NoNestedPartyIDs_8.insert(NestedPartyID_8.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_8('6');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_8);
      NestedParties_NoNestedPartyIDs_8.insert(NestedPartyIDSource_8.getString());
      FIX::NestedPartyRole NestedPartyRole_8(1853747658);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_8);
      NestedParties_NoNestedPartyIDs_8.insert(NestedPartyRole_8.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_8);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_17;
        FIX::NestedPartySubID NestedPartySubID_17("STRING_1810239884");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_17);
        NstdPtysSubGrp_NoNestedPartySubIDs_17.insert(NestedPartySubID_17.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_17(1176818267);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_17);
        NstdPtysSubGrp_NoNestedPartySubIDs_17.insert(NestedPartySubIDType_17.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_17);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_18;
        FIX::NestedPartySubID NestedPartySubID_18("STRING_937936205");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_18);
        NstdPtysSubGrp_NoNestedPartySubIDs_18.insert(NestedPartySubID_18.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_18(1553950510);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_18);
        NstdPtysSubGrp_NoNestedPartySubIDs_18.insert(NestedPartySubIDType_18.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_18);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_9;
      FIX::NestedPartyID NestedPartyID_9("STRING_948602693");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_9);
      NestedParties_NoNestedPartyIDs_9.insert(NestedPartyID_9.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_9('2');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_9);
      NestedParties_NoNestedPartyIDs_9.insert(NestedPartyIDSource_9.getString());
      FIX::NestedPartyRole NestedPartyRole_9(1251963619);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_9);
      NestedParties_NoNestedPartyIDs_9.insert(NestedPartyRole_9.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_9);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_19;
        FIX::NestedPartySubID NestedPartySubID_19("STRING_1292199348");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_19);
        NstdPtysSubGrp_NoNestedPartySubIDs_19.insert(NestedPartySubID_19.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_19(58397359);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_19);
        NstdPtysSubGrp_NoNestedPartySubIDs_19.insert(NestedPartySubIDType_19.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_19);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_20;
        FIX::NestedPartySubID NestedPartySubID_20("STRING_1240945103");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_20);
        NstdPtysSubGrp_NoNestedPartySubIDs_20.insert(NestedPartySubID_20.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_20(1796404543);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_20);
        NstdPtysSubGrp_NoNestedPartySubIDs_20.insert(NestedPartySubIDType_20.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_20);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_1;
    FIX::SettlDeliveryType SettlDeliveryType_1(1);
    noAllocs_0_0.set(SettlDeliveryType_1);
    SettlInstructionsData_1.insert(SettlDeliveryType_1.getString());
    FIX::StandInstDbID StandInstDbID_1("STRING_910015001");
    noAllocs_0_0.set(StandInstDbID_1);
    SettlInstructionsData_1.insert(StandInstDbID_1.getString());
    FIX::StandInstDbName StandInstDbName_1("STRING_1255063690");
    noAllocs_0_0.set(StandInstDbName_1);
    SettlInstructionsData_1.insert(StandInstDbName_1.getString());
    FIX::StandInstDbType StandInstDbType_1(3);
    noAllocs_0_0.set(StandInstDbType_1);
    SettlInstructionsData_1.insert(StandInstDbType_1.getString());
    all_values.push_back(SettlInstructionsData_1);
    all_compo_names.insert("SettlInstructionsData");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_2;
      FIX::DlvyInstType DlvyInstType_2('C');
      noDlvyInst_0_1_0.set(DlvyInstType_2);
      DlvyInstGrp_NoDlvyInst_2.insert(DlvyInstType_2.getString());
      FIX::SettlInstSource SettlInstSource_2('2');
      noDlvyInst_0_1_0.set(SettlInstSource_2);
      DlvyInstGrp_NoDlvyInst_2.insert(SettlInstSource_2.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_2);
      all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_2;
        FIX::SettlPartyID SettlPartyID_2("STRING_820575784");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_2);
        SettlParties_NoSettlPartyIDs_2.insert(SettlPartyID_2.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_2('1');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_2);
        SettlParties_NoSettlPartyIDs_2.insert(SettlPartyIDSource_2.getString());
        FIX::SettlPartyRole SettlPartyRole_2(657178060);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_2);
        SettlParties_NoSettlPartyIDs_2.insert(SettlPartyRole_2.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_2);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_5;
          FIX::SettlPartySubID SettlPartySubID_5("STRING_1719087256");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_5);
          SettlPtysSubGrp_NoSettlPartySubIDs_5.insert(SettlPartySubID_5.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_5(1515663933);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_5);
          SettlPtysSubGrp_NoSettlPartySubIDs_5.insert(SettlPartySubIDType_5.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_5);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_6;
          FIX::SettlPartySubID SettlPartySubID_6("STRING_1890234004");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_6);
          SettlPtysSubGrp_NoSettlPartySubIDs_6.insert(SettlPartySubID_6.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_6(1966106331);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_6);
          SettlPtysSubGrp_NoSettlPartySubIDs_6.insert(SettlPartySubIDType_6.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_6);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_3;
        FIX::SettlPartyID SettlPartyID_3("STRING_36957440");
        noSettlPartyIDs_0_0_2_1.set(SettlPartyID_3);
        SettlParties_NoSettlPartyIDs_3.insert(SettlPartyID_3.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_3('1');
        noSettlPartyIDs_0_0_2_1.set(SettlPartyIDSource_3);
        SettlParties_NoSettlPartyIDs_3.insert(SettlPartyIDSource_3.getString());
        FIX::SettlPartyRole SettlPartyRole_3(120157418);
        noSettlPartyIDs_0_0_2_1.set(SettlPartyRole_3);
        SettlParties_NoSettlPartyIDs_3.insert(SettlPartyRole_3.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_3);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_7;
          FIX::SettlPartySubID SettlPartySubID_7("STRING_625832634");
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubID_7);
          SettlPtysSubGrp_NoSettlPartySubIDs_7.insert(SettlPartySubID_7.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_7(1058093623);
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubIDType_7);
          SettlPtysSubGrp_NoSettlPartySubIDs_7.insert(SettlPartySubIDType_7.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_7);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_8;
          FIX::SettlPartySubID SettlPartySubID_8("STRING_1253664187");
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubID_8);
          SettlPtysSubGrp_NoSettlPartySubIDs_8.insert(SettlPartySubID_8.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_8(1574435327);
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubIDType_8);
          SettlPtysSubGrp_NoSettlPartySubIDs_8.insert(SettlPartySubIDType_8.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_8);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_1);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_4;
        FIX::SettlPartyID SettlPartyID_4("STRING_1057817779");
        noSettlPartyIDs_0_0_2_2.set(SettlPartyID_4);
        SettlParties_NoSettlPartyIDs_4.insert(SettlPartyID_4.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_4('3');
        noSettlPartyIDs_0_0_2_2.set(SettlPartyIDSource_4);
        SettlParties_NoSettlPartyIDs_4.insert(SettlPartyIDSource_4.getString());
        FIX::SettlPartyRole SettlPartyRole_4(690013087);
        noSettlPartyIDs_0_0_2_2.set(SettlPartyRole_4);
        SettlParties_NoSettlPartyIDs_4.insert(SettlPartyRole_4.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_4);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_9;
          FIX::SettlPartySubID SettlPartySubID_9("STRING_416541517");
          noSettlPartySubIDs_0_0_2_3_0.set(SettlPartySubID_9);
          SettlPtysSubGrp_NoSettlPartySubIDs_9.insert(SettlPartySubID_9.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_9(1930958191);
          noSettlPartySubIDs_0_0_2_3_0.set(SettlPartySubIDType_9);
          SettlPtysSubGrp_NoSettlPartySubIDs_9.insert(SettlPartySubIDType_9.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_9);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_0);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // ExecAllocGrp
  // Group ExecAllocGrp.NoExecs
  {
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_1;
    FIX::ExecID ExecID_1("STRING_1378028022");
    noExecs_0_0.set(ExecID_1);
    ExecAllocGrp_NoExecs_1.insert(ExecID_1.getString());
    FIX::FirmTradeID FirmTradeID_1("STRING_693489544");
    noExecs_0_0.set(FirmTradeID_1);
    ExecAllocGrp_NoExecs_1.insert(FirmTradeID_1.getString());
    FIX::LastCapacity LastCapacity_1('2');
    noExecs_0_0.set(LastCapacity_1);
    ExecAllocGrp_NoExecs_1.insert(LastCapacity_1.getString());
    FIX::LastParPx LastParPx_1;
    LastParPx_1.setString("13603781");
    noExecs_0_0.set(LastParPx_1);
    ExecAllocGrp_NoExecs_1.insert(LastParPx_1.getString());
    FIX::LastPx LastPx_1;
    LastPx_1.setString("13864789");
    noExecs_0_0.set(LastPx_1);
    ExecAllocGrp_NoExecs_1.insert(LastPx_1.getString());
    FIX::LastQty LastQty_1;
    LastQty_1.setString("17736366");
    noExecs_0_0.set(LastQty_1);
    ExecAllocGrp_NoExecs_1.insert(LastQty_1.getString());
    FIX::SecondaryExecID SecondaryExecID_1("STRING_1330661155");
    noExecs_0_0.set(SecondaryExecID_1);
    ExecAllocGrp_NoExecs_1.insert(SecondaryExecID_1.getString());
    FIX::TradeID TradeID_1("STRING_338949478");
    noExecs_0_0.set(TradeID_1);
    ExecAllocGrp_NoExecs_1.insert(TradeID_1.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_1);
    all_compo_names.insert("ExecAllocGrp.NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_1;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_2;
    FIX::ExecID ExecID_2("STRING_446728801");
    noExecs_0_1.set(ExecID_2);
    ExecAllocGrp_NoExecs_2.insert(ExecID_2.getString());
    FIX::FirmTradeID FirmTradeID_2("STRING_441650100");
    noExecs_0_1.set(FirmTradeID_2);
    ExecAllocGrp_NoExecs_2.insert(FirmTradeID_2.getString());
    FIX::LastCapacity LastCapacity_2('3');
    noExecs_0_1.set(LastCapacity_2);
    ExecAllocGrp_NoExecs_2.insert(LastCapacity_2.getString());
    FIX::LastParPx LastParPx_2;
    LastParPx_2.setString("2273741");
    noExecs_0_1.set(LastParPx_2);
    ExecAllocGrp_NoExecs_2.insert(LastParPx_2.getString());
    FIX::LastPx LastPx_2;
    LastPx_2.setString("132537");
    noExecs_0_1.set(LastPx_2);
    ExecAllocGrp_NoExecs_2.insert(LastPx_2.getString());
    FIX::LastQty LastQty_2;
    LastQty_2.setString("3643078");
    noExecs_0_1.set(LastQty_2);
    ExecAllocGrp_NoExecs_2.insert(LastQty_2.getString());
    FIX::SecondaryExecID SecondaryExecID_2("STRING_2117608196");
    noExecs_0_1.set(SecondaryExecID_2);
    ExecAllocGrp_NoExecs_2.insert(SecondaryExecID_2.getString());
    FIX::TradeID TradeID_2("STRING_1979360039");
    noExecs_0_1.set(TradeID_2);
    ExecAllocGrp_NoExecs_2.insert(TradeID_2.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_2);
    all_compo_names.insert("ExecAllocGrp.NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_1;
  FIX::AgreementCurrency AgreementCurrency_1("GBP");
  msg.set(AgreementCurrency_1);
  FinancingDetails_1.insert(AgreementCurrency_1.getString());
  FIX::AgreementDate AgreementDate_1("LOCALMKTDATE_2099517458");
  msg.set(AgreementDate_1);
  FinancingDetails_1.insert(AgreementDate_1.getString());
  FIX::AgreementDesc AgreementDesc_1("STRING_100978940");
  msg.set(AgreementDesc_1);
  FinancingDetails_1.insert(AgreementDesc_1.getString());
  FIX::AgreementID AgreementID_1("STRING_44971548");
  msg.set(AgreementID_1);
  FinancingDetails_1.insert(AgreementID_1.getString());
  FIX::DeliveryType DeliveryType_1(1);
  msg.set(DeliveryType_1);
  FinancingDetails_1.insert(DeliveryType_1.getString());
  FIX::EndDate EndDate_1("LOCALMKTDATE_1354643127");
  msg.set(EndDate_1);
  FinancingDetails_1.insert(EndDate_1.getString());
  FIX::MarginRatio MarginRatio_1;
  MarginRatio_1.setString("68.760000");
  msg.set(MarginRatio_1);
  FinancingDetails_1.insert(MarginRatio_1.getString());
  FIX::StartDate StartDate_1("LOCALMKTDATE_2067945213");
  msg.set(StartDate_1);
  FinancingDetails_1.insert(StartDate_1.getString());
  FIX::TerminationType TerminationType_1(2);
  msg.set(TerminationType_1);
  FinancingDetails_1.insert(TerminationType_1.getString());
  all_values.push_back(FinancingDetails_1);
  all_compo_names.insert("FinancingDetails");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AllocationInstructionAlert::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_5;
    FIX::EncodedLegIssuer EncodedLegIssuer_5("DATA_122995045");
    noLegs_0_0.set(EncodedLegIssuer_5);
    InstrumentLeg_5.insert(EncodedLegIssuer_5.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_5(2129328803);
    noLegs_0_0.set(EncodedLegIssuerLen_5);
    InstrumentLeg_5.insert(EncodedLegIssuerLen_5.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_5("DATA_2092894506");
    noLegs_0_0.set(EncodedLegSecurityDesc_5);
    InstrumentLeg_5.insert(EncodedLegSecurityDesc_5.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_5(2121933068);
    noLegs_0_0.set(EncodedLegSecurityDescLen_5);
    InstrumentLeg_5.insert(EncodedLegSecurityDescLen_5.getString());
    FIX::LegCFICode LegCFICode_5("STRING_1359873177");
    noLegs_0_0.set(LegCFICode_5);
    InstrumentLeg_5.insert(LegCFICode_5.getString());
    FIX::LegContractMultiplier LegContractMultiplier_5;
    LegContractMultiplier_5.setString("6389004");
    noLegs_0_0.set(LegContractMultiplier_5);
    InstrumentLeg_5.insert(LegContractMultiplier_5.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_5(1080967485);
    noLegs_0_0.set(LegContractMultiplierUnit_5);
    InstrumentLeg_5.insert(LegContractMultiplierUnit_5.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_5("MONTHYEAR_572767632");
    noLegs_0_0.set(LegContractSettlMonth_5);
    InstrumentLeg_5.insert(LegContractSettlMonth_5.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_5("COUNTRY_2025379317");
    noLegs_0_0.set(LegCountryOfIssue_5);
    InstrumentLeg_5.insert(LegCountryOfIssue_5.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_5("LOCALMKTDATE_707120502");
    noLegs_0_0.set(LegCouponPaymentDate_5);
    InstrumentLeg_5.insert(LegCouponPaymentDate_5.getString());
    FIX::LegCouponRate LegCouponRate_5;
    LegCouponRate_5.setString("87.870000");
    noLegs_0_0.set(LegCouponRate_5);
    InstrumentLeg_5.insert(LegCouponRate_5.getString());
    FIX::LegCreditRating LegCreditRating_5("STRING_216845147");
    noLegs_0_0.set(LegCreditRating_5);
    InstrumentLeg_5.insert(LegCreditRating_5.getString());
    FIX::LegCurrency LegCurrency_5("CAN");
    noLegs_0_0.set(LegCurrency_5);
    InstrumentLeg_5.insert(LegCurrency_5.getString());
    FIX::LegDatedDate LegDatedDate_5("LOCALMKTDATE_1212972685");
    noLegs_0_0.set(LegDatedDate_5);
    InstrumentLeg_5.insert(LegDatedDate_5.getString());
    FIX::LegExerciseStyle LegExerciseStyle_5(1381223494);
    noLegs_0_0.set(LegExerciseStyle_5);
    InstrumentLeg_5.insert(LegExerciseStyle_5.getString());
    FIX::LegFactor LegFactor_5;
    LegFactor_5.setString("2108489");
    noLegs_0_0.set(LegFactor_5);
    InstrumentLeg_5.insert(LegFactor_5.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_5(1577280508);
    noLegs_0_0.set(LegFlowScheduleType_5);
    InstrumentLeg_5.insert(LegFlowScheduleType_5.getString());
    FIX::LegInstrRegistry LegInstrRegistry_5("STRING_1351348042");
    noLegs_0_0.set(LegInstrRegistry_5);
    InstrumentLeg_5.insert(LegInstrRegistry_5.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_5("LOCALMKTDATE_42725339");
    noLegs_0_0.set(LegInterestAccrualDate_5);
    InstrumentLeg_5.insert(LegInterestAccrualDate_5.getString());
    FIX::LegIssueDate LegIssueDate_5("LOCALMKTDATE_1978545772");
    noLegs_0_0.set(LegIssueDate_5);
    InstrumentLeg_5.insert(LegIssueDate_5.getString());
    FIX::LegIssuer LegIssuer_5("STRING_770486957");
    noLegs_0_0.set(LegIssuer_5);
    InstrumentLeg_5.insert(LegIssuer_5.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_5("STRING_2142242797");
    noLegs_0_0.set(LegLocaleOfIssue_5);
    InstrumentLeg_5.insert(LegLocaleOfIssue_5.getString());
    FIX::LegMaturityDate LegMaturityDate_5("LOCALMKTDATE_2079524712");
    noLegs_0_0.set(LegMaturityDate_5);
    InstrumentLeg_5.insert(LegMaturityDate_5.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_5("MONTHYEAR_815458505");
    noLegs_0_0.set(LegMaturityMonthYear_5);
    InstrumentLeg_5.insert(LegMaturityMonthYear_5.getString());
    FIX::LegMaturityTime LegMaturityTime_5("TZTIMEONLY_1004886582");
    noLegs_0_0.set(LegMaturityTime_5);
    InstrumentLeg_5.insert(LegMaturityTime_5.getString());
    FIX::LegOptAttribute LegOptAttribute_5('1');
    noLegs_0_0.set(LegOptAttribute_5);
    InstrumentLeg_5.insert(LegOptAttribute_5.getString());
    FIX::LegOptionRatio LegOptionRatio_5;
    LegOptionRatio_5.setString("2873817");
    noLegs_0_0.set(LegOptionRatio_5);
    InstrumentLeg_5.insert(LegOptionRatio_5.getString());
    FIX::LegPool LegPool_5("STRING_925348147");
    noLegs_0_0.set(LegPool_5);
    InstrumentLeg_5.insert(LegPool_5.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_5("STRING_851987828");
    noLegs_0_0.set(LegPriceUnitOfMeasure_5);
    InstrumentLeg_5.insert(LegPriceUnitOfMeasure_5.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_5;
    LegPriceUnitOfMeasureQty_5.setString("4493180");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_5);
    InstrumentLeg_5.insert(LegPriceUnitOfMeasureQty_5.getString());
    FIX::LegProduct LegProduct_5(1048343192);
    noLegs_0_0.set(LegProduct_5);
    InstrumentLeg_5.insert(LegProduct_5.getString());
    FIX::LegPutOrCall LegPutOrCall_5(833832983);
    noLegs_0_0.set(LegPutOrCall_5);
    InstrumentLeg_5.insert(LegPutOrCall_5.getString());
    FIX::LegRatioQty LegRatioQty_5;
    LegRatioQty_5.setString("3947289");
    noLegs_0_0.set(LegRatioQty_5);
    InstrumentLeg_5.insert(LegRatioQty_5.getString());
    FIX::LegRedemptionDate LegRedemptionDate_5("LOCALMKTDATE_1022792612");
    noLegs_0_0.set(LegRedemptionDate_5);
    InstrumentLeg_5.insert(LegRedemptionDate_5.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_5("STRING_46222513");
    noLegs_0_0.set(LegRepoCollateralSecurityType_5);
    InstrumentLeg_5.insert(LegRepoCollateralSecurityType_5.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_5;
    LegRepurchaseRate_5.setString("93.100000");
    noLegs_0_0.set(LegRepurchaseRate_5);
    InstrumentLeg_5.insert(LegRepurchaseRate_5.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_5(2103760097);
    noLegs_0_0.set(LegRepurchaseTerm_5);
    InstrumentLeg_5.insert(LegRepurchaseTerm_5.getString());
    FIX::LegSecurityDesc LegSecurityDesc_5("STRING_618990145");
    noLegs_0_0.set(LegSecurityDesc_5);
    InstrumentLeg_5.insert(LegSecurityDesc_5.getString());
    FIX::LegSecurityExchange LegSecurityExchange_5("EXCHANGE_911524979");
    noLegs_0_0.set(LegSecurityExchange_5);
    InstrumentLeg_5.insert(LegSecurityExchange_5.getString());
    FIX::LegSecurityID LegSecurityID_5("STRING_663396951");
    noLegs_0_0.set(LegSecurityID_5);
    InstrumentLeg_5.insert(LegSecurityID_5.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_5("STRING_374935285");
    noLegs_0_0.set(LegSecurityIDSource_5);
    InstrumentLeg_5.insert(LegSecurityIDSource_5.getString());
    FIX::LegSecuritySubType LegSecuritySubType_5("STRING_1128370127");
    noLegs_0_0.set(LegSecuritySubType_5);
    InstrumentLeg_5.insert(LegSecuritySubType_5.getString());
    FIX::LegSecurityType LegSecurityType_5("STRING_1817246254");
    noLegs_0_0.set(LegSecurityType_5);
    InstrumentLeg_5.insert(LegSecurityType_5.getString());
    FIX::LegSide LegSide_5('5');
    noLegs_0_0.set(LegSide_5);
    InstrumentLeg_5.insert(LegSide_5.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_5("STRING_193859164");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_5);
    InstrumentLeg_5.insert(LegStateOrProvinceOfIssue_5.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_5("GBP");
    noLegs_0_0.set(LegStrikeCurrency_5);
    InstrumentLeg_5.insert(LegStrikeCurrency_5.getString());
    FIX::LegStrikePrice LegStrikePrice_5;
    LegStrikePrice_5.setString("17711396");
    noLegs_0_0.set(LegStrikePrice_5);
    InstrumentLeg_5.insert(LegStrikePrice_5.getString());
    FIX::LegSymbol LegSymbol_5("STRING_254850495");
    noLegs_0_0.set(LegSymbol_5);
    InstrumentLeg_5.insert(LegSymbol_5.getString());
    FIX::LegSymbolSfx LegSymbolSfx_5("STRING_826104811");
    noLegs_0_0.set(LegSymbolSfx_5);
    InstrumentLeg_5.insert(LegSymbolSfx_5.getString());
    FIX::LegTimeUnit LegTimeUnit_5("STRING_1602201797");
    noLegs_0_0.set(LegTimeUnit_5);
    InstrumentLeg_5.insert(LegTimeUnit_5.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_5("STRING_1025337452");
    noLegs_0_0.set(LegUnitOfMeasure_5);
    InstrumentLeg_5.insert(LegUnitOfMeasure_5.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_5;
    LegUnitOfMeasureQty_5.setString("8208639");
    noLegs_0_0.set(LegUnitOfMeasureQty_5);
    InstrumentLeg_5.insert(LegUnitOfMeasureQty_5.getString());
    all_values.push_back(InstrumentLeg_5);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_12;
      FIX::LegSecurityAltID LegSecurityAltID_12("STRING_1840795958");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_12);
      LegSecAltIDGrp_NoLegSecurityAltID_12.insert(LegSecurityAltID_12.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_12("STRING_1825750542");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_12);
      LegSecAltIDGrp_NoLegSecurityAltID_12.insert(LegSecurityAltIDSource_12.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_12);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_6;
    FIX::EncodedLegIssuer EncodedLegIssuer_6("DATA_673443404");
    noLegs_0_1.set(EncodedLegIssuer_6);
    InstrumentLeg_6.insert(EncodedLegIssuer_6.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_6(2128177691);
    noLegs_0_1.set(EncodedLegIssuerLen_6);
    InstrumentLeg_6.insert(EncodedLegIssuerLen_6.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_6("DATA_603615042");
    noLegs_0_1.set(EncodedLegSecurityDesc_6);
    InstrumentLeg_6.insert(EncodedLegSecurityDesc_6.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_6(1525431232);
    noLegs_0_1.set(EncodedLegSecurityDescLen_6);
    InstrumentLeg_6.insert(EncodedLegSecurityDescLen_6.getString());
    FIX::LegCFICode LegCFICode_6("STRING_430012092");
    noLegs_0_1.set(LegCFICode_6);
    InstrumentLeg_6.insert(LegCFICode_6.getString());
    FIX::LegContractMultiplier LegContractMultiplier_6;
    LegContractMultiplier_6.setString("16519582");
    noLegs_0_1.set(LegContractMultiplier_6);
    InstrumentLeg_6.insert(LegContractMultiplier_6.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_6(211780568);
    noLegs_0_1.set(LegContractMultiplierUnit_6);
    InstrumentLeg_6.insert(LegContractMultiplierUnit_6.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_6("MONTHYEAR_824741000");
    noLegs_0_1.set(LegContractSettlMonth_6);
    InstrumentLeg_6.insert(LegContractSettlMonth_6.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_6("COUNTRY_527267199");
    noLegs_0_1.set(LegCountryOfIssue_6);
    InstrumentLeg_6.insert(LegCountryOfIssue_6.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_6("LOCALMKTDATE_258003081");
    noLegs_0_1.set(LegCouponPaymentDate_6);
    InstrumentLeg_6.insert(LegCouponPaymentDate_6.getString());
    FIX::LegCouponRate LegCouponRate_6;
    LegCouponRate_6.setString("3.100000");
    noLegs_0_1.set(LegCouponRate_6);
    InstrumentLeg_6.insert(LegCouponRate_6.getString());
    FIX::LegCreditRating LegCreditRating_6("STRING_483543648");
    noLegs_0_1.set(LegCreditRating_6);
    InstrumentLeg_6.insert(LegCreditRating_6.getString());
    FIX::LegCurrency LegCurrency_6("CHF");
    noLegs_0_1.set(LegCurrency_6);
    InstrumentLeg_6.insert(LegCurrency_6.getString());
    FIX::LegDatedDate LegDatedDate_6("LOCALMKTDATE_1146940600");
    noLegs_0_1.set(LegDatedDate_6);
    InstrumentLeg_6.insert(LegDatedDate_6.getString());
    FIX::LegExerciseStyle LegExerciseStyle_6(1251928511);
    noLegs_0_1.set(LegExerciseStyle_6);
    InstrumentLeg_6.insert(LegExerciseStyle_6.getString());
    FIX::LegFactor LegFactor_6;
    LegFactor_6.setString("17507817");
    noLegs_0_1.set(LegFactor_6);
    InstrumentLeg_6.insert(LegFactor_6.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_6(816703206);
    noLegs_0_1.set(LegFlowScheduleType_6);
    InstrumentLeg_6.insert(LegFlowScheduleType_6.getString());
    FIX::LegInstrRegistry LegInstrRegistry_6("STRING_1824459036");
    noLegs_0_1.set(LegInstrRegistry_6);
    InstrumentLeg_6.insert(LegInstrRegistry_6.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_6("LOCALMKTDATE_1944640933");
    noLegs_0_1.set(LegInterestAccrualDate_6);
    InstrumentLeg_6.insert(LegInterestAccrualDate_6.getString());
    FIX::LegIssueDate LegIssueDate_6("LOCALMKTDATE_1867689307");
    noLegs_0_1.set(LegIssueDate_6);
    InstrumentLeg_6.insert(LegIssueDate_6.getString());
    FIX::LegIssuer LegIssuer_6("STRING_460354860");
    noLegs_0_1.set(LegIssuer_6);
    InstrumentLeg_6.insert(LegIssuer_6.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_6("STRING_1568296958");
    noLegs_0_1.set(LegLocaleOfIssue_6);
    InstrumentLeg_6.insert(LegLocaleOfIssue_6.getString());
    FIX::LegMaturityDate LegMaturityDate_6("LOCALMKTDATE_2122539803");
    noLegs_0_1.set(LegMaturityDate_6);
    InstrumentLeg_6.insert(LegMaturityDate_6.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_6("MONTHYEAR_1286459671");
    noLegs_0_1.set(LegMaturityMonthYear_6);
    InstrumentLeg_6.insert(LegMaturityMonthYear_6.getString());
    FIX::LegMaturityTime LegMaturityTime_6("TZTIMEONLY_1023015107");
    noLegs_0_1.set(LegMaturityTime_6);
    InstrumentLeg_6.insert(LegMaturityTime_6.getString());
    FIX::LegOptAttribute LegOptAttribute_6('1');
    noLegs_0_1.set(LegOptAttribute_6);
    InstrumentLeg_6.insert(LegOptAttribute_6.getString());
    FIX::LegOptionRatio LegOptionRatio_6;
    LegOptionRatio_6.setString("21073236");
    noLegs_0_1.set(LegOptionRatio_6);
    InstrumentLeg_6.insert(LegOptionRatio_6.getString());
    FIX::LegPool LegPool_6("STRING_409774320");
    noLegs_0_1.set(LegPool_6);
    InstrumentLeg_6.insert(LegPool_6.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_6("STRING_693705917");
    noLegs_0_1.set(LegPriceUnitOfMeasure_6);
    InstrumentLeg_6.insert(LegPriceUnitOfMeasure_6.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_6;
    LegPriceUnitOfMeasureQty_6.setString("17855905");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_6);
    InstrumentLeg_6.insert(LegPriceUnitOfMeasureQty_6.getString());
    FIX::LegProduct LegProduct_6(1083217724);
    noLegs_0_1.set(LegProduct_6);
    InstrumentLeg_6.insert(LegProduct_6.getString());
    FIX::LegPutOrCall LegPutOrCall_6(674399961);
    noLegs_0_1.set(LegPutOrCall_6);
    InstrumentLeg_6.insert(LegPutOrCall_6.getString());
    FIX::LegRatioQty LegRatioQty_6;
    LegRatioQty_6.setString("2417219");
    noLegs_0_1.set(LegRatioQty_6);
    InstrumentLeg_6.insert(LegRatioQty_6.getString());
    FIX::LegRedemptionDate LegRedemptionDate_6("LOCALMKTDATE_461165308");
    noLegs_0_1.set(LegRedemptionDate_6);
    InstrumentLeg_6.insert(LegRedemptionDate_6.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_6("STRING_1104412053");
    noLegs_0_1.set(LegRepoCollateralSecurityType_6);
    InstrumentLeg_6.insert(LegRepoCollateralSecurityType_6.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_6;
    LegRepurchaseRate_6.setString("1.540000");
    noLegs_0_1.set(LegRepurchaseRate_6);
    InstrumentLeg_6.insert(LegRepurchaseRate_6.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_6(672945876);
    noLegs_0_1.set(LegRepurchaseTerm_6);
    InstrumentLeg_6.insert(LegRepurchaseTerm_6.getString());
    FIX::LegSecurityDesc LegSecurityDesc_6("STRING_1929153053");
    noLegs_0_1.set(LegSecurityDesc_6);
    InstrumentLeg_6.insert(LegSecurityDesc_6.getString());
    FIX::LegSecurityExchange LegSecurityExchange_6("EXCHANGE_273463705");
    noLegs_0_1.set(LegSecurityExchange_6);
    InstrumentLeg_6.insert(LegSecurityExchange_6.getString());
    FIX::LegSecurityID LegSecurityID_6("STRING_930948957");
    noLegs_0_1.set(LegSecurityID_6);
    InstrumentLeg_6.insert(LegSecurityID_6.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_6("STRING_1640039715");
    noLegs_0_1.set(LegSecurityIDSource_6);
    InstrumentLeg_6.insert(LegSecurityIDSource_6.getString());
    FIX::LegSecuritySubType LegSecuritySubType_6("STRING_757007353");
    noLegs_0_1.set(LegSecuritySubType_6);
    InstrumentLeg_6.insert(LegSecuritySubType_6.getString());
    FIX::LegSecurityType LegSecurityType_6("STRING_1807942184");
    noLegs_0_1.set(LegSecurityType_6);
    InstrumentLeg_6.insert(LegSecurityType_6.getString());
    FIX::LegSide LegSide_6('1');
    noLegs_0_1.set(LegSide_6);
    InstrumentLeg_6.insert(LegSide_6.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_6("STRING_1903947953");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_6);
    InstrumentLeg_6.insert(LegStateOrProvinceOfIssue_6.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_6("EUR");
    noLegs_0_1.set(LegStrikeCurrency_6);
    InstrumentLeg_6.insert(LegStrikeCurrency_6.getString());
    FIX::LegStrikePrice LegStrikePrice_6;
    LegStrikePrice_6.setString("5731675");
    noLegs_0_1.set(LegStrikePrice_6);
    InstrumentLeg_6.insert(LegStrikePrice_6.getString());
    FIX::LegSymbol LegSymbol_6("STRING_589362435");
    noLegs_0_1.set(LegSymbol_6);
    InstrumentLeg_6.insert(LegSymbol_6.getString());
    FIX::LegSymbolSfx LegSymbolSfx_6("STRING_1662906762");
    noLegs_0_1.set(LegSymbolSfx_6);
    InstrumentLeg_6.insert(LegSymbolSfx_6.getString());
    FIX::LegTimeUnit LegTimeUnit_6("STRING_293373171");
    noLegs_0_1.set(LegTimeUnit_6);
    InstrumentLeg_6.insert(LegTimeUnit_6.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_6("STRING_1049717295");
    noLegs_0_1.set(LegUnitOfMeasure_6);
    InstrumentLeg_6.insert(LegUnitOfMeasure_6.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_6;
    LegUnitOfMeasureQty_6.setString("10837200");
    noLegs_0_1.set(LegUnitOfMeasureQty_6);
    InstrumentLeg_6.insert(LegUnitOfMeasureQty_6.getString());
    all_values.push_back(InstrumentLeg_6);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_13;
      FIX::LegSecurityAltID LegSecurityAltID_13("STRING_188693318");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_13);
      LegSecAltIDGrp_NoLegSecurityAltID_13.insert(LegSecurityAltID_13.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_13("STRING_2106735179");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_13);
      LegSecAltIDGrp_NoLegSecurityAltID_13.insert(LegSecurityAltIDSource_13.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_13);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_7;
    FIX::EncodedLegIssuer EncodedLegIssuer_7("DATA_1268822934");
    noLegs_0_2.set(EncodedLegIssuer_7);
    InstrumentLeg_7.insert(EncodedLegIssuer_7.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_7(148533301);
    noLegs_0_2.set(EncodedLegIssuerLen_7);
    InstrumentLeg_7.insert(EncodedLegIssuerLen_7.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_7("DATA_369025851");
    noLegs_0_2.set(EncodedLegSecurityDesc_7);
    InstrumentLeg_7.insert(EncodedLegSecurityDesc_7.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_7(1962528851);
    noLegs_0_2.set(EncodedLegSecurityDescLen_7);
    InstrumentLeg_7.insert(EncodedLegSecurityDescLen_7.getString());
    FIX::LegCFICode LegCFICode_7("STRING_1934123827");
    noLegs_0_2.set(LegCFICode_7);
    InstrumentLeg_7.insert(LegCFICode_7.getString());
    FIX::LegContractMultiplier LegContractMultiplier_7;
    LegContractMultiplier_7.setString("14522435");
    noLegs_0_2.set(LegContractMultiplier_7);
    InstrumentLeg_7.insert(LegContractMultiplier_7.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_7(489445164);
    noLegs_0_2.set(LegContractMultiplierUnit_7);
    InstrumentLeg_7.insert(LegContractMultiplierUnit_7.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_7("MONTHYEAR_28362098");
    noLegs_0_2.set(LegContractSettlMonth_7);
    InstrumentLeg_7.insert(LegContractSettlMonth_7.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_7("COUNTRY_1913408884");
    noLegs_0_2.set(LegCountryOfIssue_7);
    InstrumentLeg_7.insert(LegCountryOfIssue_7.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_7("LOCALMKTDATE_1593857218");
    noLegs_0_2.set(LegCouponPaymentDate_7);
    InstrumentLeg_7.insert(LegCouponPaymentDate_7.getString());
    FIX::LegCouponRate LegCouponRate_7;
    LegCouponRate_7.setString("22.520000");
    noLegs_0_2.set(LegCouponRate_7);
    InstrumentLeg_7.insert(LegCouponRate_7.getString());
    FIX::LegCreditRating LegCreditRating_7("STRING_438871112");
    noLegs_0_2.set(LegCreditRating_7);
    InstrumentLeg_7.insert(LegCreditRating_7.getString());
    FIX::LegCurrency LegCurrency_7("EUR");
    noLegs_0_2.set(LegCurrency_7);
    InstrumentLeg_7.insert(LegCurrency_7.getString());
    FIX::LegDatedDate LegDatedDate_7("LOCALMKTDATE_1369820070");
    noLegs_0_2.set(LegDatedDate_7);
    InstrumentLeg_7.insert(LegDatedDate_7.getString());
    FIX::LegExerciseStyle LegExerciseStyle_7(868082691);
    noLegs_0_2.set(LegExerciseStyle_7);
    InstrumentLeg_7.insert(LegExerciseStyle_7.getString());
    FIX::LegFactor LegFactor_7;
    LegFactor_7.setString("8050296");
    noLegs_0_2.set(LegFactor_7);
    InstrumentLeg_7.insert(LegFactor_7.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_7(1030278606);
    noLegs_0_2.set(LegFlowScheduleType_7);
    InstrumentLeg_7.insert(LegFlowScheduleType_7.getString());
    FIX::LegInstrRegistry LegInstrRegistry_7("STRING_983050400");
    noLegs_0_2.set(LegInstrRegistry_7);
    InstrumentLeg_7.insert(LegInstrRegistry_7.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_7("LOCALMKTDATE_561493968");
    noLegs_0_2.set(LegInterestAccrualDate_7);
    InstrumentLeg_7.insert(LegInterestAccrualDate_7.getString());
    FIX::LegIssueDate LegIssueDate_7("LOCALMKTDATE_1942665653");
    noLegs_0_2.set(LegIssueDate_7);
    InstrumentLeg_7.insert(LegIssueDate_7.getString());
    FIX::LegIssuer LegIssuer_7("STRING_701316229");
    noLegs_0_2.set(LegIssuer_7);
    InstrumentLeg_7.insert(LegIssuer_7.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_7("STRING_1134661480");
    noLegs_0_2.set(LegLocaleOfIssue_7);
    InstrumentLeg_7.insert(LegLocaleOfIssue_7.getString());
    FIX::LegMaturityDate LegMaturityDate_7("LOCALMKTDATE_384544441");
    noLegs_0_2.set(LegMaturityDate_7);
    InstrumentLeg_7.insert(LegMaturityDate_7.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_7("MONTHYEAR_216739344");
    noLegs_0_2.set(LegMaturityMonthYear_7);
    InstrumentLeg_7.insert(LegMaturityMonthYear_7.getString());
    FIX::LegMaturityTime LegMaturityTime_7("TZTIMEONLY_1428034652");
    noLegs_0_2.set(LegMaturityTime_7);
    InstrumentLeg_7.insert(LegMaturityTime_7.getString());
    FIX::LegOptAttribute LegOptAttribute_7('1');
    noLegs_0_2.set(LegOptAttribute_7);
    InstrumentLeg_7.insert(LegOptAttribute_7.getString());
    FIX::LegOptionRatio LegOptionRatio_7;
    LegOptionRatio_7.setString("13004594");
    noLegs_0_2.set(LegOptionRatio_7);
    InstrumentLeg_7.insert(LegOptionRatio_7.getString());
    FIX::LegPool LegPool_7("STRING_1696463978");
    noLegs_0_2.set(LegPool_7);
    InstrumentLeg_7.insert(LegPool_7.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_7("STRING_1622955055");
    noLegs_0_2.set(LegPriceUnitOfMeasure_7);
    InstrumentLeg_7.insert(LegPriceUnitOfMeasure_7.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_7;
    LegPriceUnitOfMeasureQty_7.setString("12597109");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_7);
    InstrumentLeg_7.insert(LegPriceUnitOfMeasureQty_7.getString());
    FIX::LegProduct LegProduct_7(817803264);
    noLegs_0_2.set(LegProduct_7);
    InstrumentLeg_7.insert(LegProduct_7.getString());
    FIX::LegPutOrCall LegPutOrCall_7(1771488356);
    noLegs_0_2.set(LegPutOrCall_7);
    InstrumentLeg_7.insert(LegPutOrCall_7.getString());
    FIX::LegRatioQty LegRatioQty_7;
    LegRatioQty_7.setString("16287367");
    noLegs_0_2.set(LegRatioQty_7);
    InstrumentLeg_7.insert(LegRatioQty_7.getString());
    FIX::LegRedemptionDate LegRedemptionDate_7("LOCALMKTDATE_632848468");
    noLegs_0_2.set(LegRedemptionDate_7);
    InstrumentLeg_7.insert(LegRedemptionDate_7.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_7("STRING_1558128535");
    noLegs_0_2.set(LegRepoCollateralSecurityType_7);
    InstrumentLeg_7.insert(LegRepoCollateralSecurityType_7.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_7;
    LegRepurchaseRate_7.setString("67.270000");
    noLegs_0_2.set(LegRepurchaseRate_7);
    InstrumentLeg_7.insert(LegRepurchaseRate_7.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_7(1122293632);
    noLegs_0_2.set(LegRepurchaseTerm_7);
    InstrumentLeg_7.insert(LegRepurchaseTerm_7.getString());
    FIX::LegSecurityDesc LegSecurityDesc_7("STRING_1586490634");
    noLegs_0_2.set(LegSecurityDesc_7);
    InstrumentLeg_7.insert(LegSecurityDesc_7.getString());
    FIX::LegSecurityExchange LegSecurityExchange_7("EXCHANGE_699421963");
    noLegs_0_2.set(LegSecurityExchange_7);
    InstrumentLeg_7.insert(LegSecurityExchange_7.getString());
    FIX::LegSecurityID LegSecurityID_7("STRING_568667202");
    noLegs_0_2.set(LegSecurityID_7);
    InstrumentLeg_7.insert(LegSecurityID_7.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_7("STRING_1361049238");
    noLegs_0_2.set(LegSecurityIDSource_7);
    InstrumentLeg_7.insert(LegSecurityIDSource_7.getString());
    FIX::LegSecuritySubType LegSecuritySubType_7("STRING_1138293075");
    noLegs_0_2.set(LegSecuritySubType_7);
    InstrumentLeg_7.insert(LegSecuritySubType_7.getString());
    FIX::LegSecurityType LegSecurityType_7("STRING_1944193826");
    noLegs_0_2.set(LegSecurityType_7);
    InstrumentLeg_7.insert(LegSecurityType_7.getString());
    FIX::LegSide LegSide_7('1');
    noLegs_0_2.set(LegSide_7);
    InstrumentLeg_7.insert(LegSide_7.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_7("STRING_360629497");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_7);
    InstrumentLeg_7.insert(LegStateOrProvinceOfIssue_7.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_7("EUR");
    noLegs_0_2.set(LegStrikeCurrency_7);
    InstrumentLeg_7.insert(LegStrikeCurrency_7.getString());
    FIX::LegStrikePrice LegStrikePrice_7;
    LegStrikePrice_7.setString("13909081");
    noLegs_0_2.set(LegStrikePrice_7);
    InstrumentLeg_7.insert(LegStrikePrice_7.getString());
    FIX::LegSymbol LegSymbol_7("STRING_1647843269");
    noLegs_0_2.set(LegSymbol_7);
    InstrumentLeg_7.insert(LegSymbol_7.getString());
    FIX::LegSymbolSfx LegSymbolSfx_7("STRING_628111531");
    noLegs_0_2.set(LegSymbolSfx_7);
    InstrumentLeg_7.insert(LegSymbolSfx_7.getString());
    FIX::LegTimeUnit LegTimeUnit_7("STRING_1186090109");
    noLegs_0_2.set(LegTimeUnit_7);
    InstrumentLeg_7.insert(LegTimeUnit_7.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_7("STRING_201675850");
    noLegs_0_2.set(LegUnitOfMeasure_7);
    InstrumentLeg_7.insert(LegUnitOfMeasure_7.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_7;
    LegUnitOfMeasureQty_7.setString("17627730");
    noLegs_0_2.set(LegUnitOfMeasureQty_7);
    InstrumentLeg_7.insert(LegUnitOfMeasureQty_7.getString());
    all_values.push_back(InstrumentLeg_7);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_14;
      FIX::LegSecurityAltID LegSecurityAltID_14("STRING_418415194");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_14);
      LegSecAltIDGrp_NoLegSecurityAltID_14.insert(LegSecurityAltID_14.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_14("STRING_1043324016");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_14);
      LegSecAltIDGrp_NoLegSecurityAltID_14.insert(LegSecurityAltIDSource_14.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_14);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_3;
  FIX::AttachmentPoint AttachmentPoint_3;
  AttachmentPoint_3.setString("26.380000");
  msg.set(AttachmentPoint_3);
  Instrument_3.insert(AttachmentPoint_3.getString());
  FIX::CFICode CFICode_3("STRING_1718874611");
  msg.set(CFICode_3);
  Instrument_3.insert(CFICode_3.getString());
  FIX::CPProgram CPProgram_3(1);
  msg.set(CPProgram_3);
  Instrument_3.insert(CPProgram_3.getString());
  FIX::CPRegType CPRegType_3("STRING_332884045");
  msg.set(CPRegType_3);
  Instrument_3.insert(CPRegType_3.getString());
  FIX::CapPrice CapPrice_3;
  CapPrice_3.setString("8311019");
  msg.set(CapPrice_3);
  Instrument_3.insert(CapPrice_3.getString());
  FIX::ContractMultiplier ContractMultiplier_3;
  ContractMultiplier_3.setString("14101076");
  msg.set(ContractMultiplier_3);
  Instrument_3.insert(ContractMultiplier_3.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_3(1);
  msg.set(ContractMultiplierUnit_3);
  Instrument_3.insert(ContractMultiplierUnit_3.getString());
  FIX::ContractSettlMonth ContractSettlMonth_3("MONTHYEAR_312355062");
  msg.set(ContractSettlMonth_3);
  Instrument_3.insert(ContractSettlMonth_3.getString());
  FIX::CountryOfIssue CountryOfIssue_3("COUNTRY_2042956079");
  msg.set(CountryOfIssue_3);
  Instrument_3.insert(CountryOfIssue_3.getString());
  FIX::CouponPaymentDate CouponPaymentDate_3("LOCALMKTDATE_1515017289");
  msg.set(CouponPaymentDate_3);
  Instrument_3.insert(CouponPaymentDate_3.getString());
  FIX::CouponRate CouponRate_3;
  CouponRate_3.setString("17.890000");
  msg.set(CouponRate_3);
  Instrument_3.insert(CouponRate_3.getString());
  FIX::CreditRating CreditRating_3("STRING_1017766063");
  msg.set(CreditRating_3);
  Instrument_3.insert(CreditRating_3.getString());
  FIX::DatedDate DatedDate_3("LOCALMKTDATE_954024275");
  msg.set(DatedDate_3);
  Instrument_3.insert(DatedDate_3.getString());
  FIX::DetachmentPoint DetachmentPoint_3;
  DetachmentPoint_3.setString("37.520000");
  msg.set(DetachmentPoint_3);
  Instrument_3.insert(DetachmentPoint_3.getString());
  FIX::EncodedIssuer EncodedIssuer_3("DATA_1586433266");
  msg.set(EncodedIssuer_3);
  Instrument_3.insert(EncodedIssuer_3.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_3(167589866);
  msg.set(EncodedIssuerLen_3);
  Instrument_3.insert(EncodedIssuerLen_3.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_3("DATA_936083180");
  msg.set(EncodedSecurityDesc_3);
  Instrument_3.insert(EncodedSecurityDesc_3.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_3(1383143444);
  msg.set(EncodedSecurityDescLen_3);
  Instrument_3.insert(EncodedSecurityDescLen_3.getString());
  FIX::ExerciseStyle ExerciseStyle_3(2);
  msg.set(ExerciseStyle_3);
  Instrument_3.insert(ExerciseStyle_3.getString());
  FIX::Factor Factor_3;
  Factor_3.setString("12967126");
  msg.set(Factor_3);
  Instrument_3.insert(Factor_3.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_3(false);
  msg.set(FlexProductEligibilityIndicator_3);
  Instrument_3.insert(FlexProductEligibilityIndicator_3.getString());
  FIX::FlexibleIndicator FlexibleIndicator_3(false);
  msg.set(FlexibleIndicator_3);
  Instrument_3.insert(FlexibleIndicator_3.getString());
  FIX::FloorPrice FloorPrice_3;
  FloorPrice_3.setString("5401371");
  msg.set(FloorPrice_3);
  Instrument_3.insert(FloorPrice_3.getString());
  FIX::FlowScheduleType FlowScheduleType_3(4);
  msg.set(FlowScheduleType_3);
  Instrument_3.insert(FlowScheduleType_3.getString());
  FIX::InstrRegistry InstrRegistry_3("STRING_123906860");
  msg.set(InstrRegistry_3);
  Instrument_3.insert(InstrRegistry_3.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_3('1');
  msg.set(InstrmtAssignmentMethod_3);
  Instrument_3.insert(InstrmtAssignmentMethod_3.getString());
  FIX::InterestAccrualDate InterestAccrualDate_3("LOCALMKTDATE_1749971784");
  msg.set(InterestAccrualDate_3);
  Instrument_3.insert(InterestAccrualDate_3.getString());
  FIX::IssueDate IssueDate_3("LOCALMKTDATE_1886679872");
  msg.set(IssueDate_3);
  Instrument_3.insert(IssueDate_3.getString());
  FIX::Issuer Issuer_3("STRING_1149378144");
  msg.set(Issuer_3);
  Instrument_3.insert(Issuer_3.getString());
  FIX::ListMethod ListMethod_3(1);
  msg.set(ListMethod_3);
  Instrument_3.insert(ListMethod_3.getString());
  FIX::LocaleOfIssue LocaleOfIssue_3("STRING_782520240");
  msg.set(LocaleOfIssue_3);
  Instrument_3.insert(LocaleOfIssue_3.getString());
  FIX::MaturityDate MaturityDate_3("LOCALMKTDATE_2006790782");
  msg.set(MaturityDate_3);
  Instrument_3.insert(MaturityDate_3.getString());
  FIX::MaturityMonthYear MaturityMonthYear_3("MONTHYEAR_1739777942");
  msg.set(MaturityMonthYear_3);
  Instrument_3.insert(MaturityMonthYear_3.getString());
  FIX::MaturityTime MaturityTime_3("TZTIMEONLY_1374824587");
  msg.set(MaturityTime_3);
  Instrument_3.insert(MaturityTime_3.getString());
  FIX::MinPriceIncrement MinPriceIncrement_3;
  MinPriceIncrement_3.setString("1921911");
  msg.set(MinPriceIncrement_3);
  Instrument_3.insert(MinPriceIncrement_3.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_3;
  MinPriceIncrementAmount_3.setString("4233962");
  msg.set(MinPriceIncrementAmount_3);
  Instrument_3.insert(MinPriceIncrementAmount_3.getString());
  FIX::NTPositionLimit NTPositionLimit_3(637448550);
  msg.set(NTPositionLimit_3);
  Instrument_3.insert(NTPositionLimit_3.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_3;
  NotionalPercentageOutstanding_3.setString("99.340000");
  msg.set(NotionalPercentageOutstanding_3);
  Instrument_3.insert(NotionalPercentageOutstanding_3.getString());
  FIX::OptAttribute OptAttribute_3('7');
  msg.set(OptAttribute_3);
  Instrument_3.insert(OptAttribute_3.getString());
  FIX::OptPayoutAmount OptPayoutAmount_3;
  OptPayoutAmount_3.setString("5329209");
  msg.set(OptPayoutAmount_3);
  Instrument_3.insert(OptPayoutAmount_3.getString());
  FIX::OptPayoutType OptPayoutType_3(2);
  msg.set(OptPayoutType_3);
  Instrument_3.insert(OptPayoutType_3.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_3;
  OriginalNotionalPercentageOutstanding_3.setString("30.570000");
  msg.set(OriginalNotionalPercentageOutstanding_3);
  Instrument_3.insert(OriginalNotionalPercentageOutstanding_3.getString());
  FIX::Pool Pool_3("STRING_1550687044");
  msg.set(Pool_3);
  Instrument_3.insert(Pool_3.getString());
  FIX::PositionLimit PositionLimit_3(470637851);
  msg.set(PositionLimit_3);
  Instrument_3.insert(PositionLimit_3.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_3("STRING_INX");
  msg.set(PriceQuoteMethod_3);
  Instrument_3.insert(PriceQuoteMethod_3.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_3("STRING_989636662");
  msg.set(PriceUnitOfMeasure_3);
  Instrument_3.insert(PriceUnitOfMeasure_3.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_3;
  PriceUnitOfMeasureQty_3.setString("6382277");
  msg.set(PriceUnitOfMeasureQty_3);
  Instrument_3.insert(PriceUnitOfMeasureQty_3.getString());
  FIX::Product Product_4(9);
  msg.set(Product_4);
  Instrument_3.insert(Product_4.getString());
  FIX::ProductComplex ProductComplex_3("STRING_225296458");
  msg.set(ProductComplex_3);
  Instrument_3.insert(ProductComplex_3.getString());
  FIX::PutOrCall PutOrCall_3(1);
  msg.set(PutOrCall_3);
  Instrument_3.insert(PutOrCall_3.getString());
  FIX::RedemptionDate RedemptionDate_3("LOCALMKTDATE_1864705371");
  msg.set(RedemptionDate_3);
  Instrument_3.insert(RedemptionDate_3.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_3("STRING_125749123");
  msg.set(RepoCollateralSecurityType_3);
  Instrument_3.insert(RepoCollateralSecurityType_3.getString());
  FIX::RepurchaseRate RepurchaseRate_3;
  RepurchaseRate_3.setString("44.600000");
  msg.set(RepurchaseRate_3);
  Instrument_3.insert(RepurchaseRate_3.getString());
  FIX::RepurchaseTerm RepurchaseTerm_3(257358856);
  msg.set(RepurchaseTerm_3);
  Instrument_3.insert(RepurchaseTerm_3.getString());
  FIX::RestructuringType RestructuringType_3("STRING_MR");
  msg.set(RestructuringType_3);
  Instrument_3.insert(RestructuringType_3.getString());
  FIX::SecurityDesc SecurityDesc_3("STRING_1834591320");
  msg.set(SecurityDesc_3);
  Instrument_3.insert(SecurityDesc_3.getString());
  FIX::SecurityExchange SecurityExchange_3("EXCHANGE_1983586098");
  msg.set(SecurityExchange_3);
  Instrument_3.insert(SecurityExchange_3.getString());
  FIX::SecurityGroup SecurityGroup_3("STRING_1276533194");
  msg.set(SecurityGroup_3);
  Instrument_3.insert(SecurityGroup_3.getString());
  FIX::SecurityID SecurityID_3("STRING_1573787545");
  msg.set(SecurityID_3);
  Instrument_3.insert(SecurityID_3.getString());
  FIX::SecurityIDSource SecurityIDSource_3("STRING_B");
  msg.set(SecurityIDSource_3);
  Instrument_3.insert(SecurityIDSource_3.getString());
  FIX::SecurityStatus SecurityStatus_3("STRING_2");
  msg.set(SecurityStatus_3);
  Instrument_3.insert(SecurityStatus_3.getString());
  FIX::SecuritySubType SecuritySubType_3("STRING_208824137");
  msg.set(SecuritySubType_3);
  Instrument_3.insert(SecuritySubType_3.getString());
  FIX::SecurityType SecurityType_4("STRING_FADN");
  msg.set(SecurityType_4);
  Instrument_3.insert(SecurityType_4.getString());
  FIX::Seniority Seniority_3("STRING_SB");
  msg.set(Seniority_3);
  Instrument_3.insert(Seniority_3.getString());
  FIX::SettlMethod SettlMethod_3('C');
  msg.set(SettlMethod_3);
  Instrument_3.insert(SettlMethod_3.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_3("STRING_1036978908");
  msg.set(SettleOnOpenFlag_3);
  Instrument_3.insert(SettleOnOpenFlag_3.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_3("STRING_1313127024");
  msg.set(StateOrProvinceOfIssue_3);
  Instrument_3.insert(StateOrProvinceOfIssue_3.getString());
  FIX::StrikeCurrency StrikeCurrency_3("JPY");
  msg.set(StrikeCurrency_3);
  Instrument_3.insert(StrikeCurrency_3.getString());
  FIX::StrikeMultiplier StrikeMultiplier_3;
  StrikeMultiplier_3.setString("20488782");
  msg.set(StrikeMultiplier_3);
  Instrument_3.insert(StrikeMultiplier_3.getString());
  FIX::StrikePrice StrikePrice_3;
  StrikePrice_3.setString("6065346");
  msg.set(StrikePrice_3);
  Instrument_3.insert(StrikePrice_3.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_3(4);
  msg.set(StrikePriceBoundaryMethod_3);
  Instrument_3.insert(StrikePriceBoundaryMethod_3.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_3;
  StrikePriceBoundaryPrecision_3.setString("77.000000");
  msg.set(StrikePriceBoundaryPrecision_3);
  Instrument_3.insert(StrikePriceBoundaryPrecision_3.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_3(1);
  msg.set(StrikePriceDeterminationMethod_3);
  Instrument_3.insert(StrikePriceDeterminationMethod_3.getString());
  FIX::StrikeValue StrikeValue_3;
  StrikeValue_3.setString("11733102");
  msg.set(StrikeValue_3);
  Instrument_3.insert(StrikeValue_3.getString());
  FIX::Symbol Symbol_3("STRING_1514907214");
  msg.set(Symbol_3);
  Instrument_3.insert(Symbol_3.getString());
  FIX::SymbolSfx SymbolSfx_3("STRING_CD");
  msg.set(SymbolSfx_3);
  Instrument_3.insert(SymbolSfx_3.getString());
  FIX::TimeUnit TimeUnit_3("STRING_Yr");
  msg.set(TimeUnit_3);
  Instrument_3.insert(TimeUnit_3.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_3(4);
  msg.set(UnderlyingPriceDeterminationMethod_3);
  Instrument_3.insert(UnderlyingPriceDeterminationMethod_3.getString());
  FIX::UnitOfMeasure UnitOfMeasure_3("STRING_MMBtu");
  msg.set(UnitOfMeasure_3);
  Instrument_3.insert(UnitOfMeasure_3.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_3;
  UnitOfMeasureQty_3.setString("18789434");
  msg.set(UnitOfMeasureQty_3);
  Instrument_3.insert(UnitOfMeasureQty_3.getString());
  FIX::ValuationMethod ValuationMethod_3("STRING_EQTY");
  msg.set(ValuationMethod_3);
  Instrument_3.insert(ValuationMethod_3.getString());
  all_values.push_back(Instrument_3);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationInstructionAlert::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_7;
    FIX::ComplexEventCondition ComplexEventCondition_7(2);
    noComplexEvents_0_0.set(ComplexEventCondition_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventCondition_7.getString());
    FIX::ComplexEventPrice ComplexEventPrice_7;
    ComplexEventPrice_7.setString("20574804");
    noComplexEvents_0_0.set(ComplexEventPrice_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPrice_7.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_7(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPriceBoundaryMethod_7.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_7;
    ComplexEventPriceBoundaryPrecision_7.setString("19.530000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPriceBoundaryPrecision_7.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_7(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPriceTimeType_7.getString());
    FIX::ComplexEventType ComplexEventType_7(8);
    noComplexEvents_0_0.set(ComplexEventType_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventType_7.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_7;
    ComplexOptPayoutAmount_7.setString("5555558");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexOptPayoutAmount_7.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_7);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_18;
      FIX::ComplexEventEndDate ComplexEventEndDate_18(FIX::UTCTIMESTAMP(4, 31, 0, 20, 12, 2000));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_18);
      ComplexEventDates_NoComplexEventDates_18.insert(ComplexEventEndDate_18.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_18(FIX::UTCTIMESTAMP(10, 47, 38, 0, 5, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_18);
      ComplexEventDates_NoComplexEventDates_18.insert(ComplexEventStartDate_18.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_18);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_34;
        FIX::ComplexEventEndTime ComplexEventEndTime_34(FIX::UTCTIMEONLY(9, 11, 25));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_34);
        ComplexEventTimes_NoComplexEventTimes_34.insert(ComplexEventEndTime_34.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_34(FIX::UTCTIMEONLY(8, 36, 26));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_34);
        ComplexEventTimes_NoComplexEventTimes_34.insert(ComplexEventStartTime_34.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_34);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_19;
      FIX::ComplexEventEndDate ComplexEventEndDate_19(FIX::UTCTIMESTAMP(18, 24, 18, 15, 5, 2005));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_19);
      ComplexEventDates_NoComplexEventDates_19.insert(ComplexEventEndDate_19.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_19(FIX::UTCTIMESTAMP(5, 49, 48, 5, 10, 2004));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_19);
      ComplexEventDates_NoComplexEventDates_19.insert(ComplexEventStartDate_19.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_19);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_35;
        FIX::ComplexEventEndTime ComplexEventEndTime_35(FIX::UTCTIMEONLY(2, 33, 43));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_35);
        ComplexEventTimes_NoComplexEventTimes_35.insert(ComplexEventEndTime_35.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_35(FIX::UTCTIMEONLY(1, 17, 15));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_35);
        ComplexEventTimes_NoComplexEventTimes_35.insert(ComplexEventStartTime_35.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_35);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_36;
        FIX::ComplexEventEndTime ComplexEventEndTime_36(FIX::UTCTIMEONLY(6, 18, 36));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_36);
        ComplexEventTimes_NoComplexEventTimes_36.insert(ComplexEventEndTime_36.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_36(FIX::UTCTIMEONLY(2, 4, 11));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_36);
        ComplexEventTimes_NoComplexEventTimes_36.insert(ComplexEventStartTime_36.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_36);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_37;
        FIX::ComplexEventEndTime ComplexEventEndTime_37(FIX::UTCTIMEONLY(15, 27, 25));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_37);
        ComplexEventTimes_NoComplexEventTimes_37.insert(ComplexEventEndTime_37.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_37(FIX::UTCTIMEONLY(8, 54, 31));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_37);
        ComplexEventTimes_NoComplexEventTimes_37.insert(ComplexEventStartTime_37.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_37);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_20;
      FIX::ComplexEventEndDate ComplexEventEndDate_20(FIX::UTCTIMESTAMP(11, 12, 55, 13, 5, 2004));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_20);
      ComplexEventDates_NoComplexEventDates_20.insert(ComplexEventEndDate_20.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_20(FIX::UTCTIMESTAMP(10, 13, 48, 12, 7, 2006));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_20);
      ComplexEventDates_NoComplexEventDates_20.insert(ComplexEventStartDate_20.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_20);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_38;
        FIX::ComplexEventEndTime ComplexEventEndTime_38(FIX::UTCTIMEONLY(12, 29, 6));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_38);
        ComplexEventTimes_NoComplexEventTimes_38.insert(ComplexEventEndTime_38.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_38(FIX::UTCTIMEONLY(11, 10, 4));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_38);
        ComplexEventTimes_NoComplexEventTimes_38.insert(ComplexEventStartTime_38.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_38);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_39;
        FIX::ComplexEventEndTime ComplexEventEndTime_39(FIX::UTCTIMEONLY(1, 31, 51));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_39);
        ComplexEventTimes_NoComplexEventTimes_39.insert(ComplexEventEndTime_39.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_39(FIX::UTCTIMEONLY(15, 38, 31));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_39);
        ComplexEventTimes_NoComplexEventTimes_39.insert(ComplexEventStartTime_39.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_39);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_40;
        FIX::ComplexEventEndTime ComplexEventEndTime_40(FIX::UTCTIMEONLY(1, 35, 32));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_40);
        ComplexEventTimes_NoComplexEventTimes_40.insert(ComplexEventEndTime_40.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_40(FIX::UTCTIMEONLY(19, 12, 28));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_40);
        ComplexEventTimes_NoComplexEventTimes_40.insert(ComplexEventStartTime_40.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_40);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_8;
    FIX::ComplexEventCondition ComplexEventCondition_8(2);
    noComplexEvents_0_1.set(ComplexEventCondition_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventCondition_8.getString());
    FIX::ComplexEventPrice ComplexEventPrice_8;
    ComplexEventPrice_8.setString("15963250");
    noComplexEvents_0_1.set(ComplexEventPrice_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPrice_8.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_8(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPriceBoundaryMethod_8.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_8;
    ComplexEventPriceBoundaryPrecision_8.setString("33.010000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPriceBoundaryPrecision_8.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_8(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPriceTimeType_8.getString());
    FIX::ComplexEventType ComplexEventType_8(3);
    noComplexEvents_0_1.set(ComplexEventType_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventType_8.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_8;
    ComplexOptPayoutAmount_8.setString("17723237");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexOptPayoutAmount_8.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_8);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_21;
      FIX::ComplexEventEndDate ComplexEventEndDate_21(FIX::UTCTIMESTAMP(13, 56, 32, 12, 11, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_21);
      ComplexEventDates_NoComplexEventDates_21.insert(ComplexEventEndDate_21.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_21(FIX::UTCTIMESTAMP(4, 59, 33, 3, 4, 2015));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_21);
      ComplexEventDates_NoComplexEventDates_21.insert(ComplexEventStartDate_21.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_21);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_41;
        FIX::ComplexEventEndTime ComplexEventEndTime_41(FIX::UTCTIMEONLY(17, 49, 36));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_41);
        ComplexEventTimes_NoComplexEventTimes_41.insert(ComplexEventEndTime_41.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_41(FIX::UTCTIMEONLY(0, 40, 59));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_41);
        ComplexEventTimes_NoComplexEventTimes_41.insert(ComplexEventStartTime_41.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_41);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_42;
        FIX::ComplexEventEndTime ComplexEventEndTime_42(FIX::UTCTIMEONLY(2, 8, 30));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_42);
        ComplexEventTimes_NoComplexEventTimes_42.insert(ComplexEventEndTime_42.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_42(FIX::UTCTIMEONLY(14, 14, 9));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_42);
        ComplexEventTimes_NoComplexEventTimes_42.insert(ComplexEventStartTime_42.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_42);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_43;
        FIX::ComplexEventEndTime ComplexEventEndTime_43(FIX::UTCTIMEONLY(3, 57, 1));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_43);
        ComplexEventTimes_NoComplexEventTimes_43.insert(ComplexEventEndTime_43.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_43(FIX::UTCTIMEONLY(11, 29, 33));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_43);
        ComplexEventTimes_NoComplexEventTimes_43.insert(ComplexEventStartTime_43.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_43);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_22;
      FIX::ComplexEventEndDate ComplexEventEndDate_22(FIX::UTCTIMESTAMP(5, 59, 23, 12, 3, 2001));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_22);
      ComplexEventDates_NoComplexEventDates_22.insert(ComplexEventEndDate_22.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_22(FIX::UTCTIMESTAMP(11, 19, 20, 7, 12, 2006));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_22);
      ComplexEventDates_NoComplexEventDates_22.insert(ComplexEventStartDate_22.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_22);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_44;
        FIX::ComplexEventEndTime ComplexEventEndTime_44(FIX::UTCTIMEONLY(3, 34, 43));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_44);
        ComplexEventTimes_NoComplexEventTimes_44.insert(ComplexEventEndTime_44.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_44(FIX::UTCTIMEONLY(17, 58, 11));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_44);
        ComplexEventTimes_NoComplexEventTimes_44.insert(ComplexEventStartTime_44.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_44);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_45;
        FIX::ComplexEventEndTime ComplexEventEndTime_45(FIX::UTCTIMEONLY(17, 0, 20));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_45);
        ComplexEventTimes_NoComplexEventTimes_45.insert(ComplexEventEndTime_45.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_45(FIX::UTCTIMEONLY(15, 41, 26));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_45);
        ComplexEventTimes_NoComplexEventTimes_45.insert(ComplexEventStartTime_45.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_45);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_23;
      FIX::ComplexEventEndDate ComplexEventEndDate_23(FIX::UTCTIMESTAMP(10, 25, 26, 14, 9, 2015));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_23);
      ComplexEventDates_NoComplexEventDates_23.insert(ComplexEventEndDate_23.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_23(FIX::UTCTIMESTAMP(7, 14, 2, 14, 3, 2013));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_23);
      ComplexEventDates_NoComplexEventDates_23.insert(ComplexEventStartDate_23.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_23);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_46;
        FIX::ComplexEventEndTime ComplexEventEndTime_46(FIX::UTCTIMEONLY(10, 15, 26));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_46);
        ComplexEventTimes_NoComplexEventTimes_46.insert(ComplexEventEndTime_46.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_46(FIX::UTCTIMEONLY(8, 16, 43));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_46);
        ComplexEventTimes_NoComplexEventTimes_46.insert(ComplexEventStartTime_46.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_46);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_47;
        FIX::ComplexEventEndTime ComplexEventEndTime_47(FIX::UTCTIMEONLY(10, 43, 27));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_47);
        ComplexEventTimes_NoComplexEventTimes_47.insert(ComplexEventEndTime_47.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_47(FIX::UTCTIMEONLY(10, 8, 1));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_47);
        ComplexEventTimes_NoComplexEventTimes_47.insert(ComplexEventStartTime_47.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_47);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_48;
        FIX::ComplexEventEndTime ComplexEventEndTime_48(FIX::UTCTIMEONLY(11, 19, 51));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_48);
        ComplexEventTimes_NoComplexEventTimes_48.insert(ComplexEventEndTime_48.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_48(FIX::UTCTIMEONLY(3, 47, 44));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_48);
        ComplexEventTimes_NoComplexEventTimes_48.insert(ComplexEventStartTime_48.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_48);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_9;
    FIX::ComplexEventCondition ComplexEventCondition_9(1);
    noComplexEvents_0_2.set(ComplexEventCondition_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventCondition_9.getString());
    FIX::ComplexEventPrice ComplexEventPrice_9;
    ComplexEventPrice_9.setString("17067498");
    noComplexEvents_0_2.set(ComplexEventPrice_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPrice_9.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_9(2);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPriceBoundaryMethod_9.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_9;
    ComplexEventPriceBoundaryPrecision_9.setString("42.370000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPriceBoundaryPrecision_9.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_9(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPriceTimeType_9.getString());
    FIX::ComplexEventType ComplexEventType_9(4);
    noComplexEvents_0_2.set(ComplexEventType_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventType_9.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_9;
    ComplexOptPayoutAmount_9.setString("19124946");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexOptPayoutAmount_9.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_9);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_24;
      FIX::ComplexEventEndDate ComplexEventEndDate_24(FIX::UTCTIMESTAMP(17, 33, 59, 22, 2, 2016));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_24);
      ComplexEventDates_NoComplexEventDates_24.insert(ComplexEventEndDate_24.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_24(FIX::UTCTIMESTAMP(11, 17, 36, 6, 9, 2012));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_24);
      ComplexEventDates_NoComplexEventDates_24.insert(ComplexEventStartDate_24.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_24);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_49;
        FIX::ComplexEventEndTime ComplexEventEndTime_49(FIX::UTCTIMEONLY(11, 3, 41));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_49);
        ComplexEventTimes_NoComplexEventTimes_49.insert(ComplexEventEndTime_49.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_49(FIX::UTCTIMEONLY(10, 28, 33));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_49);
        ComplexEventTimes_NoComplexEventTimes_49.insert(ComplexEventStartTime_49.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_49);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_50;
        FIX::ComplexEventEndTime ComplexEventEndTime_50(FIX::UTCTIMEONLY(21, 11, 53));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_50);
        ComplexEventTimes_NoComplexEventTimes_50.insert(ComplexEventEndTime_50.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_50(FIX::UTCTIMEONLY(9, 43, 59));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_50);
        ComplexEventTimes_NoComplexEventTimes_50.insert(ComplexEventStartTime_50.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_50);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_25;
      FIX::ComplexEventEndDate ComplexEventEndDate_25(FIX::UTCTIMESTAMP(5, 32, 48, 27, 11, 2004));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_25);
      ComplexEventDates_NoComplexEventDates_25.insert(ComplexEventEndDate_25.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_25(FIX::UTCTIMESTAMP(13, 32, 12, 24, 9, 2012));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_25);
      ComplexEventDates_NoComplexEventDates_25.insert(ComplexEventStartDate_25.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_25);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_51;
        FIX::ComplexEventEndTime ComplexEventEndTime_51(FIX::UTCTIMEONLY(16, 7, 26));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_51);
        ComplexEventTimes_NoComplexEventTimes_51.insert(ComplexEventEndTime_51.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_51(FIX::UTCTIMEONLY(17, 54, 42));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_51);
        ComplexEventTimes_NoComplexEventTimes_51.insert(ComplexEventStartTime_51.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_51);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_26;
      FIX::ComplexEventEndDate ComplexEventEndDate_26(FIX::UTCTIMESTAMP(20, 53, 3, 1, 7, 2014));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_26);
      ComplexEventDates_NoComplexEventDates_26.insert(ComplexEventEndDate_26.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_26(FIX::UTCTIMESTAMP(15, 19, 17, 19, 7, 2015));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_26);
      ComplexEventDates_NoComplexEventDates_26.insert(ComplexEventStartDate_26.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_26);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_52;
        FIX::ComplexEventEndTime ComplexEventEndTime_52(FIX::UTCTIMEONLY(20, 1, 50));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_52);
        ComplexEventTimes_NoComplexEventTimes_52.insert(ComplexEventEndTime_52.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_52(FIX::UTCTIMEONLY(9, 31, 40));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_52);
        ComplexEventTimes_NoComplexEventTimes_52.insert(ComplexEventStartTime_52.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_52);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_53;
        FIX::ComplexEventEndTime ComplexEventEndTime_53(FIX::UTCTIMEONLY(3, 47, 9));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_53);
        ComplexEventTimes_NoComplexEventTimes_53.insert(ComplexEventEndTime_53.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_53(FIX::UTCTIMEONLY(20, 56, 50));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_53);
        ComplexEventTimes_NoComplexEventTimes_53.insert(ComplexEventStartTime_53.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_53);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_54;
        FIX::ComplexEventEndTime ComplexEventEndTime_54(FIX::UTCTIMEONLY(16, 35, 41));
        noComplexEventTimes_2_2_2_2.set(ComplexEventEndTime_54);
        ComplexEventTimes_NoComplexEventTimes_54.insert(ComplexEventEndTime_54.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_54(FIX::UTCTIMEONLY(6, 11, 41));
        noComplexEventTimes_2_2_2_2.set(ComplexEventStartTime_54);
        ComplexEventTimes_NoComplexEventTimes_54.insert(ComplexEventStartTime_54.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_54);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AllocationInstructionAlert::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_5;
    FIX::EventDate EventDate_5("LOCALMKTDATE_779682331");
    noEvents_0_0.set(EventDate_5);
    EvntGrp_NoEvents_5.insert(EventDate_5.getString());
    FIX::EventPx EventPx_5;
    EventPx_5.setString("9212653");
    noEvents_0_0.set(EventPx_5);
    EvntGrp_NoEvents_5.insert(EventPx_5.getString());
    FIX::EventText EventText_5("STRING_1744532080");
    noEvents_0_0.set(EventText_5);
    EvntGrp_NoEvents_5.insert(EventText_5.getString());
    FIX::EventTime EventTime_5(FIX::UTCTIMESTAMP(5, 9, 56, 18, 4, 2016));
    noEvents_0_0.set(EventTime_5);
    EvntGrp_NoEvents_5.insert(EventTime_5.getString());
    FIX::EventType EventType_5(7);
    noEvents_0_0.set(EventType_5);
    EvntGrp_NoEvents_5.insert(EventType_5.getString());
    all_values.push_back(EvntGrp_NoEvents_5);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_6;
    FIX::EventDate EventDate_6("LOCALMKTDATE_1416832800");
    noEvents_0_1.set(EventDate_6);
    EvntGrp_NoEvents_6.insert(EventDate_6.getString());
    FIX::EventPx EventPx_6;
    EventPx_6.setString("14590153");
    noEvents_0_1.set(EventPx_6);
    EvntGrp_NoEvents_6.insert(EventPx_6.getString());
    FIX::EventText EventText_6("STRING_706170459");
    noEvents_0_1.set(EventText_6);
    EvntGrp_NoEvents_6.insert(EventText_6.getString());
    FIX::EventTime EventTime_6(FIX::UTCTIMESTAMP(0, 18, 45, 12, 4, 2009));
    noEvents_0_1.set(EventTime_6);
    EvntGrp_NoEvents_6.insert(EventTime_6.getString());
    FIX::EventType EventType_6(3);
    noEvents_0_1.set(EventType_6);
    EvntGrp_NoEvents_6.insert(EventType_6.getString());
    all_values.push_back(EvntGrp_NoEvents_6);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_4;
    FIX::InstrumentPartyID InstrumentPartyID_4("STRING_936669929");
    noInstrumentParties_0_0.set(InstrumentPartyID_4);
    InstrumentParties_NoInstrumentParties_4.insert(InstrumentPartyID_4.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_4('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_4);
    InstrumentParties_NoInstrumentParties_4.insert(InstrumentPartyIDSource_4.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_4(826969550);
    noInstrumentParties_0_0.set(InstrumentPartyRole_4);
    InstrumentParties_NoInstrumentParties_4.insert(InstrumentPartyRole_4.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_4);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8;
      FIX::InstrumentPartySubID InstrumentPartySubID_8("STRING_1265283256");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_8);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8.insert(InstrumentPartySubID_8.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_8(879837001);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_8);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8.insert(InstrumentPartySubIDType_8.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_5;
    FIX::InstrumentPartyID InstrumentPartyID_5("STRING_1350612239");
    noInstrumentParties_0_1.set(InstrumentPartyID_5);
    InstrumentParties_NoInstrumentParties_5.insert(InstrumentPartyID_5.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_5('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_5);
    InstrumentParties_NoInstrumentParties_5.insert(InstrumentPartyIDSource_5.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_5(1659519332);
    noInstrumentParties_0_1.set(InstrumentPartyRole_5);
    InstrumentParties_NoInstrumentParties_5.insert(InstrumentPartyRole_5.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_5);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9;
      FIX::InstrumentPartySubID InstrumentPartySubID_9("STRING_1070479333");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_9);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9.insert(InstrumentPartySubID_9.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_9(693956990);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_9);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9.insert(InstrumentPartySubIDType_9.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10;
      FIX::InstrumentPartySubID InstrumentPartySubID_10("STRING_821674099");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_10);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10.insert(InstrumentPartySubID_10.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_10(891078854);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_10);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10.insert(InstrumentPartySubIDType_10.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11;
      FIX::InstrumentPartySubID InstrumentPartySubID_11("STRING_888322426");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_11);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11.insert(InstrumentPartySubID_11.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_11(100047349);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_11);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11.insert(InstrumentPartySubIDType_11.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_6;
    FIX::InstrumentPartyID InstrumentPartyID_6("STRING_1478107637");
    noInstrumentParties_0_2.set(InstrumentPartyID_6);
    InstrumentParties_NoInstrumentParties_6.insert(InstrumentPartyID_6.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_6('8');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_6);
    InstrumentParties_NoInstrumentParties_6.insert(InstrumentPartyIDSource_6.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_6(1535793596);
    noInstrumentParties_0_2.set(InstrumentPartyRole_6);
    InstrumentParties_NoInstrumentParties_6.insert(InstrumentPartyRole_6.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_6);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12;
      FIX::InstrumentPartySubID InstrumentPartySubID_12("STRING_131774546");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_12);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12.insert(InstrumentPartySubID_12.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_12(94480407);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_12);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12.insert(InstrumentPartySubIDType_12.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13;
      FIX::InstrumentPartySubID InstrumentPartySubID_13("STRING_984526845");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_13);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13.insert(InstrumentPartySubID_13.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_13(1685032226);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_13);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13.insert(InstrumentPartySubIDType_13.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationInstructionAlert::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_7;
    FIX::SecurityAltID SecurityAltID_7("STRING_845249602");
    noSecurityAltID_0_0.set(SecurityAltID_7);
    SecAltIDGrp_NoSecurityAltID_7.insert(SecurityAltID_7.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_7("STRING_437043859");
    noSecurityAltID_0_0.set(SecurityAltIDSource_7);
    SecAltIDGrp_NoSecurityAltID_7.insert(SecurityAltIDSource_7.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_7);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_6;
  FIX::SecurityXML SecurityXML_7("XMLDATA_560424504");
  msg.set(SecurityXML_7);
  FIX::SecurityXMLLen SecurityXMLLen_3(24080987);
  msg.set(SecurityXMLLen_3);
  FIX::SecurityXMLSchema SecurityXMLSchema_3("STRING_1163312221");
  msg.set(SecurityXMLSchema_3);
  SecurityXML_6.insert(SecurityXMLSchema_3.getString());
  all_values.push_back(SecurityXML_6);
  all_compo_names.insert("SecurityXML");

  // InstrumentExtension
  multiset<string> InstrumentExtension_1;
  FIX::DeliveryForm DeliveryForm_1(2);
  msg.set(DeliveryForm_1);
  InstrumentExtension_1.insert(DeliveryForm_1.getString());
  FIX::PctAtRisk PctAtRisk_1;
  PctAtRisk_1.setString("9.160000");
  msg.set(PctAtRisk_1);
  InstrumentExtension_1.insert(PctAtRisk_1.getString());
  all_values.push_back(InstrumentExtension_1);
  all_compo_names.insert("InstrumentExtension");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_1;
    FIX::InstrAttribType InstrAttribType_1(24);
    noInstrAttrib_0_0.set(InstrAttribType_1);
    AttrbGrp_NoInstrAttrib_1.insert(InstrAttribType_1.getString());
    FIX::InstrAttribValue InstrAttribValue_1("STRING_1559367394");
    noInstrAttrib_0_0.set(InstrAttribValue_1);
    AttrbGrp_NoInstrAttrib_1.insert(InstrAttribValue_1.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_1);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_2;
    FIX::InstrAttribType InstrAttribType_2(20);
    noInstrAttrib_0_1.set(InstrAttribType_2);
    AttrbGrp_NoInstrAttrib_2.insert(InstrAttribType_2.getString());
    FIX::InstrAttribValue InstrAttribValue_2("STRING_1339332925");
    noInstrAttrib_0_1.set(InstrAttribValue_2);
    AttrbGrp_NoInstrAttrib_2.insert(InstrAttribValue_2.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_2);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_3;
    FIX::InstrAttribType InstrAttribType_3(27);
    noInstrAttrib_0_2.set(InstrAttribType_3);
    AttrbGrp_NoInstrAttrib_3.insert(InstrAttribType_3.getString());
    FIX::InstrAttribValue InstrAttribValue_3("STRING_1564821660");
    noInstrAttrib_0_2.set(InstrAttribValue_3);
    AttrbGrp_NoInstrAttrib_3.insert(InstrAttribValue_3.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_3);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_2);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::AllocationInstructionAlert::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_1;
    FIX::ClOrdID ClOrdID_1("STRING_886889896");
    noOrders_0_0.set(ClOrdID_1);
    OrdAllocGrp_NoOrders_1.insert(ClOrdID_1.getString());
    FIX::ListID ListID_1("STRING_487817345");
    noOrders_0_0.set(ListID_1);
    OrdAllocGrp_NoOrders_1.insert(ListID_1.getString());
    FIX::OrderAvgPx OrderAvgPx_1;
    OrderAvgPx_1.setString("15453255");
    noOrders_0_0.set(OrderAvgPx_1);
    OrdAllocGrp_NoOrders_1.insert(OrderAvgPx_1.getString());
    FIX::OrderBookingQty OrderBookingQty_1;
    OrderBookingQty_1.setString("17085639");
    noOrders_0_0.set(OrderBookingQty_1);
    OrdAllocGrp_NoOrders_1.insert(OrderBookingQty_1.getString());
    FIX::OrderID OrderID_1("STRING_1378896200");
    noOrders_0_0.set(OrderID_1);
    OrdAllocGrp_NoOrders_1.insert(OrderID_1.getString());
    FIX::OrderQty OrderQty_1;
    OrderQty_1.setString("2861643");
    noOrders_0_0.set(OrderQty_1);
    OrdAllocGrp_NoOrders_1.insert(OrderQty_1.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_1("STRING_1808611345");
    noOrders_0_0.set(SecondaryClOrdID_1);
    OrdAllocGrp_NoOrders_1.insert(SecondaryClOrdID_1.getString());
    FIX::SecondaryOrderID SecondaryOrderID_1("STRING_709520189");
    noOrders_0_0.set(SecondaryOrderID_1);
    OrdAllocGrp_NoOrders_1.insert(SecondaryOrderID_1.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_1);
    all_compo_names.insert("OrdAllocGrp.NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_3;
      FIX::Nested2PartyID Nested2PartyID_3("STRING_1196921293");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_3);
      NestedParties2_NoNested2PartyIDs_3.insert(Nested2PartyID_3.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_3('1');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_3);
      NestedParties2_NoNested2PartyIDs_3.insert(Nested2PartyIDSource_3.getString());
      FIX::Nested2PartyRole Nested2PartyRole_3(1238181728);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_3);
      NestedParties2_NoNested2PartyIDs_3.insert(Nested2PartyRole_3.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_3);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_6;
        FIX::Nested2PartySubID Nested2PartySubID_6("STRING_294020177");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_6);
        NstdPtys2SubGrp_NoNested2PartySubIDs_6.insert(Nested2PartySubID_6.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_6(775730306);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_6);
        NstdPtys2SubGrp_NoNested2PartySubIDs_6.insert(Nested2PartySubIDType_6.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_6);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_7;
        FIX::Nested2PartySubID Nested2PartySubID_7("STRING_1592738665");
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubID_7);
        NstdPtys2SubGrp_NoNested2PartySubIDs_7.insert(Nested2PartySubID_7.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_7(1139269779);
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubIDType_7);
        NstdPtys2SubGrp_NoNested2PartySubIDs_7.insert(Nested2PartySubIDType_7.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_7);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_2;
    FIX::ClOrdID ClOrdID_2("STRING_1212774165");
    noOrders_0_1.set(ClOrdID_2);
    OrdAllocGrp_NoOrders_2.insert(ClOrdID_2.getString());
    FIX::ListID ListID_2("STRING_5679522");
    noOrders_0_1.set(ListID_2);
    OrdAllocGrp_NoOrders_2.insert(ListID_2.getString());
    FIX::OrderAvgPx OrderAvgPx_2;
    OrderAvgPx_2.setString("11633507");
    noOrders_0_1.set(OrderAvgPx_2);
    OrdAllocGrp_NoOrders_2.insert(OrderAvgPx_2.getString());
    FIX::OrderBookingQty OrderBookingQty_2;
    OrderBookingQty_2.setString("2286027");
    noOrders_0_1.set(OrderBookingQty_2);
    OrdAllocGrp_NoOrders_2.insert(OrderBookingQty_2.getString());
    FIX::OrderID OrderID_2("STRING_1785689543");
    noOrders_0_1.set(OrderID_2);
    OrdAllocGrp_NoOrders_2.insert(OrderID_2.getString());
    FIX::OrderQty OrderQty_2;
    OrderQty_2.setString("21241016");
    noOrders_0_1.set(OrderQty_2);
    OrdAllocGrp_NoOrders_2.insert(OrderQty_2.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_2("STRING_1202193890");
    noOrders_0_1.set(SecondaryClOrdID_2);
    OrdAllocGrp_NoOrders_2.insert(SecondaryClOrdID_2.getString());
    FIX::SecondaryOrderID SecondaryOrderID_2("STRING_97701819");
    noOrders_0_1.set(SecondaryOrderID_2);
    OrdAllocGrp_NoOrders_2.insert(SecondaryOrderID_2.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_2);
    all_compo_names.insert("OrdAllocGrp.NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_4;
      FIX::Nested2PartyID Nested2PartyID_4("STRING_1293584650");
      noNested2PartyIDs_1_1_0.set(Nested2PartyID_4);
      NestedParties2_NoNested2PartyIDs_4.insert(Nested2PartyID_4.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_4('1');
      noNested2PartyIDs_1_1_0.set(Nested2PartyIDSource_4);
      NestedParties2_NoNested2PartyIDs_4.insert(Nested2PartyIDSource_4.getString());
      FIX::Nested2PartyRole Nested2PartyRole_4(150997768);
      noNested2PartyIDs_1_1_0.set(Nested2PartyRole_4);
      NestedParties2_NoNested2PartyIDs_4.insert(Nested2PartyRole_4.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_4);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_8;
        FIX::Nested2PartySubID Nested2PartySubID_8("STRING_140919705");
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubID_8);
        NstdPtys2SubGrp_NoNested2PartySubIDs_8.insert(Nested2PartySubID_8.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_8(1037887664);
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubIDType_8);
        NstdPtys2SubGrp_NoNested2PartySubIDs_8.insert(Nested2PartySubIDType_8.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_8);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_9;
        FIX::Nested2PartySubID Nested2PartySubID_9("STRING_1198740008");
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubID_9);
        NstdPtys2SubGrp_NoNested2PartySubIDs_9.insert(Nested2PartySubID_9.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_9(1686245305);
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubIDType_9);
        NstdPtys2SubGrp_NoNested2PartySubIDs_9.insert(Nested2PartySubIDType_9.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_9);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_10;
        FIX::Nested2PartySubID Nested2PartySubID_10("STRING_598968011");
        noNested2PartySubIDs_1_0_2_2.set(Nested2PartySubID_10);
        NstdPtys2SubGrp_NoNested2PartySubIDs_10.insert(Nested2PartySubID_10.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_10(430152560);
        noNested2PartySubIDs_1_0_2_2.set(Nested2PartySubIDType_10);
        NstdPtys2SubGrp_NoNested2PartySubIDs_10.insert(Nested2PartySubIDType_10.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_10);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_2);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_5;
      FIX::Nested2PartyID Nested2PartyID_5("STRING_1972409682");
      noNested2PartyIDs_1_1_1.set(Nested2PartyID_5);
      NestedParties2_NoNested2PartyIDs_5.insert(Nested2PartyID_5.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_5('2');
      noNested2PartyIDs_1_1_1.set(Nested2PartyIDSource_5);
      NestedParties2_NoNested2PartyIDs_5.insert(Nested2PartyIDSource_5.getString());
      FIX::Nested2PartyRole Nested2PartyRole_5(1139672749);
      noNested2PartyIDs_1_1_1.set(Nested2PartyRole_5);
      NestedParties2_NoNested2PartyIDs_5.insert(Nested2PartyRole_5.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_5);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_11;
        FIX::Nested2PartySubID Nested2PartySubID_11("STRING_1457017001");
        noNested2PartySubIDs_1_1_2_0.set(Nested2PartySubID_11);
        NstdPtys2SubGrp_NoNested2PartySubIDs_11.insert(Nested2PartySubID_11.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_11(449166081);
        noNested2PartySubIDs_1_1_2_0.set(Nested2PartySubIDType_11);
        NstdPtys2SubGrp_NoNested2PartySubIDs_11.insert(Nested2PartySubIDType_11.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_11);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_1.addGroup(noNested2PartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_12;
        FIX::Nested2PartySubID Nested2PartySubID_12("STRING_22031296");
        noNested2PartySubIDs_1_1_2_1.set(Nested2PartySubID_12);
        NstdPtys2SubGrp_NoNested2PartySubIDs_12.insert(Nested2PartySubID_12.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_12(600935053);
        noNested2PartySubIDs_1_1_2_1.set(Nested2PartySubIDType_12);
        NstdPtys2SubGrp_NoNested2PartySubIDs_12.insert(Nested2PartySubIDType_12.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_12);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_1.addGroup(noNested2PartySubIDs_1_1_2_1);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_1);
    }
    msg.addGroup(noOrders_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationInstructionAlert::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_6;
    FIX::PartyID PartyID_6("STRING_797761603");
    noPartyIDs_0_0.set(PartyID_6);
    Parties_NoPartyIDs_6.insert(PartyID_6.getString());
    FIX::PartyIDSource PartyIDSource_6('7');
    noPartyIDs_0_0.set(PartyIDSource_6);
    Parties_NoPartyIDs_6.insert(PartyIDSource_6.getString());
    FIX::PartyRole PartyRole_6(79);
    noPartyIDs_0_0.set(PartyRole_6);
    Parties_NoPartyIDs_6.insert(PartyRole_6.getString());
    all_values.push_back(Parties_NoPartyIDs_6);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_15;
      FIX::PartySubID PartySubID_15("STRING_51869593");
      noPartySubIDs_0_1_0.set(PartySubID_15);
      PtysSubGrp_NoPartySubIDs_15.insert(PartySubID_15.getString());
      FIX::PartySubIDType PartySubIDType_15(28);
      noPartySubIDs_0_1_0.set(PartySubIDType_15);
      PtysSubGrp_NoPartySubIDs_15.insert(PartySubIDType_15.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_15);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_16;
      FIX::PartySubID PartySubID_16("STRING_91654859");
      noPartySubIDs_0_1_1.set(PartySubID_16);
      PtysSubGrp_NoPartySubIDs_16.insert(PartySubID_16.getString());
      FIX::PartySubIDType PartySubIDType_16(7);
      noPartySubIDs_0_1_1.set(PartySubIDType_16);
      PtysSubGrp_NoPartySubIDs_16.insert(PartySubIDType_16.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_16);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_7;
    FIX::PartyID PartyID_7("STRING_874941192");
    noPartyIDs_0_1.set(PartyID_7);
    Parties_NoPartyIDs_7.insert(PartyID_7.getString());
    FIX::PartyIDSource PartyIDSource_7('8');
    noPartyIDs_0_1.set(PartyIDSource_7);
    Parties_NoPartyIDs_7.insert(PartyIDSource_7.getString());
    FIX::PartyRole PartyRole_7(77);
    noPartyIDs_0_1.set(PartyRole_7);
    Parties_NoPartyIDs_7.insert(PartyRole_7.getString());
    all_values.push_back(Parties_NoPartyIDs_7);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_17;
      FIX::PartySubID PartySubID_17("STRING_439949752");
      noPartySubIDs_1_1_0.set(PartySubID_17);
      PtysSubGrp_NoPartySubIDs_17.insert(PartySubID_17.getString());
      FIX::PartySubIDType PartySubIDType_17(24);
      noPartySubIDs_1_1_0.set(PartySubIDType_17);
      PtysSubGrp_NoPartySubIDs_17.insert(PartySubIDType_17.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_17);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_18;
      FIX::PartySubID PartySubID_18("STRING_414440742");
      noPartySubIDs_1_1_1.set(PartySubID_18);
      PtysSubGrp_NoPartySubIDs_18.insert(PartySubID_18.getString());
      FIX::PartySubIDType PartySubIDType_18(22);
      noPartySubIDs_1_1_1.set(PartySubIDType_18);
      PtysSubGrp_NoPartySubIDs_18.insert(PartySubIDType_18.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_18);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_19;
      FIX::PartySubID PartySubID_19("STRING_1365731757");
      noPartySubIDs_1_1_2.set(PartySubID_19);
      PtysSubGrp_NoPartySubIDs_19.insert(PartySubID_19.getString());
      FIX::PartySubIDType PartySubIDType_19(24);
      noPartySubIDs_1_1_2.set(PartySubIDType_19);
      PtysSubGrp_NoPartySubIDs_19.insert(PartySubIDType_19.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_19);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_8;
    FIX::PartyID PartyID_8("STRING_202128774");
    noPartyIDs_0_2.set(PartyID_8);
    Parties_NoPartyIDs_8.insert(PartyID_8.getString());
    FIX::PartyIDSource PartyIDSource_8('8');
    noPartyIDs_0_2.set(PartyIDSource_8);
    Parties_NoPartyIDs_8.insert(PartyIDSource_8.getString());
    FIX::PartyRole PartyRole_8(39);
    noPartyIDs_0_2.set(PartyRole_8);
    Parties_NoPartyIDs_8.insert(PartyRole_8.getString());
    all_values.push_back(Parties_NoPartyIDs_8);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_20;
      FIX::PartySubID PartySubID_20("STRING_729419448");
      noPartySubIDs_2_1_0.set(PartySubID_20);
      PtysSubGrp_NoPartySubIDs_20.insert(PartySubID_20.getString());
      FIX::PartySubIDType PartySubIDType_20(20);
      noPartySubIDs_2_1_0.set(PartySubIDType_20);
      PtysSubGrp_NoPartySubIDs_20.insert(PartySubIDType_20.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_20);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_21;
      FIX::PartySubID PartySubID_21("STRING_1771954084");
      noPartySubIDs_2_1_1.set(PartySubID_21);
      PtysSubGrp_NoPartySubIDs_21.insert(PartySubID_21.getString());
      FIX::PartySubIDType PartySubIDType_21(12);
      noPartySubIDs_2_1_1.set(PartySubIDType_21);
      PtysSubGrp_NoPartySubIDs_21.insert(PartySubIDType_21.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_21);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_22;
      FIX::PartySubID PartySubID_22("STRING_1620925479");
      noPartySubIDs_2_1_2.set(PartySubID_22);
      PtysSubGrp_NoPartySubIDs_22.insert(PartySubID_22.getString());
      FIX::PartySubIDType PartySubIDType_22(21);
      noPartySubIDs_2_1_2.set(PartySubIDType_22);
      PtysSubGrp_NoPartySubIDs_22.insert(PartySubIDType_22.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_22);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
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
    PosAmt_2.setString("743768");
    noPosAmt_0_0.set(PosAmt_2);
    PositionAmountData_NoPosAmt_2.insert(PosAmt_2.getString());
    FIX::PosAmtType PosAmtType_2("STRING_CRES");
    noPosAmt_0_0.set(PosAmtType_2);
    PositionAmountData_NoPosAmt_2.insert(PosAmtType_2.getString());
    FIX::PositionCurrency PositionCurrency_2("STRING_333061916");
    noPosAmt_0_0.set(PositionCurrency_2);
    PositionAmountData_NoPosAmt_2.insert(PositionCurrency_2.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_2);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_1;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_1("JPY");
  msg.set(BenchmarkCurveCurrency_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkCurveCurrency_1.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_1("STRING_LIBOR");
  msg.set(BenchmarkCurveName_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkCurveName_1.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_1("STRING_172436549");
  msg.set(BenchmarkCurvePoint_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkCurvePoint_1.getString());
  FIX::BenchmarkPrice BenchmarkPrice_1;
  BenchmarkPrice_1.setString("14501183");
  msg.set(BenchmarkPrice_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkPrice_1.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_1(287768896);
  msg.set(BenchmarkPriceType_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkPriceType_1.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_1("STRING_2009995685");
  msg.set(BenchmarkSecurityID_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkSecurityID_1.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_1("STRING_177575865");
  msg.set(BenchmarkSecurityIDSource_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkSecurityIDSource_1.getString());
  FIX::Spread Spread_1;
  Spread_1.setString("15816176");
  msg.set(Spread_1);
  SpreadOrBenchmarkCurveData_1.insert(Spread_1.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_1);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationInstructionAlert::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_3;
    FIX::StipulationType StipulationType_3("STRING_STRUCT");
    noStipulations_0_0.set(StipulationType_3);
    Stipulations_NoStipulations_3.insert(StipulationType_3.getString());
    FIX::StipulationValue StipulationValue_3("STRING_2021567398");
    noStipulations_0_0.set(StipulationValue_3);
    Stipulations_NoStipulations_3.insert(StipulationValue_3.getString());
    all_values.push_back(Stipulations_NoStipulations_3);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_4;
    FIX::StipulationType StipulationType_4("STRING_RESTRICTED");
    noStipulations_0_1.set(StipulationType_4);
    Stipulations_NoStipulations_4.insert(StipulationType_4.getString());
    FIX::StipulationValue StipulationValue_4("STRING_855459581");
    noStipulations_0_1.set(StipulationValue_4);
    Stipulations_NoStipulations_4.insert(StipulationValue_4.getString());
    all_values.push_back(Stipulations_NoStipulations_4);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationInstructionAlert::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_4;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_4("DATA_93349505");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingIssuer_4.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_4(160304339);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingIssuerLen_4.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_4("DATA_1227084939");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingSecurityDesc_4.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_4(997842919);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingSecurityDescLen_4.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_4;
    UnderlyingAdjustedQuantity_4.setString("641171");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_4);
    UnderlyingInstrument_4.insert(UnderlyingAdjustedQuantity_4.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_4;
    UnderlyingAllocationPercent_4.setString("62.740000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_4);
    UnderlyingInstrument_4.insert(UnderlyingAllocationPercent_4.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_4;
    UnderlyingAttachmentPoint_4.setString("23.680000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_4);
    UnderlyingInstrument_4.insert(UnderlyingAttachmentPoint_4.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_4("STRING_228025586");
    noUnderlyings_0_0.set(UnderlyingCFICode_4);
    UnderlyingInstrument_4.insert(UnderlyingCFICode_4.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_4("STRING_1483836710");
    noUnderlyings_0_0.set(UnderlyingCPProgram_4);
    UnderlyingInstrument_4.insert(UnderlyingCPProgram_4.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_4("STRING_1240531385");
    noUnderlyings_0_0.set(UnderlyingCPRegType_4);
    UnderlyingInstrument_4.insert(UnderlyingCPRegType_4.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_4;
    UnderlyingCapValue_4.setString("18489510");
    noUnderlyings_0_0.set(UnderlyingCapValue_4);
    UnderlyingInstrument_4.insert(UnderlyingCapValue_4.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_4;
    UnderlyingCashAmount_4.setString("15574732");
    noUnderlyings_0_0.set(UnderlyingCashAmount_4);
    UnderlyingInstrument_4.insert(UnderlyingCashAmount_4.getString());
    FIX::UnderlyingCashType UnderlyingCashType_4("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_4);
    UnderlyingInstrument_4.insert(UnderlyingCashType_4.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_4;
    UnderlyingContractMultiplier_4.setString("19233279");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_4);
    UnderlyingInstrument_4.insert(UnderlyingContractMultiplier_4.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_4(226812354);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_4);
    UnderlyingInstrument_4.insert(UnderlyingContractMultiplierUnit_4.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_4("COUNTRY_1108893615");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_4);
    UnderlyingInstrument_4.insert(UnderlyingCountryOfIssue_4.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_4("LOCALMKTDATE_2043894907");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_4);
    UnderlyingInstrument_4.insert(UnderlyingCouponPaymentDate_4.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_4;
    UnderlyingCouponRate_4.setString("75.180000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_4);
    UnderlyingInstrument_4.insert(UnderlyingCouponRate_4.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_4("STRING_1305007652");
    noUnderlyings_0_0.set(UnderlyingCreditRating_4);
    UnderlyingInstrument_4.insert(UnderlyingCreditRating_4.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_4("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_4);
    UnderlyingInstrument_4.insert(UnderlyingCurrency_4.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_4;
    UnderlyingCurrentValue_4.setString("15927765");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_4);
    UnderlyingInstrument_4.insert(UnderlyingCurrentValue_4.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_4;
    UnderlyingDetachmentPoint_4.setString("34.930000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_4);
    UnderlyingInstrument_4.insert(UnderlyingDetachmentPoint_4.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_4;
    UnderlyingDirtyPrice_4.setString("2588180");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_4);
    UnderlyingInstrument_4.insert(UnderlyingDirtyPrice_4.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_4;
    UnderlyingEndPrice_4.setString("10269105");
    noUnderlyings_0_0.set(UnderlyingEndPrice_4);
    UnderlyingInstrument_4.insert(UnderlyingEndPrice_4.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_4;
    UnderlyingEndValue_4.setString("17291328");
    noUnderlyings_0_0.set(UnderlyingEndValue_4);
    UnderlyingInstrument_4.insert(UnderlyingEndValue_4.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_4(699836895);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_4);
    UnderlyingInstrument_4.insert(UnderlyingExerciseStyle_4.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_4;
    UnderlyingFXRate_4.setString("9009942");
    noUnderlyings_0_0.set(UnderlyingFXRate_4);
    UnderlyingInstrument_4.insert(UnderlyingFXRate_4.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_4('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_4);
    UnderlyingInstrument_4.insert(UnderlyingFXRateCalc_4.getString());
    FIX::UnderlyingFactor UnderlyingFactor_4;
    UnderlyingFactor_4.setString("15552964");
    noUnderlyings_0_0.set(UnderlyingFactor_4);
    UnderlyingInstrument_4.insert(UnderlyingFactor_4.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_4(1925950462);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_4);
    UnderlyingInstrument_4.insert(UnderlyingFlowScheduleType_4.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_4("STRING_550100092");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_4);
    UnderlyingInstrument_4.insert(UnderlyingInstrRegistry_4.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_4("LOCALMKTDATE_1715600815");
    noUnderlyings_0_0.set(UnderlyingIssueDate_4);
    UnderlyingInstrument_4.insert(UnderlyingIssueDate_4.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_4("STRING_1005551754");
    noUnderlyings_0_0.set(UnderlyingIssuer_4);
    UnderlyingInstrument_4.insert(UnderlyingIssuer_4.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_4("STRING_1547943012");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_4);
    UnderlyingInstrument_4.insert(UnderlyingLocaleOfIssue_4.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_4("LOCALMKTDATE_1779717924");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_4);
    UnderlyingInstrument_4.insert(UnderlyingMaturityDate_4.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_4("MONTHYEAR_717434380");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_4);
    UnderlyingInstrument_4.insert(UnderlyingMaturityMonthYear_4.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_4("TZTIMEONLY_1127721732");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_4);
    UnderlyingInstrument_4.insert(UnderlyingMaturityTime_4.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_4;
    UnderlyingNotionalPercentageOutstanding_4.setString("35.100000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_4);
    UnderlyingInstrument_4.insert(UnderlyingNotionalPercentageOutstanding_4.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_4('5');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_4);
    UnderlyingInstrument_4.insert(UnderlyingOptAttribute_4.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_4;
    UnderlyingOriginalNotionalPercentageOutstanding_4.setString("94.690000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_4);
    UnderlyingInstrument_4.insert(UnderlyingOriginalNotionalPercentageOutstanding_4.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_4("STRING_1709210928");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_4);
    UnderlyingInstrument_4.insert(UnderlyingPriceUnitOfMeasure_4.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_4;
    UnderlyingPriceUnitOfMeasureQty_4.setString("16112606");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_4);
    UnderlyingInstrument_4.insert(UnderlyingPriceUnitOfMeasureQty_4.getString());
    FIX::UnderlyingProduct UnderlyingProduct_4(996601167);
    noUnderlyings_0_0.set(UnderlyingProduct_4);
    UnderlyingInstrument_4.insert(UnderlyingProduct_4.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_4(1485055231);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_4);
    UnderlyingInstrument_4.insert(UnderlyingPutOrCall_4.getString());
    FIX::UnderlyingPx UnderlyingPx_4;
    UnderlyingPx_4.setString("18380730");
    noUnderlyings_0_0.set(UnderlyingPx_4);
    UnderlyingInstrument_4.insert(UnderlyingPx_4.getString());
    FIX::UnderlyingQty UnderlyingQty_4;
    UnderlyingQty_4.setString("21054947");
    noUnderlyings_0_0.set(UnderlyingQty_4);
    UnderlyingInstrument_4.insert(UnderlyingQty_4.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_4("LOCALMKTDATE_1381466490");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_4);
    UnderlyingInstrument_4.insert(UnderlyingRedemptionDate_4.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_4("STRING_469196893");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_4);
    UnderlyingInstrument_4.insert(UnderlyingRepoCollateralSecurityType_4.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_4;
    UnderlyingRepurchaseRate_4.setString("87.860000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_4);
    UnderlyingInstrument_4.insert(UnderlyingRepurchaseRate_4.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_4(1450314298);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_4);
    UnderlyingInstrument_4.insert(UnderlyingRepurchaseTerm_4.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_4("STRING_550439085");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_4);
    UnderlyingInstrument_4.insert(UnderlyingRestructuringType_4.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_4("STRING_708311687");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityDesc_4.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_4("EXCHANGE_1381674144");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityExchange_4.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_4("STRING_809257141");
    noUnderlyings_0_0.set(UnderlyingSecurityID_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityID_4.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_4("STRING_1735222234");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityIDSource_4.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_4("STRING_963323334");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_4);
    UnderlyingInstrument_4.insert(UnderlyingSecuritySubType_4.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_4("STRING_1509094037");
    noUnderlyings_0_0.set(UnderlyingSecurityType_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityType_4.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_4("STRING_488732883");
    noUnderlyings_0_0.set(UnderlyingSeniority_4);
    UnderlyingInstrument_4.insert(UnderlyingSeniority_4.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_4("STRING_1420073921");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_4);
    UnderlyingInstrument_4.insert(UnderlyingSettlMethod_4.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_4(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_4);
    UnderlyingInstrument_4.insert(UnderlyingSettlementType_4.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_4;
    UnderlyingStartValue_4.setString("2671996");
    noUnderlyings_0_0.set(UnderlyingStartValue_4);
    UnderlyingInstrument_4.insert(UnderlyingStartValue_4.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_4("STRING_1970174014");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_4);
    UnderlyingInstrument_4.insert(UnderlyingStateOrProvinceOfIssue_4.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_4("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_4);
    UnderlyingInstrument_4.insert(UnderlyingStrikeCurrency_4.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_4;
    UnderlyingStrikePrice_4.setString("13706333");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_4);
    UnderlyingInstrument_4.insert(UnderlyingStrikePrice_4.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_4("STRING_117258309");
    noUnderlyings_0_0.set(UnderlyingSymbol_4);
    UnderlyingInstrument_4.insert(UnderlyingSymbol_4.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_4("STRING_1990185832");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_4);
    UnderlyingInstrument_4.insert(UnderlyingSymbolSfx_4.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_4("STRING_350871462");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_4);
    UnderlyingInstrument_4.insert(UnderlyingTimeUnit_4.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_4("STRING_2125001819");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_4);
    UnderlyingInstrument_4.insert(UnderlyingUnitOfMeasure_4.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_4;
    UnderlyingUnitOfMeasureQty_4.setString("20439732");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_4);
    UnderlyingInstrument_4.insert(UnderlyingUnitOfMeasureQty_4.getString());
    all_values.push_back(UnderlyingInstrument_4);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_11;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_11("STRING_1686729100");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_11);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_11.insert(UnderlyingSecurityAltID_11.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_11("STRING_1507750295");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_11);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_11.insert(UnderlyingSecurityAltIDSource_11.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_11);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_6;
      FIX::UnderlyingStipType UnderlyingStipType_6("STRING_1024300683");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_6);
      UnderlyingStipulations_NoUnderlyingStips_6.insert(UnderlyingStipType_6.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_6("STRING_1198339670");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_6);
      UnderlyingStipulations_NoUnderlyingStips_6.insert(UnderlyingStipValue_6.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_6);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_8;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_8("STRING_258283526");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_8);
      UndlyInstrumentParties_NoUndlyInstrumentParties_8.insert(UnderlyingInstrumentPartyID_8.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_8('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_8);
      UndlyInstrumentParties_NoUndlyInstrumentParties_8.insert(UnderlyingInstrumentPartyIDSource_8.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_8(641788371);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_8);
      UndlyInstrumentParties_NoUndlyInstrumentParties_8.insert(UnderlyingInstrumentPartyRole_8.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_8);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_15("STRING_70492000");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_15);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15.insert(UnderlyingInstrumentPartySubID_15.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_15(1350100058);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_15);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15.insert(UnderlyingInstrumentPartySubIDType_15.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_9;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_9("STRING_942788320");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_9);
      UndlyInstrumentParties_NoUndlyInstrumentParties_9.insert(UnderlyingInstrumentPartyID_9.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_9('8');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_9);
      UndlyInstrumentParties_NoUndlyInstrumentParties_9.insert(UnderlyingInstrumentPartyIDSource_9.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_9(937838644);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_9);
      UndlyInstrumentParties_NoUndlyInstrumentParties_9.insert(UnderlyingInstrumentPartyRole_9.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_9);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_16("STRING_241359531");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_16);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16.insert(UnderlyingInstrumentPartySubID_16.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_16(1426571528);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_16);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16.insert(UnderlyingInstrumentPartySubIDType_16.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_17("STRING_1178701928");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_17);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17.insert(UnderlyingInstrumentPartySubID_17.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_17(1158266396);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_17);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17.insert(UnderlyingInstrumentPartySubIDType_17.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_18("STRING_1693771226");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_18);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18.insert(UnderlyingInstrumentPartySubID_18.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_18(1001392294);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_18);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18.insert(UnderlyingInstrumentPartySubIDType_18.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_10;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_10("STRING_1643290429");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_10);
      UndlyInstrumentParties_NoUndlyInstrumentParties_10.insert(UnderlyingInstrumentPartyID_10.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_10('8');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_10);
      UndlyInstrumentParties_NoUndlyInstrumentParties_10.insert(UnderlyingInstrumentPartyIDSource_10.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_10(224542024);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_10);
      UndlyInstrumentParties_NoUndlyInstrumentParties_10.insert(UnderlyingInstrumentPartyRole_10.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_10);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_19("STRING_661741214");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_19);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19.insert(UnderlyingInstrumentPartySubID_19.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_19(575413486);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_19);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19.insert(UnderlyingInstrumentPartySubIDType_19.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_20("STRING_1738066910");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_20);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20.insert(UnderlyingInstrumentPartySubID_20.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_20(558230840);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_20);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20.insert(UnderlyingInstrumentPartySubIDType_20.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_1;
  FIX::Yield Yield_1;
  Yield_1.setString("44.170000");
  msg.set(Yield_1);
  YieldData_1.insert(Yield_1.getString());
  FIX::YieldCalcDate YieldCalcDate_1("LOCALMKTDATE_1277312362");
  msg.set(YieldCalcDate_1);
  YieldData_1.insert(YieldCalcDate_1.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_1("LOCALMKTDATE_2065981135");
  msg.set(YieldRedemptionDate_1);
  YieldData_1.insert(YieldRedemptionDate_1.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_1;
  YieldRedemptionPrice_1.setString("5678128");
  msg.set(YieldRedemptionPrice_1);
  YieldData_1.insert(YieldRedemptionPrice_1.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_1(154129397);
  msg.set(YieldRedemptionPriceType_1);
  YieldData_1.insert(YieldRedemptionPriceType_1.getString());
  FIX::YieldType YieldType_1("STRING_PREVCLOSE");
  msg.set(YieldType_1);
  YieldData_1.insert(YieldType_1.getString());
  all_values.push_back(YieldData_1);
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
