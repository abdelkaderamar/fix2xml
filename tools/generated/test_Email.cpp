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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::Email msg;

  list<multiset<string>> all_values;
  multiset<string> Email_0;
  FIX::ClOrdID ClOrdID_19("STRING_397001277");
  msg.set(ClOrdID_19);
  Email_0.insert(ClOrdID_19.getString());
  FIX::EmailThreadID EmailThreadID_0("STRING_1478803978");
  msg.set(EmailThreadID_0);
  Email_0.insert(EmailThreadID_0.getString());
  FIX::EmailType EmailType_0('1');
  msg.set(EmailType_0);
  Email_0.insert(EmailType_0.getString());
  FIX::EncodedSubject EncodedSubject_0("DATA_1351289655");
  msg.set(EncodedSubject_0);
  Email_0.insert(EncodedSubject_0.getString());
  FIX::EncodedSubjectLen EncodedSubjectLen_0(896477430);
  msg.set(EncodedSubjectLen_0);
  Email_0.insert(EncodedSubjectLen_0.getString());
  FIX::OrderID OrderID_17("STRING_1040341389");
  msg.set(OrderID_17);
  Email_0.insert(OrderID_17.getString());
  FIX::OrigTime OrigTime_0(FIX::UTCTIMESTAMP(18, 45, 19, 2, 1, 2006));
  msg.set(OrigTime_0);
  Email_0.insert(OrigTime_0.getString());
  FIX::RawData RawData_0("DATA_229716305");
  msg.set(RawData_0);
  Email_0.insert(RawData_0.getString());
  FIX::RawDataLength RawDataLength_0(1933940552);
  msg.set(RawDataLength_0);
  Email_0.insert(RawDataLength_0.getString());
  FIX::Subject Subject_0("STRING_1862525496");
  msg.set(Subject_0);
  Email_0.insert(Subject_0.getString());
  all_values.push_back(Email_0);

  // InstrmtGrp
  // Group InstrmtGrp.NoRelatedSym
  {
    FIX50SP2::Email::NoRelatedSym noRelatedSym_0_0;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_23;
    FIX::AttachmentPoint AttachmentPoint_23;
    AttachmentPoint_23.setString("31.160000");
    noRelatedSym_0_0.set(AttachmentPoint_23);
    Instrument_23.insert(AttachmentPoint_23.getString());
    FIX::CFICode CFICode_23("STRING_513947970");
    noRelatedSym_0_0.set(CFICode_23);
    Instrument_23.insert(CFICode_23.getString());
    FIX::CPProgram CPProgram_23(99);
    noRelatedSym_0_0.set(CPProgram_23);
    Instrument_23.insert(CPProgram_23.getString());
    FIX::CPRegType CPRegType_23("STRING_1999878586");
    noRelatedSym_0_0.set(CPRegType_23);
    Instrument_23.insert(CPRegType_23.getString());
    FIX::CapPrice CapPrice_23;
    CapPrice_23.setString("21255709");
    noRelatedSym_0_0.set(CapPrice_23);
    Instrument_23.insert(CapPrice_23.getString());
    FIX::ContractMultiplier ContractMultiplier_23;
    ContractMultiplier_23.setString("3527728");
    noRelatedSym_0_0.set(ContractMultiplier_23);
    Instrument_23.insert(ContractMultiplier_23.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_23(2);
    noRelatedSym_0_0.set(ContractMultiplierUnit_23);
    Instrument_23.insert(ContractMultiplierUnit_23.getString());
    FIX::ContractSettlMonth ContractSettlMonth_23("MONTHYEAR_1427155149");
    noRelatedSym_0_0.set(ContractSettlMonth_23);
    Instrument_23.insert(ContractSettlMonth_23.getString());
    FIX::CountryOfIssue CountryOfIssue_23("COUNTRY_1885706887");
    noRelatedSym_0_0.set(CountryOfIssue_23);
    Instrument_23.insert(CountryOfIssue_23.getString());
    FIX::CouponPaymentDate CouponPaymentDate_23("LOCALMKTDATE_1101876475");
    noRelatedSym_0_0.set(CouponPaymentDate_23);
    Instrument_23.insert(CouponPaymentDate_23.getString());
    FIX::CouponRate CouponRate_23;
    CouponRate_23.setString("27.500000");
    noRelatedSym_0_0.set(CouponRate_23);
    Instrument_23.insert(CouponRate_23.getString());
    FIX::CreditRating CreditRating_23("STRING_1753498817");
    noRelatedSym_0_0.set(CreditRating_23);
    Instrument_23.insert(CreditRating_23.getString());
    FIX::DatedDate DatedDate_23("LOCALMKTDATE_1267712822");
    noRelatedSym_0_0.set(DatedDate_23);
    Instrument_23.insert(DatedDate_23.getString());
    FIX::DetachmentPoint DetachmentPoint_23;
    DetachmentPoint_23.setString("32.810000");
    noRelatedSym_0_0.set(DetachmentPoint_23);
    Instrument_23.insert(DetachmentPoint_23.getString());
    FIX::EncodedIssuer EncodedIssuer_23("DATA_3016447");
    noRelatedSym_0_0.set(EncodedIssuer_23);
    Instrument_23.insert(EncodedIssuer_23.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_23(599033152);
    noRelatedSym_0_0.set(EncodedIssuerLen_23);
    Instrument_23.insert(EncodedIssuerLen_23.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_23("DATA_1967113768");
    noRelatedSym_0_0.set(EncodedSecurityDesc_23);
    Instrument_23.insert(EncodedSecurityDesc_23.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_23(1354306102);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_23);
    Instrument_23.insert(EncodedSecurityDescLen_23.getString());
    FIX::ExerciseStyle ExerciseStyle_23(2);
    noRelatedSym_0_0.set(ExerciseStyle_23);
    Instrument_23.insert(ExerciseStyle_23.getString());
    FIX::Factor Factor_23;
    Factor_23.setString("8599715");
    noRelatedSym_0_0.set(Factor_23);
    Instrument_23.insert(Factor_23.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_23(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_23);
    Instrument_23.insert(FlexProductEligibilityIndicator_23.getString());
    FIX::FlexibleIndicator FlexibleIndicator_23(false);
    noRelatedSym_0_0.set(FlexibleIndicator_23);
    Instrument_23.insert(FlexibleIndicator_23.getString());
    FIX::FloorPrice FloorPrice_23;
    FloorPrice_23.setString("278860");
    noRelatedSym_0_0.set(FloorPrice_23);
    Instrument_23.insert(FloorPrice_23.getString());
    FIX::FlowScheduleType FlowScheduleType_23(0);
    noRelatedSym_0_0.set(FlowScheduleType_23);
    Instrument_23.insert(FlowScheduleType_23.getString());
    FIX::InstrRegistry InstrRegistry_23("STRING_221207611");
    noRelatedSym_0_0.set(InstrRegistry_23);
    Instrument_23.insert(InstrRegistry_23.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_23('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_23);
    Instrument_23.insert(InstrmtAssignmentMethod_23.getString());
    FIX::InterestAccrualDate InterestAccrualDate_23("LOCALMKTDATE_11460769");
    noRelatedSym_0_0.set(InterestAccrualDate_23);
    Instrument_23.insert(InterestAccrualDate_23.getString());
    FIX::IssueDate IssueDate_23("LOCALMKTDATE_450923917");
    noRelatedSym_0_0.set(IssueDate_23);
    Instrument_23.insert(IssueDate_23.getString());
    FIX::Issuer Issuer_23("STRING_1680622964");
    noRelatedSym_0_0.set(Issuer_23);
    Instrument_23.insert(Issuer_23.getString());
    FIX::ListMethod ListMethod_23(1);
    noRelatedSym_0_0.set(ListMethod_23);
    Instrument_23.insert(ListMethod_23.getString());
    FIX::LocaleOfIssue LocaleOfIssue_23("STRING_252271324");
    noRelatedSym_0_0.set(LocaleOfIssue_23);
    Instrument_23.insert(LocaleOfIssue_23.getString());
    FIX::MaturityDate MaturityDate_23("LOCALMKTDATE_2075926080");
    noRelatedSym_0_0.set(MaturityDate_23);
    Instrument_23.insert(MaturityDate_23.getString());
    FIX::MaturityMonthYear MaturityMonthYear_23("MONTHYEAR_240450588");
    noRelatedSym_0_0.set(MaturityMonthYear_23);
    Instrument_23.insert(MaturityMonthYear_23.getString());
    FIX::MaturityTime MaturityTime_23("TZTIMEONLY_584741946");
    noRelatedSym_0_0.set(MaturityTime_23);
    Instrument_23.insert(MaturityTime_23.getString());
    FIX::MinPriceIncrement MinPriceIncrement_23;
    MinPriceIncrement_23.setString("19283210");
    noRelatedSym_0_0.set(MinPriceIncrement_23);
    Instrument_23.insert(MinPriceIncrement_23.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_23;
    MinPriceIncrementAmount_23.setString("2185378");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_23);
    Instrument_23.insert(MinPriceIncrementAmount_23.getString());
    FIX::NTPositionLimit NTPositionLimit_23(937514765);
    noRelatedSym_0_0.set(NTPositionLimit_23);
    Instrument_23.insert(NTPositionLimit_23.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_23;
    NotionalPercentageOutstanding_23.setString("15.780000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_23);
    Instrument_23.insert(NotionalPercentageOutstanding_23.getString());
    FIX::OptAttribute OptAttribute_23('1');
    noRelatedSym_0_0.set(OptAttribute_23);
    Instrument_23.insert(OptAttribute_23.getString());
    FIX::OptPayoutAmount OptPayoutAmount_23;
    OptPayoutAmount_23.setString("6757380");
    noRelatedSym_0_0.set(OptPayoutAmount_23);
    Instrument_23.insert(OptPayoutAmount_23.getString());
    FIX::OptPayoutType OptPayoutType_23(2);
    noRelatedSym_0_0.set(OptPayoutType_23);
    Instrument_23.insert(OptPayoutType_23.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_23;
    OriginalNotionalPercentageOutstanding_23.setString("21.040000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_23);
    Instrument_23.insert(OriginalNotionalPercentageOutstanding_23.getString());
    FIX::Pool Pool_23("STRING_281753174");
    noRelatedSym_0_0.set(Pool_23);
    Instrument_23.insert(Pool_23.getString());
    FIX::PositionLimit PositionLimit_23(916277227);
    noRelatedSym_0_0.set(PositionLimit_23);
    Instrument_23.insert(PositionLimit_23.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_23("STRING_INX");
    noRelatedSym_0_0.set(PriceQuoteMethod_23);
    Instrument_23.insert(PriceQuoteMethod_23.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_23("STRING_284769621");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_23);
    Instrument_23.insert(PriceUnitOfMeasure_23.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_23;
    PriceUnitOfMeasureQty_23.setString("15153103");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_23);
    Instrument_23.insert(PriceUnitOfMeasureQty_23.getString());
    FIX::Product Product_25(2);
    noRelatedSym_0_0.set(Product_25);
    Instrument_23.insert(Product_25.getString());
    FIX::ProductComplex ProductComplex_23("STRING_1639075723");
    noRelatedSym_0_0.set(ProductComplex_23);
    Instrument_23.insert(ProductComplex_23.getString());
    FIX::PutOrCall PutOrCall_23(1);
    noRelatedSym_0_0.set(PutOrCall_23);
    Instrument_23.insert(PutOrCall_23.getString());
    FIX::RedemptionDate RedemptionDate_23("LOCALMKTDATE_1292143368");
    noRelatedSym_0_0.set(RedemptionDate_23);
    Instrument_23.insert(RedemptionDate_23.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_23("STRING_1535538249");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_23);
    Instrument_23.insert(RepoCollateralSecurityType_23.getString());
    FIX::RepurchaseRate RepurchaseRate_23;
    RepurchaseRate_23.setString("14.040000");
    noRelatedSym_0_0.set(RepurchaseRate_23);
    Instrument_23.insert(RepurchaseRate_23.getString());
    FIX::RepurchaseTerm RepurchaseTerm_23(1320029455);
    noRelatedSym_0_0.set(RepurchaseTerm_23);
    Instrument_23.insert(RepurchaseTerm_23.getString());
    FIX::RestructuringType RestructuringType_23("STRING_MM");
    noRelatedSym_0_0.set(RestructuringType_23);
    Instrument_23.insert(RestructuringType_23.getString());
    FIX::SecurityDesc SecurityDesc_23("STRING_1557559015");
    noRelatedSym_0_0.set(SecurityDesc_23);
    Instrument_23.insert(SecurityDesc_23.getString());
    FIX::SecurityExchange SecurityExchange_23("EXCHANGE_1066711867");
    noRelatedSym_0_0.set(SecurityExchange_23);
    Instrument_23.insert(SecurityExchange_23.getString());
    FIX::SecurityGroup SecurityGroup_23("STRING_1235264615");
    noRelatedSym_0_0.set(SecurityGroup_23);
    Instrument_23.insert(SecurityGroup_23.getString());
    FIX::SecurityID SecurityID_23("STRING_2008482932");
    noRelatedSym_0_0.set(SecurityID_23);
    Instrument_23.insert(SecurityID_23.getString());
    FIX::SecurityIDSource SecurityIDSource_23("STRING_K");
    noRelatedSym_0_0.set(SecurityIDSource_23);
    Instrument_23.insert(SecurityIDSource_23.getString());
    FIX::SecurityStatus SecurityStatus_23("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_23);
    Instrument_23.insert(SecurityStatus_23.getString());
    FIX::SecuritySubType SecuritySubType_24("STRING_113270608");
    noRelatedSym_0_0.set(SecuritySubType_24);
    Instrument_23.insert(SecuritySubType_24.getString());
    FIX::SecurityType SecurityType_25("STRING_CL");
    noRelatedSym_0_0.set(SecurityType_25);
    Instrument_23.insert(SecurityType_25.getString());
    FIX::Seniority Seniority_23("STRING_SB");
    noRelatedSym_0_0.set(Seniority_23);
    Instrument_23.insert(Seniority_23.getString());
    FIX::SettlMethod SettlMethod_23('C');
    noRelatedSym_0_0.set(SettlMethod_23);
    Instrument_23.insert(SettlMethod_23.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_23("STRING_309130987");
    noRelatedSym_0_0.set(SettleOnOpenFlag_23);
    Instrument_23.insert(SettleOnOpenFlag_23.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_23("STRING_1420755673");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_23);
    Instrument_23.insert(StateOrProvinceOfIssue_23.getString());
    FIX::StrikeCurrency StrikeCurrency_23("EUR");
    noRelatedSym_0_0.set(StrikeCurrency_23);
    Instrument_23.insert(StrikeCurrency_23.getString());
    FIX::StrikeMultiplier StrikeMultiplier_23;
    StrikeMultiplier_23.setString("9189650");
    noRelatedSym_0_0.set(StrikeMultiplier_23);
    Instrument_23.insert(StrikeMultiplier_23.getString());
    FIX::StrikePrice StrikePrice_23;
    StrikePrice_23.setString("1637816");
    noRelatedSym_0_0.set(StrikePrice_23);
    Instrument_23.insert(StrikePrice_23.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_23(1);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_23);
    Instrument_23.insert(StrikePriceBoundaryMethod_23.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_23;
    StrikePriceBoundaryPrecision_23.setString("34.830000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_23);
    Instrument_23.insert(StrikePriceBoundaryPrecision_23.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_23(3);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_23);
    Instrument_23.insert(StrikePriceDeterminationMethod_23.getString());
    FIX::StrikeValue StrikeValue_23;
    StrikeValue_23.setString("15681441");
    noRelatedSym_0_0.set(StrikeValue_23);
    Instrument_23.insert(StrikeValue_23.getString());
    FIX::Symbol Symbol_23("STRING_737845220");
    noRelatedSym_0_0.set(Symbol_23);
    Instrument_23.insert(Symbol_23.getString());
    FIX::SymbolSfx SymbolSfx_23("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_23);
    Instrument_23.insert(SymbolSfx_23.getString());
    FIX::TimeUnit TimeUnit_23("STRING_Mo");
    noRelatedSym_0_0.set(TimeUnit_23);
    Instrument_23.insert(TimeUnit_23.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_23(3);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_23);
    Instrument_23.insert(UnderlyingPriceDeterminationMethod_23.getString());
    FIX::UnitOfMeasure UnitOfMeasure_23("STRING_MMbbl");
    noRelatedSym_0_0.set(UnitOfMeasure_23);
    Instrument_23.insert(UnitOfMeasure_23.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_23;
    UnitOfMeasureQty_23.setString("17993082");
    noRelatedSym_0_0.set(UnitOfMeasureQty_23);
    Instrument_23.insert(UnitOfMeasureQty_23.getString());
    FIX::ValuationMethod ValuationMethod_23("STRING_CDS");
    noRelatedSym_0_0.set(ValuationMethod_23);
    Instrument_23.insert(ValuationMethod_23.getString());
    all_values.push_back(Instrument_23);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_48;
      FIX::ComplexEventCondition ComplexEventCondition_48(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_48);
      ComplexEvents_NoComplexEvents_48.insert(ComplexEventCondition_48.getString());
      FIX::ComplexEventPrice ComplexEventPrice_48;
      ComplexEventPrice_48.setString("16347062");
      noComplexEvents_0_1_0.set(ComplexEventPrice_48);
      ComplexEvents_NoComplexEvents_48.insert(ComplexEventPrice_48.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_48(5);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_48);
      ComplexEvents_NoComplexEvents_48.insert(ComplexEventPriceBoundaryMethod_48.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_48;
      ComplexEventPriceBoundaryPrecision_48.setString("13.680000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_48);
      ComplexEvents_NoComplexEvents_48.insert(ComplexEventPriceBoundaryPrecision_48.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_48(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_48);
      ComplexEvents_NoComplexEvents_48.insert(ComplexEventPriceTimeType_48.getString());
      FIX::ComplexEventType ComplexEventType_48(8);
      noComplexEvents_0_1_0.set(ComplexEventType_48);
      ComplexEvents_NoComplexEvents_48.insert(ComplexEventType_48.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_48;
      ComplexOptPayoutAmount_48.setString("2592506");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_48);
      ComplexEvents_NoComplexEvents_48.insert(ComplexOptPayoutAmount_48.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_48);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_100;
        FIX::ComplexEventEndDate ComplexEventEndDate_100(FIX::UTCTIMESTAMP(5, 33, 36, 15, 5, 2005));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_100);
        ComplexEventDates_NoComplexEventDates_100.insert(ComplexEventEndDate_100.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_100(FIX::UTCTIMESTAMP(9, 20, 23, 7, 8, 2013));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_100);
        ComplexEventDates_NoComplexEventDates_100.insert(ComplexEventStartDate_100.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_100);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_212;
          FIX::ComplexEventEndTime ComplexEventEndTime_212(FIX::UTCTIMEONLY(12, 26, 34));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_212);
          ComplexEventTimes_NoComplexEventTimes_212.insert(ComplexEventEndTime_212.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_212(FIX::UTCTIMEONLY(14, 53, 58));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_212);
          ComplexEventTimes_NoComplexEventTimes_212.insert(ComplexEventStartTime_212.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_212);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_213;
          FIX::ComplexEventEndTime ComplexEventEndTime_213(FIX::UTCTIMEONLY(7, 25, 43));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_213);
          ComplexEventTimes_NoComplexEventTimes_213.insert(ComplexEventEndTime_213.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_213(FIX::UTCTIMEONLY(15, 55, 9));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_213);
          ComplexEventTimes_NoComplexEventTimes_213.insert(ComplexEventStartTime_213.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_213);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_214;
          FIX::ComplexEventEndTime ComplexEventEndTime_214(FIX::UTCTIMEONLY(0, 34, 50));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_214);
          ComplexEventTimes_NoComplexEventTimes_214.insert(ComplexEventEndTime_214.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_214(FIX::UTCTIMEONLY(6, 23, 31));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_214);
          ComplexEventTimes_NoComplexEventTimes_214.insert(ComplexEventStartTime_214.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_214);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_49;
      FIX::ComplexEventCondition ComplexEventCondition_49(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_49);
      ComplexEvents_NoComplexEvents_49.insert(ComplexEventCondition_49.getString());
      FIX::ComplexEventPrice ComplexEventPrice_49;
      ComplexEventPrice_49.setString("5007778");
      noComplexEvents_0_1_1.set(ComplexEventPrice_49);
      ComplexEvents_NoComplexEvents_49.insert(ComplexEventPrice_49.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_49(5);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_49);
      ComplexEvents_NoComplexEvents_49.insert(ComplexEventPriceBoundaryMethod_49.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_49;
      ComplexEventPriceBoundaryPrecision_49.setString("0.020000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_49);
      ComplexEvents_NoComplexEvents_49.insert(ComplexEventPriceBoundaryPrecision_49.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_49(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_49);
      ComplexEvents_NoComplexEvents_49.insert(ComplexEventPriceTimeType_49.getString());
      FIX::ComplexEventType ComplexEventType_49(9);
      noComplexEvents_0_1_1.set(ComplexEventType_49);
      ComplexEvents_NoComplexEvents_49.insert(ComplexEventType_49.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_49;
      ComplexOptPayoutAmount_49.setString("20218966");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_49);
      ComplexEvents_NoComplexEvents_49.insert(ComplexOptPayoutAmount_49.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_49);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_101;
        FIX::ComplexEventEndDate ComplexEventEndDate_101(FIX::UTCTIMESTAMP(13, 6, 17, 27, 12, 2016));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_101);
        ComplexEventDates_NoComplexEventDates_101.insert(ComplexEventEndDate_101.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_101(FIX::UTCTIMESTAMP(22, 33, 1, 2, 1, 2009));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_101);
        ComplexEventDates_NoComplexEventDates_101.insert(ComplexEventStartDate_101.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_101);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_215;
          FIX::ComplexEventEndTime ComplexEventEndTime_215(FIX::UTCTIMEONLY(13, 38, 4));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_215);
          ComplexEventTimes_NoComplexEventTimes_215.insert(ComplexEventEndTime_215.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_215(FIX::UTCTIMEONLY(9, 27, 40));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_215);
          ComplexEventTimes_NoComplexEventTimes_215.insert(ComplexEventStartTime_215.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_215);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_102;
        FIX::ComplexEventEndDate ComplexEventEndDate_102(FIX::UTCTIMESTAMP(23, 26, 55, 15, 2, 2014));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_102);
        ComplexEventDates_NoComplexEventDates_102.insert(ComplexEventEndDate_102.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_102(FIX::UTCTIMESTAMP(16, 43, 0, 18, 7, 2009));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_102);
        ComplexEventDates_NoComplexEventDates_102.insert(ComplexEventStartDate_102.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_102);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_216;
          FIX::ComplexEventEndTime ComplexEventEndTime_216(FIX::UTCTIMEONLY(5, 31, 34));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_216);
          ComplexEventTimes_NoComplexEventTimes_216.insert(ComplexEventEndTime_216.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_216(FIX::UTCTIMEONLY(7, 23, 48));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_216);
          ComplexEventTimes_NoComplexEventTimes_216.insert(ComplexEventStartTime_216.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_216);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_50;
      FIX::ComplexEventCondition ComplexEventCondition_50(2);
      noComplexEvents_0_1_2.set(ComplexEventCondition_50);
      ComplexEvents_NoComplexEvents_50.insert(ComplexEventCondition_50.getString());
      FIX::ComplexEventPrice ComplexEventPrice_50;
      ComplexEventPrice_50.setString("12277195");
      noComplexEvents_0_1_2.set(ComplexEventPrice_50);
      ComplexEvents_NoComplexEvents_50.insert(ComplexEventPrice_50.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_50(2);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_50);
      ComplexEvents_NoComplexEvents_50.insert(ComplexEventPriceBoundaryMethod_50.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_50;
      ComplexEventPriceBoundaryPrecision_50.setString("36.290000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_50);
      ComplexEvents_NoComplexEvents_50.insert(ComplexEventPriceBoundaryPrecision_50.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_50(2);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_50);
      ComplexEvents_NoComplexEvents_50.insert(ComplexEventPriceTimeType_50.getString());
      FIX::ComplexEventType ComplexEventType_50(1);
      noComplexEvents_0_1_2.set(ComplexEventType_50);
      ComplexEvents_NoComplexEvents_50.insert(ComplexEventType_50.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_50;
      ComplexOptPayoutAmount_50.setString("6476853");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_50);
      ComplexEvents_NoComplexEvents_50.insert(ComplexOptPayoutAmount_50.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_50);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_103;
        FIX::ComplexEventEndDate ComplexEventEndDate_103(FIX::UTCTIMESTAMP(12, 57, 31, 7, 4, 2015));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_103);
        ComplexEventDates_NoComplexEventDates_103.insert(ComplexEventEndDate_103.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_103(FIX::UTCTIMESTAMP(11, 20, 30, 9, 3, 2009));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_103);
        ComplexEventDates_NoComplexEventDates_103.insert(ComplexEventStartDate_103.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_103);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_217;
          FIX::ComplexEventEndTime ComplexEventEndTime_217(FIX::UTCTIMEONLY(19, 6, 18));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_217);
          ComplexEventTimes_NoComplexEventTimes_217.insert(ComplexEventEndTime_217.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_217(FIX::UTCTIMEONLY(1, 33, 19));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_217);
          ComplexEventTimes_NoComplexEventTimes_217.insert(ComplexEventStartTime_217.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_217);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_218;
          FIX::ComplexEventEndTime ComplexEventEndTime_218(FIX::UTCTIMEONLY(10, 37, 3));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_218);
          ComplexEventTimes_NoComplexEventTimes_218.insert(ComplexEventEndTime_218.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_218(FIX::UTCTIMEONLY(9, 4, 36));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_218);
          ComplexEventTimes_NoComplexEventTimes_218.insert(ComplexEventStartTime_218.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_218);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_219;
          FIX::ComplexEventEndTime ComplexEventEndTime_219(FIX::UTCTIMEONLY(16, 25, 40));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventEndTime_219);
          ComplexEventTimes_NoComplexEventTimes_219.insert(ComplexEventEndTime_219.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_219(FIX::UTCTIMEONLY(4, 17, 36));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventStartTime_219);
          ComplexEventTimes_NoComplexEventTimes_219.insert(ComplexEventStartTime_219.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_219);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_104;
        FIX::ComplexEventEndDate ComplexEventEndDate_104(FIX::UTCTIMESTAMP(1, 58, 57, 27, 9, 2013));
        noComplexEventDates_0_2_2_1.set(ComplexEventEndDate_104);
        ComplexEventDates_NoComplexEventDates_104.insert(ComplexEventEndDate_104.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_104(FIX::UTCTIMESTAMP(7, 31, 49, 10, 2, 2016));
        noComplexEventDates_0_2_2_1.set(ComplexEventStartDate_104);
        ComplexEventDates_NoComplexEventDates_104.insert(ComplexEventStartDate_104.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_104);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_220;
          FIX::ComplexEventEndTime ComplexEventEndTime_220(FIX::UTCTIMEONLY(13, 18, 11));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventEndTime_220);
          ComplexEventTimes_NoComplexEventTimes_220.insert(ComplexEventEndTime_220.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_220(FIX::UTCTIMEONLY(3, 15, 18));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventStartTime_220);
          ComplexEventTimes_NoComplexEventTimes_220.insert(ComplexEventStartTime_220.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_220);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_221;
          FIX::ComplexEventEndTime ComplexEventEndTime_221(FIX::UTCTIMEONLY(11, 35, 40));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventEndTime_221);
          ComplexEventTimes_NoComplexEventTimes_221.insert(ComplexEventEndTime_221.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_221(FIX::UTCTIMEONLY(4, 57, 50));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventStartTime_221);
          ComplexEventTimes_NoComplexEventTimes_221.insert(ComplexEventStartTime_221.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_221);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_43;
      FIX::EventDate EventDate_43("LOCALMKTDATE_695528966");
      noEvents_0_1_0.set(EventDate_43);
      EvntGrp_NoEvents_43.insert(EventDate_43.getString());
      FIX::EventPx EventPx_43;
      EventPx_43.setString("20406680");
      noEvents_0_1_0.set(EventPx_43);
      EvntGrp_NoEvents_43.insert(EventPx_43.getString());
      FIX::EventText EventText_43("STRING_1470708025");
      noEvents_0_1_0.set(EventText_43);
      EvntGrp_NoEvents_43.insert(EventText_43.getString());
      FIX::EventTime EventTime_43(FIX::UTCTIMESTAMP(1, 50, 53, 0, 3, 2010));
      noEvents_0_1_0.set(EventTime_43);
      EvntGrp_NoEvents_43.insert(EventTime_43.getString());
      FIX::EventType EventType_43(11);
      noEvents_0_1_0.set(EventType_43);
      EvntGrp_NoEvents_43.insert(EventType_43.getString());
      all_values.push_back(EvntGrp_NoEvents_43);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_44;
      FIX::EventDate EventDate_44("LOCALMKTDATE_1786552755");
      noEvents_0_1_1.set(EventDate_44);
      EvntGrp_NoEvents_44.insert(EventDate_44.getString());
      FIX::EventPx EventPx_44;
      EventPx_44.setString("6996014");
      noEvents_0_1_1.set(EventPx_44);
      EvntGrp_NoEvents_44.insert(EventPx_44.getString());
      FIX::EventText EventText_44("STRING_1892691679");
      noEvents_0_1_1.set(EventText_44);
      EvntGrp_NoEvents_44.insert(EventText_44.getString());
      FIX::EventTime EventTime_44(FIX::UTCTIMESTAMP(5, 29, 25, 23, 10, 2008));
      noEvents_0_1_1.set(EventTime_44);
      EvntGrp_NoEvents_44.insert(EventTime_44.getString());
      FIX::EventType EventType_44(10);
      noEvents_0_1_1.set(EventType_44);
      EvntGrp_NoEvents_44.insert(EventType_44.getString());
      all_values.push_back(EvntGrp_NoEvents_44);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_44;
      FIX::InstrumentPartyID InstrumentPartyID_44("STRING_934957735");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_44);
      InstrumentParties_NoInstrumentParties_44.insert(InstrumentPartyID_44.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_44('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_44);
      InstrumentParties_NoInstrumentParties_44.insert(InstrumentPartyIDSource_44.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_44(1062305034);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_44);
      InstrumentParties_NoInstrumentParties_44.insert(InstrumentPartyRole_44.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_44);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102;
        FIX::InstrumentPartySubID InstrumentPartySubID_102("STRING_1143845273");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_102);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102.insert(InstrumentPartySubID_102.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_102(120925543);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_102);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102.insert(InstrumentPartySubIDType_102.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_50;
      FIX::SecurityAltID SecurityAltID_50("STRING_1200659781");
      noSecurityAltID_0_1_0.set(SecurityAltID_50);
      SecAltIDGrp_NoSecurityAltID_50.insert(SecurityAltID_50.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_50("STRING_816454510");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_50);
      SecAltIDGrp_NoSecurityAltID_50.insert(SecurityAltIDSource_50.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_50);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_51;
      FIX::SecurityAltID SecurityAltID_51("STRING_485228673");
      noSecurityAltID_0_1_1.set(SecurityAltID_51);
      SecAltIDGrp_NoSecurityAltID_51.insert(SecurityAltID_51.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_51("STRING_523884158");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_51);
      SecAltIDGrp_NoSecurityAltID_51.insert(SecurityAltIDSource_51.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_51);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_46;
    FIX::SecurityXML SecurityXML_47("XMLDATA_996365784");
    noRelatedSym_0_0.set(SecurityXML_47);
    FIX::SecurityXMLLen SecurityXMLLen_23(254955386);
    noRelatedSym_0_0.set(SecurityXMLLen_23);
    FIX::SecurityXMLSchema SecurityXMLSchema_23("STRING_2129072249");
    noRelatedSym_0_0.set(SecurityXMLSchema_23);
    SecurityXML_46.insert(SecurityXMLSchema_23.getString());
    all_values.push_back(SecurityXML_46);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::Email::NoRelatedSym noRelatedSym_0_1;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_24;
    FIX::AttachmentPoint AttachmentPoint_24;
    AttachmentPoint_24.setString("6.090000");
    noRelatedSym_0_1.set(AttachmentPoint_24);
    Instrument_24.insert(AttachmentPoint_24.getString());
    FIX::CFICode CFICode_24("STRING_1121757266");
    noRelatedSym_0_1.set(CFICode_24);
    Instrument_24.insert(CFICode_24.getString());
    FIX::CPProgram CPProgram_24(99);
    noRelatedSym_0_1.set(CPProgram_24);
    Instrument_24.insert(CPProgram_24.getString());
    FIX::CPRegType CPRegType_24("STRING_1353533743");
    noRelatedSym_0_1.set(CPRegType_24);
    Instrument_24.insert(CPRegType_24.getString());
    FIX::CapPrice CapPrice_24;
    CapPrice_24.setString("16089336");
    noRelatedSym_0_1.set(CapPrice_24);
    Instrument_24.insert(CapPrice_24.getString());
    FIX::ContractMultiplier ContractMultiplier_24;
    ContractMultiplier_24.setString("3160715");
    noRelatedSym_0_1.set(ContractMultiplier_24);
    Instrument_24.insert(ContractMultiplier_24.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_24(1);
    noRelatedSym_0_1.set(ContractMultiplierUnit_24);
    Instrument_24.insert(ContractMultiplierUnit_24.getString());
    FIX::ContractSettlMonth ContractSettlMonth_24("MONTHYEAR_1354141687");
    noRelatedSym_0_1.set(ContractSettlMonth_24);
    Instrument_24.insert(ContractSettlMonth_24.getString());
    FIX::CountryOfIssue CountryOfIssue_24("COUNTRY_1533590884");
    noRelatedSym_0_1.set(CountryOfIssue_24);
    Instrument_24.insert(CountryOfIssue_24.getString());
    FIX::CouponPaymentDate CouponPaymentDate_24("LOCALMKTDATE_301850981");
    noRelatedSym_0_1.set(CouponPaymentDate_24);
    Instrument_24.insert(CouponPaymentDate_24.getString());
    FIX::CouponRate CouponRate_24;
    CouponRate_24.setString("19.760000");
    noRelatedSym_0_1.set(CouponRate_24);
    Instrument_24.insert(CouponRate_24.getString());
    FIX::CreditRating CreditRating_24("STRING_2051178150");
    noRelatedSym_0_1.set(CreditRating_24);
    Instrument_24.insert(CreditRating_24.getString());
    FIX::DatedDate DatedDate_24("LOCALMKTDATE_2015152300");
    noRelatedSym_0_1.set(DatedDate_24);
    Instrument_24.insert(DatedDate_24.getString());
    FIX::DetachmentPoint DetachmentPoint_24;
    DetachmentPoint_24.setString("17.090000");
    noRelatedSym_0_1.set(DetachmentPoint_24);
    Instrument_24.insert(DetachmentPoint_24.getString());
    FIX::EncodedIssuer EncodedIssuer_24("DATA_238136274");
    noRelatedSym_0_1.set(EncodedIssuer_24);
    Instrument_24.insert(EncodedIssuer_24.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_24(1311369882);
    noRelatedSym_0_1.set(EncodedIssuerLen_24);
    Instrument_24.insert(EncodedIssuerLen_24.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_24("DATA_599633463");
    noRelatedSym_0_1.set(EncodedSecurityDesc_24);
    Instrument_24.insert(EncodedSecurityDesc_24.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_24(1173094010);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_24);
    Instrument_24.insert(EncodedSecurityDescLen_24.getString());
    FIX::ExerciseStyle ExerciseStyle_24(1);
    noRelatedSym_0_1.set(ExerciseStyle_24);
    Instrument_24.insert(ExerciseStyle_24.getString());
    FIX::Factor Factor_24;
    Factor_24.setString("16619384");
    noRelatedSym_0_1.set(Factor_24);
    Instrument_24.insert(Factor_24.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_24(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_24);
    Instrument_24.insert(FlexProductEligibilityIndicator_24.getString());
    FIX::FlexibleIndicator FlexibleIndicator_24(true);
    noRelatedSym_0_1.set(FlexibleIndicator_24);
    Instrument_24.insert(FlexibleIndicator_24.getString());
    FIX::FloorPrice FloorPrice_24;
    FloorPrice_24.setString("17828640");
    noRelatedSym_0_1.set(FloorPrice_24);
    Instrument_24.insert(FloorPrice_24.getString());
    FIX::FlowScheduleType FlowScheduleType_24(3);
    noRelatedSym_0_1.set(FlowScheduleType_24);
    Instrument_24.insert(FlowScheduleType_24.getString());
    FIX::InstrRegistry InstrRegistry_24("STRING_904249525");
    noRelatedSym_0_1.set(InstrRegistry_24);
    Instrument_24.insert(InstrRegistry_24.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_24('4');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_24);
    Instrument_24.insert(InstrmtAssignmentMethod_24.getString());
    FIX::InterestAccrualDate InterestAccrualDate_24("LOCALMKTDATE_916954996");
    noRelatedSym_0_1.set(InterestAccrualDate_24);
    Instrument_24.insert(InterestAccrualDate_24.getString());
    FIX::IssueDate IssueDate_24("LOCALMKTDATE_1428133683");
    noRelatedSym_0_1.set(IssueDate_24);
    Instrument_24.insert(IssueDate_24.getString());
    FIX::Issuer Issuer_24("STRING_1448200686");
    noRelatedSym_0_1.set(Issuer_24);
    Instrument_24.insert(Issuer_24.getString());
    FIX::ListMethod ListMethod_24(0);
    noRelatedSym_0_1.set(ListMethod_24);
    Instrument_24.insert(ListMethod_24.getString());
    FIX::LocaleOfIssue LocaleOfIssue_24("STRING_1409722284");
    noRelatedSym_0_1.set(LocaleOfIssue_24);
    Instrument_24.insert(LocaleOfIssue_24.getString());
    FIX::MaturityDate MaturityDate_24("LOCALMKTDATE_1979861295");
    noRelatedSym_0_1.set(MaturityDate_24);
    Instrument_24.insert(MaturityDate_24.getString());
    FIX::MaturityMonthYear MaturityMonthYear_24("MONTHYEAR_146184000");
    noRelatedSym_0_1.set(MaturityMonthYear_24);
    Instrument_24.insert(MaturityMonthYear_24.getString());
    FIX::MaturityTime MaturityTime_24("TZTIMEONLY_2086724699");
    noRelatedSym_0_1.set(MaturityTime_24);
    Instrument_24.insert(MaturityTime_24.getString());
    FIX::MinPriceIncrement MinPriceIncrement_24;
    MinPriceIncrement_24.setString("11859113");
    noRelatedSym_0_1.set(MinPriceIncrement_24);
    Instrument_24.insert(MinPriceIncrement_24.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_24;
    MinPriceIncrementAmount_24.setString("17551176");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_24);
    Instrument_24.insert(MinPriceIncrementAmount_24.getString());
    FIX::NTPositionLimit NTPositionLimit_24(255312573);
    noRelatedSym_0_1.set(NTPositionLimit_24);
    Instrument_24.insert(NTPositionLimit_24.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_24;
    NotionalPercentageOutstanding_24.setString("29.740000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_24);
    Instrument_24.insert(NotionalPercentageOutstanding_24.getString());
    FIX::OptAttribute OptAttribute_24('9');
    noRelatedSym_0_1.set(OptAttribute_24);
    Instrument_24.insert(OptAttribute_24.getString());
    FIX::OptPayoutAmount OptPayoutAmount_24;
    OptPayoutAmount_24.setString("17889034");
    noRelatedSym_0_1.set(OptPayoutAmount_24);
    Instrument_24.insert(OptPayoutAmount_24.getString());
    FIX::OptPayoutType OptPayoutType_24(2);
    noRelatedSym_0_1.set(OptPayoutType_24);
    Instrument_24.insert(OptPayoutType_24.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_24;
    OriginalNotionalPercentageOutstanding_24.setString("40.240000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_24);
    Instrument_24.insert(OriginalNotionalPercentageOutstanding_24.getString());
    FIX::Pool Pool_24("STRING_1692597960");
    noRelatedSym_0_1.set(Pool_24);
    Instrument_24.insert(Pool_24.getString());
    FIX::PositionLimit PositionLimit_24(1261082607);
    noRelatedSym_0_1.set(PositionLimit_24);
    Instrument_24.insert(PositionLimit_24.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_24("STRING_INX");
    noRelatedSym_0_1.set(PriceQuoteMethod_24);
    Instrument_24.insert(PriceQuoteMethod_24.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_24("STRING_1930734234");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_24);
    Instrument_24.insert(PriceUnitOfMeasure_24.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_24;
    PriceUnitOfMeasureQty_24.setString("4249688");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_24);
    Instrument_24.insert(PriceUnitOfMeasureQty_24.getString());
    FIX::Product Product_26(4);
    noRelatedSym_0_1.set(Product_26);
    Instrument_24.insert(Product_26.getString());
    FIX::ProductComplex ProductComplex_24("STRING_956344596");
    noRelatedSym_0_1.set(ProductComplex_24);
    Instrument_24.insert(ProductComplex_24.getString());
    FIX::PutOrCall PutOrCall_24(0);
    noRelatedSym_0_1.set(PutOrCall_24);
    Instrument_24.insert(PutOrCall_24.getString());
    FIX::RedemptionDate RedemptionDate_24("LOCALMKTDATE_1277864045");
    noRelatedSym_0_1.set(RedemptionDate_24);
    Instrument_24.insert(RedemptionDate_24.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_24("STRING_796026628");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_24);
    Instrument_24.insert(RepoCollateralSecurityType_24.getString());
    FIX::RepurchaseRate RepurchaseRate_24;
    RepurchaseRate_24.setString("67.040000");
    noRelatedSym_0_1.set(RepurchaseRate_24);
    Instrument_24.insert(RepurchaseRate_24.getString());
    FIX::RepurchaseTerm RepurchaseTerm_24(913244438);
    noRelatedSym_0_1.set(RepurchaseTerm_24);
    Instrument_24.insert(RepurchaseTerm_24.getString());
    FIX::RestructuringType RestructuringType_24("STRING_XR");
    noRelatedSym_0_1.set(RestructuringType_24);
    Instrument_24.insert(RestructuringType_24.getString());
    FIX::SecurityDesc SecurityDesc_24("STRING_1740036229");
    noRelatedSym_0_1.set(SecurityDesc_24);
    Instrument_24.insert(SecurityDesc_24.getString());
    FIX::SecurityExchange SecurityExchange_24("EXCHANGE_1365079340");
    noRelatedSym_0_1.set(SecurityExchange_24);
    Instrument_24.insert(SecurityExchange_24.getString());
    FIX::SecurityGroup SecurityGroup_24("STRING_2144707948");
    noRelatedSym_0_1.set(SecurityGroup_24);
    Instrument_24.insert(SecurityGroup_24.getString());
    FIX::SecurityID SecurityID_24("STRING_1020686265");
    noRelatedSym_0_1.set(SecurityID_24);
    Instrument_24.insert(SecurityID_24.getString());
    FIX::SecurityIDSource SecurityIDSource_24("STRING_I");
    noRelatedSym_0_1.set(SecurityIDSource_24);
    Instrument_24.insert(SecurityIDSource_24.getString());
    FIX::SecurityStatus SecurityStatus_24("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_24);
    Instrument_24.insert(SecurityStatus_24.getString());
    FIX::SecuritySubType SecuritySubType_25("STRING_282924901");
    noRelatedSym_0_1.set(SecuritySubType_25);
    Instrument_24.insert(SecuritySubType_25.getString());
    FIX::SecurityType SecurityType_26("STRING_AN");
    noRelatedSym_0_1.set(SecurityType_26);
    Instrument_24.insert(SecurityType_26.getString());
    FIX::Seniority Seniority_24("STRING_SD");
    noRelatedSym_0_1.set(Seniority_24);
    Instrument_24.insert(Seniority_24.getString());
    FIX::SettlMethod SettlMethod_24('P');
    noRelatedSym_0_1.set(SettlMethod_24);
    Instrument_24.insert(SettlMethod_24.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_24("STRING_1684085417");
    noRelatedSym_0_1.set(SettleOnOpenFlag_24);
    Instrument_24.insert(SettleOnOpenFlag_24.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_24("STRING_922952691");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_24);
    Instrument_24.insert(StateOrProvinceOfIssue_24.getString());
    FIX::StrikeCurrency StrikeCurrency_24("CAN");
    noRelatedSym_0_1.set(StrikeCurrency_24);
    Instrument_24.insert(StrikeCurrency_24.getString());
    FIX::StrikeMultiplier StrikeMultiplier_24;
    StrikeMultiplier_24.setString("18847283");
    noRelatedSym_0_1.set(StrikeMultiplier_24);
    Instrument_24.insert(StrikeMultiplier_24.getString());
    FIX::StrikePrice StrikePrice_24;
    StrikePrice_24.setString("1188983");
    noRelatedSym_0_1.set(StrikePrice_24);
    Instrument_24.insert(StrikePrice_24.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_24(4);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_24);
    Instrument_24.insert(StrikePriceBoundaryMethod_24.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_24;
    StrikePriceBoundaryPrecision_24.setString("87.630000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_24);
    Instrument_24.insert(StrikePriceBoundaryPrecision_24.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_24(1);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_24);
    Instrument_24.insert(StrikePriceDeterminationMethod_24.getString());
    FIX::StrikeValue StrikeValue_24;
    StrikeValue_24.setString("11351776");
    noRelatedSym_0_1.set(StrikeValue_24);
    Instrument_24.insert(StrikeValue_24.getString());
    FIX::Symbol Symbol_24("STRING_1401504496");
    noRelatedSym_0_1.set(Symbol_24);
    Instrument_24.insert(Symbol_24.getString());
    FIX::SymbolSfx SymbolSfx_24("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_24);
    Instrument_24.insert(SymbolSfx_24.getString());
    FIX::TimeUnit TimeUnit_24("STRING_S");
    noRelatedSym_0_1.set(TimeUnit_24);
    Instrument_24.insert(TimeUnit_24.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_24(2);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_24);
    Instrument_24.insert(UnderlyingPriceDeterminationMethod_24.getString());
    FIX::UnitOfMeasure UnitOfMeasure_24("STRING_MWh");
    noRelatedSym_0_1.set(UnitOfMeasure_24);
    Instrument_24.insert(UnitOfMeasure_24.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_24;
    UnitOfMeasureQty_24.setString("5448598");
    noRelatedSym_0_1.set(UnitOfMeasureQty_24);
    Instrument_24.insert(UnitOfMeasureQty_24.getString());
    FIX::ValuationMethod ValuationMethod_24("STRING_FUTDA");
    noRelatedSym_0_1.set(ValuationMethod_24);
    Instrument_24.insert(ValuationMethod_24.getString());
    all_values.push_back(Instrument_24);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_51;
      FIX::ComplexEventCondition ComplexEventCondition_51(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_51);
      ComplexEvents_NoComplexEvents_51.insert(ComplexEventCondition_51.getString());
      FIX::ComplexEventPrice ComplexEventPrice_51;
      ComplexEventPrice_51.setString("10610548");
      noComplexEvents_1_1_0.set(ComplexEventPrice_51);
      ComplexEvents_NoComplexEvents_51.insert(ComplexEventPrice_51.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_51(4);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_51);
      ComplexEvents_NoComplexEvents_51.insert(ComplexEventPriceBoundaryMethod_51.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_51;
      ComplexEventPriceBoundaryPrecision_51.setString("90.970000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_51);
      ComplexEvents_NoComplexEvents_51.insert(ComplexEventPriceBoundaryPrecision_51.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_51(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_51);
      ComplexEvents_NoComplexEvents_51.insert(ComplexEventPriceTimeType_51.getString());
      FIX::ComplexEventType ComplexEventType_51(1);
      noComplexEvents_1_1_0.set(ComplexEventType_51);
      ComplexEvents_NoComplexEvents_51.insert(ComplexEventType_51.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_51;
      ComplexOptPayoutAmount_51.setString("19938853");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_51);
      ComplexEvents_NoComplexEvents_51.insert(ComplexOptPayoutAmount_51.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_51);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_105;
        FIX::ComplexEventEndDate ComplexEventEndDate_105(FIX::UTCTIMESTAMP(0, 58, 0, 1, 8, 2016));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_105);
        ComplexEventDates_NoComplexEventDates_105.insert(ComplexEventEndDate_105.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_105(FIX::UTCTIMESTAMP(18, 31, 52, 20, 11, 2016));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_105);
        ComplexEventDates_NoComplexEventDates_105.insert(ComplexEventStartDate_105.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_105);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_222;
          FIX::ComplexEventEndTime ComplexEventEndTime_222(FIX::UTCTIMEONLY(3, 49, 7));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_222);
          ComplexEventTimes_NoComplexEventTimes_222.insert(ComplexEventEndTime_222.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_222(FIX::UTCTIMEONLY(20, 30, 6));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_222);
          ComplexEventTimes_NoComplexEventTimes_222.insert(ComplexEventStartTime_222.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_222);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_223;
          FIX::ComplexEventEndTime ComplexEventEndTime_223(FIX::UTCTIMEONLY(22, 49, 38));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_223);
          ComplexEventTimes_NoComplexEventTimes_223.insert(ComplexEventEndTime_223.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_223(FIX::UTCTIMEONLY(8, 12, 7));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_223);
          ComplexEventTimes_NoComplexEventTimes_223.insert(ComplexEventStartTime_223.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_223);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_106;
        FIX::ComplexEventEndDate ComplexEventEndDate_106(FIX::UTCTIMESTAMP(12, 58, 50, 13, 10, 2016));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_106);
        ComplexEventDates_NoComplexEventDates_106.insert(ComplexEventEndDate_106.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_106(FIX::UTCTIMESTAMP(4, 57, 57, 8, 12, 2013));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_106);
        ComplexEventDates_NoComplexEventDates_106.insert(ComplexEventStartDate_106.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_106);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_224;
          FIX::ComplexEventEndTime ComplexEventEndTime_224(FIX::UTCTIMEONLY(17, 51, 5));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_224);
          ComplexEventTimes_NoComplexEventTimes_224.insert(ComplexEventEndTime_224.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_224(FIX::UTCTIMEONLY(12, 27, 18));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_224);
          ComplexEventTimes_NoComplexEventTimes_224.insert(ComplexEventStartTime_224.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_224);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_225;
          FIX::ComplexEventEndTime ComplexEventEndTime_225(FIX::UTCTIMEONLY(14, 0, 34));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_225);
          ComplexEventTimes_NoComplexEventTimes_225.insert(ComplexEventEndTime_225.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_225(FIX::UTCTIMEONLY(20, 47, 25));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_225);
          ComplexEventTimes_NoComplexEventTimes_225.insert(ComplexEventStartTime_225.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_225);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_107;
        FIX::ComplexEventEndDate ComplexEventEndDate_107(FIX::UTCTIMESTAMP(23, 15, 9, 25, 1, 2013));
        noComplexEventDates_1_0_2_2.set(ComplexEventEndDate_107);
        ComplexEventDates_NoComplexEventDates_107.insert(ComplexEventEndDate_107.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_107(FIX::UTCTIMESTAMP(8, 33, 47, 9, 9, 2012));
        noComplexEventDates_1_0_2_2.set(ComplexEventStartDate_107);
        ComplexEventDates_NoComplexEventDates_107.insert(ComplexEventStartDate_107.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_107);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_226;
          FIX::ComplexEventEndTime ComplexEventEndTime_226(FIX::UTCTIMEONLY(21, 19, 8));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventEndTime_226);
          ComplexEventTimes_NoComplexEventTimes_226.insert(ComplexEventEndTime_226.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_226(FIX::UTCTIMEONLY(11, 35, 40));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventStartTime_226);
          ComplexEventTimes_NoComplexEventTimes_226.insert(ComplexEventStartTime_226.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_226);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_227;
          FIX::ComplexEventEndTime ComplexEventEndTime_227(FIX::UTCTIMEONLY(17, 32, 6));
          noComplexEventTimes_1_0_2_3_1.set(ComplexEventEndTime_227);
          ComplexEventTimes_NoComplexEventTimes_227.insert(ComplexEventEndTime_227.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_227(FIX::UTCTIMEONLY(4, 53, 52));
          noComplexEventTimes_1_0_2_3_1.set(ComplexEventStartTime_227);
          ComplexEventTimes_NoComplexEventTimes_227.insert(ComplexEventStartTime_227.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_227);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_228;
          FIX::ComplexEventEndTime ComplexEventEndTime_228(FIX::UTCTIMEONLY(16, 7, 44));
          noComplexEventTimes_1_0_2_3_2.set(ComplexEventEndTime_228);
          ComplexEventTimes_NoComplexEventTimes_228.insert(ComplexEventEndTime_228.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_228(FIX::UTCTIMEONLY(23, 27, 3));
          noComplexEventTimes_1_0_2_3_2.set(ComplexEventStartTime_228);
          ComplexEventTimes_NoComplexEventTimes_228.insert(ComplexEventStartTime_228.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_228);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_45;
      FIX::EventDate EventDate_45("LOCALMKTDATE_419023912");
      noEvents_1_1_0.set(EventDate_45);
      EvntGrp_NoEvents_45.insert(EventDate_45.getString());
      FIX::EventPx EventPx_45;
      EventPx_45.setString("17799698");
      noEvents_1_1_0.set(EventPx_45);
      EvntGrp_NoEvents_45.insert(EventPx_45.getString());
      FIX::EventText EventText_45("STRING_548893201");
      noEvents_1_1_0.set(EventText_45);
      EvntGrp_NoEvents_45.insert(EventText_45.getString());
      FIX::EventTime EventTime_45(FIX::UTCTIMESTAMP(19, 28, 43, 12, 12, 2009));
      noEvents_1_1_0.set(EventTime_45);
      EvntGrp_NoEvents_45.insert(EventTime_45.getString());
      FIX::EventType EventType_45(19);
      noEvents_1_1_0.set(EventType_45);
      EvntGrp_NoEvents_45.insert(EventType_45.getString());
      all_values.push_back(EvntGrp_NoEvents_45);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_45;
      FIX::InstrumentPartyID InstrumentPartyID_45("STRING_1478845879");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_45);
      InstrumentParties_NoInstrumentParties_45.insert(InstrumentPartyID_45.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_45('7');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_45);
      InstrumentParties_NoInstrumentParties_45.insert(InstrumentPartyIDSource_45.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_45(221124946);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_45);
      InstrumentParties_NoInstrumentParties_45.insert(InstrumentPartyRole_45.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_45);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103;
        FIX::InstrumentPartySubID InstrumentPartySubID_103("STRING_994595382");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_103);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103.insert(InstrumentPartySubID_103.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_103(560190712);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_103);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103.insert(InstrumentPartySubIDType_103.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104;
        FIX::InstrumentPartySubID InstrumentPartySubID_104("STRING_925000923");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_104);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104.insert(InstrumentPartySubID_104.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_104(158620250);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_104);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104.insert(InstrumentPartySubIDType_104.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_46;
      FIX::InstrumentPartyID InstrumentPartyID_46("STRING_1438091025");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_46);
      InstrumentParties_NoInstrumentParties_46.insert(InstrumentPartyID_46.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_46('1');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_46);
      InstrumentParties_NoInstrumentParties_46.insert(InstrumentPartyIDSource_46.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_46(1945910613);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_46);
      InstrumentParties_NoInstrumentParties_46.insert(InstrumentPartyRole_46.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_46);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105;
        FIX::InstrumentPartySubID InstrumentPartySubID_105("STRING_1575389574");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_105);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105.insert(InstrumentPartySubID_105.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_105(2046311837);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_105);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105.insert(InstrumentPartySubIDType_105.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106;
        FIX::InstrumentPartySubID InstrumentPartySubID_106("STRING_1154594951");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_106);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106.insert(InstrumentPartySubID_106.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_106(829430758);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_106);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106.insert(InstrumentPartySubIDType_106.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107;
        FIX::InstrumentPartySubID InstrumentPartySubID_107("STRING_1981687057");
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubID_107);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107.insert(InstrumentPartySubID_107.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_107(595250166);
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubIDType_107);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107.insert(InstrumentPartySubIDType_107.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_52;
      FIX::SecurityAltID SecurityAltID_52("STRING_253227321");
      noSecurityAltID_1_1_0.set(SecurityAltID_52);
      SecAltIDGrp_NoSecurityAltID_52.insert(SecurityAltID_52.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_52("STRING_227736349");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_52);
      SecAltIDGrp_NoSecurityAltID_52.insert(SecurityAltIDSource_52.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_52);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_53;
      FIX::SecurityAltID SecurityAltID_53("STRING_1785424535");
      noSecurityAltID_1_1_1.set(SecurityAltID_53);
      SecAltIDGrp_NoSecurityAltID_53.insert(SecurityAltID_53.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_53("STRING_1169114950");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_53);
      SecAltIDGrp_NoSecurityAltID_53.insert(SecurityAltIDSource_53.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_53);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_48;
    FIX::SecurityXML SecurityXML_49("XMLDATA_1253574536");
    noRelatedSym_0_1.set(SecurityXML_49);
    FIX::SecurityXMLLen SecurityXMLLen_24(1934020143);
    noRelatedSym_0_1.set(SecurityXMLLen_24);
    FIX::SecurityXMLSchema SecurityXMLSchema_24("STRING_1213642494");
    noRelatedSym_0_1.set(SecurityXMLSchema_24);
    SecurityXML_48.insert(SecurityXMLSchema_24.getString());
    all_values.push_back(SecurityXML_48);

    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::Email::NoRelatedSym noRelatedSym_0_2;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_25;
    FIX::AttachmentPoint AttachmentPoint_25;
    AttachmentPoint_25.setString("37.840000");
    noRelatedSym_0_2.set(AttachmentPoint_25);
    Instrument_25.insert(AttachmentPoint_25.getString());
    FIX::CFICode CFICode_25("STRING_1022067343");
    noRelatedSym_0_2.set(CFICode_25);
    Instrument_25.insert(CFICode_25.getString());
    FIX::CPProgram CPProgram_25(2);
    noRelatedSym_0_2.set(CPProgram_25);
    Instrument_25.insert(CPProgram_25.getString());
    FIX::CPRegType CPRegType_25("STRING_105823594");
    noRelatedSym_0_2.set(CPRegType_25);
    Instrument_25.insert(CPRegType_25.getString());
    FIX::CapPrice CapPrice_25;
    CapPrice_25.setString("9634981");
    noRelatedSym_0_2.set(CapPrice_25);
    Instrument_25.insert(CapPrice_25.getString());
    FIX::ContractMultiplier ContractMultiplier_25;
    ContractMultiplier_25.setString("1334232");
    noRelatedSym_0_2.set(ContractMultiplier_25);
    Instrument_25.insert(ContractMultiplier_25.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_25(2);
    noRelatedSym_0_2.set(ContractMultiplierUnit_25);
    Instrument_25.insert(ContractMultiplierUnit_25.getString());
    FIX::ContractSettlMonth ContractSettlMonth_25("MONTHYEAR_1184623123");
    noRelatedSym_0_2.set(ContractSettlMonth_25);
    Instrument_25.insert(ContractSettlMonth_25.getString());
    FIX::CountryOfIssue CountryOfIssue_25("COUNTRY_251638457");
    noRelatedSym_0_2.set(CountryOfIssue_25);
    Instrument_25.insert(CountryOfIssue_25.getString());
    FIX::CouponPaymentDate CouponPaymentDate_25("LOCALMKTDATE_1888572806");
    noRelatedSym_0_2.set(CouponPaymentDate_25);
    Instrument_25.insert(CouponPaymentDate_25.getString());
    FIX::CouponRate CouponRate_25;
    CouponRate_25.setString("38.350000");
    noRelatedSym_0_2.set(CouponRate_25);
    Instrument_25.insert(CouponRate_25.getString());
    FIX::CreditRating CreditRating_25("STRING_1176639380");
    noRelatedSym_0_2.set(CreditRating_25);
    Instrument_25.insert(CreditRating_25.getString());
    FIX::DatedDate DatedDate_25("LOCALMKTDATE_2047193057");
    noRelatedSym_0_2.set(DatedDate_25);
    Instrument_25.insert(DatedDate_25.getString());
    FIX::DetachmentPoint DetachmentPoint_25;
    DetachmentPoint_25.setString("12.120000");
    noRelatedSym_0_2.set(DetachmentPoint_25);
    Instrument_25.insert(DetachmentPoint_25.getString());
    FIX::EncodedIssuer EncodedIssuer_25("DATA_701345528");
    noRelatedSym_0_2.set(EncodedIssuer_25);
    Instrument_25.insert(EncodedIssuer_25.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_25(1845620022);
    noRelatedSym_0_2.set(EncodedIssuerLen_25);
    Instrument_25.insert(EncodedIssuerLen_25.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_25("DATA_204069310");
    noRelatedSym_0_2.set(EncodedSecurityDesc_25);
    Instrument_25.insert(EncodedSecurityDesc_25.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_25(129251454);
    noRelatedSym_0_2.set(EncodedSecurityDescLen_25);
    Instrument_25.insert(EncodedSecurityDescLen_25.getString());
    FIX::ExerciseStyle ExerciseStyle_25(1);
    noRelatedSym_0_2.set(ExerciseStyle_25);
    Instrument_25.insert(ExerciseStyle_25.getString());
    FIX::Factor Factor_25;
    Factor_25.setString("13586642");
    noRelatedSym_0_2.set(Factor_25);
    Instrument_25.insert(Factor_25.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_25(true);
    noRelatedSym_0_2.set(FlexProductEligibilityIndicator_25);
    Instrument_25.insert(FlexProductEligibilityIndicator_25.getString());
    FIX::FlexibleIndicator FlexibleIndicator_25(false);
    noRelatedSym_0_2.set(FlexibleIndicator_25);
    Instrument_25.insert(FlexibleIndicator_25.getString());
    FIX::FloorPrice FloorPrice_25;
    FloorPrice_25.setString("19539144");
    noRelatedSym_0_2.set(FloorPrice_25);
    Instrument_25.insert(FloorPrice_25.getString());
    FIX::FlowScheduleType FlowScheduleType_25(3);
    noRelatedSym_0_2.set(FlowScheduleType_25);
    Instrument_25.insert(FlowScheduleType_25.getString());
    FIX::InstrRegistry InstrRegistry_25("STRING_1831878942");
    noRelatedSym_0_2.set(InstrRegistry_25);
    Instrument_25.insert(InstrRegistry_25.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_25('3');
    noRelatedSym_0_2.set(InstrmtAssignmentMethod_25);
    Instrument_25.insert(InstrmtAssignmentMethod_25.getString());
    FIX::InterestAccrualDate InterestAccrualDate_25("LOCALMKTDATE_1833154433");
    noRelatedSym_0_2.set(InterestAccrualDate_25);
    Instrument_25.insert(InterestAccrualDate_25.getString());
    FIX::IssueDate IssueDate_25("LOCALMKTDATE_853510245");
    noRelatedSym_0_2.set(IssueDate_25);
    Instrument_25.insert(IssueDate_25.getString());
    FIX::Issuer Issuer_25("STRING_1287741664");
    noRelatedSym_0_2.set(Issuer_25);
    Instrument_25.insert(Issuer_25.getString());
    FIX::ListMethod ListMethod_25(1);
    noRelatedSym_0_2.set(ListMethod_25);
    Instrument_25.insert(ListMethod_25.getString());
    FIX::LocaleOfIssue LocaleOfIssue_25("STRING_2067152739");
    noRelatedSym_0_2.set(LocaleOfIssue_25);
    Instrument_25.insert(LocaleOfIssue_25.getString());
    FIX::MaturityDate MaturityDate_25("LOCALMKTDATE_1926205449");
    noRelatedSym_0_2.set(MaturityDate_25);
    Instrument_25.insert(MaturityDate_25.getString());
    FIX::MaturityMonthYear MaturityMonthYear_25("MONTHYEAR_494274624");
    noRelatedSym_0_2.set(MaturityMonthYear_25);
    Instrument_25.insert(MaturityMonthYear_25.getString());
    FIX::MaturityTime MaturityTime_25("TZTIMEONLY_721730108");
    noRelatedSym_0_2.set(MaturityTime_25);
    Instrument_25.insert(MaturityTime_25.getString());
    FIX::MinPriceIncrement MinPriceIncrement_25;
    MinPriceIncrement_25.setString("20320290");
    noRelatedSym_0_2.set(MinPriceIncrement_25);
    Instrument_25.insert(MinPriceIncrement_25.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_25;
    MinPriceIncrementAmount_25.setString("14577728");
    noRelatedSym_0_2.set(MinPriceIncrementAmount_25);
    Instrument_25.insert(MinPriceIncrementAmount_25.getString());
    FIX::NTPositionLimit NTPositionLimit_25(855153357);
    noRelatedSym_0_2.set(NTPositionLimit_25);
    Instrument_25.insert(NTPositionLimit_25.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_25;
    NotionalPercentageOutstanding_25.setString("28.200000");
    noRelatedSym_0_2.set(NotionalPercentageOutstanding_25);
    Instrument_25.insert(NotionalPercentageOutstanding_25.getString());
    FIX::OptAttribute OptAttribute_25('4');
    noRelatedSym_0_2.set(OptAttribute_25);
    Instrument_25.insert(OptAttribute_25.getString());
    FIX::OptPayoutAmount OptPayoutAmount_25;
    OptPayoutAmount_25.setString("11067918");
    noRelatedSym_0_2.set(OptPayoutAmount_25);
    Instrument_25.insert(OptPayoutAmount_25.getString());
    FIX::OptPayoutType OptPayoutType_25(3);
    noRelatedSym_0_2.set(OptPayoutType_25);
    Instrument_25.insert(OptPayoutType_25.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_25;
    OriginalNotionalPercentageOutstanding_25.setString("24.640000");
    noRelatedSym_0_2.set(OriginalNotionalPercentageOutstanding_25);
    Instrument_25.insert(OriginalNotionalPercentageOutstanding_25.getString());
    FIX::Pool Pool_25("STRING_135947546");
    noRelatedSym_0_2.set(Pool_25);
    Instrument_25.insert(Pool_25.getString());
    FIX::PositionLimit PositionLimit_25(419321387);
    noRelatedSym_0_2.set(PositionLimit_25);
    Instrument_25.insert(PositionLimit_25.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_25("STRING_INX");
    noRelatedSym_0_2.set(PriceQuoteMethod_25);
    Instrument_25.insert(PriceQuoteMethod_25.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_25("STRING_837293074");
    noRelatedSym_0_2.set(PriceUnitOfMeasure_25);
    Instrument_25.insert(PriceUnitOfMeasure_25.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_25;
    PriceUnitOfMeasureQty_25.setString("1174577");
    noRelatedSym_0_2.set(PriceUnitOfMeasureQty_25);
    Instrument_25.insert(PriceUnitOfMeasureQty_25.getString());
    FIX::Product Product_27(1);
    noRelatedSym_0_2.set(Product_27);
    Instrument_25.insert(Product_27.getString());
    FIX::ProductComplex ProductComplex_25("STRING_966544529");
    noRelatedSym_0_2.set(ProductComplex_25);
    Instrument_25.insert(ProductComplex_25.getString());
    FIX::PutOrCall PutOrCall_25(0);
    noRelatedSym_0_2.set(PutOrCall_25);
    Instrument_25.insert(PutOrCall_25.getString());
    FIX::RedemptionDate RedemptionDate_25("LOCALMKTDATE_542913600");
    noRelatedSym_0_2.set(RedemptionDate_25);
    Instrument_25.insert(RedemptionDate_25.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_25("STRING_1925226741");
    noRelatedSym_0_2.set(RepoCollateralSecurityType_25);
    Instrument_25.insert(RepoCollateralSecurityType_25.getString());
    FIX::RepurchaseRate RepurchaseRate_25;
    RepurchaseRate_25.setString("39.470000");
    noRelatedSym_0_2.set(RepurchaseRate_25);
    Instrument_25.insert(RepurchaseRate_25.getString());
    FIX::RepurchaseTerm RepurchaseTerm_25(349344379);
    noRelatedSym_0_2.set(RepurchaseTerm_25);
    Instrument_25.insert(RepurchaseTerm_25.getString());
    FIX::RestructuringType RestructuringType_25("STRING_FR");
    noRelatedSym_0_2.set(RestructuringType_25);
    Instrument_25.insert(RestructuringType_25.getString());
    FIX::SecurityDesc SecurityDesc_25("STRING_977469241");
    noRelatedSym_0_2.set(SecurityDesc_25);
    Instrument_25.insert(SecurityDesc_25.getString());
    FIX::SecurityExchange SecurityExchange_25("EXCHANGE_383511508");
    noRelatedSym_0_2.set(SecurityExchange_25);
    Instrument_25.insert(SecurityExchange_25.getString());
    FIX::SecurityGroup SecurityGroup_25("STRING_1658627425");
    noRelatedSym_0_2.set(SecurityGroup_25);
    Instrument_25.insert(SecurityGroup_25.getString());
    FIX::SecurityID SecurityID_25("STRING_1830979486");
    noRelatedSym_0_2.set(SecurityID_25);
    Instrument_25.insert(SecurityID_25.getString());
    FIX::SecurityIDSource SecurityIDSource_25("STRING_7");
    noRelatedSym_0_2.set(SecurityIDSource_25);
    Instrument_25.insert(SecurityIDSource_25.getString());
    FIX::SecurityStatus SecurityStatus_25("STRING_1");
    noRelatedSym_0_2.set(SecurityStatus_25);
    Instrument_25.insert(SecurityStatus_25.getString());
    FIX::SecuritySubType SecuritySubType_26("STRING_1750648577");
    noRelatedSym_0_2.set(SecuritySubType_26);
    Instrument_25.insert(SecuritySubType_26.getString());
    FIX::SecurityType SecurityType_27("STRING_BDN");
    noRelatedSym_0_2.set(SecurityType_27);
    Instrument_25.insert(SecurityType_27.getString());
    FIX::Seniority Seniority_25("STRING_SD");
    noRelatedSym_0_2.set(Seniority_25);
    Instrument_25.insert(Seniority_25.getString());
    FIX::SettlMethod SettlMethod_25('C');
    noRelatedSym_0_2.set(SettlMethod_25);
    Instrument_25.insert(SettlMethod_25.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_25("STRING_1334520369");
    noRelatedSym_0_2.set(SettleOnOpenFlag_25);
    Instrument_25.insert(SettleOnOpenFlag_25.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_25("STRING_935398484");
    noRelatedSym_0_2.set(StateOrProvinceOfIssue_25);
    Instrument_25.insert(StateOrProvinceOfIssue_25.getString());
    FIX::StrikeCurrency StrikeCurrency_25("CAN");
    noRelatedSym_0_2.set(StrikeCurrency_25);
    Instrument_25.insert(StrikeCurrency_25.getString());
    FIX::StrikeMultiplier StrikeMultiplier_25;
    StrikeMultiplier_25.setString("14303107");
    noRelatedSym_0_2.set(StrikeMultiplier_25);
    Instrument_25.insert(StrikeMultiplier_25.getString());
    FIX::StrikePrice StrikePrice_25;
    StrikePrice_25.setString("1393565");
    noRelatedSym_0_2.set(StrikePrice_25);
    Instrument_25.insert(StrikePrice_25.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_25(5);
    noRelatedSym_0_2.set(StrikePriceBoundaryMethod_25);
    Instrument_25.insert(StrikePriceBoundaryMethod_25.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_25;
    StrikePriceBoundaryPrecision_25.setString("32.250000");
    noRelatedSym_0_2.set(StrikePriceBoundaryPrecision_25);
    Instrument_25.insert(StrikePriceBoundaryPrecision_25.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_25(4);
    noRelatedSym_0_2.set(StrikePriceDeterminationMethod_25);
    Instrument_25.insert(StrikePriceDeterminationMethod_25.getString());
    FIX::StrikeValue StrikeValue_25;
    StrikeValue_25.setString("9044929");
    noRelatedSym_0_2.set(StrikeValue_25);
    Instrument_25.insert(StrikeValue_25.getString());
    FIX::Symbol Symbol_25("STRING_502733254");
    noRelatedSym_0_2.set(Symbol_25);
    Instrument_25.insert(Symbol_25.getString());
    FIX::SymbolSfx SymbolSfx_25("STRING_CD");
    noRelatedSym_0_2.set(SymbolSfx_25);
    Instrument_25.insert(SymbolSfx_25.getString());
    FIX::TimeUnit TimeUnit_25("STRING_Mo");
    noRelatedSym_0_2.set(TimeUnit_25);
    Instrument_25.insert(TimeUnit_25.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_25(2);
    noRelatedSym_0_2.set(UnderlyingPriceDeterminationMethod_25);
    Instrument_25.insert(UnderlyingPriceDeterminationMethod_25.getString());
    FIX::UnitOfMeasure UnitOfMeasure_25("STRING_tn");
    noRelatedSym_0_2.set(UnitOfMeasure_25);
    Instrument_25.insert(UnitOfMeasure_25.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_25;
    UnitOfMeasureQty_25.setString("7363729");
    noRelatedSym_0_2.set(UnitOfMeasureQty_25);
    Instrument_25.insert(UnitOfMeasureQty_25.getString());
    FIX::ValuationMethod ValuationMethod_25("STRING_CDS");
    noRelatedSym_0_2.set(ValuationMethod_25);
    Instrument_25.insert(ValuationMethod_25.getString());
    all_values.push_back(Instrument_25);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_52;
      FIX::ComplexEventCondition ComplexEventCondition_52(1);
      noComplexEvents_2_1_0.set(ComplexEventCondition_52);
      ComplexEvents_NoComplexEvents_52.insert(ComplexEventCondition_52.getString());
      FIX::ComplexEventPrice ComplexEventPrice_52;
      ComplexEventPrice_52.setString("5792405");
      noComplexEvents_2_1_0.set(ComplexEventPrice_52);
      ComplexEvents_NoComplexEvents_52.insert(ComplexEventPrice_52.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_52(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_52);
      ComplexEvents_NoComplexEvents_52.insert(ComplexEventPriceBoundaryMethod_52.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_52;
      ComplexEventPriceBoundaryPrecision_52.setString("25.350000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_52);
      ComplexEvents_NoComplexEvents_52.insert(ComplexEventPriceBoundaryPrecision_52.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_52(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_52);
      ComplexEvents_NoComplexEvents_52.insert(ComplexEventPriceTimeType_52.getString());
      FIX::ComplexEventType ComplexEventType_52(1);
      noComplexEvents_2_1_0.set(ComplexEventType_52);
      ComplexEvents_NoComplexEvents_52.insert(ComplexEventType_52.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_52;
      ComplexOptPayoutAmount_52.setString("5429283");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_52);
      ComplexEvents_NoComplexEvents_52.insert(ComplexOptPayoutAmount_52.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_52);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_108;
        FIX::ComplexEventEndDate ComplexEventEndDate_108(FIX::UTCTIMESTAMP(23, 59, 23, 5, 1, 2005));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_108);
        ComplexEventDates_NoComplexEventDates_108.insert(ComplexEventEndDate_108.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_108(FIX::UTCTIMESTAMP(9, 40, 17, 4, 2, 2017));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_108);
        ComplexEventDates_NoComplexEventDates_108.insert(ComplexEventStartDate_108.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_108);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_229;
          FIX::ComplexEventEndTime ComplexEventEndTime_229(FIX::UTCTIMEONLY(19, 8, 25));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_229);
          ComplexEventTimes_NoComplexEventTimes_229.insert(ComplexEventEndTime_229.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_229(FIX::UTCTIMEONLY(11, 39, 58));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_229);
          ComplexEventTimes_NoComplexEventTimes_229.insert(ComplexEventStartTime_229.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_229);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_230;
          FIX::ComplexEventEndTime ComplexEventEndTime_230(FIX::UTCTIMEONLY(16, 27, 25));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventEndTime_230);
          ComplexEventTimes_NoComplexEventTimes_230.insert(ComplexEventEndTime_230.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_230(FIX::UTCTIMEONLY(9, 39, 30));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventStartTime_230);
          ComplexEventTimes_NoComplexEventTimes_230.insert(ComplexEventStartTime_230.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_230);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_231;
          FIX::ComplexEventEndTime ComplexEventEndTime_231(FIX::UTCTIMEONLY(14, 21, 28));
          noComplexEventTimes_2_0_0_3_2.set(ComplexEventEndTime_231);
          ComplexEventTimes_NoComplexEventTimes_231.insert(ComplexEventEndTime_231.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_231(FIX::UTCTIMEONLY(13, 27, 32));
          noComplexEventTimes_2_0_0_3_2.set(ComplexEventStartTime_231);
          ComplexEventTimes_NoComplexEventTimes_231.insert(ComplexEventStartTime_231.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_231);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_109;
        FIX::ComplexEventEndDate ComplexEventEndDate_109(FIX::UTCTIMESTAMP(11, 42, 47, 25, 4, 2010));
        noComplexEventDates_2_0_2_1.set(ComplexEventEndDate_109);
        ComplexEventDates_NoComplexEventDates_109.insert(ComplexEventEndDate_109.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_109(FIX::UTCTIMESTAMP(22, 47, 50, 12, 3, 2005));
        noComplexEventDates_2_0_2_1.set(ComplexEventStartDate_109);
        ComplexEventDates_NoComplexEventDates_109.insert(ComplexEventStartDate_109.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_109);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_232;
          FIX::ComplexEventEndTime ComplexEventEndTime_232(FIX::UTCTIMEONLY(1, 17, 17));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventEndTime_232);
          ComplexEventTimes_NoComplexEventTimes_232.insert(ComplexEventEndTime_232.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_232(FIX::UTCTIMEONLY(18, 48, 53));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventStartTime_232);
          ComplexEventTimes_NoComplexEventTimes_232.insert(ComplexEventStartTime_232.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_232);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_233;
          FIX::ComplexEventEndTime ComplexEventEndTime_233(FIX::UTCTIMEONLY(14, 6, 4));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventEndTime_233);
          ComplexEventTimes_NoComplexEventTimes_233.insert(ComplexEventEndTime_233.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_233(FIX::UTCTIMEONLY(8, 24, 51));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventStartTime_233);
          ComplexEventTimes_NoComplexEventTimes_233.insert(ComplexEventStartTime_233.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_233);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_234;
          FIX::ComplexEventEndTime ComplexEventEndTime_234(FIX::UTCTIMEONLY(15, 33, 33));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventEndTime_234);
          ComplexEventTimes_NoComplexEventTimes_234.insert(ComplexEventEndTime_234.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_234(FIX::UTCTIMEONLY(16, 12, 9));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventStartTime_234);
          ComplexEventTimes_NoComplexEventTimes_234.insert(ComplexEventStartTime_234.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_234);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_53;
      FIX::ComplexEventCondition ComplexEventCondition_53(1);
      noComplexEvents_2_1_1.set(ComplexEventCondition_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventCondition_53.getString());
      FIX::ComplexEventPrice ComplexEventPrice_53;
      ComplexEventPrice_53.setString("6540080");
      noComplexEvents_2_1_1.set(ComplexEventPrice_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventPrice_53.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_53(1);
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryMethod_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventPriceBoundaryMethod_53.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_53;
      ComplexEventPriceBoundaryPrecision_53.setString("4.060000");
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryPrecision_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventPriceBoundaryPrecision_53.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_53(2);
      noComplexEvents_2_1_1.set(ComplexEventPriceTimeType_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventPriceTimeType_53.getString());
      FIX::ComplexEventType ComplexEventType_53(7);
      noComplexEvents_2_1_1.set(ComplexEventType_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventType_53.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_53;
      ComplexOptPayoutAmount_53.setString("20327328");
      noComplexEvents_2_1_1.set(ComplexOptPayoutAmount_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexOptPayoutAmount_53.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_53);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_110;
        FIX::ComplexEventEndDate ComplexEventEndDate_110(FIX::UTCTIMESTAMP(22, 2, 17, 0, 3, 2014));
        noComplexEventDates_2_1_2_0.set(ComplexEventEndDate_110);
        ComplexEventDates_NoComplexEventDates_110.insert(ComplexEventEndDate_110.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_110(FIX::UTCTIMESTAMP(17, 9, 49, 23, 6, 2017));
        noComplexEventDates_2_1_2_0.set(ComplexEventStartDate_110);
        ComplexEventDates_NoComplexEventDates_110.insert(ComplexEventStartDate_110.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_110);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_235;
          FIX::ComplexEventEndTime ComplexEventEndTime_235(FIX::UTCTIMEONLY(8, 15, 49));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventEndTime_235);
          ComplexEventTimes_NoComplexEventTimes_235.insert(ComplexEventEndTime_235.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_235(FIX::UTCTIMEONLY(7, 1, 6));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventStartTime_235);
          ComplexEventTimes_NoComplexEventTimes_235.insert(ComplexEventStartTime_235.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_235);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_236;
          FIX::ComplexEventEndTime ComplexEventEndTime_236(FIX::UTCTIMEONLY(16, 58, 59));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventEndTime_236);
          ComplexEventTimes_NoComplexEventTimes_236.insert(ComplexEventEndTime_236.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_236(FIX::UTCTIMEONLY(8, 28, 39));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventStartTime_236);
          ComplexEventTimes_NoComplexEventTimes_236.insert(ComplexEventStartTime_236.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_236);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_237;
          FIX::ComplexEventEndTime ComplexEventEndTime_237(FIX::UTCTIMEONLY(14, 41, 24));
          noComplexEventTimes_2_1_0_3_2.set(ComplexEventEndTime_237);
          ComplexEventTimes_NoComplexEventTimes_237.insert(ComplexEventEndTime_237.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_237(FIX::UTCTIMEONLY(8, 27, 59));
          noComplexEventTimes_2_1_0_3_2.set(ComplexEventStartTime_237);
          ComplexEventTimes_NoComplexEventTimes_237.insert(ComplexEventStartTime_237.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_237);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_2);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_111;
        FIX::ComplexEventEndDate ComplexEventEndDate_111(FIX::UTCTIMESTAMP(16, 40, 4, 25, 10, 2005));
        noComplexEventDates_2_1_2_1.set(ComplexEventEndDate_111);
        ComplexEventDates_NoComplexEventDates_111.insert(ComplexEventEndDate_111.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_111(FIX::UTCTIMESTAMP(9, 2, 53, 10, 11, 2010));
        noComplexEventDates_2_1_2_1.set(ComplexEventStartDate_111);
        ComplexEventDates_NoComplexEventDates_111.insert(ComplexEventStartDate_111.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_111);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_238;
          FIX::ComplexEventEndTime ComplexEventEndTime_238(FIX::UTCTIMEONLY(2, 43, 35));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventEndTime_238);
          ComplexEventTimes_NoComplexEventTimes_238.insert(ComplexEventEndTime_238.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_238(FIX::UTCTIMEONLY(3, 3, 55));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventStartTime_238);
          ComplexEventTimes_NoComplexEventTimes_238.insert(ComplexEventStartTime_238.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_238);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_0);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_1);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_112;
        FIX::ComplexEventEndDate ComplexEventEndDate_112(FIX::UTCTIMESTAMP(21, 36, 27, 3, 1, 2010));
        noComplexEventDates_2_1_2_2.set(ComplexEventEndDate_112);
        ComplexEventDates_NoComplexEventDates_112.insert(ComplexEventEndDate_112.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_112(FIX::UTCTIMESTAMP(5, 14, 54, 2, 12, 2001));
        noComplexEventDates_2_1_2_2.set(ComplexEventStartDate_112);
        ComplexEventDates_NoComplexEventDates_112.insert(ComplexEventStartDate_112.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_112);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_239;
          FIX::ComplexEventEndTime ComplexEventEndTime_239(FIX::UTCTIMEONLY(9, 51, 1));
          noComplexEventTimes_2_1_2_3_0.set(ComplexEventEndTime_239);
          ComplexEventTimes_NoComplexEventTimes_239.insert(ComplexEventEndTime_239.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_239(FIX::UTCTIMEONLY(13, 39, 52));
          noComplexEventTimes_2_1_2_3_0.set(ComplexEventStartTime_239);
          ComplexEventTimes_NoComplexEventTimes_239.insert(ComplexEventStartTime_239.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_239);

          noComplexEventDates_2_1_2_2.addGroup(noComplexEventTimes_2_1_2_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_240;
          FIX::ComplexEventEndTime ComplexEventEndTime_240(FIX::UTCTIMEONLY(10, 28, 16));
          noComplexEventTimes_2_1_2_3_1.set(ComplexEventEndTime_240);
          ComplexEventTimes_NoComplexEventTimes_240.insert(ComplexEventEndTime_240.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_240(FIX::UTCTIMEONLY(19, 11, 29));
          noComplexEventTimes_2_1_2_3_1.set(ComplexEventStartTime_240);
          ComplexEventTimes_NoComplexEventTimes_240.insert(ComplexEventStartTime_240.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_240);

          noComplexEventDates_2_1_2_2.addGroup(noComplexEventTimes_2_1_2_3_1);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_46;
      FIX::EventDate EventDate_46("LOCALMKTDATE_1898959220");
      noEvents_2_1_0.set(EventDate_46);
      EvntGrp_NoEvents_46.insert(EventDate_46.getString());
      FIX::EventPx EventPx_46;
      EventPx_46.setString("9841885");
      noEvents_2_1_0.set(EventPx_46);
      EvntGrp_NoEvents_46.insert(EventPx_46.getString());
      FIX::EventText EventText_46("STRING_1269563401");
      noEvents_2_1_0.set(EventText_46);
      EvntGrp_NoEvents_46.insert(EventText_46.getString());
      FIX::EventTime EventTime_46(FIX::UTCTIMESTAMP(22, 39, 50, 15, 6, 2012));
      noEvents_2_1_0.set(EventTime_46);
      EvntGrp_NoEvents_46.insert(EventTime_46.getString());
      FIX::EventType EventType_46(18);
      noEvents_2_1_0.set(EventType_46);
      EvntGrp_NoEvents_46.insert(EventType_46.getString());
      all_values.push_back(EvntGrp_NoEvents_46);

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_47;
      FIX::EventDate EventDate_47("LOCALMKTDATE_1025124236");
      noEvents_2_1_1.set(EventDate_47);
      EvntGrp_NoEvents_47.insert(EventDate_47.getString());
      FIX::EventPx EventPx_47;
      EventPx_47.setString("6444580");
      noEvents_2_1_1.set(EventPx_47);
      EvntGrp_NoEvents_47.insert(EventPx_47.getString());
      FIX::EventText EventText_47("STRING_1536106126");
      noEvents_2_1_1.set(EventText_47);
      EvntGrp_NoEvents_47.insert(EventText_47.getString());
      FIX::EventTime EventTime_47(FIX::UTCTIMESTAMP(5, 30, 4, 12, 8, 2000));
      noEvents_2_1_1.set(EventTime_47);
      EvntGrp_NoEvents_47.insert(EventTime_47.getString());
      FIX::EventType EventType_47(2);
      noEvents_2_1_1.set(EventType_47);
      EvntGrp_NoEvents_47.insert(EventType_47.getString());
      all_values.push_back(EvntGrp_NoEvents_47);

      noRelatedSym_0_2.addGroup(noEvents_2_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_47;
      FIX::InstrumentPartyID InstrumentPartyID_47("STRING_867155746");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_47);
      InstrumentParties_NoInstrumentParties_47.insert(InstrumentPartyID_47.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_47('1');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_47);
      InstrumentParties_NoInstrumentParties_47.insert(InstrumentPartyIDSource_47.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_47(675447692);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_47);
      InstrumentParties_NoInstrumentParties_47.insert(InstrumentPartyRole_47.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_47);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108;
        FIX::InstrumentPartySubID InstrumentPartySubID_108("STRING_520402332");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_108);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108.insert(InstrumentPartySubID_108.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_108(1106559763);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_108);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108.insert(InstrumentPartySubIDType_108.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_54;
      FIX::SecurityAltID SecurityAltID_54("STRING_763184806");
      noSecurityAltID_2_1_0.set(SecurityAltID_54);
      SecAltIDGrp_NoSecurityAltID_54.insert(SecurityAltID_54.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_54("STRING_858035335");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_54);
      SecAltIDGrp_NoSecurityAltID_54.insert(SecurityAltIDSource_54.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_54);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_50;
    FIX::SecurityXML SecurityXML_51("XMLDATA_1329185670");
    noRelatedSym_0_2.set(SecurityXML_51);
    FIX::SecurityXMLLen SecurityXMLLen_25(2032748207);
    noRelatedSym_0_2.set(SecurityXMLLen_25);
    FIX::SecurityXMLSchema SecurityXMLSchema_25("STRING_53366663");
    noRelatedSym_0_2.set(SecurityXMLSchema_25);
    SecurityXML_50.insert(SecurityXMLSchema_25.getString());
    all_values.push_back(SecurityXML_50);

    msg.addGroup(noRelatedSym_0_2);
  }
  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Email::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_40;
    FIX::EncodedLegIssuer EncodedLegIssuer_40("DATA_2061954566");
    noLegs_0_0.set(EncodedLegIssuer_40);
    InstrumentLeg_40.insert(EncodedLegIssuer_40.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_40(1534254733);
    noLegs_0_0.set(EncodedLegIssuerLen_40);
    InstrumentLeg_40.insert(EncodedLegIssuerLen_40.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_40("DATA_859209856");
    noLegs_0_0.set(EncodedLegSecurityDesc_40);
    InstrumentLeg_40.insert(EncodedLegSecurityDesc_40.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_40(1003146251);
    noLegs_0_0.set(EncodedLegSecurityDescLen_40);
    InstrumentLeg_40.insert(EncodedLegSecurityDescLen_40.getString());
    FIX::LegCFICode LegCFICode_40("STRING_1669751689");
    noLegs_0_0.set(LegCFICode_40);
    InstrumentLeg_40.insert(LegCFICode_40.getString());
    FIX::LegContractMultiplier LegContractMultiplier_40;
    LegContractMultiplier_40.setString("16809145");
    noLegs_0_0.set(LegContractMultiplier_40);
    InstrumentLeg_40.insert(LegContractMultiplier_40.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_40(2028270487);
    noLegs_0_0.set(LegContractMultiplierUnit_40);
    InstrumentLeg_40.insert(LegContractMultiplierUnit_40.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_40("MONTHYEAR_166726069");
    noLegs_0_0.set(LegContractSettlMonth_40);
    InstrumentLeg_40.insert(LegContractSettlMonth_40.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_40("COUNTRY_1069537012");
    noLegs_0_0.set(LegCountryOfIssue_40);
    InstrumentLeg_40.insert(LegCountryOfIssue_40.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_40("LOCALMKTDATE_594157203");
    noLegs_0_0.set(LegCouponPaymentDate_40);
    InstrumentLeg_40.insert(LegCouponPaymentDate_40.getString());
    FIX::LegCouponRate LegCouponRate_40;
    LegCouponRate_40.setString("73.380000");
    noLegs_0_0.set(LegCouponRate_40);
    InstrumentLeg_40.insert(LegCouponRate_40.getString());
    FIX::LegCreditRating LegCreditRating_40("STRING_1505508682");
    noLegs_0_0.set(LegCreditRating_40);
    InstrumentLeg_40.insert(LegCreditRating_40.getString());
    FIX::LegCurrency LegCurrency_40("CAN");
    noLegs_0_0.set(LegCurrency_40);
    InstrumentLeg_40.insert(LegCurrency_40.getString());
    FIX::LegDatedDate LegDatedDate_40("LOCALMKTDATE_1326674637");
    noLegs_0_0.set(LegDatedDate_40);
    InstrumentLeg_40.insert(LegDatedDate_40.getString());
    FIX::LegExerciseStyle LegExerciseStyle_40(914795075);
    noLegs_0_0.set(LegExerciseStyle_40);
    InstrumentLeg_40.insert(LegExerciseStyle_40.getString());
    FIX::LegFactor LegFactor_40;
    LegFactor_40.setString("17306730");
    noLegs_0_0.set(LegFactor_40);
    InstrumentLeg_40.insert(LegFactor_40.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_40(1023622754);
    noLegs_0_0.set(LegFlowScheduleType_40);
    InstrumentLeg_40.insert(LegFlowScheduleType_40.getString());
    FIX::LegInstrRegistry LegInstrRegistry_40("STRING_1781950821");
    noLegs_0_0.set(LegInstrRegistry_40);
    InstrumentLeg_40.insert(LegInstrRegistry_40.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_40("LOCALMKTDATE_1140079009");
    noLegs_0_0.set(LegInterestAccrualDate_40);
    InstrumentLeg_40.insert(LegInterestAccrualDate_40.getString());
    FIX::LegIssueDate LegIssueDate_40("LOCALMKTDATE_1699070446");
    noLegs_0_0.set(LegIssueDate_40);
    InstrumentLeg_40.insert(LegIssueDate_40.getString());
    FIX::LegIssuer LegIssuer_40("STRING_178658245");
    noLegs_0_0.set(LegIssuer_40);
    InstrumentLeg_40.insert(LegIssuer_40.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_40("STRING_1660481341");
    noLegs_0_0.set(LegLocaleOfIssue_40);
    InstrumentLeg_40.insert(LegLocaleOfIssue_40.getString());
    FIX::LegMaturityDate LegMaturityDate_40("LOCALMKTDATE_658146562");
    noLegs_0_0.set(LegMaturityDate_40);
    InstrumentLeg_40.insert(LegMaturityDate_40.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_40("MONTHYEAR_523655338");
    noLegs_0_0.set(LegMaturityMonthYear_40);
    InstrumentLeg_40.insert(LegMaturityMonthYear_40.getString());
    FIX::LegMaturityTime LegMaturityTime_40("TZTIMEONLY_276182500");
    noLegs_0_0.set(LegMaturityTime_40);
    InstrumentLeg_40.insert(LegMaturityTime_40.getString());
    FIX::LegOptAttribute LegOptAttribute_40('1');
    noLegs_0_0.set(LegOptAttribute_40);
    InstrumentLeg_40.insert(LegOptAttribute_40.getString());
    FIX::LegOptionRatio LegOptionRatio_40;
    LegOptionRatio_40.setString("18528410");
    noLegs_0_0.set(LegOptionRatio_40);
    InstrumentLeg_40.insert(LegOptionRatio_40.getString());
    FIX::LegPool LegPool_40("STRING_161447059");
    noLegs_0_0.set(LegPool_40);
    InstrumentLeg_40.insert(LegPool_40.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_40("STRING_1569548560");
    noLegs_0_0.set(LegPriceUnitOfMeasure_40);
    InstrumentLeg_40.insert(LegPriceUnitOfMeasure_40.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_40;
    LegPriceUnitOfMeasureQty_40.setString("2153423");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_40);
    InstrumentLeg_40.insert(LegPriceUnitOfMeasureQty_40.getString());
    FIX::LegProduct LegProduct_40(75917978);
    noLegs_0_0.set(LegProduct_40);
    InstrumentLeg_40.insert(LegProduct_40.getString());
    FIX::LegPutOrCall LegPutOrCall_40(956319645);
    noLegs_0_0.set(LegPutOrCall_40);
    InstrumentLeg_40.insert(LegPutOrCall_40.getString());
    FIX::LegRatioQty LegRatioQty_40;
    LegRatioQty_40.setString("10745522");
    noLegs_0_0.set(LegRatioQty_40);
    InstrumentLeg_40.insert(LegRatioQty_40.getString());
    FIX::LegRedemptionDate LegRedemptionDate_40("LOCALMKTDATE_1079064229");
    noLegs_0_0.set(LegRedemptionDate_40);
    InstrumentLeg_40.insert(LegRedemptionDate_40.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_40("STRING_478587687");
    noLegs_0_0.set(LegRepoCollateralSecurityType_40);
    InstrumentLeg_40.insert(LegRepoCollateralSecurityType_40.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_40;
    LegRepurchaseRate_40.setString("31.230000");
    noLegs_0_0.set(LegRepurchaseRate_40);
    InstrumentLeg_40.insert(LegRepurchaseRate_40.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_40(959851069);
    noLegs_0_0.set(LegRepurchaseTerm_40);
    InstrumentLeg_40.insert(LegRepurchaseTerm_40.getString());
    FIX::LegSecurityDesc LegSecurityDesc_40("STRING_645313756");
    noLegs_0_0.set(LegSecurityDesc_40);
    InstrumentLeg_40.insert(LegSecurityDesc_40.getString());
    FIX::LegSecurityExchange LegSecurityExchange_40("EXCHANGE_1677520135");
    noLegs_0_0.set(LegSecurityExchange_40);
    InstrumentLeg_40.insert(LegSecurityExchange_40.getString());
    FIX::LegSecurityID LegSecurityID_40("STRING_1554008272");
    noLegs_0_0.set(LegSecurityID_40);
    InstrumentLeg_40.insert(LegSecurityID_40.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_40("STRING_1482381095");
    noLegs_0_0.set(LegSecurityIDSource_40);
    InstrumentLeg_40.insert(LegSecurityIDSource_40.getString());
    FIX::LegSecuritySubType LegSecuritySubType_40("STRING_1035545169");
    noLegs_0_0.set(LegSecuritySubType_40);
    InstrumentLeg_40.insert(LegSecuritySubType_40.getString());
    FIX::LegSecurityType LegSecurityType_40("STRING_2008444851");
    noLegs_0_0.set(LegSecurityType_40);
    InstrumentLeg_40.insert(LegSecurityType_40.getString());
    FIX::LegSide LegSide_40('1');
    noLegs_0_0.set(LegSide_40);
    InstrumentLeg_40.insert(LegSide_40.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_40("STRING_214736158");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_40);
    InstrumentLeg_40.insert(LegStateOrProvinceOfIssue_40.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_40("JPY");
    noLegs_0_0.set(LegStrikeCurrency_40);
    InstrumentLeg_40.insert(LegStrikeCurrency_40.getString());
    FIX::LegStrikePrice LegStrikePrice_40;
    LegStrikePrice_40.setString("12383589");
    noLegs_0_0.set(LegStrikePrice_40);
    InstrumentLeg_40.insert(LegStrikePrice_40.getString());
    FIX::LegSymbol LegSymbol_40("STRING_410223452");
    noLegs_0_0.set(LegSymbol_40);
    InstrumentLeg_40.insert(LegSymbol_40.getString());
    FIX::LegSymbolSfx LegSymbolSfx_40("STRING_480085383");
    noLegs_0_0.set(LegSymbolSfx_40);
    InstrumentLeg_40.insert(LegSymbolSfx_40.getString());
    FIX::LegTimeUnit LegTimeUnit_40("STRING_789945711");
    noLegs_0_0.set(LegTimeUnit_40);
    InstrumentLeg_40.insert(LegTimeUnit_40.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_40("STRING_588881698");
    noLegs_0_0.set(LegUnitOfMeasure_40);
    InstrumentLeg_40.insert(LegUnitOfMeasure_40.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_40;
    LegUnitOfMeasureQty_40.setString("21405667");
    noLegs_0_0.set(LegUnitOfMeasureQty_40);
    InstrumentLeg_40.insert(LegUnitOfMeasureQty_40.getString());
    all_values.push_back(InstrumentLeg_40);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_87;
      FIX::LegSecurityAltID LegSecurityAltID_87("STRING_1112537036");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_87);
      LegSecAltIDGrp_NoLegSecurityAltID_87.insert(LegSecurityAltID_87.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_87("STRING_269265576");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_87);
      LegSecAltIDGrp_NoLegSecurityAltID_87.insert(LegSecurityAltIDSource_87.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_87);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_88;
      FIX::LegSecurityAltID LegSecurityAltID_88("STRING_816790522");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_88);
      LegSecAltIDGrp_NoLegSecurityAltID_88.insert(LegSecurityAltID_88.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_88("STRING_817894397");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_88);
      LegSecAltIDGrp_NoLegSecurityAltID_88.insert(LegSecurityAltIDSource_88.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_88);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::Email::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_41;
    FIX::EncodedLegIssuer EncodedLegIssuer_41("DATA_430712636");
    noLegs_0_1.set(EncodedLegIssuer_41);
    InstrumentLeg_41.insert(EncodedLegIssuer_41.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_41(238855435);
    noLegs_0_1.set(EncodedLegIssuerLen_41);
    InstrumentLeg_41.insert(EncodedLegIssuerLen_41.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_41("DATA_1033236779");
    noLegs_0_1.set(EncodedLegSecurityDesc_41);
    InstrumentLeg_41.insert(EncodedLegSecurityDesc_41.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_41(506630614);
    noLegs_0_1.set(EncodedLegSecurityDescLen_41);
    InstrumentLeg_41.insert(EncodedLegSecurityDescLen_41.getString());
    FIX::LegCFICode LegCFICode_41("STRING_1195175080");
    noLegs_0_1.set(LegCFICode_41);
    InstrumentLeg_41.insert(LegCFICode_41.getString());
    FIX::LegContractMultiplier LegContractMultiplier_41;
    LegContractMultiplier_41.setString("21077890");
    noLegs_0_1.set(LegContractMultiplier_41);
    InstrumentLeg_41.insert(LegContractMultiplier_41.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_41(1585694843);
    noLegs_0_1.set(LegContractMultiplierUnit_41);
    InstrumentLeg_41.insert(LegContractMultiplierUnit_41.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_41("MONTHYEAR_1673762767");
    noLegs_0_1.set(LegContractSettlMonth_41);
    InstrumentLeg_41.insert(LegContractSettlMonth_41.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_41("COUNTRY_568288491");
    noLegs_0_1.set(LegCountryOfIssue_41);
    InstrumentLeg_41.insert(LegCountryOfIssue_41.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_41("LOCALMKTDATE_398062264");
    noLegs_0_1.set(LegCouponPaymentDate_41);
    InstrumentLeg_41.insert(LegCouponPaymentDate_41.getString());
    FIX::LegCouponRate LegCouponRate_41;
    LegCouponRate_41.setString("28.760000");
    noLegs_0_1.set(LegCouponRate_41);
    InstrumentLeg_41.insert(LegCouponRate_41.getString());
    FIX::LegCreditRating LegCreditRating_41("STRING_98324978");
    noLegs_0_1.set(LegCreditRating_41);
    InstrumentLeg_41.insert(LegCreditRating_41.getString());
    FIX::LegCurrency LegCurrency_41("CHF");
    noLegs_0_1.set(LegCurrency_41);
    InstrumentLeg_41.insert(LegCurrency_41.getString());
    FIX::LegDatedDate LegDatedDate_41("LOCALMKTDATE_1133870147");
    noLegs_0_1.set(LegDatedDate_41);
    InstrumentLeg_41.insert(LegDatedDate_41.getString());
    FIX::LegExerciseStyle LegExerciseStyle_41(1813031740);
    noLegs_0_1.set(LegExerciseStyle_41);
    InstrumentLeg_41.insert(LegExerciseStyle_41.getString());
    FIX::LegFactor LegFactor_41;
    LegFactor_41.setString("14107909");
    noLegs_0_1.set(LegFactor_41);
    InstrumentLeg_41.insert(LegFactor_41.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_41(1348606306);
    noLegs_0_1.set(LegFlowScheduleType_41);
    InstrumentLeg_41.insert(LegFlowScheduleType_41.getString());
    FIX::LegInstrRegistry LegInstrRegistry_41("STRING_441304371");
    noLegs_0_1.set(LegInstrRegistry_41);
    InstrumentLeg_41.insert(LegInstrRegistry_41.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_41("LOCALMKTDATE_750797359");
    noLegs_0_1.set(LegInterestAccrualDate_41);
    InstrumentLeg_41.insert(LegInterestAccrualDate_41.getString());
    FIX::LegIssueDate LegIssueDate_41("LOCALMKTDATE_439481570");
    noLegs_0_1.set(LegIssueDate_41);
    InstrumentLeg_41.insert(LegIssueDate_41.getString());
    FIX::LegIssuer LegIssuer_41("STRING_851527823");
    noLegs_0_1.set(LegIssuer_41);
    InstrumentLeg_41.insert(LegIssuer_41.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_41("STRING_1230882742");
    noLegs_0_1.set(LegLocaleOfIssue_41);
    InstrumentLeg_41.insert(LegLocaleOfIssue_41.getString());
    FIX::LegMaturityDate LegMaturityDate_41("LOCALMKTDATE_1229427281");
    noLegs_0_1.set(LegMaturityDate_41);
    InstrumentLeg_41.insert(LegMaturityDate_41.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_41("MONTHYEAR_1440409521");
    noLegs_0_1.set(LegMaturityMonthYear_41);
    InstrumentLeg_41.insert(LegMaturityMonthYear_41.getString());
    FIX::LegMaturityTime LegMaturityTime_41("TZTIMEONLY_1223965818");
    noLegs_0_1.set(LegMaturityTime_41);
    InstrumentLeg_41.insert(LegMaturityTime_41.getString());
    FIX::LegOptAttribute LegOptAttribute_41('5');
    noLegs_0_1.set(LegOptAttribute_41);
    InstrumentLeg_41.insert(LegOptAttribute_41.getString());
    FIX::LegOptionRatio LegOptionRatio_41;
    LegOptionRatio_41.setString("4054629");
    noLegs_0_1.set(LegOptionRatio_41);
    InstrumentLeg_41.insert(LegOptionRatio_41.getString());
    FIX::LegPool LegPool_41("STRING_1493231395");
    noLegs_0_1.set(LegPool_41);
    InstrumentLeg_41.insert(LegPool_41.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_41("STRING_1346826429");
    noLegs_0_1.set(LegPriceUnitOfMeasure_41);
    InstrumentLeg_41.insert(LegPriceUnitOfMeasure_41.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_41;
    LegPriceUnitOfMeasureQty_41.setString("12233573");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_41);
    InstrumentLeg_41.insert(LegPriceUnitOfMeasureQty_41.getString());
    FIX::LegProduct LegProduct_41(1923944031);
    noLegs_0_1.set(LegProduct_41);
    InstrumentLeg_41.insert(LegProduct_41.getString());
    FIX::LegPutOrCall LegPutOrCall_41(1585681864);
    noLegs_0_1.set(LegPutOrCall_41);
    InstrumentLeg_41.insert(LegPutOrCall_41.getString());
    FIX::LegRatioQty LegRatioQty_41;
    LegRatioQty_41.setString("1091104");
    noLegs_0_1.set(LegRatioQty_41);
    InstrumentLeg_41.insert(LegRatioQty_41.getString());
    FIX::LegRedemptionDate LegRedemptionDate_41("LOCALMKTDATE_283090997");
    noLegs_0_1.set(LegRedemptionDate_41);
    InstrumentLeg_41.insert(LegRedemptionDate_41.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_41("STRING_633373296");
    noLegs_0_1.set(LegRepoCollateralSecurityType_41);
    InstrumentLeg_41.insert(LegRepoCollateralSecurityType_41.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_41;
    LegRepurchaseRate_41.setString("58.070000");
    noLegs_0_1.set(LegRepurchaseRate_41);
    InstrumentLeg_41.insert(LegRepurchaseRate_41.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_41(1868785840);
    noLegs_0_1.set(LegRepurchaseTerm_41);
    InstrumentLeg_41.insert(LegRepurchaseTerm_41.getString());
    FIX::LegSecurityDesc LegSecurityDesc_41("STRING_159652416");
    noLegs_0_1.set(LegSecurityDesc_41);
    InstrumentLeg_41.insert(LegSecurityDesc_41.getString());
    FIX::LegSecurityExchange LegSecurityExchange_41("EXCHANGE_637704298");
    noLegs_0_1.set(LegSecurityExchange_41);
    InstrumentLeg_41.insert(LegSecurityExchange_41.getString());
    FIX::LegSecurityID LegSecurityID_41("STRING_119364457");
    noLegs_0_1.set(LegSecurityID_41);
    InstrumentLeg_41.insert(LegSecurityID_41.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_41("STRING_331245292");
    noLegs_0_1.set(LegSecurityIDSource_41);
    InstrumentLeg_41.insert(LegSecurityIDSource_41.getString());
    FIX::LegSecuritySubType LegSecuritySubType_41("STRING_736029277");
    noLegs_0_1.set(LegSecuritySubType_41);
    InstrumentLeg_41.insert(LegSecuritySubType_41.getString());
    FIX::LegSecurityType LegSecurityType_41("STRING_2071434993");
    noLegs_0_1.set(LegSecurityType_41);
    InstrumentLeg_41.insert(LegSecurityType_41.getString());
    FIX::LegSide LegSide_41('1');
    noLegs_0_1.set(LegSide_41);
    InstrumentLeg_41.insert(LegSide_41.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_41("STRING_1869899424");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_41);
    InstrumentLeg_41.insert(LegStateOrProvinceOfIssue_41.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_41("JPY");
    noLegs_0_1.set(LegStrikeCurrency_41);
    InstrumentLeg_41.insert(LegStrikeCurrency_41.getString());
    FIX::LegStrikePrice LegStrikePrice_41;
    LegStrikePrice_41.setString("10710220");
    noLegs_0_1.set(LegStrikePrice_41);
    InstrumentLeg_41.insert(LegStrikePrice_41.getString());
    FIX::LegSymbol LegSymbol_41("STRING_30803808");
    noLegs_0_1.set(LegSymbol_41);
    InstrumentLeg_41.insert(LegSymbol_41.getString());
    FIX::LegSymbolSfx LegSymbolSfx_41("STRING_1999323959");
    noLegs_0_1.set(LegSymbolSfx_41);
    InstrumentLeg_41.insert(LegSymbolSfx_41.getString());
    FIX::LegTimeUnit LegTimeUnit_41("STRING_1510503653");
    noLegs_0_1.set(LegTimeUnit_41);
    InstrumentLeg_41.insert(LegTimeUnit_41.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_41("STRING_882331632");
    noLegs_0_1.set(LegUnitOfMeasure_41);
    InstrumentLeg_41.insert(LegUnitOfMeasure_41.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_41;
    LegUnitOfMeasureQty_41.setString("10827230");
    noLegs_0_1.set(LegUnitOfMeasureQty_41);
    InstrumentLeg_41.insert(LegUnitOfMeasureQty_41.getString());
    all_values.push_back(InstrumentLeg_41);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_89;
      FIX::LegSecurityAltID LegSecurityAltID_89("STRING_175257505");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_89);
      LegSecAltIDGrp_NoLegSecurityAltID_89.insert(LegSecurityAltID_89.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_89("STRING_159205223");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_89);
      LegSecAltIDGrp_NoLegSecurityAltID_89.insert(LegSecurityAltIDSource_89.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_89);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_90;
      FIX::LegSecurityAltID LegSecurityAltID_90("STRING_1122483193");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_90);
      LegSecAltIDGrp_NoLegSecurityAltID_90.insert(LegSecurityAltID_90.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_90("STRING_580720415");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_90);
      LegSecAltIDGrp_NoLegSecurityAltID_90.insert(LegSecurityAltIDSource_90.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_90);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_91;
      FIX::LegSecurityAltID LegSecurityAltID_91("STRING_1652436618");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_91);
      LegSecAltIDGrp_NoLegSecurityAltID_91.insert(LegSecurityAltID_91.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_91("STRING_321825974");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_91);
      LegSecAltIDGrp_NoLegSecurityAltID_91.insert(LegSecurityAltIDSource_91.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_91);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::Email::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_42;
    FIX::EncodedLegIssuer EncodedLegIssuer_42("DATA_1804077723");
    noLegs_0_2.set(EncodedLegIssuer_42);
    InstrumentLeg_42.insert(EncodedLegIssuer_42.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_42(1428897001);
    noLegs_0_2.set(EncodedLegIssuerLen_42);
    InstrumentLeg_42.insert(EncodedLegIssuerLen_42.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_42("DATA_1907507838");
    noLegs_0_2.set(EncodedLegSecurityDesc_42);
    InstrumentLeg_42.insert(EncodedLegSecurityDesc_42.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_42(1913188161);
    noLegs_0_2.set(EncodedLegSecurityDescLen_42);
    InstrumentLeg_42.insert(EncodedLegSecurityDescLen_42.getString());
    FIX::LegCFICode LegCFICode_42("STRING_1711987998");
    noLegs_0_2.set(LegCFICode_42);
    InstrumentLeg_42.insert(LegCFICode_42.getString());
    FIX::LegContractMultiplier LegContractMultiplier_42;
    LegContractMultiplier_42.setString("3933974");
    noLegs_0_2.set(LegContractMultiplier_42);
    InstrumentLeg_42.insert(LegContractMultiplier_42.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_42(1982603968);
    noLegs_0_2.set(LegContractMultiplierUnit_42);
    InstrumentLeg_42.insert(LegContractMultiplierUnit_42.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_42("MONTHYEAR_1433290191");
    noLegs_0_2.set(LegContractSettlMonth_42);
    InstrumentLeg_42.insert(LegContractSettlMonth_42.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_42("COUNTRY_553049902");
    noLegs_0_2.set(LegCountryOfIssue_42);
    InstrumentLeg_42.insert(LegCountryOfIssue_42.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_42("LOCALMKTDATE_472824619");
    noLegs_0_2.set(LegCouponPaymentDate_42);
    InstrumentLeg_42.insert(LegCouponPaymentDate_42.getString());
    FIX::LegCouponRate LegCouponRate_42;
    LegCouponRate_42.setString("46.480000");
    noLegs_0_2.set(LegCouponRate_42);
    InstrumentLeg_42.insert(LegCouponRate_42.getString());
    FIX::LegCreditRating LegCreditRating_42("STRING_884295194");
    noLegs_0_2.set(LegCreditRating_42);
    InstrumentLeg_42.insert(LegCreditRating_42.getString());
    FIX::LegCurrency LegCurrency_42("CAN");
    noLegs_0_2.set(LegCurrency_42);
    InstrumentLeg_42.insert(LegCurrency_42.getString());
    FIX::LegDatedDate LegDatedDate_42("LOCALMKTDATE_722030809");
    noLegs_0_2.set(LegDatedDate_42);
    InstrumentLeg_42.insert(LegDatedDate_42.getString());
    FIX::LegExerciseStyle LegExerciseStyle_42(931269672);
    noLegs_0_2.set(LegExerciseStyle_42);
    InstrumentLeg_42.insert(LegExerciseStyle_42.getString());
    FIX::LegFactor LegFactor_42;
    LegFactor_42.setString("10661054");
    noLegs_0_2.set(LegFactor_42);
    InstrumentLeg_42.insert(LegFactor_42.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_42(1970557409);
    noLegs_0_2.set(LegFlowScheduleType_42);
    InstrumentLeg_42.insert(LegFlowScheduleType_42.getString());
    FIX::LegInstrRegistry LegInstrRegistry_42("STRING_2002291755");
    noLegs_0_2.set(LegInstrRegistry_42);
    InstrumentLeg_42.insert(LegInstrRegistry_42.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_42("LOCALMKTDATE_1096909239");
    noLegs_0_2.set(LegInterestAccrualDate_42);
    InstrumentLeg_42.insert(LegInterestAccrualDate_42.getString());
    FIX::LegIssueDate LegIssueDate_42("LOCALMKTDATE_1822397720");
    noLegs_0_2.set(LegIssueDate_42);
    InstrumentLeg_42.insert(LegIssueDate_42.getString());
    FIX::LegIssuer LegIssuer_42("STRING_1365311760");
    noLegs_0_2.set(LegIssuer_42);
    InstrumentLeg_42.insert(LegIssuer_42.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_42("STRING_1979240871");
    noLegs_0_2.set(LegLocaleOfIssue_42);
    InstrumentLeg_42.insert(LegLocaleOfIssue_42.getString());
    FIX::LegMaturityDate LegMaturityDate_42("LOCALMKTDATE_757637125");
    noLegs_0_2.set(LegMaturityDate_42);
    InstrumentLeg_42.insert(LegMaturityDate_42.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_42("MONTHYEAR_1957759046");
    noLegs_0_2.set(LegMaturityMonthYear_42);
    InstrumentLeg_42.insert(LegMaturityMonthYear_42.getString());
    FIX::LegMaturityTime LegMaturityTime_42("TZTIMEONLY_7014729");
    noLegs_0_2.set(LegMaturityTime_42);
    InstrumentLeg_42.insert(LegMaturityTime_42.getString());
    FIX::LegOptAttribute LegOptAttribute_42('9');
    noLegs_0_2.set(LegOptAttribute_42);
    InstrumentLeg_42.insert(LegOptAttribute_42.getString());
    FIX::LegOptionRatio LegOptionRatio_42;
    LegOptionRatio_42.setString("9327585");
    noLegs_0_2.set(LegOptionRatio_42);
    InstrumentLeg_42.insert(LegOptionRatio_42.getString());
    FIX::LegPool LegPool_42("STRING_587735144");
    noLegs_0_2.set(LegPool_42);
    InstrumentLeg_42.insert(LegPool_42.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_42("STRING_421795319");
    noLegs_0_2.set(LegPriceUnitOfMeasure_42);
    InstrumentLeg_42.insert(LegPriceUnitOfMeasure_42.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_42;
    LegPriceUnitOfMeasureQty_42.setString("12545845");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_42);
    InstrumentLeg_42.insert(LegPriceUnitOfMeasureQty_42.getString());
    FIX::LegProduct LegProduct_42(244329219);
    noLegs_0_2.set(LegProduct_42);
    InstrumentLeg_42.insert(LegProduct_42.getString());
    FIX::LegPutOrCall LegPutOrCall_42(1850692321);
    noLegs_0_2.set(LegPutOrCall_42);
    InstrumentLeg_42.insert(LegPutOrCall_42.getString());
    FIX::LegRatioQty LegRatioQty_42;
    LegRatioQty_42.setString("10146087");
    noLegs_0_2.set(LegRatioQty_42);
    InstrumentLeg_42.insert(LegRatioQty_42.getString());
    FIX::LegRedemptionDate LegRedemptionDate_42("LOCALMKTDATE_10033733");
    noLegs_0_2.set(LegRedemptionDate_42);
    InstrumentLeg_42.insert(LegRedemptionDate_42.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_42("STRING_1415196671");
    noLegs_0_2.set(LegRepoCollateralSecurityType_42);
    InstrumentLeg_42.insert(LegRepoCollateralSecurityType_42.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_42;
    LegRepurchaseRate_42.setString("62.420000");
    noLegs_0_2.set(LegRepurchaseRate_42);
    InstrumentLeg_42.insert(LegRepurchaseRate_42.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_42(1992637701);
    noLegs_0_2.set(LegRepurchaseTerm_42);
    InstrumentLeg_42.insert(LegRepurchaseTerm_42.getString());
    FIX::LegSecurityDesc LegSecurityDesc_42("STRING_701003214");
    noLegs_0_2.set(LegSecurityDesc_42);
    InstrumentLeg_42.insert(LegSecurityDesc_42.getString());
    FIX::LegSecurityExchange LegSecurityExchange_42("EXCHANGE_1961056144");
    noLegs_0_2.set(LegSecurityExchange_42);
    InstrumentLeg_42.insert(LegSecurityExchange_42.getString());
    FIX::LegSecurityID LegSecurityID_42("STRING_317978672");
    noLegs_0_2.set(LegSecurityID_42);
    InstrumentLeg_42.insert(LegSecurityID_42.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_42("STRING_106174214");
    noLegs_0_2.set(LegSecurityIDSource_42);
    InstrumentLeg_42.insert(LegSecurityIDSource_42.getString());
    FIX::LegSecuritySubType LegSecuritySubType_42("STRING_697867691");
    noLegs_0_2.set(LegSecuritySubType_42);
    InstrumentLeg_42.insert(LegSecuritySubType_42.getString());
    FIX::LegSecurityType LegSecurityType_42("STRING_1526832568");
    noLegs_0_2.set(LegSecurityType_42);
    InstrumentLeg_42.insert(LegSecurityType_42.getString());
    FIX::LegSide LegSide_42('1');
    noLegs_0_2.set(LegSide_42);
    InstrumentLeg_42.insert(LegSide_42.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_42("STRING_1419898500");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_42);
    InstrumentLeg_42.insert(LegStateOrProvinceOfIssue_42.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_42("CHF");
    noLegs_0_2.set(LegStrikeCurrency_42);
    InstrumentLeg_42.insert(LegStrikeCurrency_42.getString());
    FIX::LegStrikePrice LegStrikePrice_42;
    LegStrikePrice_42.setString("12429722");
    noLegs_0_2.set(LegStrikePrice_42);
    InstrumentLeg_42.insert(LegStrikePrice_42.getString());
    FIX::LegSymbol LegSymbol_42("STRING_165426700");
    noLegs_0_2.set(LegSymbol_42);
    InstrumentLeg_42.insert(LegSymbol_42.getString());
    FIX::LegSymbolSfx LegSymbolSfx_42("STRING_1598311230");
    noLegs_0_2.set(LegSymbolSfx_42);
    InstrumentLeg_42.insert(LegSymbolSfx_42.getString());
    FIX::LegTimeUnit LegTimeUnit_42("STRING_917886334");
    noLegs_0_2.set(LegTimeUnit_42);
    InstrumentLeg_42.insert(LegTimeUnit_42.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_42("STRING_1530738460");
    noLegs_0_2.set(LegUnitOfMeasure_42);
    InstrumentLeg_42.insert(LegUnitOfMeasure_42.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_42;
    LegUnitOfMeasureQty_42.setString("14300684");
    noLegs_0_2.set(LegUnitOfMeasureQty_42);
    InstrumentLeg_42.insert(LegUnitOfMeasureQty_42.getString());
    all_values.push_back(InstrumentLeg_42);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_92;
      FIX::LegSecurityAltID LegSecurityAltID_92("STRING_1341013858");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_92);
      LegSecAltIDGrp_NoLegSecurityAltID_92.insert(LegSecurityAltID_92.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_92("STRING_1437083183");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_92);
      LegSecAltIDGrp_NoLegSecurityAltID_92.insert(LegSecurityAltIDSource_92.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_92);

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
    FIX::EncodedText EncodedText_37("DATA_126288802");
    noLinesOfText_0_0.set(EncodedText_37);
    LinesOfTextGrp_NoLinesOfText_0.insert(EncodedText_37.getString());
    FIX::EncodedTextLen EncodedTextLen_37(2024818327);
    noLinesOfText_0_0.set(EncodedTextLen_37);
    LinesOfTextGrp_NoLinesOfText_0.insert(EncodedTextLen_37.getString());
    FIX::Text Text_37("STRING_866677480");
    noLinesOfText_0_0.set(Text_37);
    LinesOfTextGrp_NoLinesOfText_0.insert(Text_37.getString());
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_0);

    msg.addGroup(noLinesOfText_0_0);
  }
  {
    FIX50SP2::Email::NoLinesOfText noLinesOfText_0_1;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_1;
    FIX::EncodedText EncodedText_38("DATA_1380873367");
    noLinesOfText_0_1.set(EncodedText_38);
    LinesOfTextGrp_NoLinesOfText_1.insert(EncodedText_38.getString());
    FIX::EncodedTextLen EncodedTextLen_38(121663899);
    noLinesOfText_0_1.set(EncodedTextLen_38);
    LinesOfTextGrp_NoLinesOfText_1.insert(EncodedTextLen_38.getString());
    FIX::Text Text_38("STRING_569886153");
    noLinesOfText_0_1.set(Text_38);
    LinesOfTextGrp_NoLinesOfText_1.insert(Text_38.getString());
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_1);

    msg.addGroup(noLinesOfText_0_1);
  }
  {
    FIX50SP2::Email::NoLinesOfText noLinesOfText_0_2;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_2;
    FIX::EncodedText EncodedText_39("DATA_247998475");
    noLinesOfText_0_2.set(EncodedText_39);
    LinesOfTextGrp_NoLinesOfText_2.insert(EncodedText_39.getString());
    FIX::EncodedTextLen EncodedTextLen_39(131697632);
    noLinesOfText_0_2.set(EncodedTextLen_39);
    LinesOfTextGrp_NoLinesOfText_2.insert(EncodedTextLen_39.getString());
    FIX::Text Text_39("STRING_1985082825");
    noLinesOfText_0_2.set(Text_39);
    LinesOfTextGrp_NoLinesOfText_2.insert(Text_39.getString());
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_2);

    msg.addGroup(noLinesOfText_0_2);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::Email::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_0;
    FIX::RoutingID RoutingID_0("STRING_2124335333");
    noRoutingIDs_0_0.set(RoutingID_0);
    RoutingGrp_NoRoutingIDs_0.insert(RoutingID_0.getString());
    FIX::RoutingType RoutingType_0(4);
    noRoutingIDs_0_0.set(RoutingType_0);
    RoutingGrp_NoRoutingIDs_0.insert(RoutingType_0.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_0);

    msg.addGroup(noRoutingIDs_0_0);
  }
  {
    FIX50SP2::Email::NoRoutingIDs noRoutingIDs_0_1;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_1;
    FIX::RoutingID RoutingID_1("STRING_1469577213");
    noRoutingIDs_0_1.set(RoutingID_1);
    RoutingGrp_NoRoutingIDs_1.insert(RoutingID_1.getString());
    FIX::RoutingType RoutingType_1(3);
    noRoutingIDs_0_1.set(RoutingType_1);
    RoutingGrp_NoRoutingIDs_1.insert(RoutingType_1.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_1);

    msg.addGroup(noRoutingIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Email::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_37;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_37("DATA_19961256");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingIssuer_37.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_37(1821662926);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingIssuerLen_37.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_37("DATA_80073166");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingSecurityDesc_37.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_37(1439859757);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingSecurityDescLen_37.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_37;
    UnderlyingAdjustedQuantity_37.setString("21322815");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_37);
    UnderlyingInstrument_37.insert(UnderlyingAdjustedQuantity_37.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_37;
    UnderlyingAllocationPercent_37.setString("51.570000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_37);
    UnderlyingInstrument_37.insert(UnderlyingAllocationPercent_37.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_37;
    UnderlyingAttachmentPoint_37.setString("83.710000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_37);
    UnderlyingInstrument_37.insert(UnderlyingAttachmentPoint_37.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_37("STRING_150224571");
    noUnderlyings_0_0.set(UnderlyingCFICode_37);
    UnderlyingInstrument_37.insert(UnderlyingCFICode_37.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_37("STRING_32302739");
    noUnderlyings_0_0.set(UnderlyingCPProgram_37);
    UnderlyingInstrument_37.insert(UnderlyingCPProgram_37.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_37("STRING_1453234705");
    noUnderlyings_0_0.set(UnderlyingCPRegType_37);
    UnderlyingInstrument_37.insert(UnderlyingCPRegType_37.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_37;
    UnderlyingCapValue_37.setString("16809630");
    noUnderlyings_0_0.set(UnderlyingCapValue_37);
    UnderlyingInstrument_37.insert(UnderlyingCapValue_37.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_37;
    UnderlyingCashAmount_37.setString("14623711");
    noUnderlyings_0_0.set(UnderlyingCashAmount_37);
    UnderlyingInstrument_37.insert(UnderlyingCashAmount_37.getString());
    FIX::UnderlyingCashType UnderlyingCashType_37("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_37);
    UnderlyingInstrument_37.insert(UnderlyingCashType_37.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_37;
    UnderlyingContractMultiplier_37.setString("8744932");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_37);
    UnderlyingInstrument_37.insert(UnderlyingContractMultiplier_37.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_37(751970728);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_37);
    UnderlyingInstrument_37.insert(UnderlyingContractMultiplierUnit_37.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_37("COUNTRY_1426156678");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_37);
    UnderlyingInstrument_37.insert(UnderlyingCountryOfIssue_37.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_37("LOCALMKTDATE_1000782044");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_37);
    UnderlyingInstrument_37.insert(UnderlyingCouponPaymentDate_37.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_37;
    UnderlyingCouponRate_37.setString("54.080000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_37);
    UnderlyingInstrument_37.insert(UnderlyingCouponRate_37.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_37("STRING_145350511");
    noUnderlyings_0_0.set(UnderlyingCreditRating_37);
    UnderlyingInstrument_37.insert(UnderlyingCreditRating_37.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_37("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_37);
    UnderlyingInstrument_37.insert(UnderlyingCurrency_37.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_37;
    UnderlyingCurrentValue_37.setString("7152366");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_37);
    UnderlyingInstrument_37.insert(UnderlyingCurrentValue_37.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_37;
    UnderlyingDetachmentPoint_37.setString("2.380000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_37);
    UnderlyingInstrument_37.insert(UnderlyingDetachmentPoint_37.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_37;
    UnderlyingDirtyPrice_37.setString("8826669");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_37);
    UnderlyingInstrument_37.insert(UnderlyingDirtyPrice_37.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_37;
    UnderlyingEndPrice_37.setString("5528358");
    noUnderlyings_0_0.set(UnderlyingEndPrice_37);
    UnderlyingInstrument_37.insert(UnderlyingEndPrice_37.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_37;
    UnderlyingEndValue_37.setString("21381749");
    noUnderlyings_0_0.set(UnderlyingEndValue_37);
    UnderlyingInstrument_37.insert(UnderlyingEndValue_37.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_37(859518624);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_37);
    UnderlyingInstrument_37.insert(UnderlyingExerciseStyle_37.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_37;
    UnderlyingFXRate_37.setString("10914382");
    noUnderlyings_0_0.set(UnderlyingFXRate_37);
    UnderlyingInstrument_37.insert(UnderlyingFXRate_37.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_37('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_37);
    UnderlyingInstrument_37.insert(UnderlyingFXRateCalc_37.getString());
    FIX::UnderlyingFactor UnderlyingFactor_37;
    UnderlyingFactor_37.setString("11543489");
    noUnderlyings_0_0.set(UnderlyingFactor_37);
    UnderlyingInstrument_37.insert(UnderlyingFactor_37.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_37(1736214839);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_37);
    UnderlyingInstrument_37.insert(UnderlyingFlowScheduleType_37.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_37("STRING_1480229777");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_37);
    UnderlyingInstrument_37.insert(UnderlyingInstrRegistry_37.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_37("LOCALMKTDATE_828528261");
    noUnderlyings_0_0.set(UnderlyingIssueDate_37);
    UnderlyingInstrument_37.insert(UnderlyingIssueDate_37.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_37("STRING_1816288005");
    noUnderlyings_0_0.set(UnderlyingIssuer_37);
    UnderlyingInstrument_37.insert(UnderlyingIssuer_37.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_37("STRING_772605886");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_37);
    UnderlyingInstrument_37.insert(UnderlyingLocaleOfIssue_37.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_37("LOCALMKTDATE_813326132");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_37);
    UnderlyingInstrument_37.insert(UnderlyingMaturityDate_37.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_37("MONTHYEAR_250279514");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_37);
    UnderlyingInstrument_37.insert(UnderlyingMaturityMonthYear_37.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_37("TZTIMEONLY_1307954257");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_37);
    UnderlyingInstrument_37.insert(UnderlyingMaturityTime_37.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_37;
    UnderlyingNotionalPercentageOutstanding_37.setString("7.040000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_37);
    UnderlyingInstrument_37.insert(UnderlyingNotionalPercentageOutstanding_37.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_37('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_37);
    UnderlyingInstrument_37.insert(UnderlyingOptAttribute_37.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_37;
    UnderlyingOriginalNotionalPercentageOutstanding_37.setString("53.150000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_37);
    UnderlyingInstrument_37.insert(UnderlyingOriginalNotionalPercentageOutstanding_37.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_37("STRING_497030087");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_37);
    UnderlyingInstrument_37.insert(UnderlyingPriceUnitOfMeasure_37.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_37;
    UnderlyingPriceUnitOfMeasureQty_37.setString("17449534");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_37);
    UnderlyingInstrument_37.insert(UnderlyingPriceUnitOfMeasureQty_37.getString());
    FIX::UnderlyingProduct UnderlyingProduct_37(1594979832);
    noUnderlyings_0_0.set(UnderlyingProduct_37);
    UnderlyingInstrument_37.insert(UnderlyingProduct_37.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_37(1371523329);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_37);
    UnderlyingInstrument_37.insert(UnderlyingPutOrCall_37.getString());
    FIX::UnderlyingPx UnderlyingPx_37;
    UnderlyingPx_37.setString("3494405");
    noUnderlyings_0_0.set(UnderlyingPx_37);
    UnderlyingInstrument_37.insert(UnderlyingPx_37.getString());
    FIX::UnderlyingQty UnderlyingQty_37;
    UnderlyingQty_37.setString("8736528");
    noUnderlyings_0_0.set(UnderlyingQty_37);
    UnderlyingInstrument_37.insert(UnderlyingQty_37.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_37("LOCALMKTDATE_224821725");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_37);
    UnderlyingInstrument_37.insert(UnderlyingRedemptionDate_37.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_37("STRING_978745935");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_37);
    UnderlyingInstrument_37.insert(UnderlyingRepoCollateralSecurityType_37.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_37;
    UnderlyingRepurchaseRate_37.setString("33.740000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_37);
    UnderlyingInstrument_37.insert(UnderlyingRepurchaseRate_37.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_37(458993489);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_37);
    UnderlyingInstrument_37.insert(UnderlyingRepurchaseTerm_37.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_37("STRING_1729715242");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_37);
    UnderlyingInstrument_37.insert(UnderlyingRestructuringType_37.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_37("STRING_1734240038");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityDesc_37.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_37("EXCHANGE_941163727");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityExchange_37.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_37("STRING_464898533");
    noUnderlyings_0_0.set(UnderlyingSecurityID_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityID_37.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_37("STRING_139592232");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityIDSource_37.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_37("STRING_931855035");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_37);
    UnderlyingInstrument_37.insert(UnderlyingSecuritySubType_37.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_37("STRING_1324417158");
    noUnderlyings_0_0.set(UnderlyingSecurityType_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityType_37.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_37("STRING_1231030465");
    noUnderlyings_0_0.set(UnderlyingSeniority_37);
    UnderlyingInstrument_37.insert(UnderlyingSeniority_37.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_37("STRING_244639908");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_37);
    UnderlyingInstrument_37.insert(UnderlyingSettlMethod_37.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_37(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_37);
    UnderlyingInstrument_37.insert(UnderlyingSettlementType_37.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_37;
    UnderlyingStartValue_37.setString("8197616");
    noUnderlyings_0_0.set(UnderlyingStartValue_37);
    UnderlyingInstrument_37.insert(UnderlyingStartValue_37.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_37("STRING_1724869685");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_37);
    UnderlyingInstrument_37.insert(UnderlyingStateOrProvinceOfIssue_37.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_37("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_37);
    UnderlyingInstrument_37.insert(UnderlyingStrikeCurrency_37.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_37;
    UnderlyingStrikePrice_37.setString("3499919");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_37);
    UnderlyingInstrument_37.insert(UnderlyingStrikePrice_37.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_37("STRING_1973136886");
    noUnderlyings_0_0.set(UnderlyingSymbol_37);
    UnderlyingInstrument_37.insert(UnderlyingSymbol_37.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_37("STRING_738845527");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_37);
    UnderlyingInstrument_37.insert(UnderlyingSymbolSfx_37.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_37("STRING_1657946181");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_37);
    UnderlyingInstrument_37.insert(UnderlyingTimeUnit_37.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_37("STRING_789203942");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_37);
    UnderlyingInstrument_37.insert(UnderlyingUnitOfMeasure_37.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_37;
    UnderlyingUnitOfMeasureQty_37.setString("10214277");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_37);
    UnderlyingInstrument_37.insert(UnderlyingUnitOfMeasureQty_37.getString());
    all_values.push_back(UnderlyingInstrument_37);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_80;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_80("STRING_1286234029");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_80);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_80.insert(UnderlyingSecurityAltID_80.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_80("STRING_618897579");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_80);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_80.insert(UnderlyingSecurityAltIDSource_80.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_80);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_81;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_81("STRING_1719147681");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_81);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_81.insert(UnderlyingSecurityAltID_81.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_81("STRING_510273711");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_81);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_81.insert(UnderlyingSecurityAltIDSource_81.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_81);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_82;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_82("STRING_968338107");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_82);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_82.insert(UnderlyingSecurityAltID_82.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_82("STRING_445316896");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_82);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_82.insert(UnderlyingSecurityAltIDSource_82.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_82);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_71;
      FIX::UnderlyingStipType UnderlyingStipType_71("STRING_1947084042");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_71);
      UnderlyingStipulations_NoUnderlyingStips_71.insert(UnderlyingStipType_71.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_71("STRING_1464320270");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_71);
      UnderlyingStipulations_NoUnderlyingStips_71.insert(UnderlyingStipValue_71.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_71);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_74;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_74("STRING_1529315637");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_74);
      UndlyInstrumentParties_NoUndlyInstrumentParties_74.insert(UnderlyingInstrumentPartyID_74.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_74('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_74);
      UndlyInstrumentParties_NoUndlyInstrumentParties_74.insert(UnderlyingInstrumentPartyIDSource_74.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_74(2135252653);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_74);
      UndlyInstrumentParties_NoUndlyInstrumentParties_74.insert(UnderlyingInstrumentPartyRole_74.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_74);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_157("STRING_1190668892");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_157);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157.insert(UnderlyingInstrumentPartySubID_157.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_157(919624040);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_157);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157.insert(UnderlyingInstrumentPartySubIDType_157.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_158("STRING_1171147680");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_158);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158.insert(UnderlyingInstrumentPartySubID_158.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_158(274215709);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_158);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158.insert(UnderlyingInstrumentPartySubIDType_158.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_159("STRING_1164263948");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_159);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159.insert(UnderlyingInstrumentPartySubID_159.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_159(1502430173);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_159);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159.insert(UnderlyingInstrumentPartySubIDType_159.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_75;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_75("STRING_1093977365");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_75);
      UndlyInstrumentParties_NoUndlyInstrumentParties_75.insert(UnderlyingInstrumentPartyID_75.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_75('7');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_75);
      UndlyInstrumentParties_NoUndlyInstrumentParties_75.insert(UnderlyingInstrumentPartyIDSource_75.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_75(514757278);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_75);
      UndlyInstrumentParties_NoUndlyInstrumentParties_75.insert(UnderlyingInstrumentPartyRole_75.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_75);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_160("STRING_1091641909");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_160);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160.insert(UnderlyingInstrumentPartySubID_160.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_160(340410516);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_160);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160.insert(UnderlyingInstrumentPartySubIDType_160.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_161("STRING_173905257");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_161);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161.insert(UnderlyingInstrumentPartySubID_161.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_161(602104443);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_161);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161.insert(UnderlyingInstrumentPartySubIDType_161.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_76;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_76("STRING_1129614458");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_76);
      UndlyInstrumentParties_NoUndlyInstrumentParties_76.insert(UnderlyingInstrumentPartyID_76.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_76('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_76);
      UndlyInstrumentParties_NoUndlyInstrumentParties_76.insert(UnderlyingInstrumentPartyIDSource_76.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_76(726272291);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_76);
      UndlyInstrumentParties_NoUndlyInstrumentParties_76.insert(UnderlyingInstrumentPartyRole_76.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_76);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_162("STRING_1814230617");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_162);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162.insert(UnderlyingInstrumentPartySubID_162.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_162(297936324);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_162);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162.insert(UnderlyingInstrumentPartySubIDType_162.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_163("STRING_778638551");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_163);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163.insert(UnderlyingInstrumentPartySubID_163.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_163(635085076);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_163);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163.insert(UnderlyingInstrumentPartySubIDType_163.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_164("STRING_743253220");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_164);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164.insert(UnderlyingInstrumentPartySubID_164.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_164(1513733987);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_164);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164.insert(UnderlyingInstrumentPartySubIDType_164.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::Email::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_38;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_38("DATA_434685471");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingIssuer_38.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_38(60089842);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingIssuerLen_38.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_38("DATA_560339265");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingSecurityDesc_38.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_38(1964001108);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingSecurityDescLen_38.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_38;
    UnderlyingAdjustedQuantity_38.setString("11111665");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_38);
    UnderlyingInstrument_38.insert(UnderlyingAdjustedQuantity_38.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_38;
    UnderlyingAllocationPercent_38.setString("82.700000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_38);
    UnderlyingInstrument_38.insert(UnderlyingAllocationPercent_38.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_38;
    UnderlyingAttachmentPoint_38.setString("16.300000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_38);
    UnderlyingInstrument_38.insert(UnderlyingAttachmentPoint_38.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_38("STRING_154351747");
    noUnderlyings_0_1.set(UnderlyingCFICode_38);
    UnderlyingInstrument_38.insert(UnderlyingCFICode_38.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_38("STRING_1467732310");
    noUnderlyings_0_1.set(UnderlyingCPProgram_38);
    UnderlyingInstrument_38.insert(UnderlyingCPProgram_38.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_38("STRING_834395663");
    noUnderlyings_0_1.set(UnderlyingCPRegType_38);
    UnderlyingInstrument_38.insert(UnderlyingCPRegType_38.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_38;
    UnderlyingCapValue_38.setString("4285674");
    noUnderlyings_0_1.set(UnderlyingCapValue_38);
    UnderlyingInstrument_38.insert(UnderlyingCapValue_38.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_38;
    UnderlyingCashAmount_38.setString("4845126");
    noUnderlyings_0_1.set(UnderlyingCashAmount_38);
    UnderlyingInstrument_38.insert(UnderlyingCashAmount_38.getString());
    FIX::UnderlyingCashType UnderlyingCashType_38("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_38);
    UnderlyingInstrument_38.insert(UnderlyingCashType_38.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_38;
    UnderlyingContractMultiplier_38.setString("15225448");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_38);
    UnderlyingInstrument_38.insert(UnderlyingContractMultiplier_38.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_38(1226162595);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_38);
    UnderlyingInstrument_38.insert(UnderlyingContractMultiplierUnit_38.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_38("COUNTRY_704099466");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_38);
    UnderlyingInstrument_38.insert(UnderlyingCountryOfIssue_38.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_38("LOCALMKTDATE_957604553");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_38);
    UnderlyingInstrument_38.insert(UnderlyingCouponPaymentDate_38.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_38;
    UnderlyingCouponRate_38.setString("8.570000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_38);
    UnderlyingInstrument_38.insert(UnderlyingCouponRate_38.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_38("STRING_1044509983");
    noUnderlyings_0_1.set(UnderlyingCreditRating_38);
    UnderlyingInstrument_38.insert(UnderlyingCreditRating_38.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_38("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_38);
    UnderlyingInstrument_38.insert(UnderlyingCurrency_38.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_38;
    UnderlyingCurrentValue_38.setString("266407");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_38);
    UnderlyingInstrument_38.insert(UnderlyingCurrentValue_38.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_38;
    UnderlyingDetachmentPoint_38.setString("92.000000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_38);
    UnderlyingInstrument_38.insert(UnderlyingDetachmentPoint_38.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_38;
    UnderlyingDirtyPrice_38.setString("14986975");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_38);
    UnderlyingInstrument_38.insert(UnderlyingDirtyPrice_38.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_38;
    UnderlyingEndPrice_38.setString("2950056");
    noUnderlyings_0_1.set(UnderlyingEndPrice_38);
    UnderlyingInstrument_38.insert(UnderlyingEndPrice_38.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_38;
    UnderlyingEndValue_38.setString("19935898");
    noUnderlyings_0_1.set(UnderlyingEndValue_38);
    UnderlyingInstrument_38.insert(UnderlyingEndValue_38.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_38(1796633916);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_38);
    UnderlyingInstrument_38.insert(UnderlyingExerciseStyle_38.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_38;
    UnderlyingFXRate_38.setString("10736441");
    noUnderlyings_0_1.set(UnderlyingFXRate_38);
    UnderlyingInstrument_38.insert(UnderlyingFXRate_38.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_38('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_38);
    UnderlyingInstrument_38.insert(UnderlyingFXRateCalc_38.getString());
    FIX::UnderlyingFactor UnderlyingFactor_38;
    UnderlyingFactor_38.setString("3924034");
    noUnderlyings_0_1.set(UnderlyingFactor_38);
    UnderlyingInstrument_38.insert(UnderlyingFactor_38.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_38(439894524);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_38);
    UnderlyingInstrument_38.insert(UnderlyingFlowScheduleType_38.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_38("STRING_915876717");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_38);
    UnderlyingInstrument_38.insert(UnderlyingInstrRegistry_38.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_38("LOCALMKTDATE_452493331");
    noUnderlyings_0_1.set(UnderlyingIssueDate_38);
    UnderlyingInstrument_38.insert(UnderlyingIssueDate_38.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_38("STRING_1000233789");
    noUnderlyings_0_1.set(UnderlyingIssuer_38);
    UnderlyingInstrument_38.insert(UnderlyingIssuer_38.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_38("STRING_732394177");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_38);
    UnderlyingInstrument_38.insert(UnderlyingLocaleOfIssue_38.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_38("LOCALMKTDATE_1563659834");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_38);
    UnderlyingInstrument_38.insert(UnderlyingMaturityDate_38.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_38("MONTHYEAR_1548342059");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_38);
    UnderlyingInstrument_38.insert(UnderlyingMaturityMonthYear_38.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_38("TZTIMEONLY_395642160");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_38);
    UnderlyingInstrument_38.insert(UnderlyingMaturityTime_38.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_38;
    UnderlyingNotionalPercentageOutstanding_38.setString("15.810000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_38);
    UnderlyingInstrument_38.insert(UnderlyingNotionalPercentageOutstanding_38.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_38('8');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_38);
    UnderlyingInstrument_38.insert(UnderlyingOptAttribute_38.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_38;
    UnderlyingOriginalNotionalPercentageOutstanding_38.setString("78.230000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_38);
    UnderlyingInstrument_38.insert(UnderlyingOriginalNotionalPercentageOutstanding_38.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_38("STRING_2146579038");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_38);
    UnderlyingInstrument_38.insert(UnderlyingPriceUnitOfMeasure_38.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_38;
    UnderlyingPriceUnitOfMeasureQty_38.setString("13531033");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_38);
    UnderlyingInstrument_38.insert(UnderlyingPriceUnitOfMeasureQty_38.getString());
    FIX::UnderlyingProduct UnderlyingProduct_38(1419380011);
    noUnderlyings_0_1.set(UnderlyingProduct_38);
    UnderlyingInstrument_38.insert(UnderlyingProduct_38.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_38(1521640213);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_38);
    UnderlyingInstrument_38.insert(UnderlyingPutOrCall_38.getString());
    FIX::UnderlyingPx UnderlyingPx_38;
    UnderlyingPx_38.setString("4317822");
    noUnderlyings_0_1.set(UnderlyingPx_38);
    UnderlyingInstrument_38.insert(UnderlyingPx_38.getString());
    FIX::UnderlyingQty UnderlyingQty_38;
    UnderlyingQty_38.setString("21234794");
    noUnderlyings_0_1.set(UnderlyingQty_38);
    UnderlyingInstrument_38.insert(UnderlyingQty_38.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_38("LOCALMKTDATE_331761118");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_38);
    UnderlyingInstrument_38.insert(UnderlyingRedemptionDate_38.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_38("STRING_602103135");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_38);
    UnderlyingInstrument_38.insert(UnderlyingRepoCollateralSecurityType_38.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_38;
    UnderlyingRepurchaseRate_38.setString("58.120000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_38);
    UnderlyingInstrument_38.insert(UnderlyingRepurchaseRate_38.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_38(1463270928);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_38);
    UnderlyingInstrument_38.insert(UnderlyingRepurchaseTerm_38.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_38("STRING_1374528435");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_38);
    UnderlyingInstrument_38.insert(UnderlyingRestructuringType_38.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_38("STRING_1047146606");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityDesc_38.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_38("EXCHANGE_1642630129");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityExchange_38.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_38("STRING_725742379");
    noUnderlyings_0_1.set(UnderlyingSecurityID_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityID_38.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_38("STRING_1342152239");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityIDSource_38.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_38("STRING_1488736299");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_38);
    UnderlyingInstrument_38.insert(UnderlyingSecuritySubType_38.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_38("STRING_374892647");
    noUnderlyings_0_1.set(UnderlyingSecurityType_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityType_38.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_38("STRING_268312776");
    noUnderlyings_0_1.set(UnderlyingSeniority_38);
    UnderlyingInstrument_38.insert(UnderlyingSeniority_38.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_38("STRING_1969927545");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_38);
    UnderlyingInstrument_38.insert(UnderlyingSettlMethod_38.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_38(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_38);
    UnderlyingInstrument_38.insert(UnderlyingSettlementType_38.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_38;
    UnderlyingStartValue_38.setString("7082073");
    noUnderlyings_0_1.set(UnderlyingStartValue_38);
    UnderlyingInstrument_38.insert(UnderlyingStartValue_38.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_38("STRING_738320615");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_38);
    UnderlyingInstrument_38.insert(UnderlyingStateOrProvinceOfIssue_38.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_38("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_38);
    UnderlyingInstrument_38.insert(UnderlyingStrikeCurrency_38.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_38;
    UnderlyingStrikePrice_38.setString("14707147");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_38);
    UnderlyingInstrument_38.insert(UnderlyingStrikePrice_38.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_38("STRING_635965652");
    noUnderlyings_0_1.set(UnderlyingSymbol_38);
    UnderlyingInstrument_38.insert(UnderlyingSymbol_38.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_38("STRING_1109299500");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_38);
    UnderlyingInstrument_38.insert(UnderlyingSymbolSfx_38.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_38("STRING_1866356952");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_38);
    UnderlyingInstrument_38.insert(UnderlyingTimeUnit_38.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_38("STRING_206493586");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_38);
    UnderlyingInstrument_38.insert(UnderlyingUnitOfMeasure_38.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_38;
    UnderlyingUnitOfMeasureQty_38.setString("19778902");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_38);
    UnderlyingInstrument_38.insert(UnderlyingUnitOfMeasureQty_38.getString());
    all_values.push_back(UnderlyingInstrument_38);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_83;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_83("STRING_205588976");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_83);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_83.insert(UnderlyingSecurityAltID_83.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_83("STRING_1183509904");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_83);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_83.insert(UnderlyingSecurityAltIDSource_83.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_83);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_72;
      FIX::UnderlyingStipType UnderlyingStipType_72("STRING_1727229189");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_72);
      UnderlyingStipulations_NoUnderlyingStips_72.insert(UnderlyingStipType_72.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_72("STRING_1615292182");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_72);
      UnderlyingStipulations_NoUnderlyingStips_72.insert(UnderlyingStipValue_72.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_72);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_73;
      FIX::UnderlyingStipType UnderlyingStipType_73("STRING_196803320");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_73);
      UnderlyingStipulations_NoUnderlyingStips_73.insert(UnderlyingStipType_73.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_73("STRING_2058990307");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_73);
      UnderlyingStipulations_NoUnderlyingStips_73.insert(UnderlyingStipValue_73.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_73);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_74;
      FIX::UnderlyingStipType UnderlyingStipType_74("STRING_69911670");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_74);
      UnderlyingStipulations_NoUnderlyingStips_74.insert(UnderlyingStipType_74.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_74("STRING_1217309132");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_74);
      UnderlyingStipulations_NoUnderlyingStips_74.insert(UnderlyingStipValue_74.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_74);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_77;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_77("STRING_1444440105");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_77);
      UndlyInstrumentParties_NoUndlyInstrumentParties_77.insert(UnderlyingInstrumentPartyID_77.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_77('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_77);
      UndlyInstrumentParties_NoUndlyInstrumentParties_77.insert(UnderlyingInstrumentPartyIDSource_77.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_77(869924069);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_77);
      UndlyInstrumentParties_NoUndlyInstrumentParties_77.insert(UnderlyingInstrumentPartyRole_77.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_77);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_165("STRING_1459124330");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_165);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165.insert(UnderlyingInstrumentPartySubID_165.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_165(211176720);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_165);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165.insert(UnderlyingInstrumentPartySubIDType_165.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_166("STRING_397591483");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_166);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166.insert(UnderlyingInstrumentPartySubID_166.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_166(1727437106);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_166);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166.insert(UnderlyingInstrumentPartySubIDType_166.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_167("STRING_33620617");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_167);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167.insert(UnderlyingInstrumentPartySubID_167.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_167(1164887619);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_167);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167.insert(UnderlyingInstrumentPartySubIDType_167.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
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
