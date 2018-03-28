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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::News msg;

  list<multiset<string>> all_values;
  multiset<string> News_0;
  FIX::EncodedHeadline EncodedHeadline_0("DATA_106334158");
  msg.set(EncodedHeadline_0);
  News_0.insert(EncodedHeadline_0.getString());
  FIX::EncodedHeadlineLen EncodedHeadlineLen_0(1045981754);
  msg.set(EncodedHeadlineLen_0);
  News_0.insert(EncodedHeadlineLen_0.getString());
  FIX::Headline Headline_0("STRING_195360453");
  msg.set(Headline_0);
  News_0.insert(Headline_0.getString());
  FIX::LanguageCode LanguageCode_0("FR");
  msg.set(LanguageCode_0);
  News_0.insert(LanguageCode_0.getString());
  FIX::MarketID MarketID_9("EXCHANGE_1450146146");
  msg.set(MarketID_9);
  News_0.insert(MarketID_9.getString());
  FIX::MarketSegmentID MarketSegmentID_9("STRING_1901882222");
  msg.set(MarketSegmentID_9);
  News_0.insert(MarketSegmentID_9.getString());
  FIX::NewsCategory NewsCategory_0(3);
  msg.set(NewsCategory_0);
  News_0.insert(NewsCategory_0.getString());
  FIX::NewsID NewsID_0("STRING_1023987407");
  msg.set(NewsID_0);
  News_0.insert(NewsID_0.getString());
  FIX::OrigTime OrigTime_1(FIX::UTCTIMESTAMP(18, 18, 11, 13, 6, 2014));
  msg.set(OrigTime_1);
  News_0.insert(OrigTime_1.getString());
  FIX::RawData RawData_1("DATA_384301217");
  msg.set(RawData_1);
  News_0.insert(RawData_1.getString());
  FIX::RawDataLength RawDataLength_1(136065901);
  msg.set(RawDataLength_1);
  News_0.insert(RawDataLength_1.getString());
  FIX::URLLink URLLink_2("STRING_673515324");
  msg.set(URLLink_2);
  News_0.insert(URLLink_2.getString());
  FIX::Urgency Urgency_0('1');
  msg.set(Urgency_0);
  News_0.insert(Urgency_0.getString());
  all_values.push_back(News_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_10;
  FIX::ApplID ApplID_10("STRING_1061149110");
  msg.set(ApplID_10);
  ApplicationSequenceControl_10.insert(ApplID_10.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_10(1334161686);
  msg.set(ApplLastSeqNum_10);
  ApplicationSequenceControl_10.insert(ApplLastSeqNum_10.getString());
  FIX::ApplResendFlag ApplResendFlag_10(true);
  msg.set(ApplResendFlag_10);
  ApplicationSequenceControl_10.insert(ApplResendFlag_10.getString());
  FIX::ApplSeqNum ApplSeqNum_10(1039251103);
  msg.set(ApplSeqNum_10);
  ApplicationSequenceControl_10.insert(ApplSeqNum_10.getString());
  all_values.push_back(ApplicationSequenceControl_10);

  // InstrmtGrp
  // Group InstrmtGrp.NoRelatedSym
  {
    FIX50SP2::News::NoRelatedSym noRelatedSym_0_0;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_48;
    FIX::AttachmentPoint AttachmentPoint_48;
    AttachmentPoint_48.setString("25.760000");
    noRelatedSym_0_0.set(AttachmentPoint_48);
    Instrument_48.insert(AttachmentPoint_48.getString());
    FIX::CFICode CFICode_48("STRING_352754120");
    noRelatedSym_0_0.set(CFICode_48);
    Instrument_48.insert(CFICode_48.getString());
    FIX::CPProgram CPProgram_48(99);
    noRelatedSym_0_0.set(CPProgram_48);
    Instrument_48.insert(CPProgram_48.getString());
    FIX::CPRegType CPRegType_48("STRING_565843408");
    noRelatedSym_0_0.set(CPRegType_48);
    Instrument_48.insert(CPRegType_48.getString());
    FIX::CapPrice CapPrice_48;
    CapPrice_48.setString("20518692");
    noRelatedSym_0_0.set(CapPrice_48);
    Instrument_48.insert(CapPrice_48.getString());
    FIX::ContractMultiplier ContractMultiplier_48;
    ContractMultiplier_48.setString("3382884");
    noRelatedSym_0_0.set(ContractMultiplier_48);
    Instrument_48.insert(ContractMultiplier_48.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_48(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_48);
    Instrument_48.insert(ContractMultiplierUnit_48.getString());
    FIX::ContractSettlMonth ContractSettlMonth_48("MONTHYEAR_10719804");
    noRelatedSym_0_0.set(ContractSettlMonth_48);
    Instrument_48.insert(ContractSettlMonth_48.getString());
    FIX::CountryOfIssue CountryOfIssue_48("COUNTRY_1384270188");
    noRelatedSym_0_0.set(CountryOfIssue_48);
    Instrument_48.insert(CountryOfIssue_48.getString());
    FIX::CouponPaymentDate CouponPaymentDate_48("LOCALMKTDATE_1373242888");
    noRelatedSym_0_0.set(CouponPaymentDate_48);
    Instrument_48.insert(CouponPaymentDate_48.getString());
    FIX::CouponRate CouponRate_48;
    CouponRate_48.setString("18.580000");
    noRelatedSym_0_0.set(CouponRate_48);
    Instrument_48.insert(CouponRate_48.getString());
    FIX::CreditRating CreditRating_48("STRING_686932687");
    noRelatedSym_0_0.set(CreditRating_48);
    Instrument_48.insert(CreditRating_48.getString());
    FIX::DatedDate DatedDate_48("LOCALMKTDATE_1127641462");
    noRelatedSym_0_0.set(DatedDate_48);
    Instrument_48.insert(DatedDate_48.getString());
    FIX::DetachmentPoint DetachmentPoint_48;
    DetachmentPoint_48.setString("20.110000");
    noRelatedSym_0_0.set(DetachmentPoint_48);
    Instrument_48.insert(DetachmentPoint_48.getString());
    FIX::EncodedIssuer EncodedIssuer_48("DATA_1710920094");
    noRelatedSym_0_0.set(EncodedIssuer_48);
    Instrument_48.insert(EncodedIssuer_48.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_48(1056662740);
    noRelatedSym_0_0.set(EncodedIssuerLen_48);
    Instrument_48.insert(EncodedIssuerLen_48.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_48("DATA_1574135493");
    noRelatedSym_0_0.set(EncodedSecurityDesc_48);
    Instrument_48.insert(EncodedSecurityDesc_48.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_48(1211751724);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_48);
    Instrument_48.insert(EncodedSecurityDescLen_48.getString());
    FIX::ExerciseStyle ExerciseStyle_48(0);
    noRelatedSym_0_0.set(ExerciseStyle_48);
    Instrument_48.insert(ExerciseStyle_48.getString());
    FIX::Factor Factor_48;
    Factor_48.setString("6351309");
    noRelatedSym_0_0.set(Factor_48);
    Instrument_48.insert(Factor_48.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_48(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_48);
    Instrument_48.insert(FlexProductEligibilityIndicator_48.getString());
    FIX::FlexibleIndicator FlexibleIndicator_48(false);
    noRelatedSym_0_0.set(FlexibleIndicator_48);
    Instrument_48.insert(FlexibleIndicator_48.getString());
    FIX::FloorPrice FloorPrice_48;
    FloorPrice_48.setString("10194321");
    noRelatedSym_0_0.set(FloorPrice_48);
    Instrument_48.insert(FloorPrice_48.getString());
    FIX::FlowScheduleType FlowScheduleType_48(4);
    noRelatedSym_0_0.set(FlowScheduleType_48);
    Instrument_48.insert(FlowScheduleType_48.getString());
    FIX::InstrRegistry InstrRegistry_48("STRING_1392546465");
    noRelatedSym_0_0.set(InstrRegistry_48);
    Instrument_48.insert(InstrRegistry_48.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_48('4');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_48);
    Instrument_48.insert(InstrmtAssignmentMethod_48.getString());
    FIX::InterestAccrualDate InterestAccrualDate_48("LOCALMKTDATE_522826101");
    noRelatedSym_0_0.set(InterestAccrualDate_48);
    Instrument_48.insert(InterestAccrualDate_48.getString());
    FIX::IssueDate IssueDate_48("LOCALMKTDATE_579224503");
    noRelatedSym_0_0.set(IssueDate_48);
    Instrument_48.insert(IssueDate_48.getString());
    FIX::Issuer Issuer_48("STRING_983231133");
    noRelatedSym_0_0.set(Issuer_48);
    Instrument_48.insert(Issuer_48.getString());
    FIX::ListMethod ListMethod_48(1);
    noRelatedSym_0_0.set(ListMethod_48);
    Instrument_48.insert(ListMethod_48.getString());
    FIX::LocaleOfIssue LocaleOfIssue_48("STRING_396058055");
    noRelatedSym_0_0.set(LocaleOfIssue_48);
    Instrument_48.insert(LocaleOfIssue_48.getString());
    FIX::MaturityDate MaturityDate_48("LOCALMKTDATE_935830061");
    noRelatedSym_0_0.set(MaturityDate_48);
    Instrument_48.insert(MaturityDate_48.getString());
    FIX::MaturityMonthYear MaturityMonthYear_48("MONTHYEAR_1914831325");
    noRelatedSym_0_0.set(MaturityMonthYear_48);
    Instrument_48.insert(MaturityMonthYear_48.getString());
    FIX::MaturityTime MaturityTime_48("TZTIMEONLY_292165856");
    noRelatedSym_0_0.set(MaturityTime_48);
    Instrument_48.insert(MaturityTime_48.getString());
    FIX::MinPriceIncrement MinPriceIncrement_48;
    MinPriceIncrement_48.setString("15016734");
    noRelatedSym_0_0.set(MinPriceIncrement_48);
    Instrument_48.insert(MinPriceIncrement_48.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_48;
    MinPriceIncrementAmount_48.setString("18192169");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_48);
    Instrument_48.insert(MinPriceIncrementAmount_48.getString());
    FIX::NTPositionLimit NTPositionLimit_48(630454291);
    noRelatedSym_0_0.set(NTPositionLimit_48);
    Instrument_48.insert(NTPositionLimit_48.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_48;
    NotionalPercentageOutstanding_48.setString("22.560000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_48);
    Instrument_48.insert(NotionalPercentageOutstanding_48.getString());
    FIX::OptAttribute OptAttribute_48('1');
    noRelatedSym_0_0.set(OptAttribute_48);
    Instrument_48.insert(OptAttribute_48.getString());
    FIX::OptPayoutAmount OptPayoutAmount_48;
    OptPayoutAmount_48.setString("20147244");
    noRelatedSym_0_0.set(OptPayoutAmount_48);
    Instrument_48.insert(OptPayoutAmount_48.getString());
    FIX::OptPayoutType OptPayoutType_48(1);
    noRelatedSym_0_0.set(OptPayoutType_48);
    Instrument_48.insert(OptPayoutType_48.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_48;
    OriginalNotionalPercentageOutstanding_48.setString("49.860000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_48);
    Instrument_48.insert(OriginalNotionalPercentageOutstanding_48.getString());
    FIX::Pool Pool_48("STRING_554173518");
    noRelatedSym_0_0.set(Pool_48);
    Instrument_48.insert(Pool_48.getString());
    FIX::PositionLimit PositionLimit_48(885472959);
    noRelatedSym_0_0.set(PositionLimit_48);
    Instrument_48.insert(PositionLimit_48.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_48("STRING_INX");
    noRelatedSym_0_0.set(PriceQuoteMethod_48);
    Instrument_48.insert(PriceQuoteMethod_48.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_48("STRING_117609964");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_48);
    Instrument_48.insert(PriceUnitOfMeasure_48.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_48;
    PriceUnitOfMeasureQty_48.setString("19421356");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_48);
    Instrument_48.insert(PriceUnitOfMeasureQty_48.getString());
    FIX::Product Product_50(11);
    noRelatedSym_0_0.set(Product_50);
    Instrument_48.insert(Product_50.getString());
    FIX::ProductComplex ProductComplex_48("STRING_1329361689");
    noRelatedSym_0_0.set(ProductComplex_48);
    Instrument_48.insert(ProductComplex_48.getString());
    FIX::PutOrCall PutOrCall_48(0);
    noRelatedSym_0_0.set(PutOrCall_48);
    Instrument_48.insert(PutOrCall_48.getString());
    FIX::RedemptionDate RedemptionDate_48("LOCALMKTDATE_897679804");
    noRelatedSym_0_0.set(RedemptionDate_48);
    Instrument_48.insert(RedemptionDate_48.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_48("STRING_654972779");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_48);
    Instrument_48.insert(RepoCollateralSecurityType_48.getString());
    FIX::RepurchaseRate RepurchaseRate_48;
    RepurchaseRate_48.setString("43.630000");
    noRelatedSym_0_0.set(RepurchaseRate_48);
    Instrument_48.insert(RepurchaseRate_48.getString());
    FIX::RepurchaseTerm RepurchaseTerm_48(1917111984);
    noRelatedSym_0_0.set(RepurchaseTerm_48);
    Instrument_48.insert(RepurchaseTerm_48.getString());
    FIX::RestructuringType RestructuringType_48("STRING_MM");
    noRelatedSym_0_0.set(RestructuringType_48);
    Instrument_48.insert(RestructuringType_48.getString());
    FIX::SecurityDesc SecurityDesc_48("STRING_865797180");
    noRelatedSym_0_0.set(SecurityDesc_48);
    Instrument_48.insert(SecurityDesc_48.getString());
    FIX::SecurityExchange SecurityExchange_48("EXCHANGE_253455251");
    noRelatedSym_0_0.set(SecurityExchange_48);
    Instrument_48.insert(SecurityExchange_48.getString());
    FIX::SecurityGroup SecurityGroup_48("STRING_639475871");
    noRelatedSym_0_0.set(SecurityGroup_48);
    Instrument_48.insert(SecurityGroup_48.getString());
    FIX::SecurityID SecurityID_48("STRING_1445021683");
    noRelatedSym_0_0.set(SecurityID_48);
    Instrument_48.insert(SecurityID_48.getString());
    FIX::SecurityIDSource SecurityIDSource_48("STRING_B");
    noRelatedSym_0_0.set(SecurityIDSource_48);
    Instrument_48.insert(SecurityIDSource_48.getString());
    FIX::SecurityStatus SecurityStatus_48("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_48);
    Instrument_48.insert(SecurityStatus_48.getString());
    FIX::SecuritySubType SecuritySubType_49("STRING_1841079738");
    noRelatedSym_0_0.set(SecuritySubType_49);
    Instrument_48.insert(SecuritySubType_49.getString());
    FIX::SecurityType SecurityType_50("STRING_TIPS");
    noRelatedSym_0_0.set(SecurityType_50);
    Instrument_48.insert(SecurityType_50.getString());
    FIX::Seniority Seniority_48("STRING_SR");
    noRelatedSym_0_0.set(Seniority_48);
    Instrument_48.insert(Seniority_48.getString());
    FIX::SettlMethod SettlMethod_48('C');
    noRelatedSym_0_0.set(SettlMethod_48);
    Instrument_48.insert(SettlMethod_48.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_48("STRING_1526706266");
    noRelatedSym_0_0.set(SettleOnOpenFlag_48);
    Instrument_48.insert(SettleOnOpenFlag_48.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_48("STRING_1640634077");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_48);
    Instrument_48.insert(StateOrProvinceOfIssue_48.getString());
    FIX::StrikeCurrency StrikeCurrency_48("JPY");
    noRelatedSym_0_0.set(StrikeCurrency_48);
    Instrument_48.insert(StrikeCurrency_48.getString());
    FIX::StrikeMultiplier StrikeMultiplier_48;
    StrikeMultiplier_48.setString("13230872");
    noRelatedSym_0_0.set(StrikeMultiplier_48);
    Instrument_48.insert(StrikeMultiplier_48.getString());
    FIX::StrikePrice StrikePrice_48;
    StrikePrice_48.setString("4834570");
    noRelatedSym_0_0.set(StrikePrice_48);
    Instrument_48.insert(StrikePrice_48.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_48(4);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_48);
    Instrument_48.insert(StrikePriceBoundaryMethod_48.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_48;
    StrikePriceBoundaryPrecision_48.setString("21.910000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_48);
    Instrument_48.insert(StrikePriceBoundaryPrecision_48.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_48(4);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_48);
    Instrument_48.insert(StrikePriceDeterminationMethod_48.getString());
    FIX::StrikeValue StrikeValue_48;
    StrikeValue_48.setString("5545993");
    noRelatedSym_0_0.set(StrikeValue_48);
    Instrument_48.insert(StrikeValue_48.getString());
    FIX::Symbol Symbol_48("STRING_35095540");
    noRelatedSym_0_0.set(Symbol_48);
    Instrument_48.insert(Symbol_48.getString());
    FIX::SymbolSfx SymbolSfx_48("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_48);
    Instrument_48.insert(SymbolSfx_48.getString());
    FIX::TimeUnit TimeUnit_48("STRING_S");
    noRelatedSym_0_0.set(TimeUnit_48);
    Instrument_48.insert(TimeUnit_48.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_48(3);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_48);
    Instrument_48.insert(UnderlyingPriceDeterminationMethod_48.getString());
    FIX::UnitOfMeasure UnitOfMeasure_48("STRING_lbs");
    noRelatedSym_0_0.set(UnitOfMeasure_48);
    Instrument_48.insert(UnitOfMeasure_48.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_48;
    UnitOfMeasureQty_48.setString("12509546");
    noRelatedSym_0_0.set(UnitOfMeasureQty_48);
    Instrument_48.insert(UnitOfMeasureQty_48.getString());
    FIX::ValuationMethod ValuationMethod_48("STRING_FUTDA");
    noRelatedSym_0_0.set(ValuationMethod_48);
    Instrument_48.insert(ValuationMethod_48.getString());
    all_values.push_back(Instrument_48);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_95;
      FIX::ComplexEventCondition ComplexEventCondition_95(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_95);
      ComplexEvents_NoComplexEvents_95.insert(ComplexEventCondition_95.getString());
      FIX::ComplexEventPrice ComplexEventPrice_95;
      ComplexEventPrice_95.setString("9649525");
      noComplexEvents_0_1_0.set(ComplexEventPrice_95);
      ComplexEvents_NoComplexEvents_95.insert(ComplexEventPrice_95.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_95(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_95);
      ComplexEvents_NoComplexEvents_95.insert(ComplexEventPriceBoundaryMethod_95.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_95;
      ComplexEventPriceBoundaryPrecision_95.setString("24.970000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_95);
      ComplexEvents_NoComplexEvents_95.insert(ComplexEventPriceBoundaryPrecision_95.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_95(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_95);
      ComplexEvents_NoComplexEvents_95.insert(ComplexEventPriceTimeType_95.getString());
      FIX::ComplexEventType ComplexEventType_95(8);
      noComplexEvents_0_1_0.set(ComplexEventType_95);
      ComplexEvents_NoComplexEvents_95.insert(ComplexEventType_95.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_95;
      ComplexOptPayoutAmount_95.setString("8875405");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_95);
      ComplexEvents_NoComplexEvents_95.insert(ComplexOptPayoutAmount_95.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_95);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_195;
        FIX::ComplexEventEndDate ComplexEventEndDate_195(FIX::UTCTIMESTAMP(22, 7, 48, 13, 10, 2003));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_195);
        ComplexEventDates_NoComplexEventDates_195.insert(ComplexEventEndDate_195.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_195(FIX::UTCTIMESTAMP(23, 15, 55, 9, 3, 2001));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_195);
        ComplexEventDates_NoComplexEventDates_195.insert(ComplexEventStartDate_195.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_195);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_399;
          FIX::ComplexEventEndTime ComplexEventEndTime_399(FIX::UTCTIMEONLY(7, 39, 49));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_399);
          ComplexEventTimes_NoComplexEventTimes_399.insert(ComplexEventEndTime_399.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_399(FIX::UTCTIMEONLY(2, 28, 24));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_399);
          ComplexEventTimes_NoComplexEventTimes_399.insert(ComplexEventStartTime_399.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_399);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_196;
        FIX::ComplexEventEndDate ComplexEventEndDate_196(FIX::UTCTIMESTAMP(7, 26, 9, 1, 8, 2013));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_196);
        ComplexEventDates_NoComplexEventDates_196.insert(ComplexEventEndDate_196.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_196(FIX::UTCTIMESTAMP(9, 36, 34, 9, 6, 2011));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_196);
        ComplexEventDates_NoComplexEventDates_196.insert(ComplexEventStartDate_196.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_196);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_400;
          FIX::ComplexEventEndTime ComplexEventEndTime_400(FIX::UTCTIMEONLY(2, 38, 51));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_400);
          ComplexEventTimes_NoComplexEventTimes_400.insert(ComplexEventEndTime_400.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_400(FIX::UTCTIMEONLY(20, 46, 7));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_400);
          ComplexEventTimes_NoComplexEventTimes_400.insert(ComplexEventStartTime_400.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_400);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_401;
          FIX::ComplexEventEndTime ComplexEventEndTime_401(FIX::UTCTIMEONLY(21, 46, 37));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_401);
          ComplexEventTimes_NoComplexEventTimes_401.insert(ComplexEventEndTime_401.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_401(FIX::UTCTIMEONLY(0, 5, 21));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_401);
          ComplexEventTimes_NoComplexEventTimes_401.insert(ComplexEventStartTime_401.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_401);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_402;
          FIX::ComplexEventEndTime ComplexEventEndTime_402(FIX::UTCTIMEONLY(5, 39, 21));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_402);
          ComplexEventTimes_NoComplexEventTimes_402.insert(ComplexEventEndTime_402.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_402(FIX::UTCTIMEONLY(2, 34, 26));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_402);
          ComplexEventTimes_NoComplexEventTimes_402.insert(ComplexEventStartTime_402.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_402);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_197;
        FIX::ComplexEventEndDate ComplexEventEndDate_197(FIX::UTCTIMESTAMP(2, 52, 5, 3, 9, 2004));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_197);
        ComplexEventDates_NoComplexEventDates_197.insert(ComplexEventEndDate_197.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_197(FIX::UTCTIMESTAMP(10, 58, 54, 14, 12, 2016));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_197);
        ComplexEventDates_NoComplexEventDates_197.insert(ComplexEventStartDate_197.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_197);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_403;
          FIX::ComplexEventEndTime ComplexEventEndTime_403(FIX::UTCTIMEONLY(13, 56, 11));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_403);
          ComplexEventTimes_NoComplexEventTimes_403.insert(ComplexEventEndTime_403.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_403(FIX::UTCTIMEONLY(12, 9, 35));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_403);
          ComplexEventTimes_NoComplexEventTimes_403.insert(ComplexEventStartTime_403.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_403);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_90;
      FIX::EventDate EventDate_90("LOCALMKTDATE_1018073910");
      noEvents_0_1_0.set(EventDate_90);
      EvntGrp_NoEvents_90.insert(EventDate_90.getString());
      FIX::EventPx EventPx_90;
      EventPx_90.setString("9176730");
      noEvents_0_1_0.set(EventPx_90);
      EvntGrp_NoEvents_90.insert(EventPx_90.getString());
      FIX::EventText EventText_90("STRING_1324764309");
      noEvents_0_1_0.set(EventText_90);
      EvntGrp_NoEvents_90.insert(EventText_90.getString());
      FIX::EventTime EventTime_90(FIX::UTCTIMESTAMP(16, 36, 46, 4, 3, 2007));
      noEvents_0_1_0.set(EventTime_90);
      EvntGrp_NoEvents_90.insert(EventTime_90.getString());
      FIX::EventType EventType_90(3);
      noEvents_0_1_0.set(EventType_90);
      EvntGrp_NoEvents_90.insert(EventType_90.getString());
      all_values.push_back(EvntGrp_NoEvents_90);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_88;
      FIX::InstrumentPartyID InstrumentPartyID_88("STRING_27494107");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_88);
      InstrumentParties_NoInstrumentParties_88.insert(InstrumentPartyID_88.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_88('5');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_88);
      InstrumentParties_NoInstrumentParties_88.insert(InstrumentPartyIDSource_88.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_88(1415458601);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_88);
      InstrumentParties_NoInstrumentParties_88.insert(InstrumentPartyRole_88.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_88);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194;
        FIX::InstrumentPartySubID InstrumentPartySubID_194("STRING_383868013");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_194);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194.insert(InstrumentPartySubID_194.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_194(1808880275);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_194);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194.insert(InstrumentPartySubIDType_194.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195;
        FIX::InstrumentPartySubID InstrumentPartySubID_195("STRING_2111185412");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_195);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195.insert(InstrumentPartySubID_195.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_195(1846967040);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_195);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195.insert(InstrumentPartySubIDType_195.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196;
        FIX::InstrumentPartySubID InstrumentPartySubID_196("STRING_668165227");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_196);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196.insert(InstrumentPartySubID_196.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_196(263438913);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_196);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196.insert(InstrumentPartySubIDType_196.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_89;
      FIX::InstrumentPartyID InstrumentPartyID_89("STRING_177000866");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_89);
      InstrumentParties_NoInstrumentParties_89.insert(InstrumentPartyID_89.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_89('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_89);
      InstrumentParties_NoInstrumentParties_89.insert(InstrumentPartyIDSource_89.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_89(929364989);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_89);
      InstrumentParties_NoInstrumentParties_89.insert(InstrumentPartyRole_89.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_89);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197;
        FIX::InstrumentPartySubID InstrumentPartySubID_197("STRING_969281026");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_197);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197.insert(InstrumentPartySubID_197.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_197(1261088826);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_197);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197.insert(InstrumentPartySubIDType_197.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198;
        FIX::InstrumentPartySubID InstrumentPartySubID_198("STRING_815682999");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_198);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198.insert(InstrumentPartySubID_198.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_198(1058908221);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_198);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198.insert(InstrumentPartySubIDType_198.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199;
        FIX::InstrumentPartySubID InstrumentPartySubID_199("STRING_1282424574");
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubID_199);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199.insert(InstrumentPartySubID_199.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_199(1833756909);
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubIDType_199);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199.insert(InstrumentPartySubIDType_199.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_90;
      FIX::InstrumentPartyID InstrumentPartyID_90("STRING_1976581235");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_90);
      InstrumentParties_NoInstrumentParties_90.insert(InstrumentPartyID_90.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_90('4');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_90);
      InstrumentParties_NoInstrumentParties_90.insert(InstrumentPartyIDSource_90.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_90(1455667709);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_90);
      InstrumentParties_NoInstrumentParties_90.insert(InstrumentPartyRole_90.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_90);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200;
        FIX::InstrumentPartySubID InstrumentPartySubID_200("STRING_1294287992");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_200);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200.insert(InstrumentPartySubID_200.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_200(1044622748);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_200);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200.insert(InstrumentPartySubIDType_200.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201;
        FIX::InstrumentPartySubID InstrumentPartySubID_201("STRING_1626090040");
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubID_201);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201.insert(InstrumentPartySubID_201.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_201(426215702);
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubIDType_201);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201.insert(InstrumentPartySubIDType_201.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_105;
      FIX::SecurityAltID SecurityAltID_105("STRING_202588054");
      noSecurityAltID_0_1_0.set(SecurityAltID_105);
      SecAltIDGrp_NoSecurityAltID_105.insert(SecurityAltID_105.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_105("STRING_1504880740");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_105);
      SecAltIDGrp_NoSecurityAltID_105.insert(SecurityAltIDSource_105.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_105);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_106;
      FIX::SecurityAltID SecurityAltID_106("STRING_176483138");
      noSecurityAltID_0_1_1.set(SecurityAltID_106);
      SecAltIDGrp_NoSecurityAltID_106.insert(SecurityAltID_106.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_106("STRING_758507516");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_106);
      SecAltIDGrp_NoSecurityAltID_106.insert(SecurityAltIDSource_106.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_106);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_96;
    FIX::SecurityXML SecurityXML_97("XMLDATA_772855693");
    noRelatedSym_0_0.set(SecurityXML_97);
    FIX::SecurityXMLLen SecurityXMLLen_48(10498799);
    noRelatedSym_0_0.set(SecurityXMLLen_48);
    FIX::SecurityXMLSchema SecurityXMLSchema_48("STRING_1142375529");
    noRelatedSym_0_0.set(SecurityXMLSchema_48);
    SecurityXML_96.insert(SecurityXMLSchema_48.getString());
    all_values.push_back(SecurityXML_96);

    msg.addGroup(noRelatedSym_0_0);
  }
  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::News::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_79;
    FIX::EncodedLegIssuer EncodedLegIssuer_79("DATA_2121684211");
    noLegs_0_0.set(EncodedLegIssuer_79);
    InstrumentLeg_79.insert(EncodedLegIssuer_79.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_79(841858921);
    noLegs_0_0.set(EncodedLegIssuerLen_79);
    InstrumentLeg_79.insert(EncodedLegIssuerLen_79.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_79("DATA_1102417547");
    noLegs_0_0.set(EncodedLegSecurityDesc_79);
    InstrumentLeg_79.insert(EncodedLegSecurityDesc_79.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_79(237639477);
    noLegs_0_0.set(EncodedLegSecurityDescLen_79);
    InstrumentLeg_79.insert(EncodedLegSecurityDescLen_79.getString());
    FIX::LegCFICode LegCFICode_79("STRING_1018859788");
    noLegs_0_0.set(LegCFICode_79);
    InstrumentLeg_79.insert(LegCFICode_79.getString());
    FIX::LegContractMultiplier LegContractMultiplier_79;
    LegContractMultiplier_79.setString("8076903");
    noLegs_0_0.set(LegContractMultiplier_79);
    InstrumentLeg_79.insert(LegContractMultiplier_79.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_79(1167004466);
    noLegs_0_0.set(LegContractMultiplierUnit_79);
    InstrumentLeg_79.insert(LegContractMultiplierUnit_79.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_79("MONTHYEAR_512192578");
    noLegs_0_0.set(LegContractSettlMonth_79);
    InstrumentLeg_79.insert(LegContractSettlMonth_79.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_79("COUNTRY_1776971397");
    noLegs_0_0.set(LegCountryOfIssue_79);
    InstrumentLeg_79.insert(LegCountryOfIssue_79.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_79("LOCALMKTDATE_280609644");
    noLegs_0_0.set(LegCouponPaymentDate_79);
    InstrumentLeg_79.insert(LegCouponPaymentDate_79.getString());
    FIX::LegCouponRate LegCouponRate_79;
    LegCouponRate_79.setString("55.770000");
    noLegs_0_0.set(LegCouponRate_79);
    InstrumentLeg_79.insert(LegCouponRate_79.getString());
    FIX::LegCreditRating LegCreditRating_79("STRING_688395970");
    noLegs_0_0.set(LegCreditRating_79);
    InstrumentLeg_79.insert(LegCreditRating_79.getString());
    FIX::LegCurrency LegCurrency_79("GBP");
    noLegs_0_0.set(LegCurrency_79);
    InstrumentLeg_79.insert(LegCurrency_79.getString());
    FIX::LegDatedDate LegDatedDate_79("LOCALMKTDATE_517493557");
    noLegs_0_0.set(LegDatedDate_79);
    InstrumentLeg_79.insert(LegDatedDate_79.getString());
    FIX::LegExerciseStyle LegExerciseStyle_79(2022739455);
    noLegs_0_0.set(LegExerciseStyle_79);
    InstrumentLeg_79.insert(LegExerciseStyle_79.getString());
    FIX::LegFactor LegFactor_79;
    LegFactor_79.setString("3223328");
    noLegs_0_0.set(LegFactor_79);
    InstrumentLeg_79.insert(LegFactor_79.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_79(1547986521);
    noLegs_0_0.set(LegFlowScheduleType_79);
    InstrumentLeg_79.insert(LegFlowScheduleType_79.getString());
    FIX::LegInstrRegistry LegInstrRegistry_79("STRING_1169543799");
    noLegs_0_0.set(LegInstrRegistry_79);
    InstrumentLeg_79.insert(LegInstrRegistry_79.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_79("LOCALMKTDATE_1366955647");
    noLegs_0_0.set(LegInterestAccrualDate_79);
    InstrumentLeg_79.insert(LegInterestAccrualDate_79.getString());
    FIX::LegIssueDate LegIssueDate_79("LOCALMKTDATE_1026592913");
    noLegs_0_0.set(LegIssueDate_79);
    InstrumentLeg_79.insert(LegIssueDate_79.getString());
    FIX::LegIssuer LegIssuer_79("STRING_1595759501");
    noLegs_0_0.set(LegIssuer_79);
    InstrumentLeg_79.insert(LegIssuer_79.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_79("STRING_1515944678");
    noLegs_0_0.set(LegLocaleOfIssue_79);
    InstrumentLeg_79.insert(LegLocaleOfIssue_79.getString());
    FIX::LegMaturityDate LegMaturityDate_79("LOCALMKTDATE_1229180967");
    noLegs_0_0.set(LegMaturityDate_79);
    InstrumentLeg_79.insert(LegMaturityDate_79.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_79("MONTHYEAR_953156594");
    noLegs_0_0.set(LegMaturityMonthYear_79);
    InstrumentLeg_79.insert(LegMaturityMonthYear_79.getString());
    FIX::LegMaturityTime LegMaturityTime_79("TZTIMEONLY_1692427816");
    noLegs_0_0.set(LegMaturityTime_79);
    InstrumentLeg_79.insert(LegMaturityTime_79.getString());
    FIX::LegOptAttribute LegOptAttribute_79('1');
    noLegs_0_0.set(LegOptAttribute_79);
    InstrumentLeg_79.insert(LegOptAttribute_79.getString());
    FIX::LegOptionRatio LegOptionRatio_79;
    LegOptionRatio_79.setString("17260122");
    noLegs_0_0.set(LegOptionRatio_79);
    InstrumentLeg_79.insert(LegOptionRatio_79.getString());
    FIX::LegPool LegPool_79("STRING_1702926616");
    noLegs_0_0.set(LegPool_79);
    InstrumentLeg_79.insert(LegPool_79.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_79("STRING_982580365");
    noLegs_0_0.set(LegPriceUnitOfMeasure_79);
    InstrumentLeg_79.insert(LegPriceUnitOfMeasure_79.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_79;
    LegPriceUnitOfMeasureQty_79.setString("127809");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_79);
    InstrumentLeg_79.insert(LegPriceUnitOfMeasureQty_79.getString());
    FIX::LegProduct LegProduct_79(1677127179);
    noLegs_0_0.set(LegProduct_79);
    InstrumentLeg_79.insert(LegProduct_79.getString());
    FIX::LegPutOrCall LegPutOrCall_79(1824439286);
    noLegs_0_0.set(LegPutOrCall_79);
    InstrumentLeg_79.insert(LegPutOrCall_79.getString());
    FIX::LegRatioQty LegRatioQty_79;
    LegRatioQty_79.setString("11151985");
    noLegs_0_0.set(LegRatioQty_79);
    InstrumentLeg_79.insert(LegRatioQty_79.getString());
    FIX::LegRedemptionDate LegRedemptionDate_79("LOCALMKTDATE_1914766656");
    noLegs_0_0.set(LegRedemptionDate_79);
    InstrumentLeg_79.insert(LegRedemptionDate_79.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_79("STRING_695815426");
    noLegs_0_0.set(LegRepoCollateralSecurityType_79);
    InstrumentLeg_79.insert(LegRepoCollateralSecurityType_79.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_79;
    LegRepurchaseRate_79.setString("88.790000");
    noLegs_0_0.set(LegRepurchaseRate_79);
    InstrumentLeg_79.insert(LegRepurchaseRate_79.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_79(934287475);
    noLegs_0_0.set(LegRepurchaseTerm_79);
    InstrumentLeg_79.insert(LegRepurchaseTerm_79.getString());
    FIX::LegSecurityDesc LegSecurityDesc_79("STRING_1208008004");
    noLegs_0_0.set(LegSecurityDesc_79);
    InstrumentLeg_79.insert(LegSecurityDesc_79.getString());
    FIX::LegSecurityExchange LegSecurityExchange_79("EXCHANGE_1552376628");
    noLegs_0_0.set(LegSecurityExchange_79);
    InstrumentLeg_79.insert(LegSecurityExchange_79.getString());
    FIX::LegSecurityID LegSecurityID_79("STRING_1214897119");
    noLegs_0_0.set(LegSecurityID_79);
    InstrumentLeg_79.insert(LegSecurityID_79.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_79("STRING_388399933");
    noLegs_0_0.set(LegSecurityIDSource_79);
    InstrumentLeg_79.insert(LegSecurityIDSource_79.getString());
    FIX::LegSecuritySubType LegSecuritySubType_79("STRING_93288951");
    noLegs_0_0.set(LegSecuritySubType_79);
    InstrumentLeg_79.insert(LegSecuritySubType_79.getString());
    FIX::LegSecurityType LegSecurityType_79("STRING_630447690");
    noLegs_0_0.set(LegSecurityType_79);
    InstrumentLeg_79.insert(LegSecurityType_79.getString());
    FIX::LegSide LegSide_79('1');
    noLegs_0_0.set(LegSide_79);
    InstrumentLeg_79.insert(LegSide_79.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_79("STRING_610782508");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_79);
    InstrumentLeg_79.insert(LegStateOrProvinceOfIssue_79.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_79("CHF");
    noLegs_0_0.set(LegStrikeCurrency_79);
    InstrumentLeg_79.insert(LegStrikeCurrency_79.getString());
    FIX::LegStrikePrice LegStrikePrice_79;
    LegStrikePrice_79.setString("112853");
    noLegs_0_0.set(LegStrikePrice_79);
    InstrumentLeg_79.insert(LegStrikePrice_79.getString());
    FIX::LegSymbol LegSymbol_79("STRING_1675247296");
    noLegs_0_0.set(LegSymbol_79);
    InstrumentLeg_79.insert(LegSymbol_79.getString());
    FIX::LegSymbolSfx LegSymbolSfx_79("STRING_944353670");
    noLegs_0_0.set(LegSymbolSfx_79);
    InstrumentLeg_79.insert(LegSymbolSfx_79.getString());
    FIX::LegTimeUnit LegTimeUnit_79("STRING_1037878294");
    noLegs_0_0.set(LegTimeUnit_79);
    InstrumentLeg_79.insert(LegTimeUnit_79.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_79("STRING_1123523150");
    noLegs_0_0.set(LegUnitOfMeasure_79);
    InstrumentLeg_79.insert(LegUnitOfMeasure_79.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_79;
    LegUnitOfMeasureQty_79.setString("3128147");
    noLegs_0_0.set(LegUnitOfMeasureQty_79);
    InstrumentLeg_79.insert(LegUnitOfMeasureQty_79.getString());
    all_values.push_back(InstrumentLeg_79);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_163;
      FIX::LegSecurityAltID LegSecurityAltID_163("STRING_2076679744");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_163);
      LegSecAltIDGrp_NoLegSecurityAltID_163.insert(LegSecurityAltID_163.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_163("STRING_2005242517");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_163);
      LegSecAltIDGrp_NoLegSecurityAltID_163.insert(LegSecurityAltIDSource_163.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_163);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_164;
      FIX::LegSecurityAltID LegSecurityAltID_164("STRING_2107264097");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_164);
      LegSecAltIDGrp_NoLegSecurityAltID_164.insert(LegSecurityAltID_164.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_164("STRING_1655208383");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_164);
      LegSecAltIDGrp_NoLegSecurityAltID_164.insert(LegSecurityAltIDSource_164.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_164);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_165;
      FIX::LegSecurityAltID LegSecurityAltID_165("STRING_1560685485");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_165);
      LegSecAltIDGrp_NoLegSecurityAltID_165.insert(LegSecurityAltID_165.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_165("STRING_942360814");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_165);
      LegSecAltIDGrp_NoLegSecurityAltID_165.insert(LegSecurityAltIDSource_165.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_165);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::News::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_80;
    FIX::EncodedLegIssuer EncodedLegIssuer_80("DATA_1667989343");
    noLegs_0_1.set(EncodedLegIssuer_80);
    InstrumentLeg_80.insert(EncodedLegIssuer_80.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_80(1090329017);
    noLegs_0_1.set(EncodedLegIssuerLen_80);
    InstrumentLeg_80.insert(EncodedLegIssuerLen_80.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_80("DATA_619316452");
    noLegs_0_1.set(EncodedLegSecurityDesc_80);
    InstrumentLeg_80.insert(EncodedLegSecurityDesc_80.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_80(635704203);
    noLegs_0_1.set(EncodedLegSecurityDescLen_80);
    InstrumentLeg_80.insert(EncodedLegSecurityDescLen_80.getString());
    FIX::LegCFICode LegCFICode_80("STRING_857612025");
    noLegs_0_1.set(LegCFICode_80);
    InstrumentLeg_80.insert(LegCFICode_80.getString());
    FIX::LegContractMultiplier LegContractMultiplier_80;
    LegContractMultiplier_80.setString("13151318");
    noLegs_0_1.set(LegContractMultiplier_80);
    InstrumentLeg_80.insert(LegContractMultiplier_80.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_80(411109434);
    noLegs_0_1.set(LegContractMultiplierUnit_80);
    InstrumentLeg_80.insert(LegContractMultiplierUnit_80.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_80("MONTHYEAR_1791899500");
    noLegs_0_1.set(LegContractSettlMonth_80);
    InstrumentLeg_80.insert(LegContractSettlMonth_80.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_80("COUNTRY_375656235");
    noLegs_0_1.set(LegCountryOfIssue_80);
    InstrumentLeg_80.insert(LegCountryOfIssue_80.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_80("LOCALMKTDATE_1963486062");
    noLegs_0_1.set(LegCouponPaymentDate_80);
    InstrumentLeg_80.insert(LegCouponPaymentDate_80.getString());
    FIX::LegCouponRate LegCouponRate_80;
    LegCouponRate_80.setString("29.720000");
    noLegs_0_1.set(LegCouponRate_80);
    InstrumentLeg_80.insert(LegCouponRate_80.getString());
    FIX::LegCreditRating LegCreditRating_80("STRING_764056169");
    noLegs_0_1.set(LegCreditRating_80);
    InstrumentLeg_80.insert(LegCreditRating_80.getString());
    FIX::LegCurrency LegCurrency_80("JPY");
    noLegs_0_1.set(LegCurrency_80);
    InstrumentLeg_80.insert(LegCurrency_80.getString());
    FIX::LegDatedDate LegDatedDate_80("LOCALMKTDATE_19121292");
    noLegs_0_1.set(LegDatedDate_80);
    InstrumentLeg_80.insert(LegDatedDate_80.getString());
    FIX::LegExerciseStyle LegExerciseStyle_80(520073874);
    noLegs_0_1.set(LegExerciseStyle_80);
    InstrumentLeg_80.insert(LegExerciseStyle_80.getString());
    FIX::LegFactor LegFactor_80;
    LegFactor_80.setString("19954641");
    noLegs_0_1.set(LegFactor_80);
    InstrumentLeg_80.insert(LegFactor_80.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_80(1744002963);
    noLegs_0_1.set(LegFlowScheduleType_80);
    InstrumentLeg_80.insert(LegFlowScheduleType_80.getString());
    FIX::LegInstrRegistry LegInstrRegistry_80("STRING_531359255");
    noLegs_0_1.set(LegInstrRegistry_80);
    InstrumentLeg_80.insert(LegInstrRegistry_80.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_80("LOCALMKTDATE_1523227808");
    noLegs_0_1.set(LegInterestAccrualDate_80);
    InstrumentLeg_80.insert(LegInterestAccrualDate_80.getString());
    FIX::LegIssueDate LegIssueDate_80("LOCALMKTDATE_540872986");
    noLegs_0_1.set(LegIssueDate_80);
    InstrumentLeg_80.insert(LegIssueDate_80.getString());
    FIX::LegIssuer LegIssuer_80("STRING_1569237550");
    noLegs_0_1.set(LegIssuer_80);
    InstrumentLeg_80.insert(LegIssuer_80.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_80("STRING_499267310");
    noLegs_0_1.set(LegLocaleOfIssue_80);
    InstrumentLeg_80.insert(LegLocaleOfIssue_80.getString());
    FIX::LegMaturityDate LegMaturityDate_80("LOCALMKTDATE_853687687");
    noLegs_0_1.set(LegMaturityDate_80);
    InstrumentLeg_80.insert(LegMaturityDate_80.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_80("MONTHYEAR_1688813163");
    noLegs_0_1.set(LegMaturityMonthYear_80);
    InstrumentLeg_80.insert(LegMaturityMonthYear_80.getString());
    FIX::LegMaturityTime LegMaturityTime_80("TZTIMEONLY_428463406");
    noLegs_0_1.set(LegMaturityTime_80);
    InstrumentLeg_80.insert(LegMaturityTime_80.getString());
    FIX::LegOptAttribute LegOptAttribute_80('7');
    noLegs_0_1.set(LegOptAttribute_80);
    InstrumentLeg_80.insert(LegOptAttribute_80.getString());
    FIX::LegOptionRatio LegOptionRatio_80;
    LegOptionRatio_80.setString("16485936");
    noLegs_0_1.set(LegOptionRatio_80);
    InstrumentLeg_80.insert(LegOptionRatio_80.getString());
    FIX::LegPool LegPool_80("STRING_2083671790");
    noLegs_0_1.set(LegPool_80);
    InstrumentLeg_80.insert(LegPool_80.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_80("STRING_124648394");
    noLegs_0_1.set(LegPriceUnitOfMeasure_80);
    InstrumentLeg_80.insert(LegPriceUnitOfMeasure_80.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_80;
    LegPriceUnitOfMeasureQty_80.setString("4434707");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_80);
    InstrumentLeg_80.insert(LegPriceUnitOfMeasureQty_80.getString());
    FIX::LegProduct LegProduct_80(1604177485);
    noLegs_0_1.set(LegProduct_80);
    InstrumentLeg_80.insert(LegProduct_80.getString());
    FIX::LegPutOrCall LegPutOrCall_80(1214977411);
    noLegs_0_1.set(LegPutOrCall_80);
    InstrumentLeg_80.insert(LegPutOrCall_80.getString());
    FIX::LegRatioQty LegRatioQty_80;
    LegRatioQty_80.setString("10627872");
    noLegs_0_1.set(LegRatioQty_80);
    InstrumentLeg_80.insert(LegRatioQty_80.getString());
    FIX::LegRedemptionDate LegRedemptionDate_80("LOCALMKTDATE_92398040");
    noLegs_0_1.set(LegRedemptionDate_80);
    InstrumentLeg_80.insert(LegRedemptionDate_80.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_80("STRING_2072589436");
    noLegs_0_1.set(LegRepoCollateralSecurityType_80);
    InstrumentLeg_80.insert(LegRepoCollateralSecurityType_80.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_80;
    LegRepurchaseRate_80.setString("54.620000");
    noLegs_0_1.set(LegRepurchaseRate_80);
    InstrumentLeg_80.insert(LegRepurchaseRate_80.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_80(503507474);
    noLegs_0_1.set(LegRepurchaseTerm_80);
    InstrumentLeg_80.insert(LegRepurchaseTerm_80.getString());
    FIX::LegSecurityDesc LegSecurityDesc_80("STRING_1717005289");
    noLegs_0_1.set(LegSecurityDesc_80);
    InstrumentLeg_80.insert(LegSecurityDesc_80.getString());
    FIX::LegSecurityExchange LegSecurityExchange_80("EXCHANGE_606091697");
    noLegs_0_1.set(LegSecurityExchange_80);
    InstrumentLeg_80.insert(LegSecurityExchange_80.getString());
    FIX::LegSecurityID LegSecurityID_80("STRING_319509889");
    noLegs_0_1.set(LegSecurityID_80);
    InstrumentLeg_80.insert(LegSecurityID_80.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_80("STRING_428834613");
    noLegs_0_1.set(LegSecurityIDSource_80);
    InstrumentLeg_80.insert(LegSecurityIDSource_80.getString());
    FIX::LegSecuritySubType LegSecuritySubType_80("STRING_1370147866");
    noLegs_0_1.set(LegSecuritySubType_80);
    InstrumentLeg_80.insert(LegSecuritySubType_80.getString());
    FIX::LegSecurityType LegSecurityType_80("STRING_228801254");
    noLegs_0_1.set(LegSecurityType_80);
    InstrumentLeg_80.insert(LegSecurityType_80.getString());
    FIX::LegSide LegSide_80('1');
    noLegs_0_1.set(LegSide_80);
    InstrumentLeg_80.insert(LegSide_80.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_80("STRING_1389269159");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_80);
    InstrumentLeg_80.insert(LegStateOrProvinceOfIssue_80.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_80("CAN");
    noLegs_0_1.set(LegStrikeCurrency_80);
    InstrumentLeg_80.insert(LegStrikeCurrency_80.getString());
    FIX::LegStrikePrice LegStrikePrice_80;
    LegStrikePrice_80.setString("9857884");
    noLegs_0_1.set(LegStrikePrice_80);
    InstrumentLeg_80.insert(LegStrikePrice_80.getString());
    FIX::LegSymbol LegSymbol_80("STRING_1280234384");
    noLegs_0_1.set(LegSymbol_80);
    InstrumentLeg_80.insert(LegSymbol_80.getString());
    FIX::LegSymbolSfx LegSymbolSfx_80("STRING_1142319948");
    noLegs_0_1.set(LegSymbolSfx_80);
    InstrumentLeg_80.insert(LegSymbolSfx_80.getString());
    FIX::LegTimeUnit LegTimeUnit_80("STRING_1526661460");
    noLegs_0_1.set(LegTimeUnit_80);
    InstrumentLeg_80.insert(LegTimeUnit_80.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_80("STRING_701988286");
    noLegs_0_1.set(LegUnitOfMeasure_80);
    InstrumentLeg_80.insert(LegUnitOfMeasure_80.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_80;
    LegUnitOfMeasureQty_80.setString("16415872");
    noLegs_0_1.set(LegUnitOfMeasureQty_80);
    InstrumentLeg_80.insert(LegUnitOfMeasureQty_80.getString());
    all_values.push_back(InstrumentLeg_80);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_166;
      FIX::LegSecurityAltID LegSecurityAltID_166("STRING_243317801");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_166);
      LegSecAltIDGrp_NoLegSecurityAltID_166.insert(LegSecurityAltID_166.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_166("STRING_2070050665");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_166);
      LegSecAltIDGrp_NoLegSecurityAltID_166.insert(LegSecurityAltIDSource_166.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_166);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // LinesOfTextGrp
  // Group LinesOfTextGrp.NoLinesOfText
  {
    FIX50SP2::News::NoLinesOfText noLinesOfText_0_0;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_3;
    FIX::EncodedText EncodedText_67("DATA_1891911414");
    noLinesOfText_0_0.set(EncodedText_67);
    LinesOfTextGrp_NoLinesOfText_3.insert(EncodedText_67.getString());
    FIX::EncodedTextLen EncodedTextLen_67(2006238807);
    noLinesOfText_0_0.set(EncodedTextLen_67);
    LinesOfTextGrp_NoLinesOfText_3.insert(EncodedTextLen_67.getString());
    FIX::Text Text_67("STRING_1068960450");
    noLinesOfText_0_0.set(Text_67);
    LinesOfTextGrp_NoLinesOfText_3.insert(Text_67.getString());
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_3);

    msg.addGroup(noLinesOfText_0_0);
  }
  {
    FIX50SP2::News::NoLinesOfText noLinesOfText_0_1;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_4;
    FIX::EncodedText EncodedText_68("DATA_187898544");
    noLinesOfText_0_1.set(EncodedText_68);
    LinesOfTextGrp_NoLinesOfText_4.insert(EncodedText_68.getString());
    FIX::EncodedTextLen EncodedTextLen_68(1462932644);
    noLinesOfText_0_1.set(EncodedTextLen_68);
    LinesOfTextGrp_NoLinesOfText_4.insert(EncodedTextLen_68.getString());
    FIX::Text Text_68("STRING_136454213");
    noLinesOfText_0_1.set(Text_68);
    LinesOfTextGrp_NoLinesOfText_4.insert(Text_68.getString());
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_4);

    msg.addGroup(noLinesOfText_0_1);
  }
  // NewsRefGrp
  // Group NewsRefGrp.NoNewsRefIDs
  {
    FIX50SP2::News::NoNewsRefIDs noNewsRefIDs_0_0;
    // NewsRefGrp.NoNewsRefIDs
    multiset<string> NewsRefGrp_NoNewsRefIDs_0;
    FIX::NewsRefID NewsRefID_0("STRING_1555330685");
    noNewsRefIDs_0_0.set(NewsRefID_0);
    NewsRefGrp_NoNewsRefIDs_0.insert(NewsRefID_0.getString());
    FIX::NewsRefType NewsRefType_0(1);
    noNewsRefIDs_0_0.set(NewsRefType_0);
    NewsRefGrp_NoNewsRefIDs_0.insert(NewsRefType_0.getString());
    all_values.push_back(NewsRefGrp_NoNewsRefIDs_0);

    msg.addGroup(noNewsRefIDs_0_0);
  }
  {
    FIX50SP2::News::NoNewsRefIDs noNewsRefIDs_0_1;
    // NewsRefGrp.NoNewsRefIDs
    multiset<string> NewsRefGrp_NoNewsRefIDs_1;
    FIX::NewsRefID NewsRefID_1("STRING_1481121237");
    noNewsRefIDs_0_1.set(NewsRefID_1);
    NewsRefGrp_NoNewsRefIDs_1.insert(NewsRefID_1.getString());
    FIX::NewsRefType NewsRefType_1(1);
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
    FIX::RoutingID RoutingID_6("STRING_2087212935");
    noRoutingIDs_0_0.set(RoutingID_6);
    RoutingGrp_NoRoutingIDs_6.insert(RoutingID_6.getString());
    FIX::RoutingType RoutingType_6(1);
    noRoutingIDs_0_0.set(RoutingType_6);
    RoutingGrp_NoRoutingIDs_6.insert(RoutingType_6.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_6);

    msg.addGroup(noRoutingIDs_0_0);
  }
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_1;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_7;
    FIX::RoutingID RoutingID_7("STRING_59916255");
    noRoutingIDs_0_1.set(RoutingID_7);
    RoutingGrp_NoRoutingIDs_7.insert(RoutingID_7.getString());
    FIX::RoutingType RoutingType_7(2);
    noRoutingIDs_0_1.set(RoutingType_7);
    RoutingGrp_NoRoutingIDs_7.insert(RoutingType_7.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_7);

    msg.addGroup(noRoutingIDs_0_1);
  }
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_2;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_8;
    FIX::RoutingID RoutingID_8("STRING_459665655");
    noRoutingIDs_0_2.set(RoutingID_8);
    RoutingGrp_NoRoutingIDs_8.insert(RoutingID_8.getString());
    FIX::RoutingType RoutingType_8(4);
    noRoutingIDs_0_2.set(RoutingType_8);
    RoutingGrp_NoRoutingIDs_8.insert(RoutingType_8.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_8);

    msg.addGroup(noRoutingIDs_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::News::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_66;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_66("DATA_1208540783");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_66);
    UnderlyingInstrument_66.insert(EncodedUnderlyingIssuer_66.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_66(1597603670);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_66);
    UnderlyingInstrument_66.insert(EncodedUnderlyingIssuerLen_66.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_66("DATA_1537451139");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_66);
    UnderlyingInstrument_66.insert(EncodedUnderlyingSecurityDesc_66.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_66(341291519);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_66);
    UnderlyingInstrument_66.insert(EncodedUnderlyingSecurityDescLen_66.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_66;
    UnderlyingAdjustedQuantity_66.setString("5924399");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_66);
    UnderlyingInstrument_66.insert(UnderlyingAdjustedQuantity_66.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_66;
    UnderlyingAllocationPercent_66.setString("89.510000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_66);
    UnderlyingInstrument_66.insert(UnderlyingAllocationPercent_66.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_66;
    UnderlyingAttachmentPoint_66.setString("98.050000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_66);
    UnderlyingInstrument_66.insert(UnderlyingAttachmentPoint_66.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_66("STRING_86543581");
    noUnderlyings_0_0.set(UnderlyingCFICode_66);
    UnderlyingInstrument_66.insert(UnderlyingCFICode_66.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_66("STRING_1149494451");
    noUnderlyings_0_0.set(UnderlyingCPProgram_66);
    UnderlyingInstrument_66.insert(UnderlyingCPProgram_66.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_66("STRING_1286597607");
    noUnderlyings_0_0.set(UnderlyingCPRegType_66);
    UnderlyingInstrument_66.insert(UnderlyingCPRegType_66.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_66;
    UnderlyingCapValue_66.setString("91105");
    noUnderlyings_0_0.set(UnderlyingCapValue_66);
    UnderlyingInstrument_66.insert(UnderlyingCapValue_66.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_66;
    UnderlyingCashAmount_66.setString("20938065");
    noUnderlyings_0_0.set(UnderlyingCashAmount_66);
    UnderlyingInstrument_66.insert(UnderlyingCashAmount_66.getString());
    FIX::UnderlyingCashType UnderlyingCashType_66("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_66);
    UnderlyingInstrument_66.insert(UnderlyingCashType_66.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_66;
    UnderlyingContractMultiplier_66.setString("20153494");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_66);
    UnderlyingInstrument_66.insert(UnderlyingContractMultiplier_66.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_66(1015283309);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_66);
    UnderlyingInstrument_66.insert(UnderlyingContractMultiplierUnit_66.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_66("COUNTRY_1218923917");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_66);
    UnderlyingInstrument_66.insert(UnderlyingCountryOfIssue_66.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_66("LOCALMKTDATE_1330798401");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_66);
    UnderlyingInstrument_66.insert(UnderlyingCouponPaymentDate_66.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_66;
    UnderlyingCouponRate_66.setString("75.220000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_66);
    UnderlyingInstrument_66.insert(UnderlyingCouponRate_66.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_66("STRING_322126045");
    noUnderlyings_0_0.set(UnderlyingCreditRating_66);
    UnderlyingInstrument_66.insert(UnderlyingCreditRating_66.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_66("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_66);
    UnderlyingInstrument_66.insert(UnderlyingCurrency_66.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_66;
    UnderlyingCurrentValue_66.setString("18032472");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_66);
    UnderlyingInstrument_66.insert(UnderlyingCurrentValue_66.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_66;
    UnderlyingDetachmentPoint_66.setString("99.500000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_66);
    UnderlyingInstrument_66.insert(UnderlyingDetachmentPoint_66.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_66;
    UnderlyingDirtyPrice_66.setString("8443791");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_66);
    UnderlyingInstrument_66.insert(UnderlyingDirtyPrice_66.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_66;
    UnderlyingEndPrice_66.setString("17429765");
    noUnderlyings_0_0.set(UnderlyingEndPrice_66);
    UnderlyingInstrument_66.insert(UnderlyingEndPrice_66.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_66;
    UnderlyingEndValue_66.setString("8808643");
    noUnderlyings_0_0.set(UnderlyingEndValue_66);
    UnderlyingInstrument_66.insert(UnderlyingEndValue_66.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_66(904295421);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_66);
    UnderlyingInstrument_66.insert(UnderlyingExerciseStyle_66.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_66;
    UnderlyingFXRate_66.setString("9053700");
    noUnderlyings_0_0.set(UnderlyingFXRate_66);
    UnderlyingInstrument_66.insert(UnderlyingFXRate_66.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_66('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_66);
    UnderlyingInstrument_66.insert(UnderlyingFXRateCalc_66.getString());
    FIX::UnderlyingFactor UnderlyingFactor_66;
    UnderlyingFactor_66.setString("7353233");
    noUnderlyings_0_0.set(UnderlyingFactor_66);
    UnderlyingInstrument_66.insert(UnderlyingFactor_66.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_66(1457032739);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_66);
    UnderlyingInstrument_66.insert(UnderlyingFlowScheduleType_66.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_66("STRING_401587141");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_66);
    UnderlyingInstrument_66.insert(UnderlyingInstrRegistry_66.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_66("LOCALMKTDATE_185443327");
    noUnderlyings_0_0.set(UnderlyingIssueDate_66);
    UnderlyingInstrument_66.insert(UnderlyingIssueDate_66.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_66("STRING_847000230");
    noUnderlyings_0_0.set(UnderlyingIssuer_66);
    UnderlyingInstrument_66.insert(UnderlyingIssuer_66.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_66("STRING_742878660");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_66);
    UnderlyingInstrument_66.insert(UnderlyingLocaleOfIssue_66.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_66("LOCALMKTDATE_777883297");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_66);
    UnderlyingInstrument_66.insert(UnderlyingMaturityDate_66.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_66("MONTHYEAR_1763629182");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_66);
    UnderlyingInstrument_66.insert(UnderlyingMaturityMonthYear_66.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_66("TZTIMEONLY_1786158466");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_66);
    UnderlyingInstrument_66.insert(UnderlyingMaturityTime_66.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_66;
    UnderlyingNotionalPercentageOutstanding_66.setString("68.780000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_66);
    UnderlyingInstrument_66.insert(UnderlyingNotionalPercentageOutstanding_66.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_66('7');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_66);
    UnderlyingInstrument_66.insert(UnderlyingOptAttribute_66.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_66;
    UnderlyingOriginalNotionalPercentageOutstanding_66.setString("24.250000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_66);
    UnderlyingInstrument_66.insert(UnderlyingOriginalNotionalPercentageOutstanding_66.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_66("STRING_873537476");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_66);
    UnderlyingInstrument_66.insert(UnderlyingPriceUnitOfMeasure_66.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_66;
    UnderlyingPriceUnitOfMeasureQty_66.setString("7119628");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_66);
    UnderlyingInstrument_66.insert(UnderlyingPriceUnitOfMeasureQty_66.getString());
    FIX::UnderlyingProduct UnderlyingProduct_66(1956297798);
    noUnderlyings_0_0.set(UnderlyingProduct_66);
    UnderlyingInstrument_66.insert(UnderlyingProduct_66.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_66(741403233);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_66);
    UnderlyingInstrument_66.insert(UnderlyingPutOrCall_66.getString());
    FIX::UnderlyingPx UnderlyingPx_66;
    UnderlyingPx_66.setString("17272461");
    noUnderlyings_0_0.set(UnderlyingPx_66);
    UnderlyingInstrument_66.insert(UnderlyingPx_66.getString());
    FIX::UnderlyingQty UnderlyingQty_66;
    UnderlyingQty_66.setString("10277380");
    noUnderlyings_0_0.set(UnderlyingQty_66);
    UnderlyingInstrument_66.insert(UnderlyingQty_66.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_66("LOCALMKTDATE_2072201635");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_66);
    UnderlyingInstrument_66.insert(UnderlyingRedemptionDate_66.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_66("STRING_731500027");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_66);
    UnderlyingInstrument_66.insert(UnderlyingRepoCollateralSecurityType_66.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_66;
    UnderlyingRepurchaseRate_66.setString("41.120000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_66);
    UnderlyingInstrument_66.insert(UnderlyingRepurchaseRate_66.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_66(663363425);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_66);
    UnderlyingInstrument_66.insert(UnderlyingRepurchaseTerm_66.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_66("STRING_1944797550");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_66);
    UnderlyingInstrument_66.insert(UnderlyingRestructuringType_66.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_66("STRING_1005627747");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_66);
    UnderlyingInstrument_66.insert(UnderlyingSecurityDesc_66.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_66("EXCHANGE_1313363375");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_66);
    UnderlyingInstrument_66.insert(UnderlyingSecurityExchange_66.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_66("STRING_641693068");
    noUnderlyings_0_0.set(UnderlyingSecurityID_66);
    UnderlyingInstrument_66.insert(UnderlyingSecurityID_66.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_66("STRING_601120668");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_66);
    UnderlyingInstrument_66.insert(UnderlyingSecurityIDSource_66.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_66("STRING_46744078");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_66);
    UnderlyingInstrument_66.insert(UnderlyingSecuritySubType_66.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_66("STRING_1545988490");
    noUnderlyings_0_0.set(UnderlyingSecurityType_66);
    UnderlyingInstrument_66.insert(UnderlyingSecurityType_66.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_66("STRING_1506490743");
    noUnderlyings_0_0.set(UnderlyingSeniority_66);
    UnderlyingInstrument_66.insert(UnderlyingSeniority_66.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_66("STRING_1387274083");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_66);
    UnderlyingInstrument_66.insert(UnderlyingSettlMethod_66.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_66(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_66);
    UnderlyingInstrument_66.insert(UnderlyingSettlementType_66.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_66;
    UnderlyingStartValue_66.setString("8160398");
    noUnderlyings_0_0.set(UnderlyingStartValue_66);
    UnderlyingInstrument_66.insert(UnderlyingStartValue_66.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_66("STRING_1788861224");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_66);
    UnderlyingInstrument_66.insert(UnderlyingStateOrProvinceOfIssue_66.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_66("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_66);
    UnderlyingInstrument_66.insert(UnderlyingStrikeCurrency_66.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_66;
    UnderlyingStrikePrice_66.setString("3842562");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_66);
    UnderlyingInstrument_66.insert(UnderlyingStrikePrice_66.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_66("STRING_1097154771");
    noUnderlyings_0_0.set(UnderlyingSymbol_66);
    UnderlyingInstrument_66.insert(UnderlyingSymbol_66.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_66("STRING_1279185599");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_66);
    UnderlyingInstrument_66.insert(UnderlyingSymbolSfx_66.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_66("STRING_22931055");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_66);
    UnderlyingInstrument_66.insert(UnderlyingTimeUnit_66.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_66("STRING_1961581649");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_66);
    UnderlyingInstrument_66.insert(UnderlyingUnitOfMeasure_66.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_66;
    UnderlyingUnitOfMeasureQty_66.setString("20448255");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_66);
    UnderlyingInstrument_66.insert(UnderlyingUnitOfMeasureQty_66.getString());
    all_values.push_back(UnderlyingInstrument_66);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_139;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_139("STRING_687635478");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_139);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_139.insert(UnderlyingSecurityAltID_139.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_139("STRING_609304780");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_139);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_139.insert(UnderlyingSecurityAltIDSource_139.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_139);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_140;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_140("STRING_757017630");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_140);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_140.insert(UnderlyingSecurityAltID_140.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_140("STRING_1429038711");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_140);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_140.insert(UnderlyingSecurityAltIDSource_140.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_140);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_141;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_141("STRING_189067285");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_141);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_141.insert(UnderlyingSecurityAltID_141.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_141("STRING_1784755697");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_141);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_141.insert(UnderlyingSecurityAltIDSource_141.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_141);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_126;
      FIX::UnderlyingStipType UnderlyingStipType_126("STRING_920567312");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_126);
      UnderlyingStipulations_NoUnderlyingStips_126.insert(UnderlyingStipType_126.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_126("STRING_987136162");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_126);
      UnderlyingStipulations_NoUnderlyingStips_126.insert(UnderlyingStipValue_126.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_126);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_127;
      FIX::UnderlyingStipType UnderlyingStipType_127("STRING_2017120124");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_127);
      UnderlyingStipulations_NoUnderlyingStips_127.insert(UnderlyingStipType_127.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_127("STRING_717881215");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_127);
      UnderlyingStipulations_NoUnderlyingStips_127.insert(UnderlyingStipValue_127.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_127);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_128;
      FIX::UnderlyingStipType UnderlyingStipType_128("STRING_1992763909");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_128);
      UnderlyingStipulations_NoUnderlyingStips_128.insert(UnderlyingStipType_128.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_128("STRING_1182999851");
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
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_138;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_138("STRING_446400929");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_138);
      UndlyInstrumentParties_NoUndlyInstrumentParties_138.insert(UnderlyingInstrumentPartyID_138.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_138('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_138);
      UndlyInstrumentParties_NoUndlyInstrumentParties_138.insert(UnderlyingInstrumentPartyIDSource_138.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_138(758079125);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_138);
      UndlyInstrumentParties_NoUndlyInstrumentParties_138.insert(UnderlyingInstrumentPartyRole_138.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_138);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_281("STRING_469534365");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_281);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281.insert(UnderlyingInstrumentPartySubID_281.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_281(891907272);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_281);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281.insert(UnderlyingInstrumentPartySubIDType_281.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_139;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_139("STRING_621447860");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_139);
      UndlyInstrumentParties_NoUndlyInstrumentParties_139.insert(UnderlyingInstrumentPartyID_139.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_139('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_139);
      UndlyInstrumentParties_NoUndlyInstrumentParties_139.insert(UnderlyingInstrumentPartyIDSource_139.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_139(1211178745);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_139);
      UndlyInstrumentParties_NoUndlyInstrumentParties_139.insert(UnderlyingInstrumentPartyRole_139.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_139);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_282("STRING_495168178");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_282);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282.insert(UnderlyingInstrumentPartySubID_282.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_282(160849868);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_282);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282.insert(UnderlyingInstrumentPartySubIDType_282.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_283("STRING_1416189877");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_283);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283.insert(UnderlyingInstrumentPartySubID_283.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_283(518099233);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_283);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283.insert(UnderlyingInstrumentPartySubIDType_283.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_140;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_140("STRING_2122431518");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_140);
      UndlyInstrumentParties_NoUndlyInstrumentParties_140.insert(UnderlyingInstrumentPartyID_140.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_140('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_140);
      UndlyInstrumentParties_NoUndlyInstrumentParties_140.insert(UnderlyingInstrumentPartyIDSource_140.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_140(1466302713);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_140);
      UndlyInstrumentParties_NoUndlyInstrumentParties_140.insert(UnderlyingInstrumentPartyRole_140.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_140);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_284("STRING_1922836594");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_284);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284.insert(UnderlyingInstrumentPartySubID_284.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_284(75836695);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_284);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284.insert(UnderlyingInstrumentPartySubIDType_284.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::News::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_67;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_67("DATA_2091622059");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_67);
    UnderlyingInstrument_67.insert(EncodedUnderlyingIssuer_67.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_67(2111903879);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_67);
    UnderlyingInstrument_67.insert(EncodedUnderlyingIssuerLen_67.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_67("DATA_1860592393");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_67);
    UnderlyingInstrument_67.insert(EncodedUnderlyingSecurityDesc_67.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_67(1297895110);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_67);
    UnderlyingInstrument_67.insert(EncodedUnderlyingSecurityDescLen_67.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_67;
    UnderlyingAdjustedQuantity_67.setString("8849875");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_67);
    UnderlyingInstrument_67.insert(UnderlyingAdjustedQuantity_67.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_67;
    UnderlyingAllocationPercent_67.setString("49.070000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_67);
    UnderlyingInstrument_67.insert(UnderlyingAllocationPercent_67.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_67;
    UnderlyingAttachmentPoint_67.setString("15.860000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_67);
    UnderlyingInstrument_67.insert(UnderlyingAttachmentPoint_67.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_67("STRING_1602868759");
    noUnderlyings_0_1.set(UnderlyingCFICode_67);
    UnderlyingInstrument_67.insert(UnderlyingCFICode_67.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_67("STRING_545525168");
    noUnderlyings_0_1.set(UnderlyingCPProgram_67);
    UnderlyingInstrument_67.insert(UnderlyingCPProgram_67.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_67("STRING_203047789");
    noUnderlyings_0_1.set(UnderlyingCPRegType_67);
    UnderlyingInstrument_67.insert(UnderlyingCPRegType_67.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_67;
    UnderlyingCapValue_67.setString("8149593");
    noUnderlyings_0_1.set(UnderlyingCapValue_67);
    UnderlyingInstrument_67.insert(UnderlyingCapValue_67.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_67;
    UnderlyingCashAmount_67.setString("9919260");
    noUnderlyings_0_1.set(UnderlyingCashAmount_67);
    UnderlyingInstrument_67.insert(UnderlyingCashAmount_67.getString());
    FIX::UnderlyingCashType UnderlyingCashType_67("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_67);
    UnderlyingInstrument_67.insert(UnderlyingCashType_67.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_67;
    UnderlyingContractMultiplier_67.setString("15730385");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_67);
    UnderlyingInstrument_67.insert(UnderlyingContractMultiplier_67.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_67(797334122);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_67);
    UnderlyingInstrument_67.insert(UnderlyingContractMultiplierUnit_67.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_67("COUNTRY_1902326084");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_67);
    UnderlyingInstrument_67.insert(UnderlyingCountryOfIssue_67.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_67("LOCALMKTDATE_317462144");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_67);
    UnderlyingInstrument_67.insert(UnderlyingCouponPaymentDate_67.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_67;
    UnderlyingCouponRate_67.setString("19.820000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_67);
    UnderlyingInstrument_67.insert(UnderlyingCouponRate_67.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_67("STRING_2013238025");
    noUnderlyings_0_1.set(UnderlyingCreditRating_67);
    UnderlyingInstrument_67.insert(UnderlyingCreditRating_67.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_67("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_67);
    UnderlyingInstrument_67.insert(UnderlyingCurrency_67.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_67;
    UnderlyingCurrentValue_67.setString("3609225");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_67);
    UnderlyingInstrument_67.insert(UnderlyingCurrentValue_67.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_67;
    UnderlyingDetachmentPoint_67.setString("7.580000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_67);
    UnderlyingInstrument_67.insert(UnderlyingDetachmentPoint_67.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_67;
    UnderlyingDirtyPrice_67.setString("8244924");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_67);
    UnderlyingInstrument_67.insert(UnderlyingDirtyPrice_67.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_67;
    UnderlyingEndPrice_67.setString("8790217");
    noUnderlyings_0_1.set(UnderlyingEndPrice_67);
    UnderlyingInstrument_67.insert(UnderlyingEndPrice_67.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_67;
    UnderlyingEndValue_67.setString("16644386");
    noUnderlyings_0_1.set(UnderlyingEndValue_67);
    UnderlyingInstrument_67.insert(UnderlyingEndValue_67.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_67(2138024302);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_67);
    UnderlyingInstrument_67.insert(UnderlyingExerciseStyle_67.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_67;
    UnderlyingFXRate_67.setString("1978408");
    noUnderlyings_0_1.set(UnderlyingFXRate_67);
    UnderlyingInstrument_67.insert(UnderlyingFXRate_67.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_67('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_67);
    UnderlyingInstrument_67.insert(UnderlyingFXRateCalc_67.getString());
    FIX::UnderlyingFactor UnderlyingFactor_67;
    UnderlyingFactor_67.setString("19133772");
    noUnderlyings_0_1.set(UnderlyingFactor_67);
    UnderlyingInstrument_67.insert(UnderlyingFactor_67.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_67(273677550);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_67);
    UnderlyingInstrument_67.insert(UnderlyingFlowScheduleType_67.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_67("STRING_123676739");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_67);
    UnderlyingInstrument_67.insert(UnderlyingInstrRegistry_67.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_67("LOCALMKTDATE_1877797480");
    noUnderlyings_0_1.set(UnderlyingIssueDate_67);
    UnderlyingInstrument_67.insert(UnderlyingIssueDate_67.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_67("STRING_2134269943");
    noUnderlyings_0_1.set(UnderlyingIssuer_67);
    UnderlyingInstrument_67.insert(UnderlyingIssuer_67.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_67("STRING_1421571849");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_67);
    UnderlyingInstrument_67.insert(UnderlyingLocaleOfIssue_67.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_67("LOCALMKTDATE_615301376");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_67);
    UnderlyingInstrument_67.insert(UnderlyingMaturityDate_67.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_67("MONTHYEAR_687031202");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_67);
    UnderlyingInstrument_67.insert(UnderlyingMaturityMonthYear_67.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_67("TZTIMEONLY_441619787");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_67);
    UnderlyingInstrument_67.insert(UnderlyingMaturityTime_67.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_67;
    UnderlyingNotionalPercentageOutstanding_67.setString("64.870000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_67);
    UnderlyingInstrument_67.insert(UnderlyingNotionalPercentageOutstanding_67.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_67('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_67);
    UnderlyingInstrument_67.insert(UnderlyingOptAttribute_67.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_67;
    UnderlyingOriginalNotionalPercentageOutstanding_67.setString("75.770000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_67);
    UnderlyingInstrument_67.insert(UnderlyingOriginalNotionalPercentageOutstanding_67.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_67("STRING_885645881");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_67);
    UnderlyingInstrument_67.insert(UnderlyingPriceUnitOfMeasure_67.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_67;
    UnderlyingPriceUnitOfMeasureQty_67.setString("769988");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_67);
    UnderlyingInstrument_67.insert(UnderlyingPriceUnitOfMeasureQty_67.getString());
    FIX::UnderlyingProduct UnderlyingProduct_67(2077459296);
    noUnderlyings_0_1.set(UnderlyingProduct_67);
    UnderlyingInstrument_67.insert(UnderlyingProduct_67.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_67(311200753);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_67);
    UnderlyingInstrument_67.insert(UnderlyingPutOrCall_67.getString());
    FIX::UnderlyingPx UnderlyingPx_67;
    UnderlyingPx_67.setString("8743329");
    noUnderlyings_0_1.set(UnderlyingPx_67);
    UnderlyingInstrument_67.insert(UnderlyingPx_67.getString());
    FIX::UnderlyingQty UnderlyingQty_67;
    UnderlyingQty_67.setString("18323017");
    noUnderlyings_0_1.set(UnderlyingQty_67);
    UnderlyingInstrument_67.insert(UnderlyingQty_67.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_67("LOCALMKTDATE_628662897");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_67);
    UnderlyingInstrument_67.insert(UnderlyingRedemptionDate_67.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_67("STRING_145631277");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_67);
    UnderlyingInstrument_67.insert(UnderlyingRepoCollateralSecurityType_67.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_67;
    UnderlyingRepurchaseRate_67.setString("61.090000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_67);
    UnderlyingInstrument_67.insert(UnderlyingRepurchaseRate_67.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_67(9820139);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_67);
    UnderlyingInstrument_67.insert(UnderlyingRepurchaseTerm_67.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_67("STRING_1701417537");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_67);
    UnderlyingInstrument_67.insert(UnderlyingRestructuringType_67.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_67("STRING_2058978665");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_67);
    UnderlyingInstrument_67.insert(UnderlyingSecurityDesc_67.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_67("EXCHANGE_1699310897");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_67);
    UnderlyingInstrument_67.insert(UnderlyingSecurityExchange_67.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_67("STRING_378426378");
    noUnderlyings_0_1.set(UnderlyingSecurityID_67);
    UnderlyingInstrument_67.insert(UnderlyingSecurityID_67.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_67("STRING_790516807");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_67);
    UnderlyingInstrument_67.insert(UnderlyingSecurityIDSource_67.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_67("STRING_1216265877");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_67);
    UnderlyingInstrument_67.insert(UnderlyingSecuritySubType_67.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_67("STRING_368967032");
    noUnderlyings_0_1.set(UnderlyingSecurityType_67);
    UnderlyingInstrument_67.insert(UnderlyingSecurityType_67.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_67("STRING_988357662");
    noUnderlyings_0_1.set(UnderlyingSeniority_67);
    UnderlyingInstrument_67.insert(UnderlyingSeniority_67.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_67("STRING_1395804205");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_67);
    UnderlyingInstrument_67.insert(UnderlyingSettlMethod_67.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_67(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_67);
    UnderlyingInstrument_67.insert(UnderlyingSettlementType_67.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_67;
    UnderlyingStartValue_67.setString("12620352");
    noUnderlyings_0_1.set(UnderlyingStartValue_67);
    UnderlyingInstrument_67.insert(UnderlyingStartValue_67.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_67("STRING_1519480944");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_67);
    UnderlyingInstrument_67.insert(UnderlyingStateOrProvinceOfIssue_67.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_67("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_67);
    UnderlyingInstrument_67.insert(UnderlyingStrikeCurrency_67.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_67;
    UnderlyingStrikePrice_67.setString("7935691");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_67);
    UnderlyingInstrument_67.insert(UnderlyingStrikePrice_67.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_67("STRING_480475841");
    noUnderlyings_0_1.set(UnderlyingSymbol_67);
    UnderlyingInstrument_67.insert(UnderlyingSymbol_67.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_67("STRING_1935852710");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_67);
    UnderlyingInstrument_67.insert(UnderlyingSymbolSfx_67.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_67("STRING_1235188933");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_67);
    UnderlyingInstrument_67.insert(UnderlyingTimeUnit_67.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_67("STRING_551162328");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_67);
    UnderlyingInstrument_67.insert(UnderlyingUnitOfMeasure_67.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_67;
    UnderlyingUnitOfMeasureQty_67.setString("10209254");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_67);
    UnderlyingInstrument_67.insert(UnderlyingUnitOfMeasureQty_67.getString());
    all_values.push_back(UnderlyingInstrument_67);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_142;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_142("STRING_1436808209");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_142);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_142.insert(UnderlyingSecurityAltID_142.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_142("STRING_1097924253");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_142);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_142.insert(UnderlyingSecurityAltIDSource_142.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_142);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_143;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_143("STRING_1809832158");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_143);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_143.insert(UnderlyingSecurityAltID_143.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_143("STRING_1748008963");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_143);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_143.insert(UnderlyingSecurityAltIDSource_143.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_143);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_144;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_144("STRING_1972257195");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_144);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_144.insert(UnderlyingSecurityAltID_144.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_144("STRING_1494650242");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_144);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_144.insert(UnderlyingSecurityAltIDSource_144.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_144);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_129;
      FIX::UnderlyingStipType UnderlyingStipType_129("STRING_2117888472");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_129);
      UnderlyingStipulations_NoUnderlyingStips_129.insert(UnderlyingStipType_129.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_129("STRING_1045222704");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_129);
      UnderlyingStipulations_NoUnderlyingStips_129.insert(UnderlyingStipValue_129.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_129);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_130;
      FIX::UnderlyingStipType UnderlyingStipType_130("STRING_239008351");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_130);
      UnderlyingStipulations_NoUnderlyingStips_130.insert(UnderlyingStipType_130.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_130("STRING_1671822361");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_130);
      UnderlyingStipulations_NoUnderlyingStips_130.insert(UnderlyingStipValue_130.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_130);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_131;
      FIX::UnderlyingStipType UnderlyingStipType_131("STRING_956717721");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_131);
      UnderlyingStipulations_NoUnderlyingStips_131.insert(UnderlyingStipType_131.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_131("STRING_1938319248");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_131);
      UnderlyingStipulations_NoUnderlyingStips_131.insert(UnderlyingStipValue_131.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_131);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_141;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_141("STRING_1747234528");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_141);
      UndlyInstrumentParties_NoUndlyInstrumentParties_141.insert(UnderlyingInstrumentPartyID_141.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_141('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_141);
      UndlyInstrumentParties_NoUndlyInstrumentParties_141.insert(UnderlyingInstrumentPartyIDSource_141.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_141(271732124);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_141);
      UndlyInstrumentParties_NoUndlyInstrumentParties_141.insert(UnderlyingInstrumentPartyRole_141.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_141);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_285("STRING_255422034");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_285);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285.insert(UnderlyingInstrumentPartySubID_285.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_285(406592757);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_285);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285.insert(UnderlyingInstrumentPartySubIDType_285.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_286("STRING_1850143755");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_286);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286.insert(UnderlyingInstrumentPartySubID_286.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_286(1774902979);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_286);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286.insert(UnderlyingInstrumentPartySubIDType_286.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_287("STRING_271767222");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_287);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287.insert(UnderlyingInstrumentPartySubID_287.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_287(951481615);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_287);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287.insert(UnderlyingInstrumentPartySubIDType_287.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_142;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_142("STRING_420988477");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_142);
      UndlyInstrumentParties_NoUndlyInstrumentParties_142.insert(UnderlyingInstrumentPartyID_142.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_142('7');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_142);
      UndlyInstrumentParties_NoUndlyInstrumentParties_142.insert(UnderlyingInstrumentPartyIDSource_142.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_142(739850677);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_142);
      UndlyInstrumentParties_NoUndlyInstrumentParties_142.insert(UnderlyingInstrumentPartyRole_142.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_142);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_288("STRING_1303405391");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_288);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288.insert(UnderlyingInstrumentPartySubID_288.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_288(1760776110);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_288);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288.insert(UnderlyingInstrumentPartySubIDType_288.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_289("STRING_1388550273");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_289);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289.insert(UnderlyingInstrumentPartySubID_289.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_289(592729952);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_289);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289.insert(UnderlyingInstrumentPartySubIDType_289.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_290("STRING_711216715");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_290);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290.insert(UnderlyingInstrumentPartySubID_290.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_290(1050898783);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_290);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290.insert(UnderlyingInstrumentPartySubIDType_290.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::News::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_68;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_68("DATA_193255267");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_68);
    UnderlyingInstrument_68.insert(EncodedUnderlyingIssuer_68.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_68(535990263);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_68);
    UnderlyingInstrument_68.insert(EncodedUnderlyingIssuerLen_68.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_68("DATA_398065378");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_68);
    UnderlyingInstrument_68.insert(EncodedUnderlyingSecurityDesc_68.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_68(422443480);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_68);
    UnderlyingInstrument_68.insert(EncodedUnderlyingSecurityDescLen_68.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_68;
    UnderlyingAdjustedQuantity_68.setString("5063950");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_68);
    UnderlyingInstrument_68.insert(UnderlyingAdjustedQuantity_68.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_68;
    UnderlyingAllocationPercent_68.setString("80.820000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_68);
    UnderlyingInstrument_68.insert(UnderlyingAllocationPercent_68.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_68;
    UnderlyingAttachmentPoint_68.setString("18.310000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_68);
    UnderlyingInstrument_68.insert(UnderlyingAttachmentPoint_68.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_68("STRING_30733801");
    noUnderlyings_0_2.set(UnderlyingCFICode_68);
    UnderlyingInstrument_68.insert(UnderlyingCFICode_68.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_68("STRING_252522155");
    noUnderlyings_0_2.set(UnderlyingCPProgram_68);
    UnderlyingInstrument_68.insert(UnderlyingCPProgram_68.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_68("STRING_452287432");
    noUnderlyings_0_2.set(UnderlyingCPRegType_68);
    UnderlyingInstrument_68.insert(UnderlyingCPRegType_68.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_68;
    UnderlyingCapValue_68.setString("20809825");
    noUnderlyings_0_2.set(UnderlyingCapValue_68);
    UnderlyingInstrument_68.insert(UnderlyingCapValue_68.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_68;
    UnderlyingCashAmount_68.setString("19997566");
    noUnderlyings_0_2.set(UnderlyingCashAmount_68);
    UnderlyingInstrument_68.insert(UnderlyingCashAmount_68.getString());
    FIX::UnderlyingCashType UnderlyingCashType_68("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_68);
    UnderlyingInstrument_68.insert(UnderlyingCashType_68.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_68;
    UnderlyingContractMultiplier_68.setString("2052310");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_68);
    UnderlyingInstrument_68.insert(UnderlyingContractMultiplier_68.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_68(440381578);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_68);
    UnderlyingInstrument_68.insert(UnderlyingContractMultiplierUnit_68.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_68("COUNTRY_1714810944");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_68);
    UnderlyingInstrument_68.insert(UnderlyingCountryOfIssue_68.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_68("LOCALMKTDATE_611823773");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_68);
    UnderlyingInstrument_68.insert(UnderlyingCouponPaymentDate_68.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_68;
    UnderlyingCouponRate_68.setString("16.850000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_68);
    UnderlyingInstrument_68.insert(UnderlyingCouponRate_68.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_68("STRING_1342230275");
    noUnderlyings_0_2.set(UnderlyingCreditRating_68);
    UnderlyingInstrument_68.insert(UnderlyingCreditRating_68.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_68("USD");
    noUnderlyings_0_2.set(UnderlyingCurrency_68);
    UnderlyingInstrument_68.insert(UnderlyingCurrency_68.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_68;
    UnderlyingCurrentValue_68.setString("17632187");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_68);
    UnderlyingInstrument_68.insert(UnderlyingCurrentValue_68.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_68;
    UnderlyingDetachmentPoint_68.setString("40.580000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_68);
    UnderlyingInstrument_68.insert(UnderlyingDetachmentPoint_68.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_68;
    UnderlyingDirtyPrice_68.setString("18343739");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_68);
    UnderlyingInstrument_68.insert(UnderlyingDirtyPrice_68.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_68;
    UnderlyingEndPrice_68.setString("12719125");
    noUnderlyings_0_2.set(UnderlyingEndPrice_68);
    UnderlyingInstrument_68.insert(UnderlyingEndPrice_68.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_68;
    UnderlyingEndValue_68.setString("7917558");
    noUnderlyings_0_2.set(UnderlyingEndValue_68);
    UnderlyingInstrument_68.insert(UnderlyingEndValue_68.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_68(1447666440);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_68);
    UnderlyingInstrument_68.insert(UnderlyingExerciseStyle_68.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_68;
    UnderlyingFXRate_68.setString("5129791");
    noUnderlyings_0_2.set(UnderlyingFXRate_68);
    UnderlyingInstrument_68.insert(UnderlyingFXRate_68.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_68('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_68);
    UnderlyingInstrument_68.insert(UnderlyingFXRateCalc_68.getString());
    FIX::UnderlyingFactor UnderlyingFactor_68;
    UnderlyingFactor_68.setString("113995");
    noUnderlyings_0_2.set(UnderlyingFactor_68);
    UnderlyingInstrument_68.insert(UnderlyingFactor_68.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_68(1563877923);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_68);
    UnderlyingInstrument_68.insert(UnderlyingFlowScheduleType_68.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_68("STRING_1577741021");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_68);
    UnderlyingInstrument_68.insert(UnderlyingInstrRegistry_68.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_68("LOCALMKTDATE_547389771");
    noUnderlyings_0_2.set(UnderlyingIssueDate_68);
    UnderlyingInstrument_68.insert(UnderlyingIssueDate_68.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_68("STRING_1961943301");
    noUnderlyings_0_2.set(UnderlyingIssuer_68);
    UnderlyingInstrument_68.insert(UnderlyingIssuer_68.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_68("STRING_2000184501");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_68);
    UnderlyingInstrument_68.insert(UnderlyingLocaleOfIssue_68.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_68("LOCALMKTDATE_1053784858");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_68);
    UnderlyingInstrument_68.insert(UnderlyingMaturityDate_68.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_68("MONTHYEAR_1257747735");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_68);
    UnderlyingInstrument_68.insert(UnderlyingMaturityMonthYear_68.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_68("TZTIMEONLY_514152685");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_68);
    UnderlyingInstrument_68.insert(UnderlyingMaturityTime_68.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_68;
    UnderlyingNotionalPercentageOutstanding_68.setString("86.590000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_68);
    UnderlyingInstrument_68.insert(UnderlyingNotionalPercentageOutstanding_68.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_68('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_68);
    UnderlyingInstrument_68.insert(UnderlyingOptAttribute_68.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_68;
    UnderlyingOriginalNotionalPercentageOutstanding_68.setString("1.170000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_68);
    UnderlyingInstrument_68.insert(UnderlyingOriginalNotionalPercentageOutstanding_68.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_68("STRING_1018017552");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_68);
    UnderlyingInstrument_68.insert(UnderlyingPriceUnitOfMeasure_68.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_68;
    UnderlyingPriceUnitOfMeasureQty_68.setString("13625429");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_68);
    UnderlyingInstrument_68.insert(UnderlyingPriceUnitOfMeasureQty_68.getString());
    FIX::UnderlyingProduct UnderlyingProduct_68(278345378);
    noUnderlyings_0_2.set(UnderlyingProduct_68);
    UnderlyingInstrument_68.insert(UnderlyingProduct_68.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_68(1223248568);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_68);
    UnderlyingInstrument_68.insert(UnderlyingPutOrCall_68.getString());
    FIX::UnderlyingPx UnderlyingPx_68;
    UnderlyingPx_68.setString("18029245");
    noUnderlyings_0_2.set(UnderlyingPx_68);
    UnderlyingInstrument_68.insert(UnderlyingPx_68.getString());
    FIX::UnderlyingQty UnderlyingQty_68;
    UnderlyingQty_68.setString("19931563");
    noUnderlyings_0_2.set(UnderlyingQty_68);
    UnderlyingInstrument_68.insert(UnderlyingQty_68.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_68("LOCALMKTDATE_1835072342");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_68);
    UnderlyingInstrument_68.insert(UnderlyingRedemptionDate_68.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_68("STRING_1945966190");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_68);
    UnderlyingInstrument_68.insert(UnderlyingRepoCollateralSecurityType_68.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_68;
    UnderlyingRepurchaseRate_68.setString("29.490000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_68);
    UnderlyingInstrument_68.insert(UnderlyingRepurchaseRate_68.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_68(571179689);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_68);
    UnderlyingInstrument_68.insert(UnderlyingRepurchaseTerm_68.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_68("STRING_893005843");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_68);
    UnderlyingInstrument_68.insert(UnderlyingRestructuringType_68.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_68("STRING_803638053");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_68);
    UnderlyingInstrument_68.insert(UnderlyingSecurityDesc_68.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_68("EXCHANGE_59530100");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_68);
    UnderlyingInstrument_68.insert(UnderlyingSecurityExchange_68.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_68("STRING_579896173");
    noUnderlyings_0_2.set(UnderlyingSecurityID_68);
    UnderlyingInstrument_68.insert(UnderlyingSecurityID_68.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_68("STRING_2075550568");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_68);
    UnderlyingInstrument_68.insert(UnderlyingSecurityIDSource_68.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_68("STRING_851285901");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_68);
    UnderlyingInstrument_68.insert(UnderlyingSecuritySubType_68.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_68("STRING_2027562613");
    noUnderlyings_0_2.set(UnderlyingSecurityType_68);
    UnderlyingInstrument_68.insert(UnderlyingSecurityType_68.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_68("STRING_441046059");
    noUnderlyings_0_2.set(UnderlyingSeniority_68);
    UnderlyingInstrument_68.insert(UnderlyingSeniority_68.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_68("STRING_88288007");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_68);
    UnderlyingInstrument_68.insert(UnderlyingSettlMethod_68.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_68(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_68);
    UnderlyingInstrument_68.insert(UnderlyingSettlementType_68.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_68;
    UnderlyingStartValue_68.setString("20049239");
    noUnderlyings_0_2.set(UnderlyingStartValue_68);
    UnderlyingInstrument_68.insert(UnderlyingStartValue_68.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_68("STRING_1666029029");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_68);
    UnderlyingInstrument_68.insert(UnderlyingStateOrProvinceOfIssue_68.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_68("CAN");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_68);
    UnderlyingInstrument_68.insert(UnderlyingStrikeCurrency_68.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_68;
    UnderlyingStrikePrice_68.setString("15187298");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_68);
    UnderlyingInstrument_68.insert(UnderlyingStrikePrice_68.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_68("STRING_1492653103");
    noUnderlyings_0_2.set(UnderlyingSymbol_68);
    UnderlyingInstrument_68.insert(UnderlyingSymbol_68.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_68("STRING_929647722");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_68);
    UnderlyingInstrument_68.insert(UnderlyingSymbolSfx_68.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_68("STRING_2032882567");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_68);
    UnderlyingInstrument_68.insert(UnderlyingTimeUnit_68.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_68("STRING_429688114");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_68);
    UnderlyingInstrument_68.insert(UnderlyingUnitOfMeasure_68.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_68;
    UnderlyingUnitOfMeasureQty_68.setString("2924339");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_68);
    UnderlyingInstrument_68.insert(UnderlyingUnitOfMeasureQty_68.getString());
    all_values.push_back(UnderlyingInstrument_68);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_145;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_145("STRING_1447705666");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_145);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_145.insert(UnderlyingSecurityAltID_145.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_145("STRING_1654976891");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_145);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_145.insert(UnderlyingSecurityAltIDSource_145.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_145);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_146;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_146("STRING_1130184415");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_146);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_146.insert(UnderlyingSecurityAltID_146.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_146("STRING_523470587");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_146);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_146.insert(UnderlyingSecurityAltIDSource_146.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_146);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_132;
      FIX::UnderlyingStipType UnderlyingStipType_132("STRING_975857089");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_132);
      UnderlyingStipulations_NoUnderlyingStips_132.insert(UnderlyingStipType_132.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_132("STRING_211059281");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_132);
      UnderlyingStipulations_NoUnderlyingStips_132.insert(UnderlyingStipValue_132.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_132);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_143;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_143("STRING_16276391");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_143);
      UndlyInstrumentParties_NoUndlyInstrumentParties_143.insert(UnderlyingInstrumentPartyID_143.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_143('7');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_143);
      UndlyInstrumentParties_NoUndlyInstrumentParties_143.insert(UnderlyingInstrumentPartyIDSource_143.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_143(2001906134);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_143);
      UndlyInstrumentParties_NoUndlyInstrumentParties_143.insert(UnderlyingInstrumentPartyRole_143.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_143);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_291("STRING_841769070");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_291);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291.insert(UnderlyingInstrumentPartySubID_291.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_291(434318659);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_291);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291.insert(UnderlyingInstrumentPartySubIDType_291.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_292("STRING_747981364");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_292);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292.insert(UnderlyingInstrumentPartySubID_292.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_292(1693054972);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_292);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292.insert(UnderlyingInstrumentPartySubIDType_292.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_293("STRING_314397624");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_293);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293.insert(UnderlyingInstrumentPartySubID_293.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_293(1189027424);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_293);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293.insert(UnderlyingInstrumentPartySubIDType_293.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_144;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_144("STRING_1781342979");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_144);
      UndlyInstrumentParties_NoUndlyInstrumentParties_144.insert(UnderlyingInstrumentPartyID_144.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_144('2');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_144);
      UndlyInstrumentParties_NoUndlyInstrumentParties_144.insert(UnderlyingInstrumentPartyIDSource_144.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_144(1046467758);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_144);
      UndlyInstrumentParties_NoUndlyInstrumentParties_144.insert(UnderlyingInstrumentPartyRole_144.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_144);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_294("STRING_644744342");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_294);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294.insert(UnderlyingInstrumentPartySubID_294.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_294(718367746);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_294);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294.insert(UnderlyingInstrumentPartySubIDType_294.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
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
