#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/News.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( News, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::News msg;

  list<multiset<string>> all_values;
  multiset<string> News_0;
  FIX::EncodedHeadline EncodedHeadline_0("DATA_1244641719");
  msg.set(EncodedHeadline_0);
  News_0.insert(EncodedHeadline_0.getString());
  FIX::EncodedHeadlineLen EncodedHeadlineLen_0(1516020659);
  msg.set(EncodedHeadlineLen_0);
  News_0.insert(EncodedHeadlineLen_0.getString());
  FIX::Headline Headline_0("STRING_48302577");
  msg.set(Headline_0);
  News_0.insert(Headline_0.getString());
  FIX::LanguageCode LanguageCode_0("FR");
  msg.set(LanguageCode_0);
  News_0.insert(LanguageCode_0.getString());
  FIX::MarketID MarketID_7("EXCHANGE_678324974");
  msg.set(MarketID_7);
  News_0.insert(MarketID_7.getString());
  FIX::MarketSegmentID MarketSegmentID_7("STRING_559844843");
  msg.set(MarketSegmentID_7);
  News_0.insert(MarketSegmentID_7.getString());
  FIX::NewsCategory NewsCategory_0(3);
  msg.set(NewsCategory_0);
  News_0.insert(NewsCategory_0.getString());
  FIX::NewsID NewsID_0("STRING_73555588");
  msg.set(NewsID_0);
  News_0.insert(NewsID_0.getString());
  FIX::OrigTime OrigTime_1(FIX::UTCTIMESTAMP(13, 14, 16, 14, 9, 2016));
  msg.set(OrigTime_1);
  News_0.insert(OrigTime_1.getString());
  FIX::RawData RawData_1("DATA_694217364");
  msg.set(RawData_1);
  News_0.insert(RawData_1.getString());
  FIX::RawDataLength RawDataLength_1(175315026);
  msg.set(RawDataLength_1);
  News_0.insert(RawDataLength_1.getString());
  FIX::URLLink URLLink_2("STRING_1311044201");
  msg.set(URLLink_2);
  News_0.insert(URLLink_2.getString());
  FIX::Urgency Urgency_0('0');
  msg.set(Urgency_0);
  News_0.insert(Urgency_0.getString());
  all_values.push_back(News_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_10;
  FIX::ApplID ApplID_10("STRING_2066475232");
  msg.set(ApplID_10);
  ApplicationSequenceControl_10.insert(ApplID_10.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_10(2063371781);
  msg.set(ApplLastSeqNum_10);
  ApplicationSequenceControl_10.insert(ApplLastSeqNum_10.getString());
  FIX::ApplResendFlag ApplResendFlag_10(true);
  msg.set(ApplResendFlag_10);
  ApplicationSequenceControl_10.insert(ApplResendFlag_10.getString());
  FIX::ApplSeqNum ApplSeqNum_10(375844180);
  msg.set(ApplSeqNum_10);
  ApplicationSequenceControl_10.insert(ApplSeqNum_10.getString());
  all_values.push_back(ApplicationSequenceControl_10);

  // InstrmtGrp
  // Group InstrmtGrp.NoRelatedSym
  {
    FIX50SP2::News::NoRelatedSym noRelatedSym_0_0;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_51;
    FIX::AttachmentPoint AttachmentPoint_51;
    AttachmentPoint_51.setString("20.130000");
    noRelatedSym_0_0.set(AttachmentPoint_51);
    Instrument_51.insert(AttachmentPoint_51.getString());
    FIX::CFICode CFICode_51("STRING_1047274923");
    noRelatedSym_0_0.set(CFICode_51);
    Instrument_51.insert(CFICode_51.getString());
    FIX::CPProgram CPProgram_51(99);
    noRelatedSym_0_0.set(CPProgram_51);
    Instrument_51.insert(CPProgram_51.getString());
    FIX::CPRegType CPRegType_51("STRING_454207244");
    noRelatedSym_0_0.set(CPRegType_51);
    Instrument_51.insert(CPRegType_51.getString());
    FIX::CapPrice CapPrice_51;
    CapPrice_51.setString("11276735");
    noRelatedSym_0_0.set(CapPrice_51);
    Instrument_51.insert(CapPrice_51.getString());
    FIX::ContractMultiplier ContractMultiplier_51;
    ContractMultiplier_51.setString("4036400");
    noRelatedSym_0_0.set(ContractMultiplier_51);
    Instrument_51.insert(ContractMultiplier_51.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_51(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_51);
    Instrument_51.insert(ContractMultiplierUnit_51.getString());
    FIX::ContractSettlMonth ContractSettlMonth_51("MONTHYEAR_224831594");
    noRelatedSym_0_0.set(ContractSettlMonth_51);
    Instrument_51.insert(ContractSettlMonth_51.getString());
    FIX::CountryOfIssue CountryOfIssue_51("COUNTRY_1919660721");
    noRelatedSym_0_0.set(CountryOfIssue_51);
    Instrument_51.insert(CountryOfIssue_51.getString());
    FIX::CouponPaymentDate CouponPaymentDate_51("LOCALMKTDATE_423194536");
    noRelatedSym_0_0.set(CouponPaymentDate_51);
    Instrument_51.insert(CouponPaymentDate_51.getString());
    FIX::CouponRate CouponRate_51;
    CouponRate_51.setString("21.490000");
    noRelatedSym_0_0.set(CouponRate_51);
    Instrument_51.insert(CouponRate_51.getString());
    FIX::CreditRating CreditRating_51("STRING_450502047");
    noRelatedSym_0_0.set(CreditRating_51);
    Instrument_51.insert(CreditRating_51.getString());
    FIX::DatedDate DatedDate_51("LOCALMKTDATE_983039379");
    noRelatedSym_0_0.set(DatedDate_51);
    Instrument_51.insert(DatedDate_51.getString());
    FIX::DetachmentPoint DetachmentPoint_51;
    DetachmentPoint_51.setString("48.290000");
    noRelatedSym_0_0.set(DetachmentPoint_51);
    Instrument_51.insert(DetachmentPoint_51.getString());
    FIX::EncodedIssuer EncodedIssuer_51("DATA_524057636");
    noRelatedSym_0_0.set(EncodedIssuer_51);
    Instrument_51.insert(EncodedIssuer_51.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_51(1523916453);
    noRelatedSym_0_0.set(EncodedIssuerLen_51);
    Instrument_51.insert(EncodedIssuerLen_51.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_51("DATA_1339790722");
    noRelatedSym_0_0.set(EncodedSecurityDesc_51);
    Instrument_51.insert(EncodedSecurityDesc_51.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_51(94957202);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_51);
    Instrument_51.insert(EncodedSecurityDescLen_51.getString());
    FIX::ExerciseStyle ExerciseStyle_51(2);
    noRelatedSym_0_0.set(ExerciseStyle_51);
    Instrument_51.insert(ExerciseStyle_51.getString());
    FIX::Factor Factor_51;
    Factor_51.setString("18181214");
    noRelatedSym_0_0.set(Factor_51);
    Instrument_51.insert(Factor_51.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_51(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_51);
    Instrument_51.insert(FlexProductEligibilityIndicator_51.getString());
    FIX::FlexibleIndicator FlexibleIndicator_51(true);
    noRelatedSym_0_0.set(FlexibleIndicator_51);
    Instrument_51.insert(FlexibleIndicator_51.getString());
    FIX::FloorPrice FloorPrice_51;
    FloorPrice_51.setString("3648551");
    noRelatedSym_0_0.set(FloorPrice_51);
    Instrument_51.insert(FloorPrice_51.getString());
    FIX::FlowScheduleType FlowScheduleType_51(1);
    noRelatedSym_0_0.set(FlowScheduleType_51);
    Instrument_51.insert(FlowScheduleType_51.getString());
    FIX::InstrRegistry InstrRegistry_51("STRING_120887989");
    noRelatedSym_0_0.set(InstrRegistry_51);
    Instrument_51.insert(InstrRegistry_51.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_51('4');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_51);
    Instrument_51.insert(InstrmtAssignmentMethod_51.getString());
    FIX::InterestAccrualDate InterestAccrualDate_51("LOCALMKTDATE_1370229206");
    noRelatedSym_0_0.set(InterestAccrualDate_51);
    Instrument_51.insert(InterestAccrualDate_51.getString());
    FIX::IssueDate IssueDate_51("LOCALMKTDATE_36776122");
    noRelatedSym_0_0.set(IssueDate_51);
    Instrument_51.insert(IssueDate_51.getString());
    FIX::Issuer Issuer_51("STRING_1378992463");
    noRelatedSym_0_0.set(Issuer_51);
    Instrument_51.insert(Issuer_51.getString());
    FIX::ListMethod ListMethod_51(0);
    noRelatedSym_0_0.set(ListMethod_51);
    Instrument_51.insert(ListMethod_51.getString());
    FIX::LocaleOfIssue LocaleOfIssue_51("STRING_1717221928");
    noRelatedSym_0_0.set(LocaleOfIssue_51);
    Instrument_51.insert(LocaleOfIssue_51.getString());
    FIX::MaturityDate MaturityDate_51("LOCALMKTDATE_722800829");
    noRelatedSym_0_0.set(MaturityDate_51);
    Instrument_51.insert(MaturityDate_51.getString());
    FIX::MaturityMonthYear MaturityMonthYear_51("MONTHYEAR_645864662");
    noRelatedSym_0_0.set(MaturityMonthYear_51);
    Instrument_51.insert(MaturityMonthYear_51.getString());
    FIX::MaturityTime MaturityTime_51("TZTIMEONLY_2058228132");
    noRelatedSym_0_0.set(MaturityTime_51);
    Instrument_51.insert(MaturityTime_51.getString());
    FIX::MinPriceIncrement MinPriceIncrement_51;
    MinPriceIncrement_51.setString("11770080");
    noRelatedSym_0_0.set(MinPriceIncrement_51);
    Instrument_51.insert(MinPriceIncrement_51.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_51;
    MinPriceIncrementAmount_51.setString("17735381");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_51);
    Instrument_51.insert(MinPriceIncrementAmount_51.getString());
    FIX::NTPositionLimit NTPositionLimit_51(314384546);
    noRelatedSym_0_0.set(NTPositionLimit_51);
    Instrument_51.insert(NTPositionLimit_51.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_51;
    NotionalPercentageOutstanding_51.setString("0.310000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_51);
    Instrument_51.insert(NotionalPercentageOutstanding_51.getString());
    FIX::OptAttribute OptAttribute_51('1');
    noRelatedSym_0_0.set(OptAttribute_51);
    Instrument_51.insert(OptAttribute_51.getString());
    FIX::OptPayoutAmount OptPayoutAmount_51;
    OptPayoutAmount_51.setString("865616");
    noRelatedSym_0_0.set(OptPayoutAmount_51);
    Instrument_51.insert(OptPayoutAmount_51.getString());
    FIX::OptPayoutType OptPayoutType_51(3);
    noRelatedSym_0_0.set(OptPayoutType_51);
    Instrument_51.insert(OptPayoutType_51.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_51;
    OriginalNotionalPercentageOutstanding_51.setString("82.800000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_51);
    Instrument_51.insert(OriginalNotionalPercentageOutstanding_51.getString());
    FIX::Pool Pool_51("STRING_537063667");
    noRelatedSym_0_0.set(Pool_51);
    Instrument_51.insert(Pool_51.getString());
    FIX::PositionLimit PositionLimit_51(810650298);
    noRelatedSym_0_0.set(PositionLimit_51);
    Instrument_51.insert(PositionLimit_51.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_51("STRING_INT");
    noRelatedSym_0_0.set(PriceQuoteMethod_51);
    Instrument_51.insert(PriceQuoteMethod_51.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_51("STRING_1061121303");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_51);
    Instrument_51.insert(PriceUnitOfMeasure_51.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_51;
    PriceUnitOfMeasureQty_51.setString("1870831");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_51);
    Instrument_51.insert(PriceUnitOfMeasureQty_51.getString());
    FIX::Product Product_53(10);
    noRelatedSym_0_0.set(Product_53);
    Instrument_51.insert(Product_53.getString());
    FIX::ProductComplex ProductComplex_51("STRING_1156078506");
    noRelatedSym_0_0.set(ProductComplex_51);
    Instrument_51.insert(ProductComplex_51.getString());
    FIX::PutOrCall PutOrCall_51(1);
    noRelatedSym_0_0.set(PutOrCall_51);
    Instrument_51.insert(PutOrCall_51.getString());
    FIX::RedemptionDate RedemptionDate_51("LOCALMKTDATE_920827937");
    noRelatedSym_0_0.set(RedemptionDate_51);
    Instrument_51.insert(RedemptionDate_51.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_51("STRING_284517453");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_51);
    Instrument_51.insert(RepoCollateralSecurityType_51.getString());
    FIX::RepurchaseRate RepurchaseRate_51;
    RepurchaseRate_51.setString("20.610000");
    noRelatedSym_0_0.set(RepurchaseRate_51);
    Instrument_51.insert(RepurchaseRate_51.getString());
    FIX::RepurchaseTerm RepurchaseTerm_51(1285683055);
    noRelatedSym_0_0.set(RepurchaseTerm_51);
    Instrument_51.insert(RepurchaseTerm_51.getString());
    FIX::RestructuringType RestructuringType_51("STRING_MM");
    noRelatedSym_0_0.set(RestructuringType_51);
    Instrument_51.insert(RestructuringType_51.getString());
    FIX::SecurityDesc SecurityDesc_51("STRING_1311760051");
    noRelatedSym_0_0.set(SecurityDesc_51);
    Instrument_51.insert(SecurityDesc_51.getString());
    FIX::SecurityExchange SecurityExchange_51("EXCHANGE_1729065534");
    noRelatedSym_0_0.set(SecurityExchange_51);
    Instrument_51.insert(SecurityExchange_51.getString());
    FIX::SecurityGroup SecurityGroup_51("STRING_958500632");
    noRelatedSym_0_0.set(SecurityGroup_51);
    Instrument_51.insert(SecurityGroup_51.getString());
    FIX::SecurityID SecurityID_51("STRING_1348536173");
    noRelatedSym_0_0.set(SecurityID_51);
    Instrument_51.insert(SecurityID_51.getString());
    FIX::SecurityIDSource SecurityIDSource_51("STRING_A");
    noRelatedSym_0_0.set(SecurityIDSource_51);
    Instrument_51.insert(SecurityIDSource_51.getString());
    FIX::SecurityStatus SecurityStatus_51("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_51);
    Instrument_51.insert(SecurityStatus_51.getString());
    FIX::SecuritySubType SecuritySubType_52("STRING_918274453");
    noRelatedSym_0_0.set(SecuritySubType_52);
    Instrument_51.insert(SecuritySubType_52.getString());
    FIX::SecurityType SecurityType_53("STRING_TBILL");
    noRelatedSym_0_0.set(SecurityType_53);
    Instrument_51.insert(SecurityType_53.getString());
    FIX::Seniority Seniority_51("STRING_SD");
    noRelatedSym_0_0.set(Seniority_51);
    Instrument_51.insert(Seniority_51.getString());
    FIX::SettlMethod SettlMethod_51('C');
    noRelatedSym_0_0.set(SettlMethod_51);
    Instrument_51.insert(SettlMethod_51.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_51("STRING_712899603");
    noRelatedSym_0_0.set(SettleOnOpenFlag_51);
    Instrument_51.insert(SettleOnOpenFlag_51.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_51("STRING_829009570");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_51);
    Instrument_51.insert(StateOrProvinceOfIssue_51.getString());
    FIX::StrikeCurrency StrikeCurrency_51("CHF");
    noRelatedSym_0_0.set(StrikeCurrency_51);
    Instrument_51.insert(StrikeCurrency_51.getString());
    FIX::StrikeMultiplier StrikeMultiplier_51;
    StrikeMultiplier_51.setString("6798957");
    noRelatedSym_0_0.set(StrikeMultiplier_51);
    Instrument_51.insert(StrikeMultiplier_51.getString());
    FIX::StrikePrice StrikePrice_51;
    StrikePrice_51.setString("12299651");
    noRelatedSym_0_0.set(StrikePrice_51);
    Instrument_51.insert(StrikePrice_51.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_51(5);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_51);
    Instrument_51.insert(StrikePriceBoundaryMethod_51.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_51;
    StrikePriceBoundaryPrecision_51.setString("39.820000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_51);
    Instrument_51.insert(StrikePriceBoundaryPrecision_51.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_51(1);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_51);
    Instrument_51.insert(StrikePriceDeterminationMethod_51.getString());
    FIX::StrikeValue StrikeValue_51;
    StrikeValue_51.setString("7555772");
    noRelatedSym_0_0.set(StrikeValue_51);
    Instrument_51.insert(StrikeValue_51.getString());
    FIX::Symbol Symbol_51("STRING_1823553444");
    noRelatedSym_0_0.set(Symbol_51);
    Instrument_51.insert(Symbol_51.getString());
    FIX::SymbolSfx SymbolSfx_51("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_51);
    Instrument_51.insert(SymbolSfx_51.getString());
    FIX::TimeUnit TimeUnit_51("STRING_D");
    noRelatedSym_0_0.set(TimeUnit_51);
    Instrument_51.insert(TimeUnit_51.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_51(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_51);
    Instrument_51.insert(UnderlyingPriceDeterminationMethod_51.getString());
    FIX::UnitOfMeasure UnitOfMeasure_51("STRING_tn");
    noRelatedSym_0_0.set(UnitOfMeasure_51);
    Instrument_51.insert(UnitOfMeasure_51.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_51;
    UnitOfMeasureQty_51.setString("11762049");
    noRelatedSym_0_0.set(UnitOfMeasureQty_51);
    Instrument_51.insert(UnitOfMeasureQty_51.getString());
    FIX::ValuationMethod ValuationMethod_51("STRING_CDS");
    noRelatedSym_0_0.set(ValuationMethod_51);
    Instrument_51.insert(ValuationMethod_51.getString());
    all_values.push_back(Instrument_51);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_98;
      FIX::ComplexEventCondition ComplexEventCondition_98(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_98);
      ComplexEvents_NoComplexEvents_98.insert(ComplexEventCondition_98.getString());
      FIX::ComplexEventPrice ComplexEventPrice_98;
      ComplexEventPrice_98.setString("9852873");
      noComplexEvents_0_1_0.set(ComplexEventPrice_98);
      ComplexEvents_NoComplexEvents_98.insert(ComplexEventPrice_98.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_98(4);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_98);
      ComplexEvents_NoComplexEvents_98.insert(ComplexEventPriceBoundaryMethod_98.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_98;
      ComplexEventPriceBoundaryPrecision_98.setString("33.990000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_98);
      ComplexEvents_NoComplexEvents_98.insert(ComplexEventPriceBoundaryPrecision_98.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_98(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_98);
      ComplexEvents_NoComplexEvents_98.insert(ComplexEventPriceTimeType_98.getString());
      FIX::ComplexEventType ComplexEventType_98(5);
      noComplexEvents_0_1_0.set(ComplexEventType_98);
      ComplexEvents_NoComplexEvents_98.insert(ComplexEventType_98.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_98;
      ComplexOptPayoutAmount_98.setString("7324059");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_98);
      ComplexEvents_NoComplexEvents_98.insert(ComplexOptPayoutAmount_98.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_98);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_202;
        FIX::ComplexEventEndDate ComplexEventEndDate_202(FIX::UTCTIMESTAMP(2, 31, 33, 8, 11, 2001));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_202);
        ComplexEventDates_NoComplexEventDates_202.insert(ComplexEventEndDate_202.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_202(FIX::UTCTIMESTAMP(1, 45, 49, 24, 8, 2007));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_202);
        ComplexEventDates_NoComplexEventDates_202.insert(ComplexEventStartDate_202.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_202);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_405;
          FIX::ComplexEventEndTime ComplexEventEndTime_405(FIX::UTCTIMEONLY(16, 34, 55));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_405);
          ComplexEventTimes_NoComplexEventTimes_405.insert(ComplexEventEndTime_405.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_405(FIX::UTCTIMEONLY(12, 25, 4));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_405);
          ComplexEventTimes_NoComplexEventTimes_405.insert(ComplexEventStartTime_405.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_405);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_406;
          FIX::ComplexEventEndTime ComplexEventEndTime_406(FIX::UTCTIMEONLY(18, 9, 39));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_406);
          ComplexEventTimes_NoComplexEventTimes_406.insert(ComplexEventEndTime_406.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_406(FIX::UTCTIMEONLY(11, 4, 26));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_406);
          ComplexEventTimes_NoComplexEventTimes_406.insert(ComplexEventStartTime_406.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_406);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_203;
        FIX::ComplexEventEndDate ComplexEventEndDate_203(FIX::UTCTIMESTAMP(22, 57, 29, 6, 12, 2004));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_203);
        ComplexEventDates_NoComplexEventDates_203.insert(ComplexEventEndDate_203.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_203(FIX::UTCTIMESTAMP(17, 41, 35, 9, 1, 2012));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_203);
        ComplexEventDates_NoComplexEventDates_203.insert(ComplexEventStartDate_203.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_203);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_407;
          FIX::ComplexEventEndTime ComplexEventEndTime_407(FIX::UTCTIMEONLY(17, 8, 15));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_407);
          ComplexEventTimes_NoComplexEventTimes_407.insert(ComplexEventEndTime_407.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_407(FIX::UTCTIMEONLY(8, 40, 31));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_407);
          ComplexEventTimes_NoComplexEventTimes_407.insert(ComplexEventStartTime_407.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_407);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_103;
      FIX::EventDate EventDate_103("LOCALMKTDATE_439940715");
      noEvents_0_1_0.set(EventDate_103);
      EvntGrp_NoEvents_103.insert(EventDate_103.getString());
      FIX::EventPx EventPx_103;
      EventPx_103.setString("5162725");
      noEvents_0_1_0.set(EventPx_103);
      EvntGrp_NoEvents_103.insert(EventPx_103.getString());
      FIX::EventText EventText_103("STRING_1388635736");
      noEvents_0_1_0.set(EventText_103);
      EvntGrp_NoEvents_103.insert(EventText_103.getString());
      FIX::EventTime EventTime_103(FIX::UTCTIMESTAMP(16, 0, 34, 3, 3, 2005));
      noEvents_0_1_0.set(EventTime_103);
      EvntGrp_NoEvents_103.insert(EventTime_103.getString());
      FIX::EventType EventType_103(17);
      noEvents_0_1_0.set(EventType_103);
      EvntGrp_NoEvents_103.insert(EventType_103.getString());
      all_values.push_back(EvntGrp_NoEvents_103);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_104;
      FIX::EventDate EventDate_104("LOCALMKTDATE_841226508");
      noEvents_0_1_1.set(EventDate_104);
      EvntGrp_NoEvents_104.insert(EventDate_104.getString());
      FIX::EventPx EventPx_104;
      EventPx_104.setString("4974547");
      noEvents_0_1_1.set(EventPx_104);
      EvntGrp_NoEvents_104.insert(EventPx_104.getString());
      FIX::EventText EventText_104("STRING_950904881");
      noEvents_0_1_1.set(EventText_104);
      EvntGrp_NoEvents_104.insert(EventText_104.getString());
      FIX::EventTime EventTime_104(FIX::UTCTIMESTAMP(8, 22, 10, 21, 4, 2017));
      noEvents_0_1_1.set(EventTime_104);
      EvntGrp_NoEvents_104.insert(EventTime_104.getString());
      FIX::EventType EventType_104(8);
      noEvents_0_1_1.set(EventType_104);
      EvntGrp_NoEvents_104.insert(EventType_104.getString());
      all_values.push_back(EvntGrp_NoEvents_104);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_105;
      FIX::EventDate EventDate_105("LOCALMKTDATE_926710422");
      noEvents_0_1_2.set(EventDate_105);
      EvntGrp_NoEvents_105.insert(EventDate_105.getString());
      FIX::EventPx EventPx_105;
      EventPx_105.setString("12511269");
      noEvents_0_1_2.set(EventPx_105);
      EvntGrp_NoEvents_105.insert(EventPx_105.getString());
      FIX::EventText EventText_105("STRING_1287475735");
      noEvents_0_1_2.set(EventText_105);
      EvntGrp_NoEvents_105.insert(EventText_105.getString());
      FIX::EventTime EventTime_105(FIX::UTCTIMESTAMP(11, 3, 30, 2, 1, 2009));
      noEvents_0_1_2.set(EventTime_105);
      EvntGrp_NoEvents_105.insert(EventTime_105.getString());
      FIX::EventType EventType_105(99);
      noEvents_0_1_2.set(EventType_105);
      EvntGrp_NoEvents_105.insert(EventType_105.getString());
      all_values.push_back(EvntGrp_NoEvents_105);

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_111;
      FIX::InstrumentPartyID InstrumentPartyID_111("STRING_996294405");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_111);
      InstrumentParties_NoInstrumentParties_111.insert(InstrumentPartyID_111.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_111('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_111);
      InstrumentParties_NoInstrumentParties_111.insert(InstrumentPartyIDSource_111.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_111(473011733);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_111);
      InstrumentParties_NoInstrumentParties_111.insert(InstrumentPartyRole_111.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_111);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234;
        FIX::InstrumentPartySubID InstrumentPartySubID_234("STRING_1738865915");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_234);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234.insert(InstrumentPartySubID_234.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_234(725004080);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_234);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234.insert(InstrumentPartySubIDType_234.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_112;
      FIX::InstrumentPartyID InstrumentPartyID_112("STRING_208415187");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_112);
      InstrumentParties_NoInstrumentParties_112.insert(InstrumentPartyID_112.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_112('2');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_112);
      InstrumentParties_NoInstrumentParties_112.insert(InstrumentPartyIDSource_112.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_112(1566230588);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_112);
      InstrumentParties_NoInstrumentParties_112.insert(InstrumentPartyRole_112.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_112);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235;
        FIX::InstrumentPartySubID InstrumentPartySubID_235("STRING_863846684");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_235);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235.insert(InstrumentPartySubID_235.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_235(177343115);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_235);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235.insert(InstrumentPartySubIDType_235.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_113;
      FIX::SecurityAltID SecurityAltID_113("STRING_1938631087");
      noSecurityAltID_0_1_0.set(SecurityAltID_113);
      SecAltIDGrp_NoSecurityAltID_113.insert(SecurityAltID_113.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_113("STRING_1411409566");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_113);
      SecAltIDGrp_NoSecurityAltID_113.insert(SecurityAltIDSource_113.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_113);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_114;
      FIX::SecurityAltID SecurityAltID_114("STRING_2041514287");
      noSecurityAltID_0_1_1.set(SecurityAltID_114);
      SecAltIDGrp_NoSecurityAltID_114.insert(SecurityAltID_114.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_114("STRING_250015874");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_114);
      SecAltIDGrp_NoSecurityAltID_114.insert(SecurityAltIDSource_114.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_114);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_115;
      FIX::SecurityAltID SecurityAltID_115("STRING_1151108377");
      noSecurityAltID_0_1_2.set(SecurityAltID_115);
      SecAltIDGrp_NoSecurityAltID_115.insert(SecurityAltID_115.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_115("STRING_869785306");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_115);
      SecAltIDGrp_NoSecurityAltID_115.insert(SecurityAltIDSource_115.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_115);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_102;
    FIX::SecurityXML SecurityXML_103("XMLDATA_1176726296");
    noRelatedSym_0_0.set(SecurityXML_103);
    FIX::SecurityXMLLen SecurityXMLLen_51(254751709);
    noRelatedSym_0_0.set(SecurityXMLLen_51);
    FIX::SecurityXMLSchema SecurityXMLSchema_51("STRING_9777393");
    noRelatedSym_0_0.set(SecurityXMLSchema_51);
    SecurityXML_102.insert(SecurityXMLSchema_51.getString());
    all_values.push_back(SecurityXML_102);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::News::NoRelatedSym noRelatedSym_0_1;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_52;
    FIX::AttachmentPoint AttachmentPoint_52;
    AttachmentPoint_52.setString("93.460000");
    noRelatedSym_0_1.set(AttachmentPoint_52);
    Instrument_52.insert(AttachmentPoint_52.getString());
    FIX::CFICode CFICode_52("STRING_1417396656");
    noRelatedSym_0_1.set(CFICode_52);
    Instrument_52.insert(CFICode_52.getString());
    FIX::CPProgram CPProgram_52(2);
    noRelatedSym_0_1.set(CPProgram_52);
    Instrument_52.insert(CPProgram_52.getString());
    FIX::CPRegType CPRegType_52("STRING_1435930876");
    noRelatedSym_0_1.set(CPRegType_52);
    Instrument_52.insert(CPRegType_52.getString());
    FIX::CapPrice CapPrice_52;
    CapPrice_52.setString("8654281");
    noRelatedSym_0_1.set(CapPrice_52);
    Instrument_52.insert(CapPrice_52.getString());
    FIX::ContractMultiplier ContractMultiplier_52;
    ContractMultiplier_52.setString("11163290");
    noRelatedSym_0_1.set(ContractMultiplier_52);
    Instrument_52.insert(ContractMultiplier_52.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_52(2);
    noRelatedSym_0_1.set(ContractMultiplierUnit_52);
    Instrument_52.insert(ContractMultiplierUnit_52.getString());
    FIX::ContractSettlMonth ContractSettlMonth_52("MONTHYEAR_829732058");
    noRelatedSym_0_1.set(ContractSettlMonth_52);
    Instrument_52.insert(ContractSettlMonth_52.getString());
    FIX::CountryOfIssue CountryOfIssue_52("COUNTRY_1594366962");
    noRelatedSym_0_1.set(CountryOfIssue_52);
    Instrument_52.insert(CountryOfIssue_52.getString());
    FIX::CouponPaymentDate CouponPaymentDate_52("LOCALMKTDATE_1874283878");
    noRelatedSym_0_1.set(CouponPaymentDate_52);
    Instrument_52.insert(CouponPaymentDate_52.getString());
    FIX::CouponRate CouponRate_52;
    CouponRate_52.setString("16.570000");
    noRelatedSym_0_1.set(CouponRate_52);
    Instrument_52.insert(CouponRate_52.getString());
    FIX::CreditRating CreditRating_52("STRING_2067378696");
    noRelatedSym_0_1.set(CreditRating_52);
    Instrument_52.insert(CreditRating_52.getString());
    FIX::DatedDate DatedDate_52("LOCALMKTDATE_624101802");
    noRelatedSym_0_1.set(DatedDate_52);
    Instrument_52.insert(DatedDate_52.getString());
    FIX::DetachmentPoint DetachmentPoint_52;
    DetachmentPoint_52.setString("39.240000");
    noRelatedSym_0_1.set(DetachmentPoint_52);
    Instrument_52.insert(DetachmentPoint_52.getString());
    FIX::EncodedIssuer EncodedIssuer_52("DATA_644899128");
    noRelatedSym_0_1.set(EncodedIssuer_52);
    Instrument_52.insert(EncodedIssuer_52.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_52(832516990);
    noRelatedSym_0_1.set(EncodedIssuerLen_52);
    Instrument_52.insert(EncodedIssuerLen_52.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_52("DATA_1418585728");
    noRelatedSym_0_1.set(EncodedSecurityDesc_52);
    Instrument_52.insert(EncodedSecurityDesc_52.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_52(63646068);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_52);
    Instrument_52.insert(EncodedSecurityDescLen_52.getString());
    FIX::ExerciseStyle ExerciseStyle_52(1);
    noRelatedSym_0_1.set(ExerciseStyle_52);
    Instrument_52.insert(ExerciseStyle_52.getString());
    FIX::Factor Factor_52;
    Factor_52.setString("1349487");
    noRelatedSym_0_1.set(Factor_52);
    Instrument_52.insert(Factor_52.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_52(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_52);
    Instrument_52.insert(FlexProductEligibilityIndicator_52.getString());
    FIX::FlexibleIndicator FlexibleIndicator_52(false);
    noRelatedSym_0_1.set(FlexibleIndicator_52);
    Instrument_52.insert(FlexibleIndicator_52.getString());
    FIX::FloorPrice FloorPrice_52;
    FloorPrice_52.setString("20735798");
    noRelatedSym_0_1.set(FloorPrice_52);
    Instrument_52.insert(FloorPrice_52.getString());
    FIX::FlowScheduleType FlowScheduleType_52(0);
    noRelatedSym_0_1.set(FlowScheduleType_52);
    Instrument_52.insert(FlowScheduleType_52.getString());
    FIX::InstrRegistry InstrRegistry_52("STRING_1420666810");
    noRelatedSym_0_1.set(InstrRegistry_52);
    Instrument_52.insert(InstrRegistry_52.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_52('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_52);
    Instrument_52.insert(InstrmtAssignmentMethod_52.getString());
    FIX::InterestAccrualDate InterestAccrualDate_52("LOCALMKTDATE_656023479");
    noRelatedSym_0_1.set(InterestAccrualDate_52);
    Instrument_52.insert(InterestAccrualDate_52.getString());
    FIX::IssueDate IssueDate_52("LOCALMKTDATE_142968469");
    noRelatedSym_0_1.set(IssueDate_52);
    Instrument_52.insert(IssueDate_52.getString());
    FIX::Issuer Issuer_52("STRING_1352838374");
    noRelatedSym_0_1.set(Issuer_52);
    Instrument_52.insert(Issuer_52.getString());
    FIX::ListMethod ListMethod_52(0);
    noRelatedSym_0_1.set(ListMethod_52);
    Instrument_52.insert(ListMethod_52.getString());
    FIX::LocaleOfIssue LocaleOfIssue_52("STRING_152745862");
    noRelatedSym_0_1.set(LocaleOfIssue_52);
    Instrument_52.insert(LocaleOfIssue_52.getString());
    FIX::MaturityDate MaturityDate_52("LOCALMKTDATE_1639167720");
    noRelatedSym_0_1.set(MaturityDate_52);
    Instrument_52.insert(MaturityDate_52.getString());
    FIX::MaturityMonthYear MaturityMonthYear_52("MONTHYEAR_180688196");
    noRelatedSym_0_1.set(MaturityMonthYear_52);
    Instrument_52.insert(MaturityMonthYear_52.getString());
    FIX::MaturityTime MaturityTime_52("TZTIMEONLY_32189151");
    noRelatedSym_0_1.set(MaturityTime_52);
    Instrument_52.insert(MaturityTime_52.getString());
    FIX::MinPriceIncrement MinPriceIncrement_52;
    MinPriceIncrement_52.setString("9276149");
    noRelatedSym_0_1.set(MinPriceIncrement_52);
    Instrument_52.insert(MinPriceIncrement_52.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_52;
    MinPriceIncrementAmount_52.setString("10461163");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_52);
    Instrument_52.insert(MinPriceIncrementAmount_52.getString());
    FIX::NTPositionLimit NTPositionLimit_52(1148518233);
    noRelatedSym_0_1.set(NTPositionLimit_52);
    Instrument_52.insert(NTPositionLimit_52.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_52;
    NotionalPercentageOutstanding_52.setString("44.210000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_52);
    Instrument_52.insert(NotionalPercentageOutstanding_52.getString());
    FIX::OptAttribute OptAttribute_52('1');
    noRelatedSym_0_1.set(OptAttribute_52);
    Instrument_52.insert(OptAttribute_52.getString());
    FIX::OptPayoutAmount OptPayoutAmount_52;
    OptPayoutAmount_52.setString("5954015");
    noRelatedSym_0_1.set(OptPayoutAmount_52);
    Instrument_52.insert(OptPayoutAmount_52.getString());
    FIX::OptPayoutType OptPayoutType_52(2);
    noRelatedSym_0_1.set(OptPayoutType_52);
    Instrument_52.insert(OptPayoutType_52.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_52;
    OriginalNotionalPercentageOutstanding_52.setString("63.700000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_52);
    Instrument_52.insert(OriginalNotionalPercentageOutstanding_52.getString());
    FIX::Pool Pool_52("STRING_515296595");
    noRelatedSym_0_1.set(Pool_52);
    Instrument_52.insert(Pool_52.getString());
    FIX::PositionLimit PositionLimit_52(9022806);
    noRelatedSym_0_1.set(PositionLimit_52);
    Instrument_52.insert(PositionLimit_52.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_52("STRING_INT");
    noRelatedSym_0_1.set(PriceQuoteMethod_52);
    Instrument_52.insert(PriceQuoteMethod_52.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_52("STRING_1160195723");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_52);
    Instrument_52.insert(PriceUnitOfMeasure_52.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_52;
    PriceUnitOfMeasureQty_52.setString("8415397");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_52);
    Instrument_52.insert(PriceUnitOfMeasureQty_52.getString());
    FIX::Product Product_54(6);
    noRelatedSym_0_1.set(Product_54);
    Instrument_52.insert(Product_54.getString());
    FIX::ProductComplex ProductComplex_52("STRING_1223841792");
    noRelatedSym_0_1.set(ProductComplex_52);
    Instrument_52.insert(ProductComplex_52.getString());
    FIX::PutOrCall PutOrCall_52(0);
    noRelatedSym_0_1.set(PutOrCall_52);
    Instrument_52.insert(PutOrCall_52.getString());
    FIX::RedemptionDate RedemptionDate_52("LOCALMKTDATE_406837491");
    noRelatedSym_0_1.set(RedemptionDate_52);
    Instrument_52.insert(RedemptionDate_52.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_52("STRING_1464830976");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_52);
    Instrument_52.insert(RepoCollateralSecurityType_52.getString());
    FIX::RepurchaseRate RepurchaseRate_52;
    RepurchaseRate_52.setString("92.550000");
    noRelatedSym_0_1.set(RepurchaseRate_52);
    Instrument_52.insert(RepurchaseRate_52.getString());
    FIX::RepurchaseTerm RepurchaseTerm_52(332933694);
    noRelatedSym_0_1.set(RepurchaseTerm_52);
    Instrument_52.insert(RepurchaseTerm_52.getString());
    FIX::RestructuringType RestructuringType_52("STRING_MM");
    noRelatedSym_0_1.set(RestructuringType_52);
    Instrument_52.insert(RestructuringType_52.getString());
    FIX::SecurityDesc SecurityDesc_52("STRING_1032262418");
    noRelatedSym_0_1.set(SecurityDesc_52);
    Instrument_52.insert(SecurityDesc_52.getString());
    FIX::SecurityExchange SecurityExchange_52("EXCHANGE_509045772");
    noRelatedSym_0_1.set(SecurityExchange_52);
    Instrument_52.insert(SecurityExchange_52.getString());
    FIX::SecurityGroup SecurityGroup_52("STRING_1625769557");
    noRelatedSym_0_1.set(SecurityGroup_52);
    Instrument_52.insert(SecurityGroup_52.getString());
    FIX::SecurityID SecurityID_52("STRING_1175230887");
    noRelatedSym_0_1.set(SecurityID_52);
    Instrument_52.insert(SecurityID_52.getString());
    FIX::SecurityIDSource SecurityIDSource_52("STRING_D");
    noRelatedSym_0_1.set(SecurityIDSource_52);
    Instrument_52.insert(SecurityIDSource_52.getString());
    FIX::SecurityStatus SecurityStatus_52("STRING_2");
    noRelatedSym_0_1.set(SecurityStatus_52);
    Instrument_52.insert(SecurityStatus_52.getString());
    FIX::SecuritySubType SecuritySubType_53("STRING_1327976749");
    noRelatedSym_0_1.set(SecuritySubType_53);
    Instrument_52.insert(SecuritySubType_53.getString());
    FIX::SecurityType SecurityType_54("STRING_EUFRN");
    noRelatedSym_0_1.set(SecurityType_54);
    Instrument_52.insert(SecurityType_54.getString());
    FIX::Seniority Seniority_52("STRING_SD");
    noRelatedSym_0_1.set(Seniority_52);
    Instrument_52.insert(Seniority_52.getString());
    FIX::SettlMethod SettlMethod_52('P');
    noRelatedSym_0_1.set(SettlMethod_52);
    Instrument_52.insert(SettlMethod_52.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_52("STRING_133699518");
    noRelatedSym_0_1.set(SettleOnOpenFlag_52);
    Instrument_52.insert(SettleOnOpenFlag_52.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_52("STRING_1615865595");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_52);
    Instrument_52.insert(StateOrProvinceOfIssue_52.getString());
    FIX::StrikeCurrency StrikeCurrency_52("EUR");
    noRelatedSym_0_1.set(StrikeCurrency_52);
    Instrument_52.insert(StrikeCurrency_52.getString());
    FIX::StrikeMultiplier StrikeMultiplier_52;
    StrikeMultiplier_52.setString("13442303");
    noRelatedSym_0_1.set(StrikeMultiplier_52);
    Instrument_52.insert(StrikeMultiplier_52.getString());
    FIX::StrikePrice StrikePrice_52;
    StrikePrice_52.setString("9566020");
    noRelatedSym_0_1.set(StrikePrice_52);
    Instrument_52.insert(StrikePrice_52.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_52(3);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_52);
    Instrument_52.insert(StrikePriceBoundaryMethod_52.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_52;
    StrikePriceBoundaryPrecision_52.setString("30.300000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_52);
    Instrument_52.insert(StrikePriceBoundaryPrecision_52.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_52(2);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_52);
    Instrument_52.insert(StrikePriceDeterminationMethod_52.getString());
    FIX::StrikeValue StrikeValue_52;
    StrikeValue_52.setString("13332477");
    noRelatedSym_0_1.set(StrikeValue_52);
    Instrument_52.insert(StrikeValue_52.getString());
    FIX::Symbol Symbol_52("STRING_1840159676");
    noRelatedSym_0_1.set(Symbol_52);
    Instrument_52.insert(Symbol_52.getString());
    FIX::SymbolSfx SymbolSfx_52("STRING_CD");
    noRelatedSym_0_1.set(SymbolSfx_52);
    Instrument_52.insert(SymbolSfx_52.getString());
    FIX::TimeUnit TimeUnit_52("STRING_Wk");
    noRelatedSym_0_1.set(TimeUnit_52);
    Instrument_52.insert(TimeUnit_52.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_52(4);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_52);
    Instrument_52.insert(UnderlyingPriceDeterminationMethod_52.getString());
    FIX::UnitOfMeasure UnitOfMeasure_52("STRING_tn");
    noRelatedSym_0_1.set(UnitOfMeasure_52);
    Instrument_52.insert(UnitOfMeasure_52.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_52;
    UnitOfMeasureQty_52.setString("2597469");
    noRelatedSym_0_1.set(UnitOfMeasureQty_52);
    Instrument_52.insert(UnitOfMeasureQty_52.getString());
    FIX::ValuationMethod ValuationMethod_52("STRING_FUT");
    noRelatedSym_0_1.set(ValuationMethod_52);
    Instrument_52.insert(ValuationMethod_52.getString());
    all_values.push_back(Instrument_52);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_99;
      FIX::ComplexEventCondition ComplexEventCondition_99(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_99);
      ComplexEvents_NoComplexEvents_99.insert(ComplexEventCondition_99.getString());
      FIX::ComplexEventPrice ComplexEventPrice_99;
      ComplexEventPrice_99.setString("7043359");
      noComplexEvents_1_1_0.set(ComplexEventPrice_99);
      ComplexEvents_NoComplexEvents_99.insert(ComplexEventPrice_99.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_99(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_99);
      ComplexEvents_NoComplexEvents_99.insert(ComplexEventPriceBoundaryMethod_99.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_99;
      ComplexEventPriceBoundaryPrecision_99.setString("50.060000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_99);
      ComplexEvents_NoComplexEvents_99.insert(ComplexEventPriceBoundaryPrecision_99.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_99(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_99);
      ComplexEvents_NoComplexEvents_99.insert(ComplexEventPriceTimeType_99.getString());
      FIX::ComplexEventType ComplexEventType_99(2);
      noComplexEvents_1_1_0.set(ComplexEventType_99);
      ComplexEvents_NoComplexEvents_99.insert(ComplexEventType_99.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_99;
      ComplexOptPayoutAmount_99.setString("20788358");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_99);
      ComplexEvents_NoComplexEvents_99.insert(ComplexOptPayoutAmount_99.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_99);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_204;
        FIX::ComplexEventEndDate ComplexEventEndDate_204(FIX::UTCTIMESTAMP(11, 0, 33, 16, 7, 2013));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_204);
        ComplexEventDates_NoComplexEventDates_204.insert(ComplexEventEndDate_204.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_204(FIX::UTCTIMESTAMP(5, 9, 27, 16, 4, 2002));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_204);
        ComplexEventDates_NoComplexEventDates_204.insert(ComplexEventStartDate_204.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_204);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_408;
          FIX::ComplexEventEndTime ComplexEventEndTime_408(FIX::UTCTIMEONLY(13, 49, 2));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_408);
          ComplexEventTimes_NoComplexEventTimes_408.insert(ComplexEventEndTime_408.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_408(FIX::UTCTIMEONLY(22, 28, 58));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_408);
          ComplexEventTimes_NoComplexEventTimes_408.insert(ComplexEventStartTime_408.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_408);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_409;
          FIX::ComplexEventEndTime ComplexEventEndTime_409(FIX::UTCTIMEONLY(17, 20, 25));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_409);
          ComplexEventTimes_NoComplexEventTimes_409.insert(ComplexEventEndTime_409.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_409(FIX::UTCTIMEONLY(8, 10, 56));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_409);
          ComplexEventTimes_NoComplexEventTimes_409.insert(ComplexEventStartTime_409.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_409);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_205;
        FIX::ComplexEventEndDate ComplexEventEndDate_205(FIX::UTCTIMESTAMP(1, 56, 18, 25, 4, 2011));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_205);
        ComplexEventDates_NoComplexEventDates_205.insert(ComplexEventEndDate_205.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_205(FIX::UTCTIMESTAMP(8, 0, 19, 4, 4, 2007));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_205);
        ComplexEventDates_NoComplexEventDates_205.insert(ComplexEventStartDate_205.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_205);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_410;
          FIX::ComplexEventEndTime ComplexEventEndTime_410(FIX::UTCTIMEONLY(0, 30, 53));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_410);
          ComplexEventTimes_NoComplexEventTimes_410.insert(ComplexEventEndTime_410.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_410(FIX::UTCTIMEONLY(20, 13, 44));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_410);
          ComplexEventTimes_NoComplexEventTimes_410.insert(ComplexEventStartTime_410.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_410);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_411;
          FIX::ComplexEventEndTime ComplexEventEndTime_411(FIX::UTCTIMEONLY(18, 56, 47));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_411);
          ComplexEventTimes_NoComplexEventTimes_411.insert(ComplexEventEndTime_411.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_411(FIX::UTCTIMEONLY(8, 58, 56));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_411);
          ComplexEventTimes_NoComplexEventTimes_411.insert(ComplexEventStartTime_411.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_411);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_412;
          FIX::ComplexEventEndTime ComplexEventEndTime_412(FIX::UTCTIMEONLY(15, 52, 27));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventEndTime_412);
          ComplexEventTimes_NoComplexEventTimes_412.insert(ComplexEventEndTime_412.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_412(FIX::UTCTIMEONLY(11, 26, 4));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventStartTime_412);
          ComplexEventTimes_NoComplexEventTimes_412.insert(ComplexEventStartTime_412.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_412);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_206;
        FIX::ComplexEventEndDate ComplexEventEndDate_206(FIX::UTCTIMESTAMP(2, 15, 32, 5, 12, 2005));
        noComplexEventDates_1_0_2_2.set(ComplexEventEndDate_206);
        ComplexEventDates_NoComplexEventDates_206.insert(ComplexEventEndDate_206.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_206(FIX::UTCTIMESTAMP(11, 35, 40, 25, 8, 2010));
        noComplexEventDates_1_0_2_2.set(ComplexEventStartDate_206);
        ComplexEventDates_NoComplexEventDates_206.insert(ComplexEventStartDate_206.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_206);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_413;
          FIX::ComplexEventEndTime ComplexEventEndTime_413(FIX::UTCTIMEONLY(4, 10, 17));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventEndTime_413);
          ComplexEventTimes_NoComplexEventTimes_413.insert(ComplexEventEndTime_413.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_413(FIX::UTCTIMEONLY(6, 7, 28));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventStartTime_413);
          ComplexEventTimes_NoComplexEventTimes_413.insert(ComplexEventStartTime_413.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_413);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_100;
      FIX::ComplexEventCondition ComplexEventCondition_100(2);
      noComplexEvents_1_1_1.set(ComplexEventCondition_100);
      ComplexEvents_NoComplexEvents_100.insert(ComplexEventCondition_100.getString());
      FIX::ComplexEventPrice ComplexEventPrice_100;
      ComplexEventPrice_100.setString("11635826");
      noComplexEvents_1_1_1.set(ComplexEventPrice_100);
      ComplexEvents_NoComplexEvents_100.insert(ComplexEventPrice_100.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_100(4);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_100);
      ComplexEvents_NoComplexEvents_100.insert(ComplexEventPriceBoundaryMethod_100.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_100;
      ComplexEventPriceBoundaryPrecision_100.setString("51.180000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_100);
      ComplexEvents_NoComplexEvents_100.insert(ComplexEventPriceBoundaryPrecision_100.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_100(2);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_100);
      ComplexEvents_NoComplexEvents_100.insert(ComplexEventPriceTimeType_100.getString());
      FIX::ComplexEventType ComplexEventType_100(2);
      noComplexEvents_1_1_1.set(ComplexEventType_100);
      ComplexEvents_NoComplexEvents_100.insert(ComplexEventType_100.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_100;
      ComplexOptPayoutAmount_100.setString("5591089");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_100);
      ComplexEvents_NoComplexEvents_100.insert(ComplexOptPayoutAmount_100.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_100);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_207;
        FIX::ComplexEventEndDate ComplexEventEndDate_207(FIX::UTCTIMESTAMP(6, 52, 13, 3, 4, 2004));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_207);
        ComplexEventDates_NoComplexEventDates_207.insert(ComplexEventEndDate_207.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_207(FIX::UTCTIMESTAMP(18, 38, 3, 0, 2, 2007));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_207);
        ComplexEventDates_NoComplexEventDates_207.insert(ComplexEventStartDate_207.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_207);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_414;
          FIX::ComplexEventEndTime ComplexEventEndTime_414(FIX::UTCTIMEONLY(22, 11, 25));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_414);
          ComplexEventTimes_NoComplexEventTimes_414.insert(ComplexEventEndTime_414.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_414(FIX::UTCTIMEONLY(6, 24, 15));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_414);
          ComplexEventTimes_NoComplexEventTimes_414.insert(ComplexEventStartTime_414.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_414);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_208;
        FIX::ComplexEventEndDate ComplexEventEndDate_208(FIX::UTCTIMESTAMP(11, 20, 56, 11, 1, 2008));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_208);
        ComplexEventDates_NoComplexEventDates_208.insert(ComplexEventEndDate_208.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_208(FIX::UTCTIMESTAMP(5, 27, 0, 22, 11, 2007));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_208);
        ComplexEventDates_NoComplexEventDates_208.insert(ComplexEventStartDate_208.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_208);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_415;
          FIX::ComplexEventEndTime ComplexEventEndTime_415(FIX::UTCTIMEONLY(1, 58, 45));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_415);
          ComplexEventTimes_NoComplexEventTimes_415.insert(ComplexEventEndTime_415.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_415(FIX::UTCTIMEONLY(0, 26, 27));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_415);
          ComplexEventTimes_NoComplexEventTimes_415.insert(ComplexEventStartTime_415.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_415);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_416;
          FIX::ComplexEventEndTime ComplexEventEndTime_416(FIX::UTCTIMEONLY(12, 38, 52));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventEndTime_416);
          ComplexEventTimes_NoComplexEventTimes_416.insert(ComplexEventEndTime_416.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_416(FIX::UTCTIMEONLY(12, 17, 50));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventStartTime_416);
          ComplexEventTimes_NoComplexEventTimes_416.insert(ComplexEventStartTime_416.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_416);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_417;
          FIX::ComplexEventEndTime ComplexEventEndTime_417(FIX::UTCTIMEONLY(8, 10, 6));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventEndTime_417);
          ComplexEventTimes_NoComplexEventTimes_417.insert(ComplexEventEndTime_417.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_417(FIX::UTCTIMEONLY(14, 30, 48));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventStartTime_417);
          ComplexEventTimes_NoComplexEventTimes_417.insert(ComplexEventStartTime_417.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_417);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_209;
        FIX::ComplexEventEndDate ComplexEventEndDate_209(FIX::UTCTIMESTAMP(21, 40, 33, 0, 12, 2012));
        noComplexEventDates_1_1_2_2.set(ComplexEventEndDate_209);
        ComplexEventDates_NoComplexEventDates_209.insert(ComplexEventEndDate_209.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_209(FIX::UTCTIMESTAMP(4, 44, 10, 2, 1, 2001));
        noComplexEventDates_1_1_2_2.set(ComplexEventStartDate_209);
        ComplexEventDates_NoComplexEventDates_209.insert(ComplexEventStartDate_209.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_209);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_418;
          FIX::ComplexEventEndTime ComplexEventEndTime_418(FIX::UTCTIMEONLY(17, 43, 32));
          noComplexEventTimes_1_1_2_3_0.set(ComplexEventEndTime_418);
          ComplexEventTimes_NoComplexEventTimes_418.insert(ComplexEventEndTime_418.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_418(FIX::UTCTIMEONLY(20, 41, 34));
          noComplexEventTimes_1_1_2_3_0.set(ComplexEventStartTime_418);
          ComplexEventTimes_NoComplexEventTimes_418.insert(ComplexEventStartTime_418.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_418);

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_419;
          FIX::ComplexEventEndTime ComplexEventEndTime_419(FIX::UTCTIMEONLY(6, 36, 8));
          noComplexEventTimes_1_1_2_3_1.set(ComplexEventEndTime_419);
          ComplexEventTimes_NoComplexEventTimes_419.insert(ComplexEventEndTime_419.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_419(FIX::UTCTIMEONLY(15, 38, 2));
          noComplexEventTimes_1_1_2_3_1.set(ComplexEventStartTime_419);
          ComplexEventTimes_NoComplexEventTimes_419.insert(ComplexEventStartTime_419.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_419);

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_101;
      FIX::ComplexEventCondition ComplexEventCondition_101(1);
      noComplexEvents_1_1_2.set(ComplexEventCondition_101);
      ComplexEvents_NoComplexEvents_101.insert(ComplexEventCondition_101.getString());
      FIX::ComplexEventPrice ComplexEventPrice_101;
      ComplexEventPrice_101.setString("11475453");
      noComplexEvents_1_1_2.set(ComplexEventPrice_101);
      ComplexEvents_NoComplexEvents_101.insert(ComplexEventPrice_101.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_101(5);
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryMethod_101);
      ComplexEvents_NoComplexEvents_101.insert(ComplexEventPriceBoundaryMethod_101.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_101;
      ComplexEventPriceBoundaryPrecision_101.setString("30.600000");
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryPrecision_101);
      ComplexEvents_NoComplexEvents_101.insert(ComplexEventPriceBoundaryPrecision_101.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_101(2);
      noComplexEvents_1_1_2.set(ComplexEventPriceTimeType_101);
      ComplexEvents_NoComplexEvents_101.insert(ComplexEventPriceTimeType_101.getString());
      FIX::ComplexEventType ComplexEventType_101(7);
      noComplexEvents_1_1_2.set(ComplexEventType_101);
      ComplexEvents_NoComplexEvents_101.insert(ComplexEventType_101.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_101;
      ComplexOptPayoutAmount_101.setString("19445693");
      noComplexEvents_1_1_2.set(ComplexOptPayoutAmount_101);
      ComplexEvents_NoComplexEvents_101.insert(ComplexOptPayoutAmount_101.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_101);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_210;
        FIX::ComplexEventEndDate ComplexEventEndDate_210(FIX::UTCTIMESTAMP(22, 12, 39, 27, 6, 2016));
        noComplexEventDates_1_2_2_0.set(ComplexEventEndDate_210);
        ComplexEventDates_NoComplexEventDates_210.insert(ComplexEventEndDate_210.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_210(FIX::UTCTIMESTAMP(10, 28, 31, 27, 1, 2013));
        noComplexEventDates_1_2_2_0.set(ComplexEventStartDate_210);
        ComplexEventDates_NoComplexEventDates_210.insert(ComplexEventStartDate_210.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_210);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_420;
          FIX::ComplexEventEndTime ComplexEventEndTime_420(FIX::UTCTIMEONLY(19, 54, 54));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventEndTime_420);
          ComplexEventTimes_NoComplexEventTimes_420.insert(ComplexEventEndTime_420.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_420(FIX::UTCTIMEONLY(13, 24, 3));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventStartTime_420);
          ComplexEventTimes_NoComplexEventTimes_420.insert(ComplexEventStartTime_420.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_420);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_421;
          FIX::ComplexEventEndTime ComplexEventEndTime_421(FIX::UTCTIMEONLY(8, 37, 7));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventEndTime_421);
          ComplexEventTimes_NoComplexEventTimes_421.insert(ComplexEventEndTime_421.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_421(FIX::UTCTIMEONLY(2, 45, 6));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventStartTime_421);
          ComplexEventTimes_NoComplexEventTimes_421.insert(ComplexEventStartTime_421.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_421);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_422;
          FIX::ComplexEventEndTime ComplexEventEndTime_422(FIX::UTCTIMEONLY(12, 10, 35));
          noComplexEventTimes_1_2_0_3_2.set(ComplexEventEndTime_422);
          ComplexEventTimes_NoComplexEventTimes_422.insert(ComplexEventEndTime_422.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_422(FIX::UTCTIMEONLY(7, 19, 26));
          noComplexEventTimes_1_2_0_3_2.set(ComplexEventStartTime_422);
          ComplexEventTimes_NoComplexEventTimes_422.insert(ComplexEventStartTime_422.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_422);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_2);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_211;
        FIX::ComplexEventEndDate ComplexEventEndDate_211(FIX::UTCTIMESTAMP(23, 57, 24, 27, 3, 2004));
        noComplexEventDates_1_2_2_1.set(ComplexEventEndDate_211);
        ComplexEventDates_NoComplexEventDates_211.insert(ComplexEventEndDate_211.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_211(FIX::UTCTIMESTAMP(13, 28, 47, 10, 6, 2000));
        noComplexEventDates_1_2_2_1.set(ComplexEventStartDate_211);
        ComplexEventDates_NoComplexEventDates_211.insert(ComplexEventStartDate_211.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_211);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_423;
          FIX::ComplexEventEndTime ComplexEventEndTime_423(FIX::UTCTIMEONLY(8, 22, 24));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventEndTime_423);
          ComplexEventTimes_NoComplexEventTimes_423.insert(ComplexEventEndTime_423.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_423(FIX::UTCTIMEONLY(12, 1, 59));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventStartTime_423);
          ComplexEventTimes_NoComplexEventTimes_423.insert(ComplexEventStartTime_423.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_423);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_0);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_106;
      FIX::EventDate EventDate_106("LOCALMKTDATE_1297281661");
      noEvents_1_1_0.set(EventDate_106);
      EvntGrp_NoEvents_106.insert(EventDate_106.getString());
      FIX::EventPx EventPx_106;
      EventPx_106.setString("9174189");
      noEvents_1_1_0.set(EventPx_106);
      EvntGrp_NoEvents_106.insert(EventPx_106.getString());
      FIX::EventText EventText_106("STRING_369120227");
      noEvents_1_1_0.set(EventText_106);
      EvntGrp_NoEvents_106.insert(EventText_106.getString());
      FIX::EventTime EventTime_106(FIX::UTCTIMESTAMP(20, 6, 46, 5, 7, 2012));
      noEvents_1_1_0.set(EventTime_106);
      EvntGrp_NoEvents_106.insert(EventTime_106.getString());
      FIX::EventType EventType_106(3);
      noEvents_1_1_0.set(EventType_106);
      EvntGrp_NoEvents_106.insert(EventType_106.getString());
      all_values.push_back(EvntGrp_NoEvents_106);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_107;
      FIX::EventDate EventDate_107("LOCALMKTDATE_2067337517");
      noEvents_1_1_1.set(EventDate_107);
      EvntGrp_NoEvents_107.insert(EventDate_107.getString());
      FIX::EventPx EventPx_107;
      EventPx_107.setString("9654472");
      noEvents_1_1_1.set(EventPx_107);
      EvntGrp_NoEvents_107.insert(EventPx_107.getString());
      FIX::EventText EventText_107("STRING_106705988");
      noEvents_1_1_1.set(EventText_107);
      EvntGrp_NoEvents_107.insert(EventText_107.getString());
      FIX::EventTime EventTime_107(FIX::UTCTIMESTAMP(8, 36, 58, 14, 10, 2008));
      noEvents_1_1_1.set(EventTime_107);
      EvntGrp_NoEvents_107.insert(EventTime_107.getString());
      FIX::EventType EventType_107(9);
      noEvents_1_1_1.set(EventType_107);
      EvntGrp_NoEvents_107.insert(EventType_107.getString());
      all_values.push_back(EvntGrp_NoEvents_107);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_108;
      FIX::EventDate EventDate_108("LOCALMKTDATE_754372201");
      noEvents_1_1_2.set(EventDate_108);
      EvntGrp_NoEvents_108.insert(EventDate_108.getString());
      FIX::EventPx EventPx_108;
      EventPx_108.setString("8495799");
      noEvents_1_1_2.set(EventPx_108);
      EvntGrp_NoEvents_108.insert(EventPx_108.getString());
      FIX::EventText EventText_108("STRING_216096122");
      noEvents_1_1_2.set(EventText_108);
      EvntGrp_NoEvents_108.insert(EventText_108.getString());
      FIX::EventTime EventTime_108(FIX::UTCTIMESTAMP(20, 19, 19, 27, 4, 2002));
      noEvents_1_1_2.set(EventTime_108);
      EvntGrp_NoEvents_108.insert(EventTime_108.getString());
      FIX::EventType EventType_108(17);
      noEvents_1_1_2.set(EventType_108);
      EvntGrp_NoEvents_108.insert(EventType_108.getString());
      all_values.push_back(EvntGrp_NoEvents_108);

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_113;
      FIX::InstrumentPartyID InstrumentPartyID_113("STRING_336741633");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_113);
      InstrumentParties_NoInstrumentParties_113.insert(InstrumentPartyID_113.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_113('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_113);
      InstrumentParties_NoInstrumentParties_113.insert(InstrumentPartyIDSource_113.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_113(750834864);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_113);
      InstrumentParties_NoInstrumentParties_113.insert(InstrumentPartyRole_113.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_113);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236;
        FIX::InstrumentPartySubID InstrumentPartySubID_236("STRING_223216049");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_236);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236.insert(InstrumentPartySubID_236.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_236(1441733178);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_236);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236.insert(InstrumentPartySubIDType_236.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237;
        FIX::InstrumentPartySubID InstrumentPartySubID_237("STRING_2057326427");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_237);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237.insert(InstrumentPartySubID_237.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_237(159185463);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_237);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237.insert(InstrumentPartySubIDType_237.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238;
        FIX::InstrumentPartySubID InstrumentPartySubID_238("STRING_1361587048");
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubID_238);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238.insert(InstrumentPartySubID_238.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_238(875290030);
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubIDType_238);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238.insert(InstrumentPartySubIDType_238.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_116;
      FIX::SecurityAltID SecurityAltID_116("STRING_2075859399");
      noSecurityAltID_1_1_0.set(SecurityAltID_116);
      SecAltIDGrp_NoSecurityAltID_116.insert(SecurityAltID_116.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_116("STRING_812245822");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_116);
      SecAltIDGrp_NoSecurityAltID_116.insert(SecurityAltIDSource_116.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_116);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_117;
      FIX::SecurityAltID SecurityAltID_117("STRING_1762722107");
      noSecurityAltID_1_1_1.set(SecurityAltID_117);
      SecAltIDGrp_NoSecurityAltID_117.insert(SecurityAltID_117.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_117("STRING_1291831229");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_117);
      SecAltIDGrp_NoSecurityAltID_117.insert(SecurityAltIDSource_117.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_117);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_118;
      FIX::SecurityAltID SecurityAltID_118("STRING_1543164444");
      noSecurityAltID_1_1_2.set(SecurityAltID_118);
      SecAltIDGrp_NoSecurityAltID_118.insert(SecurityAltID_118.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_118("STRING_899472804");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_118);
      SecAltIDGrp_NoSecurityAltID_118.insert(SecurityAltIDSource_118.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_118);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_104;
    FIX::SecurityXML SecurityXML_105("XMLDATA_170390484");
    noRelatedSym_0_1.set(SecurityXML_105);
    FIX::SecurityXMLLen SecurityXMLLen_52(207842044);
    noRelatedSym_0_1.set(SecurityXMLLen_52);
    FIX::SecurityXMLSchema SecurityXMLSchema_52("STRING_1653845006");
    noRelatedSym_0_1.set(SecurityXMLSchema_52);
    SecurityXML_104.insert(SecurityXMLSchema_52.getString());
    all_values.push_back(SecurityXML_104);

    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::News::NoRelatedSym noRelatedSym_0_2;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_53;
    FIX::AttachmentPoint AttachmentPoint_53;
    AttachmentPoint_53.setString("4.350000");
    noRelatedSym_0_2.set(AttachmentPoint_53);
    Instrument_53.insert(AttachmentPoint_53.getString());
    FIX::CFICode CFICode_53("STRING_423938167");
    noRelatedSym_0_2.set(CFICode_53);
    Instrument_53.insert(CFICode_53.getString());
    FIX::CPProgram CPProgram_53(2);
    noRelatedSym_0_2.set(CPProgram_53);
    Instrument_53.insert(CPProgram_53.getString());
    FIX::CPRegType CPRegType_53("STRING_1541207399");
    noRelatedSym_0_2.set(CPRegType_53);
    Instrument_53.insert(CPRegType_53.getString());
    FIX::CapPrice CapPrice_53;
    CapPrice_53.setString("4326963");
    noRelatedSym_0_2.set(CapPrice_53);
    Instrument_53.insert(CapPrice_53.getString());
    FIX::ContractMultiplier ContractMultiplier_53;
    ContractMultiplier_53.setString("16178266");
    noRelatedSym_0_2.set(ContractMultiplier_53);
    Instrument_53.insert(ContractMultiplier_53.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_53(1);
    noRelatedSym_0_2.set(ContractMultiplierUnit_53);
    Instrument_53.insert(ContractMultiplierUnit_53.getString());
    FIX::ContractSettlMonth ContractSettlMonth_53("MONTHYEAR_405927297");
    noRelatedSym_0_2.set(ContractSettlMonth_53);
    Instrument_53.insert(ContractSettlMonth_53.getString());
    FIX::CountryOfIssue CountryOfIssue_53("COUNTRY_982032735");
    noRelatedSym_0_2.set(CountryOfIssue_53);
    Instrument_53.insert(CountryOfIssue_53.getString());
    FIX::CouponPaymentDate CouponPaymentDate_53("LOCALMKTDATE_2126728210");
    noRelatedSym_0_2.set(CouponPaymentDate_53);
    Instrument_53.insert(CouponPaymentDate_53.getString());
    FIX::CouponRate CouponRate_53;
    CouponRate_53.setString("84.950000");
    noRelatedSym_0_2.set(CouponRate_53);
    Instrument_53.insert(CouponRate_53.getString());
    FIX::CreditRating CreditRating_53("STRING_1318774368");
    noRelatedSym_0_2.set(CreditRating_53);
    Instrument_53.insert(CreditRating_53.getString());
    FIX::DatedDate DatedDate_53("LOCALMKTDATE_1886355142");
    noRelatedSym_0_2.set(DatedDate_53);
    Instrument_53.insert(DatedDate_53.getString());
    FIX::DetachmentPoint DetachmentPoint_53;
    DetachmentPoint_53.setString("33.590000");
    noRelatedSym_0_2.set(DetachmentPoint_53);
    Instrument_53.insert(DetachmentPoint_53.getString());
    FIX::EncodedIssuer EncodedIssuer_53("DATA_1602411779");
    noRelatedSym_0_2.set(EncodedIssuer_53);
    Instrument_53.insert(EncodedIssuer_53.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_53(2109571191);
    noRelatedSym_0_2.set(EncodedIssuerLen_53);
    Instrument_53.insert(EncodedIssuerLen_53.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_53("DATA_793362890");
    noRelatedSym_0_2.set(EncodedSecurityDesc_53);
    Instrument_53.insert(EncodedSecurityDesc_53.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_53(1512254559);
    noRelatedSym_0_2.set(EncodedSecurityDescLen_53);
    Instrument_53.insert(EncodedSecurityDescLen_53.getString());
    FIX::ExerciseStyle ExerciseStyle_53(2);
    noRelatedSym_0_2.set(ExerciseStyle_53);
    Instrument_53.insert(ExerciseStyle_53.getString());
    FIX::Factor Factor_53;
    Factor_53.setString("74662");
    noRelatedSym_0_2.set(Factor_53);
    Instrument_53.insert(Factor_53.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_53(false);
    noRelatedSym_0_2.set(FlexProductEligibilityIndicator_53);
    Instrument_53.insert(FlexProductEligibilityIndicator_53.getString());
    FIX::FlexibleIndicator FlexibleIndicator_53(true);
    noRelatedSym_0_2.set(FlexibleIndicator_53);
    Instrument_53.insert(FlexibleIndicator_53.getString());
    FIX::FloorPrice FloorPrice_53;
    FloorPrice_53.setString("20833256");
    noRelatedSym_0_2.set(FloorPrice_53);
    Instrument_53.insert(FloorPrice_53.getString());
    FIX::FlowScheduleType FlowScheduleType_53(3);
    noRelatedSym_0_2.set(FlowScheduleType_53);
    Instrument_53.insert(FlowScheduleType_53.getString());
    FIX::InstrRegistry InstrRegistry_53("STRING_2402918");
    noRelatedSym_0_2.set(InstrRegistry_53);
    Instrument_53.insert(InstrRegistry_53.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_53('1');
    noRelatedSym_0_2.set(InstrmtAssignmentMethod_53);
    Instrument_53.insert(InstrmtAssignmentMethod_53.getString());
    FIX::InterestAccrualDate InterestAccrualDate_53("LOCALMKTDATE_447987559");
    noRelatedSym_0_2.set(InterestAccrualDate_53);
    Instrument_53.insert(InterestAccrualDate_53.getString());
    FIX::IssueDate IssueDate_53("LOCALMKTDATE_901875722");
    noRelatedSym_0_2.set(IssueDate_53);
    Instrument_53.insert(IssueDate_53.getString());
    FIX::Issuer Issuer_53("STRING_1398063754");
    noRelatedSym_0_2.set(Issuer_53);
    Instrument_53.insert(Issuer_53.getString());
    FIX::ListMethod ListMethod_53(0);
    noRelatedSym_0_2.set(ListMethod_53);
    Instrument_53.insert(ListMethod_53.getString());
    FIX::LocaleOfIssue LocaleOfIssue_53("STRING_408237080");
    noRelatedSym_0_2.set(LocaleOfIssue_53);
    Instrument_53.insert(LocaleOfIssue_53.getString());
    FIX::MaturityDate MaturityDate_53("LOCALMKTDATE_270550541");
    noRelatedSym_0_2.set(MaturityDate_53);
    Instrument_53.insert(MaturityDate_53.getString());
    FIX::MaturityMonthYear MaturityMonthYear_53("MONTHYEAR_1079767771");
    noRelatedSym_0_2.set(MaturityMonthYear_53);
    Instrument_53.insert(MaturityMonthYear_53.getString());
    FIX::MaturityTime MaturityTime_53("TZTIMEONLY_1811655724");
    noRelatedSym_0_2.set(MaturityTime_53);
    Instrument_53.insert(MaturityTime_53.getString());
    FIX::MinPriceIncrement MinPriceIncrement_53;
    MinPriceIncrement_53.setString("18117579");
    noRelatedSym_0_2.set(MinPriceIncrement_53);
    Instrument_53.insert(MinPriceIncrement_53.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_53;
    MinPriceIncrementAmount_53.setString("15124640");
    noRelatedSym_0_2.set(MinPriceIncrementAmount_53);
    Instrument_53.insert(MinPriceIncrementAmount_53.getString());
    FIX::NTPositionLimit NTPositionLimit_53(1281998758);
    noRelatedSym_0_2.set(NTPositionLimit_53);
    Instrument_53.insert(NTPositionLimit_53.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_53;
    NotionalPercentageOutstanding_53.setString("26.460000");
    noRelatedSym_0_2.set(NotionalPercentageOutstanding_53);
    Instrument_53.insert(NotionalPercentageOutstanding_53.getString());
    FIX::OptAttribute OptAttribute_53('1');
    noRelatedSym_0_2.set(OptAttribute_53);
    Instrument_53.insert(OptAttribute_53.getString());
    FIX::OptPayoutAmount OptPayoutAmount_53;
    OptPayoutAmount_53.setString("1165478");
    noRelatedSym_0_2.set(OptPayoutAmount_53);
    Instrument_53.insert(OptPayoutAmount_53.getString());
    FIX::OptPayoutType OptPayoutType_53(3);
    noRelatedSym_0_2.set(OptPayoutType_53);
    Instrument_53.insert(OptPayoutType_53.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_53;
    OriginalNotionalPercentageOutstanding_53.setString("62.410000");
    noRelatedSym_0_2.set(OriginalNotionalPercentageOutstanding_53);
    Instrument_53.insert(OriginalNotionalPercentageOutstanding_53.getString());
    FIX::Pool Pool_53("STRING_1435322213");
    noRelatedSym_0_2.set(Pool_53);
    Instrument_53.insert(Pool_53.getString());
    FIX::PositionLimit PositionLimit_53(757648702);
    noRelatedSym_0_2.set(PositionLimit_53);
    Instrument_53.insert(PositionLimit_53.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_53("STRING_STD");
    noRelatedSym_0_2.set(PriceQuoteMethod_53);
    Instrument_53.insert(PriceQuoteMethod_53.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_53("STRING_890250345");
    noRelatedSym_0_2.set(PriceUnitOfMeasure_53);
    Instrument_53.insert(PriceUnitOfMeasure_53.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_53;
    PriceUnitOfMeasureQty_53.setString("7197362");
    noRelatedSym_0_2.set(PriceUnitOfMeasureQty_53);
    Instrument_53.insert(PriceUnitOfMeasureQty_53.getString());
    FIX::Product Product_55(3);
    noRelatedSym_0_2.set(Product_55);
    Instrument_53.insert(Product_55.getString());
    FIX::ProductComplex ProductComplex_53("STRING_255021256");
    noRelatedSym_0_2.set(ProductComplex_53);
    Instrument_53.insert(ProductComplex_53.getString());
    FIX::PutOrCall PutOrCall_53(1);
    noRelatedSym_0_2.set(PutOrCall_53);
    Instrument_53.insert(PutOrCall_53.getString());
    FIX::RedemptionDate RedemptionDate_53("LOCALMKTDATE_671645132");
    noRelatedSym_0_2.set(RedemptionDate_53);
    Instrument_53.insert(RedemptionDate_53.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_53("STRING_495082197");
    noRelatedSym_0_2.set(RepoCollateralSecurityType_53);
    Instrument_53.insert(RepoCollateralSecurityType_53.getString());
    FIX::RepurchaseRate RepurchaseRate_53;
    RepurchaseRate_53.setString("37.110000");
    noRelatedSym_0_2.set(RepurchaseRate_53);
    Instrument_53.insert(RepurchaseRate_53.getString());
    FIX::RepurchaseTerm RepurchaseTerm_53(607487173);
    noRelatedSym_0_2.set(RepurchaseTerm_53);
    Instrument_53.insert(RepurchaseTerm_53.getString());
    FIX::RestructuringType RestructuringType_53("STRING_FR");
    noRelatedSym_0_2.set(RestructuringType_53);
    Instrument_53.insert(RestructuringType_53.getString());
    FIX::SecurityDesc SecurityDesc_53("STRING_1230576629");
    noRelatedSym_0_2.set(SecurityDesc_53);
    Instrument_53.insert(SecurityDesc_53.getString());
    FIX::SecurityExchange SecurityExchange_53("EXCHANGE_1835160444");
    noRelatedSym_0_2.set(SecurityExchange_53);
    Instrument_53.insert(SecurityExchange_53.getString());
    FIX::SecurityGroup SecurityGroup_53("STRING_1995376519");
    noRelatedSym_0_2.set(SecurityGroup_53);
    Instrument_53.insert(SecurityGroup_53.getString());
    FIX::SecurityID SecurityID_53("STRING_2132452352");
    noRelatedSym_0_2.set(SecurityID_53);
    Instrument_53.insert(SecurityID_53.getString());
    FIX::SecurityIDSource SecurityIDSource_53("STRING_5");
    noRelatedSym_0_2.set(SecurityIDSource_53);
    Instrument_53.insert(SecurityIDSource_53.getString());
    FIX::SecurityStatus SecurityStatus_53("STRING_2");
    noRelatedSym_0_2.set(SecurityStatus_53);
    Instrument_53.insert(SecurityStatus_53.getString());
    FIX::SecuritySubType SecuritySubType_54("STRING_393205784");
    noRelatedSym_0_2.set(SecuritySubType_54);
    Instrument_53.insert(SecuritySubType_54.getString());
    FIX::SecurityType SecurityType_55("STRING_PROV");
    noRelatedSym_0_2.set(SecurityType_55);
    Instrument_53.insert(SecurityType_55.getString());
    FIX::Seniority Seniority_53("STRING_SD");
    noRelatedSym_0_2.set(Seniority_53);
    Instrument_53.insert(Seniority_53.getString());
    FIX::SettlMethod SettlMethod_53('C');
    noRelatedSym_0_2.set(SettlMethod_53);
    Instrument_53.insert(SettlMethod_53.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_53("STRING_1020565384");
    noRelatedSym_0_2.set(SettleOnOpenFlag_53);
    Instrument_53.insert(SettleOnOpenFlag_53.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_53("STRING_948470695");
    noRelatedSym_0_2.set(StateOrProvinceOfIssue_53);
    Instrument_53.insert(StateOrProvinceOfIssue_53.getString());
    FIX::StrikeCurrency StrikeCurrency_53("CAN");
    noRelatedSym_0_2.set(StrikeCurrency_53);
    Instrument_53.insert(StrikeCurrency_53.getString());
    FIX::StrikeMultiplier StrikeMultiplier_53;
    StrikeMultiplier_53.setString("7193784");
    noRelatedSym_0_2.set(StrikeMultiplier_53);
    Instrument_53.insert(StrikeMultiplier_53.getString());
    FIX::StrikePrice StrikePrice_53;
    StrikePrice_53.setString("14559244");
    noRelatedSym_0_2.set(StrikePrice_53);
    Instrument_53.insert(StrikePrice_53.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_53(2);
    noRelatedSym_0_2.set(StrikePriceBoundaryMethod_53);
    Instrument_53.insert(StrikePriceBoundaryMethod_53.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_53;
    StrikePriceBoundaryPrecision_53.setString("46.820000");
    noRelatedSym_0_2.set(StrikePriceBoundaryPrecision_53);
    Instrument_53.insert(StrikePriceBoundaryPrecision_53.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_53(3);
    noRelatedSym_0_2.set(StrikePriceDeterminationMethod_53);
    Instrument_53.insert(StrikePriceDeterminationMethod_53.getString());
    FIX::StrikeValue StrikeValue_53;
    StrikeValue_53.setString("16890402");
    noRelatedSym_0_2.set(StrikeValue_53);
    Instrument_53.insert(StrikeValue_53.getString());
    FIX::Symbol Symbol_53("STRING_1109380635");
    noRelatedSym_0_2.set(Symbol_53);
    Instrument_53.insert(Symbol_53.getString());
    FIX::SymbolSfx SymbolSfx_53("STRING_WI");
    noRelatedSym_0_2.set(SymbolSfx_53);
    Instrument_53.insert(SymbolSfx_53.getString());
    FIX::TimeUnit TimeUnit_53("STRING_H");
    noRelatedSym_0_2.set(TimeUnit_53);
    Instrument_53.insert(TimeUnit_53.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_53(2);
    noRelatedSym_0_2.set(UnderlyingPriceDeterminationMethod_53);
    Instrument_53.insert(UnderlyingPriceDeterminationMethod_53.getString());
    FIX::UnitOfMeasure UnitOfMeasure_53("STRING_MWh");
    noRelatedSym_0_2.set(UnitOfMeasure_53);
    Instrument_53.insert(UnitOfMeasure_53.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_53;
    UnitOfMeasureQty_53.setString("11023021");
    noRelatedSym_0_2.set(UnitOfMeasureQty_53);
    Instrument_53.insert(UnitOfMeasureQty_53.getString());
    FIX::ValuationMethod ValuationMethod_53("STRING_FUTDA");
    noRelatedSym_0_2.set(ValuationMethod_53);
    Instrument_53.insert(ValuationMethod_53.getString());
    all_values.push_back(Instrument_53);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_102;
      FIX::ComplexEventCondition ComplexEventCondition_102(1);
      noComplexEvents_2_1_0.set(ComplexEventCondition_102);
      ComplexEvents_NoComplexEvents_102.insert(ComplexEventCondition_102.getString());
      FIX::ComplexEventPrice ComplexEventPrice_102;
      ComplexEventPrice_102.setString("9052081");
      noComplexEvents_2_1_0.set(ComplexEventPrice_102);
      ComplexEvents_NoComplexEvents_102.insert(ComplexEventPrice_102.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_102(1);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_102);
      ComplexEvents_NoComplexEvents_102.insert(ComplexEventPriceBoundaryMethod_102.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_102;
      ComplexEventPriceBoundaryPrecision_102.setString("88.380000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_102);
      ComplexEvents_NoComplexEvents_102.insert(ComplexEventPriceBoundaryPrecision_102.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_102(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_102);
      ComplexEvents_NoComplexEvents_102.insert(ComplexEventPriceTimeType_102.getString());
      FIX::ComplexEventType ComplexEventType_102(2);
      noComplexEvents_2_1_0.set(ComplexEventType_102);
      ComplexEvents_NoComplexEvents_102.insert(ComplexEventType_102.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_102;
      ComplexOptPayoutAmount_102.setString("13985375");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_102);
      ComplexEvents_NoComplexEvents_102.insert(ComplexOptPayoutAmount_102.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_102);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_212;
        FIX::ComplexEventEndDate ComplexEventEndDate_212(FIX::UTCTIMESTAMP(22, 46, 5, 11, 3, 2011));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_212);
        ComplexEventDates_NoComplexEventDates_212.insert(ComplexEventEndDate_212.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_212(FIX::UTCTIMESTAMP(5, 34, 34, 21, 10, 2010));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_212);
        ComplexEventDates_NoComplexEventDates_212.insert(ComplexEventStartDate_212.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_212);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_424;
          FIX::ComplexEventEndTime ComplexEventEndTime_424(FIX::UTCTIMEONLY(11, 55, 53));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_424);
          ComplexEventTimes_NoComplexEventTimes_424.insert(ComplexEventEndTime_424.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_424(FIX::UTCTIMEONLY(8, 55, 54));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_424);
          ComplexEventTimes_NoComplexEventTimes_424.insert(ComplexEventStartTime_424.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_424);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_425;
          FIX::ComplexEventEndTime ComplexEventEndTime_425(FIX::UTCTIMEONLY(11, 6, 58));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventEndTime_425);
          ComplexEventTimes_NoComplexEventTimes_425.insert(ComplexEventEndTime_425.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_425(FIX::UTCTIMEONLY(14, 52, 48));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventStartTime_425);
          ComplexEventTimes_NoComplexEventTimes_425.insert(ComplexEventStartTime_425.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_425);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_426;
          FIX::ComplexEventEndTime ComplexEventEndTime_426(FIX::UTCTIMEONLY(3, 34, 34));
          noComplexEventTimes_2_0_0_3_2.set(ComplexEventEndTime_426);
          ComplexEventTimes_NoComplexEventTimes_426.insert(ComplexEventEndTime_426.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_426(FIX::UTCTIMEONLY(5, 27, 48));
          noComplexEventTimes_2_0_0_3_2.set(ComplexEventStartTime_426);
          ComplexEventTimes_NoComplexEventTimes_426.insert(ComplexEventStartTime_426.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_426);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_213;
        FIX::ComplexEventEndDate ComplexEventEndDate_213(FIX::UTCTIMESTAMP(6, 22, 59, 15, 4, 2004));
        noComplexEventDates_2_0_2_1.set(ComplexEventEndDate_213);
        ComplexEventDates_NoComplexEventDates_213.insert(ComplexEventEndDate_213.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_213(FIX::UTCTIMESTAMP(18, 17, 12, 5, 6, 2008));
        noComplexEventDates_2_0_2_1.set(ComplexEventStartDate_213);
        ComplexEventDates_NoComplexEventDates_213.insert(ComplexEventStartDate_213.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_213);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_427;
          FIX::ComplexEventEndTime ComplexEventEndTime_427(FIX::UTCTIMEONLY(11, 6, 48));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventEndTime_427);
          ComplexEventTimes_NoComplexEventTimes_427.insert(ComplexEventEndTime_427.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_427(FIX::UTCTIMEONLY(12, 41, 26));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventStartTime_427);
          ComplexEventTimes_NoComplexEventTimes_427.insert(ComplexEventStartTime_427.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_427);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_428;
          FIX::ComplexEventEndTime ComplexEventEndTime_428(FIX::UTCTIMEONLY(0, 0, 39));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventEndTime_428);
          ComplexEventTimes_NoComplexEventTimes_428.insert(ComplexEventEndTime_428.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_428(FIX::UTCTIMEONLY(21, 59, 50));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventStartTime_428);
          ComplexEventTimes_NoComplexEventTimes_428.insert(ComplexEventStartTime_428.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_428);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_429;
          FIX::ComplexEventEndTime ComplexEventEndTime_429(FIX::UTCTIMEONLY(9, 4, 11));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventEndTime_429);
          ComplexEventTimes_NoComplexEventTimes_429.insert(ComplexEventEndTime_429.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_429(FIX::UTCTIMEONLY(11, 26, 7));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventStartTime_429);
          ComplexEventTimes_NoComplexEventTimes_429.insert(ComplexEventStartTime_429.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_429);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_103;
      FIX::ComplexEventCondition ComplexEventCondition_103(1);
      noComplexEvents_2_1_1.set(ComplexEventCondition_103);
      ComplexEvents_NoComplexEvents_103.insert(ComplexEventCondition_103.getString());
      FIX::ComplexEventPrice ComplexEventPrice_103;
      ComplexEventPrice_103.setString("21360778");
      noComplexEvents_2_1_1.set(ComplexEventPrice_103);
      ComplexEvents_NoComplexEvents_103.insert(ComplexEventPrice_103.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_103(5);
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryMethod_103);
      ComplexEvents_NoComplexEvents_103.insert(ComplexEventPriceBoundaryMethod_103.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_103;
      ComplexEventPriceBoundaryPrecision_103.setString("94.590000");
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryPrecision_103);
      ComplexEvents_NoComplexEvents_103.insert(ComplexEventPriceBoundaryPrecision_103.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_103(3);
      noComplexEvents_2_1_1.set(ComplexEventPriceTimeType_103);
      ComplexEvents_NoComplexEvents_103.insert(ComplexEventPriceTimeType_103.getString());
      FIX::ComplexEventType ComplexEventType_103(8);
      noComplexEvents_2_1_1.set(ComplexEventType_103);
      ComplexEvents_NoComplexEvents_103.insert(ComplexEventType_103.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_103;
      ComplexOptPayoutAmount_103.setString("8180584");
      noComplexEvents_2_1_1.set(ComplexOptPayoutAmount_103);
      ComplexEvents_NoComplexEvents_103.insert(ComplexOptPayoutAmount_103.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_103);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_214;
        FIX::ComplexEventEndDate ComplexEventEndDate_214(FIX::UTCTIMESTAMP(12, 35, 0, 4, 9, 2014));
        noComplexEventDates_2_1_2_0.set(ComplexEventEndDate_214);
        ComplexEventDates_NoComplexEventDates_214.insert(ComplexEventEndDate_214.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_214(FIX::UTCTIMESTAMP(20, 18, 53, 2, 5, 2016));
        noComplexEventDates_2_1_2_0.set(ComplexEventStartDate_214);
        ComplexEventDates_NoComplexEventDates_214.insert(ComplexEventStartDate_214.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_214);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_430;
          FIX::ComplexEventEndTime ComplexEventEndTime_430(FIX::UTCTIMEONLY(1, 1, 43));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventEndTime_430);
          ComplexEventTimes_NoComplexEventTimes_430.insert(ComplexEventEndTime_430.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_430(FIX::UTCTIMEONLY(12, 9, 24));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventStartTime_430);
          ComplexEventTimes_NoComplexEventTimes_430.insert(ComplexEventStartTime_430.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_430);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_431;
          FIX::ComplexEventEndTime ComplexEventEndTime_431(FIX::UTCTIMEONLY(9, 35, 9));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventEndTime_431);
          ComplexEventTimes_NoComplexEventTimes_431.insert(ComplexEventEndTime_431.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_431(FIX::UTCTIMEONLY(19, 0, 29));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventStartTime_431);
          ComplexEventTimes_NoComplexEventTimes_431.insert(ComplexEventStartTime_431.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_431);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_432;
          FIX::ComplexEventEndTime ComplexEventEndTime_432(FIX::UTCTIMEONLY(16, 4, 9));
          noComplexEventTimes_2_1_0_3_2.set(ComplexEventEndTime_432);
          ComplexEventTimes_NoComplexEventTimes_432.insert(ComplexEventEndTime_432.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_432(FIX::UTCTIMEONLY(1, 27, 26));
          noComplexEventTimes_2_1_0_3_2.set(ComplexEventStartTime_432);
          ComplexEventTimes_NoComplexEventTimes_432.insert(ComplexEventStartTime_432.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_432);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_2);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_215;
        FIX::ComplexEventEndDate ComplexEventEndDate_215(FIX::UTCTIMESTAMP(14, 19, 40, 2, 4, 2006));
        noComplexEventDates_2_1_2_1.set(ComplexEventEndDate_215);
        ComplexEventDates_NoComplexEventDates_215.insert(ComplexEventEndDate_215.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_215(FIX::UTCTIMESTAMP(8, 37, 13, 21, 7, 2009));
        noComplexEventDates_2_1_2_1.set(ComplexEventStartDate_215);
        ComplexEventDates_NoComplexEventDates_215.insert(ComplexEventStartDate_215.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_215);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_433;
          FIX::ComplexEventEndTime ComplexEventEndTime_433(FIX::UTCTIMEONLY(16, 41, 14));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventEndTime_433);
          ComplexEventTimes_NoComplexEventTimes_433.insert(ComplexEventEndTime_433.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_433(FIX::UTCTIMEONLY(4, 6, 55));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventStartTime_433);
          ComplexEventTimes_NoComplexEventTimes_433.insert(ComplexEventStartTime_433.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_433);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_434;
          FIX::ComplexEventEndTime ComplexEventEndTime_434(FIX::UTCTIMEONLY(22, 59, 39));
          noComplexEventTimes_2_1_1_3_1.set(ComplexEventEndTime_434);
          ComplexEventTimes_NoComplexEventTimes_434.insert(ComplexEventEndTime_434.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_434(FIX::UTCTIMEONLY(0, 58, 2));
          noComplexEventTimes_2_1_1_3_1.set(ComplexEventStartTime_434);
          ComplexEventTimes_NoComplexEventTimes_434.insert(ComplexEventStartTime_434.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_434);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_435;
          FIX::ComplexEventEndTime ComplexEventEndTime_435(FIX::UTCTIMEONLY(0, 13, 10));
          noComplexEventTimes_2_1_1_3_2.set(ComplexEventEndTime_435);
          ComplexEventTimes_NoComplexEventTimes_435.insert(ComplexEventEndTime_435.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_435(FIX::UTCTIMEONLY(17, 38, 56));
          noComplexEventTimes_2_1_1_3_2.set(ComplexEventStartTime_435);
          ComplexEventTimes_NoComplexEventTimes_435.insert(ComplexEventStartTime_435.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_435);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_2);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_104;
      FIX::ComplexEventCondition ComplexEventCondition_104(2);
      noComplexEvents_2_1_2.set(ComplexEventCondition_104);
      ComplexEvents_NoComplexEvents_104.insert(ComplexEventCondition_104.getString());
      FIX::ComplexEventPrice ComplexEventPrice_104;
      ComplexEventPrice_104.setString("1726940");
      noComplexEvents_2_1_2.set(ComplexEventPrice_104);
      ComplexEvents_NoComplexEvents_104.insert(ComplexEventPrice_104.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_104(3);
      noComplexEvents_2_1_2.set(ComplexEventPriceBoundaryMethod_104);
      ComplexEvents_NoComplexEvents_104.insert(ComplexEventPriceBoundaryMethod_104.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_104;
      ComplexEventPriceBoundaryPrecision_104.setString("78.030000");
      noComplexEvents_2_1_2.set(ComplexEventPriceBoundaryPrecision_104);
      ComplexEvents_NoComplexEvents_104.insert(ComplexEventPriceBoundaryPrecision_104.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_104(3);
      noComplexEvents_2_1_2.set(ComplexEventPriceTimeType_104);
      ComplexEvents_NoComplexEvents_104.insert(ComplexEventPriceTimeType_104.getString());
      FIX::ComplexEventType ComplexEventType_104(4);
      noComplexEvents_2_1_2.set(ComplexEventType_104);
      ComplexEvents_NoComplexEvents_104.insert(ComplexEventType_104.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_104;
      ComplexOptPayoutAmount_104.setString("6622577");
      noComplexEvents_2_1_2.set(ComplexOptPayoutAmount_104);
      ComplexEvents_NoComplexEvents_104.insert(ComplexOptPayoutAmount_104.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_104);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_216;
        FIX::ComplexEventEndDate ComplexEventEndDate_216(FIX::UTCTIMESTAMP(9, 12, 27, 25, 7, 2010));
        noComplexEventDates_2_2_2_0.set(ComplexEventEndDate_216);
        ComplexEventDates_NoComplexEventDates_216.insert(ComplexEventEndDate_216.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_216(FIX::UTCTIMESTAMP(21, 13, 46, 0, 7, 2002));
        noComplexEventDates_2_2_2_0.set(ComplexEventStartDate_216);
        ComplexEventDates_NoComplexEventDates_216.insert(ComplexEventStartDate_216.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_216);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_436;
          FIX::ComplexEventEndTime ComplexEventEndTime_436(FIX::UTCTIMEONLY(13, 48, 58));
          noComplexEventTimes_2_2_0_3_0.set(ComplexEventEndTime_436);
          ComplexEventTimes_NoComplexEventTimes_436.insert(ComplexEventEndTime_436.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_436(FIX::UTCTIMEONLY(9, 28, 36));
          noComplexEventTimes_2_2_0_3_0.set(ComplexEventStartTime_436);
          ComplexEventTimes_NoComplexEventTimes_436.insert(ComplexEventStartTime_436.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_436);

          noComplexEventDates_2_2_2_0.addGroup(noComplexEventTimes_2_2_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_437;
          FIX::ComplexEventEndTime ComplexEventEndTime_437(FIX::UTCTIMEONLY(0, 38, 53));
          noComplexEventTimes_2_2_0_3_1.set(ComplexEventEndTime_437);
          ComplexEventTimes_NoComplexEventTimes_437.insert(ComplexEventEndTime_437.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_437(FIX::UTCTIMEONLY(11, 22, 37));
          noComplexEventTimes_2_2_0_3_1.set(ComplexEventStartTime_437);
          ComplexEventTimes_NoComplexEventTimes_437.insert(ComplexEventStartTime_437.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_437);

          noComplexEventDates_2_2_2_0.addGroup(noComplexEventTimes_2_2_0_3_1);
        }
        noComplexEvents_2_1_2.addGroup(noComplexEventDates_2_2_2_0);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_109;
      FIX::EventDate EventDate_109("LOCALMKTDATE_277269023");
      noEvents_2_1_0.set(EventDate_109);
      EvntGrp_NoEvents_109.insert(EventDate_109.getString());
      FIX::EventPx EventPx_109;
      EventPx_109.setString("9762790");
      noEvents_2_1_0.set(EventPx_109);
      EvntGrp_NoEvents_109.insert(EventPx_109.getString());
      FIX::EventText EventText_109("STRING_1412671019");
      noEvents_2_1_0.set(EventText_109);
      EvntGrp_NoEvents_109.insert(EventText_109.getString());
      FIX::EventTime EventTime_109(FIX::UTCTIMESTAMP(0, 13, 8, 5, 7, 2000));
      noEvents_2_1_0.set(EventTime_109);
      EvntGrp_NoEvents_109.insert(EventTime_109.getString());
      FIX::EventType EventType_109(2);
      noEvents_2_1_0.set(EventType_109);
      EvntGrp_NoEvents_109.insert(EventType_109.getString());
      all_values.push_back(EvntGrp_NoEvents_109);

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_110;
      FIX::EventDate EventDate_110("LOCALMKTDATE_608635056");
      noEvents_2_1_1.set(EventDate_110);
      EvntGrp_NoEvents_110.insert(EventDate_110.getString());
      FIX::EventPx EventPx_110;
      EventPx_110.setString("173999");
      noEvents_2_1_1.set(EventPx_110);
      EvntGrp_NoEvents_110.insert(EventPx_110.getString());
      FIX::EventText EventText_110("STRING_1961794256");
      noEvents_2_1_1.set(EventText_110);
      EvntGrp_NoEvents_110.insert(EventText_110.getString());
      FIX::EventTime EventTime_110(FIX::UTCTIMESTAMP(7, 36, 14, 23, 2, 2007));
      noEvents_2_1_1.set(EventTime_110);
      EvntGrp_NoEvents_110.insert(EventTime_110.getString());
      FIX::EventType EventType_110(99);
      noEvents_2_1_1.set(EventType_110);
      EvntGrp_NoEvents_110.insert(EventType_110.getString());
      all_values.push_back(EvntGrp_NoEvents_110);

      noRelatedSym_0_2.addGroup(noEvents_2_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_114;
      FIX::InstrumentPartyID InstrumentPartyID_114("STRING_1831720159");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_114);
      InstrumentParties_NoInstrumentParties_114.insert(InstrumentPartyID_114.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_114('1');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_114);
      InstrumentParties_NoInstrumentParties_114.insert(InstrumentPartyIDSource_114.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_114(1250999089);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_114);
      InstrumentParties_NoInstrumentParties_114.insert(InstrumentPartyRole_114.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_114);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239;
        FIX::InstrumentPartySubID InstrumentPartySubID_239("STRING_1483900268");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_239);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239.insert(InstrumentPartySubID_239.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_239(264049503);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_239);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239.insert(InstrumentPartySubIDType_239.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240;
        FIX::InstrumentPartySubID InstrumentPartySubID_240("STRING_1348774587");
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubID_240);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240.insert(InstrumentPartySubID_240.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_240(956443120);
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubIDType_240);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240.insert(InstrumentPartySubIDType_240.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241;
        FIX::InstrumentPartySubID InstrumentPartySubID_241("STRING_541318526");
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubID_241);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241.insert(InstrumentPartySubID_241.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_241(177569948);
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubIDType_241);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241.insert(InstrumentPartySubIDType_241.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_115;
      FIX::InstrumentPartyID InstrumentPartyID_115("STRING_221630491");
      noInstrumentParties_2_1_1.set(InstrumentPartyID_115);
      InstrumentParties_NoInstrumentParties_115.insert(InstrumentPartyID_115.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_115('2');
      noInstrumentParties_2_1_1.set(InstrumentPartyIDSource_115);
      InstrumentParties_NoInstrumentParties_115.insert(InstrumentPartyIDSource_115.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_115(1113206948);
      noInstrumentParties_2_1_1.set(InstrumentPartyRole_115);
      InstrumentParties_NoInstrumentParties_115.insert(InstrumentPartyRole_115.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_115);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242;
        FIX::InstrumentPartySubID InstrumentPartySubID_242("STRING_1210099527");
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubID_242);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242.insert(InstrumentPartySubID_242.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_242(1479086817);
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubIDType_242);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242.insert(InstrumentPartySubIDType_242.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243;
        FIX::InstrumentPartySubID InstrumentPartySubID_243("STRING_1690628342");
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubID_243);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243.insert(InstrumentPartySubID_243.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_243(563773093);
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubIDType_243);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243.insert(InstrumentPartySubIDType_243.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244;
        FIX::InstrumentPartySubID InstrumentPartySubID_244("STRING_170172851");
        noInstrumentPartySubIDs_2_1_2_2.set(InstrumentPartySubID_244);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244.insert(InstrumentPartySubID_244.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_244(151779751);
        noInstrumentPartySubIDs_2_1_2_2.set(InstrumentPartySubIDType_244);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244.insert(InstrumentPartySubIDType_244.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_119;
      FIX::SecurityAltID SecurityAltID_119("STRING_2131967107");
      noSecurityAltID_2_1_0.set(SecurityAltID_119);
      SecAltIDGrp_NoSecurityAltID_119.insert(SecurityAltID_119.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_119("STRING_1444208935");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_119);
      SecAltIDGrp_NoSecurityAltID_119.insert(SecurityAltIDSource_119.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_119);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_120;
      FIX::SecurityAltID SecurityAltID_120("STRING_836558247");
      noSecurityAltID_2_1_1.set(SecurityAltID_120);
      SecAltIDGrp_NoSecurityAltID_120.insert(SecurityAltID_120.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_120("STRING_1347177035");
      noSecurityAltID_2_1_1.set(SecurityAltIDSource_120);
      SecAltIDGrp_NoSecurityAltID_120.insert(SecurityAltIDSource_120.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_120);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_121;
      FIX::SecurityAltID SecurityAltID_121("STRING_423191702");
      noSecurityAltID_2_1_2.set(SecurityAltID_121);
      SecAltIDGrp_NoSecurityAltID_121.insert(SecurityAltID_121.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_121("STRING_1564606430");
      noSecurityAltID_2_1_2.set(SecurityAltIDSource_121);
      SecAltIDGrp_NoSecurityAltID_121.insert(SecurityAltIDSource_121.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_121);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_106;
    FIX::SecurityXML SecurityXML_107("XMLDATA_1923461340");
    noRelatedSym_0_2.set(SecurityXML_107);
    FIX::SecurityXMLLen SecurityXMLLen_53(1815937965);
    noRelatedSym_0_2.set(SecurityXMLLen_53);
    FIX::SecurityXMLSchema SecurityXMLSchema_53("STRING_1387261421");
    noRelatedSym_0_2.set(SecurityXMLSchema_53);
    SecurityXML_106.insert(SecurityXMLSchema_53.getString());
    all_values.push_back(SecurityXML_106);

    msg.addGroup(noRelatedSym_0_2);
  }
  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::News::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_88;
    FIX::EncodedLegIssuer EncodedLegIssuer_88("DATA_1500174476");
    noLegs_0_0.set(EncodedLegIssuer_88);
    InstrumentLeg_88.insert(EncodedLegIssuer_88.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_88(872350982);
    noLegs_0_0.set(EncodedLegIssuerLen_88);
    InstrumentLeg_88.insert(EncodedLegIssuerLen_88.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_88("DATA_1779699576");
    noLegs_0_0.set(EncodedLegSecurityDesc_88);
    InstrumentLeg_88.insert(EncodedLegSecurityDesc_88.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_88(345038918);
    noLegs_0_0.set(EncodedLegSecurityDescLen_88);
    InstrumentLeg_88.insert(EncodedLegSecurityDescLen_88.getString());
    FIX::LegCFICode LegCFICode_88("STRING_208767602");
    noLegs_0_0.set(LegCFICode_88);
    InstrumentLeg_88.insert(LegCFICode_88.getString());
    FIX::LegContractMultiplier LegContractMultiplier_88;
    LegContractMultiplier_88.setString("20437490");
    noLegs_0_0.set(LegContractMultiplier_88);
    InstrumentLeg_88.insert(LegContractMultiplier_88.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_88(1693813505);
    noLegs_0_0.set(LegContractMultiplierUnit_88);
    InstrumentLeg_88.insert(LegContractMultiplierUnit_88.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_88("MONTHYEAR_1165210722");
    noLegs_0_0.set(LegContractSettlMonth_88);
    InstrumentLeg_88.insert(LegContractSettlMonth_88.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_88("COUNTRY_437583958");
    noLegs_0_0.set(LegCountryOfIssue_88);
    InstrumentLeg_88.insert(LegCountryOfIssue_88.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_88("LOCALMKTDATE_1871383454");
    noLegs_0_0.set(LegCouponPaymentDate_88);
    InstrumentLeg_88.insert(LegCouponPaymentDate_88.getString());
    FIX::LegCouponRate LegCouponRate_88;
    LegCouponRate_88.setString("12.130000");
    noLegs_0_0.set(LegCouponRate_88);
    InstrumentLeg_88.insert(LegCouponRate_88.getString());
    FIX::LegCreditRating LegCreditRating_88("STRING_387785537");
    noLegs_0_0.set(LegCreditRating_88);
    InstrumentLeg_88.insert(LegCreditRating_88.getString());
    FIX::LegCurrency LegCurrency_88("EUR");
    noLegs_0_0.set(LegCurrency_88);
    InstrumentLeg_88.insert(LegCurrency_88.getString());
    FIX::LegDatedDate LegDatedDate_88("LOCALMKTDATE_1597885065");
    noLegs_0_0.set(LegDatedDate_88);
    InstrumentLeg_88.insert(LegDatedDate_88.getString());
    FIX::LegExerciseStyle LegExerciseStyle_88(168709924);
    noLegs_0_0.set(LegExerciseStyle_88);
    InstrumentLeg_88.insert(LegExerciseStyle_88.getString());
    FIX::LegFactor LegFactor_88;
    LegFactor_88.setString("3847792");
    noLegs_0_0.set(LegFactor_88);
    InstrumentLeg_88.insert(LegFactor_88.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_88(14174510);
    noLegs_0_0.set(LegFlowScheduleType_88);
    InstrumentLeg_88.insert(LegFlowScheduleType_88.getString());
    FIX::LegInstrRegistry LegInstrRegistry_88("STRING_338882775");
    noLegs_0_0.set(LegInstrRegistry_88);
    InstrumentLeg_88.insert(LegInstrRegistry_88.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_88("LOCALMKTDATE_536558955");
    noLegs_0_0.set(LegInterestAccrualDate_88);
    InstrumentLeg_88.insert(LegInterestAccrualDate_88.getString());
    FIX::LegIssueDate LegIssueDate_88("LOCALMKTDATE_595347574");
    noLegs_0_0.set(LegIssueDate_88);
    InstrumentLeg_88.insert(LegIssueDate_88.getString());
    FIX::LegIssuer LegIssuer_88("STRING_323366234");
    noLegs_0_0.set(LegIssuer_88);
    InstrumentLeg_88.insert(LegIssuer_88.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_88("STRING_1980767890");
    noLegs_0_0.set(LegLocaleOfIssue_88);
    InstrumentLeg_88.insert(LegLocaleOfIssue_88.getString());
    FIX::LegMaturityDate LegMaturityDate_88("LOCALMKTDATE_1431905822");
    noLegs_0_0.set(LegMaturityDate_88);
    InstrumentLeg_88.insert(LegMaturityDate_88.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_88("MONTHYEAR_1670543269");
    noLegs_0_0.set(LegMaturityMonthYear_88);
    InstrumentLeg_88.insert(LegMaturityMonthYear_88.getString());
    FIX::LegMaturityTime LegMaturityTime_88("TZTIMEONLY_256475944");
    noLegs_0_0.set(LegMaturityTime_88);
    InstrumentLeg_88.insert(LegMaturityTime_88.getString());
    FIX::LegOptAttribute LegOptAttribute_88('8');
    noLegs_0_0.set(LegOptAttribute_88);
    InstrumentLeg_88.insert(LegOptAttribute_88.getString());
    FIX::LegOptionRatio LegOptionRatio_88;
    LegOptionRatio_88.setString("14465209");
    noLegs_0_0.set(LegOptionRatio_88);
    InstrumentLeg_88.insert(LegOptionRatio_88.getString());
    FIX::LegPool LegPool_88("STRING_2072413909");
    noLegs_0_0.set(LegPool_88);
    InstrumentLeg_88.insert(LegPool_88.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_88("STRING_88806378");
    noLegs_0_0.set(LegPriceUnitOfMeasure_88);
    InstrumentLeg_88.insert(LegPriceUnitOfMeasure_88.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_88;
    LegPriceUnitOfMeasureQty_88.setString("19752214");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_88);
    InstrumentLeg_88.insert(LegPriceUnitOfMeasureQty_88.getString());
    FIX::LegProduct LegProduct_88(1425104738);
    noLegs_0_0.set(LegProduct_88);
    InstrumentLeg_88.insert(LegProduct_88.getString());
    FIX::LegPutOrCall LegPutOrCall_88(961157360);
    noLegs_0_0.set(LegPutOrCall_88);
    InstrumentLeg_88.insert(LegPutOrCall_88.getString());
    FIX::LegRatioQty LegRatioQty_88;
    LegRatioQty_88.setString("16074373");
    noLegs_0_0.set(LegRatioQty_88);
    InstrumentLeg_88.insert(LegRatioQty_88.getString());
    FIX::LegRedemptionDate LegRedemptionDate_88("LOCALMKTDATE_1770143656");
    noLegs_0_0.set(LegRedemptionDate_88);
    InstrumentLeg_88.insert(LegRedemptionDate_88.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_88("STRING_1169924963");
    noLegs_0_0.set(LegRepoCollateralSecurityType_88);
    InstrumentLeg_88.insert(LegRepoCollateralSecurityType_88.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_88;
    LegRepurchaseRate_88.setString("28.080000");
    noLegs_0_0.set(LegRepurchaseRate_88);
    InstrumentLeg_88.insert(LegRepurchaseRate_88.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_88(1316473514);
    noLegs_0_0.set(LegRepurchaseTerm_88);
    InstrumentLeg_88.insert(LegRepurchaseTerm_88.getString());
    FIX::LegSecurityDesc LegSecurityDesc_88("STRING_187652037");
    noLegs_0_0.set(LegSecurityDesc_88);
    InstrumentLeg_88.insert(LegSecurityDesc_88.getString());
    FIX::LegSecurityExchange LegSecurityExchange_88("EXCHANGE_1941286766");
    noLegs_0_0.set(LegSecurityExchange_88);
    InstrumentLeg_88.insert(LegSecurityExchange_88.getString());
    FIX::LegSecurityID LegSecurityID_88("STRING_1040373320");
    noLegs_0_0.set(LegSecurityID_88);
    InstrumentLeg_88.insert(LegSecurityID_88.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_88("STRING_1574493251");
    noLegs_0_0.set(LegSecurityIDSource_88);
    InstrumentLeg_88.insert(LegSecurityIDSource_88.getString());
    FIX::LegSecuritySubType LegSecuritySubType_88("STRING_181588656");
    noLegs_0_0.set(LegSecuritySubType_88);
    InstrumentLeg_88.insert(LegSecuritySubType_88.getString());
    FIX::LegSecurityType LegSecurityType_88("STRING_1877480074");
    noLegs_0_0.set(LegSecurityType_88);
    InstrumentLeg_88.insert(LegSecurityType_88.getString());
    FIX::LegSide LegSide_88('2');
    noLegs_0_0.set(LegSide_88);
    InstrumentLeg_88.insert(LegSide_88.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_88("STRING_1779473721");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_88);
    InstrumentLeg_88.insert(LegStateOrProvinceOfIssue_88.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_88("USD");
    noLegs_0_0.set(LegStrikeCurrency_88);
    InstrumentLeg_88.insert(LegStrikeCurrency_88.getString());
    FIX::LegStrikePrice LegStrikePrice_88;
    LegStrikePrice_88.setString("17936482");
    noLegs_0_0.set(LegStrikePrice_88);
    InstrumentLeg_88.insert(LegStrikePrice_88.getString());
    FIX::LegSymbol LegSymbol_88("STRING_237589125");
    noLegs_0_0.set(LegSymbol_88);
    InstrumentLeg_88.insert(LegSymbol_88.getString());
    FIX::LegSymbolSfx LegSymbolSfx_88("STRING_1189982271");
    noLegs_0_0.set(LegSymbolSfx_88);
    InstrumentLeg_88.insert(LegSymbolSfx_88.getString());
    FIX::LegTimeUnit LegTimeUnit_88("STRING_241512158");
    noLegs_0_0.set(LegTimeUnit_88);
    InstrumentLeg_88.insert(LegTimeUnit_88.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_88("STRING_560955359");
    noLegs_0_0.set(LegUnitOfMeasure_88);
    InstrumentLeg_88.insert(LegUnitOfMeasure_88.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_88;
    LegUnitOfMeasureQty_88.setString("10232665");
    noLegs_0_0.set(LegUnitOfMeasureQty_88);
    InstrumentLeg_88.insert(LegUnitOfMeasureQty_88.getString());
    all_values.push_back(InstrumentLeg_88);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_173;
      FIX::LegSecurityAltID LegSecurityAltID_173("STRING_84014980");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_173);
      LegSecAltIDGrp_NoLegSecurityAltID_173.insert(LegSecurityAltID_173.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_173("STRING_1279742458");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_173);
      LegSecAltIDGrp_NoLegSecurityAltID_173.insert(LegSecurityAltIDSource_173.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_173);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_174;
      FIX::LegSecurityAltID LegSecurityAltID_174("STRING_374962936");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_174);
      LegSecAltIDGrp_NoLegSecurityAltID_174.insert(LegSecurityAltID_174.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_174("STRING_1530535941");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_174);
      LegSecAltIDGrp_NoLegSecurityAltID_174.insert(LegSecurityAltIDSource_174.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_174);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::News::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_89;
    FIX::EncodedLegIssuer EncodedLegIssuer_89("DATA_1204672720");
    noLegs_0_1.set(EncodedLegIssuer_89);
    InstrumentLeg_89.insert(EncodedLegIssuer_89.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_89(463769314);
    noLegs_0_1.set(EncodedLegIssuerLen_89);
    InstrumentLeg_89.insert(EncodedLegIssuerLen_89.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_89("DATA_1358273742");
    noLegs_0_1.set(EncodedLegSecurityDesc_89);
    InstrumentLeg_89.insert(EncodedLegSecurityDesc_89.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_89(482293810);
    noLegs_0_1.set(EncodedLegSecurityDescLen_89);
    InstrumentLeg_89.insert(EncodedLegSecurityDescLen_89.getString());
    FIX::LegCFICode LegCFICode_89("STRING_1424926675");
    noLegs_0_1.set(LegCFICode_89);
    InstrumentLeg_89.insert(LegCFICode_89.getString());
    FIX::LegContractMultiplier LegContractMultiplier_89;
    LegContractMultiplier_89.setString("8182274");
    noLegs_0_1.set(LegContractMultiplier_89);
    InstrumentLeg_89.insert(LegContractMultiplier_89.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_89(104953818);
    noLegs_0_1.set(LegContractMultiplierUnit_89);
    InstrumentLeg_89.insert(LegContractMultiplierUnit_89.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_89("MONTHYEAR_447367990");
    noLegs_0_1.set(LegContractSettlMonth_89);
    InstrumentLeg_89.insert(LegContractSettlMonth_89.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_89("COUNTRY_174446631");
    noLegs_0_1.set(LegCountryOfIssue_89);
    InstrumentLeg_89.insert(LegCountryOfIssue_89.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_89("LOCALMKTDATE_1421427332");
    noLegs_0_1.set(LegCouponPaymentDate_89);
    InstrumentLeg_89.insert(LegCouponPaymentDate_89.getString());
    FIX::LegCouponRate LegCouponRate_89;
    LegCouponRate_89.setString("0.270000");
    noLegs_0_1.set(LegCouponRate_89);
    InstrumentLeg_89.insert(LegCouponRate_89.getString());
    FIX::LegCreditRating LegCreditRating_89("STRING_2115733398");
    noLegs_0_1.set(LegCreditRating_89);
    InstrumentLeg_89.insert(LegCreditRating_89.getString());
    FIX::LegCurrency LegCurrency_89("JPY");
    noLegs_0_1.set(LegCurrency_89);
    InstrumentLeg_89.insert(LegCurrency_89.getString());
    FIX::LegDatedDate LegDatedDate_89("LOCALMKTDATE_149838406");
    noLegs_0_1.set(LegDatedDate_89);
    InstrumentLeg_89.insert(LegDatedDate_89.getString());
    FIX::LegExerciseStyle LegExerciseStyle_89(44313431);
    noLegs_0_1.set(LegExerciseStyle_89);
    InstrumentLeg_89.insert(LegExerciseStyle_89.getString());
    FIX::LegFactor LegFactor_89;
    LegFactor_89.setString("3306737");
    noLegs_0_1.set(LegFactor_89);
    InstrumentLeg_89.insert(LegFactor_89.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_89(1929312127);
    noLegs_0_1.set(LegFlowScheduleType_89);
    InstrumentLeg_89.insert(LegFlowScheduleType_89.getString());
    FIX::LegInstrRegistry LegInstrRegistry_89("STRING_2090503429");
    noLegs_0_1.set(LegInstrRegistry_89);
    InstrumentLeg_89.insert(LegInstrRegistry_89.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_89("LOCALMKTDATE_984097059");
    noLegs_0_1.set(LegInterestAccrualDate_89);
    InstrumentLeg_89.insert(LegInterestAccrualDate_89.getString());
    FIX::LegIssueDate LegIssueDate_89("LOCALMKTDATE_1575476710");
    noLegs_0_1.set(LegIssueDate_89);
    InstrumentLeg_89.insert(LegIssueDate_89.getString());
    FIX::LegIssuer LegIssuer_89("STRING_180608907");
    noLegs_0_1.set(LegIssuer_89);
    InstrumentLeg_89.insert(LegIssuer_89.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_89("STRING_26595683");
    noLegs_0_1.set(LegLocaleOfIssue_89);
    InstrumentLeg_89.insert(LegLocaleOfIssue_89.getString());
    FIX::LegMaturityDate LegMaturityDate_89("LOCALMKTDATE_1816988868");
    noLegs_0_1.set(LegMaturityDate_89);
    InstrumentLeg_89.insert(LegMaturityDate_89.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_89("MONTHYEAR_741564266");
    noLegs_0_1.set(LegMaturityMonthYear_89);
    InstrumentLeg_89.insert(LegMaturityMonthYear_89.getString());
    FIX::LegMaturityTime LegMaturityTime_89("TZTIMEONLY_1049862197");
    noLegs_0_1.set(LegMaturityTime_89);
    InstrumentLeg_89.insert(LegMaturityTime_89.getString());
    FIX::LegOptAttribute LegOptAttribute_89('1');
    noLegs_0_1.set(LegOptAttribute_89);
    InstrumentLeg_89.insert(LegOptAttribute_89.getString());
    FIX::LegOptionRatio LegOptionRatio_89;
    LegOptionRatio_89.setString("8255792");
    noLegs_0_1.set(LegOptionRatio_89);
    InstrumentLeg_89.insert(LegOptionRatio_89.getString());
    FIX::LegPool LegPool_89("STRING_182121007");
    noLegs_0_1.set(LegPool_89);
    InstrumentLeg_89.insert(LegPool_89.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_89("STRING_1717886137");
    noLegs_0_1.set(LegPriceUnitOfMeasure_89);
    InstrumentLeg_89.insert(LegPriceUnitOfMeasure_89.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_89;
    LegPriceUnitOfMeasureQty_89.setString("2086315");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_89);
    InstrumentLeg_89.insert(LegPriceUnitOfMeasureQty_89.getString());
    FIX::LegProduct LegProduct_89(1386793727);
    noLegs_0_1.set(LegProduct_89);
    InstrumentLeg_89.insert(LegProduct_89.getString());
    FIX::LegPutOrCall LegPutOrCall_89(34171803);
    noLegs_0_1.set(LegPutOrCall_89);
    InstrumentLeg_89.insert(LegPutOrCall_89.getString());
    FIX::LegRatioQty LegRatioQty_89;
    LegRatioQty_89.setString("15669052");
    noLegs_0_1.set(LegRatioQty_89);
    InstrumentLeg_89.insert(LegRatioQty_89.getString());
    FIX::LegRedemptionDate LegRedemptionDate_89("LOCALMKTDATE_1869087537");
    noLegs_0_1.set(LegRedemptionDate_89);
    InstrumentLeg_89.insert(LegRedemptionDate_89.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_89("STRING_1459098478");
    noLegs_0_1.set(LegRepoCollateralSecurityType_89);
    InstrumentLeg_89.insert(LegRepoCollateralSecurityType_89.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_89;
    LegRepurchaseRate_89.setString("91.050000");
    noLegs_0_1.set(LegRepurchaseRate_89);
    InstrumentLeg_89.insert(LegRepurchaseRate_89.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_89(1974041356);
    noLegs_0_1.set(LegRepurchaseTerm_89);
    InstrumentLeg_89.insert(LegRepurchaseTerm_89.getString());
    FIX::LegSecurityDesc LegSecurityDesc_89("STRING_1906466468");
    noLegs_0_1.set(LegSecurityDesc_89);
    InstrumentLeg_89.insert(LegSecurityDesc_89.getString());
    FIX::LegSecurityExchange LegSecurityExchange_89("EXCHANGE_412095737");
    noLegs_0_1.set(LegSecurityExchange_89);
    InstrumentLeg_89.insert(LegSecurityExchange_89.getString());
    FIX::LegSecurityID LegSecurityID_89("STRING_1247985040");
    noLegs_0_1.set(LegSecurityID_89);
    InstrumentLeg_89.insert(LegSecurityID_89.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_89("STRING_394002848");
    noLegs_0_1.set(LegSecurityIDSource_89);
    InstrumentLeg_89.insert(LegSecurityIDSource_89.getString());
    FIX::LegSecuritySubType LegSecuritySubType_89("STRING_380345487");
    noLegs_0_1.set(LegSecuritySubType_89);
    InstrumentLeg_89.insert(LegSecuritySubType_89.getString());
    FIX::LegSecurityType LegSecurityType_89("STRING_1562302045");
    noLegs_0_1.set(LegSecurityType_89);
    InstrumentLeg_89.insert(LegSecurityType_89.getString());
    FIX::LegSide LegSide_89('4');
    noLegs_0_1.set(LegSide_89);
    InstrumentLeg_89.insert(LegSide_89.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_89("STRING_530183893");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_89);
    InstrumentLeg_89.insert(LegStateOrProvinceOfIssue_89.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_89("CHF");
    noLegs_0_1.set(LegStrikeCurrency_89);
    InstrumentLeg_89.insert(LegStrikeCurrency_89.getString());
    FIX::LegStrikePrice LegStrikePrice_89;
    LegStrikePrice_89.setString("3120123");
    noLegs_0_1.set(LegStrikePrice_89);
    InstrumentLeg_89.insert(LegStrikePrice_89.getString());
    FIX::LegSymbol LegSymbol_89("STRING_1549635257");
    noLegs_0_1.set(LegSymbol_89);
    InstrumentLeg_89.insert(LegSymbol_89.getString());
    FIX::LegSymbolSfx LegSymbolSfx_89("STRING_1770803281");
    noLegs_0_1.set(LegSymbolSfx_89);
    InstrumentLeg_89.insert(LegSymbolSfx_89.getString());
    FIX::LegTimeUnit LegTimeUnit_89("STRING_1887489082");
    noLegs_0_1.set(LegTimeUnit_89);
    InstrumentLeg_89.insert(LegTimeUnit_89.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_89("STRING_1730244164");
    noLegs_0_1.set(LegUnitOfMeasure_89);
    InstrumentLeg_89.insert(LegUnitOfMeasure_89.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_89;
    LegUnitOfMeasureQty_89.setString("17973989");
    noLegs_0_1.set(LegUnitOfMeasureQty_89);
    InstrumentLeg_89.insert(LegUnitOfMeasureQty_89.getString());
    all_values.push_back(InstrumentLeg_89);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_175;
      FIX::LegSecurityAltID LegSecurityAltID_175("STRING_324324783");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_175);
      LegSecAltIDGrp_NoLegSecurityAltID_175.insert(LegSecurityAltID_175.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_175("STRING_699777513");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_175);
      LegSecAltIDGrp_NoLegSecurityAltID_175.insert(LegSecurityAltIDSource_175.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_175);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::News::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_90;
    FIX::EncodedLegIssuer EncodedLegIssuer_90("DATA_752433855");
    noLegs_0_2.set(EncodedLegIssuer_90);
    InstrumentLeg_90.insert(EncodedLegIssuer_90.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_90(1149904030);
    noLegs_0_2.set(EncodedLegIssuerLen_90);
    InstrumentLeg_90.insert(EncodedLegIssuerLen_90.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_90("DATA_881898520");
    noLegs_0_2.set(EncodedLegSecurityDesc_90);
    InstrumentLeg_90.insert(EncodedLegSecurityDesc_90.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_90(322836344);
    noLegs_0_2.set(EncodedLegSecurityDescLen_90);
    InstrumentLeg_90.insert(EncodedLegSecurityDescLen_90.getString());
    FIX::LegCFICode LegCFICode_90("STRING_1358535570");
    noLegs_0_2.set(LegCFICode_90);
    InstrumentLeg_90.insert(LegCFICode_90.getString());
    FIX::LegContractMultiplier LegContractMultiplier_90;
    LegContractMultiplier_90.setString("1212086");
    noLegs_0_2.set(LegContractMultiplier_90);
    InstrumentLeg_90.insert(LegContractMultiplier_90.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_90(357008148);
    noLegs_0_2.set(LegContractMultiplierUnit_90);
    InstrumentLeg_90.insert(LegContractMultiplierUnit_90.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_90("MONTHYEAR_777957205");
    noLegs_0_2.set(LegContractSettlMonth_90);
    InstrumentLeg_90.insert(LegContractSettlMonth_90.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_90("COUNTRY_1990296137");
    noLegs_0_2.set(LegCountryOfIssue_90);
    InstrumentLeg_90.insert(LegCountryOfIssue_90.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_90("LOCALMKTDATE_1816106626");
    noLegs_0_2.set(LegCouponPaymentDate_90);
    InstrumentLeg_90.insert(LegCouponPaymentDate_90.getString());
    FIX::LegCouponRate LegCouponRate_90;
    LegCouponRate_90.setString("63.100000");
    noLegs_0_2.set(LegCouponRate_90);
    InstrumentLeg_90.insert(LegCouponRate_90.getString());
    FIX::LegCreditRating LegCreditRating_90("STRING_1816853845");
    noLegs_0_2.set(LegCreditRating_90);
    InstrumentLeg_90.insert(LegCreditRating_90.getString());
    FIX::LegCurrency LegCurrency_90("EUR");
    noLegs_0_2.set(LegCurrency_90);
    InstrumentLeg_90.insert(LegCurrency_90.getString());
    FIX::LegDatedDate LegDatedDate_90("LOCALMKTDATE_917355238");
    noLegs_0_2.set(LegDatedDate_90);
    InstrumentLeg_90.insert(LegDatedDate_90.getString());
    FIX::LegExerciseStyle LegExerciseStyle_90(1969092295);
    noLegs_0_2.set(LegExerciseStyle_90);
    InstrumentLeg_90.insert(LegExerciseStyle_90.getString());
    FIX::LegFactor LegFactor_90;
    LegFactor_90.setString("18080475");
    noLegs_0_2.set(LegFactor_90);
    InstrumentLeg_90.insert(LegFactor_90.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_90(332173635);
    noLegs_0_2.set(LegFlowScheduleType_90);
    InstrumentLeg_90.insert(LegFlowScheduleType_90.getString());
    FIX::LegInstrRegistry LegInstrRegistry_90("STRING_277641125");
    noLegs_0_2.set(LegInstrRegistry_90);
    InstrumentLeg_90.insert(LegInstrRegistry_90.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_90("LOCALMKTDATE_190747779");
    noLegs_0_2.set(LegInterestAccrualDate_90);
    InstrumentLeg_90.insert(LegInterestAccrualDate_90.getString());
    FIX::LegIssueDate LegIssueDate_90("LOCALMKTDATE_1938789111");
    noLegs_0_2.set(LegIssueDate_90);
    InstrumentLeg_90.insert(LegIssueDate_90.getString());
    FIX::LegIssuer LegIssuer_90("STRING_1064347347");
    noLegs_0_2.set(LegIssuer_90);
    InstrumentLeg_90.insert(LegIssuer_90.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_90("STRING_502760151");
    noLegs_0_2.set(LegLocaleOfIssue_90);
    InstrumentLeg_90.insert(LegLocaleOfIssue_90.getString());
    FIX::LegMaturityDate LegMaturityDate_90("LOCALMKTDATE_1340940720");
    noLegs_0_2.set(LegMaturityDate_90);
    InstrumentLeg_90.insert(LegMaturityDate_90.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_90("MONTHYEAR_687666980");
    noLegs_0_2.set(LegMaturityMonthYear_90);
    InstrumentLeg_90.insert(LegMaturityMonthYear_90.getString());
    FIX::LegMaturityTime LegMaturityTime_90("TZTIMEONLY_242765586");
    noLegs_0_2.set(LegMaturityTime_90);
    InstrumentLeg_90.insert(LegMaturityTime_90.getString());
    FIX::LegOptAttribute LegOptAttribute_90('9');
    noLegs_0_2.set(LegOptAttribute_90);
    InstrumentLeg_90.insert(LegOptAttribute_90.getString());
    FIX::LegOptionRatio LegOptionRatio_90;
    LegOptionRatio_90.setString("3375822");
    noLegs_0_2.set(LegOptionRatio_90);
    InstrumentLeg_90.insert(LegOptionRatio_90.getString());
    FIX::LegPool LegPool_90("STRING_1799759889");
    noLegs_0_2.set(LegPool_90);
    InstrumentLeg_90.insert(LegPool_90.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_90("STRING_1248026020");
    noLegs_0_2.set(LegPriceUnitOfMeasure_90);
    InstrumentLeg_90.insert(LegPriceUnitOfMeasure_90.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_90;
    LegPriceUnitOfMeasureQty_90.setString("10373598");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_90);
    InstrumentLeg_90.insert(LegPriceUnitOfMeasureQty_90.getString());
    FIX::LegProduct LegProduct_90(404710096);
    noLegs_0_2.set(LegProduct_90);
    InstrumentLeg_90.insert(LegProduct_90.getString());
    FIX::LegPutOrCall LegPutOrCall_90(250446402);
    noLegs_0_2.set(LegPutOrCall_90);
    InstrumentLeg_90.insert(LegPutOrCall_90.getString());
    FIX::LegRatioQty LegRatioQty_90;
    LegRatioQty_90.setString("19192583");
    noLegs_0_2.set(LegRatioQty_90);
    InstrumentLeg_90.insert(LegRatioQty_90.getString());
    FIX::LegRedemptionDate LegRedemptionDate_90("LOCALMKTDATE_727546441");
    noLegs_0_2.set(LegRedemptionDate_90);
    InstrumentLeg_90.insert(LegRedemptionDate_90.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_90("STRING_1608981972");
    noLegs_0_2.set(LegRepoCollateralSecurityType_90);
    InstrumentLeg_90.insert(LegRepoCollateralSecurityType_90.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_90;
    LegRepurchaseRate_90.setString("69.290000");
    noLegs_0_2.set(LegRepurchaseRate_90);
    InstrumentLeg_90.insert(LegRepurchaseRate_90.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_90(1084554589);
    noLegs_0_2.set(LegRepurchaseTerm_90);
    InstrumentLeg_90.insert(LegRepurchaseTerm_90.getString());
    FIX::LegSecurityDesc LegSecurityDesc_90("STRING_239455529");
    noLegs_0_2.set(LegSecurityDesc_90);
    InstrumentLeg_90.insert(LegSecurityDesc_90.getString());
    FIX::LegSecurityExchange LegSecurityExchange_90("EXCHANGE_1883279419");
    noLegs_0_2.set(LegSecurityExchange_90);
    InstrumentLeg_90.insert(LegSecurityExchange_90.getString());
    FIX::LegSecurityID LegSecurityID_90("STRING_753177567");
    noLegs_0_2.set(LegSecurityID_90);
    InstrumentLeg_90.insert(LegSecurityID_90.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_90("STRING_1255061840");
    noLegs_0_2.set(LegSecurityIDSource_90);
    InstrumentLeg_90.insert(LegSecurityIDSource_90.getString());
    FIX::LegSecuritySubType LegSecuritySubType_90("STRING_1552649616");
    noLegs_0_2.set(LegSecuritySubType_90);
    InstrumentLeg_90.insert(LegSecuritySubType_90.getString());
    FIX::LegSecurityType LegSecurityType_90("STRING_180783366");
    noLegs_0_2.set(LegSecurityType_90);
    InstrumentLeg_90.insert(LegSecurityType_90.getString());
    FIX::LegSide LegSide_90('5');
    noLegs_0_2.set(LegSide_90);
    InstrumentLeg_90.insert(LegSide_90.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_90("STRING_322521206");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_90);
    InstrumentLeg_90.insert(LegStateOrProvinceOfIssue_90.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_90("JPY");
    noLegs_0_2.set(LegStrikeCurrency_90);
    InstrumentLeg_90.insert(LegStrikeCurrency_90.getString());
    FIX::LegStrikePrice LegStrikePrice_90;
    LegStrikePrice_90.setString("6546948");
    noLegs_0_2.set(LegStrikePrice_90);
    InstrumentLeg_90.insert(LegStrikePrice_90.getString());
    FIX::LegSymbol LegSymbol_90("STRING_280033139");
    noLegs_0_2.set(LegSymbol_90);
    InstrumentLeg_90.insert(LegSymbol_90.getString());
    FIX::LegSymbolSfx LegSymbolSfx_90("STRING_386591905");
    noLegs_0_2.set(LegSymbolSfx_90);
    InstrumentLeg_90.insert(LegSymbolSfx_90.getString());
    FIX::LegTimeUnit LegTimeUnit_90("STRING_446000304");
    noLegs_0_2.set(LegTimeUnit_90);
    InstrumentLeg_90.insert(LegTimeUnit_90.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_90("STRING_1344380486");
    noLegs_0_2.set(LegUnitOfMeasure_90);
    InstrumentLeg_90.insert(LegUnitOfMeasure_90.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_90;
    LegUnitOfMeasureQty_90.setString("8893520");
    noLegs_0_2.set(LegUnitOfMeasureQty_90);
    InstrumentLeg_90.insert(LegUnitOfMeasureQty_90.getString());
    all_values.push_back(InstrumentLeg_90);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_176;
      FIX::LegSecurityAltID LegSecurityAltID_176("STRING_2032047466");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_176);
      LegSecAltIDGrp_NoLegSecurityAltID_176.insert(LegSecurityAltID_176.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_176("STRING_1132117643");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_176);
      LegSecAltIDGrp_NoLegSecurityAltID_176.insert(LegSecurityAltIDSource_176.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_176);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_177;
      FIX::LegSecurityAltID LegSecurityAltID_177("STRING_563158614");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_177);
      LegSecAltIDGrp_NoLegSecurityAltID_177.insert(LegSecurityAltID_177.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_177("STRING_222146114");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_177);
      LegSecAltIDGrp_NoLegSecurityAltID_177.insert(LegSecurityAltIDSource_177.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_177);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // LinesOfTextGrp
  // Group LinesOfTextGrp.NoLinesOfText
  {
    FIX50SP2::News::NoLinesOfText noLinesOfText_0_0;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_2;
    FIX::EncodedText EncodedText_57("DATA_1811184634");
    noLinesOfText_0_0.set(EncodedText_57);
    LinesOfTextGrp_NoLinesOfText_2.insert(EncodedText_57.getString());
    FIX::EncodedTextLen EncodedTextLen_57(1259505923);
    noLinesOfText_0_0.set(EncodedTextLen_57);
    LinesOfTextGrp_NoLinesOfText_2.insert(EncodedTextLen_57.getString());
    FIX::Text Text_57("STRING_1189103980");
    noLinesOfText_0_0.set(Text_57);
    LinesOfTextGrp_NoLinesOfText_2.insert(Text_57.getString());
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_2);

    msg.addGroup(noLinesOfText_0_0);
  }
  // NewsRefGrp
  // Group NewsRefGrp.NoNewsRefIDs
  {
    FIX50SP2::News::NoNewsRefIDs noNewsRefIDs_0_0;
    // NewsRefGrp.NoNewsRefIDs
    multiset<string> NewsRefGrp_NoNewsRefIDs_0;
    FIX::NewsRefID NewsRefID_0("STRING_1031280604");
    noNewsRefIDs_0_0.set(NewsRefID_0);
    NewsRefGrp_NoNewsRefIDs_0.insert(NewsRefID_0.getString());
    FIX::NewsRefType NewsRefType_0(2);
    noNewsRefIDs_0_0.set(NewsRefType_0);
    NewsRefGrp_NoNewsRefIDs_0.insert(NewsRefType_0.getString());
    all_values.push_back(NewsRefGrp_NoNewsRefIDs_0);

    msg.addGroup(noNewsRefIDs_0_0);
  }
  {
    FIX50SP2::News::NoNewsRefIDs noNewsRefIDs_0_1;
    // NewsRefGrp.NoNewsRefIDs
    multiset<string> NewsRefGrp_NoNewsRefIDs_1;
    FIX::NewsRefID NewsRefID_1("STRING_1523129360");
    noNewsRefIDs_0_1.set(NewsRefID_1);
    NewsRefGrp_NoNewsRefIDs_1.insert(NewsRefID_1.getString());
    FIX::NewsRefType NewsRefType_1(0);
    noNewsRefIDs_0_1.set(NewsRefType_1);
    NewsRefGrp_NoNewsRefIDs_1.insert(NewsRefType_1.getString());
    all_values.push_back(NewsRefGrp_NoNewsRefIDs_1);

    msg.addGroup(noNewsRefIDs_0_1);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_6;
    FIX::RoutingID RoutingID_6("STRING_1762584890");
    noRoutingIDs_0_0.set(RoutingID_6);
    RoutingGrp_NoRoutingIDs_6.insert(RoutingID_6.getString());
    FIX::RoutingType RoutingType_6(2);
    noRoutingIDs_0_0.set(RoutingType_6);
    RoutingGrp_NoRoutingIDs_6.insert(RoutingType_6.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_6);

    msg.addGroup(noRoutingIDs_0_0);
  }
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_1;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_7;
    FIX::RoutingID RoutingID_7("STRING_1606898930");
    noRoutingIDs_0_1.set(RoutingID_7);
    RoutingGrp_NoRoutingIDs_7.insert(RoutingID_7.getString());
    FIX::RoutingType RoutingType_7(3);
    noRoutingIDs_0_1.set(RoutingType_7);
    RoutingGrp_NoRoutingIDs_7.insert(RoutingType_7.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_7);

    msg.addGroup(noRoutingIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::News::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_71;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_71("DATA_1787682296");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_71);
    UnderlyingInstrument_71.insert(EncodedUnderlyingIssuer_71.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_71(1405443321);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_71);
    UnderlyingInstrument_71.insert(EncodedUnderlyingIssuerLen_71.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_71("DATA_387746832");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_71);
    UnderlyingInstrument_71.insert(EncodedUnderlyingSecurityDesc_71.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_71(1790074310);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_71);
    UnderlyingInstrument_71.insert(EncodedUnderlyingSecurityDescLen_71.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_71;
    UnderlyingAdjustedQuantity_71.setString("16012874");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_71);
    UnderlyingInstrument_71.insert(UnderlyingAdjustedQuantity_71.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_71;
    UnderlyingAllocationPercent_71.setString("16.730000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_71);
    UnderlyingInstrument_71.insert(UnderlyingAllocationPercent_71.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_71;
    UnderlyingAttachmentPoint_71.setString("74.490000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_71);
    UnderlyingInstrument_71.insert(UnderlyingAttachmentPoint_71.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_71("STRING_1987879353");
    noUnderlyings_0_0.set(UnderlyingCFICode_71);
    UnderlyingInstrument_71.insert(UnderlyingCFICode_71.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_71("STRING_1488441978");
    noUnderlyings_0_0.set(UnderlyingCPProgram_71);
    UnderlyingInstrument_71.insert(UnderlyingCPProgram_71.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_71("STRING_1267004287");
    noUnderlyings_0_0.set(UnderlyingCPRegType_71);
    UnderlyingInstrument_71.insert(UnderlyingCPRegType_71.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_71;
    UnderlyingCapValue_71.setString("7297477");
    noUnderlyings_0_0.set(UnderlyingCapValue_71);
    UnderlyingInstrument_71.insert(UnderlyingCapValue_71.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_71;
    UnderlyingCashAmount_71.setString("11278993");
    noUnderlyings_0_0.set(UnderlyingCashAmount_71);
    UnderlyingInstrument_71.insert(UnderlyingCashAmount_71.getString());
    FIX::UnderlyingCashType UnderlyingCashType_71("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_71);
    UnderlyingInstrument_71.insert(UnderlyingCashType_71.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_71;
    UnderlyingContractMultiplier_71.setString("18618654");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_71);
    UnderlyingInstrument_71.insert(UnderlyingContractMultiplier_71.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_71(1691057969);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_71);
    UnderlyingInstrument_71.insert(UnderlyingContractMultiplierUnit_71.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_71("COUNTRY_1373714219");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_71);
    UnderlyingInstrument_71.insert(UnderlyingCountryOfIssue_71.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_71("LOCALMKTDATE_498775641");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_71);
    UnderlyingInstrument_71.insert(UnderlyingCouponPaymentDate_71.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_71;
    UnderlyingCouponRate_71.setString("89.550000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_71);
    UnderlyingInstrument_71.insert(UnderlyingCouponRate_71.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_71("STRING_485736494");
    noUnderlyings_0_0.set(UnderlyingCreditRating_71);
    UnderlyingInstrument_71.insert(UnderlyingCreditRating_71.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_71("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_71);
    UnderlyingInstrument_71.insert(UnderlyingCurrency_71.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_71;
    UnderlyingCurrentValue_71.setString("15170170");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_71);
    UnderlyingInstrument_71.insert(UnderlyingCurrentValue_71.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_71;
    UnderlyingDetachmentPoint_71.setString("63.950000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_71);
    UnderlyingInstrument_71.insert(UnderlyingDetachmentPoint_71.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_71;
    UnderlyingDirtyPrice_71.setString("6445520");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_71);
    UnderlyingInstrument_71.insert(UnderlyingDirtyPrice_71.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_71;
    UnderlyingEndPrice_71.setString("2937973");
    noUnderlyings_0_0.set(UnderlyingEndPrice_71);
    UnderlyingInstrument_71.insert(UnderlyingEndPrice_71.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_71;
    UnderlyingEndValue_71.setString("1632841");
    noUnderlyings_0_0.set(UnderlyingEndValue_71);
    UnderlyingInstrument_71.insert(UnderlyingEndValue_71.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_71(259653297);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_71);
    UnderlyingInstrument_71.insert(UnderlyingExerciseStyle_71.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_71;
    UnderlyingFXRate_71.setString("9538569");
    noUnderlyings_0_0.set(UnderlyingFXRate_71);
    UnderlyingInstrument_71.insert(UnderlyingFXRate_71.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_71('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_71);
    UnderlyingInstrument_71.insert(UnderlyingFXRateCalc_71.getString());
    FIX::UnderlyingFactor UnderlyingFactor_71;
    UnderlyingFactor_71.setString("11298163");
    noUnderlyings_0_0.set(UnderlyingFactor_71);
    UnderlyingInstrument_71.insert(UnderlyingFactor_71.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_71(1019082619);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_71);
    UnderlyingInstrument_71.insert(UnderlyingFlowScheduleType_71.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_71("STRING_1410381688");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_71);
    UnderlyingInstrument_71.insert(UnderlyingInstrRegistry_71.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_71("LOCALMKTDATE_387776053");
    noUnderlyings_0_0.set(UnderlyingIssueDate_71);
    UnderlyingInstrument_71.insert(UnderlyingIssueDate_71.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_71("STRING_1406829451");
    noUnderlyings_0_0.set(UnderlyingIssuer_71);
    UnderlyingInstrument_71.insert(UnderlyingIssuer_71.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_71("STRING_1052972350");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_71);
    UnderlyingInstrument_71.insert(UnderlyingLocaleOfIssue_71.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_71("LOCALMKTDATE_1989063500");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_71);
    UnderlyingInstrument_71.insert(UnderlyingMaturityDate_71.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_71("MONTHYEAR_301787476");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_71);
    UnderlyingInstrument_71.insert(UnderlyingMaturityMonthYear_71.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_71("TZTIMEONLY_975596151");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_71);
    UnderlyingInstrument_71.insert(UnderlyingMaturityTime_71.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_71;
    UnderlyingNotionalPercentageOutstanding_71.setString("92.050000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_71);
    UnderlyingInstrument_71.insert(UnderlyingNotionalPercentageOutstanding_71.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_71('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_71);
    UnderlyingInstrument_71.insert(UnderlyingOptAttribute_71.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_71;
    UnderlyingOriginalNotionalPercentageOutstanding_71.setString("67.900000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_71);
    UnderlyingInstrument_71.insert(UnderlyingOriginalNotionalPercentageOutstanding_71.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_71("STRING_411723319");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_71);
    UnderlyingInstrument_71.insert(UnderlyingPriceUnitOfMeasure_71.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_71;
    UnderlyingPriceUnitOfMeasureQty_71.setString("7706451");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_71);
    UnderlyingInstrument_71.insert(UnderlyingPriceUnitOfMeasureQty_71.getString());
    FIX::UnderlyingProduct UnderlyingProduct_71(1246684895);
    noUnderlyings_0_0.set(UnderlyingProduct_71);
    UnderlyingInstrument_71.insert(UnderlyingProduct_71.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_71(126105076);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_71);
    UnderlyingInstrument_71.insert(UnderlyingPutOrCall_71.getString());
    FIX::UnderlyingPx UnderlyingPx_71;
    UnderlyingPx_71.setString("3142194");
    noUnderlyings_0_0.set(UnderlyingPx_71);
    UnderlyingInstrument_71.insert(UnderlyingPx_71.getString());
    FIX::UnderlyingQty UnderlyingQty_71;
    UnderlyingQty_71.setString("4729154");
    noUnderlyings_0_0.set(UnderlyingQty_71);
    UnderlyingInstrument_71.insert(UnderlyingQty_71.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_71("LOCALMKTDATE_624880717");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_71);
    UnderlyingInstrument_71.insert(UnderlyingRedemptionDate_71.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_71("STRING_1668978437");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_71);
    UnderlyingInstrument_71.insert(UnderlyingRepoCollateralSecurityType_71.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_71;
    UnderlyingRepurchaseRate_71.setString("19.600000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_71);
    UnderlyingInstrument_71.insert(UnderlyingRepurchaseRate_71.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_71(165276691);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_71);
    UnderlyingInstrument_71.insert(UnderlyingRepurchaseTerm_71.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_71("STRING_790401132");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_71);
    UnderlyingInstrument_71.insert(UnderlyingRestructuringType_71.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_71("STRING_328185410");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_71);
    UnderlyingInstrument_71.insert(UnderlyingSecurityDesc_71.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_71("EXCHANGE_1622323086");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_71);
    UnderlyingInstrument_71.insert(UnderlyingSecurityExchange_71.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_71("STRING_1434953188");
    noUnderlyings_0_0.set(UnderlyingSecurityID_71);
    UnderlyingInstrument_71.insert(UnderlyingSecurityID_71.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_71("STRING_621982747");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_71);
    UnderlyingInstrument_71.insert(UnderlyingSecurityIDSource_71.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_71("STRING_1785607195");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_71);
    UnderlyingInstrument_71.insert(UnderlyingSecuritySubType_71.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_71("STRING_1694606485");
    noUnderlyings_0_0.set(UnderlyingSecurityType_71);
    UnderlyingInstrument_71.insert(UnderlyingSecurityType_71.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_71("STRING_1575839740");
    noUnderlyings_0_0.set(UnderlyingSeniority_71);
    UnderlyingInstrument_71.insert(UnderlyingSeniority_71.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_71("STRING_1408306587");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_71);
    UnderlyingInstrument_71.insert(UnderlyingSettlMethod_71.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_71(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_71);
    UnderlyingInstrument_71.insert(UnderlyingSettlementType_71.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_71;
    UnderlyingStartValue_71.setString("4474387");
    noUnderlyings_0_0.set(UnderlyingStartValue_71);
    UnderlyingInstrument_71.insert(UnderlyingStartValue_71.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_71("STRING_671204627");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_71);
    UnderlyingInstrument_71.insert(UnderlyingStateOrProvinceOfIssue_71.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_71("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_71);
    UnderlyingInstrument_71.insert(UnderlyingStrikeCurrency_71.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_71;
    UnderlyingStrikePrice_71.setString("17241769");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_71);
    UnderlyingInstrument_71.insert(UnderlyingStrikePrice_71.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_71("STRING_906295122");
    noUnderlyings_0_0.set(UnderlyingSymbol_71);
    UnderlyingInstrument_71.insert(UnderlyingSymbol_71.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_71("STRING_8571991");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_71);
    UnderlyingInstrument_71.insert(UnderlyingSymbolSfx_71.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_71("STRING_552289480");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_71);
    UnderlyingInstrument_71.insert(UnderlyingTimeUnit_71.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_71("STRING_588270680");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_71);
    UnderlyingInstrument_71.insert(UnderlyingUnitOfMeasure_71.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_71;
    UnderlyingUnitOfMeasureQty_71.setString("17988014");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_71);
    UnderlyingInstrument_71.insert(UnderlyingUnitOfMeasureQty_71.getString());
    all_values.push_back(UnderlyingInstrument_71);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_141;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_141("STRING_999993999");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_141);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_141.insert(UnderlyingSecurityAltID_141.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_141("STRING_421962959");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_141);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_141.insert(UnderlyingSecurityAltIDSource_141.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_141);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_126;
      FIX::UnderlyingStipType UnderlyingStipType_126("STRING_1126099076");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_126);
      UnderlyingStipulations_NoUnderlyingStips_126.insert(UnderlyingStipType_126.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_126("STRING_736182441");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_126);
      UnderlyingStipulations_NoUnderlyingStips_126.insert(UnderlyingStipValue_126.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_126);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_127;
      FIX::UnderlyingStipType UnderlyingStipType_127("STRING_219522983");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_127);
      UnderlyingStipulations_NoUnderlyingStips_127.insert(UnderlyingStipType_127.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_127("STRING_1750979793");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_127);
      UnderlyingStipulations_NoUnderlyingStips_127.insert(UnderlyingStipValue_127.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_127);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_128;
      FIX::UnderlyingStipType UnderlyingStipType_128("STRING_257677231");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_128);
      UnderlyingStipulations_NoUnderlyingStips_128.insert(UnderlyingStipType_128.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_128("STRING_1178174943");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_128);
      UnderlyingStipulations_NoUnderlyingStips_128.insert(UnderlyingStipValue_128.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_128);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_153;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_153("STRING_1048078363");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_153);
      UndlyInstrumentParties_NoUndlyInstrumentParties_153.insert(UnderlyingInstrumentPartyID_153.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_153('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_153);
      UndlyInstrumentParties_NoUndlyInstrumentParties_153.insert(UnderlyingInstrumentPartyIDSource_153.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_153(1391095922);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_153);
      UndlyInstrumentParties_NoUndlyInstrumentParties_153.insert(UnderlyingInstrumentPartyRole_153.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_153);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_302("STRING_2128343100");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_302);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302.insert(UnderlyingInstrumentPartySubID_302.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_302(1029219470);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_302);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302.insert(UnderlyingInstrumentPartySubIDType_302.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_154;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_154("STRING_2030154389");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_154);
      UndlyInstrumentParties_NoUndlyInstrumentParties_154.insert(UnderlyingInstrumentPartyID_154.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_154('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_154);
      UndlyInstrumentParties_NoUndlyInstrumentParties_154.insert(UnderlyingInstrumentPartyIDSource_154.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_154(290042409);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_154);
      UndlyInstrumentParties_NoUndlyInstrumentParties_154.insert(UnderlyingInstrumentPartyRole_154.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_154);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_303("STRING_2004137904");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_303);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303.insert(UnderlyingInstrumentPartySubID_303.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_303(961247036);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_303);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303.insert(UnderlyingInstrumentPartySubIDType_303.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_304("STRING_1624325228");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_304);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304.insert(UnderlyingInstrumentPartySubID_304.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_304(1710922419);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_304);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304.insert(UnderlyingInstrumentPartySubIDType_304.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_305("STRING_537940365");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_305);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305.insert(UnderlyingInstrumentPartySubID_305.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_305(383136702);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_305);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305.insert(UnderlyingInstrumentPartySubIDType_305.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
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
