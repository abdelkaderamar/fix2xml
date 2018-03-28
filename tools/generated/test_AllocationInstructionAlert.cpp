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
  AccruedInterestAmt_1.setString("9544014");
  msg.set(AccruedInterestAmt_1);
  AllocationInstructionAlert_0.insert(AccruedInterestAmt_1.getString());
  FIX::AccruedInterestRate AccruedInterestRate_1;
  AccruedInterestRate_1.setString("54.480000");
  msg.set(AccruedInterestRate_1);
  AllocationInstructionAlert_0.insert(AccruedInterestRate_1.getString());
  FIX::AllocCancReplaceReason AllocCancReplaceReason_1(99);
  msg.set(AllocCancReplaceReason_1);
  AllocationInstructionAlert_0.insert(AllocCancReplaceReason_1.getString());
  FIX::AllocID AllocID_2("STRING_1277162279");
  msg.set(AllocID_2);
  AllocationInstructionAlert_0.insert(AllocID_2.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_2(1);
  msg.set(AllocIntermedReqType_2);
  AllocationInstructionAlert_0.insert(AllocIntermedReqType_2.getString());
  FIX::AllocLinkID AllocLinkID_1("STRING_367912630");
  msg.set(AllocLinkID_1);
  AllocationInstructionAlert_0.insert(AllocLinkID_1.getString());
  FIX::AllocLinkType AllocLinkType_1(0);
  msg.set(AllocLinkType_1);
  AllocationInstructionAlert_0.insert(AllocLinkType_1.getString());
  FIX::AllocNoOrdersType AllocNoOrdersType_1(0);
  msg.set(AllocNoOrdersType_1);
  AllocationInstructionAlert_0.insert(AllocNoOrdersType_1.getString());
  FIX::AllocTransType AllocTransType_1('0');
  msg.set(AllocTransType_1);
  AllocationInstructionAlert_0.insert(AllocTransType_1.getString());
  FIX::AllocType AllocType_2(13);
  msg.set(AllocType_2);
  AllocationInstructionAlert_0.insert(AllocType_2.getString());
  FIX::AutoAcceptIndicator AutoAcceptIndicator_1(true);
  msg.set(AutoAcceptIndicator_1);
  AllocationInstructionAlert_0.insert(AutoAcceptIndicator_1.getString());
  FIX::AvgParPx AvgParPx_1;
  AvgParPx_1.setString("1633878");
  msg.set(AvgParPx_1);
  AllocationInstructionAlert_0.insert(AvgParPx_1.getString());
  FIX::AvgPx AvgPx_1;
  AvgPx_1.setString("4633884");
  msg.set(AvgPx_1);
  AllocationInstructionAlert_0.insert(AvgPx_1.getString());
  FIX::AvgPxIndicator AvgPxIndicator_1(0);
  msg.set(AvgPxIndicator_1);
  AllocationInstructionAlert_0.insert(AvgPxIndicator_1.getString());
  FIX::AvgPxPrecision AvgPxPrecision_1(572937226);
  msg.set(AvgPxPrecision_1);
  AllocationInstructionAlert_0.insert(AvgPxPrecision_1.getString());
  FIX::BookingRefID BookingRefID_1("STRING_1615807028");
  msg.set(BookingRefID_1);
  AllocationInstructionAlert_0.insert(BookingRefID_1.getString());
  FIX::BookingType BookingType_1(1);
  msg.set(BookingType_1);
  AllocationInstructionAlert_0.insert(BookingType_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_2("LOCALMKTDATE_705459532");
  msg.set(ClearingBusinessDate_2);
  AllocationInstructionAlert_0.insert(ClearingBusinessDate_2.getString());
  FIX::Concession Concession_1;
  Concession_1.setString("10299203");
  msg.set(Concession_1);
  AllocationInstructionAlert_0.insert(Concession_1.getString());
  FIX::Currency Currency_2("USD");
  msg.set(Currency_2);
  AllocationInstructionAlert_0.insert(Currency_2.getString());
  FIX::CustOrderCapacity CustOrderCapacity_1(4);
  msg.set(CustOrderCapacity_1);
  AllocationInstructionAlert_0.insert(CustOrderCapacity_1.getString());
  FIX::EncodedText EncodedText_3("DATA_1030070874");
  msg.set(EncodedText_3);
  AllocationInstructionAlert_0.insert(EncodedText_3.getString());
  FIX::EncodedTextLen EncodedTextLen_3(6180741);
  msg.set(EncodedTextLen_3);
  AllocationInstructionAlert_0.insert(EncodedTextLen_3.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_1;
  EndAccruedInterestAmt_1.setString("16211554");
  msg.set(EndAccruedInterestAmt_1);
  AllocationInstructionAlert_0.insert(EndAccruedInterestAmt_1.getString());
  FIX::EndCash EndCash_1;
  EndCash_1.setString("13955870");
  msg.set(EndCash_1);
  AllocationInstructionAlert_0.insert(EndCash_1.getString());
  FIX::GrossTradeAmt GrossTradeAmt_1;
  GrossTradeAmt_1.setString("15105206");
  msg.set(GrossTradeAmt_1);
  AllocationInstructionAlert_0.insert(GrossTradeAmt_1.getString());
  FIX::InterestAtMaturity InterestAtMaturity_1;
  InterestAtMaturity_1.setString("19157731");
  msg.set(InterestAtMaturity_1);
  AllocationInstructionAlert_0.insert(InterestAtMaturity_1.getString());
  FIX::LastFragment LastFragment_1(true);
  msg.set(LastFragment_1);
  AllocationInstructionAlert_0.insert(LastFragment_1.getString());
  FIX::LastMkt LastMkt_2("EXCHANGE_1738897636");
  msg.set(LastMkt_2);
  AllocationInstructionAlert_0.insert(LastMkt_2.getString());
  FIX::LegalConfirm LegalConfirm_1(true);
  msg.set(LegalConfirm_1);
  AllocationInstructionAlert_0.insert(LegalConfirm_1.getString());
  FIX::MatchType MatchType_1("STRING_S4");
  msg.set(MatchType_1);
  AllocationInstructionAlert_0.insert(MatchType_1.getString());
  FIX::MessageEventSource MessageEventSource_1("STRING_1600789436");
  msg.set(MessageEventSource_1);
  AllocationInstructionAlert_0.insert(MessageEventSource_1.getString());
  FIX::MultiLegReportingType MultiLegReportingType_1('2');
  msg.set(MultiLegReportingType_1);
  AllocationInstructionAlert_0.insert(MultiLegReportingType_1.getString());
  FIX::NetMoney NetMoney_1;
  NetMoney_1.setString("11161229");
  msg.set(NetMoney_1);
  AllocationInstructionAlert_0.insert(NetMoney_1.getString());
  FIX::NumDaysInterest NumDaysInterest_1(27080497);
  msg.set(NumDaysInterest_1);
  AllocationInstructionAlert_0.insert(NumDaysInterest_1.getString());
  FIX::PositionEffect PositionEffect_1('R');
  msg.set(PositionEffect_1);
  AllocationInstructionAlert_0.insert(PositionEffect_1.getString());
  FIX::PreviouslyReported PreviouslyReported_1(false);
  msg.set(PreviouslyReported_1);
  AllocationInstructionAlert_0.insert(PreviouslyReported_1.getString());
  FIX::PriceType PriceType_1(13);
  msg.set(PriceType_1);
  AllocationInstructionAlert_0.insert(PriceType_1.getString());
  FIX::QtyType QtyType_2(0);
  msg.set(QtyType_2);
  AllocationInstructionAlert_0.insert(QtyType_2.getString());
  FIX::Quantity Quantity_2;
  Quantity_2.setString("16986683");
  msg.set(Quantity_2);
  AllocationInstructionAlert_0.insert(Quantity_2.getString());
  FIX::RefAllocID RefAllocID_1("STRING_2034845597");
  msg.set(RefAllocID_1);
  AllocationInstructionAlert_0.insert(RefAllocID_1.getString());
  FIX::ReversalIndicator ReversalIndicator_1(true);
  msg.set(ReversalIndicator_1);
  AllocationInstructionAlert_0.insert(ReversalIndicator_1.getString());
  FIX::RndPx RndPx_1;
  RndPx_1.setString("145731");
  msg.set(RndPx_1);
  AllocationInstructionAlert_0.insert(RndPx_1.getString());
  FIX::SecondaryAllocID SecondaryAllocID_2("STRING_806542890");
  msg.set(SecondaryAllocID_2);
  AllocationInstructionAlert_0.insert(SecondaryAllocID_2.getString());
  FIX::SettlDate SettlDate_1("LOCALMKTDATE_2081511034");
  msg.set(SettlDate_1);
  AllocationInstructionAlert_0.insert(SettlDate_1.getString());
  FIX::SettlType SettlType_1("STRING_7");
  msg.set(SettlType_1);
  AllocationInstructionAlert_0.insert(SettlType_1.getString());
  FIX::Side Side_1('4');
  msg.set(Side_1);
  AllocationInstructionAlert_0.insert(Side_1.getString());
  FIX::StartCash StartCash_1;
  StartCash_1.setString("6394869");
  msg.set(StartCash_1);
  AllocationInstructionAlert_0.insert(StartCash_1.getString());
  FIX::Text Text_3("STRING_512816838");
  msg.set(Text_3);
  AllocationInstructionAlert_0.insert(Text_3.getString());
  FIX::TotNoAllocs TotNoAllocs_1(1746325352);
  msg.set(TotNoAllocs_1);
  AllocationInstructionAlert_0.insert(TotNoAllocs_1.getString());
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_1;
  TotalAccruedInterestAmt_1.setString("19763707");
  msg.set(TotalAccruedInterestAmt_1);
  AllocationInstructionAlert_0.insert(TotalAccruedInterestAmt_1.getString());
  FIX::TotalTakedown TotalTakedown_1;
  TotalTakedown_1.setString("12630781");
  msg.set(TotalTakedown_1);
  AllocationInstructionAlert_0.insert(TotalTakedown_1.getString());
  FIX::TradeDate TradeDate_3("LOCALMKTDATE_628912578");
  msg.set(TradeDate_3);
  AllocationInstructionAlert_0.insert(TradeDate_3.getString());
  FIX::TradeInputSource TradeInputSource_1("STRING_1982551467");
  msg.set(TradeInputSource_1);
  AllocationInstructionAlert_0.insert(TradeInputSource_1.getString());
  FIX::TradeOriginationDate TradeOriginationDate_1("LOCALMKTDATE_736749943");
  msg.set(TradeOriginationDate_1);
  AllocationInstructionAlert_0.insert(TradeOriginationDate_1.getString());
  FIX::TradingSessionID TradingSessionID_2("STRING_3");
  msg.set(TradingSessionID_2);
  AllocationInstructionAlert_0.insert(TradingSessionID_2.getString());
  FIX::TradingSessionSubID TradingSessionSubID_2("STRING_5");
  msg.set(TradingSessionSubID_2);
  AllocationInstructionAlert_0.insert(TradingSessionSubID_2.getString());
  FIX::TransactTime TransactTime_3(FIX::UTCTIMESTAMP(7, 1, 48, 12, 2, 2003));
  msg.set(TransactTime_3);
  AllocationInstructionAlert_0.insert(TransactTime_3.getString());
  FIX::TrdSubType TrdSubType_1(23);
  msg.set(TrdSubType_1);
  AllocationInstructionAlert_0.insert(TrdSubType_1.getString());
  FIX::TrdType TrdType_1(29);
  msg.set(TrdType_1);
  AllocationInstructionAlert_0.insert(TrdType_1.getString());
  all_values.push_back(AllocationInstructionAlert_0);

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationInstructionAlert::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_2;
    FIX::AllocAccount AllocAccount_3("STRING_775358275");
    noAllocs_0_0.set(AllocAccount_3);
    AllocGrp_NoAllocs_2.insert(AllocAccount_3.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_2;
    AllocAccruedInterestAmt_2.setString("5403826");
    noAllocs_0_0.set(AllocAccruedInterestAmt_2);
    AllocGrp_NoAllocs_2.insert(AllocAccruedInterestAmt_2.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_3(1316042584);
    noAllocs_0_0.set(AllocAcctIDSource_3);
    AllocGrp_NoAllocs_2.insert(AllocAcctIDSource_3.getString());
    FIX::AllocAvgPx AllocAvgPx_2;
    AllocAvgPx_2.setString("3265429");
    noAllocs_0_0.set(AllocAvgPx_2);
    AllocGrp_NoAllocs_2.insert(AllocAvgPx_2.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_3("STRING_427744583");
    noAllocs_0_0.set(AllocCustomerCapacity_3);
    AllocGrp_NoAllocs_2.insert(AllocCustomerCapacity_3.getString());
    FIX::AllocHandlInst AllocHandlInst_2(3);
    noAllocs_0_0.set(AllocHandlInst_2);
    AllocGrp_NoAllocs_2.insert(AllocHandlInst_2.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_2;
    AllocInterestAtMaturity_2.setString("3411160");
    noAllocs_0_0.set(AllocInterestAtMaturity_2);
    AllocGrp_NoAllocs_2.insert(AllocInterestAtMaturity_2.getString());
    FIX::AllocMethod AllocMethod_2(1);
    noAllocs_0_0.set(AllocMethod_2);
    AllocGrp_NoAllocs_2.insert(AllocMethod_2.getString());
    FIX::AllocNetMoney AllocNetMoney_2;
    AllocNetMoney_2.setString("6111601");
    noAllocs_0_0.set(AllocNetMoney_2);
    AllocGrp_NoAllocs_2.insert(AllocNetMoney_2.getString());
    FIX::AllocPositionEffect AllocPositionEffect_3('R');
    noAllocs_0_0.set(AllocPositionEffect_3);
    AllocGrp_NoAllocs_2.insert(AllocPositionEffect_3.getString());
    FIX::AllocPrice AllocPrice_3;
    AllocPrice_3.setString("15115858");
    noAllocs_0_0.set(AllocPrice_3);
    AllocGrp_NoAllocs_2.insert(AllocPrice_3.getString());
    FIX::AllocQty AllocQty_3;
    AllocQty_3.setString("12506470");
    noAllocs_0_0.set(AllocQty_3);
    AllocGrp_NoAllocs_2.insert(AllocQty_3.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_2;
    AllocSettlCurrAmt_2.setString("3368294");
    noAllocs_0_0.set(AllocSettlCurrAmt_2);
    AllocGrp_NoAllocs_2.insert(AllocSettlCurrAmt_2.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_2("GBP");
    noAllocs_0_0.set(AllocSettlCurrency_2);
    AllocGrp_NoAllocs_2.insert(AllocSettlCurrency_2.getString());
    FIX::AllocSettlInstType AllocSettlInstType_2(2);
    noAllocs_0_0.set(AllocSettlInstType_2);
    AllocGrp_NoAllocs_2.insert(AllocSettlInstType_2.getString());
    FIX::AllocText AllocText_3("STRING_1739340096");
    noAllocs_0_0.set(AllocText_3);
    AllocGrp_NoAllocs_2.insert(AllocText_3.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_2("STRING_B");
    noAllocs_0_0.set(ClearingFeeIndicator_2);
    AllocGrp_NoAllocs_2.insert(ClearingFeeIndicator_2.getString());
    FIX::EncodedAllocText EncodedAllocText_3("DATA_189173857");
    noAllocs_0_0.set(EncodedAllocText_3);
    AllocGrp_NoAllocs_2.insert(EncodedAllocText_3.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_3(1616356027);
    noAllocs_0_0.set(EncodedAllocTextLen_3);
    AllocGrp_NoAllocs_2.insert(EncodedAllocTextLen_3.getString());
    FIX::IndividualAllocID IndividualAllocID_3("STRING_112706791");
    noAllocs_0_0.set(IndividualAllocID_3);
    AllocGrp_NoAllocs_2.insert(IndividualAllocID_3.getString());
    FIX::IndividualAllocType IndividualAllocType_3(2);
    noAllocs_0_0.set(IndividualAllocType_3);
    AllocGrp_NoAllocs_2.insert(IndividualAllocType_3.getString());
    FIX::MatchStatus MatchStatus_3('0');
    noAllocs_0_0.set(MatchStatus_3);
    AllocGrp_NoAllocs_2.insert(MatchStatus_3.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_2(true);
    noAllocs_0_0.set(NotifyBrokerOfCredit_2);
    AllocGrp_NoAllocs_2.insert(NotifyBrokerOfCredit_2.getString());
    FIX::ProcessCode ProcessCode_2('3');
    noAllocs_0_0.set(ProcessCode_2);
    AllocGrp_NoAllocs_2.insert(ProcessCode_2.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_3("STRING_1125950718");
    noAllocs_0_0.set(SecondaryIndividualAllocID_3);
    AllocGrp_NoAllocs_2.insert(SecondaryIndividualAllocID_3.getString());
    FIX::SettlCurrAmt SettlCurrAmt_2;
    SettlCurrAmt_2.setString("14400175");
    noAllocs_0_0.set(SettlCurrAmt_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrAmt_2.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_2;
    SettlCurrFxRate_2.setString("18199423");
    noAllocs_0_0.set(SettlCurrFxRate_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrFxRate_2.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_2('M');
    noAllocs_0_0.set(SettlCurrFxRateCalc_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrFxRateCalc_2.getString());
    FIX::SettlCurrency SettlCurrency_2("EUR");
    noAllocs_0_0.set(SettlCurrency_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrency_2.getString());
    all_values.push_back(AllocGrp_NoAllocs_2);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_6;
      FIX::ClearingInstruction ClearingInstruction_6(8);
      noClearingInstructions_0_1_0.set(ClearingInstruction_6);
      ClrInstGrp_NoClearingInstructions_6.insert(ClearingInstruction_6.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_6);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_7;
      FIX::ClearingInstruction ClearingInstruction_7(13);
      noClearingInstructions_0_1_1.set(ClearingInstruction_7);
      ClrInstGrp_NoClearingInstructions_7.insert(ClearingInstruction_7.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_7);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_8;
      FIX::ClearingInstruction ClearingInstruction_8(11);
      noClearingInstructions_0_1_2.set(ClearingInstruction_8);
      ClrInstGrp_NoClearingInstructions_8.insert(ClearingInstruction_8.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_8);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_2;
    FIX::CommCurrency CommCurrency_2("USD");
    noAllocs_0_0.set(CommCurrency_2);
    CommissionData_2.insert(CommCurrency_2.getString());
    FIX::CommType CommType_2('1');
    noAllocs_0_0.set(CommType_2);
    CommissionData_2.insert(CommType_2.getString());
    FIX::Commission Commission_2;
    Commission_2.setString("19123373");
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
      multiset<string> MiscFeesGrp_NoMiscFees_3;
      FIX::MiscFeeAmt MiscFeeAmt_3;
      MiscFeeAmt_3.setString("12764395");
      noMiscFees_0_1_0.set(MiscFeeAmt_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeAmt_3.getString());
      FIX::MiscFeeBasis MiscFeeBasis_3(1);
      noMiscFees_0_1_0.set(MiscFeeBasis_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeBasis_3.getString());
      FIX::MiscFeeCurr MiscFeeCurr_3("EUR");
      noMiscFees_0_1_0.set(MiscFeeCurr_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeCurr_3.getString());
      FIX::MiscFeeType MiscFeeType_3("STRING_12");
      noMiscFees_0_1_0.set(MiscFeeType_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeType_3.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_3);

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_4;
      FIX::MiscFeeAmt MiscFeeAmt_4;
      MiscFeeAmt_4.setString("18988928");
      noMiscFees_0_1_1.set(MiscFeeAmt_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeAmt_4.getString());
      FIX::MiscFeeBasis MiscFeeBasis_4(1);
      noMiscFees_0_1_1.set(MiscFeeBasis_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeBasis_4.getString());
      FIX::MiscFeeCurr MiscFeeCurr_4("CAN");
      noMiscFees_0_1_1.set(MiscFeeCurr_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeCurr_4.getString());
      FIX::MiscFeeType MiscFeeType_4("STRING_7");
      noMiscFees_0_1_1.set(MiscFeeType_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeType_4.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_4);

      noAllocs_0_0.addGroup(noMiscFees_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_0_1_2;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_5;
      FIX::MiscFeeAmt MiscFeeAmt_5;
      MiscFeeAmt_5.setString("13101734");
      noMiscFees_0_1_2.set(MiscFeeAmt_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeAmt_5.getString());
      FIX::MiscFeeBasis MiscFeeBasis_5(2);
      noMiscFees_0_1_2.set(MiscFeeBasis_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeBasis_5.getString());
      FIX::MiscFeeCurr MiscFeeCurr_5("USD");
      noMiscFees_0_1_2.set(MiscFeeCurr_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeCurr_5.getString());
      FIX::MiscFeeType MiscFeeType_5("STRING_7");
      noMiscFees_0_1_2.set(MiscFeeType_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeType_5.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_5);

      noAllocs_0_0.addGroup(noMiscFees_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_7;
      FIX::NestedPartyID NestedPartyID_7("STRING_1652416594");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_7);
      NestedParties_NoNestedPartyIDs_7.insert(NestedPartyID_7.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_7('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_7);
      NestedParties_NoNestedPartyIDs_7.insert(NestedPartyIDSource_7.getString());
      FIX::NestedPartyRole NestedPartyRole_7(1646603679);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_7);
      NestedParties_NoNestedPartyIDs_7.insert(NestedPartyRole_7.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_7);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_12;
        FIX::NestedPartySubID NestedPartySubID_12("STRING_1527621770");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_12);
        NstdPtysSubGrp_NoNestedPartySubIDs_12.insert(NestedPartySubID_12.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_12(1117087842);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_12);
        NstdPtysSubGrp_NoNestedPartySubIDs_12.insert(NestedPartySubIDType_12.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_12);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_13;
        FIX::NestedPartySubID NestedPartySubID_13("STRING_1612644548");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_13);
        NstdPtysSubGrp_NoNestedPartySubIDs_13.insert(NestedPartySubID_13.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_13(339496060);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_13);
        NstdPtysSubGrp_NoNestedPartySubIDs_13.insert(NestedPartySubIDType_13.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_13);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_14;
        FIX::NestedPartySubID NestedPartySubID_14("STRING_914114969");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_14);
        NstdPtysSubGrp_NoNestedPartySubIDs_14.insert(NestedPartySubID_14.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_14(143210777);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_14);
        NstdPtysSubGrp_NoNestedPartySubIDs_14.insert(NestedPartySubIDType_14.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_14);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_8;
      FIX::NestedPartyID NestedPartyID_8("STRING_1975986742");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_8);
      NestedParties_NoNestedPartyIDs_8.insert(NestedPartyID_8.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_8('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_8);
      NestedParties_NoNestedPartyIDs_8.insert(NestedPartyIDSource_8.getString());
      FIX::NestedPartyRole NestedPartyRole_8(2055548129);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_8);
      NestedParties_NoNestedPartyIDs_8.insert(NestedPartyRole_8.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_8);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_15;
        FIX::NestedPartySubID NestedPartySubID_15("STRING_1014414036");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_15);
        NstdPtysSubGrp_NoNestedPartySubIDs_15.insert(NestedPartySubID_15.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_15(1184503998);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_15);
        NstdPtysSubGrp_NoNestedPartySubIDs_15.insert(NestedPartySubIDType_15.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_15);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_9;
      FIX::NestedPartyID NestedPartyID_9("STRING_1279484471");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_9);
      NestedParties_NoNestedPartyIDs_9.insert(NestedPartyID_9.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_9('1');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_9);
      NestedParties_NoNestedPartyIDs_9.insert(NestedPartyIDSource_9.getString());
      FIX::NestedPartyRole NestedPartyRole_9(1423887385);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_9);
      NestedParties_NoNestedPartyIDs_9.insert(NestedPartyRole_9.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_9);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_16;
        FIX::NestedPartySubID NestedPartySubID_16("STRING_1064808537");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_16);
        NstdPtysSubGrp_NoNestedPartySubIDs_16.insert(NestedPartySubID_16.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_16(1255127220);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_16);
        NstdPtysSubGrp_NoNestedPartySubIDs_16.insert(NestedPartySubIDType_16.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_16);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_17;
        FIX::NestedPartySubID NestedPartySubID_17("STRING_612332152");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_17);
        NstdPtysSubGrp_NoNestedPartySubIDs_17.insert(NestedPartySubID_17.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_17(1005391602);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_17);
        NstdPtysSubGrp_NoNestedPartySubIDs_17.insert(NestedPartySubIDType_17.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_17);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_2;
    FIX::SettlDeliveryType SettlDeliveryType_2(3);
    noAllocs_0_0.set(SettlDeliveryType_2);
    SettlInstructionsData_2.insert(SettlDeliveryType_2.getString());
    FIX::StandInstDbID StandInstDbID_2("STRING_1922505581");
    noAllocs_0_0.set(StandInstDbID_2);
    SettlInstructionsData_2.insert(StandInstDbID_2.getString());
    FIX::StandInstDbName StandInstDbName_2("STRING_1640187944");
    noAllocs_0_0.set(StandInstDbName_2);
    SettlInstructionsData_2.insert(StandInstDbName_2.getString());
    FIX::StandInstDbType StandInstDbType_2(4);
    noAllocs_0_0.set(StandInstDbType_2);
    SettlInstructionsData_2.insert(StandInstDbType_2.getString());
    all_values.push_back(SettlInstructionsData_2);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_2;
      FIX::DlvyInstType DlvyInstType_2('S');
      noDlvyInst_0_1_0.set(DlvyInstType_2);
      DlvyInstGrp_NoDlvyInst_2.insert(DlvyInstType_2.getString());
      FIX::SettlInstSource SettlInstSource_2('3');
      noDlvyInst_0_1_0.set(SettlInstSource_2);
      DlvyInstGrp_NoDlvyInst_2.insert(SettlInstSource_2.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_2);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_3;
        FIX::SettlPartyID SettlPartyID_3("STRING_1441374754");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_3);
        SettlParties_NoSettlPartyIDs_3.insert(SettlPartyID_3.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_3('5');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_3);
        SettlParties_NoSettlPartyIDs_3.insert(SettlPartyIDSource_3.getString());
        FIX::SettlPartyRole SettlPartyRole_3(854693185);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_3);
        SettlParties_NoSettlPartyIDs_3.insert(SettlPartyRole_3.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_3);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_7;
          FIX::SettlPartySubID SettlPartySubID_7("STRING_1653484875");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_7);
          SettlPtysSubGrp_NoSettlPartySubIDs_7.insert(SettlPartySubID_7.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_7(319854085);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_7);
          SettlPtysSubGrp_NoSettlPartySubIDs_7.insert(SettlPartySubIDType_7.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_7);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_8;
          FIX::SettlPartySubID SettlPartySubID_8("STRING_1161008937");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_8);
          SettlPtysSubGrp_NoSettlPartySubIDs_8.insert(SettlPartySubID_8.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_8(420116197);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_8);
          SettlPtysSubGrp_NoSettlPartySubIDs_8.insert(SettlPartySubIDType_8.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_8);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_9;
          FIX::SettlPartySubID SettlPartySubID_9("STRING_463064863");
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubID_9);
          SettlPtysSubGrp_NoSettlPartySubIDs_9.insert(SettlPartySubID_9.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_9(989512031);
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubIDType_9);
          SettlPtysSubGrp_NoSettlPartySubIDs_9.insert(SettlPartySubIDType_9.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_9);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_2);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_4;
        FIX::SettlPartyID SettlPartyID_4("STRING_1472374393");
        noSettlPartyIDs_0_0_2_1.set(SettlPartyID_4);
        SettlParties_NoSettlPartyIDs_4.insert(SettlPartyID_4.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_4('3');
        noSettlPartyIDs_0_0_2_1.set(SettlPartyIDSource_4);
        SettlParties_NoSettlPartyIDs_4.insert(SettlPartyIDSource_4.getString());
        FIX::SettlPartyRole SettlPartyRole_4(918182289);
        noSettlPartyIDs_0_0_2_1.set(SettlPartyRole_4);
        SettlParties_NoSettlPartyIDs_4.insert(SettlPartyRole_4.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_4);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_10;
          FIX::SettlPartySubID SettlPartySubID_10("STRING_1555633342");
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubID_10);
          SettlPtysSubGrp_NoSettlPartySubIDs_10.insert(SettlPartySubID_10.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_10(50183113);
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubIDType_10);
          SettlPtysSubGrp_NoSettlPartySubIDs_10.insert(SettlPartySubIDType_10.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_10);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_11;
          FIX::SettlPartySubID SettlPartySubID_11("STRING_1652704111");
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubID_11);
          SettlPtysSubGrp_NoSettlPartySubIDs_11.insert(SettlPartySubID_11.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_11(832037079);
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubIDType_11);
          SettlPtysSubGrp_NoSettlPartySubIDs_11.insert(SettlPartySubIDType_11.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_11);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_12;
          FIX::SettlPartySubID SettlPartySubID_12("STRING_1612532276");
          noSettlPartySubIDs_0_0_1_3_2.set(SettlPartySubID_12);
          SettlPtysSubGrp_NoSettlPartySubIDs_12.insert(SettlPartySubID_12.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_12(570029000);
          noSettlPartySubIDs_0_0_1_3_2.set(SettlPartySubIDType_12);
          SettlPtysSubGrp_NoSettlPartySubIDs_12.insert(SettlPartySubIDType_12.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_12);

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
      FIX::SettlInstSource SettlInstSource_3('2');
      noDlvyInst_0_1_1.set(SettlInstSource_3);
      DlvyInstGrp_NoDlvyInst_3.insert(SettlInstSource_3.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_3);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_5;
        FIX::SettlPartyID SettlPartyID_5("STRING_494920086");
        noSettlPartyIDs_0_1_2_0.set(SettlPartyID_5);
        SettlParties_NoSettlPartyIDs_5.insert(SettlPartyID_5.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_5('1');
        noSettlPartyIDs_0_1_2_0.set(SettlPartyIDSource_5);
        SettlParties_NoSettlPartyIDs_5.insert(SettlPartyIDSource_5.getString());
        FIX::SettlPartyRole SettlPartyRole_5(1068124898);
        noSettlPartyIDs_0_1_2_0.set(SettlPartyRole_5);
        SettlParties_NoSettlPartyIDs_5.insert(SettlPartyRole_5.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_5);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_13;
          FIX::SettlPartySubID SettlPartySubID_13("STRING_1987307347");
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubID_13);
          SettlPtysSubGrp_NoSettlPartySubIDs_13.insert(SettlPartySubID_13.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_13(625193235);
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubIDType_13);
          SettlPtysSubGrp_NoSettlPartySubIDs_13.insert(SettlPartySubIDType_13.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_13);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_14;
          FIX::SettlPartySubID SettlPartySubID_14("STRING_1765479948");
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubID_14);
          SettlPtysSubGrp_NoSettlPartySubIDs_14.insert(SettlPartySubID_14.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_14(1479661278);
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubIDType_14);
          SettlPtysSubGrp_NoSettlPartySubIDs_14.insert(SettlPartySubIDType_14.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_14);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_1);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_6;
        FIX::SettlPartyID SettlPartyID_6("STRING_2066567990");
        noSettlPartyIDs_0_1_2_1.set(SettlPartyID_6);
        SettlParties_NoSettlPartyIDs_6.insert(SettlPartyID_6.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_6('1');
        noSettlPartyIDs_0_1_2_1.set(SettlPartyIDSource_6);
        SettlParties_NoSettlPartyIDs_6.insert(SettlPartyIDSource_6.getString());
        FIX::SettlPartyRole SettlPartyRole_6(186870816);
        noSettlPartyIDs_0_1_2_1.set(SettlPartyRole_6);
        SettlParties_NoSettlPartyIDs_6.insert(SettlPartyRole_6.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_6);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_15;
          FIX::SettlPartySubID SettlPartySubID_15("STRING_1807878209");
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubID_15);
          SettlPtysSubGrp_NoSettlPartySubIDs_15.insert(SettlPartySubID_15.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_15(506724901);
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubIDType_15);
          SettlPtysSubGrp_NoSettlPartySubIDs_15.insert(SettlPartySubIDType_15.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_15);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_16;
          FIX::SettlPartySubID SettlPartySubID_16("STRING_1901606156");
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubID_16);
          SettlPtysSubGrp_NoSettlPartySubIDs_16.insert(SettlPartySubID_16.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_16(80510758);
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubIDType_16);
          SettlPtysSubGrp_NoSettlPartySubIDs_16.insert(SettlPartySubIDType_16.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_16);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_17;
          FIX::SettlPartySubID SettlPartySubID_17("STRING_969789764");
          noSettlPartySubIDs_0_1_1_3_2.set(SettlPartySubID_17);
          SettlPtysSubGrp_NoSettlPartySubIDs_17.insert(SettlPartySubID_17.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_17(743634539);
          noSettlPartySubIDs_0_1_1_3_2.set(SettlPartySubIDType_17);
          SettlPtysSubGrp_NoSettlPartySubIDs_17.insert(SettlPartySubIDType_17.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_17);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_2);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_7;
        FIX::SettlPartyID SettlPartyID_7("STRING_1552885151");
        noSettlPartyIDs_0_1_2_2.set(SettlPartyID_7);
        SettlParties_NoSettlPartyIDs_7.insert(SettlPartyID_7.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_7('1');
        noSettlPartyIDs_0_1_2_2.set(SettlPartyIDSource_7);
        SettlParties_NoSettlPartyIDs_7.insert(SettlPartyIDSource_7.getString());
        FIX::SettlPartyRole SettlPartyRole_7(1661816828);
        noSettlPartyIDs_0_1_2_2.set(SettlPartyRole_7);
        SettlParties_NoSettlPartyIDs_7.insert(SettlPartyRole_7.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_7);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_18;
          FIX::SettlPartySubID SettlPartySubID_18("STRING_749068802");
          noSettlPartySubIDs_0_1_2_3_0.set(SettlPartySubID_18);
          SettlPtysSubGrp_NoSettlPartySubIDs_18.insert(SettlPartySubID_18.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_18(1711999941);
          noSettlPartySubIDs_0_1_2_3_0.set(SettlPartySubIDType_18);
          SettlPtysSubGrp_NoSettlPartySubIDs_18.insert(SettlPartySubIDType_18.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_18);

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_19;
          FIX::SettlPartySubID SettlPartySubID_19("STRING_1397410396");
          noSettlPartySubIDs_0_1_2_3_1.set(SettlPartySubID_19);
          SettlPtysSubGrp_NoSettlPartySubIDs_19.insert(SettlPartySubID_19.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_19(1581105881);
          noSettlPartySubIDs_0_1_2_3_1.set(SettlPartySubIDType_19);
          SettlPtysSubGrp_NoSettlPartySubIDs_19.insert(SettlPartySubIDType_19.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_19);

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_20;
          FIX::SettlPartySubID SettlPartySubID_20("STRING_1177048569");
          noSettlPartySubIDs_0_1_2_3_2.set(SettlPartySubID_20);
          SettlPtysSubGrp_NoSettlPartySubIDs_20.insert(SettlPartySubID_20.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_20(1967439396);
          noSettlPartySubIDs_0_1_2_3_2.set(SettlPartySubIDType_20);
          SettlPtysSubGrp_NoSettlPartySubIDs_20.insert(SettlPartySubIDType_20.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_20);

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_2);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_2);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_0_1_2;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_4;
      FIX::DlvyInstType DlvyInstType_4('S');
      noDlvyInst_0_1_2.set(DlvyInstType_4);
      DlvyInstGrp_NoDlvyInst_4.insert(DlvyInstType_4.getString());
      FIX::SettlInstSource SettlInstSource_4('3');
      noDlvyInst_0_1_2.set(SettlInstSource_4);
      DlvyInstGrp_NoDlvyInst_4.insert(SettlInstSource_4.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_4);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_8;
        FIX::SettlPartyID SettlPartyID_8("STRING_2015706619");
        noSettlPartyIDs_0_2_2_0.set(SettlPartyID_8);
        SettlParties_NoSettlPartyIDs_8.insert(SettlPartyID_8.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_8('1');
        noSettlPartyIDs_0_2_2_0.set(SettlPartyIDSource_8);
        SettlParties_NoSettlPartyIDs_8.insert(SettlPartyIDSource_8.getString());
        FIX::SettlPartyRole SettlPartyRole_8(316017600);
        noSettlPartyIDs_0_2_2_0.set(SettlPartyRole_8);
        SettlParties_NoSettlPartyIDs_8.insert(SettlPartyRole_8.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_8);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_21;
          FIX::SettlPartySubID SettlPartySubID_21("STRING_946655762");
          noSettlPartySubIDs_0_2_0_3_0.set(SettlPartySubID_21);
          SettlPtysSubGrp_NoSettlPartySubIDs_21.insert(SettlPartySubID_21.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_21(941210836);
          noSettlPartySubIDs_0_2_0_3_0.set(SettlPartySubIDType_21);
          SettlPtysSubGrp_NoSettlPartySubIDs_21.insert(SettlPartySubIDType_21.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_21);

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_0);
        }
        noDlvyInst_0_1_2.addGroup(noSettlPartyIDs_0_2_2_0);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // ExecAllocGrp
  // Group ExecAllocGrp.NoExecs
  {
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_2;
    FIX::ExecID ExecID_2("STRING_278833393");
    noExecs_0_0.set(ExecID_2);
    ExecAllocGrp_NoExecs_2.insert(ExecID_2.getString());
    FIX::FirmTradeID FirmTradeID_2("STRING_860295178");
    noExecs_0_0.set(FirmTradeID_2);
    ExecAllocGrp_NoExecs_2.insert(FirmTradeID_2.getString());
    FIX::LastCapacity LastCapacity_2('1');
    noExecs_0_0.set(LastCapacity_2);
    ExecAllocGrp_NoExecs_2.insert(LastCapacity_2.getString());
    FIX::LastParPx LastParPx_2;
    LastParPx_2.setString("4657042");
    noExecs_0_0.set(LastParPx_2);
    ExecAllocGrp_NoExecs_2.insert(LastParPx_2.getString());
    FIX::LastPx LastPx_2;
    LastPx_2.setString("16008923");
    noExecs_0_0.set(LastPx_2);
    ExecAllocGrp_NoExecs_2.insert(LastPx_2.getString());
    FIX::LastQty LastQty_2;
    LastQty_2.setString("292101");
    noExecs_0_0.set(LastQty_2);
    ExecAllocGrp_NoExecs_2.insert(LastQty_2.getString());
    FIX::SecondaryExecID SecondaryExecID_2("STRING_972429110");
    noExecs_0_0.set(SecondaryExecID_2);
    ExecAllocGrp_NoExecs_2.insert(SecondaryExecID_2.getString());
    FIX::TradeID TradeID_2("STRING_1355014905");
    noExecs_0_0.set(TradeID_2);
    ExecAllocGrp_NoExecs_2.insert(TradeID_2.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_2);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_1;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_3;
    FIX::ExecID ExecID_3("STRING_109720872");
    noExecs_0_1.set(ExecID_3);
    ExecAllocGrp_NoExecs_3.insert(ExecID_3.getString());
    FIX::FirmTradeID FirmTradeID_3("STRING_1942218875");
    noExecs_0_1.set(FirmTradeID_3);
    ExecAllocGrp_NoExecs_3.insert(FirmTradeID_3.getString());
    FIX::LastCapacity LastCapacity_3('1');
    noExecs_0_1.set(LastCapacity_3);
    ExecAllocGrp_NoExecs_3.insert(LastCapacity_3.getString());
    FIX::LastParPx LastParPx_3;
    LastParPx_3.setString("16626060");
    noExecs_0_1.set(LastParPx_3);
    ExecAllocGrp_NoExecs_3.insert(LastParPx_3.getString());
    FIX::LastPx LastPx_3;
    LastPx_3.setString("11356543");
    noExecs_0_1.set(LastPx_3);
    ExecAllocGrp_NoExecs_3.insert(LastPx_3.getString());
    FIX::LastQty LastQty_3;
    LastQty_3.setString("16129826");
    noExecs_0_1.set(LastQty_3);
    ExecAllocGrp_NoExecs_3.insert(LastQty_3.getString());
    FIX::SecondaryExecID SecondaryExecID_3("STRING_1407312308");
    noExecs_0_1.set(SecondaryExecID_3);
    ExecAllocGrp_NoExecs_3.insert(SecondaryExecID_3.getString());
    FIX::TradeID TradeID_3("STRING_1884723138");
    noExecs_0_1.set(TradeID_3);
    ExecAllocGrp_NoExecs_3.insert(TradeID_3.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_3);

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_2;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_4;
    FIX::ExecID ExecID_4("STRING_1177498918");
    noExecs_0_2.set(ExecID_4);
    ExecAllocGrp_NoExecs_4.insert(ExecID_4.getString());
    FIX::FirmTradeID FirmTradeID_4("STRING_657239056");
    noExecs_0_2.set(FirmTradeID_4);
    ExecAllocGrp_NoExecs_4.insert(FirmTradeID_4.getString());
    FIX::LastCapacity LastCapacity_4('4');
    noExecs_0_2.set(LastCapacity_4);
    ExecAllocGrp_NoExecs_4.insert(LastCapacity_4.getString());
    FIX::LastParPx LastParPx_4;
    LastParPx_4.setString("2070638");
    noExecs_0_2.set(LastParPx_4);
    ExecAllocGrp_NoExecs_4.insert(LastParPx_4.getString());
    FIX::LastPx LastPx_4;
    LastPx_4.setString("4771948");
    noExecs_0_2.set(LastPx_4);
    ExecAllocGrp_NoExecs_4.insert(LastPx_4.getString());
    FIX::LastQty LastQty_4;
    LastQty_4.setString("6916482");
    noExecs_0_2.set(LastQty_4);
    ExecAllocGrp_NoExecs_4.insert(LastQty_4.getString());
    FIX::SecondaryExecID SecondaryExecID_4("STRING_1461493189");
    noExecs_0_2.set(SecondaryExecID_4);
    ExecAllocGrp_NoExecs_4.insert(SecondaryExecID_4.getString());
    FIX::TradeID TradeID_4("STRING_1872571154");
    noExecs_0_2.set(TradeID_4);
    ExecAllocGrp_NoExecs_4.insert(TradeID_4.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_4);

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_1;
  FIX::AgreementCurrency AgreementCurrency_1("CHF");
  msg.set(AgreementCurrency_1);
  FinancingDetails_1.insert(AgreementCurrency_1.getString());
  FIX::AgreementDate AgreementDate_1("LOCALMKTDATE_41105107");
  msg.set(AgreementDate_1);
  FinancingDetails_1.insert(AgreementDate_1.getString());
  FIX::AgreementDesc AgreementDesc_1("STRING_1156297145");
  msg.set(AgreementDesc_1);
  FinancingDetails_1.insert(AgreementDesc_1.getString());
  FIX::AgreementID AgreementID_1("STRING_1367497367");
  msg.set(AgreementID_1);
  FinancingDetails_1.insert(AgreementID_1.getString());
  FIX::DeliveryType DeliveryType_1(3);
  msg.set(DeliveryType_1);
  FinancingDetails_1.insert(DeliveryType_1.getString());
  FIX::EndDate EndDate_1("LOCALMKTDATE_1370719363");
  msg.set(EndDate_1);
  FinancingDetails_1.insert(EndDate_1.getString());
  FIX::MarginRatio MarginRatio_1;
  MarginRatio_1.setString("7.600000");
  msg.set(MarginRatio_1);
  FinancingDetails_1.insert(MarginRatio_1.getString());
  FIX::StartDate StartDate_1("LOCALMKTDATE_1842611121");
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
    multiset<string> InstrumentLeg_2;
    FIX::EncodedLegIssuer EncodedLegIssuer_2("DATA_1296019870");
    noLegs_0_0.set(EncodedLegIssuer_2);
    InstrumentLeg_2.insert(EncodedLegIssuer_2.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_2(1768745029);
    noLegs_0_0.set(EncodedLegIssuerLen_2);
    InstrumentLeg_2.insert(EncodedLegIssuerLen_2.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_2("DATA_936980432");
    noLegs_0_0.set(EncodedLegSecurityDesc_2);
    InstrumentLeg_2.insert(EncodedLegSecurityDesc_2.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_2(503551127);
    noLegs_0_0.set(EncodedLegSecurityDescLen_2);
    InstrumentLeg_2.insert(EncodedLegSecurityDescLen_2.getString());
    FIX::LegCFICode LegCFICode_2("STRING_1878465901");
    noLegs_0_0.set(LegCFICode_2);
    InstrumentLeg_2.insert(LegCFICode_2.getString());
    FIX::LegContractMultiplier LegContractMultiplier_2;
    LegContractMultiplier_2.setString("7317156");
    noLegs_0_0.set(LegContractMultiplier_2);
    InstrumentLeg_2.insert(LegContractMultiplier_2.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_2(454716923);
    noLegs_0_0.set(LegContractMultiplierUnit_2);
    InstrumentLeg_2.insert(LegContractMultiplierUnit_2.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_2("MONTHYEAR_1393588276");
    noLegs_0_0.set(LegContractSettlMonth_2);
    InstrumentLeg_2.insert(LegContractSettlMonth_2.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_2("COUNTRY_1867369994");
    noLegs_0_0.set(LegCountryOfIssue_2);
    InstrumentLeg_2.insert(LegCountryOfIssue_2.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_2("LOCALMKTDATE_2067699547");
    noLegs_0_0.set(LegCouponPaymentDate_2);
    InstrumentLeg_2.insert(LegCouponPaymentDate_2.getString());
    FIX::LegCouponRate LegCouponRate_2;
    LegCouponRate_2.setString("69.370000");
    noLegs_0_0.set(LegCouponRate_2);
    InstrumentLeg_2.insert(LegCouponRate_2.getString());
    FIX::LegCreditRating LegCreditRating_2("STRING_1604609484");
    noLegs_0_0.set(LegCreditRating_2);
    InstrumentLeg_2.insert(LegCreditRating_2.getString());
    FIX::LegCurrency LegCurrency_2("CHF");
    noLegs_0_0.set(LegCurrency_2);
    InstrumentLeg_2.insert(LegCurrency_2.getString());
    FIX::LegDatedDate LegDatedDate_2("LOCALMKTDATE_775471208");
    noLegs_0_0.set(LegDatedDate_2);
    InstrumentLeg_2.insert(LegDatedDate_2.getString());
    FIX::LegExerciseStyle LegExerciseStyle_2(1304778657);
    noLegs_0_0.set(LegExerciseStyle_2);
    InstrumentLeg_2.insert(LegExerciseStyle_2.getString());
    FIX::LegFactor LegFactor_2;
    LegFactor_2.setString("17878507");
    noLegs_0_0.set(LegFactor_2);
    InstrumentLeg_2.insert(LegFactor_2.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_2(1467119464);
    noLegs_0_0.set(LegFlowScheduleType_2);
    InstrumentLeg_2.insert(LegFlowScheduleType_2.getString());
    FIX::LegInstrRegistry LegInstrRegistry_2("STRING_618788198");
    noLegs_0_0.set(LegInstrRegistry_2);
    InstrumentLeg_2.insert(LegInstrRegistry_2.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_2("LOCALMKTDATE_1512938304");
    noLegs_0_0.set(LegInterestAccrualDate_2);
    InstrumentLeg_2.insert(LegInterestAccrualDate_2.getString());
    FIX::LegIssueDate LegIssueDate_2("LOCALMKTDATE_2026990692");
    noLegs_0_0.set(LegIssueDate_2);
    InstrumentLeg_2.insert(LegIssueDate_2.getString());
    FIX::LegIssuer LegIssuer_2("STRING_1039629803");
    noLegs_0_0.set(LegIssuer_2);
    InstrumentLeg_2.insert(LegIssuer_2.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_2("STRING_1554043411");
    noLegs_0_0.set(LegLocaleOfIssue_2);
    InstrumentLeg_2.insert(LegLocaleOfIssue_2.getString());
    FIX::LegMaturityDate LegMaturityDate_2("LOCALMKTDATE_1035804190");
    noLegs_0_0.set(LegMaturityDate_2);
    InstrumentLeg_2.insert(LegMaturityDate_2.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_2("MONTHYEAR_259643523");
    noLegs_0_0.set(LegMaturityMonthYear_2);
    InstrumentLeg_2.insert(LegMaturityMonthYear_2.getString());
    FIX::LegMaturityTime LegMaturityTime_2("TZTIMEONLY_388875706");
    noLegs_0_0.set(LegMaturityTime_2);
    InstrumentLeg_2.insert(LegMaturityTime_2.getString());
    FIX::LegOptAttribute LegOptAttribute_2('2');
    noLegs_0_0.set(LegOptAttribute_2);
    InstrumentLeg_2.insert(LegOptAttribute_2.getString());
    FIX::LegOptionRatio LegOptionRatio_2;
    LegOptionRatio_2.setString("19059742");
    noLegs_0_0.set(LegOptionRatio_2);
    InstrumentLeg_2.insert(LegOptionRatio_2.getString());
    FIX::LegPool LegPool_2("STRING_84003179");
    noLegs_0_0.set(LegPool_2);
    InstrumentLeg_2.insert(LegPool_2.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_2("STRING_1998574821");
    noLegs_0_0.set(LegPriceUnitOfMeasure_2);
    InstrumentLeg_2.insert(LegPriceUnitOfMeasure_2.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_2;
    LegPriceUnitOfMeasureQty_2.setString("18705256");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_2);
    InstrumentLeg_2.insert(LegPriceUnitOfMeasureQty_2.getString());
    FIX::LegProduct LegProduct_2(1380023049);
    noLegs_0_0.set(LegProduct_2);
    InstrumentLeg_2.insert(LegProduct_2.getString());
    FIX::LegPutOrCall LegPutOrCall_2(1619836202);
    noLegs_0_0.set(LegPutOrCall_2);
    InstrumentLeg_2.insert(LegPutOrCall_2.getString());
    FIX::LegRatioQty LegRatioQty_2;
    LegRatioQty_2.setString("6600223");
    noLegs_0_0.set(LegRatioQty_2);
    InstrumentLeg_2.insert(LegRatioQty_2.getString());
    FIX::LegRedemptionDate LegRedemptionDate_2("LOCALMKTDATE_1883574176");
    noLegs_0_0.set(LegRedemptionDate_2);
    InstrumentLeg_2.insert(LegRedemptionDate_2.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_2("STRING_1350818455");
    noLegs_0_0.set(LegRepoCollateralSecurityType_2);
    InstrumentLeg_2.insert(LegRepoCollateralSecurityType_2.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_2;
    LegRepurchaseRate_2.setString("80.480000");
    noLegs_0_0.set(LegRepurchaseRate_2);
    InstrumentLeg_2.insert(LegRepurchaseRate_2.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_2(190807451);
    noLegs_0_0.set(LegRepurchaseTerm_2);
    InstrumentLeg_2.insert(LegRepurchaseTerm_2.getString());
    FIX::LegSecurityDesc LegSecurityDesc_2("STRING_596923083");
    noLegs_0_0.set(LegSecurityDesc_2);
    InstrumentLeg_2.insert(LegSecurityDesc_2.getString());
    FIX::LegSecurityExchange LegSecurityExchange_2("EXCHANGE_1111624394");
    noLegs_0_0.set(LegSecurityExchange_2);
    InstrumentLeg_2.insert(LegSecurityExchange_2.getString());
    FIX::LegSecurityID LegSecurityID_2("STRING_111023351");
    noLegs_0_0.set(LegSecurityID_2);
    InstrumentLeg_2.insert(LegSecurityID_2.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_2("STRING_1250340020");
    noLegs_0_0.set(LegSecurityIDSource_2);
    InstrumentLeg_2.insert(LegSecurityIDSource_2.getString());
    FIX::LegSecuritySubType LegSecuritySubType_2("STRING_568750231");
    noLegs_0_0.set(LegSecuritySubType_2);
    InstrumentLeg_2.insert(LegSecuritySubType_2.getString());
    FIX::LegSecurityType LegSecurityType_2("STRING_1208738168");
    noLegs_0_0.set(LegSecurityType_2);
    InstrumentLeg_2.insert(LegSecurityType_2.getString());
    FIX::LegSide LegSide_2('4');
    noLegs_0_0.set(LegSide_2);
    InstrumentLeg_2.insert(LegSide_2.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_2("STRING_1344221439");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_2);
    InstrumentLeg_2.insert(LegStateOrProvinceOfIssue_2.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_2("GBP");
    noLegs_0_0.set(LegStrikeCurrency_2);
    InstrumentLeg_2.insert(LegStrikeCurrency_2.getString());
    FIX::LegStrikePrice LegStrikePrice_2;
    LegStrikePrice_2.setString("6638572");
    noLegs_0_0.set(LegStrikePrice_2);
    InstrumentLeg_2.insert(LegStrikePrice_2.getString());
    FIX::LegSymbol LegSymbol_2("STRING_984821376");
    noLegs_0_0.set(LegSymbol_2);
    InstrumentLeg_2.insert(LegSymbol_2.getString());
    FIX::LegSymbolSfx LegSymbolSfx_2("STRING_1566817820");
    noLegs_0_0.set(LegSymbolSfx_2);
    InstrumentLeg_2.insert(LegSymbolSfx_2.getString());
    FIX::LegTimeUnit LegTimeUnit_2("STRING_543364300");
    noLegs_0_0.set(LegTimeUnit_2);
    InstrumentLeg_2.insert(LegTimeUnit_2.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_2("STRING_2024451179");
    noLegs_0_0.set(LegUnitOfMeasure_2);
    InstrumentLeg_2.insert(LegUnitOfMeasure_2.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_2;
    LegUnitOfMeasureQty_2.setString("9733775");
    noLegs_0_0.set(LegUnitOfMeasureQty_2);
    InstrumentLeg_2.insert(LegUnitOfMeasureQty_2.getString());
    all_values.push_back(InstrumentLeg_2);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_4;
      FIX::LegSecurityAltID LegSecurityAltID_4("STRING_136611054");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_4);
      LegSecAltIDGrp_NoLegSecurityAltID_4.insert(LegSecurityAltID_4.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_4("STRING_1362253290");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_4);
      LegSecAltIDGrp_NoLegSecurityAltID_4.insert(LegSecurityAltIDSource_4.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_4);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_5;
      FIX::LegSecurityAltID LegSecurityAltID_5("STRING_1838208395");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_5);
      LegSecAltIDGrp_NoLegSecurityAltID_5.insert(LegSecurityAltID_5.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_5("STRING_2042585338");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_5);
      LegSecAltIDGrp_NoLegSecurityAltID_5.insert(LegSecurityAltIDSource_5.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_5);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_6;
      FIX::LegSecurityAltID LegSecurityAltID_6("STRING_1446256470");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_6);
      LegSecAltIDGrp_NoLegSecurityAltID_6.insert(LegSecurityAltID_6.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_6("STRING_1689299568");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_6);
      LegSecAltIDGrp_NoLegSecurityAltID_6.insert(LegSecurityAltIDSource_6.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_6);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_3;
    FIX::EncodedLegIssuer EncodedLegIssuer_3("DATA_1765627295");
    noLegs_0_1.set(EncodedLegIssuer_3);
    InstrumentLeg_3.insert(EncodedLegIssuer_3.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_3(678795871);
    noLegs_0_1.set(EncodedLegIssuerLen_3);
    InstrumentLeg_3.insert(EncodedLegIssuerLen_3.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_3("DATA_1161652122");
    noLegs_0_1.set(EncodedLegSecurityDesc_3);
    InstrumentLeg_3.insert(EncodedLegSecurityDesc_3.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_3(278166036);
    noLegs_0_1.set(EncodedLegSecurityDescLen_3);
    InstrumentLeg_3.insert(EncodedLegSecurityDescLen_3.getString());
    FIX::LegCFICode LegCFICode_3("STRING_414886400");
    noLegs_0_1.set(LegCFICode_3);
    InstrumentLeg_3.insert(LegCFICode_3.getString());
    FIX::LegContractMultiplier LegContractMultiplier_3;
    LegContractMultiplier_3.setString("3649869");
    noLegs_0_1.set(LegContractMultiplier_3);
    InstrumentLeg_3.insert(LegContractMultiplier_3.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_3(1669904084);
    noLegs_0_1.set(LegContractMultiplierUnit_3);
    InstrumentLeg_3.insert(LegContractMultiplierUnit_3.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_3("MONTHYEAR_605693851");
    noLegs_0_1.set(LegContractSettlMonth_3);
    InstrumentLeg_3.insert(LegContractSettlMonth_3.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_3("COUNTRY_961910013");
    noLegs_0_1.set(LegCountryOfIssue_3);
    InstrumentLeg_3.insert(LegCountryOfIssue_3.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_3("LOCALMKTDATE_634044830");
    noLegs_0_1.set(LegCouponPaymentDate_3);
    InstrumentLeg_3.insert(LegCouponPaymentDate_3.getString());
    FIX::LegCouponRate LegCouponRate_3;
    LegCouponRate_3.setString("72.020000");
    noLegs_0_1.set(LegCouponRate_3);
    InstrumentLeg_3.insert(LegCouponRate_3.getString());
    FIX::LegCreditRating LegCreditRating_3("STRING_64766385");
    noLegs_0_1.set(LegCreditRating_3);
    InstrumentLeg_3.insert(LegCreditRating_3.getString());
    FIX::LegCurrency LegCurrency_3("CHF");
    noLegs_0_1.set(LegCurrency_3);
    InstrumentLeg_3.insert(LegCurrency_3.getString());
    FIX::LegDatedDate LegDatedDate_3("LOCALMKTDATE_478278751");
    noLegs_0_1.set(LegDatedDate_3);
    InstrumentLeg_3.insert(LegDatedDate_3.getString());
    FIX::LegExerciseStyle LegExerciseStyle_3(399532852);
    noLegs_0_1.set(LegExerciseStyle_3);
    InstrumentLeg_3.insert(LegExerciseStyle_3.getString());
    FIX::LegFactor LegFactor_3;
    LegFactor_3.setString("1440049");
    noLegs_0_1.set(LegFactor_3);
    InstrumentLeg_3.insert(LegFactor_3.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_3(532158267);
    noLegs_0_1.set(LegFlowScheduleType_3);
    InstrumentLeg_3.insert(LegFlowScheduleType_3.getString());
    FIX::LegInstrRegistry LegInstrRegistry_3("STRING_1063390108");
    noLegs_0_1.set(LegInstrRegistry_3);
    InstrumentLeg_3.insert(LegInstrRegistry_3.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_3("LOCALMKTDATE_1128826276");
    noLegs_0_1.set(LegInterestAccrualDate_3);
    InstrumentLeg_3.insert(LegInterestAccrualDate_3.getString());
    FIX::LegIssueDate LegIssueDate_3("LOCALMKTDATE_2098976088");
    noLegs_0_1.set(LegIssueDate_3);
    InstrumentLeg_3.insert(LegIssueDate_3.getString());
    FIX::LegIssuer LegIssuer_3("STRING_1606754408");
    noLegs_0_1.set(LegIssuer_3);
    InstrumentLeg_3.insert(LegIssuer_3.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_3("STRING_1005793808");
    noLegs_0_1.set(LegLocaleOfIssue_3);
    InstrumentLeg_3.insert(LegLocaleOfIssue_3.getString());
    FIX::LegMaturityDate LegMaturityDate_3("LOCALMKTDATE_924870024");
    noLegs_0_1.set(LegMaturityDate_3);
    InstrumentLeg_3.insert(LegMaturityDate_3.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_3("MONTHYEAR_1038439250");
    noLegs_0_1.set(LegMaturityMonthYear_3);
    InstrumentLeg_3.insert(LegMaturityMonthYear_3.getString());
    FIX::LegMaturityTime LegMaturityTime_3("TZTIMEONLY_1142404862");
    noLegs_0_1.set(LegMaturityTime_3);
    InstrumentLeg_3.insert(LegMaturityTime_3.getString());
    FIX::LegOptAttribute LegOptAttribute_3('1');
    noLegs_0_1.set(LegOptAttribute_3);
    InstrumentLeg_3.insert(LegOptAttribute_3.getString());
    FIX::LegOptionRatio LegOptionRatio_3;
    LegOptionRatio_3.setString("7291639");
    noLegs_0_1.set(LegOptionRatio_3);
    InstrumentLeg_3.insert(LegOptionRatio_3.getString());
    FIX::LegPool LegPool_3("STRING_1037506552");
    noLegs_0_1.set(LegPool_3);
    InstrumentLeg_3.insert(LegPool_3.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_3("STRING_1585896136");
    noLegs_0_1.set(LegPriceUnitOfMeasure_3);
    InstrumentLeg_3.insert(LegPriceUnitOfMeasure_3.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_3;
    LegPriceUnitOfMeasureQty_3.setString("2709799");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_3);
    InstrumentLeg_3.insert(LegPriceUnitOfMeasureQty_3.getString());
    FIX::LegProduct LegProduct_3(655650199);
    noLegs_0_1.set(LegProduct_3);
    InstrumentLeg_3.insert(LegProduct_3.getString());
    FIX::LegPutOrCall LegPutOrCall_3(117208360);
    noLegs_0_1.set(LegPutOrCall_3);
    InstrumentLeg_3.insert(LegPutOrCall_3.getString());
    FIX::LegRatioQty LegRatioQty_3;
    LegRatioQty_3.setString("14326320");
    noLegs_0_1.set(LegRatioQty_3);
    InstrumentLeg_3.insert(LegRatioQty_3.getString());
    FIX::LegRedemptionDate LegRedemptionDate_3("LOCALMKTDATE_933816235");
    noLegs_0_1.set(LegRedemptionDate_3);
    InstrumentLeg_3.insert(LegRedemptionDate_3.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_3("STRING_532094760");
    noLegs_0_1.set(LegRepoCollateralSecurityType_3);
    InstrumentLeg_3.insert(LegRepoCollateralSecurityType_3.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_3;
    LegRepurchaseRate_3.setString("89.700000");
    noLegs_0_1.set(LegRepurchaseRate_3);
    InstrumentLeg_3.insert(LegRepurchaseRate_3.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_3(456236671);
    noLegs_0_1.set(LegRepurchaseTerm_3);
    InstrumentLeg_3.insert(LegRepurchaseTerm_3.getString());
    FIX::LegSecurityDesc LegSecurityDesc_3("STRING_1137788611");
    noLegs_0_1.set(LegSecurityDesc_3);
    InstrumentLeg_3.insert(LegSecurityDesc_3.getString());
    FIX::LegSecurityExchange LegSecurityExchange_3("EXCHANGE_612045335");
    noLegs_0_1.set(LegSecurityExchange_3);
    InstrumentLeg_3.insert(LegSecurityExchange_3.getString());
    FIX::LegSecurityID LegSecurityID_3("STRING_1090281502");
    noLegs_0_1.set(LegSecurityID_3);
    InstrumentLeg_3.insert(LegSecurityID_3.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_3("STRING_1854505814");
    noLegs_0_1.set(LegSecurityIDSource_3);
    InstrumentLeg_3.insert(LegSecurityIDSource_3.getString());
    FIX::LegSecuritySubType LegSecuritySubType_3("STRING_676811720");
    noLegs_0_1.set(LegSecuritySubType_3);
    InstrumentLeg_3.insert(LegSecuritySubType_3.getString());
    FIX::LegSecurityType LegSecurityType_3("STRING_145592915");
    noLegs_0_1.set(LegSecurityType_3);
    InstrumentLeg_3.insert(LegSecurityType_3.getString());
    FIX::LegSide LegSide_3('1');
    noLegs_0_1.set(LegSide_3);
    InstrumentLeg_3.insert(LegSide_3.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_3("STRING_1155090472");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_3);
    InstrumentLeg_3.insert(LegStateOrProvinceOfIssue_3.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_3("EUR");
    noLegs_0_1.set(LegStrikeCurrency_3);
    InstrumentLeg_3.insert(LegStrikeCurrency_3.getString());
    FIX::LegStrikePrice LegStrikePrice_3;
    LegStrikePrice_3.setString("16872487");
    noLegs_0_1.set(LegStrikePrice_3);
    InstrumentLeg_3.insert(LegStrikePrice_3.getString());
    FIX::LegSymbol LegSymbol_3("STRING_1608515876");
    noLegs_0_1.set(LegSymbol_3);
    InstrumentLeg_3.insert(LegSymbol_3.getString());
    FIX::LegSymbolSfx LegSymbolSfx_3("STRING_757825066");
    noLegs_0_1.set(LegSymbolSfx_3);
    InstrumentLeg_3.insert(LegSymbolSfx_3.getString());
    FIX::LegTimeUnit LegTimeUnit_3("STRING_1638741179");
    noLegs_0_1.set(LegTimeUnit_3);
    InstrumentLeg_3.insert(LegTimeUnit_3.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_3("STRING_1067786636");
    noLegs_0_1.set(LegUnitOfMeasure_3);
    InstrumentLeg_3.insert(LegUnitOfMeasure_3.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_3;
    LegUnitOfMeasureQty_3.setString("17636188");
    noLegs_0_1.set(LegUnitOfMeasureQty_3);
    InstrumentLeg_3.insert(LegUnitOfMeasureQty_3.getString());
    all_values.push_back(InstrumentLeg_3);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_7;
      FIX::LegSecurityAltID LegSecurityAltID_7("STRING_2106225886");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_7);
      LegSecAltIDGrp_NoLegSecurityAltID_7.insert(LegSecurityAltID_7.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_7("STRING_758540088");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_7);
      LegSecAltIDGrp_NoLegSecurityAltID_7.insert(LegSecurityAltIDSource_7.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_7);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_4;
  FIX::AttachmentPoint AttachmentPoint_4;
  AttachmentPoint_4.setString("72.220000");
  msg.set(AttachmentPoint_4);
  Instrument_4.insert(AttachmentPoint_4.getString());
  FIX::CFICode CFICode_4("STRING_687906235");
  msg.set(CFICode_4);
  Instrument_4.insert(CFICode_4.getString());
  FIX::CPProgram CPProgram_4(99);
  msg.set(CPProgram_4);
  Instrument_4.insert(CPProgram_4.getString());
  FIX::CPRegType CPRegType_4("STRING_2141663358");
  msg.set(CPRegType_4);
  Instrument_4.insert(CPRegType_4.getString());
  FIX::CapPrice CapPrice_4;
  CapPrice_4.setString("9588861");
  msg.set(CapPrice_4);
  Instrument_4.insert(CapPrice_4.getString());
  FIX::ContractMultiplier ContractMultiplier_4;
  ContractMultiplier_4.setString("3042131");
  msg.set(ContractMultiplier_4);
  Instrument_4.insert(ContractMultiplier_4.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_4(2);
  msg.set(ContractMultiplierUnit_4);
  Instrument_4.insert(ContractMultiplierUnit_4.getString());
  FIX::ContractSettlMonth ContractSettlMonth_4("MONTHYEAR_244034546");
  msg.set(ContractSettlMonth_4);
  Instrument_4.insert(ContractSettlMonth_4.getString());
  FIX::CountryOfIssue CountryOfIssue_4("COUNTRY_1238029428");
  msg.set(CountryOfIssue_4);
  Instrument_4.insert(CountryOfIssue_4.getString());
  FIX::CouponPaymentDate CouponPaymentDate_4("LOCALMKTDATE_643482830");
  msg.set(CouponPaymentDate_4);
  Instrument_4.insert(CouponPaymentDate_4.getString());
  FIX::CouponRate CouponRate_4;
  CouponRate_4.setString("35.160000");
  msg.set(CouponRate_4);
  Instrument_4.insert(CouponRate_4.getString());
  FIX::CreditRating CreditRating_4("STRING_1694266099");
  msg.set(CreditRating_4);
  Instrument_4.insert(CreditRating_4.getString());
  FIX::DatedDate DatedDate_4("LOCALMKTDATE_1781271442");
  msg.set(DatedDate_4);
  Instrument_4.insert(DatedDate_4.getString());
  FIX::DetachmentPoint DetachmentPoint_4;
  DetachmentPoint_4.setString("52.030000");
  msg.set(DetachmentPoint_4);
  Instrument_4.insert(DetachmentPoint_4.getString());
  FIX::EncodedIssuer EncodedIssuer_4("DATA_637063953");
  msg.set(EncodedIssuer_4);
  Instrument_4.insert(EncodedIssuer_4.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_4(1488293608);
  msg.set(EncodedIssuerLen_4);
  Instrument_4.insert(EncodedIssuerLen_4.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_4("DATA_1183026923");
  msg.set(EncodedSecurityDesc_4);
  Instrument_4.insert(EncodedSecurityDesc_4.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_4(782656869);
  msg.set(EncodedSecurityDescLen_4);
  Instrument_4.insert(EncodedSecurityDescLen_4.getString());
  FIX::ExerciseStyle ExerciseStyle_4(2);
  msg.set(ExerciseStyle_4);
  Instrument_4.insert(ExerciseStyle_4.getString());
  FIX::Factor Factor_4;
  Factor_4.setString("1906337");
  msg.set(Factor_4);
  Instrument_4.insert(Factor_4.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_4(false);
  msg.set(FlexProductEligibilityIndicator_4);
  Instrument_4.insert(FlexProductEligibilityIndicator_4.getString());
  FIX::FlexibleIndicator FlexibleIndicator_4(true);
  msg.set(FlexibleIndicator_4);
  Instrument_4.insert(FlexibleIndicator_4.getString());
  FIX::FloorPrice FloorPrice_4;
  FloorPrice_4.setString("18778824");
  msg.set(FloorPrice_4);
  Instrument_4.insert(FloorPrice_4.getString());
  FIX::FlowScheduleType FlowScheduleType_4(0);
  msg.set(FlowScheduleType_4);
  Instrument_4.insert(FlowScheduleType_4.getString());
  FIX::InstrRegistry InstrRegistry_4("STRING_1360111352");
  msg.set(InstrRegistry_4);
  Instrument_4.insert(InstrRegistry_4.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_4('1');
  msg.set(InstrmtAssignmentMethod_4);
  Instrument_4.insert(InstrmtAssignmentMethod_4.getString());
  FIX::InterestAccrualDate InterestAccrualDate_4("LOCALMKTDATE_1856601501");
  msg.set(InterestAccrualDate_4);
  Instrument_4.insert(InterestAccrualDate_4.getString());
  FIX::IssueDate IssueDate_4("LOCALMKTDATE_976246578");
  msg.set(IssueDate_4);
  Instrument_4.insert(IssueDate_4.getString());
  FIX::Issuer Issuer_4("STRING_1785267574");
  msg.set(Issuer_4);
  Instrument_4.insert(Issuer_4.getString());
  FIX::ListMethod ListMethod_4(1);
  msg.set(ListMethod_4);
  Instrument_4.insert(ListMethod_4.getString());
  FIX::LocaleOfIssue LocaleOfIssue_4("STRING_1734786667");
  msg.set(LocaleOfIssue_4);
  Instrument_4.insert(LocaleOfIssue_4.getString());
  FIX::MaturityDate MaturityDate_4("LOCALMKTDATE_193551148");
  msg.set(MaturityDate_4);
  Instrument_4.insert(MaturityDate_4.getString());
  FIX::MaturityMonthYear MaturityMonthYear_4("MONTHYEAR_355766326");
  msg.set(MaturityMonthYear_4);
  Instrument_4.insert(MaturityMonthYear_4.getString());
  FIX::MaturityTime MaturityTime_4("TZTIMEONLY_1383349660");
  msg.set(MaturityTime_4);
  Instrument_4.insert(MaturityTime_4.getString());
  FIX::MinPriceIncrement MinPriceIncrement_4;
  MinPriceIncrement_4.setString("1877308");
  msg.set(MinPriceIncrement_4);
  Instrument_4.insert(MinPriceIncrement_4.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_4;
  MinPriceIncrementAmount_4.setString("13146524");
  msg.set(MinPriceIncrementAmount_4);
  Instrument_4.insert(MinPriceIncrementAmount_4.getString());
  FIX::NTPositionLimit NTPositionLimit_4(1687562852);
  msg.set(NTPositionLimit_4);
  Instrument_4.insert(NTPositionLimit_4.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_4;
  NotionalPercentageOutstanding_4.setString("89.290000");
  msg.set(NotionalPercentageOutstanding_4);
  Instrument_4.insert(NotionalPercentageOutstanding_4.getString());
  FIX::OptAttribute OptAttribute_4('1');
  msg.set(OptAttribute_4);
  Instrument_4.insert(OptAttribute_4.getString());
  FIX::OptPayoutAmount OptPayoutAmount_4;
  OptPayoutAmount_4.setString("7781086");
  msg.set(OptPayoutAmount_4);
  Instrument_4.insert(OptPayoutAmount_4.getString());
  FIX::OptPayoutType OptPayoutType_4(2);
  msg.set(OptPayoutType_4);
  Instrument_4.insert(OptPayoutType_4.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_4;
  OriginalNotionalPercentageOutstanding_4.setString("68.940000");
  msg.set(OriginalNotionalPercentageOutstanding_4);
  Instrument_4.insert(OriginalNotionalPercentageOutstanding_4.getString());
  FIX::Pool Pool_4("STRING_324891084");
  msg.set(Pool_4);
  Instrument_4.insert(Pool_4.getString());
  FIX::PositionLimit PositionLimit_4(576389553);
  msg.set(PositionLimit_4);
  Instrument_4.insert(PositionLimit_4.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_4("STRING_INX");
  msg.set(PriceQuoteMethod_4);
  Instrument_4.insert(PriceQuoteMethod_4.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_4("STRING_961955037");
  msg.set(PriceUnitOfMeasure_4);
  Instrument_4.insert(PriceUnitOfMeasure_4.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_4;
  PriceUnitOfMeasureQty_4.setString("20646831");
  msg.set(PriceUnitOfMeasureQty_4);
  Instrument_4.insert(PriceUnitOfMeasureQty_4.getString());
  FIX::Product Product_5(11);
  msg.set(Product_5);
  Instrument_4.insert(Product_5.getString());
  FIX::ProductComplex ProductComplex_4("STRING_1744611906");
  msg.set(ProductComplex_4);
  Instrument_4.insert(ProductComplex_4.getString());
  FIX::PutOrCall PutOrCall_4(0);
  msg.set(PutOrCall_4);
  Instrument_4.insert(PutOrCall_4.getString());
  FIX::RedemptionDate RedemptionDate_4("LOCALMKTDATE_1185249120");
  msg.set(RedemptionDate_4);
  Instrument_4.insert(RedemptionDate_4.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_4("STRING_924910895");
  msg.set(RepoCollateralSecurityType_4);
  Instrument_4.insert(RepoCollateralSecurityType_4.getString());
  FIX::RepurchaseRate RepurchaseRate_4;
  RepurchaseRate_4.setString("32.970000");
  msg.set(RepurchaseRate_4);
  Instrument_4.insert(RepurchaseRate_4.getString());
  FIX::RepurchaseTerm RepurchaseTerm_4(915647959);
  msg.set(RepurchaseTerm_4);
  Instrument_4.insert(RepurchaseTerm_4.getString());
  FIX::RestructuringType RestructuringType_4("STRING_FR");
  msg.set(RestructuringType_4);
  Instrument_4.insert(RestructuringType_4.getString());
  FIX::SecurityDesc SecurityDesc_4("STRING_705401001");
  msg.set(SecurityDesc_4);
  Instrument_4.insert(SecurityDesc_4.getString());
  FIX::SecurityExchange SecurityExchange_4("EXCHANGE_137304329");
  msg.set(SecurityExchange_4);
  Instrument_4.insert(SecurityExchange_4.getString());
  FIX::SecurityGroup SecurityGroup_4("STRING_1422843613");
  msg.set(SecurityGroup_4);
  Instrument_4.insert(SecurityGroup_4.getString());
  FIX::SecurityID SecurityID_4("STRING_1681647580");
  msg.set(SecurityID_4);
  Instrument_4.insert(SecurityID_4.getString());
  FIX::SecurityIDSource SecurityIDSource_4("STRING_M");
  msg.set(SecurityIDSource_4);
  Instrument_4.insert(SecurityIDSource_4.getString());
  FIX::SecurityStatus SecurityStatus_4("STRING_1");
  msg.set(SecurityStatus_4);
  Instrument_4.insert(SecurityStatus_4.getString());
  FIX::SecuritySubType SecuritySubType_4("STRING_1268950599");
  msg.set(SecuritySubType_4);
  Instrument_4.insert(SecuritySubType_4.getString());
  FIX::SecurityType SecurityType_5("STRING_IRS");
  msg.set(SecurityType_5);
  Instrument_4.insert(SecurityType_5.getString());
  FIX::Seniority Seniority_4("STRING_SD");
  msg.set(Seniority_4);
  Instrument_4.insert(Seniority_4.getString());
  FIX::SettlMethod SettlMethod_4('P');
  msg.set(SettlMethod_4);
  Instrument_4.insert(SettlMethod_4.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_4("STRING_156370262");
  msg.set(SettleOnOpenFlag_4);
  Instrument_4.insert(SettleOnOpenFlag_4.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_4("STRING_613638863");
  msg.set(StateOrProvinceOfIssue_4);
  Instrument_4.insert(StateOrProvinceOfIssue_4.getString());
  FIX::StrikeCurrency StrikeCurrency_4("EUR");
  msg.set(StrikeCurrency_4);
  Instrument_4.insert(StrikeCurrency_4.getString());
  FIX::StrikeMultiplier StrikeMultiplier_4;
  StrikeMultiplier_4.setString("248422");
  msg.set(StrikeMultiplier_4);
  Instrument_4.insert(StrikeMultiplier_4.getString());
  FIX::StrikePrice StrikePrice_4;
  StrikePrice_4.setString("8230044");
  msg.set(StrikePrice_4);
  Instrument_4.insert(StrikePrice_4.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_4(1);
  msg.set(StrikePriceBoundaryMethod_4);
  Instrument_4.insert(StrikePriceBoundaryMethod_4.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_4;
  StrikePriceBoundaryPrecision_4.setString("91.350000");
  msg.set(StrikePriceBoundaryPrecision_4);
  Instrument_4.insert(StrikePriceBoundaryPrecision_4.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_4(1);
  msg.set(StrikePriceDeterminationMethod_4);
  Instrument_4.insert(StrikePriceDeterminationMethod_4.getString());
  FIX::StrikeValue StrikeValue_4;
  StrikeValue_4.setString("19744805");
  msg.set(StrikeValue_4);
  Instrument_4.insert(StrikeValue_4.getString());
  FIX::Symbol Symbol_4("STRING_1289287584");
  msg.set(Symbol_4);
  Instrument_4.insert(Symbol_4.getString());
  FIX::SymbolSfx SymbolSfx_4("STRING_WI");
  msg.set(SymbolSfx_4);
  Instrument_4.insert(SymbolSfx_4.getString());
  FIX::TimeUnit TimeUnit_4("STRING_D");
  msg.set(TimeUnit_4);
  Instrument_4.insert(TimeUnit_4.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_4(1);
  msg.set(UnderlyingPriceDeterminationMethod_4);
  Instrument_4.insert(UnderlyingPriceDeterminationMethod_4.getString());
  FIX::UnitOfMeasure UnitOfMeasure_4("STRING_t");
  msg.set(UnitOfMeasure_4);
  Instrument_4.insert(UnitOfMeasure_4.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_4;
  UnitOfMeasureQty_4.setString("6346833");
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
    multiset<string> ComplexEvents_NoComplexEvents_10;
    FIX::ComplexEventCondition ComplexEventCondition_10(2);
    noComplexEvents_0_0.set(ComplexEventCondition_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventCondition_10.getString());
    FIX::ComplexEventPrice ComplexEventPrice_10;
    ComplexEventPrice_10.setString("898327");
    noComplexEvents_0_0.set(ComplexEventPrice_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPrice_10.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_10(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPriceBoundaryMethod_10.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_10;
    ComplexEventPriceBoundaryPrecision_10.setString("40.300000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPriceBoundaryPrecision_10.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_10(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPriceTimeType_10.getString());
    FIX::ComplexEventType ComplexEventType_10(3);
    noComplexEvents_0_0.set(ComplexEventType_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventType_10.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_10;
    ComplexOptPayoutAmount_10.setString("2195379");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexOptPayoutAmount_10.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_10);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_22;
      FIX::ComplexEventEndDate ComplexEventEndDate_22(FIX::UTCTIMESTAMP(17, 16, 29, 12, 11, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_22);
      ComplexEventDates_NoComplexEventDates_22.insert(ComplexEventEndDate_22.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_22(FIX::UTCTIMESTAMP(5, 5, 8, 15, 1, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_22);
      ComplexEventDates_NoComplexEventDates_22.insert(ComplexEventStartDate_22.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_22);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_42;
        FIX::ComplexEventEndTime ComplexEventEndTime_42(FIX::UTCTIMEONLY(9, 57, 24));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_42);
        ComplexEventTimes_NoComplexEventTimes_42.insert(ComplexEventEndTime_42.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_42(FIX::UTCTIMEONLY(9, 25, 57));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_42);
        ComplexEventTimes_NoComplexEventTimes_42.insert(ComplexEventStartTime_42.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_42);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_43;
        FIX::ComplexEventEndTime ComplexEventEndTime_43(FIX::UTCTIMEONLY(20, 25, 48));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_43);
        ComplexEventTimes_NoComplexEventTimes_43.insert(ComplexEventEndTime_43.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_43(FIX::UTCTIMEONLY(22, 51, 18));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_43);
        ComplexEventTimes_NoComplexEventTimes_43.insert(ComplexEventStartTime_43.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_43);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_44;
        FIX::ComplexEventEndTime ComplexEventEndTime_44(FIX::UTCTIMEONLY(0, 26, 57));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_44);
        ComplexEventTimes_NoComplexEventTimes_44.insert(ComplexEventEndTime_44.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_44(FIX::UTCTIMEONLY(12, 41, 29));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_44);
        ComplexEventTimes_NoComplexEventTimes_44.insert(ComplexEventStartTime_44.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_44);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_23;
      FIX::ComplexEventEndDate ComplexEventEndDate_23(FIX::UTCTIMESTAMP(10, 37, 40, 14, 2, 2014));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_23);
      ComplexEventDates_NoComplexEventDates_23.insert(ComplexEventEndDate_23.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_23(FIX::UTCTIMESTAMP(14, 9, 11, 16, 7, 2012));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_23);
      ComplexEventDates_NoComplexEventDates_23.insert(ComplexEventStartDate_23.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_23);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_45;
        FIX::ComplexEventEndTime ComplexEventEndTime_45(FIX::UTCTIMEONLY(12, 30, 24));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_45);
        ComplexEventTimes_NoComplexEventTimes_45.insert(ComplexEventEndTime_45.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_45(FIX::UTCTIMEONLY(8, 15, 4));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_45);
        ComplexEventTimes_NoComplexEventTimes_45.insert(ComplexEventStartTime_45.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_45);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_46;
        FIX::ComplexEventEndTime ComplexEventEndTime_46(FIX::UTCTIMEONLY(16, 30, 46));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_46);
        ComplexEventTimes_NoComplexEventTimes_46.insert(ComplexEventEndTime_46.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_46(FIX::UTCTIMEONLY(22, 20, 10));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_46);
        ComplexEventTimes_NoComplexEventTimes_46.insert(ComplexEventStartTime_46.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_46);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_24;
      FIX::ComplexEventEndDate ComplexEventEndDate_24(FIX::UTCTIMESTAMP(22, 47, 47, 13, 1, 2007));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_24);
      ComplexEventDates_NoComplexEventDates_24.insert(ComplexEventEndDate_24.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_24(FIX::UTCTIMESTAMP(14, 16, 18, 6, 11, 2012));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_24);
      ComplexEventDates_NoComplexEventDates_24.insert(ComplexEventStartDate_24.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_24);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_47;
        FIX::ComplexEventEndTime ComplexEventEndTime_47(FIX::UTCTIMEONLY(23, 29, 27));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_47);
        ComplexEventTimes_NoComplexEventTimes_47.insert(ComplexEventEndTime_47.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_47(FIX::UTCTIMEONLY(2, 34, 41));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_47);
        ComplexEventTimes_NoComplexEventTimes_47.insert(ComplexEventStartTime_47.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_47);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_48;
        FIX::ComplexEventEndTime ComplexEventEndTime_48(FIX::UTCTIMEONLY(18, 3, 25));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_48);
        ComplexEventTimes_NoComplexEventTimes_48.insert(ComplexEventEndTime_48.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_48(FIX::UTCTIMEONLY(1, 45, 57));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_48);
        ComplexEventTimes_NoComplexEventTimes_48.insert(ComplexEventStartTime_48.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_48);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_11;
    FIX::ComplexEventCondition ComplexEventCondition_11(1);
    noComplexEvents_0_1.set(ComplexEventCondition_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventCondition_11.getString());
    FIX::ComplexEventPrice ComplexEventPrice_11;
    ComplexEventPrice_11.setString("1948059");
    noComplexEvents_0_1.set(ComplexEventPrice_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPrice_11.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_11(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPriceBoundaryMethod_11.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_11;
    ComplexEventPriceBoundaryPrecision_11.setString("15.950000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPriceBoundaryPrecision_11.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_11(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPriceTimeType_11.getString());
    FIX::ComplexEventType ComplexEventType_11(1);
    noComplexEvents_0_1.set(ComplexEventType_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventType_11.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_11;
    ComplexOptPayoutAmount_11.setString("3963300");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexOptPayoutAmount_11.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_11);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_25;
      FIX::ComplexEventEndDate ComplexEventEndDate_25(FIX::UTCTIMESTAMP(23, 39, 37, 14, 2, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_25);
      ComplexEventDates_NoComplexEventDates_25.insert(ComplexEventEndDate_25.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_25(FIX::UTCTIMESTAMP(0, 6, 59, 1, 9, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_25);
      ComplexEventDates_NoComplexEventDates_25.insert(ComplexEventStartDate_25.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_25);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_49;
        FIX::ComplexEventEndTime ComplexEventEndTime_49(FIX::UTCTIMEONLY(8, 45, 53));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_49);
        ComplexEventTimes_NoComplexEventTimes_49.insert(ComplexEventEndTime_49.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_49(FIX::UTCTIMEONLY(10, 30, 17));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_49);
        ComplexEventTimes_NoComplexEventTimes_49.insert(ComplexEventStartTime_49.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_49);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_26;
      FIX::ComplexEventEndDate ComplexEventEndDate_26(FIX::UTCTIMESTAMP(6, 54, 50, 19, 11, 2001));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_26);
      ComplexEventDates_NoComplexEventDates_26.insert(ComplexEventEndDate_26.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_26(FIX::UTCTIMESTAMP(5, 40, 3, 19, 7, 2014));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_26);
      ComplexEventDates_NoComplexEventDates_26.insert(ComplexEventStartDate_26.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_26);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_50;
        FIX::ComplexEventEndTime ComplexEventEndTime_50(FIX::UTCTIMEONLY(21, 54, 42));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_50);
        ComplexEventTimes_NoComplexEventTimes_50.insert(ComplexEventEndTime_50.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_50(FIX::UTCTIMEONLY(7, 8, 29));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_50);
        ComplexEventTimes_NoComplexEventTimes_50.insert(ComplexEventStartTime_50.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_50);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_51;
        FIX::ComplexEventEndTime ComplexEventEndTime_51(FIX::UTCTIMEONLY(5, 14, 55));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_51);
        ComplexEventTimes_NoComplexEventTimes_51.insert(ComplexEventEndTime_51.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_51(FIX::UTCTIMEONLY(5, 26, 10));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_51);
        ComplexEventTimes_NoComplexEventTimes_51.insert(ComplexEventStartTime_51.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_51);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_52;
        FIX::ComplexEventEndTime ComplexEventEndTime_52(FIX::UTCTIMEONLY(0, 56, 29));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_52);
        ComplexEventTimes_NoComplexEventTimes_52.insert(ComplexEventEndTime_52.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_52(FIX::UTCTIMEONLY(7, 6, 52));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_52);
        ComplexEventTimes_NoComplexEventTimes_52.insert(ComplexEventStartTime_52.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_52);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_27;
      FIX::ComplexEventEndDate ComplexEventEndDate_27(FIX::UTCTIMESTAMP(23, 47, 55, 13, 8, 2007));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_27);
      ComplexEventDates_NoComplexEventDates_27.insert(ComplexEventEndDate_27.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_27(FIX::UTCTIMESTAMP(8, 38, 23, 11, 10, 2007));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_27);
      ComplexEventDates_NoComplexEventDates_27.insert(ComplexEventStartDate_27.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_27);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_53;
        FIX::ComplexEventEndTime ComplexEventEndTime_53(FIX::UTCTIMEONLY(12, 6, 27));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_53);
        ComplexEventTimes_NoComplexEventTimes_53.insert(ComplexEventEndTime_53.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_53(FIX::UTCTIMEONLY(11, 45, 16));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_53);
        ComplexEventTimes_NoComplexEventTimes_53.insert(ComplexEventStartTime_53.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_53);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_54;
        FIX::ComplexEventEndTime ComplexEventEndTime_54(FIX::UTCTIMEONLY(9, 12, 8));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_54);
        ComplexEventTimes_NoComplexEventTimes_54.insert(ComplexEventEndTime_54.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_54(FIX::UTCTIMEONLY(19, 15, 21));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_54);
        ComplexEventTimes_NoComplexEventTimes_54.insert(ComplexEventStartTime_54.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_54);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_12;
    FIX::ComplexEventCondition ComplexEventCondition_12(1);
    noComplexEvents_0_2.set(ComplexEventCondition_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventCondition_12.getString());
    FIX::ComplexEventPrice ComplexEventPrice_12;
    ComplexEventPrice_12.setString("6836345");
    noComplexEvents_0_2.set(ComplexEventPrice_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPrice_12.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_12(4);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPriceBoundaryMethod_12.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_12;
    ComplexEventPriceBoundaryPrecision_12.setString("59.710000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPriceBoundaryPrecision_12.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_12(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPriceTimeType_12.getString());
    FIX::ComplexEventType ComplexEventType_12(6);
    noComplexEvents_0_2.set(ComplexEventType_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventType_12.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_12;
    ComplexOptPayoutAmount_12.setString("12969842");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexOptPayoutAmount_12.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_12);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_28;
      FIX::ComplexEventEndDate ComplexEventEndDate_28(FIX::UTCTIMESTAMP(5, 47, 23, 22, 7, 2013));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_28);
      ComplexEventDates_NoComplexEventDates_28.insert(ComplexEventEndDate_28.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_28(FIX::UTCTIMESTAMP(23, 6, 56, 4, 10, 2009));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_28);
      ComplexEventDates_NoComplexEventDates_28.insert(ComplexEventStartDate_28.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_28);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_55;
        FIX::ComplexEventEndTime ComplexEventEndTime_55(FIX::UTCTIMEONLY(23, 49, 37));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_55);
        ComplexEventTimes_NoComplexEventTimes_55.insert(ComplexEventEndTime_55.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_55(FIX::UTCTIMEONLY(12, 44, 26));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_55);
        ComplexEventTimes_NoComplexEventTimes_55.insert(ComplexEventStartTime_55.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_55);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_56;
        FIX::ComplexEventEndTime ComplexEventEndTime_56(FIX::UTCTIMEONLY(2, 26, 56));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_56);
        ComplexEventTimes_NoComplexEventTimes_56.insert(ComplexEventEndTime_56.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_56(FIX::UTCTIMEONLY(10, 3, 53));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_56);
        ComplexEventTimes_NoComplexEventTimes_56.insert(ComplexEventStartTime_56.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_56);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_57;
        FIX::ComplexEventEndTime ComplexEventEndTime_57(FIX::UTCTIMEONLY(20, 32, 42));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_57);
        ComplexEventTimes_NoComplexEventTimes_57.insert(ComplexEventEndTime_57.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_57(FIX::UTCTIMEONLY(3, 50, 23));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_57);
        ComplexEventTimes_NoComplexEventTimes_57.insert(ComplexEventStartTime_57.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_57);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_29;
      FIX::ComplexEventEndDate ComplexEventEndDate_29(FIX::UTCTIMESTAMP(20, 12, 34, 17, 10, 2017));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_29);
      ComplexEventDates_NoComplexEventDates_29.insert(ComplexEventEndDate_29.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_29(FIX::UTCTIMESTAMP(20, 0, 59, 13, 5, 2013));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_29);
      ComplexEventDates_NoComplexEventDates_29.insert(ComplexEventStartDate_29.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_29);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_58;
        FIX::ComplexEventEndTime ComplexEventEndTime_58(FIX::UTCTIMEONLY(1, 1, 1));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_58);
        ComplexEventTimes_NoComplexEventTimes_58.insert(ComplexEventEndTime_58.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_58(FIX::UTCTIMEONLY(16, 4, 28));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_58);
        ComplexEventTimes_NoComplexEventTimes_58.insert(ComplexEventStartTime_58.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_58);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_59;
        FIX::ComplexEventEndTime ComplexEventEndTime_59(FIX::UTCTIMEONLY(4, 0, 29));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_59);
        ComplexEventTimes_NoComplexEventTimes_59.insert(ComplexEventEndTime_59.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_59(FIX::UTCTIMEONLY(7, 11, 1));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_59);
        ComplexEventTimes_NoComplexEventTimes_59.insert(ComplexEventStartTime_59.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_59);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_30;
      FIX::ComplexEventEndDate ComplexEventEndDate_30(FIX::UTCTIMESTAMP(11, 13, 16, 1, 4, 2009));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_30);
      ComplexEventDates_NoComplexEventDates_30.insert(ComplexEventEndDate_30.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_30(FIX::UTCTIMESTAMP(15, 19, 58, 16, 12, 2009));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_30);
      ComplexEventDates_NoComplexEventDates_30.insert(ComplexEventStartDate_30.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_30);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_60;
        FIX::ComplexEventEndTime ComplexEventEndTime_60(FIX::UTCTIMEONLY(10, 57, 57));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_60);
        ComplexEventTimes_NoComplexEventTimes_60.insert(ComplexEventEndTime_60.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_60(FIX::UTCTIMEONLY(13, 53, 40));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_60);
        ComplexEventTimes_NoComplexEventTimes_60.insert(ComplexEventStartTime_60.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_60);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_61;
        FIX::ComplexEventEndTime ComplexEventEndTime_61(FIX::UTCTIMEONLY(21, 33, 25));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_61);
        ComplexEventTimes_NoComplexEventTimes_61.insert(ComplexEventEndTime_61.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_61(FIX::UTCTIMEONLY(8, 37, 17));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_61);
        ComplexEventTimes_NoComplexEventTimes_61.insert(ComplexEventStartTime_61.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_61);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
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
    multiset<string> EvntGrp_NoEvents_9;
    FIX::EventDate EventDate_9("LOCALMKTDATE_1536985228");
    noEvents_0_0.set(EventDate_9);
    EvntGrp_NoEvents_9.insert(EventDate_9.getString());
    FIX::EventPx EventPx_9;
    EventPx_9.setString("1113878");
    noEvents_0_0.set(EventPx_9);
    EvntGrp_NoEvents_9.insert(EventPx_9.getString());
    FIX::EventText EventText_9("STRING_1427531526");
    noEvents_0_0.set(EventText_9);
    EvntGrp_NoEvents_9.insert(EventText_9.getString());
    FIX::EventTime EventTime_9(FIX::UTCTIMESTAMP(13, 25, 4, 17, 1, 2006));
    noEvents_0_0.set(EventTime_9);
    EvntGrp_NoEvents_9.insert(EventTime_9.getString());
    FIX::EventType EventType_9(10);
    noEvents_0_0.set(EventType_9);
    EvntGrp_NoEvents_9.insert(EventType_9.getString());
    all_values.push_back(EvntGrp_NoEvents_9);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_10;
    FIX::EventDate EventDate_10("LOCALMKTDATE_711282387");
    noEvents_0_1.set(EventDate_10);
    EvntGrp_NoEvents_10.insert(EventDate_10.getString());
    FIX::EventPx EventPx_10;
    EventPx_10.setString("13564635");
    noEvents_0_1.set(EventPx_10);
    EvntGrp_NoEvents_10.insert(EventPx_10.getString());
    FIX::EventText EventText_10("STRING_449398817");
    noEvents_0_1.set(EventText_10);
    EvntGrp_NoEvents_10.insert(EventText_10.getString());
    FIX::EventTime EventTime_10(FIX::UTCTIMESTAMP(21, 14, 21, 18, 8, 2009));
    noEvents_0_1.set(EventTime_10);
    EvntGrp_NoEvents_10.insert(EventTime_10.getString());
    FIX::EventType EventType_10(11);
    noEvents_0_1.set(EventType_10);
    EvntGrp_NoEvents_10.insert(EventType_10.getString());
    all_values.push_back(EvntGrp_NoEvents_10);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_11;
    FIX::EventDate EventDate_11("LOCALMKTDATE_1931497835");
    noEvents_0_2.set(EventDate_11);
    EvntGrp_NoEvents_11.insert(EventDate_11.getString());
    FIX::EventPx EventPx_11;
    EventPx_11.setString("11745442");
    noEvents_0_2.set(EventPx_11);
    EvntGrp_NoEvents_11.insert(EventPx_11.getString());
    FIX::EventText EventText_11("STRING_724912875");
    noEvents_0_2.set(EventText_11);
    EvntGrp_NoEvents_11.insert(EventText_11.getString());
    FIX::EventTime EventTime_11(FIX::UTCTIMESTAMP(20, 24, 29, 25, 3, 2014));
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
    FIX50SP2::AllocationInstructionAlert::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_6;
    FIX::InstrumentPartyID InstrumentPartyID_6("STRING_209432207");
    noInstrumentParties_0_0.set(InstrumentPartyID_6);
    InstrumentParties_NoInstrumentParties_6.insert(InstrumentPartyID_6.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_6('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_6);
    InstrumentParties_NoInstrumentParties_6.insert(InstrumentPartyIDSource_6.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_6(284075429);
    noInstrumentParties_0_0.set(InstrumentPartyRole_6);
    InstrumentParties_NoInstrumentParties_6.insert(InstrumentPartyRole_6.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_6);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14;
      FIX::InstrumentPartySubID InstrumentPartySubID_14("STRING_635804702");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_14);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14.insert(InstrumentPartySubID_14.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_14(1153585745);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_14);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14.insert(InstrumentPartySubIDType_14.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15;
      FIX::InstrumentPartySubID InstrumentPartySubID_15("STRING_156873210");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_15);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15.insert(InstrumentPartySubID_15.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_15(340936103);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_15);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15.insert(InstrumentPartySubIDType_15.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16;
      FIX::InstrumentPartySubID InstrumentPartySubID_16("STRING_1864868132");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_16);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16.insert(InstrumentPartySubID_16.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_16(1513336790);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_16);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16.insert(InstrumentPartySubIDType_16.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationInstructionAlert::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_8;
    FIX::SecurityAltID SecurityAltID_8("STRING_463240128");
    noSecurityAltID_0_0.set(SecurityAltID_8);
    SecAltIDGrp_NoSecurityAltID_8.insert(SecurityAltID_8.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_8("STRING_97178019");
    noSecurityAltID_0_0.set(SecurityAltIDSource_8);
    SecAltIDGrp_NoSecurityAltID_8.insert(SecurityAltIDSource_8.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_8);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_9;
    FIX::SecurityAltID SecurityAltID_9("STRING_671429206");
    noSecurityAltID_0_1.set(SecurityAltID_9);
    SecAltIDGrp_NoSecurityAltID_9.insert(SecurityAltID_9.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_9("STRING_198611222");
    noSecurityAltID_0_1.set(SecurityAltIDSource_9);
    SecAltIDGrp_NoSecurityAltID_9.insert(SecurityAltIDSource_9.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_9);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_8;
  FIX::SecurityXML SecurityXML_9("XMLDATA_340288009");
  msg.set(SecurityXML_9);
  FIX::SecurityXMLLen SecurityXMLLen_4(345126609);
  msg.set(SecurityXMLLen_4);
  FIX::SecurityXMLSchema SecurityXMLSchema_4("STRING_85048869");
  msg.set(SecurityXMLSchema_4);
  SecurityXML_8.insert(SecurityXMLSchema_4.getString());
  all_values.push_back(SecurityXML_8);

  // InstrumentExtension
  multiset<string> InstrumentExtension_1;
  FIX::DeliveryForm DeliveryForm_1(1);
  msg.set(DeliveryForm_1);
  InstrumentExtension_1.insert(DeliveryForm_1.getString());
  FIX::PctAtRisk PctAtRisk_1;
  PctAtRisk_1.setString("7.960000");
  msg.set(PctAtRisk_1);
  InstrumentExtension_1.insert(PctAtRisk_1.getString());
  all_values.push_back(InstrumentExtension_1);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_2;
    FIX::InstrAttribType InstrAttribType_2(18);
    noInstrAttrib_0_0.set(InstrAttribType_2);
    AttrbGrp_NoInstrAttrib_2.insert(InstrAttribType_2.getString());
    FIX::InstrAttribValue InstrAttribValue_2("STRING_2072686177");
    noInstrAttrib_0_0.set(InstrAttribValue_2);
    AttrbGrp_NoInstrAttrib_2.insert(InstrAttribValue_2.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_2);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_3;
    FIX::InstrAttribType InstrAttribType_3(10);
    noInstrAttrib_0_1.set(InstrAttribType_3);
    AttrbGrp_NoInstrAttrib_3.insert(InstrAttribType_3.getString());
    FIX::InstrAttribValue InstrAttribValue_3("STRING_1990342571");
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
    FIX::ClOrdID ClOrdID_3("STRING_1841783494");
    noOrders_0_0.set(ClOrdID_3);
    OrdAllocGrp_NoOrders_3.insert(ClOrdID_3.getString());
    FIX::ListID ListID_3("STRING_1778469377");
    noOrders_0_0.set(ListID_3);
    OrdAllocGrp_NoOrders_3.insert(ListID_3.getString());
    FIX::OrderAvgPx OrderAvgPx_3;
    OrderAvgPx_3.setString("4865184");
    noOrders_0_0.set(OrderAvgPx_3);
    OrdAllocGrp_NoOrders_3.insert(OrderAvgPx_3.getString());
    FIX::OrderBookingQty OrderBookingQty_3;
    OrderBookingQty_3.setString("1770936");
    noOrders_0_0.set(OrderBookingQty_3);
    OrdAllocGrp_NoOrders_3.insert(OrderBookingQty_3.getString());
    FIX::OrderID OrderID_3("STRING_846644061");
    noOrders_0_0.set(OrderID_3);
    OrdAllocGrp_NoOrders_3.insert(OrderID_3.getString());
    FIX::OrderQty OrderQty_3;
    OrderQty_3.setString("6959506");
    noOrders_0_0.set(OrderQty_3);
    OrdAllocGrp_NoOrders_3.insert(OrderQty_3.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_3("STRING_152858587");
    noOrders_0_0.set(SecondaryClOrdID_3);
    OrdAllocGrp_NoOrders_3.insert(SecondaryClOrdID_3.getString());
    FIX::SecondaryOrderID SecondaryOrderID_3("STRING_1130719490");
    noOrders_0_0.set(SecondaryOrderID_3);
    OrdAllocGrp_NoOrders_3.insert(SecondaryOrderID_3.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_3);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_6;
      FIX::Nested2PartyID Nested2PartyID_6("STRING_788663289");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_6);
      NestedParties2_NoNested2PartyIDs_6.insert(Nested2PartyID_6.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_6('1');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_6);
      NestedParties2_NoNested2PartyIDs_6.insert(Nested2PartyIDSource_6.getString());
      FIX::Nested2PartyRole Nested2PartyRole_6(1053177522);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_6);
      NestedParties2_NoNested2PartyIDs_6.insert(Nested2PartyRole_6.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_6);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_14;
        FIX::Nested2PartySubID Nested2PartySubID_14("STRING_2001689720");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_14);
        NstdPtys2SubGrp_NoNested2PartySubIDs_14.insert(Nested2PartySubID_14.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_14(419030664);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_14);
        NstdPtys2SubGrp_NoNested2PartySubIDs_14.insert(Nested2PartySubIDType_14.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_14);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_15;
        FIX::Nested2PartySubID Nested2PartySubID_15("STRING_1919934313");
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubID_15);
        NstdPtys2SubGrp_NoNested2PartySubIDs_15.insert(Nested2PartySubID_15.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_15(317446200);
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubIDType_15);
        NstdPtys2SubGrp_NoNested2PartySubIDs_15.insert(Nested2PartySubIDType_15.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_15);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_16;
        FIX::Nested2PartySubID Nested2PartySubID_16("STRING_516208684");
        noNested2PartySubIDs_0_0_2_2.set(Nested2PartySubID_16);
        NstdPtys2SubGrp_NoNested2PartySubIDs_16.insert(Nested2PartySubID_16.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_16(443879871);
        noNested2PartySubIDs_0_0_2_2.set(Nested2PartySubIDType_16);
        NstdPtys2SubGrp_NoNested2PartySubIDs_16.insert(Nested2PartySubIDType_16.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_16);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_4;
    FIX::ClOrdID ClOrdID_4("STRING_516057422");
    noOrders_0_1.set(ClOrdID_4);
    OrdAllocGrp_NoOrders_4.insert(ClOrdID_4.getString());
    FIX::ListID ListID_4("STRING_856496693");
    noOrders_0_1.set(ListID_4);
    OrdAllocGrp_NoOrders_4.insert(ListID_4.getString());
    FIX::OrderAvgPx OrderAvgPx_4;
    OrderAvgPx_4.setString("7890064");
    noOrders_0_1.set(OrderAvgPx_4);
    OrdAllocGrp_NoOrders_4.insert(OrderAvgPx_4.getString());
    FIX::OrderBookingQty OrderBookingQty_4;
    OrderBookingQty_4.setString("6011062");
    noOrders_0_1.set(OrderBookingQty_4);
    OrdAllocGrp_NoOrders_4.insert(OrderBookingQty_4.getString());
    FIX::OrderID OrderID_4("STRING_672165985");
    noOrders_0_1.set(OrderID_4);
    OrdAllocGrp_NoOrders_4.insert(OrderID_4.getString());
    FIX::OrderQty OrderQty_4;
    OrderQty_4.setString("9181472");
    noOrders_0_1.set(OrderQty_4);
    OrdAllocGrp_NoOrders_4.insert(OrderQty_4.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_4("STRING_1860699373");
    noOrders_0_1.set(SecondaryClOrdID_4);
    OrdAllocGrp_NoOrders_4.insert(SecondaryClOrdID_4.getString());
    FIX::SecondaryOrderID SecondaryOrderID_4("STRING_1212748153");
    noOrders_0_1.set(SecondaryOrderID_4);
    OrdAllocGrp_NoOrders_4.insert(SecondaryOrderID_4.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_4);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_7;
      FIX::Nested2PartyID Nested2PartyID_7("STRING_1183593194");
      noNested2PartyIDs_1_1_0.set(Nested2PartyID_7);
      NestedParties2_NoNested2PartyIDs_7.insert(Nested2PartyID_7.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_7('1');
      noNested2PartyIDs_1_1_0.set(Nested2PartyIDSource_7);
      NestedParties2_NoNested2PartyIDs_7.insert(Nested2PartyIDSource_7.getString());
      FIX::Nested2PartyRole Nested2PartyRole_7(280717677);
      noNested2PartyIDs_1_1_0.set(Nested2PartyRole_7);
      NestedParties2_NoNested2PartyIDs_7.insert(Nested2PartyRole_7.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_7);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_17;
        FIX::Nested2PartySubID Nested2PartySubID_17("STRING_686592806");
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubID_17);
        NstdPtys2SubGrp_NoNested2PartySubIDs_17.insert(Nested2PartySubID_17.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_17(767236117);
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubIDType_17);
        NstdPtys2SubGrp_NoNested2PartySubIDs_17.insert(Nested2PartySubIDType_17.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_17);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_18;
        FIX::Nested2PartySubID Nested2PartySubID_18("STRING_1054986715");
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubID_18);
        NstdPtys2SubGrp_NoNested2PartySubIDs_18.insert(Nested2PartySubID_18.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_18(1533236867);
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubIDType_18);
        NstdPtys2SubGrp_NoNested2PartySubIDs_18.insert(Nested2PartySubIDType_18.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_18);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_19;
        FIX::Nested2PartySubID Nested2PartySubID_19("STRING_1463186765");
        noNested2PartySubIDs_1_0_2_2.set(Nested2PartySubID_19);
        NstdPtys2SubGrp_NoNested2PartySubIDs_19.insert(Nested2PartySubID_19.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_19(1207845302);
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
    multiset<string> Parties_NoPartyIDs_7;
    FIX::PartyID PartyID_7("STRING_212007429");
    noPartyIDs_0_0.set(PartyID_7);
    Parties_NoPartyIDs_7.insert(PartyID_7.getString());
    FIX::PartyIDSource PartyIDSource_7('H');
    noPartyIDs_0_0.set(PartyIDSource_7);
    Parties_NoPartyIDs_7.insert(PartyIDSource_7.getString());
    FIX::PartyRole PartyRole_7(6);
    noPartyIDs_0_0.set(PartyRole_7);
    Parties_NoPartyIDs_7.insert(PartyRole_7.getString());
    all_values.push_back(Parties_NoPartyIDs_7);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_13;
      FIX::PartySubID PartySubID_13("STRING_978624335");
      noPartySubIDs_0_1_0.set(PartySubID_13);
      PtysSubGrp_NoPartySubIDs_13.insert(PartySubID_13.getString());
      FIX::PartySubIDType PartySubIDType_13(3);
      noPartySubIDs_0_1_0.set(PartySubIDType_13);
      PtysSubGrp_NoPartySubIDs_13.insert(PartySubIDType_13.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_13);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_14;
      FIX::PartySubID PartySubID_14("STRING_1684215616");
      noPartySubIDs_0_1_1.set(PartySubID_14);
      PtysSubGrp_NoPartySubIDs_14.insert(PartySubID_14.getString());
      FIX::PartySubIDType PartySubIDType_14(17);
      noPartySubIDs_0_1_1.set(PartySubIDType_14);
      PtysSubGrp_NoPartySubIDs_14.insert(PartySubIDType_14.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_14);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationInstructionAlert::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_1;
    FIX::PosAmt PosAmt_1;
    PosAmt_1.setString("529406");
    noPosAmt_0_0.set(PosAmt_1);
    PositionAmountData_NoPosAmt_1.insert(PosAmt_1.getString());
    FIX::PosAmtType PosAmtType_1("STRING_ICMTM");
    noPosAmt_0_0.set(PosAmtType_1);
    PositionAmountData_NoPosAmt_1.insert(PosAmtType_1.getString());
    FIX::PositionCurrency PositionCurrency_1("STRING_1341003992");
    noPosAmt_0_0.set(PositionCurrency_1);
    PositionAmountData_NoPosAmt_1.insert(PositionCurrency_1.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_1);

    msg.addGroup(noPosAmt_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_1;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_1("CHF");
  msg.set(BenchmarkCurveCurrency_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkCurveCurrency_1.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_1("STRING_Pfandbriefe");
  msg.set(BenchmarkCurveName_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkCurveName_1.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_1("STRING_1581603331");
  msg.set(BenchmarkCurvePoint_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkCurvePoint_1.getString());
  FIX::BenchmarkPrice BenchmarkPrice_1;
  BenchmarkPrice_1.setString("7546249");
  msg.set(BenchmarkPrice_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkPrice_1.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_1(1655326009);
  msg.set(BenchmarkPriceType_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkPriceType_1.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_1("STRING_646867836");
  msg.set(BenchmarkSecurityID_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkSecurityID_1.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_1("STRING_1597974789");
  msg.set(BenchmarkSecurityIDSource_1);
  SpreadOrBenchmarkCurveData_1.insert(BenchmarkSecurityIDSource_1.getString());
  FIX::Spread Spread_1;
  Spread_1.setString("6914355");
  msg.set(Spread_1);
  SpreadOrBenchmarkCurveData_1.insert(Spread_1.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_1);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationInstructionAlert::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_2;
    FIX::StipulationType StipulationType_2("STRING_SALESCREDITOVR");
    noStipulations_0_0.set(StipulationType_2);
    Stipulations_NoStipulations_2.insert(StipulationType_2.getString());
    FIX::StipulationValue StipulationValue_2("STRING_1569328596");
    noStipulations_0_0.set(StipulationValue_2);
    Stipulations_NoStipulations_2.insert(StipulationValue_2.getString());
    all_values.push_back(Stipulations_NoStipulations_2);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_3;
    FIX::StipulationType StipulationType_3("STRING_CPP");
    noStipulations_0_1.set(StipulationType_3);
    Stipulations_NoStipulations_3.insert(StipulationType_3.getString());
    FIX::StipulationValue StipulationValue_3("STRING_498444935");
    noStipulations_0_1.set(StipulationValue_3);
    Stipulations_NoStipulations_3.insert(StipulationValue_3.getString());
    all_values.push_back(Stipulations_NoStipulations_3);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_4;
    FIX::StipulationType StipulationType_4("STRING_MAXORDQTY");
    noStipulations_0_2.set(StipulationType_4);
    Stipulations_NoStipulations_4.insert(StipulationType_4.getString());
    FIX::StipulationValue StipulationValue_4("STRING_1774820938");
    noStipulations_0_2.set(StipulationValue_4);
    Stipulations_NoStipulations_4.insert(StipulationValue_4.getString());
    all_values.push_back(Stipulations_NoStipulations_4);

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationInstructionAlert::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_4;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_4("DATA_1684676965");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingIssuer_4.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_4(143810000);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingIssuerLen_4.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_4("DATA_26155482");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingSecurityDesc_4.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_4(1533701908);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingSecurityDescLen_4.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_4;
    UnderlyingAdjustedQuantity_4.setString("7971042");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_4);
    UnderlyingInstrument_4.insert(UnderlyingAdjustedQuantity_4.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_4;
    UnderlyingAllocationPercent_4.setString("4.340000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_4);
    UnderlyingInstrument_4.insert(UnderlyingAllocationPercent_4.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_4;
    UnderlyingAttachmentPoint_4.setString("25.960000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_4);
    UnderlyingInstrument_4.insert(UnderlyingAttachmentPoint_4.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_4("STRING_1304604667");
    noUnderlyings_0_0.set(UnderlyingCFICode_4);
    UnderlyingInstrument_4.insert(UnderlyingCFICode_4.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_4("STRING_828072403");
    noUnderlyings_0_0.set(UnderlyingCPProgram_4);
    UnderlyingInstrument_4.insert(UnderlyingCPProgram_4.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_4("STRING_1115917596");
    noUnderlyings_0_0.set(UnderlyingCPRegType_4);
    UnderlyingInstrument_4.insert(UnderlyingCPRegType_4.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_4;
    UnderlyingCapValue_4.setString("21295512");
    noUnderlyings_0_0.set(UnderlyingCapValue_4);
    UnderlyingInstrument_4.insert(UnderlyingCapValue_4.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_4;
    UnderlyingCashAmount_4.setString("8810130");
    noUnderlyings_0_0.set(UnderlyingCashAmount_4);
    UnderlyingInstrument_4.insert(UnderlyingCashAmount_4.getString());
    FIX::UnderlyingCashType UnderlyingCashType_4("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_4);
    UnderlyingInstrument_4.insert(UnderlyingCashType_4.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_4;
    UnderlyingContractMultiplier_4.setString("13230715");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_4);
    UnderlyingInstrument_4.insert(UnderlyingContractMultiplier_4.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_4(1790450401);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_4);
    UnderlyingInstrument_4.insert(UnderlyingContractMultiplierUnit_4.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_4("COUNTRY_2147350173");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_4);
    UnderlyingInstrument_4.insert(UnderlyingCountryOfIssue_4.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_4("LOCALMKTDATE_1117698218");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_4);
    UnderlyingInstrument_4.insert(UnderlyingCouponPaymentDate_4.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_4;
    UnderlyingCouponRate_4.setString("0.850000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_4);
    UnderlyingInstrument_4.insert(UnderlyingCouponRate_4.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_4("STRING_754491508");
    noUnderlyings_0_0.set(UnderlyingCreditRating_4);
    UnderlyingInstrument_4.insert(UnderlyingCreditRating_4.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_4("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_4);
    UnderlyingInstrument_4.insert(UnderlyingCurrency_4.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_4;
    UnderlyingCurrentValue_4.setString("2049826");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_4);
    UnderlyingInstrument_4.insert(UnderlyingCurrentValue_4.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_4;
    UnderlyingDetachmentPoint_4.setString("61.340000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_4);
    UnderlyingInstrument_4.insert(UnderlyingDetachmentPoint_4.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_4;
    UnderlyingDirtyPrice_4.setString("14264291");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_4);
    UnderlyingInstrument_4.insert(UnderlyingDirtyPrice_4.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_4;
    UnderlyingEndPrice_4.setString("20836751");
    noUnderlyings_0_0.set(UnderlyingEndPrice_4);
    UnderlyingInstrument_4.insert(UnderlyingEndPrice_4.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_4;
    UnderlyingEndValue_4.setString("7388210");
    noUnderlyings_0_0.set(UnderlyingEndValue_4);
    UnderlyingInstrument_4.insert(UnderlyingEndValue_4.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_4(1668013257);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_4);
    UnderlyingInstrument_4.insert(UnderlyingExerciseStyle_4.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_4;
    UnderlyingFXRate_4.setString("4346364");
    noUnderlyings_0_0.set(UnderlyingFXRate_4);
    UnderlyingInstrument_4.insert(UnderlyingFXRate_4.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_4('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_4);
    UnderlyingInstrument_4.insert(UnderlyingFXRateCalc_4.getString());
    FIX::UnderlyingFactor UnderlyingFactor_4;
    UnderlyingFactor_4.setString("12953505");
    noUnderlyings_0_0.set(UnderlyingFactor_4);
    UnderlyingInstrument_4.insert(UnderlyingFactor_4.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_4(248784455);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_4);
    UnderlyingInstrument_4.insert(UnderlyingFlowScheduleType_4.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_4("STRING_752846064");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_4);
    UnderlyingInstrument_4.insert(UnderlyingInstrRegistry_4.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_4("LOCALMKTDATE_1439160548");
    noUnderlyings_0_0.set(UnderlyingIssueDate_4);
    UnderlyingInstrument_4.insert(UnderlyingIssueDate_4.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_4("STRING_274939938");
    noUnderlyings_0_0.set(UnderlyingIssuer_4);
    UnderlyingInstrument_4.insert(UnderlyingIssuer_4.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_4("STRING_139064324");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_4);
    UnderlyingInstrument_4.insert(UnderlyingLocaleOfIssue_4.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_4("LOCALMKTDATE_88781198");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_4);
    UnderlyingInstrument_4.insert(UnderlyingMaturityDate_4.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_4("MONTHYEAR_1566280372");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_4);
    UnderlyingInstrument_4.insert(UnderlyingMaturityMonthYear_4.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_4("TZTIMEONLY_503906920");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_4);
    UnderlyingInstrument_4.insert(UnderlyingMaturityTime_4.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_4;
    UnderlyingNotionalPercentageOutstanding_4.setString("58.660000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_4);
    UnderlyingInstrument_4.insert(UnderlyingNotionalPercentageOutstanding_4.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_4('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_4);
    UnderlyingInstrument_4.insert(UnderlyingOptAttribute_4.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_4;
    UnderlyingOriginalNotionalPercentageOutstanding_4.setString("45.170000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_4);
    UnderlyingInstrument_4.insert(UnderlyingOriginalNotionalPercentageOutstanding_4.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_4("STRING_1375453455");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_4);
    UnderlyingInstrument_4.insert(UnderlyingPriceUnitOfMeasure_4.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_4;
    UnderlyingPriceUnitOfMeasureQty_4.setString("11278821");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_4);
    UnderlyingInstrument_4.insert(UnderlyingPriceUnitOfMeasureQty_4.getString());
    FIX::UnderlyingProduct UnderlyingProduct_4(1783213337);
    noUnderlyings_0_0.set(UnderlyingProduct_4);
    UnderlyingInstrument_4.insert(UnderlyingProduct_4.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_4(551041389);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_4);
    UnderlyingInstrument_4.insert(UnderlyingPutOrCall_4.getString());
    FIX::UnderlyingPx UnderlyingPx_4;
    UnderlyingPx_4.setString("7708489");
    noUnderlyings_0_0.set(UnderlyingPx_4);
    UnderlyingInstrument_4.insert(UnderlyingPx_4.getString());
    FIX::UnderlyingQty UnderlyingQty_4;
    UnderlyingQty_4.setString("17830798");
    noUnderlyings_0_0.set(UnderlyingQty_4);
    UnderlyingInstrument_4.insert(UnderlyingQty_4.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_4("LOCALMKTDATE_1668739607");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_4);
    UnderlyingInstrument_4.insert(UnderlyingRedemptionDate_4.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_4("STRING_1995419021");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_4);
    UnderlyingInstrument_4.insert(UnderlyingRepoCollateralSecurityType_4.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_4;
    UnderlyingRepurchaseRate_4.setString("77.230000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_4);
    UnderlyingInstrument_4.insert(UnderlyingRepurchaseRate_4.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_4(146796538);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_4);
    UnderlyingInstrument_4.insert(UnderlyingRepurchaseTerm_4.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_4("STRING_1719373295");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_4);
    UnderlyingInstrument_4.insert(UnderlyingRestructuringType_4.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_4("STRING_595070372");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityDesc_4.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_4("EXCHANGE_1463772673");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityExchange_4.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_4("STRING_998318833");
    noUnderlyings_0_0.set(UnderlyingSecurityID_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityID_4.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_4("STRING_531261839");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityIDSource_4.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_4("STRING_55110108");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_4);
    UnderlyingInstrument_4.insert(UnderlyingSecuritySubType_4.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_4("STRING_518848443");
    noUnderlyings_0_0.set(UnderlyingSecurityType_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityType_4.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_4("STRING_965898241");
    noUnderlyings_0_0.set(UnderlyingSeniority_4);
    UnderlyingInstrument_4.insert(UnderlyingSeniority_4.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_4("STRING_1270762854");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_4);
    UnderlyingInstrument_4.insert(UnderlyingSettlMethod_4.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_4(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_4);
    UnderlyingInstrument_4.insert(UnderlyingSettlementType_4.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_4;
    UnderlyingStartValue_4.setString("12146826");
    noUnderlyings_0_0.set(UnderlyingStartValue_4);
    UnderlyingInstrument_4.insert(UnderlyingStartValue_4.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_4("STRING_2023608918");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_4);
    UnderlyingInstrument_4.insert(UnderlyingStateOrProvinceOfIssue_4.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_4("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_4);
    UnderlyingInstrument_4.insert(UnderlyingStrikeCurrency_4.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_4;
    UnderlyingStrikePrice_4.setString("151895");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_4);
    UnderlyingInstrument_4.insert(UnderlyingStrikePrice_4.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_4("STRING_1194657090");
    noUnderlyings_0_0.set(UnderlyingSymbol_4);
    UnderlyingInstrument_4.insert(UnderlyingSymbol_4.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_4("STRING_908419359");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_4);
    UnderlyingInstrument_4.insert(UnderlyingSymbolSfx_4.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_4("STRING_519096515");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_4);
    UnderlyingInstrument_4.insert(UnderlyingTimeUnit_4.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_4("STRING_440559308");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_4);
    UnderlyingInstrument_4.insert(UnderlyingUnitOfMeasure_4.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_4;
    UnderlyingUnitOfMeasureQty_4.setString("11552884");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_4);
    UnderlyingInstrument_4.insert(UnderlyingUnitOfMeasureQty_4.getString());
    all_values.push_back(UnderlyingInstrument_4);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_7;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_7("STRING_1816012763");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_7);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_7.insert(UnderlyingSecurityAltID_7.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_7("STRING_135687022");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_7);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_7.insert(UnderlyingSecurityAltIDSource_7.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_7);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_8;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_8("STRING_1774650722");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_8);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_8.insert(UnderlyingSecurityAltID_8.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_8("STRING_219570505");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_8);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_8.insert(UnderlyingSecurityAltIDSource_8.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_8);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_9;
      FIX::UnderlyingStipType UnderlyingStipType_9("STRING_1410246937");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_9);
      UnderlyingStipulations_NoUnderlyingStips_9.insert(UnderlyingStipType_9.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_9("STRING_1888310112");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_9);
      UnderlyingStipulations_NoUnderlyingStips_9.insert(UnderlyingStipValue_9.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_9);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_10;
      FIX::UnderlyingStipType UnderlyingStipType_10("STRING_754471332");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_10);
      UnderlyingStipulations_NoUnderlyingStips_10.insert(UnderlyingStipType_10.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_10("STRING_1800334660");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_10);
      UnderlyingStipulations_NoUnderlyingStips_10.insert(UnderlyingStipValue_10.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_10);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_11;
      FIX::UnderlyingStipType UnderlyingStipType_11("STRING_2035106651");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_11);
      UnderlyingStipulations_NoUnderlyingStips_11.insert(UnderlyingStipType_11.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_11("STRING_326360979");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_11);
      UnderlyingStipulations_NoUnderlyingStips_11.insert(UnderlyingStipValue_11.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_11);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_9;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_9("STRING_1351395676");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_9);
      UndlyInstrumentParties_NoUndlyInstrumentParties_9.insert(UnderlyingInstrumentPartyID_9.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_9('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_9);
      UndlyInstrumentParties_NoUndlyInstrumentParties_9.insert(UnderlyingInstrumentPartyIDSource_9.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_9(779183223);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_9);
      UndlyInstrumentParties_NoUndlyInstrumentParties_9.insert(UnderlyingInstrumentPartyRole_9.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_9);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_19("STRING_1843528255");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_19);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19.insert(UnderlyingInstrumentPartySubID_19.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_19(1745081464);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_19);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19.insert(UnderlyingInstrumentPartySubIDType_19.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_20("STRING_529784990");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_20);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20.insert(UnderlyingInstrumentPartySubID_20.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_20(1510243598);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_20);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20.insert(UnderlyingInstrumentPartySubIDType_20.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_10;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_10("STRING_812280513");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_10);
      UndlyInstrumentParties_NoUndlyInstrumentParties_10.insert(UnderlyingInstrumentPartyID_10.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_10('4');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_10);
      UndlyInstrumentParties_NoUndlyInstrumentParties_10.insert(UnderlyingInstrumentPartyIDSource_10.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_10(468635842);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_10);
      UndlyInstrumentParties_NoUndlyInstrumentParties_10.insert(UnderlyingInstrumentPartyRole_10.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_10);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_21("STRING_421099856");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_21);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21.insert(UnderlyingInstrumentPartySubID_21.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_21(1663292932);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_21);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21.insert(UnderlyingInstrumentPartySubIDType_21.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_22("STRING_1062838860");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_22);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22.insert(UnderlyingInstrumentPartySubID_22.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_22(940196371);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_22);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22.insert(UnderlyingInstrumentPartySubIDType_22.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_23("STRING_2103852240");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_23);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23.insert(UnderlyingInstrumentPartySubID_23.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_23(70643699);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_23);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23.insert(UnderlyingInstrumentPartySubIDType_23.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_5;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_5("DATA_931633756");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingIssuer_5.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_5(1772381355);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingIssuerLen_5.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_5("DATA_206330721");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingSecurityDesc_5.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_5(558800830);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingSecurityDescLen_5.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_5;
    UnderlyingAdjustedQuantity_5.setString("19919518");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_5);
    UnderlyingInstrument_5.insert(UnderlyingAdjustedQuantity_5.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_5;
    UnderlyingAllocationPercent_5.setString("66.790000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_5);
    UnderlyingInstrument_5.insert(UnderlyingAllocationPercent_5.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_5;
    UnderlyingAttachmentPoint_5.setString("77.670000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_5);
    UnderlyingInstrument_5.insert(UnderlyingAttachmentPoint_5.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_5("STRING_1732778325");
    noUnderlyings_0_1.set(UnderlyingCFICode_5);
    UnderlyingInstrument_5.insert(UnderlyingCFICode_5.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_5("STRING_1867338011");
    noUnderlyings_0_1.set(UnderlyingCPProgram_5);
    UnderlyingInstrument_5.insert(UnderlyingCPProgram_5.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_5("STRING_1621898779");
    noUnderlyings_0_1.set(UnderlyingCPRegType_5);
    UnderlyingInstrument_5.insert(UnderlyingCPRegType_5.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_5;
    UnderlyingCapValue_5.setString("16204013");
    noUnderlyings_0_1.set(UnderlyingCapValue_5);
    UnderlyingInstrument_5.insert(UnderlyingCapValue_5.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_5;
    UnderlyingCashAmount_5.setString("462153");
    noUnderlyings_0_1.set(UnderlyingCashAmount_5);
    UnderlyingInstrument_5.insert(UnderlyingCashAmount_5.getString());
    FIX::UnderlyingCashType UnderlyingCashType_5("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_5);
    UnderlyingInstrument_5.insert(UnderlyingCashType_5.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_5;
    UnderlyingContractMultiplier_5.setString("8243133");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_5);
    UnderlyingInstrument_5.insert(UnderlyingContractMultiplier_5.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_5(1370895155);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_5);
    UnderlyingInstrument_5.insert(UnderlyingContractMultiplierUnit_5.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_5("COUNTRY_501519738");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_5);
    UnderlyingInstrument_5.insert(UnderlyingCountryOfIssue_5.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_5("LOCALMKTDATE_83335492");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_5);
    UnderlyingInstrument_5.insert(UnderlyingCouponPaymentDate_5.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_5;
    UnderlyingCouponRate_5.setString("97.620000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_5);
    UnderlyingInstrument_5.insert(UnderlyingCouponRate_5.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_5("STRING_99117554");
    noUnderlyings_0_1.set(UnderlyingCreditRating_5);
    UnderlyingInstrument_5.insert(UnderlyingCreditRating_5.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_5("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_5);
    UnderlyingInstrument_5.insert(UnderlyingCurrency_5.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_5;
    UnderlyingCurrentValue_5.setString("9113980");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_5);
    UnderlyingInstrument_5.insert(UnderlyingCurrentValue_5.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_5;
    UnderlyingDetachmentPoint_5.setString("7.430000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_5);
    UnderlyingInstrument_5.insert(UnderlyingDetachmentPoint_5.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_5;
    UnderlyingDirtyPrice_5.setString("8983355");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_5);
    UnderlyingInstrument_5.insert(UnderlyingDirtyPrice_5.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_5;
    UnderlyingEndPrice_5.setString("10658175");
    noUnderlyings_0_1.set(UnderlyingEndPrice_5);
    UnderlyingInstrument_5.insert(UnderlyingEndPrice_5.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_5;
    UnderlyingEndValue_5.setString("14401305");
    noUnderlyings_0_1.set(UnderlyingEndValue_5);
    UnderlyingInstrument_5.insert(UnderlyingEndValue_5.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_5(414144839);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_5);
    UnderlyingInstrument_5.insert(UnderlyingExerciseStyle_5.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_5;
    UnderlyingFXRate_5.setString("21286564");
    noUnderlyings_0_1.set(UnderlyingFXRate_5);
    UnderlyingInstrument_5.insert(UnderlyingFXRate_5.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_5('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_5);
    UnderlyingInstrument_5.insert(UnderlyingFXRateCalc_5.getString());
    FIX::UnderlyingFactor UnderlyingFactor_5;
    UnderlyingFactor_5.setString("3705134");
    noUnderlyings_0_1.set(UnderlyingFactor_5);
    UnderlyingInstrument_5.insert(UnderlyingFactor_5.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_5(51816479);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_5);
    UnderlyingInstrument_5.insert(UnderlyingFlowScheduleType_5.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_5("STRING_1164477079");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_5);
    UnderlyingInstrument_5.insert(UnderlyingInstrRegistry_5.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_5("LOCALMKTDATE_2142894786");
    noUnderlyings_0_1.set(UnderlyingIssueDate_5);
    UnderlyingInstrument_5.insert(UnderlyingIssueDate_5.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_5("STRING_258147200");
    noUnderlyings_0_1.set(UnderlyingIssuer_5);
    UnderlyingInstrument_5.insert(UnderlyingIssuer_5.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_5("STRING_1723277909");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_5);
    UnderlyingInstrument_5.insert(UnderlyingLocaleOfIssue_5.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_5("LOCALMKTDATE_1987362999");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_5);
    UnderlyingInstrument_5.insert(UnderlyingMaturityDate_5.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_5("MONTHYEAR_1371013880");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_5);
    UnderlyingInstrument_5.insert(UnderlyingMaturityMonthYear_5.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_5("TZTIMEONLY_1544842028");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_5);
    UnderlyingInstrument_5.insert(UnderlyingMaturityTime_5.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_5;
    UnderlyingNotionalPercentageOutstanding_5.setString("76.760000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_5);
    UnderlyingInstrument_5.insert(UnderlyingNotionalPercentageOutstanding_5.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_5('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_5);
    UnderlyingInstrument_5.insert(UnderlyingOptAttribute_5.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_5;
    UnderlyingOriginalNotionalPercentageOutstanding_5.setString("71.590000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_5);
    UnderlyingInstrument_5.insert(UnderlyingOriginalNotionalPercentageOutstanding_5.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_5("STRING_1045575356");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_5);
    UnderlyingInstrument_5.insert(UnderlyingPriceUnitOfMeasure_5.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_5;
    UnderlyingPriceUnitOfMeasureQty_5.setString("11370835");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_5);
    UnderlyingInstrument_5.insert(UnderlyingPriceUnitOfMeasureQty_5.getString());
    FIX::UnderlyingProduct UnderlyingProduct_5(741593674);
    noUnderlyings_0_1.set(UnderlyingProduct_5);
    UnderlyingInstrument_5.insert(UnderlyingProduct_5.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_5(1869888712);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_5);
    UnderlyingInstrument_5.insert(UnderlyingPutOrCall_5.getString());
    FIX::UnderlyingPx UnderlyingPx_5;
    UnderlyingPx_5.setString("3604950");
    noUnderlyings_0_1.set(UnderlyingPx_5);
    UnderlyingInstrument_5.insert(UnderlyingPx_5.getString());
    FIX::UnderlyingQty UnderlyingQty_5;
    UnderlyingQty_5.setString("12431134");
    noUnderlyings_0_1.set(UnderlyingQty_5);
    UnderlyingInstrument_5.insert(UnderlyingQty_5.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_5("LOCALMKTDATE_1953224204");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_5);
    UnderlyingInstrument_5.insert(UnderlyingRedemptionDate_5.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_5("STRING_1427434855");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_5);
    UnderlyingInstrument_5.insert(UnderlyingRepoCollateralSecurityType_5.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_5;
    UnderlyingRepurchaseRate_5.setString("9.660000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_5);
    UnderlyingInstrument_5.insert(UnderlyingRepurchaseRate_5.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_5(418861038);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_5);
    UnderlyingInstrument_5.insert(UnderlyingRepurchaseTerm_5.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_5("STRING_1857134568");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_5);
    UnderlyingInstrument_5.insert(UnderlyingRestructuringType_5.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_5("STRING_106145386");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityDesc_5.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_5("EXCHANGE_1437891782");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityExchange_5.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_5("STRING_607986475");
    noUnderlyings_0_1.set(UnderlyingSecurityID_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityID_5.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_5("STRING_1171962955");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityIDSource_5.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_5("STRING_730538733");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_5);
    UnderlyingInstrument_5.insert(UnderlyingSecuritySubType_5.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_5("STRING_1022131314");
    noUnderlyings_0_1.set(UnderlyingSecurityType_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityType_5.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_5("STRING_1153135735");
    noUnderlyings_0_1.set(UnderlyingSeniority_5);
    UnderlyingInstrument_5.insert(UnderlyingSeniority_5.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_5("STRING_963382056");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_5);
    UnderlyingInstrument_5.insert(UnderlyingSettlMethod_5.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_5(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_5);
    UnderlyingInstrument_5.insert(UnderlyingSettlementType_5.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_5;
    UnderlyingStartValue_5.setString("12049522");
    noUnderlyings_0_1.set(UnderlyingStartValue_5);
    UnderlyingInstrument_5.insert(UnderlyingStartValue_5.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_5("STRING_2127859135");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_5);
    UnderlyingInstrument_5.insert(UnderlyingStateOrProvinceOfIssue_5.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_5("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_5);
    UnderlyingInstrument_5.insert(UnderlyingStrikeCurrency_5.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_5;
    UnderlyingStrikePrice_5.setString("17036533");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_5);
    UnderlyingInstrument_5.insert(UnderlyingStrikePrice_5.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_5("STRING_1227935235");
    noUnderlyings_0_1.set(UnderlyingSymbol_5);
    UnderlyingInstrument_5.insert(UnderlyingSymbol_5.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_5("STRING_686629647");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_5);
    UnderlyingInstrument_5.insert(UnderlyingSymbolSfx_5.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_5("STRING_1101011776");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_5);
    UnderlyingInstrument_5.insert(UnderlyingTimeUnit_5.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_5("STRING_653109263");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_5);
    UnderlyingInstrument_5.insert(UnderlyingUnitOfMeasure_5.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_5;
    UnderlyingUnitOfMeasureQty_5.setString("17774978");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_5);
    UnderlyingInstrument_5.insert(UnderlyingUnitOfMeasureQty_5.getString());
    all_values.push_back(UnderlyingInstrument_5);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_9;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_9("STRING_1698684619");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_9);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_9.insert(UnderlyingSecurityAltID_9.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_9("STRING_767097829");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_9);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_9.insert(UnderlyingSecurityAltIDSource_9.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_9);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_10;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_10("STRING_714378961");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_10);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_10.insert(UnderlyingSecurityAltID_10.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_10("STRING_1421089683");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_10);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_10.insert(UnderlyingSecurityAltIDSource_10.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_10);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_11;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_11("STRING_1127592922");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_11);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_11.insert(UnderlyingSecurityAltID_11.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_11("STRING_1957492373");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_11);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_11.insert(UnderlyingSecurityAltIDSource_11.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_11);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_12;
      FIX::UnderlyingStipType UnderlyingStipType_12("STRING_407544129");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_12);
      UnderlyingStipulations_NoUnderlyingStips_12.insert(UnderlyingStipType_12.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_12("STRING_1152239692");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_12);
      UnderlyingStipulations_NoUnderlyingStips_12.insert(UnderlyingStipValue_12.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_12);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_11;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_11("STRING_117195050");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_11);
      UndlyInstrumentParties_NoUndlyInstrumentParties_11.insert(UnderlyingInstrumentPartyID_11.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_11('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_11);
      UndlyInstrumentParties_NoUndlyInstrumentParties_11.insert(UnderlyingInstrumentPartyIDSource_11.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_11(936099411);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_11);
      UndlyInstrumentParties_NoUndlyInstrumentParties_11.insert(UnderlyingInstrumentPartyRole_11.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_11);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_24("STRING_282864385");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_24);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24.insert(UnderlyingInstrumentPartySubID_24.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_24(1666638145);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_24);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24.insert(UnderlyingInstrumentPartySubIDType_24.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_6;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_6("DATA_1747312840");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingIssuer_6.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_6(1436000121);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingIssuerLen_6.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_6("DATA_482536553");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingSecurityDesc_6.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_6(992473937);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingSecurityDescLen_6.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_6;
    UnderlyingAdjustedQuantity_6.setString("4934686");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_6);
    UnderlyingInstrument_6.insert(UnderlyingAdjustedQuantity_6.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_6;
    UnderlyingAllocationPercent_6.setString("20.410000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_6);
    UnderlyingInstrument_6.insert(UnderlyingAllocationPercent_6.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_6;
    UnderlyingAttachmentPoint_6.setString("61.730000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_6);
    UnderlyingInstrument_6.insert(UnderlyingAttachmentPoint_6.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_6("STRING_1956568103");
    noUnderlyings_0_2.set(UnderlyingCFICode_6);
    UnderlyingInstrument_6.insert(UnderlyingCFICode_6.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_6("STRING_19081789");
    noUnderlyings_0_2.set(UnderlyingCPProgram_6);
    UnderlyingInstrument_6.insert(UnderlyingCPProgram_6.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_6("STRING_1460981408");
    noUnderlyings_0_2.set(UnderlyingCPRegType_6);
    UnderlyingInstrument_6.insert(UnderlyingCPRegType_6.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_6;
    UnderlyingCapValue_6.setString("4957141");
    noUnderlyings_0_2.set(UnderlyingCapValue_6);
    UnderlyingInstrument_6.insert(UnderlyingCapValue_6.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_6;
    UnderlyingCashAmount_6.setString("11200935");
    noUnderlyings_0_2.set(UnderlyingCashAmount_6);
    UnderlyingInstrument_6.insert(UnderlyingCashAmount_6.getString());
    FIX::UnderlyingCashType UnderlyingCashType_6("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_6);
    UnderlyingInstrument_6.insert(UnderlyingCashType_6.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_6;
    UnderlyingContractMultiplier_6.setString("1257283");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_6);
    UnderlyingInstrument_6.insert(UnderlyingContractMultiplier_6.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_6(1092878853);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_6);
    UnderlyingInstrument_6.insert(UnderlyingContractMultiplierUnit_6.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_6("COUNTRY_1665291642");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_6);
    UnderlyingInstrument_6.insert(UnderlyingCountryOfIssue_6.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_6("LOCALMKTDATE_892826175");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_6);
    UnderlyingInstrument_6.insert(UnderlyingCouponPaymentDate_6.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_6;
    UnderlyingCouponRate_6.setString("78.150000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_6);
    UnderlyingInstrument_6.insert(UnderlyingCouponRate_6.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_6("STRING_938897677");
    noUnderlyings_0_2.set(UnderlyingCreditRating_6);
    UnderlyingInstrument_6.insert(UnderlyingCreditRating_6.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_6("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_6);
    UnderlyingInstrument_6.insert(UnderlyingCurrency_6.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_6;
    UnderlyingCurrentValue_6.setString("182442");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_6);
    UnderlyingInstrument_6.insert(UnderlyingCurrentValue_6.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_6;
    UnderlyingDetachmentPoint_6.setString("95.780000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_6);
    UnderlyingInstrument_6.insert(UnderlyingDetachmentPoint_6.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_6;
    UnderlyingDirtyPrice_6.setString("6220225");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_6);
    UnderlyingInstrument_6.insert(UnderlyingDirtyPrice_6.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_6;
    UnderlyingEndPrice_6.setString("16639355");
    noUnderlyings_0_2.set(UnderlyingEndPrice_6);
    UnderlyingInstrument_6.insert(UnderlyingEndPrice_6.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_6;
    UnderlyingEndValue_6.setString("3976746");
    noUnderlyings_0_2.set(UnderlyingEndValue_6);
    UnderlyingInstrument_6.insert(UnderlyingEndValue_6.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_6(1880407663);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_6);
    UnderlyingInstrument_6.insert(UnderlyingExerciseStyle_6.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_6;
    UnderlyingFXRate_6.setString("4525513");
    noUnderlyings_0_2.set(UnderlyingFXRate_6);
    UnderlyingInstrument_6.insert(UnderlyingFXRate_6.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_6('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_6);
    UnderlyingInstrument_6.insert(UnderlyingFXRateCalc_6.getString());
    FIX::UnderlyingFactor UnderlyingFactor_6;
    UnderlyingFactor_6.setString("157884");
    noUnderlyings_0_2.set(UnderlyingFactor_6);
    UnderlyingInstrument_6.insert(UnderlyingFactor_6.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_6(2119189454);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_6);
    UnderlyingInstrument_6.insert(UnderlyingFlowScheduleType_6.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_6("STRING_722685346");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_6);
    UnderlyingInstrument_6.insert(UnderlyingInstrRegistry_6.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_6("LOCALMKTDATE_1451788521");
    noUnderlyings_0_2.set(UnderlyingIssueDate_6);
    UnderlyingInstrument_6.insert(UnderlyingIssueDate_6.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_6("STRING_454242360");
    noUnderlyings_0_2.set(UnderlyingIssuer_6);
    UnderlyingInstrument_6.insert(UnderlyingIssuer_6.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_6("STRING_1715159283");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_6);
    UnderlyingInstrument_6.insert(UnderlyingLocaleOfIssue_6.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_6("LOCALMKTDATE_1945257209");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_6);
    UnderlyingInstrument_6.insert(UnderlyingMaturityDate_6.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_6("MONTHYEAR_917154401");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_6);
    UnderlyingInstrument_6.insert(UnderlyingMaturityMonthYear_6.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_6("TZTIMEONLY_1948205457");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_6);
    UnderlyingInstrument_6.insert(UnderlyingMaturityTime_6.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_6;
    UnderlyingNotionalPercentageOutstanding_6.setString("16.650000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_6);
    UnderlyingInstrument_6.insert(UnderlyingNotionalPercentageOutstanding_6.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_6('9');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_6);
    UnderlyingInstrument_6.insert(UnderlyingOptAttribute_6.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_6;
    UnderlyingOriginalNotionalPercentageOutstanding_6.setString("32.170000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_6);
    UnderlyingInstrument_6.insert(UnderlyingOriginalNotionalPercentageOutstanding_6.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_6("STRING_102572120");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_6);
    UnderlyingInstrument_6.insert(UnderlyingPriceUnitOfMeasure_6.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_6;
    UnderlyingPriceUnitOfMeasureQty_6.setString("20563297");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_6);
    UnderlyingInstrument_6.insert(UnderlyingPriceUnitOfMeasureQty_6.getString());
    FIX::UnderlyingProduct UnderlyingProduct_6(1228310241);
    noUnderlyings_0_2.set(UnderlyingProduct_6);
    UnderlyingInstrument_6.insert(UnderlyingProduct_6.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_6(228300466);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_6);
    UnderlyingInstrument_6.insert(UnderlyingPutOrCall_6.getString());
    FIX::UnderlyingPx UnderlyingPx_6;
    UnderlyingPx_6.setString("10017249");
    noUnderlyings_0_2.set(UnderlyingPx_6);
    UnderlyingInstrument_6.insert(UnderlyingPx_6.getString());
    FIX::UnderlyingQty UnderlyingQty_6;
    UnderlyingQty_6.setString("7461182");
    noUnderlyings_0_2.set(UnderlyingQty_6);
    UnderlyingInstrument_6.insert(UnderlyingQty_6.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_6("LOCALMKTDATE_1121126641");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_6);
    UnderlyingInstrument_6.insert(UnderlyingRedemptionDate_6.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_6("STRING_661499129");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_6);
    UnderlyingInstrument_6.insert(UnderlyingRepoCollateralSecurityType_6.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_6;
    UnderlyingRepurchaseRate_6.setString("59.130000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_6);
    UnderlyingInstrument_6.insert(UnderlyingRepurchaseRate_6.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_6(994062090);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_6);
    UnderlyingInstrument_6.insert(UnderlyingRepurchaseTerm_6.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_6("STRING_131282021");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_6);
    UnderlyingInstrument_6.insert(UnderlyingRestructuringType_6.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_6("STRING_1703260181");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityDesc_6.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_6("EXCHANGE_1274541668");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityExchange_6.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_6("STRING_753304606");
    noUnderlyings_0_2.set(UnderlyingSecurityID_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityID_6.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_6("STRING_1219712079");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityIDSource_6.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_6("STRING_1672216297");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_6);
    UnderlyingInstrument_6.insert(UnderlyingSecuritySubType_6.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_6("STRING_486228621");
    noUnderlyings_0_2.set(UnderlyingSecurityType_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityType_6.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_6("STRING_1672263389");
    noUnderlyings_0_2.set(UnderlyingSeniority_6);
    UnderlyingInstrument_6.insert(UnderlyingSeniority_6.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_6("STRING_647588803");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_6);
    UnderlyingInstrument_6.insert(UnderlyingSettlMethod_6.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_6(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_6);
    UnderlyingInstrument_6.insert(UnderlyingSettlementType_6.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_6;
    UnderlyingStartValue_6.setString("16439691");
    noUnderlyings_0_2.set(UnderlyingStartValue_6);
    UnderlyingInstrument_6.insert(UnderlyingStartValue_6.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_6("STRING_1370274149");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_6);
    UnderlyingInstrument_6.insert(UnderlyingStateOrProvinceOfIssue_6.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_6("CAN");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_6);
    UnderlyingInstrument_6.insert(UnderlyingStrikeCurrency_6.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_6;
    UnderlyingStrikePrice_6.setString("9379497");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_6);
    UnderlyingInstrument_6.insert(UnderlyingStrikePrice_6.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_6("STRING_1751579104");
    noUnderlyings_0_2.set(UnderlyingSymbol_6);
    UnderlyingInstrument_6.insert(UnderlyingSymbol_6.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_6("STRING_867882308");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_6);
    UnderlyingInstrument_6.insert(UnderlyingSymbolSfx_6.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_6("STRING_738671593");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_6);
    UnderlyingInstrument_6.insert(UnderlyingTimeUnit_6.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_6("STRING_1358437121");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_6);
    UnderlyingInstrument_6.insert(UnderlyingUnitOfMeasure_6.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_6;
    UnderlyingUnitOfMeasureQty_6.setString("18041184");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_6);
    UnderlyingInstrument_6.insert(UnderlyingUnitOfMeasureQty_6.getString());
    all_values.push_back(UnderlyingInstrument_6);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_12;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_12("STRING_1461009241");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_12);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_12.insert(UnderlyingSecurityAltID_12.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_12("STRING_1712964607");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_12);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_12.insert(UnderlyingSecurityAltIDSource_12.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_12);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_13;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_13("STRING_1081201404");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_13);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_13.insert(UnderlyingSecurityAltID_13.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_13("STRING_1689309707");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_13);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_13.insert(UnderlyingSecurityAltIDSource_13.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_13);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_14;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_14("STRING_567205921");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_14);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_14.insert(UnderlyingSecurityAltID_14.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_14("STRING_1827319639");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_14);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_14.insert(UnderlyingSecurityAltIDSource_14.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_14);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_13;
      FIX::UnderlyingStipType UnderlyingStipType_13("STRING_1228705050");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_13);
      UnderlyingStipulations_NoUnderlyingStips_13.insert(UnderlyingStipType_13.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_13("STRING_1364851904");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_13);
      UnderlyingStipulations_NoUnderlyingStips_13.insert(UnderlyingStipValue_13.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_13);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_14;
      FIX::UnderlyingStipType UnderlyingStipType_14("STRING_1657014790");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_14);
      UnderlyingStipulations_NoUnderlyingStips_14.insert(UnderlyingStipType_14.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_14("STRING_1359987072");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_14);
      UnderlyingStipulations_NoUnderlyingStips_14.insert(UnderlyingStipValue_14.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_14);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_12;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_12("STRING_784072811");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_12);
      UndlyInstrumentParties_NoUndlyInstrumentParties_12.insert(UnderlyingInstrumentPartyID_12.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_12('2');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_12);
      UndlyInstrumentParties_NoUndlyInstrumentParties_12.insert(UnderlyingInstrumentPartyIDSource_12.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_12(2140340517);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_12);
      UndlyInstrumentParties_NoUndlyInstrumentParties_12.insert(UnderlyingInstrumentPartyRole_12.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_12);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_25("STRING_452036651");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_25);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25.insert(UnderlyingInstrumentPartySubID_25.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_25(1665120258);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_25);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25.insert(UnderlyingInstrumentPartySubIDType_25.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_26("STRING_956394263");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_26);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26.insert(UnderlyingInstrumentPartySubID_26.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_26(954053672);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_26);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26.insert(UnderlyingInstrumentPartySubIDType_26.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_1;
  FIX::Yield Yield_1;
  Yield_1.setString("58.060000");
  msg.set(Yield_1);
  YieldData_1.insert(Yield_1.getString());
  FIX::YieldCalcDate YieldCalcDate_1("LOCALMKTDATE_179184764");
  msg.set(YieldCalcDate_1);
  YieldData_1.insert(YieldCalcDate_1.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_1("LOCALMKTDATE_760375567");
  msg.set(YieldRedemptionDate_1);
  YieldData_1.insert(YieldRedemptionDate_1.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_1;
  YieldRedemptionPrice_1.setString("11123337");
  msg.set(YieldRedemptionPrice_1);
  YieldData_1.insert(YieldRedemptionPrice_1.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_1(1117134548);
  msg.set(YieldRedemptionPriceType_1);
  YieldData_1.insert(YieldRedemptionPriceType_1.getString());
  FIX::YieldType YieldType_1("STRING_AFTERTAX");
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
