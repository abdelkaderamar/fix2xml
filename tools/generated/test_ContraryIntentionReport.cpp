#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/ContraryIntentionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ContraryIntentionReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ContraryIntentionReport msg;

  list<multiset<string>> all_values;
  multiset<string> ContraryIntentionReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_12("LOCALMKTDATE_1953740604");
  msg.set(ClearingBusinessDate_12);
  ContraryIntentionReport_0.insert(ClearingBusinessDate_12.getString());
  FIX::ContIntRptID ContIntRptID_0("STRING_812146969");
  msg.set(ContIntRptID_0);
  ContraryIntentionReport_0.insert(ContIntRptID_0.getString());
  FIX::EncodedText EncodedText_22("DATA_1753028910");
  msg.set(EncodedText_22);
  ContraryIntentionReport_0.insert(EncodedText_22.getString());
  FIX::EncodedTextLen EncodedTextLen_22(321349576);
  msg.set(EncodedTextLen_22);
  ContraryIntentionReport_0.insert(EncodedTextLen_22.getString());
  FIX::InputSource InputSource_0("STRING_1236442287");
  msg.set(InputSource_0);
  ContraryIntentionReport_0.insert(InputSource_0.getString());
  FIX::LateIndicator LateIndicator_0(true);
  msg.set(LateIndicator_0);
  ContraryIntentionReport_0.insert(LateIndicator_0.getString());
  FIX::Text Text_22("STRING_958715172");
  msg.set(Text_22);
  ContraryIntentionReport_0.insert(Text_22.getString());
  FIX::TransactTime TransactTime_13(FIX::UTCTIMESTAMP(18, 12, 50, 27, 82007));
  msg.set(TransactTime_13);
  ContraryIntentionReport_0.insert(TransactTime_13.getString());
  all_values.push_back(ContraryIntentionReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_1;
  FIX::ApplID ApplID_1("STRING_928583241");
  msg.set(ApplID_1);
  ApplicationSequenceControl_1.insert(ApplID_1.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_1(1736827558);
  msg.set(ApplLastSeqNum_1);
  ApplicationSequenceControl_1.insert(ApplLastSeqNum_1.getString());
  FIX::ApplResendFlag ApplResendFlag_1(true);
  msg.set(ApplResendFlag_1);
  ApplicationSequenceControl_1.insert(ApplResendFlag_1.getString());
  FIX::ApplSeqNum ApplSeqNum_1(175846782);
  msg.set(ApplSeqNum_1);
  ApplicationSequenceControl_1.insert(ApplSeqNum_1.getString());
  all_values.push_back(ApplicationSequenceControl_1);

  // ExpirationQty
  // Group ExpirationQty.NoExpiration
  {
    FIX50SP2::ContraryIntentionReport::NoExpiration noExpiration_0_0;
    // ExpirationQty.NoExpiration
    multiset<string> ExpirationQty_NoExpiration_0;
    FIX::ExpQty ExpQty_0;
    ExpQty_0.setString("20424585");
    noExpiration_0_0.set(ExpQty_0);
    ExpirationQty_NoExpiration_0.insert(ExpQty_0.getString());
    FIX::ExpirationQtyType ExpirationQtyType_0(5);
    noExpiration_0_0.set(ExpirationQtyType_0);
    ExpirationQty_NoExpiration_0.insert(ExpirationQtyType_0.getString());
    all_values.push_back(ExpirationQty_NoExpiration_0);

    msg.addGroup(noExpiration_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoExpiration noExpiration_0_1;
    // ExpirationQty.NoExpiration
    multiset<string> ExpirationQty_NoExpiration_1;
    FIX::ExpQty ExpQty_1;
    ExpQty_1.setString("17978833");
    noExpiration_0_1.set(ExpQty_1);
    ExpirationQty_NoExpiration_1.insert(ExpQty_1.getString());
    FIX::ExpirationQtyType ExpirationQtyType_1(5);
    noExpiration_0_1.set(ExpirationQtyType_1);
    ExpirationQty_NoExpiration_1.insert(ExpirationQtyType_1.getString());
    all_values.push_back(ExpirationQty_NoExpiration_1);

    msg.addGroup(noExpiration_0_1);
  }
  // Instrument
  multiset<string> Instrument_14;
  FIX::AttachmentPoint AttachmentPoint_14;
  AttachmentPoint_14.setString("96.210000");
  msg.set(AttachmentPoint_14);
  Instrument_14.insert(AttachmentPoint_14.getString());
  FIX::CFICode CFICode_14("STRING_49503258");
  msg.set(CFICode_14);
  Instrument_14.insert(CFICode_14.getString());
  FIX::CPProgram CPProgram_14(1);
  msg.set(CPProgram_14);
  Instrument_14.insert(CPProgram_14.getString());
  FIX::CPRegType CPRegType_14("STRING_1852488711");
  msg.set(CPRegType_14);
  Instrument_14.insert(CPRegType_14.getString());
  FIX::CapPrice CapPrice_14;
  CapPrice_14.setString("691353");
  msg.set(CapPrice_14);
  Instrument_14.insert(CapPrice_14.getString());
  FIX::ContractMultiplier ContractMultiplier_14;
  ContractMultiplier_14.setString("237584");
  msg.set(ContractMultiplier_14);
  Instrument_14.insert(ContractMultiplier_14.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_14(2);
  msg.set(ContractMultiplierUnit_14);
  Instrument_14.insert(ContractMultiplierUnit_14.getString());
  FIX::ContractSettlMonth ContractSettlMonth_14("MONTHYEAR_1837845238");
  msg.set(ContractSettlMonth_14);
  Instrument_14.insert(ContractSettlMonth_14.getString());
  FIX::CountryOfIssue CountryOfIssue_14("COUNTRY_1977499043");
  msg.set(CountryOfIssue_14);
  Instrument_14.insert(CountryOfIssue_14.getString());
  FIX::CouponPaymentDate CouponPaymentDate_14("LOCALMKTDATE_1575279465");
  msg.set(CouponPaymentDate_14);
  Instrument_14.insert(CouponPaymentDate_14.getString());
  FIX::CouponRate CouponRate_14;
  CouponRate_14.setString("5.000000");
  msg.set(CouponRate_14);
  Instrument_14.insert(CouponRate_14.getString());
  FIX::CreditRating CreditRating_14("STRING_151364971");
  msg.set(CreditRating_14);
  Instrument_14.insert(CreditRating_14.getString());
  FIX::DatedDate DatedDate_14("LOCALMKTDATE_664238104");
  msg.set(DatedDate_14);
  Instrument_14.insert(DatedDate_14.getString());
  FIX::DetachmentPoint DetachmentPoint_14;
  DetachmentPoint_14.setString("80.390000");
  msg.set(DetachmentPoint_14);
  Instrument_14.insert(DetachmentPoint_14.getString());
  FIX::EncodedIssuer EncodedIssuer_14("DATA_1110080144");
  msg.set(EncodedIssuer_14);
  Instrument_14.insert(EncodedIssuer_14.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_14(1046214998);
  msg.set(EncodedIssuerLen_14);
  Instrument_14.insert(EncodedIssuerLen_14.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_14("DATA_1210306793");
  msg.set(EncodedSecurityDesc_14);
  Instrument_14.insert(EncodedSecurityDesc_14.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_14(1986997796);
  msg.set(EncodedSecurityDescLen_14);
  Instrument_14.insert(EncodedSecurityDescLen_14.getString());
  FIX::ExerciseStyle ExerciseStyle_14(1);
  msg.set(ExerciseStyle_14);
  Instrument_14.insert(ExerciseStyle_14.getString());
  FIX::Factor Factor_14;
  Factor_14.setString("18641181");
  msg.set(Factor_14);
  Instrument_14.insert(Factor_14.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_14(false);
  msg.set(FlexProductEligibilityIndicator_14);
  Instrument_14.insert(FlexProductEligibilityIndicator_14.getString());
  FIX::FlexibleIndicator FlexibleIndicator_14(true);
  msg.set(FlexibleIndicator_14);
  Instrument_14.insert(FlexibleIndicator_14.getString());
  FIX::FloorPrice FloorPrice_14;
  FloorPrice_14.setString("6452176");
  msg.set(FloorPrice_14);
  Instrument_14.insert(FloorPrice_14.getString());
  FIX::FlowScheduleType FlowScheduleType_14(3);
  msg.set(FlowScheduleType_14);
  Instrument_14.insert(FlowScheduleType_14.getString());
  FIX::InstrRegistry InstrRegistry_14("STRING_49914976");
  msg.set(InstrRegistry_14);
  Instrument_14.insert(InstrRegistry_14.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_14('8');
  msg.set(InstrmtAssignmentMethod_14);
  Instrument_14.insert(InstrmtAssignmentMethod_14.getString());
  FIX::InterestAccrualDate InterestAccrualDate_14("LOCALMKTDATE_1466518127");
  msg.set(InterestAccrualDate_14);
  Instrument_14.insert(InterestAccrualDate_14.getString());
  FIX::IssueDate IssueDate_14("LOCALMKTDATE_2092373504");
  msg.set(IssueDate_14);
  Instrument_14.insert(IssueDate_14.getString());
  FIX::Issuer Issuer_14("STRING_758628266");
  msg.set(Issuer_14);
  Instrument_14.insert(Issuer_14.getString());
  FIX::ListMethod ListMethod_14(1);
  msg.set(ListMethod_14);
  Instrument_14.insert(ListMethod_14.getString());
  FIX::LocaleOfIssue LocaleOfIssue_14("STRING_2018981166");
  msg.set(LocaleOfIssue_14);
  Instrument_14.insert(LocaleOfIssue_14.getString());
  FIX::MaturityDate MaturityDate_14("LOCALMKTDATE_955577887");
  msg.set(MaturityDate_14);
  Instrument_14.insert(MaturityDate_14.getString());
  FIX::MaturityMonthYear MaturityMonthYear_14("MONTHYEAR_1166421103");
  msg.set(MaturityMonthYear_14);
  Instrument_14.insert(MaturityMonthYear_14.getString());
  FIX::MaturityTime MaturityTime_14("TZTIMEONLY_1703104591");
  msg.set(MaturityTime_14);
  Instrument_14.insert(MaturityTime_14.getString());
  FIX::MinPriceIncrement MinPriceIncrement_14;
  MinPriceIncrement_14.setString("6605829");
  msg.set(MinPriceIncrement_14);
  Instrument_14.insert(MinPriceIncrement_14.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_14;
  MinPriceIncrementAmount_14.setString("12355564");
  msg.set(MinPriceIncrementAmount_14);
  Instrument_14.insert(MinPriceIncrementAmount_14.getString());
  FIX::NTPositionLimit NTPositionLimit_14(1726863030);
  msg.set(NTPositionLimit_14);
  Instrument_14.insert(NTPositionLimit_14.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_14;
  NotionalPercentageOutstanding_14.setString("54.470000");
  msg.set(NotionalPercentageOutstanding_14);
  Instrument_14.insert(NotionalPercentageOutstanding_14.getString());
  FIX::OptAttribute OptAttribute_14('9');
  msg.set(OptAttribute_14);
  Instrument_14.insert(OptAttribute_14.getString());
  FIX::OptPayoutAmount OptPayoutAmount_14;
  OptPayoutAmount_14.setString("15568784");
  msg.set(OptPayoutAmount_14);
  Instrument_14.insert(OptPayoutAmount_14.getString());
  FIX::OptPayoutType OptPayoutType_14(1);
  msg.set(OptPayoutType_14);
  Instrument_14.insert(OptPayoutType_14.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_14;
  OriginalNotionalPercentageOutstanding_14.setString("48.600000");
  msg.set(OriginalNotionalPercentageOutstanding_14);
  Instrument_14.insert(OriginalNotionalPercentageOutstanding_14.getString());
  FIX::Pool Pool_14("STRING_1708243397");
  msg.set(Pool_14);
  Instrument_14.insert(Pool_14.getString());
  FIX::PositionLimit PositionLimit_14(1515749369);
  msg.set(PositionLimit_14);
  Instrument_14.insert(PositionLimit_14.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_14("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_14);
  Instrument_14.insert(PriceQuoteMethod_14.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_14("STRING_670839893");
  msg.set(PriceUnitOfMeasure_14);
  Instrument_14.insert(PriceUnitOfMeasure_14.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_14;
  PriceUnitOfMeasureQty_14.setString("4144807");
  msg.set(PriceUnitOfMeasureQty_14);
  Instrument_14.insert(PriceUnitOfMeasureQty_14.getString());
  FIX::Product Product_16(4);
  msg.set(Product_16);
  Instrument_14.insert(Product_16.getString());
  FIX::ProductComplex ProductComplex_14("STRING_510354041");
  msg.set(ProductComplex_14);
  Instrument_14.insert(ProductComplex_14.getString());
  FIX::PutOrCall PutOrCall_14(0);
  msg.set(PutOrCall_14);
  Instrument_14.insert(PutOrCall_14.getString());
  FIX::RedemptionDate RedemptionDate_14("LOCALMKTDATE_1131010501");
  msg.set(RedemptionDate_14);
  Instrument_14.insert(RedemptionDate_14.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_14("STRING_2133844969");
  msg.set(RepoCollateralSecurityType_14);
  Instrument_14.insert(RepoCollateralSecurityType_14.getString());
  FIX::RepurchaseRate RepurchaseRate_14;
  RepurchaseRate_14.setString("18.840000");
  msg.set(RepurchaseRate_14);
  Instrument_14.insert(RepurchaseRate_14.getString());
  FIX::RepurchaseTerm RepurchaseTerm_14(1776228198);
  msg.set(RepurchaseTerm_14);
  Instrument_14.insert(RepurchaseTerm_14.getString());
  FIX::RestructuringType RestructuringType_14("STRING_XR");
  msg.set(RestructuringType_14);
  Instrument_14.insert(RestructuringType_14.getString());
  FIX::SecurityDesc SecurityDesc_14("STRING_387986860");
  msg.set(SecurityDesc_14);
  Instrument_14.insert(SecurityDesc_14.getString());
  FIX::SecurityExchange SecurityExchange_14("EXCHANGE_449809030");
  msg.set(SecurityExchange_14);
  Instrument_14.insert(SecurityExchange_14.getString());
  FIX::SecurityGroup SecurityGroup_14("STRING_518230638");
  msg.set(SecurityGroup_14);
  Instrument_14.insert(SecurityGroup_14.getString());
  FIX::SecurityID SecurityID_14("STRING_332876716");
  msg.set(SecurityID_14);
  Instrument_14.insert(SecurityID_14.getString());
  FIX::SecurityIDSource SecurityIDSource_14("STRING_1");
  msg.set(SecurityIDSource_14);
  Instrument_14.insert(SecurityIDSource_14.getString());
  FIX::SecurityStatus SecurityStatus_14("STRING_2");
  msg.set(SecurityStatus_14);
  Instrument_14.insert(SecurityStatus_14.getString());
  FIX::SecuritySubType SecuritySubType_14("STRING_204374234");
  msg.set(SecuritySubType_14);
  Instrument_14.insert(SecuritySubType_14.getString());
  FIX::SecurityType SecurityType_16("STRING_MPT");
  msg.set(SecurityType_16);
  Instrument_14.insert(SecurityType_16.getString());
  FIX::Seniority Seniority_14("STRING_SD");
  msg.set(Seniority_14);
  Instrument_14.insert(Seniority_14.getString());
  FIX::SettlMethod SettlMethod_14('C');
  msg.set(SettlMethod_14);
  Instrument_14.insert(SettlMethod_14.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_14("STRING_677114486");
  msg.set(SettleOnOpenFlag_14);
  Instrument_14.insert(SettleOnOpenFlag_14.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_14("STRING_1889642355");
  msg.set(StateOrProvinceOfIssue_14);
  Instrument_14.insert(StateOrProvinceOfIssue_14.getString());
  FIX::StrikeCurrency StrikeCurrency_14("EUR");
  msg.set(StrikeCurrency_14);
  Instrument_14.insert(StrikeCurrency_14.getString());
  FIX::StrikeMultiplier StrikeMultiplier_14;
  StrikeMultiplier_14.setString("6680767");
  msg.set(StrikeMultiplier_14);
  Instrument_14.insert(StrikeMultiplier_14.getString());
  FIX::StrikePrice StrikePrice_14;
  StrikePrice_14.setString("8962529");
  msg.set(StrikePrice_14);
  Instrument_14.insert(StrikePrice_14.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_14(5);
  msg.set(StrikePriceBoundaryMethod_14);
  Instrument_14.insert(StrikePriceBoundaryMethod_14.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_14;
  StrikePriceBoundaryPrecision_14.setString("15.750000");
  msg.set(StrikePriceBoundaryPrecision_14);
  Instrument_14.insert(StrikePriceBoundaryPrecision_14.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_14(1);
  msg.set(StrikePriceDeterminationMethod_14);
  Instrument_14.insert(StrikePriceDeterminationMethod_14.getString());
  FIX::StrikeValue StrikeValue_14;
  StrikeValue_14.setString("1731232");
  msg.set(StrikeValue_14);
  Instrument_14.insert(StrikeValue_14.getString());
  FIX::Symbol Symbol_14("STRING_1093970826");
  msg.set(Symbol_14);
  Instrument_14.insert(Symbol_14.getString());
  FIX::SymbolSfx SymbolSfx_14("STRING_WI");
  msg.set(SymbolSfx_14);
  Instrument_14.insert(SymbolSfx_14.getString());
  FIX::TimeUnit TimeUnit_14("STRING_Min");
  msg.set(TimeUnit_14);
  Instrument_14.insert(TimeUnit_14.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_14(3);
  msg.set(UnderlyingPriceDeterminationMethod_14);
  Instrument_14.insert(UnderlyingPriceDeterminationMethod_14.getString());
  FIX::UnitOfMeasure UnitOfMeasure_14("STRING_tn");
  msg.set(UnitOfMeasure_14);
  Instrument_14.insert(UnitOfMeasure_14.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_14;
  UnitOfMeasureQty_14.setString("7796097");
  msg.set(UnitOfMeasureQty_14);
  Instrument_14.insert(UnitOfMeasureQty_14.getString());
  FIX::ValuationMethod ValuationMethod_14("STRING_CDS");
  msg.set(ValuationMethod_14);
  Instrument_14.insert(ValuationMethod_14.getString());
  all_values.push_back(Instrument_14);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::ContraryIntentionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_31;
    FIX::ComplexEventCondition ComplexEventCondition_31(1);
    noComplexEvents_0_0.set(ComplexEventCondition_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventCondition_31.getString());
    FIX::ComplexEventPrice ComplexEventPrice_31;
    ComplexEventPrice_31.setString("11206182");
    noComplexEvents_0_0.set(ComplexEventPrice_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventPrice_31.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_31(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventPriceBoundaryMethod_31.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_31;
    ComplexEventPriceBoundaryPrecision_31.setString("85.140000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventPriceBoundaryPrecision_31.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_31(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventPriceTimeType_31.getString());
    FIX::ComplexEventType ComplexEventType_31(2);
    noComplexEvents_0_0.set(ComplexEventType_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventType_31.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_31;
    ComplexOptPayoutAmount_31.setString("18385452");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexOptPayoutAmount_31.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_31);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_63;
      FIX::ComplexEventEndDate ComplexEventEndDate_63(FIX::UTCTIMESTAMP(9, 28, 55, 19, 72015));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_63);
      ComplexEventDates_NoComplexEventDates_63.insert(ComplexEventEndDate_63.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_63(FIX::UTCTIMESTAMP(11, 58, 10, 9, 102004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_63);
      ComplexEventDates_NoComplexEventDates_63.insert(ComplexEventStartDate_63.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_63);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_122;
        FIX::ComplexEventEndTime ComplexEventEndTime_122(FIX::UTCTIMEONLY(11, 1, 53));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_122);
        ComplexEventTimes_NoComplexEventTimes_122.insert(ComplexEventEndTime_122.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_122(FIX::UTCTIMEONLY(23, 49, 14));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_122);
        ComplexEventTimes_NoComplexEventTimes_122.insert(ComplexEventStartTime_122.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_122);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_123;
        FIX::ComplexEventEndTime ComplexEventEndTime_123(FIX::UTCTIMEONLY(7, 57, 51));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_123);
        ComplexEventTimes_NoComplexEventTimes_123.insert(ComplexEventEndTime_123.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_123(FIX::UTCTIMEONLY(15, 14, 4));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_123);
        ComplexEventTimes_NoComplexEventTimes_123.insert(ComplexEventStartTime_123.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_123);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_124;
        FIX::ComplexEventEndTime ComplexEventEndTime_124(FIX::UTCTIMEONLY(15, 33, 15));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_124);
        ComplexEventTimes_NoComplexEventTimes_124.insert(ComplexEventEndTime_124.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_124(FIX::UTCTIMEONLY(7, 18, 21));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_124);
        ComplexEventTimes_NoComplexEventTimes_124.insert(ComplexEventStartTime_124.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_124);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_64;
      FIX::ComplexEventEndDate ComplexEventEndDate_64(FIX::UTCTIMESTAMP(20, 23, 40, 9, 102009));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_64);
      ComplexEventDates_NoComplexEventDates_64.insert(ComplexEventEndDate_64.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_64(FIX::UTCTIMESTAMP(21, 45, 22, 23, 92017));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_64);
      ComplexEventDates_NoComplexEventDates_64.insert(ComplexEventStartDate_64.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_64);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_125;
        FIX::ComplexEventEndTime ComplexEventEndTime_125(FIX::UTCTIMEONLY(6, 15, 17));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_125);
        ComplexEventTimes_NoComplexEventTimes_125.insert(ComplexEventEndTime_125.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_125(FIX::UTCTIMEONLY(18, 23, 22));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_125);
        ComplexEventTimes_NoComplexEventTimes_125.insert(ComplexEventStartTime_125.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_125);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_126;
        FIX::ComplexEventEndTime ComplexEventEndTime_126(FIX::UTCTIMEONLY(18, 47, 50));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_126);
        ComplexEventTimes_NoComplexEventTimes_126.insert(ComplexEventEndTime_126.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_126(FIX::UTCTIMEONLY(6, 0, 34));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_126);
        ComplexEventTimes_NoComplexEventTimes_126.insert(ComplexEventStartTime_126.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_126);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_127;
        FIX::ComplexEventEndTime ComplexEventEndTime_127(FIX::UTCTIMEONLY(21, 57, 57));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_127);
        ComplexEventTimes_NoComplexEventTimes_127.insert(ComplexEventEndTime_127.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_127(FIX::UTCTIMEONLY(23, 41, 31));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_127);
        ComplexEventTimes_NoComplexEventTimes_127.insert(ComplexEventStartTime_127.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_127);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_65;
      FIX::ComplexEventEndDate ComplexEventEndDate_65(FIX::UTCTIMESTAMP(2, 53, 23, 18, 92001));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_65);
      ComplexEventDates_NoComplexEventDates_65.insert(ComplexEventEndDate_65.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_65(FIX::UTCTIMESTAMP(18, 57, 58, 19, 42001));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_65);
      ComplexEventDates_NoComplexEventDates_65.insert(ComplexEventStartDate_65.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_65);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_128;
        FIX::ComplexEventEndTime ComplexEventEndTime_128(FIX::UTCTIMEONLY(20, 4, 20));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_128);
        ComplexEventTimes_NoComplexEventTimes_128.insert(ComplexEventEndTime_128.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_128(FIX::UTCTIMEONLY(11, 20, 50));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_128);
        ComplexEventTimes_NoComplexEventTimes_128.insert(ComplexEventStartTime_128.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_128);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_129;
        FIX::ComplexEventEndTime ComplexEventEndTime_129(FIX::UTCTIMEONLY(17, 40, 18));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_129);
        ComplexEventTimes_NoComplexEventTimes_129.insert(ComplexEventEndTime_129.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_129(FIX::UTCTIMEONLY(15, 59, 55));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_129);
        ComplexEventTimes_NoComplexEventTimes_129.insert(ComplexEventStartTime_129.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_129);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::ContraryIntentionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_30;
    FIX::EventDate EventDate_30("LOCALMKTDATE_802282637");
    noEvents_0_0.set(EventDate_30);
    EvntGrp_NoEvents_30.insert(EventDate_30.getString());
    FIX::EventPx EventPx_30;
    EventPx_30.setString("9260149");
    noEvents_0_0.set(EventPx_30);
    EvntGrp_NoEvents_30.insert(EventPx_30.getString());
    FIX::EventText EventText_30("STRING_153057078");
    noEvents_0_0.set(EventText_30);
    EvntGrp_NoEvents_30.insert(EventText_30.getString());
    FIX::EventTime EventTime_30(FIX::UTCTIMESTAMP(0, 0, 12, 10, 102008));
    noEvents_0_0.set(EventTime_30);
    EvntGrp_NoEvents_30.insert(EventTime_30.getString());
    FIX::EventType EventType_30(14);
    noEvents_0_0.set(EventType_30);
    EvntGrp_NoEvents_30.insert(EventType_30.getString());
    all_values.push_back(EvntGrp_NoEvents_30);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ContraryIntentionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_25;
    FIX::InstrumentPartyID InstrumentPartyID_25("STRING_1548913095");
    noInstrumentParties_0_0.set(InstrumentPartyID_25);
    InstrumentParties_NoInstrumentParties_25.insert(InstrumentPartyID_25.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_25('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_25);
    InstrumentParties_NoInstrumentParties_25.insert(InstrumentPartyIDSource_25.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_25(1807581158);
    noInstrumentParties_0_0.set(InstrumentPartyRole_25);
    InstrumentParties_NoInstrumentParties_25.insert(InstrumentPartyRole_25.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_25);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46;
      FIX::InstrumentPartySubID InstrumentPartySubID_46("STRING_108806627");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_46);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46.insert(InstrumentPartySubID_46.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_46(174106130);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_46);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46.insert(InstrumentPartySubIDType_46.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ContraryIntentionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_30;
    FIX::SecurityAltID SecurityAltID_30("STRING_1637305198");
    noSecurityAltID_0_0.set(SecurityAltID_30);
    SecAltIDGrp_NoSecurityAltID_30.insert(SecurityAltID_30.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_30("STRING_850454351");
    noSecurityAltID_0_0.set(SecurityAltIDSource_30);
    SecAltIDGrp_NoSecurityAltID_30.insert(SecurityAltIDSource_30.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_30);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_31;
    FIX::SecurityAltID SecurityAltID_31("STRING_909129214");
    noSecurityAltID_0_1.set(SecurityAltID_31);
    SecAltIDGrp_NoSecurityAltID_31.insert(SecurityAltID_31.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_31("STRING_1232586979");
    noSecurityAltID_0_1.set(SecurityAltIDSource_31);
    SecAltIDGrp_NoSecurityAltID_31.insert(SecurityAltIDSource_31.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_31);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_28;
  FIX::SecurityXML SecurityXML_29("XMLDATA_257086352");
  msg.set(SecurityXML_29);
  FIX::SecurityXMLLen SecurityXMLLen_14(1867257494);
  msg.set(SecurityXMLLen_14);
  FIX::SecurityXMLSchema SecurityXMLSchema_14("STRING_249826829");
  msg.set(SecurityXMLSchema_14);
  SecurityXML_28.insert(SecurityXMLSchema_14.getString());
  all_values.push_back(SecurityXML_28);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ContraryIntentionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_31;
    FIX::PartyID PartyID_31("STRING_1046902557");
    noPartyIDs_0_0.set(PartyID_31);
    Parties_NoPartyIDs_31.insert(PartyID_31.getString());
    FIX::PartyIDSource PartyIDSource_31('8');
    noPartyIDs_0_0.set(PartyIDSource_31);
    Parties_NoPartyIDs_31.insert(PartyIDSource_31.getString());
    FIX::PartyRole PartyRole_31(57);
    noPartyIDs_0_0.set(PartyRole_31);
    Parties_NoPartyIDs_31.insert(PartyRole_31.getString());
    all_values.push_back(Parties_NoPartyIDs_31);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_65;
      FIX::PartySubID PartySubID_65("STRING_955352677");
      noPartySubIDs_0_1_0.set(PartySubID_65);
      PtysSubGrp_NoPartySubIDs_65.insert(PartySubID_65.getString());
      FIX::PartySubIDType PartySubIDType_65(7);
      noPartySubIDs_0_1_0.set(PartySubIDType_65);
      PtysSubGrp_NoPartySubIDs_65.insert(PartySubIDType_65.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_65);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_66;
      FIX::PartySubID PartySubID_66("STRING_504859871");
      noPartySubIDs_0_1_1.set(PartySubID_66);
      PtysSubGrp_NoPartySubIDs_66.insert(PartySubID_66.getString());
      FIX::PartySubIDType PartySubIDType_66(12);
      noPartySubIDs_0_1_1.set(PartySubIDType_66);
      PtysSubGrp_NoPartySubIDs_66.insert(PartySubIDType_66.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_66);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_32;
    FIX::PartyID PartyID_32("STRING_1953056871");
    noPartyIDs_0_1.set(PartyID_32);
    Parties_NoPartyIDs_32.insert(PartyID_32.getString());
    FIX::PartyIDSource PartyIDSource_32('B');
    noPartyIDs_0_1.set(PartyIDSource_32);
    Parties_NoPartyIDs_32.insert(PartyIDSource_32.getString());
    FIX::PartyRole PartyRole_32(62);
    noPartyIDs_0_1.set(PartyRole_32);
    Parties_NoPartyIDs_32.insert(PartyRole_32.getString());
    all_values.push_back(Parties_NoPartyIDs_32);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_67;
      FIX::PartySubID PartySubID_67("STRING_552053528");
      noPartySubIDs_1_1_0.set(PartySubID_67);
      PtysSubGrp_NoPartySubIDs_67.insert(PartySubID_67.getString());
      FIX::PartySubIDType PartySubIDType_67(12);
      noPartySubIDs_1_1_0.set(PartySubIDType_67);
      PtysSubGrp_NoPartySubIDs_67.insert(PartySubIDType_67.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_67);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_68;
      FIX::PartySubID PartySubID_68("STRING_1481353659");
      noPartySubIDs_1_1_1.set(PartySubID_68);
      PtysSubGrp_NoPartySubIDs_68.insert(PartySubID_68.getString());
      FIX::PartySubIDType PartySubIDType_68(33);
      noPartySubIDs_1_1_1.set(PartySubIDType_68);
      PtysSubGrp_NoPartySubIDs_68.insert(PartySubIDType_68.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_68);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_33;
    FIX::PartyID PartyID_33("STRING_1016344882");
    noPartyIDs_0_2.set(PartyID_33);
    Parties_NoPartyIDs_33.insert(PartyID_33.getString());
    FIX::PartyIDSource PartyIDSource_33('G');
    noPartyIDs_0_2.set(PartyIDSource_33);
    Parties_NoPartyIDs_33.insert(PartyIDSource_33.getString());
    FIX::PartyRole PartyRole_33(41);
    noPartyIDs_0_2.set(PartyRole_33);
    Parties_NoPartyIDs_33.insert(PartyRole_33.getString());
    all_values.push_back(Parties_NoPartyIDs_33);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_69;
      FIX::PartySubID PartySubID_69("STRING_1112791149");
      noPartySubIDs_2_1_0.set(PartySubID_69);
      PtysSubGrp_NoPartySubIDs_69.insert(PartySubID_69.getString());
      FIX::PartySubIDType PartySubIDType_69(30);
      noPartySubIDs_2_1_0.set(PartySubIDType_69);
      PtysSubGrp_NoPartySubIDs_69.insert(PartySubIDType_69.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_69);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_70;
      FIX::PartySubID PartySubID_70("STRING_1792702713");
      noPartySubIDs_2_1_1.set(PartySubID_70);
      PtysSubGrp_NoPartySubIDs_70.insert(PartySubID_70.getString());
      FIX::PartySubIDType PartySubIDType_70(31);
      noPartySubIDs_2_1_1.set(PartySubIDType_70);
      PtysSubGrp_NoPartySubIDs_70.insert(PartySubIDType_70.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_70);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ContraryIntentionReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_20;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_20("DATA_554348280");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingIssuer_20.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_20(1835199679);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingIssuerLen_20.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_20("DATA_1833295873");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingSecurityDesc_20.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_20(274122126);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingSecurityDescLen_20.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_20;
    UnderlyingAdjustedQuantity_20.setString("20850265");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_20);
    UnderlyingInstrument_20.insert(UnderlyingAdjustedQuantity_20.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_20;
    UnderlyingAllocationPercent_20.setString("11.010000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_20);
    UnderlyingInstrument_20.insert(UnderlyingAllocationPercent_20.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_20;
    UnderlyingAttachmentPoint_20.setString("46.840000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_20);
    UnderlyingInstrument_20.insert(UnderlyingAttachmentPoint_20.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_20("STRING_90612900");
    noUnderlyings_0_0.set(UnderlyingCFICode_20);
    UnderlyingInstrument_20.insert(UnderlyingCFICode_20.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_20("STRING_945617617");
    noUnderlyings_0_0.set(UnderlyingCPProgram_20);
    UnderlyingInstrument_20.insert(UnderlyingCPProgram_20.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_20("STRING_1672827476");
    noUnderlyings_0_0.set(UnderlyingCPRegType_20);
    UnderlyingInstrument_20.insert(UnderlyingCPRegType_20.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_20;
    UnderlyingCapValue_20.setString("10459655");
    noUnderlyings_0_0.set(UnderlyingCapValue_20);
    UnderlyingInstrument_20.insert(UnderlyingCapValue_20.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_20;
    UnderlyingCashAmount_20.setString("13856090");
    noUnderlyings_0_0.set(UnderlyingCashAmount_20);
    UnderlyingInstrument_20.insert(UnderlyingCashAmount_20.getString());
    FIX::UnderlyingCashType UnderlyingCashType_20("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_20);
    UnderlyingInstrument_20.insert(UnderlyingCashType_20.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_20;
    UnderlyingContractMultiplier_20.setString("8967932");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_20);
    UnderlyingInstrument_20.insert(UnderlyingContractMultiplier_20.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_20(1191182256);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_20);
    UnderlyingInstrument_20.insert(UnderlyingContractMultiplierUnit_20.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_20("COUNTRY_555426790");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_20);
    UnderlyingInstrument_20.insert(UnderlyingCountryOfIssue_20.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_20("LOCALMKTDATE_1819174490");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_20);
    UnderlyingInstrument_20.insert(UnderlyingCouponPaymentDate_20.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_20;
    UnderlyingCouponRate_20.setString("88.010000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_20);
    UnderlyingInstrument_20.insert(UnderlyingCouponRate_20.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_20("STRING_1107480318");
    noUnderlyings_0_0.set(UnderlyingCreditRating_20);
    UnderlyingInstrument_20.insert(UnderlyingCreditRating_20.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_20("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_20);
    UnderlyingInstrument_20.insert(UnderlyingCurrency_20.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_20;
    UnderlyingCurrentValue_20.setString("19990318");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_20);
    UnderlyingInstrument_20.insert(UnderlyingCurrentValue_20.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_20;
    UnderlyingDetachmentPoint_20.setString("75.100000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_20);
    UnderlyingInstrument_20.insert(UnderlyingDetachmentPoint_20.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_20;
    UnderlyingDirtyPrice_20.setString("11251833");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_20);
    UnderlyingInstrument_20.insert(UnderlyingDirtyPrice_20.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_20;
    UnderlyingEndPrice_20.setString("4031972");
    noUnderlyings_0_0.set(UnderlyingEndPrice_20);
    UnderlyingInstrument_20.insert(UnderlyingEndPrice_20.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_20;
    UnderlyingEndValue_20.setString("20559833");
    noUnderlyings_0_0.set(UnderlyingEndValue_20);
    UnderlyingInstrument_20.insert(UnderlyingEndValue_20.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_20(90490836);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_20);
    UnderlyingInstrument_20.insert(UnderlyingExerciseStyle_20.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_20;
    UnderlyingFXRate_20.setString("11289524");
    noUnderlyings_0_0.set(UnderlyingFXRate_20);
    UnderlyingInstrument_20.insert(UnderlyingFXRate_20.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_20('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_20);
    UnderlyingInstrument_20.insert(UnderlyingFXRateCalc_20.getString());
    FIX::UnderlyingFactor UnderlyingFactor_20;
    UnderlyingFactor_20.setString("6931035");
    noUnderlyings_0_0.set(UnderlyingFactor_20);
    UnderlyingInstrument_20.insert(UnderlyingFactor_20.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_20(557678280);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_20);
    UnderlyingInstrument_20.insert(UnderlyingFlowScheduleType_20.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_20("STRING_108067037");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_20);
    UnderlyingInstrument_20.insert(UnderlyingInstrRegistry_20.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_20("LOCALMKTDATE_380819567");
    noUnderlyings_0_0.set(UnderlyingIssueDate_20);
    UnderlyingInstrument_20.insert(UnderlyingIssueDate_20.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_20("STRING_243490505");
    noUnderlyings_0_0.set(UnderlyingIssuer_20);
    UnderlyingInstrument_20.insert(UnderlyingIssuer_20.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_20("STRING_382189164");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_20);
    UnderlyingInstrument_20.insert(UnderlyingLocaleOfIssue_20.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_20("LOCALMKTDATE_318362427");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_20);
    UnderlyingInstrument_20.insert(UnderlyingMaturityDate_20.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_20("MONTHYEAR_1675131606");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_20);
    UnderlyingInstrument_20.insert(UnderlyingMaturityMonthYear_20.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_20("TZTIMEONLY_1703213848");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_20);
    UnderlyingInstrument_20.insert(UnderlyingMaturityTime_20.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_20;
    UnderlyingNotionalPercentageOutstanding_20.setString("53.270000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_20);
    UnderlyingInstrument_20.insert(UnderlyingNotionalPercentageOutstanding_20.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_20('4');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_20);
    UnderlyingInstrument_20.insert(UnderlyingOptAttribute_20.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_20;
    UnderlyingOriginalNotionalPercentageOutstanding_20.setString("76.760000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_20);
    UnderlyingInstrument_20.insert(UnderlyingOriginalNotionalPercentageOutstanding_20.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_20("STRING_1454940904");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_20);
    UnderlyingInstrument_20.insert(UnderlyingPriceUnitOfMeasure_20.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_20;
    UnderlyingPriceUnitOfMeasureQty_20.setString("18588746");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_20);
    UnderlyingInstrument_20.insert(UnderlyingPriceUnitOfMeasureQty_20.getString());
    FIX::UnderlyingProduct UnderlyingProduct_20(1258761376);
    noUnderlyings_0_0.set(UnderlyingProduct_20);
    UnderlyingInstrument_20.insert(UnderlyingProduct_20.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_20(204250533);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_20);
    UnderlyingInstrument_20.insert(UnderlyingPutOrCall_20.getString());
    FIX::UnderlyingPx UnderlyingPx_20;
    UnderlyingPx_20.setString("9025732");
    noUnderlyings_0_0.set(UnderlyingPx_20);
    UnderlyingInstrument_20.insert(UnderlyingPx_20.getString());
    FIX::UnderlyingQty UnderlyingQty_20;
    UnderlyingQty_20.setString("18141881");
    noUnderlyings_0_0.set(UnderlyingQty_20);
    UnderlyingInstrument_20.insert(UnderlyingQty_20.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_20("LOCALMKTDATE_2023425023");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_20);
    UnderlyingInstrument_20.insert(UnderlyingRedemptionDate_20.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_20("STRING_1689902017");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_20);
    UnderlyingInstrument_20.insert(UnderlyingRepoCollateralSecurityType_20.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_20;
    UnderlyingRepurchaseRate_20.setString("48.370000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_20);
    UnderlyingInstrument_20.insert(UnderlyingRepurchaseRate_20.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_20(1162547652);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_20);
    UnderlyingInstrument_20.insert(UnderlyingRepurchaseTerm_20.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_20("STRING_1811100830");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_20);
    UnderlyingInstrument_20.insert(UnderlyingRestructuringType_20.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_20("STRING_625733036");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityDesc_20.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_20("EXCHANGE_1318015162");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityExchange_20.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_20("STRING_788800516");
    noUnderlyings_0_0.set(UnderlyingSecurityID_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityID_20.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_20("STRING_1028930274");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityIDSource_20.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_20("STRING_1226514854");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_20);
    UnderlyingInstrument_20.insert(UnderlyingSecuritySubType_20.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_20("STRING_879291352");
    noUnderlyings_0_0.set(UnderlyingSecurityType_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityType_20.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_20("STRING_10399033");
    noUnderlyings_0_0.set(UnderlyingSeniority_20);
    UnderlyingInstrument_20.insert(UnderlyingSeniority_20.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_20("STRING_780233612");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_20);
    UnderlyingInstrument_20.insert(UnderlyingSettlMethod_20.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_20(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_20);
    UnderlyingInstrument_20.insert(UnderlyingSettlementType_20.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_20;
    UnderlyingStartValue_20.setString("5680773");
    noUnderlyings_0_0.set(UnderlyingStartValue_20);
    UnderlyingInstrument_20.insert(UnderlyingStartValue_20.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_20("STRING_888300649");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_20);
    UnderlyingInstrument_20.insert(UnderlyingStateOrProvinceOfIssue_20.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_20("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_20);
    UnderlyingInstrument_20.insert(UnderlyingStrikeCurrency_20.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_20;
    UnderlyingStrikePrice_20.setString("12704898");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_20);
    UnderlyingInstrument_20.insert(UnderlyingStrikePrice_20.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_20("STRING_124093234");
    noUnderlyings_0_0.set(UnderlyingSymbol_20);
    UnderlyingInstrument_20.insert(UnderlyingSymbol_20.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_20("STRING_339215777");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_20);
    UnderlyingInstrument_20.insert(UnderlyingSymbolSfx_20.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_20("STRING_826220013");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_20);
    UnderlyingInstrument_20.insert(UnderlyingTimeUnit_20.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_20("STRING_533068561");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_20);
    UnderlyingInstrument_20.insert(UnderlyingUnitOfMeasure_20.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_20;
    UnderlyingUnitOfMeasureQty_20.setString("8124813");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_20);
    UnderlyingInstrument_20.insert(UnderlyingUnitOfMeasureQty_20.getString());
    all_values.push_back(UnderlyingInstrument_20);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_35;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_35("STRING_1988009465");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_35);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_35.insert(UnderlyingSecurityAltID_35.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_35("STRING_523872312");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_35);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_35.insert(UnderlyingSecurityAltIDSource_35.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_35);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_36;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_36("STRING_1166055418");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_36);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_36.insert(UnderlyingSecurityAltID_36.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_36("STRING_44776351");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_36);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_36.insert(UnderlyingSecurityAltIDSource_36.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_36);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_37;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_37("STRING_1426445528");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_37);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_37.insert(UnderlyingSecurityAltID_37.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_37("STRING_832759936");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_37);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_37.insert(UnderlyingSecurityAltIDSource_37.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_37);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_35;
      FIX::UnderlyingStipType UnderlyingStipType_35("STRING_968863898");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_35);
      UnderlyingStipulations_NoUnderlyingStips_35.insert(UnderlyingStipType_35.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_35("STRING_1606944773");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_35);
      UnderlyingStipulations_NoUnderlyingStips_35.insert(UnderlyingStipValue_35.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_35);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_36;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_36("STRING_632481080");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_36);
      UndlyInstrumentParties_NoUndlyInstrumentParties_36.insert(UnderlyingInstrumentPartyID_36.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_36('8');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_36);
      UndlyInstrumentParties_NoUndlyInstrumentParties_36.insert(UnderlyingInstrumentPartyIDSource_36.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_36(253796893);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_36);
      UndlyInstrumentParties_NoUndlyInstrumentParties_36.insert(UnderlyingInstrumentPartyRole_36.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_36);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_69("STRING_1114124435");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_69);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69.insert(UnderlyingInstrumentPartySubID_69.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_69(1480311747);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_69);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69.insert(UnderlyingInstrumentPartySubIDType_69.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_37;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_37("STRING_153089301");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_37);
      UndlyInstrumentParties_NoUndlyInstrumentParties_37.insert(UnderlyingInstrumentPartyID_37.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_37('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_37);
      UndlyInstrumentParties_NoUndlyInstrumentParties_37.insert(UnderlyingInstrumentPartyIDSource_37.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_37(113061711);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_37);
      UndlyInstrumentParties_NoUndlyInstrumentParties_37.insert(UnderlyingInstrumentPartyRole_37.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_37);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_70("STRING_1692600782");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_70);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70.insert(UnderlyingInstrumentPartySubID_70.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_70(1001362361);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_70);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70.insert(UnderlyingInstrumentPartySubIDType_70.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_71("STRING_1531214997");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_71);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71.insert(UnderlyingInstrumentPartySubID_71.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_71(356684953);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_71);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71.insert(UnderlyingInstrumentPartySubIDType_71.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_21;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_21("DATA_124368526");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingIssuer_21.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_21(1655308231);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingIssuerLen_21.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_21("DATA_695900730");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingSecurityDesc_21.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_21(950588540);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingSecurityDescLen_21.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_21;
    UnderlyingAdjustedQuantity_21.setString("408931");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_21);
    UnderlyingInstrument_21.insert(UnderlyingAdjustedQuantity_21.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_21;
    UnderlyingAllocationPercent_21.setString("20.820000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_21);
    UnderlyingInstrument_21.insert(UnderlyingAllocationPercent_21.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_21;
    UnderlyingAttachmentPoint_21.setString("25.820000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_21);
    UnderlyingInstrument_21.insert(UnderlyingAttachmentPoint_21.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_21("STRING_2028902610");
    noUnderlyings_0_1.set(UnderlyingCFICode_21);
    UnderlyingInstrument_21.insert(UnderlyingCFICode_21.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_21("STRING_2032254395");
    noUnderlyings_0_1.set(UnderlyingCPProgram_21);
    UnderlyingInstrument_21.insert(UnderlyingCPProgram_21.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_21("STRING_2023938000");
    noUnderlyings_0_1.set(UnderlyingCPRegType_21);
    UnderlyingInstrument_21.insert(UnderlyingCPRegType_21.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_21;
    UnderlyingCapValue_21.setString("20736789");
    noUnderlyings_0_1.set(UnderlyingCapValue_21);
    UnderlyingInstrument_21.insert(UnderlyingCapValue_21.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_21;
    UnderlyingCashAmount_21.setString("13112162");
    noUnderlyings_0_1.set(UnderlyingCashAmount_21);
    UnderlyingInstrument_21.insert(UnderlyingCashAmount_21.getString());
    FIX::UnderlyingCashType UnderlyingCashType_21("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_21);
    UnderlyingInstrument_21.insert(UnderlyingCashType_21.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_21;
    UnderlyingContractMultiplier_21.setString("19943966");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_21);
    UnderlyingInstrument_21.insert(UnderlyingContractMultiplier_21.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_21(132596525);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_21);
    UnderlyingInstrument_21.insert(UnderlyingContractMultiplierUnit_21.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_21("COUNTRY_168675414");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_21);
    UnderlyingInstrument_21.insert(UnderlyingCountryOfIssue_21.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_21("LOCALMKTDATE_930178418");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_21);
    UnderlyingInstrument_21.insert(UnderlyingCouponPaymentDate_21.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_21;
    UnderlyingCouponRate_21.setString("76.050000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_21);
    UnderlyingInstrument_21.insert(UnderlyingCouponRate_21.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_21("STRING_253869575");
    noUnderlyings_0_1.set(UnderlyingCreditRating_21);
    UnderlyingInstrument_21.insert(UnderlyingCreditRating_21.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_21("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_21);
    UnderlyingInstrument_21.insert(UnderlyingCurrency_21.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_21;
    UnderlyingCurrentValue_21.setString("13679940");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_21);
    UnderlyingInstrument_21.insert(UnderlyingCurrentValue_21.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_21;
    UnderlyingDetachmentPoint_21.setString("34.110000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_21);
    UnderlyingInstrument_21.insert(UnderlyingDetachmentPoint_21.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_21;
    UnderlyingDirtyPrice_21.setString("1919648");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_21);
    UnderlyingInstrument_21.insert(UnderlyingDirtyPrice_21.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_21;
    UnderlyingEndPrice_21.setString("3450338");
    noUnderlyings_0_1.set(UnderlyingEndPrice_21);
    UnderlyingInstrument_21.insert(UnderlyingEndPrice_21.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_21;
    UnderlyingEndValue_21.setString("6298651");
    noUnderlyings_0_1.set(UnderlyingEndValue_21);
    UnderlyingInstrument_21.insert(UnderlyingEndValue_21.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_21(1917449044);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_21);
    UnderlyingInstrument_21.insert(UnderlyingExerciseStyle_21.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_21;
    UnderlyingFXRate_21.setString("20376346");
    noUnderlyings_0_1.set(UnderlyingFXRate_21);
    UnderlyingInstrument_21.insert(UnderlyingFXRate_21.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_21('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_21);
    UnderlyingInstrument_21.insert(UnderlyingFXRateCalc_21.getString());
    FIX::UnderlyingFactor UnderlyingFactor_21;
    UnderlyingFactor_21.setString("13011803");
    noUnderlyings_0_1.set(UnderlyingFactor_21);
    UnderlyingInstrument_21.insert(UnderlyingFactor_21.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_21(246835919);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_21);
    UnderlyingInstrument_21.insert(UnderlyingFlowScheduleType_21.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_21("STRING_1755596010");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_21);
    UnderlyingInstrument_21.insert(UnderlyingInstrRegistry_21.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_21("LOCALMKTDATE_809004977");
    noUnderlyings_0_1.set(UnderlyingIssueDate_21);
    UnderlyingInstrument_21.insert(UnderlyingIssueDate_21.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_21("STRING_942736649");
    noUnderlyings_0_1.set(UnderlyingIssuer_21);
    UnderlyingInstrument_21.insert(UnderlyingIssuer_21.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_21("STRING_558700902");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_21);
    UnderlyingInstrument_21.insert(UnderlyingLocaleOfIssue_21.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_21("LOCALMKTDATE_849898122");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_21);
    UnderlyingInstrument_21.insert(UnderlyingMaturityDate_21.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_21("MONTHYEAR_303635084");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_21);
    UnderlyingInstrument_21.insert(UnderlyingMaturityMonthYear_21.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_21("TZTIMEONLY_1416583484");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_21);
    UnderlyingInstrument_21.insert(UnderlyingMaturityTime_21.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_21;
    UnderlyingNotionalPercentageOutstanding_21.setString("70.840000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_21);
    UnderlyingInstrument_21.insert(UnderlyingNotionalPercentageOutstanding_21.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_21('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_21);
    UnderlyingInstrument_21.insert(UnderlyingOptAttribute_21.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_21;
    UnderlyingOriginalNotionalPercentageOutstanding_21.setString("78.360000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_21);
    UnderlyingInstrument_21.insert(UnderlyingOriginalNotionalPercentageOutstanding_21.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_21("STRING_657512398");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_21);
    UnderlyingInstrument_21.insert(UnderlyingPriceUnitOfMeasure_21.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_21;
    UnderlyingPriceUnitOfMeasureQty_21.setString("14996221");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_21);
    UnderlyingInstrument_21.insert(UnderlyingPriceUnitOfMeasureQty_21.getString());
    FIX::UnderlyingProduct UnderlyingProduct_21(2002252124);
    noUnderlyings_0_1.set(UnderlyingProduct_21);
    UnderlyingInstrument_21.insert(UnderlyingProduct_21.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_21(504425438);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_21);
    UnderlyingInstrument_21.insert(UnderlyingPutOrCall_21.getString());
    FIX::UnderlyingPx UnderlyingPx_21;
    UnderlyingPx_21.setString("16322186");
    noUnderlyings_0_1.set(UnderlyingPx_21);
    UnderlyingInstrument_21.insert(UnderlyingPx_21.getString());
    FIX::UnderlyingQty UnderlyingQty_21;
    UnderlyingQty_21.setString("234438");
    noUnderlyings_0_1.set(UnderlyingQty_21);
    UnderlyingInstrument_21.insert(UnderlyingQty_21.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_21("LOCALMKTDATE_1434603856");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_21);
    UnderlyingInstrument_21.insert(UnderlyingRedemptionDate_21.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_21("STRING_249812589");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_21);
    UnderlyingInstrument_21.insert(UnderlyingRepoCollateralSecurityType_21.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_21;
    UnderlyingRepurchaseRate_21.setString("34.660000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_21);
    UnderlyingInstrument_21.insert(UnderlyingRepurchaseRate_21.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_21(471095520);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_21);
    UnderlyingInstrument_21.insert(UnderlyingRepurchaseTerm_21.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_21("STRING_288688143");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_21);
    UnderlyingInstrument_21.insert(UnderlyingRestructuringType_21.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_21("STRING_1645307477");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityDesc_21.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_21("EXCHANGE_987898931");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityExchange_21.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_21("STRING_480652998");
    noUnderlyings_0_1.set(UnderlyingSecurityID_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityID_21.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_21("STRING_1990341309");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityIDSource_21.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_21("STRING_1617764053");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_21);
    UnderlyingInstrument_21.insert(UnderlyingSecuritySubType_21.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_21("STRING_250618395");
    noUnderlyings_0_1.set(UnderlyingSecurityType_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityType_21.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_21("STRING_1880492275");
    noUnderlyings_0_1.set(UnderlyingSeniority_21);
    UnderlyingInstrument_21.insert(UnderlyingSeniority_21.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_21("STRING_1101507889");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_21);
    UnderlyingInstrument_21.insert(UnderlyingSettlMethod_21.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_21(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_21);
    UnderlyingInstrument_21.insert(UnderlyingSettlementType_21.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_21;
    UnderlyingStartValue_21.setString("21273281");
    noUnderlyings_0_1.set(UnderlyingStartValue_21);
    UnderlyingInstrument_21.insert(UnderlyingStartValue_21.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_21("STRING_709620251");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_21);
    UnderlyingInstrument_21.insert(UnderlyingStateOrProvinceOfIssue_21.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_21("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_21);
    UnderlyingInstrument_21.insert(UnderlyingStrikeCurrency_21.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_21;
    UnderlyingStrikePrice_21.setString("12683211");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_21);
    UnderlyingInstrument_21.insert(UnderlyingStrikePrice_21.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_21("STRING_1063218239");
    noUnderlyings_0_1.set(UnderlyingSymbol_21);
    UnderlyingInstrument_21.insert(UnderlyingSymbol_21.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_21("STRING_1226216280");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_21);
    UnderlyingInstrument_21.insert(UnderlyingSymbolSfx_21.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_21("STRING_537420989");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_21);
    UnderlyingInstrument_21.insert(UnderlyingTimeUnit_21.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_21("STRING_1794535324");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_21);
    UnderlyingInstrument_21.insert(UnderlyingUnitOfMeasure_21.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_21;
    UnderlyingUnitOfMeasureQty_21.setString("14146221");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_21);
    UnderlyingInstrument_21.insert(UnderlyingUnitOfMeasureQty_21.getString());
    all_values.push_back(UnderlyingInstrument_21);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_38;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_38("STRING_304564074");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_38);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_38.insert(UnderlyingSecurityAltID_38.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_38("STRING_766760570");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_38);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_38.insert(UnderlyingSecurityAltIDSource_38.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_38);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_39;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_39("STRING_1685227301");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_39);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_39.insert(UnderlyingSecurityAltID_39.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_39("STRING_808989512");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_39);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_39.insert(UnderlyingSecurityAltIDSource_39.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_39);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_40;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_40("STRING_251495554");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_40);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_40.insert(UnderlyingSecurityAltID_40.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_40("STRING_1708671192");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_40);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_40.insert(UnderlyingSecurityAltIDSource_40.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_40);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_36;
      FIX::UnderlyingStipType UnderlyingStipType_36("STRING_501308143");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_36);
      UnderlyingStipulations_NoUnderlyingStips_36.insert(UnderlyingStipType_36.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_36("STRING_1985984658");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_36);
      UnderlyingStipulations_NoUnderlyingStips_36.insert(UnderlyingStipValue_36.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_36);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_37;
      FIX::UnderlyingStipType UnderlyingStipType_37("STRING_567205240");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_37);
      UnderlyingStipulations_NoUnderlyingStips_37.insert(UnderlyingStipType_37.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_37("STRING_789996287");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_37);
      UnderlyingStipulations_NoUnderlyingStips_37.insert(UnderlyingStipValue_37.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_37);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_38;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_38("STRING_1555104171");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_38);
      UndlyInstrumentParties_NoUndlyInstrumentParties_38.insert(UnderlyingInstrumentPartyID_38.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_38('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_38);
      UndlyInstrumentParties_NoUndlyInstrumentParties_38.insert(UnderlyingInstrumentPartyIDSource_38.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_38(1326666148);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_38);
      UndlyInstrumentParties_NoUndlyInstrumentParties_38.insert(UnderlyingInstrumentPartyRole_38.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_38);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_72("STRING_1521267680");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_72);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72.insert(UnderlyingInstrumentPartySubID_72.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_72(1059674775);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_72);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72.insert(UnderlyingInstrumentPartySubIDType_72.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
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
