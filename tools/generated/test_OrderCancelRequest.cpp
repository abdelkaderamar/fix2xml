#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/OrderCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderCancelRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> OrderCancelRequest_0;
  FIX::Account Account_24("STRING_1373584848");
  msg.set(Account_24);
  OrderCancelRequest_0.insert(Account_24.getString());
  FIX::AccountType AccountType_21(1);
  msg.set(AccountType_21);
  OrderCancelRequest_0.insert(AccountType_21.getString());
  FIX::AcctIDSource AcctIDSource_17(5);
  msg.set(AcctIDSource_17);
  OrderCancelRequest_0.insert(AcctIDSource_17.getString());
  FIX::ClOrdID ClOrdID_36("STRING_1437196743");
  msg.set(ClOrdID_36);
  OrderCancelRequest_0.insert(ClOrdID_36.getString());
  FIX::ClOrdLinkID ClOrdLinkID_15("STRING_217411122");
  msg.set(ClOrdLinkID_15);
  OrderCancelRequest_0.insert(ClOrdLinkID_15.getString());
  FIX::ComplianceID ComplianceID_11("STRING_164961182");
  msg.set(ComplianceID_11);
  OrderCancelRequest_0.insert(ComplianceID_11.getString());
  FIX::EncodedText EncodedText_71("DATA_165344614");
  msg.set(EncodedText_71);
  OrderCancelRequest_0.insert(EncodedText_71.getString());
  FIX::EncodedTextLen EncodedTextLen_71(694579498);
  msg.set(EncodedTextLen_71);
  OrderCancelRequest_0.insert(EncodedTextLen_71.getString());
  FIX::ListID ListID_23("STRING_1056423894");
  msg.set(ListID_23);
  OrderCancelRequest_0.insert(ListID_23.getString());
  FIX::OrderID OrderID_31("STRING_107240247");
  msg.set(OrderID_31);
  OrderCancelRequest_0.insert(OrderID_31.getString());
  FIX::OrigClOrdID OrigClOrdID_12("STRING_482088608");
  msg.set(OrigClOrdID_12);
  OrderCancelRequest_0.insert(OrigClOrdID_12.getString());
  FIX::OrigOrdModTime OrigOrdModTime_6(FIX::UTCTIMESTAMP(5, 5, 34, 7, 12, 2005));
  msg.set(OrigOrdModTime_6);
  OrderCancelRequest_0.insert(OrigOrdModTime_6.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_34("STRING_2110942033");
  msg.set(SecondaryClOrdID_34);
  OrderCancelRequest_0.insert(SecondaryClOrdID_34.getString());
  FIX::Side Side_34('4');
  msg.set(Side_34);
  OrderCancelRequest_0.insert(Side_34.getString());
  FIX::Text Text_71("STRING_1617675303");
  msg.set(Text_71);
  OrderCancelRequest_0.insert(Text_71.getString());
  FIX::TransactTime TransactTime_41(FIX::UTCTIMESTAMP(18, 12, 59, 26, 5, 2005));
  msg.set(TransactTime_41);
  OrderCancelRequest_0.insert(TransactTime_41.getString());
  all_values.push_back(OrderCancelRequest_0);

  // FinancingDetails
  multiset<string> FinancingDetails_14;
  FIX::AgreementCurrency AgreementCurrency_14("JPY");
  msg.set(AgreementCurrency_14);
  FinancingDetails_14.insert(AgreementCurrency_14.getString());
  FIX::AgreementDate AgreementDate_14("LOCALMKTDATE_605786718");
  msg.set(AgreementDate_14);
  FinancingDetails_14.insert(AgreementDate_14.getString());
  FIX::AgreementDesc AgreementDesc_14("STRING_1367907098");
  msg.set(AgreementDesc_14);
  FinancingDetails_14.insert(AgreementDesc_14.getString());
  FIX::AgreementID AgreementID_14("STRING_466066551");
  msg.set(AgreementID_14);
  FinancingDetails_14.insert(AgreementID_14.getString());
  FIX::DeliveryType DeliveryType_14(0);
  msg.set(DeliveryType_14);
  FinancingDetails_14.insert(DeliveryType_14.getString());
  FIX::EndDate EndDate_14("LOCALMKTDATE_657620194");
  msg.set(EndDate_14);
  FinancingDetails_14.insert(EndDate_14.getString());
  FIX::MarginRatio MarginRatio_14;
  MarginRatio_14.setString("76.730000");
  msg.set(MarginRatio_14);
  FinancingDetails_14.insert(MarginRatio_14.getString());
  FIX::StartDate StartDate_14("LOCALMKTDATE_1334051539");
  msg.set(StartDate_14);
  FinancingDetails_14.insert(StartDate_14.getString());
  FIX::TerminationType TerminationType_14(1);
  msg.set(TerminationType_14);
  FinancingDetails_14.insert(TerminationType_14.getString());
  all_values.push_back(FinancingDetails_14);

  // Instrument
  multiset<string> Instrument_50;
  FIX::AttachmentPoint AttachmentPoint_50;
  AttachmentPoint_50.setString("71.720000");
  msg.set(AttachmentPoint_50);
  Instrument_50.insert(AttachmentPoint_50.getString());
  FIX::CFICode CFICode_50("STRING_242991785");
  msg.set(CFICode_50);
  Instrument_50.insert(CFICode_50.getString());
  FIX::CPProgram CPProgram_50(99);
  msg.set(CPProgram_50);
  Instrument_50.insert(CPProgram_50.getString());
  FIX::CPRegType CPRegType_50("STRING_1860145780");
  msg.set(CPRegType_50);
  Instrument_50.insert(CPRegType_50.getString());
  FIX::CapPrice CapPrice_50;
  CapPrice_50.setString("20943657");
  msg.set(CapPrice_50);
  Instrument_50.insert(CapPrice_50.getString());
  FIX::ContractMultiplier ContractMultiplier_50;
  ContractMultiplier_50.setString("16651684");
  msg.set(ContractMultiplier_50);
  Instrument_50.insert(ContractMultiplier_50.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_50(1);
  msg.set(ContractMultiplierUnit_50);
  Instrument_50.insert(ContractMultiplierUnit_50.getString());
  FIX::ContractSettlMonth ContractSettlMonth_50("MONTHYEAR_1528759221");
  msg.set(ContractSettlMonth_50);
  Instrument_50.insert(ContractSettlMonth_50.getString());
  FIX::CountryOfIssue CountryOfIssue_50("COUNTRY_836381312");
  msg.set(CountryOfIssue_50);
  Instrument_50.insert(CountryOfIssue_50.getString());
  FIX::CouponPaymentDate CouponPaymentDate_50("LOCALMKTDATE_2076928621");
  msg.set(CouponPaymentDate_50);
  Instrument_50.insert(CouponPaymentDate_50.getString());
  FIX::CouponRate CouponRate_50;
  CouponRate_50.setString("19.020000");
  msg.set(CouponRate_50);
  Instrument_50.insert(CouponRate_50.getString());
  FIX::CreditRating CreditRating_50("STRING_799839697");
  msg.set(CreditRating_50);
  Instrument_50.insert(CreditRating_50.getString());
  FIX::DatedDate DatedDate_50("LOCALMKTDATE_2042449408");
  msg.set(DatedDate_50);
  Instrument_50.insert(DatedDate_50.getString());
  FIX::DetachmentPoint DetachmentPoint_50;
  DetachmentPoint_50.setString("35.570000");
  msg.set(DetachmentPoint_50);
  Instrument_50.insert(DetachmentPoint_50.getString());
  FIX::EncodedIssuer EncodedIssuer_50("DATA_1594183529");
  msg.set(EncodedIssuer_50);
  Instrument_50.insert(EncodedIssuer_50.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_50(686118194);
  msg.set(EncodedIssuerLen_50);
  Instrument_50.insert(EncodedIssuerLen_50.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_50("DATA_118917462");
  msg.set(EncodedSecurityDesc_50);
  Instrument_50.insert(EncodedSecurityDesc_50.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_50(1767228628);
  msg.set(EncodedSecurityDescLen_50);
  Instrument_50.insert(EncodedSecurityDescLen_50.getString());
  FIX::ExerciseStyle ExerciseStyle_50(0);
  msg.set(ExerciseStyle_50);
  Instrument_50.insert(ExerciseStyle_50.getString());
  FIX::Factor Factor_50;
  Factor_50.setString("7597648");
  msg.set(Factor_50);
  Instrument_50.insert(Factor_50.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_50(false);
  msg.set(FlexProductEligibilityIndicator_50);
  Instrument_50.insert(FlexProductEligibilityIndicator_50.getString());
  FIX::FlexibleIndicator FlexibleIndicator_50(true);
  msg.set(FlexibleIndicator_50);
  Instrument_50.insert(FlexibleIndicator_50.getString());
  FIX::FloorPrice FloorPrice_50;
  FloorPrice_50.setString("4678389");
  msg.set(FloorPrice_50);
  Instrument_50.insert(FloorPrice_50.getString());
  FIX::FlowScheduleType FlowScheduleType_50(1);
  msg.set(FlowScheduleType_50);
  Instrument_50.insert(FlowScheduleType_50.getString());
  FIX::InstrRegistry InstrRegistry_50("STRING_1743342712");
  msg.set(InstrRegistry_50);
  Instrument_50.insert(InstrRegistry_50.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_50('9');
  msg.set(InstrmtAssignmentMethod_50);
  Instrument_50.insert(InstrmtAssignmentMethod_50.getString());
  FIX::InterestAccrualDate InterestAccrualDate_50("LOCALMKTDATE_1777480008");
  msg.set(InterestAccrualDate_50);
  Instrument_50.insert(InterestAccrualDate_50.getString());
  FIX::IssueDate IssueDate_50("LOCALMKTDATE_253479258");
  msg.set(IssueDate_50);
  Instrument_50.insert(IssueDate_50.getString());
  FIX::Issuer Issuer_50("STRING_1617383137");
  msg.set(Issuer_50);
  Instrument_50.insert(Issuer_50.getString());
  FIX::ListMethod ListMethod_50(1);
  msg.set(ListMethod_50);
  Instrument_50.insert(ListMethod_50.getString());
  FIX::LocaleOfIssue LocaleOfIssue_50("STRING_1076444066");
  msg.set(LocaleOfIssue_50);
  Instrument_50.insert(LocaleOfIssue_50.getString());
  FIX::MaturityDate MaturityDate_50("LOCALMKTDATE_847956661");
  msg.set(MaturityDate_50);
  Instrument_50.insert(MaturityDate_50.getString());
  FIX::MaturityMonthYear MaturityMonthYear_50("MONTHYEAR_1207039684");
  msg.set(MaturityMonthYear_50);
  Instrument_50.insert(MaturityMonthYear_50.getString());
  FIX::MaturityTime MaturityTime_50("TZTIMEONLY_2006649122");
  msg.set(MaturityTime_50);
  Instrument_50.insert(MaturityTime_50.getString());
  FIX::MinPriceIncrement MinPriceIncrement_50;
  MinPriceIncrement_50.setString("5606187");
  msg.set(MinPriceIncrement_50);
  Instrument_50.insert(MinPriceIncrement_50.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_50;
  MinPriceIncrementAmount_50.setString("11539217");
  msg.set(MinPriceIncrementAmount_50);
  Instrument_50.insert(MinPriceIncrementAmount_50.getString());
  FIX::NTPositionLimit NTPositionLimit_50(1524333887);
  msg.set(NTPositionLimit_50);
  Instrument_50.insert(NTPositionLimit_50.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_50;
  NotionalPercentageOutstanding_50.setString("1.910000");
  msg.set(NotionalPercentageOutstanding_50);
  Instrument_50.insert(NotionalPercentageOutstanding_50.getString());
  FIX::OptAttribute OptAttribute_50('5');
  msg.set(OptAttribute_50);
  Instrument_50.insert(OptAttribute_50.getString());
  FIX::OptPayoutAmount OptPayoutAmount_50;
  OptPayoutAmount_50.setString("2132315");
  msg.set(OptPayoutAmount_50);
  Instrument_50.insert(OptPayoutAmount_50.getString());
  FIX::OptPayoutType OptPayoutType_50(2);
  msg.set(OptPayoutType_50);
  Instrument_50.insert(OptPayoutType_50.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_50;
  OriginalNotionalPercentageOutstanding_50.setString("92.650000");
  msg.set(OriginalNotionalPercentageOutstanding_50);
  Instrument_50.insert(OriginalNotionalPercentageOutstanding_50.getString());
  FIX::Pool Pool_50("STRING_1013071249");
  msg.set(Pool_50);
  Instrument_50.insert(Pool_50.getString());
  FIX::PositionLimit PositionLimit_50(1126770924);
  msg.set(PositionLimit_50);
  Instrument_50.insert(PositionLimit_50.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_50("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_50);
  Instrument_50.insert(PriceQuoteMethod_50.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_50("STRING_459771130");
  msg.set(PriceUnitOfMeasure_50);
  Instrument_50.insert(PriceUnitOfMeasure_50.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_50;
  PriceUnitOfMeasureQty_50.setString("18128891");
  msg.set(PriceUnitOfMeasureQty_50);
  Instrument_50.insert(PriceUnitOfMeasureQty_50.getString());
  FIX::Product Product_52(12);
  msg.set(Product_52);
  Instrument_50.insert(Product_52.getString());
  FIX::ProductComplex ProductComplex_50("STRING_79516110");
  msg.set(ProductComplex_50);
  Instrument_50.insert(ProductComplex_50.getString());
  FIX::PutOrCall PutOrCall_50(0);
  msg.set(PutOrCall_50);
  Instrument_50.insert(PutOrCall_50.getString());
  FIX::RedemptionDate RedemptionDate_50("LOCALMKTDATE_674771527");
  msg.set(RedemptionDate_50);
  Instrument_50.insert(RedemptionDate_50.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_50("STRING_82119044");
  msg.set(RepoCollateralSecurityType_50);
  Instrument_50.insert(RepoCollateralSecurityType_50.getString());
  FIX::RepurchaseRate RepurchaseRate_50;
  RepurchaseRate_50.setString("44.480000");
  msg.set(RepurchaseRate_50);
  Instrument_50.insert(RepurchaseRate_50.getString());
  FIX::RepurchaseTerm RepurchaseTerm_50(1142610439);
  msg.set(RepurchaseTerm_50);
  Instrument_50.insert(RepurchaseTerm_50.getString());
  FIX::RestructuringType RestructuringType_50("STRING_XR");
  msg.set(RestructuringType_50);
  Instrument_50.insert(RestructuringType_50.getString());
  FIX::SecurityDesc SecurityDesc_50("STRING_17813513");
  msg.set(SecurityDesc_50);
  Instrument_50.insert(SecurityDesc_50.getString());
  FIX::SecurityExchange SecurityExchange_50("EXCHANGE_2076515903");
  msg.set(SecurityExchange_50);
  Instrument_50.insert(SecurityExchange_50.getString());
  FIX::SecurityGroup SecurityGroup_50("STRING_320505055");
  msg.set(SecurityGroup_50);
  Instrument_50.insert(SecurityGroup_50.getString());
  FIX::SecurityID SecurityID_50("STRING_271292771");
  msg.set(SecurityID_50);
  Instrument_50.insert(SecurityID_50.getString());
  FIX::SecurityIDSource SecurityIDSource_50("STRING_I");
  msg.set(SecurityIDSource_50);
  Instrument_50.insert(SecurityIDSource_50.getString());
  FIX::SecurityStatus SecurityStatus_50("STRING_1");
  msg.set(SecurityStatus_50);
  Instrument_50.insert(SecurityStatus_50.getString());
  FIX::SecuritySubType SecuritySubType_51("STRING_1347736838");
  msg.set(SecuritySubType_51);
  Instrument_50.insert(SecuritySubType_51.getString());
  FIX::SecurityType SecurityType_52("STRING_PZFJ");
  msg.set(SecurityType_52);
  Instrument_50.insert(SecurityType_52.getString());
  FIX::Seniority Seniority_50("STRING_SB");
  msg.set(Seniority_50);
  Instrument_50.insert(Seniority_50.getString());
  FIX::SettlMethod SettlMethod_50('C');
  msg.set(SettlMethod_50);
  Instrument_50.insert(SettlMethod_50.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_50("STRING_807507200");
  msg.set(SettleOnOpenFlag_50);
  Instrument_50.insert(SettleOnOpenFlag_50.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_50("STRING_1498030781");
  msg.set(StateOrProvinceOfIssue_50);
  Instrument_50.insert(StateOrProvinceOfIssue_50.getString());
  FIX::StrikeCurrency StrikeCurrency_50("GBP");
  msg.set(StrikeCurrency_50);
  Instrument_50.insert(StrikeCurrency_50.getString());
  FIX::StrikeMultiplier StrikeMultiplier_50;
  StrikeMultiplier_50.setString("20332281");
  msg.set(StrikeMultiplier_50);
  Instrument_50.insert(StrikeMultiplier_50.getString());
  FIX::StrikePrice StrikePrice_50;
  StrikePrice_50.setString("7969841");
  msg.set(StrikePrice_50);
  Instrument_50.insert(StrikePrice_50.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_50(4);
  msg.set(StrikePriceBoundaryMethod_50);
  Instrument_50.insert(StrikePriceBoundaryMethod_50.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_50;
  StrikePriceBoundaryPrecision_50.setString("37.620000");
  msg.set(StrikePriceBoundaryPrecision_50);
  Instrument_50.insert(StrikePriceBoundaryPrecision_50.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_50(4);
  msg.set(StrikePriceDeterminationMethod_50);
  Instrument_50.insert(StrikePriceDeterminationMethod_50.getString());
  FIX::StrikeValue StrikeValue_50;
  StrikeValue_50.setString("1734761");
  msg.set(StrikeValue_50);
  Instrument_50.insert(StrikeValue_50.getString());
  FIX::Symbol Symbol_50("STRING_1186122937");
  msg.set(Symbol_50);
  Instrument_50.insert(Symbol_50.getString());
  FIX::SymbolSfx SymbolSfx_50("STRING_WI");
  msg.set(SymbolSfx_50);
  Instrument_50.insert(SymbolSfx_50.getString());
  FIX::TimeUnit TimeUnit_50("STRING_Yr");
  msg.set(TimeUnit_50);
  Instrument_50.insert(TimeUnit_50.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_50(3);
  msg.set(UnderlyingPriceDeterminationMethod_50);
  Instrument_50.insert(UnderlyingPriceDeterminationMethod_50.getString());
  FIX::UnitOfMeasure UnitOfMeasure_50("STRING_MMbbl");
  msg.set(UnitOfMeasure_50);
  Instrument_50.insert(UnitOfMeasure_50.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_50;
  UnitOfMeasureQty_50.setString("20328841");
  msg.set(UnitOfMeasureQty_50);
  Instrument_50.insert(UnitOfMeasureQty_50.getString());
  FIX::ValuationMethod ValuationMethod_50("STRING_FUT");
  msg.set(ValuationMethod_50);
  Instrument_50.insert(ValuationMethod_50.getString());
  all_values.push_back(Instrument_50);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_97;
    FIX::ComplexEventCondition ComplexEventCondition_97(1);
    noComplexEvents_0_0.set(ComplexEventCondition_97);
    ComplexEvents_NoComplexEvents_97.insert(ComplexEventCondition_97.getString());
    FIX::ComplexEventPrice ComplexEventPrice_97;
    ComplexEventPrice_97.setString("7710278");
    noComplexEvents_0_0.set(ComplexEventPrice_97);
    ComplexEvents_NoComplexEvents_97.insert(ComplexEventPrice_97.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_97(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_97);
    ComplexEvents_NoComplexEvents_97.insert(ComplexEventPriceBoundaryMethod_97.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_97;
    ComplexEventPriceBoundaryPrecision_97.setString("84.510000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_97);
    ComplexEvents_NoComplexEvents_97.insert(ComplexEventPriceBoundaryPrecision_97.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_97(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_97);
    ComplexEvents_NoComplexEvents_97.insert(ComplexEventPriceTimeType_97.getString());
    FIX::ComplexEventType ComplexEventType_97(1);
    noComplexEvents_0_0.set(ComplexEventType_97);
    ComplexEvents_NoComplexEvents_97.insert(ComplexEventType_97.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_97;
    ComplexOptPayoutAmount_97.setString("5964612");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_97);
    ComplexEvents_NoComplexEvents_97.insert(ComplexOptPayoutAmount_97.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_97);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_199;
      FIX::ComplexEventEndDate ComplexEventEndDate_199(FIX::UTCTIMESTAMP(13, 39, 16, 13, 1, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_199);
      ComplexEventDates_NoComplexEventDates_199.insert(ComplexEventEndDate_199.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_199(FIX::UTCTIMESTAMP(12, 25, 50, 8, 12, 2002));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_199);
      ComplexEventDates_NoComplexEventDates_199.insert(ComplexEventStartDate_199.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_199);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_407;
        FIX::ComplexEventEndTime ComplexEventEndTime_407(FIX::UTCTIMEONLY(19, 45, 50));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_407);
        ComplexEventTimes_NoComplexEventTimes_407.insert(ComplexEventEndTime_407.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_407(FIX::UTCTIMEONLY(19, 23, 19));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_407);
        ComplexEventTimes_NoComplexEventTimes_407.insert(ComplexEventStartTime_407.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_407);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_408;
        FIX::ComplexEventEndTime ComplexEventEndTime_408(FIX::UTCTIMEONLY(4, 3, 25));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_408);
        ComplexEventTimes_NoComplexEventTimes_408.insert(ComplexEventEndTime_408.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_408(FIX::UTCTIMEONLY(22, 48, 9));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_408);
        ComplexEventTimes_NoComplexEventTimes_408.insert(ComplexEventStartTime_408.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_408);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_409;
        FIX::ComplexEventEndTime ComplexEventEndTime_409(FIX::UTCTIMEONLY(5, 48, 15));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_409);
        ComplexEventTimes_NoComplexEventTimes_409.insert(ComplexEventEndTime_409.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_409(FIX::UTCTIMEONLY(12, 4, 34));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_409);
        ComplexEventTimes_NoComplexEventTimes_409.insert(ComplexEventStartTime_409.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_409);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_200;
      FIX::ComplexEventEndDate ComplexEventEndDate_200(FIX::UTCTIMESTAMP(18, 24, 49, 9, 7, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_200);
      ComplexEventDates_NoComplexEventDates_200.insert(ComplexEventEndDate_200.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_200(FIX::UTCTIMESTAMP(14, 3, 8, 25, 11, 2006));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_200);
      ComplexEventDates_NoComplexEventDates_200.insert(ComplexEventStartDate_200.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_200);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_410;
        FIX::ComplexEventEndTime ComplexEventEndTime_410(FIX::UTCTIMEONLY(16, 32, 29));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_410);
        ComplexEventTimes_NoComplexEventTimes_410.insert(ComplexEventEndTime_410.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_410(FIX::UTCTIMEONLY(10, 17, 57));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_410);
        ComplexEventTimes_NoComplexEventTimes_410.insert(ComplexEventStartTime_410.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_410);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_411;
        FIX::ComplexEventEndTime ComplexEventEndTime_411(FIX::UTCTIMEONLY(2, 45, 5));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_411);
        ComplexEventTimes_NoComplexEventTimes_411.insert(ComplexEventEndTime_411.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_411(FIX::UTCTIMEONLY(2, 1, 14));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_411);
        ComplexEventTimes_NoComplexEventTimes_411.insert(ComplexEventStartTime_411.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_411);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_412;
        FIX::ComplexEventEndTime ComplexEventEndTime_412(FIX::UTCTIMEONLY(23, 38, 11));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_412);
        ComplexEventTimes_NoComplexEventTimes_412.insert(ComplexEventEndTime_412.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_412(FIX::UTCTIMEONLY(13, 22, 51));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_412);
        ComplexEventTimes_NoComplexEventTimes_412.insert(ComplexEventStartTime_412.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_412);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_201;
      FIX::ComplexEventEndDate ComplexEventEndDate_201(FIX::UTCTIMESTAMP(17, 51, 16, 8, 4, 2015));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_201);
      ComplexEventDates_NoComplexEventDates_201.insert(ComplexEventEndDate_201.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_201(FIX::UTCTIMESTAMP(23, 9, 41, 11, 8, 2014));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_201);
      ComplexEventDates_NoComplexEventDates_201.insert(ComplexEventStartDate_201.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_201);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_413;
        FIX::ComplexEventEndTime ComplexEventEndTime_413(FIX::UTCTIMEONLY(16, 10, 2));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_413);
        ComplexEventTimes_NoComplexEventTimes_413.insert(ComplexEventEndTime_413.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_413(FIX::UTCTIMEONLY(4, 3, 34));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_413);
        ComplexEventTimes_NoComplexEventTimes_413.insert(ComplexEventStartTime_413.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_413);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_414;
        FIX::ComplexEventEndTime ComplexEventEndTime_414(FIX::UTCTIMEONLY(19, 4, 54));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_414);
        ComplexEventTimes_NoComplexEventTimes_414.insert(ComplexEventEndTime_414.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_414(FIX::UTCTIMEONLY(21, 8, 35));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_414);
        ComplexEventTimes_NoComplexEventTimes_414.insert(ComplexEventStartTime_414.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_414);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_415;
        FIX::ComplexEventEndTime ComplexEventEndTime_415(FIX::UTCTIMEONLY(1, 26, 1));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_415);
        ComplexEventTimes_NoComplexEventTimes_415.insert(ComplexEventEndTime_415.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_415(FIX::UTCTIMEONLY(10, 46, 37));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_415);
        ComplexEventTimes_NoComplexEventTimes_415.insert(ComplexEventStartTime_415.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_415);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_98;
    FIX::ComplexEventCondition ComplexEventCondition_98(2);
    noComplexEvents_0_1.set(ComplexEventCondition_98);
    ComplexEvents_NoComplexEvents_98.insert(ComplexEventCondition_98.getString());
    FIX::ComplexEventPrice ComplexEventPrice_98;
    ComplexEventPrice_98.setString("20326705");
    noComplexEvents_0_1.set(ComplexEventPrice_98);
    ComplexEvents_NoComplexEvents_98.insert(ComplexEventPrice_98.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_98(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_98);
    ComplexEvents_NoComplexEvents_98.insert(ComplexEventPriceBoundaryMethod_98.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_98;
    ComplexEventPriceBoundaryPrecision_98.setString("66.970000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_98);
    ComplexEvents_NoComplexEvents_98.insert(ComplexEventPriceBoundaryPrecision_98.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_98(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_98);
    ComplexEvents_NoComplexEvents_98.insert(ComplexEventPriceTimeType_98.getString());
    FIX::ComplexEventType ComplexEventType_98(7);
    noComplexEvents_0_1.set(ComplexEventType_98);
    ComplexEvents_NoComplexEvents_98.insert(ComplexEventType_98.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_98;
    ComplexOptPayoutAmount_98.setString("5195474");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_98);
    ComplexEvents_NoComplexEvents_98.insert(ComplexOptPayoutAmount_98.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_98);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_202;
      FIX::ComplexEventEndDate ComplexEventEndDate_202(FIX::UTCTIMESTAMP(7, 54, 44, 11, 3, 2000));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_202);
      ComplexEventDates_NoComplexEventDates_202.insert(ComplexEventEndDate_202.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_202(FIX::UTCTIMESTAMP(13, 15, 20, 17, 1, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_202);
      ComplexEventDates_NoComplexEventDates_202.insert(ComplexEventStartDate_202.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_202);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_416;
        FIX::ComplexEventEndTime ComplexEventEndTime_416(FIX::UTCTIMEONLY(21, 38, 46));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_416);
        ComplexEventTimes_NoComplexEventTimes_416.insert(ComplexEventEndTime_416.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_416(FIX::UTCTIMEONLY(0, 32, 40));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_416);
        ComplexEventTimes_NoComplexEventTimes_416.insert(ComplexEventStartTime_416.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_416);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_417;
        FIX::ComplexEventEndTime ComplexEventEndTime_417(FIX::UTCTIMEONLY(8, 51, 23));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_417);
        ComplexEventTimes_NoComplexEventTimes_417.insert(ComplexEventEndTime_417.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_417(FIX::UTCTIMEONLY(7, 44, 0));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_417);
        ComplexEventTimes_NoComplexEventTimes_417.insert(ComplexEventStartTime_417.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_417);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_418;
        FIX::ComplexEventEndTime ComplexEventEndTime_418(FIX::UTCTIMEONLY(8, 47, 0));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_418);
        ComplexEventTimes_NoComplexEventTimes_418.insert(ComplexEventEndTime_418.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_418(FIX::UTCTIMEONLY(17, 11, 25));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_418);
        ComplexEventTimes_NoComplexEventTimes_418.insert(ComplexEventStartTime_418.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_418);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_203;
      FIX::ComplexEventEndDate ComplexEventEndDate_203(FIX::UTCTIMESTAMP(2, 45, 15, 18, 2, 2003));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_203);
      ComplexEventDates_NoComplexEventDates_203.insert(ComplexEventEndDate_203.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_203(FIX::UTCTIMESTAMP(3, 5, 49, 22, 11, 2004));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_203);
      ComplexEventDates_NoComplexEventDates_203.insert(ComplexEventStartDate_203.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_203);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_419;
        FIX::ComplexEventEndTime ComplexEventEndTime_419(FIX::UTCTIMEONLY(10, 25, 59));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_419);
        ComplexEventTimes_NoComplexEventTimes_419.insert(ComplexEventEndTime_419.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_419(FIX::UTCTIMEONLY(9, 35, 35));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_419);
        ComplexEventTimes_NoComplexEventTimes_419.insert(ComplexEventStartTime_419.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_419);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_420;
        FIX::ComplexEventEndTime ComplexEventEndTime_420(FIX::UTCTIMEONLY(19, 22, 9));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_420);
        ComplexEventTimes_NoComplexEventTimes_420.insert(ComplexEventEndTime_420.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_420(FIX::UTCTIMEONLY(3, 12, 0));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_420);
        ComplexEventTimes_NoComplexEventTimes_420.insert(ComplexEventStartTime_420.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_420);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_92;
    FIX::EventDate EventDate_92("LOCALMKTDATE_1920386678");
    noEvents_0_0.set(EventDate_92);
    EvntGrp_NoEvents_92.insert(EventDate_92.getString());
    FIX::EventPx EventPx_92;
    EventPx_92.setString("15064074");
    noEvents_0_0.set(EventPx_92);
    EvntGrp_NoEvents_92.insert(EventPx_92.getString());
    FIX::EventText EventText_92("STRING_1055966668");
    noEvents_0_0.set(EventText_92);
    EvntGrp_NoEvents_92.insert(EventText_92.getString());
    FIX::EventTime EventTime_92(FIX::UTCTIMESTAMP(3, 55, 52, 10, 5, 2000));
    noEvents_0_0.set(EventTime_92);
    EvntGrp_NoEvents_92.insert(EventTime_92.getString());
    FIX::EventType EventType_92(17);
    noEvents_0_0.set(EventType_92);
    EvntGrp_NoEvents_92.insert(EventType_92.getString());
    all_values.push_back(EvntGrp_NoEvents_92);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_93;
    FIX::EventDate EventDate_93("LOCALMKTDATE_1777910942");
    noEvents_0_1.set(EventDate_93);
    EvntGrp_NoEvents_93.insert(EventDate_93.getString());
    FIX::EventPx EventPx_93;
    EventPx_93.setString("1233126");
    noEvents_0_1.set(EventPx_93);
    EvntGrp_NoEvents_93.insert(EventPx_93.getString());
    FIX::EventText EventText_93("STRING_51532863");
    noEvents_0_1.set(EventText_93);
    EvntGrp_NoEvents_93.insert(EventText_93.getString());
    FIX::EventTime EventTime_93(FIX::UTCTIMESTAMP(18, 28, 29, 9, 6, 2011));
    noEvents_0_1.set(EventTime_93);
    EvntGrp_NoEvents_93.insert(EventTime_93.getString());
    FIX::EventType EventType_93(1);
    noEvents_0_1.set(EventType_93);
    EvntGrp_NoEvents_93.insert(EventType_93.getString());
    all_values.push_back(EvntGrp_NoEvents_93);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_93;
    FIX::InstrumentPartyID InstrumentPartyID_93("STRING_203065240");
    noInstrumentParties_0_0.set(InstrumentPartyID_93);
    InstrumentParties_NoInstrumentParties_93.insert(InstrumentPartyID_93.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_93('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_93);
    InstrumentParties_NoInstrumentParties_93.insert(InstrumentPartyIDSource_93.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_93(1042301568);
    noInstrumentParties_0_0.set(InstrumentPartyRole_93);
    InstrumentParties_NoInstrumentParties_93.insert(InstrumentPartyRole_93.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_93);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206;
      FIX::InstrumentPartySubID InstrumentPartySubID_206("STRING_1124341485");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_206);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206.insert(InstrumentPartySubID_206.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_206(1365852540);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_206);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206.insert(InstrumentPartySubIDType_206.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_94;
    FIX::InstrumentPartyID InstrumentPartyID_94("STRING_1881125476");
    noInstrumentParties_0_1.set(InstrumentPartyID_94);
    InstrumentParties_NoInstrumentParties_94.insert(InstrumentPartyID_94.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_94('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_94);
    InstrumentParties_NoInstrumentParties_94.insert(InstrumentPartyIDSource_94.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_94(1138755571);
    noInstrumentParties_0_1.set(InstrumentPartyRole_94);
    InstrumentParties_NoInstrumentParties_94.insert(InstrumentPartyRole_94.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_94);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207;
      FIX::InstrumentPartySubID InstrumentPartySubID_207("STRING_266042418");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_207);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207.insert(InstrumentPartySubID_207.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_207(1037804360);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_207);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207.insert(InstrumentPartySubIDType_207.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_109;
    FIX::SecurityAltID SecurityAltID_109("STRING_1652279173");
    noSecurityAltID_0_0.set(SecurityAltID_109);
    SecAltIDGrp_NoSecurityAltID_109.insert(SecurityAltID_109.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_109("STRING_1082319072");
    noSecurityAltID_0_0.set(SecurityAltIDSource_109);
    SecAltIDGrp_NoSecurityAltID_109.insert(SecurityAltIDSource_109.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_109);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_110;
    FIX::SecurityAltID SecurityAltID_110("STRING_1887104900");
    noSecurityAltID_0_1.set(SecurityAltID_110);
    SecAltIDGrp_NoSecurityAltID_110.insert(SecurityAltID_110.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_110("STRING_393204597");
    noSecurityAltID_0_1.set(SecurityAltIDSource_110);
    SecAltIDGrp_NoSecurityAltID_110.insert(SecurityAltIDSource_110.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_110);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_100;
  FIX::SecurityXML SecurityXML_101("XMLDATA_1481340534");
  msg.set(SecurityXML_101);
  FIX::SecurityXMLLen SecurityXMLLen_50(1443812148);
  msg.set(SecurityXMLLen_50);
  FIX::SecurityXMLSchema SecurityXMLSchema_50("STRING_23631892");
  msg.set(SecurityXMLSchema_50);
  SecurityXML_100.insert(SecurityXMLSchema_50.getString());
  all_values.push_back(SecurityXML_100);

  // OrderQtyData
  multiset<string> OrderQtyData_17;
  FIX::CashOrderQty CashOrderQty_17;
  CashOrderQty_17.setString("16046531");
  msg.set(CashOrderQty_17);
  OrderQtyData_17.insert(CashOrderQty_17.getString());
  FIX::OrderPercent OrderPercent_17;
  OrderPercent_17.setString("50.110000");
  msg.set(OrderPercent_17);
  OrderQtyData_17.insert(OrderPercent_17.getString());
  FIX::OrderQty OrderQty_25;
  OrderQty_25.setString("1402905");
  msg.set(OrderQty_25);
  OrderQtyData_17.insert(OrderQty_25.getString());
  FIX::RoundingDirection RoundingDirection_17('1');
  msg.set(RoundingDirection_17);
  OrderQtyData_17.insert(RoundingDirection_17.getString());
  FIX::RoundingModulus RoundingModulus_17;
  RoundingModulus_17.setString("7352115");
  msg.set(RoundingModulus_17);
  OrderQtyData_17.insert(RoundingModulus_17.getString());
  all_values.push_back(OrderQtyData_17);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_85;
    FIX::PartyID PartyID_85("STRING_1036703718");
    noPartyIDs_0_0.set(PartyID_85);
    Parties_NoPartyIDs_85.insert(PartyID_85.getString());
    FIX::PartyIDSource PartyIDSource_85('B');
    noPartyIDs_0_0.set(PartyIDSource_85);
    Parties_NoPartyIDs_85.insert(PartyIDSource_85.getString());
    FIX::PartyRole PartyRole_85(39);
    noPartyIDs_0_0.set(PartyRole_85);
    Parties_NoPartyIDs_85.insert(PartyRole_85.getString());
    all_values.push_back(Parties_NoPartyIDs_85);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_174;
      FIX::PartySubID PartySubID_174("STRING_1453156580");
      noPartySubIDs_0_1_0.set(PartySubID_174);
      PtysSubGrp_NoPartySubIDs_174.insert(PartySubID_174.getString());
      FIX::PartySubIDType PartySubIDType_174(6);
      noPartySubIDs_0_1_0.set(PartySubIDType_174);
      PtysSubGrp_NoPartySubIDs_174.insert(PartySubIDType_174.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_174);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_175;
      FIX::PartySubID PartySubID_175("STRING_911510872");
      noPartySubIDs_0_1_1.set(PartySubID_175);
      PtysSubGrp_NoPartySubIDs_175.insert(PartySubID_175.getString());
      FIX::PartySubIDType PartySubIDType_175(28);
      noPartySubIDs_0_1_1.set(PartySubIDType_175);
      PtysSubGrp_NoPartySubIDs_175.insert(PartySubIDType_175.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_175);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_86;
    FIX::PartyID PartyID_86("STRING_1641159225");
    noPartyIDs_0_1.set(PartyID_86);
    Parties_NoPartyIDs_86.insert(PartyID_86.getString());
    FIX::PartyIDSource PartyIDSource_86('D');
    noPartyIDs_0_1.set(PartyIDSource_86);
    Parties_NoPartyIDs_86.insert(PartyIDSource_86.getString());
    FIX::PartyRole PartyRole_86(74);
    noPartyIDs_0_1.set(PartyRole_86);
    Parties_NoPartyIDs_86.insert(PartyRole_86.getString());
    all_values.push_back(Parties_NoPartyIDs_86);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_176;
      FIX::PartySubID PartySubID_176("STRING_1245928107");
      noPartySubIDs_1_1_0.set(PartySubID_176);
      PtysSubGrp_NoPartySubIDs_176.insert(PartySubID_176.getString());
      FIX::PartySubIDType PartySubIDType_176(9);
      noPartySubIDs_1_1_0.set(PartySubIDType_176);
      PtysSubGrp_NoPartySubIDs_176.insert(PartySubIDType_176.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_176);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_177;
      FIX::PartySubID PartySubID_177("STRING_467366679");
      noPartySubIDs_1_1_1.set(PartySubID_177);
      PtysSubGrp_NoPartySubIDs_177.insert(PartySubID_177.getString());
      FIX::PartySubIDType PartySubIDType_177(22);
      noPartySubIDs_1_1_1.set(PartySubIDType_177);
      PtysSubGrp_NoPartySubIDs_177.insert(PartySubIDType_177.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_177);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_178;
      FIX::PartySubID PartySubID_178("STRING_1742903323");
      noPartySubIDs_1_1_2.set(PartySubID_178);
      PtysSubGrp_NoPartySubIDs_178.insert(PartySubID_178.getString());
      FIX::PartySubIDType PartySubIDType_178(20);
      noPartySubIDs_1_1_2.set(PartySubIDType_178);
      PtysSubGrp_NoPartySubIDs_178.insert(PartySubIDType_178.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_178);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderCancelRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_72;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_72("DATA_677738748");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingIssuer_72.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_72(385044808);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingIssuerLen_72.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_72("DATA_1409970647");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingSecurityDesc_72.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_72(11595634);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingSecurityDescLen_72.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_72;
    UnderlyingAdjustedQuantity_72.setString("18288569");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_72);
    UnderlyingInstrument_72.insert(UnderlyingAdjustedQuantity_72.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_72;
    UnderlyingAllocationPercent_72.setString("25.390000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_72);
    UnderlyingInstrument_72.insert(UnderlyingAllocationPercent_72.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_72;
    UnderlyingAttachmentPoint_72.setString("88.250000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_72);
    UnderlyingInstrument_72.insert(UnderlyingAttachmentPoint_72.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_72("STRING_1176718320");
    noUnderlyings_0_0.set(UnderlyingCFICode_72);
    UnderlyingInstrument_72.insert(UnderlyingCFICode_72.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_72("STRING_1573893062");
    noUnderlyings_0_0.set(UnderlyingCPProgram_72);
    UnderlyingInstrument_72.insert(UnderlyingCPProgram_72.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_72("STRING_175993530");
    noUnderlyings_0_0.set(UnderlyingCPRegType_72);
    UnderlyingInstrument_72.insert(UnderlyingCPRegType_72.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_72;
    UnderlyingCapValue_72.setString("19119298");
    noUnderlyings_0_0.set(UnderlyingCapValue_72);
    UnderlyingInstrument_72.insert(UnderlyingCapValue_72.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_72;
    UnderlyingCashAmount_72.setString("7918060");
    noUnderlyings_0_0.set(UnderlyingCashAmount_72);
    UnderlyingInstrument_72.insert(UnderlyingCashAmount_72.getString());
    FIX::UnderlyingCashType UnderlyingCashType_72("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_72);
    UnderlyingInstrument_72.insert(UnderlyingCashType_72.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_72;
    UnderlyingContractMultiplier_72.setString("13197867");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_72);
    UnderlyingInstrument_72.insert(UnderlyingContractMultiplier_72.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_72(1337552675);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_72);
    UnderlyingInstrument_72.insert(UnderlyingContractMultiplierUnit_72.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_72("COUNTRY_565887878");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_72);
    UnderlyingInstrument_72.insert(UnderlyingCountryOfIssue_72.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_72("LOCALMKTDATE_625459678");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_72);
    UnderlyingInstrument_72.insert(UnderlyingCouponPaymentDate_72.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_72;
    UnderlyingCouponRate_72.setString("45.240000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_72);
    UnderlyingInstrument_72.insert(UnderlyingCouponRate_72.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_72("STRING_1477398750");
    noUnderlyings_0_0.set(UnderlyingCreditRating_72);
    UnderlyingInstrument_72.insert(UnderlyingCreditRating_72.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_72("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_72);
    UnderlyingInstrument_72.insert(UnderlyingCurrency_72.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_72;
    UnderlyingCurrentValue_72.setString("13657674");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_72);
    UnderlyingInstrument_72.insert(UnderlyingCurrentValue_72.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_72;
    UnderlyingDetachmentPoint_72.setString("75.700000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_72);
    UnderlyingInstrument_72.insert(UnderlyingDetachmentPoint_72.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_72;
    UnderlyingDirtyPrice_72.setString("8073575");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_72);
    UnderlyingInstrument_72.insert(UnderlyingDirtyPrice_72.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_72;
    UnderlyingEndPrice_72.setString("4642119");
    noUnderlyings_0_0.set(UnderlyingEndPrice_72);
    UnderlyingInstrument_72.insert(UnderlyingEndPrice_72.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_72;
    UnderlyingEndValue_72.setString("12448765");
    noUnderlyings_0_0.set(UnderlyingEndValue_72);
    UnderlyingInstrument_72.insert(UnderlyingEndValue_72.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_72(1274724185);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_72);
    UnderlyingInstrument_72.insert(UnderlyingExerciseStyle_72.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_72;
    UnderlyingFXRate_72.setString("19761824");
    noUnderlyings_0_0.set(UnderlyingFXRate_72);
    UnderlyingInstrument_72.insert(UnderlyingFXRate_72.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_72('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_72);
    UnderlyingInstrument_72.insert(UnderlyingFXRateCalc_72.getString());
    FIX::UnderlyingFactor UnderlyingFactor_72;
    UnderlyingFactor_72.setString("19201477");
    noUnderlyings_0_0.set(UnderlyingFactor_72);
    UnderlyingInstrument_72.insert(UnderlyingFactor_72.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_72(845464845);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_72);
    UnderlyingInstrument_72.insert(UnderlyingFlowScheduleType_72.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_72("STRING_1518034957");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_72);
    UnderlyingInstrument_72.insert(UnderlyingInstrRegistry_72.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_72("LOCALMKTDATE_157708902");
    noUnderlyings_0_0.set(UnderlyingIssueDate_72);
    UnderlyingInstrument_72.insert(UnderlyingIssueDate_72.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_72("STRING_107951844");
    noUnderlyings_0_0.set(UnderlyingIssuer_72);
    UnderlyingInstrument_72.insert(UnderlyingIssuer_72.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_72("STRING_1529630592");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_72);
    UnderlyingInstrument_72.insert(UnderlyingLocaleOfIssue_72.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_72("LOCALMKTDATE_1986565859");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_72);
    UnderlyingInstrument_72.insert(UnderlyingMaturityDate_72.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_72("MONTHYEAR_1541554384");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_72);
    UnderlyingInstrument_72.insert(UnderlyingMaturityMonthYear_72.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_72("TZTIMEONLY_998395769");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_72);
    UnderlyingInstrument_72.insert(UnderlyingMaturityTime_72.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_72;
    UnderlyingNotionalPercentageOutstanding_72.setString("5.320000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_72);
    UnderlyingInstrument_72.insert(UnderlyingNotionalPercentageOutstanding_72.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_72('9');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_72);
    UnderlyingInstrument_72.insert(UnderlyingOptAttribute_72.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_72;
    UnderlyingOriginalNotionalPercentageOutstanding_72.setString("92.990000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_72);
    UnderlyingInstrument_72.insert(UnderlyingOriginalNotionalPercentageOutstanding_72.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_72("STRING_780246776");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_72);
    UnderlyingInstrument_72.insert(UnderlyingPriceUnitOfMeasure_72.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_72;
    UnderlyingPriceUnitOfMeasureQty_72.setString("17597698");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_72);
    UnderlyingInstrument_72.insert(UnderlyingPriceUnitOfMeasureQty_72.getString());
    FIX::UnderlyingProduct UnderlyingProduct_72(239602899);
    noUnderlyings_0_0.set(UnderlyingProduct_72);
    UnderlyingInstrument_72.insert(UnderlyingProduct_72.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_72(2100033522);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_72);
    UnderlyingInstrument_72.insert(UnderlyingPutOrCall_72.getString());
    FIX::UnderlyingPx UnderlyingPx_72;
    UnderlyingPx_72.setString("9498388");
    noUnderlyings_0_0.set(UnderlyingPx_72);
    UnderlyingInstrument_72.insert(UnderlyingPx_72.getString());
    FIX::UnderlyingQty UnderlyingQty_72;
    UnderlyingQty_72.setString("8054907");
    noUnderlyings_0_0.set(UnderlyingQty_72);
    UnderlyingInstrument_72.insert(UnderlyingQty_72.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_72("LOCALMKTDATE_578009552");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_72);
    UnderlyingInstrument_72.insert(UnderlyingRedemptionDate_72.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_72("STRING_888719767");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_72);
    UnderlyingInstrument_72.insert(UnderlyingRepoCollateralSecurityType_72.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_72;
    UnderlyingRepurchaseRate_72.setString("58.790000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_72);
    UnderlyingInstrument_72.insert(UnderlyingRepurchaseRate_72.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_72(1551443730);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_72);
    UnderlyingInstrument_72.insert(UnderlyingRepurchaseTerm_72.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_72("STRING_321276221");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_72);
    UnderlyingInstrument_72.insert(UnderlyingRestructuringType_72.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_72("STRING_1501173338");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityDesc_72.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_72("EXCHANGE_2091221301");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityExchange_72.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_72("STRING_1128633727");
    noUnderlyings_0_0.set(UnderlyingSecurityID_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityID_72.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_72("STRING_1965385256");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityIDSource_72.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_72("STRING_1188614187");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_72);
    UnderlyingInstrument_72.insert(UnderlyingSecuritySubType_72.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_72("STRING_255874265");
    noUnderlyings_0_0.set(UnderlyingSecurityType_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityType_72.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_72("STRING_1794084051");
    noUnderlyings_0_0.set(UnderlyingSeniority_72);
    UnderlyingInstrument_72.insert(UnderlyingSeniority_72.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_72("STRING_2028910396");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_72);
    UnderlyingInstrument_72.insert(UnderlyingSettlMethod_72.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_72(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_72);
    UnderlyingInstrument_72.insert(UnderlyingSettlementType_72.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_72;
    UnderlyingStartValue_72.setString("4920652");
    noUnderlyings_0_0.set(UnderlyingStartValue_72);
    UnderlyingInstrument_72.insert(UnderlyingStartValue_72.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_72("STRING_1399461706");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_72);
    UnderlyingInstrument_72.insert(UnderlyingStateOrProvinceOfIssue_72.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_72("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_72);
    UnderlyingInstrument_72.insert(UnderlyingStrikeCurrency_72.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_72;
    UnderlyingStrikePrice_72.setString("7816086");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_72);
    UnderlyingInstrument_72.insert(UnderlyingStrikePrice_72.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_72("STRING_25329473");
    noUnderlyings_0_0.set(UnderlyingSymbol_72);
    UnderlyingInstrument_72.insert(UnderlyingSymbol_72.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_72("STRING_2141571476");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_72);
    UnderlyingInstrument_72.insert(UnderlyingSymbolSfx_72.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_72("STRING_1780004419");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_72);
    UnderlyingInstrument_72.insert(UnderlyingTimeUnit_72.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_72("STRING_1041130005");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_72);
    UnderlyingInstrument_72.insert(UnderlyingUnitOfMeasure_72.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_72;
    UnderlyingUnitOfMeasureQty_72.setString("9620516");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_72);
    UnderlyingInstrument_72.insert(UnderlyingUnitOfMeasureQty_72.getString());
    all_values.push_back(UnderlyingInstrument_72);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_152;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_152("STRING_1821376781");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_152);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_152.insert(UnderlyingSecurityAltID_152.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_152("STRING_574337842");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_152);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_152.insert(UnderlyingSecurityAltIDSource_152.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_152);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_153;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_153("STRING_1046512969");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_153);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_153.insert(UnderlyingSecurityAltID_153.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_153("STRING_1773926656");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_153);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_153.insert(UnderlyingSecurityAltIDSource_153.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_153);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_140;
      FIX::UnderlyingStipType UnderlyingStipType_140("STRING_1852003746");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_140);
      UnderlyingStipulations_NoUnderlyingStips_140.insert(UnderlyingStipType_140.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_140("STRING_204452560");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_140);
      UnderlyingStipulations_NoUnderlyingStips_140.insert(UnderlyingStipValue_140.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_140);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_150;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_150("STRING_1987409625");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_150);
      UndlyInstrumentParties_NoUndlyInstrumentParties_150.insert(UnderlyingInstrumentPartyID_150.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_150('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_150);
      UndlyInstrumentParties_NoUndlyInstrumentParties_150.insert(UnderlyingInstrumentPartyIDSource_150.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_150(586689074);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_150);
      UndlyInstrumentParties_NoUndlyInstrumentParties_150.insert(UnderlyingInstrumentPartyRole_150.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_150);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_305("STRING_1699633944");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_305);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305.insert(UnderlyingInstrumentPartySubID_305.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_305(1715322801);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_305);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305.insert(UnderlyingInstrumentPartySubIDType_305.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_73;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_73("DATA_1159000923");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingIssuer_73.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_73(740764483);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingIssuerLen_73.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_73("DATA_1971197066");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingSecurityDesc_73.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_73(805601326);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingSecurityDescLen_73.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_73;
    UnderlyingAdjustedQuantity_73.setString("6221912");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_73);
    UnderlyingInstrument_73.insert(UnderlyingAdjustedQuantity_73.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_73;
    UnderlyingAllocationPercent_73.setString("54.250000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_73);
    UnderlyingInstrument_73.insert(UnderlyingAllocationPercent_73.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_73;
    UnderlyingAttachmentPoint_73.setString("65.740000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_73);
    UnderlyingInstrument_73.insert(UnderlyingAttachmentPoint_73.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_73("STRING_2021652937");
    noUnderlyings_0_1.set(UnderlyingCFICode_73);
    UnderlyingInstrument_73.insert(UnderlyingCFICode_73.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_73("STRING_38499039");
    noUnderlyings_0_1.set(UnderlyingCPProgram_73);
    UnderlyingInstrument_73.insert(UnderlyingCPProgram_73.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_73("STRING_1897683666");
    noUnderlyings_0_1.set(UnderlyingCPRegType_73);
    UnderlyingInstrument_73.insert(UnderlyingCPRegType_73.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_73;
    UnderlyingCapValue_73.setString("6557779");
    noUnderlyings_0_1.set(UnderlyingCapValue_73);
    UnderlyingInstrument_73.insert(UnderlyingCapValue_73.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_73;
    UnderlyingCashAmount_73.setString("638285");
    noUnderlyings_0_1.set(UnderlyingCashAmount_73);
    UnderlyingInstrument_73.insert(UnderlyingCashAmount_73.getString());
    FIX::UnderlyingCashType UnderlyingCashType_73("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_73);
    UnderlyingInstrument_73.insert(UnderlyingCashType_73.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_73;
    UnderlyingContractMultiplier_73.setString("2882987");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_73);
    UnderlyingInstrument_73.insert(UnderlyingContractMultiplier_73.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_73(1104958517);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_73);
    UnderlyingInstrument_73.insert(UnderlyingContractMultiplierUnit_73.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_73("COUNTRY_706339473");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_73);
    UnderlyingInstrument_73.insert(UnderlyingCountryOfIssue_73.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_73("LOCALMKTDATE_1095208780");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_73);
    UnderlyingInstrument_73.insert(UnderlyingCouponPaymentDate_73.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_73;
    UnderlyingCouponRate_73.setString("16.500000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_73);
    UnderlyingInstrument_73.insert(UnderlyingCouponRate_73.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_73("STRING_1280677316");
    noUnderlyings_0_1.set(UnderlyingCreditRating_73);
    UnderlyingInstrument_73.insert(UnderlyingCreditRating_73.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_73("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_73);
    UnderlyingInstrument_73.insert(UnderlyingCurrency_73.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_73;
    UnderlyingCurrentValue_73.setString("6573704");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_73);
    UnderlyingInstrument_73.insert(UnderlyingCurrentValue_73.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_73;
    UnderlyingDetachmentPoint_73.setString("18.470000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_73);
    UnderlyingInstrument_73.insert(UnderlyingDetachmentPoint_73.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_73;
    UnderlyingDirtyPrice_73.setString("6097472");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_73);
    UnderlyingInstrument_73.insert(UnderlyingDirtyPrice_73.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_73;
    UnderlyingEndPrice_73.setString("9227832");
    noUnderlyings_0_1.set(UnderlyingEndPrice_73);
    UnderlyingInstrument_73.insert(UnderlyingEndPrice_73.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_73;
    UnderlyingEndValue_73.setString("16861678");
    noUnderlyings_0_1.set(UnderlyingEndValue_73);
    UnderlyingInstrument_73.insert(UnderlyingEndValue_73.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_73(218159862);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_73);
    UnderlyingInstrument_73.insert(UnderlyingExerciseStyle_73.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_73;
    UnderlyingFXRate_73.setString("15094723");
    noUnderlyings_0_1.set(UnderlyingFXRate_73);
    UnderlyingInstrument_73.insert(UnderlyingFXRate_73.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_73('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_73);
    UnderlyingInstrument_73.insert(UnderlyingFXRateCalc_73.getString());
    FIX::UnderlyingFactor UnderlyingFactor_73;
    UnderlyingFactor_73.setString("19177938");
    noUnderlyings_0_1.set(UnderlyingFactor_73);
    UnderlyingInstrument_73.insert(UnderlyingFactor_73.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_73(1077311482);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_73);
    UnderlyingInstrument_73.insert(UnderlyingFlowScheduleType_73.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_73("STRING_2038784414");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_73);
    UnderlyingInstrument_73.insert(UnderlyingInstrRegistry_73.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_73("LOCALMKTDATE_511074641");
    noUnderlyings_0_1.set(UnderlyingIssueDate_73);
    UnderlyingInstrument_73.insert(UnderlyingIssueDate_73.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_73("STRING_901024900");
    noUnderlyings_0_1.set(UnderlyingIssuer_73);
    UnderlyingInstrument_73.insert(UnderlyingIssuer_73.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_73("STRING_696902092");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_73);
    UnderlyingInstrument_73.insert(UnderlyingLocaleOfIssue_73.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_73("LOCALMKTDATE_1133265872");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_73);
    UnderlyingInstrument_73.insert(UnderlyingMaturityDate_73.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_73("MONTHYEAR_753276678");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_73);
    UnderlyingInstrument_73.insert(UnderlyingMaturityMonthYear_73.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_73("TZTIMEONLY_1994568666");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_73);
    UnderlyingInstrument_73.insert(UnderlyingMaturityTime_73.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_73;
    UnderlyingNotionalPercentageOutstanding_73.setString("51.620000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_73);
    UnderlyingInstrument_73.insert(UnderlyingNotionalPercentageOutstanding_73.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_73('7');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_73);
    UnderlyingInstrument_73.insert(UnderlyingOptAttribute_73.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_73;
    UnderlyingOriginalNotionalPercentageOutstanding_73.setString("86.850000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_73);
    UnderlyingInstrument_73.insert(UnderlyingOriginalNotionalPercentageOutstanding_73.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_73("STRING_1663213101");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_73);
    UnderlyingInstrument_73.insert(UnderlyingPriceUnitOfMeasure_73.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_73;
    UnderlyingPriceUnitOfMeasureQty_73.setString("8556042");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_73);
    UnderlyingInstrument_73.insert(UnderlyingPriceUnitOfMeasureQty_73.getString());
    FIX::UnderlyingProduct UnderlyingProduct_73(1489056532);
    noUnderlyings_0_1.set(UnderlyingProduct_73);
    UnderlyingInstrument_73.insert(UnderlyingProduct_73.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_73(1951511812);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_73);
    UnderlyingInstrument_73.insert(UnderlyingPutOrCall_73.getString());
    FIX::UnderlyingPx UnderlyingPx_73;
    UnderlyingPx_73.setString("19605627");
    noUnderlyings_0_1.set(UnderlyingPx_73);
    UnderlyingInstrument_73.insert(UnderlyingPx_73.getString());
    FIX::UnderlyingQty UnderlyingQty_73;
    UnderlyingQty_73.setString("479123");
    noUnderlyings_0_1.set(UnderlyingQty_73);
    UnderlyingInstrument_73.insert(UnderlyingQty_73.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_73("LOCALMKTDATE_899236944");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_73);
    UnderlyingInstrument_73.insert(UnderlyingRedemptionDate_73.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_73("STRING_591930748");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_73);
    UnderlyingInstrument_73.insert(UnderlyingRepoCollateralSecurityType_73.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_73;
    UnderlyingRepurchaseRate_73.setString("96.730000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_73);
    UnderlyingInstrument_73.insert(UnderlyingRepurchaseRate_73.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_73(893475046);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_73);
    UnderlyingInstrument_73.insert(UnderlyingRepurchaseTerm_73.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_73("STRING_997225407");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_73);
    UnderlyingInstrument_73.insert(UnderlyingRestructuringType_73.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_73("STRING_1985960075");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityDesc_73.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_73("EXCHANGE_592233245");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityExchange_73.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_73("STRING_1606972626");
    noUnderlyings_0_1.set(UnderlyingSecurityID_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityID_73.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_73("STRING_761259681");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityIDSource_73.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_73("STRING_130917422");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_73);
    UnderlyingInstrument_73.insert(UnderlyingSecuritySubType_73.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_73("STRING_1825132488");
    noUnderlyings_0_1.set(UnderlyingSecurityType_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityType_73.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_73("STRING_123248362");
    noUnderlyings_0_1.set(UnderlyingSeniority_73);
    UnderlyingInstrument_73.insert(UnderlyingSeniority_73.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_73("STRING_1010700913");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_73);
    UnderlyingInstrument_73.insert(UnderlyingSettlMethod_73.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_73(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_73);
    UnderlyingInstrument_73.insert(UnderlyingSettlementType_73.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_73;
    UnderlyingStartValue_73.setString("12005598");
    noUnderlyings_0_1.set(UnderlyingStartValue_73);
    UnderlyingInstrument_73.insert(UnderlyingStartValue_73.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_73("STRING_902001680");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_73);
    UnderlyingInstrument_73.insert(UnderlyingStateOrProvinceOfIssue_73.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_73("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_73);
    UnderlyingInstrument_73.insert(UnderlyingStrikeCurrency_73.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_73;
    UnderlyingStrikePrice_73.setString("15989037");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_73);
    UnderlyingInstrument_73.insert(UnderlyingStrikePrice_73.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_73("STRING_1092299511");
    noUnderlyings_0_1.set(UnderlyingSymbol_73);
    UnderlyingInstrument_73.insert(UnderlyingSymbol_73.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_73("STRING_707377774");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_73);
    UnderlyingInstrument_73.insert(UnderlyingSymbolSfx_73.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_73("STRING_1445988791");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_73);
    UnderlyingInstrument_73.insert(UnderlyingTimeUnit_73.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_73("STRING_2099734673");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_73);
    UnderlyingInstrument_73.insert(UnderlyingUnitOfMeasure_73.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_73;
    UnderlyingUnitOfMeasureQty_73.setString("14991534");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_73);
    UnderlyingInstrument_73.insert(UnderlyingUnitOfMeasureQty_73.getString());
    all_values.push_back(UnderlyingInstrument_73);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_154;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_154("STRING_1615464127");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_154);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_154.insert(UnderlyingSecurityAltID_154.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_154("STRING_207274072");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_154);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_154.insert(UnderlyingSecurityAltIDSource_154.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_154);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_155;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_155("STRING_384846712");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_155);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_155.insert(UnderlyingSecurityAltID_155.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_155("STRING_1419492291");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_155);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_155.insert(UnderlyingSecurityAltIDSource_155.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_155);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_156;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_156("STRING_20353170");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_156);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_156.insert(UnderlyingSecurityAltID_156.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_156("STRING_432759069");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_156);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_156.insert(UnderlyingSecurityAltIDSource_156.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_156);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_141;
      FIX::UnderlyingStipType UnderlyingStipType_141("STRING_612283919");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_141);
      UnderlyingStipulations_NoUnderlyingStips_141.insert(UnderlyingStipType_141.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_141("STRING_1761348743");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_141);
      UnderlyingStipulations_NoUnderlyingStips_141.insert(UnderlyingStipValue_141.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_141);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_142;
      FIX::UnderlyingStipType UnderlyingStipType_142("STRING_1064720633");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_142);
      UnderlyingStipulations_NoUnderlyingStips_142.insert(UnderlyingStipType_142.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_142("STRING_1609509326");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_142);
      UnderlyingStipulations_NoUnderlyingStips_142.insert(UnderlyingStipValue_142.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_142);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_151;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_151("STRING_1656953879");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_151);
      UndlyInstrumentParties_NoUndlyInstrumentParties_151.insert(UnderlyingInstrumentPartyID_151.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_151('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_151);
      UndlyInstrumentParties_NoUndlyInstrumentParties_151.insert(UnderlyingInstrumentPartyIDSource_151.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_151(213601203);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_151);
      UndlyInstrumentParties_NoUndlyInstrumentParties_151.insert(UnderlyingInstrumentPartyRole_151.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_151);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_306("STRING_746647144");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_306);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306.insert(UnderlyingInstrumentPartySubID_306.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_306(336849565);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_306);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306.insert(UnderlyingInstrumentPartySubIDType_306.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_307("STRING_651088566");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_307);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307.insert(UnderlyingInstrumentPartySubID_307.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_307(194606142);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_307);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307.insert(UnderlyingInstrumentPartySubIDType_307.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_152;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_152("STRING_1537409409");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_152);
      UndlyInstrumentParties_NoUndlyInstrumentParties_152.insert(UnderlyingInstrumentPartyID_152.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_152('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_152);
      UndlyInstrumentParties_NoUndlyInstrumentParties_152.insert(UnderlyingInstrumentPartyIDSource_152.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_152(153639781);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_152);
      UndlyInstrumentParties_NoUndlyInstrumentParties_152.insert(UnderlyingInstrumentPartyRole_152.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_152);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_308("STRING_1004510371");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_308);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308.insert(UnderlyingInstrumentPartySubID_308.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_308(1245939292);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_308);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308.insert(UnderlyingInstrumentPartySubIDType_308.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_309("STRING_51404632");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_309);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309.insert(UnderlyingInstrumentPartySubID_309.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_309(303015514);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_309);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309.insert(UnderlyingInstrumentPartySubIDType_309.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_310("STRING_1198190318");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_310);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310.insert(UnderlyingInstrumentPartySubID_310.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_310(1550558124);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_310);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310.insert(UnderlyingInstrumentPartySubIDType_310.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_153;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_153("STRING_1346289342");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_153);
      UndlyInstrumentParties_NoUndlyInstrumentParties_153.insert(UnderlyingInstrumentPartyID_153.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_153('6');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_153);
      UndlyInstrumentParties_NoUndlyInstrumentParties_153.insert(UnderlyingInstrumentPartyIDSource_153.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_153(1757832196);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_153);
      UndlyInstrumentParties_NoUndlyInstrumentParties_153.insert(UnderlyingInstrumentPartyRole_153.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_153);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_311("STRING_2085663088");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_311);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311.insert(UnderlyingInstrumentPartySubID_311.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_311(1778185367);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_311);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311.insert(UnderlyingInstrumentPartySubIDType_311.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_312("STRING_16411475");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_312);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312.insert(UnderlyingInstrumentPartySubID_312.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_312(109425027);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_312);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312.insert(UnderlyingInstrumentPartySubIDType_312.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::OrderCancelRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_74;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_74("DATA_242985638");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_74);
    UnderlyingInstrument_74.insert(EncodedUnderlyingIssuer_74.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_74(1777760218);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_74);
    UnderlyingInstrument_74.insert(EncodedUnderlyingIssuerLen_74.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_74("DATA_1174145661");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_74);
    UnderlyingInstrument_74.insert(EncodedUnderlyingSecurityDesc_74.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_74(1852494964);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_74);
    UnderlyingInstrument_74.insert(EncodedUnderlyingSecurityDescLen_74.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_74;
    UnderlyingAdjustedQuantity_74.setString("12301017");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_74);
    UnderlyingInstrument_74.insert(UnderlyingAdjustedQuantity_74.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_74;
    UnderlyingAllocationPercent_74.setString("58.920000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_74);
    UnderlyingInstrument_74.insert(UnderlyingAllocationPercent_74.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_74;
    UnderlyingAttachmentPoint_74.setString("96.200000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_74);
    UnderlyingInstrument_74.insert(UnderlyingAttachmentPoint_74.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_74("STRING_1443702944");
    noUnderlyings_0_2.set(UnderlyingCFICode_74);
    UnderlyingInstrument_74.insert(UnderlyingCFICode_74.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_74("STRING_324003545");
    noUnderlyings_0_2.set(UnderlyingCPProgram_74);
    UnderlyingInstrument_74.insert(UnderlyingCPProgram_74.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_74("STRING_1520656764");
    noUnderlyings_0_2.set(UnderlyingCPRegType_74);
    UnderlyingInstrument_74.insert(UnderlyingCPRegType_74.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_74;
    UnderlyingCapValue_74.setString("17805525");
    noUnderlyings_0_2.set(UnderlyingCapValue_74);
    UnderlyingInstrument_74.insert(UnderlyingCapValue_74.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_74;
    UnderlyingCashAmount_74.setString("9750921");
    noUnderlyings_0_2.set(UnderlyingCashAmount_74);
    UnderlyingInstrument_74.insert(UnderlyingCashAmount_74.getString());
    FIX::UnderlyingCashType UnderlyingCashType_74("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_74);
    UnderlyingInstrument_74.insert(UnderlyingCashType_74.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_74;
    UnderlyingContractMultiplier_74.setString("11704782");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_74);
    UnderlyingInstrument_74.insert(UnderlyingContractMultiplier_74.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_74(380698710);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_74);
    UnderlyingInstrument_74.insert(UnderlyingContractMultiplierUnit_74.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_74("COUNTRY_1868902687");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_74);
    UnderlyingInstrument_74.insert(UnderlyingCountryOfIssue_74.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_74("LOCALMKTDATE_514505129");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_74);
    UnderlyingInstrument_74.insert(UnderlyingCouponPaymentDate_74.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_74;
    UnderlyingCouponRate_74.setString("90.810000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_74);
    UnderlyingInstrument_74.insert(UnderlyingCouponRate_74.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_74("STRING_967358331");
    noUnderlyings_0_2.set(UnderlyingCreditRating_74);
    UnderlyingInstrument_74.insert(UnderlyingCreditRating_74.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_74("CAN");
    noUnderlyings_0_2.set(UnderlyingCurrency_74);
    UnderlyingInstrument_74.insert(UnderlyingCurrency_74.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_74;
    UnderlyingCurrentValue_74.setString("180650");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_74);
    UnderlyingInstrument_74.insert(UnderlyingCurrentValue_74.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_74;
    UnderlyingDetachmentPoint_74.setString("78.850000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_74);
    UnderlyingInstrument_74.insert(UnderlyingDetachmentPoint_74.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_74;
    UnderlyingDirtyPrice_74.setString("8870302");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_74);
    UnderlyingInstrument_74.insert(UnderlyingDirtyPrice_74.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_74;
    UnderlyingEndPrice_74.setString("6842357");
    noUnderlyings_0_2.set(UnderlyingEndPrice_74);
    UnderlyingInstrument_74.insert(UnderlyingEndPrice_74.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_74;
    UnderlyingEndValue_74.setString("17268164");
    noUnderlyings_0_2.set(UnderlyingEndValue_74);
    UnderlyingInstrument_74.insert(UnderlyingEndValue_74.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_74(470682695);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_74);
    UnderlyingInstrument_74.insert(UnderlyingExerciseStyle_74.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_74;
    UnderlyingFXRate_74.setString("6224152");
    noUnderlyings_0_2.set(UnderlyingFXRate_74);
    UnderlyingInstrument_74.insert(UnderlyingFXRate_74.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_74('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_74);
    UnderlyingInstrument_74.insert(UnderlyingFXRateCalc_74.getString());
    FIX::UnderlyingFactor UnderlyingFactor_74;
    UnderlyingFactor_74.setString("4870941");
    noUnderlyings_0_2.set(UnderlyingFactor_74);
    UnderlyingInstrument_74.insert(UnderlyingFactor_74.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_74(731840266);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_74);
    UnderlyingInstrument_74.insert(UnderlyingFlowScheduleType_74.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_74("STRING_1600503791");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_74);
    UnderlyingInstrument_74.insert(UnderlyingInstrRegistry_74.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_74("LOCALMKTDATE_117370741");
    noUnderlyings_0_2.set(UnderlyingIssueDate_74);
    UnderlyingInstrument_74.insert(UnderlyingIssueDate_74.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_74("STRING_1905985927");
    noUnderlyings_0_2.set(UnderlyingIssuer_74);
    UnderlyingInstrument_74.insert(UnderlyingIssuer_74.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_74("STRING_1305515107");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_74);
    UnderlyingInstrument_74.insert(UnderlyingLocaleOfIssue_74.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_74("LOCALMKTDATE_1347472481");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_74);
    UnderlyingInstrument_74.insert(UnderlyingMaturityDate_74.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_74("MONTHYEAR_442118171");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_74);
    UnderlyingInstrument_74.insert(UnderlyingMaturityMonthYear_74.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_74("TZTIMEONLY_2079524727");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_74);
    UnderlyingInstrument_74.insert(UnderlyingMaturityTime_74.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_74;
    UnderlyingNotionalPercentageOutstanding_74.setString("17.770000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_74);
    UnderlyingInstrument_74.insert(UnderlyingNotionalPercentageOutstanding_74.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_74('7');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_74);
    UnderlyingInstrument_74.insert(UnderlyingOptAttribute_74.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_74;
    UnderlyingOriginalNotionalPercentageOutstanding_74.setString("78.430000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_74);
    UnderlyingInstrument_74.insert(UnderlyingOriginalNotionalPercentageOutstanding_74.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_74("STRING_276760639");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_74);
    UnderlyingInstrument_74.insert(UnderlyingPriceUnitOfMeasure_74.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_74;
    UnderlyingPriceUnitOfMeasureQty_74.setString("17412138");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_74);
    UnderlyingInstrument_74.insert(UnderlyingPriceUnitOfMeasureQty_74.getString());
    FIX::UnderlyingProduct UnderlyingProduct_74(1020477101);
    noUnderlyings_0_2.set(UnderlyingProduct_74);
    UnderlyingInstrument_74.insert(UnderlyingProduct_74.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_74(1447238910);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_74);
    UnderlyingInstrument_74.insert(UnderlyingPutOrCall_74.getString());
    FIX::UnderlyingPx UnderlyingPx_74;
    UnderlyingPx_74.setString("21219125");
    noUnderlyings_0_2.set(UnderlyingPx_74);
    UnderlyingInstrument_74.insert(UnderlyingPx_74.getString());
    FIX::UnderlyingQty UnderlyingQty_74;
    UnderlyingQty_74.setString("7418961");
    noUnderlyings_0_2.set(UnderlyingQty_74);
    UnderlyingInstrument_74.insert(UnderlyingQty_74.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_74("LOCALMKTDATE_1961744039");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_74);
    UnderlyingInstrument_74.insert(UnderlyingRedemptionDate_74.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_74("STRING_1359637970");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_74);
    UnderlyingInstrument_74.insert(UnderlyingRepoCollateralSecurityType_74.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_74;
    UnderlyingRepurchaseRate_74.setString("44.710000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_74);
    UnderlyingInstrument_74.insert(UnderlyingRepurchaseRate_74.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_74(380170152);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_74);
    UnderlyingInstrument_74.insert(UnderlyingRepurchaseTerm_74.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_74("STRING_900378917");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_74);
    UnderlyingInstrument_74.insert(UnderlyingRestructuringType_74.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_74("STRING_1727319473");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_74);
    UnderlyingInstrument_74.insert(UnderlyingSecurityDesc_74.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_74("EXCHANGE_349154390");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_74);
    UnderlyingInstrument_74.insert(UnderlyingSecurityExchange_74.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_74("STRING_1787409206");
    noUnderlyings_0_2.set(UnderlyingSecurityID_74);
    UnderlyingInstrument_74.insert(UnderlyingSecurityID_74.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_74("STRING_264071623");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_74);
    UnderlyingInstrument_74.insert(UnderlyingSecurityIDSource_74.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_74("STRING_2075970824");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_74);
    UnderlyingInstrument_74.insert(UnderlyingSecuritySubType_74.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_74("STRING_110608253");
    noUnderlyings_0_2.set(UnderlyingSecurityType_74);
    UnderlyingInstrument_74.insert(UnderlyingSecurityType_74.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_74("STRING_886486862");
    noUnderlyings_0_2.set(UnderlyingSeniority_74);
    UnderlyingInstrument_74.insert(UnderlyingSeniority_74.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_74("STRING_1286005329");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_74);
    UnderlyingInstrument_74.insert(UnderlyingSettlMethod_74.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_74(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_74);
    UnderlyingInstrument_74.insert(UnderlyingSettlementType_74.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_74;
    UnderlyingStartValue_74.setString("16183271");
    noUnderlyings_0_2.set(UnderlyingStartValue_74);
    UnderlyingInstrument_74.insert(UnderlyingStartValue_74.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_74("STRING_739025472");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_74);
    UnderlyingInstrument_74.insert(UnderlyingStateOrProvinceOfIssue_74.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_74("CAN");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_74);
    UnderlyingInstrument_74.insert(UnderlyingStrikeCurrency_74.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_74;
    UnderlyingStrikePrice_74.setString("20445405");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_74);
    UnderlyingInstrument_74.insert(UnderlyingStrikePrice_74.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_74("STRING_2062545646");
    noUnderlyings_0_2.set(UnderlyingSymbol_74);
    UnderlyingInstrument_74.insert(UnderlyingSymbol_74.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_74("STRING_1818947578");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_74);
    UnderlyingInstrument_74.insert(UnderlyingSymbolSfx_74.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_74("STRING_1976581658");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_74);
    UnderlyingInstrument_74.insert(UnderlyingTimeUnit_74.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_74("STRING_558753776");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_74);
    UnderlyingInstrument_74.insert(UnderlyingUnitOfMeasure_74.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_74;
    UnderlyingUnitOfMeasureQty_74.setString("4375856");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_74);
    UnderlyingInstrument_74.insert(UnderlyingUnitOfMeasureQty_74.getString());
    all_values.push_back(UnderlyingInstrument_74);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_157;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_157("STRING_835514415");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_157);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_157.insert(UnderlyingSecurityAltID_157.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_157("STRING_31315825");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_157);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_157.insert(UnderlyingSecurityAltIDSource_157.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_157);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_158;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_158("STRING_154789306");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_158);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_158.insert(UnderlyingSecurityAltID_158.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_158("STRING_135269677");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_158);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_158.insert(UnderlyingSecurityAltIDSource_158.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_158);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_143;
      FIX::UnderlyingStipType UnderlyingStipType_143("STRING_896685446");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_143);
      UnderlyingStipulations_NoUnderlyingStips_143.insert(UnderlyingStipType_143.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_143("STRING_2097013716");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_143);
      UnderlyingStipulations_NoUnderlyingStips_143.insert(UnderlyingStipValue_143.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_143);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_154;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_154("STRING_458456269");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_154);
      UndlyInstrumentParties_NoUndlyInstrumentParties_154.insert(UnderlyingInstrumentPartyID_154.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_154('3');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_154);
      UndlyInstrumentParties_NoUndlyInstrumentParties_154.insert(UnderlyingInstrumentPartyIDSource_154.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_154(118277955);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_154);
      UndlyInstrumentParties_NoUndlyInstrumentParties_154.insert(UnderlyingInstrumentPartyRole_154.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_154);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_313("STRING_678854610");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_313);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313.insert(UnderlyingInstrumentPartySubID_313.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_313(1905687161);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_313);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313.insert(UnderlyingInstrumentPartySubIDType_313.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_314("STRING_302363718");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_314);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314.insert(UnderlyingInstrumentPartySubID_314.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_314(607341786);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_314);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314.insert(UnderlyingInstrumentPartySubIDType_314.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_155;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_155("STRING_2016295415");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_155);
      UndlyInstrumentParties_NoUndlyInstrumentParties_155.insert(UnderlyingInstrumentPartyID_155.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_155('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_155);
      UndlyInstrumentParties_NoUndlyInstrumentParties_155.insert(UnderlyingInstrumentPartyIDSource_155.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_155(1893347115);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_155);
      UndlyInstrumentParties_NoUndlyInstrumentParties_155.insert(UnderlyingInstrumentPartyRole_155.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_155);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_315("STRING_659694060");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_315);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315.insert(UnderlyingInstrumentPartySubID_315.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_315(484888939);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_315);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315.insert(UnderlyingInstrumentPartySubIDType_315.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_316("STRING_1181587356");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_316);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316.insert(UnderlyingInstrumentPartySubID_316.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_316(2036523467);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_316);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316.insert(UnderlyingInstrumentPartySubIDType_316.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_156;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_156("STRING_381945870");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_156);
      UndlyInstrumentParties_NoUndlyInstrumentParties_156.insert(UnderlyingInstrumentPartyID_156.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_156('1');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_156);
      UndlyInstrumentParties_NoUndlyInstrumentParties_156.insert(UnderlyingInstrumentPartyIDSource_156.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_156(1707987397);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_156);
      UndlyInstrumentParties_NoUndlyInstrumentParties_156.insert(UnderlyingInstrumentPartyRole_156.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_156);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_317("STRING_1655403130");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_317);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317.insert(UnderlyingInstrumentPartySubID_317.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_317(2145573043);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_317);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317.insert(UnderlyingInstrumentPartySubIDType_317.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
  }

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
