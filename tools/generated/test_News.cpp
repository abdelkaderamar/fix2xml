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
  FIX::EncodedHeadline EncodedHeadline_0("DATA_19273544");
  msg.set(EncodedHeadline_0);
  News_0.insert(EncodedHeadline_0.getString());
  FIX::EncodedHeadlineLen EncodedHeadlineLen_0(305548907);
  msg.set(EncodedHeadlineLen_0);
  News_0.insert(EncodedHeadlineLen_0.getString());
  FIX::Headline Headline_0("STRING_564672855");
  msg.set(Headline_0);
  News_0.insert(Headline_0.getString());
  FIX::LanguageCode LanguageCode_0("FR");
  msg.set(LanguageCode_0);
  News_0.insert(LanguageCode_0.getString());
  FIX::MarketID MarketID_9("EXCHANGE_1384608382");
  msg.set(MarketID_9);
  News_0.insert(MarketID_9.getString());
  FIX::MarketSegmentID MarketSegmentID_9("STRING_1006314714");
  msg.set(MarketSegmentID_9);
  News_0.insert(MarketSegmentID_9.getString());
  FIX::NewsCategory NewsCategory_0(0);
  msg.set(NewsCategory_0);
  News_0.insert(NewsCategory_0.getString());
  FIX::NewsID NewsID_0("STRING_787305624");
  msg.set(NewsID_0);
  News_0.insert(NewsID_0.getString());
  FIX::OrigTime OrigTime_1(FIX::UTCTIMESTAMP(16, 48, 49, 3, 62010));
  msg.set(OrigTime_1);
  News_0.insert(OrigTime_1.getString());
  FIX::RawData RawData_1("DATA_1472790798");
  msg.set(RawData_1);
  News_0.insert(RawData_1.getString());
  FIX::RawDataLength RawDataLength_1(451572004);
  msg.set(RawDataLength_1);
  News_0.insert(RawDataLength_1.getString());
  FIX::URLLink URLLink_2("STRING_1786938843");
  msg.set(URLLink_2);
  News_0.insert(URLLink_2.getString());
  FIX::Urgency Urgency_0('1');
  msg.set(Urgency_0);
  News_0.insert(Urgency_0.getString());
  all_values.push_back(News_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_10;
  FIX::ApplID ApplID_10("STRING_2102329337");
  msg.set(ApplID_10);
  ApplicationSequenceControl_10.insert(ApplID_10.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_10(1716893523);
  msg.set(ApplLastSeqNum_10);
  ApplicationSequenceControl_10.insert(ApplLastSeqNum_10.getString());
  FIX::ApplResendFlag ApplResendFlag_10(false);
  msg.set(ApplResendFlag_10);
  ApplicationSequenceControl_10.insert(ApplResendFlag_10.getString());
  FIX::ApplSeqNum ApplSeqNum_10(1058105293);
  msg.set(ApplSeqNum_10);
  ApplicationSequenceControl_10.insert(ApplSeqNum_10.getString());
  all_values.push_back(ApplicationSequenceControl_10);

  // InstrmtGrp
  // Group InstrmtGrp.NoRelatedSym
  {
    FIX50SP2::News::NoRelatedSym noRelatedSym_0_0;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_42;
    FIX::AttachmentPoint AttachmentPoint_42;
    AttachmentPoint_42.setString("37.440000");
    noRelatedSym_0_0.set(AttachmentPoint_42);
    Instrument_42.insert(AttachmentPoint_42.getString());
    FIX::CFICode CFICode_42("STRING_2138462025");
    noRelatedSym_0_0.set(CFICode_42);
    Instrument_42.insert(CFICode_42.getString());
    FIX::CPProgram CPProgram_42(2);
    noRelatedSym_0_0.set(CPProgram_42);
    Instrument_42.insert(CPProgram_42.getString());
    FIX::CPRegType CPRegType_42("STRING_790551894");
    noRelatedSym_0_0.set(CPRegType_42);
    Instrument_42.insert(CPRegType_42.getString());
    FIX::CapPrice CapPrice_42;
    CapPrice_42.setString("8918066");
    noRelatedSym_0_0.set(CapPrice_42);
    Instrument_42.insert(CapPrice_42.getString());
    FIX::ContractMultiplier ContractMultiplier_42;
    ContractMultiplier_42.setString("3941808");
    noRelatedSym_0_0.set(ContractMultiplier_42);
    Instrument_42.insert(ContractMultiplier_42.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_42(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_42);
    Instrument_42.insert(ContractMultiplierUnit_42.getString());
    FIX::ContractSettlMonth ContractSettlMonth_42("MONTHYEAR_911080210");
    noRelatedSym_0_0.set(ContractSettlMonth_42);
    Instrument_42.insert(ContractSettlMonth_42.getString());
    FIX::CountryOfIssue CountryOfIssue_42("COUNTRY_699729793");
    noRelatedSym_0_0.set(CountryOfIssue_42);
    Instrument_42.insert(CountryOfIssue_42.getString());
    FIX::CouponPaymentDate CouponPaymentDate_42("LOCALMKTDATE_375393913");
    noRelatedSym_0_0.set(CouponPaymentDate_42);
    Instrument_42.insert(CouponPaymentDate_42.getString());
    FIX::CouponRate CouponRate_42;
    CouponRate_42.setString("56.790000");
    noRelatedSym_0_0.set(CouponRate_42);
    Instrument_42.insert(CouponRate_42.getString());
    FIX::CreditRating CreditRating_42("STRING_2084338175");
    noRelatedSym_0_0.set(CreditRating_42);
    Instrument_42.insert(CreditRating_42.getString());
    FIX::DatedDate DatedDate_42("LOCALMKTDATE_1381708628");
    noRelatedSym_0_0.set(DatedDate_42);
    Instrument_42.insert(DatedDate_42.getString());
    FIX::DetachmentPoint DetachmentPoint_42;
    DetachmentPoint_42.setString("2.240000");
    noRelatedSym_0_0.set(DetachmentPoint_42);
    Instrument_42.insert(DetachmentPoint_42.getString());
    FIX::EncodedIssuer EncodedIssuer_42("DATA_724160151");
    noRelatedSym_0_0.set(EncodedIssuer_42);
    Instrument_42.insert(EncodedIssuer_42.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_42(2033189657);
    noRelatedSym_0_0.set(EncodedIssuerLen_42);
    Instrument_42.insert(EncodedIssuerLen_42.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_42("DATA_1036308552");
    noRelatedSym_0_0.set(EncodedSecurityDesc_42);
    Instrument_42.insert(EncodedSecurityDesc_42.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_42(105511592);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_42);
    Instrument_42.insert(EncodedSecurityDescLen_42.getString());
    FIX::ExerciseStyle ExerciseStyle_42(1);
    noRelatedSym_0_0.set(ExerciseStyle_42);
    Instrument_42.insert(ExerciseStyle_42.getString());
    FIX::Factor Factor_42;
    Factor_42.setString("21153423");
    noRelatedSym_0_0.set(Factor_42);
    Instrument_42.insert(Factor_42.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_42(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_42);
    Instrument_42.insert(FlexProductEligibilityIndicator_42.getString());
    FIX::FlexibleIndicator FlexibleIndicator_42(true);
    noRelatedSym_0_0.set(FlexibleIndicator_42);
    Instrument_42.insert(FlexibleIndicator_42.getString());
    FIX::FloorPrice FloorPrice_42;
    FloorPrice_42.setString("14406494");
    noRelatedSym_0_0.set(FloorPrice_42);
    Instrument_42.insert(FloorPrice_42.getString());
    FIX::FlowScheduleType FlowScheduleType_42(3);
    noRelatedSym_0_0.set(FlowScheduleType_42);
    Instrument_42.insert(FlowScheduleType_42.getString());
    FIX::InstrRegistry InstrRegistry_42("STRING_473510798");
    noRelatedSym_0_0.set(InstrRegistry_42);
    Instrument_42.insert(InstrRegistry_42.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_42('4');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_42);
    Instrument_42.insert(InstrmtAssignmentMethod_42.getString());
    FIX::InterestAccrualDate InterestAccrualDate_42("LOCALMKTDATE_2005410542");
    noRelatedSym_0_0.set(InterestAccrualDate_42);
    Instrument_42.insert(InterestAccrualDate_42.getString());
    FIX::IssueDate IssueDate_42("LOCALMKTDATE_42920673");
    noRelatedSym_0_0.set(IssueDate_42);
    Instrument_42.insert(IssueDate_42.getString());
    FIX::Issuer Issuer_42("STRING_378062566");
    noRelatedSym_0_0.set(Issuer_42);
    Instrument_42.insert(Issuer_42.getString());
    FIX::ListMethod ListMethod_42(0);
    noRelatedSym_0_0.set(ListMethod_42);
    Instrument_42.insert(ListMethod_42.getString());
    FIX::LocaleOfIssue LocaleOfIssue_42("STRING_1119703526");
    noRelatedSym_0_0.set(LocaleOfIssue_42);
    Instrument_42.insert(LocaleOfIssue_42.getString());
    FIX::MaturityDate MaturityDate_42("LOCALMKTDATE_671696310");
    noRelatedSym_0_0.set(MaturityDate_42);
    Instrument_42.insert(MaturityDate_42.getString());
    FIX::MaturityMonthYear MaturityMonthYear_42("MONTHYEAR_907010565");
    noRelatedSym_0_0.set(MaturityMonthYear_42);
    Instrument_42.insert(MaturityMonthYear_42.getString());
    FIX::MaturityTime MaturityTime_42("TZTIMEONLY_1715762466");
    noRelatedSym_0_0.set(MaturityTime_42);
    Instrument_42.insert(MaturityTime_42.getString());
    FIX::MinPriceIncrement MinPriceIncrement_42;
    MinPriceIncrement_42.setString("14622482");
    noRelatedSym_0_0.set(MinPriceIncrement_42);
    Instrument_42.insert(MinPriceIncrement_42.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_42;
    MinPriceIncrementAmount_42.setString("17988172");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_42);
    Instrument_42.insert(MinPriceIncrementAmount_42.getString());
    FIX::NTPositionLimit NTPositionLimit_42(2109943352);
    noRelatedSym_0_0.set(NTPositionLimit_42);
    Instrument_42.insert(NTPositionLimit_42.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_42;
    NotionalPercentageOutstanding_42.setString("92.630000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_42);
    Instrument_42.insert(NotionalPercentageOutstanding_42.getString());
    FIX::OptAttribute OptAttribute_42('5');
    noRelatedSym_0_0.set(OptAttribute_42);
    Instrument_42.insert(OptAttribute_42.getString());
    FIX::OptPayoutAmount OptPayoutAmount_42;
    OptPayoutAmount_42.setString("6621894");
    noRelatedSym_0_0.set(OptPayoutAmount_42);
    Instrument_42.insert(OptPayoutAmount_42.getString());
    FIX::OptPayoutType OptPayoutType_42(2);
    noRelatedSym_0_0.set(OptPayoutType_42);
    Instrument_42.insert(OptPayoutType_42.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_42;
    OriginalNotionalPercentageOutstanding_42.setString("94.730000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_42);
    Instrument_42.insert(OriginalNotionalPercentageOutstanding_42.getString());
    FIX::Pool Pool_42("STRING_599044025");
    noRelatedSym_0_0.set(Pool_42);
    Instrument_42.insert(Pool_42.getString());
    FIX::PositionLimit PositionLimit_42(882588157);
    noRelatedSym_0_0.set(PositionLimit_42);
    Instrument_42.insert(PositionLimit_42.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_42("STRING_INX");
    noRelatedSym_0_0.set(PriceQuoteMethod_42);
    Instrument_42.insert(PriceQuoteMethod_42.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_42("STRING_1323204177");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_42);
    Instrument_42.insert(PriceUnitOfMeasure_42.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_42;
    PriceUnitOfMeasureQty_42.setString("7682941");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_42);
    Instrument_42.insert(PriceUnitOfMeasureQty_42.getString());
    FIX::Product Product_44(4);
    noRelatedSym_0_0.set(Product_44);
    Instrument_42.insert(Product_44.getString());
    FIX::ProductComplex ProductComplex_42("STRING_1428715769");
    noRelatedSym_0_0.set(ProductComplex_42);
    Instrument_42.insert(ProductComplex_42.getString());
    FIX::PutOrCall PutOrCall_42(0);
    noRelatedSym_0_0.set(PutOrCall_42);
    Instrument_42.insert(PutOrCall_42.getString());
    FIX::RedemptionDate RedemptionDate_42("LOCALMKTDATE_61043269");
    noRelatedSym_0_0.set(RedemptionDate_42);
    Instrument_42.insert(RedemptionDate_42.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_42("STRING_880224970");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_42);
    Instrument_42.insert(RepoCollateralSecurityType_42.getString());
    FIX::RepurchaseRate RepurchaseRate_42;
    RepurchaseRate_42.setString("56.790000");
    noRelatedSym_0_0.set(RepurchaseRate_42);
    Instrument_42.insert(RepurchaseRate_42.getString());
    FIX::RepurchaseTerm RepurchaseTerm_42(1501692735);
    noRelatedSym_0_0.set(RepurchaseTerm_42);
    Instrument_42.insert(RepurchaseTerm_42.getString());
    FIX::RestructuringType RestructuringType_42("STRING_FR");
    noRelatedSym_0_0.set(RestructuringType_42);
    Instrument_42.insert(RestructuringType_42.getString());
    FIX::SecurityDesc SecurityDesc_42("STRING_1690746477");
    noRelatedSym_0_0.set(SecurityDesc_42);
    Instrument_42.insert(SecurityDesc_42.getString());
    FIX::SecurityExchange SecurityExchange_42("EXCHANGE_1936970950");
    noRelatedSym_0_0.set(SecurityExchange_42);
    Instrument_42.insert(SecurityExchange_42.getString());
    FIX::SecurityGroup SecurityGroup_42("STRING_641233070");
    noRelatedSym_0_0.set(SecurityGroup_42);
    Instrument_42.insert(SecurityGroup_42.getString());
    FIX::SecurityID SecurityID_42("STRING_1733667150");
    noRelatedSym_0_0.set(SecurityID_42);
    Instrument_42.insert(SecurityID_42.getString());
    FIX::SecurityIDSource SecurityIDSource_42("STRING_3");
    noRelatedSym_0_0.set(SecurityIDSource_42);
    Instrument_42.insert(SecurityIDSource_42.getString());
    FIX::SecurityStatus SecurityStatus_42("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_42);
    Instrument_42.insert(SecurityStatus_42.getString());
    FIX::SecuritySubType SecuritySubType_43("STRING_705887028");
    noRelatedSym_0_0.set(SecuritySubType_43);
    Instrument_42.insert(SecuritySubType_43.getString());
    FIX::SecurityType SecurityType_44("STRING_MPP");
    noRelatedSym_0_0.set(SecurityType_44);
    Instrument_42.insert(SecurityType_44.getString());
    FIX::Seniority Seniority_42("STRING_SB");
    noRelatedSym_0_0.set(Seniority_42);
    Instrument_42.insert(Seniority_42.getString());
    FIX::SettlMethod SettlMethod_42('C');
    noRelatedSym_0_0.set(SettlMethod_42);
    Instrument_42.insert(SettlMethod_42.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_42("STRING_154010735");
    noRelatedSym_0_0.set(SettleOnOpenFlag_42);
    Instrument_42.insert(SettleOnOpenFlag_42.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_42("STRING_2115609407");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_42);
    Instrument_42.insert(StateOrProvinceOfIssue_42.getString());
    FIX::StrikeCurrency StrikeCurrency_42("CAN");
    noRelatedSym_0_0.set(StrikeCurrency_42);
    Instrument_42.insert(StrikeCurrency_42.getString());
    FIX::StrikeMultiplier StrikeMultiplier_42;
    StrikeMultiplier_42.setString("5305395");
    noRelatedSym_0_0.set(StrikeMultiplier_42);
    Instrument_42.insert(StrikeMultiplier_42.getString());
    FIX::StrikePrice StrikePrice_42;
    StrikePrice_42.setString("8988150");
    noRelatedSym_0_0.set(StrikePrice_42);
    Instrument_42.insert(StrikePrice_42.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_42(4);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_42);
    Instrument_42.insert(StrikePriceBoundaryMethod_42.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_42;
    StrikePriceBoundaryPrecision_42.setString("90.260000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_42);
    Instrument_42.insert(StrikePriceBoundaryPrecision_42.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_42(3);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_42);
    Instrument_42.insert(StrikePriceDeterminationMethod_42.getString());
    FIX::StrikeValue StrikeValue_42;
    StrikeValue_42.setString("18104476");
    noRelatedSym_0_0.set(StrikeValue_42);
    Instrument_42.insert(StrikeValue_42.getString());
    FIX::Symbol Symbol_42("STRING_431115075");
    noRelatedSym_0_0.set(Symbol_42);
    Instrument_42.insert(Symbol_42.getString());
    FIX::SymbolSfx SymbolSfx_42("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_42);
    Instrument_42.insert(SymbolSfx_42.getString());
    FIX::TimeUnit TimeUnit_42("STRING_Mo");
    noRelatedSym_0_0.set(TimeUnit_42);
    Instrument_42.insert(TimeUnit_42.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_42(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_42);
    Instrument_42.insert(UnderlyingPriceDeterminationMethod_42.getString());
    FIX::UnitOfMeasure UnitOfMeasure_42("STRING_oz_tr");
    noRelatedSym_0_0.set(UnitOfMeasure_42);
    Instrument_42.insert(UnitOfMeasure_42.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_42;
    UnitOfMeasureQty_42.setString("8144382");
    noRelatedSym_0_0.set(UnitOfMeasureQty_42);
    Instrument_42.insert(UnitOfMeasureQty_42.getString());
    FIX::ValuationMethod ValuationMethod_42("STRING_EQTY");
    noRelatedSym_0_0.set(ValuationMethod_42);
    Instrument_42.insert(ValuationMethod_42.getString());
    all_values.push_back(Instrument_42);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_85;
      FIX::ComplexEventCondition ComplexEventCondition_85(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_85);
      ComplexEvents_NoComplexEvents_85.insert(ComplexEventCondition_85.getString());
      FIX::ComplexEventPrice ComplexEventPrice_85;
      ComplexEventPrice_85.setString("20870356");
      noComplexEvents_0_1_0.set(ComplexEventPrice_85);
      ComplexEvents_NoComplexEvents_85.insert(ComplexEventPrice_85.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_85(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_85);
      ComplexEvents_NoComplexEvents_85.insert(ComplexEventPriceBoundaryMethod_85.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_85;
      ComplexEventPriceBoundaryPrecision_85.setString("67.870000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_85);
      ComplexEvents_NoComplexEvents_85.insert(ComplexEventPriceBoundaryPrecision_85.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_85(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_85);
      ComplexEvents_NoComplexEvents_85.insert(ComplexEventPriceTimeType_85.getString());
      FIX::ComplexEventType ComplexEventType_85(3);
      noComplexEvents_0_1_0.set(ComplexEventType_85);
      ComplexEvents_NoComplexEvents_85.insert(ComplexEventType_85.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_85;
      ComplexOptPayoutAmount_85.setString("11611202");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_85);
      ComplexEvents_NoComplexEvents_85.insert(ComplexOptPayoutAmount_85.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_85);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_181;
        FIX::ComplexEventEndDate ComplexEventEndDate_181(FIX::UTCTIMESTAMP(13, 1, 27, 4, 12006));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_181);
        ComplexEventDates_NoComplexEventDates_181.insert(ComplexEventEndDate_181.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_181(FIX::UTCTIMESTAMP(3, 51, 16, 15, 22014));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_181);
        ComplexEventDates_NoComplexEventDates_181.insert(ComplexEventStartDate_181.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_181);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_358;
          FIX::ComplexEventEndTime ComplexEventEndTime_358(FIX::UTCTIMEONLY(10, 35, 41));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_358);
          ComplexEventTimes_NoComplexEventTimes_358.insert(ComplexEventEndTime_358.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_358(FIX::UTCTIMEONLY(19, 26, 5));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_358);
          ComplexEventTimes_NoComplexEventTimes_358.insert(ComplexEventStartTime_358.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_358);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_359;
          FIX::ComplexEventEndTime ComplexEventEndTime_359(FIX::UTCTIMEONLY(19, 8, 45));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_359);
          ComplexEventTimes_NoComplexEventTimes_359.insert(ComplexEventEndTime_359.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_359(FIX::UTCTIMEONLY(2, 26, 56));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_359);
          ComplexEventTimes_NoComplexEventTimes_359.insert(ComplexEventStartTime_359.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_359);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_182;
        FIX::ComplexEventEndDate ComplexEventEndDate_182(FIX::UTCTIMESTAMP(20, 57, 5, 12, 22004));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_182);
        ComplexEventDates_NoComplexEventDates_182.insert(ComplexEventEndDate_182.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_182(FIX::UTCTIMESTAMP(17, 55, 55, 8, 22015));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_182);
        ComplexEventDates_NoComplexEventDates_182.insert(ComplexEventStartDate_182.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_182);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_360;
          FIX::ComplexEventEndTime ComplexEventEndTime_360(FIX::UTCTIMEONLY(23, 8, 50));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_360);
          ComplexEventTimes_NoComplexEventTimes_360.insert(ComplexEventEndTime_360.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_360(FIX::UTCTIMEONLY(19, 9, 23));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_360);
          ComplexEventTimes_NoComplexEventTimes_360.insert(ComplexEventStartTime_360.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_360);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_183;
        FIX::ComplexEventEndDate ComplexEventEndDate_183(FIX::UTCTIMESTAMP(4, 24, 58, 9, 72010));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_183);
        ComplexEventDates_NoComplexEventDates_183.insert(ComplexEventEndDate_183.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_183(FIX::UTCTIMESTAMP(4, 12, 26, 17, 12004));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_183);
        ComplexEventDates_NoComplexEventDates_183.insert(ComplexEventStartDate_183.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_183);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_361;
          FIX::ComplexEventEndTime ComplexEventEndTime_361(FIX::UTCTIMEONLY(1, 1, 58));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_361);
          ComplexEventTimes_NoComplexEventTimes_361.insert(ComplexEventEndTime_361.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_361(FIX::UTCTIMEONLY(6, 48, 58));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_361);
          ComplexEventTimes_NoComplexEventTimes_361.insert(ComplexEventStartTime_361.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_361);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_362;
          FIX::ComplexEventEndTime ComplexEventEndTime_362(FIX::UTCTIMEONLY(3, 59, 18));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventEndTime_362);
          ComplexEventTimes_NoComplexEventTimes_362.insert(ComplexEventEndTime_362.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_362(FIX::UTCTIMEONLY(6, 19, 49));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventStartTime_362);
          ComplexEventTimes_NoComplexEventTimes_362.insert(ComplexEventStartTime_362.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_362);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_363;
          FIX::ComplexEventEndTime ComplexEventEndTime_363(FIX::UTCTIMEONLY(23, 13, 49));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventEndTime_363);
          ComplexEventTimes_NoComplexEventTimes_363.insert(ComplexEventEndTime_363.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_363(FIX::UTCTIMEONLY(7, 6, 50));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventStartTime_363);
          ComplexEventTimes_NoComplexEventTimes_363.insert(ComplexEventStartTime_363.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_363);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_2);
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
      multiset<string> EvntGrp_NoEvents_85;
      FIX::EventDate EventDate_85("LOCALMKTDATE_1076921058");
      noEvents_0_1_0.set(EventDate_85);
      EvntGrp_NoEvents_85.insert(EventDate_85.getString());
      FIX::EventPx EventPx_85;
      EventPx_85.setString("9336397");
      noEvents_0_1_0.set(EventPx_85);
      EvntGrp_NoEvents_85.insert(EventPx_85.getString());
      FIX::EventText EventText_85("STRING_1122256288");
      noEvents_0_1_0.set(EventText_85);
      EvntGrp_NoEvents_85.insert(EventText_85.getString());
      FIX::EventTime EventTime_85(FIX::UTCTIMESTAMP(16, 34, 38, 13, 42001));
      noEvents_0_1_0.set(EventTime_85);
      EvntGrp_NoEvents_85.insert(EventTime_85.getString());
      FIX::EventType EventType_85(8);
      noEvents_0_1_0.set(EventType_85);
      EvntGrp_NoEvents_85.insert(EventType_85.getString());
      all_values.push_back(EvntGrp_NoEvents_85);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_76;
      FIX::InstrumentPartyID InstrumentPartyID_76("STRING_1813427177");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_76);
      InstrumentParties_NoInstrumentParties_76.insert(InstrumentPartyID_76.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_76('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_76);
      InstrumentParties_NoInstrumentParties_76.insert(InstrumentPartyIDSource_76.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_76(1070604364);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_76);
      InstrumentParties_NoInstrumentParties_76.insert(InstrumentPartyRole_76.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_76);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152;
        FIX::InstrumentPartySubID InstrumentPartySubID_152("STRING_347888796");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_152);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152.insert(InstrumentPartySubID_152.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_152(1016878454);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_152);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152.insert(InstrumentPartySubIDType_152.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_77;
      FIX::InstrumentPartyID InstrumentPartyID_77("STRING_658720918");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_77);
      InstrumentParties_NoInstrumentParties_77.insert(InstrumentPartyID_77.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_77('2');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_77);
      InstrumentParties_NoInstrumentParties_77.insert(InstrumentPartyIDSource_77.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_77(1029851793);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_77);
      InstrumentParties_NoInstrumentParties_77.insert(InstrumentPartyRole_77.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_77);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153;
        FIX::InstrumentPartySubID InstrumentPartySubID_153("STRING_316939942");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_153);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153.insert(InstrumentPartySubID_153.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_153(6437232);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_153);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153.insert(InstrumentPartySubIDType_153.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154;
        FIX::InstrumentPartySubID InstrumentPartySubID_154("STRING_1848925800");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_154);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154.insert(InstrumentPartySubID_154.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_154(701220852);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_154);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154.insert(InstrumentPartySubIDType_154.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155;
        FIX::InstrumentPartySubID InstrumentPartySubID_155("STRING_867554253");
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubID_155);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155.insert(InstrumentPartySubID_155.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_155(1262791943);
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubIDType_155);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155.insert(InstrumentPartySubIDType_155.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_81;
      FIX::SecurityAltID SecurityAltID_81("STRING_2135744243");
      noSecurityAltID_0_1_0.set(SecurityAltID_81);
      SecAltIDGrp_NoSecurityAltID_81.insert(SecurityAltID_81.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_81("STRING_13898802");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_81);
      SecAltIDGrp_NoSecurityAltID_81.insert(SecurityAltIDSource_81.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_81);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_84;
    FIX::SecurityXML SecurityXML_85("XMLDATA_335926108");
    noRelatedSym_0_0.set(SecurityXML_85);
    FIX::SecurityXMLLen SecurityXMLLen_42(921900323);
    noRelatedSym_0_0.set(SecurityXMLLen_42);
    FIX::SecurityXMLSchema SecurityXMLSchema_42("STRING_1136155090");
    noRelatedSym_0_0.set(SecurityXMLSchema_42);
    SecurityXML_84.insert(SecurityXMLSchema_42.getString());
    all_values.push_back(SecurityXML_84);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::News::NoRelatedSym noRelatedSym_0_1;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_43;
    FIX::AttachmentPoint AttachmentPoint_43;
    AttachmentPoint_43.setString("61.710000");
    noRelatedSym_0_1.set(AttachmentPoint_43);
    Instrument_43.insert(AttachmentPoint_43.getString());
    FIX::CFICode CFICode_43("STRING_1669212676");
    noRelatedSym_0_1.set(CFICode_43);
    Instrument_43.insert(CFICode_43.getString());
    FIX::CPProgram CPProgram_43(1);
    noRelatedSym_0_1.set(CPProgram_43);
    Instrument_43.insert(CPProgram_43.getString());
    FIX::CPRegType CPRegType_43("STRING_1864982450");
    noRelatedSym_0_1.set(CPRegType_43);
    Instrument_43.insert(CPRegType_43.getString());
    FIX::CapPrice CapPrice_43;
    CapPrice_43.setString("4002793");
    noRelatedSym_0_1.set(CapPrice_43);
    Instrument_43.insert(CapPrice_43.getString());
    FIX::ContractMultiplier ContractMultiplier_43;
    ContractMultiplier_43.setString("7194130");
    noRelatedSym_0_1.set(ContractMultiplier_43);
    Instrument_43.insert(ContractMultiplier_43.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_43(1);
    noRelatedSym_0_1.set(ContractMultiplierUnit_43);
    Instrument_43.insert(ContractMultiplierUnit_43.getString());
    FIX::ContractSettlMonth ContractSettlMonth_43("MONTHYEAR_677351364");
    noRelatedSym_0_1.set(ContractSettlMonth_43);
    Instrument_43.insert(ContractSettlMonth_43.getString());
    FIX::CountryOfIssue CountryOfIssue_43("COUNTRY_805598132");
    noRelatedSym_0_1.set(CountryOfIssue_43);
    Instrument_43.insert(CountryOfIssue_43.getString());
    FIX::CouponPaymentDate CouponPaymentDate_43("LOCALMKTDATE_1514049448");
    noRelatedSym_0_1.set(CouponPaymentDate_43);
    Instrument_43.insert(CouponPaymentDate_43.getString());
    FIX::CouponRate CouponRate_43;
    CouponRate_43.setString("47.820000");
    noRelatedSym_0_1.set(CouponRate_43);
    Instrument_43.insert(CouponRate_43.getString());
    FIX::CreditRating CreditRating_43("STRING_1876202497");
    noRelatedSym_0_1.set(CreditRating_43);
    Instrument_43.insert(CreditRating_43.getString());
    FIX::DatedDate DatedDate_43("LOCALMKTDATE_1751721052");
    noRelatedSym_0_1.set(DatedDate_43);
    Instrument_43.insert(DatedDate_43.getString());
    FIX::DetachmentPoint DetachmentPoint_43;
    DetachmentPoint_43.setString("35.780000");
    noRelatedSym_0_1.set(DetachmentPoint_43);
    Instrument_43.insert(DetachmentPoint_43.getString());
    FIX::EncodedIssuer EncodedIssuer_43("DATA_745597303");
    noRelatedSym_0_1.set(EncodedIssuer_43);
    Instrument_43.insert(EncodedIssuer_43.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_43(262958322);
    noRelatedSym_0_1.set(EncodedIssuerLen_43);
    Instrument_43.insert(EncodedIssuerLen_43.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_43("DATA_650786941");
    noRelatedSym_0_1.set(EncodedSecurityDesc_43);
    Instrument_43.insert(EncodedSecurityDesc_43.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_43(1775449097);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_43);
    Instrument_43.insert(EncodedSecurityDescLen_43.getString());
    FIX::ExerciseStyle ExerciseStyle_43(2);
    noRelatedSym_0_1.set(ExerciseStyle_43);
    Instrument_43.insert(ExerciseStyle_43.getString());
    FIX::Factor Factor_43;
    Factor_43.setString("9677268");
    noRelatedSym_0_1.set(Factor_43);
    Instrument_43.insert(Factor_43.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_43(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_43);
    Instrument_43.insert(FlexProductEligibilityIndicator_43.getString());
    FIX::FlexibleIndicator FlexibleIndicator_43(false);
    noRelatedSym_0_1.set(FlexibleIndicator_43);
    Instrument_43.insert(FlexibleIndicator_43.getString());
    FIX::FloorPrice FloorPrice_43;
    FloorPrice_43.setString("16689477");
    noRelatedSym_0_1.set(FloorPrice_43);
    Instrument_43.insert(FloorPrice_43.getString());
    FIX::FlowScheduleType FlowScheduleType_43(4);
    noRelatedSym_0_1.set(FlowScheduleType_43);
    Instrument_43.insert(FlowScheduleType_43.getString());
    FIX::InstrRegistry InstrRegistry_43("STRING_1951733804");
    noRelatedSym_0_1.set(InstrRegistry_43);
    Instrument_43.insert(InstrRegistry_43.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_43('9');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_43);
    Instrument_43.insert(InstrmtAssignmentMethod_43.getString());
    FIX::InterestAccrualDate InterestAccrualDate_43("LOCALMKTDATE_490217529");
    noRelatedSym_0_1.set(InterestAccrualDate_43);
    Instrument_43.insert(InterestAccrualDate_43.getString());
    FIX::IssueDate IssueDate_43("LOCALMKTDATE_1965632606");
    noRelatedSym_0_1.set(IssueDate_43);
    Instrument_43.insert(IssueDate_43.getString());
    FIX::Issuer Issuer_43("STRING_1263878894");
    noRelatedSym_0_1.set(Issuer_43);
    Instrument_43.insert(Issuer_43.getString());
    FIX::ListMethod ListMethod_43(1);
    noRelatedSym_0_1.set(ListMethod_43);
    Instrument_43.insert(ListMethod_43.getString());
    FIX::LocaleOfIssue LocaleOfIssue_43("STRING_954304049");
    noRelatedSym_0_1.set(LocaleOfIssue_43);
    Instrument_43.insert(LocaleOfIssue_43.getString());
    FIX::MaturityDate MaturityDate_43("LOCALMKTDATE_945251418");
    noRelatedSym_0_1.set(MaturityDate_43);
    Instrument_43.insert(MaturityDate_43.getString());
    FIX::MaturityMonthYear MaturityMonthYear_43("MONTHYEAR_933846881");
    noRelatedSym_0_1.set(MaturityMonthYear_43);
    Instrument_43.insert(MaturityMonthYear_43.getString());
    FIX::MaturityTime MaturityTime_43("TZTIMEONLY_1982114465");
    noRelatedSym_0_1.set(MaturityTime_43);
    Instrument_43.insert(MaturityTime_43.getString());
    FIX::MinPriceIncrement MinPriceIncrement_43;
    MinPriceIncrement_43.setString("6627502");
    noRelatedSym_0_1.set(MinPriceIncrement_43);
    Instrument_43.insert(MinPriceIncrement_43.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_43;
    MinPriceIncrementAmount_43.setString("13341262");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_43);
    Instrument_43.insert(MinPriceIncrementAmount_43.getString());
    FIX::NTPositionLimit NTPositionLimit_43(554043893);
    noRelatedSym_0_1.set(NTPositionLimit_43);
    Instrument_43.insert(NTPositionLimit_43.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_43;
    NotionalPercentageOutstanding_43.setString("24.910000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_43);
    Instrument_43.insert(NotionalPercentageOutstanding_43.getString());
    FIX::OptAttribute OptAttribute_43('2');
    noRelatedSym_0_1.set(OptAttribute_43);
    Instrument_43.insert(OptAttribute_43.getString());
    FIX::OptPayoutAmount OptPayoutAmount_43;
    OptPayoutAmount_43.setString("13596420");
    noRelatedSym_0_1.set(OptPayoutAmount_43);
    Instrument_43.insert(OptPayoutAmount_43.getString());
    FIX::OptPayoutType OptPayoutType_43(1);
    noRelatedSym_0_1.set(OptPayoutType_43);
    Instrument_43.insert(OptPayoutType_43.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_43;
    OriginalNotionalPercentageOutstanding_43.setString("87.370000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_43);
    Instrument_43.insert(OriginalNotionalPercentageOutstanding_43.getString());
    FIX::Pool Pool_43("STRING_1088360874");
    noRelatedSym_0_1.set(Pool_43);
    Instrument_43.insert(Pool_43.getString());
    FIX::PositionLimit PositionLimit_43(1481659343);
    noRelatedSym_0_1.set(PositionLimit_43);
    Instrument_43.insert(PositionLimit_43.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_43("STRING_PCTPAR");
    noRelatedSym_0_1.set(PriceQuoteMethod_43);
    Instrument_43.insert(PriceQuoteMethod_43.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_43("STRING_1833958178");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_43);
    Instrument_43.insert(PriceUnitOfMeasure_43.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_43;
    PriceUnitOfMeasureQty_43.setString("17446176");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_43);
    Instrument_43.insert(PriceUnitOfMeasureQty_43.getString());
    FIX::Product Product_45(5);
    noRelatedSym_0_1.set(Product_45);
    Instrument_43.insert(Product_45.getString());
    FIX::ProductComplex ProductComplex_43("STRING_1461923627");
    noRelatedSym_0_1.set(ProductComplex_43);
    Instrument_43.insert(ProductComplex_43.getString());
    FIX::PutOrCall PutOrCall_43(1);
    noRelatedSym_0_1.set(PutOrCall_43);
    Instrument_43.insert(PutOrCall_43.getString());
    FIX::RedemptionDate RedemptionDate_43("LOCALMKTDATE_443702493");
    noRelatedSym_0_1.set(RedemptionDate_43);
    Instrument_43.insert(RedemptionDate_43.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_43("STRING_1096326308");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_43);
    Instrument_43.insert(RepoCollateralSecurityType_43.getString());
    FIX::RepurchaseRate RepurchaseRate_43;
    RepurchaseRate_43.setString("55.890000");
    noRelatedSym_0_1.set(RepurchaseRate_43);
    Instrument_43.insert(RepurchaseRate_43.getString());
    FIX::RepurchaseTerm RepurchaseTerm_43(2112650229);
    noRelatedSym_0_1.set(RepurchaseTerm_43);
    Instrument_43.insert(RepurchaseTerm_43.getString());
    FIX::RestructuringType RestructuringType_43("STRING_XR");
    noRelatedSym_0_1.set(RestructuringType_43);
    Instrument_43.insert(RestructuringType_43.getString());
    FIX::SecurityDesc SecurityDesc_43("STRING_1077825745");
    noRelatedSym_0_1.set(SecurityDesc_43);
    Instrument_43.insert(SecurityDesc_43.getString());
    FIX::SecurityExchange SecurityExchange_43("EXCHANGE_893119367");
    noRelatedSym_0_1.set(SecurityExchange_43);
    Instrument_43.insert(SecurityExchange_43.getString());
    FIX::SecurityGroup SecurityGroup_43("STRING_2088500772");
    noRelatedSym_0_1.set(SecurityGroup_43);
    Instrument_43.insert(SecurityGroup_43.getString());
    FIX::SecurityID SecurityID_43("STRING_895974704");
    noRelatedSym_0_1.set(SecurityID_43);
    Instrument_43.insert(SecurityID_43.getString());
    FIX::SecurityIDSource SecurityIDSource_43("STRING_A");
    noRelatedSym_0_1.set(SecurityIDSource_43);
    Instrument_43.insert(SecurityIDSource_43.getString());
    FIX::SecurityStatus SecurityStatus_43("STRING_2");
    noRelatedSym_0_1.set(SecurityStatus_43);
    Instrument_43.insert(SecurityStatus_43.getString());
    FIX::SecuritySubType SecuritySubType_44("STRING_1850278753");
    noRelatedSym_0_1.set(SecuritySubType_44);
    Instrument_43.insert(SecuritySubType_44.getString());
    FIX::SecurityType SecurityType_45("STRING_CP");
    noRelatedSym_0_1.set(SecurityType_45);
    Instrument_43.insert(SecurityType_45.getString());
    FIX::Seniority Seniority_43("STRING_SR");
    noRelatedSym_0_1.set(Seniority_43);
    Instrument_43.insert(Seniority_43.getString());
    FIX::SettlMethod SettlMethod_43('C');
    noRelatedSym_0_1.set(SettlMethod_43);
    Instrument_43.insert(SettlMethod_43.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_43("STRING_1617516251");
    noRelatedSym_0_1.set(SettleOnOpenFlag_43);
    Instrument_43.insert(SettleOnOpenFlag_43.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_43("STRING_1473624449");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_43);
    Instrument_43.insert(StateOrProvinceOfIssue_43.getString());
    FIX::StrikeCurrency StrikeCurrency_43("JPY");
    noRelatedSym_0_1.set(StrikeCurrency_43);
    Instrument_43.insert(StrikeCurrency_43.getString());
    FIX::StrikeMultiplier StrikeMultiplier_43;
    StrikeMultiplier_43.setString("13376184");
    noRelatedSym_0_1.set(StrikeMultiplier_43);
    Instrument_43.insert(StrikeMultiplier_43.getString());
    FIX::StrikePrice StrikePrice_43;
    StrikePrice_43.setString("14511118");
    noRelatedSym_0_1.set(StrikePrice_43);
    Instrument_43.insert(StrikePrice_43.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_43(4);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_43);
    Instrument_43.insert(StrikePriceBoundaryMethod_43.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_43;
    StrikePriceBoundaryPrecision_43.setString("71.410000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_43);
    Instrument_43.insert(StrikePriceBoundaryPrecision_43.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_43(4);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_43);
    Instrument_43.insert(StrikePriceDeterminationMethod_43.getString());
    FIX::StrikeValue StrikeValue_43;
    StrikeValue_43.setString("10450027");
    noRelatedSym_0_1.set(StrikeValue_43);
    Instrument_43.insert(StrikeValue_43.getString());
    FIX::Symbol Symbol_43("STRING_407195808");
    noRelatedSym_0_1.set(Symbol_43);
    Instrument_43.insert(Symbol_43.getString());
    FIX::SymbolSfx SymbolSfx_43("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_43);
    Instrument_43.insert(SymbolSfx_43.getString());
    FIX::TimeUnit TimeUnit_43("STRING_H");
    noRelatedSym_0_1.set(TimeUnit_43);
    Instrument_43.insert(TimeUnit_43.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_43(2);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_43);
    Instrument_43.insert(UnderlyingPriceDeterminationMethod_43.getString());
    FIX::UnitOfMeasure UnitOfMeasure_43("STRING_Alw");
    noRelatedSym_0_1.set(UnitOfMeasure_43);
    Instrument_43.insert(UnitOfMeasure_43.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_43;
    UnitOfMeasureQty_43.setString("12267704");
    noRelatedSym_0_1.set(UnitOfMeasureQty_43);
    Instrument_43.insert(UnitOfMeasureQty_43.getString());
    FIX::ValuationMethod ValuationMethod_43("STRING_EQTY");
    noRelatedSym_0_1.set(ValuationMethod_43);
    Instrument_43.insert(ValuationMethod_43.getString());
    all_values.push_back(Instrument_43);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_86;
      FIX::ComplexEventCondition ComplexEventCondition_86(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_86);
      ComplexEvents_NoComplexEvents_86.insert(ComplexEventCondition_86.getString());
      FIX::ComplexEventPrice ComplexEventPrice_86;
      ComplexEventPrice_86.setString("2920404");
      noComplexEvents_1_1_0.set(ComplexEventPrice_86);
      ComplexEvents_NoComplexEvents_86.insert(ComplexEventPrice_86.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_86(4);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_86);
      ComplexEvents_NoComplexEvents_86.insert(ComplexEventPriceBoundaryMethod_86.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_86;
      ComplexEventPriceBoundaryPrecision_86.setString("81.610000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_86);
      ComplexEvents_NoComplexEvents_86.insert(ComplexEventPriceBoundaryPrecision_86.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_86(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_86);
      ComplexEvents_NoComplexEvents_86.insert(ComplexEventPriceTimeType_86.getString());
      FIX::ComplexEventType ComplexEventType_86(3);
      noComplexEvents_1_1_0.set(ComplexEventType_86);
      ComplexEvents_NoComplexEvents_86.insert(ComplexEventType_86.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_86;
      ComplexOptPayoutAmount_86.setString("1791792");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_86);
      ComplexEvents_NoComplexEvents_86.insert(ComplexOptPayoutAmount_86.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_86);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_184;
        FIX::ComplexEventEndDate ComplexEventEndDate_184(FIX::UTCTIMESTAMP(18, 15, 12, 0, 42015));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_184);
        ComplexEventDates_NoComplexEventDates_184.insert(ComplexEventEndDate_184.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_184(FIX::UTCTIMESTAMP(17, 37, 41, 3, 112006));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_184);
        ComplexEventDates_NoComplexEventDates_184.insert(ComplexEventStartDate_184.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_184);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_364;
          FIX::ComplexEventEndTime ComplexEventEndTime_364(FIX::UTCTIMEONLY(14, 35, 56));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_364);
          ComplexEventTimes_NoComplexEventTimes_364.insert(ComplexEventEndTime_364.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_364(FIX::UTCTIMEONLY(9, 27, 7));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_364);
          ComplexEventTimes_NoComplexEventTimes_364.insert(ComplexEventStartTime_364.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_364);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_87;
      FIX::ComplexEventCondition ComplexEventCondition_87(2);
      noComplexEvents_1_1_1.set(ComplexEventCondition_87);
      ComplexEvents_NoComplexEvents_87.insert(ComplexEventCondition_87.getString());
      FIX::ComplexEventPrice ComplexEventPrice_87;
      ComplexEventPrice_87.setString("2337604");
      noComplexEvents_1_1_1.set(ComplexEventPrice_87);
      ComplexEvents_NoComplexEvents_87.insert(ComplexEventPrice_87.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_87(3);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_87);
      ComplexEvents_NoComplexEvents_87.insert(ComplexEventPriceBoundaryMethod_87.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_87;
      ComplexEventPriceBoundaryPrecision_87.setString("48.180000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_87);
      ComplexEvents_NoComplexEvents_87.insert(ComplexEventPriceBoundaryPrecision_87.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_87(1);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_87);
      ComplexEvents_NoComplexEvents_87.insert(ComplexEventPriceTimeType_87.getString());
      FIX::ComplexEventType ComplexEventType_87(2);
      noComplexEvents_1_1_1.set(ComplexEventType_87);
      ComplexEvents_NoComplexEvents_87.insert(ComplexEventType_87.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_87;
      ComplexOptPayoutAmount_87.setString("15978940");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_87);
      ComplexEvents_NoComplexEvents_87.insert(ComplexOptPayoutAmount_87.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_87);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_185;
        FIX::ComplexEventEndDate ComplexEventEndDate_185(FIX::UTCTIMESTAMP(13, 28, 58, 21, 82012));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_185);
        ComplexEventDates_NoComplexEventDates_185.insert(ComplexEventEndDate_185.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_185(FIX::UTCTIMESTAMP(5, 53, 2, 0, 52007));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_185);
        ComplexEventDates_NoComplexEventDates_185.insert(ComplexEventStartDate_185.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_185);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_365;
          FIX::ComplexEventEndTime ComplexEventEndTime_365(FIX::UTCTIMEONLY(9, 51, 43));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_365);
          ComplexEventTimes_NoComplexEventTimes_365.insert(ComplexEventEndTime_365.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_365(FIX::UTCTIMEONLY(4, 2, 51));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_365);
          ComplexEventTimes_NoComplexEventTimes_365.insert(ComplexEventStartTime_365.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_365);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_366;
          FIX::ComplexEventEndTime ComplexEventEndTime_366(FIX::UTCTIMEONLY(17, 10, 7));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_366);
          ComplexEventTimes_NoComplexEventTimes_366.insert(ComplexEventEndTime_366.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_366(FIX::UTCTIMEONLY(6, 14, 7));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_366);
          ComplexEventTimes_NoComplexEventTimes_366.insert(ComplexEventStartTime_366.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_366);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_186;
        FIX::ComplexEventEndDate ComplexEventEndDate_186(FIX::UTCTIMESTAMP(7, 35, 39, 25, 122015));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_186);
        ComplexEventDates_NoComplexEventDates_186.insert(ComplexEventEndDate_186.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_186(FIX::UTCTIMESTAMP(20, 56, 1, 4, 52014));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_186);
        ComplexEventDates_NoComplexEventDates_186.insert(ComplexEventStartDate_186.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_186);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_367;
          FIX::ComplexEventEndTime ComplexEventEndTime_367(FIX::UTCTIMEONLY(21, 39, 23));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_367);
          ComplexEventTimes_NoComplexEventTimes_367.insert(ComplexEventEndTime_367.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_367(FIX::UTCTIMEONLY(7, 17, 11));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_367);
          ComplexEventTimes_NoComplexEventTimes_367.insert(ComplexEventStartTime_367.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_367);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_86;
      FIX::EventDate EventDate_86("LOCALMKTDATE_1101145510");
      noEvents_1_1_0.set(EventDate_86);
      EvntGrp_NoEvents_86.insert(EventDate_86.getString());
      FIX::EventPx EventPx_86;
      EventPx_86.setString("10401768");
      noEvents_1_1_0.set(EventPx_86);
      EvntGrp_NoEvents_86.insert(EventPx_86.getString());
      FIX::EventText EventText_86("STRING_1938434980");
      noEvents_1_1_0.set(EventText_86);
      EvntGrp_NoEvents_86.insert(EventText_86.getString());
      FIX::EventTime EventTime_86(FIX::UTCTIMESTAMP(20, 47, 3, 1, 72015));
      noEvents_1_1_0.set(EventTime_86);
      EvntGrp_NoEvents_86.insert(EventTime_86.getString());
      FIX::EventType EventType_86(1);
      noEvents_1_1_0.set(EventType_86);
      EvntGrp_NoEvents_86.insert(EventType_86.getString());
      all_values.push_back(EvntGrp_NoEvents_86);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_78;
      FIX::InstrumentPartyID InstrumentPartyID_78("STRING_295563054");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_78);
      InstrumentParties_NoInstrumentParties_78.insert(InstrumentPartyID_78.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_78('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_78);
      InstrumentParties_NoInstrumentParties_78.insert(InstrumentPartyIDSource_78.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_78(596245206);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_78);
      InstrumentParties_NoInstrumentParties_78.insert(InstrumentPartyRole_78.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_78);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156;
        FIX::InstrumentPartySubID InstrumentPartySubID_156("STRING_1103887743");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_156);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156.insert(InstrumentPartySubID_156.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_156(1686281887);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_156);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156.insert(InstrumentPartySubIDType_156.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157;
        FIX::InstrumentPartySubID InstrumentPartySubID_157("STRING_1404042910");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_157);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157.insert(InstrumentPartySubID_157.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_157(422973168);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_157);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157.insert(InstrumentPartySubIDType_157.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158;
        FIX::InstrumentPartySubID InstrumentPartySubID_158("STRING_1207442803");
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubID_158);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158.insert(InstrumentPartySubID_158.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_158(117050270);
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubIDType_158);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158.insert(InstrumentPartySubIDType_158.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_79;
      FIX::InstrumentPartyID InstrumentPartyID_79("STRING_984009867");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_79);
      InstrumentParties_NoInstrumentParties_79.insert(InstrumentPartyID_79.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_79('5');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_79);
      InstrumentParties_NoInstrumentParties_79.insert(InstrumentPartyIDSource_79.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_79(1708832969);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_79);
      InstrumentParties_NoInstrumentParties_79.insert(InstrumentPartyRole_79.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_79);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159;
        FIX::InstrumentPartySubID InstrumentPartySubID_159("STRING_665779180");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_159);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159.insert(InstrumentPartySubID_159.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_159(1519587952);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_159);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159.insert(InstrumentPartySubIDType_159.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_82;
      FIX::SecurityAltID SecurityAltID_82("STRING_595377164");
      noSecurityAltID_1_1_0.set(SecurityAltID_82);
      SecAltIDGrp_NoSecurityAltID_82.insert(SecurityAltID_82.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_82("STRING_1684825525");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_82);
      SecAltIDGrp_NoSecurityAltID_82.insert(SecurityAltIDSource_82.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_82);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_86;
    FIX::SecurityXML SecurityXML_87("XMLDATA_1424373490");
    noRelatedSym_0_1.set(SecurityXML_87);
    FIX::SecurityXMLLen SecurityXMLLen_43(1635553978);
    noRelatedSym_0_1.set(SecurityXMLLen_43);
    FIX::SecurityXMLSchema SecurityXMLSchema_43("STRING_1475776858");
    noRelatedSym_0_1.set(SecurityXMLSchema_43);
    SecurityXML_86.insert(SecurityXMLSchema_43.getString());
    all_values.push_back(SecurityXML_86);

    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::News::NoRelatedSym noRelatedSym_0_2;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_44;
    FIX::AttachmentPoint AttachmentPoint_44;
    AttachmentPoint_44.setString("98.270000");
    noRelatedSym_0_2.set(AttachmentPoint_44);
    Instrument_44.insert(AttachmentPoint_44.getString());
    FIX::CFICode CFICode_44("STRING_626986438");
    noRelatedSym_0_2.set(CFICode_44);
    Instrument_44.insert(CFICode_44.getString());
    FIX::CPProgram CPProgram_44(2);
    noRelatedSym_0_2.set(CPProgram_44);
    Instrument_44.insert(CPProgram_44.getString());
    FIX::CPRegType CPRegType_44("STRING_708951790");
    noRelatedSym_0_2.set(CPRegType_44);
    Instrument_44.insert(CPRegType_44.getString());
    FIX::CapPrice CapPrice_44;
    CapPrice_44.setString("20869838");
    noRelatedSym_0_2.set(CapPrice_44);
    Instrument_44.insert(CapPrice_44.getString());
    FIX::ContractMultiplier ContractMultiplier_44;
    ContractMultiplier_44.setString("19134039");
    noRelatedSym_0_2.set(ContractMultiplier_44);
    Instrument_44.insert(ContractMultiplier_44.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_44(1);
    noRelatedSym_0_2.set(ContractMultiplierUnit_44);
    Instrument_44.insert(ContractMultiplierUnit_44.getString());
    FIX::ContractSettlMonth ContractSettlMonth_44("MONTHYEAR_1169117219");
    noRelatedSym_0_2.set(ContractSettlMonth_44);
    Instrument_44.insert(ContractSettlMonth_44.getString());
    FIX::CountryOfIssue CountryOfIssue_44("COUNTRY_644249407");
    noRelatedSym_0_2.set(CountryOfIssue_44);
    Instrument_44.insert(CountryOfIssue_44.getString());
    FIX::CouponPaymentDate CouponPaymentDate_44("LOCALMKTDATE_122126795");
    noRelatedSym_0_2.set(CouponPaymentDate_44);
    Instrument_44.insert(CouponPaymentDate_44.getString());
    FIX::CouponRate CouponRate_44;
    CouponRate_44.setString("88.660000");
    noRelatedSym_0_2.set(CouponRate_44);
    Instrument_44.insert(CouponRate_44.getString());
    FIX::CreditRating CreditRating_44("STRING_1240494613");
    noRelatedSym_0_2.set(CreditRating_44);
    Instrument_44.insert(CreditRating_44.getString());
    FIX::DatedDate DatedDate_44("LOCALMKTDATE_841092973");
    noRelatedSym_0_2.set(DatedDate_44);
    Instrument_44.insert(DatedDate_44.getString());
    FIX::DetachmentPoint DetachmentPoint_44;
    DetachmentPoint_44.setString("66.100000");
    noRelatedSym_0_2.set(DetachmentPoint_44);
    Instrument_44.insert(DetachmentPoint_44.getString());
    FIX::EncodedIssuer EncodedIssuer_44("DATA_779292852");
    noRelatedSym_0_2.set(EncodedIssuer_44);
    Instrument_44.insert(EncodedIssuer_44.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_44(97652235);
    noRelatedSym_0_2.set(EncodedIssuerLen_44);
    Instrument_44.insert(EncodedIssuerLen_44.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_44("DATA_1696089778");
    noRelatedSym_0_2.set(EncodedSecurityDesc_44);
    Instrument_44.insert(EncodedSecurityDesc_44.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_44(1986735655);
    noRelatedSym_0_2.set(EncodedSecurityDescLen_44);
    Instrument_44.insert(EncodedSecurityDescLen_44.getString());
    FIX::ExerciseStyle ExerciseStyle_44(2);
    noRelatedSym_0_2.set(ExerciseStyle_44);
    Instrument_44.insert(ExerciseStyle_44.getString());
    FIX::Factor Factor_44;
    Factor_44.setString("5326159");
    noRelatedSym_0_2.set(Factor_44);
    Instrument_44.insert(Factor_44.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_44(false);
    noRelatedSym_0_2.set(FlexProductEligibilityIndicator_44);
    Instrument_44.insert(FlexProductEligibilityIndicator_44.getString());
    FIX::FlexibleIndicator FlexibleIndicator_44(true);
    noRelatedSym_0_2.set(FlexibleIndicator_44);
    Instrument_44.insert(FlexibleIndicator_44.getString());
    FIX::FloorPrice FloorPrice_44;
    FloorPrice_44.setString("7869762");
    noRelatedSym_0_2.set(FloorPrice_44);
    Instrument_44.insert(FloorPrice_44.getString());
    FIX::FlowScheduleType FlowScheduleType_44(2);
    noRelatedSym_0_2.set(FlowScheduleType_44);
    Instrument_44.insert(FlowScheduleType_44.getString());
    FIX::InstrRegistry InstrRegistry_44("STRING_1295639779");
    noRelatedSym_0_2.set(InstrRegistry_44);
    Instrument_44.insert(InstrRegistry_44.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_44('1');
    noRelatedSym_0_2.set(InstrmtAssignmentMethod_44);
    Instrument_44.insert(InstrmtAssignmentMethod_44.getString());
    FIX::InterestAccrualDate InterestAccrualDate_44("LOCALMKTDATE_1692570871");
    noRelatedSym_0_2.set(InterestAccrualDate_44);
    Instrument_44.insert(InterestAccrualDate_44.getString());
    FIX::IssueDate IssueDate_44("LOCALMKTDATE_832981656");
    noRelatedSym_0_2.set(IssueDate_44);
    Instrument_44.insert(IssueDate_44.getString());
    FIX::Issuer Issuer_44("STRING_387094082");
    noRelatedSym_0_2.set(Issuer_44);
    Instrument_44.insert(Issuer_44.getString());
    FIX::ListMethod ListMethod_44(1);
    noRelatedSym_0_2.set(ListMethod_44);
    Instrument_44.insert(ListMethod_44.getString());
    FIX::LocaleOfIssue LocaleOfIssue_44("STRING_161274866");
    noRelatedSym_0_2.set(LocaleOfIssue_44);
    Instrument_44.insert(LocaleOfIssue_44.getString());
    FIX::MaturityDate MaturityDate_44("LOCALMKTDATE_1068843909");
    noRelatedSym_0_2.set(MaturityDate_44);
    Instrument_44.insert(MaturityDate_44.getString());
    FIX::MaturityMonthYear MaturityMonthYear_44("MONTHYEAR_1807627640");
    noRelatedSym_0_2.set(MaturityMonthYear_44);
    Instrument_44.insert(MaturityMonthYear_44.getString());
    FIX::MaturityTime MaturityTime_44("TZTIMEONLY_504127203");
    noRelatedSym_0_2.set(MaturityTime_44);
    Instrument_44.insert(MaturityTime_44.getString());
    FIX::MinPriceIncrement MinPriceIncrement_44;
    MinPriceIncrement_44.setString("17777957");
    noRelatedSym_0_2.set(MinPriceIncrement_44);
    Instrument_44.insert(MinPriceIncrement_44.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_44;
    MinPriceIncrementAmount_44.setString("17471278");
    noRelatedSym_0_2.set(MinPriceIncrementAmount_44);
    Instrument_44.insert(MinPriceIncrementAmount_44.getString());
    FIX::NTPositionLimit NTPositionLimit_44(270047523);
    noRelatedSym_0_2.set(NTPositionLimit_44);
    Instrument_44.insert(NTPositionLimit_44.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_44;
    NotionalPercentageOutstanding_44.setString("94.410000");
    noRelatedSym_0_2.set(NotionalPercentageOutstanding_44);
    Instrument_44.insert(NotionalPercentageOutstanding_44.getString());
    FIX::OptAttribute OptAttribute_44('7');
    noRelatedSym_0_2.set(OptAttribute_44);
    Instrument_44.insert(OptAttribute_44.getString());
    FIX::OptPayoutAmount OptPayoutAmount_44;
    OptPayoutAmount_44.setString("9142969");
    noRelatedSym_0_2.set(OptPayoutAmount_44);
    Instrument_44.insert(OptPayoutAmount_44.getString());
    FIX::OptPayoutType OptPayoutType_44(2);
    noRelatedSym_0_2.set(OptPayoutType_44);
    Instrument_44.insert(OptPayoutType_44.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_44;
    OriginalNotionalPercentageOutstanding_44.setString("3.170000");
    noRelatedSym_0_2.set(OriginalNotionalPercentageOutstanding_44);
    Instrument_44.insert(OriginalNotionalPercentageOutstanding_44.getString());
    FIX::Pool Pool_44("STRING_7307895");
    noRelatedSym_0_2.set(Pool_44);
    Instrument_44.insert(Pool_44.getString());
    FIX::PositionLimit PositionLimit_44(420095562);
    noRelatedSym_0_2.set(PositionLimit_44);
    Instrument_44.insert(PositionLimit_44.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_44("STRING_PCTPAR");
    noRelatedSym_0_2.set(PriceQuoteMethod_44);
    Instrument_44.insert(PriceQuoteMethod_44.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_44("STRING_786600747");
    noRelatedSym_0_2.set(PriceUnitOfMeasure_44);
    Instrument_44.insert(PriceUnitOfMeasure_44.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_44;
    PriceUnitOfMeasureQty_44.setString("5177477");
    noRelatedSym_0_2.set(PriceUnitOfMeasureQty_44);
    Instrument_44.insert(PriceUnitOfMeasureQty_44.getString());
    FIX::Product Product_46(12);
    noRelatedSym_0_2.set(Product_46);
    Instrument_44.insert(Product_46.getString());
    FIX::ProductComplex ProductComplex_44("STRING_625852754");
    noRelatedSym_0_2.set(ProductComplex_44);
    Instrument_44.insert(ProductComplex_44.getString());
    FIX::PutOrCall PutOrCall_44(1);
    noRelatedSym_0_2.set(PutOrCall_44);
    Instrument_44.insert(PutOrCall_44.getString());
    FIX::RedemptionDate RedemptionDate_44("LOCALMKTDATE_144845407");
    noRelatedSym_0_2.set(RedemptionDate_44);
    Instrument_44.insert(RedemptionDate_44.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_44("STRING_1057267281");
    noRelatedSym_0_2.set(RepoCollateralSecurityType_44);
    Instrument_44.insert(RepoCollateralSecurityType_44.getString());
    FIX::RepurchaseRate RepurchaseRate_44;
    RepurchaseRate_44.setString("21.300000");
    noRelatedSym_0_2.set(RepurchaseRate_44);
    Instrument_44.insert(RepurchaseRate_44.getString());
    FIX::RepurchaseTerm RepurchaseTerm_44(931821667);
    noRelatedSym_0_2.set(RepurchaseTerm_44);
    Instrument_44.insert(RepurchaseTerm_44.getString());
    FIX::RestructuringType RestructuringType_44("STRING_FR");
    noRelatedSym_0_2.set(RestructuringType_44);
    Instrument_44.insert(RestructuringType_44.getString());
    FIX::SecurityDesc SecurityDesc_44("STRING_1804141909");
    noRelatedSym_0_2.set(SecurityDesc_44);
    Instrument_44.insert(SecurityDesc_44.getString());
    FIX::SecurityExchange SecurityExchange_44("EXCHANGE_2042025907");
    noRelatedSym_0_2.set(SecurityExchange_44);
    Instrument_44.insert(SecurityExchange_44.getString());
    FIX::SecurityGroup SecurityGroup_44("STRING_1699548212");
    noRelatedSym_0_2.set(SecurityGroup_44);
    Instrument_44.insert(SecurityGroup_44.getString());
    FIX::SecurityID SecurityID_44("STRING_489639917");
    noRelatedSym_0_2.set(SecurityID_44);
    Instrument_44.insert(SecurityID_44.getString());
    FIX::SecurityIDSource SecurityIDSource_44("STRING_K");
    noRelatedSym_0_2.set(SecurityIDSource_44);
    Instrument_44.insert(SecurityIDSource_44.getString());
    FIX::SecurityStatus SecurityStatus_44("STRING_2");
    noRelatedSym_0_2.set(SecurityStatus_44);
    Instrument_44.insert(SecurityStatus_44.getString());
    FIX::SecuritySubType SecuritySubType_45("STRING_650914784");
    noRelatedSym_0_2.set(SecuritySubType_45);
    Instrument_44.insert(SecuritySubType_45.getString());
    FIX::SecurityType SecurityType_46("STRING_TMCP");
    noRelatedSym_0_2.set(SecurityType_46);
    Instrument_44.insert(SecurityType_46.getString());
    FIX::Seniority Seniority_44("STRING_SD");
    noRelatedSym_0_2.set(Seniority_44);
    Instrument_44.insert(Seniority_44.getString());
    FIX::SettlMethod SettlMethod_44('P');
    noRelatedSym_0_2.set(SettlMethod_44);
    Instrument_44.insert(SettlMethod_44.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_44("STRING_980792303");
    noRelatedSym_0_2.set(SettleOnOpenFlag_44);
    Instrument_44.insert(SettleOnOpenFlag_44.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_44("STRING_2139977637");
    noRelatedSym_0_2.set(StateOrProvinceOfIssue_44);
    Instrument_44.insert(StateOrProvinceOfIssue_44.getString());
    FIX::StrikeCurrency StrikeCurrency_44("JPY");
    noRelatedSym_0_2.set(StrikeCurrency_44);
    Instrument_44.insert(StrikeCurrency_44.getString());
    FIX::StrikeMultiplier StrikeMultiplier_44;
    StrikeMultiplier_44.setString("7612554");
    noRelatedSym_0_2.set(StrikeMultiplier_44);
    Instrument_44.insert(StrikeMultiplier_44.getString());
    FIX::StrikePrice StrikePrice_44;
    StrikePrice_44.setString("1919027");
    noRelatedSym_0_2.set(StrikePrice_44);
    Instrument_44.insert(StrikePrice_44.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_44(1);
    noRelatedSym_0_2.set(StrikePriceBoundaryMethod_44);
    Instrument_44.insert(StrikePriceBoundaryMethod_44.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_44;
    StrikePriceBoundaryPrecision_44.setString("57.570000");
    noRelatedSym_0_2.set(StrikePriceBoundaryPrecision_44);
    Instrument_44.insert(StrikePriceBoundaryPrecision_44.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_44(4);
    noRelatedSym_0_2.set(StrikePriceDeterminationMethod_44);
    Instrument_44.insert(StrikePriceDeterminationMethod_44.getString());
    FIX::StrikeValue StrikeValue_44;
    StrikeValue_44.setString("4367662");
    noRelatedSym_0_2.set(StrikeValue_44);
    Instrument_44.insert(StrikeValue_44.getString());
    FIX::Symbol Symbol_44("STRING_1762869037");
    noRelatedSym_0_2.set(Symbol_44);
    Instrument_44.insert(Symbol_44.getString());
    FIX::SymbolSfx SymbolSfx_44("STRING_CD");
    noRelatedSym_0_2.set(SymbolSfx_44);
    Instrument_44.insert(SymbolSfx_44.getString());
    FIX::TimeUnit TimeUnit_44("STRING_D");
    noRelatedSym_0_2.set(TimeUnit_44);
    Instrument_44.insert(TimeUnit_44.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_44(3);
    noRelatedSym_0_2.set(UnderlyingPriceDeterminationMethod_44);
    Instrument_44.insert(UnderlyingPriceDeterminationMethod_44.getString());
    FIX::UnitOfMeasure UnitOfMeasure_44("STRING_Bbl");
    noRelatedSym_0_2.set(UnitOfMeasure_44);
    Instrument_44.insert(UnitOfMeasure_44.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_44;
    UnitOfMeasureQty_44.setString("16869643");
    noRelatedSym_0_2.set(UnitOfMeasureQty_44);
    Instrument_44.insert(UnitOfMeasureQty_44.getString());
    FIX::ValuationMethod ValuationMethod_44("STRING_CDS");
    noRelatedSym_0_2.set(ValuationMethod_44);
    Instrument_44.insert(ValuationMethod_44.getString());
    all_values.push_back(Instrument_44);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_88;
      FIX::ComplexEventCondition ComplexEventCondition_88(2);
      noComplexEvents_2_1_0.set(ComplexEventCondition_88);
      ComplexEvents_NoComplexEvents_88.insert(ComplexEventCondition_88.getString());
      FIX::ComplexEventPrice ComplexEventPrice_88;
      ComplexEventPrice_88.setString("3042818");
      noComplexEvents_2_1_0.set(ComplexEventPrice_88);
      ComplexEvents_NoComplexEvents_88.insert(ComplexEventPrice_88.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_88(3);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_88);
      ComplexEvents_NoComplexEvents_88.insert(ComplexEventPriceBoundaryMethod_88.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_88;
      ComplexEventPriceBoundaryPrecision_88.setString("47.400000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_88);
      ComplexEvents_NoComplexEvents_88.insert(ComplexEventPriceBoundaryPrecision_88.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_88(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_88);
      ComplexEvents_NoComplexEvents_88.insert(ComplexEventPriceTimeType_88.getString());
      FIX::ComplexEventType ComplexEventType_88(9);
      noComplexEvents_2_1_0.set(ComplexEventType_88);
      ComplexEvents_NoComplexEvents_88.insert(ComplexEventType_88.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_88;
      ComplexOptPayoutAmount_88.setString("1942810");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_88);
      ComplexEvents_NoComplexEvents_88.insert(ComplexOptPayoutAmount_88.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_88);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_187;
        FIX::ComplexEventEndDate ComplexEventEndDate_187(FIX::UTCTIMESTAMP(10, 44, 9, 17, 122004));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_187);
        ComplexEventDates_NoComplexEventDates_187.insert(ComplexEventEndDate_187.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_187(FIX::UTCTIMESTAMP(3, 38, 56, 5, 82004));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_187);
        ComplexEventDates_NoComplexEventDates_187.insert(ComplexEventStartDate_187.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_187);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_368;
          FIX::ComplexEventEndTime ComplexEventEndTime_368(FIX::UTCTIMEONLY(6, 47, 55));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_368);
          ComplexEventTimes_NoComplexEventTimes_368.insert(ComplexEventEndTime_368.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_368(FIX::UTCTIMEONLY(4, 28, 12));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_368);
          ComplexEventTimes_NoComplexEventTimes_368.insert(ComplexEventStartTime_368.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_368);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_369;
          FIX::ComplexEventEndTime ComplexEventEndTime_369(FIX::UTCTIMEONLY(5, 14, 40));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventEndTime_369);
          ComplexEventTimes_NoComplexEventTimes_369.insert(ComplexEventEndTime_369.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_369(FIX::UTCTIMEONLY(16, 30, 57));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventStartTime_369);
          ComplexEventTimes_NoComplexEventTimes_369.insert(ComplexEventStartTime_369.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_369);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_370;
          FIX::ComplexEventEndTime ComplexEventEndTime_370(FIX::UTCTIMEONLY(20, 33, 53));
          noComplexEventTimes_2_0_0_3_2.set(ComplexEventEndTime_370);
          ComplexEventTimes_NoComplexEventTimes_370.insert(ComplexEventEndTime_370.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_370(FIX::UTCTIMEONLY(8, 43, 14));
          noComplexEventTimes_2_0_0_3_2.set(ComplexEventStartTime_370);
          ComplexEventTimes_NoComplexEventTimes_370.insert(ComplexEventStartTime_370.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_370);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_89;
      FIX::ComplexEventCondition ComplexEventCondition_89(1);
      noComplexEvents_2_1_1.set(ComplexEventCondition_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventCondition_89.getString());
      FIX::ComplexEventPrice ComplexEventPrice_89;
      ComplexEventPrice_89.setString("19844355");
      noComplexEvents_2_1_1.set(ComplexEventPrice_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventPrice_89.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_89(3);
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryMethod_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventPriceBoundaryMethod_89.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_89;
      ComplexEventPriceBoundaryPrecision_89.setString("21.010000");
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryPrecision_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventPriceBoundaryPrecision_89.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_89(3);
      noComplexEvents_2_1_1.set(ComplexEventPriceTimeType_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventPriceTimeType_89.getString());
      FIX::ComplexEventType ComplexEventType_89(5);
      noComplexEvents_2_1_1.set(ComplexEventType_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventType_89.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_89;
      ComplexOptPayoutAmount_89.setString("5391828");
      noComplexEvents_2_1_1.set(ComplexOptPayoutAmount_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexOptPayoutAmount_89.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_89);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_188;
        FIX::ComplexEventEndDate ComplexEventEndDate_188(FIX::UTCTIMESTAMP(13, 44, 40, 1, 52004));
        noComplexEventDates_2_1_2_0.set(ComplexEventEndDate_188);
        ComplexEventDates_NoComplexEventDates_188.insert(ComplexEventEndDate_188.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_188(FIX::UTCTIMESTAMP(21, 59, 30, 2, 42010));
        noComplexEventDates_2_1_2_0.set(ComplexEventStartDate_188);
        ComplexEventDates_NoComplexEventDates_188.insert(ComplexEventStartDate_188.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_188);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_371;
          FIX::ComplexEventEndTime ComplexEventEndTime_371(FIX::UTCTIMEONLY(13, 53, 8));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventEndTime_371);
          ComplexEventTimes_NoComplexEventTimes_371.insert(ComplexEventEndTime_371.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_371(FIX::UTCTIMEONLY(5, 51, 5));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventStartTime_371);
          ComplexEventTimes_NoComplexEventTimes_371.insert(ComplexEventStartTime_371.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_371);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_372;
          FIX::ComplexEventEndTime ComplexEventEndTime_372(FIX::UTCTIMEONLY(16, 59, 38));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventEndTime_372);
          ComplexEventTimes_NoComplexEventTimes_372.insert(ComplexEventEndTime_372.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_372(FIX::UTCTIMEONLY(22, 32, 14));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventStartTime_372);
          ComplexEventTimes_NoComplexEventTimes_372.insert(ComplexEventStartTime_372.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_372);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_1);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_189;
        FIX::ComplexEventEndDate ComplexEventEndDate_189(FIX::UTCTIMESTAMP(9, 50, 59, 19, 72013));
        noComplexEventDates_2_1_2_1.set(ComplexEventEndDate_189);
        ComplexEventDates_NoComplexEventDates_189.insert(ComplexEventEndDate_189.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_189(FIX::UTCTIMESTAMP(4, 42, 38, 10, 32001));
        noComplexEventDates_2_1_2_1.set(ComplexEventStartDate_189);
        ComplexEventDates_NoComplexEventDates_189.insert(ComplexEventStartDate_189.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_189);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_373;
          FIX::ComplexEventEndTime ComplexEventEndTime_373(FIX::UTCTIMEONLY(12, 10, 46));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventEndTime_373);
          ComplexEventTimes_NoComplexEventTimes_373.insert(ComplexEventEndTime_373.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_373(FIX::UTCTIMEONLY(4, 29, 8));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventStartTime_373);
          ComplexEventTimes_NoComplexEventTimes_373.insert(ComplexEventStartTime_373.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_373);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_374;
          FIX::ComplexEventEndTime ComplexEventEndTime_374(FIX::UTCTIMEONLY(22, 7, 56));
          noComplexEventTimes_2_1_1_3_1.set(ComplexEventEndTime_374);
          ComplexEventTimes_NoComplexEventTimes_374.insert(ComplexEventEndTime_374.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_374(FIX::UTCTIMEONLY(5, 28, 5));
          noComplexEventTimes_2_1_1_3_1.set(ComplexEventStartTime_374);
          ComplexEventTimes_NoComplexEventTimes_374.insert(ComplexEventStartTime_374.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_374);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_1);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_87;
      FIX::EventDate EventDate_87("LOCALMKTDATE_932713842");
      noEvents_2_1_0.set(EventDate_87);
      EvntGrp_NoEvents_87.insert(EventDate_87.getString());
      FIX::EventPx EventPx_87;
      EventPx_87.setString("15430291");
      noEvents_2_1_0.set(EventPx_87);
      EvntGrp_NoEvents_87.insert(EventPx_87.getString());
      FIX::EventText EventText_87("STRING_279594435");
      noEvents_2_1_0.set(EventText_87);
      EvntGrp_NoEvents_87.insert(EventText_87.getString());
      FIX::EventTime EventTime_87(FIX::UTCTIMESTAMP(17, 59, 1, 21, 62008));
      noEvents_2_1_0.set(EventTime_87);
      EvntGrp_NoEvents_87.insert(EventTime_87.getString());
      FIX::EventType EventType_87(99);
      noEvents_2_1_0.set(EventType_87);
      EvntGrp_NoEvents_87.insert(EventType_87.getString());
      all_values.push_back(EvntGrp_NoEvents_87);

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_80;
      FIX::InstrumentPartyID InstrumentPartyID_80("STRING_1235745603");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_80);
      InstrumentParties_NoInstrumentParties_80.insert(InstrumentPartyID_80.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_80('1');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_80);
      InstrumentParties_NoInstrumentParties_80.insert(InstrumentPartyIDSource_80.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_80(2031417145);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_80);
      InstrumentParties_NoInstrumentParties_80.insert(InstrumentPartyRole_80.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_80);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160;
        FIX::InstrumentPartySubID InstrumentPartySubID_160("STRING_432756487");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_160);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160.insert(InstrumentPartySubID_160.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_160(1967974983);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_160);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160.insert(InstrumentPartySubIDType_160.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_81;
      FIX::InstrumentPartyID InstrumentPartyID_81("STRING_586019418");
      noInstrumentParties_2_1_1.set(InstrumentPartyID_81);
      InstrumentParties_NoInstrumentParties_81.insert(InstrumentPartyID_81.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_81('1');
      noInstrumentParties_2_1_1.set(InstrumentPartyIDSource_81);
      InstrumentParties_NoInstrumentParties_81.insert(InstrumentPartyIDSource_81.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_81(2138462132);
      noInstrumentParties_2_1_1.set(InstrumentPartyRole_81);
      InstrumentParties_NoInstrumentParties_81.insert(InstrumentPartyRole_81.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_81);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161;
        FIX::InstrumentPartySubID InstrumentPartySubID_161("STRING_1689001673");
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubID_161);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161.insert(InstrumentPartySubID_161.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_161(232346818);
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubIDType_161);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161.insert(InstrumentPartySubIDType_161.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162;
        FIX::InstrumentPartySubID InstrumentPartySubID_162("STRING_1808305833");
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubID_162);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162.insert(InstrumentPartySubID_162.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_162(1275888461);
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubIDType_162);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162.insert(InstrumentPartySubIDType_162.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163;
        FIX::InstrumentPartySubID InstrumentPartySubID_163("STRING_1893104997");
        noInstrumentPartySubIDs_2_1_2_2.set(InstrumentPartySubID_163);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163.insert(InstrumentPartySubID_163.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_163(1200742951);
        noInstrumentPartySubIDs_2_1_2_2.set(InstrumentPartySubIDType_163);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163.insert(InstrumentPartySubIDType_163.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_82;
      FIX::InstrumentPartyID InstrumentPartyID_82("STRING_1084904941");
      noInstrumentParties_2_1_2.set(InstrumentPartyID_82);
      InstrumentParties_NoInstrumentParties_82.insert(InstrumentPartyID_82.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_82('1');
      noInstrumentParties_2_1_2.set(InstrumentPartyIDSource_82);
      InstrumentParties_NoInstrumentParties_82.insert(InstrumentPartyIDSource_82.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_82(463233407);
      noInstrumentParties_2_1_2.set(InstrumentPartyRole_82);
      InstrumentParties_NoInstrumentParties_82.insert(InstrumentPartyRole_82.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_82);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164;
        FIX::InstrumentPartySubID InstrumentPartySubID_164("STRING_401798381");
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubID_164);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164.insert(InstrumentPartySubID_164.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_164(742827843);
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubIDType_164);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164.insert(InstrumentPartySubIDType_164.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164);

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165;
        FIX::InstrumentPartySubID InstrumentPartySubID_165("STRING_582495868");
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubID_165);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165.insert(InstrumentPartySubID_165.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_165(489282743);
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubIDType_165);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165.insert(InstrumentPartySubIDType_165.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165);

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_1);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_83;
      FIX::SecurityAltID SecurityAltID_83("STRING_1827785010");
      noSecurityAltID_2_1_0.set(SecurityAltID_83);
      SecAltIDGrp_NoSecurityAltID_83.insert(SecurityAltID_83.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_83("STRING_1709546396");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_83);
      SecAltIDGrp_NoSecurityAltID_83.insert(SecurityAltIDSource_83.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_83);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_84;
      FIX::SecurityAltID SecurityAltID_84("STRING_1197104495");
      noSecurityAltID_2_1_1.set(SecurityAltID_84);
      SecAltIDGrp_NoSecurityAltID_84.insert(SecurityAltID_84.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_84("STRING_1866289862");
      noSecurityAltID_2_1_1.set(SecurityAltIDSource_84);
      SecAltIDGrp_NoSecurityAltID_84.insert(SecurityAltIDSource_84.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_84);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_85;
      FIX::SecurityAltID SecurityAltID_85("STRING_438585628");
      noSecurityAltID_2_1_2.set(SecurityAltID_85);
      SecAltIDGrp_NoSecurityAltID_85.insert(SecurityAltID_85.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_85("STRING_1353768623");
      noSecurityAltID_2_1_2.set(SecurityAltIDSource_85);
      SecAltIDGrp_NoSecurityAltID_85.insert(SecurityAltIDSource_85.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_85);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_88;
    FIX::SecurityXML SecurityXML_89("XMLDATA_954551817");
    noRelatedSym_0_2.set(SecurityXML_89);
    FIX::SecurityXMLLen SecurityXMLLen_44(205431325);
    noRelatedSym_0_2.set(SecurityXMLLen_44);
    FIX::SecurityXMLSchema SecurityXMLSchema_44("STRING_1237702120");
    noRelatedSym_0_2.set(SecurityXMLSchema_44);
    SecurityXML_88.insert(SecurityXMLSchema_44.getString());
    all_values.push_back(SecurityXML_88);

    msg.addGroup(noRelatedSym_0_2);
  }
  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::News::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_63;
    FIX::EncodedLegIssuer EncodedLegIssuer_63("DATA_638187812");
    noLegs_0_0.set(EncodedLegIssuer_63);
    InstrumentLeg_63.insert(EncodedLegIssuer_63.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_63(1058193455);
    noLegs_0_0.set(EncodedLegIssuerLen_63);
    InstrumentLeg_63.insert(EncodedLegIssuerLen_63.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_63("DATA_629097922");
    noLegs_0_0.set(EncodedLegSecurityDesc_63);
    InstrumentLeg_63.insert(EncodedLegSecurityDesc_63.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_63(275765880);
    noLegs_0_0.set(EncodedLegSecurityDescLen_63);
    InstrumentLeg_63.insert(EncodedLegSecurityDescLen_63.getString());
    FIX::LegCFICode LegCFICode_63("STRING_1049171939");
    noLegs_0_0.set(LegCFICode_63);
    InstrumentLeg_63.insert(LegCFICode_63.getString());
    FIX::LegContractMultiplier LegContractMultiplier_63;
    LegContractMultiplier_63.setString("17394347");
    noLegs_0_0.set(LegContractMultiplier_63);
    InstrumentLeg_63.insert(LegContractMultiplier_63.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_63(1964767553);
    noLegs_0_0.set(LegContractMultiplierUnit_63);
    InstrumentLeg_63.insert(LegContractMultiplierUnit_63.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_63("MONTHYEAR_1281518758");
    noLegs_0_0.set(LegContractSettlMonth_63);
    InstrumentLeg_63.insert(LegContractSettlMonth_63.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_63("COUNTRY_1400256973");
    noLegs_0_0.set(LegCountryOfIssue_63);
    InstrumentLeg_63.insert(LegCountryOfIssue_63.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_63("LOCALMKTDATE_1093172366");
    noLegs_0_0.set(LegCouponPaymentDate_63);
    InstrumentLeg_63.insert(LegCouponPaymentDate_63.getString());
    FIX::LegCouponRate LegCouponRate_63;
    LegCouponRate_63.setString("1.070000");
    noLegs_0_0.set(LegCouponRate_63);
    InstrumentLeg_63.insert(LegCouponRate_63.getString());
    FIX::LegCreditRating LegCreditRating_63("STRING_453516276");
    noLegs_0_0.set(LegCreditRating_63);
    InstrumentLeg_63.insert(LegCreditRating_63.getString());
    FIX::LegCurrency LegCurrency_63("USD");
    noLegs_0_0.set(LegCurrency_63);
    InstrumentLeg_63.insert(LegCurrency_63.getString());
    FIX::LegDatedDate LegDatedDate_63("LOCALMKTDATE_916749684");
    noLegs_0_0.set(LegDatedDate_63);
    InstrumentLeg_63.insert(LegDatedDate_63.getString());
    FIX::LegExerciseStyle LegExerciseStyle_63(2048212443);
    noLegs_0_0.set(LegExerciseStyle_63);
    InstrumentLeg_63.insert(LegExerciseStyle_63.getString());
    FIX::LegFactor LegFactor_63;
    LegFactor_63.setString("2877077");
    noLegs_0_0.set(LegFactor_63);
    InstrumentLeg_63.insert(LegFactor_63.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_63(1659577527);
    noLegs_0_0.set(LegFlowScheduleType_63);
    InstrumentLeg_63.insert(LegFlowScheduleType_63.getString());
    FIX::LegInstrRegistry LegInstrRegistry_63("STRING_483224663");
    noLegs_0_0.set(LegInstrRegistry_63);
    InstrumentLeg_63.insert(LegInstrRegistry_63.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_63("LOCALMKTDATE_776990498");
    noLegs_0_0.set(LegInterestAccrualDate_63);
    InstrumentLeg_63.insert(LegInterestAccrualDate_63.getString());
    FIX::LegIssueDate LegIssueDate_63("LOCALMKTDATE_1044100401");
    noLegs_0_0.set(LegIssueDate_63);
    InstrumentLeg_63.insert(LegIssueDate_63.getString());
    FIX::LegIssuer LegIssuer_63("STRING_163526025");
    noLegs_0_0.set(LegIssuer_63);
    InstrumentLeg_63.insert(LegIssuer_63.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_63("STRING_339053247");
    noLegs_0_0.set(LegLocaleOfIssue_63);
    InstrumentLeg_63.insert(LegLocaleOfIssue_63.getString());
    FIX::LegMaturityDate LegMaturityDate_63("LOCALMKTDATE_93721248");
    noLegs_0_0.set(LegMaturityDate_63);
    InstrumentLeg_63.insert(LegMaturityDate_63.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_63("MONTHYEAR_2029815887");
    noLegs_0_0.set(LegMaturityMonthYear_63);
    InstrumentLeg_63.insert(LegMaturityMonthYear_63.getString());
    FIX::LegMaturityTime LegMaturityTime_63("TZTIMEONLY_777638875");
    noLegs_0_0.set(LegMaturityTime_63);
    InstrumentLeg_63.insert(LegMaturityTime_63.getString());
    FIX::LegOptAttribute LegOptAttribute_63('1');
    noLegs_0_0.set(LegOptAttribute_63);
    InstrumentLeg_63.insert(LegOptAttribute_63.getString());
    FIX::LegOptionRatio LegOptionRatio_63;
    LegOptionRatio_63.setString("8368840");
    noLegs_0_0.set(LegOptionRatio_63);
    InstrumentLeg_63.insert(LegOptionRatio_63.getString());
    FIX::LegPool LegPool_63("STRING_983070200");
    noLegs_0_0.set(LegPool_63);
    InstrumentLeg_63.insert(LegPool_63.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_63("STRING_537708343");
    noLegs_0_0.set(LegPriceUnitOfMeasure_63);
    InstrumentLeg_63.insert(LegPriceUnitOfMeasure_63.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_63;
    LegPriceUnitOfMeasureQty_63.setString("8799625");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_63);
    InstrumentLeg_63.insert(LegPriceUnitOfMeasureQty_63.getString());
    FIX::LegProduct LegProduct_63(1621258012);
    noLegs_0_0.set(LegProduct_63);
    InstrumentLeg_63.insert(LegProduct_63.getString());
    FIX::LegPutOrCall LegPutOrCall_63(1595901798);
    noLegs_0_0.set(LegPutOrCall_63);
    InstrumentLeg_63.insert(LegPutOrCall_63.getString());
    FIX::LegRatioQty LegRatioQty_63;
    LegRatioQty_63.setString("15090604");
    noLegs_0_0.set(LegRatioQty_63);
    InstrumentLeg_63.insert(LegRatioQty_63.getString());
    FIX::LegRedemptionDate LegRedemptionDate_63("LOCALMKTDATE_1897023892");
    noLegs_0_0.set(LegRedemptionDate_63);
    InstrumentLeg_63.insert(LegRedemptionDate_63.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_63("STRING_497590090");
    noLegs_0_0.set(LegRepoCollateralSecurityType_63);
    InstrumentLeg_63.insert(LegRepoCollateralSecurityType_63.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_63;
    LegRepurchaseRate_63.setString("16.220000");
    noLegs_0_0.set(LegRepurchaseRate_63);
    InstrumentLeg_63.insert(LegRepurchaseRate_63.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_63(1714307797);
    noLegs_0_0.set(LegRepurchaseTerm_63);
    InstrumentLeg_63.insert(LegRepurchaseTerm_63.getString());
    FIX::LegSecurityDesc LegSecurityDesc_63("STRING_1779108848");
    noLegs_0_0.set(LegSecurityDesc_63);
    InstrumentLeg_63.insert(LegSecurityDesc_63.getString());
    FIX::LegSecurityExchange LegSecurityExchange_63("EXCHANGE_353784948");
    noLegs_0_0.set(LegSecurityExchange_63);
    InstrumentLeg_63.insert(LegSecurityExchange_63.getString());
    FIX::LegSecurityID LegSecurityID_63("STRING_659996515");
    noLegs_0_0.set(LegSecurityID_63);
    InstrumentLeg_63.insert(LegSecurityID_63.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_63("STRING_658765307");
    noLegs_0_0.set(LegSecurityIDSource_63);
    InstrumentLeg_63.insert(LegSecurityIDSource_63.getString());
    FIX::LegSecuritySubType LegSecuritySubType_63("STRING_807301224");
    noLegs_0_0.set(LegSecuritySubType_63);
    InstrumentLeg_63.insert(LegSecuritySubType_63.getString());
    FIX::LegSecurityType LegSecurityType_63("STRING_690590175");
    noLegs_0_0.set(LegSecurityType_63);
    InstrumentLeg_63.insert(LegSecurityType_63.getString());
    FIX::LegSide LegSide_63('5');
    noLegs_0_0.set(LegSide_63);
    InstrumentLeg_63.insert(LegSide_63.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_63("STRING_1724050908");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_63);
    InstrumentLeg_63.insert(LegStateOrProvinceOfIssue_63.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_63("EUR");
    noLegs_0_0.set(LegStrikeCurrency_63);
    InstrumentLeg_63.insert(LegStrikeCurrency_63.getString());
    FIX::LegStrikePrice LegStrikePrice_63;
    LegStrikePrice_63.setString("12361447");
    noLegs_0_0.set(LegStrikePrice_63);
    InstrumentLeg_63.insert(LegStrikePrice_63.getString());
    FIX::LegSymbol LegSymbol_63("STRING_1074543633");
    noLegs_0_0.set(LegSymbol_63);
    InstrumentLeg_63.insert(LegSymbol_63.getString());
    FIX::LegSymbolSfx LegSymbolSfx_63("STRING_1609372935");
    noLegs_0_0.set(LegSymbolSfx_63);
    InstrumentLeg_63.insert(LegSymbolSfx_63.getString());
    FIX::LegTimeUnit LegTimeUnit_63("STRING_132761540");
    noLegs_0_0.set(LegTimeUnit_63);
    InstrumentLeg_63.insert(LegTimeUnit_63.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_63("STRING_1238069659");
    noLegs_0_0.set(LegUnitOfMeasure_63);
    InstrumentLeg_63.insert(LegUnitOfMeasure_63.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_63;
    LegUnitOfMeasureQty_63.setString("19484261");
    noLegs_0_0.set(LegUnitOfMeasureQty_63);
    InstrumentLeg_63.insert(LegUnitOfMeasureQty_63.getString());
    all_values.push_back(InstrumentLeg_63);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_113;
      FIX::LegSecurityAltID LegSecurityAltID_113("STRING_1120401898");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_113);
      LegSecAltIDGrp_NoLegSecurityAltID_113.insert(LegSecurityAltID_113.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_113("STRING_578581409");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_113);
      LegSecAltIDGrp_NoLegSecurityAltID_113.insert(LegSecurityAltIDSource_113.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_113);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::News::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_64;
    FIX::EncodedLegIssuer EncodedLegIssuer_64("DATA_1673972660");
    noLegs_0_1.set(EncodedLegIssuer_64);
    InstrumentLeg_64.insert(EncodedLegIssuer_64.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_64(1957285955);
    noLegs_0_1.set(EncodedLegIssuerLen_64);
    InstrumentLeg_64.insert(EncodedLegIssuerLen_64.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_64("DATA_1561651609");
    noLegs_0_1.set(EncodedLegSecurityDesc_64);
    InstrumentLeg_64.insert(EncodedLegSecurityDesc_64.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_64(64197356);
    noLegs_0_1.set(EncodedLegSecurityDescLen_64);
    InstrumentLeg_64.insert(EncodedLegSecurityDescLen_64.getString());
    FIX::LegCFICode LegCFICode_64("STRING_689764867");
    noLegs_0_1.set(LegCFICode_64);
    InstrumentLeg_64.insert(LegCFICode_64.getString());
    FIX::LegContractMultiplier LegContractMultiplier_64;
    LegContractMultiplier_64.setString("10354259");
    noLegs_0_1.set(LegContractMultiplier_64);
    InstrumentLeg_64.insert(LegContractMultiplier_64.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_64(1660099154);
    noLegs_0_1.set(LegContractMultiplierUnit_64);
    InstrumentLeg_64.insert(LegContractMultiplierUnit_64.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_64("MONTHYEAR_51341702");
    noLegs_0_1.set(LegContractSettlMonth_64);
    InstrumentLeg_64.insert(LegContractSettlMonth_64.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_64("COUNTRY_784966218");
    noLegs_0_1.set(LegCountryOfIssue_64);
    InstrumentLeg_64.insert(LegCountryOfIssue_64.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_64("LOCALMKTDATE_10205596");
    noLegs_0_1.set(LegCouponPaymentDate_64);
    InstrumentLeg_64.insert(LegCouponPaymentDate_64.getString());
    FIX::LegCouponRate LegCouponRate_64;
    LegCouponRate_64.setString("33.240000");
    noLegs_0_1.set(LegCouponRate_64);
    InstrumentLeg_64.insert(LegCouponRate_64.getString());
    FIX::LegCreditRating LegCreditRating_64("STRING_351790368");
    noLegs_0_1.set(LegCreditRating_64);
    InstrumentLeg_64.insert(LegCreditRating_64.getString());
    FIX::LegCurrency LegCurrency_64("GBP");
    noLegs_0_1.set(LegCurrency_64);
    InstrumentLeg_64.insert(LegCurrency_64.getString());
    FIX::LegDatedDate LegDatedDate_64("LOCALMKTDATE_1011786883");
    noLegs_0_1.set(LegDatedDate_64);
    InstrumentLeg_64.insert(LegDatedDate_64.getString());
    FIX::LegExerciseStyle LegExerciseStyle_64(300596104);
    noLegs_0_1.set(LegExerciseStyle_64);
    InstrumentLeg_64.insert(LegExerciseStyle_64.getString());
    FIX::LegFactor LegFactor_64;
    LegFactor_64.setString("1659558");
    noLegs_0_1.set(LegFactor_64);
    InstrumentLeg_64.insert(LegFactor_64.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_64(1702377058);
    noLegs_0_1.set(LegFlowScheduleType_64);
    InstrumentLeg_64.insert(LegFlowScheduleType_64.getString());
    FIX::LegInstrRegistry LegInstrRegistry_64("STRING_845270785");
    noLegs_0_1.set(LegInstrRegistry_64);
    InstrumentLeg_64.insert(LegInstrRegistry_64.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_64("LOCALMKTDATE_1890006757");
    noLegs_0_1.set(LegInterestAccrualDate_64);
    InstrumentLeg_64.insert(LegInterestAccrualDate_64.getString());
    FIX::LegIssueDate LegIssueDate_64("LOCALMKTDATE_146212380");
    noLegs_0_1.set(LegIssueDate_64);
    InstrumentLeg_64.insert(LegIssueDate_64.getString());
    FIX::LegIssuer LegIssuer_64("STRING_1677653222");
    noLegs_0_1.set(LegIssuer_64);
    InstrumentLeg_64.insert(LegIssuer_64.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_64("STRING_978667897");
    noLegs_0_1.set(LegLocaleOfIssue_64);
    InstrumentLeg_64.insert(LegLocaleOfIssue_64.getString());
    FIX::LegMaturityDate LegMaturityDate_64("LOCALMKTDATE_1220756014");
    noLegs_0_1.set(LegMaturityDate_64);
    InstrumentLeg_64.insert(LegMaturityDate_64.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_64("MONTHYEAR_1139542510");
    noLegs_0_1.set(LegMaturityMonthYear_64);
    InstrumentLeg_64.insert(LegMaturityMonthYear_64.getString());
    FIX::LegMaturityTime LegMaturityTime_64("TZTIMEONLY_1111429437");
    noLegs_0_1.set(LegMaturityTime_64);
    InstrumentLeg_64.insert(LegMaturityTime_64.getString());
    FIX::LegOptAttribute LegOptAttribute_64('3');
    noLegs_0_1.set(LegOptAttribute_64);
    InstrumentLeg_64.insert(LegOptAttribute_64.getString());
    FIX::LegOptionRatio LegOptionRatio_64;
    LegOptionRatio_64.setString("9404850");
    noLegs_0_1.set(LegOptionRatio_64);
    InstrumentLeg_64.insert(LegOptionRatio_64.getString());
    FIX::LegPool LegPool_64("STRING_1337912226");
    noLegs_0_1.set(LegPool_64);
    InstrumentLeg_64.insert(LegPool_64.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_64("STRING_1431743923");
    noLegs_0_1.set(LegPriceUnitOfMeasure_64);
    InstrumentLeg_64.insert(LegPriceUnitOfMeasure_64.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_64;
    LegPriceUnitOfMeasureQty_64.setString("15190664");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_64);
    InstrumentLeg_64.insert(LegPriceUnitOfMeasureQty_64.getString());
    FIX::LegProduct LegProduct_64(864401239);
    noLegs_0_1.set(LegProduct_64);
    InstrumentLeg_64.insert(LegProduct_64.getString());
    FIX::LegPutOrCall LegPutOrCall_64(1241546230);
    noLegs_0_1.set(LegPutOrCall_64);
    InstrumentLeg_64.insert(LegPutOrCall_64.getString());
    FIX::LegRatioQty LegRatioQty_64;
    LegRatioQty_64.setString("9332344");
    noLegs_0_1.set(LegRatioQty_64);
    InstrumentLeg_64.insert(LegRatioQty_64.getString());
    FIX::LegRedemptionDate LegRedemptionDate_64("LOCALMKTDATE_928598595");
    noLegs_0_1.set(LegRedemptionDate_64);
    InstrumentLeg_64.insert(LegRedemptionDate_64.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_64("STRING_1931311098");
    noLegs_0_1.set(LegRepoCollateralSecurityType_64);
    InstrumentLeg_64.insert(LegRepoCollateralSecurityType_64.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_64;
    LegRepurchaseRate_64.setString("3.890000");
    noLegs_0_1.set(LegRepurchaseRate_64);
    InstrumentLeg_64.insert(LegRepurchaseRate_64.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_64(441214101);
    noLegs_0_1.set(LegRepurchaseTerm_64);
    InstrumentLeg_64.insert(LegRepurchaseTerm_64.getString());
    FIX::LegSecurityDesc LegSecurityDesc_64("STRING_1982652800");
    noLegs_0_1.set(LegSecurityDesc_64);
    InstrumentLeg_64.insert(LegSecurityDesc_64.getString());
    FIX::LegSecurityExchange LegSecurityExchange_64("EXCHANGE_606142960");
    noLegs_0_1.set(LegSecurityExchange_64);
    InstrumentLeg_64.insert(LegSecurityExchange_64.getString());
    FIX::LegSecurityID LegSecurityID_64("STRING_451419698");
    noLegs_0_1.set(LegSecurityID_64);
    InstrumentLeg_64.insert(LegSecurityID_64.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_64("STRING_987522476");
    noLegs_0_1.set(LegSecurityIDSource_64);
    InstrumentLeg_64.insert(LegSecurityIDSource_64.getString());
    FIX::LegSecuritySubType LegSecuritySubType_64("STRING_957933328");
    noLegs_0_1.set(LegSecuritySubType_64);
    InstrumentLeg_64.insert(LegSecuritySubType_64.getString());
    FIX::LegSecurityType LegSecurityType_64("STRING_93250494");
    noLegs_0_1.set(LegSecurityType_64);
    InstrumentLeg_64.insert(LegSecurityType_64.getString());
    FIX::LegSide LegSide_64('3');
    noLegs_0_1.set(LegSide_64);
    InstrumentLeg_64.insert(LegSide_64.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_64("STRING_1969720211");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_64);
    InstrumentLeg_64.insert(LegStateOrProvinceOfIssue_64.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_64("JPY");
    noLegs_0_1.set(LegStrikeCurrency_64);
    InstrumentLeg_64.insert(LegStrikeCurrency_64.getString());
    FIX::LegStrikePrice LegStrikePrice_64;
    LegStrikePrice_64.setString("15246136");
    noLegs_0_1.set(LegStrikePrice_64);
    InstrumentLeg_64.insert(LegStrikePrice_64.getString());
    FIX::LegSymbol LegSymbol_64("STRING_1239117384");
    noLegs_0_1.set(LegSymbol_64);
    InstrumentLeg_64.insert(LegSymbol_64.getString());
    FIX::LegSymbolSfx LegSymbolSfx_64("STRING_254656059");
    noLegs_0_1.set(LegSymbolSfx_64);
    InstrumentLeg_64.insert(LegSymbolSfx_64.getString());
    FIX::LegTimeUnit LegTimeUnit_64("STRING_1670826002");
    noLegs_0_1.set(LegTimeUnit_64);
    InstrumentLeg_64.insert(LegTimeUnit_64.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_64("STRING_769286958");
    noLegs_0_1.set(LegUnitOfMeasure_64);
    InstrumentLeg_64.insert(LegUnitOfMeasure_64.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_64;
    LegUnitOfMeasureQty_64.setString("12333239");
    noLegs_0_1.set(LegUnitOfMeasureQty_64);
    InstrumentLeg_64.insert(LegUnitOfMeasureQty_64.getString());
    all_values.push_back(InstrumentLeg_64);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_114;
      FIX::LegSecurityAltID LegSecurityAltID_114("STRING_1908829468");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_114);
      LegSecAltIDGrp_NoLegSecurityAltID_114.insert(LegSecurityAltID_114.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_114("STRING_197269746");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_114);
      LegSecAltIDGrp_NoLegSecurityAltID_114.insert(LegSecurityAltIDSource_114.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_114);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_115;
      FIX::LegSecurityAltID LegSecurityAltID_115("STRING_1055440393");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_115);
      LegSecAltIDGrp_NoLegSecurityAltID_115.insert(LegSecurityAltID_115.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_115("STRING_701830865");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_115);
      LegSecAltIDGrp_NoLegSecurityAltID_115.insert(LegSecurityAltIDSource_115.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_115);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // LinesOfTextGrp
  // Group LinesOfTextGrp.NoLinesOfText
  {
    FIX50SP2::News::NoLinesOfText noLinesOfText_0_0;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_1;
    FIX::EncodedText EncodedText_59("DATA_339700669");
    noLinesOfText_0_0.set(EncodedText_59);
    LinesOfTextGrp_NoLinesOfText_1.insert(EncodedText_59.getString());
    FIX::EncodedTextLen EncodedTextLen_59(73413671);
    noLinesOfText_0_0.set(EncodedTextLen_59);
    LinesOfTextGrp_NoLinesOfText_1.insert(EncodedTextLen_59.getString());
    FIX::Text Text_59("STRING_252099563");
    noLinesOfText_0_0.set(Text_59);
    LinesOfTextGrp_NoLinesOfText_1.insert(Text_59.getString());
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_1);

    msg.addGroup(noLinesOfText_0_0);
  }
  // NewsRefGrp
  // Group NewsRefGrp.NoNewsRefIDs
  {
    FIX50SP2::News::NoNewsRefIDs noNewsRefIDs_0_0;
    // NewsRefGrp.NoNewsRefIDs
    multiset<string> NewsRefGrp_NoNewsRefIDs_0;
    FIX::NewsRefID NewsRefID_0("STRING_1006648086");
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
    FIX::NewsRefID NewsRefID_1("STRING_1365074349");
    noNewsRefIDs_0_1.set(NewsRefID_1);
    NewsRefGrp_NoNewsRefIDs_1.insert(NewsRefID_1.getString());
    FIX::NewsRefType NewsRefType_1(1);
    noNewsRefIDs_0_1.set(NewsRefType_1);
    NewsRefGrp_NoNewsRefIDs_1.insert(NewsRefType_1.getString());
    all_values.push_back(NewsRefGrp_NoNewsRefIDs_1);

    msg.addGroup(noNewsRefIDs_0_1);
  }
  {
    FIX50SP2::News::NoNewsRefIDs noNewsRefIDs_0_2;
    // NewsRefGrp.NoNewsRefIDs
    multiset<string> NewsRefGrp_NoNewsRefIDs_2;
    FIX::NewsRefID NewsRefID_2("STRING_1621912260");
    noNewsRefIDs_0_2.set(NewsRefID_2);
    NewsRefGrp_NoNewsRefIDs_2.insert(NewsRefID_2.getString());
    FIX::NewsRefType NewsRefType_2(0);
    noNewsRefIDs_0_2.set(NewsRefType_2);
    NewsRefGrp_NoNewsRefIDs_2.insert(NewsRefType_2.getString());
    all_values.push_back(NewsRefGrp_NoNewsRefIDs_2);

    msg.addGroup(noNewsRefIDs_0_2);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_7;
    FIX::RoutingID RoutingID_7("STRING_2073331958");
    noRoutingIDs_0_0.set(RoutingID_7);
    RoutingGrp_NoRoutingIDs_7.insert(RoutingID_7.getString());
    FIX::RoutingType RoutingType_7(3);
    noRoutingIDs_0_0.set(RoutingType_7);
    RoutingGrp_NoRoutingIDs_7.insert(RoutingType_7.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_7);

    msg.addGroup(noRoutingIDs_0_0);
  }
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_1;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_8;
    FIX::RoutingID RoutingID_8("STRING_244417468");
    noRoutingIDs_0_1.set(RoutingID_8);
    RoutingGrp_NoRoutingIDs_8.insert(RoutingID_8.getString());
    FIX::RoutingType RoutingType_8(1);
    noRoutingIDs_0_1.set(RoutingType_8);
    RoutingGrp_NoRoutingIDs_8.insert(RoutingType_8.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_8);

    msg.addGroup(noRoutingIDs_0_1);
  }
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_2;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_9;
    FIX::RoutingID RoutingID_9("STRING_386459431");
    noRoutingIDs_0_2.set(RoutingID_9);
    RoutingGrp_NoRoutingIDs_9.insert(RoutingID_9.getString());
    FIX::RoutingType RoutingType_9(4);
    noRoutingIDs_0_2.set(RoutingType_9);
    RoutingGrp_NoRoutingIDs_9.insert(RoutingType_9.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_9);

    msg.addGroup(noRoutingIDs_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::News::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_68;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_68("DATA_898592381");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_68);
    UnderlyingInstrument_68.insert(EncodedUnderlyingIssuer_68.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_68(1591267653);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_68);
    UnderlyingInstrument_68.insert(EncodedUnderlyingIssuerLen_68.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_68("DATA_1652062787");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_68);
    UnderlyingInstrument_68.insert(EncodedUnderlyingSecurityDesc_68.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_68(1153248440);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_68);
    UnderlyingInstrument_68.insert(EncodedUnderlyingSecurityDescLen_68.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_68;
    UnderlyingAdjustedQuantity_68.setString("11146100");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_68);
    UnderlyingInstrument_68.insert(UnderlyingAdjustedQuantity_68.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_68;
    UnderlyingAllocationPercent_68.setString("60.970000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_68);
    UnderlyingInstrument_68.insert(UnderlyingAllocationPercent_68.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_68;
    UnderlyingAttachmentPoint_68.setString("87.490000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_68);
    UnderlyingInstrument_68.insert(UnderlyingAttachmentPoint_68.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_68("STRING_1858708376");
    noUnderlyings_0_0.set(UnderlyingCFICode_68);
    UnderlyingInstrument_68.insert(UnderlyingCFICode_68.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_68("STRING_35211918");
    noUnderlyings_0_0.set(UnderlyingCPProgram_68);
    UnderlyingInstrument_68.insert(UnderlyingCPProgram_68.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_68("STRING_436358495");
    noUnderlyings_0_0.set(UnderlyingCPRegType_68);
    UnderlyingInstrument_68.insert(UnderlyingCPRegType_68.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_68;
    UnderlyingCapValue_68.setString("7666651");
    noUnderlyings_0_0.set(UnderlyingCapValue_68);
    UnderlyingInstrument_68.insert(UnderlyingCapValue_68.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_68;
    UnderlyingCashAmount_68.setString("7370427");
    noUnderlyings_0_0.set(UnderlyingCashAmount_68);
    UnderlyingInstrument_68.insert(UnderlyingCashAmount_68.getString());
    FIX::UnderlyingCashType UnderlyingCashType_68("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_68);
    UnderlyingInstrument_68.insert(UnderlyingCashType_68.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_68;
    UnderlyingContractMultiplier_68.setString("11063657");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_68);
    UnderlyingInstrument_68.insert(UnderlyingContractMultiplier_68.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_68(810456454);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_68);
    UnderlyingInstrument_68.insert(UnderlyingContractMultiplierUnit_68.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_68("COUNTRY_76156383");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_68);
    UnderlyingInstrument_68.insert(UnderlyingCountryOfIssue_68.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_68("LOCALMKTDATE_540129042");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_68);
    UnderlyingInstrument_68.insert(UnderlyingCouponPaymentDate_68.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_68;
    UnderlyingCouponRate_68.setString("45.400000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_68);
    UnderlyingInstrument_68.insert(UnderlyingCouponRate_68.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_68("STRING_1256854541");
    noUnderlyings_0_0.set(UnderlyingCreditRating_68);
    UnderlyingInstrument_68.insert(UnderlyingCreditRating_68.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_68("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_68);
    UnderlyingInstrument_68.insert(UnderlyingCurrency_68.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_68;
    UnderlyingCurrentValue_68.setString("7312831");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_68);
    UnderlyingInstrument_68.insert(UnderlyingCurrentValue_68.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_68;
    UnderlyingDetachmentPoint_68.setString("32.450000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_68);
    UnderlyingInstrument_68.insert(UnderlyingDetachmentPoint_68.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_68;
    UnderlyingDirtyPrice_68.setString("19314135");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_68);
    UnderlyingInstrument_68.insert(UnderlyingDirtyPrice_68.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_68;
    UnderlyingEndPrice_68.setString("6571314");
    noUnderlyings_0_0.set(UnderlyingEndPrice_68);
    UnderlyingInstrument_68.insert(UnderlyingEndPrice_68.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_68;
    UnderlyingEndValue_68.setString("9982455");
    noUnderlyings_0_0.set(UnderlyingEndValue_68);
    UnderlyingInstrument_68.insert(UnderlyingEndValue_68.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_68(28347328);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_68);
    UnderlyingInstrument_68.insert(UnderlyingExerciseStyle_68.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_68;
    UnderlyingFXRate_68.setString("6762302");
    noUnderlyings_0_0.set(UnderlyingFXRate_68);
    UnderlyingInstrument_68.insert(UnderlyingFXRate_68.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_68('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_68);
    UnderlyingInstrument_68.insert(UnderlyingFXRateCalc_68.getString());
    FIX::UnderlyingFactor UnderlyingFactor_68;
    UnderlyingFactor_68.setString("950013");
    noUnderlyings_0_0.set(UnderlyingFactor_68);
    UnderlyingInstrument_68.insert(UnderlyingFactor_68.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_68(1089175671);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_68);
    UnderlyingInstrument_68.insert(UnderlyingFlowScheduleType_68.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_68("STRING_135813739");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_68);
    UnderlyingInstrument_68.insert(UnderlyingInstrRegistry_68.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_68("LOCALMKTDATE_1686269013");
    noUnderlyings_0_0.set(UnderlyingIssueDate_68);
    UnderlyingInstrument_68.insert(UnderlyingIssueDate_68.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_68("STRING_593754810");
    noUnderlyings_0_0.set(UnderlyingIssuer_68);
    UnderlyingInstrument_68.insert(UnderlyingIssuer_68.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_68("STRING_1289062180");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_68);
    UnderlyingInstrument_68.insert(UnderlyingLocaleOfIssue_68.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_68("LOCALMKTDATE_653395373");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_68);
    UnderlyingInstrument_68.insert(UnderlyingMaturityDate_68.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_68("MONTHYEAR_867620907");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_68);
    UnderlyingInstrument_68.insert(UnderlyingMaturityMonthYear_68.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_68("TZTIMEONLY_1528150929");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_68);
    UnderlyingInstrument_68.insert(UnderlyingMaturityTime_68.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_68;
    UnderlyingNotionalPercentageOutstanding_68.setString("1.020000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_68);
    UnderlyingInstrument_68.insert(UnderlyingNotionalPercentageOutstanding_68.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_68('9');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_68);
    UnderlyingInstrument_68.insert(UnderlyingOptAttribute_68.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_68;
    UnderlyingOriginalNotionalPercentageOutstanding_68.setString("94.240000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_68);
    UnderlyingInstrument_68.insert(UnderlyingOriginalNotionalPercentageOutstanding_68.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_68("STRING_1131285224");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_68);
    UnderlyingInstrument_68.insert(UnderlyingPriceUnitOfMeasure_68.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_68;
    UnderlyingPriceUnitOfMeasureQty_68.setString("16398756");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_68);
    UnderlyingInstrument_68.insert(UnderlyingPriceUnitOfMeasureQty_68.getString());
    FIX::UnderlyingProduct UnderlyingProduct_68(1788566243);
    noUnderlyings_0_0.set(UnderlyingProduct_68);
    UnderlyingInstrument_68.insert(UnderlyingProduct_68.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_68(90167367);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_68);
    UnderlyingInstrument_68.insert(UnderlyingPutOrCall_68.getString());
    FIX::UnderlyingPx UnderlyingPx_68;
    UnderlyingPx_68.setString("3028484");
    noUnderlyings_0_0.set(UnderlyingPx_68);
    UnderlyingInstrument_68.insert(UnderlyingPx_68.getString());
    FIX::UnderlyingQty UnderlyingQty_68;
    UnderlyingQty_68.setString("18647226");
    noUnderlyings_0_0.set(UnderlyingQty_68);
    UnderlyingInstrument_68.insert(UnderlyingQty_68.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_68("LOCALMKTDATE_630296409");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_68);
    UnderlyingInstrument_68.insert(UnderlyingRedemptionDate_68.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_68("STRING_2119952955");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_68);
    UnderlyingInstrument_68.insert(UnderlyingRepoCollateralSecurityType_68.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_68;
    UnderlyingRepurchaseRate_68.setString("35.200000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_68);
    UnderlyingInstrument_68.insert(UnderlyingRepurchaseRate_68.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_68(388016153);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_68);
    UnderlyingInstrument_68.insert(UnderlyingRepurchaseTerm_68.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_68("STRING_469915027");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_68);
    UnderlyingInstrument_68.insert(UnderlyingRestructuringType_68.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_68("STRING_1705376673");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_68);
    UnderlyingInstrument_68.insert(UnderlyingSecurityDesc_68.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_68("EXCHANGE_1345979399");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_68);
    UnderlyingInstrument_68.insert(UnderlyingSecurityExchange_68.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_68("STRING_253844888");
    noUnderlyings_0_0.set(UnderlyingSecurityID_68);
    UnderlyingInstrument_68.insert(UnderlyingSecurityID_68.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_68("STRING_215024489");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_68);
    UnderlyingInstrument_68.insert(UnderlyingSecurityIDSource_68.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_68("STRING_196741326");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_68);
    UnderlyingInstrument_68.insert(UnderlyingSecuritySubType_68.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_68("STRING_282192216");
    noUnderlyings_0_0.set(UnderlyingSecurityType_68);
    UnderlyingInstrument_68.insert(UnderlyingSecurityType_68.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_68("STRING_891254757");
    noUnderlyings_0_0.set(UnderlyingSeniority_68);
    UnderlyingInstrument_68.insert(UnderlyingSeniority_68.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_68("STRING_1581446333");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_68);
    UnderlyingInstrument_68.insert(UnderlyingSettlMethod_68.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_68(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_68);
    UnderlyingInstrument_68.insert(UnderlyingSettlementType_68.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_68;
    UnderlyingStartValue_68.setString("19804304");
    noUnderlyings_0_0.set(UnderlyingStartValue_68);
    UnderlyingInstrument_68.insert(UnderlyingStartValue_68.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_68("STRING_1717260072");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_68);
    UnderlyingInstrument_68.insert(UnderlyingStateOrProvinceOfIssue_68.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_68("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_68);
    UnderlyingInstrument_68.insert(UnderlyingStrikeCurrency_68.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_68;
    UnderlyingStrikePrice_68.setString("8588386");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_68);
    UnderlyingInstrument_68.insert(UnderlyingStrikePrice_68.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_68("STRING_569374315");
    noUnderlyings_0_0.set(UnderlyingSymbol_68);
    UnderlyingInstrument_68.insert(UnderlyingSymbol_68.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_68("STRING_1294322497");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_68);
    UnderlyingInstrument_68.insert(UnderlyingSymbolSfx_68.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_68("STRING_239505885");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_68);
    UnderlyingInstrument_68.insert(UnderlyingTimeUnit_68.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_68("STRING_933994417");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_68);
    UnderlyingInstrument_68.insert(UnderlyingUnitOfMeasure_68.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_68;
    UnderlyingUnitOfMeasureQty_68.setString("496716");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_68);
    UnderlyingInstrument_68.insert(UnderlyingUnitOfMeasureQty_68.getString());
    all_values.push_back(UnderlyingInstrument_68);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_134;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_134("STRING_2065279641");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_134);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_134.insert(UnderlyingSecurityAltID_134.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_134("STRING_1689547283");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_134);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_134.insert(UnderlyingSecurityAltIDSource_134.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_134);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_129;
      FIX::UnderlyingStipType UnderlyingStipType_129("STRING_7963360");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_129);
      UnderlyingStipulations_NoUnderlyingStips_129.insert(UnderlyingStipType_129.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_129("STRING_1992395698");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_129);
      UnderlyingStipulations_NoUnderlyingStips_129.insert(UnderlyingStipValue_129.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_129);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_138;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_138("STRING_638259770");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_138);
      UndlyInstrumentParties_NoUndlyInstrumentParties_138.insert(UnderlyingInstrumentPartyID_138.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_138('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_138);
      UndlyInstrumentParties_NoUndlyInstrumentParties_138.insert(UnderlyingInstrumentPartyIDSource_138.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_138(388946755);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_138);
      UndlyInstrumentParties_NoUndlyInstrumentParties_138.insert(UnderlyingInstrumentPartyRole_138.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_138);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_267("STRING_287296384");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_267);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267.insert(UnderlyingInstrumentPartySubID_267.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_267(2094323429);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_267);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267.insert(UnderlyingInstrumentPartySubIDType_267.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_268("STRING_224771674");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_268);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268.insert(UnderlyingInstrumentPartySubID_268.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_268(541141272);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_268);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268.insert(UnderlyingInstrumentPartySubIDType_268.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::News::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_69;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_69("DATA_161864270");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_69);
    UnderlyingInstrument_69.insert(EncodedUnderlyingIssuer_69.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_69(421513001);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_69);
    UnderlyingInstrument_69.insert(EncodedUnderlyingIssuerLen_69.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_69("DATA_823333489");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_69);
    UnderlyingInstrument_69.insert(EncodedUnderlyingSecurityDesc_69.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_69(1053119027);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_69);
    UnderlyingInstrument_69.insert(EncodedUnderlyingSecurityDescLen_69.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_69;
    UnderlyingAdjustedQuantity_69.setString("20029593");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_69);
    UnderlyingInstrument_69.insert(UnderlyingAdjustedQuantity_69.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_69;
    UnderlyingAllocationPercent_69.setString("70.650000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_69);
    UnderlyingInstrument_69.insert(UnderlyingAllocationPercent_69.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_69;
    UnderlyingAttachmentPoint_69.setString("58.070000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_69);
    UnderlyingInstrument_69.insert(UnderlyingAttachmentPoint_69.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_69("STRING_1572735758");
    noUnderlyings_0_1.set(UnderlyingCFICode_69);
    UnderlyingInstrument_69.insert(UnderlyingCFICode_69.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_69("STRING_1116506007");
    noUnderlyings_0_1.set(UnderlyingCPProgram_69);
    UnderlyingInstrument_69.insert(UnderlyingCPProgram_69.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_69("STRING_1312767397");
    noUnderlyings_0_1.set(UnderlyingCPRegType_69);
    UnderlyingInstrument_69.insert(UnderlyingCPRegType_69.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_69;
    UnderlyingCapValue_69.setString("2840907");
    noUnderlyings_0_1.set(UnderlyingCapValue_69);
    UnderlyingInstrument_69.insert(UnderlyingCapValue_69.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_69;
    UnderlyingCashAmount_69.setString("16858803");
    noUnderlyings_0_1.set(UnderlyingCashAmount_69);
    UnderlyingInstrument_69.insert(UnderlyingCashAmount_69.getString());
    FIX::UnderlyingCashType UnderlyingCashType_69("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_69);
    UnderlyingInstrument_69.insert(UnderlyingCashType_69.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_69;
    UnderlyingContractMultiplier_69.setString("5235966");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_69);
    UnderlyingInstrument_69.insert(UnderlyingContractMultiplier_69.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_69(472391092);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_69);
    UnderlyingInstrument_69.insert(UnderlyingContractMultiplierUnit_69.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_69("COUNTRY_509277921");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_69);
    UnderlyingInstrument_69.insert(UnderlyingCountryOfIssue_69.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_69("LOCALMKTDATE_580128262");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_69);
    UnderlyingInstrument_69.insert(UnderlyingCouponPaymentDate_69.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_69;
    UnderlyingCouponRate_69.setString("70.860000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_69);
    UnderlyingInstrument_69.insert(UnderlyingCouponRate_69.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_69("STRING_51341557");
    noUnderlyings_0_1.set(UnderlyingCreditRating_69);
    UnderlyingInstrument_69.insert(UnderlyingCreditRating_69.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_69("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_69);
    UnderlyingInstrument_69.insert(UnderlyingCurrency_69.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_69;
    UnderlyingCurrentValue_69.setString("20437372");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_69);
    UnderlyingInstrument_69.insert(UnderlyingCurrentValue_69.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_69;
    UnderlyingDetachmentPoint_69.setString("94.020000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_69);
    UnderlyingInstrument_69.insert(UnderlyingDetachmentPoint_69.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_69;
    UnderlyingDirtyPrice_69.setString("10364102");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_69);
    UnderlyingInstrument_69.insert(UnderlyingDirtyPrice_69.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_69;
    UnderlyingEndPrice_69.setString("18611186");
    noUnderlyings_0_1.set(UnderlyingEndPrice_69);
    UnderlyingInstrument_69.insert(UnderlyingEndPrice_69.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_69;
    UnderlyingEndValue_69.setString("815425");
    noUnderlyings_0_1.set(UnderlyingEndValue_69);
    UnderlyingInstrument_69.insert(UnderlyingEndValue_69.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_69(2062686140);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_69);
    UnderlyingInstrument_69.insert(UnderlyingExerciseStyle_69.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_69;
    UnderlyingFXRate_69.setString("9313");
    noUnderlyings_0_1.set(UnderlyingFXRate_69);
    UnderlyingInstrument_69.insert(UnderlyingFXRate_69.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_69('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_69);
    UnderlyingInstrument_69.insert(UnderlyingFXRateCalc_69.getString());
    FIX::UnderlyingFactor UnderlyingFactor_69;
    UnderlyingFactor_69.setString("1399741");
    noUnderlyings_0_1.set(UnderlyingFactor_69);
    UnderlyingInstrument_69.insert(UnderlyingFactor_69.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_69(542072621);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_69);
    UnderlyingInstrument_69.insert(UnderlyingFlowScheduleType_69.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_69("STRING_190246561");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_69);
    UnderlyingInstrument_69.insert(UnderlyingInstrRegistry_69.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_69("LOCALMKTDATE_561487167");
    noUnderlyings_0_1.set(UnderlyingIssueDate_69);
    UnderlyingInstrument_69.insert(UnderlyingIssueDate_69.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_69("STRING_1365406110");
    noUnderlyings_0_1.set(UnderlyingIssuer_69);
    UnderlyingInstrument_69.insert(UnderlyingIssuer_69.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_69("STRING_1243365588");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_69);
    UnderlyingInstrument_69.insert(UnderlyingLocaleOfIssue_69.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_69("LOCALMKTDATE_416962853");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_69);
    UnderlyingInstrument_69.insert(UnderlyingMaturityDate_69.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_69("MONTHYEAR_418449527");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_69);
    UnderlyingInstrument_69.insert(UnderlyingMaturityMonthYear_69.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_69("TZTIMEONLY_2129431395");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_69);
    UnderlyingInstrument_69.insert(UnderlyingMaturityTime_69.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_69;
    UnderlyingNotionalPercentageOutstanding_69.setString("86.120000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_69);
    UnderlyingInstrument_69.insert(UnderlyingNotionalPercentageOutstanding_69.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_69('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_69);
    UnderlyingInstrument_69.insert(UnderlyingOptAttribute_69.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_69;
    UnderlyingOriginalNotionalPercentageOutstanding_69.setString("51.440000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_69);
    UnderlyingInstrument_69.insert(UnderlyingOriginalNotionalPercentageOutstanding_69.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_69("STRING_126305679");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_69);
    UnderlyingInstrument_69.insert(UnderlyingPriceUnitOfMeasure_69.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_69;
    UnderlyingPriceUnitOfMeasureQty_69.setString("10733522");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_69);
    UnderlyingInstrument_69.insert(UnderlyingPriceUnitOfMeasureQty_69.getString());
    FIX::UnderlyingProduct UnderlyingProduct_69(1754321390);
    noUnderlyings_0_1.set(UnderlyingProduct_69);
    UnderlyingInstrument_69.insert(UnderlyingProduct_69.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_69(649902279);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_69);
    UnderlyingInstrument_69.insert(UnderlyingPutOrCall_69.getString());
    FIX::UnderlyingPx UnderlyingPx_69;
    UnderlyingPx_69.setString("15457433");
    noUnderlyings_0_1.set(UnderlyingPx_69);
    UnderlyingInstrument_69.insert(UnderlyingPx_69.getString());
    FIX::UnderlyingQty UnderlyingQty_69;
    UnderlyingQty_69.setString("1161156");
    noUnderlyings_0_1.set(UnderlyingQty_69);
    UnderlyingInstrument_69.insert(UnderlyingQty_69.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_69("LOCALMKTDATE_1230030541");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_69);
    UnderlyingInstrument_69.insert(UnderlyingRedemptionDate_69.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_69("STRING_1935930388");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_69);
    UnderlyingInstrument_69.insert(UnderlyingRepoCollateralSecurityType_69.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_69;
    UnderlyingRepurchaseRate_69.setString("72.210000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_69);
    UnderlyingInstrument_69.insert(UnderlyingRepurchaseRate_69.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_69(1507773060);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_69);
    UnderlyingInstrument_69.insert(UnderlyingRepurchaseTerm_69.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_69("STRING_186597187");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_69);
    UnderlyingInstrument_69.insert(UnderlyingRestructuringType_69.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_69("STRING_63710828");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_69);
    UnderlyingInstrument_69.insert(UnderlyingSecurityDesc_69.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_69("EXCHANGE_1200368815");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_69);
    UnderlyingInstrument_69.insert(UnderlyingSecurityExchange_69.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_69("STRING_1223007403");
    noUnderlyings_0_1.set(UnderlyingSecurityID_69);
    UnderlyingInstrument_69.insert(UnderlyingSecurityID_69.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_69("STRING_1924829440");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_69);
    UnderlyingInstrument_69.insert(UnderlyingSecurityIDSource_69.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_69("STRING_1281911325");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_69);
    UnderlyingInstrument_69.insert(UnderlyingSecuritySubType_69.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_69("STRING_1138209895");
    noUnderlyings_0_1.set(UnderlyingSecurityType_69);
    UnderlyingInstrument_69.insert(UnderlyingSecurityType_69.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_69("STRING_1925760788");
    noUnderlyings_0_1.set(UnderlyingSeniority_69);
    UnderlyingInstrument_69.insert(UnderlyingSeniority_69.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_69("STRING_1310293616");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_69);
    UnderlyingInstrument_69.insert(UnderlyingSettlMethod_69.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_69(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_69);
    UnderlyingInstrument_69.insert(UnderlyingSettlementType_69.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_69;
    UnderlyingStartValue_69.setString("3203497");
    noUnderlyings_0_1.set(UnderlyingStartValue_69);
    UnderlyingInstrument_69.insert(UnderlyingStartValue_69.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_69("STRING_1500540177");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_69);
    UnderlyingInstrument_69.insert(UnderlyingStateOrProvinceOfIssue_69.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_69("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_69);
    UnderlyingInstrument_69.insert(UnderlyingStrikeCurrency_69.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_69;
    UnderlyingStrikePrice_69.setString("5964221");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_69);
    UnderlyingInstrument_69.insert(UnderlyingStrikePrice_69.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_69("STRING_109150435");
    noUnderlyings_0_1.set(UnderlyingSymbol_69);
    UnderlyingInstrument_69.insert(UnderlyingSymbol_69.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_69("STRING_2104205399");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_69);
    UnderlyingInstrument_69.insert(UnderlyingSymbolSfx_69.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_69("STRING_578369864");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_69);
    UnderlyingInstrument_69.insert(UnderlyingTimeUnit_69.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_69("STRING_2098849047");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_69);
    UnderlyingInstrument_69.insert(UnderlyingUnitOfMeasure_69.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_69;
    UnderlyingUnitOfMeasureQty_69.setString("14916772");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_69);
    UnderlyingInstrument_69.insert(UnderlyingUnitOfMeasureQty_69.getString());
    all_values.push_back(UnderlyingInstrument_69);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_135;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_135("STRING_77671078");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_135);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_135.insert(UnderlyingSecurityAltID_135.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_135("STRING_417545848");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_135);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_135.insert(UnderlyingSecurityAltIDSource_135.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_135);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_136;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_136("STRING_1479922750");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_136);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_136.insert(UnderlyingSecurityAltID_136.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_136("STRING_727573357");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_136);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_136.insert(UnderlyingSecurityAltIDSource_136.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_136);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_130;
      FIX::UnderlyingStipType UnderlyingStipType_130("STRING_1596038414");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_130);
      UnderlyingStipulations_NoUnderlyingStips_130.insert(UnderlyingStipType_130.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_130("STRING_1957603899");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_130);
      UnderlyingStipulations_NoUnderlyingStips_130.insert(UnderlyingStipValue_130.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_130);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_131;
      FIX::UnderlyingStipType UnderlyingStipType_131("STRING_1751735891");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_131);
      UnderlyingStipulations_NoUnderlyingStips_131.insert(UnderlyingStipType_131.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_131("STRING_1763495635");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_131);
      UnderlyingStipulations_NoUnderlyingStips_131.insert(UnderlyingStipValue_131.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_131);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_132;
      FIX::UnderlyingStipType UnderlyingStipType_132("STRING_1317893311");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_132);
      UnderlyingStipulations_NoUnderlyingStips_132.insert(UnderlyingStipType_132.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_132("STRING_1938333078");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_132);
      UnderlyingStipulations_NoUnderlyingStips_132.insert(UnderlyingStipValue_132.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_132);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_139;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_139("STRING_370778478");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_139);
      UndlyInstrumentParties_NoUndlyInstrumentParties_139.insert(UnderlyingInstrumentPartyID_139.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_139('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_139);
      UndlyInstrumentParties_NoUndlyInstrumentParties_139.insert(UnderlyingInstrumentPartyIDSource_139.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_139(1604552255);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_139);
      UndlyInstrumentParties_NoUndlyInstrumentParties_139.insert(UnderlyingInstrumentPartyRole_139.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_139);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_269("STRING_4583081");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_269);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269.insert(UnderlyingInstrumentPartySubID_269.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_269(1382829396);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_269);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269.insert(UnderlyingInstrumentPartySubIDType_269.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::News::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_70;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_70("DATA_815499771");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_70);
    UnderlyingInstrument_70.insert(EncodedUnderlyingIssuer_70.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_70(1282767143);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_70);
    UnderlyingInstrument_70.insert(EncodedUnderlyingIssuerLen_70.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_70("DATA_1703179157");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_70);
    UnderlyingInstrument_70.insert(EncodedUnderlyingSecurityDesc_70.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_70(168556300);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_70);
    UnderlyingInstrument_70.insert(EncodedUnderlyingSecurityDescLen_70.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_70;
    UnderlyingAdjustedQuantity_70.setString("9749547");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_70);
    UnderlyingInstrument_70.insert(UnderlyingAdjustedQuantity_70.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_70;
    UnderlyingAllocationPercent_70.setString("13.810000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_70);
    UnderlyingInstrument_70.insert(UnderlyingAllocationPercent_70.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_70;
    UnderlyingAttachmentPoint_70.setString("84.170000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_70);
    UnderlyingInstrument_70.insert(UnderlyingAttachmentPoint_70.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_70("STRING_1084105159");
    noUnderlyings_0_2.set(UnderlyingCFICode_70);
    UnderlyingInstrument_70.insert(UnderlyingCFICode_70.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_70("STRING_1198173132");
    noUnderlyings_0_2.set(UnderlyingCPProgram_70);
    UnderlyingInstrument_70.insert(UnderlyingCPProgram_70.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_70("STRING_1343348281");
    noUnderlyings_0_2.set(UnderlyingCPRegType_70);
    UnderlyingInstrument_70.insert(UnderlyingCPRegType_70.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_70;
    UnderlyingCapValue_70.setString("10354705");
    noUnderlyings_0_2.set(UnderlyingCapValue_70);
    UnderlyingInstrument_70.insert(UnderlyingCapValue_70.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_70;
    UnderlyingCashAmount_70.setString("5423667");
    noUnderlyings_0_2.set(UnderlyingCashAmount_70);
    UnderlyingInstrument_70.insert(UnderlyingCashAmount_70.getString());
    FIX::UnderlyingCashType UnderlyingCashType_70("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_70);
    UnderlyingInstrument_70.insert(UnderlyingCashType_70.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_70;
    UnderlyingContractMultiplier_70.setString("11131416");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_70);
    UnderlyingInstrument_70.insert(UnderlyingContractMultiplier_70.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_70(959912618);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_70);
    UnderlyingInstrument_70.insert(UnderlyingContractMultiplierUnit_70.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_70("COUNTRY_401388744");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_70);
    UnderlyingInstrument_70.insert(UnderlyingCountryOfIssue_70.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_70("LOCALMKTDATE_1840714994");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_70);
    UnderlyingInstrument_70.insert(UnderlyingCouponPaymentDate_70.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_70;
    UnderlyingCouponRate_70.setString("81.200000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_70);
    UnderlyingInstrument_70.insert(UnderlyingCouponRate_70.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_70("STRING_1997427158");
    noUnderlyings_0_2.set(UnderlyingCreditRating_70);
    UnderlyingInstrument_70.insert(UnderlyingCreditRating_70.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_70("CAN");
    noUnderlyings_0_2.set(UnderlyingCurrency_70);
    UnderlyingInstrument_70.insert(UnderlyingCurrency_70.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_70;
    UnderlyingCurrentValue_70.setString("16134391");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_70);
    UnderlyingInstrument_70.insert(UnderlyingCurrentValue_70.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_70;
    UnderlyingDetachmentPoint_70.setString("49.080000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_70);
    UnderlyingInstrument_70.insert(UnderlyingDetachmentPoint_70.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_70;
    UnderlyingDirtyPrice_70.setString("1708197");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_70);
    UnderlyingInstrument_70.insert(UnderlyingDirtyPrice_70.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_70;
    UnderlyingEndPrice_70.setString("12931619");
    noUnderlyings_0_2.set(UnderlyingEndPrice_70);
    UnderlyingInstrument_70.insert(UnderlyingEndPrice_70.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_70;
    UnderlyingEndValue_70.setString("11920233");
    noUnderlyings_0_2.set(UnderlyingEndValue_70);
    UnderlyingInstrument_70.insert(UnderlyingEndValue_70.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_70(1184676627);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_70);
    UnderlyingInstrument_70.insert(UnderlyingExerciseStyle_70.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_70;
    UnderlyingFXRate_70.setString("7502305");
    noUnderlyings_0_2.set(UnderlyingFXRate_70);
    UnderlyingInstrument_70.insert(UnderlyingFXRate_70.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_70('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_70);
    UnderlyingInstrument_70.insert(UnderlyingFXRateCalc_70.getString());
    FIX::UnderlyingFactor UnderlyingFactor_70;
    UnderlyingFactor_70.setString("11892597");
    noUnderlyings_0_2.set(UnderlyingFactor_70);
    UnderlyingInstrument_70.insert(UnderlyingFactor_70.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_70(2133059965);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_70);
    UnderlyingInstrument_70.insert(UnderlyingFlowScheduleType_70.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_70("STRING_1512729314");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_70);
    UnderlyingInstrument_70.insert(UnderlyingInstrRegistry_70.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_70("LOCALMKTDATE_324543203");
    noUnderlyings_0_2.set(UnderlyingIssueDate_70);
    UnderlyingInstrument_70.insert(UnderlyingIssueDate_70.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_70("STRING_1688755474");
    noUnderlyings_0_2.set(UnderlyingIssuer_70);
    UnderlyingInstrument_70.insert(UnderlyingIssuer_70.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_70("STRING_1681285614");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_70);
    UnderlyingInstrument_70.insert(UnderlyingLocaleOfIssue_70.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_70("LOCALMKTDATE_1299497927");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_70);
    UnderlyingInstrument_70.insert(UnderlyingMaturityDate_70.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_70("MONTHYEAR_782723207");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_70);
    UnderlyingInstrument_70.insert(UnderlyingMaturityMonthYear_70.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_70("TZTIMEONLY_298780384");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_70);
    UnderlyingInstrument_70.insert(UnderlyingMaturityTime_70.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_70;
    UnderlyingNotionalPercentageOutstanding_70.setString("94.390000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_70);
    UnderlyingInstrument_70.insert(UnderlyingNotionalPercentageOutstanding_70.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_70('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_70);
    UnderlyingInstrument_70.insert(UnderlyingOptAttribute_70.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_70;
    UnderlyingOriginalNotionalPercentageOutstanding_70.setString("86.650000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_70);
    UnderlyingInstrument_70.insert(UnderlyingOriginalNotionalPercentageOutstanding_70.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_70("STRING_1271589997");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_70);
    UnderlyingInstrument_70.insert(UnderlyingPriceUnitOfMeasure_70.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_70;
    UnderlyingPriceUnitOfMeasureQty_70.setString("3757794");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_70);
    UnderlyingInstrument_70.insert(UnderlyingPriceUnitOfMeasureQty_70.getString());
    FIX::UnderlyingProduct UnderlyingProduct_70(563594659);
    noUnderlyings_0_2.set(UnderlyingProduct_70);
    UnderlyingInstrument_70.insert(UnderlyingProduct_70.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_70(237247986);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_70);
    UnderlyingInstrument_70.insert(UnderlyingPutOrCall_70.getString());
    FIX::UnderlyingPx UnderlyingPx_70;
    UnderlyingPx_70.setString("13356920");
    noUnderlyings_0_2.set(UnderlyingPx_70);
    UnderlyingInstrument_70.insert(UnderlyingPx_70.getString());
    FIX::UnderlyingQty UnderlyingQty_70;
    UnderlyingQty_70.setString("9649834");
    noUnderlyings_0_2.set(UnderlyingQty_70);
    UnderlyingInstrument_70.insert(UnderlyingQty_70.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_70("LOCALMKTDATE_2077962980");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_70);
    UnderlyingInstrument_70.insert(UnderlyingRedemptionDate_70.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_70("STRING_2111410200");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_70);
    UnderlyingInstrument_70.insert(UnderlyingRepoCollateralSecurityType_70.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_70;
    UnderlyingRepurchaseRate_70.setString("69.130000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_70);
    UnderlyingInstrument_70.insert(UnderlyingRepurchaseRate_70.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_70(1581314577);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_70);
    UnderlyingInstrument_70.insert(UnderlyingRepurchaseTerm_70.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_70("STRING_343896915");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_70);
    UnderlyingInstrument_70.insert(UnderlyingRestructuringType_70.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_70("STRING_280882411");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_70);
    UnderlyingInstrument_70.insert(UnderlyingSecurityDesc_70.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_70("EXCHANGE_255075837");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_70);
    UnderlyingInstrument_70.insert(UnderlyingSecurityExchange_70.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_70("STRING_514716709");
    noUnderlyings_0_2.set(UnderlyingSecurityID_70);
    UnderlyingInstrument_70.insert(UnderlyingSecurityID_70.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_70("STRING_1574044373");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_70);
    UnderlyingInstrument_70.insert(UnderlyingSecurityIDSource_70.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_70("STRING_1447099224");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_70);
    UnderlyingInstrument_70.insert(UnderlyingSecuritySubType_70.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_70("STRING_1699393336");
    noUnderlyings_0_2.set(UnderlyingSecurityType_70);
    UnderlyingInstrument_70.insert(UnderlyingSecurityType_70.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_70("STRING_176791294");
    noUnderlyings_0_2.set(UnderlyingSeniority_70);
    UnderlyingInstrument_70.insert(UnderlyingSeniority_70.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_70("STRING_2144328767");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_70);
    UnderlyingInstrument_70.insert(UnderlyingSettlMethod_70.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_70(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_70);
    UnderlyingInstrument_70.insert(UnderlyingSettlementType_70.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_70;
    UnderlyingStartValue_70.setString("1623676");
    noUnderlyings_0_2.set(UnderlyingStartValue_70);
    UnderlyingInstrument_70.insert(UnderlyingStartValue_70.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_70("STRING_1509574433");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_70);
    UnderlyingInstrument_70.insert(UnderlyingStateOrProvinceOfIssue_70.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_70("EUR");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_70);
    UnderlyingInstrument_70.insert(UnderlyingStrikeCurrency_70.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_70;
    UnderlyingStrikePrice_70.setString("10433763");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_70);
    UnderlyingInstrument_70.insert(UnderlyingStrikePrice_70.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_70("STRING_217726878");
    noUnderlyings_0_2.set(UnderlyingSymbol_70);
    UnderlyingInstrument_70.insert(UnderlyingSymbol_70.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_70("STRING_486362645");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_70);
    UnderlyingInstrument_70.insert(UnderlyingSymbolSfx_70.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_70("STRING_1342156783");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_70);
    UnderlyingInstrument_70.insert(UnderlyingTimeUnit_70.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_70("STRING_453846317");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_70);
    UnderlyingInstrument_70.insert(UnderlyingUnitOfMeasure_70.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_70;
    UnderlyingUnitOfMeasureQty_70.setString("3197753");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_70);
    UnderlyingInstrument_70.insert(UnderlyingUnitOfMeasureQty_70.getString());
    all_values.push_back(UnderlyingInstrument_70);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_137;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_137("STRING_1725436315");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_137);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_137.insert(UnderlyingSecurityAltID_137.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_137("STRING_695554798");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_137);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_137.insert(UnderlyingSecurityAltIDSource_137.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_137);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_138;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_138("STRING_1400396460");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_138);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_138.insert(UnderlyingSecurityAltID_138.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_138("STRING_1962684301");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_138);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_138.insert(UnderlyingSecurityAltIDSource_138.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_138);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_139;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_139("STRING_2031246877");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_139);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_139.insert(UnderlyingSecurityAltID_139.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_139("STRING_217896215");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_139);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_139.insert(UnderlyingSecurityAltIDSource_139.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_139);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_133;
      FIX::UnderlyingStipType UnderlyingStipType_133("STRING_1995173429");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_133);
      UnderlyingStipulations_NoUnderlyingStips_133.insert(UnderlyingStipType_133.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_133("STRING_1032823128");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_133);
      UnderlyingStipulations_NoUnderlyingStips_133.insert(UnderlyingStipValue_133.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_133);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_134;
      FIX::UnderlyingStipType UnderlyingStipType_134("STRING_1326994562");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_134);
      UnderlyingStipulations_NoUnderlyingStips_134.insert(UnderlyingStipType_134.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_134("STRING_191586697");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_134);
      UnderlyingStipulations_NoUnderlyingStips_134.insert(UnderlyingStipValue_134.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_134);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_140;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_140("STRING_1582070399");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_140);
      UndlyInstrumentParties_NoUndlyInstrumentParties_140.insert(UnderlyingInstrumentPartyID_140.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_140('7');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_140);
      UndlyInstrumentParties_NoUndlyInstrumentParties_140.insert(UnderlyingInstrumentPartyIDSource_140.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_140(740266265);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_140);
      UndlyInstrumentParties_NoUndlyInstrumentParties_140.insert(UnderlyingInstrumentPartyRole_140.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_140);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_270("STRING_258213094");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_270);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270.insert(UnderlyingInstrumentPartySubID_270.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_270(917057559);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_270);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270.insert(UnderlyingInstrumentPartySubIDType_270.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_271("STRING_878531095");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_271);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271.insert(UnderlyingInstrumentPartySubID_271.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_271(999382490);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_271);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271.insert(UnderlyingInstrumentPartySubIDType_271.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_141;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_141("STRING_1079425170");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_141);
      UndlyInstrumentParties_NoUndlyInstrumentParties_141.insert(UnderlyingInstrumentPartyID_141.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_141('2');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_141);
      UndlyInstrumentParties_NoUndlyInstrumentParties_141.insert(UnderlyingInstrumentPartyIDSource_141.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_141(2065095089);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_141);
      UndlyInstrumentParties_NoUndlyInstrumentParties_141.insert(UnderlyingInstrumentPartyRole_141.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_141);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_272("STRING_1283998279");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_272);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272.insert(UnderlyingInstrumentPartySubID_272.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_272(135338319);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_272);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272.insert(UnderlyingInstrumentPartySubIDType_272.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_273("STRING_1269427252");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_273);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273.insert(UnderlyingInstrumentPartySubID_273.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_273(478671415);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_273);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273.insert(UnderlyingInstrumentPartySubIDType_273.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_274("STRING_589184637");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_274);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274.insert(UnderlyingInstrumentPartySubID_274.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_274(1589202589);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_274);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274.insert(UnderlyingInstrumentPartySubIDType_274.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_142;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_142("STRING_1315473216");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_142);
      UndlyInstrumentParties_NoUndlyInstrumentParties_142.insert(UnderlyingInstrumentPartyID_142.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_142('1');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_142);
      UndlyInstrumentParties_NoUndlyInstrumentParties_142.insert(UnderlyingInstrumentPartyIDSource_142.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_142(137273739);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_142);
      UndlyInstrumentParties_NoUndlyInstrumentParties_142.insert(UnderlyingInstrumentPartyRole_142.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_142);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_275("STRING_2129821605");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_275);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275.insert(UnderlyingInstrumentPartySubID_275.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_275(21036968);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_275);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275.insert(UnderlyingInstrumentPartySubIDType_275.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_276("STRING_786282243");
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubID_276);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276.insert(UnderlyingInstrumentPartySubID_276.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_276(1875501590);
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubIDType_276);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276.insert(UnderlyingInstrumentPartySubIDType_276.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
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
