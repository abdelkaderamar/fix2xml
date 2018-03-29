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
  multiset<string> all_compo_names;
  multiset<string> Email_0;
  FIX::ClOrdID ClOrdID_20("STRING_1841459179");
  msg.set(ClOrdID_20);
  Email_0.insert(ClOrdID_20.getString());
  FIX::EmailThreadID EmailThreadID_0("STRING_1002743827");
  msg.set(EmailThreadID_0);
  Email_0.insert(EmailThreadID_0.getString());
  FIX::EmailType EmailType_0('1');
  msg.set(EmailType_0);
  Email_0.insert(EmailType_0.getString());
  FIX::EncodedSubject EncodedSubject_0("DATA_544712472");
  msg.set(EncodedSubject_0);
  Email_0.insert(EncodedSubject_0.getString());
  FIX::EncodedSubjectLen EncodedSubjectLen_0(1775500031);
  msg.set(EncodedSubjectLen_0);
  Email_0.insert(EncodedSubjectLen_0.getString());
  FIX::OrderID OrderID_19("STRING_1463206697");
  msg.set(OrderID_19);
  Email_0.insert(OrderID_19.getString());
  FIX::OrigTime OrigTime_0(FIX::UTCTIMESTAMP(0, 30, 52, 7, 10, 2008));
  msg.set(OrigTime_0);
  Email_0.insert(OrigTime_0.getString());
  FIX::RawData RawData_0("DATA_166459152");
  msg.set(RawData_0);
  Email_0.insert(RawData_0.getString());
  FIX::RawDataLength RawDataLength_0(753783702);
  msg.set(RawDataLength_0);
  Email_0.insert(RawDataLength_0.getString());
  FIX::Subject Subject_0("STRING_1006475898");
  msg.set(Subject_0);
  Email_0.insert(Subject_0.getString());
  all_values.push_back(Email_0);

  all_compo_names.insert("Email");

  // InstrmtGrp
  // Group InstrmtGrp.NoRelatedSym
  {
    FIX50SP2::Email::NoRelatedSym noRelatedSym_0_0;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_22;
    FIX::AttachmentPoint AttachmentPoint_22;
    AttachmentPoint_22.setString("95.040000");
    noRelatedSym_0_0.set(AttachmentPoint_22);
    Instrument_22.insert(AttachmentPoint_22.getString());
    FIX::CFICode CFICode_22("STRING_410568565");
    noRelatedSym_0_0.set(CFICode_22);
    Instrument_22.insert(CFICode_22.getString());
    FIX::CPProgram CPProgram_22(1);
    noRelatedSym_0_0.set(CPProgram_22);
    Instrument_22.insert(CPProgram_22.getString());
    FIX::CPRegType CPRegType_22("STRING_1611424906");
    noRelatedSym_0_0.set(CPRegType_22);
    Instrument_22.insert(CPRegType_22.getString());
    FIX::CapPrice CapPrice_22;
    CapPrice_22.setString("15355420");
    noRelatedSym_0_0.set(CapPrice_22);
    Instrument_22.insert(CapPrice_22.getString());
    FIX::ContractMultiplier ContractMultiplier_22;
    ContractMultiplier_22.setString("4931374");
    noRelatedSym_0_0.set(ContractMultiplier_22);
    Instrument_22.insert(ContractMultiplier_22.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_22(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_22);
    Instrument_22.insert(ContractMultiplierUnit_22.getString());
    FIX::ContractSettlMonth ContractSettlMonth_22("MONTHYEAR_1467193223");
    noRelatedSym_0_0.set(ContractSettlMonth_22);
    Instrument_22.insert(ContractSettlMonth_22.getString());
    FIX::CountryOfIssue CountryOfIssue_22("COUNTRY_1382617421");
    noRelatedSym_0_0.set(CountryOfIssue_22);
    Instrument_22.insert(CountryOfIssue_22.getString());
    FIX::CouponPaymentDate CouponPaymentDate_22("LOCALMKTDATE_661208956");
    noRelatedSym_0_0.set(CouponPaymentDate_22);
    Instrument_22.insert(CouponPaymentDate_22.getString());
    FIX::CouponRate CouponRate_22;
    CouponRate_22.setString("7.270000");
    noRelatedSym_0_0.set(CouponRate_22);
    Instrument_22.insert(CouponRate_22.getString());
    FIX::CreditRating CreditRating_22("STRING_1023625494");
    noRelatedSym_0_0.set(CreditRating_22);
    Instrument_22.insert(CreditRating_22.getString());
    FIX::DatedDate DatedDate_22("LOCALMKTDATE_1618406443");
    noRelatedSym_0_0.set(DatedDate_22);
    Instrument_22.insert(DatedDate_22.getString());
    FIX::DetachmentPoint DetachmentPoint_22;
    DetachmentPoint_22.setString("8.320000");
    noRelatedSym_0_0.set(DetachmentPoint_22);
    Instrument_22.insert(DetachmentPoint_22.getString());
    FIX::EncodedIssuer EncodedIssuer_22("DATA_717601025");
    noRelatedSym_0_0.set(EncodedIssuer_22);
    Instrument_22.insert(EncodedIssuer_22.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_22(473666622);
    noRelatedSym_0_0.set(EncodedIssuerLen_22);
    Instrument_22.insert(EncodedIssuerLen_22.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_22("DATA_1937606782");
    noRelatedSym_0_0.set(EncodedSecurityDesc_22);
    Instrument_22.insert(EncodedSecurityDesc_22.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_22(1262313497);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_22);
    Instrument_22.insert(EncodedSecurityDescLen_22.getString());
    FIX::ExerciseStyle ExerciseStyle_22(1);
    noRelatedSym_0_0.set(ExerciseStyle_22);
    Instrument_22.insert(ExerciseStyle_22.getString());
    FIX::Factor Factor_22;
    Factor_22.setString("12533298");
    noRelatedSym_0_0.set(Factor_22);
    Instrument_22.insert(Factor_22.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_22(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_22);
    Instrument_22.insert(FlexProductEligibilityIndicator_22.getString());
    FIX::FlexibleIndicator FlexibleIndicator_22(true);
    noRelatedSym_0_0.set(FlexibleIndicator_22);
    Instrument_22.insert(FlexibleIndicator_22.getString());
    FIX::FloorPrice FloorPrice_22;
    FloorPrice_22.setString("5144479");
    noRelatedSym_0_0.set(FloorPrice_22);
    Instrument_22.insert(FloorPrice_22.getString());
    FIX::FlowScheduleType FlowScheduleType_22(0);
    noRelatedSym_0_0.set(FlowScheduleType_22);
    Instrument_22.insert(FlowScheduleType_22.getString());
    FIX::InstrRegistry InstrRegistry_22("STRING_1271283953");
    noRelatedSym_0_0.set(InstrRegistry_22);
    Instrument_22.insert(InstrRegistry_22.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_22('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_22);
    Instrument_22.insert(InstrmtAssignmentMethod_22.getString());
    FIX::InterestAccrualDate InterestAccrualDate_22("LOCALMKTDATE_878030764");
    noRelatedSym_0_0.set(InterestAccrualDate_22);
    Instrument_22.insert(InterestAccrualDate_22.getString());
    FIX::IssueDate IssueDate_22("LOCALMKTDATE_1437743105");
    noRelatedSym_0_0.set(IssueDate_22);
    Instrument_22.insert(IssueDate_22.getString());
    FIX::Issuer Issuer_22("STRING_1953606825");
    noRelatedSym_0_0.set(Issuer_22);
    Instrument_22.insert(Issuer_22.getString());
    FIX::ListMethod ListMethod_22(0);
    noRelatedSym_0_0.set(ListMethod_22);
    Instrument_22.insert(ListMethod_22.getString());
    FIX::LocaleOfIssue LocaleOfIssue_22("STRING_1440311644");
    noRelatedSym_0_0.set(LocaleOfIssue_22);
    Instrument_22.insert(LocaleOfIssue_22.getString());
    FIX::MaturityDate MaturityDate_22("LOCALMKTDATE_1047552682");
    noRelatedSym_0_0.set(MaturityDate_22);
    Instrument_22.insert(MaturityDate_22.getString());
    FIX::MaturityMonthYear MaturityMonthYear_22("MONTHYEAR_147591579");
    noRelatedSym_0_0.set(MaturityMonthYear_22);
    Instrument_22.insert(MaturityMonthYear_22.getString());
    FIX::MaturityTime MaturityTime_22("TZTIMEONLY_864012839");
    noRelatedSym_0_0.set(MaturityTime_22);
    Instrument_22.insert(MaturityTime_22.getString());
    FIX::MinPriceIncrement MinPriceIncrement_22;
    MinPriceIncrement_22.setString("5114939");
    noRelatedSym_0_0.set(MinPriceIncrement_22);
    Instrument_22.insert(MinPriceIncrement_22.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_22;
    MinPriceIncrementAmount_22.setString("16831336");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_22);
    Instrument_22.insert(MinPriceIncrementAmount_22.getString());
    FIX::NTPositionLimit NTPositionLimit_22(1357150240);
    noRelatedSym_0_0.set(NTPositionLimit_22);
    Instrument_22.insert(NTPositionLimit_22.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_22;
    NotionalPercentageOutstanding_22.setString("69.120000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_22);
    Instrument_22.insert(NotionalPercentageOutstanding_22.getString());
    FIX::OptAttribute OptAttribute_22('1');
    noRelatedSym_0_0.set(OptAttribute_22);
    Instrument_22.insert(OptAttribute_22.getString());
    FIX::OptPayoutAmount OptPayoutAmount_22;
    OptPayoutAmount_22.setString("5922840");
    noRelatedSym_0_0.set(OptPayoutAmount_22);
    Instrument_22.insert(OptPayoutAmount_22.getString());
    FIX::OptPayoutType OptPayoutType_22(3);
    noRelatedSym_0_0.set(OptPayoutType_22);
    Instrument_22.insert(OptPayoutType_22.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_22;
    OriginalNotionalPercentageOutstanding_22.setString("3.180000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_22);
    Instrument_22.insert(OriginalNotionalPercentageOutstanding_22.getString());
    FIX::Pool Pool_22("STRING_1615909507");
    noRelatedSym_0_0.set(Pool_22);
    Instrument_22.insert(Pool_22.getString());
    FIX::PositionLimit PositionLimit_22(830038663);
    noRelatedSym_0_0.set(PositionLimit_22);
    Instrument_22.insert(PositionLimit_22.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_22("STRING_PCTPAR");
    noRelatedSym_0_0.set(PriceQuoteMethod_22);
    Instrument_22.insert(PriceQuoteMethod_22.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_22("STRING_186026884");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_22);
    Instrument_22.insert(PriceUnitOfMeasure_22.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_22;
    PriceUnitOfMeasureQty_22.setString("13037052");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_22);
    Instrument_22.insert(PriceUnitOfMeasureQty_22.getString());
    FIX::Product Product_24(12);
    noRelatedSym_0_0.set(Product_24);
    Instrument_22.insert(Product_24.getString());
    FIX::ProductComplex ProductComplex_22("STRING_1448340381");
    noRelatedSym_0_0.set(ProductComplex_22);
    Instrument_22.insert(ProductComplex_22.getString());
    FIX::PutOrCall PutOrCall_22(1);
    noRelatedSym_0_0.set(PutOrCall_22);
    Instrument_22.insert(PutOrCall_22.getString());
    FIX::RedemptionDate RedemptionDate_22("LOCALMKTDATE_549510469");
    noRelatedSym_0_0.set(RedemptionDate_22);
    Instrument_22.insert(RedemptionDate_22.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_22("STRING_2130742202");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_22);
    Instrument_22.insert(RepoCollateralSecurityType_22.getString());
    FIX::RepurchaseRate RepurchaseRate_22;
    RepurchaseRate_22.setString("97.780000");
    noRelatedSym_0_0.set(RepurchaseRate_22);
    Instrument_22.insert(RepurchaseRate_22.getString());
    FIX::RepurchaseTerm RepurchaseTerm_22(1063958444);
    noRelatedSym_0_0.set(RepurchaseTerm_22);
    Instrument_22.insert(RepurchaseTerm_22.getString());
    FIX::RestructuringType RestructuringType_22("STRING_FR");
    noRelatedSym_0_0.set(RestructuringType_22);
    Instrument_22.insert(RestructuringType_22.getString());
    FIX::SecurityDesc SecurityDesc_22("STRING_1605353731");
    noRelatedSym_0_0.set(SecurityDesc_22);
    Instrument_22.insert(SecurityDesc_22.getString());
    FIX::SecurityExchange SecurityExchange_22("EXCHANGE_116297919");
    noRelatedSym_0_0.set(SecurityExchange_22);
    Instrument_22.insert(SecurityExchange_22.getString());
    FIX::SecurityGroup SecurityGroup_22("STRING_1373636304");
    noRelatedSym_0_0.set(SecurityGroup_22);
    Instrument_22.insert(SecurityGroup_22.getString());
    FIX::SecurityID SecurityID_22("STRING_895613189");
    noRelatedSym_0_0.set(SecurityID_22);
    Instrument_22.insert(SecurityID_22.getString());
    FIX::SecurityIDSource SecurityIDSource_22("STRING_8");
    noRelatedSym_0_0.set(SecurityIDSource_22);
    Instrument_22.insert(SecurityIDSource_22.getString());
    FIX::SecurityStatus SecurityStatus_22("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_22);
    Instrument_22.insert(SecurityStatus_22.getString());
    FIX::SecuritySubType SecuritySubType_23("STRING_188441185");
    noRelatedSym_0_0.set(SecuritySubType_23);
    Instrument_22.insert(SecuritySubType_23.getString());
    FIX::SecurityType SecurityType_24("STRING_TBA");
    noRelatedSym_0_0.set(SecurityType_24);
    Instrument_22.insert(SecurityType_24.getString());
    FIX::Seniority Seniority_22("STRING_SD");
    noRelatedSym_0_0.set(Seniority_22);
    Instrument_22.insert(Seniority_22.getString());
    FIX::SettlMethod SettlMethod_22('C');
    noRelatedSym_0_0.set(SettlMethod_22);
    Instrument_22.insert(SettlMethod_22.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_22("STRING_1481467719");
    noRelatedSym_0_0.set(SettleOnOpenFlag_22);
    Instrument_22.insert(SettleOnOpenFlag_22.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_22("STRING_793900914");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_22);
    Instrument_22.insert(StateOrProvinceOfIssue_22.getString());
    FIX::StrikeCurrency StrikeCurrency_22("CAN");
    noRelatedSym_0_0.set(StrikeCurrency_22);
    Instrument_22.insert(StrikeCurrency_22.getString());
    FIX::StrikeMultiplier StrikeMultiplier_22;
    StrikeMultiplier_22.setString("17967441");
    noRelatedSym_0_0.set(StrikeMultiplier_22);
    Instrument_22.insert(StrikeMultiplier_22.getString());
    FIX::StrikePrice StrikePrice_22;
    StrikePrice_22.setString("8544046");
    noRelatedSym_0_0.set(StrikePrice_22);
    Instrument_22.insert(StrikePrice_22.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_22(2);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_22);
    Instrument_22.insert(StrikePriceBoundaryMethod_22.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_22;
    StrikePriceBoundaryPrecision_22.setString("8.240000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_22);
    Instrument_22.insert(StrikePriceBoundaryPrecision_22.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_22(1);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_22);
    Instrument_22.insert(StrikePriceDeterminationMethod_22.getString());
    FIX::StrikeValue StrikeValue_22;
    StrikeValue_22.setString("735618");
    noRelatedSym_0_0.set(StrikeValue_22);
    Instrument_22.insert(StrikeValue_22.getString());
    FIX::Symbol Symbol_22("STRING_1721281975");
    noRelatedSym_0_0.set(Symbol_22);
    Instrument_22.insert(Symbol_22.getString());
    FIX::SymbolSfx SymbolSfx_22("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_22);
    Instrument_22.insert(SymbolSfx_22.getString());
    FIX::TimeUnit TimeUnit_22("STRING_Min");
    noRelatedSym_0_0.set(TimeUnit_22);
    Instrument_22.insert(TimeUnit_22.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_22(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_22);
    Instrument_22.insert(UnderlyingPriceDeterminationMethod_22.getString());
    FIX::UnitOfMeasure UnitOfMeasure_22("STRING_Bbl");
    noRelatedSym_0_0.set(UnitOfMeasure_22);
    Instrument_22.insert(UnitOfMeasure_22.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_22;
    UnitOfMeasureQty_22.setString("6351717");
    noRelatedSym_0_0.set(UnitOfMeasureQty_22);
    Instrument_22.insert(UnitOfMeasureQty_22.getString());
    FIX::ValuationMethod ValuationMethod_22("STRING_FUTDA");
    noRelatedSym_0_0.set(ValuationMethod_22);
    Instrument_22.insert(ValuationMethod_22.getString());
    all_values.push_back(Instrument_22);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_47;
      FIX::ComplexEventCondition ComplexEventCondition_47(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_47);
      ComplexEvents_NoComplexEvents_47.insert(ComplexEventCondition_47.getString());
      FIX::ComplexEventPrice ComplexEventPrice_47;
      ComplexEventPrice_47.setString("4834478");
      noComplexEvents_0_1_0.set(ComplexEventPrice_47);
      ComplexEvents_NoComplexEvents_47.insert(ComplexEventPrice_47.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_47(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_47);
      ComplexEvents_NoComplexEvents_47.insert(ComplexEventPriceBoundaryMethod_47.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_47;
      ComplexEventPriceBoundaryPrecision_47.setString("16.560000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_47);
      ComplexEvents_NoComplexEvents_47.insert(ComplexEventPriceBoundaryPrecision_47.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_47(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_47);
      ComplexEvents_NoComplexEvents_47.insert(ComplexEventPriceTimeType_47.getString());
      FIX::ComplexEventType ComplexEventType_47(5);
      noComplexEvents_0_1_0.set(ComplexEventType_47);
      ComplexEvents_NoComplexEvents_47.insert(ComplexEventType_47.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_47;
      ComplexOptPayoutAmount_47.setString("13227248");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_47);
      ComplexEvents_NoComplexEvents_47.insert(ComplexOptPayoutAmount_47.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_47);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_95;
        FIX::ComplexEventEndDate ComplexEventEndDate_95(FIX::UTCTIMESTAMP(6, 13, 52, 15, 9, 2008));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_95);
        ComplexEventDates_NoComplexEventDates_95.insert(ComplexEventEndDate_95.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_95(FIX::UTCTIMESTAMP(7, 24, 53, 10, 9, 2013));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_95);
        ComplexEventDates_NoComplexEventDates_95.insert(ComplexEventStartDate_95.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_95);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_193;
          FIX::ComplexEventEndTime ComplexEventEndTime_193(FIX::UTCTIMEONLY(18, 8, 7));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_193);
          ComplexEventTimes_NoComplexEventTimes_193.insert(ComplexEventEndTime_193.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_193(FIX::UTCTIMEONLY(23, 1, 59));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_193);
          ComplexEventTimes_NoComplexEventTimes_193.insert(ComplexEventStartTime_193.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_193);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_96;
        FIX::ComplexEventEndDate ComplexEventEndDate_96(FIX::UTCTIMESTAMP(15, 31, 24, 25, 12, 2010));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_96);
        ComplexEventDates_NoComplexEventDates_96.insert(ComplexEventEndDate_96.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_96(FIX::UTCTIMESTAMP(14, 52, 37, 10, 8, 2009));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_96);
        ComplexEventDates_NoComplexEventDates_96.insert(ComplexEventStartDate_96.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_96);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_194;
          FIX::ComplexEventEndTime ComplexEventEndTime_194(FIX::UTCTIMEONLY(21, 49, 0));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_194);
          ComplexEventTimes_NoComplexEventTimes_194.insert(ComplexEventEndTime_194.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_194(FIX::UTCTIMEONLY(9, 53, 28));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_194);
          ComplexEventTimes_NoComplexEventTimes_194.insert(ComplexEventStartTime_194.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_194);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_195;
          FIX::ComplexEventEndTime ComplexEventEndTime_195(FIX::UTCTIMEONLY(11, 28, 59));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_195);
          ComplexEventTimes_NoComplexEventTimes_195.insert(ComplexEventEndTime_195.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_195(FIX::UTCTIMEONLY(15, 1, 22));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_195);
          ComplexEventTimes_NoComplexEventTimes_195.insert(ComplexEventStartTime_195.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_195);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_48;
      FIX::ComplexEventCondition ComplexEventCondition_48(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_48);
      ComplexEvents_NoComplexEvents_48.insert(ComplexEventCondition_48.getString());
      FIX::ComplexEventPrice ComplexEventPrice_48;
      ComplexEventPrice_48.setString("4516090");
      noComplexEvents_0_1_1.set(ComplexEventPrice_48);
      ComplexEvents_NoComplexEvents_48.insert(ComplexEventPrice_48.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_48(5);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_48);
      ComplexEvents_NoComplexEvents_48.insert(ComplexEventPriceBoundaryMethod_48.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_48;
      ComplexEventPriceBoundaryPrecision_48.setString("79.270000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_48);
      ComplexEvents_NoComplexEvents_48.insert(ComplexEventPriceBoundaryPrecision_48.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_48(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_48);
      ComplexEvents_NoComplexEvents_48.insert(ComplexEventPriceTimeType_48.getString());
      FIX::ComplexEventType ComplexEventType_48(9);
      noComplexEvents_0_1_1.set(ComplexEventType_48);
      ComplexEvents_NoComplexEvents_48.insert(ComplexEventType_48.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_48;
      ComplexOptPayoutAmount_48.setString("13759384");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_48);
      ComplexEvents_NoComplexEvents_48.insert(ComplexOptPayoutAmount_48.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_48);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_97;
        FIX::ComplexEventEndDate ComplexEventEndDate_97(FIX::UTCTIMESTAMP(2, 22, 10, 1, 12, 2017));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_97);
        ComplexEventDates_NoComplexEventDates_97.insert(ComplexEventEndDate_97.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_97(FIX::UTCTIMESTAMP(20, 24, 52, 4, 2, 2016));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_97);
        ComplexEventDates_NoComplexEventDates_97.insert(ComplexEventStartDate_97.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_97);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_196;
          FIX::ComplexEventEndTime ComplexEventEndTime_196(FIX::UTCTIMEONLY(9, 36, 56));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_196);
          ComplexEventTimes_NoComplexEventTimes_196.insert(ComplexEventEndTime_196.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_196(FIX::UTCTIMEONLY(15, 49, 31));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_196);
          ComplexEventTimes_NoComplexEventTimes_196.insert(ComplexEventStartTime_196.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_196);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_197;
          FIX::ComplexEventEndTime ComplexEventEndTime_197(FIX::UTCTIMEONLY(10, 25, 29));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_197);
          ComplexEventTimes_NoComplexEventTimes_197.insert(ComplexEventEndTime_197.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_197(FIX::UTCTIMEONLY(10, 51, 36));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_197);
          ComplexEventTimes_NoComplexEventTimes_197.insert(ComplexEventStartTime_197.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_197);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_198;
          FIX::ComplexEventEndTime ComplexEventEndTime_198(FIX::UTCTIMEONLY(21, 50, 20));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventEndTime_198);
          ComplexEventTimes_NoComplexEventTimes_198.insert(ComplexEventEndTime_198.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_198(FIX::UTCTIMEONLY(2, 55, 27));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventStartTime_198);
          ComplexEventTimes_NoComplexEventTimes_198.insert(ComplexEventStartTime_198.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_198);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_98;
        FIX::ComplexEventEndDate ComplexEventEndDate_98(FIX::UTCTIMESTAMP(11, 19, 2, 8, 10, 2008));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_98);
        ComplexEventDates_NoComplexEventDates_98.insert(ComplexEventEndDate_98.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_98(FIX::UTCTIMESTAMP(11, 38, 17, 7, 10, 2013));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_98);
        ComplexEventDates_NoComplexEventDates_98.insert(ComplexEventStartDate_98.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_98);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_199;
          FIX::ComplexEventEndTime ComplexEventEndTime_199(FIX::UTCTIMEONLY(17, 39, 45));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_199);
          ComplexEventTimes_NoComplexEventTimes_199.insert(ComplexEventEndTime_199.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_199(FIX::UTCTIMEONLY(2, 36, 41));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_199);
          ComplexEventTimes_NoComplexEventTimes_199.insert(ComplexEventStartTime_199.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_199);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_200;
          FIX::ComplexEventEndTime ComplexEventEndTime_200(FIX::UTCTIMEONLY(21, 31, 48));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventEndTime_200);
          ComplexEventTimes_NoComplexEventTimes_200.insert(ComplexEventEndTime_200.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_200(FIX::UTCTIMEONLY(9, 35, 26));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventStartTime_200);
          ComplexEventTimes_NoComplexEventTimes_200.insert(ComplexEventStartTime_200.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_200);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_201;
          FIX::ComplexEventEndTime ComplexEventEndTime_201(FIX::UTCTIMEONLY(22, 46, 6));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventEndTime_201);
          ComplexEventTimes_NoComplexEventTimes_201.insert(ComplexEventEndTime_201.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_201(FIX::UTCTIMEONLY(23, 9, 31));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventStartTime_201);
          ComplexEventTimes_NoComplexEventTimes_201.insert(ComplexEventStartTime_201.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_201);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_99;
        FIX::ComplexEventEndDate ComplexEventEndDate_99(FIX::UTCTIMESTAMP(15, 48, 54, 13, 8, 2014));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_99);
        ComplexEventDates_NoComplexEventDates_99.insert(ComplexEventEndDate_99.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_99(FIX::UTCTIMESTAMP(4, 40, 49, 5, 7, 2001));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_99);
        ComplexEventDates_NoComplexEventDates_99.insert(ComplexEventStartDate_99.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_99);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_202;
          FIX::ComplexEventEndTime ComplexEventEndTime_202(FIX::UTCTIMEONLY(14, 33, 14));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_202);
          ComplexEventTimes_NoComplexEventTimes_202.insert(ComplexEventEndTime_202.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_202(FIX::UTCTIMEONLY(23, 49, 16));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_202);
          ComplexEventTimes_NoComplexEventTimes_202.insert(ComplexEventStartTime_202.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_202);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_203;
          FIX::ComplexEventEndTime ComplexEventEndTime_203(FIX::UTCTIMEONLY(11, 54, 41));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventEndTime_203);
          ComplexEventTimes_NoComplexEventTimes_203.insert(ComplexEventEndTime_203.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_203(FIX::UTCTIMEONLY(18, 42, 0));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventStartTime_203);
          ComplexEventTimes_NoComplexEventTimes_203.insert(ComplexEventStartTime_203.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_203);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_204;
          FIX::ComplexEventEndTime ComplexEventEndTime_204(FIX::UTCTIMEONLY(22, 48, 26));
          noComplexEventTimes_0_1_2_3_2.set(ComplexEventEndTime_204);
          ComplexEventTimes_NoComplexEventTimes_204.insert(ComplexEventEndTime_204.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_204(FIX::UTCTIMEONLY(0, 27, 59));
          noComplexEventTimes_0_1_2_3_2.set(ComplexEventStartTime_204);
          ComplexEventTimes_NoComplexEventTimes_204.insert(ComplexEventStartTime_204.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_204);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_43;
      FIX::EventDate EventDate_43("LOCALMKTDATE_951449587");
      noEvents_0_1_0.set(EventDate_43);
      EvntGrp_NoEvents_43.insert(EventDate_43.getString());
      FIX::EventPx EventPx_43;
      EventPx_43.setString("9389996");
      noEvents_0_1_0.set(EventPx_43);
      EvntGrp_NoEvents_43.insert(EventPx_43.getString());
      FIX::EventText EventText_43("STRING_452001125");
      noEvents_0_1_0.set(EventText_43);
      EvntGrp_NoEvents_43.insert(EventText_43.getString());
      FIX::EventTime EventTime_43(FIX::UTCTIMESTAMP(6, 7, 39, 13, 6, 2003));
      noEvents_0_1_0.set(EventTime_43);
      EvntGrp_NoEvents_43.insert(EventTime_43.getString());
      FIX::EventType EventType_43(99);
      noEvents_0_1_0.set(EventType_43);
      EvntGrp_NoEvents_43.insert(EventType_43.getString());
      all_values.push_back(EvntGrp_NoEvents_43);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_44;
      FIX::EventDate EventDate_44("LOCALMKTDATE_472642376");
      noEvents_0_1_1.set(EventDate_44);
      EvntGrp_NoEvents_44.insert(EventDate_44.getString());
      FIX::EventPx EventPx_44;
      EventPx_44.setString("1678757");
      noEvents_0_1_1.set(EventPx_44);
      EvntGrp_NoEvents_44.insert(EventPx_44.getString());
      FIX::EventText EventText_44("STRING_545919587");
      noEvents_0_1_1.set(EventText_44);
      EvntGrp_NoEvents_44.insert(EventText_44.getString());
      FIX::EventTime EventTime_44(FIX::UTCTIMESTAMP(9, 42, 4, 6, 5, 2015));
      noEvents_0_1_1.set(EventTime_44);
      EvntGrp_NoEvents_44.insert(EventTime_44.getString());
      FIX::EventType EventType_44(7);
      noEvents_0_1_1.set(EventType_44);
      EvntGrp_NoEvents_44.insert(EventType_44.getString());
      all_values.push_back(EvntGrp_NoEvents_44);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_45;
      FIX::EventDate EventDate_45("LOCALMKTDATE_570893196");
      noEvents_0_1_2.set(EventDate_45);
      EvntGrp_NoEvents_45.insert(EventDate_45.getString());
      FIX::EventPx EventPx_45;
      EventPx_45.setString("5083750");
      noEvents_0_1_2.set(EventPx_45);
      EvntGrp_NoEvents_45.insert(EventPx_45.getString());
      FIX::EventText EventText_45("STRING_1959186866");
      noEvents_0_1_2.set(EventText_45);
      EvntGrp_NoEvents_45.insert(EventText_45.getString());
      FIX::EventTime EventTime_45(FIX::UTCTIMESTAMP(12, 54, 22, 3, 8, 2011));
      noEvents_0_1_2.set(EventTime_45);
      EvntGrp_NoEvents_45.insert(EventTime_45.getString());
      FIX::EventType EventType_45(17);
      noEvents_0_1_2.set(EventType_45);
      EvntGrp_NoEvents_45.insert(EventType_45.getString());
      all_values.push_back(EvntGrp_NoEvents_45);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_40;
      FIX::InstrumentPartyID InstrumentPartyID_40("STRING_1656279034");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_40);
      InstrumentParties_NoInstrumentParties_40.insert(InstrumentPartyID_40.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_40('5');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_40);
      InstrumentParties_NoInstrumentParties_40.insert(InstrumentPartyIDSource_40.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_40(1654372184);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_40);
      InstrumentParties_NoInstrumentParties_40.insert(InstrumentPartyRole_40.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_40);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80;
        FIX::InstrumentPartySubID InstrumentPartySubID_80("STRING_446840904");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_80);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80.insert(InstrumentPartySubID_80.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_80(1637503577);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_80);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80.insert(InstrumentPartySubIDType_80.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81;
        FIX::InstrumentPartySubID InstrumentPartySubID_81("STRING_1574075090");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_81);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81.insert(InstrumentPartySubID_81.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_81(1951645503);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_81);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81.insert(InstrumentPartySubIDType_81.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82;
        FIX::InstrumentPartySubID InstrumentPartySubID_82("STRING_2110145953");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_82);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82.insert(InstrumentPartySubID_82.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_82(1741950864);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_82);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82.insert(InstrumentPartySubIDType_82.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_40;
      FIX::SecurityAltID SecurityAltID_40("STRING_1971505176");
      noSecurityAltID_0_1_0.set(SecurityAltID_40);
      SecAltIDGrp_NoSecurityAltID_40.insert(SecurityAltID_40.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_40("STRING_786954025");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_40);
      SecAltIDGrp_NoSecurityAltID_40.insert(SecurityAltIDSource_40.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_40);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_44;
    FIX::SecurityXML SecurityXML_45("XMLDATA_1723649304");
    noRelatedSym_0_0.set(SecurityXML_45);
    FIX::SecurityXMLLen SecurityXMLLen_22(1815609032);
    noRelatedSym_0_0.set(SecurityXMLLen_22);
    FIX::SecurityXMLSchema SecurityXMLSchema_22("STRING_548485743");
    noRelatedSym_0_0.set(SecurityXMLSchema_22);
    SecurityXML_44.insert(SecurityXMLSchema_22.getString());
    all_values.push_back(SecurityXML_44);
    all_compo_names.insert("SecurityXML");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::Email::NoRelatedSym noRelatedSym_0_1;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_23;
    FIX::AttachmentPoint AttachmentPoint_23;
    AttachmentPoint_23.setString("56.800000");
    noRelatedSym_0_1.set(AttachmentPoint_23);
    Instrument_23.insert(AttachmentPoint_23.getString());
    FIX::CFICode CFICode_23("STRING_555600783");
    noRelatedSym_0_1.set(CFICode_23);
    Instrument_23.insert(CFICode_23.getString());
    FIX::CPProgram CPProgram_23(99);
    noRelatedSym_0_1.set(CPProgram_23);
    Instrument_23.insert(CPProgram_23.getString());
    FIX::CPRegType CPRegType_23("STRING_691028877");
    noRelatedSym_0_1.set(CPRegType_23);
    Instrument_23.insert(CPRegType_23.getString());
    FIX::CapPrice CapPrice_23;
    CapPrice_23.setString("10639757");
    noRelatedSym_0_1.set(CapPrice_23);
    Instrument_23.insert(CapPrice_23.getString());
    FIX::ContractMultiplier ContractMultiplier_23;
    ContractMultiplier_23.setString("3141505");
    noRelatedSym_0_1.set(ContractMultiplier_23);
    Instrument_23.insert(ContractMultiplier_23.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_23(1);
    noRelatedSym_0_1.set(ContractMultiplierUnit_23);
    Instrument_23.insert(ContractMultiplierUnit_23.getString());
    FIX::ContractSettlMonth ContractSettlMonth_23("MONTHYEAR_1246497224");
    noRelatedSym_0_1.set(ContractSettlMonth_23);
    Instrument_23.insert(ContractSettlMonth_23.getString());
    FIX::CountryOfIssue CountryOfIssue_23("COUNTRY_2101579314");
    noRelatedSym_0_1.set(CountryOfIssue_23);
    Instrument_23.insert(CountryOfIssue_23.getString());
    FIX::CouponPaymentDate CouponPaymentDate_23("LOCALMKTDATE_483272054");
    noRelatedSym_0_1.set(CouponPaymentDate_23);
    Instrument_23.insert(CouponPaymentDate_23.getString());
    FIX::CouponRate CouponRate_23;
    CouponRate_23.setString("94.720000");
    noRelatedSym_0_1.set(CouponRate_23);
    Instrument_23.insert(CouponRate_23.getString());
    FIX::CreditRating CreditRating_23("STRING_265358417");
    noRelatedSym_0_1.set(CreditRating_23);
    Instrument_23.insert(CreditRating_23.getString());
    FIX::DatedDate DatedDate_23("LOCALMKTDATE_1632373363");
    noRelatedSym_0_1.set(DatedDate_23);
    Instrument_23.insert(DatedDate_23.getString());
    FIX::DetachmentPoint DetachmentPoint_23;
    DetachmentPoint_23.setString("77.000000");
    noRelatedSym_0_1.set(DetachmentPoint_23);
    Instrument_23.insert(DetachmentPoint_23.getString());
    FIX::EncodedIssuer EncodedIssuer_23("DATA_1028622293");
    noRelatedSym_0_1.set(EncodedIssuer_23);
    Instrument_23.insert(EncodedIssuer_23.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_23(1141168749);
    noRelatedSym_0_1.set(EncodedIssuerLen_23);
    Instrument_23.insert(EncodedIssuerLen_23.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_23("DATA_852710375");
    noRelatedSym_0_1.set(EncodedSecurityDesc_23);
    Instrument_23.insert(EncodedSecurityDesc_23.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_23(535510829);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_23);
    Instrument_23.insert(EncodedSecurityDescLen_23.getString());
    FIX::ExerciseStyle ExerciseStyle_23(0);
    noRelatedSym_0_1.set(ExerciseStyle_23);
    Instrument_23.insert(ExerciseStyle_23.getString());
    FIX::Factor Factor_23;
    Factor_23.setString("12995512");
    noRelatedSym_0_1.set(Factor_23);
    Instrument_23.insert(Factor_23.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_23(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_23);
    Instrument_23.insert(FlexProductEligibilityIndicator_23.getString());
    FIX::FlexibleIndicator FlexibleIndicator_23(true);
    noRelatedSym_0_1.set(FlexibleIndicator_23);
    Instrument_23.insert(FlexibleIndicator_23.getString());
    FIX::FloorPrice FloorPrice_23;
    FloorPrice_23.setString("11037131");
    noRelatedSym_0_1.set(FloorPrice_23);
    Instrument_23.insert(FloorPrice_23.getString());
    FIX::FlowScheduleType FlowScheduleType_23(1);
    noRelatedSym_0_1.set(FlowScheduleType_23);
    Instrument_23.insert(FlowScheduleType_23.getString());
    FIX::InstrRegistry InstrRegistry_23("STRING_1732218312");
    noRelatedSym_0_1.set(InstrRegistry_23);
    Instrument_23.insert(InstrRegistry_23.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_23('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_23);
    Instrument_23.insert(InstrmtAssignmentMethod_23.getString());
    FIX::InterestAccrualDate InterestAccrualDate_23("LOCALMKTDATE_1959698239");
    noRelatedSym_0_1.set(InterestAccrualDate_23);
    Instrument_23.insert(InterestAccrualDate_23.getString());
    FIX::IssueDate IssueDate_23("LOCALMKTDATE_371688689");
    noRelatedSym_0_1.set(IssueDate_23);
    Instrument_23.insert(IssueDate_23.getString());
    FIX::Issuer Issuer_23("STRING_1029960233");
    noRelatedSym_0_1.set(Issuer_23);
    Instrument_23.insert(Issuer_23.getString());
    FIX::ListMethod ListMethod_23(0);
    noRelatedSym_0_1.set(ListMethod_23);
    Instrument_23.insert(ListMethod_23.getString());
    FIX::LocaleOfIssue LocaleOfIssue_23("STRING_920174432");
    noRelatedSym_0_1.set(LocaleOfIssue_23);
    Instrument_23.insert(LocaleOfIssue_23.getString());
    FIX::MaturityDate MaturityDate_23("LOCALMKTDATE_1150095914");
    noRelatedSym_0_1.set(MaturityDate_23);
    Instrument_23.insert(MaturityDate_23.getString());
    FIX::MaturityMonthYear MaturityMonthYear_23("MONTHYEAR_35940759");
    noRelatedSym_0_1.set(MaturityMonthYear_23);
    Instrument_23.insert(MaturityMonthYear_23.getString());
    FIX::MaturityTime MaturityTime_23("TZTIMEONLY_1422621733");
    noRelatedSym_0_1.set(MaturityTime_23);
    Instrument_23.insert(MaturityTime_23.getString());
    FIX::MinPriceIncrement MinPriceIncrement_23;
    MinPriceIncrement_23.setString("18411247");
    noRelatedSym_0_1.set(MinPriceIncrement_23);
    Instrument_23.insert(MinPriceIncrement_23.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_23;
    MinPriceIncrementAmount_23.setString("10999165");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_23);
    Instrument_23.insert(MinPriceIncrementAmount_23.getString());
    FIX::NTPositionLimit NTPositionLimit_23(1736772252);
    noRelatedSym_0_1.set(NTPositionLimit_23);
    Instrument_23.insert(NTPositionLimit_23.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_23;
    NotionalPercentageOutstanding_23.setString("51.230000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_23);
    Instrument_23.insert(NotionalPercentageOutstanding_23.getString());
    FIX::OptAttribute OptAttribute_23('1');
    noRelatedSym_0_1.set(OptAttribute_23);
    Instrument_23.insert(OptAttribute_23.getString());
    FIX::OptPayoutAmount OptPayoutAmount_23;
    OptPayoutAmount_23.setString("16908679");
    noRelatedSym_0_1.set(OptPayoutAmount_23);
    Instrument_23.insert(OptPayoutAmount_23.getString());
    FIX::OptPayoutType OptPayoutType_23(1);
    noRelatedSym_0_1.set(OptPayoutType_23);
    Instrument_23.insert(OptPayoutType_23.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_23;
    OriginalNotionalPercentageOutstanding_23.setString("96.040000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_23);
    Instrument_23.insert(OriginalNotionalPercentageOutstanding_23.getString());
    FIX::Pool Pool_23("STRING_1956226335");
    noRelatedSym_0_1.set(Pool_23);
    Instrument_23.insert(Pool_23.getString());
    FIX::PositionLimit PositionLimit_23(2094906892);
    noRelatedSym_0_1.set(PositionLimit_23);
    Instrument_23.insert(PositionLimit_23.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_23("STRING_INX");
    noRelatedSym_0_1.set(PriceQuoteMethod_23);
    Instrument_23.insert(PriceQuoteMethod_23.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_23("STRING_837364981");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_23);
    Instrument_23.insert(PriceUnitOfMeasure_23.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_23;
    PriceUnitOfMeasureQty_23.setString("10885919");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_23);
    Instrument_23.insert(PriceUnitOfMeasureQty_23.getString());
    FIX::Product Product_25(1);
    noRelatedSym_0_1.set(Product_25);
    Instrument_23.insert(Product_25.getString());
    FIX::ProductComplex ProductComplex_23("STRING_1372875810");
    noRelatedSym_0_1.set(ProductComplex_23);
    Instrument_23.insert(ProductComplex_23.getString());
    FIX::PutOrCall PutOrCall_23(1);
    noRelatedSym_0_1.set(PutOrCall_23);
    Instrument_23.insert(PutOrCall_23.getString());
    FIX::RedemptionDate RedemptionDate_23("LOCALMKTDATE_472821664");
    noRelatedSym_0_1.set(RedemptionDate_23);
    Instrument_23.insert(RedemptionDate_23.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_23("STRING_1398406569");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_23);
    Instrument_23.insert(RepoCollateralSecurityType_23.getString());
    FIX::RepurchaseRate RepurchaseRate_23;
    RepurchaseRate_23.setString("54.470000");
    noRelatedSym_0_1.set(RepurchaseRate_23);
    Instrument_23.insert(RepurchaseRate_23.getString());
    FIX::RepurchaseTerm RepurchaseTerm_23(1576534798);
    noRelatedSym_0_1.set(RepurchaseTerm_23);
    Instrument_23.insert(RepurchaseTerm_23.getString());
    FIX::RestructuringType RestructuringType_23("STRING_FR");
    noRelatedSym_0_1.set(RestructuringType_23);
    Instrument_23.insert(RestructuringType_23.getString());
    FIX::SecurityDesc SecurityDesc_23("STRING_1227270111");
    noRelatedSym_0_1.set(SecurityDesc_23);
    Instrument_23.insert(SecurityDesc_23.getString());
    FIX::SecurityExchange SecurityExchange_23("EXCHANGE_882845727");
    noRelatedSym_0_1.set(SecurityExchange_23);
    Instrument_23.insert(SecurityExchange_23.getString());
    FIX::SecurityGroup SecurityGroup_23("STRING_1198814224");
    noRelatedSym_0_1.set(SecurityGroup_23);
    Instrument_23.insert(SecurityGroup_23.getString());
    FIX::SecurityID SecurityID_23("STRING_1598958800");
    noRelatedSym_0_1.set(SecurityID_23);
    Instrument_23.insert(SecurityID_23.getString());
    FIX::SecurityIDSource SecurityIDSource_23("STRING_C");
    noRelatedSym_0_1.set(SecurityIDSource_23);
    Instrument_23.insert(SecurityIDSource_23.getString());
    FIX::SecurityStatus SecurityStatus_23("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_23);
    Instrument_23.insert(SecurityStatus_23.getString());
    FIX::SecuritySubType SecuritySubType_24("STRING_371649584");
    noRelatedSym_0_1.set(SecuritySubType_24);
    Instrument_23.insert(SecuritySubType_24.getString());
    FIX::SecurityType SecurityType_25("STRING_LQN");
    noRelatedSym_0_1.set(SecurityType_25);
    Instrument_23.insert(SecurityType_25.getString());
    FIX::Seniority Seniority_23("STRING_SR");
    noRelatedSym_0_1.set(Seniority_23);
    Instrument_23.insert(Seniority_23.getString());
    FIX::SettlMethod SettlMethod_23('P');
    noRelatedSym_0_1.set(SettlMethod_23);
    Instrument_23.insert(SettlMethod_23.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_23("STRING_609059370");
    noRelatedSym_0_1.set(SettleOnOpenFlag_23);
    Instrument_23.insert(SettleOnOpenFlag_23.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_23("STRING_1815011515");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_23);
    Instrument_23.insert(StateOrProvinceOfIssue_23.getString());
    FIX::StrikeCurrency StrikeCurrency_23("EUR");
    noRelatedSym_0_1.set(StrikeCurrency_23);
    Instrument_23.insert(StrikeCurrency_23.getString());
    FIX::StrikeMultiplier StrikeMultiplier_23;
    StrikeMultiplier_23.setString("20139416");
    noRelatedSym_0_1.set(StrikeMultiplier_23);
    Instrument_23.insert(StrikeMultiplier_23.getString());
    FIX::StrikePrice StrikePrice_23;
    StrikePrice_23.setString("9269441");
    noRelatedSym_0_1.set(StrikePrice_23);
    Instrument_23.insert(StrikePrice_23.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_23(5);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_23);
    Instrument_23.insert(StrikePriceBoundaryMethod_23.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_23;
    StrikePriceBoundaryPrecision_23.setString("76.040000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_23);
    Instrument_23.insert(StrikePriceBoundaryPrecision_23.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_23(4);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_23);
    Instrument_23.insert(StrikePriceDeterminationMethod_23.getString());
    FIX::StrikeValue StrikeValue_23;
    StrikeValue_23.setString("9982776");
    noRelatedSym_0_1.set(StrikeValue_23);
    Instrument_23.insert(StrikeValue_23.getString());
    FIX::Symbol Symbol_23("STRING_9807613");
    noRelatedSym_0_1.set(Symbol_23);
    Instrument_23.insert(Symbol_23.getString());
    FIX::SymbolSfx SymbolSfx_23("STRING_CD");
    noRelatedSym_0_1.set(SymbolSfx_23);
    Instrument_23.insert(SymbolSfx_23.getString());
    FIX::TimeUnit TimeUnit_23("STRING_Min");
    noRelatedSym_0_1.set(TimeUnit_23);
    Instrument_23.insert(TimeUnit_23.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_23(3);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_23);
    Instrument_23.insert(UnderlyingPriceDeterminationMethod_23.getString());
    FIX::UnitOfMeasure UnitOfMeasure_23("STRING_Bcf");
    noRelatedSym_0_1.set(UnitOfMeasure_23);
    Instrument_23.insert(UnitOfMeasure_23.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_23;
    UnitOfMeasureQty_23.setString("15916539");
    noRelatedSym_0_1.set(UnitOfMeasureQty_23);
    Instrument_23.insert(UnitOfMeasureQty_23.getString());
    FIX::ValuationMethod ValuationMethod_23("STRING_EQTY");
    noRelatedSym_0_1.set(ValuationMethod_23);
    Instrument_23.insert(ValuationMethod_23.getString());
    all_values.push_back(Instrument_23);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_49;
      FIX::ComplexEventCondition ComplexEventCondition_49(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_49);
      ComplexEvents_NoComplexEvents_49.insert(ComplexEventCondition_49.getString());
      FIX::ComplexEventPrice ComplexEventPrice_49;
      ComplexEventPrice_49.setString("12324344");
      noComplexEvents_1_1_0.set(ComplexEventPrice_49);
      ComplexEvents_NoComplexEvents_49.insert(ComplexEventPrice_49.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_49(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_49);
      ComplexEvents_NoComplexEvents_49.insert(ComplexEventPriceBoundaryMethod_49.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_49;
      ComplexEventPriceBoundaryPrecision_49.setString("22.240000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_49);
      ComplexEvents_NoComplexEvents_49.insert(ComplexEventPriceBoundaryPrecision_49.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_49(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_49);
      ComplexEvents_NoComplexEvents_49.insert(ComplexEventPriceTimeType_49.getString());
      FIX::ComplexEventType ComplexEventType_49(1);
      noComplexEvents_1_1_0.set(ComplexEventType_49);
      ComplexEvents_NoComplexEvents_49.insert(ComplexEventType_49.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_49;
      ComplexOptPayoutAmount_49.setString("17654510");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_49);
      ComplexEvents_NoComplexEvents_49.insert(ComplexOptPayoutAmount_49.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_49);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_100;
        FIX::ComplexEventEndDate ComplexEventEndDate_100(FIX::UTCTIMESTAMP(16, 20, 12, 17, 3, 2011));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_100);
        ComplexEventDates_NoComplexEventDates_100.insert(ComplexEventEndDate_100.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_100(FIX::UTCTIMESTAMP(15, 59, 2, 13, 1, 2000));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_100);
        ComplexEventDates_NoComplexEventDates_100.insert(ComplexEventStartDate_100.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_100);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_205;
          FIX::ComplexEventEndTime ComplexEventEndTime_205(FIX::UTCTIMEONLY(18, 2, 7));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_205);
          ComplexEventTimes_NoComplexEventTimes_205.insert(ComplexEventEndTime_205.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_205(FIX::UTCTIMEONLY(20, 37, 33));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_205);
          ComplexEventTimes_NoComplexEventTimes_205.insert(ComplexEventStartTime_205.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_205);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_206;
          FIX::ComplexEventEndTime ComplexEventEndTime_206(FIX::UTCTIMEONLY(14, 42, 53));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_206);
          ComplexEventTimes_NoComplexEventTimes_206.insert(ComplexEventEndTime_206.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_206(FIX::UTCTIMEONLY(18, 37, 23));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_206);
          ComplexEventTimes_NoComplexEventTimes_206.insert(ComplexEventStartTime_206.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_206);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_207;
          FIX::ComplexEventEndTime ComplexEventEndTime_207(FIX::UTCTIMEONLY(21, 43, 51));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventEndTime_207);
          ComplexEventTimes_NoComplexEventTimes_207.insert(ComplexEventEndTime_207.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_207(FIX::UTCTIMEONLY(1, 42, 8));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventStartTime_207);
          ComplexEventTimes_NoComplexEventTimes_207.insert(ComplexEventStartTime_207.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_207);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_101;
        FIX::ComplexEventEndDate ComplexEventEndDate_101(FIX::UTCTIMESTAMP(10, 3, 13, 22, 10, 2010));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_101);
        ComplexEventDates_NoComplexEventDates_101.insert(ComplexEventEndDate_101.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_101(FIX::UTCTIMESTAMP(7, 58, 59, 5, 7, 2012));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_101);
        ComplexEventDates_NoComplexEventDates_101.insert(ComplexEventStartDate_101.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_101);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_208;
          FIX::ComplexEventEndTime ComplexEventEndTime_208(FIX::UTCTIMEONLY(18, 0, 16));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_208);
          ComplexEventTimes_NoComplexEventTimes_208.insert(ComplexEventEndTime_208.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_208(FIX::UTCTIMEONLY(7, 45, 3));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_208);
          ComplexEventTimes_NoComplexEventTimes_208.insert(ComplexEventStartTime_208.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_208);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_46;
      FIX::EventDate EventDate_46("LOCALMKTDATE_1222879174");
      noEvents_1_1_0.set(EventDate_46);
      EvntGrp_NoEvents_46.insert(EventDate_46.getString());
      FIX::EventPx EventPx_46;
      EventPx_46.setString("19123479");
      noEvents_1_1_0.set(EventPx_46);
      EvntGrp_NoEvents_46.insert(EventPx_46.getString());
      FIX::EventText EventText_46("STRING_1985408245");
      noEvents_1_1_0.set(EventText_46);
      EvntGrp_NoEvents_46.insert(EventText_46.getString());
      FIX::EventTime EventTime_46(FIX::UTCTIMESTAMP(3, 59, 40, 3, 10, 2013));
      noEvents_1_1_0.set(EventTime_46);
      EvntGrp_NoEvents_46.insert(EventTime_46.getString());
      FIX::EventType EventType_46(9);
      noEvents_1_1_0.set(EventType_46);
      EvntGrp_NoEvents_46.insert(EventType_46.getString());
      all_values.push_back(EvntGrp_NoEvents_46);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_47;
      FIX::EventDate EventDate_47("LOCALMKTDATE_1990445143");
      noEvents_1_1_1.set(EventDate_47);
      EvntGrp_NoEvents_47.insert(EventDate_47.getString());
      FIX::EventPx EventPx_47;
      EventPx_47.setString("1925522");
      noEvents_1_1_1.set(EventPx_47);
      EvntGrp_NoEvents_47.insert(EventPx_47.getString());
      FIX::EventText EventText_47("STRING_1951147852");
      noEvents_1_1_1.set(EventText_47);
      EvntGrp_NoEvents_47.insert(EventText_47.getString());
      FIX::EventTime EventTime_47(FIX::UTCTIMESTAMP(4, 50, 34, 17, 1, 2002));
      noEvents_1_1_1.set(EventTime_47);
      EvntGrp_NoEvents_47.insert(EventTime_47.getString());
      FIX::EventType EventType_47(99);
      noEvents_1_1_1.set(EventType_47);
      EvntGrp_NoEvents_47.insert(EventType_47.getString());
      all_values.push_back(EvntGrp_NoEvents_47);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_41;
      FIX::InstrumentPartyID InstrumentPartyID_41("STRING_669547633");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_41);
      InstrumentParties_NoInstrumentParties_41.insert(InstrumentPartyID_41.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_41('9');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_41);
      InstrumentParties_NoInstrumentParties_41.insert(InstrumentPartyIDSource_41.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_41(1768481647);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_41);
      InstrumentParties_NoInstrumentParties_41.insert(InstrumentPartyRole_41.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_41);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83;
        FIX::InstrumentPartySubID InstrumentPartySubID_83("STRING_1822842435");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_83);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83.insert(InstrumentPartySubID_83.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_83(999456584);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_83);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83.insert(InstrumentPartySubIDType_83.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84;
        FIX::InstrumentPartySubID InstrumentPartySubID_84("STRING_978875577");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_84);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84.insert(InstrumentPartySubID_84.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_84(175981781);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_84);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84.insert(InstrumentPartySubIDType_84.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85;
        FIX::InstrumentPartySubID InstrumentPartySubID_85("STRING_74852110");
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubID_85);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85.insert(InstrumentPartySubID_85.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_85(743739875);
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubIDType_85);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85.insert(InstrumentPartySubIDType_85.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_41;
      FIX::SecurityAltID SecurityAltID_41("STRING_778556502");
      noSecurityAltID_1_1_0.set(SecurityAltID_41);
      SecAltIDGrp_NoSecurityAltID_41.insert(SecurityAltID_41.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_41("STRING_1006685319");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_41);
      SecAltIDGrp_NoSecurityAltID_41.insert(SecurityAltIDSource_41.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_41);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_42;
      FIX::SecurityAltID SecurityAltID_42("STRING_738206757");
      noSecurityAltID_1_1_1.set(SecurityAltID_42);
      SecAltIDGrp_NoSecurityAltID_42.insert(SecurityAltID_42.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_42("STRING_1983050663");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_42);
      SecAltIDGrp_NoSecurityAltID_42.insert(SecurityAltIDSource_42.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_42);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_46;
    FIX::SecurityXML SecurityXML_47("XMLDATA_1466145554");
    noRelatedSym_0_1.set(SecurityXML_47);
    FIX::SecurityXMLLen SecurityXMLLen_23(1616931451);
    noRelatedSym_0_1.set(SecurityXMLLen_23);
    FIX::SecurityXMLSchema SecurityXMLSchema_23("STRING_1340276038");
    noRelatedSym_0_1.set(SecurityXMLSchema_23);
    SecurityXML_46.insert(SecurityXMLSchema_23.getString());
    all_values.push_back(SecurityXML_46);
    all_compo_names.insert("SecurityXML");

    msg.addGroup(noRelatedSym_0_1);
  }
  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Email::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_42;
    FIX::EncodedLegIssuer EncodedLegIssuer_42("DATA_1459892946");
    noLegs_0_0.set(EncodedLegIssuer_42);
    InstrumentLeg_42.insert(EncodedLegIssuer_42.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_42(1532828251);
    noLegs_0_0.set(EncodedLegIssuerLen_42);
    InstrumentLeg_42.insert(EncodedLegIssuerLen_42.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_42("DATA_527589159");
    noLegs_0_0.set(EncodedLegSecurityDesc_42);
    InstrumentLeg_42.insert(EncodedLegSecurityDesc_42.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_42(1234194993);
    noLegs_0_0.set(EncodedLegSecurityDescLen_42);
    InstrumentLeg_42.insert(EncodedLegSecurityDescLen_42.getString());
    FIX::LegCFICode LegCFICode_42("STRING_373903839");
    noLegs_0_0.set(LegCFICode_42);
    InstrumentLeg_42.insert(LegCFICode_42.getString());
    FIX::LegContractMultiplier LegContractMultiplier_42;
    LegContractMultiplier_42.setString("4166061");
    noLegs_0_0.set(LegContractMultiplier_42);
    InstrumentLeg_42.insert(LegContractMultiplier_42.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_42(1090019339);
    noLegs_0_0.set(LegContractMultiplierUnit_42);
    InstrumentLeg_42.insert(LegContractMultiplierUnit_42.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_42("MONTHYEAR_770110660");
    noLegs_0_0.set(LegContractSettlMonth_42);
    InstrumentLeg_42.insert(LegContractSettlMonth_42.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_42("COUNTRY_1522097758");
    noLegs_0_0.set(LegCountryOfIssue_42);
    InstrumentLeg_42.insert(LegCountryOfIssue_42.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_42("LOCALMKTDATE_833447394");
    noLegs_0_0.set(LegCouponPaymentDate_42);
    InstrumentLeg_42.insert(LegCouponPaymentDate_42.getString());
    FIX::LegCouponRate LegCouponRate_42;
    LegCouponRate_42.setString("62.190000");
    noLegs_0_0.set(LegCouponRate_42);
    InstrumentLeg_42.insert(LegCouponRate_42.getString());
    FIX::LegCreditRating LegCreditRating_42("STRING_1766924450");
    noLegs_0_0.set(LegCreditRating_42);
    InstrumentLeg_42.insert(LegCreditRating_42.getString());
    FIX::LegCurrency LegCurrency_42("CAN");
    noLegs_0_0.set(LegCurrency_42);
    InstrumentLeg_42.insert(LegCurrency_42.getString());
    FIX::LegDatedDate LegDatedDate_42("LOCALMKTDATE_1387922449");
    noLegs_0_0.set(LegDatedDate_42);
    InstrumentLeg_42.insert(LegDatedDate_42.getString());
    FIX::LegExerciseStyle LegExerciseStyle_42(1957491000);
    noLegs_0_0.set(LegExerciseStyle_42);
    InstrumentLeg_42.insert(LegExerciseStyle_42.getString());
    FIX::LegFactor LegFactor_42;
    LegFactor_42.setString("19832733");
    noLegs_0_0.set(LegFactor_42);
    InstrumentLeg_42.insert(LegFactor_42.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_42(239895386);
    noLegs_0_0.set(LegFlowScheduleType_42);
    InstrumentLeg_42.insert(LegFlowScheduleType_42.getString());
    FIX::LegInstrRegistry LegInstrRegistry_42("STRING_788882929");
    noLegs_0_0.set(LegInstrRegistry_42);
    InstrumentLeg_42.insert(LegInstrRegistry_42.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_42("LOCALMKTDATE_11771519");
    noLegs_0_0.set(LegInterestAccrualDate_42);
    InstrumentLeg_42.insert(LegInterestAccrualDate_42.getString());
    FIX::LegIssueDate LegIssueDate_42("LOCALMKTDATE_314747496");
    noLegs_0_0.set(LegIssueDate_42);
    InstrumentLeg_42.insert(LegIssueDate_42.getString());
    FIX::LegIssuer LegIssuer_42("STRING_1532622805");
    noLegs_0_0.set(LegIssuer_42);
    InstrumentLeg_42.insert(LegIssuer_42.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_42("STRING_25677897");
    noLegs_0_0.set(LegLocaleOfIssue_42);
    InstrumentLeg_42.insert(LegLocaleOfIssue_42.getString());
    FIX::LegMaturityDate LegMaturityDate_42("LOCALMKTDATE_1093303999");
    noLegs_0_0.set(LegMaturityDate_42);
    InstrumentLeg_42.insert(LegMaturityDate_42.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_42("MONTHYEAR_391824476");
    noLegs_0_0.set(LegMaturityMonthYear_42);
    InstrumentLeg_42.insert(LegMaturityMonthYear_42.getString());
    FIX::LegMaturityTime LegMaturityTime_42("TZTIMEONLY_763884655");
    noLegs_0_0.set(LegMaturityTime_42);
    InstrumentLeg_42.insert(LegMaturityTime_42.getString());
    FIX::LegOptAttribute LegOptAttribute_42('9');
    noLegs_0_0.set(LegOptAttribute_42);
    InstrumentLeg_42.insert(LegOptAttribute_42.getString());
    FIX::LegOptionRatio LegOptionRatio_42;
    LegOptionRatio_42.setString("18579700");
    noLegs_0_0.set(LegOptionRatio_42);
    InstrumentLeg_42.insert(LegOptionRatio_42.getString());
    FIX::LegPool LegPool_42("STRING_233332458");
    noLegs_0_0.set(LegPool_42);
    InstrumentLeg_42.insert(LegPool_42.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_42("STRING_121663404");
    noLegs_0_0.set(LegPriceUnitOfMeasure_42);
    InstrumentLeg_42.insert(LegPriceUnitOfMeasure_42.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_42;
    LegPriceUnitOfMeasureQty_42.setString("4344113");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_42);
    InstrumentLeg_42.insert(LegPriceUnitOfMeasureQty_42.getString());
    FIX::LegProduct LegProduct_42(1693225404);
    noLegs_0_0.set(LegProduct_42);
    InstrumentLeg_42.insert(LegProduct_42.getString());
    FIX::LegPutOrCall LegPutOrCall_42(1654491655);
    noLegs_0_0.set(LegPutOrCall_42);
    InstrumentLeg_42.insert(LegPutOrCall_42.getString());
    FIX::LegRatioQty LegRatioQty_42;
    LegRatioQty_42.setString("9620004");
    noLegs_0_0.set(LegRatioQty_42);
    InstrumentLeg_42.insert(LegRatioQty_42.getString());
    FIX::LegRedemptionDate LegRedemptionDate_42("LOCALMKTDATE_779936750");
    noLegs_0_0.set(LegRedemptionDate_42);
    InstrumentLeg_42.insert(LegRedemptionDate_42.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_42("STRING_2028395494");
    noLegs_0_0.set(LegRepoCollateralSecurityType_42);
    InstrumentLeg_42.insert(LegRepoCollateralSecurityType_42.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_42;
    LegRepurchaseRate_42.setString("66.190000");
    noLegs_0_0.set(LegRepurchaseRate_42);
    InstrumentLeg_42.insert(LegRepurchaseRate_42.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_42(1869956089);
    noLegs_0_0.set(LegRepurchaseTerm_42);
    InstrumentLeg_42.insert(LegRepurchaseTerm_42.getString());
    FIX::LegSecurityDesc LegSecurityDesc_42("STRING_651022506");
    noLegs_0_0.set(LegSecurityDesc_42);
    InstrumentLeg_42.insert(LegSecurityDesc_42.getString());
    FIX::LegSecurityExchange LegSecurityExchange_42("EXCHANGE_753220729");
    noLegs_0_0.set(LegSecurityExchange_42);
    InstrumentLeg_42.insert(LegSecurityExchange_42.getString());
    FIX::LegSecurityID LegSecurityID_42("STRING_555919835");
    noLegs_0_0.set(LegSecurityID_42);
    InstrumentLeg_42.insert(LegSecurityID_42.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_42("STRING_2033478726");
    noLegs_0_0.set(LegSecurityIDSource_42);
    InstrumentLeg_42.insert(LegSecurityIDSource_42.getString());
    FIX::LegSecuritySubType LegSecuritySubType_42("STRING_372661531");
    noLegs_0_0.set(LegSecuritySubType_42);
    InstrumentLeg_42.insert(LegSecuritySubType_42.getString());
    FIX::LegSecurityType LegSecurityType_42("STRING_2058914862");
    noLegs_0_0.set(LegSecurityType_42);
    InstrumentLeg_42.insert(LegSecurityType_42.getString());
    FIX::LegSide LegSide_42('4');
    noLegs_0_0.set(LegSide_42);
    InstrumentLeg_42.insert(LegSide_42.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_42("STRING_1760583981");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_42);
    InstrumentLeg_42.insert(LegStateOrProvinceOfIssue_42.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_42("USD");
    noLegs_0_0.set(LegStrikeCurrency_42);
    InstrumentLeg_42.insert(LegStrikeCurrency_42.getString());
    FIX::LegStrikePrice LegStrikePrice_42;
    LegStrikePrice_42.setString("20004793");
    noLegs_0_0.set(LegStrikePrice_42);
    InstrumentLeg_42.insert(LegStrikePrice_42.getString());
    FIX::LegSymbol LegSymbol_42("STRING_510321496");
    noLegs_0_0.set(LegSymbol_42);
    InstrumentLeg_42.insert(LegSymbol_42.getString());
    FIX::LegSymbolSfx LegSymbolSfx_42("STRING_2041470935");
    noLegs_0_0.set(LegSymbolSfx_42);
    InstrumentLeg_42.insert(LegSymbolSfx_42.getString());
    FIX::LegTimeUnit LegTimeUnit_42("STRING_167743215");
    noLegs_0_0.set(LegTimeUnit_42);
    InstrumentLeg_42.insert(LegTimeUnit_42.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_42("STRING_2042944301");
    noLegs_0_0.set(LegUnitOfMeasure_42);
    InstrumentLeg_42.insert(LegUnitOfMeasure_42.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_42;
    LegUnitOfMeasureQty_42.setString("20671488");
    noLegs_0_0.set(LegUnitOfMeasureQty_42);
    InstrumentLeg_42.insert(LegUnitOfMeasureQty_42.getString());
    all_values.push_back(InstrumentLeg_42);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_79;
      FIX::LegSecurityAltID LegSecurityAltID_79("STRING_287285129");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_79);
      LegSecAltIDGrp_NoLegSecurityAltID_79.insert(LegSecurityAltID_79.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_79("STRING_683549840");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_79);
      LegSecAltIDGrp_NoLegSecurityAltID_79.insert(LegSecurityAltIDSource_79.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_79);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_80;
      FIX::LegSecurityAltID LegSecurityAltID_80("STRING_42434580");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_80);
      LegSecAltIDGrp_NoLegSecurityAltID_80.insert(LegSecurityAltID_80.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_80("STRING_2145255160");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_80);
      LegSecAltIDGrp_NoLegSecurityAltID_80.insert(LegSecurityAltIDSource_80.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_80);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::Email::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_43;
    FIX::EncodedLegIssuer EncodedLegIssuer_43("DATA_916882298");
    noLegs_0_1.set(EncodedLegIssuer_43);
    InstrumentLeg_43.insert(EncodedLegIssuer_43.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_43(164097985);
    noLegs_0_1.set(EncodedLegIssuerLen_43);
    InstrumentLeg_43.insert(EncodedLegIssuerLen_43.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_43("DATA_432182849");
    noLegs_0_1.set(EncodedLegSecurityDesc_43);
    InstrumentLeg_43.insert(EncodedLegSecurityDesc_43.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_43(462624054);
    noLegs_0_1.set(EncodedLegSecurityDescLen_43);
    InstrumentLeg_43.insert(EncodedLegSecurityDescLen_43.getString());
    FIX::LegCFICode LegCFICode_43("STRING_1818589640");
    noLegs_0_1.set(LegCFICode_43);
    InstrumentLeg_43.insert(LegCFICode_43.getString());
    FIX::LegContractMultiplier LegContractMultiplier_43;
    LegContractMultiplier_43.setString("13941833");
    noLegs_0_1.set(LegContractMultiplier_43);
    InstrumentLeg_43.insert(LegContractMultiplier_43.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_43(1242560804);
    noLegs_0_1.set(LegContractMultiplierUnit_43);
    InstrumentLeg_43.insert(LegContractMultiplierUnit_43.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_43("MONTHYEAR_1699501487");
    noLegs_0_1.set(LegContractSettlMonth_43);
    InstrumentLeg_43.insert(LegContractSettlMonth_43.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_43("COUNTRY_625306317");
    noLegs_0_1.set(LegCountryOfIssue_43);
    InstrumentLeg_43.insert(LegCountryOfIssue_43.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_43("LOCALMKTDATE_965033246");
    noLegs_0_1.set(LegCouponPaymentDate_43);
    InstrumentLeg_43.insert(LegCouponPaymentDate_43.getString());
    FIX::LegCouponRate LegCouponRate_43;
    LegCouponRate_43.setString("3.450000");
    noLegs_0_1.set(LegCouponRate_43);
    InstrumentLeg_43.insert(LegCouponRate_43.getString());
    FIX::LegCreditRating LegCreditRating_43("STRING_1378527047");
    noLegs_0_1.set(LegCreditRating_43);
    InstrumentLeg_43.insert(LegCreditRating_43.getString());
    FIX::LegCurrency LegCurrency_43("EUR");
    noLegs_0_1.set(LegCurrency_43);
    InstrumentLeg_43.insert(LegCurrency_43.getString());
    FIX::LegDatedDate LegDatedDate_43("LOCALMKTDATE_1751188578");
    noLegs_0_1.set(LegDatedDate_43);
    InstrumentLeg_43.insert(LegDatedDate_43.getString());
    FIX::LegExerciseStyle LegExerciseStyle_43(1432384296);
    noLegs_0_1.set(LegExerciseStyle_43);
    InstrumentLeg_43.insert(LegExerciseStyle_43.getString());
    FIX::LegFactor LegFactor_43;
    LegFactor_43.setString("1354614");
    noLegs_0_1.set(LegFactor_43);
    InstrumentLeg_43.insert(LegFactor_43.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_43(1364288911);
    noLegs_0_1.set(LegFlowScheduleType_43);
    InstrumentLeg_43.insert(LegFlowScheduleType_43.getString());
    FIX::LegInstrRegistry LegInstrRegistry_43("STRING_1153822863");
    noLegs_0_1.set(LegInstrRegistry_43);
    InstrumentLeg_43.insert(LegInstrRegistry_43.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_43("LOCALMKTDATE_17677221");
    noLegs_0_1.set(LegInterestAccrualDate_43);
    InstrumentLeg_43.insert(LegInterestAccrualDate_43.getString());
    FIX::LegIssueDate LegIssueDate_43("LOCALMKTDATE_1217284630");
    noLegs_0_1.set(LegIssueDate_43);
    InstrumentLeg_43.insert(LegIssueDate_43.getString());
    FIX::LegIssuer LegIssuer_43("STRING_1664144359");
    noLegs_0_1.set(LegIssuer_43);
    InstrumentLeg_43.insert(LegIssuer_43.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_43("STRING_2059148156");
    noLegs_0_1.set(LegLocaleOfIssue_43);
    InstrumentLeg_43.insert(LegLocaleOfIssue_43.getString());
    FIX::LegMaturityDate LegMaturityDate_43("LOCALMKTDATE_1385027846");
    noLegs_0_1.set(LegMaturityDate_43);
    InstrumentLeg_43.insert(LegMaturityDate_43.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_43("MONTHYEAR_1559605013");
    noLegs_0_1.set(LegMaturityMonthYear_43);
    InstrumentLeg_43.insert(LegMaturityMonthYear_43.getString());
    FIX::LegMaturityTime LegMaturityTime_43("TZTIMEONLY_1978813341");
    noLegs_0_1.set(LegMaturityTime_43);
    InstrumentLeg_43.insert(LegMaturityTime_43.getString());
    FIX::LegOptAttribute LegOptAttribute_43('4');
    noLegs_0_1.set(LegOptAttribute_43);
    InstrumentLeg_43.insert(LegOptAttribute_43.getString());
    FIX::LegOptionRatio LegOptionRatio_43;
    LegOptionRatio_43.setString("18468901");
    noLegs_0_1.set(LegOptionRatio_43);
    InstrumentLeg_43.insert(LegOptionRatio_43.getString());
    FIX::LegPool LegPool_43("STRING_514879533");
    noLegs_0_1.set(LegPool_43);
    InstrumentLeg_43.insert(LegPool_43.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_43("STRING_541025993");
    noLegs_0_1.set(LegPriceUnitOfMeasure_43);
    InstrumentLeg_43.insert(LegPriceUnitOfMeasure_43.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_43;
    LegPriceUnitOfMeasureQty_43.setString("18446616");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_43);
    InstrumentLeg_43.insert(LegPriceUnitOfMeasureQty_43.getString());
    FIX::LegProduct LegProduct_43(1431761831);
    noLegs_0_1.set(LegProduct_43);
    InstrumentLeg_43.insert(LegProduct_43.getString());
    FIX::LegPutOrCall LegPutOrCall_43(705123978);
    noLegs_0_1.set(LegPutOrCall_43);
    InstrumentLeg_43.insert(LegPutOrCall_43.getString());
    FIX::LegRatioQty LegRatioQty_43;
    LegRatioQty_43.setString("1293608");
    noLegs_0_1.set(LegRatioQty_43);
    InstrumentLeg_43.insert(LegRatioQty_43.getString());
    FIX::LegRedemptionDate LegRedemptionDate_43("LOCALMKTDATE_1894385886");
    noLegs_0_1.set(LegRedemptionDate_43);
    InstrumentLeg_43.insert(LegRedemptionDate_43.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_43("STRING_376229970");
    noLegs_0_1.set(LegRepoCollateralSecurityType_43);
    InstrumentLeg_43.insert(LegRepoCollateralSecurityType_43.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_43;
    LegRepurchaseRate_43.setString("42.020000");
    noLegs_0_1.set(LegRepurchaseRate_43);
    InstrumentLeg_43.insert(LegRepurchaseRate_43.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_43(989463042);
    noLegs_0_1.set(LegRepurchaseTerm_43);
    InstrumentLeg_43.insert(LegRepurchaseTerm_43.getString());
    FIX::LegSecurityDesc LegSecurityDesc_43("STRING_2075731457");
    noLegs_0_1.set(LegSecurityDesc_43);
    InstrumentLeg_43.insert(LegSecurityDesc_43.getString());
    FIX::LegSecurityExchange LegSecurityExchange_43("EXCHANGE_1366872");
    noLegs_0_1.set(LegSecurityExchange_43);
    InstrumentLeg_43.insert(LegSecurityExchange_43.getString());
    FIX::LegSecurityID LegSecurityID_43("STRING_1954496288");
    noLegs_0_1.set(LegSecurityID_43);
    InstrumentLeg_43.insert(LegSecurityID_43.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_43("STRING_131288155");
    noLegs_0_1.set(LegSecurityIDSource_43);
    InstrumentLeg_43.insert(LegSecurityIDSource_43.getString());
    FIX::LegSecuritySubType LegSecuritySubType_43("STRING_1379893919");
    noLegs_0_1.set(LegSecuritySubType_43);
    InstrumentLeg_43.insert(LegSecuritySubType_43.getString());
    FIX::LegSecurityType LegSecurityType_43("STRING_1327965722");
    noLegs_0_1.set(LegSecurityType_43);
    InstrumentLeg_43.insert(LegSecurityType_43.getString());
    FIX::LegSide LegSide_43('2');
    noLegs_0_1.set(LegSide_43);
    InstrumentLeg_43.insert(LegSide_43.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_43("STRING_983598849");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_43);
    InstrumentLeg_43.insert(LegStateOrProvinceOfIssue_43.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_43("EUR");
    noLegs_0_1.set(LegStrikeCurrency_43);
    InstrumentLeg_43.insert(LegStrikeCurrency_43.getString());
    FIX::LegStrikePrice LegStrikePrice_43;
    LegStrikePrice_43.setString("2004041");
    noLegs_0_1.set(LegStrikePrice_43);
    InstrumentLeg_43.insert(LegStrikePrice_43.getString());
    FIX::LegSymbol LegSymbol_43("STRING_1766689233");
    noLegs_0_1.set(LegSymbol_43);
    InstrumentLeg_43.insert(LegSymbol_43.getString());
    FIX::LegSymbolSfx LegSymbolSfx_43("STRING_373462252");
    noLegs_0_1.set(LegSymbolSfx_43);
    InstrumentLeg_43.insert(LegSymbolSfx_43.getString());
    FIX::LegTimeUnit LegTimeUnit_43("STRING_1417688743");
    noLegs_0_1.set(LegTimeUnit_43);
    InstrumentLeg_43.insert(LegTimeUnit_43.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_43("STRING_1283349944");
    noLegs_0_1.set(LegUnitOfMeasure_43);
    InstrumentLeg_43.insert(LegUnitOfMeasure_43.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_43;
    LegUnitOfMeasureQty_43.setString("2851267");
    noLegs_0_1.set(LegUnitOfMeasureQty_43);
    InstrumentLeg_43.insert(LegUnitOfMeasureQty_43.getString());
    all_values.push_back(InstrumentLeg_43);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_81;
      FIX::LegSecurityAltID LegSecurityAltID_81("STRING_695471309");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_81);
      LegSecAltIDGrp_NoLegSecurityAltID_81.insert(LegSecurityAltID_81.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_81("STRING_116456454");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_81);
      LegSecAltIDGrp_NoLegSecurityAltID_81.insert(LegSecurityAltIDSource_81.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_81);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_82;
      FIX::LegSecurityAltID LegSecurityAltID_82("STRING_1153824354");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_82);
      LegSecAltIDGrp_NoLegSecurityAltID_82.insert(LegSecurityAltID_82.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_82("STRING_394877804");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_82);
      LegSecAltIDGrp_NoLegSecurityAltID_82.insert(LegSecurityAltIDSource_82.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_82);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // LinesOfTextGrp
  // Group LinesOfTextGrp.NoLinesOfText
  {
    FIX50SP2::Email::NoLinesOfText noLinesOfText_0_0;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_0;
    FIX::EncodedText EncodedText_36("DATA_1694850347");
    noLinesOfText_0_0.set(EncodedText_36);
    LinesOfTextGrp_NoLinesOfText_0.insert(EncodedText_36.getString());
    FIX::EncodedTextLen EncodedTextLen_36(92055810);
    noLinesOfText_0_0.set(EncodedTextLen_36);
    LinesOfTextGrp_NoLinesOfText_0.insert(EncodedTextLen_36.getString());
    FIX::Text Text_36("STRING_2063097819");
    noLinesOfText_0_0.set(Text_36);
    LinesOfTextGrp_NoLinesOfText_0.insert(Text_36.getString());
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_0);
    all_compo_names.insert("LinesOfTextGrp.NoLinesOfText");

    msg.addGroup(noLinesOfText_0_0);
  }
  {
    FIX50SP2::Email::NoLinesOfText noLinesOfText_0_1;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_1;
    FIX::EncodedText EncodedText_37("DATA_252490677");
    noLinesOfText_0_1.set(EncodedText_37);
    LinesOfTextGrp_NoLinesOfText_1.insert(EncodedText_37.getString());
    FIX::EncodedTextLen EncodedTextLen_37(221416666);
    noLinesOfText_0_1.set(EncodedTextLen_37);
    LinesOfTextGrp_NoLinesOfText_1.insert(EncodedTextLen_37.getString());
    FIX::Text Text_37("STRING_1810000057");
    noLinesOfText_0_1.set(Text_37);
    LinesOfTextGrp_NoLinesOfText_1.insert(Text_37.getString());
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_1);
    all_compo_names.insert("LinesOfTextGrp.NoLinesOfText");

    msg.addGroup(noLinesOfText_0_1);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::Email::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_0;
    FIX::RoutingID RoutingID_0("STRING_1744960869");
    noRoutingIDs_0_0.set(RoutingID_0);
    RoutingGrp_NoRoutingIDs_0.insert(RoutingID_0.getString());
    FIX::RoutingType RoutingType_0(1);
    noRoutingIDs_0_0.set(RoutingType_0);
    RoutingGrp_NoRoutingIDs_0.insert(RoutingType_0.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_0);
    all_compo_names.insert("RoutingGrp.NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Email::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_38;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_38("DATA_1746327741");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingIssuer_38.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_38(458992092);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingIssuerLen_38.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_38("DATA_688256612");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingSecurityDesc_38.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_38(978738012);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingSecurityDescLen_38.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_38;
    UnderlyingAdjustedQuantity_38.setString("17869578");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_38);
    UnderlyingInstrument_38.insert(UnderlyingAdjustedQuantity_38.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_38;
    UnderlyingAllocationPercent_38.setString("1.900000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_38);
    UnderlyingInstrument_38.insert(UnderlyingAllocationPercent_38.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_38;
    UnderlyingAttachmentPoint_38.setString("68.610000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_38);
    UnderlyingInstrument_38.insert(UnderlyingAttachmentPoint_38.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_38("STRING_252340536");
    noUnderlyings_0_0.set(UnderlyingCFICode_38);
    UnderlyingInstrument_38.insert(UnderlyingCFICode_38.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_38("STRING_1264365222");
    noUnderlyings_0_0.set(UnderlyingCPProgram_38);
    UnderlyingInstrument_38.insert(UnderlyingCPProgram_38.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_38("STRING_15257326");
    noUnderlyings_0_0.set(UnderlyingCPRegType_38);
    UnderlyingInstrument_38.insert(UnderlyingCPRegType_38.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_38;
    UnderlyingCapValue_38.setString("20190297");
    noUnderlyings_0_0.set(UnderlyingCapValue_38);
    UnderlyingInstrument_38.insert(UnderlyingCapValue_38.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_38;
    UnderlyingCashAmount_38.setString("16378274");
    noUnderlyings_0_0.set(UnderlyingCashAmount_38);
    UnderlyingInstrument_38.insert(UnderlyingCashAmount_38.getString());
    FIX::UnderlyingCashType UnderlyingCashType_38("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_38);
    UnderlyingInstrument_38.insert(UnderlyingCashType_38.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_38;
    UnderlyingContractMultiplier_38.setString("11548960");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_38);
    UnderlyingInstrument_38.insert(UnderlyingContractMultiplier_38.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_38(1922954235);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_38);
    UnderlyingInstrument_38.insert(UnderlyingContractMultiplierUnit_38.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_38("COUNTRY_2088179011");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_38);
    UnderlyingInstrument_38.insert(UnderlyingCountryOfIssue_38.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_38("LOCALMKTDATE_1850367375");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_38);
    UnderlyingInstrument_38.insert(UnderlyingCouponPaymentDate_38.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_38;
    UnderlyingCouponRate_38.setString("6.900000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_38);
    UnderlyingInstrument_38.insert(UnderlyingCouponRate_38.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_38("STRING_1094519717");
    noUnderlyings_0_0.set(UnderlyingCreditRating_38);
    UnderlyingInstrument_38.insert(UnderlyingCreditRating_38.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_38("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_38);
    UnderlyingInstrument_38.insert(UnderlyingCurrency_38.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_38;
    UnderlyingCurrentValue_38.setString("6418864");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_38);
    UnderlyingInstrument_38.insert(UnderlyingCurrentValue_38.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_38;
    UnderlyingDetachmentPoint_38.setString("73.420000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_38);
    UnderlyingInstrument_38.insert(UnderlyingDetachmentPoint_38.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_38;
    UnderlyingDirtyPrice_38.setString("4388772");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_38);
    UnderlyingInstrument_38.insert(UnderlyingDirtyPrice_38.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_38;
    UnderlyingEndPrice_38.setString("8943770");
    noUnderlyings_0_0.set(UnderlyingEndPrice_38);
    UnderlyingInstrument_38.insert(UnderlyingEndPrice_38.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_38;
    UnderlyingEndValue_38.setString("4112340");
    noUnderlyings_0_0.set(UnderlyingEndValue_38);
    UnderlyingInstrument_38.insert(UnderlyingEndValue_38.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_38(101393611);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_38);
    UnderlyingInstrument_38.insert(UnderlyingExerciseStyle_38.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_38;
    UnderlyingFXRate_38.setString("15230977");
    noUnderlyings_0_0.set(UnderlyingFXRate_38);
    UnderlyingInstrument_38.insert(UnderlyingFXRate_38.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_38('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_38);
    UnderlyingInstrument_38.insert(UnderlyingFXRateCalc_38.getString());
    FIX::UnderlyingFactor UnderlyingFactor_38;
    UnderlyingFactor_38.setString("7533730");
    noUnderlyings_0_0.set(UnderlyingFactor_38);
    UnderlyingInstrument_38.insert(UnderlyingFactor_38.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_38(2080066198);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_38);
    UnderlyingInstrument_38.insert(UnderlyingFlowScheduleType_38.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_38("STRING_1755038970");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_38);
    UnderlyingInstrument_38.insert(UnderlyingInstrRegistry_38.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_38("LOCALMKTDATE_1212365155");
    noUnderlyings_0_0.set(UnderlyingIssueDate_38);
    UnderlyingInstrument_38.insert(UnderlyingIssueDate_38.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_38("STRING_620839162");
    noUnderlyings_0_0.set(UnderlyingIssuer_38);
    UnderlyingInstrument_38.insert(UnderlyingIssuer_38.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_38("STRING_586293334");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_38);
    UnderlyingInstrument_38.insert(UnderlyingLocaleOfIssue_38.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_38("LOCALMKTDATE_851839322");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_38);
    UnderlyingInstrument_38.insert(UnderlyingMaturityDate_38.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_38("MONTHYEAR_1529419352");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_38);
    UnderlyingInstrument_38.insert(UnderlyingMaturityMonthYear_38.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_38("TZTIMEONLY_401146548");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_38);
    UnderlyingInstrument_38.insert(UnderlyingMaturityTime_38.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_38;
    UnderlyingNotionalPercentageOutstanding_38.setString("98.580000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_38);
    UnderlyingInstrument_38.insert(UnderlyingNotionalPercentageOutstanding_38.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_38('6');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_38);
    UnderlyingInstrument_38.insert(UnderlyingOptAttribute_38.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_38;
    UnderlyingOriginalNotionalPercentageOutstanding_38.setString("38.740000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_38);
    UnderlyingInstrument_38.insert(UnderlyingOriginalNotionalPercentageOutstanding_38.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_38("STRING_975725980");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_38);
    UnderlyingInstrument_38.insert(UnderlyingPriceUnitOfMeasure_38.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_38;
    UnderlyingPriceUnitOfMeasureQty_38.setString("1366447");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_38);
    UnderlyingInstrument_38.insert(UnderlyingPriceUnitOfMeasureQty_38.getString());
    FIX::UnderlyingProduct UnderlyingProduct_38(1849349944);
    noUnderlyings_0_0.set(UnderlyingProduct_38);
    UnderlyingInstrument_38.insert(UnderlyingProduct_38.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_38(2130622046);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_38);
    UnderlyingInstrument_38.insert(UnderlyingPutOrCall_38.getString());
    FIX::UnderlyingPx UnderlyingPx_38;
    UnderlyingPx_38.setString("20595989");
    noUnderlyings_0_0.set(UnderlyingPx_38);
    UnderlyingInstrument_38.insert(UnderlyingPx_38.getString());
    FIX::UnderlyingQty UnderlyingQty_38;
    UnderlyingQty_38.setString("17900453");
    noUnderlyings_0_0.set(UnderlyingQty_38);
    UnderlyingInstrument_38.insert(UnderlyingQty_38.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_38("LOCALMKTDATE_1833505773");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_38);
    UnderlyingInstrument_38.insert(UnderlyingRedemptionDate_38.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_38("STRING_1951526030");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_38);
    UnderlyingInstrument_38.insert(UnderlyingRepoCollateralSecurityType_38.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_38;
    UnderlyingRepurchaseRate_38.setString("13.770000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_38);
    UnderlyingInstrument_38.insert(UnderlyingRepurchaseRate_38.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_38(1931267305);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_38);
    UnderlyingInstrument_38.insert(UnderlyingRepurchaseTerm_38.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_38("STRING_327305412");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_38);
    UnderlyingInstrument_38.insert(UnderlyingRestructuringType_38.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_38("STRING_1378967794");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityDesc_38.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_38("EXCHANGE_2121084647");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityExchange_38.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_38("STRING_766182614");
    noUnderlyings_0_0.set(UnderlyingSecurityID_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityID_38.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_38("STRING_125861239");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityIDSource_38.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_38("STRING_384835007");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_38);
    UnderlyingInstrument_38.insert(UnderlyingSecuritySubType_38.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_38("STRING_867576225");
    noUnderlyings_0_0.set(UnderlyingSecurityType_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityType_38.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_38("STRING_1648958980");
    noUnderlyings_0_0.set(UnderlyingSeniority_38);
    UnderlyingInstrument_38.insert(UnderlyingSeniority_38.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_38("STRING_393546237");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_38);
    UnderlyingInstrument_38.insert(UnderlyingSettlMethod_38.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_38(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_38);
    UnderlyingInstrument_38.insert(UnderlyingSettlementType_38.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_38;
    UnderlyingStartValue_38.setString("15815415");
    noUnderlyings_0_0.set(UnderlyingStartValue_38);
    UnderlyingInstrument_38.insert(UnderlyingStartValue_38.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_38("STRING_1101559");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_38);
    UnderlyingInstrument_38.insert(UnderlyingStateOrProvinceOfIssue_38.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_38("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_38);
    UnderlyingInstrument_38.insert(UnderlyingStrikeCurrency_38.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_38;
    UnderlyingStrikePrice_38.setString("5873948");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_38);
    UnderlyingInstrument_38.insert(UnderlyingStrikePrice_38.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_38("STRING_1537670117");
    noUnderlyings_0_0.set(UnderlyingSymbol_38);
    UnderlyingInstrument_38.insert(UnderlyingSymbol_38.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_38("STRING_1584316397");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_38);
    UnderlyingInstrument_38.insert(UnderlyingSymbolSfx_38.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_38("STRING_988541442");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_38);
    UnderlyingInstrument_38.insert(UnderlyingTimeUnit_38.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_38("STRING_494366328");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_38);
    UnderlyingInstrument_38.insert(UnderlyingUnitOfMeasure_38.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_38;
    UnderlyingUnitOfMeasureQty_38.setString("831336");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_38);
    UnderlyingInstrument_38.insert(UnderlyingUnitOfMeasureQty_38.getString());
    all_values.push_back(UnderlyingInstrument_38);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_81;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_81("STRING_1470092308");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_81);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_81.insert(UnderlyingSecurityAltID_81.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_81("STRING_219778428");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_81);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_81.insert(UnderlyingSecurityAltIDSource_81.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_81);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_82;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_82("STRING_1106811613");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_82);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_82.insert(UnderlyingSecurityAltID_82.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_82("STRING_1453230706");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_82);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_82.insert(UnderlyingSecurityAltIDSource_82.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_82);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_75;
      FIX::UnderlyingStipType UnderlyingStipType_75("STRING_749373273");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_75);
      UnderlyingStipulations_NoUnderlyingStips_75.insert(UnderlyingStipType_75.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_75("STRING_1139252831");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_75);
      UnderlyingStipulations_NoUnderlyingStips_75.insert(UnderlyingStipValue_75.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_75);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_76;
      FIX::UnderlyingStipType UnderlyingStipType_76("STRING_2083419799");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_76);
      UnderlyingStipulations_NoUnderlyingStips_76.insert(UnderlyingStipType_76.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_76("STRING_1486454650");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_76);
      UnderlyingStipulations_NoUnderlyingStips_76.insert(UnderlyingStipValue_76.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_76);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_77;
      FIX::UnderlyingStipType UnderlyingStipType_77("STRING_923036488");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_77);
      UnderlyingStipulations_NoUnderlyingStips_77.insert(UnderlyingStipType_77.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_77("STRING_263241564");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_77);
      UnderlyingStipulations_NoUnderlyingStips_77.insert(UnderlyingStipValue_77.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_77);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_72;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_72("STRING_896637487");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_72);
      UndlyInstrumentParties_NoUndlyInstrumentParties_72.insert(UnderlyingInstrumentPartyID_72.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_72('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_72);
      UndlyInstrumentParties_NoUndlyInstrumentParties_72.insert(UnderlyingInstrumentPartyIDSource_72.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_72(843800036);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_72);
      UndlyInstrumentParties_NoUndlyInstrumentParties_72.insert(UnderlyingInstrumentPartyRole_72.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_72);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_141("STRING_1897000403");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_141);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141.insert(UnderlyingInstrumentPartySubID_141.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_141(345275368);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_141);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141.insert(UnderlyingInstrumentPartySubIDType_141.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_142("STRING_1675018732");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_142);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142.insert(UnderlyingInstrumentPartySubID_142.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_142(1370466043);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_142);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142.insert(UnderlyingInstrumentPartySubIDType_142.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::Email::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_39;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_39("DATA_1926816899");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingIssuer_39.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_39(1676120291);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingIssuerLen_39.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_39("DATA_2056296838");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingSecurityDesc_39.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_39(1981713943);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingSecurityDescLen_39.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_39;
    UnderlyingAdjustedQuantity_39.setString("1160315");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_39);
    UnderlyingInstrument_39.insert(UnderlyingAdjustedQuantity_39.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_39;
    UnderlyingAllocationPercent_39.setString("33.080000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_39);
    UnderlyingInstrument_39.insert(UnderlyingAllocationPercent_39.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_39;
    UnderlyingAttachmentPoint_39.setString("66.920000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_39);
    UnderlyingInstrument_39.insert(UnderlyingAttachmentPoint_39.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_39("STRING_1104572979");
    noUnderlyings_0_1.set(UnderlyingCFICode_39);
    UnderlyingInstrument_39.insert(UnderlyingCFICode_39.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_39("STRING_1940849636");
    noUnderlyings_0_1.set(UnderlyingCPProgram_39);
    UnderlyingInstrument_39.insert(UnderlyingCPProgram_39.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_39("STRING_1501680368");
    noUnderlyings_0_1.set(UnderlyingCPRegType_39);
    UnderlyingInstrument_39.insert(UnderlyingCPRegType_39.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_39;
    UnderlyingCapValue_39.setString("3620346");
    noUnderlyings_0_1.set(UnderlyingCapValue_39);
    UnderlyingInstrument_39.insert(UnderlyingCapValue_39.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_39;
    UnderlyingCashAmount_39.setString("12634582");
    noUnderlyings_0_1.set(UnderlyingCashAmount_39);
    UnderlyingInstrument_39.insert(UnderlyingCashAmount_39.getString());
    FIX::UnderlyingCashType UnderlyingCashType_39("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_39);
    UnderlyingInstrument_39.insert(UnderlyingCashType_39.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_39;
    UnderlyingContractMultiplier_39.setString("14688462");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_39);
    UnderlyingInstrument_39.insert(UnderlyingContractMultiplier_39.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_39(569205354);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_39);
    UnderlyingInstrument_39.insert(UnderlyingContractMultiplierUnit_39.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_39("COUNTRY_1853352565");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_39);
    UnderlyingInstrument_39.insert(UnderlyingCountryOfIssue_39.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_39("LOCALMKTDATE_70735886");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_39);
    UnderlyingInstrument_39.insert(UnderlyingCouponPaymentDate_39.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_39;
    UnderlyingCouponRate_39.setString("81.850000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_39);
    UnderlyingInstrument_39.insert(UnderlyingCouponRate_39.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_39("STRING_1789288717");
    noUnderlyings_0_1.set(UnderlyingCreditRating_39);
    UnderlyingInstrument_39.insert(UnderlyingCreditRating_39.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_39("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_39);
    UnderlyingInstrument_39.insert(UnderlyingCurrency_39.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_39;
    UnderlyingCurrentValue_39.setString("20525302");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_39);
    UnderlyingInstrument_39.insert(UnderlyingCurrentValue_39.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_39;
    UnderlyingDetachmentPoint_39.setString("56.850000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_39);
    UnderlyingInstrument_39.insert(UnderlyingDetachmentPoint_39.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_39;
    UnderlyingDirtyPrice_39.setString("13806485");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_39);
    UnderlyingInstrument_39.insert(UnderlyingDirtyPrice_39.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_39;
    UnderlyingEndPrice_39.setString("9344708");
    noUnderlyings_0_1.set(UnderlyingEndPrice_39);
    UnderlyingInstrument_39.insert(UnderlyingEndPrice_39.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_39;
    UnderlyingEndValue_39.setString("9714457");
    noUnderlyings_0_1.set(UnderlyingEndValue_39);
    UnderlyingInstrument_39.insert(UnderlyingEndValue_39.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_39(514637360);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_39);
    UnderlyingInstrument_39.insert(UnderlyingExerciseStyle_39.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_39;
    UnderlyingFXRate_39.setString("6839875");
    noUnderlyings_0_1.set(UnderlyingFXRate_39);
    UnderlyingInstrument_39.insert(UnderlyingFXRate_39.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_39('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_39);
    UnderlyingInstrument_39.insert(UnderlyingFXRateCalc_39.getString());
    FIX::UnderlyingFactor UnderlyingFactor_39;
    UnderlyingFactor_39.setString("421724");
    noUnderlyings_0_1.set(UnderlyingFactor_39);
    UnderlyingInstrument_39.insert(UnderlyingFactor_39.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_39(2054453609);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_39);
    UnderlyingInstrument_39.insert(UnderlyingFlowScheduleType_39.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_39("STRING_1096054340");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_39);
    UnderlyingInstrument_39.insert(UnderlyingInstrRegistry_39.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_39("LOCALMKTDATE_1718292736");
    noUnderlyings_0_1.set(UnderlyingIssueDate_39);
    UnderlyingInstrument_39.insert(UnderlyingIssueDate_39.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_39("STRING_1963266799");
    noUnderlyings_0_1.set(UnderlyingIssuer_39);
    UnderlyingInstrument_39.insert(UnderlyingIssuer_39.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_39("STRING_930284636");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_39);
    UnderlyingInstrument_39.insert(UnderlyingLocaleOfIssue_39.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_39("LOCALMKTDATE_1834324273");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_39);
    UnderlyingInstrument_39.insert(UnderlyingMaturityDate_39.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_39("MONTHYEAR_1262266459");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_39);
    UnderlyingInstrument_39.insert(UnderlyingMaturityMonthYear_39.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_39("TZTIMEONLY_201347680");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_39);
    UnderlyingInstrument_39.insert(UnderlyingMaturityTime_39.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_39;
    UnderlyingNotionalPercentageOutstanding_39.setString("36.050000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_39);
    UnderlyingInstrument_39.insert(UnderlyingNotionalPercentageOutstanding_39.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_39('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_39);
    UnderlyingInstrument_39.insert(UnderlyingOptAttribute_39.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_39;
    UnderlyingOriginalNotionalPercentageOutstanding_39.setString("80.480000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_39);
    UnderlyingInstrument_39.insert(UnderlyingOriginalNotionalPercentageOutstanding_39.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_39("STRING_1153448253");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_39);
    UnderlyingInstrument_39.insert(UnderlyingPriceUnitOfMeasure_39.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_39;
    UnderlyingPriceUnitOfMeasureQty_39.setString("1716070");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_39);
    UnderlyingInstrument_39.insert(UnderlyingPriceUnitOfMeasureQty_39.getString());
    FIX::UnderlyingProduct UnderlyingProduct_39(1277003197);
    noUnderlyings_0_1.set(UnderlyingProduct_39);
    UnderlyingInstrument_39.insert(UnderlyingProduct_39.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_39(474810866);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_39);
    UnderlyingInstrument_39.insert(UnderlyingPutOrCall_39.getString());
    FIX::UnderlyingPx UnderlyingPx_39;
    UnderlyingPx_39.setString("7408124");
    noUnderlyings_0_1.set(UnderlyingPx_39);
    UnderlyingInstrument_39.insert(UnderlyingPx_39.getString());
    FIX::UnderlyingQty UnderlyingQty_39;
    UnderlyingQty_39.setString("9828721");
    noUnderlyings_0_1.set(UnderlyingQty_39);
    UnderlyingInstrument_39.insert(UnderlyingQty_39.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_39("LOCALMKTDATE_545546752");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_39);
    UnderlyingInstrument_39.insert(UnderlyingRedemptionDate_39.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_39("STRING_301786987");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_39);
    UnderlyingInstrument_39.insert(UnderlyingRepoCollateralSecurityType_39.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_39;
    UnderlyingRepurchaseRate_39.setString("71.830000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_39);
    UnderlyingInstrument_39.insert(UnderlyingRepurchaseRate_39.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_39(2102737288);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_39);
    UnderlyingInstrument_39.insert(UnderlyingRepurchaseTerm_39.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_39("STRING_785798013");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_39);
    UnderlyingInstrument_39.insert(UnderlyingRestructuringType_39.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_39("STRING_529723816");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityDesc_39.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_39("EXCHANGE_82899325");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityExchange_39.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_39("STRING_18962878");
    noUnderlyings_0_1.set(UnderlyingSecurityID_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityID_39.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_39("STRING_1464194627");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityIDSource_39.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_39("STRING_1054345046");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_39);
    UnderlyingInstrument_39.insert(UnderlyingSecuritySubType_39.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_39("STRING_533600239");
    noUnderlyings_0_1.set(UnderlyingSecurityType_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityType_39.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_39("STRING_698545");
    noUnderlyings_0_1.set(UnderlyingSeniority_39);
    UnderlyingInstrument_39.insert(UnderlyingSeniority_39.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_39("STRING_223582488");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_39);
    UnderlyingInstrument_39.insert(UnderlyingSettlMethod_39.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_39(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_39);
    UnderlyingInstrument_39.insert(UnderlyingSettlementType_39.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_39;
    UnderlyingStartValue_39.setString("20551521");
    noUnderlyings_0_1.set(UnderlyingStartValue_39);
    UnderlyingInstrument_39.insert(UnderlyingStartValue_39.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_39("STRING_1319636828");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_39);
    UnderlyingInstrument_39.insert(UnderlyingStateOrProvinceOfIssue_39.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_39("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_39);
    UnderlyingInstrument_39.insert(UnderlyingStrikeCurrency_39.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_39;
    UnderlyingStrikePrice_39.setString("1024378");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_39);
    UnderlyingInstrument_39.insert(UnderlyingStrikePrice_39.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_39("STRING_1980906045");
    noUnderlyings_0_1.set(UnderlyingSymbol_39);
    UnderlyingInstrument_39.insert(UnderlyingSymbol_39.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_39("STRING_985718117");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_39);
    UnderlyingInstrument_39.insert(UnderlyingSymbolSfx_39.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_39("STRING_303785497");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_39);
    UnderlyingInstrument_39.insert(UnderlyingTimeUnit_39.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_39("STRING_624836002");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_39);
    UnderlyingInstrument_39.insert(UnderlyingUnitOfMeasure_39.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_39;
    UnderlyingUnitOfMeasureQty_39.setString("20413505");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_39);
    UnderlyingInstrument_39.insert(UnderlyingUnitOfMeasureQty_39.getString());
    all_values.push_back(UnderlyingInstrument_39);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_83;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_83("STRING_1778284255");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_83);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_83.insert(UnderlyingSecurityAltID_83.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_83("STRING_65474012");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_83);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_83.insert(UnderlyingSecurityAltIDSource_83.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_83);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_84;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_84("STRING_1136333094");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_84);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_84.insert(UnderlyingSecurityAltID_84.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_84("STRING_105611473");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_84);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_84.insert(UnderlyingSecurityAltIDSource_84.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_84);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_78;
      FIX::UnderlyingStipType UnderlyingStipType_78("STRING_2119205209");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_78);
      UnderlyingStipulations_NoUnderlyingStips_78.insert(UnderlyingStipType_78.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_78("STRING_651158225");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_78);
      UnderlyingStipulations_NoUnderlyingStips_78.insert(UnderlyingStipValue_78.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_78);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_73;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_73("STRING_596398744");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_73);
      UndlyInstrumentParties_NoUndlyInstrumentParties_73.insert(UnderlyingInstrumentPartyID_73.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_73('6');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_73);
      UndlyInstrumentParties_NoUndlyInstrumentParties_73.insert(UnderlyingInstrumentPartyIDSource_73.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_73(1893871462);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_73);
      UndlyInstrumentParties_NoUndlyInstrumentParties_73.insert(UnderlyingInstrumentPartyRole_73.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_73);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_143("STRING_689311191");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_143);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143.insert(UnderlyingInstrumentPartySubID_143.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_143(1912834340);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_143);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143.insert(UnderlyingInstrumentPartySubIDType_143.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_74;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_74("STRING_442833540");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_74);
      UndlyInstrumentParties_NoUndlyInstrumentParties_74.insert(UnderlyingInstrumentPartyID_74.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_74('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_74);
      UndlyInstrumentParties_NoUndlyInstrumentParties_74.insert(UnderlyingInstrumentPartyIDSource_74.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_74(298950931);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_74);
      UndlyInstrumentParties_NoUndlyInstrumentParties_74.insert(UnderlyingInstrumentPartyRole_74.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_74);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_144("STRING_1967238725");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_144);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144.insert(UnderlyingInstrumentPartySubID_144.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_144(874723615);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_144);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144.insert(UnderlyingInstrumentPartySubIDType_144.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_145("STRING_351200592");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_145);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145.insert(UnderlyingInstrumentPartySubID_145.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_145(1139391906);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_145);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145.insert(UnderlyingInstrumentPartySubIDType_145.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_146("STRING_1021305386");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_146);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146.insert(UnderlyingInstrumentPartySubID_146.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_146(74652250);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_146);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146.insert(UnderlyingInstrumentPartySubIDType_146.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    cout << "########################" << endl;
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, "\n"));
    cout << "########################" << endl; 
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, "\n"));
  }  cout << "FIX components" << endl;
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
