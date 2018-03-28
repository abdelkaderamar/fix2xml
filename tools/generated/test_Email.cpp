#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/Email.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Email, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::Email msg;

  list<multiset<string>> all_values;
  multiset<string> Email_0;
  FIX::ClOrdID ClOrdID_20("STRING_1178173123");
  msg.set(ClOrdID_20);
  Email_0.insert(ClOrdID_20.getString());
  FIX::EmailThreadID EmailThreadID_0("STRING_1131283220");
  msg.set(EmailThreadID_0);
  Email_0.insert(EmailThreadID_0.getString());
  FIX::EmailType EmailType_0('0');
  msg.set(EmailType_0);
  Email_0.insert(EmailType_0.getString());
  FIX::EncodedSubject EncodedSubject_0("DATA_1116094364");
  msg.set(EncodedSubject_0);
  Email_0.insert(EncodedSubject_0.getString());
  FIX::EncodedSubjectLen EncodedSubjectLen_0(428605943);
  msg.set(EncodedSubjectLen_0);
  Email_0.insert(EncodedSubjectLen_0.getString());
  FIX::OrderID OrderID_20("STRING_559482856");
  msg.set(OrderID_20);
  Email_0.insert(OrderID_20.getString());
  FIX::OrigTime OrigTime_0(FIX::UTCTIMESTAMP(21, 53, 41, 5, 7, 2000));
  msg.set(OrigTime_0);
  Email_0.insert(OrigTime_0.getString());
  FIX::RawData RawData_0("DATA_1880002369");
  msg.set(RawData_0);
  Email_0.insert(RawData_0.getString());
  FIX::RawDataLength RawDataLength_0(1683611617);
  msg.set(RawDataLength_0);
  Email_0.insert(RawDataLength_0.getString());
  FIX::Subject Subject_0("STRING_1860285023");
  msg.set(Subject_0);
  Email_0.insert(Subject_0.getString());
  all_values.push_back(Email_0);

  // InstrmtGrp
  // Group InstrmtGrp.NoRelatedSym
  {
    FIX50SP2::Email::NoRelatedSym noRelatedSym_0_0;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_24;
    FIX::AttachmentPoint AttachmentPoint_24;
    AttachmentPoint_24.setString("7.190000");
    noRelatedSym_0_0.set(AttachmentPoint_24);
    Instrument_24.insert(AttachmentPoint_24.getString());
    FIX::CFICode CFICode_24("STRING_2093453312");
    noRelatedSym_0_0.set(CFICode_24);
    Instrument_24.insert(CFICode_24.getString());
    FIX::CPProgram CPProgram_24(99);
    noRelatedSym_0_0.set(CPProgram_24);
    Instrument_24.insert(CPProgram_24.getString());
    FIX::CPRegType CPRegType_24("STRING_786527427");
    noRelatedSym_0_0.set(CPRegType_24);
    Instrument_24.insert(CPRegType_24.getString());
    FIX::CapPrice CapPrice_24;
    CapPrice_24.setString("12083939");
    noRelatedSym_0_0.set(CapPrice_24);
    Instrument_24.insert(CapPrice_24.getString());
    FIX::ContractMultiplier ContractMultiplier_24;
    ContractMultiplier_24.setString("12593529");
    noRelatedSym_0_0.set(ContractMultiplier_24);
    Instrument_24.insert(ContractMultiplier_24.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_24(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_24);
    Instrument_24.insert(ContractMultiplierUnit_24.getString());
    FIX::ContractSettlMonth ContractSettlMonth_24("MONTHYEAR_1477535376");
    noRelatedSym_0_0.set(ContractSettlMonth_24);
    Instrument_24.insert(ContractSettlMonth_24.getString());
    FIX::CountryOfIssue CountryOfIssue_24("COUNTRY_1537345417");
    noRelatedSym_0_0.set(CountryOfIssue_24);
    Instrument_24.insert(CountryOfIssue_24.getString());
    FIX::CouponPaymentDate CouponPaymentDate_24("LOCALMKTDATE_1865501885");
    noRelatedSym_0_0.set(CouponPaymentDate_24);
    Instrument_24.insert(CouponPaymentDate_24.getString());
    FIX::CouponRate CouponRate_24;
    CouponRate_24.setString("64.950000");
    noRelatedSym_0_0.set(CouponRate_24);
    Instrument_24.insert(CouponRate_24.getString());
    FIX::CreditRating CreditRating_24("STRING_1512981165");
    noRelatedSym_0_0.set(CreditRating_24);
    Instrument_24.insert(CreditRating_24.getString());
    FIX::DatedDate DatedDate_24("LOCALMKTDATE_2027540116");
    noRelatedSym_0_0.set(DatedDate_24);
    Instrument_24.insert(DatedDate_24.getString());
    FIX::DetachmentPoint DetachmentPoint_24;
    DetachmentPoint_24.setString("90.480000");
    noRelatedSym_0_0.set(DetachmentPoint_24);
    Instrument_24.insert(DetachmentPoint_24.getString());
    FIX::EncodedIssuer EncodedIssuer_24("DATA_543670640");
    noRelatedSym_0_0.set(EncodedIssuer_24);
    Instrument_24.insert(EncodedIssuer_24.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_24(1011339688);
    noRelatedSym_0_0.set(EncodedIssuerLen_24);
    Instrument_24.insert(EncodedIssuerLen_24.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_24("DATA_1129330250");
    noRelatedSym_0_0.set(EncodedSecurityDesc_24);
    Instrument_24.insert(EncodedSecurityDesc_24.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_24(1659765004);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_24);
    Instrument_24.insert(EncodedSecurityDescLen_24.getString());
    FIX::ExerciseStyle ExerciseStyle_24(0);
    noRelatedSym_0_0.set(ExerciseStyle_24);
    Instrument_24.insert(ExerciseStyle_24.getString());
    FIX::Factor Factor_24;
    Factor_24.setString("16888131");
    noRelatedSym_0_0.set(Factor_24);
    Instrument_24.insert(Factor_24.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_24(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_24);
    Instrument_24.insert(FlexProductEligibilityIndicator_24.getString());
    FIX::FlexibleIndicator FlexibleIndicator_24(true);
    noRelatedSym_0_0.set(FlexibleIndicator_24);
    Instrument_24.insert(FlexibleIndicator_24.getString());
    FIX::FloorPrice FloorPrice_24;
    FloorPrice_24.setString("11355235");
    noRelatedSym_0_0.set(FloorPrice_24);
    Instrument_24.insert(FloorPrice_24.getString());
    FIX::FlowScheduleType FlowScheduleType_24(3);
    noRelatedSym_0_0.set(FlowScheduleType_24);
    Instrument_24.insert(FlowScheduleType_24.getString());
    FIX::InstrRegistry InstrRegistry_24("STRING_1768816745");
    noRelatedSym_0_0.set(InstrRegistry_24);
    Instrument_24.insert(InstrRegistry_24.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_24('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_24);
    Instrument_24.insert(InstrmtAssignmentMethod_24.getString());
    FIX::InterestAccrualDate InterestAccrualDate_24("LOCALMKTDATE_1523153255");
    noRelatedSym_0_0.set(InterestAccrualDate_24);
    Instrument_24.insert(InterestAccrualDate_24.getString());
    FIX::IssueDate IssueDate_24("LOCALMKTDATE_1501335466");
    noRelatedSym_0_0.set(IssueDate_24);
    Instrument_24.insert(IssueDate_24.getString());
    FIX::Issuer Issuer_24("STRING_995202111");
    noRelatedSym_0_0.set(Issuer_24);
    Instrument_24.insert(Issuer_24.getString());
    FIX::ListMethod ListMethod_24(0);
    noRelatedSym_0_0.set(ListMethod_24);
    Instrument_24.insert(ListMethod_24.getString());
    FIX::LocaleOfIssue LocaleOfIssue_24("STRING_1112179615");
    noRelatedSym_0_0.set(LocaleOfIssue_24);
    Instrument_24.insert(LocaleOfIssue_24.getString());
    FIX::MaturityDate MaturityDate_24("LOCALMKTDATE_1212582830");
    noRelatedSym_0_0.set(MaturityDate_24);
    Instrument_24.insert(MaturityDate_24.getString());
    FIX::MaturityMonthYear MaturityMonthYear_24("MONTHYEAR_1181924295");
    noRelatedSym_0_0.set(MaturityMonthYear_24);
    Instrument_24.insert(MaturityMonthYear_24.getString());
    FIX::MaturityTime MaturityTime_24("TZTIMEONLY_1668965598");
    noRelatedSym_0_0.set(MaturityTime_24);
    Instrument_24.insert(MaturityTime_24.getString());
    FIX::MinPriceIncrement MinPriceIncrement_24;
    MinPriceIncrement_24.setString("19991102");
    noRelatedSym_0_0.set(MinPriceIncrement_24);
    Instrument_24.insert(MinPriceIncrement_24.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_24;
    MinPriceIncrementAmount_24.setString("2428346");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_24);
    Instrument_24.insert(MinPriceIncrementAmount_24.getString());
    FIX::NTPositionLimit NTPositionLimit_24(780834913);
    noRelatedSym_0_0.set(NTPositionLimit_24);
    Instrument_24.insert(NTPositionLimit_24.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_24;
    NotionalPercentageOutstanding_24.setString("73.490000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_24);
    Instrument_24.insert(NotionalPercentageOutstanding_24.getString());
    FIX::OptAttribute OptAttribute_24('1');
    noRelatedSym_0_0.set(OptAttribute_24);
    Instrument_24.insert(OptAttribute_24.getString());
    FIX::OptPayoutAmount OptPayoutAmount_24;
    OptPayoutAmount_24.setString("1706966");
    noRelatedSym_0_0.set(OptPayoutAmount_24);
    Instrument_24.insert(OptPayoutAmount_24.getString());
    FIX::OptPayoutType OptPayoutType_24(2);
    noRelatedSym_0_0.set(OptPayoutType_24);
    Instrument_24.insert(OptPayoutType_24.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_24;
    OriginalNotionalPercentageOutstanding_24.setString("28.350000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_24);
    Instrument_24.insert(OriginalNotionalPercentageOutstanding_24.getString());
    FIX::Pool Pool_24("STRING_1683677848");
    noRelatedSym_0_0.set(Pool_24);
    Instrument_24.insert(Pool_24.getString());
    FIX::PositionLimit PositionLimit_24(1721142055);
    noRelatedSym_0_0.set(PositionLimit_24);
    Instrument_24.insert(PositionLimit_24.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_24("STRING_PCTPAR");
    noRelatedSym_0_0.set(PriceQuoteMethod_24);
    Instrument_24.insert(PriceQuoteMethod_24.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_24("STRING_79864840");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_24);
    Instrument_24.insert(PriceUnitOfMeasure_24.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_24;
    PriceUnitOfMeasureQty_24.setString("5849980");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_24);
    Instrument_24.insert(PriceUnitOfMeasureQty_24.getString());
    FIX::Product Product_26(13);
    noRelatedSym_0_0.set(Product_26);
    Instrument_24.insert(Product_26.getString());
    FIX::ProductComplex ProductComplex_24("STRING_1739629845");
    noRelatedSym_0_0.set(ProductComplex_24);
    Instrument_24.insert(ProductComplex_24.getString());
    FIX::PutOrCall PutOrCall_24(1);
    noRelatedSym_0_0.set(PutOrCall_24);
    Instrument_24.insert(PutOrCall_24.getString());
    FIX::RedemptionDate RedemptionDate_24("LOCALMKTDATE_114297944");
    noRelatedSym_0_0.set(RedemptionDate_24);
    Instrument_24.insert(RedemptionDate_24.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_24("STRING_503250147");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_24);
    Instrument_24.insert(RepoCollateralSecurityType_24.getString());
    FIX::RepurchaseRate RepurchaseRate_24;
    RepurchaseRate_24.setString("89.630000");
    noRelatedSym_0_0.set(RepurchaseRate_24);
    Instrument_24.insert(RepurchaseRate_24.getString());
    FIX::RepurchaseTerm RepurchaseTerm_24(1249821456);
    noRelatedSym_0_0.set(RepurchaseTerm_24);
    Instrument_24.insert(RepurchaseTerm_24.getString());
    FIX::RestructuringType RestructuringType_24("STRING_MM");
    noRelatedSym_0_0.set(RestructuringType_24);
    Instrument_24.insert(RestructuringType_24.getString());
    FIX::SecurityDesc SecurityDesc_24("STRING_1294142061");
    noRelatedSym_0_0.set(SecurityDesc_24);
    Instrument_24.insert(SecurityDesc_24.getString());
    FIX::SecurityExchange SecurityExchange_24("EXCHANGE_561411951");
    noRelatedSym_0_0.set(SecurityExchange_24);
    Instrument_24.insert(SecurityExchange_24.getString());
    FIX::SecurityGroup SecurityGroup_24("STRING_291017177");
    noRelatedSym_0_0.set(SecurityGroup_24);
    Instrument_24.insert(SecurityGroup_24.getString());
    FIX::SecurityID SecurityID_24("STRING_647993879");
    noRelatedSym_0_0.set(SecurityID_24);
    Instrument_24.insert(SecurityID_24.getString());
    FIX::SecurityIDSource SecurityIDSource_24("STRING_F");
    noRelatedSym_0_0.set(SecurityIDSource_24);
    Instrument_24.insert(SecurityIDSource_24.getString());
    FIX::SecurityStatus SecurityStatus_24("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_24);
    Instrument_24.insert(SecurityStatus_24.getString());
    FIX::SecuritySubType SecuritySubType_25("STRING_1760173494");
    noRelatedSym_0_0.set(SecuritySubType_25);
    Instrument_24.insert(SecuritySubType_25.getString());
    FIX::SecurityType SecurityType_26("STRING_TB");
    noRelatedSym_0_0.set(SecurityType_26);
    Instrument_24.insert(SecurityType_26.getString());
    FIX::Seniority Seniority_24("STRING_SB");
    noRelatedSym_0_0.set(Seniority_24);
    Instrument_24.insert(Seniority_24.getString());
    FIX::SettlMethod SettlMethod_24('C');
    noRelatedSym_0_0.set(SettlMethod_24);
    Instrument_24.insert(SettlMethod_24.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_24("STRING_473339855");
    noRelatedSym_0_0.set(SettleOnOpenFlag_24);
    Instrument_24.insert(SettleOnOpenFlag_24.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_24("STRING_804247066");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_24);
    Instrument_24.insert(StateOrProvinceOfIssue_24.getString());
    FIX::StrikeCurrency StrikeCurrency_24("JPY");
    noRelatedSym_0_0.set(StrikeCurrency_24);
    Instrument_24.insert(StrikeCurrency_24.getString());
    FIX::StrikeMultiplier StrikeMultiplier_24;
    StrikeMultiplier_24.setString("3771334");
    noRelatedSym_0_0.set(StrikeMultiplier_24);
    Instrument_24.insert(StrikeMultiplier_24.getString());
    FIX::StrikePrice StrikePrice_24;
    StrikePrice_24.setString("857033");
    noRelatedSym_0_0.set(StrikePrice_24);
    Instrument_24.insert(StrikePrice_24.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_24(5);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_24);
    Instrument_24.insert(StrikePriceBoundaryMethod_24.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_24;
    StrikePriceBoundaryPrecision_24.setString("62.410000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_24);
    Instrument_24.insert(StrikePriceBoundaryPrecision_24.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_24(1);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_24);
    Instrument_24.insert(StrikePriceDeterminationMethod_24.getString());
    FIX::StrikeValue StrikeValue_24;
    StrikeValue_24.setString("18636675");
    noRelatedSym_0_0.set(StrikeValue_24);
    Instrument_24.insert(StrikeValue_24.getString());
    FIX::Symbol Symbol_24("STRING_610954477");
    noRelatedSym_0_0.set(Symbol_24);
    Instrument_24.insert(Symbol_24.getString());
    FIX::SymbolSfx SymbolSfx_24("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_24);
    Instrument_24.insert(SymbolSfx_24.getString());
    FIX::TimeUnit TimeUnit_24("STRING_Wk");
    noRelatedSym_0_0.set(TimeUnit_24);
    Instrument_24.insert(TimeUnit_24.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_24(4);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_24);
    Instrument_24.insert(UnderlyingPriceDeterminationMethod_24.getString());
    FIX::UnitOfMeasure UnitOfMeasure_24("STRING_MMbbl");
    noRelatedSym_0_0.set(UnitOfMeasure_24);
    Instrument_24.insert(UnitOfMeasure_24.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_24;
    UnitOfMeasureQty_24.setString("1786420");
    noRelatedSym_0_0.set(UnitOfMeasureQty_24);
    Instrument_24.insert(UnitOfMeasureQty_24.getString());
    FIX::ValuationMethod ValuationMethod_24("STRING_FUTDA");
    noRelatedSym_0_0.set(ValuationMethod_24);
    Instrument_24.insert(ValuationMethod_24.getString());
    all_values.push_back(Instrument_24);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_41;
      FIX::ComplexEventCondition ComplexEventCondition_41(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventCondition_41.getString());
      FIX::ComplexEventPrice ComplexEventPrice_41;
      ComplexEventPrice_41.setString("4005587");
      noComplexEvents_0_1_0.set(ComplexEventPrice_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPrice_41.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_41(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPriceBoundaryMethod_41.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_41;
      ComplexEventPriceBoundaryPrecision_41.setString("94.520000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPriceBoundaryPrecision_41.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_41(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPriceTimeType_41.getString());
      FIX::ComplexEventType ComplexEventType_41(8);
      noComplexEvents_0_1_0.set(ComplexEventType_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventType_41.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_41;
      ComplexOptPayoutAmount_41.setString("16461033");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexOptPayoutAmount_41.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_41);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_77;
        FIX::ComplexEventEndDate ComplexEventEndDate_77(FIX::UTCTIMESTAMP(18, 26, 18, 11, 2, 2004));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_77);
        ComplexEventDates_NoComplexEventDates_77.insert(ComplexEventEndDate_77.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_77(FIX::UTCTIMESTAMP(17, 50, 17, 20, 12, 2006));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_77);
        ComplexEventDates_NoComplexEventDates_77.insert(ComplexEventStartDate_77.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_77);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_151;
          FIX::ComplexEventEndTime ComplexEventEndTime_151(FIX::UTCTIMEONLY(7, 50, 15));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_151);
          ComplexEventTimes_NoComplexEventTimes_151.insert(ComplexEventEndTime_151.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_151(FIX::UTCTIMEONLY(14, 23, 58));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_151);
          ComplexEventTimes_NoComplexEventTimes_151.insert(ComplexEventStartTime_151.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_151);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_152;
          FIX::ComplexEventEndTime ComplexEventEndTime_152(FIX::UTCTIMEONLY(3, 45, 22));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_152);
          ComplexEventTimes_NoComplexEventTimes_152.insert(ComplexEventEndTime_152.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_152(FIX::UTCTIMEONLY(5, 46, 19));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_152);
          ComplexEventTimes_NoComplexEventTimes_152.insert(ComplexEventStartTime_152.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_152);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_153;
          FIX::ComplexEventEndTime ComplexEventEndTime_153(FIX::UTCTIMEONLY(17, 38, 2));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_153);
          ComplexEventTimes_NoComplexEventTimes_153.insert(ComplexEventEndTime_153.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_153(FIX::UTCTIMEONLY(3, 58, 37));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_153);
          ComplexEventTimes_NoComplexEventTimes_153.insert(ComplexEventStartTime_153.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_153);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_78;
        FIX::ComplexEventEndDate ComplexEventEndDate_78(FIX::UTCTIMESTAMP(16, 54, 53, 0, 1, 2014));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_78);
        ComplexEventDates_NoComplexEventDates_78.insert(ComplexEventEndDate_78.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_78(FIX::UTCTIMESTAMP(23, 21, 4, 20, 12, 2007));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_78);
        ComplexEventDates_NoComplexEventDates_78.insert(ComplexEventStartDate_78.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_78);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_154;
          FIX::ComplexEventEndTime ComplexEventEndTime_154(FIX::UTCTIMEONLY(10, 23, 12));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_154);
          ComplexEventTimes_NoComplexEventTimes_154.insert(ComplexEventEndTime_154.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_154(FIX::UTCTIMEONLY(8, 50, 39));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_154);
          ComplexEventTimes_NoComplexEventTimes_154.insert(ComplexEventStartTime_154.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_154);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_155;
          FIX::ComplexEventEndTime ComplexEventEndTime_155(FIX::UTCTIMEONLY(19, 9, 35));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_155);
          ComplexEventTimes_NoComplexEventTimes_155.insert(ComplexEventEndTime_155.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_155(FIX::UTCTIMEONLY(17, 26, 44));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_155);
          ComplexEventTimes_NoComplexEventTimes_155.insert(ComplexEventStartTime_155.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_155);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_156;
          FIX::ComplexEventEndTime ComplexEventEndTime_156(FIX::UTCTIMEONLY(18, 39, 15));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_156);
          ComplexEventTimes_NoComplexEventTimes_156.insert(ComplexEventEndTime_156.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_156(FIX::UTCTIMEONLY(19, 45, 51));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_156);
          ComplexEventTimes_NoComplexEventTimes_156.insert(ComplexEventStartTime_156.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_156);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_42;
      FIX::ComplexEventCondition ComplexEventCondition_42(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventCondition_42.getString());
      FIX::ComplexEventPrice ComplexEventPrice_42;
      ComplexEventPrice_42.setString("18140175");
      noComplexEvents_0_1_1.set(ComplexEventPrice_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventPrice_42.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_42(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventPriceBoundaryMethod_42.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_42;
      ComplexEventPriceBoundaryPrecision_42.setString("30.710000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventPriceBoundaryPrecision_42.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_42(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventPriceTimeType_42.getString());
      FIX::ComplexEventType ComplexEventType_42(7);
      noComplexEvents_0_1_1.set(ComplexEventType_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventType_42.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_42;
      ComplexOptPayoutAmount_42.setString("2088524");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexOptPayoutAmount_42.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_42);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_79;
        FIX::ComplexEventEndDate ComplexEventEndDate_79(FIX::UTCTIMESTAMP(13, 51, 28, 22, 7, 2005));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_79);
        ComplexEventDates_NoComplexEventDates_79.insert(ComplexEventEndDate_79.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_79(FIX::UTCTIMESTAMP(17, 9, 22, 1, 3, 2000));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_79);
        ComplexEventDates_NoComplexEventDates_79.insert(ComplexEventStartDate_79.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_79);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_157;
          FIX::ComplexEventEndTime ComplexEventEndTime_157(FIX::UTCTIMEONLY(7, 36, 19));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_157);
          ComplexEventTimes_NoComplexEventTimes_157.insert(ComplexEventEndTime_157.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_157(FIX::UTCTIMEONLY(20, 4, 32));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_157);
          ComplexEventTimes_NoComplexEventTimes_157.insert(ComplexEventStartTime_157.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_157);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_158;
          FIX::ComplexEventEndTime ComplexEventEndTime_158(FIX::UTCTIMEONLY(3, 11, 38));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_158);
          ComplexEventTimes_NoComplexEventTimes_158.insert(ComplexEventEndTime_158.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_158(FIX::UTCTIMEONLY(5, 40, 40));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_158);
          ComplexEventTimes_NoComplexEventTimes_158.insert(ComplexEventStartTime_158.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_158);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_159;
          FIX::ComplexEventEndTime ComplexEventEndTime_159(FIX::UTCTIMEONLY(22, 24, 45));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventEndTime_159);
          ComplexEventTimes_NoComplexEventTimes_159.insert(ComplexEventEndTime_159.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_159(FIX::UTCTIMEONLY(10, 45, 59));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventStartTime_159);
          ComplexEventTimes_NoComplexEventTimes_159.insert(ComplexEventStartTime_159.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_159);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_80;
        FIX::ComplexEventEndDate ComplexEventEndDate_80(FIX::UTCTIMESTAMP(10, 21, 48, 24, 11, 2000));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_80);
        ComplexEventDates_NoComplexEventDates_80.insert(ComplexEventEndDate_80.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_80(FIX::UTCTIMESTAMP(9, 30, 59, 2, 7, 2003));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_80);
        ComplexEventDates_NoComplexEventDates_80.insert(ComplexEventStartDate_80.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_80);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_160;
          FIX::ComplexEventEndTime ComplexEventEndTime_160(FIX::UTCTIMEONLY(18, 14, 40));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_160);
          ComplexEventTimes_NoComplexEventTimes_160.insert(ComplexEventEndTime_160.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_160(FIX::UTCTIMEONLY(0, 12, 32));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_160);
          ComplexEventTimes_NoComplexEventTimes_160.insert(ComplexEventStartTime_160.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_160);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_81;
        FIX::ComplexEventEndDate ComplexEventEndDate_81(FIX::UTCTIMESTAMP(14, 56, 27, 18, 11, 2016));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_81);
        ComplexEventDates_NoComplexEventDates_81.insert(ComplexEventEndDate_81.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_81(FIX::UTCTIMESTAMP(5, 50, 19, 10, 7, 2017));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_81);
        ComplexEventDates_NoComplexEventDates_81.insert(ComplexEventStartDate_81.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_81);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_161;
          FIX::ComplexEventEndTime ComplexEventEndTime_161(FIX::UTCTIMEONLY(6, 2, 57));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_161);
          ComplexEventTimes_NoComplexEventTimes_161.insert(ComplexEventEndTime_161.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_161(FIX::UTCTIMEONLY(13, 52, 51));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_161);
          ComplexEventTimes_NoComplexEventTimes_161.insert(ComplexEventStartTime_161.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_161);

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_162;
          FIX::ComplexEventEndTime ComplexEventEndTime_162(FIX::UTCTIMEONLY(11, 6, 30));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventEndTime_162);
          ComplexEventTimes_NoComplexEventTimes_162.insert(ComplexEventEndTime_162.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_162(FIX::UTCTIMEONLY(6, 35, 22));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventStartTime_162);
          ComplexEventTimes_NoComplexEventTimes_162.insert(ComplexEventStartTime_162.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_162);

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_43;
      FIX::ComplexEventCondition ComplexEventCondition_43(2);
      noComplexEvents_0_1_2.set(ComplexEventCondition_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventCondition_43.getString());
      FIX::ComplexEventPrice ComplexEventPrice_43;
      ComplexEventPrice_43.setString("14620611");
      noComplexEvents_0_1_2.set(ComplexEventPrice_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventPrice_43.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_43(4);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventPriceBoundaryMethod_43.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_43;
      ComplexEventPriceBoundaryPrecision_43.setString("35.900000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventPriceBoundaryPrecision_43.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_43(3);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventPriceTimeType_43.getString());
      FIX::ComplexEventType ComplexEventType_43(5);
      noComplexEvents_0_1_2.set(ComplexEventType_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventType_43.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_43;
      ComplexOptPayoutAmount_43.setString("18052532");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexOptPayoutAmount_43.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_43);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_82;
        FIX::ComplexEventEndDate ComplexEventEndDate_82(FIX::UTCTIMESTAMP(16, 0, 48, 6, 10, 2014));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_82);
        ComplexEventDates_NoComplexEventDates_82.insert(ComplexEventEndDate_82.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_82(FIX::UTCTIMESTAMP(19, 22, 21, 20, 12, 2002));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_82);
        ComplexEventDates_NoComplexEventDates_82.insert(ComplexEventStartDate_82.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_82);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_163;
          FIX::ComplexEventEndTime ComplexEventEndTime_163(FIX::UTCTIMEONLY(5, 17, 24));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_163);
          ComplexEventTimes_NoComplexEventTimes_163.insert(ComplexEventEndTime_163.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_163(FIX::UTCTIMEONLY(15, 51, 18));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_163);
          ComplexEventTimes_NoComplexEventTimes_163.insert(ComplexEventStartTime_163.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_163);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_164;
          FIX::ComplexEventEndTime ComplexEventEndTime_164(FIX::UTCTIMEONLY(5, 28, 13));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_164);
          ComplexEventTimes_NoComplexEventTimes_164.insert(ComplexEventEndTime_164.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_164(FIX::UTCTIMEONLY(13, 40, 38));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_164);
          ComplexEventTimes_NoComplexEventTimes_164.insert(ComplexEventStartTime_164.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_164);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_165;
          FIX::ComplexEventEndTime ComplexEventEndTime_165(FIX::UTCTIMEONLY(20, 31, 7));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventEndTime_165);
          ComplexEventTimes_NoComplexEventTimes_165.insert(ComplexEventEndTime_165.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_165(FIX::UTCTIMEONLY(16, 27, 47));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventStartTime_165);
          ComplexEventTimes_NoComplexEventTimes_165.insert(ComplexEventStartTime_165.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_165);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_83;
        FIX::ComplexEventEndDate ComplexEventEndDate_83(FIX::UTCTIMESTAMP(17, 9, 36, 17, 4, 2005));
        noComplexEventDates_0_2_2_1.set(ComplexEventEndDate_83);
        ComplexEventDates_NoComplexEventDates_83.insert(ComplexEventEndDate_83.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_83(FIX::UTCTIMESTAMP(20, 57, 3, 19, 1, 2001));
        noComplexEventDates_0_2_2_1.set(ComplexEventStartDate_83);
        ComplexEventDates_NoComplexEventDates_83.insert(ComplexEventStartDate_83.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_83);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_166;
          FIX::ComplexEventEndTime ComplexEventEndTime_166(FIX::UTCTIMEONLY(4, 46, 33));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventEndTime_166);
          ComplexEventTimes_NoComplexEventTimes_166.insert(ComplexEventEndTime_166.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_166(FIX::UTCTIMEONLY(3, 13, 51));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventStartTime_166);
          ComplexEventTimes_NoComplexEventTimes_166.insert(ComplexEventStartTime_166.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_166);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_167;
          FIX::ComplexEventEndTime ComplexEventEndTime_167(FIX::UTCTIMEONLY(13, 22, 29));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventEndTime_167);
          ComplexEventTimes_NoComplexEventTimes_167.insert(ComplexEventEndTime_167.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_167(FIX::UTCTIMEONLY(7, 48, 12));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventStartTime_167);
          ComplexEventTimes_NoComplexEventTimes_167.insert(ComplexEventStartTime_167.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_167);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_168;
          FIX::ComplexEventEndTime ComplexEventEndTime_168(FIX::UTCTIMEONLY(5, 13, 51));
          noComplexEventTimes_0_2_1_3_2.set(ComplexEventEndTime_168);
          ComplexEventTimes_NoComplexEventTimes_168.insert(ComplexEventEndTime_168.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_168(FIX::UTCTIMEONLY(16, 30, 53));
          noComplexEventTimes_0_2_1_3_2.set(ComplexEventStartTime_168);
          ComplexEventTimes_NoComplexEventTimes_168.insert(ComplexEventStartTime_168.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_168);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_84;
        FIX::ComplexEventEndDate ComplexEventEndDate_84(FIX::UTCTIMESTAMP(15, 57, 39, 12, 9, 2015));
        noComplexEventDates_0_2_2_2.set(ComplexEventEndDate_84);
        ComplexEventDates_NoComplexEventDates_84.insert(ComplexEventEndDate_84.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_84(FIX::UTCTIMESTAMP(12, 35, 40, 21, 3, 2015));
        noComplexEventDates_0_2_2_2.set(ComplexEventStartDate_84);
        ComplexEventDates_NoComplexEventDates_84.insert(ComplexEventStartDate_84.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_84);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_169;
          FIX::ComplexEventEndTime ComplexEventEndTime_169(FIX::UTCTIMEONLY(11, 19, 13));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventEndTime_169);
          ComplexEventTimes_NoComplexEventTimes_169.insert(ComplexEventEndTime_169.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_169(FIX::UTCTIMEONLY(14, 1, 15));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventStartTime_169);
          ComplexEventTimes_NoComplexEventTimes_169.insert(ComplexEventStartTime_169.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_169);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_170;
          FIX::ComplexEventEndTime ComplexEventEndTime_170(FIX::UTCTIMEONLY(6, 20, 32));
          noComplexEventTimes_0_2_2_3_1.set(ComplexEventEndTime_170);
          ComplexEventTimes_NoComplexEventTimes_170.insert(ComplexEventEndTime_170.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_170(FIX::UTCTIMEONLY(16, 2, 30));
          noComplexEventTimes_0_2_2_3_1.set(ComplexEventStartTime_170);
          ComplexEventTimes_NoComplexEventTimes_170.insert(ComplexEventStartTime_170.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_170);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_45;
      FIX::EventDate EventDate_45("LOCALMKTDATE_373764982");
      noEvents_0_1_0.set(EventDate_45);
      EvntGrp_NoEvents_45.insert(EventDate_45.getString());
      FIX::EventPx EventPx_45;
      EventPx_45.setString("21050124");
      noEvents_0_1_0.set(EventPx_45);
      EvntGrp_NoEvents_45.insert(EventPx_45.getString());
      FIX::EventText EventText_45("STRING_970654552");
      noEvents_0_1_0.set(EventText_45);
      EvntGrp_NoEvents_45.insert(EventText_45.getString());
      FIX::EventTime EventTime_45(FIX::UTCTIMESTAMP(3, 49, 25, 19, 5, 2010));
      noEvents_0_1_0.set(EventTime_45);
      EvntGrp_NoEvents_45.insert(EventTime_45.getString());
      FIX::EventType EventType_45(9);
      noEvents_0_1_0.set(EventType_45);
      EvntGrp_NoEvents_45.insert(EventType_45.getString());
      all_values.push_back(EvntGrp_NoEvents_45);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_52;
      FIX::InstrumentPartyID InstrumentPartyID_52("STRING_787806583");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_52);
      InstrumentParties_NoInstrumentParties_52.insert(InstrumentPartyID_52.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_52('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_52);
      InstrumentParties_NoInstrumentParties_52.insert(InstrumentPartyIDSource_52.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_52(710127038);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_52);
      InstrumentParties_NoInstrumentParties_52.insert(InstrumentPartyRole_52.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_52);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110;
        FIX::InstrumentPartySubID InstrumentPartySubID_110("STRING_1298097324");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_110);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110.insert(InstrumentPartySubID_110.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_110(984485211);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_110);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110.insert(InstrumentPartySubIDType_110.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111;
        FIX::InstrumentPartySubID InstrumentPartySubID_111("STRING_332126966");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_111);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111.insert(InstrumentPartySubID_111.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_111(1996937570);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_111);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111.insert(InstrumentPartySubIDType_111.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_51;
      FIX::SecurityAltID SecurityAltID_51("STRING_87139413");
      noSecurityAltID_0_1_0.set(SecurityAltID_51);
      SecAltIDGrp_NoSecurityAltID_51.insert(SecurityAltID_51.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_51("STRING_1923337291");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_51);
      SecAltIDGrp_NoSecurityAltID_51.insert(SecurityAltIDSource_51.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_51);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_52;
      FIX::SecurityAltID SecurityAltID_52("STRING_759474914");
      noSecurityAltID_0_1_1.set(SecurityAltID_52);
      SecAltIDGrp_NoSecurityAltID_52.insert(SecurityAltID_52.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_52("STRING_1048144134");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_52);
      SecAltIDGrp_NoSecurityAltID_52.insert(SecurityAltIDSource_52.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_52);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_48;
    FIX::SecurityXML SecurityXML_49("XMLDATA_283731835");
    noRelatedSym_0_0.set(SecurityXML_49);
    FIX::SecurityXMLLen SecurityXMLLen_24(642848931);
    noRelatedSym_0_0.set(SecurityXMLLen_24);
    FIX::SecurityXMLSchema SecurityXMLSchema_24("STRING_1987491814");
    noRelatedSym_0_0.set(SecurityXMLSchema_24);
    SecurityXML_48.insert(SecurityXMLSchema_24.getString());
    all_values.push_back(SecurityXML_48);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::Email::NoRelatedSym noRelatedSym_0_1;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_25;
    FIX::AttachmentPoint AttachmentPoint_25;
    AttachmentPoint_25.setString("63.370000");
    noRelatedSym_0_1.set(AttachmentPoint_25);
    Instrument_25.insert(AttachmentPoint_25.getString());
    FIX::CFICode CFICode_25("STRING_1017152302");
    noRelatedSym_0_1.set(CFICode_25);
    Instrument_25.insert(CFICode_25.getString());
    FIX::CPProgram CPProgram_25(1);
    noRelatedSym_0_1.set(CPProgram_25);
    Instrument_25.insert(CPProgram_25.getString());
    FIX::CPRegType CPRegType_25("STRING_1583631319");
    noRelatedSym_0_1.set(CPRegType_25);
    Instrument_25.insert(CPRegType_25.getString());
    FIX::CapPrice CapPrice_25;
    CapPrice_25.setString("9746810");
    noRelatedSym_0_1.set(CapPrice_25);
    Instrument_25.insert(CapPrice_25.getString());
    FIX::ContractMultiplier ContractMultiplier_25;
    ContractMultiplier_25.setString("13427210");
    noRelatedSym_0_1.set(ContractMultiplier_25);
    Instrument_25.insert(ContractMultiplier_25.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_25(2);
    noRelatedSym_0_1.set(ContractMultiplierUnit_25);
    Instrument_25.insert(ContractMultiplierUnit_25.getString());
    FIX::ContractSettlMonth ContractSettlMonth_25("MONTHYEAR_1815633645");
    noRelatedSym_0_1.set(ContractSettlMonth_25);
    Instrument_25.insert(ContractSettlMonth_25.getString());
    FIX::CountryOfIssue CountryOfIssue_25("COUNTRY_1053463812");
    noRelatedSym_0_1.set(CountryOfIssue_25);
    Instrument_25.insert(CountryOfIssue_25.getString());
    FIX::CouponPaymentDate CouponPaymentDate_25("LOCALMKTDATE_1590619555");
    noRelatedSym_0_1.set(CouponPaymentDate_25);
    Instrument_25.insert(CouponPaymentDate_25.getString());
    FIX::CouponRate CouponRate_25;
    CouponRate_25.setString("9.400000");
    noRelatedSym_0_1.set(CouponRate_25);
    Instrument_25.insert(CouponRate_25.getString());
    FIX::CreditRating CreditRating_25("STRING_1400098348");
    noRelatedSym_0_1.set(CreditRating_25);
    Instrument_25.insert(CreditRating_25.getString());
    FIX::DatedDate DatedDate_25("LOCALMKTDATE_1611169373");
    noRelatedSym_0_1.set(DatedDate_25);
    Instrument_25.insert(DatedDate_25.getString());
    FIX::DetachmentPoint DetachmentPoint_25;
    DetachmentPoint_25.setString("9.210000");
    noRelatedSym_0_1.set(DetachmentPoint_25);
    Instrument_25.insert(DetachmentPoint_25.getString());
    FIX::EncodedIssuer EncodedIssuer_25("DATA_1382524814");
    noRelatedSym_0_1.set(EncodedIssuer_25);
    Instrument_25.insert(EncodedIssuer_25.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_25(251492308);
    noRelatedSym_0_1.set(EncodedIssuerLen_25);
    Instrument_25.insert(EncodedIssuerLen_25.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_25("DATA_580321478");
    noRelatedSym_0_1.set(EncodedSecurityDesc_25);
    Instrument_25.insert(EncodedSecurityDesc_25.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_25(2092651852);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_25);
    Instrument_25.insert(EncodedSecurityDescLen_25.getString());
    FIX::ExerciseStyle ExerciseStyle_25(0);
    noRelatedSym_0_1.set(ExerciseStyle_25);
    Instrument_25.insert(ExerciseStyle_25.getString());
    FIX::Factor Factor_25;
    Factor_25.setString("18784188");
    noRelatedSym_0_1.set(Factor_25);
    Instrument_25.insert(Factor_25.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_25(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_25);
    Instrument_25.insert(FlexProductEligibilityIndicator_25.getString());
    FIX::FlexibleIndicator FlexibleIndicator_25(false);
    noRelatedSym_0_1.set(FlexibleIndicator_25);
    Instrument_25.insert(FlexibleIndicator_25.getString());
    FIX::FloorPrice FloorPrice_25;
    FloorPrice_25.setString("17278727");
    noRelatedSym_0_1.set(FloorPrice_25);
    Instrument_25.insert(FloorPrice_25.getString());
    FIX::FlowScheduleType FlowScheduleType_25(4);
    noRelatedSym_0_1.set(FlowScheduleType_25);
    Instrument_25.insert(FlowScheduleType_25.getString());
    FIX::InstrRegistry InstrRegistry_25("STRING_700476290");
    noRelatedSym_0_1.set(InstrRegistry_25);
    Instrument_25.insert(InstrRegistry_25.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_25('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_25);
    Instrument_25.insert(InstrmtAssignmentMethod_25.getString());
    FIX::InterestAccrualDate InterestAccrualDate_25("LOCALMKTDATE_1135172973");
    noRelatedSym_0_1.set(InterestAccrualDate_25);
    Instrument_25.insert(InterestAccrualDate_25.getString());
    FIX::IssueDate IssueDate_25("LOCALMKTDATE_1748620424");
    noRelatedSym_0_1.set(IssueDate_25);
    Instrument_25.insert(IssueDate_25.getString());
    FIX::Issuer Issuer_25("STRING_1787458202");
    noRelatedSym_0_1.set(Issuer_25);
    Instrument_25.insert(Issuer_25.getString());
    FIX::ListMethod ListMethod_25(1);
    noRelatedSym_0_1.set(ListMethod_25);
    Instrument_25.insert(ListMethod_25.getString());
    FIX::LocaleOfIssue LocaleOfIssue_25("STRING_1588628591");
    noRelatedSym_0_1.set(LocaleOfIssue_25);
    Instrument_25.insert(LocaleOfIssue_25.getString());
    FIX::MaturityDate MaturityDate_25("LOCALMKTDATE_849840891");
    noRelatedSym_0_1.set(MaturityDate_25);
    Instrument_25.insert(MaturityDate_25.getString());
    FIX::MaturityMonthYear MaturityMonthYear_25("MONTHYEAR_647690559");
    noRelatedSym_0_1.set(MaturityMonthYear_25);
    Instrument_25.insert(MaturityMonthYear_25.getString());
    FIX::MaturityTime MaturityTime_25("TZTIMEONLY_1960695050");
    noRelatedSym_0_1.set(MaturityTime_25);
    Instrument_25.insert(MaturityTime_25.getString());
    FIX::MinPriceIncrement MinPriceIncrement_25;
    MinPriceIncrement_25.setString("2859885");
    noRelatedSym_0_1.set(MinPriceIncrement_25);
    Instrument_25.insert(MinPriceIncrement_25.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_25;
    MinPriceIncrementAmount_25.setString("16223716");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_25);
    Instrument_25.insert(MinPriceIncrementAmount_25.getString());
    FIX::NTPositionLimit NTPositionLimit_25(1155932413);
    noRelatedSym_0_1.set(NTPositionLimit_25);
    Instrument_25.insert(NTPositionLimit_25.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_25;
    NotionalPercentageOutstanding_25.setString("12.720000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_25);
    Instrument_25.insert(NotionalPercentageOutstanding_25.getString());
    FIX::OptAttribute OptAttribute_25('1');
    noRelatedSym_0_1.set(OptAttribute_25);
    Instrument_25.insert(OptAttribute_25.getString());
    FIX::OptPayoutAmount OptPayoutAmount_25;
    OptPayoutAmount_25.setString("619125");
    noRelatedSym_0_1.set(OptPayoutAmount_25);
    Instrument_25.insert(OptPayoutAmount_25.getString());
    FIX::OptPayoutType OptPayoutType_25(2);
    noRelatedSym_0_1.set(OptPayoutType_25);
    Instrument_25.insert(OptPayoutType_25.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_25;
    OriginalNotionalPercentageOutstanding_25.setString("89.300000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_25);
    Instrument_25.insert(OriginalNotionalPercentageOutstanding_25.getString());
    FIX::Pool Pool_25("STRING_1462010925");
    noRelatedSym_0_1.set(Pool_25);
    Instrument_25.insert(Pool_25.getString());
    FIX::PositionLimit PositionLimit_25(1996536552);
    noRelatedSym_0_1.set(PositionLimit_25);
    Instrument_25.insert(PositionLimit_25.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_25("STRING_PCTPAR");
    noRelatedSym_0_1.set(PriceQuoteMethod_25);
    Instrument_25.insert(PriceQuoteMethod_25.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_25("STRING_697052091");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_25);
    Instrument_25.insert(PriceUnitOfMeasure_25.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_25;
    PriceUnitOfMeasureQty_25.setString("1005452");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_25);
    Instrument_25.insert(PriceUnitOfMeasureQty_25.getString());
    FIX::Product Product_27(9);
    noRelatedSym_0_1.set(Product_27);
    Instrument_25.insert(Product_27.getString());
    FIX::ProductComplex ProductComplex_25("STRING_642220295");
    noRelatedSym_0_1.set(ProductComplex_25);
    Instrument_25.insert(ProductComplex_25.getString());
    FIX::PutOrCall PutOrCall_25(0);
    noRelatedSym_0_1.set(PutOrCall_25);
    Instrument_25.insert(PutOrCall_25.getString());
    FIX::RedemptionDate RedemptionDate_25("LOCALMKTDATE_928492835");
    noRelatedSym_0_1.set(RedemptionDate_25);
    Instrument_25.insert(RedemptionDate_25.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_25("STRING_1571873710");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_25);
    Instrument_25.insert(RepoCollateralSecurityType_25.getString());
    FIX::RepurchaseRate RepurchaseRate_25;
    RepurchaseRate_25.setString("20.010000");
    noRelatedSym_0_1.set(RepurchaseRate_25);
    Instrument_25.insert(RepurchaseRate_25.getString());
    FIX::RepurchaseTerm RepurchaseTerm_25(508881911);
    noRelatedSym_0_1.set(RepurchaseTerm_25);
    Instrument_25.insert(RepurchaseTerm_25.getString());
    FIX::RestructuringType RestructuringType_25("STRING_MR");
    noRelatedSym_0_1.set(RestructuringType_25);
    Instrument_25.insert(RestructuringType_25.getString());
    FIX::SecurityDesc SecurityDesc_25("STRING_1695568291");
    noRelatedSym_0_1.set(SecurityDesc_25);
    Instrument_25.insert(SecurityDesc_25.getString());
    FIX::SecurityExchange SecurityExchange_25("EXCHANGE_2012608278");
    noRelatedSym_0_1.set(SecurityExchange_25);
    Instrument_25.insert(SecurityExchange_25.getString());
    FIX::SecurityGroup SecurityGroup_25("STRING_935261094");
    noRelatedSym_0_1.set(SecurityGroup_25);
    Instrument_25.insert(SecurityGroup_25.getString());
    FIX::SecurityID SecurityID_25("STRING_1296705068");
    noRelatedSym_0_1.set(SecurityID_25);
    Instrument_25.insert(SecurityID_25.getString());
    FIX::SecurityIDSource SecurityIDSource_25("STRING_B");
    noRelatedSym_0_1.set(SecurityIDSource_25);
    Instrument_25.insert(SecurityIDSource_25.getString());
    FIX::SecurityStatus SecurityStatus_25("STRING_2");
    noRelatedSym_0_1.set(SecurityStatus_25);
    Instrument_25.insert(SecurityStatus_25.getString());
    FIX::SecuritySubType SecuritySubType_26("STRING_737850011");
    noRelatedSym_0_1.set(SecuritySubType_26);
    Instrument_25.insert(SecuritySubType_26.getString());
    FIX::SecurityType SecurityType_27("STRING_MPO");
    noRelatedSym_0_1.set(SecurityType_27);
    Instrument_25.insert(SecurityType_27.getString());
    FIX::Seniority Seniority_25("STRING_SB");
    noRelatedSym_0_1.set(Seniority_25);
    Instrument_25.insert(Seniority_25.getString());
    FIX::SettlMethod SettlMethod_25('P');
    noRelatedSym_0_1.set(SettlMethod_25);
    Instrument_25.insert(SettlMethod_25.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_25("STRING_640928638");
    noRelatedSym_0_1.set(SettleOnOpenFlag_25);
    Instrument_25.insert(SettleOnOpenFlag_25.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_25("STRING_688377903");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_25);
    Instrument_25.insert(StateOrProvinceOfIssue_25.getString());
    FIX::StrikeCurrency StrikeCurrency_25("EUR");
    noRelatedSym_0_1.set(StrikeCurrency_25);
    Instrument_25.insert(StrikeCurrency_25.getString());
    FIX::StrikeMultiplier StrikeMultiplier_25;
    StrikeMultiplier_25.setString("19788995");
    noRelatedSym_0_1.set(StrikeMultiplier_25);
    Instrument_25.insert(StrikeMultiplier_25.getString());
    FIX::StrikePrice StrikePrice_25;
    StrikePrice_25.setString("17689064");
    noRelatedSym_0_1.set(StrikePrice_25);
    Instrument_25.insert(StrikePrice_25.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_25(1);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_25);
    Instrument_25.insert(StrikePriceBoundaryMethod_25.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_25;
    StrikePriceBoundaryPrecision_25.setString("48.220000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_25);
    Instrument_25.insert(StrikePriceBoundaryPrecision_25.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_25(1);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_25);
    Instrument_25.insert(StrikePriceDeterminationMethod_25.getString());
    FIX::StrikeValue StrikeValue_25;
    StrikeValue_25.setString("18175799");
    noRelatedSym_0_1.set(StrikeValue_25);
    Instrument_25.insert(StrikeValue_25.getString());
    FIX::Symbol Symbol_25("STRING_1659411025");
    noRelatedSym_0_1.set(Symbol_25);
    Instrument_25.insert(Symbol_25.getString());
    FIX::SymbolSfx SymbolSfx_25("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_25);
    Instrument_25.insert(SymbolSfx_25.getString());
    FIX::TimeUnit TimeUnit_25("STRING_Yr");
    noRelatedSym_0_1.set(TimeUnit_25);
    Instrument_25.insert(TimeUnit_25.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_25(3);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_25);
    Instrument_25.insert(UnderlyingPriceDeterminationMethod_25.getString());
    FIX::UnitOfMeasure UnitOfMeasure_25("STRING_MWh");
    noRelatedSym_0_1.set(UnitOfMeasure_25);
    Instrument_25.insert(UnitOfMeasure_25.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_25;
    UnitOfMeasureQty_25.setString("1523966");
    noRelatedSym_0_1.set(UnitOfMeasureQty_25);
    Instrument_25.insert(UnitOfMeasureQty_25.getString());
    FIX::ValuationMethod ValuationMethod_25("STRING_CDS");
    noRelatedSym_0_1.set(ValuationMethod_25);
    Instrument_25.insert(ValuationMethod_25.getString());
    all_values.push_back(Instrument_25);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_44;
      FIX::ComplexEventCondition ComplexEventCondition_44(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventCondition_44.getString());
      FIX::ComplexEventPrice ComplexEventPrice_44;
      ComplexEventPrice_44.setString("21468598");
      noComplexEvents_1_1_0.set(ComplexEventPrice_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventPrice_44.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_44(5);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventPriceBoundaryMethod_44.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_44;
      ComplexEventPriceBoundaryPrecision_44.setString("33.280000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventPriceBoundaryPrecision_44.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_44(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventPriceTimeType_44.getString());
      FIX::ComplexEventType ComplexEventType_44(3);
      noComplexEvents_1_1_0.set(ComplexEventType_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventType_44.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_44;
      ComplexOptPayoutAmount_44.setString("19922783");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexOptPayoutAmount_44.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_44);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_85;
        FIX::ComplexEventEndDate ComplexEventEndDate_85(FIX::UTCTIMESTAMP(23, 54, 29, 4, 9, 2014));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_85);
        ComplexEventDates_NoComplexEventDates_85.insert(ComplexEventEndDate_85.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_85(FIX::UTCTIMESTAMP(3, 25, 5, 22, 12, 2005));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_85);
        ComplexEventDates_NoComplexEventDates_85.insert(ComplexEventStartDate_85.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_85);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_171;
          FIX::ComplexEventEndTime ComplexEventEndTime_171(FIX::UTCTIMEONLY(12, 5, 3));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_171);
          ComplexEventTimes_NoComplexEventTimes_171.insert(ComplexEventEndTime_171.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_171(FIX::UTCTIMEONLY(13, 29, 26));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_171);
          ComplexEventTimes_NoComplexEventTimes_171.insert(ComplexEventStartTime_171.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_171);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_86;
        FIX::ComplexEventEndDate ComplexEventEndDate_86(FIX::UTCTIMESTAMP(5, 7, 54, 12, 8, 2007));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_86);
        ComplexEventDates_NoComplexEventDates_86.insert(ComplexEventEndDate_86.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_86(FIX::UTCTIMESTAMP(6, 42, 28, 15, 4, 2001));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_86);
        ComplexEventDates_NoComplexEventDates_86.insert(ComplexEventStartDate_86.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_86);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_172;
          FIX::ComplexEventEndTime ComplexEventEndTime_172(FIX::UTCTIMEONLY(8, 49, 23));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_172);
          ComplexEventTimes_NoComplexEventTimes_172.insert(ComplexEventEndTime_172.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_172(FIX::UTCTIMEONLY(16, 20, 55));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_172);
          ComplexEventTimes_NoComplexEventTimes_172.insert(ComplexEventStartTime_172.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_172);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_45;
      FIX::ComplexEventCondition ComplexEventCondition_45(2);
      noComplexEvents_1_1_1.set(ComplexEventCondition_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventCondition_45.getString());
      FIX::ComplexEventPrice ComplexEventPrice_45;
      ComplexEventPrice_45.setString("17615665");
      noComplexEvents_1_1_1.set(ComplexEventPrice_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventPrice_45.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_45(3);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventPriceBoundaryMethod_45.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_45;
      ComplexEventPriceBoundaryPrecision_45.setString("34.290000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventPriceBoundaryPrecision_45.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_45(2);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventPriceTimeType_45.getString());
      FIX::ComplexEventType ComplexEventType_45(9);
      noComplexEvents_1_1_1.set(ComplexEventType_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventType_45.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_45;
      ComplexOptPayoutAmount_45.setString("7200623");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexOptPayoutAmount_45.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_45);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_87;
        FIX::ComplexEventEndDate ComplexEventEndDate_87(FIX::UTCTIMESTAMP(19, 33, 34, 23, 5, 2005));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_87);
        ComplexEventDates_NoComplexEventDates_87.insert(ComplexEventEndDate_87.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_87(FIX::UTCTIMESTAMP(2, 51, 50, 26, 7, 2001));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_87);
        ComplexEventDates_NoComplexEventDates_87.insert(ComplexEventStartDate_87.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_87);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_173;
          FIX::ComplexEventEndTime ComplexEventEndTime_173(FIX::UTCTIMEONLY(4, 35, 43));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_173);
          ComplexEventTimes_NoComplexEventTimes_173.insert(ComplexEventEndTime_173.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_173(FIX::UTCTIMEONLY(15, 3, 14));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_173);
          ComplexEventTimes_NoComplexEventTimes_173.insert(ComplexEventStartTime_173.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_173);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_88;
        FIX::ComplexEventEndDate ComplexEventEndDate_88(FIX::UTCTIMESTAMP(4, 6, 50, 4, 5, 2004));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_88);
        ComplexEventDates_NoComplexEventDates_88.insert(ComplexEventEndDate_88.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_88(FIX::UTCTIMESTAMP(7, 27, 11, 9, 8, 2002));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_88);
        ComplexEventDates_NoComplexEventDates_88.insert(ComplexEventStartDate_88.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_88);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_174;
          FIX::ComplexEventEndTime ComplexEventEndTime_174(FIX::UTCTIMEONLY(22, 46, 3));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_174);
          ComplexEventTimes_NoComplexEventTimes_174.insert(ComplexEventEndTime_174.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_174(FIX::UTCTIMEONLY(20, 59, 14));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_174);
          ComplexEventTimes_NoComplexEventTimes_174.insert(ComplexEventStartTime_174.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_174);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_46;
      FIX::EventDate EventDate_46("LOCALMKTDATE_756620407");
      noEvents_1_1_0.set(EventDate_46);
      EvntGrp_NoEvents_46.insert(EventDate_46.getString());
      FIX::EventPx EventPx_46;
      EventPx_46.setString("3447253");
      noEvents_1_1_0.set(EventPx_46);
      EvntGrp_NoEvents_46.insert(EventPx_46.getString());
      FIX::EventText EventText_46("STRING_426450719");
      noEvents_1_1_0.set(EventText_46);
      EvntGrp_NoEvents_46.insert(EventText_46.getString());
      FIX::EventTime EventTime_46(FIX::UTCTIMESTAMP(9, 3, 39, 10, 8, 2004));
      noEvents_1_1_0.set(EventTime_46);
      EvntGrp_NoEvents_46.insert(EventTime_46.getString());
      FIX::EventType EventType_46(17);
      noEvents_1_1_0.set(EventType_46);
      EvntGrp_NoEvents_46.insert(EventType_46.getString());
      all_values.push_back(EvntGrp_NoEvents_46);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_47;
      FIX::EventDate EventDate_47("LOCALMKTDATE_1490314211");
      noEvents_1_1_1.set(EventDate_47);
      EvntGrp_NoEvents_47.insert(EventDate_47.getString());
      FIX::EventPx EventPx_47;
      EventPx_47.setString("19712697");
      noEvents_1_1_1.set(EventPx_47);
      EvntGrp_NoEvents_47.insert(EventPx_47.getString());
      FIX::EventText EventText_47("STRING_1640937276");
      noEvents_1_1_1.set(EventText_47);
      EvntGrp_NoEvents_47.insert(EventText_47.getString());
      FIX::EventTime EventTime_47(FIX::UTCTIMESTAMP(13, 55, 45, 23, 7, 2005));
      noEvents_1_1_1.set(EventTime_47);
      EvntGrp_NoEvents_47.insert(EventTime_47.getString());
      FIX::EventType EventType_47(18);
      noEvents_1_1_1.set(EventType_47);
      EvntGrp_NoEvents_47.insert(EventType_47.getString());
      all_values.push_back(EvntGrp_NoEvents_47);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_53;
      FIX::InstrumentPartyID InstrumentPartyID_53("STRING_411775135");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_53);
      InstrumentParties_NoInstrumentParties_53.insert(InstrumentPartyID_53.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_53('3');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_53);
      InstrumentParties_NoInstrumentParties_53.insert(InstrumentPartyIDSource_53.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_53(1169623271);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_53);
      InstrumentParties_NoInstrumentParties_53.insert(InstrumentPartyRole_53.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_53);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112;
        FIX::InstrumentPartySubID InstrumentPartySubID_112("STRING_1684082032");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_112);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112.insert(InstrumentPartySubID_112.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_112(954429722);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_112);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112.insert(InstrumentPartySubIDType_112.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113;
        FIX::InstrumentPartySubID InstrumentPartySubID_113("STRING_653378902");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_113);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113.insert(InstrumentPartySubID_113.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_113(1820090648);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_113);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113.insert(InstrumentPartySubIDType_113.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_53;
      FIX::SecurityAltID SecurityAltID_53("STRING_998104264");
      noSecurityAltID_1_1_0.set(SecurityAltID_53);
      SecAltIDGrp_NoSecurityAltID_53.insert(SecurityAltID_53.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_53("STRING_99057720");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_53);
      SecAltIDGrp_NoSecurityAltID_53.insert(SecurityAltIDSource_53.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_53);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_50;
    FIX::SecurityXML SecurityXML_51("XMLDATA_1379462434");
    noRelatedSym_0_1.set(SecurityXML_51);
    FIX::SecurityXMLLen SecurityXMLLen_25(428978081);
    noRelatedSym_0_1.set(SecurityXMLLen_25);
    FIX::SecurityXMLSchema SecurityXMLSchema_25("STRING_1546442163");
    noRelatedSym_0_1.set(SecurityXMLSchema_25);
    SecurityXML_50.insert(SecurityXMLSchema_25.getString());
    all_values.push_back(SecurityXML_50);

    msg.addGroup(noRelatedSym_0_1);
  }
  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Email::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_40;
    FIX::EncodedLegIssuer EncodedLegIssuer_40("DATA_770239067");
    noLegs_0_0.set(EncodedLegIssuer_40);
    InstrumentLeg_40.insert(EncodedLegIssuer_40.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_40(1481359562);
    noLegs_0_0.set(EncodedLegIssuerLen_40);
    InstrumentLeg_40.insert(EncodedLegIssuerLen_40.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_40("DATA_476025292");
    noLegs_0_0.set(EncodedLegSecurityDesc_40);
    InstrumentLeg_40.insert(EncodedLegSecurityDesc_40.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_40(1401307003);
    noLegs_0_0.set(EncodedLegSecurityDescLen_40);
    InstrumentLeg_40.insert(EncodedLegSecurityDescLen_40.getString());
    FIX::LegCFICode LegCFICode_40("STRING_824190126");
    noLegs_0_0.set(LegCFICode_40);
    InstrumentLeg_40.insert(LegCFICode_40.getString());
    FIX::LegContractMultiplier LegContractMultiplier_40;
    LegContractMultiplier_40.setString("2998113");
    noLegs_0_0.set(LegContractMultiplier_40);
    InstrumentLeg_40.insert(LegContractMultiplier_40.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_40(894760631);
    noLegs_0_0.set(LegContractMultiplierUnit_40);
    InstrumentLeg_40.insert(LegContractMultiplierUnit_40.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_40("MONTHYEAR_1501223867");
    noLegs_0_0.set(LegContractSettlMonth_40);
    InstrumentLeg_40.insert(LegContractSettlMonth_40.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_40("COUNTRY_1126545767");
    noLegs_0_0.set(LegCountryOfIssue_40);
    InstrumentLeg_40.insert(LegCountryOfIssue_40.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_40("LOCALMKTDATE_1310681106");
    noLegs_0_0.set(LegCouponPaymentDate_40);
    InstrumentLeg_40.insert(LegCouponPaymentDate_40.getString());
    FIX::LegCouponRate LegCouponRate_40;
    LegCouponRate_40.setString("39.120000");
    noLegs_0_0.set(LegCouponRate_40);
    InstrumentLeg_40.insert(LegCouponRate_40.getString());
    FIX::LegCreditRating LegCreditRating_40("STRING_2035420750");
    noLegs_0_0.set(LegCreditRating_40);
    InstrumentLeg_40.insert(LegCreditRating_40.getString());
    FIX::LegCurrency LegCurrency_40("CAN");
    noLegs_0_0.set(LegCurrency_40);
    InstrumentLeg_40.insert(LegCurrency_40.getString());
    FIX::LegDatedDate LegDatedDate_40("LOCALMKTDATE_861324680");
    noLegs_0_0.set(LegDatedDate_40);
    InstrumentLeg_40.insert(LegDatedDate_40.getString());
    FIX::LegExerciseStyle LegExerciseStyle_40(1362575768);
    noLegs_0_0.set(LegExerciseStyle_40);
    InstrumentLeg_40.insert(LegExerciseStyle_40.getString());
    FIX::LegFactor LegFactor_40;
    LegFactor_40.setString("7579806");
    noLegs_0_0.set(LegFactor_40);
    InstrumentLeg_40.insert(LegFactor_40.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_40(1219937715);
    noLegs_0_0.set(LegFlowScheduleType_40);
    InstrumentLeg_40.insert(LegFlowScheduleType_40.getString());
    FIX::LegInstrRegistry LegInstrRegistry_40("STRING_384715391");
    noLegs_0_0.set(LegInstrRegistry_40);
    InstrumentLeg_40.insert(LegInstrRegistry_40.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_40("LOCALMKTDATE_1616690861");
    noLegs_0_0.set(LegInterestAccrualDate_40);
    InstrumentLeg_40.insert(LegInterestAccrualDate_40.getString());
    FIX::LegIssueDate LegIssueDate_40("LOCALMKTDATE_756536099");
    noLegs_0_0.set(LegIssueDate_40);
    InstrumentLeg_40.insert(LegIssueDate_40.getString());
    FIX::LegIssuer LegIssuer_40("STRING_1339145113");
    noLegs_0_0.set(LegIssuer_40);
    InstrumentLeg_40.insert(LegIssuer_40.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_40("STRING_122586115");
    noLegs_0_0.set(LegLocaleOfIssue_40);
    InstrumentLeg_40.insert(LegLocaleOfIssue_40.getString());
    FIX::LegMaturityDate LegMaturityDate_40("LOCALMKTDATE_429143100");
    noLegs_0_0.set(LegMaturityDate_40);
    InstrumentLeg_40.insert(LegMaturityDate_40.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_40("MONTHYEAR_902711594");
    noLegs_0_0.set(LegMaturityMonthYear_40);
    InstrumentLeg_40.insert(LegMaturityMonthYear_40.getString());
    FIX::LegMaturityTime LegMaturityTime_40("TZTIMEONLY_1120690379");
    noLegs_0_0.set(LegMaturityTime_40);
    InstrumentLeg_40.insert(LegMaturityTime_40.getString());
    FIX::LegOptAttribute LegOptAttribute_40('5');
    noLegs_0_0.set(LegOptAttribute_40);
    InstrumentLeg_40.insert(LegOptAttribute_40.getString());
    FIX::LegOptionRatio LegOptionRatio_40;
    LegOptionRatio_40.setString("1346903");
    noLegs_0_0.set(LegOptionRatio_40);
    InstrumentLeg_40.insert(LegOptionRatio_40.getString());
    FIX::LegPool LegPool_40("STRING_1549668460");
    noLegs_0_0.set(LegPool_40);
    InstrumentLeg_40.insert(LegPool_40.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_40("STRING_2074642983");
    noLegs_0_0.set(LegPriceUnitOfMeasure_40);
    InstrumentLeg_40.insert(LegPriceUnitOfMeasure_40.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_40;
    LegPriceUnitOfMeasureQty_40.setString("16215869");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_40);
    InstrumentLeg_40.insert(LegPriceUnitOfMeasureQty_40.getString());
    FIX::LegProduct LegProduct_40(172423879);
    noLegs_0_0.set(LegProduct_40);
    InstrumentLeg_40.insert(LegProduct_40.getString());
    FIX::LegPutOrCall LegPutOrCall_40(1408518897);
    noLegs_0_0.set(LegPutOrCall_40);
    InstrumentLeg_40.insert(LegPutOrCall_40.getString());
    FIX::LegRatioQty LegRatioQty_40;
    LegRatioQty_40.setString("20976122");
    noLegs_0_0.set(LegRatioQty_40);
    InstrumentLeg_40.insert(LegRatioQty_40.getString());
    FIX::LegRedemptionDate LegRedemptionDate_40("LOCALMKTDATE_1573730882");
    noLegs_0_0.set(LegRedemptionDate_40);
    InstrumentLeg_40.insert(LegRedemptionDate_40.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_40("STRING_85225375");
    noLegs_0_0.set(LegRepoCollateralSecurityType_40);
    InstrumentLeg_40.insert(LegRepoCollateralSecurityType_40.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_40;
    LegRepurchaseRate_40.setString("0.090000");
    noLegs_0_0.set(LegRepurchaseRate_40);
    InstrumentLeg_40.insert(LegRepurchaseRate_40.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_40(321007865);
    noLegs_0_0.set(LegRepurchaseTerm_40);
    InstrumentLeg_40.insert(LegRepurchaseTerm_40.getString());
    FIX::LegSecurityDesc LegSecurityDesc_40("STRING_1586449243");
    noLegs_0_0.set(LegSecurityDesc_40);
    InstrumentLeg_40.insert(LegSecurityDesc_40.getString());
    FIX::LegSecurityExchange LegSecurityExchange_40("EXCHANGE_1376485776");
    noLegs_0_0.set(LegSecurityExchange_40);
    InstrumentLeg_40.insert(LegSecurityExchange_40.getString());
    FIX::LegSecurityID LegSecurityID_40("STRING_1631688972");
    noLegs_0_0.set(LegSecurityID_40);
    InstrumentLeg_40.insert(LegSecurityID_40.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_40("STRING_1088359507");
    noLegs_0_0.set(LegSecurityIDSource_40);
    InstrumentLeg_40.insert(LegSecurityIDSource_40.getString());
    FIX::LegSecuritySubType LegSecuritySubType_40("STRING_1264422879");
    noLegs_0_0.set(LegSecuritySubType_40);
    InstrumentLeg_40.insert(LegSecuritySubType_40.getString());
    FIX::LegSecurityType LegSecurityType_40("STRING_1102907165");
    noLegs_0_0.set(LegSecurityType_40);
    InstrumentLeg_40.insert(LegSecurityType_40.getString());
    FIX::LegSide LegSide_40('1');
    noLegs_0_0.set(LegSide_40);
    InstrumentLeg_40.insert(LegSide_40.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_40("STRING_2125747559");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_40);
    InstrumentLeg_40.insert(LegStateOrProvinceOfIssue_40.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_40("USD");
    noLegs_0_0.set(LegStrikeCurrency_40);
    InstrumentLeg_40.insert(LegStrikeCurrency_40.getString());
    FIX::LegStrikePrice LegStrikePrice_40;
    LegStrikePrice_40.setString("11982016");
    noLegs_0_0.set(LegStrikePrice_40);
    InstrumentLeg_40.insert(LegStrikePrice_40.getString());
    FIX::LegSymbol LegSymbol_40("STRING_702714677");
    noLegs_0_0.set(LegSymbol_40);
    InstrumentLeg_40.insert(LegSymbol_40.getString());
    FIX::LegSymbolSfx LegSymbolSfx_40("STRING_1661752835");
    noLegs_0_0.set(LegSymbolSfx_40);
    InstrumentLeg_40.insert(LegSymbolSfx_40.getString());
    FIX::LegTimeUnit LegTimeUnit_40("STRING_1954737726");
    noLegs_0_0.set(LegTimeUnit_40);
    InstrumentLeg_40.insert(LegTimeUnit_40.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_40("STRING_2041859790");
    noLegs_0_0.set(LegUnitOfMeasure_40);
    InstrumentLeg_40.insert(LegUnitOfMeasure_40.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_40;
    LegUnitOfMeasureQty_40.setString("17843389");
    noLegs_0_0.set(LegUnitOfMeasureQty_40);
    InstrumentLeg_40.insert(LegUnitOfMeasureQty_40.getString());
    all_values.push_back(InstrumentLeg_40);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_73;
      FIX::LegSecurityAltID LegSecurityAltID_73("STRING_797087737");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_73);
      LegSecAltIDGrp_NoLegSecurityAltID_73.insert(LegSecurityAltID_73.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_73("STRING_757545682");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_73);
      LegSecAltIDGrp_NoLegSecurityAltID_73.insert(LegSecurityAltIDSource_73.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_73);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_74;
      FIX::LegSecurityAltID LegSecurityAltID_74("STRING_764597998");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_74);
      LegSecAltIDGrp_NoLegSecurityAltID_74.insert(LegSecurityAltID_74.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_74("STRING_931778118");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_74);
      LegSecAltIDGrp_NoLegSecurityAltID_74.insert(LegSecurityAltIDSource_74.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_74);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::Email::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_41;
    FIX::EncodedLegIssuer EncodedLegIssuer_41("DATA_159730494");
    noLegs_0_1.set(EncodedLegIssuer_41);
    InstrumentLeg_41.insert(EncodedLegIssuer_41.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_41(691757333);
    noLegs_0_1.set(EncodedLegIssuerLen_41);
    InstrumentLeg_41.insert(EncodedLegIssuerLen_41.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_41("DATA_405881465");
    noLegs_0_1.set(EncodedLegSecurityDesc_41);
    InstrumentLeg_41.insert(EncodedLegSecurityDesc_41.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_41(332154374);
    noLegs_0_1.set(EncodedLegSecurityDescLen_41);
    InstrumentLeg_41.insert(EncodedLegSecurityDescLen_41.getString());
    FIX::LegCFICode LegCFICode_41("STRING_2100276230");
    noLegs_0_1.set(LegCFICode_41);
    InstrumentLeg_41.insert(LegCFICode_41.getString());
    FIX::LegContractMultiplier LegContractMultiplier_41;
    LegContractMultiplier_41.setString("3560101");
    noLegs_0_1.set(LegContractMultiplier_41);
    InstrumentLeg_41.insert(LegContractMultiplier_41.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_41(1905885256);
    noLegs_0_1.set(LegContractMultiplierUnit_41);
    InstrumentLeg_41.insert(LegContractMultiplierUnit_41.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_41("MONTHYEAR_38017958");
    noLegs_0_1.set(LegContractSettlMonth_41);
    InstrumentLeg_41.insert(LegContractSettlMonth_41.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_41("COUNTRY_605950113");
    noLegs_0_1.set(LegCountryOfIssue_41);
    InstrumentLeg_41.insert(LegCountryOfIssue_41.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_41("LOCALMKTDATE_79409474");
    noLegs_0_1.set(LegCouponPaymentDate_41);
    InstrumentLeg_41.insert(LegCouponPaymentDate_41.getString());
    FIX::LegCouponRate LegCouponRate_41;
    LegCouponRate_41.setString("72.010000");
    noLegs_0_1.set(LegCouponRate_41);
    InstrumentLeg_41.insert(LegCouponRate_41.getString());
    FIX::LegCreditRating LegCreditRating_41("STRING_1982435889");
    noLegs_0_1.set(LegCreditRating_41);
    InstrumentLeg_41.insert(LegCreditRating_41.getString());
    FIX::LegCurrency LegCurrency_41("GBP");
    noLegs_0_1.set(LegCurrency_41);
    InstrumentLeg_41.insert(LegCurrency_41.getString());
    FIX::LegDatedDate LegDatedDate_41("LOCALMKTDATE_1099375120");
    noLegs_0_1.set(LegDatedDate_41);
    InstrumentLeg_41.insert(LegDatedDate_41.getString());
    FIX::LegExerciseStyle LegExerciseStyle_41(666521963);
    noLegs_0_1.set(LegExerciseStyle_41);
    InstrumentLeg_41.insert(LegExerciseStyle_41.getString());
    FIX::LegFactor LegFactor_41;
    LegFactor_41.setString("19999080");
    noLegs_0_1.set(LegFactor_41);
    InstrumentLeg_41.insert(LegFactor_41.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_41(1077639031);
    noLegs_0_1.set(LegFlowScheduleType_41);
    InstrumentLeg_41.insert(LegFlowScheduleType_41.getString());
    FIX::LegInstrRegistry LegInstrRegistry_41("STRING_984521248");
    noLegs_0_1.set(LegInstrRegistry_41);
    InstrumentLeg_41.insert(LegInstrRegistry_41.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_41("LOCALMKTDATE_2044970031");
    noLegs_0_1.set(LegInterestAccrualDate_41);
    InstrumentLeg_41.insert(LegInterestAccrualDate_41.getString());
    FIX::LegIssueDate LegIssueDate_41("LOCALMKTDATE_128357010");
    noLegs_0_1.set(LegIssueDate_41);
    InstrumentLeg_41.insert(LegIssueDate_41.getString());
    FIX::LegIssuer LegIssuer_41("STRING_1687235925");
    noLegs_0_1.set(LegIssuer_41);
    InstrumentLeg_41.insert(LegIssuer_41.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_41("STRING_1559239218");
    noLegs_0_1.set(LegLocaleOfIssue_41);
    InstrumentLeg_41.insert(LegLocaleOfIssue_41.getString());
    FIX::LegMaturityDate LegMaturityDate_41("LOCALMKTDATE_2083094736");
    noLegs_0_1.set(LegMaturityDate_41);
    InstrumentLeg_41.insert(LegMaturityDate_41.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_41("MONTHYEAR_1581612068");
    noLegs_0_1.set(LegMaturityMonthYear_41);
    InstrumentLeg_41.insert(LegMaturityMonthYear_41.getString());
    FIX::LegMaturityTime LegMaturityTime_41("TZTIMEONLY_1196094521");
    noLegs_0_1.set(LegMaturityTime_41);
    InstrumentLeg_41.insert(LegMaturityTime_41.getString());
    FIX::LegOptAttribute LegOptAttribute_41('1');
    noLegs_0_1.set(LegOptAttribute_41);
    InstrumentLeg_41.insert(LegOptAttribute_41.getString());
    FIX::LegOptionRatio LegOptionRatio_41;
    LegOptionRatio_41.setString("2312161");
    noLegs_0_1.set(LegOptionRatio_41);
    InstrumentLeg_41.insert(LegOptionRatio_41.getString());
    FIX::LegPool LegPool_41("STRING_1953640203");
    noLegs_0_1.set(LegPool_41);
    InstrumentLeg_41.insert(LegPool_41.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_41("STRING_936606264");
    noLegs_0_1.set(LegPriceUnitOfMeasure_41);
    InstrumentLeg_41.insert(LegPriceUnitOfMeasure_41.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_41;
    LegPriceUnitOfMeasureQty_41.setString("11629942");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_41);
    InstrumentLeg_41.insert(LegPriceUnitOfMeasureQty_41.getString());
    FIX::LegProduct LegProduct_41(2113370697);
    noLegs_0_1.set(LegProduct_41);
    InstrumentLeg_41.insert(LegProduct_41.getString());
    FIX::LegPutOrCall LegPutOrCall_41(1628363597);
    noLegs_0_1.set(LegPutOrCall_41);
    InstrumentLeg_41.insert(LegPutOrCall_41.getString());
    FIX::LegRatioQty LegRatioQty_41;
    LegRatioQty_41.setString("15688757");
    noLegs_0_1.set(LegRatioQty_41);
    InstrumentLeg_41.insert(LegRatioQty_41.getString());
    FIX::LegRedemptionDate LegRedemptionDate_41("LOCALMKTDATE_298041423");
    noLegs_0_1.set(LegRedemptionDate_41);
    InstrumentLeg_41.insert(LegRedemptionDate_41.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_41("STRING_1581156179");
    noLegs_0_1.set(LegRepoCollateralSecurityType_41);
    InstrumentLeg_41.insert(LegRepoCollateralSecurityType_41.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_41;
    LegRepurchaseRate_41.setString("58.440000");
    noLegs_0_1.set(LegRepurchaseRate_41);
    InstrumentLeg_41.insert(LegRepurchaseRate_41.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_41(56443032);
    noLegs_0_1.set(LegRepurchaseTerm_41);
    InstrumentLeg_41.insert(LegRepurchaseTerm_41.getString());
    FIX::LegSecurityDesc LegSecurityDesc_41("STRING_1619174137");
    noLegs_0_1.set(LegSecurityDesc_41);
    InstrumentLeg_41.insert(LegSecurityDesc_41.getString());
    FIX::LegSecurityExchange LegSecurityExchange_41("EXCHANGE_383352309");
    noLegs_0_1.set(LegSecurityExchange_41);
    InstrumentLeg_41.insert(LegSecurityExchange_41.getString());
    FIX::LegSecurityID LegSecurityID_41("STRING_135852506");
    noLegs_0_1.set(LegSecurityID_41);
    InstrumentLeg_41.insert(LegSecurityID_41.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_41("STRING_1096157690");
    noLegs_0_1.set(LegSecurityIDSource_41);
    InstrumentLeg_41.insert(LegSecurityIDSource_41.getString());
    FIX::LegSecuritySubType LegSecuritySubType_41("STRING_218304550");
    noLegs_0_1.set(LegSecuritySubType_41);
    InstrumentLeg_41.insert(LegSecuritySubType_41.getString());
    FIX::LegSecurityType LegSecurityType_41("STRING_1846950952");
    noLegs_0_1.set(LegSecurityType_41);
    InstrumentLeg_41.insert(LegSecurityType_41.getString());
    FIX::LegSide LegSide_41('1');
    noLegs_0_1.set(LegSide_41);
    InstrumentLeg_41.insert(LegSide_41.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_41("STRING_1317679671");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_41);
    InstrumentLeg_41.insert(LegStateOrProvinceOfIssue_41.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_41("USD");
    noLegs_0_1.set(LegStrikeCurrency_41);
    InstrumentLeg_41.insert(LegStrikeCurrency_41.getString());
    FIX::LegStrikePrice LegStrikePrice_41;
    LegStrikePrice_41.setString("2478350");
    noLegs_0_1.set(LegStrikePrice_41);
    InstrumentLeg_41.insert(LegStrikePrice_41.getString());
    FIX::LegSymbol LegSymbol_41("STRING_1350510515");
    noLegs_0_1.set(LegSymbol_41);
    InstrumentLeg_41.insert(LegSymbol_41.getString());
    FIX::LegSymbolSfx LegSymbolSfx_41("STRING_1411411544");
    noLegs_0_1.set(LegSymbolSfx_41);
    InstrumentLeg_41.insert(LegSymbolSfx_41.getString());
    FIX::LegTimeUnit LegTimeUnit_41("STRING_376192064");
    noLegs_0_1.set(LegTimeUnit_41);
    InstrumentLeg_41.insert(LegTimeUnit_41.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_41("STRING_890262793");
    noLegs_0_1.set(LegUnitOfMeasure_41);
    InstrumentLeg_41.insert(LegUnitOfMeasure_41.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_41;
    LegUnitOfMeasureQty_41.setString("8231671");
    noLegs_0_1.set(LegUnitOfMeasureQty_41);
    InstrumentLeg_41.insert(LegUnitOfMeasureQty_41.getString());
    all_values.push_back(InstrumentLeg_41);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_75;
      FIX::LegSecurityAltID LegSecurityAltID_75("STRING_324391213");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_75);
      LegSecAltIDGrp_NoLegSecurityAltID_75.insert(LegSecurityAltID_75.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_75("STRING_2019261635");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_75);
      LegSecAltIDGrp_NoLegSecurityAltID_75.insert(LegSecurityAltIDSource_75.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_75);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::Email::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_42;
    FIX::EncodedLegIssuer EncodedLegIssuer_42("DATA_483811418");
    noLegs_0_2.set(EncodedLegIssuer_42);
    InstrumentLeg_42.insert(EncodedLegIssuer_42.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_42(555607370);
    noLegs_0_2.set(EncodedLegIssuerLen_42);
    InstrumentLeg_42.insert(EncodedLegIssuerLen_42.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_42("DATA_1825418190");
    noLegs_0_2.set(EncodedLegSecurityDesc_42);
    InstrumentLeg_42.insert(EncodedLegSecurityDesc_42.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_42(1420417682);
    noLegs_0_2.set(EncodedLegSecurityDescLen_42);
    InstrumentLeg_42.insert(EncodedLegSecurityDescLen_42.getString());
    FIX::LegCFICode LegCFICode_42("STRING_1718601645");
    noLegs_0_2.set(LegCFICode_42);
    InstrumentLeg_42.insert(LegCFICode_42.getString());
    FIX::LegContractMultiplier LegContractMultiplier_42;
    LegContractMultiplier_42.setString("17913052");
    noLegs_0_2.set(LegContractMultiplier_42);
    InstrumentLeg_42.insert(LegContractMultiplier_42.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_42(901297631);
    noLegs_0_2.set(LegContractMultiplierUnit_42);
    InstrumentLeg_42.insert(LegContractMultiplierUnit_42.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_42("MONTHYEAR_1139993737");
    noLegs_0_2.set(LegContractSettlMonth_42);
    InstrumentLeg_42.insert(LegContractSettlMonth_42.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_42("COUNTRY_2089346663");
    noLegs_0_2.set(LegCountryOfIssue_42);
    InstrumentLeg_42.insert(LegCountryOfIssue_42.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_42("LOCALMKTDATE_334970163");
    noLegs_0_2.set(LegCouponPaymentDate_42);
    InstrumentLeg_42.insert(LegCouponPaymentDate_42.getString());
    FIX::LegCouponRate LegCouponRate_42;
    LegCouponRate_42.setString("59.330000");
    noLegs_0_2.set(LegCouponRate_42);
    InstrumentLeg_42.insert(LegCouponRate_42.getString());
    FIX::LegCreditRating LegCreditRating_42("STRING_2145789695");
    noLegs_0_2.set(LegCreditRating_42);
    InstrumentLeg_42.insert(LegCreditRating_42.getString());
    FIX::LegCurrency LegCurrency_42("JPY");
    noLegs_0_2.set(LegCurrency_42);
    InstrumentLeg_42.insert(LegCurrency_42.getString());
    FIX::LegDatedDate LegDatedDate_42("LOCALMKTDATE_134158553");
    noLegs_0_2.set(LegDatedDate_42);
    InstrumentLeg_42.insert(LegDatedDate_42.getString());
    FIX::LegExerciseStyle LegExerciseStyle_42(902818343);
    noLegs_0_2.set(LegExerciseStyle_42);
    InstrumentLeg_42.insert(LegExerciseStyle_42.getString());
    FIX::LegFactor LegFactor_42;
    LegFactor_42.setString("15190527");
    noLegs_0_2.set(LegFactor_42);
    InstrumentLeg_42.insert(LegFactor_42.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_42(1981109505);
    noLegs_0_2.set(LegFlowScheduleType_42);
    InstrumentLeg_42.insert(LegFlowScheduleType_42.getString());
    FIX::LegInstrRegistry LegInstrRegistry_42("STRING_416835446");
    noLegs_0_2.set(LegInstrRegistry_42);
    InstrumentLeg_42.insert(LegInstrRegistry_42.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_42("LOCALMKTDATE_689248815");
    noLegs_0_2.set(LegInterestAccrualDate_42);
    InstrumentLeg_42.insert(LegInterestAccrualDate_42.getString());
    FIX::LegIssueDate LegIssueDate_42("LOCALMKTDATE_199615124");
    noLegs_0_2.set(LegIssueDate_42);
    InstrumentLeg_42.insert(LegIssueDate_42.getString());
    FIX::LegIssuer LegIssuer_42("STRING_1930760606");
    noLegs_0_2.set(LegIssuer_42);
    InstrumentLeg_42.insert(LegIssuer_42.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_42("STRING_937083870");
    noLegs_0_2.set(LegLocaleOfIssue_42);
    InstrumentLeg_42.insert(LegLocaleOfIssue_42.getString());
    FIX::LegMaturityDate LegMaturityDate_42("LOCALMKTDATE_1550125640");
    noLegs_0_2.set(LegMaturityDate_42);
    InstrumentLeg_42.insert(LegMaturityDate_42.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_42("MONTHYEAR_1194688502");
    noLegs_0_2.set(LegMaturityMonthYear_42);
    InstrumentLeg_42.insert(LegMaturityMonthYear_42.getString());
    FIX::LegMaturityTime LegMaturityTime_42("TZTIMEONLY_1313275934");
    noLegs_0_2.set(LegMaturityTime_42);
    InstrumentLeg_42.insert(LegMaturityTime_42.getString());
    FIX::LegOptAttribute LegOptAttribute_42('2');
    noLegs_0_2.set(LegOptAttribute_42);
    InstrumentLeg_42.insert(LegOptAttribute_42.getString());
    FIX::LegOptionRatio LegOptionRatio_42;
    LegOptionRatio_42.setString("20178556");
    noLegs_0_2.set(LegOptionRatio_42);
    InstrumentLeg_42.insert(LegOptionRatio_42.getString());
    FIX::LegPool LegPool_42("STRING_1625079087");
    noLegs_0_2.set(LegPool_42);
    InstrumentLeg_42.insert(LegPool_42.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_42("STRING_617295998");
    noLegs_0_2.set(LegPriceUnitOfMeasure_42);
    InstrumentLeg_42.insert(LegPriceUnitOfMeasure_42.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_42;
    LegPriceUnitOfMeasureQty_42.setString("18896336");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_42);
    InstrumentLeg_42.insert(LegPriceUnitOfMeasureQty_42.getString());
    FIX::LegProduct LegProduct_42(2108890505);
    noLegs_0_2.set(LegProduct_42);
    InstrumentLeg_42.insert(LegProduct_42.getString());
    FIX::LegPutOrCall LegPutOrCall_42(1172903368);
    noLegs_0_2.set(LegPutOrCall_42);
    InstrumentLeg_42.insert(LegPutOrCall_42.getString());
    FIX::LegRatioQty LegRatioQty_42;
    LegRatioQty_42.setString("15675681");
    noLegs_0_2.set(LegRatioQty_42);
    InstrumentLeg_42.insert(LegRatioQty_42.getString());
    FIX::LegRedemptionDate LegRedemptionDate_42("LOCALMKTDATE_1381824540");
    noLegs_0_2.set(LegRedemptionDate_42);
    InstrumentLeg_42.insert(LegRedemptionDate_42.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_42("STRING_744021365");
    noLegs_0_2.set(LegRepoCollateralSecurityType_42);
    InstrumentLeg_42.insert(LegRepoCollateralSecurityType_42.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_42;
    LegRepurchaseRate_42.setString("97.390000");
    noLegs_0_2.set(LegRepurchaseRate_42);
    InstrumentLeg_42.insert(LegRepurchaseRate_42.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_42(135638523);
    noLegs_0_2.set(LegRepurchaseTerm_42);
    InstrumentLeg_42.insert(LegRepurchaseTerm_42.getString());
    FIX::LegSecurityDesc LegSecurityDesc_42("STRING_1884015102");
    noLegs_0_2.set(LegSecurityDesc_42);
    InstrumentLeg_42.insert(LegSecurityDesc_42.getString());
    FIX::LegSecurityExchange LegSecurityExchange_42("EXCHANGE_1153252754");
    noLegs_0_2.set(LegSecurityExchange_42);
    InstrumentLeg_42.insert(LegSecurityExchange_42.getString());
    FIX::LegSecurityID LegSecurityID_42("STRING_470608686");
    noLegs_0_2.set(LegSecurityID_42);
    InstrumentLeg_42.insert(LegSecurityID_42.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_42("STRING_653927387");
    noLegs_0_2.set(LegSecurityIDSource_42);
    InstrumentLeg_42.insert(LegSecurityIDSource_42.getString());
    FIX::LegSecuritySubType LegSecuritySubType_42("STRING_1151558802");
    noLegs_0_2.set(LegSecuritySubType_42);
    InstrumentLeg_42.insert(LegSecuritySubType_42.getString());
    FIX::LegSecurityType LegSecurityType_42("STRING_277269339");
    noLegs_0_2.set(LegSecurityType_42);
    InstrumentLeg_42.insert(LegSecurityType_42.getString());
    FIX::LegSide LegSide_42('1');
    noLegs_0_2.set(LegSide_42);
    InstrumentLeg_42.insert(LegSide_42.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_42("STRING_1285717355");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_42);
    InstrumentLeg_42.insert(LegStateOrProvinceOfIssue_42.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_42("CHF");
    noLegs_0_2.set(LegStrikeCurrency_42);
    InstrumentLeg_42.insert(LegStrikeCurrency_42.getString());
    FIX::LegStrikePrice LegStrikePrice_42;
    LegStrikePrice_42.setString("11193432");
    noLegs_0_2.set(LegStrikePrice_42);
    InstrumentLeg_42.insert(LegStrikePrice_42.getString());
    FIX::LegSymbol LegSymbol_42("STRING_1596923128");
    noLegs_0_2.set(LegSymbol_42);
    InstrumentLeg_42.insert(LegSymbol_42.getString());
    FIX::LegSymbolSfx LegSymbolSfx_42("STRING_2015493589");
    noLegs_0_2.set(LegSymbolSfx_42);
    InstrumentLeg_42.insert(LegSymbolSfx_42.getString());
    FIX::LegTimeUnit LegTimeUnit_42("STRING_1318958337");
    noLegs_0_2.set(LegTimeUnit_42);
    InstrumentLeg_42.insert(LegTimeUnit_42.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_42("STRING_1380200086");
    noLegs_0_2.set(LegUnitOfMeasure_42);
    InstrumentLeg_42.insert(LegUnitOfMeasure_42.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_42;
    LegUnitOfMeasureQty_42.setString("8050938");
    noLegs_0_2.set(LegUnitOfMeasureQty_42);
    InstrumentLeg_42.insert(LegUnitOfMeasureQty_42.getString());
    all_values.push_back(InstrumentLeg_42);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_76;
      FIX::LegSecurityAltID LegSecurityAltID_76("STRING_427404941");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_76);
      LegSecAltIDGrp_NoLegSecurityAltID_76.insert(LegSecurityAltID_76.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_76("STRING_2118369745");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_76);
      LegSecAltIDGrp_NoLegSecurityAltID_76.insert(LegSecurityAltIDSource_76.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_76);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // LinesOfTextGrp
  // Group LinesOfTextGrp.NoLinesOfText
  {
    FIX50SP2::Email::NoLinesOfText noLinesOfText_0_0;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_0;
    FIX::EncodedText EncodedText_33("DATA_297776910");
    noLinesOfText_0_0.set(EncodedText_33);
    LinesOfTextGrp_NoLinesOfText_0.insert(EncodedText_33.getString());
    FIX::EncodedTextLen EncodedTextLen_33(1595965184);
    noLinesOfText_0_0.set(EncodedTextLen_33);
    LinesOfTextGrp_NoLinesOfText_0.insert(EncodedTextLen_33.getString());
    FIX::Text Text_33("STRING_1631801112");
    noLinesOfText_0_0.set(Text_33);
    LinesOfTextGrp_NoLinesOfText_0.insert(Text_33.getString());
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_0);

    msg.addGroup(noLinesOfText_0_0);
  }
  {
    FIX50SP2::Email::NoLinesOfText noLinesOfText_0_1;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_1;
    FIX::EncodedText EncodedText_34("DATA_39926866");
    noLinesOfText_0_1.set(EncodedText_34);
    LinesOfTextGrp_NoLinesOfText_1.insert(EncodedText_34.getString());
    FIX::EncodedTextLen EncodedTextLen_34(1557372042);
    noLinesOfText_0_1.set(EncodedTextLen_34);
    LinesOfTextGrp_NoLinesOfText_1.insert(EncodedTextLen_34.getString());
    FIX::Text Text_34("STRING_657220832");
    noLinesOfText_0_1.set(Text_34);
    LinesOfTextGrp_NoLinesOfText_1.insert(Text_34.getString());
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_1);

    msg.addGroup(noLinesOfText_0_1);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::Email::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_0;
    FIX::RoutingID RoutingID_0("STRING_791712934");
    noRoutingIDs_0_0.set(RoutingID_0);
    RoutingGrp_NoRoutingIDs_0.insert(RoutingID_0.getString());
    FIX::RoutingType RoutingType_0(2);
    noRoutingIDs_0_0.set(RoutingType_0);
    RoutingGrp_NoRoutingIDs_0.insert(RoutingType_0.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_0);

    msg.addGroup(noRoutingIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Email::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_38;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_38("DATA_927351457");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingIssuer_38.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_38(1137773651);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingIssuerLen_38.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_38("DATA_1824653859");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingSecurityDesc_38.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_38(1397960144);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingSecurityDescLen_38.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_38;
    UnderlyingAdjustedQuantity_38.setString("17917010");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_38);
    UnderlyingInstrument_38.insert(UnderlyingAdjustedQuantity_38.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_38;
    UnderlyingAllocationPercent_38.setString("90.130000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_38);
    UnderlyingInstrument_38.insert(UnderlyingAllocationPercent_38.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_38;
    UnderlyingAttachmentPoint_38.setString("94.830000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_38);
    UnderlyingInstrument_38.insert(UnderlyingAttachmentPoint_38.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_38("STRING_1598893019");
    noUnderlyings_0_0.set(UnderlyingCFICode_38);
    UnderlyingInstrument_38.insert(UnderlyingCFICode_38.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_38("STRING_2114446368");
    noUnderlyings_0_0.set(UnderlyingCPProgram_38);
    UnderlyingInstrument_38.insert(UnderlyingCPProgram_38.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_38("STRING_707833517");
    noUnderlyings_0_0.set(UnderlyingCPRegType_38);
    UnderlyingInstrument_38.insert(UnderlyingCPRegType_38.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_38;
    UnderlyingCapValue_38.setString("7776541");
    noUnderlyings_0_0.set(UnderlyingCapValue_38);
    UnderlyingInstrument_38.insert(UnderlyingCapValue_38.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_38;
    UnderlyingCashAmount_38.setString("10863059");
    noUnderlyings_0_0.set(UnderlyingCashAmount_38);
    UnderlyingInstrument_38.insert(UnderlyingCashAmount_38.getString());
    FIX::UnderlyingCashType UnderlyingCashType_38("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_38);
    UnderlyingInstrument_38.insert(UnderlyingCashType_38.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_38;
    UnderlyingContractMultiplier_38.setString("6456640");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_38);
    UnderlyingInstrument_38.insert(UnderlyingContractMultiplier_38.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_38(257780623);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_38);
    UnderlyingInstrument_38.insert(UnderlyingContractMultiplierUnit_38.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_38("COUNTRY_1537473083");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_38);
    UnderlyingInstrument_38.insert(UnderlyingCountryOfIssue_38.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_38("LOCALMKTDATE_1450757897");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_38);
    UnderlyingInstrument_38.insert(UnderlyingCouponPaymentDate_38.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_38;
    UnderlyingCouponRate_38.setString("9.520000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_38);
    UnderlyingInstrument_38.insert(UnderlyingCouponRate_38.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_38("STRING_1964878024");
    noUnderlyings_0_0.set(UnderlyingCreditRating_38);
    UnderlyingInstrument_38.insert(UnderlyingCreditRating_38.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_38("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_38);
    UnderlyingInstrument_38.insert(UnderlyingCurrency_38.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_38;
    UnderlyingCurrentValue_38.setString("1151712");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_38);
    UnderlyingInstrument_38.insert(UnderlyingCurrentValue_38.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_38;
    UnderlyingDetachmentPoint_38.setString("55.310000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_38);
    UnderlyingInstrument_38.insert(UnderlyingDetachmentPoint_38.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_38;
    UnderlyingDirtyPrice_38.setString("14782035");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_38);
    UnderlyingInstrument_38.insert(UnderlyingDirtyPrice_38.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_38;
    UnderlyingEndPrice_38.setString("1550981");
    noUnderlyings_0_0.set(UnderlyingEndPrice_38);
    UnderlyingInstrument_38.insert(UnderlyingEndPrice_38.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_38;
    UnderlyingEndValue_38.setString("2800139");
    noUnderlyings_0_0.set(UnderlyingEndValue_38);
    UnderlyingInstrument_38.insert(UnderlyingEndValue_38.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_38(2135424364);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_38);
    UnderlyingInstrument_38.insert(UnderlyingExerciseStyle_38.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_38;
    UnderlyingFXRate_38.setString("17625931");
    noUnderlyings_0_0.set(UnderlyingFXRate_38);
    UnderlyingInstrument_38.insert(UnderlyingFXRate_38.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_38('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_38);
    UnderlyingInstrument_38.insert(UnderlyingFXRateCalc_38.getString());
    FIX::UnderlyingFactor UnderlyingFactor_38;
    UnderlyingFactor_38.setString("13891829");
    noUnderlyings_0_0.set(UnderlyingFactor_38);
    UnderlyingInstrument_38.insert(UnderlyingFactor_38.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_38(286510623);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_38);
    UnderlyingInstrument_38.insert(UnderlyingFlowScheduleType_38.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_38("STRING_1999078316");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_38);
    UnderlyingInstrument_38.insert(UnderlyingInstrRegistry_38.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_38("LOCALMKTDATE_379472917");
    noUnderlyings_0_0.set(UnderlyingIssueDate_38);
    UnderlyingInstrument_38.insert(UnderlyingIssueDate_38.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_38("STRING_2111164482");
    noUnderlyings_0_0.set(UnderlyingIssuer_38);
    UnderlyingInstrument_38.insert(UnderlyingIssuer_38.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_38("STRING_1249554812");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_38);
    UnderlyingInstrument_38.insert(UnderlyingLocaleOfIssue_38.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_38("LOCALMKTDATE_23690307");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_38);
    UnderlyingInstrument_38.insert(UnderlyingMaturityDate_38.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_38("MONTHYEAR_792409847");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_38);
    UnderlyingInstrument_38.insert(UnderlyingMaturityMonthYear_38.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_38("TZTIMEONLY_777300647");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_38);
    UnderlyingInstrument_38.insert(UnderlyingMaturityTime_38.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_38;
    UnderlyingNotionalPercentageOutstanding_38.setString("33.270000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_38);
    UnderlyingInstrument_38.insert(UnderlyingNotionalPercentageOutstanding_38.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_38('7');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_38);
    UnderlyingInstrument_38.insert(UnderlyingOptAttribute_38.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_38;
    UnderlyingOriginalNotionalPercentageOutstanding_38.setString("41.640000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_38);
    UnderlyingInstrument_38.insert(UnderlyingOriginalNotionalPercentageOutstanding_38.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_38("STRING_252753824");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_38);
    UnderlyingInstrument_38.insert(UnderlyingPriceUnitOfMeasure_38.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_38;
    UnderlyingPriceUnitOfMeasureQty_38.setString("18456785");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_38);
    UnderlyingInstrument_38.insert(UnderlyingPriceUnitOfMeasureQty_38.getString());
    FIX::UnderlyingProduct UnderlyingProduct_38(1642407161);
    noUnderlyings_0_0.set(UnderlyingProduct_38);
    UnderlyingInstrument_38.insert(UnderlyingProduct_38.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_38(898417910);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_38);
    UnderlyingInstrument_38.insert(UnderlyingPutOrCall_38.getString());
    FIX::UnderlyingPx UnderlyingPx_38;
    UnderlyingPx_38.setString("21034591");
    noUnderlyings_0_0.set(UnderlyingPx_38);
    UnderlyingInstrument_38.insert(UnderlyingPx_38.getString());
    FIX::UnderlyingQty UnderlyingQty_38;
    UnderlyingQty_38.setString("10323965");
    noUnderlyings_0_0.set(UnderlyingQty_38);
    UnderlyingInstrument_38.insert(UnderlyingQty_38.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_38("LOCALMKTDATE_201692159");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_38);
    UnderlyingInstrument_38.insert(UnderlyingRedemptionDate_38.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_38("STRING_935356428");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_38);
    UnderlyingInstrument_38.insert(UnderlyingRepoCollateralSecurityType_38.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_38;
    UnderlyingRepurchaseRate_38.setString("9.730000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_38);
    UnderlyingInstrument_38.insert(UnderlyingRepurchaseRate_38.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_38(1623336153);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_38);
    UnderlyingInstrument_38.insert(UnderlyingRepurchaseTerm_38.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_38("STRING_781758847");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_38);
    UnderlyingInstrument_38.insert(UnderlyingRestructuringType_38.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_38("STRING_964962260");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityDesc_38.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_38("EXCHANGE_345978036");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityExchange_38.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_38("STRING_112478731");
    noUnderlyings_0_0.set(UnderlyingSecurityID_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityID_38.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_38("STRING_1120060413");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityIDSource_38.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_38("STRING_625991961");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_38);
    UnderlyingInstrument_38.insert(UnderlyingSecuritySubType_38.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_38("STRING_100419447");
    noUnderlyings_0_0.set(UnderlyingSecurityType_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityType_38.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_38("STRING_735169931");
    noUnderlyings_0_0.set(UnderlyingSeniority_38);
    UnderlyingInstrument_38.insert(UnderlyingSeniority_38.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_38("STRING_1697718820");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_38);
    UnderlyingInstrument_38.insert(UnderlyingSettlMethod_38.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_38(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_38);
    UnderlyingInstrument_38.insert(UnderlyingSettlementType_38.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_38;
    UnderlyingStartValue_38.setString("10216805");
    noUnderlyings_0_0.set(UnderlyingStartValue_38);
    UnderlyingInstrument_38.insert(UnderlyingStartValue_38.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_38("STRING_1549313489");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_38);
    UnderlyingInstrument_38.insert(UnderlyingStateOrProvinceOfIssue_38.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_38("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_38);
    UnderlyingInstrument_38.insert(UnderlyingStrikeCurrency_38.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_38;
    UnderlyingStrikePrice_38.setString("6513846");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_38);
    UnderlyingInstrument_38.insert(UnderlyingStrikePrice_38.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_38("STRING_1892765585");
    noUnderlyings_0_0.set(UnderlyingSymbol_38);
    UnderlyingInstrument_38.insert(UnderlyingSymbol_38.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_38("STRING_1777771235");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_38);
    UnderlyingInstrument_38.insert(UnderlyingSymbolSfx_38.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_38("STRING_1428685301");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_38);
    UnderlyingInstrument_38.insert(UnderlyingTimeUnit_38.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_38("STRING_1367865264");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_38);
    UnderlyingInstrument_38.insert(UnderlyingUnitOfMeasure_38.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_38;
    UnderlyingUnitOfMeasureQty_38.setString("3896601");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_38);
    UnderlyingInstrument_38.insert(UnderlyingUnitOfMeasureQty_38.getString());
    all_values.push_back(UnderlyingInstrument_38);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_79;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_79("STRING_1620619088");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_79);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_79.insert(UnderlyingSecurityAltID_79.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_79("STRING_87855008");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_79);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_79.insert(UnderlyingSecurityAltIDSource_79.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_79);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_80;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_80("STRING_261259331");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_80);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_80.insert(UnderlyingSecurityAltID_80.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_80("STRING_371553350");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_80);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_80.insert(UnderlyingSecurityAltIDSource_80.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_80);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_69;
      FIX::UnderlyingStipType UnderlyingStipType_69("STRING_1293655928");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_69);
      UnderlyingStipulations_NoUnderlyingStips_69.insert(UnderlyingStipType_69.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_69("STRING_573245509");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_69);
      UnderlyingStipulations_NoUnderlyingStips_69.insert(UnderlyingStipValue_69.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_69);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_70;
      FIX::UnderlyingStipType UnderlyingStipType_70("STRING_979186912");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_70);
      UnderlyingStipulations_NoUnderlyingStips_70.insert(UnderlyingStipType_70.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_70("STRING_2143446901");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_70);
      UnderlyingStipulations_NoUnderlyingStips_70.insert(UnderlyingStipValue_70.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_70);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_81;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_81("STRING_1760945760");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_81);
      UndlyInstrumentParties_NoUndlyInstrumentParties_81.insert(UnderlyingInstrumentPartyID_81.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_81('9');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_81);
      UndlyInstrumentParties_NoUndlyInstrumentParties_81.insert(UnderlyingInstrumentPartyIDSource_81.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_81(395076051);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_81);
      UndlyInstrumentParties_NoUndlyInstrumentParties_81.insert(UnderlyingInstrumentPartyRole_81.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_81);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_160("STRING_2080985926");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_160);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160.insert(UnderlyingInstrumentPartySubID_160.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_160(1021068012);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_160);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160.insert(UnderlyingInstrumentPartySubIDType_160.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_161("STRING_1973843938");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_161);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161.insert(UnderlyingInstrumentPartySubID_161.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_161(668672210);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_161);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161.insert(UnderlyingInstrumentPartySubIDType_161.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_82;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_82("STRING_571303185");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_82);
      UndlyInstrumentParties_NoUndlyInstrumentParties_82.insert(UnderlyingInstrumentPartyID_82.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_82('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_82);
      UndlyInstrumentParties_NoUndlyInstrumentParties_82.insert(UnderlyingInstrumentPartyIDSource_82.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_82(1690352764);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_82);
      UndlyInstrumentParties_NoUndlyInstrumentParties_82.insert(UnderlyingInstrumentPartyRole_82.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_82);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_162("STRING_1037554280");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_162);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162.insert(UnderlyingInstrumentPartySubID_162.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_162(528230505);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_162);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162.insert(UnderlyingInstrumentPartySubIDType_162.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_163("STRING_624517679");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_163);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163.insert(UnderlyingInstrumentPartySubID_163.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_163(782836217);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_163);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163.insert(UnderlyingInstrumentPartySubIDType_163.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_164("STRING_158518092");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_164);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164.insert(UnderlyingInstrumentPartySubID_164.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_164(2053202980);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_164);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164.insert(UnderlyingInstrumentPartySubIDType_164.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_83;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_83("STRING_3217833");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_83);
      UndlyInstrumentParties_NoUndlyInstrumentParties_83.insert(UnderlyingInstrumentPartyID_83.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_83('5');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_83);
      UndlyInstrumentParties_NoUndlyInstrumentParties_83.insert(UnderlyingInstrumentPartyIDSource_83.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_83(672055150);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_83);
      UndlyInstrumentParties_NoUndlyInstrumentParties_83.insert(UnderlyingInstrumentPartyRole_83.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_83);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_165("STRING_636033255");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_165);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165.insert(UnderlyingInstrumentPartySubID_165.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_165(933314481);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_165);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165.insert(UnderlyingInstrumentPartySubIDType_165.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_166("STRING_1995390271");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_166);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166.insert(UnderlyingInstrumentPartySubID_166.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_166(679863739);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_166);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166.insert(UnderlyingInstrumentPartySubIDType_166.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_167("STRING_79486761");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_167);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167.insert(UnderlyingInstrumentPartySubID_167.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_167(421152132);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_167);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167.insert(UnderlyingInstrumentPartySubIDType_167.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
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
