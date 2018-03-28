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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ContraryIntentionReport msg;

  list<multiset<string>> all_values;
  multiset<string> ContraryIntentionReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_12("LOCALMKTDATE_1326244930");
  msg.set(ClearingBusinessDate_12);
  ContraryIntentionReport_0.insert(ClearingBusinessDate_12.getString());
  FIX::ContIntRptID ContIntRptID_0("STRING_283695396");
  msg.set(ContIntRptID_0);
  ContraryIntentionReport_0.insert(ContIntRptID_0.getString());
  FIX::EncodedText EncodedText_22("DATA_326115484");
  msg.set(EncodedText_22);
  ContraryIntentionReport_0.insert(EncodedText_22.getString());
  FIX::EncodedTextLen EncodedTextLen_22(74898212);
  msg.set(EncodedTextLen_22);
  ContraryIntentionReport_0.insert(EncodedTextLen_22.getString());
  FIX::InputSource InputSource_0("STRING_1995630419");
  msg.set(InputSource_0);
  ContraryIntentionReport_0.insert(InputSource_0.getString());
  FIX::LateIndicator LateIndicator_0(true);
  msg.set(LateIndicator_0);
  ContraryIntentionReport_0.insert(LateIndicator_0.getString());
  FIX::Text Text_22("STRING_1975989175");
  msg.set(Text_22);
  ContraryIntentionReport_0.insert(Text_22.getString());
  FIX::TransactTime TransactTime_13(FIX::UTCTIMESTAMP(23, 56, 42, 16, 4, 2006));
  msg.set(TransactTime_13);
  ContraryIntentionReport_0.insert(TransactTime_13.getString());
  all_values.push_back(ContraryIntentionReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_1;
  FIX::ApplID ApplID_1("STRING_1026785981");
  msg.set(ApplID_1);
  ApplicationSequenceControl_1.insert(ApplID_1.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_1(339185289);
  msg.set(ApplLastSeqNum_1);
  ApplicationSequenceControl_1.insert(ApplLastSeqNum_1.getString());
  FIX::ApplResendFlag ApplResendFlag_1(false);
  msg.set(ApplResendFlag_1);
  ApplicationSequenceControl_1.insert(ApplResendFlag_1.getString());
  FIX::ApplSeqNum ApplSeqNum_1(86230050);
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
    ExpQty_0.setString("3613420");
    noExpiration_0_0.set(ExpQty_0);
    ExpirationQty_NoExpiration_0.insert(ExpQty_0.getString());
    FIX::ExpirationQtyType ExpirationQtyType_0(3);
    noExpiration_0_0.set(ExpirationQtyType_0);
    ExpirationQty_NoExpiration_0.insert(ExpirationQtyType_0.getString());
    all_values.push_back(ExpirationQty_NoExpiration_0);

    msg.addGroup(noExpiration_0_0);
  }
  // Instrument
  multiset<string> Instrument_15;
  FIX::AttachmentPoint AttachmentPoint_15;
  AttachmentPoint_15.setString("97.340000");
  msg.set(AttachmentPoint_15);
  Instrument_15.insert(AttachmentPoint_15.getString());
  FIX::CFICode CFICode_15("STRING_978588564");
  msg.set(CFICode_15);
  Instrument_15.insert(CFICode_15.getString());
  FIX::CPProgram CPProgram_15(99);
  msg.set(CPProgram_15);
  Instrument_15.insert(CPProgram_15.getString());
  FIX::CPRegType CPRegType_15("STRING_1833641052");
  msg.set(CPRegType_15);
  Instrument_15.insert(CPRegType_15.getString());
  FIX::CapPrice CapPrice_15;
  CapPrice_15.setString("18872213");
  msg.set(CapPrice_15);
  Instrument_15.insert(CapPrice_15.getString());
  FIX::ContractMultiplier ContractMultiplier_15;
  ContractMultiplier_15.setString("10962437");
  msg.set(ContractMultiplier_15);
  Instrument_15.insert(ContractMultiplier_15.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_15(2);
  msg.set(ContractMultiplierUnit_15);
  Instrument_15.insert(ContractMultiplierUnit_15.getString());
  FIX::ContractSettlMonth ContractSettlMonth_15("MONTHYEAR_547278718");
  msg.set(ContractSettlMonth_15);
  Instrument_15.insert(ContractSettlMonth_15.getString());
  FIX::CountryOfIssue CountryOfIssue_15("COUNTRY_969296754");
  msg.set(CountryOfIssue_15);
  Instrument_15.insert(CountryOfIssue_15.getString());
  FIX::CouponPaymentDate CouponPaymentDate_15("LOCALMKTDATE_991955869");
  msg.set(CouponPaymentDate_15);
  Instrument_15.insert(CouponPaymentDate_15.getString());
  FIX::CouponRate CouponRate_15;
  CouponRate_15.setString("36.490000");
  msg.set(CouponRate_15);
  Instrument_15.insert(CouponRate_15.getString());
  FIX::CreditRating CreditRating_15("STRING_1252992151");
  msg.set(CreditRating_15);
  Instrument_15.insert(CreditRating_15.getString());
  FIX::DatedDate DatedDate_15("LOCALMKTDATE_1318071354");
  msg.set(DatedDate_15);
  Instrument_15.insert(DatedDate_15.getString());
  FIX::DetachmentPoint DetachmentPoint_15;
  DetachmentPoint_15.setString("18.610000");
  msg.set(DetachmentPoint_15);
  Instrument_15.insert(DetachmentPoint_15.getString());
  FIX::EncodedIssuer EncodedIssuer_15("DATA_1101138922");
  msg.set(EncodedIssuer_15);
  Instrument_15.insert(EncodedIssuer_15.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_15(4824470);
  msg.set(EncodedIssuerLen_15);
  Instrument_15.insert(EncodedIssuerLen_15.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_15("DATA_1776927388");
  msg.set(EncodedSecurityDesc_15);
  Instrument_15.insert(EncodedSecurityDesc_15.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_15(1527405882);
  msg.set(EncodedSecurityDescLen_15);
  Instrument_15.insert(EncodedSecurityDescLen_15.getString());
  FIX::ExerciseStyle ExerciseStyle_15(1);
  msg.set(ExerciseStyle_15);
  Instrument_15.insert(ExerciseStyle_15.getString());
  FIX::Factor Factor_15;
  Factor_15.setString("3648447");
  msg.set(Factor_15);
  Instrument_15.insert(Factor_15.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_15(true);
  msg.set(FlexProductEligibilityIndicator_15);
  Instrument_15.insert(FlexProductEligibilityIndicator_15.getString());
  FIX::FlexibleIndicator FlexibleIndicator_15(false);
  msg.set(FlexibleIndicator_15);
  Instrument_15.insert(FlexibleIndicator_15.getString());
  FIX::FloorPrice FloorPrice_15;
  FloorPrice_15.setString("11407401");
  msg.set(FloorPrice_15);
  Instrument_15.insert(FloorPrice_15.getString());
  FIX::FlowScheduleType FlowScheduleType_15(3);
  msg.set(FlowScheduleType_15);
  Instrument_15.insert(FlowScheduleType_15.getString());
  FIX::InstrRegistry InstrRegistry_15("STRING_2058345407");
  msg.set(InstrRegistry_15);
  Instrument_15.insert(InstrRegistry_15.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_15('1');
  msg.set(InstrmtAssignmentMethod_15);
  Instrument_15.insert(InstrmtAssignmentMethod_15.getString());
  FIX::InterestAccrualDate InterestAccrualDate_15("LOCALMKTDATE_1181541417");
  msg.set(InterestAccrualDate_15);
  Instrument_15.insert(InterestAccrualDate_15.getString());
  FIX::IssueDate IssueDate_15("LOCALMKTDATE_2144575457");
  msg.set(IssueDate_15);
  Instrument_15.insert(IssueDate_15.getString());
  FIX::Issuer Issuer_15("STRING_1862284601");
  msg.set(Issuer_15);
  Instrument_15.insert(Issuer_15.getString());
  FIX::ListMethod ListMethod_15(1);
  msg.set(ListMethod_15);
  Instrument_15.insert(ListMethod_15.getString());
  FIX::LocaleOfIssue LocaleOfIssue_15("STRING_131143546");
  msg.set(LocaleOfIssue_15);
  Instrument_15.insert(LocaleOfIssue_15.getString());
  FIX::MaturityDate MaturityDate_15("LOCALMKTDATE_1333690687");
  msg.set(MaturityDate_15);
  Instrument_15.insert(MaturityDate_15.getString());
  FIX::MaturityMonthYear MaturityMonthYear_15("MONTHYEAR_373988388");
  msg.set(MaturityMonthYear_15);
  Instrument_15.insert(MaturityMonthYear_15.getString());
  FIX::MaturityTime MaturityTime_15("TZTIMEONLY_1187104894");
  msg.set(MaturityTime_15);
  Instrument_15.insert(MaturityTime_15.getString());
  FIX::MinPriceIncrement MinPriceIncrement_15;
  MinPriceIncrement_15.setString("10198480");
  msg.set(MinPriceIncrement_15);
  Instrument_15.insert(MinPriceIncrement_15.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_15;
  MinPriceIncrementAmount_15.setString("1137260");
  msg.set(MinPriceIncrementAmount_15);
  Instrument_15.insert(MinPriceIncrementAmount_15.getString());
  FIX::NTPositionLimit NTPositionLimit_15(135865042);
  msg.set(NTPositionLimit_15);
  Instrument_15.insert(NTPositionLimit_15.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_15;
  NotionalPercentageOutstanding_15.setString("25.220000");
  msg.set(NotionalPercentageOutstanding_15);
  Instrument_15.insert(NotionalPercentageOutstanding_15.getString());
  FIX::OptAttribute OptAttribute_15('6');
  msg.set(OptAttribute_15);
  Instrument_15.insert(OptAttribute_15.getString());
  FIX::OptPayoutAmount OptPayoutAmount_15;
  OptPayoutAmount_15.setString("11051617");
  msg.set(OptPayoutAmount_15);
  Instrument_15.insert(OptPayoutAmount_15.getString());
  FIX::OptPayoutType OptPayoutType_15(2);
  msg.set(OptPayoutType_15);
  Instrument_15.insert(OptPayoutType_15.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_15;
  OriginalNotionalPercentageOutstanding_15.setString("48.110000");
  msg.set(OriginalNotionalPercentageOutstanding_15);
  Instrument_15.insert(OriginalNotionalPercentageOutstanding_15.getString());
  FIX::Pool Pool_15("STRING_210670300");
  msg.set(Pool_15);
  Instrument_15.insert(Pool_15.getString());
  FIX::PositionLimit PositionLimit_15(2016506098);
  msg.set(PositionLimit_15);
  Instrument_15.insert(PositionLimit_15.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_15("STRING_INX");
  msg.set(PriceQuoteMethod_15);
  Instrument_15.insert(PriceQuoteMethod_15.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_15("STRING_1311809222");
  msg.set(PriceUnitOfMeasure_15);
  Instrument_15.insert(PriceUnitOfMeasure_15.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_15;
  PriceUnitOfMeasureQty_15.setString("20213305");
  msg.set(PriceUnitOfMeasureQty_15);
  Instrument_15.insert(PriceUnitOfMeasureQty_15.getString());
  FIX::Product Product_17(12);
  msg.set(Product_17);
  Instrument_15.insert(Product_17.getString());
  FIX::ProductComplex ProductComplex_15("STRING_691731456");
  msg.set(ProductComplex_15);
  Instrument_15.insert(ProductComplex_15.getString());
  FIX::PutOrCall PutOrCall_15(1);
  msg.set(PutOrCall_15);
  Instrument_15.insert(PutOrCall_15.getString());
  FIX::RedemptionDate RedemptionDate_15("LOCALMKTDATE_182271482");
  msg.set(RedemptionDate_15);
  Instrument_15.insert(RedemptionDate_15.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_15("STRING_897232132");
  msg.set(RepoCollateralSecurityType_15);
  Instrument_15.insert(RepoCollateralSecurityType_15.getString());
  FIX::RepurchaseRate RepurchaseRate_15;
  RepurchaseRate_15.setString("53.580000");
  msg.set(RepurchaseRate_15);
  Instrument_15.insert(RepurchaseRate_15.getString());
  FIX::RepurchaseTerm RepurchaseTerm_15(1323011674);
  msg.set(RepurchaseTerm_15);
  Instrument_15.insert(RepurchaseTerm_15.getString());
  FIX::RestructuringType RestructuringType_15("STRING_XR");
  msg.set(RestructuringType_15);
  Instrument_15.insert(RestructuringType_15.getString());
  FIX::SecurityDesc SecurityDesc_15("STRING_205847117");
  msg.set(SecurityDesc_15);
  Instrument_15.insert(SecurityDesc_15.getString());
  FIX::SecurityExchange SecurityExchange_15("EXCHANGE_655453507");
  msg.set(SecurityExchange_15);
  Instrument_15.insert(SecurityExchange_15.getString());
  FIX::SecurityGroup SecurityGroup_15("STRING_240089200");
  msg.set(SecurityGroup_15);
  Instrument_15.insert(SecurityGroup_15.getString());
  FIX::SecurityID SecurityID_15("STRING_202938927");
  msg.set(SecurityID_15);
  Instrument_15.insert(SecurityID_15.getString());
  FIX::SecurityIDSource SecurityIDSource_15("STRING_5");
  msg.set(SecurityIDSource_15);
  Instrument_15.insert(SecurityIDSource_15.getString());
  FIX::SecurityStatus SecurityStatus_15("STRING_1");
  msg.set(SecurityStatus_15);
  Instrument_15.insert(SecurityStatus_15.getString());
  FIX::SecuritySubType SecuritySubType_15("STRING_334082473");
  msg.set(SecuritySubType_15);
  Instrument_15.insert(SecuritySubType_15.getString());
  FIX::SecurityType SecurityType_17("STRING_FRN");
  msg.set(SecurityType_17);
  Instrument_15.insert(SecurityType_17.getString());
  FIX::Seniority Seniority_15("STRING_SR");
  msg.set(Seniority_15);
  Instrument_15.insert(Seniority_15.getString());
  FIX::SettlMethod SettlMethod_15('P');
  msg.set(SettlMethod_15);
  Instrument_15.insert(SettlMethod_15.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_15("STRING_576309590");
  msg.set(SettleOnOpenFlag_15);
  Instrument_15.insert(SettleOnOpenFlag_15.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_15("STRING_123203504");
  msg.set(StateOrProvinceOfIssue_15);
  Instrument_15.insert(StateOrProvinceOfIssue_15.getString());
  FIX::StrikeCurrency StrikeCurrency_15("CAN");
  msg.set(StrikeCurrency_15);
  Instrument_15.insert(StrikeCurrency_15.getString());
  FIX::StrikeMultiplier StrikeMultiplier_15;
  StrikeMultiplier_15.setString("7842083");
  msg.set(StrikeMultiplier_15);
  Instrument_15.insert(StrikeMultiplier_15.getString());
  FIX::StrikePrice StrikePrice_15;
  StrikePrice_15.setString("6147305");
  msg.set(StrikePrice_15);
  Instrument_15.insert(StrikePrice_15.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_15(5);
  msg.set(StrikePriceBoundaryMethod_15);
  Instrument_15.insert(StrikePriceBoundaryMethod_15.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_15;
  StrikePriceBoundaryPrecision_15.setString("31.260000");
  msg.set(StrikePriceBoundaryPrecision_15);
  Instrument_15.insert(StrikePriceBoundaryPrecision_15.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_15(4);
  msg.set(StrikePriceDeterminationMethod_15);
  Instrument_15.insert(StrikePriceDeterminationMethod_15.getString());
  FIX::StrikeValue StrikeValue_15;
  StrikeValue_15.setString("8502456");
  msg.set(StrikeValue_15);
  Instrument_15.insert(StrikeValue_15.getString());
  FIX::Symbol Symbol_15("STRING_1359236151");
  msg.set(Symbol_15);
  Instrument_15.insert(Symbol_15.getString());
  FIX::SymbolSfx SymbolSfx_15("STRING_WI");
  msg.set(SymbolSfx_15);
  Instrument_15.insert(SymbolSfx_15.getString());
  FIX::TimeUnit TimeUnit_15("STRING_H");
  msg.set(TimeUnit_15);
  Instrument_15.insert(TimeUnit_15.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_15(1);
  msg.set(UnderlyingPriceDeterminationMethod_15);
  Instrument_15.insert(UnderlyingPriceDeterminationMethod_15.getString());
  FIX::UnitOfMeasure UnitOfMeasure_15("STRING_t");
  msg.set(UnitOfMeasure_15);
  Instrument_15.insert(UnitOfMeasure_15.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_15;
  UnitOfMeasureQty_15.setString("21350021");
  msg.set(UnitOfMeasureQty_15);
  Instrument_15.insert(UnitOfMeasureQty_15.getString());
  FIX::ValuationMethod ValuationMethod_15("STRING_CDS");
  msg.set(ValuationMethod_15);
  Instrument_15.insert(ValuationMethod_15.getString());
  all_values.push_back(Instrument_15);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::ContraryIntentionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_25;
    FIX::ComplexEventCondition ComplexEventCondition_25(1);
    noComplexEvents_0_0.set(ComplexEventCondition_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventCondition_25.getString());
    FIX::ComplexEventPrice ComplexEventPrice_25;
    ComplexEventPrice_25.setString("5344624");
    noComplexEvents_0_0.set(ComplexEventPrice_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPrice_25.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_25(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPriceBoundaryMethod_25.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_25;
    ComplexEventPriceBoundaryPrecision_25.setString("9.880000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPriceBoundaryPrecision_25.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_25(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPriceTimeType_25.getString());
    FIX::ComplexEventType ComplexEventType_25(5);
    noComplexEvents_0_0.set(ComplexEventType_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventType_25.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_25;
    ComplexOptPayoutAmount_25.setString("6912899");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexOptPayoutAmount_25.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_25);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_47;
      FIX::ComplexEventEndDate ComplexEventEndDate_47(FIX::UTCTIMESTAMP(12, 30, 42, 4, 10, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_47);
      ComplexEventDates_NoComplexEventDates_47.insert(ComplexEventEndDate_47.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_47(FIX::UTCTIMESTAMP(2, 0, 49, 7, 7, 2000));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_47);
      ComplexEventDates_NoComplexEventDates_47.insert(ComplexEventStartDate_47.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_47);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_94;
        FIX::ComplexEventEndTime ComplexEventEndTime_94(FIX::UTCTIMEONLY(17, 57, 38));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_94);
        ComplexEventTimes_NoComplexEventTimes_94.insert(ComplexEventEndTime_94.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_94(FIX::UTCTIMEONLY(9, 8, 26));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_94);
        ComplexEventTimes_NoComplexEventTimes_94.insert(ComplexEventStartTime_94.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_94);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_95;
        FIX::ComplexEventEndTime ComplexEventEndTime_95(FIX::UTCTIMEONLY(13, 31, 7));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_95);
        ComplexEventTimes_NoComplexEventTimes_95.insert(ComplexEventEndTime_95.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_95(FIX::UTCTIMEONLY(21, 42, 8));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_95);
        ComplexEventTimes_NoComplexEventTimes_95.insert(ComplexEventStartTime_95.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_95);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_96;
        FIX::ComplexEventEndTime ComplexEventEndTime_96(FIX::UTCTIMEONLY(11, 30, 41));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_96);
        ComplexEventTimes_NoComplexEventTimes_96.insert(ComplexEventEndTime_96.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_96(FIX::UTCTIMEONLY(3, 59, 21));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_96);
        ComplexEventTimes_NoComplexEventTimes_96.insert(ComplexEventStartTime_96.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_96);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_26;
    FIX::ComplexEventCondition ComplexEventCondition_26(2);
    noComplexEvents_0_1.set(ComplexEventCondition_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventCondition_26.getString());
    FIX::ComplexEventPrice ComplexEventPrice_26;
    ComplexEventPrice_26.setString("17810761");
    noComplexEvents_0_1.set(ComplexEventPrice_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPrice_26.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_26(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPriceBoundaryMethod_26.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_26;
    ComplexEventPriceBoundaryPrecision_26.setString("78.880000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPriceBoundaryPrecision_26.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_26(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPriceTimeType_26.getString());
    FIX::ComplexEventType ComplexEventType_26(6);
    noComplexEvents_0_1.set(ComplexEventType_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventType_26.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_26;
    ComplexOptPayoutAmount_26.setString("20024430");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexOptPayoutAmount_26.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_26);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_48;
      FIX::ComplexEventEndDate ComplexEventEndDate_48(FIX::UTCTIMESTAMP(7, 50, 35, 0, 11, 2017));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_48);
      ComplexEventDates_NoComplexEventDates_48.insert(ComplexEventEndDate_48.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_48(FIX::UTCTIMESTAMP(23, 16, 59, 24, 3, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_48);
      ComplexEventDates_NoComplexEventDates_48.insert(ComplexEventStartDate_48.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_48);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_97;
        FIX::ComplexEventEndTime ComplexEventEndTime_97(FIX::UTCTIMEONLY(21, 58, 51));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_97);
        ComplexEventTimes_NoComplexEventTimes_97.insert(ComplexEventEndTime_97.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_97(FIX::UTCTIMEONLY(14, 50, 1));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_97);
        ComplexEventTimes_NoComplexEventTimes_97.insert(ComplexEventStartTime_97.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_97);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_49;
      FIX::ComplexEventEndDate ComplexEventEndDate_49(FIX::UTCTIMESTAMP(18, 3, 20, 17, 6, 2006));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_49);
      ComplexEventDates_NoComplexEventDates_49.insert(ComplexEventEndDate_49.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_49(FIX::UTCTIMESTAMP(16, 50, 55, 3, 7, 2005));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_49);
      ComplexEventDates_NoComplexEventDates_49.insert(ComplexEventStartDate_49.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_49);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_98;
        FIX::ComplexEventEndTime ComplexEventEndTime_98(FIX::UTCTIMEONLY(9, 45, 18));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_98);
        ComplexEventTimes_NoComplexEventTimes_98.insert(ComplexEventEndTime_98.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_98(FIX::UTCTIMEONLY(15, 52, 53));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_98);
        ComplexEventTimes_NoComplexEventTimes_98.insert(ComplexEventStartTime_98.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_98);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_50;
      FIX::ComplexEventEndDate ComplexEventEndDate_50(FIX::UTCTIMESTAMP(5, 51, 3, 25, 10, 2012));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_50);
      ComplexEventDates_NoComplexEventDates_50.insert(ComplexEventEndDate_50.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_50(FIX::UTCTIMESTAMP(5, 28, 9, 9, 10, 2008));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_50);
      ComplexEventDates_NoComplexEventDates_50.insert(ComplexEventStartDate_50.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_50);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_99;
        FIX::ComplexEventEndTime ComplexEventEndTime_99(FIX::UTCTIMEONLY(10, 17, 13));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_99);
        ComplexEventTimes_NoComplexEventTimes_99.insert(ComplexEventEndTime_99.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_99(FIX::UTCTIMEONLY(16, 59, 22));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_99);
        ComplexEventTimes_NoComplexEventTimes_99.insert(ComplexEventStartTime_99.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_99);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_100;
        FIX::ComplexEventEndTime ComplexEventEndTime_100(FIX::UTCTIMEONLY(20, 59, 28));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_100);
        ComplexEventTimes_NoComplexEventTimes_100.insert(ComplexEventEndTime_100.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_100(FIX::UTCTIMEONLY(2, 12, 58));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_100);
        ComplexEventTimes_NoComplexEventTimes_100.insert(ComplexEventStartTime_100.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_100);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_101;
        FIX::ComplexEventEndTime ComplexEventEndTime_101(FIX::UTCTIMEONLY(5, 49, 18));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_101);
        ComplexEventTimes_NoComplexEventTimes_101.insert(ComplexEventEndTime_101.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_101(FIX::UTCTIMEONLY(3, 4, 12));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_101);
        ComplexEventTimes_NoComplexEventTimes_101.insert(ComplexEventStartTime_101.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_101);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::ContraryIntentionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_27;
    FIX::EventDate EventDate_27("LOCALMKTDATE_229560393");
    noEvents_0_0.set(EventDate_27);
    EvntGrp_NoEvents_27.insert(EventDate_27.getString());
    FIX::EventPx EventPx_27;
    EventPx_27.setString("18680289");
    noEvents_0_0.set(EventPx_27);
    EvntGrp_NoEvents_27.insert(EventPx_27.getString());
    FIX::EventText EventText_27("STRING_525068993");
    noEvents_0_0.set(EventText_27);
    EvntGrp_NoEvents_27.insert(EventText_27.getString());
    FIX::EventTime EventTime_27(FIX::UTCTIMESTAMP(15, 20, 13, 6, 7, 2014));
    noEvents_0_0.set(EventTime_27);
    EvntGrp_NoEvents_27.insert(EventTime_27.getString());
    FIX::EventType EventType_27(5);
    noEvents_0_0.set(EventType_27);
    EvntGrp_NoEvents_27.insert(EventType_27.getString());
    all_values.push_back(EvntGrp_NoEvents_27);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ContraryIntentionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_30;
    FIX::InstrumentPartyID InstrumentPartyID_30("STRING_931395145");
    noInstrumentParties_0_0.set(InstrumentPartyID_30);
    InstrumentParties_NoInstrumentParties_30.insert(InstrumentPartyID_30.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_30('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_30);
    InstrumentParties_NoInstrumentParties_30.insert(InstrumentPartyIDSource_30.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_30(1962812012);
    noInstrumentParties_0_0.set(InstrumentPartyRole_30);
    InstrumentParties_NoInstrumentParties_30.insert(InstrumentPartyRole_30.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_30);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60;
      FIX::InstrumentPartySubID InstrumentPartySubID_60("STRING_175207938");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_60);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60.insert(InstrumentPartySubID_60.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_60(441396413);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_60);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60.insert(InstrumentPartySubIDType_60.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_31;
    FIX::InstrumentPartyID InstrumentPartyID_31("STRING_506622386");
    noInstrumentParties_0_1.set(InstrumentPartyID_31);
    InstrumentParties_NoInstrumentParties_31.insert(InstrumentPartyID_31.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_31('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_31);
    InstrumentParties_NoInstrumentParties_31.insert(InstrumentPartyIDSource_31.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_31(675222125);
    noInstrumentParties_0_1.set(InstrumentPartyRole_31);
    InstrumentParties_NoInstrumentParties_31.insert(InstrumentPartyRole_31.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_31);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61;
      FIX::InstrumentPartySubID InstrumentPartySubID_61("STRING_1950608495");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_61);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61.insert(InstrumentPartySubID_61.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_61(287871771);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_61);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61.insert(InstrumentPartySubIDType_61.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ContraryIntentionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_32;
    FIX::SecurityAltID SecurityAltID_32("STRING_761152906");
    noSecurityAltID_0_0.set(SecurityAltID_32);
    SecAltIDGrp_NoSecurityAltID_32.insert(SecurityAltID_32.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_32("STRING_13363849");
    noSecurityAltID_0_0.set(SecurityAltIDSource_32);
    SecAltIDGrp_NoSecurityAltID_32.insert(SecurityAltIDSource_32.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_32);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_30;
  FIX::SecurityXML SecurityXML_31("XMLDATA_1902622461");
  msg.set(SecurityXML_31);
  FIX::SecurityXMLLen SecurityXMLLen_15(982689410);
  msg.set(SecurityXMLLen_15);
  FIX::SecurityXMLSchema SecurityXMLSchema_15("STRING_1457313962");
  msg.set(SecurityXMLSchema_15);
  SecurityXML_30.insert(SecurityXMLSchema_15.getString());
  all_values.push_back(SecurityXML_30);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ContraryIntentionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_33;
    FIX::PartyID PartyID_33("STRING_1212249803");
    noPartyIDs_0_0.set(PartyID_33);
    Parties_NoPartyIDs_33.insert(PartyID_33.getString());
    FIX::PartyIDSource PartyIDSource_33('5');
    noPartyIDs_0_0.set(PartyIDSource_33);
    Parties_NoPartyIDs_33.insert(PartyIDSource_33.getString());
    FIX::PartyRole PartyRole_33(68);
    noPartyIDs_0_0.set(PartyRole_33);
    Parties_NoPartyIDs_33.insert(PartyRole_33.getString());
    all_values.push_back(Parties_NoPartyIDs_33);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_65;
      FIX::PartySubID PartySubID_65("STRING_624369503");
      noPartySubIDs_0_1_0.set(PartySubID_65);
      PtysSubGrp_NoPartySubIDs_65.insert(PartySubID_65.getString());
      FIX::PartySubIDType PartySubIDType_65(15);
      noPartySubIDs_0_1_0.set(PartySubIDType_65);
      PtysSubGrp_NoPartySubIDs_65.insert(PartySubIDType_65.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_65);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_66;
      FIX::PartySubID PartySubID_66("STRING_479100323");
      noPartySubIDs_0_1_1.set(PartySubID_66);
      PtysSubGrp_NoPartySubIDs_66.insert(PartySubID_66.getString());
      FIX::PartySubIDType PartySubIDType_66(27);
      noPartySubIDs_0_1_1.set(PartySubIDType_66);
      PtysSubGrp_NoPartySubIDs_66.insert(PartySubIDType_66.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_66);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ContraryIntentionReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_27;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_27("DATA_1278329569");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingIssuer_27.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_27(1154177685);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingIssuerLen_27.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_27("DATA_520380934");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingSecurityDesc_27.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_27(62241067);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingSecurityDescLen_27.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_27;
    UnderlyingAdjustedQuantity_27.setString("8462667");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_27);
    UnderlyingInstrument_27.insert(UnderlyingAdjustedQuantity_27.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_27;
    UnderlyingAllocationPercent_27.setString("92.990000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_27);
    UnderlyingInstrument_27.insert(UnderlyingAllocationPercent_27.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_27;
    UnderlyingAttachmentPoint_27.setString("48.480000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_27);
    UnderlyingInstrument_27.insert(UnderlyingAttachmentPoint_27.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_27("STRING_1021474701");
    noUnderlyings_0_0.set(UnderlyingCFICode_27);
    UnderlyingInstrument_27.insert(UnderlyingCFICode_27.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_27("STRING_777105712");
    noUnderlyings_0_0.set(UnderlyingCPProgram_27);
    UnderlyingInstrument_27.insert(UnderlyingCPProgram_27.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_27("STRING_398373587");
    noUnderlyings_0_0.set(UnderlyingCPRegType_27);
    UnderlyingInstrument_27.insert(UnderlyingCPRegType_27.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_27;
    UnderlyingCapValue_27.setString("1666406");
    noUnderlyings_0_0.set(UnderlyingCapValue_27);
    UnderlyingInstrument_27.insert(UnderlyingCapValue_27.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_27;
    UnderlyingCashAmount_27.setString("14523278");
    noUnderlyings_0_0.set(UnderlyingCashAmount_27);
    UnderlyingInstrument_27.insert(UnderlyingCashAmount_27.getString());
    FIX::UnderlyingCashType UnderlyingCashType_27("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_27);
    UnderlyingInstrument_27.insert(UnderlyingCashType_27.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_27;
    UnderlyingContractMultiplier_27.setString("21172491");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_27);
    UnderlyingInstrument_27.insert(UnderlyingContractMultiplier_27.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_27(1740199608);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_27);
    UnderlyingInstrument_27.insert(UnderlyingContractMultiplierUnit_27.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_27("COUNTRY_1670998277");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_27);
    UnderlyingInstrument_27.insert(UnderlyingCountryOfIssue_27.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_27("LOCALMKTDATE_730918427");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_27);
    UnderlyingInstrument_27.insert(UnderlyingCouponPaymentDate_27.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_27;
    UnderlyingCouponRate_27.setString("34.580000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_27);
    UnderlyingInstrument_27.insert(UnderlyingCouponRate_27.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_27("STRING_1426137090");
    noUnderlyings_0_0.set(UnderlyingCreditRating_27);
    UnderlyingInstrument_27.insert(UnderlyingCreditRating_27.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_27("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_27);
    UnderlyingInstrument_27.insert(UnderlyingCurrency_27.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_27;
    UnderlyingCurrentValue_27.setString("12224152");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_27);
    UnderlyingInstrument_27.insert(UnderlyingCurrentValue_27.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_27;
    UnderlyingDetachmentPoint_27.setString("39.930000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_27);
    UnderlyingInstrument_27.insert(UnderlyingDetachmentPoint_27.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_27;
    UnderlyingDirtyPrice_27.setString("937694");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_27);
    UnderlyingInstrument_27.insert(UnderlyingDirtyPrice_27.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_27;
    UnderlyingEndPrice_27.setString("15437624");
    noUnderlyings_0_0.set(UnderlyingEndPrice_27);
    UnderlyingInstrument_27.insert(UnderlyingEndPrice_27.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_27;
    UnderlyingEndValue_27.setString("9123071");
    noUnderlyings_0_0.set(UnderlyingEndValue_27);
    UnderlyingInstrument_27.insert(UnderlyingEndValue_27.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_27(718138922);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_27);
    UnderlyingInstrument_27.insert(UnderlyingExerciseStyle_27.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_27;
    UnderlyingFXRate_27.setString("2306235");
    noUnderlyings_0_0.set(UnderlyingFXRate_27);
    UnderlyingInstrument_27.insert(UnderlyingFXRate_27.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_27('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_27);
    UnderlyingInstrument_27.insert(UnderlyingFXRateCalc_27.getString());
    FIX::UnderlyingFactor UnderlyingFactor_27;
    UnderlyingFactor_27.setString("17516374");
    noUnderlyings_0_0.set(UnderlyingFactor_27);
    UnderlyingInstrument_27.insert(UnderlyingFactor_27.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_27(1161176620);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_27);
    UnderlyingInstrument_27.insert(UnderlyingFlowScheduleType_27.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_27("STRING_522253388");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_27);
    UnderlyingInstrument_27.insert(UnderlyingInstrRegistry_27.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_27("LOCALMKTDATE_758331440");
    noUnderlyings_0_0.set(UnderlyingIssueDate_27);
    UnderlyingInstrument_27.insert(UnderlyingIssueDate_27.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_27("STRING_1681557555");
    noUnderlyings_0_0.set(UnderlyingIssuer_27);
    UnderlyingInstrument_27.insert(UnderlyingIssuer_27.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_27("STRING_584494455");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_27);
    UnderlyingInstrument_27.insert(UnderlyingLocaleOfIssue_27.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_27("LOCALMKTDATE_1604598204");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_27);
    UnderlyingInstrument_27.insert(UnderlyingMaturityDate_27.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_27("MONTHYEAR_2017266854");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_27);
    UnderlyingInstrument_27.insert(UnderlyingMaturityMonthYear_27.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_27("TZTIMEONLY_476245655");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_27);
    UnderlyingInstrument_27.insert(UnderlyingMaturityTime_27.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_27;
    UnderlyingNotionalPercentageOutstanding_27.setString("92.570000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_27);
    UnderlyingInstrument_27.insert(UnderlyingNotionalPercentageOutstanding_27.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_27('6');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_27);
    UnderlyingInstrument_27.insert(UnderlyingOptAttribute_27.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_27;
    UnderlyingOriginalNotionalPercentageOutstanding_27.setString("92.420000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_27);
    UnderlyingInstrument_27.insert(UnderlyingOriginalNotionalPercentageOutstanding_27.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_27("STRING_645229931");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_27);
    UnderlyingInstrument_27.insert(UnderlyingPriceUnitOfMeasure_27.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_27;
    UnderlyingPriceUnitOfMeasureQty_27.setString("20992167");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_27);
    UnderlyingInstrument_27.insert(UnderlyingPriceUnitOfMeasureQty_27.getString());
    FIX::UnderlyingProduct UnderlyingProduct_27(1996727974);
    noUnderlyings_0_0.set(UnderlyingProduct_27);
    UnderlyingInstrument_27.insert(UnderlyingProduct_27.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_27(614995453);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_27);
    UnderlyingInstrument_27.insert(UnderlyingPutOrCall_27.getString());
    FIX::UnderlyingPx UnderlyingPx_27;
    UnderlyingPx_27.setString("16919327");
    noUnderlyings_0_0.set(UnderlyingPx_27);
    UnderlyingInstrument_27.insert(UnderlyingPx_27.getString());
    FIX::UnderlyingQty UnderlyingQty_27;
    UnderlyingQty_27.setString("15202426");
    noUnderlyings_0_0.set(UnderlyingQty_27);
    UnderlyingInstrument_27.insert(UnderlyingQty_27.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_27("LOCALMKTDATE_1345913880");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_27);
    UnderlyingInstrument_27.insert(UnderlyingRedemptionDate_27.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_27("STRING_1298012526");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_27);
    UnderlyingInstrument_27.insert(UnderlyingRepoCollateralSecurityType_27.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_27;
    UnderlyingRepurchaseRate_27.setString("60.460000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_27);
    UnderlyingInstrument_27.insert(UnderlyingRepurchaseRate_27.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_27(912038070);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_27);
    UnderlyingInstrument_27.insert(UnderlyingRepurchaseTerm_27.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_27("STRING_213922650");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_27);
    UnderlyingInstrument_27.insert(UnderlyingRestructuringType_27.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_27("STRING_2021311333");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityDesc_27.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_27("EXCHANGE_1690412064");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityExchange_27.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_27("STRING_307692069");
    noUnderlyings_0_0.set(UnderlyingSecurityID_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityID_27.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_27("STRING_1417590163");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityIDSource_27.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_27("STRING_455235559");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_27);
    UnderlyingInstrument_27.insert(UnderlyingSecuritySubType_27.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_27("STRING_1025830992");
    noUnderlyings_0_0.set(UnderlyingSecurityType_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityType_27.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_27("STRING_1648213683");
    noUnderlyings_0_0.set(UnderlyingSeniority_27);
    UnderlyingInstrument_27.insert(UnderlyingSeniority_27.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_27("STRING_1846643026");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_27);
    UnderlyingInstrument_27.insert(UnderlyingSettlMethod_27.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_27(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_27);
    UnderlyingInstrument_27.insert(UnderlyingSettlementType_27.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_27;
    UnderlyingStartValue_27.setString("6619066");
    noUnderlyings_0_0.set(UnderlyingStartValue_27);
    UnderlyingInstrument_27.insert(UnderlyingStartValue_27.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_27("STRING_221412766");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_27);
    UnderlyingInstrument_27.insert(UnderlyingStateOrProvinceOfIssue_27.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_27("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_27);
    UnderlyingInstrument_27.insert(UnderlyingStrikeCurrency_27.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_27;
    UnderlyingStrikePrice_27.setString("8059072");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_27);
    UnderlyingInstrument_27.insert(UnderlyingStrikePrice_27.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_27("STRING_845430744");
    noUnderlyings_0_0.set(UnderlyingSymbol_27);
    UnderlyingInstrument_27.insert(UnderlyingSymbol_27.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_27("STRING_65763768");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_27);
    UnderlyingInstrument_27.insert(UnderlyingSymbolSfx_27.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_27("STRING_1282152876");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_27);
    UnderlyingInstrument_27.insert(UnderlyingTimeUnit_27.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_27("STRING_1324020001");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_27);
    UnderlyingInstrument_27.insert(UnderlyingUnitOfMeasure_27.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_27;
    UnderlyingUnitOfMeasureQty_27.setString("7126526");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_27);
    UnderlyingInstrument_27.insert(UnderlyingUnitOfMeasureQty_27.getString());
    all_values.push_back(UnderlyingInstrument_27);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_55;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_55("STRING_1969249933");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_55);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_55.insert(UnderlyingSecurityAltID_55.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_55("STRING_664385794");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_55);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_55.insert(UnderlyingSecurityAltIDSource_55.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_55);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_49;
      FIX::UnderlyingStipType UnderlyingStipType_49("STRING_436761738");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_49);
      UnderlyingStipulations_NoUnderlyingStips_49.insert(UnderlyingStipType_49.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_49("STRING_208834862");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_49);
      UnderlyingStipulations_NoUnderlyingStips_49.insert(UnderlyingStipValue_49.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_49);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_50;
      FIX::UnderlyingStipType UnderlyingStipType_50("STRING_1378775400");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_50);
      UnderlyingStipulations_NoUnderlyingStips_50.insert(UnderlyingStipType_50.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_50("STRING_1782675618");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_50);
      UnderlyingStipulations_NoUnderlyingStips_50.insert(UnderlyingStipValue_50.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_50);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_55;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_55("STRING_30187798");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_55);
      UndlyInstrumentParties_NoUndlyInstrumentParties_55.insert(UnderlyingInstrumentPartyID_55.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_55('5');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_55);
      UndlyInstrumentParties_NoUndlyInstrumentParties_55.insert(UnderlyingInstrumentPartyIDSource_55.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_55(1720770038);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_55);
      UndlyInstrumentParties_NoUndlyInstrumentParties_55.insert(UnderlyingInstrumentPartyRole_55.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_55);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_116("STRING_90158457");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_116);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116.insert(UnderlyingInstrumentPartySubID_116.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_116(2028462107);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_116);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116.insert(UnderlyingInstrumentPartySubIDType_116.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_56;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_56("STRING_1321605647");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_56);
      UndlyInstrumentParties_NoUndlyInstrumentParties_56.insert(UnderlyingInstrumentPartyID_56.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_56('5');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_56);
      UndlyInstrumentParties_NoUndlyInstrumentParties_56.insert(UnderlyingInstrumentPartyIDSource_56.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_56(906809451);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_56);
      UndlyInstrumentParties_NoUndlyInstrumentParties_56.insert(UnderlyingInstrumentPartyRole_56.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_56);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_117("STRING_244553394");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_117);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117.insert(UnderlyingInstrumentPartySubID_117.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_117(1536794199);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_117);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117.insert(UnderlyingInstrumentPartySubIDType_117.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_57;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_57("STRING_1484242337");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_57);
      UndlyInstrumentParties_NoUndlyInstrumentParties_57.insert(UnderlyingInstrumentPartyID_57.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_57('4');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_57);
      UndlyInstrumentParties_NoUndlyInstrumentParties_57.insert(UnderlyingInstrumentPartyIDSource_57.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_57(777626739);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_57);
      UndlyInstrumentParties_NoUndlyInstrumentParties_57.insert(UnderlyingInstrumentPartyRole_57.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_57);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_118("STRING_1271873381");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_118);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118.insert(UnderlyingInstrumentPartySubID_118.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_118(1623057483);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_118);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118.insert(UnderlyingInstrumentPartySubIDType_118.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_28;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_28("DATA_1745986668");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingIssuer_28.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_28(406542610);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingIssuerLen_28.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_28("DATA_799593836");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingSecurityDesc_28.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_28(311155707);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingSecurityDescLen_28.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_28;
    UnderlyingAdjustedQuantity_28.setString("4158310");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_28);
    UnderlyingInstrument_28.insert(UnderlyingAdjustedQuantity_28.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_28;
    UnderlyingAllocationPercent_28.setString("1.210000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_28);
    UnderlyingInstrument_28.insert(UnderlyingAllocationPercent_28.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_28;
    UnderlyingAttachmentPoint_28.setString("15.010000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_28);
    UnderlyingInstrument_28.insert(UnderlyingAttachmentPoint_28.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_28("STRING_274363878");
    noUnderlyings_0_1.set(UnderlyingCFICode_28);
    UnderlyingInstrument_28.insert(UnderlyingCFICode_28.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_28("STRING_1058121859");
    noUnderlyings_0_1.set(UnderlyingCPProgram_28);
    UnderlyingInstrument_28.insert(UnderlyingCPProgram_28.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_28("STRING_1184376363");
    noUnderlyings_0_1.set(UnderlyingCPRegType_28);
    UnderlyingInstrument_28.insert(UnderlyingCPRegType_28.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_28;
    UnderlyingCapValue_28.setString("16531392");
    noUnderlyings_0_1.set(UnderlyingCapValue_28);
    UnderlyingInstrument_28.insert(UnderlyingCapValue_28.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_28;
    UnderlyingCashAmount_28.setString("6933138");
    noUnderlyings_0_1.set(UnderlyingCashAmount_28);
    UnderlyingInstrument_28.insert(UnderlyingCashAmount_28.getString());
    FIX::UnderlyingCashType UnderlyingCashType_28("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_28);
    UnderlyingInstrument_28.insert(UnderlyingCashType_28.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_28;
    UnderlyingContractMultiplier_28.setString("16833270");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_28);
    UnderlyingInstrument_28.insert(UnderlyingContractMultiplier_28.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_28(1240543871);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_28);
    UnderlyingInstrument_28.insert(UnderlyingContractMultiplierUnit_28.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_28("COUNTRY_117026493");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_28);
    UnderlyingInstrument_28.insert(UnderlyingCountryOfIssue_28.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_28("LOCALMKTDATE_1587342561");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_28);
    UnderlyingInstrument_28.insert(UnderlyingCouponPaymentDate_28.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_28;
    UnderlyingCouponRate_28.setString("23.280000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_28);
    UnderlyingInstrument_28.insert(UnderlyingCouponRate_28.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_28("STRING_2145488600");
    noUnderlyings_0_1.set(UnderlyingCreditRating_28);
    UnderlyingInstrument_28.insert(UnderlyingCreditRating_28.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_28("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_28);
    UnderlyingInstrument_28.insert(UnderlyingCurrency_28.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_28;
    UnderlyingCurrentValue_28.setString("9048144");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_28);
    UnderlyingInstrument_28.insert(UnderlyingCurrentValue_28.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_28;
    UnderlyingDetachmentPoint_28.setString("2.420000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_28);
    UnderlyingInstrument_28.insert(UnderlyingDetachmentPoint_28.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_28;
    UnderlyingDirtyPrice_28.setString("21206497");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_28);
    UnderlyingInstrument_28.insert(UnderlyingDirtyPrice_28.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_28;
    UnderlyingEndPrice_28.setString("2941249");
    noUnderlyings_0_1.set(UnderlyingEndPrice_28);
    UnderlyingInstrument_28.insert(UnderlyingEndPrice_28.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_28;
    UnderlyingEndValue_28.setString("9205589");
    noUnderlyings_0_1.set(UnderlyingEndValue_28);
    UnderlyingInstrument_28.insert(UnderlyingEndValue_28.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_28(439132251);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_28);
    UnderlyingInstrument_28.insert(UnderlyingExerciseStyle_28.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_28;
    UnderlyingFXRate_28.setString("10717516");
    noUnderlyings_0_1.set(UnderlyingFXRate_28);
    UnderlyingInstrument_28.insert(UnderlyingFXRate_28.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_28('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_28);
    UnderlyingInstrument_28.insert(UnderlyingFXRateCalc_28.getString());
    FIX::UnderlyingFactor UnderlyingFactor_28;
    UnderlyingFactor_28.setString("17110056");
    noUnderlyings_0_1.set(UnderlyingFactor_28);
    UnderlyingInstrument_28.insert(UnderlyingFactor_28.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_28(547325529);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_28);
    UnderlyingInstrument_28.insert(UnderlyingFlowScheduleType_28.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_28("STRING_51801204");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_28);
    UnderlyingInstrument_28.insert(UnderlyingInstrRegistry_28.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_28("LOCALMKTDATE_2117548243");
    noUnderlyings_0_1.set(UnderlyingIssueDate_28);
    UnderlyingInstrument_28.insert(UnderlyingIssueDate_28.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_28("STRING_1346919365");
    noUnderlyings_0_1.set(UnderlyingIssuer_28);
    UnderlyingInstrument_28.insert(UnderlyingIssuer_28.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_28("STRING_362956911");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_28);
    UnderlyingInstrument_28.insert(UnderlyingLocaleOfIssue_28.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_28("LOCALMKTDATE_385895676");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_28);
    UnderlyingInstrument_28.insert(UnderlyingMaturityDate_28.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_28("MONTHYEAR_1968279487");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_28);
    UnderlyingInstrument_28.insert(UnderlyingMaturityMonthYear_28.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_28("TZTIMEONLY_1338498412");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_28);
    UnderlyingInstrument_28.insert(UnderlyingMaturityTime_28.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_28;
    UnderlyingNotionalPercentageOutstanding_28.setString("95.540000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_28);
    UnderlyingInstrument_28.insert(UnderlyingNotionalPercentageOutstanding_28.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_28('8');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_28);
    UnderlyingInstrument_28.insert(UnderlyingOptAttribute_28.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_28;
    UnderlyingOriginalNotionalPercentageOutstanding_28.setString("11.270000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_28);
    UnderlyingInstrument_28.insert(UnderlyingOriginalNotionalPercentageOutstanding_28.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_28("STRING_165915184");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_28);
    UnderlyingInstrument_28.insert(UnderlyingPriceUnitOfMeasure_28.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_28;
    UnderlyingPriceUnitOfMeasureQty_28.setString("15722315");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_28);
    UnderlyingInstrument_28.insert(UnderlyingPriceUnitOfMeasureQty_28.getString());
    FIX::UnderlyingProduct UnderlyingProduct_28(919131230);
    noUnderlyings_0_1.set(UnderlyingProduct_28);
    UnderlyingInstrument_28.insert(UnderlyingProduct_28.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_28(1849242261);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_28);
    UnderlyingInstrument_28.insert(UnderlyingPutOrCall_28.getString());
    FIX::UnderlyingPx UnderlyingPx_28;
    UnderlyingPx_28.setString("6652917");
    noUnderlyings_0_1.set(UnderlyingPx_28);
    UnderlyingInstrument_28.insert(UnderlyingPx_28.getString());
    FIX::UnderlyingQty UnderlyingQty_28;
    UnderlyingQty_28.setString("10361577");
    noUnderlyings_0_1.set(UnderlyingQty_28);
    UnderlyingInstrument_28.insert(UnderlyingQty_28.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_28("LOCALMKTDATE_1289101174");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_28);
    UnderlyingInstrument_28.insert(UnderlyingRedemptionDate_28.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_28("STRING_1995994079");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_28);
    UnderlyingInstrument_28.insert(UnderlyingRepoCollateralSecurityType_28.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_28;
    UnderlyingRepurchaseRate_28.setString("26.750000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_28);
    UnderlyingInstrument_28.insert(UnderlyingRepurchaseRate_28.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_28(2050565734);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_28);
    UnderlyingInstrument_28.insert(UnderlyingRepurchaseTerm_28.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_28("STRING_1724606776");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_28);
    UnderlyingInstrument_28.insert(UnderlyingRestructuringType_28.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_28("STRING_1938977079");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityDesc_28.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_28("EXCHANGE_1486882328");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityExchange_28.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_28("STRING_1697772867");
    noUnderlyings_0_1.set(UnderlyingSecurityID_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityID_28.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_28("STRING_85618386");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityIDSource_28.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_28("STRING_259957612");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_28);
    UnderlyingInstrument_28.insert(UnderlyingSecuritySubType_28.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_28("STRING_2136905118");
    noUnderlyings_0_1.set(UnderlyingSecurityType_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityType_28.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_28("STRING_1157370080");
    noUnderlyings_0_1.set(UnderlyingSeniority_28);
    UnderlyingInstrument_28.insert(UnderlyingSeniority_28.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_28("STRING_713255795");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_28);
    UnderlyingInstrument_28.insert(UnderlyingSettlMethod_28.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_28(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_28);
    UnderlyingInstrument_28.insert(UnderlyingSettlementType_28.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_28;
    UnderlyingStartValue_28.setString("17046956");
    noUnderlyings_0_1.set(UnderlyingStartValue_28);
    UnderlyingInstrument_28.insert(UnderlyingStartValue_28.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_28("STRING_765056999");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_28);
    UnderlyingInstrument_28.insert(UnderlyingStateOrProvinceOfIssue_28.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_28("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_28);
    UnderlyingInstrument_28.insert(UnderlyingStrikeCurrency_28.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_28;
    UnderlyingStrikePrice_28.setString("11280139");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_28);
    UnderlyingInstrument_28.insert(UnderlyingStrikePrice_28.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_28("STRING_2056387374");
    noUnderlyings_0_1.set(UnderlyingSymbol_28);
    UnderlyingInstrument_28.insert(UnderlyingSymbol_28.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_28("STRING_724927166");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_28);
    UnderlyingInstrument_28.insert(UnderlyingSymbolSfx_28.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_28("STRING_319028674");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_28);
    UnderlyingInstrument_28.insert(UnderlyingTimeUnit_28.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_28("STRING_569163280");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_28);
    UnderlyingInstrument_28.insert(UnderlyingUnitOfMeasure_28.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_28;
    UnderlyingUnitOfMeasureQty_28.setString("16038448");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_28);
    UnderlyingInstrument_28.insert(UnderlyingUnitOfMeasureQty_28.getString());
    all_values.push_back(UnderlyingInstrument_28);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_56;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_56("STRING_735078465");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_56);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_56.insert(UnderlyingSecurityAltID_56.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_56("STRING_1028592745");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_56);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_56.insert(UnderlyingSecurityAltIDSource_56.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_56);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_51;
      FIX::UnderlyingStipType UnderlyingStipType_51("STRING_436837078");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_51);
      UnderlyingStipulations_NoUnderlyingStips_51.insert(UnderlyingStipType_51.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_51("STRING_1693884496");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_51);
      UnderlyingStipulations_NoUnderlyingStips_51.insert(UnderlyingStipValue_51.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_51);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_52;
      FIX::UnderlyingStipType UnderlyingStipType_52("STRING_502225106");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_52);
      UnderlyingStipulations_NoUnderlyingStips_52.insert(UnderlyingStipType_52.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_52("STRING_1725938253");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_52);
      UnderlyingStipulations_NoUnderlyingStips_52.insert(UnderlyingStipValue_52.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_52);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_53;
      FIX::UnderlyingStipType UnderlyingStipType_53("STRING_1542394928");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_53);
      UnderlyingStipulations_NoUnderlyingStips_53.insert(UnderlyingStipType_53.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_53("STRING_1536387782");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_53);
      UnderlyingStipulations_NoUnderlyingStips_53.insert(UnderlyingStipValue_53.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_53);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_58;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_58("STRING_1119518056");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_58);
      UndlyInstrumentParties_NoUndlyInstrumentParties_58.insert(UnderlyingInstrumentPartyID_58.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_58('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_58);
      UndlyInstrumentParties_NoUndlyInstrumentParties_58.insert(UnderlyingInstrumentPartyIDSource_58.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_58(968419020);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_58);
      UndlyInstrumentParties_NoUndlyInstrumentParties_58.insert(UnderlyingInstrumentPartyRole_58.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_58);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_119("STRING_1413499600");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_119);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119.insert(UnderlyingInstrumentPartySubID_119.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_119(1228376632);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_119);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119.insert(UnderlyingInstrumentPartySubIDType_119.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_120("STRING_659228745");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_120);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120.insert(UnderlyingInstrumentPartySubID_120.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_120(423386032);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_120);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120.insert(UnderlyingInstrumentPartySubIDType_120.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_121("STRING_1941632427");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_121);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121.insert(UnderlyingInstrumentPartySubID_121.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_121(212172201);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_121);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121.insert(UnderlyingInstrumentPartySubIDType_121.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_59;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_59("STRING_2128081642");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_59);
      UndlyInstrumentParties_NoUndlyInstrumentParties_59.insert(UnderlyingInstrumentPartyID_59.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_59('5');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_59);
      UndlyInstrumentParties_NoUndlyInstrumentParties_59.insert(UnderlyingInstrumentPartyIDSource_59.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_59(1882663899);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_59);
      UndlyInstrumentParties_NoUndlyInstrumentParties_59.insert(UnderlyingInstrumentPartyRole_59.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_59);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_122("STRING_1687219689");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_122);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122.insert(UnderlyingInstrumentPartySubID_122.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_122(1791567626);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_122);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122.insert(UnderlyingInstrumentPartySubIDType_122.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_123("STRING_1609656487");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_123);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123.insert(UnderlyingInstrumentPartySubID_123.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_123(2006248364);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_123);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123.insert(UnderlyingInstrumentPartySubIDType_123.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_124("STRING_213247258");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_124);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124.insert(UnderlyingInstrumentPartySubID_124.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_124(1066017703);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_124);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124.insert(UnderlyingInstrumentPartySubIDType_124.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_60;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_60("STRING_553184517");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_60);
      UndlyInstrumentParties_NoUndlyInstrumentParties_60.insert(UnderlyingInstrumentPartyID_60.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_60('9');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_60);
      UndlyInstrumentParties_NoUndlyInstrumentParties_60.insert(UnderlyingInstrumentPartyIDSource_60.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_60(2094610448);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_60);
      UndlyInstrumentParties_NoUndlyInstrumentParties_60.insert(UnderlyingInstrumentPartyRole_60.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_60);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_125("STRING_1385162802");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_125);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125.insert(UnderlyingInstrumentPartySubID_125.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_125(1641011297);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_125);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125.insert(UnderlyingInstrumentPartySubIDType_125.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_126("STRING_521477007");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_126);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126.insert(UnderlyingInstrumentPartySubID_126.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_126(963617407);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_126);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126.insert(UnderlyingInstrumentPartySubIDType_126.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_29;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_29("DATA_1035922577");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingIssuer_29.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_29(2057864789);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingIssuerLen_29.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_29("DATA_445154098");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingSecurityDesc_29.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_29(7956985);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingSecurityDescLen_29.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_29;
    UnderlyingAdjustedQuantity_29.setString("12382623");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_29);
    UnderlyingInstrument_29.insert(UnderlyingAdjustedQuantity_29.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_29;
    UnderlyingAllocationPercent_29.setString("31.180000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_29);
    UnderlyingInstrument_29.insert(UnderlyingAllocationPercent_29.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_29;
    UnderlyingAttachmentPoint_29.setString("42.600000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_29);
    UnderlyingInstrument_29.insert(UnderlyingAttachmentPoint_29.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_29("STRING_504278307");
    noUnderlyings_0_2.set(UnderlyingCFICode_29);
    UnderlyingInstrument_29.insert(UnderlyingCFICode_29.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_29("STRING_494466102");
    noUnderlyings_0_2.set(UnderlyingCPProgram_29);
    UnderlyingInstrument_29.insert(UnderlyingCPProgram_29.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_29("STRING_1336993005");
    noUnderlyings_0_2.set(UnderlyingCPRegType_29);
    UnderlyingInstrument_29.insert(UnderlyingCPRegType_29.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_29;
    UnderlyingCapValue_29.setString("9276643");
    noUnderlyings_0_2.set(UnderlyingCapValue_29);
    UnderlyingInstrument_29.insert(UnderlyingCapValue_29.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_29;
    UnderlyingCashAmount_29.setString("2886148");
    noUnderlyings_0_2.set(UnderlyingCashAmount_29);
    UnderlyingInstrument_29.insert(UnderlyingCashAmount_29.getString());
    FIX::UnderlyingCashType UnderlyingCashType_29("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_29);
    UnderlyingInstrument_29.insert(UnderlyingCashType_29.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_29;
    UnderlyingContractMultiplier_29.setString("9082623");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_29);
    UnderlyingInstrument_29.insert(UnderlyingContractMultiplier_29.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_29(847820661);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_29);
    UnderlyingInstrument_29.insert(UnderlyingContractMultiplierUnit_29.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_29("COUNTRY_1284345458");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_29);
    UnderlyingInstrument_29.insert(UnderlyingCountryOfIssue_29.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_29("LOCALMKTDATE_1792991654");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_29);
    UnderlyingInstrument_29.insert(UnderlyingCouponPaymentDate_29.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_29;
    UnderlyingCouponRate_29.setString("67.020000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_29);
    UnderlyingInstrument_29.insert(UnderlyingCouponRate_29.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_29("STRING_928429436");
    noUnderlyings_0_2.set(UnderlyingCreditRating_29);
    UnderlyingInstrument_29.insert(UnderlyingCreditRating_29.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_29("JPY");
    noUnderlyings_0_2.set(UnderlyingCurrency_29);
    UnderlyingInstrument_29.insert(UnderlyingCurrency_29.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_29;
    UnderlyingCurrentValue_29.setString("11416766");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_29);
    UnderlyingInstrument_29.insert(UnderlyingCurrentValue_29.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_29;
    UnderlyingDetachmentPoint_29.setString("85.490000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_29);
    UnderlyingInstrument_29.insert(UnderlyingDetachmentPoint_29.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_29;
    UnderlyingDirtyPrice_29.setString("7995059");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_29);
    UnderlyingInstrument_29.insert(UnderlyingDirtyPrice_29.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_29;
    UnderlyingEndPrice_29.setString("20900024");
    noUnderlyings_0_2.set(UnderlyingEndPrice_29);
    UnderlyingInstrument_29.insert(UnderlyingEndPrice_29.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_29;
    UnderlyingEndValue_29.setString("1208253");
    noUnderlyings_0_2.set(UnderlyingEndValue_29);
    UnderlyingInstrument_29.insert(UnderlyingEndValue_29.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_29(818757837);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_29);
    UnderlyingInstrument_29.insert(UnderlyingExerciseStyle_29.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_29;
    UnderlyingFXRate_29.setString("13276815");
    noUnderlyings_0_2.set(UnderlyingFXRate_29);
    UnderlyingInstrument_29.insert(UnderlyingFXRate_29.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_29('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_29);
    UnderlyingInstrument_29.insert(UnderlyingFXRateCalc_29.getString());
    FIX::UnderlyingFactor UnderlyingFactor_29;
    UnderlyingFactor_29.setString("13402348");
    noUnderlyings_0_2.set(UnderlyingFactor_29);
    UnderlyingInstrument_29.insert(UnderlyingFactor_29.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_29(143815331);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_29);
    UnderlyingInstrument_29.insert(UnderlyingFlowScheduleType_29.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_29("STRING_650275575");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_29);
    UnderlyingInstrument_29.insert(UnderlyingInstrRegistry_29.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_29("LOCALMKTDATE_1250615986");
    noUnderlyings_0_2.set(UnderlyingIssueDate_29);
    UnderlyingInstrument_29.insert(UnderlyingIssueDate_29.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_29("STRING_588969429");
    noUnderlyings_0_2.set(UnderlyingIssuer_29);
    UnderlyingInstrument_29.insert(UnderlyingIssuer_29.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_29("STRING_658232560");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_29);
    UnderlyingInstrument_29.insert(UnderlyingLocaleOfIssue_29.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_29("LOCALMKTDATE_341394693");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_29);
    UnderlyingInstrument_29.insert(UnderlyingMaturityDate_29.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_29("MONTHYEAR_2002542548");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_29);
    UnderlyingInstrument_29.insert(UnderlyingMaturityMonthYear_29.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_29("TZTIMEONLY_1335996820");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_29);
    UnderlyingInstrument_29.insert(UnderlyingMaturityTime_29.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_29;
    UnderlyingNotionalPercentageOutstanding_29.setString("30.000000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_29);
    UnderlyingInstrument_29.insert(UnderlyingNotionalPercentageOutstanding_29.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_29('3');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_29);
    UnderlyingInstrument_29.insert(UnderlyingOptAttribute_29.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_29;
    UnderlyingOriginalNotionalPercentageOutstanding_29.setString("61.780000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_29);
    UnderlyingInstrument_29.insert(UnderlyingOriginalNotionalPercentageOutstanding_29.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_29("STRING_1773337339");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_29);
    UnderlyingInstrument_29.insert(UnderlyingPriceUnitOfMeasure_29.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_29;
    UnderlyingPriceUnitOfMeasureQty_29.setString("6381398");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_29);
    UnderlyingInstrument_29.insert(UnderlyingPriceUnitOfMeasureQty_29.getString());
    FIX::UnderlyingProduct UnderlyingProduct_29(2074671384);
    noUnderlyings_0_2.set(UnderlyingProduct_29);
    UnderlyingInstrument_29.insert(UnderlyingProduct_29.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_29(534116025);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_29);
    UnderlyingInstrument_29.insert(UnderlyingPutOrCall_29.getString());
    FIX::UnderlyingPx UnderlyingPx_29;
    UnderlyingPx_29.setString("14859605");
    noUnderlyings_0_2.set(UnderlyingPx_29);
    UnderlyingInstrument_29.insert(UnderlyingPx_29.getString());
    FIX::UnderlyingQty UnderlyingQty_29;
    UnderlyingQty_29.setString("12115331");
    noUnderlyings_0_2.set(UnderlyingQty_29);
    UnderlyingInstrument_29.insert(UnderlyingQty_29.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_29("LOCALMKTDATE_179624031");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_29);
    UnderlyingInstrument_29.insert(UnderlyingRedemptionDate_29.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_29("STRING_1873517248");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_29);
    UnderlyingInstrument_29.insert(UnderlyingRepoCollateralSecurityType_29.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_29;
    UnderlyingRepurchaseRate_29.setString("26.300000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_29);
    UnderlyingInstrument_29.insert(UnderlyingRepurchaseRate_29.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_29(1434788525);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_29);
    UnderlyingInstrument_29.insert(UnderlyingRepurchaseTerm_29.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_29("STRING_2119838666");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_29);
    UnderlyingInstrument_29.insert(UnderlyingRestructuringType_29.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_29("STRING_1134155677");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityDesc_29.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_29("EXCHANGE_1608487074");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityExchange_29.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_29("STRING_771860954");
    noUnderlyings_0_2.set(UnderlyingSecurityID_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityID_29.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_29("STRING_1076674447");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityIDSource_29.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_29("STRING_1729312423");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_29);
    UnderlyingInstrument_29.insert(UnderlyingSecuritySubType_29.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_29("STRING_1590618791");
    noUnderlyings_0_2.set(UnderlyingSecurityType_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityType_29.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_29("STRING_256872371");
    noUnderlyings_0_2.set(UnderlyingSeniority_29);
    UnderlyingInstrument_29.insert(UnderlyingSeniority_29.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_29("STRING_1343665422");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_29);
    UnderlyingInstrument_29.insert(UnderlyingSettlMethod_29.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_29(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_29);
    UnderlyingInstrument_29.insert(UnderlyingSettlementType_29.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_29;
    UnderlyingStartValue_29.setString("4006877");
    noUnderlyings_0_2.set(UnderlyingStartValue_29);
    UnderlyingInstrument_29.insert(UnderlyingStartValue_29.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_29("STRING_1993940997");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_29);
    UnderlyingInstrument_29.insert(UnderlyingStateOrProvinceOfIssue_29.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_29("EUR");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_29);
    UnderlyingInstrument_29.insert(UnderlyingStrikeCurrency_29.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_29;
    UnderlyingStrikePrice_29.setString("5046899");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_29);
    UnderlyingInstrument_29.insert(UnderlyingStrikePrice_29.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_29("STRING_227897019");
    noUnderlyings_0_2.set(UnderlyingSymbol_29);
    UnderlyingInstrument_29.insert(UnderlyingSymbol_29.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_29("STRING_844716031");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_29);
    UnderlyingInstrument_29.insert(UnderlyingSymbolSfx_29.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_29("STRING_1840686730");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_29);
    UnderlyingInstrument_29.insert(UnderlyingTimeUnit_29.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_29("STRING_1073570019");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_29);
    UnderlyingInstrument_29.insert(UnderlyingUnitOfMeasure_29.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_29;
    UnderlyingUnitOfMeasureQty_29.setString("11942410");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_29);
    UnderlyingInstrument_29.insert(UnderlyingUnitOfMeasureQty_29.getString());
    all_values.push_back(UnderlyingInstrument_29);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_57;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_57("STRING_699423710");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_57);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_57.insert(UnderlyingSecurityAltID_57.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_57("STRING_1832380918");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_57);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_57.insert(UnderlyingSecurityAltIDSource_57.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_57);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_58;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_58("STRING_145896997");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_58);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_58.insert(UnderlyingSecurityAltID_58.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_58("STRING_1233539735");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_58);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_58.insert(UnderlyingSecurityAltIDSource_58.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_58);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_59;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_59("STRING_1170857816");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_59);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_59.insert(UnderlyingSecurityAltID_59.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_59("STRING_1357430191");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_59);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_59.insert(UnderlyingSecurityAltIDSource_59.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_59);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_54;
      FIX::UnderlyingStipType UnderlyingStipType_54("STRING_896891416");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_54);
      UnderlyingStipulations_NoUnderlyingStips_54.insert(UnderlyingStipType_54.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_54("STRING_1349909174");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_54);
      UnderlyingStipulations_NoUnderlyingStips_54.insert(UnderlyingStipValue_54.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_54);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_61;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_61("STRING_869246434");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_61);
      UndlyInstrumentParties_NoUndlyInstrumentParties_61.insert(UnderlyingInstrumentPartyID_61.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_61('3');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_61);
      UndlyInstrumentParties_NoUndlyInstrumentParties_61.insert(UnderlyingInstrumentPartyIDSource_61.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_61(161472070);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_61);
      UndlyInstrumentParties_NoUndlyInstrumentParties_61.insert(UnderlyingInstrumentPartyRole_61.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_61);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_127("STRING_1413255650");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_127);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127.insert(UnderlyingInstrumentPartySubID_127.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_127(1890784493);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_127);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127.insert(UnderlyingInstrumentPartySubIDType_127.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_128("STRING_1084242532");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_128);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128.insert(UnderlyingInstrumentPartySubID_128.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_128(1670128021);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_128);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128.insert(UnderlyingInstrumentPartySubIDType_128.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
