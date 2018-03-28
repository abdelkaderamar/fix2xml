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
  FIX::ClearingBusinessDate ClearingBusinessDate_12("LOCALMKTDATE_198280710");
  msg.set(ClearingBusinessDate_12);
  ContraryIntentionReport_0.insert(ClearingBusinessDate_12.getString());
  FIX::ContIntRptID ContIntRptID_0("STRING_365062666");
  msg.set(ContIntRptID_0);
  ContraryIntentionReport_0.insert(ContIntRptID_0.getString());
  FIX::EncodedText EncodedText_24("DATA_277163101");
  msg.set(EncodedText_24);
  ContraryIntentionReport_0.insert(EncodedText_24.getString());
  FIX::EncodedTextLen EncodedTextLen_24(1203742358);
  msg.set(EncodedTextLen_24);
  ContraryIntentionReport_0.insert(EncodedTextLen_24.getString());
  FIX::InputSource InputSource_0("STRING_1506879005");
  msg.set(InputSource_0);
  ContraryIntentionReport_0.insert(InputSource_0.getString());
  FIX::LateIndicator LateIndicator_0(false);
  msg.set(LateIndicator_0);
  ContraryIntentionReport_0.insert(LateIndicator_0.getString());
  FIX::Text Text_24("STRING_1408019923");
  msg.set(Text_24);
  ContraryIntentionReport_0.insert(Text_24.getString());
  FIX::TransactTime TransactTime_13(FIX::UTCTIMESTAMP(12, 58, 49, 21, 8, 2008));
  msg.set(TransactTime_13);
  ContraryIntentionReport_0.insert(TransactTime_13.getString());
  all_values.push_back(ContraryIntentionReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_1;
  FIX::ApplID ApplID_1("STRING_1634354449");
  msg.set(ApplID_1);
  ApplicationSequenceControl_1.insert(ApplID_1.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_1(522867761);
  msg.set(ApplLastSeqNum_1);
  ApplicationSequenceControl_1.insert(ApplLastSeqNum_1.getString());
  FIX::ApplResendFlag ApplResendFlag_1(true);
  msg.set(ApplResendFlag_1);
  ApplicationSequenceControl_1.insert(ApplResendFlag_1.getString());
  FIX::ApplSeqNum ApplSeqNum_1(379589828);
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
    ExpQty_0.setString("9816201");
    noExpiration_0_0.set(ExpQty_0);
    ExpirationQty_NoExpiration_0.insert(ExpQty_0.getString());
    FIX::ExpirationQtyType ExpirationQtyType_0(3);
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
    ExpQty_1.setString("3232207");
    noExpiration_0_1.set(ExpQty_1);
    ExpirationQty_NoExpiration_1.insert(ExpQty_1.getString());
    FIX::ExpirationQtyType ExpirationQtyType_1(4);
    noExpiration_0_1.set(ExpirationQtyType_1);
    ExpirationQty_NoExpiration_1.insert(ExpirationQtyType_1.getString());
    all_values.push_back(ExpirationQty_NoExpiration_1);

    msg.addGroup(noExpiration_0_1);
  }
  // Instrument
  multiset<string> Instrument_14;
  FIX::AttachmentPoint AttachmentPoint_14;
  AttachmentPoint_14.setString("44.920000");
  msg.set(AttachmentPoint_14);
  Instrument_14.insert(AttachmentPoint_14.getString());
  FIX::CFICode CFICode_14("STRING_1294179184");
  msg.set(CFICode_14);
  Instrument_14.insert(CFICode_14.getString());
  FIX::CPProgram CPProgram_14(1);
  msg.set(CPProgram_14);
  Instrument_14.insert(CPProgram_14.getString());
  FIX::CPRegType CPRegType_14("STRING_380939420");
  msg.set(CPRegType_14);
  Instrument_14.insert(CPRegType_14.getString());
  FIX::CapPrice CapPrice_14;
  CapPrice_14.setString("4208824");
  msg.set(CapPrice_14);
  Instrument_14.insert(CapPrice_14.getString());
  FIX::ContractMultiplier ContractMultiplier_14;
  ContractMultiplier_14.setString("18154338");
  msg.set(ContractMultiplier_14);
  Instrument_14.insert(ContractMultiplier_14.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_14(1);
  msg.set(ContractMultiplierUnit_14);
  Instrument_14.insert(ContractMultiplierUnit_14.getString());
  FIX::ContractSettlMonth ContractSettlMonth_14("MONTHYEAR_999901523");
  msg.set(ContractSettlMonth_14);
  Instrument_14.insert(ContractSettlMonth_14.getString());
  FIX::CountryOfIssue CountryOfIssue_14("COUNTRY_2013714553");
  msg.set(CountryOfIssue_14);
  Instrument_14.insert(CountryOfIssue_14.getString());
  FIX::CouponPaymentDate CouponPaymentDate_14("LOCALMKTDATE_531708293");
  msg.set(CouponPaymentDate_14);
  Instrument_14.insert(CouponPaymentDate_14.getString());
  FIX::CouponRate CouponRate_14;
  CouponRate_14.setString("46.240000");
  msg.set(CouponRate_14);
  Instrument_14.insert(CouponRate_14.getString());
  FIX::CreditRating CreditRating_14("STRING_1069973264");
  msg.set(CreditRating_14);
  Instrument_14.insert(CreditRating_14.getString());
  FIX::DatedDate DatedDate_14("LOCALMKTDATE_2038587299");
  msg.set(DatedDate_14);
  Instrument_14.insert(DatedDate_14.getString());
  FIX::DetachmentPoint DetachmentPoint_14;
  DetachmentPoint_14.setString("88.750000");
  msg.set(DetachmentPoint_14);
  Instrument_14.insert(DetachmentPoint_14.getString());
  FIX::EncodedIssuer EncodedIssuer_14("DATA_330509539");
  msg.set(EncodedIssuer_14);
  Instrument_14.insert(EncodedIssuer_14.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_14(1446479370);
  msg.set(EncodedIssuerLen_14);
  Instrument_14.insert(EncodedIssuerLen_14.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_14("DATA_446174808");
  msg.set(EncodedSecurityDesc_14);
  Instrument_14.insert(EncodedSecurityDesc_14.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_14(1788303677);
  msg.set(EncodedSecurityDescLen_14);
  Instrument_14.insert(EncodedSecurityDescLen_14.getString());
  FIX::ExerciseStyle ExerciseStyle_14(2);
  msg.set(ExerciseStyle_14);
  Instrument_14.insert(ExerciseStyle_14.getString());
  FIX::Factor Factor_14;
  Factor_14.setString("5963383");
  msg.set(Factor_14);
  Instrument_14.insert(Factor_14.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_14(true);
  msg.set(FlexProductEligibilityIndicator_14);
  Instrument_14.insert(FlexProductEligibilityIndicator_14.getString());
  FIX::FlexibleIndicator FlexibleIndicator_14(false);
  msg.set(FlexibleIndicator_14);
  Instrument_14.insert(FlexibleIndicator_14.getString());
  FIX::FloorPrice FloorPrice_14;
  FloorPrice_14.setString("832091");
  msg.set(FloorPrice_14);
  Instrument_14.insert(FloorPrice_14.getString());
  FIX::FlowScheduleType FlowScheduleType_14(0);
  msg.set(FlowScheduleType_14);
  Instrument_14.insert(FlowScheduleType_14.getString());
  FIX::InstrRegistry InstrRegistry_14("STRING_499595465");
  msg.set(InstrRegistry_14);
  Instrument_14.insert(InstrRegistry_14.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_14('4');
  msg.set(InstrmtAssignmentMethod_14);
  Instrument_14.insert(InstrmtAssignmentMethod_14.getString());
  FIX::InterestAccrualDate InterestAccrualDate_14("LOCALMKTDATE_750902306");
  msg.set(InterestAccrualDate_14);
  Instrument_14.insert(InterestAccrualDate_14.getString());
  FIX::IssueDate IssueDate_14("LOCALMKTDATE_1481215623");
  msg.set(IssueDate_14);
  Instrument_14.insert(IssueDate_14.getString());
  FIX::Issuer Issuer_14("STRING_744001974");
  msg.set(Issuer_14);
  Instrument_14.insert(Issuer_14.getString());
  FIX::ListMethod ListMethod_14(0);
  msg.set(ListMethod_14);
  Instrument_14.insert(ListMethod_14.getString());
  FIX::LocaleOfIssue LocaleOfIssue_14("STRING_2069483291");
  msg.set(LocaleOfIssue_14);
  Instrument_14.insert(LocaleOfIssue_14.getString());
  FIX::MaturityDate MaturityDate_14("LOCALMKTDATE_283442818");
  msg.set(MaturityDate_14);
  Instrument_14.insert(MaturityDate_14.getString());
  FIX::MaturityMonthYear MaturityMonthYear_14("MONTHYEAR_220818638");
  msg.set(MaturityMonthYear_14);
  Instrument_14.insert(MaturityMonthYear_14.getString());
  FIX::MaturityTime MaturityTime_14("TZTIMEONLY_1674137755");
  msg.set(MaturityTime_14);
  Instrument_14.insert(MaturityTime_14.getString());
  FIX::MinPriceIncrement MinPriceIncrement_14;
  MinPriceIncrement_14.setString("6643822");
  msg.set(MinPriceIncrement_14);
  Instrument_14.insert(MinPriceIncrement_14.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_14;
  MinPriceIncrementAmount_14.setString("6417010");
  msg.set(MinPriceIncrementAmount_14);
  Instrument_14.insert(MinPriceIncrementAmount_14.getString());
  FIX::NTPositionLimit NTPositionLimit_14(1342087950);
  msg.set(NTPositionLimit_14);
  Instrument_14.insert(NTPositionLimit_14.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_14;
  NotionalPercentageOutstanding_14.setString("78.660000");
  msg.set(NotionalPercentageOutstanding_14);
  Instrument_14.insert(NotionalPercentageOutstanding_14.getString());
  FIX::OptAttribute OptAttribute_14('1');
  msg.set(OptAttribute_14);
  Instrument_14.insert(OptAttribute_14.getString());
  FIX::OptPayoutAmount OptPayoutAmount_14;
  OptPayoutAmount_14.setString("12083188");
  msg.set(OptPayoutAmount_14);
  Instrument_14.insert(OptPayoutAmount_14.getString());
  FIX::OptPayoutType OptPayoutType_14(3);
  msg.set(OptPayoutType_14);
  Instrument_14.insert(OptPayoutType_14.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_14;
  OriginalNotionalPercentageOutstanding_14.setString("35.530000");
  msg.set(OriginalNotionalPercentageOutstanding_14);
  Instrument_14.insert(OriginalNotionalPercentageOutstanding_14.getString());
  FIX::Pool Pool_14("STRING_130808472");
  msg.set(Pool_14);
  Instrument_14.insert(Pool_14.getString());
  FIX::PositionLimit PositionLimit_14(1253839811);
  msg.set(PositionLimit_14);
  Instrument_14.insert(PositionLimit_14.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_14("STRING_INX");
  msg.set(PriceQuoteMethod_14);
  Instrument_14.insert(PriceQuoteMethod_14.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_14("STRING_461318011");
  msg.set(PriceUnitOfMeasure_14);
  Instrument_14.insert(PriceUnitOfMeasure_14.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_14;
  PriceUnitOfMeasureQty_14.setString("5528355");
  msg.set(PriceUnitOfMeasureQty_14);
  Instrument_14.insert(PriceUnitOfMeasureQty_14.getString());
  FIX::Product Product_16(10);
  msg.set(Product_16);
  Instrument_14.insert(Product_16.getString());
  FIX::ProductComplex ProductComplex_14("STRING_102138040");
  msg.set(ProductComplex_14);
  Instrument_14.insert(ProductComplex_14.getString());
  FIX::PutOrCall PutOrCall_14(1);
  msg.set(PutOrCall_14);
  Instrument_14.insert(PutOrCall_14.getString());
  FIX::RedemptionDate RedemptionDate_14("LOCALMKTDATE_1008511942");
  msg.set(RedemptionDate_14);
  Instrument_14.insert(RedemptionDate_14.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_14("STRING_689194844");
  msg.set(RepoCollateralSecurityType_14);
  Instrument_14.insert(RepoCollateralSecurityType_14.getString());
  FIX::RepurchaseRate RepurchaseRate_14;
  RepurchaseRate_14.setString("44.120000");
  msg.set(RepurchaseRate_14);
  Instrument_14.insert(RepurchaseRate_14.getString());
  FIX::RepurchaseTerm RepurchaseTerm_14(1091721096);
  msg.set(RepurchaseTerm_14);
  Instrument_14.insert(RepurchaseTerm_14.getString());
  FIX::RestructuringType RestructuringType_14("STRING_MR");
  msg.set(RestructuringType_14);
  Instrument_14.insert(RestructuringType_14.getString());
  FIX::SecurityDesc SecurityDesc_14("STRING_1290329878");
  msg.set(SecurityDesc_14);
  Instrument_14.insert(SecurityDesc_14.getString());
  FIX::SecurityExchange SecurityExchange_14("EXCHANGE_1554520079");
  msg.set(SecurityExchange_14);
  Instrument_14.insert(SecurityExchange_14.getString());
  FIX::SecurityGroup SecurityGroup_14("STRING_402538067");
  msg.set(SecurityGroup_14);
  Instrument_14.insert(SecurityGroup_14.getString());
  FIX::SecurityID SecurityID_14("STRING_624061853");
  msg.set(SecurityID_14);
  Instrument_14.insert(SecurityID_14.getString());
  FIX::SecurityIDSource SecurityIDSource_14("STRING_2");
  msg.set(SecurityIDSource_14);
  Instrument_14.insert(SecurityIDSource_14.getString());
  FIX::SecurityStatus SecurityStatus_14("STRING_1");
  msg.set(SecurityStatus_14);
  Instrument_14.insert(SecurityStatus_14.getString());
  FIX::SecuritySubType SecuritySubType_14("STRING_546061497");
  msg.set(SecuritySubType_14);
  Instrument_14.insert(SecuritySubType_14.getString());
  FIX::SecurityType SecurityType_16("STRING_BRADY");
  msg.set(SecurityType_16);
  Instrument_14.insert(SecurityType_16.getString());
  FIX::Seniority Seniority_14("STRING_SB");
  msg.set(Seniority_14);
  Instrument_14.insert(Seniority_14.getString());
  FIX::SettlMethod SettlMethod_14('C');
  msg.set(SettlMethod_14);
  Instrument_14.insert(SettlMethod_14.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_14("STRING_1098863463");
  msg.set(SettleOnOpenFlag_14);
  Instrument_14.insert(SettleOnOpenFlag_14.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_14("STRING_191697214");
  msg.set(StateOrProvinceOfIssue_14);
  Instrument_14.insert(StateOrProvinceOfIssue_14.getString());
  FIX::StrikeCurrency StrikeCurrency_14("CAN");
  msg.set(StrikeCurrency_14);
  Instrument_14.insert(StrikeCurrency_14.getString());
  FIX::StrikeMultiplier StrikeMultiplier_14;
  StrikeMultiplier_14.setString("18332997");
  msg.set(StrikeMultiplier_14);
  Instrument_14.insert(StrikeMultiplier_14.getString());
  FIX::StrikePrice StrikePrice_14;
  StrikePrice_14.setString("4756387");
  msg.set(StrikePrice_14);
  Instrument_14.insert(StrikePrice_14.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_14(2);
  msg.set(StrikePriceBoundaryMethod_14);
  Instrument_14.insert(StrikePriceBoundaryMethod_14.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_14;
  StrikePriceBoundaryPrecision_14.setString("96.960000");
  msg.set(StrikePriceBoundaryPrecision_14);
  Instrument_14.insert(StrikePriceBoundaryPrecision_14.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_14(3);
  msg.set(StrikePriceDeterminationMethod_14);
  Instrument_14.insert(StrikePriceDeterminationMethod_14.getString());
  FIX::StrikeValue StrikeValue_14;
  StrikeValue_14.setString("2515000");
  msg.set(StrikeValue_14);
  Instrument_14.insert(StrikeValue_14.getString());
  FIX::Symbol Symbol_14("STRING_422998477");
  msg.set(Symbol_14);
  Instrument_14.insert(Symbol_14.getString());
  FIX::SymbolSfx SymbolSfx_14("STRING_WI");
  msg.set(SymbolSfx_14);
  Instrument_14.insert(SymbolSfx_14.getString());
  FIX::TimeUnit TimeUnit_14("STRING_Yr");
  msg.set(TimeUnit_14);
  Instrument_14.insert(TimeUnit_14.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_14(3);
  msg.set(UnderlyingPriceDeterminationMethod_14);
  Instrument_14.insert(UnderlyingPriceDeterminationMethod_14.getString());
  FIX::UnitOfMeasure UnitOfMeasure_14("STRING_Bu");
  msg.set(UnitOfMeasure_14);
  Instrument_14.insert(UnitOfMeasure_14.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_14;
  UnitOfMeasureQty_14.setString("14342797");
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
    multiset<string> ComplexEvents_NoComplexEvents_33;
    FIX::ComplexEventCondition ComplexEventCondition_33(2);
    noComplexEvents_0_0.set(ComplexEventCondition_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventCondition_33.getString());
    FIX::ComplexEventPrice ComplexEventPrice_33;
    ComplexEventPrice_33.setString("7879214");
    noComplexEvents_0_0.set(ComplexEventPrice_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventPrice_33.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_33(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventPriceBoundaryMethod_33.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_33;
    ComplexEventPriceBoundaryPrecision_33.setString("3.650000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventPriceBoundaryPrecision_33.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_33(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventPriceTimeType_33.getString());
    FIX::ComplexEventType ComplexEventType_33(2);
    noComplexEvents_0_0.set(ComplexEventType_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventType_33.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_33;
    ComplexOptPayoutAmount_33.setString("19919222");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexOptPayoutAmount_33.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_33);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_68;
      FIX::ComplexEventEndDate ComplexEventEndDate_68(FIX::UTCTIMESTAMP(4, 37, 20, 24, 5, 2000));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_68);
      ComplexEventDates_NoComplexEventDates_68.insert(ComplexEventEndDate_68.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_68(FIX::UTCTIMESTAMP(14, 17, 1, 7, 7, 2001));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_68);
      ComplexEventDates_NoComplexEventDates_68.insert(ComplexEventStartDate_68.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_68);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_144;
        FIX::ComplexEventEndTime ComplexEventEndTime_144(FIX::UTCTIMEONLY(21, 38, 50));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_144);
        ComplexEventTimes_NoComplexEventTimes_144.insert(ComplexEventEndTime_144.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_144(FIX::UTCTIMEONLY(9, 38, 0));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_144);
        ComplexEventTimes_NoComplexEventTimes_144.insert(ComplexEventStartTime_144.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_144);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_145;
        FIX::ComplexEventEndTime ComplexEventEndTime_145(FIX::UTCTIMEONLY(23, 10, 58));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_145);
        ComplexEventTimes_NoComplexEventTimes_145.insert(ComplexEventEndTime_145.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_145(FIX::UTCTIMEONLY(12, 29, 49));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_145);
        ComplexEventTimes_NoComplexEventTimes_145.insert(ComplexEventStartTime_145.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_145);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_146;
        FIX::ComplexEventEndTime ComplexEventEndTime_146(FIX::UTCTIMEONLY(21, 26, 33));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_146);
        ComplexEventTimes_NoComplexEventTimes_146.insert(ComplexEventEndTime_146.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_146(FIX::UTCTIMEONLY(23, 19, 27));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_146);
        ComplexEventTimes_NoComplexEventTimes_146.insert(ComplexEventStartTime_146.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_146);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_69;
      FIX::ComplexEventEndDate ComplexEventEndDate_69(FIX::UTCTIMESTAMP(1, 28, 28, 15, 1, 2010));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_69);
      ComplexEventDates_NoComplexEventDates_69.insert(ComplexEventEndDate_69.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_69(FIX::UTCTIMESTAMP(1, 10, 44, 15, 8, 2009));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_69);
      ComplexEventDates_NoComplexEventDates_69.insert(ComplexEventStartDate_69.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_69);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_147;
        FIX::ComplexEventEndTime ComplexEventEndTime_147(FIX::UTCTIMEONLY(6, 50, 54));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_147);
        ComplexEventTimes_NoComplexEventTimes_147.insert(ComplexEventEndTime_147.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_147(FIX::UTCTIMEONLY(18, 23, 31));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_147);
        ComplexEventTimes_NoComplexEventTimes_147.insert(ComplexEventStartTime_147.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_147);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_148;
        FIX::ComplexEventEndTime ComplexEventEndTime_148(FIX::UTCTIMEONLY(20, 49, 20));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_148);
        ComplexEventTimes_NoComplexEventTimes_148.insert(ComplexEventEndTime_148.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_148(FIX::UTCTIMEONLY(4, 39, 48));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_148);
        ComplexEventTimes_NoComplexEventTimes_148.insert(ComplexEventStartTime_148.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_148);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_149;
        FIX::ComplexEventEndTime ComplexEventEndTime_149(FIX::UTCTIMEONLY(8, 17, 54));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_149);
        ComplexEventTimes_NoComplexEventTimes_149.insert(ComplexEventEndTime_149.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_149(FIX::UTCTIMEONLY(9, 34, 18));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_149);
        ComplexEventTimes_NoComplexEventTimes_149.insert(ComplexEventStartTime_149.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_149);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_70;
      FIX::ComplexEventEndDate ComplexEventEndDate_70(FIX::UTCTIMESTAMP(13, 54, 49, 12, 2, 2007));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_70);
      ComplexEventDates_NoComplexEventDates_70.insert(ComplexEventEndDate_70.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_70(FIX::UTCTIMESTAMP(8, 19, 10, 26, 2, 2001));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_70);
      ComplexEventDates_NoComplexEventDates_70.insert(ComplexEventStartDate_70.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_70);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_150;
        FIX::ComplexEventEndTime ComplexEventEndTime_150(FIX::UTCTIMEONLY(21, 58, 8));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_150);
        ComplexEventTimes_NoComplexEventTimes_150.insert(ComplexEventEndTime_150.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_150(FIX::UTCTIMEONLY(3, 40, 47));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_150);
        ComplexEventTimes_NoComplexEventTimes_150.insert(ComplexEventStartTime_150.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_150);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_34;
    FIX::ComplexEventCondition ComplexEventCondition_34(1);
    noComplexEvents_0_1.set(ComplexEventCondition_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventCondition_34.getString());
    FIX::ComplexEventPrice ComplexEventPrice_34;
    ComplexEventPrice_34.setString("235128");
    noComplexEvents_0_1.set(ComplexEventPrice_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventPrice_34.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_34(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventPriceBoundaryMethod_34.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_34;
    ComplexEventPriceBoundaryPrecision_34.setString("58.100000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventPriceBoundaryPrecision_34.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_34(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventPriceTimeType_34.getString());
    FIX::ComplexEventType ComplexEventType_34(6);
    noComplexEvents_0_1.set(ComplexEventType_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventType_34.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_34;
    ComplexOptPayoutAmount_34.setString("19338212");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexOptPayoutAmount_34.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_34);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_71;
      FIX::ComplexEventEndDate ComplexEventEndDate_71(FIX::UTCTIMESTAMP(14, 16, 12, 2, 7, 2017));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_71);
      ComplexEventDates_NoComplexEventDates_71.insert(ComplexEventEndDate_71.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_71(FIX::UTCTIMESTAMP(6, 0, 25, 8, 3, 2015));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_71);
      ComplexEventDates_NoComplexEventDates_71.insert(ComplexEventStartDate_71.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_71);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_151;
        FIX::ComplexEventEndTime ComplexEventEndTime_151(FIX::UTCTIMEONLY(16, 43, 51));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_151);
        ComplexEventTimes_NoComplexEventTimes_151.insert(ComplexEventEndTime_151.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_151(FIX::UTCTIMEONLY(14, 23, 14));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_151);
        ComplexEventTimes_NoComplexEventTimes_151.insert(ComplexEventStartTime_151.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_151);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_152;
        FIX::ComplexEventEndTime ComplexEventEndTime_152(FIX::UTCTIMEONLY(15, 10, 9));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_152);
        ComplexEventTimes_NoComplexEventTimes_152.insert(ComplexEventEndTime_152.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_152(FIX::UTCTIMEONLY(15, 26, 37));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_152);
        ComplexEventTimes_NoComplexEventTimes_152.insert(ComplexEventStartTime_152.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_152);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_153;
        FIX::ComplexEventEndTime ComplexEventEndTime_153(FIX::UTCTIMEONLY(20, 46, 6));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_153);
        ComplexEventTimes_NoComplexEventTimes_153.insert(ComplexEventEndTime_153.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_153(FIX::UTCTIMEONLY(4, 48, 50));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_153);
        ComplexEventTimes_NoComplexEventTimes_153.insert(ComplexEventStartTime_153.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_153);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::ContraryIntentionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_25;
    FIX::EventDate EventDate_25("LOCALMKTDATE_1276081248");
    noEvents_0_0.set(EventDate_25);
    EvntGrp_NoEvents_25.insert(EventDate_25.getString());
    FIX::EventPx EventPx_25;
    EventPx_25.setString("16303567");
    noEvents_0_0.set(EventPx_25);
    EvntGrp_NoEvents_25.insert(EventPx_25.getString());
    FIX::EventText EventText_25("STRING_759576646");
    noEvents_0_0.set(EventText_25);
    EvntGrp_NoEvents_25.insert(EventText_25.getString());
    FIX::EventTime EventTime_25(FIX::UTCTIMESTAMP(10, 31, 25, 27, 3, 2016));
    noEvents_0_0.set(EventTime_25);
    EvntGrp_NoEvents_25.insert(EventTime_25.getString());
    FIX::EventType EventType_25(15);
    noEvents_0_0.set(EventType_25);
    EvntGrp_NoEvents_25.insert(EventType_25.getString());
    all_values.push_back(EvntGrp_NoEvents_25);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_26;
    FIX::EventDate EventDate_26("LOCALMKTDATE_808980741");
    noEvents_0_1.set(EventDate_26);
    EvntGrp_NoEvents_26.insert(EventDate_26.getString());
    FIX::EventPx EventPx_26;
    EventPx_26.setString("4571049");
    noEvents_0_1.set(EventPx_26);
    EvntGrp_NoEvents_26.insert(EventPx_26.getString());
    FIX::EventText EventText_26("STRING_155681760");
    noEvents_0_1.set(EventText_26);
    EvntGrp_NoEvents_26.insert(EventText_26.getString());
    FIX::EventTime EventTime_26(FIX::UTCTIMESTAMP(22, 10, 33, 6, 6, 2012));
    noEvents_0_1.set(EventTime_26);
    EvntGrp_NoEvents_26.insert(EventTime_26.getString());
    FIX::EventType EventType_26(12);
    noEvents_0_1.set(EventType_26);
    EvntGrp_NoEvents_26.insert(EventType_26.getString());
    all_values.push_back(EvntGrp_NoEvents_26);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ContraryIntentionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_25;
    FIX::InstrumentPartyID InstrumentPartyID_25("STRING_1499897352");
    noInstrumentParties_0_0.set(InstrumentPartyID_25);
    InstrumentParties_NoInstrumentParties_25.insert(InstrumentPartyID_25.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_25('5');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_25);
    InstrumentParties_NoInstrumentParties_25.insert(InstrumentPartyIDSource_25.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_25(906539801);
    noInstrumentParties_0_0.set(InstrumentPartyRole_25);
    InstrumentParties_NoInstrumentParties_25.insert(InstrumentPartyRole_25.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_25);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60;
      FIX::InstrumentPartySubID InstrumentPartySubID_60("STRING_55355513");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_60);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60.insert(InstrumentPartySubID_60.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_60(1528852469);
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
    multiset<string> InstrumentParties_NoInstrumentParties_26;
    FIX::InstrumentPartyID InstrumentPartyID_26("STRING_1081206021");
    noInstrumentParties_0_1.set(InstrumentPartyID_26);
    InstrumentParties_NoInstrumentParties_26.insert(InstrumentPartyID_26.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_26('2');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_26);
    InstrumentParties_NoInstrumentParties_26.insert(InstrumentPartyIDSource_26.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_26(657450070);
    noInstrumentParties_0_1.set(InstrumentPartyRole_26);
    InstrumentParties_NoInstrumentParties_26.insert(InstrumentPartyRole_26.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_26);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61;
      FIX::InstrumentPartySubID InstrumentPartySubID_61("STRING_698415761");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_61);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61.insert(InstrumentPartySubID_61.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_61(1417170112);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_61);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61.insert(InstrumentPartySubIDType_61.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62;
      FIX::InstrumentPartySubID InstrumentPartySubID_62("STRING_1100099847");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_62);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62.insert(InstrumentPartySubID_62.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_62(1283190852);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_62);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62.insert(InstrumentPartySubIDType_62.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63;
      FIX::InstrumentPartySubID InstrumentPartySubID_63("STRING_2047519217");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_63);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63.insert(InstrumentPartySubID_63.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_63(159040186);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_63);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63.insert(InstrumentPartySubIDType_63.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_27;
    FIX::InstrumentPartyID InstrumentPartyID_27("STRING_1130128819");
    noInstrumentParties_0_2.set(InstrumentPartyID_27);
    InstrumentParties_NoInstrumentParties_27.insert(InstrumentPartyID_27.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_27('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_27);
    InstrumentParties_NoInstrumentParties_27.insert(InstrumentPartyIDSource_27.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_27(1697005660);
    noInstrumentParties_0_2.set(InstrumentPartyRole_27);
    InstrumentParties_NoInstrumentParties_27.insert(InstrumentPartyRole_27.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_27);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64;
      FIX::InstrumentPartySubID InstrumentPartySubID_64("STRING_285616368");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_64);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64.insert(InstrumentPartySubID_64.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_64(1852687420);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_64);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64.insert(InstrumentPartySubIDType_64.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65;
      FIX::InstrumentPartySubID InstrumentPartySubID_65("STRING_372315304");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_65);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65.insert(InstrumentPartySubID_65.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_65(1294863383);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_65);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65.insert(InstrumentPartySubIDType_65.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ContraryIntentionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_30;
    FIX::SecurityAltID SecurityAltID_30("STRING_740379157");
    noSecurityAltID_0_0.set(SecurityAltID_30);
    SecAltIDGrp_NoSecurityAltID_30.insert(SecurityAltID_30.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_30("STRING_1937223485");
    noSecurityAltID_0_0.set(SecurityAltIDSource_30);
    SecAltIDGrp_NoSecurityAltID_30.insert(SecurityAltIDSource_30.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_30);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_28;
  FIX::SecurityXML SecurityXML_29("XMLDATA_1445993063");
  msg.set(SecurityXML_29);
  FIX::SecurityXMLLen SecurityXMLLen_14(682155089);
  msg.set(SecurityXMLLen_14);
  FIX::SecurityXMLSchema SecurityXMLSchema_14("STRING_18047348");
  msg.set(SecurityXMLSchema_14);
  SecurityXML_28.insert(SecurityXMLSchema_14.getString());
  all_values.push_back(SecurityXML_28);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ContraryIntentionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_36;
    FIX::PartyID PartyID_36("STRING_34568794");
    noPartyIDs_0_0.set(PartyID_36);
    Parties_NoPartyIDs_36.insert(PartyID_36.getString());
    FIX::PartyIDSource PartyIDSource_36('6');
    noPartyIDs_0_0.set(PartyIDSource_36);
    Parties_NoPartyIDs_36.insert(PartyIDSource_36.getString());
    FIX::PartyRole PartyRole_36(58);
    noPartyIDs_0_0.set(PartyRole_36);
    Parties_NoPartyIDs_36.insert(PartyRole_36.getString());
    all_values.push_back(Parties_NoPartyIDs_36);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_75;
      FIX::PartySubID PartySubID_75("STRING_616922339");
      noPartySubIDs_0_1_0.set(PartySubID_75);
      PtysSubGrp_NoPartySubIDs_75.insert(PartySubID_75.getString());
      FIX::PartySubIDType PartySubIDType_75(30);
      noPartySubIDs_0_1_0.set(PartySubIDType_75);
      PtysSubGrp_NoPartySubIDs_75.insert(PartySubIDType_75.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_75);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_76;
      FIX::PartySubID PartySubID_76("STRING_1048296807");
      noPartySubIDs_0_1_1.set(PartySubID_76);
      PtysSubGrp_NoPartySubIDs_76.insert(PartySubID_76.getString());
      FIX::PartySubIDType PartySubIDType_76(8);
      noPartySubIDs_0_1_1.set(PartySubIDType_76);
      PtysSubGrp_NoPartySubIDs_76.insert(PartySubIDType_76.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_76);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_37;
    FIX::PartyID PartyID_37("STRING_775721043");
    noPartyIDs_0_1.set(PartyID_37);
    Parties_NoPartyIDs_37.insert(PartyID_37.getString());
    FIX::PartyIDSource PartyIDSource_37('E');
    noPartyIDs_0_1.set(PartyIDSource_37);
    Parties_NoPartyIDs_37.insert(PartyIDSource_37.getString());
    FIX::PartyRole PartyRole_37(13);
    noPartyIDs_0_1.set(PartyRole_37);
    Parties_NoPartyIDs_37.insert(PartyRole_37.getString());
    all_values.push_back(Parties_NoPartyIDs_37);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_77;
      FIX::PartySubID PartySubID_77("STRING_564992115");
      noPartySubIDs_1_1_0.set(PartySubID_77);
      PtysSubGrp_NoPartySubIDs_77.insert(PartySubID_77.getString());
      FIX::PartySubIDType PartySubIDType_77(15);
      noPartySubIDs_1_1_0.set(PartySubIDType_77);
      PtysSubGrp_NoPartySubIDs_77.insert(PartySubIDType_77.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_77);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ContraryIntentionReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_25;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_25("DATA_724032302");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingIssuer_25.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_25(1520013240);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingIssuerLen_25.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_25("DATA_1921438103");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingSecurityDesc_25.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_25(273554314);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingSecurityDescLen_25.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_25;
    UnderlyingAdjustedQuantity_25.setString("13116391");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_25);
    UnderlyingInstrument_25.insert(UnderlyingAdjustedQuantity_25.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_25;
    UnderlyingAllocationPercent_25.setString("8.230000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_25);
    UnderlyingInstrument_25.insert(UnderlyingAllocationPercent_25.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_25;
    UnderlyingAttachmentPoint_25.setString("17.350000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_25);
    UnderlyingInstrument_25.insert(UnderlyingAttachmentPoint_25.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_25("STRING_1683954456");
    noUnderlyings_0_0.set(UnderlyingCFICode_25);
    UnderlyingInstrument_25.insert(UnderlyingCFICode_25.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_25("STRING_1354434206");
    noUnderlyings_0_0.set(UnderlyingCPProgram_25);
    UnderlyingInstrument_25.insert(UnderlyingCPProgram_25.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_25("STRING_598350469");
    noUnderlyings_0_0.set(UnderlyingCPRegType_25);
    UnderlyingInstrument_25.insert(UnderlyingCPRegType_25.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_25;
    UnderlyingCapValue_25.setString("2768499");
    noUnderlyings_0_0.set(UnderlyingCapValue_25);
    UnderlyingInstrument_25.insert(UnderlyingCapValue_25.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_25;
    UnderlyingCashAmount_25.setString("11441740");
    noUnderlyings_0_0.set(UnderlyingCashAmount_25);
    UnderlyingInstrument_25.insert(UnderlyingCashAmount_25.getString());
    FIX::UnderlyingCashType UnderlyingCashType_25("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_25);
    UnderlyingInstrument_25.insert(UnderlyingCashType_25.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_25;
    UnderlyingContractMultiplier_25.setString("9590050");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_25);
    UnderlyingInstrument_25.insert(UnderlyingContractMultiplier_25.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_25(1162221392);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_25);
    UnderlyingInstrument_25.insert(UnderlyingContractMultiplierUnit_25.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_25("COUNTRY_1874705883");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_25);
    UnderlyingInstrument_25.insert(UnderlyingCountryOfIssue_25.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_25("LOCALMKTDATE_993573849");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_25);
    UnderlyingInstrument_25.insert(UnderlyingCouponPaymentDate_25.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_25;
    UnderlyingCouponRate_25.setString("82.180000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_25);
    UnderlyingInstrument_25.insert(UnderlyingCouponRate_25.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_25("STRING_464124387");
    noUnderlyings_0_0.set(UnderlyingCreditRating_25);
    UnderlyingInstrument_25.insert(UnderlyingCreditRating_25.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_25("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_25);
    UnderlyingInstrument_25.insert(UnderlyingCurrency_25.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_25;
    UnderlyingCurrentValue_25.setString("5823953");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_25);
    UnderlyingInstrument_25.insert(UnderlyingCurrentValue_25.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_25;
    UnderlyingDetachmentPoint_25.setString("14.410000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_25);
    UnderlyingInstrument_25.insert(UnderlyingDetachmentPoint_25.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_25;
    UnderlyingDirtyPrice_25.setString("7489883");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_25);
    UnderlyingInstrument_25.insert(UnderlyingDirtyPrice_25.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_25;
    UnderlyingEndPrice_25.setString("13581164");
    noUnderlyings_0_0.set(UnderlyingEndPrice_25);
    UnderlyingInstrument_25.insert(UnderlyingEndPrice_25.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_25;
    UnderlyingEndValue_25.setString("14738537");
    noUnderlyings_0_0.set(UnderlyingEndValue_25);
    UnderlyingInstrument_25.insert(UnderlyingEndValue_25.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_25(2003165581);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_25);
    UnderlyingInstrument_25.insert(UnderlyingExerciseStyle_25.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_25;
    UnderlyingFXRate_25.setString("14035239");
    noUnderlyings_0_0.set(UnderlyingFXRate_25);
    UnderlyingInstrument_25.insert(UnderlyingFXRate_25.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_25('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_25);
    UnderlyingInstrument_25.insert(UnderlyingFXRateCalc_25.getString());
    FIX::UnderlyingFactor UnderlyingFactor_25;
    UnderlyingFactor_25.setString("2455663");
    noUnderlyings_0_0.set(UnderlyingFactor_25);
    UnderlyingInstrument_25.insert(UnderlyingFactor_25.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_25(1348966990);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_25);
    UnderlyingInstrument_25.insert(UnderlyingFlowScheduleType_25.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_25("STRING_615394479");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_25);
    UnderlyingInstrument_25.insert(UnderlyingInstrRegistry_25.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_25("LOCALMKTDATE_1765579594");
    noUnderlyings_0_0.set(UnderlyingIssueDate_25);
    UnderlyingInstrument_25.insert(UnderlyingIssueDate_25.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_25("STRING_1122921445");
    noUnderlyings_0_0.set(UnderlyingIssuer_25);
    UnderlyingInstrument_25.insert(UnderlyingIssuer_25.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_25("STRING_888948793");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_25);
    UnderlyingInstrument_25.insert(UnderlyingLocaleOfIssue_25.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_25("LOCALMKTDATE_929735098");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_25);
    UnderlyingInstrument_25.insert(UnderlyingMaturityDate_25.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_25("MONTHYEAR_1182492268");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_25);
    UnderlyingInstrument_25.insert(UnderlyingMaturityMonthYear_25.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_25("TZTIMEONLY_867706880");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_25);
    UnderlyingInstrument_25.insert(UnderlyingMaturityTime_25.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_25;
    UnderlyingNotionalPercentageOutstanding_25.setString("59.060000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_25);
    UnderlyingInstrument_25.insert(UnderlyingNotionalPercentageOutstanding_25.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_25('3');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_25);
    UnderlyingInstrument_25.insert(UnderlyingOptAttribute_25.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_25;
    UnderlyingOriginalNotionalPercentageOutstanding_25.setString("73.500000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_25);
    UnderlyingInstrument_25.insert(UnderlyingOriginalNotionalPercentageOutstanding_25.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_25("STRING_743055871");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_25);
    UnderlyingInstrument_25.insert(UnderlyingPriceUnitOfMeasure_25.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_25;
    UnderlyingPriceUnitOfMeasureQty_25.setString("15336168");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_25);
    UnderlyingInstrument_25.insert(UnderlyingPriceUnitOfMeasureQty_25.getString());
    FIX::UnderlyingProduct UnderlyingProduct_25(1362917235);
    noUnderlyings_0_0.set(UnderlyingProduct_25);
    UnderlyingInstrument_25.insert(UnderlyingProduct_25.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_25(1702060926);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_25);
    UnderlyingInstrument_25.insert(UnderlyingPutOrCall_25.getString());
    FIX::UnderlyingPx UnderlyingPx_25;
    UnderlyingPx_25.setString("5483546");
    noUnderlyings_0_0.set(UnderlyingPx_25);
    UnderlyingInstrument_25.insert(UnderlyingPx_25.getString());
    FIX::UnderlyingQty UnderlyingQty_25;
    UnderlyingQty_25.setString("10901394");
    noUnderlyings_0_0.set(UnderlyingQty_25);
    UnderlyingInstrument_25.insert(UnderlyingQty_25.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_25("LOCALMKTDATE_548151127");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_25);
    UnderlyingInstrument_25.insert(UnderlyingRedemptionDate_25.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_25("STRING_124659184");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_25);
    UnderlyingInstrument_25.insert(UnderlyingRepoCollateralSecurityType_25.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_25;
    UnderlyingRepurchaseRate_25.setString("38.580000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_25);
    UnderlyingInstrument_25.insert(UnderlyingRepurchaseRate_25.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_25(1508815762);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_25);
    UnderlyingInstrument_25.insert(UnderlyingRepurchaseTerm_25.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_25("STRING_317886094");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_25);
    UnderlyingInstrument_25.insert(UnderlyingRestructuringType_25.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_25("STRING_2136659219");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityDesc_25.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_25("EXCHANGE_1370293555");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityExchange_25.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_25("STRING_1066874458");
    noUnderlyings_0_0.set(UnderlyingSecurityID_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityID_25.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_25("STRING_1347291975");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityIDSource_25.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_25("STRING_696663617");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_25);
    UnderlyingInstrument_25.insert(UnderlyingSecuritySubType_25.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_25("STRING_922556391");
    noUnderlyings_0_0.set(UnderlyingSecurityType_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityType_25.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_25("STRING_603332240");
    noUnderlyings_0_0.set(UnderlyingSeniority_25);
    UnderlyingInstrument_25.insert(UnderlyingSeniority_25.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_25("STRING_588025794");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_25);
    UnderlyingInstrument_25.insert(UnderlyingSettlMethod_25.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_25(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_25);
    UnderlyingInstrument_25.insert(UnderlyingSettlementType_25.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_25;
    UnderlyingStartValue_25.setString("19522992");
    noUnderlyings_0_0.set(UnderlyingStartValue_25);
    UnderlyingInstrument_25.insert(UnderlyingStartValue_25.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_25("STRING_1203420273");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_25);
    UnderlyingInstrument_25.insert(UnderlyingStateOrProvinceOfIssue_25.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_25("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_25);
    UnderlyingInstrument_25.insert(UnderlyingStrikeCurrency_25.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_25;
    UnderlyingStrikePrice_25.setString("20923690");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_25);
    UnderlyingInstrument_25.insert(UnderlyingStrikePrice_25.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_25("STRING_1715953789");
    noUnderlyings_0_0.set(UnderlyingSymbol_25);
    UnderlyingInstrument_25.insert(UnderlyingSymbol_25.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_25("STRING_2110229295");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_25);
    UnderlyingInstrument_25.insert(UnderlyingSymbolSfx_25.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_25("STRING_812592299");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_25);
    UnderlyingInstrument_25.insert(UnderlyingTimeUnit_25.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_25("STRING_34676047");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_25);
    UnderlyingInstrument_25.insert(UnderlyingUnitOfMeasure_25.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_25;
    UnderlyingUnitOfMeasureQty_25.setString("3521884");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_25);
    UnderlyingInstrument_25.insert(UnderlyingUnitOfMeasureQty_25.getString());
    all_values.push_back(UnderlyingInstrument_25);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_53;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_53("STRING_777731919");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_53);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_53.insert(UnderlyingSecurityAltID_53.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_53("STRING_1885805345");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_53);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_53.insert(UnderlyingSecurityAltIDSource_53.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_53);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_54;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_54("STRING_1494083236");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_54);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_54.insert(UnderlyingSecurityAltID_54.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_54("STRING_332309197");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_54);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_54.insert(UnderlyingSecurityAltIDSource_54.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_54);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_46;
      FIX::UnderlyingStipType UnderlyingStipType_46("STRING_436739058");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_46);
      UnderlyingStipulations_NoUnderlyingStips_46.insert(UnderlyingStipType_46.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_46("STRING_880460325");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_46);
      UnderlyingStipulations_NoUnderlyingStips_46.insert(UnderlyingStipValue_46.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_46);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_47;
      FIX::UnderlyingStipType UnderlyingStipType_47("STRING_411335496");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_47);
      UnderlyingStipulations_NoUnderlyingStips_47.insert(UnderlyingStipType_47.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_47("STRING_1991002916");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_47);
      UnderlyingStipulations_NoUnderlyingStips_47.insert(UnderlyingStipValue_47.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_47);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_50;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_50("STRING_729221590");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_50);
      UndlyInstrumentParties_NoUndlyInstrumentParties_50.insert(UnderlyingInstrumentPartyID_50.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_50('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_50);
      UndlyInstrumentParties_NoUndlyInstrumentParties_50.insert(UnderlyingInstrumentPartyIDSource_50.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_50(1612085994);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_50);
      UndlyInstrumentParties_NoUndlyInstrumentParties_50.insert(UnderlyingInstrumentPartyRole_50.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_50);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_111("STRING_1179986815");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_111);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111.insert(UnderlyingInstrumentPartySubID_111.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_111(161265963);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_111);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111.insert(UnderlyingInstrumentPartySubIDType_111.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_112("STRING_571168792");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_112);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112.insert(UnderlyingInstrumentPartySubID_112.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_112(1783319055);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_112);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112.insert(UnderlyingInstrumentPartySubIDType_112.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_113("STRING_749291757");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_113);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113.insert(UnderlyingInstrumentPartySubID_113.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_113(1739291537);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_113);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113.insert(UnderlyingInstrumentPartySubIDType_113.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_51;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_51("STRING_1588134637");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_51);
      UndlyInstrumentParties_NoUndlyInstrumentParties_51.insert(UnderlyingInstrumentPartyID_51.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_51('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_51);
      UndlyInstrumentParties_NoUndlyInstrumentParties_51.insert(UnderlyingInstrumentPartyIDSource_51.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_51(378026581);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_51);
      UndlyInstrumentParties_NoUndlyInstrumentParties_51.insert(UnderlyingInstrumentPartyRole_51.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_51);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_114("STRING_1897597449");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_114);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114.insert(UnderlyingInstrumentPartySubID_114.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_114(2093980370);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_114);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114.insert(UnderlyingInstrumentPartySubIDType_114.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_115("STRING_331133663");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_115);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115.insert(UnderlyingInstrumentPartySubID_115.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_115(562706100);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_115);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115.insert(UnderlyingInstrumentPartySubIDType_115.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_52;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_52("STRING_2128656418");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_52);
      UndlyInstrumentParties_NoUndlyInstrumentParties_52.insert(UnderlyingInstrumentPartyID_52.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_52('6');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_52);
      UndlyInstrumentParties_NoUndlyInstrumentParties_52.insert(UnderlyingInstrumentPartyIDSource_52.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_52(693872101);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_52);
      UndlyInstrumentParties_NoUndlyInstrumentParties_52.insert(UnderlyingInstrumentPartyRole_52.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_52);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_116("STRING_421643835");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_116);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116.insert(UnderlyingInstrumentPartySubID_116.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_116(40471689);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_116);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116.insert(UnderlyingInstrumentPartySubIDType_116.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_117("STRING_1091213886");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_117);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117.insert(UnderlyingInstrumentPartySubID_117.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_117(708320146);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_117);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117.insert(UnderlyingInstrumentPartySubIDType_117.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_118("STRING_477210747");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_118);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118.insert(UnderlyingInstrumentPartySubID_118.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_118(1971674211);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_118);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118.insert(UnderlyingInstrumentPartySubIDType_118.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_26;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_26("DATA_1119655642");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingIssuer_26.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_26(320730016);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingIssuerLen_26.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_26("DATA_65983002");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingSecurityDesc_26.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_26(1848877232);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingSecurityDescLen_26.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_26;
    UnderlyingAdjustedQuantity_26.setString("1534248");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_26);
    UnderlyingInstrument_26.insert(UnderlyingAdjustedQuantity_26.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_26;
    UnderlyingAllocationPercent_26.setString("89.970000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_26);
    UnderlyingInstrument_26.insert(UnderlyingAllocationPercent_26.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_26;
    UnderlyingAttachmentPoint_26.setString("96.330000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_26);
    UnderlyingInstrument_26.insert(UnderlyingAttachmentPoint_26.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_26("STRING_1333411670");
    noUnderlyings_0_1.set(UnderlyingCFICode_26);
    UnderlyingInstrument_26.insert(UnderlyingCFICode_26.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_26("STRING_1839334960");
    noUnderlyings_0_1.set(UnderlyingCPProgram_26);
    UnderlyingInstrument_26.insert(UnderlyingCPProgram_26.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_26("STRING_2068658425");
    noUnderlyings_0_1.set(UnderlyingCPRegType_26);
    UnderlyingInstrument_26.insert(UnderlyingCPRegType_26.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_26;
    UnderlyingCapValue_26.setString("9692470");
    noUnderlyings_0_1.set(UnderlyingCapValue_26);
    UnderlyingInstrument_26.insert(UnderlyingCapValue_26.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_26;
    UnderlyingCashAmount_26.setString("4411430");
    noUnderlyings_0_1.set(UnderlyingCashAmount_26);
    UnderlyingInstrument_26.insert(UnderlyingCashAmount_26.getString());
    FIX::UnderlyingCashType UnderlyingCashType_26("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_26);
    UnderlyingInstrument_26.insert(UnderlyingCashType_26.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_26;
    UnderlyingContractMultiplier_26.setString("4098980");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_26);
    UnderlyingInstrument_26.insert(UnderlyingContractMultiplier_26.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_26(246371452);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_26);
    UnderlyingInstrument_26.insert(UnderlyingContractMultiplierUnit_26.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_26("COUNTRY_2038492895");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_26);
    UnderlyingInstrument_26.insert(UnderlyingCountryOfIssue_26.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_26("LOCALMKTDATE_778286082");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_26);
    UnderlyingInstrument_26.insert(UnderlyingCouponPaymentDate_26.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_26;
    UnderlyingCouponRate_26.setString("89.010000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_26);
    UnderlyingInstrument_26.insert(UnderlyingCouponRate_26.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_26("STRING_1984989618");
    noUnderlyings_0_1.set(UnderlyingCreditRating_26);
    UnderlyingInstrument_26.insert(UnderlyingCreditRating_26.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_26("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_26);
    UnderlyingInstrument_26.insert(UnderlyingCurrency_26.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_26;
    UnderlyingCurrentValue_26.setString("19661623");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_26);
    UnderlyingInstrument_26.insert(UnderlyingCurrentValue_26.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_26;
    UnderlyingDetachmentPoint_26.setString("18.840000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_26);
    UnderlyingInstrument_26.insert(UnderlyingDetachmentPoint_26.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_26;
    UnderlyingDirtyPrice_26.setString("12530634");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_26);
    UnderlyingInstrument_26.insert(UnderlyingDirtyPrice_26.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_26;
    UnderlyingEndPrice_26.setString("5775834");
    noUnderlyings_0_1.set(UnderlyingEndPrice_26);
    UnderlyingInstrument_26.insert(UnderlyingEndPrice_26.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_26;
    UnderlyingEndValue_26.setString("669020");
    noUnderlyings_0_1.set(UnderlyingEndValue_26);
    UnderlyingInstrument_26.insert(UnderlyingEndValue_26.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_26(1293535143);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_26);
    UnderlyingInstrument_26.insert(UnderlyingExerciseStyle_26.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_26;
    UnderlyingFXRate_26.setString("16687973");
    noUnderlyings_0_1.set(UnderlyingFXRate_26);
    UnderlyingInstrument_26.insert(UnderlyingFXRate_26.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_26('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_26);
    UnderlyingInstrument_26.insert(UnderlyingFXRateCalc_26.getString());
    FIX::UnderlyingFactor UnderlyingFactor_26;
    UnderlyingFactor_26.setString("17707458");
    noUnderlyings_0_1.set(UnderlyingFactor_26);
    UnderlyingInstrument_26.insert(UnderlyingFactor_26.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_26(1492987879);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_26);
    UnderlyingInstrument_26.insert(UnderlyingFlowScheduleType_26.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_26("STRING_1894877860");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_26);
    UnderlyingInstrument_26.insert(UnderlyingInstrRegistry_26.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_26("LOCALMKTDATE_2091475907");
    noUnderlyings_0_1.set(UnderlyingIssueDate_26);
    UnderlyingInstrument_26.insert(UnderlyingIssueDate_26.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_26("STRING_1558970881");
    noUnderlyings_0_1.set(UnderlyingIssuer_26);
    UnderlyingInstrument_26.insert(UnderlyingIssuer_26.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_26("STRING_1596271444");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_26);
    UnderlyingInstrument_26.insert(UnderlyingLocaleOfIssue_26.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_26("LOCALMKTDATE_97417114");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_26);
    UnderlyingInstrument_26.insert(UnderlyingMaturityDate_26.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_26("MONTHYEAR_1089556230");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_26);
    UnderlyingInstrument_26.insert(UnderlyingMaturityMonthYear_26.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_26("TZTIMEONLY_946277429");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_26);
    UnderlyingInstrument_26.insert(UnderlyingMaturityTime_26.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_26;
    UnderlyingNotionalPercentageOutstanding_26.setString("87.850000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_26);
    UnderlyingInstrument_26.insert(UnderlyingNotionalPercentageOutstanding_26.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_26('7');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_26);
    UnderlyingInstrument_26.insert(UnderlyingOptAttribute_26.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_26;
    UnderlyingOriginalNotionalPercentageOutstanding_26.setString("22.060000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_26);
    UnderlyingInstrument_26.insert(UnderlyingOriginalNotionalPercentageOutstanding_26.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_26("STRING_252592214");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_26);
    UnderlyingInstrument_26.insert(UnderlyingPriceUnitOfMeasure_26.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_26;
    UnderlyingPriceUnitOfMeasureQty_26.setString("12225506");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_26);
    UnderlyingInstrument_26.insert(UnderlyingPriceUnitOfMeasureQty_26.getString());
    FIX::UnderlyingProduct UnderlyingProduct_26(380434873);
    noUnderlyings_0_1.set(UnderlyingProduct_26);
    UnderlyingInstrument_26.insert(UnderlyingProduct_26.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_26(662490281);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_26);
    UnderlyingInstrument_26.insert(UnderlyingPutOrCall_26.getString());
    FIX::UnderlyingPx UnderlyingPx_26;
    UnderlyingPx_26.setString("14689220");
    noUnderlyings_0_1.set(UnderlyingPx_26);
    UnderlyingInstrument_26.insert(UnderlyingPx_26.getString());
    FIX::UnderlyingQty UnderlyingQty_26;
    UnderlyingQty_26.setString("2714441");
    noUnderlyings_0_1.set(UnderlyingQty_26);
    UnderlyingInstrument_26.insert(UnderlyingQty_26.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_26("LOCALMKTDATE_1440776363");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_26);
    UnderlyingInstrument_26.insert(UnderlyingRedemptionDate_26.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_26("STRING_1465407319");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_26);
    UnderlyingInstrument_26.insert(UnderlyingRepoCollateralSecurityType_26.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_26;
    UnderlyingRepurchaseRate_26.setString("0.900000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_26);
    UnderlyingInstrument_26.insert(UnderlyingRepurchaseRate_26.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_26(402712461);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_26);
    UnderlyingInstrument_26.insert(UnderlyingRepurchaseTerm_26.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_26("STRING_2024598672");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_26);
    UnderlyingInstrument_26.insert(UnderlyingRestructuringType_26.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_26("STRING_2075112478");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityDesc_26.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_26("EXCHANGE_47970697");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityExchange_26.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_26("STRING_1130178479");
    noUnderlyings_0_1.set(UnderlyingSecurityID_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityID_26.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_26("STRING_505212259");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityIDSource_26.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_26("STRING_114872768");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_26);
    UnderlyingInstrument_26.insert(UnderlyingSecuritySubType_26.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_26("STRING_276229974");
    noUnderlyings_0_1.set(UnderlyingSecurityType_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityType_26.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_26("STRING_26525927");
    noUnderlyings_0_1.set(UnderlyingSeniority_26);
    UnderlyingInstrument_26.insert(UnderlyingSeniority_26.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_26("STRING_890094986");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_26);
    UnderlyingInstrument_26.insert(UnderlyingSettlMethod_26.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_26(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_26);
    UnderlyingInstrument_26.insert(UnderlyingSettlementType_26.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_26;
    UnderlyingStartValue_26.setString("15195138");
    noUnderlyings_0_1.set(UnderlyingStartValue_26);
    UnderlyingInstrument_26.insert(UnderlyingStartValue_26.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_26("STRING_637489198");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_26);
    UnderlyingInstrument_26.insert(UnderlyingStateOrProvinceOfIssue_26.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_26("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_26);
    UnderlyingInstrument_26.insert(UnderlyingStrikeCurrency_26.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_26;
    UnderlyingStrikePrice_26.setString("862769");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_26);
    UnderlyingInstrument_26.insert(UnderlyingStrikePrice_26.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_26("STRING_2088385239");
    noUnderlyings_0_1.set(UnderlyingSymbol_26);
    UnderlyingInstrument_26.insert(UnderlyingSymbol_26.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_26("STRING_2020557270");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_26);
    UnderlyingInstrument_26.insert(UnderlyingSymbolSfx_26.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_26("STRING_1032554424");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_26);
    UnderlyingInstrument_26.insert(UnderlyingTimeUnit_26.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_26("STRING_1371730376");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_26);
    UnderlyingInstrument_26.insert(UnderlyingUnitOfMeasure_26.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_26;
    UnderlyingUnitOfMeasureQty_26.setString("6544811");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_26);
    UnderlyingInstrument_26.insert(UnderlyingUnitOfMeasureQty_26.getString());
    all_values.push_back(UnderlyingInstrument_26);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_55;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_55("STRING_1624322590");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_55);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_55.insert(UnderlyingSecurityAltID_55.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_55("STRING_1877031778");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_55);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_55.insert(UnderlyingSecurityAltIDSource_55.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_55);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_56;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_56("STRING_132957855");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_56);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_56.insert(UnderlyingSecurityAltID_56.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_56("STRING_139329223");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_56);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_56.insert(UnderlyingSecurityAltIDSource_56.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_56);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_48;
      FIX::UnderlyingStipType UnderlyingStipType_48("STRING_404401976");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_48);
      UnderlyingStipulations_NoUnderlyingStips_48.insert(UnderlyingStipType_48.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_48("STRING_1580105587");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_48);
      UnderlyingStipulations_NoUnderlyingStips_48.insert(UnderlyingStipValue_48.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_48);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_53;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_53("STRING_513352066");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_53);
      UndlyInstrumentParties_NoUndlyInstrumentParties_53.insert(UnderlyingInstrumentPartyID_53.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_53('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_53);
      UndlyInstrumentParties_NoUndlyInstrumentParties_53.insert(UnderlyingInstrumentPartyIDSource_53.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_53(393508891);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_53);
      UndlyInstrumentParties_NoUndlyInstrumentParties_53.insert(UnderlyingInstrumentPartyRole_53.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_53);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_119("STRING_2030788746");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_119);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119.insert(UnderlyingInstrumentPartySubID_119.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_119(1523687370);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_119);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119.insert(UnderlyingInstrumentPartySubIDType_119.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_120("STRING_946193156");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_120);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120.insert(UnderlyingInstrumentPartySubID_120.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_120(2145661514);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_120);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120.insert(UnderlyingInstrumentPartySubIDType_120.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_54;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_54("STRING_1799917344");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_54);
      UndlyInstrumentParties_NoUndlyInstrumentParties_54.insert(UnderlyingInstrumentPartyID_54.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_54('9');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_54);
      UndlyInstrumentParties_NoUndlyInstrumentParties_54.insert(UnderlyingInstrumentPartyIDSource_54.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_54(888272852);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_54);
      UndlyInstrumentParties_NoUndlyInstrumentParties_54.insert(UnderlyingInstrumentPartyRole_54.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_54);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_121("STRING_344749241");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_121);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121.insert(UnderlyingInstrumentPartySubID_121.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_121(1525762050);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_121);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121.insert(UnderlyingInstrumentPartySubIDType_121.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_55;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_55("STRING_1542894038");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_55);
      UndlyInstrumentParties_NoUndlyInstrumentParties_55.insert(UnderlyingInstrumentPartyID_55.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_55('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_55);
      UndlyInstrumentParties_NoUndlyInstrumentParties_55.insert(UnderlyingInstrumentPartyIDSource_55.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_55(1612039045);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_55);
      UndlyInstrumentParties_NoUndlyInstrumentParties_55.insert(UnderlyingInstrumentPartyRole_55.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_55);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_122("STRING_1148823903");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_122);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122.insert(UnderlyingInstrumentPartySubID_122.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_122(497109821);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_122);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122.insert(UnderlyingInstrumentPartySubIDType_122.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_27;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_27("DATA_708042357");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingIssuer_27.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_27(1803305068);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingIssuerLen_27.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_27("DATA_249632803");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingSecurityDesc_27.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_27(184881300);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingSecurityDescLen_27.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_27;
    UnderlyingAdjustedQuantity_27.setString("15328531");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_27);
    UnderlyingInstrument_27.insert(UnderlyingAdjustedQuantity_27.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_27;
    UnderlyingAllocationPercent_27.setString("6.590000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_27);
    UnderlyingInstrument_27.insert(UnderlyingAllocationPercent_27.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_27;
    UnderlyingAttachmentPoint_27.setString("5.230000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_27);
    UnderlyingInstrument_27.insert(UnderlyingAttachmentPoint_27.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_27("STRING_583839745");
    noUnderlyings_0_2.set(UnderlyingCFICode_27);
    UnderlyingInstrument_27.insert(UnderlyingCFICode_27.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_27("STRING_786992635");
    noUnderlyings_0_2.set(UnderlyingCPProgram_27);
    UnderlyingInstrument_27.insert(UnderlyingCPProgram_27.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_27("STRING_1904316110");
    noUnderlyings_0_2.set(UnderlyingCPRegType_27);
    UnderlyingInstrument_27.insert(UnderlyingCPRegType_27.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_27;
    UnderlyingCapValue_27.setString("11002336");
    noUnderlyings_0_2.set(UnderlyingCapValue_27);
    UnderlyingInstrument_27.insert(UnderlyingCapValue_27.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_27;
    UnderlyingCashAmount_27.setString("13003447");
    noUnderlyings_0_2.set(UnderlyingCashAmount_27);
    UnderlyingInstrument_27.insert(UnderlyingCashAmount_27.getString());
    FIX::UnderlyingCashType UnderlyingCashType_27("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_27);
    UnderlyingInstrument_27.insert(UnderlyingCashType_27.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_27;
    UnderlyingContractMultiplier_27.setString("14937425");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_27);
    UnderlyingInstrument_27.insert(UnderlyingContractMultiplier_27.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_27(1741325598);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_27);
    UnderlyingInstrument_27.insert(UnderlyingContractMultiplierUnit_27.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_27("COUNTRY_1622955609");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_27);
    UnderlyingInstrument_27.insert(UnderlyingCountryOfIssue_27.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_27("LOCALMKTDATE_869946225");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_27);
    UnderlyingInstrument_27.insert(UnderlyingCouponPaymentDate_27.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_27;
    UnderlyingCouponRate_27.setString("51.070000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_27);
    UnderlyingInstrument_27.insert(UnderlyingCouponRate_27.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_27("STRING_1621133475");
    noUnderlyings_0_2.set(UnderlyingCreditRating_27);
    UnderlyingInstrument_27.insert(UnderlyingCreditRating_27.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_27("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_27);
    UnderlyingInstrument_27.insert(UnderlyingCurrency_27.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_27;
    UnderlyingCurrentValue_27.setString("3619226");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_27);
    UnderlyingInstrument_27.insert(UnderlyingCurrentValue_27.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_27;
    UnderlyingDetachmentPoint_27.setString("58.350000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_27);
    UnderlyingInstrument_27.insert(UnderlyingDetachmentPoint_27.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_27;
    UnderlyingDirtyPrice_27.setString("18575034");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_27);
    UnderlyingInstrument_27.insert(UnderlyingDirtyPrice_27.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_27;
    UnderlyingEndPrice_27.setString("18876847");
    noUnderlyings_0_2.set(UnderlyingEndPrice_27);
    UnderlyingInstrument_27.insert(UnderlyingEndPrice_27.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_27;
    UnderlyingEndValue_27.setString("16171998");
    noUnderlyings_0_2.set(UnderlyingEndValue_27);
    UnderlyingInstrument_27.insert(UnderlyingEndValue_27.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_27(985770065);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_27);
    UnderlyingInstrument_27.insert(UnderlyingExerciseStyle_27.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_27;
    UnderlyingFXRate_27.setString("13522401");
    noUnderlyings_0_2.set(UnderlyingFXRate_27);
    UnderlyingInstrument_27.insert(UnderlyingFXRate_27.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_27('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_27);
    UnderlyingInstrument_27.insert(UnderlyingFXRateCalc_27.getString());
    FIX::UnderlyingFactor UnderlyingFactor_27;
    UnderlyingFactor_27.setString("21345939");
    noUnderlyings_0_2.set(UnderlyingFactor_27);
    UnderlyingInstrument_27.insert(UnderlyingFactor_27.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_27(1849349948);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_27);
    UnderlyingInstrument_27.insert(UnderlyingFlowScheduleType_27.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_27("STRING_1661554213");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_27);
    UnderlyingInstrument_27.insert(UnderlyingInstrRegistry_27.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_27("LOCALMKTDATE_1790415388");
    noUnderlyings_0_2.set(UnderlyingIssueDate_27);
    UnderlyingInstrument_27.insert(UnderlyingIssueDate_27.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_27("STRING_2098982752");
    noUnderlyings_0_2.set(UnderlyingIssuer_27);
    UnderlyingInstrument_27.insert(UnderlyingIssuer_27.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_27("STRING_1846435513");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_27);
    UnderlyingInstrument_27.insert(UnderlyingLocaleOfIssue_27.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_27("LOCALMKTDATE_1175784938");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_27);
    UnderlyingInstrument_27.insert(UnderlyingMaturityDate_27.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_27("MONTHYEAR_334089763");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_27);
    UnderlyingInstrument_27.insert(UnderlyingMaturityMonthYear_27.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_27("TZTIMEONLY_23162388");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_27);
    UnderlyingInstrument_27.insert(UnderlyingMaturityTime_27.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_27;
    UnderlyingNotionalPercentageOutstanding_27.setString("46.830000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_27);
    UnderlyingInstrument_27.insert(UnderlyingNotionalPercentageOutstanding_27.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_27('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_27);
    UnderlyingInstrument_27.insert(UnderlyingOptAttribute_27.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_27;
    UnderlyingOriginalNotionalPercentageOutstanding_27.setString("84.990000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_27);
    UnderlyingInstrument_27.insert(UnderlyingOriginalNotionalPercentageOutstanding_27.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_27("STRING_712374647");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_27);
    UnderlyingInstrument_27.insert(UnderlyingPriceUnitOfMeasure_27.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_27;
    UnderlyingPriceUnitOfMeasureQty_27.setString("2739434");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_27);
    UnderlyingInstrument_27.insert(UnderlyingPriceUnitOfMeasureQty_27.getString());
    FIX::UnderlyingProduct UnderlyingProduct_27(1519645362);
    noUnderlyings_0_2.set(UnderlyingProduct_27);
    UnderlyingInstrument_27.insert(UnderlyingProduct_27.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_27(58633502);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_27);
    UnderlyingInstrument_27.insert(UnderlyingPutOrCall_27.getString());
    FIX::UnderlyingPx UnderlyingPx_27;
    UnderlyingPx_27.setString("20152690");
    noUnderlyings_0_2.set(UnderlyingPx_27);
    UnderlyingInstrument_27.insert(UnderlyingPx_27.getString());
    FIX::UnderlyingQty UnderlyingQty_27;
    UnderlyingQty_27.setString("9951173");
    noUnderlyings_0_2.set(UnderlyingQty_27);
    UnderlyingInstrument_27.insert(UnderlyingQty_27.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_27("LOCALMKTDATE_928579727");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_27);
    UnderlyingInstrument_27.insert(UnderlyingRedemptionDate_27.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_27("STRING_407820509");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_27);
    UnderlyingInstrument_27.insert(UnderlyingRepoCollateralSecurityType_27.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_27;
    UnderlyingRepurchaseRate_27.setString("71.500000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_27);
    UnderlyingInstrument_27.insert(UnderlyingRepurchaseRate_27.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_27(1450959649);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_27);
    UnderlyingInstrument_27.insert(UnderlyingRepurchaseTerm_27.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_27("STRING_1920574699");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_27);
    UnderlyingInstrument_27.insert(UnderlyingRestructuringType_27.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_27("STRING_830689830");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityDesc_27.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_27("EXCHANGE_1525265484");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityExchange_27.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_27("STRING_1630594483");
    noUnderlyings_0_2.set(UnderlyingSecurityID_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityID_27.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_27("STRING_570890913");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityIDSource_27.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_27("STRING_994981710");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_27);
    UnderlyingInstrument_27.insert(UnderlyingSecuritySubType_27.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_27("STRING_468880900");
    noUnderlyings_0_2.set(UnderlyingSecurityType_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityType_27.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_27("STRING_1923131040");
    noUnderlyings_0_2.set(UnderlyingSeniority_27);
    UnderlyingInstrument_27.insert(UnderlyingSeniority_27.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_27("STRING_1948493566");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_27);
    UnderlyingInstrument_27.insert(UnderlyingSettlMethod_27.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_27(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_27);
    UnderlyingInstrument_27.insert(UnderlyingSettlementType_27.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_27;
    UnderlyingStartValue_27.setString("16249973");
    noUnderlyings_0_2.set(UnderlyingStartValue_27);
    UnderlyingInstrument_27.insert(UnderlyingStartValue_27.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_27("STRING_1462564131");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_27);
    UnderlyingInstrument_27.insert(UnderlyingStateOrProvinceOfIssue_27.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_27("CHF");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_27);
    UnderlyingInstrument_27.insert(UnderlyingStrikeCurrency_27.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_27;
    UnderlyingStrikePrice_27.setString("11615159");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_27);
    UnderlyingInstrument_27.insert(UnderlyingStrikePrice_27.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_27("STRING_1274707898");
    noUnderlyings_0_2.set(UnderlyingSymbol_27);
    UnderlyingInstrument_27.insert(UnderlyingSymbol_27.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_27("STRING_1910586208");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_27);
    UnderlyingInstrument_27.insert(UnderlyingSymbolSfx_27.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_27("STRING_1184678384");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_27);
    UnderlyingInstrument_27.insert(UnderlyingTimeUnit_27.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_27("STRING_886848934");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_27);
    UnderlyingInstrument_27.insert(UnderlyingUnitOfMeasure_27.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_27;
    UnderlyingUnitOfMeasureQty_27.setString("8841849");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_27);
    UnderlyingInstrument_27.insert(UnderlyingUnitOfMeasureQty_27.getString());
    all_values.push_back(UnderlyingInstrument_27);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_57;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_57("STRING_1599223581");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_57);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_57.insert(UnderlyingSecurityAltID_57.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_57("STRING_1158128409");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_57);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_57.insert(UnderlyingSecurityAltIDSource_57.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_57);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_49;
      FIX::UnderlyingStipType UnderlyingStipType_49("STRING_1657857084");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_49);
      UnderlyingStipulations_NoUnderlyingStips_49.insert(UnderlyingStipType_49.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_49("STRING_1025913811");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_49);
      UnderlyingStipulations_NoUnderlyingStips_49.insert(UnderlyingStipValue_49.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_49);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_50;
      FIX::UnderlyingStipType UnderlyingStipType_50("STRING_1331952272");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_50);
      UnderlyingStipulations_NoUnderlyingStips_50.insert(UnderlyingStipType_50.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_50("STRING_438953163");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_50);
      UnderlyingStipulations_NoUnderlyingStips_50.insert(UnderlyingStipValue_50.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_50);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_56;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_56("STRING_1800719423");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_56);
      UndlyInstrumentParties_NoUndlyInstrumentParties_56.insert(UnderlyingInstrumentPartyID_56.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_56('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_56);
      UndlyInstrumentParties_NoUndlyInstrumentParties_56.insert(UnderlyingInstrumentPartyIDSource_56.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_56(1206825372);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_56);
      UndlyInstrumentParties_NoUndlyInstrumentParties_56.insert(UnderlyingInstrumentPartyRole_56.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_56);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_123("STRING_1267694649");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_123);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123.insert(UnderlyingInstrumentPartySubID_123.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_123(689936207);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_123);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123.insert(UnderlyingInstrumentPartySubIDType_123.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
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
