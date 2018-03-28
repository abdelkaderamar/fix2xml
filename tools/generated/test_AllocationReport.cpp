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
  AccruedInterestAmt_2.setString("19802160");
  msg.set(AccruedInterestAmt_2);
  AllocationReport_0.insert(AccruedInterestAmt_2.getString());
  FIX::AccruedInterestRate AccruedInterestRate_2;
  AccruedInterestRate_2.setString("61.420000");
  msg.set(AccruedInterestRate_2);
  AllocationReport_0.insert(AccruedInterestRate_2.getString());
  FIX::AllocCancReplaceReason AllocCancReplaceReason_2(1);
  msg.set(AllocCancReplaceReason_2);
  AllocationReport_0.insert(AllocCancReplaceReason_2.getString());
  FIX::AllocID AllocID_3("STRING_1636850873");
  msg.set(AllocID_3);
  AllocationReport_0.insert(AllocID_3.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_3(2);
  msg.set(AllocIntermedReqType_3);
  AllocationReport_0.insert(AllocIntermedReqType_3.getString());
  FIX::AllocLinkID AllocLinkID_2("STRING_1036433739");
  msg.set(AllocLinkID_2);
  AllocationReport_0.insert(AllocLinkID_2.getString());
  FIX::AllocLinkType AllocLinkType_2(0);
  msg.set(AllocLinkType_2);
  AllocationReport_0.insert(AllocLinkType_2.getString());
  FIX::AllocNoOrdersType AllocNoOrdersType_2(1);
  msg.set(AllocNoOrdersType_2);
  AllocationReport_0.insert(AllocNoOrdersType_2.getString());
  FIX::AllocRejCode AllocRejCode_1(3);
  msg.set(AllocRejCode_1);
  AllocationReport_0.insert(AllocRejCode_1.getString());
  FIX::AllocReportID AllocReportID_0("STRING_1769537754");
  msg.set(AllocReportID_0);
  AllocationReport_0.insert(AllocReportID_0.getString());
  FIX::AllocReportRefID AllocReportRefID_0("STRING_322251052");
  msg.set(AllocReportRefID_0);
  AllocationReport_0.insert(AllocReportRefID_0.getString());
  FIX::AllocReportType AllocReportType_0(14);
  msg.set(AllocReportType_0);
  AllocationReport_0.insert(AllocReportType_0.getString());
  FIX::AllocStatus AllocStatus_1(4);
  msg.set(AllocStatus_1);
  AllocationReport_0.insert(AllocStatus_1.getString());
  FIX::AllocTransType AllocTransType_2('1');
  msg.set(AllocTransType_2);
  AllocationReport_0.insert(AllocTransType_2.getString());
  FIX::AutoAcceptIndicator AutoAcceptIndicator_2(false);
  msg.set(AutoAcceptIndicator_2);
  AllocationReport_0.insert(AutoAcceptIndicator_2.getString());
  FIX::AvgParPx AvgParPx_2;
  AvgParPx_2.setString("632625");
  msg.set(AvgParPx_2);
  AllocationReport_0.insert(AvgParPx_2.getString());
  FIX::AvgPx AvgPx_2;
  AvgPx_2.setString("4602477");
  msg.set(AvgPx_2);
  AllocationReport_0.insert(AvgPx_2.getString());
  FIX::AvgPxIndicator AvgPxIndicator_2(0);
  msg.set(AvgPxIndicator_2);
  AllocationReport_0.insert(AvgPxIndicator_2.getString());
  FIX::AvgPxPrecision AvgPxPrecision_2(29070610);
  msg.set(AvgPxPrecision_2);
  AllocationReport_0.insert(AvgPxPrecision_2.getString());
  FIX::BookingRefID BookingRefID_2("STRING_453104616");
  msg.set(BookingRefID_2);
  AllocationReport_0.insert(BookingRefID_2.getString());
  FIX::BookingType BookingType_2(1);
  msg.set(BookingType_2);
  AllocationReport_0.insert(BookingType_2.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_3("LOCALMKTDATE_481107261");
  msg.set(ClearingBusinessDate_3);
  AllocationReport_0.insert(ClearingBusinessDate_3.getString());
  FIX::Concession Concession_2;
  Concession_2.setString("21182248");
  msg.set(Concession_2);
  AllocationReport_0.insert(Concession_2.getString());
  FIX::Currency Currency_3("USD");
  msg.set(Currency_3);
  AllocationReport_0.insert(Currency_3.getString());
  FIX::CustOrderCapacity CustOrderCapacity_2(2);
  msg.set(CustOrderCapacity_2);
  AllocationReport_0.insert(CustOrderCapacity_2.getString());
  FIX::EncodedText EncodedText_4("DATA_831717291");
  msg.set(EncodedText_4);
  AllocationReport_0.insert(EncodedText_4.getString());
  FIX::EncodedTextLen EncodedTextLen_4(48052853);
  msg.set(EncodedTextLen_4);
  AllocationReport_0.insert(EncodedTextLen_4.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_2;
  EndAccruedInterestAmt_2.setString("971970");
  msg.set(EndAccruedInterestAmt_2);
  AllocationReport_0.insert(EndAccruedInterestAmt_2.getString());
  FIX::EndCash EndCash_2;
  EndCash_2.setString("19488518");
  msg.set(EndCash_2);
  AllocationReport_0.insert(EndCash_2.getString());
  FIX::GrossTradeAmt GrossTradeAmt_2;
  GrossTradeAmt_2.setString("4125238");
  msg.set(GrossTradeAmt_2);
  AllocationReport_0.insert(GrossTradeAmt_2.getString());
  FIX::InterestAtMaturity InterestAtMaturity_2;
  InterestAtMaturity_2.setString("20774131");
  msg.set(InterestAtMaturity_2);
  AllocationReport_0.insert(InterestAtMaturity_2.getString());
  FIX::LastFragment LastFragment_2(true);
  msg.set(LastFragment_2);
  AllocationReport_0.insert(LastFragment_2.getString());
  FIX::LastMkt LastMkt_3("EXCHANGE_2135432023");
  msg.set(LastMkt_3);
  AllocationReport_0.insert(LastMkt_3.getString());
  FIX::LegalConfirm LegalConfirm_2(false);
  msg.set(LegalConfirm_2);
  AllocationReport_0.insert(LegalConfirm_2.getString());
  FIX::MatchType MatchType_2("STRING_A4");
  msg.set(MatchType_2);
  AllocationReport_0.insert(MatchType_2.getString());
  FIX::MessageEventSource MessageEventSource_2("STRING_1024382114");
  msg.set(MessageEventSource_2);
  AllocationReport_0.insert(MessageEventSource_2.getString());
  FIX::MultiLegReportingType MultiLegReportingType_2('1');
  msg.set(MultiLegReportingType_2);
  AllocationReport_0.insert(MultiLegReportingType_2.getString());
  FIX::NetMoney NetMoney_2;
  NetMoney_2.setString("18608030");
  msg.set(NetMoney_2);
  AllocationReport_0.insert(NetMoney_2.getString());
  FIX::NumDaysInterest NumDaysInterest_2(1602641912);
  msg.set(NumDaysInterest_2);
  AllocationReport_0.insert(NumDaysInterest_2.getString());
  FIX::PositionEffect PositionEffect_2('N');
  msg.set(PositionEffect_2);
  AllocationReport_0.insert(PositionEffect_2.getString());
  FIX::PreviouslyReported PreviouslyReported_2(true);
  msg.set(PreviouslyReported_2);
  AllocationReport_0.insert(PreviouslyReported_2.getString());
  FIX::PriceType PriceType_2(13);
  msg.set(PriceType_2);
  AllocationReport_0.insert(PriceType_2.getString());
  FIX::QtyType QtyType_3(2);
  msg.set(QtyType_3);
  AllocationReport_0.insert(QtyType_3.getString());
  FIX::Quantity Quantity_3;
  Quantity_3.setString("17226734");
  msg.set(Quantity_3);
  AllocationReport_0.insert(Quantity_3.getString());
  FIX::RefAllocID RefAllocID_2("STRING_1447114405");
  msg.set(RefAllocID_2);
  AllocationReport_0.insert(RefAllocID_2.getString());
  FIX::ReversalIndicator ReversalIndicator_2(false);
  msg.set(ReversalIndicator_2);
  AllocationReport_0.insert(ReversalIndicator_2.getString());
  FIX::RndPx RndPx_2;
  RndPx_2.setString("354375");
  msg.set(RndPx_2);
  AllocationReport_0.insert(RndPx_2.getString());
  FIX::SecondaryAllocID SecondaryAllocID_3("STRING_834447209");
  msg.set(SecondaryAllocID_3);
  AllocationReport_0.insert(SecondaryAllocID_3.getString());
  FIX::SettlDate SettlDate_2("LOCALMKTDATE_1186774983");
  msg.set(SettlDate_2);
  AllocationReport_0.insert(SettlDate_2.getString());
  FIX::SettlType SettlType_2("STRING_1");
  msg.set(SettlType_2);
  AllocationReport_0.insert(SettlType_2.getString());
  FIX::Side Side_2('3');
  msg.set(Side_2);
  AllocationReport_0.insert(Side_2.getString());
  FIX::StartCash StartCash_2;
  StartCash_2.setString("16678822");
  msg.set(StartCash_2);
  AllocationReport_0.insert(StartCash_2.getString());
  FIX::Text Text_4("STRING_459283356");
  msg.set(Text_4);
  AllocationReport_0.insert(Text_4.getString());
  FIX::TotNoAllocs TotNoAllocs_2(1183118001);
  msg.set(TotNoAllocs_2);
  AllocationReport_0.insert(TotNoAllocs_2.getString());
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_2;
  TotalAccruedInterestAmt_2.setString("9555595");
  msg.set(TotalAccruedInterestAmt_2);
  AllocationReport_0.insert(TotalAccruedInterestAmt_2.getString());
  FIX::TotalTakedown TotalTakedown_2;
  TotalTakedown_2.setString("15916303");
  msg.set(TotalTakedown_2);
  AllocationReport_0.insert(TotalTakedown_2.getString());
  FIX::TradeDate TradeDate_4("LOCALMKTDATE_2014835293");
  msg.set(TradeDate_4);
  AllocationReport_0.insert(TradeDate_4.getString());
  FIX::TradeInputDevice TradeInputDevice_0("STRING_1003612384");
  msg.set(TradeInputDevice_0);
  AllocationReport_0.insert(TradeInputDevice_0.getString());
  FIX::TradeInputSource TradeInputSource_2("STRING_1688827487");
  msg.set(TradeInputSource_2);
  AllocationReport_0.insert(TradeInputSource_2.getString());
  FIX::TradeOriginationDate TradeOriginationDate_2("LOCALMKTDATE_1816203485");
  msg.set(TradeOriginationDate_2);
  AllocationReport_0.insert(TradeOriginationDate_2.getString());
  FIX::TradingSessionID TradingSessionID_3("STRING_3");
  msg.set(TradingSessionID_3);
  AllocationReport_0.insert(TradingSessionID_3.getString());
  FIX::TradingSessionSubID TradingSessionSubID_3("STRING_3");
  msg.set(TradingSessionSubID_3);
  AllocationReport_0.insert(TradingSessionSubID_3.getString());
  FIX::TransactTime TransactTime_4(FIX::UTCTIMESTAMP(13, 17, 34, 23, 12, 2002));
  msg.set(TransactTime_4);
  AllocationReport_0.insert(TransactTime_4.getString());
  FIX::TrdSubType TrdSubType_2(34);
  msg.set(TrdSubType_2);
  AllocationReport_0.insert(TrdSubType_2.getString());
  FIX::TrdType TrdType_2(8);
  msg.set(TrdType_2);
  AllocationReport_0.insert(TrdType_2.getString());
  all_values.push_back(AllocationReport_0);

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationReport::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_3;
    FIX::AllocAccount AllocAccount_4("STRING_432512131");
    noAllocs_0_0.set(AllocAccount_4);
    AllocGrp_NoAllocs_3.insert(AllocAccount_4.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_3;
    AllocAccruedInterestAmt_3.setString("8503229");
    noAllocs_0_0.set(AllocAccruedInterestAmt_3);
    AllocGrp_NoAllocs_3.insert(AllocAccruedInterestAmt_3.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_4(1868361788);
    noAllocs_0_0.set(AllocAcctIDSource_4);
    AllocGrp_NoAllocs_3.insert(AllocAcctIDSource_4.getString());
    FIX::AllocAvgPx AllocAvgPx_3;
    AllocAvgPx_3.setString("18796265");
    noAllocs_0_0.set(AllocAvgPx_3);
    AllocGrp_NoAllocs_3.insert(AllocAvgPx_3.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_4("STRING_2008027341");
    noAllocs_0_0.set(AllocCustomerCapacity_4);
    AllocGrp_NoAllocs_3.insert(AllocCustomerCapacity_4.getString());
    FIX::AllocHandlInst AllocHandlInst_3(3);
    noAllocs_0_0.set(AllocHandlInst_3);
    AllocGrp_NoAllocs_3.insert(AllocHandlInst_3.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_3;
    AllocInterestAtMaturity_3.setString("5665900");
    noAllocs_0_0.set(AllocInterestAtMaturity_3);
    AllocGrp_NoAllocs_3.insert(AllocInterestAtMaturity_3.getString());
    FIX::AllocMethod AllocMethod_3(2);
    noAllocs_0_0.set(AllocMethod_3);
    AllocGrp_NoAllocs_3.insert(AllocMethod_3.getString());
    FIX::AllocNetMoney AllocNetMoney_3;
    AllocNetMoney_3.setString("2448577");
    noAllocs_0_0.set(AllocNetMoney_3);
    AllocGrp_NoAllocs_3.insert(AllocNetMoney_3.getString());
    FIX::AllocPositionEffect AllocPositionEffect_4('F');
    noAllocs_0_0.set(AllocPositionEffect_4);
    AllocGrp_NoAllocs_3.insert(AllocPositionEffect_4.getString());
    FIX::AllocPrice AllocPrice_4;
    AllocPrice_4.setString("5677172");
    noAllocs_0_0.set(AllocPrice_4);
    AllocGrp_NoAllocs_3.insert(AllocPrice_4.getString());
    FIX::AllocQty AllocQty_4;
    AllocQty_4.setString("7041411");
    noAllocs_0_0.set(AllocQty_4);
    AllocGrp_NoAllocs_3.insert(AllocQty_4.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_3;
    AllocSettlCurrAmt_3.setString("1328099");
    noAllocs_0_0.set(AllocSettlCurrAmt_3);
    AllocGrp_NoAllocs_3.insert(AllocSettlCurrAmt_3.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_3("GBP");
    noAllocs_0_0.set(AllocSettlCurrency_3);
    AllocGrp_NoAllocs_3.insert(AllocSettlCurrency_3.getString());
    FIX::AllocSettlInstType AllocSettlInstType_3(0);
    noAllocs_0_0.set(AllocSettlInstType_3);
    AllocGrp_NoAllocs_3.insert(AllocSettlInstType_3.getString());
    FIX::AllocText AllocText_4("STRING_379405541");
    noAllocs_0_0.set(AllocText_4);
    AllocGrp_NoAllocs_3.insert(AllocText_4.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_3("STRING_3");
    noAllocs_0_0.set(ClearingFeeIndicator_3);
    AllocGrp_NoAllocs_3.insert(ClearingFeeIndicator_3.getString());
    FIX::EncodedAllocText EncodedAllocText_4("DATA_1816365055");
    noAllocs_0_0.set(EncodedAllocText_4);
    AllocGrp_NoAllocs_3.insert(EncodedAllocText_4.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_4(1795541803);
    noAllocs_0_0.set(EncodedAllocTextLen_4);
    AllocGrp_NoAllocs_3.insert(EncodedAllocTextLen_4.getString());
    FIX::IndividualAllocID IndividualAllocID_4("STRING_1308388678");
    noAllocs_0_0.set(IndividualAllocID_4);
    AllocGrp_NoAllocs_3.insert(IndividualAllocID_4.getString());
    FIX::IndividualAllocType IndividualAllocType_4(1);
    noAllocs_0_0.set(IndividualAllocType_4);
    AllocGrp_NoAllocs_3.insert(IndividualAllocType_4.getString());
    FIX::MatchStatus MatchStatus_4('0');
    noAllocs_0_0.set(MatchStatus_4);
    AllocGrp_NoAllocs_3.insert(MatchStatus_4.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_3(false);
    noAllocs_0_0.set(NotifyBrokerOfCredit_3);
    AllocGrp_NoAllocs_3.insert(NotifyBrokerOfCredit_3.getString());
    FIX::ProcessCode ProcessCode_3('6');
    noAllocs_0_0.set(ProcessCode_3);
    AllocGrp_NoAllocs_3.insert(ProcessCode_3.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_4("STRING_1333125895");
    noAllocs_0_0.set(SecondaryIndividualAllocID_4);
    AllocGrp_NoAllocs_3.insert(SecondaryIndividualAllocID_4.getString());
    FIX::SettlCurrAmt SettlCurrAmt_3;
    SettlCurrAmt_3.setString("18586408");
    noAllocs_0_0.set(SettlCurrAmt_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrAmt_3.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_3;
    SettlCurrFxRate_3.setString("15016920");
    noAllocs_0_0.set(SettlCurrFxRate_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrFxRate_3.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_3('M');
    noAllocs_0_0.set(SettlCurrFxRateCalc_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrFxRateCalc_3.getString());
    FIX::SettlCurrency SettlCurrency_3("GBP");
    noAllocs_0_0.set(SettlCurrency_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrency_3.getString());
    all_values.push_back(AllocGrp_NoAllocs_3);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_9;
      FIX::ClearingInstruction ClearingInstruction_9(4);
      noClearingInstructions_0_1_0.set(ClearingInstruction_9);
      ClrInstGrp_NoClearingInstructions_9.insert(ClearingInstruction_9.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_9);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_3;
    FIX::CommCurrency CommCurrency_3("CHF");
    noAllocs_0_0.set(CommCurrency_3);
    CommissionData_3.insert(CommCurrency_3.getString());
    FIX::CommType CommType_3('6');
    noAllocs_0_0.set(CommType_3);
    CommissionData_3.insert(CommType_3.getString());
    FIX::Commission Commission_3;
    Commission_3.setString("11245741");
    noAllocs_0_0.set(Commission_3);
    CommissionData_3.insert(Commission_3.getString());
    FIX::FundRenewWaiv FundRenewWaiv_3('Y');
    noAllocs_0_0.set(FundRenewWaiv_3);
    CommissionData_3.insert(FundRenewWaiv_3.getString());
    all_values.push_back(CommissionData_3);

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_6;
      FIX::MiscFeeAmt MiscFeeAmt_6;
      MiscFeeAmt_6.setString("13694319");
      noMiscFees_0_1_0.set(MiscFeeAmt_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeAmt_6.getString());
      FIX::MiscFeeBasis MiscFeeBasis_6(2);
      noMiscFees_0_1_0.set(MiscFeeBasis_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeBasis_6.getString());
      FIX::MiscFeeCurr MiscFeeCurr_6("USD");
      noMiscFees_0_1_0.set(MiscFeeCurr_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeCurr_6.getString());
      FIX::MiscFeeType MiscFeeType_6("STRING_12");
      noMiscFees_0_1_0.set(MiscFeeType_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeType_6.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_6);

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_7;
      FIX::MiscFeeAmt MiscFeeAmt_7;
      MiscFeeAmt_7.setString("11687341");
      noMiscFees_0_1_1.set(MiscFeeAmt_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeAmt_7.getString());
      FIX::MiscFeeBasis MiscFeeBasis_7(0);
      noMiscFees_0_1_1.set(MiscFeeBasis_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeBasis_7.getString());
      FIX::MiscFeeCurr MiscFeeCurr_7("EUR");
      noMiscFees_0_1_1.set(MiscFeeCurr_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeCurr_7.getString());
      FIX::MiscFeeType MiscFeeType_7("STRING_5");
      noMiscFees_0_1_1.set(MiscFeeType_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeType_7.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_7);

      noAllocs_0_0.addGroup(noMiscFees_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_10;
      FIX::NestedPartyID NestedPartyID_10("STRING_1196197866");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_10);
      NestedParties_NoNestedPartyIDs_10.insert(NestedPartyID_10.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_10('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_10);
      NestedParties_NoNestedPartyIDs_10.insert(NestedPartyIDSource_10.getString());
      FIX::NestedPartyRole NestedPartyRole_10(1546832782);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_10);
      NestedParties_NoNestedPartyIDs_10.insert(NestedPartyRole_10.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_10);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_18;
        FIX::NestedPartySubID NestedPartySubID_18("STRING_1271356410");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_18);
        NstdPtysSubGrp_NoNestedPartySubIDs_18.insert(NestedPartySubID_18.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_18(790923226);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_18);
        NstdPtysSubGrp_NoNestedPartySubIDs_18.insert(NestedPartySubIDType_18.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_18);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_19;
        FIX::NestedPartySubID NestedPartySubID_19("STRING_1433982905");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_19);
        NstdPtysSubGrp_NoNestedPartySubIDs_19.insert(NestedPartySubID_19.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_19(982513637);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_19);
        NstdPtysSubGrp_NoNestedPartySubIDs_19.insert(NestedPartySubIDType_19.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_19);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_3;
    FIX::SettlDeliveryType SettlDeliveryType_3(0);
    noAllocs_0_0.set(SettlDeliveryType_3);
    SettlInstructionsData_3.insert(SettlDeliveryType_3.getString());
    FIX::StandInstDbID StandInstDbID_3("STRING_355766519");
    noAllocs_0_0.set(StandInstDbID_3);
    SettlInstructionsData_3.insert(StandInstDbID_3.getString());
    FIX::StandInstDbName StandInstDbName_3("STRING_449552039");
    noAllocs_0_0.set(StandInstDbName_3);
    SettlInstructionsData_3.insert(StandInstDbName_3.getString());
    FIX::StandInstDbType StandInstDbType_3(3);
    noAllocs_0_0.set(StandInstDbType_3);
    SettlInstructionsData_3.insert(StandInstDbType_3.getString());
    all_values.push_back(SettlInstructionsData_3);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_5;
      FIX::DlvyInstType DlvyInstType_5('C');
      noDlvyInst_0_1_0.set(DlvyInstType_5);
      DlvyInstGrp_NoDlvyInst_5.insert(DlvyInstType_5.getString());
      FIX::SettlInstSource SettlInstSource_5('1');
      noDlvyInst_0_1_0.set(SettlInstSource_5);
      DlvyInstGrp_NoDlvyInst_5.insert(SettlInstSource_5.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_5);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_9;
        FIX::SettlPartyID SettlPartyID_9("STRING_944818473");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_9);
        SettlParties_NoSettlPartyIDs_9.insert(SettlPartyID_9.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_9('2');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_9);
        SettlParties_NoSettlPartyIDs_9.insert(SettlPartyIDSource_9.getString());
        FIX::SettlPartyRole SettlPartyRole_9(597013277);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_9);
        SettlParties_NoSettlPartyIDs_9.insert(SettlPartyRole_9.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_9);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_22;
          FIX::SettlPartySubID SettlPartySubID_22("STRING_1359809337");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_22);
          SettlPtysSubGrp_NoSettlPartySubIDs_22.insert(SettlPartySubID_22.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_22(1347217580);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_22);
          SettlPtysSubGrp_NoSettlPartySubIDs_22.insert(SettlPartySubIDType_22.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_22);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_23;
          FIX::SettlPartySubID SettlPartySubID_23("STRING_1815499579");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_23);
          SettlPtysSubGrp_NoSettlPartySubIDs_23.insert(SettlPartySubID_23.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_23(1285898785);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_23);
          SettlPtysSubGrp_NoSettlPartySubIDs_23.insert(SettlPartySubIDType_23.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_23);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_24;
          FIX::SettlPartySubID SettlPartySubID_24("STRING_82748159");
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubID_24);
          SettlPtysSubGrp_NoSettlPartySubIDs_24.insert(SettlPartySubID_24.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_24(836750101);
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubIDType_24);
          SettlPtysSubGrp_NoSettlPartySubIDs_24.insert(SettlPartySubIDType_24.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_24);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_2);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_10;
        FIX::SettlPartyID SettlPartyID_10("STRING_1360276111");
        noSettlPartyIDs_0_0_2_1.set(SettlPartyID_10);
        SettlParties_NoSettlPartyIDs_10.insert(SettlPartyID_10.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_10('9');
        noSettlPartyIDs_0_0_2_1.set(SettlPartyIDSource_10);
        SettlParties_NoSettlPartyIDs_10.insert(SettlPartyIDSource_10.getString());
        FIX::SettlPartyRole SettlPartyRole_10(237406164);
        noSettlPartyIDs_0_0_2_1.set(SettlPartyRole_10);
        SettlParties_NoSettlPartyIDs_10.insert(SettlPartyRole_10.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_10);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_25;
          FIX::SettlPartySubID SettlPartySubID_25("STRING_1517981161");
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubID_25);
          SettlPtysSubGrp_NoSettlPartySubIDs_25.insert(SettlPartySubID_25.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_25(1433604030);
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubIDType_25);
          SettlPtysSubGrp_NoSettlPartySubIDs_25.insert(SettlPartySubIDType_25.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_25);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_26;
          FIX::SettlPartySubID SettlPartySubID_26("STRING_49199230");
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubID_26);
          SettlPtysSubGrp_NoSettlPartySubIDs_26.insert(SettlPartySubID_26.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_26(917330296);
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubIDType_26);
          SettlPtysSubGrp_NoSettlPartySubIDs_26.insert(SettlPartySubIDType_26.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_26);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_27;
          FIX::SettlPartySubID SettlPartySubID_27("STRING_1534461040");
          noSettlPartySubIDs_0_0_1_3_2.set(SettlPartySubID_27);
          SettlPtysSubGrp_NoSettlPartySubIDs_27.insert(SettlPartySubID_27.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_27(1320555640);
          noSettlPartySubIDs_0_0_1_3_2.set(SettlPartySubIDType_27);
          SettlPtysSubGrp_NoSettlPartySubIDs_27.insert(SettlPartySubIDType_27.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_27);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_2);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoAllocs noAllocs_0_1;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_4;
    FIX::AllocAccount AllocAccount_5("STRING_1708253522");
    noAllocs_0_1.set(AllocAccount_5);
    AllocGrp_NoAllocs_4.insert(AllocAccount_5.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_4;
    AllocAccruedInterestAmt_4.setString("8209602");
    noAllocs_0_1.set(AllocAccruedInterestAmt_4);
    AllocGrp_NoAllocs_4.insert(AllocAccruedInterestAmt_4.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_5(155585629);
    noAllocs_0_1.set(AllocAcctIDSource_5);
    AllocGrp_NoAllocs_4.insert(AllocAcctIDSource_5.getString());
    FIX::AllocAvgPx AllocAvgPx_4;
    AllocAvgPx_4.setString("18533851");
    noAllocs_0_1.set(AllocAvgPx_4);
    AllocGrp_NoAllocs_4.insert(AllocAvgPx_4.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_5("STRING_1176726816");
    noAllocs_0_1.set(AllocCustomerCapacity_5);
    AllocGrp_NoAllocs_4.insert(AllocCustomerCapacity_5.getString());
    FIX::AllocHandlInst AllocHandlInst_4(2);
    noAllocs_0_1.set(AllocHandlInst_4);
    AllocGrp_NoAllocs_4.insert(AllocHandlInst_4.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_4;
    AllocInterestAtMaturity_4.setString("14984134");
    noAllocs_0_1.set(AllocInterestAtMaturity_4);
    AllocGrp_NoAllocs_4.insert(AllocInterestAtMaturity_4.getString());
    FIX::AllocMethod AllocMethod_4(2);
    noAllocs_0_1.set(AllocMethod_4);
    AllocGrp_NoAllocs_4.insert(AllocMethod_4.getString());
    FIX::AllocNetMoney AllocNetMoney_4;
    AllocNetMoney_4.setString("13720510");
    noAllocs_0_1.set(AllocNetMoney_4);
    AllocGrp_NoAllocs_4.insert(AllocNetMoney_4.getString());
    FIX::AllocPositionEffect AllocPositionEffect_5('C');
    noAllocs_0_1.set(AllocPositionEffect_5);
    AllocGrp_NoAllocs_4.insert(AllocPositionEffect_5.getString());
    FIX::AllocPrice AllocPrice_5;
    AllocPrice_5.setString("18307736");
    noAllocs_0_1.set(AllocPrice_5);
    AllocGrp_NoAllocs_4.insert(AllocPrice_5.getString());
    FIX::AllocQty AllocQty_5;
    AllocQty_5.setString("1693859");
    noAllocs_0_1.set(AllocQty_5);
    AllocGrp_NoAllocs_4.insert(AllocQty_5.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_4;
    AllocSettlCurrAmt_4.setString("3545940");
    noAllocs_0_1.set(AllocSettlCurrAmt_4);
    AllocGrp_NoAllocs_4.insert(AllocSettlCurrAmt_4.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_4("USD");
    noAllocs_0_1.set(AllocSettlCurrency_4);
    AllocGrp_NoAllocs_4.insert(AllocSettlCurrency_4.getString());
    FIX::AllocSettlInstType AllocSettlInstType_4(3);
    noAllocs_0_1.set(AllocSettlInstType_4);
    AllocGrp_NoAllocs_4.insert(AllocSettlInstType_4.getString());
    FIX::AllocText AllocText_5("STRING_1627520837");
    noAllocs_0_1.set(AllocText_5);
    AllocGrp_NoAllocs_4.insert(AllocText_5.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_4("STRING_F");
    noAllocs_0_1.set(ClearingFeeIndicator_4);
    AllocGrp_NoAllocs_4.insert(ClearingFeeIndicator_4.getString());
    FIX::EncodedAllocText EncodedAllocText_5("DATA_852818490");
    noAllocs_0_1.set(EncodedAllocText_5);
    AllocGrp_NoAllocs_4.insert(EncodedAllocText_5.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_5(1710268997);
    noAllocs_0_1.set(EncodedAllocTextLen_5);
    AllocGrp_NoAllocs_4.insert(EncodedAllocTextLen_5.getString());
    FIX::IndividualAllocID IndividualAllocID_5("STRING_696710502");
    noAllocs_0_1.set(IndividualAllocID_5);
    AllocGrp_NoAllocs_4.insert(IndividualAllocID_5.getString());
    FIX::IndividualAllocType IndividualAllocType_5(2);
    noAllocs_0_1.set(IndividualAllocType_5);
    AllocGrp_NoAllocs_4.insert(IndividualAllocType_5.getString());
    FIX::MatchStatus MatchStatus_5('1');
    noAllocs_0_1.set(MatchStatus_5);
    AllocGrp_NoAllocs_4.insert(MatchStatus_5.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_4(true);
    noAllocs_0_1.set(NotifyBrokerOfCredit_4);
    AllocGrp_NoAllocs_4.insert(NotifyBrokerOfCredit_4.getString());
    FIX::ProcessCode ProcessCode_4('3');
    noAllocs_0_1.set(ProcessCode_4);
    AllocGrp_NoAllocs_4.insert(ProcessCode_4.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_5("STRING_2046690467");
    noAllocs_0_1.set(SecondaryIndividualAllocID_5);
    AllocGrp_NoAllocs_4.insert(SecondaryIndividualAllocID_5.getString());
    FIX::SettlCurrAmt SettlCurrAmt_4;
    SettlCurrAmt_4.setString("2202370");
    noAllocs_0_1.set(SettlCurrAmt_4);
    AllocGrp_NoAllocs_4.insert(SettlCurrAmt_4.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_4;
    SettlCurrFxRate_4.setString("12390953");
    noAllocs_0_1.set(SettlCurrFxRate_4);
    AllocGrp_NoAllocs_4.insert(SettlCurrFxRate_4.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_4('D');
    noAllocs_0_1.set(SettlCurrFxRateCalc_4);
    AllocGrp_NoAllocs_4.insert(SettlCurrFxRateCalc_4.getString());
    FIX::SettlCurrency SettlCurrency_4("GBP");
    noAllocs_0_1.set(SettlCurrency_4);
    AllocGrp_NoAllocs_4.insert(SettlCurrency_4.getString());
    all_values.push_back(AllocGrp_NoAllocs_4);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_10;
      FIX::ClearingInstruction ClearingInstruction_10(11);
      noClearingInstructions_1_1_0.set(ClearingInstruction_10);
      ClrInstGrp_NoClearingInstructions_10.insert(ClearingInstruction_10.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_10);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_11;
      FIX::ClearingInstruction ClearingInstruction_11(0);
      noClearingInstructions_1_1_1.set(ClearingInstruction_11);
      ClrInstGrp_NoClearingInstructions_11.insert(ClearingInstruction_11.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_11);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_12;
      FIX::ClearingInstruction ClearingInstruction_12(13);
      noClearingInstructions_1_1_2.set(ClearingInstruction_12);
      ClrInstGrp_NoClearingInstructions_12.insert(ClearingInstruction_12.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_12);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_4;
    FIX::CommCurrency CommCurrency_4("CAN");
    noAllocs_0_1.set(CommCurrency_4);
    CommissionData_4.insert(CommCurrency_4.getString());
    FIX::CommType CommType_4('2');
    noAllocs_0_1.set(CommType_4);
    CommissionData_4.insert(CommType_4.getString());
    FIX::Commission Commission_4;
    Commission_4.setString("3442069");
    noAllocs_0_1.set(Commission_4);
    CommissionData_4.insert(Commission_4.getString());
    FIX::FundRenewWaiv FundRenewWaiv_4('N');
    noAllocs_0_1.set(FundRenewWaiv_4);
    CommissionData_4.insert(FundRenewWaiv_4.getString());
    all_values.push_back(CommissionData_4);

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_8;
      FIX::MiscFeeAmt MiscFeeAmt_8;
      MiscFeeAmt_8.setString("274969");
      noMiscFees_1_1_0.set(MiscFeeAmt_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeAmt_8.getString());
      FIX::MiscFeeBasis MiscFeeBasis_8(2);
      noMiscFees_1_1_0.set(MiscFeeBasis_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeBasis_8.getString());
      FIX::MiscFeeCurr MiscFeeCurr_8("GBP");
      noMiscFees_1_1_0.set(MiscFeeCurr_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeCurr_8.getString());
      FIX::MiscFeeType MiscFeeType_8("STRING_1");
      noMiscFees_1_1_0.set(MiscFeeType_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeType_8.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_8);

      noAllocs_0_1.addGroup(noMiscFees_1_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_11;
      FIX::NestedPartyID NestedPartyID_11("STRING_1935321062");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_11);
      NestedParties_NoNestedPartyIDs_11.insert(NestedPartyID_11.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_11('6');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_11);
      NestedParties_NoNestedPartyIDs_11.insert(NestedPartyIDSource_11.getString());
      FIX::NestedPartyRole NestedPartyRole_11(572687089);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_11);
      NestedParties_NoNestedPartyIDs_11.insert(NestedPartyRole_11.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_11);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_20;
        FIX::NestedPartySubID NestedPartySubID_20("STRING_1315459339");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_20);
        NstdPtysSubGrp_NoNestedPartySubIDs_20.insert(NestedPartySubID_20.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_20(638298043);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_20);
        NstdPtysSubGrp_NoNestedPartySubIDs_20.insert(NestedPartySubIDType_20.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_20);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_21;
        FIX::NestedPartySubID NestedPartySubID_21("STRING_2026815717");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_21);
        NstdPtysSubGrp_NoNestedPartySubIDs_21.insert(NestedPartySubID_21.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_21(102092357);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_21);
        NstdPtysSubGrp_NoNestedPartySubIDs_21.insert(NestedPartySubIDType_21.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_21);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_22;
        FIX::NestedPartySubID NestedPartySubID_22("STRING_1828194152");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_22);
        NstdPtysSubGrp_NoNestedPartySubIDs_22.insert(NestedPartySubID_22.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_22(1926022536);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_22);
        NstdPtysSubGrp_NoNestedPartySubIDs_22.insert(NestedPartySubIDType_22.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_22);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_4;
    FIX::SettlDeliveryType SettlDeliveryType_4(1);
    noAllocs_0_1.set(SettlDeliveryType_4);
    SettlInstructionsData_4.insert(SettlDeliveryType_4.getString());
    FIX::StandInstDbID StandInstDbID_4("STRING_919805844");
    noAllocs_0_1.set(StandInstDbID_4);
    SettlInstructionsData_4.insert(StandInstDbID_4.getString());
    FIX::StandInstDbName StandInstDbName_4("STRING_595076004");
    noAllocs_0_1.set(StandInstDbName_4);
    SettlInstructionsData_4.insert(StandInstDbName_4.getString());
    FIX::StandInstDbType StandInstDbType_4(3);
    noAllocs_0_1.set(StandInstDbType_4);
    SettlInstructionsData_4.insert(StandInstDbType_4.getString());
    all_values.push_back(SettlInstructionsData_4);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_6;
      FIX::DlvyInstType DlvyInstType_6('C');
      noDlvyInst_1_1_0.set(DlvyInstType_6);
      DlvyInstGrp_NoDlvyInst_6.insert(DlvyInstType_6.getString());
      FIX::SettlInstSource SettlInstSource_6('2');
      noDlvyInst_1_1_0.set(SettlInstSource_6);
      DlvyInstGrp_NoDlvyInst_6.insert(SettlInstSource_6.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_6);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_11;
        FIX::SettlPartyID SettlPartyID_11("STRING_1055591447");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_11);
        SettlParties_NoSettlPartyIDs_11.insert(SettlPartyID_11.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_11('1');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_11);
        SettlParties_NoSettlPartyIDs_11.insert(SettlPartyIDSource_11.getString());
        FIX::SettlPartyRole SettlPartyRole_11(925133122);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_11);
        SettlParties_NoSettlPartyIDs_11.insert(SettlPartyRole_11.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_11);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_28;
          FIX::SettlPartySubID SettlPartySubID_28("STRING_159343475");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_28);
          SettlPtysSubGrp_NoSettlPartySubIDs_28.insert(SettlPartySubID_28.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_28(1322591184);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_28);
          SettlPtysSubGrp_NoSettlPartySubIDs_28.insert(SettlPartySubIDType_28.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_28);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_29;
          FIX::SettlPartySubID SettlPartySubID_29("STRING_288084566");
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubID_29);
          SettlPtysSubGrp_NoSettlPartySubIDs_29.insert(SettlPartySubID_29.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_29(186840442);
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubIDType_29);
          SettlPtysSubGrp_NoSettlPartySubIDs_29.insert(SettlPartySubIDType_29.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_29);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_12;
        FIX::SettlPartyID SettlPartyID_12("STRING_1889435150");
        noSettlPartyIDs_1_0_2_1.set(SettlPartyID_12);
        SettlParties_NoSettlPartyIDs_12.insert(SettlPartyID_12.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_12('4');
        noSettlPartyIDs_1_0_2_1.set(SettlPartyIDSource_12);
        SettlParties_NoSettlPartyIDs_12.insert(SettlPartyIDSource_12.getString());
        FIX::SettlPartyRole SettlPartyRole_12(494640666);
        noSettlPartyIDs_1_0_2_1.set(SettlPartyRole_12);
        SettlParties_NoSettlPartyIDs_12.insert(SettlPartyRole_12.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_12);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_30;
          FIX::SettlPartySubID SettlPartySubID_30("STRING_160902060");
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubID_30);
          SettlPtysSubGrp_NoSettlPartySubIDs_30.insert(SettlPartySubID_30.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_30(282478080);
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubIDType_30);
          SettlPtysSubGrp_NoSettlPartySubIDs_30.insert(SettlPartySubIDType_30.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_30);

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
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
    FIX50SP2::AllocationReport::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_5;
    FIX::ExecID ExecID_5("STRING_733589150");
    noExecs_0_0.set(ExecID_5);
    ExecAllocGrp_NoExecs_5.insert(ExecID_5.getString());
    FIX::FirmTradeID FirmTradeID_5("STRING_1780584491");
    noExecs_0_0.set(FirmTradeID_5);
    ExecAllocGrp_NoExecs_5.insert(FirmTradeID_5.getString());
    FIX::LastCapacity LastCapacity_5('1');
    noExecs_0_0.set(LastCapacity_5);
    ExecAllocGrp_NoExecs_5.insert(LastCapacity_5.getString());
    FIX::LastParPx LastParPx_5;
    LastParPx_5.setString("13718871");
    noExecs_0_0.set(LastParPx_5);
    ExecAllocGrp_NoExecs_5.insert(LastParPx_5.getString());
    FIX::LastPx LastPx_5;
    LastPx_5.setString("16599165");
    noExecs_0_0.set(LastPx_5);
    ExecAllocGrp_NoExecs_5.insert(LastPx_5.getString());
    FIX::LastQty LastQty_5;
    LastQty_5.setString("3895568");
    noExecs_0_0.set(LastQty_5);
    ExecAllocGrp_NoExecs_5.insert(LastQty_5.getString());
    FIX::SecondaryExecID SecondaryExecID_5("STRING_1052597697");
    noExecs_0_0.set(SecondaryExecID_5);
    ExecAllocGrp_NoExecs_5.insert(SecondaryExecID_5.getString());
    FIX::TradeID TradeID_5("STRING_1438455449");
    noExecs_0_0.set(TradeID_5);
    ExecAllocGrp_NoExecs_5.insert(TradeID_5.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_5);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoExecs noExecs_0_1;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_6;
    FIX::ExecID ExecID_6("STRING_711886231");
    noExecs_0_1.set(ExecID_6);
    ExecAllocGrp_NoExecs_6.insert(ExecID_6.getString());
    FIX::FirmTradeID FirmTradeID_6("STRING_1972403542");
    noExecs_0_1.set(FirmTradeID_6);
    ExecAllocGrp_NoExecs_6.insert(FirmTradeID_6.getString());
    FIX::LastCapacity LastCapacity_6('2');
    noExecs_0_1.set(LastCapacity_6);
    ExecAllocGrp_NoExecs_6.insert(LastCapacity_6.getString());
    FIX::LastParPx LastParPx_6;
    LastParPx_6.setString("6414300");
    noExecs_0_1.set(LastParPx_6);
    ExecAllocGrp_NoExecs_6.insert(LastParPx_6.getString());
    FIX::LastPx LastPx_6;
    LastPx_6.setString("11568930");
    noExecs_0_1.set(LastPx_6);
    ExecAllocGrp_NoExecs_6.insert(LastPx_6.getString());
    FIX::LastQty LastQty_6;
    LastQty_6.setString("8584307");
    noExecs_0_1.set(LastQty_6);
    ExecAllocGrp_NoExecs_6.insert(LastQty_6.getString());
    FIX::SecondaryExecID SecondaryExecID_6("STRING_999148659");
    noExecs_0_1.set(SecondaryExecID_6);
    ExecAllocGrp_NoExecs_6.insert(SecondaryExecID_6.getString());
    FIX::TradeID TradeID_6("STRING_909135562");
    noExecs_0_1.set(TradeID_6);
    ExecAllocGrp_NoExecs_6.insert(TradeID_6.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_6);

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_2;
  FIX::AgreementCurrency AgreementCurrency_2("EUR");
  msg.set(AgreementCurrency_2);
  FinancingDetails_2.insert(AgreementCurrency_2.getString());
  FIX::AgreementDate AgreementDate_2("LOCALMKTDATE_1834268684");
  msg.set(AgreementDate_2);
  FinancingDetails_2.insert(AgreementDate_2.getString());
  FIX::AgreementDesc AgreementDesc_2("STRING_256268286");
  msg.set(AgreementDesc_2);
  FinancingDetails_2.insert(AgreementDesc_2.getString());
  FIX::AgreementID AgreementID_2("STRING_973628622");
  msg.set(AgreementID_2);
  FinancingDetails_2.insert(AgreementID_2.getString());
  FIX::DeliveryType DeliveryType_2(0);
  msg.set(DeliveryType_2);
  FinancingDetails_2.insert(DeliveryType_2.getString());
  FIX::EndDate EndDate_2("LOCALMKTDATE_544352852");
  msg.set(EndDate_2);
  FinancingDetails_2.insert(EndDate_2.getString());
  FIX::MarginRatio MarginRatio_2;
  MarginRatio_2.setString("90.640000");
  msg.set(MarginRatio_2);
  FinancingDetails_2.insert(MarginRatio_2.getString());
  FIX::StartDate StartDate_2("LOCALMKTDATE_751327722");
  msg.set(StartDate_2);
  FinancingDetails_2.insert(StartDate_2.getString());
  FIX::TerminationType TerminationType_2(2);
  msg.set(TerminationType_2);
  FinancingDetails_2.insert(TerminationType_2.getString());
  all_values.push_back(FinancingDetails_2);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AllocationReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_4;
    FIX::EncodedLegIssuer EncodedLegIssuer_4("DATA_1252067661");
    noLegs_0_0.set(EncodedLegIssuer_4);
    InstrumentLeg_4.insert(EncodedLegIssuer_4.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_4(1146288374);
    noLegs_0_0.set(EncodedLegIssuerLen_4);
    InstrumentLeg_4.insert(EncodedLegIssuerLen_4.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_4("DATA_1937587811");
    noLegs_0_0.set(EncodedLegSecurityDesc_4);
    InstrumentLeg_4.insert(EncodedLegSecurityDesc_4.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_4(224072790);
    noLegs_0_0.set(EncodedLegSecurityDescLen_4);
    InstrumentLeg_4.insert(EncodedLegSecurityDescLen_4.getString());
    FIX::LegCFICode LegCFICode_4("STRING_1879877524");
    noLegs_0_0.set(LegCFICode_4);
    InstrumentLeg_4.insert(LegCFICode_4.getString());
    FIX::LegContractMultiplier LegContractMultiplier_4;
    LegContractMultiplier_4.setString("15706886");
    noLegs_0_0.set(LegContractMultiplier_4);
    InstrumentLeg_4.insert(LegContractMultiplier_4.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_4(511537258);
    noLegs_0_0.set(LegContractMultiplierUnit_4);
    InstrumentLeg_4.insert(LegContractMultiplierUnit_4.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_4("MONTHYEAR_1104281069");
    noLegs_0_0.set(LegContractSettlMonth_4);
    InstrumentLeg_4.insert(LegContractSettlMonth_4.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_4("COUNTRY_1083121567");
    noLegs_0_0.set(LegCountryOfIssue_4);
    InstrumentLeg_4.insert(LegCountryOfIssue_4.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_4("LOCALMKTDATE_901094083");
    noLegs_0_0.set(LegCouponPaymentDate_4);
    InstrumentLeg_4.insert(LegCouponPaymentDate_4.getString());
    FIX::LegCouponRate LegCouponRate_4;
    LegCouponRate_4.setString("51.180000");
    noLegs_0_0.set(LegCouponRate_4);
    InstrumentLeg_4.insert(LegCouponRate_4.getString());
    FIX::LegCreditRating LegCreditRating_4("STRING_374093368");
    noLegs_0_0.set(LegCreditRating_4);
    InstrumentLeg_4.insert(LegCreditRating_4.getString());
    FIX::LegCurrency LegCurrency_4("JPY");
    noLegs_0_0.set(LegCurrency_4);
    InstrumentLeg_4.insert(LegCurrency_4.getString());
    FIX::LegDatedDate LegDatedDate_4("LOCALMKTDATE_260141173");
    noLegs_0_0.set(LegDatedDate_4);
    InstrumentLeg_4.insert(LegDatedDate_4.getString());
    FIX::LegExerciseStyle LegExerciseStyle_4(106926743);
    noLegs_0_0.set(LegExerciseStyle_4);
    InstrumentLeg_4.insert(LegExerciseStyle_4.getString());
    FIX::LegFactor LegFactor_4;
    LegFactor_4.setString("9912080");
    noLegs_0_0.set(LegFactor_4);
    InstrumentLeg_4.insert(LegFactor_4.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_4(1118571972);
    noLegs_0_0.set(LegFlowScheduleType_4);
    InstrumentLeg_4.insert(LegFlowScheduleType_4.getString());
    FIX::LegInstrRegistry LegInstrRegistry_4("STRING_1106075402");
    noLegs_0_0.set(LegInstrRegistry_4);
    InstrumentLeg_4.insert(LegInstrRegistry_4.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_4("LOCALMKTDATE_1900343645");
    noLegs_0_0.set(LegInterestAccrualDate_4);
    InstrumentLeg_4.insert(LegInterestAccrualDate_4.getString());
    FIX::LegIssueDate LegIssueDate_4("LOCALMKTDATE_885110570");
    noLegs_0_0.set(LegIssueDate_4);
    InstrumentLeg_4.insert(LegIssueDate_4.getString());
    FIX::LegIssuer LegIssuer_4("STRING_1920360549");
    noLegs_0_0.set(LegIssuer_4);
    InstrumentLeg_4.insert(LegIssuer_4.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_4("STRING_1587128681");
    noLegs_0_0.set(LegLocaleOfIssue_4);
    InstrumentLeg_4.insert(LegLocaleOfIssue_4.getString());
    FIX::LegMaturityDate LegMaturityDate_4("LOCALMKTDATE_1141378856");
    noLegs_0_0.set(LegMaturityDate_4);
    InstrumentLeg_4.insert(LegMaturityDate_4.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_4("MONTHYEAR_746505523");
    noLegs_0_0.set(LegMaturityMonthYear_4);
    InstrumentLeg_4.insert(LegMaturityMonthYear_4.getString());
    FIX::LegMaturityTime LegMaturityTime_4("TZTIMEONLY_449021253");
    noLegs_0_0.set(LegMaturityTime_4);
    InstrumentLeg_4.insert(LegMaturityTime_4.getString());
    FIX::LegOptAttribute LegOptAttribute_4('1');
    noLegs_0_0.set(LegOptAttribute_4);
    InstrumentLeg_4.insert(LegOptAttribute_4.getString());
    FIX::LegOptionRatio LegOptionRatio_4;
    LegOptionRatio_4.setString("19069745");
    noLegs_0_0.set(LegOptionRatio_4);
    InstrumentLeg_4.insert(LegOptionRatio_4.getString());
    FIX::LegPool LegPool_4("STRING_1200348976");
    noLegs_0_0.set(LegPool_4);
    InstrumentLeg_4.insert(LegPool_4.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_4("STRING_523634374");
    noLegs_0_0.set(LegPriceUnitOfMeasure_4);
    InstrumentLeg_4.insert(LegPriceUnitOfMeasure_4.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_4;
    LegPriceUnitOfMeasureQty_4.setString("14146006");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_4);
    InstrumentLeg_4.insert(LegPriceUnitOfMeasureQty_4.getString());
    FIX::LegProduct LegProduct_4(304932989);
    noLegs_0_0.set(LegProduct_4);
    InstrumentLeg_4.insert(LegProduct_4.getString());
    FIX::LegPutOrCall LegPutOrCall_4(1669922748);
    noLegs_0_0.set(LegPutOrCall_4);
    InstrumentLeg_4.insert(LegPutOrCall_4.getString());
    FIX::LegRatioQty LegRatioQty_4;
    LegRatioQty_4.setString("12047048");
    noLegs_0_0.set(LegRatioQty_4);
    InstrumentLeg_4.insert(LegRatioQty_4.getString());
    FIX::LegRedemptionDate LegRedemptionDate_4("LOCALMKTDATE_529005779");
    noLegs_0_0.set(LegRedemptionDate_4);
    InstrumentLeg_4.insert(LegRedemptionDate_4.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_4("STRING_1402316624");
    noLegs_0_0.set(LegRepoCollateralSecurityType_4);
    InstrumentLeg_4.insert(LegRepoCollateralSecurityType_4.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_4;
    LegRepurchaseRate_4.setString("98.390000");
    noLegs_0_0.set(LegRepurchaseRate_4);
    InstrumentLeg_4.insert(LegRepurchaseRate_4.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_4(1040543037);
    noLegs_0_0.set(LegRepurchaseTerm_4);
    InstrumentLeg_4.insert(LegRepurchaseTerm_4.getString());
    FIX::LegSecurityDesc LegSecurityDesc_4("STRING_359114045");
    noLegs_0_0.set(LegSecurityDesc_4);
    InstrumentLeg_4.insert(LegSecurityDesc_4.getString());
    FIX::LegSecurityExchange LegSecurityExchange_4("EXCHANGE_1711031406");
    noLegs_0_0.set(LegSecurityExchange_4);
    InstrumentLeg_4.insert(LegSecurityExchange_4.getString());
    FIX::LegSecurityID LegSecurityID_4("STRING_1941637121");
    noLegs_0_0.set(LegSecurityID_4);
    InstrumentLeg_4.insert(LegSecurityID_4.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_4("STRING_368509163");
    noLegs_0_0.set(LegSecurityIDSource_4);
    InstrumentLeg_4.insert(LegSecurityIDSource_4.getString());
    FIX::LegSecuritySubType LegSecuritySubType_4("STRING_2085124774");
    noLegs_0_0.set(LegSecuritySubType_4);
    InstrumentLeg_4.insert(LegSecuritySubType_4.getString());
    FIX::LegSecurityType LegSecurityType_4("STRING_1407133787");
    noLegs_0_0.set(LegSecurityType_4);
    InstrumentLeg_4.insert(LegSecurityType_4.getString());
    FIX::LegSide LegSide_4('2');
    noLegs_0_0.set(LegSide_4);
    InstrumentLeg_4.insert(LegSide_4.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_4("STRING_197782299");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_4);
    InstrumentLeg_4.insert(LegStateOrProvinceOfIssue_4.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_4("CHF");
    noLegs_0_0.set(LegStrikeCurrency_4);
    InstrumentLeg_4.insert(LegStrikeCurrency_4.getString());
    FIX::LegStrikePrice LegStrikePrice_4;
    LegStrikePrice_4.setString("13163542");
    noLegs_0_0.set(LegStrikePrice_4);
    InstrumentLeg_4.insert(LegStrikePrice_4.getString());
    FIX::LegSymbol LegSymbol_4("STRING_472652284");
    noLegs_0_0.set(LegSymbol_4);
    InstrumentLeg_4.insert(LegSymbol_4.getString());
    FIX::LegSymbolSfx LegSymbolSfx_4("STRING_946892257");
    noLegs_0_0.set(LegSymbolSfx_4);
    InstrumentLeg_4.insert(LegSymbolSfx_4.getString());
    FIX::LegTimeUnit LegTimeUnit_4("STRING_53981193");
    noLegs_0_0.set(LegTimeUnit_4);
    InstrumentLeg_4.insert(LegTimeUnit_4.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_4("STRING_245529185");
    noLegs_0_0.set(LegUnitOfMeasure_4);
    InstrumentLeg_4.insert(LegUnitOfMeasure_4.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_4;
    LegUnitOfMeasureQty_4.setString("3865372");
    noLegs_0_0.set(LegUnitOfMeasureQty_4);
    InstrumentLeg_4.insert(LegUnitOfMeasureQty_4.getString());
    all_values.push_back(InstrumentLeg_4);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_8;
      FIX::LegSecurityAltID LegSecurityAltID_8("STRING_992034708");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_8);
      LegSecAltIDGrp_NoLegSecurityAltID_8.insert(LegSecurityAltID_8.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_8("STRING_835558544");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_8);
      LegSecAltIDGrp_NoLegSecurityAltID_8.insert(LegSecurityAltIDSource_8.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_8);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_9;
      FIX::LegSecurityAltID LegSecurityAltID_9("STRING_733608109");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_9);
      LegSecAltIDGrp_NoLegSecurityAltID_9.insert(LegSecurityAltID_9.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_9("STRING_751525647");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_9);
      LegSecAltIDGrp_NoLegSecurityAltID_9.insert(LegSecurityAltIDSource_9.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_9);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_10;
      FIX::LegSecurityAltID LegSecurityAltID_10("STRING_2035907520");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_10);
      LegSecAltIDGrp_NoLegSecurityAltID_10.insert(LegSecurityAltID_10.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_10("STRING_1257242483");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_10);
      LegSecAltIDGrp_NoLegSecurityAltID_10.insert(LegSecurityAltIDSource_10.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_10);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_5;
    FIX::EncodedLegIssuer EncodedLegIssuer_5("DATA_18642669");
    noLegs_0_1.set(EncodedLegIssuer_5);
    InstrumentLeg_5.insert(EncodedLegIssuer_5.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_5(193356861);
    noLegs_0_1.set(EncodedLegIssuerLen_5);
    InstrumentLeg_5.insert(EncodedLegIssuerLen_5.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_5("DATA_779681583");
    noLegs_0_1.set(EncodedLegSecurityDesc_5);
    InstrumentLeg_5.insert(EncodedLegSecurityDesc_5.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_5(1223347501);
    noLegs_0_1.set(EncodedLegSecurityDescLen_5);
    InstrumentLeg_5.insert(EncodedLegSecurityDescLen_5.getString());
    FIX::LegCFICode LegCFICode_5("STRING_722362641");
    noLegs_0_1.set(LegCFICode_5);
    InstrumentLeg_5.insert(LegCFICode_5.getString());
    FIX::LegContractMultiplier LegContractMultiplier_5;
    LegContractMultiplier_5.setString("345145");
    noLegs_0_1.set(LegContractMultiplier_5);
    InstrumentLeg_5.insert(LegContractMultiplier_5.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_5(1851257340);
    noLegs_0_1.set(LegContractMultiplierUnit_5);
    InstrumentLeg_5.insert(LegContractMultiplierUnit_5.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_5("MONTHYEAR_1762905678");
    noLegs_0_1.set(LegContractSettlMonth_5);
    InstrumentLeg_5.insert(LegContractSettlMonth_5.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_5("COUNTRY_393628604");
    noLegs_0_1.set(LegCountryOfIssue_5);
    InstrumentLeg_5.insert(LegCountryOfIssue_5.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_5("LOCALMKTDATE_1414805098");
    noLegs_0_1.set(LegCouponPaymentDate_5);
    InstrumentLeg_5.insert(LegCouponPaymentDate_5.getString());
    FIX::LegCouponRate LegCouponRate_5;
    LegCouponRate_5.setString("91.510000");
    noLegs_0_1.set(LegCouponRate_5);
    InstrumentLeg_5.insert(LegCouponRate_5.getString());
    FIX::LegCreditRating LegCreditRating_5("STRING_762137768");
    noLegs_0_1.set(LegCreditRating_5);
    InstrumentLeg_5.insert(LegCreditRating_5.getString());
    FIX::LegCurrency LegCurrency_5("EUR");
    noLegs_0_1.set(LegCurrency_5);
    InstrumentLeg_5.insert(LegCurrency_5.getString());
    FIX::LegDatedDate LegDatedDate_5("LOCALMKTDATE_964961944");
    noLegs_0_1.set(LegDatedDate_5);
    InstrumentLeg_5.insert(LegDatedDate_5.getString());
    FIX::LegExerciseStyle LegExerciseStyle_5(1550228523);
    noLegs_0_1.set(LegExerciseStyle_5);
    InstrumentLeg_5.insert(LegExerciseStyle_5.getString());
    FIX::LegFactor LegFactor_5;
    LegFactor_5.setString("1832861");
    noLegs_0_1.set(LegFactor_5);
    InstrumentLeg_5.insert(LegFactor_5.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_5(11510555);
    noLegs_0_1.set(LegFlowScheduleType_5);
    InstrumentLeg_5.insert(LegFlowScheduleType_5.getString());
    FIX::LegInstrRegistry LegInstrRegistry_5("STRING_719099146");
    noLegs_0_1.set(LegInstrRegistry_5);
    InstrumentLeg_5.insert(LegInstrRegistry_5.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_5("LOCALMKTDATE_655938458");
    noLegs_0_1.set(LegInterestAccrualDate_5);
    InstrumentLeg_5.insert(LegInterestAccrualDate_5.getString());
    FIX::LegIssueDate LegIssueDate_5("LOCALMKTDATE_958402812");
    noLegs_0_1.set(LegIssueDate_5);
    InstrumentLeg_5.insert(LegIssueDate_5.getString());
    FIX::LegIssuer LegIssuer_5("STRING_773080339");
    noLegs_0_1.set(LegIssuer_5);
    InstrumentLeg_5.insert(LegIssuer_5.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_5("STRING_901467643");
    noLegs_0_1.set(LegLocaleOfIssue_5);
    InstrumentLeg_5.insert(LegLocaleOfIssue_5.getString());
    FIX::LegMaturityDate LegMaturityDate_5("LOCALMKTDATE_1344940103");
    noLegs_0_1.set(LegMaturityDate_5);
    InstrumentLeg_5.insert(LegMaturityDate_5.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_5("MONTHYEAR_1968440388");
    noLegs_0_1.set(LegMaturityMonthYear_5);
    InstrumentLeg_5.insert(LegMaturityMonthYear_5.getString());
    FIX::LegMaturityTime LegMaturityTime_5("TZTIMEONLY_1893502352");
    noLegs_0_1.set(LegMaturityTime_5);
    InstrumentLeg_5.insert(LegMaturityTime_5.getString());
    FIX::LegOptAttribute LegOptAttribute_5('3');
    noLegs_0_1.set(LegOptAttribute_5);
    InstrumentLeg_5.insert(LegOptAttribute_5.getString());
    FIX::LegOptionRatio LegOptionRatio_5;
    LegOptionRatio_5.setString("5545648");
    noLegs_0_1.set(LegOptionRatio_5);
    InstrumentLeg_5.insert(LegOptionRatio_5.getString());
    FIX::LegPool LegPool_5("STRING_497544351");
    noLegs_0_1.set(LegPool_5);
    InstrumentLeg_5.insert(LegPool_5.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_5("STRING_2068922519");
    noLegs_0_1.set(LegPriceUnitOfMeasure_5);
    InstrumentLeg_5.insert(LegPriceUnitOfMeasure_5.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_5;
    LegPriceUnitOfMeasureQty_5.setString("18118073");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_5);
    InstrumentLeg_5.insert(LegPriceUnitOfMeasureQty_5.getString());
    FIX::LegProduct LegProduct_5(516187020);
    noLegs_0_1.set(LegProduct_5);
    InstrumentLeg_5.insert(LegProduct_5.getString());
    FIX::LegPutOrCall LegPutOrCall_5(114795732);
    noLegs_0_1.set(LegPutOrCall_5);
    InstrumentLeg_5.insert(LegPutOrCall_5.getString());
    FIX::LegRatioQty LegRatioQty_5;
    LegRatioQty_5.setString("4440052");
    noLegs_0_1.set(LegRatioQty_5);
    InstrumentLeg_5.insert(LegRatioQty_5.getString());
    FIX::LegRedemptionDate LegRedemptionDate_5("LOCALMKTDATE_1739534522");
    noLegs_0_1.set(LegRedemptionDate_5);
    InstrumentLeg_5.insert(LegRedemptionDate_5.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_5("STRING_837158373");
    noLegs_0_1.set(LegRepoCollateralSecurityType_5);
    InstrumentLeg_5.insert(LegRepoCollateralSecurityType_5.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_5;
    LegRepurchaseRate_5.setString("98.280000");
    noLegs_0_1.set(LegRepurchaseRate_5);
    InstrumentLeg_5.insert(LegRepurchaseRate_5.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_5(1443308214);
    noLegs_0_1.set(LegRepurchaseTerm_5);
    InstrumentLeg_5.insert(LegRepurchaseTerm_5.getString());
    FIX::LegSecurityDesc LegSecurityDesc_5("STRING_452580404");
    noLegs_0_1.set(LegSecurityDesc_5);
    InstrumentLeg_5.insert(LegSecurityDesc_5.getString());
    FIX::LegSecurityExchange LegSecurityExchange_5("EXCHANGE_872148433");
    noLegs_0_1.set(LegSecurityExchange_5);
    InstrumentLeg_5.insert(LegSecurityExchange_5.getString());
    FIX::LegSecurityID LegSecurityID_5("STRING_710629665");
    noLegs_0_1.set(LegSecurityID_5);
    InstrumentLeg_5.insert(LegSecurityID_5.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_5("STRING_2009639555");
    noLegs_0_1.set(LegSecurityIDSource_5);
    InstrumentLeg_5.insert(LegSecurityIDSource_5.getString());
    FIX::LegSecuritySubType LegSecuritySubType_5("STRING_1634286201");
    noLegs_0_1.set(LegSecuritySubType_5);
    InstrumentLeg_5.insert(LegSecuritySubType_5.getString());
    FIX::LegSecurityType LegSecurityType_5("STRING_2063075889");
    noLegs_0_1.set(LegSecurityType_5);
    InstrumentLeg_5.insert(LegSecurityType_5.getString());
    FIX::LegSide LegSide_5('6');
    noLegs_0_1.set(LegSide_5);
    InstrumentLeg_5.insert(LegSide_5.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_5("STRING_451764497");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_5);
    InstrumentLeg_5.insert(LegStateOrProvinceOfIssue_5.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_5("GBP");
    noLegs_0_1.set(LegStrikeCurrency_5);
    InstrumentLeg_5.insert(LegStrikeCurrency_5.getString());
    FIX::LegStrikePrice LegStrikePrice_5;
    LegStrikePrice_5.setString("4632750");
    noLegs_0_1.set(LegStrikePrice_5);
    InstrumentLeg_5.insert(LegStrikePrice_5.getString());
    FIX::LegSymbol LegSymbol_5("STRING_37436263");
    noLegs_0_1.set(LegSymbol_5);
    InstrumentLeg_5.insert(LegSymbol_5.getString());
    FIX::LegSymbolSfx LegSymbolSfx_5("STRING_1518089830");
    noLegs_0_1.set(LegSymbolSfx_5);
    InstrumentLeg_5.insert(LegSymbolSfx_5.getString());
    FIX::LegTimeUnit LegTimeUnit_5("STRING_1421677865");
    noLegs_0_1.set(LegTimeUnit_5);
    InstrumentLeg_5.insert(LegTimeUnit_5.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_5("STRING_810516603");
    noLegs_0_1.set(LegUnitOfMeasure_5);
    InstrumentLeg_5.insert(LegUnitOfMeasure_5.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_5;
    LegUnitOfMeasureQty_5.setString("2720738");
    noLegs_0_1.set(LegUnitOfMeasureQty_5);
    InstrumentLeg_5.insert(LegUnitOfMeasureQty_5.getString());
    all_values.push_back(InstrumentLeg_5);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_11;
      FIX::LegSecurityAltID LegSecurityAltID_11("STRING_631473343");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_11);
      LegSecAltIDGrp_NoLegSecurityAltID_11.insert(LegSecurityAltID_11.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_11("STRING_18092529");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_11);
      LegSecAltIDGrp_NoLegSecurityAltID_11.insert(LegSecurityAltIDSource_11.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_11);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_12;
      FIX::LegSecurityAltID LegSecurityAltID_12("STRING_652149319");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_12);
      LegSecAltIDGrp_NoLegSecurityAltID_12.insert(LegSecurityAltID_12.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_12("STRING_1186038193");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_12);
      LegSecAltIDGrp_NoLegSecurityAltID_12.insert(LegSecurityAltIDSource_12.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_12);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_13;
      FIX::LegSecurityAltID LegSecurityAltID_13("STRING_515636881");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_13);
      LegSecAltIDGrp_NoLegSecurityAltID_13.insert(LegSecurityAltID_13.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_13("STRING_573588190");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_13);
      LegSecAltIDGrp_NoLegSecurityAltID_13.insert(LegSecurityAltIDSource_13.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_13);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_5;
  FIX::AttachmentPoint AttachmentPoint_5;
  AttachmentPoint_5.setString("18.790000");
  msg.set(AttachmentPoint_5);
  Instrument_5.insert(AttachmentPoint_5.getString());
  FIX::CFICode CFICode_5("STRING_1031823901");
  msg.set(CFICode_5);
  Instrument_5.insert(CFICode_5.getString());
  FIX::CPProgram CPProgram_5(2);
  msg.set(CPProgram_5);
  Instrument_5.insert(CPProgram_5.getString());
  FIX::CPRegType CPRegType_5("STRING_1294367148");
  msg.set(CPRegType_5);
  Instrument_5.insert(CPRegType_5.getString());
  FIX::CapPrice CapPrice_5;
  CapPrice_5.setString("6238747");
  msg.set(CapPrice_5);
  Instrument_5.insert(CapPrice_5.getString());
  FIX::ContractMultiplier ContractMultiplier_5;
  ContractMultiplier_5.setString("15255422");
  msg.set(ContractMultiplier_5);
  Instrument_5.insert(ContractMultiplier_5.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_5(1);
  msg.set(ContractMultiplierUnit_5);
  Instrument_5.insert(ContractMultiplierUnit_5.getString());
  FIX::ContractSettlMonth ContractSettlMonth_5("MONTHYEAR_2067182990");
  msg.set(ContractSettlMonth_5);
  Instrument_5.insert(ContractSettlMonth_5.getString());
  FIX::CountryOfIssue CountryOfIssue_5("COUNTRY_1978122700");
  msg.set(CountryOfIssue_5);
  Instrument_5.insert(CountryOfIssue_5.getString());
  FIX::CouponPaymentDate CouponPaymentDate_5("LOCALMKTDATE_497551761");
  msg.set(CouponPaymentDate_5);
  Instrument_5.insert(CouponPaymentDate_5.getString());
  FIX::CouponRate CouponRate_5;
  CouponRate_5.setString("90.070000");
  msg.set(CouponRate_5);
  Instrument_5.insert(CouponRate_5.getString());
  FIX::CreditRating CreditRating_5("STRING_1840278607");
  msg.set(CreditRating_5);
  Instrument_5.insert(CreditRating_5.getString());
  FIX::DatedDate DatedDate_5("LOCALMKTDATE_2131837962");
  msg.set(DatedDate_5);
  Instrument_5.insert(DatedDate_5.getString());
  FIX::DetachmentPoint DetachmentPoint_5;
  DetachmentPoint_5.setString("12.480000");
  msg.set(DetachmentPoint_5);
  Instrument_5.insert(DetachmentPoint_5.getString());
  FIX::EncodedIssuer EncodedIssuer_5("DATA_371660158");
  msg.set(EncodedIssuer_5);
  Instrument_5.insert(EncodedIssuer_5.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_5(436118811);
  msg.set(EncodedIssuerLen_5);
  Instrument_5.insert(EncodedIssuerLen_5.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_5("DATA_2011742013");
  msg.set(EncodedSecurityDesc_5);
  Instrument_5.insert(EncodedSecurityDesc_5.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_5(1233811530);
  msg.set(EncodedSecurityDescLen_5);
  Instrument_5.insert(EncodedSecurityDescLen_5.getString());
  FIX::ExerciseStyle ExerciseStyle_5(2);
  msg.set(ExerciseStyle_5);
  Instrument_5.insert(ExerciseStyle_5.getString());
  FIX::Factor Factor_5;
  Factor_5.setString("20491782");
  msg.set(Factor_5);
  Instrument_5.insert(Factor_5.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_5(true);
  msg.set(FlexProductEligibilityIndicator_5);
  Instrument_5.insert(FlexProductEligibilityIndicator_5.getString());
  FIX::FlexibleIndicator FlexibleIndicator_5(false);
  msg.set(FlexibleIndicator_5);
  Instrument_5.insert(FlexibleIndicator_5.getString());
  FIX::FloorPrice FloorPrice_5;
  FloorPrice_5.setString("7122112");
  msg.set(FloorPrice_5);
  Instrument_5.insert(FloorPrice_5.getString());
  FIX::FlowScheduleType FlowScheduleType_5(2);
  msg.set(FlowScheduleType_5);
  Instrument_5.insert(FlowScheduleType_5.getString());
  FIX::InstrRegistry InstrRegistry_5("STRING_792722401");
  msg.set(InstrRegistry_5);
  Instrument_5.insert(InstrRegistry_5.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_5('1');
  msg.set(InstrmtAssignmentMethod_5);
  Instrument_5.insert(InstrmtAssignmentMethod_5.getString());
  FIX::InterestAccrualDate InterestAccrualDate_5("LOCALMKTDATE_894584067");
  msg.set(InterestAccrualDate_5);
  Instrument_5.insert(InterestAccrualDate_5.getString());
  FIX::IssueDate IssueDate_5("LOCALMKTDATE_1444871720");
  msg.set(IssueDate_5);
  Instrument_5.insert(IssueDate_5.getString());
  FIX::Issuer Issuer_5("STRING_382239121");
  msg.set(Issuer_5);
  Instrument_5.insert(Issuer_5.getString());
  FIX::ListMethod ListMethod_5(0);
  msg.set(ListMethod_5);
  Instrument_5.insert(ListMethod_5.getString());
  FIX::LocaleOfIssue LocaleOfIssue_5("STRING_2018459910");
  msg.set(LocaleOfIssue_5);
  Instrument_5.insert(LocaleOfIssue_5.getString());
  FIX::MaturityDate MaturityDate_5("LOCALMKTDATE_1232601000");
  msg.set(MaturityDate_5);
  Instrument_5.insert(MaturityDate_5.getString());
  FIX::MaturityMonthYear MaturityMonthYear_5("MONTHYEAR_294561201");
  msg.set(MaturityMonthYear_5);
  Instrument_5.insert(MaturityMonthYear_5.getString());
  FIX::MaturityTime MaturityTime_5("TZTIMEONLY_559360184");
  msg.set(MaturityTime_5);
  Instrument_5.insert(MaturityTime_5.getString());
  FIX::MinPriceIncrement MinPriceIncrement_5;
  MinPriceIncrement_5.setString("3794845");
  msg.set(MinPriceIncrement_5);
  Instrument_5.insert(MinPriceIncrement_5.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_5;
  MinPriceIncrementAmount_5.setString("9184359");
  msg.set(MinPriceIncrementAmount_5);
  Instrument_5.insert(MinPriceIncrementAmount_5.getString());
  FIX::NTPositionLimit NTPositionLimit_5(2084902480);
  msg.set(NTPositionLimit_5);
  Instrument_5.insert(NTPositionLimit_5.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_5;
  NotionalPercentageOutstanding_5.setString("78.280000");
  msg.set(NotionalPercentageOutstanding_5);
  Instrument_5.insert(NotionalPercentageOutstanding_5.getString());
  FIX::OptAttribute OptAttribute_5('8');
  msg.set(OptAttribute_5);
  Instrument_5.insert(OptAttribute_5.getString());
  FIX::OptPayoutAmount OptPayoutAmount_5;
  OptPayoutAmount_5.setString("19155415");
  msg.set(OptPayoutAmount_5);
  Instrument_5.insert(OptPayoutAmount_5.getString());
  FIX::OptPayoutType OptPayoutType_5(2);
  msg.set(OptPayoutType_5);
  Instrument_5.insert(OptPayoutType_5.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_5;
  OriginalNotionalPercentageOutstanding_5.setString("43.260000");
  msg.set(OriginalNotionalPercentageOutstanding_5);
  Instrument_5.insert(OriginalNotionalPercentageOutstanding_5.getString());
  FIX::Pool Pool_5("STRING_1608336492");
  msg.set(Pool_5);
  Instrument_5.insert(Pool_5.getString());
  FIX::PositionLimit PositionLimit_5(486793904);
  msg.set(PositionLimit_5);
  Instrument_5.insert(PositionLimit_5.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_5("STRING_INT");
  msg.set(PriceQuoteMethod_5);
  Instrument_5.insert(PriceQuoteMethod_5.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_5("STRING_1979996650");
  msg.set(PriceUnitOfMeasure_5);
  Instrument_5.insert(PriceUnitOfMeasure_5.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_5;
  PriceUnitOfMeasureQty_5.setString("9229127");
  msg.set(PriceUnitOfMeasureQty_5);
  Instrument_5.insert(PriceUnitOfMeasureQty_5.getString());
  FIX::Product Product_6(5);
  msg.set(Product_6);
  Instrument_5.insert(Product_6.getString());
  FIX::ProductComplex ProductComplex_5("STRING_1066324532");
  msg.set(ProductComplex_5);
  Instrument_5.insert(ProductComplex_5.getString());
  FIX::PutOrCall PutOrCall_5(0);
  msg.set(PutOrCall_5);
  Instrument_5.insert(PutOrCall_5.getString());
  FIX::RedemptionDate RedemptionDate_5("LOCALMKTDATE_1780338569");
  msg.set(RedemptionDate_5);
  Instrument_5.insert(RedemptionDate_5.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_5("STRING_1670742244");
  msg.set(RepoCollateralSecurityType_5);
  Instrument_5.insert(RepoCollateralSecurityType_5.getString());
  FIX::RepurchaseRate RepurchaseRate_5;
  RepurchaseRate_5.setString("46.610000");
  msg.set(RepurchaseRate_5);
  Instrument_5.insert(RepurchaseRate_5.getString());
  FIX::RepurchaseTerm RepurchaseTerm_5(345066153);
  msg.set(RepurchaseTerm_5);
  Instrument_5.insert(RepurchaseTerm_5.getString());
  FIX::RestructuringType RestructuringType_5("STRING_MR");
  msg.set(RestructuringType_5);
  Instrument_5.insert(RestructuringType_5.getString());
  FIX::SecurityDesc SecurityDesc_5("STRING_641133414");
  msg.set(SecurityDesc_5);
  Instrument_5.insert(SecurityDesc_5.getString());
  FIX::SecurityExchange SecurityExchange_5("EXCHANGE_1688750728");
  msg.set(SecurityExchange_5);
  Instrument_5.insert(SecurityExchange_5.getString());
  FIX::SecurityGroup SecurityGroup_5("STRING_1294334200");
  msg.set(SecurityGroup_5);
  Instrument_5.insert(SecurityGroup_5.getString());
  FIX::SecurityID SecurityID_5("STRING_2086005134");
  msg.set(SecurityID_5);
  Instrument_5.insert(SecurityID_5.getString());
  FIX::SecurityIDSource SecurityIDSource_5("STRING_6");
  msg.set(SecurityIDSource_5);
  Instrument_5.insert(SecurityIDSource_5.getString());
  FIX::SecurityStatus SecurityStatus_5("STRING_1");
  msg.set(SecurityStatus_5);
  Instrument_5.insert(SecurityStatus_5.getString());
  FIX::SecuritySubType SecuritySubType_5("STRING_1956981396");
  msg.set(SecuritySubType_5);
  Instrument_5.insert(SecuritySubType_5.getString());
  FIX::SecurityType SecurityType_6("STRING_TLQN");
  msg.set(SecurityType_6);
  Instrument_5.insert(SecurityType_6.getString());
  FIX::Seniority Seniority_5("STRING_SR");
  msg.set(Seniority_5);
  Instrument_5.insert(Seniority_5.getString());
  FIX::SettlMethod SettlMethod_5('C');
  msg.set(SettlMethod_5);
  Instrument_5.insert(SettlMethod_5.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_5("STRING_1535591701");
  msg.set(SettleOnOpenFlag_5);
  Instrument_5.insert(SettleOnOpenFlag_5.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_5("STRING_1770068679");
  msg.set(StateOrProvinceOfIssue_5);
  Instrument_5.insert(StateOrProvinceOfIssue_5.getString());
  FIX::StrikeCurrency StrikeCurrency_5("GBP");
  msg.set(StrikeCurrency_5);
  Instrument_5.insert(StrikeCurrency_5.getString());
  FIX::StrikeMultiplier StrikeMultiplier_5;
  StrikeMultiplier_5.setString("4607203");
  msg.set(StrikeMultiplier_5);
  Instrument_5.insert(StrikeMultiplier_5.getString());
  FIX::StrikePrice StrikePrice_5;
  StrikePrice_5.setString("743346");
  msg.set(StrikePrice_5);
  Instrument_5.insert(StrikePrice_5.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_5(1);
  msg.set(StrikePriceBoundaryMethod_5);
  Instrument_5.insert(StrikePriceBoundaryMethod_5.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_5;
  StrikePriceBoundaryPrecision_5.setString("46.760000");
  msg.set(StrikePriceBoundaryPrecision_5);
  Instrument_5.insert(StrikePriceBoundaryPrecision_5.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_5(2);
  msg.set(StrikePriceDeterminationMethod_5);
  Instrument_5.insert(StrikePriceDeterminationMethod_5.getString());
  FIX::StrikeValue StrikeValue_5;
  StrikeValue_5.setString("3822293");
  msg.set(StrikeValue_5);
  Instrument_5.insert(StrikeValue_5.getString());
  FIX::Symbol Symbol_5("STRING_1796086602");
  msg.set(Symbol_5);
  Instrument_5.insert(Symbol_5.getString());
  FIX::SymbolSfx SymbolSfx_5("STRING_WI");
  msg.set(SymbolSfx_5);
  Instrument_5.insert(SymbolSfx_5.getString());
  FIX::TimeUnit TimeUnit_5("STRING_S");
  msg.set(TimeUnit_5);
  Instrument_5.insert(TimeUnit_5.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_5(3);
  msg.set(UnderlyingPriceDeterminationMethod_5);
  Instrument_5.insert(UnderlyingPriceDeterminationMethod_5.getString());
  FIX::UnitOfMeasure UnitOfMeasure_5("STRING_Gal");
  msg.set(UnitOfMeasure_5);
  Instrument_5.insert(UnitOfMeasure_5.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_5;
  UnitOfMeasureQty_5.setString("9799650");
  msg.set(UnitOfMeasureQty_5);
  Instrument_5.insert(UnitOfMeasureQty_5.getString());
  FIX::ValuationMethod ValuationMethod_5("STRING_EQTY");
  msg.set(ValuationMethod_5);
  Instrument_5.insert(ValuationMethod_5.getString());
  all_values.push_back(Instrument_5);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_13;
    FIX::ComplexEventCondition ComplexEventCondition_13(2);
    noComplexEvents_0_0.set(ComplexEventCondition_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventCondition_13.getString());
    FIX::ComplexEventPrice ComplexEventPrice_13;
    ComplexEventPrice_13.setString("15051679");
    noComplexEvents_0_0.set(ComplexEventPrice_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPrice_13.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_13(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPriceBoundaryMethod_13.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_13;
    ComplexEventPriceBoundaryPrecision_13.setString("94.510000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPriceBoundaryPrecision_13.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_13(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPriceTimeType_13.getString());
    FIX::ComplexEventType ComplexEventType_13(6);
    noComplexEvents_0_0.set(ComplexEventType_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventType_13.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_13;
    ComplexOptPayoutAmount_13.setString("14080309");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexOptPayoutAmount_13.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_13);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_31;
      FIX::ComplexEventEndDate ComplexEventEndDate_31(FIX::UTCTIMESTAMP(21, 52, 32, 26, 10, 2009));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_31);
      ComplexEventDates_NoComplexEventDates_31.insert(ComplexEventEndDate_31.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_31(FIX::UTCTIMESTAMP(3, 33, 32, 3, 10, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_31);
      ComplexEventDates_NoComplexEventDates_31.insert(ComplexEventStartDate_31.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_31);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_62;
        FIX::ComplexEventEndTime ComplexEventEndTime_62(FIX::UTCTIMEONLY(21, 0, 50));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_62);
        ComplexEventTimes_NoComplexEventTimes_62.insert(ComplexEventEndTime_62.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_62(FIX::UTCTIMEONLY(1, 57, 12));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_62);
        ComplexEventTimes_NoComplexEventTimes_62.insert(ComplexEventStartTime_62.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_62);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_63;
        FIX::ComplexEventEndTime ComplexEventEndTime_63(FIX::UTCTIMEONLY(2, 49, 46));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_63);
        ComplexEventTimes_NoComplexEventTimes_63.insert(ComplexEventEndTime_63.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_63(FIX::UTCTIMEONLY(11, 55, 9));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_63);
        ComplexEventTimes_NoComplexEventTimes_63.insert(ComplexEventStartTime_63.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_63);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_64;
        FIX::ComplexEventEndTime ComplexEventEndTime_64(FIX::UTCTIMEONLY(17, 53, 41));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_64);
        ComplexEventTimes_NoComplexEventTimes_64.insert(ComplexEventEndTime_64.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_64(FIX::UTCTIMEONLY(3, 36, 6));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_64);
        ComplexEventTimes_NoComplexEventTimes_64.insert(ComplexEventStartTime_64.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_64);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_14;
    FIX::ComplexEventCondition ComplexEventCondition_14(1);
    noComplexEvents_0_1.set(ComplexEventCondition_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventCondition_14.getString());
    FIX::ComplexEventPrice ComplexEventPrice_14;
    ComplexEventPrice_14.setString("14792408");
    noComplexEvents_0_1.set(ComplexEventPrice_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPrice_14.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_14(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPriceBoundaryMethod_14.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_14;
    ComplexEventPriceBoundaryPrecision_14.setString("78.180000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPriceBoundaryPrecision_14.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_14(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPriceTimeType_14.getString());
    FIX::ComplexEventType ComplexEventType_14(7);
    noComplexEvents_0_1.set(ComplexEventType_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventType_14.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_14;
    ComplexOptPayoutAmount_14.setString("2849514");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexOptPayoutAmount_14.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_14);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_32;
      FIX::ComplexEventEndDate ComplexEventEndDate_32(FIX::UTCTIMESTAMP(6, 59, 51, 11, 10, 2015));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_32);
      ComplexEventDates_NoComplexEventDates_32.insert(ComplexEventEndDate_32.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_32(FIX::UTCTIMESTAMP(11, 45, 44, 10, 1, 2015));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_32);
      ComplexEventDates_NoComplexEventDates_32.insert(ComplexEventStartDate_32.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_32);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_65;
        FIX::ComplexEventEndTime ComplexEventEndTime_65(FIX::UTCTIMEONLY(12, 17, 18));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_65);
        ComplexEventTimes_NoComplexEventTimes_65.insert(ComplexEventEndTime_65.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_65(FIX::UTCTIMEONLY(0, 54, 33));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_65);
        ComplexEventTimes_NoComplexEventTimes_65.insert(ComplexEventStartTime_65.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_65);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_66;
        FIX::ComplexEventEndTime ComplexEventEndTime_66(FIX::UTCTIMEONLY(7, 4, 56));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_66);
        ComplexEventTimes_NoComplexEventTimes_66.insert(ComplexEventEndTime_66.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_66(FIX::UTCTIMEONLY(4, 2, 34));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_66);
        ComplexEventTimes_NoComplexEventTimes_66.insert(ComplexEventStartTime_66.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_66);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_67;
        FIX::ComplexEventEndTime ComplexEventEndTime_67(FIX::UTCTIMEONLY(21, 34, 45));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_67);
        ComplexEventTimes_NoComplexEventTimes_67.insert(ComplexEventEndTime_67.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_67(FIX::UTCTIMEONLY(23, 41, 30));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_67);
        ComplexEventTimes_NoComplexEventTimes_67.insert(ComplexEventStartTime_67.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_67);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_33;
      FIX::ComplexEventEndDate ComplexEventEndDate_33(FIX::UTCTIMESTAMP(14, 14, 4, 22, 11, 2013));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_33);
      ComplexEventDates_NoComplexEventDates_33.insert(ComplexEventEndDate_33.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_33(FIX::UTCTIMESTAMP(2, 36, 57, 22, 5, 2007));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_33);
      ComplexEventDates_NoComplexEventDates_33.insert(ComplexEventStartDate_33.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_33);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_68;
        FIX::ComplexEventEndTime ComplexEventEndTime_68(FIX::UTCTIMEONLY(2, 55, 59));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_68);
        ComplexEventTimes_NoComplexEventTimes_68.insert(ComplexEventEndTime_68.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_68(FIX::UTCTIMEONLY(4, 54, 13));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_68);
        ComplexEventTimes_NoComplexEventTimes_68.insert(ComplexEventStartTime_68.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_68);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_34;
      FIX::ComplexEventEndDate ComplexEventEndDate_34(FIX::UTCTIMESTAMP(3, 39, 20, 15, 3, 2013));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_34);
      ComplexEventDates_NoComplexEventDates_34.insert(ComplexEventEndDate_34.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_34(FIX::UTCTIMESTAMP(16, 19, 4, 8, 2, 2000));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_34);
      ComplexEventDates_NoComplexEventDates_34.insert(ComplexEventStartDate_34.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_34);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_69;
        FIX::ComplexEventEndTime ComplexEventEndTime_69(FIX::UTCTIMEONLY(13, 36, 49));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_69);
        ComplexEventTimes_NoComplexEventTimes_69.insert(ComplexEventEndTime_69.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_69(FIX::UTCTIMEONLY(5, 24, 34));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_69);
        ComplexEventTimes_NoComplexEventTimes_69.insert(ComplexEventStartTime_69.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_69);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_70;
        FIX::ComplexEventEndTime ComplexEventEndTime_70(FIX::UTCTIMEONLY(18, 22, 39));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_70);
        ComplexEventTimes_NoComplexEventTimes_70.insert(ComplexEventEndTime_70.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_70(FIX::UTCTIMEONLY(14, 33, 54));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_70);
        ComplexEventTimes_NoComplexEventTimes_70.insert(ComplexEventStartTime_70.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_70);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_71;
        FIX::ComplexEventEndTime ComplexEventEndTime_71(FIX::UTCTIMEONLY(12, 34, 40));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_71);
        ComplexEventTimes_NoComplexEventTimes_71.insert(ComplexEventEndTime_71.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_71(FIX::UTCTIMEONLY(4, 41, 54));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_71);
        ComplexEventTimes_NoComplexEventTimes_71.insert(ComplexEventStartTime_71.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_71);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
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
    multiset<string> EvntGrp_NoEvents_12;
    FIX::EventDate EventDate_12("LOCALMKTDATE_855197812");
    noEvents_0_0.set(EventDate_12);
    EvntGrp_NoEvents_12.insert(EventDate_12.getString());
    FIX::EventPx EventPx_12;
    EventPx_12.setString("17386127");
    noEvents_0_0.set(EventPx_12);
    EvntGrp_NoEvents_12.insert(EventPx_12.getString());
    FIX::EventText EventText_12("STRING_373983173");
    noEvents_0_0.set(EventText_12);
    EvntGrp_NoEvents_12.insert(EventText_12.getString());
    FIX::EventTime EventTime_12(FIX::UTCTIMESTAMP(21, 1, 57, 10, 7, 2008));
    noEvents_0_0.set(EventTime_12);
    EvntGrp_NoEvents_12.insert(EventTime_12.getString());
    FIX::EventType EventType_12(2);
    noEvents_0_0.set(EventType_12);
    EvntGrp_NoEvents_12.insert(EventType_12.getString());
    all_values.push_back(EvntGrp_NoEvents_12);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_13;
    FIX::EventDate EventDate_13("LOCALMKTDATE_256472115");
    noEvents_0_1.set(EventDate_13);
    EvntGrp_NoEvents_13.insert(EventDate_13.getString());
    FIX::EventPx EventPx_13;
    EventPx_13.setString("15608707");
    noEvents_0_1.set(EventPx_13);
    EvntGrp_NoEvents_13.insert(EventPx_13.getString());
    FIX::EventText EventText_13("STRING_812649187");
    noEvents_0_1.set(EventText_13);
    EvntGrp_NoEvents_13.insert(EventText_13.getString());
    FIX::EventTime EventTime_13(FIX::UTCTIMESTAMP(8, 29, 42, 25, 12, 2010));
    noEvents_0_1.set(EventTime_13);
    EvntGrp_NoEvents_13.insert(EventTime_13.getString());
    FIX::EventType EventType_13(17);
    noEvents_0_1.set(EventType_13);
    EvntGrp_NoEvents_13.insert(EventType_13.getString());
    all_values.push_back(EvntGrp_NoEvents_13);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_7;
    FIX::InstrumentPartyID InstrumentPartyID_7("STRING_753941384");
    noInstrumentParties_0_0.set(InstrumentPartyID_7);
    InstrumentParties_NoInstrumentParties_7.insert(InstrumentPartyID_7.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_7('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_7);
    InstrumentParties_NoInstrumentParties_7.insert(InstrumentPartyIDSource_7.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_7(1877397452);
    noInstrumentParties_0_0.set(InstrumentPartyRole_7);
    InstrumentParties_NoInstrumentParties_7.insert(InstrumentPartyRole_7.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_7);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17;
      FIX::InstrumentPartySubID InstrumentPartySubID_17("STRING_226540982");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_17);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17.insert(InstrumentPartySubID_17.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_17(1796124186);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_17);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17.insert(InstrumentPartySubIDType_17.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18;
      FIX::InstrumentPartySubID InstrumentPartySubID_18("STRING_1203197434");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_18);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18.insert(InstrumentPartySubID_18.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_18(1421783595);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_18);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18.insert(InstrumentPartySubIDType_18.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_8;
    FIX::InstrumentPartyID InstrumentPartyID_8("STRING_503838350");
    noInstrumentParties_0_1.set(InstrumentPartyID_8);
    InstrumentParties_NoInstrumentParties_8.insert(InstrumentPartyID_8.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_8('7');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_8);
    InstrumentParties_NoInstrumentParties_8.insert(InstrumentPartyIDSource_8.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_8(1795766769);
    noInstrumentParties_0_1.set(InstrumentPartyRole_8);
    InstrumentParties_NoInstrumentParties_8.insert(InstrumentPartyRole_8.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_8);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19;
      FIX::InstrumentPartySubID InstrumentPartySubID_19("STRING_1195861138");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_19);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19.insert(InstrumentPartySubID_19.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_19(1720473602);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_19);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19.insert(InstrumentPartySubIDType_19.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20;
      FIX::InstrumentPartySubID InstrumentPartySubID_20("STRING_451139145");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_20);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20.insert(InstrumentPartySubID_20.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_20(1892630396);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_20);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20.insert(InstrumentPartySubIDType_20.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21;
      FIX::InstrumentPartySubID InstrumentPartySubID_21("STRING_638268144");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_21);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21.insert(InstrumentPartySubID_21.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_21(1341823344);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_21);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21.insert(InstrumentPartySubIDType_21.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_10;
    FIX::SecurityAltID SecurityAltID_10("STRING_894740259");
    noSecurityAltID_0_0.set(SecurityAltID_10);
    SecAltIDGrp_NoSecurityAltID_10.insert(SecurityAltID_10.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_10("STRING_755210478");
    noSecurityAltID_0_0.set(SecurityAltIDSource_10);
    SecAltIDGrp_NoSecurityAltID_10.insert(SecurityAltIDSource_10.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_10);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_11;
    FIX::SecurityAltID SecurityAltID_11("STRING_2092351296");
    noSecurityAltID_0_1.set(SecurityAltID_11);
    SecAltIDGrp_NoSecurityAltID_11.insert(SecurityAltID_11.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_11("STRING_1741284642");
    noSecurityAltID_0_1.set(SecurityAltIDSource_11);
    SecAltIDGrp_NoSecurityAltID_11.insert(SecurityAltIDSource_11.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_11);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_12;
    FIX::SecurityAltID SecurityAltID_12("STRING_674912167");
    noSecurityAltID_0_2.set(SecurityAltID_12);
    SecAltIDGrp_NoSecurityAltID_12.insert(SecurityAltID_12.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_12("STRING_1623157558");
    noSecurityAltID_0_2.set(SecurityAltIDSource_12);
    SecAltIDGrp_NoSecurityAltID_12.insert(SecurityAltIDSource_12.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_12);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_10;
  FIX::SecurityXML SecurityXML_11("XMLDATA_582718637");
  msg.set(SecurityXML_11);
  FIX::SecurityXMLLen SecurityXMLLen_5(2034854076);
  msg.set(SecurityXMLLen_5);
  FIX::SecurityXMLSchema SecurityXMLSchema_5("STRING_621157153");
  msg.set(SecurityXMLSchema_5);
  SecurityXML_10.insert(SecurityXMLSchema_5.getString());
  all_values.push_back(SecurityXML_10);

  // InstrumentExtension
  multiset<string> InstrumentExtension_2;
  FIX::DeliveryForm DeliveryForm_2(2);
  msg.set(DeliveryForm_2);
  InstrumentExtension_2.insert(DeliveryForm_2.getString());
  FIX::PctAtRisk PctAtRisk_2;
  PctAtRisk_2.setString("86.240000");
  msg.set(PctAtRisk_2);
  InstrumentExtension_2.insert(PctAtRisk_2.getString());
  all_values.push_back(InstrumentExtension_2);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationReport::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_4;
    FIX::InstrAttribType InstrAttribType_4(10);
    noInstrAttrib_0_0.set(InstrAttribType_4);
    AttrbGrp_NoInstrAttrib_4.insert(InstrAttribType_4.getString());
    FIX::InstrAttribValue InstrAttribValue_4("STRING_1992057986");
    noInstrAttrib_0_0.set(InstrAttribValue_4);
    AttrbGrp_NoInstrAttrib_4.insert(InstrAttribValue_4.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_4);

    msg.addGroup(noInstrAttrib_0_0);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::AllocationReport::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_5;
    FIX::ClOrdID ClOrdID_5("STRING_916687910");
    noOrders_0_0.set(ClOrdID_5);
    OrdAllocGrp_NoOrders_5.insert(ClOrdID_5.getString());
    FIX::ListID ListID_5("STRING_71115321");
    noOrders_0_0.set(ListID_5);
    OrdAllocGrp_NoOrders_5.insert(ListID_5.getString());
    FIX::OrderAvgPx OrderAvgPx_5;
    OrderAvgPx_5.setString("17020172");
    noOrders_0_0.set(OrderAvgPx_5);
    OrdAllocGrp_NoOrders_5.insert(OrderAvgPx_5.getString());
    FIX::OrderBookingQty OrderBookingQty_5;
    OrderBookingQty_5.setString("21198853");
    noOrders_0_0.set(OrderBookingQty_5);
    OrdAllocGrp_NoOrders_5.insert(OrderBookingQty_5.getString());
    FIX::OrderID OrderID_5("STRING_1492898916");
    noOrders_0_0.set(OrderID_5);
    OrdAllocGrp_NoOrders_5.insert(OrderID_5.getString());
    FIX::OrderQty OrderQty_5;
    OrderQty_5.setString("583719");
    noOrders_0_0.set(OrderQty_5);
    OrdAllocGrp_NoOrders_5.insert(OrderQty_5.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_5("STRING_766728221");
    noOrders_0_0.set(SecondaryClOrdID_5);
    OrdAllocGrp_NoOrders_5.insert(SecondaryClOrdID_5.getString());
    FIX::SecondaryOrderID SecondaryOrderID_5("STRING_1141182037");
    noOrders_0_0.set(SecondaryOrderID_5);
    OrdAllocGrp_NoOrders_5.insert(SecondaryOrderID_5.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_5);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_8;
      FIX::Nested2PartyID Nested2PartyID_8("STRING_1962589359");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_8);
      NestedParties2_NoNested2PartyIDs_8.insert(Nested2PartyID_8.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_8('7');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_8);
      NestedParties2_NoNested2PartyIDs_8.insert(Nested2PartyIDSource_8.getString());
      FIX::Nested2PartyRole Nested2PartyRole_8(1892470192);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_8);
      NestedParties2_NoNested2PartyIDs_8.insert(Nested2PartyRole_8.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_8);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_20;
        FIX::Nested2PartySubID Nested2PartySubID_20("STRING_1352440136");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_20);
        NstdPtys2SubGrp_NoNested2PartySubIDs_20.insert(Nested2PartySubID_20.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_20(1086809888);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_20);
        NstdPtys2SubGrp_NoNested2PartySubIDs_20.insert(Nested2PartySubIDType_20.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_20);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
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
    multiset<string> Parties_NoPartyIDs_8;
    FIX::PartyID PartyID_8("STRING_99696748");
    noPartyIDs_0_0.set(PartyID_8);
    Parties_NoPartyIDs_8.insert(PartyID_8.getString());
    FIX::PartyIDSource PartyIDSource_8('E');
    noPartyIDs_0_0.set(PartyIDSource_8);
    Parties_NoPartyIDs_8.insert(PartyIDSource_8.getString());
    FIX::PartyRole PartyRole_8(55);
    noPartyIDs_0_0.set(PartyRole_8);
    Parties_NoPartyIDs_8.insert(PartyRole_8.getString());
    all_values.push_back(Parties_NoPartyIDs_8);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_15;
      FIX::PartySubID PartySubID_15("STRING_369448885");
      noPartySubIDs_0_1_0.set(PartySubID_15);
      PtysSubGrp_NoPartySubIDs_15.insert(PartySubID_15.getString());
      FIX::PartySubIDType PartySubIDType_15(2);
      noPartySubIDs_0_1_0.set(PartySubIDType_15);
      PtysSubGrp_NoPartySubIDs_15.insert(PartySubIDType_15.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_15);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_16;
      FIX::PartySubID PartySubID_16("STRING_276216379");
      noPartySubIDs_0_1_1.set(PartySubID_16);
      PtysSubGrp_NoPartySubIDs_16.insert(PartySubID_16.getString());
      FIX::PartySubIDType PartySubIDType_16(16);
      noPartySubIDs_0_1_1.set(PartySubIDType_16);
      PtysSubGrp_NoPartySubIDs_16.insert(PartySubIDType_16.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_16);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_2;
    FIX::PosAmt PosAmt_2;
    PosAmt_2.setString("21283846");
    noPosAmt_0_0.set(PosAmt_2);
    PositionAmountData_NoPosAmt_2.insert(PosAmt_2.getString());
    FIX::PosAmtType PosAmtType_2("STRING_ICMTM");
    noPosAmt_0_0.set(PosAmtType_2);
    PositionAmountData_NoPosAmt_2.insert(PosAmtType_2.getString());
    FIX::PositionCurrency PositionCurrency_2("STRING_1057632498");
    noPosAmt_0_0.set(PositionCurrency_2);
    PositionAmountData_NoPosAmt_2.insert(PositionCurrency_2.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_2);

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_3;
    FIX::PosAmt PosAmt_3;
    PosAmt_3.setString("4395269");
    noPosAmt_0_1.set(PosAmt_3);
    PositionAmountData_NoPosAmt_3.insert(PosAmt_3.getString());
    FIX::PosAmtType PosAmtType_3("STRING_DLV");
    noPosAmt_0_1.set(PosAmtType_3);
    PositionAmountData_NoPosAmt_3.insert(PosAmtType_3.getString());
    FIX::PositionCurrency PositionCurrency_3("STRING_963525520");
    noPosAmt_0_1.set(PositionCurrency_3);
    PositionAmountData_NoPosAmt_3.insert(PositionCurrency_3.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_3);

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_4;
    FIX::PosAmt PosAmt_4;
    PosAmt_4.setString("13562148");
    noPosAmt_0_2.set(PosAmt_4);
    PositionAmountData_NoPosAmt_4.insert(PosAmt_4.getString());
    FIX::PosAmtType PosAmtType_4("STRING_CASH");
    noPosAmt_0_2.set(PosAmtType_4);
    PositionAmountData_NoPosAmt_4.insert(PosAmtType_4.getString());
    FIX::PositionCurrency PositionCurrency_4("STRING_518059080");
    noPosAmt_0_2.set(PositionCurrency_4);
    PositionAmountData_NoPosAmt_4.insert(PositionCurrency_4.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_4);

    msg.addGroup(noPosAmt_0_2);
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
    FIX::RateSourceType RateSourceType_3(0);
    noRateSources_0_0.set(RateSourceType_3);
    RateSource_NoRateSources_3.insert(RateSourceType_3.getString());
    FIX::ReferencePage ReferencePage_3("STRING_2095344762");
    noRateSources_0_0.set(ReferencePage_3);
    RateSource_NoRateSources_3.insert(ReferencePage_3.getString());
    all_values.push_back(RateSource_NoRateSources_3);

    msg.addGroup(noRateSources_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_2;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_2("CAN");
  msg.set(BenchmarkCurveCurrency_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkCurveCurrency_2.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_2("STRING_EUREPO");
  msg.set(BenchmarkCurveName_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkCurveName_2.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_2("STRING_185653248");
  msg.set(BenchmarkCurvePoint_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkCurvePoint_2.getString());
  FIX::BenchmarkPrice BenchmarkPrice_2;
  BenchmarkPrice_2.setString("17627485");
  msg.set(BenchmarkPrice_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkPrice_2.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_2(1470702933);
  msg.set(BenchmarkPriceType_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkPriceType_2.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_2("STRING_1538093384");
  msg.set(BenchmarkSecurityID_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkSecurityID_2.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_2("STRING_702074821");
  msg.set(BenchmarkSecurityIDSource_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkSecurityIDSource_2.getString());
  FIX::Spread Spread_2;
  Spread_2.setString("1631738");
  msg.set(Spread_2);
  SpreadOrBenchmarkCurveData_2.insert(Spread_2.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_2);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_5;
    FIX::StipulationType StipulationType_5("STRING_MINDNOM");
    noStipulations_0_0.set(StipulationType_5);
    Stipulations_NoStipulations_5.insert(StipulationType_5.getString());
    FIX::StipulationValue StipulationValue_5("STRING_947996070");
    noStipulations_0_0.set(StipulationValue_5);
    Stipulations_NoStipulations_5.insert(StipulationValue_5.getString());
    all_values.push_back(Stipulations_NoStipulations_5);

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_7;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_7("DATA_766060425");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingIssuer_7.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_7(1208492197);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingIssuerLen_7.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_7("DATA_1607504254");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingSecurityDesc_7.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_7(1022879739);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingSecurityDescLen_7.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_7;
    UnderlyingAdjustedQuantity_7.setString("20901454");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_7);
    UnderlyingInstrument_7.insert(UnderlyingAdjustedQuantity_7.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_7;
    UnderlyingAllocationPercent_7.setString("52.190000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_7);
    UnderlyingInstrument_7.insert(UnderlyingAllocationPercent_7.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_7;
    UnderlyingAttachmentPoint_7.setString("40.290000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_7);
    UnderlyingInstrument_7.insert(UnderlyingAttachmentPoint_7.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_7("STRING_1000294328");
    noUnderlyings_0_0.set(UnderlyingCFICode_7);
    UnderlyingInstrument_7.insert(UnderlyingCFICode_7.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_7("STRING_2027932153");
    noUnderlyings_0_0.set(UnderlyingCPProgram_7);
    UnderlyingInstrument_7.insert(UnderlyingCPProgram_7.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_7("STRING_1153326306");
    noUnderlyings_0_0.set(UnderlyingCPRegType_7);
    UnderlyingInstrument_7.insert(UnderlyingCPRegType_7.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_7;
    UnderlyingCapValue_7.setString("19638198");
    noUnderlyings_0_0.set(UnderlyingCapValue_7);
    UnderlyingInstrument_7.insert(UnderlyingCapValue_7.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_7;
    UnderlyingCashAmount_7.setString("12366633");
    noUnderlyings_0_0.set(UnderlyingCashAmount_7);
    UnderlyingInstrument_7.insert(UnderlyingCashAmount_7.getString());
    FIX::UnderlyingCashType UnderlyingCashType_7("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_7);
    UnderlyingInstrument_7.insert(UnderlyingCashType_7.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_7;
    UnderlyingContractMultiplier_7.setString("3343952");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_7);
    UnderlyingInstrument_7.insert(UnderlyingContractMultiplier_7.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_7(417796241);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_7);
    UnderlyingInstrument_7.insert(UnderlyingContractMultiplierUnit_7.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_7("COUNTRY_615993123");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_7);
    UnderlyingInstrument_7.insert(UnderlyingCountryOfIssue_7.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_7("LOCALMKTDATE_910826270");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_7);
    UnderlyingInstrument_7.insert(UnderlyingCouponPaymentDate_7.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_7;
    UnderlyingCouponRate_7.setString("73.550000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_7);
    UnderlyingInstrument_7.insert(UnderlyingCouponRate_7.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_7("STRING_87474379");
    noUnderlyings_0_0.set(UnderlyingCreditRating_7);
    UnderlyingInstrument_7.insert(UnderlyingCreditRating_7.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_7("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_7);
    UnderlyingInstrument_7.insert(UnderlyingCurrency_7.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_7;
    UnderlyingCurrentValue_7.setString("2731276");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_7);
    UnderlyingInstrument_7.insert(UnderlyingCurrentValue_7.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_7;
    UnderlyingDetachmentPoint_7.setString("95.920000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_7);
    UnderlyingInstrument_7.insert(UnderlyingDetachmentPoint_7.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_7;
    UnderlyingDirtyPrice_7.setString("15993271");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_7);
    UnderlyingInstrument_7.insert(UnderlyingDirtyPrice_7.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_7;
    UnderlyingEndPrice_7.setString("18112210");
    noUnderlyings_0_0.set(UnderlyingEndPrice_7);
    UnderlyingInstrument_7.insert(UnderlyingEndPrice_7.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_7;
    UnderlyingEndValue_7.setString("10984444");
    noUnderlyings_0_0.set(UnderlyingEndValue_7);
    UnderlyingInstrument_7.insert(UnderlyingEndValue_7.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_7(1762500967);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_7);
    UnderlyingInstrument_7.insert(UnderlyingExerciseStyle_7.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_7;
    UnderlyingFXRate_7.setString("13015274");
    noUnderlyings_0_0.set(UnderlyingFXRate_7);
    UnderlyingInstrument_7.insert(UnderlyingFXRate_7.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_7('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_7);
    UnderlyingInstrument_7.insert(UnderlyingFXRateCalc_7.getString());
    FIX::UnderlyingFactor UnderlyingFactor_7;
    UnderlyingFactor_7.setString("5630133");
    noUnderlyings_0_0.set(UnderlyingFactor_7);
    UnderlyingInstrument_7.insert(UnderlyingFactor_7.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_7(485331723);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_7);
    UnderlyingInstrument_7.insert(UnderlyingFlowScheduleType_7.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_7("STRING_113632730");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_7);
    UnderlyingInstrument_7.insert(UnderlyingInstrRegistry_7.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_7("LOCALMKTDATE_1771505587");
    noUnderlyings_0_0.set(UnderlyingIssueDate_7);
    UnderlyingInstrument_7.insert(UnderlyingIssueDate_7.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_7("STRING_2092835977");
    noUnderlyings_0_0.set(UnderlyingIssuer_7);
    UnderlyingInstrument_7.insert(UnderlyingIssuer_7.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_7("STRING_1136512469");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_7);
    UnderlyingInstrument_7.insert(UnderlyingLocaleOfIssue_7.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_7("LOCALMKTDATE_1714167417");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_7);
    UnderlyingInstrument_7.insert(UnderlyingMaturityDate_7.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_7("MONTHYEAR_1533757548");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_7);
    UnderlyingInstrument_7.insert(UnderlyingMaturityMonthYear_7.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_7("TZTIMEONLY_1228586498");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_7);
    UnderlyingInstrument_7.insert(UnderlyingMaturityTime_7.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_7;
    UnderlyingNotionalPercentageOutstanding_7.setString("80.970000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_7);
    UnderlyingInstrument_7.insert(UnderlyingNotionalPercentageOutstanding_7.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_7('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_7);
    UnderlyingInstrument_7.insert(UnderlyingOptAttribute_7.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_7;
    UnderlyingOriginalNotionalPercentageOutstanding_7.setString("91.570000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_7);
    UnderlyingInstrument_7.insert(UnderlyingOriginalNotionalPercentageOutstanding_7.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_7("STRING_383314297");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_7);
    UnderlyingInstrument_7.insert(UnderlyingPriceUnitOfMeasure_7.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_7;
    UnderlyingPriceUnitOfMeasureQty_7.setString("5033857");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_7);
    UnderlyingInstrument_7.insert(UnderlyingPriceUnitOfMeasureQty_7.getString());
    FIX::UnderlyingProduct UnderlyingProduct_7(372639413);
    noUnderlyings_0_0.set(UnderlyingProduct_7);
    UnderlyingInstrument_7.insert(UnderlyingProduct_7.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_7(717709577);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_7);
    UnderlyingInstrument_7.insert(UnderlyingPutOrCall_7.getString());
    FIX::UnderlyingPx UnderlyingPx_7;
    UnderlyingPx_7.setString("9211819");
    noUnderlyings_0_0.set(UnderlyingPx_7);
    UnderlyingInstrument_7.insert(UnderlyingPx_7.getString());
    FIX::UnderlyingQty UnderlyingQty_7;
    UnderlyingQty_7.setString("9886325");
    noUnderlyings_0_0.set(UnderlyingQty_7);
    UnderlyingInstrument_7.insert(UnderlyingQty_7.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_7("LOCALMKTDATE_1628535848");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_7);
    UnderlyingInstrument_7.insert(UnderlyingRedemptionDate_7.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_7("STRING_1286839351");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_7);
    UnderlyingInstrument_7.insert(UnderlyingRepoCollateralSecurityType_7.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_7;
    UnderlyingRepurchaseRate_7.setString("69.150000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_7);
    UnderlyingInstrument_7.insert(UnderlyingRepurchaseRate_7.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_7(262156859);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_7);
    UnderlyingInstrument_7.insert(UnderlyingRepurchaseTerm_7.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_7("STRING_1415463532");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_7);
    UnderlyingInstrument_7.insert(UnderlyingRestructuringType_7.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_7("STRING_1349234542");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityDesc_7.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_7("EXCHANGE_658526452");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityExchange_7.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_7("STRING_867306998");
    noUnderlyings_0_0.set(UnderlyingSecurityID_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityID_7.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_7("STRING_1012971906");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityIDSource_7.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_7("STRING_1756970865");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_7);
    UnderlyingInstrument_7.insert(UnderlyingSecuritySubType_7.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_7("STRING_482324318");
    noUnderlyings_0_0.set(UnderlyingSecurityType_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityType_7.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_7("STRING_167015754");
    noUnderlyings_0_0.set(UnderlyingSeniority_7);
    UnderlyingInstrument_7.insert(UnderlyingSeniority_7.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_7("STRING_1104543170");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_7);
    UnderlyingInstrument_7.insert(UnderlyingSettlMethod_7.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_7(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_7);
    UnderlyingInstrument_7.insert(UnderlyingSettlementType_7.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_7;
    UnderlyingStartValue_7.setString("6523474");
    noUnderlyings_0_0.set(UnderlyingStartValue_7);
    UnderlyingInstrument_7.insert(UnderlyingStartValue_7.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_7("STRING_1218175900");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_7);
    UnderlyingInstrument_7.insert(UnderlyingStateOrProvinceOfIssue_7.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_7("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_7);
    UnderlyingInstrument_7.insert(UnderlyingStrikeCurrency_7.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_7;
    UnderlyingStrikePrice_7.setString("2072047");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_7);
    UnderlyingInstrument_7.insert(UnderlyingStrikePrice_7.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_7("STRING_236043417");
    noUnderlyings_0_0.set(UnderlyingSymbol_7);
    UnderlyingInstrument_7.insert(UnderlyingSymbol_7.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_7("STRING_2131457355");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_7);
    UnderlyingInstrument_7.insert(UnderlyingSymbolSfx_7.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_7("STRING_1435791220");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_7);
    UnderlyingInstrument_7.insert(UnderlyingTimeUnit_7.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_7("STRING_803021514");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_7);
    UnderlyingInstrument_7.insert(UnderlyingUnitOfMeasure_7.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_7;
    UnderlyingUnitOfMeasureQty_7.setString("13981797");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_7);
    UnderlyingInstrument_7.insert(UnderlyingUnitOfMeasureQty_7.getString());
    all_values.push_back(UnderlyingInstrument_7);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_15;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_15("STRING_1186335812");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_15);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_15.insert(UnderlyingSecurityAltID_15.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_15("STRING_1901565515");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_15);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_15.insert(UnderlyingSecurityAltIDSource_15.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_15);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_16;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_16("STRING_2042859790");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_16);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_16.insert(UnderlyingSecurityAltID_16.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_16("STRING_1904045389");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_16);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_16.insert(UnderlyingSecurityAltIDSource_16.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_16);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_17;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_17("STRING_675263863");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_17);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_17.insert(UnderlyingSecurityAltID_17.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_17("STRING_884008679");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_17);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_17.insert(UnderlyingSecurityAltIDSource_17.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_17);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_15;
      FIX::UnderlyingStipType UnderlyingStipType_15("STRING_1962103214");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_15);
      UnderlyingStipulations_NoUnderlyingStips_15.insert(UnderlyingStipType_15.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_15("STRING_1960115594");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_15);
      UnderlyingStipulations_NoUnderlyingStips_15.insert(UnderlyingStipValue_15.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_15);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_16;
      FIX::UnderlyingStipType UnderlyingStipType_16("STRING_1647254449");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_16);
      UnderlyingStipulations_NoUnderlyingStips_16.insert(UnderlyingStipType_16.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_16("STRING_1230083099");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_16);
      UnderlyingStipulations_NoUnderlyingStips_16.insert(UnderlyingStipValue_16.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_16);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_13;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_13("STRING_158297253");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_13);
      UndlyInstrumentParties_NoUndlyInstrumentParties_13.insert(UnderlyingInstrumentPartyID_13.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_13('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_13);
      UndlyInstrumentParties_NoUndlyInstrumentParties_13.insert(UnderlyingInstrumentPartyIDSource_13.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_13(27354747);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_13);
      UndlyInstrumentParties_NoUndlyInstrumentParties_13.insert(UnderlyingInstrumentPartyRole_13.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_13);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_27("STRING_432230767");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_27);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27.insert(UnderlyingInstrumentPartySubID_27.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_27(194370501);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_27);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27.insert(UnderlyingInstrumentPartySubIDType_27.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_14;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_14("STRING_872327641");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_14);
      UndlyInstrumentParties_NoUndlyInstrumentParties_14.insert(UnderlyingInstrumentPartyID_14.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_14('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_14);
      UndlyInstrumentParties_NoUndlyInstrumentParties_14.insert(UnderlyingInstrumentPartyIDSource_14.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_14(846717978);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_14);
      UndlyInstrumentParties_NoUndlyInstrumentParties_14.insert(UnderlyingInstrumentPartyRole_14.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_14);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_28("STRING_2146928123");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_28);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28.insert(UnderlyingInstrumentPartySubID_28.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_28(1444417784);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_28);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28.insert(UnderlyingInstrumentPartySubIDType_28.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_29("STRING_150224615");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_29);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29.insert(UnderlyingInstrumentPartySubID_29.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_29(235487892);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_29);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29.insert(UnderlyingInstrumentPartySubIDType_29.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_30("STRING_1428391491");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_30);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30.insert(UnderlyingInstrumentPartySubID_30.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_30(1586015835);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_30);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30.insert(UnderlyingInstrumentPartySubIDType_30.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_15;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_15("STRING_1038509406");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_15);
      UndlyInstrumentParties_NoUndlyInstrumentParties_15.insert(UnderlyingInstrumentPartyID_15.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_15('6');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_15);
      UndlyInstrumentParties_NoUndlyInstrumentParties_15.insert(UnderlyingInstrumentPartyIDSource_15.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_15(1108752564);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_15);
      UndlyInstrumentParties_NoUndlyInstrumentParties_15.insert(UnderlyingInstrumentPartyRole_15.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_15);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_31("STRING_433169471");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_31);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31.insert(UnderlyingInstrumentPartySubID_31.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_31(1004128706);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_31);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31.insert(UnderlyingInstrumentPartySubIDType_31.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_2;
  FIX::Yield Yield_2;
  Yield_2.setString("69.600000");
  msg.set(Yield_2);
  YieldData_2.insert(Yield_2.getString());
  FIX::YieldCalcDate YieldCalcDate_2("LOCALMKTDATE_1108433334");
  msg.set(YieldCalcDate_2);
  YieldData_2.insert(YieldCalcDate_2.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_2("LOCALMKTDATE_1888137385");
  msg.set(YieldRedemptionDate_2);
  YieldData_2.insert(YieldRedemptionDate_2.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_2;
  YieldRedemptionPrice_2.setString("12190209");
  msg.set(YieldRedemptionPrice_2);
  YieldData_2.insert(YieldRedemptionPrice_2.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_2(923052900);
  msg.set(YieldRedemptionPriceType_2);
  YieldData_2.insert(YieldRedemptionPriceType_2.getString());
  FIX::YieldType YieldType_2("STRING_LASTCLOSE");
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
