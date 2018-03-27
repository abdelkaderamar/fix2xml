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
  FIX::ClOrdID ClOrdID_20("STRING_153547951");
  msg.set(ClOrdID_20);
  Email_0.insert(ClOrdID_20.getString());
  FIX::EmailThreadID EmailThreadID_0("STRING_618125384");
  msg.set(EmailThreadID_0);
  Email_0.insert(EmailThreadID_0.getString());
  FIX::EmailType EmailType_0('1');
  msg.set(EmailType_0);
  Email_0.insert(EmailType_0.getString());
  FIX::EncodedSubject EncodedSubject_0("DATA_1134744105");
  msg.set(EncodedSubject_0);
  Email_0.insert(EncodedSubject_0.getString());
  FIX::EncodedSubjectLen EncodedSubjectLen_0(1860925780);
  msg.set(EncodedSubjectLen_0);
  Email_0.insert(EncodedSubjectLen_0.getString());
  FIX::OrderID OrderID_18("STRING_308145392");
  msg.set(OrderID_18);
  Email_0.insert(OrderID_18.getString());
  FIX::OrigTime OrigTime_0(FIX::UTCTIMESTAMP(14, 41, 45, 21, 12009));
  msg.set(OrigTime_0);
  Email_0.insert(OrigTime_0.getString());
  FIX::RawData RawData_0("DATA_584375189");
  msg.set(RawData_0);
  Email_0.insert(RawData_0.getString());
  FIX::RawDataLength RawDataLength_0(215950092);
  msg.set(RawDataLength_0);
  Email_0.insert(RawDataLength_0.getString());
  FIX::Subject Subject_0("STRING_46619654");
  msg.set(Subject_0);
  Email_0.insert(Subject_0.getString());
  all_values.push_back(Email_0);

  // InstrmtGrp
  // Group InstrmtGrp.NoRelatedSym
  {
    FIX50SP2::Email::NoRelatedSym noRelatedSym_0_0;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_22;
    FIX::AttachmentPoint AttachmentPoint_22;
    AttachmentPoint_22.setString("91.910000");
    noRelatedSym_0_0.set(AttachmentPoint_22);
    Instrument_22.insert(AttachmentPoint_22.getString());
    FIX::CFICode CFICode_22("STRING_1121216967");
    noRelatedSym_0_0.set(CFICode_22);
    Instrument_22.insert(CFICode_22.getString());
    FIX::CPProgram CPProgram_22(99);
    noRelatedSym_0_0.set(CPProgram_22);
    Instrument_22.insert(CPProgram_22.getString());
    FIX::CPRegType CPRegType_22("STRING_490598363");
    noRelatedSym_0_0.set(CPRegType_22);
    Instrument_22.insert(CPRegType_22.getString());
    FIX::CapPrice CapPrice_22;
    CapPrice_22.setString("17398037");
    noRelatedSym_0_0.set(CapPrice_22);
    Instrument_22.insert(CapPrice_22.getString());
    FIX::ContractMultiplier ContractMultiplier_22;
    ContractMultiplier_22.setString("4155383");
    noRelatedSym_0_0.set(ContractMultiplier_22);
    Instrument_22.insert(ContractMultiplier_22.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_22(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_22);
    Instrument_22.insert(ContractMultiplierUnit_22.getString());
    FIX::ContractSettlMonth ContractSettlMonth_22("MONTHYEAR_1672217656");
    noRelatedSym_0_0.set(ContractSettlMonth_22);
    Instrument_22.insert(ContractSettlMonth_22.getString());
    FIX::CountryOfIssue CountryOfIssue_22("COUNTRY_540451250");
    noRelatedSym_0_0.set(CountryOfIssue_22);
    Instrument_22.insert(CountryOfIssue_22.getString());
    FIX::CouponPaymentDate CouponPaymentDate_22("LOCALMKTDATE_673146076");
    noRelatedSym_0_0.set(CouponPaymentDate_22);
    Instrument_22.insert(CouponPaymentDate_22.getString());
    FIX::CouponRate CouponRate_22;
    CouponRate_22.setString("91.110000");
    noRelatedSym_0_0.set(CouponRate_22);
    Instrument_22.insert(CouponRate_22.getString());
    FIX::CreditRating CreditRating_22("STRING_1321691819");
    noRelatedSym_0_0.set(CreditRating_22);
    Instrument_22.insert(CreditRating_22.getString());
    FIX::DatedDate DatedDate_22("LOCALMKTDATE_529187308");
    noRelatedSym_0_0.set(DatedDate_22);
    Instrument_22.insert(DatedDate_22.getString());
    FIX::DetachmentPoint DetachmentPoint_22;
    DetachmentPoint_22.setString("74.270000");
    noRelatedSym_0_0.set(DetachmentPoint_22);
    Instrument_22.insert(DetachmentPoint_22.getString());
    FIX::EncodedIssuer EncodedIssuer_22("DATA_1475239770");
    noRelatedSym_0_0.set(EncodedIssuer_22);
    Instrument_22.insert(EncodedIssuer_22.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_22(1147312692);
    noRelatedSym_0_0.set(EncodedIssuerLen_22);
    Instrument_22.insert(EncodedIssuerLen_22.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_22("DATA_1744947830");
    noRelatedSym_0_0.set(EncodedSecurityDesc_22);
    Instrument_22.insert(EncodedSecurityDesc_22.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_22(462500228);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_22);
    Instrument_22.insert(EncodedSecurityDescLen_22.getString());
    FIX::ExerciseStyle ExerciseStyle_22(2);
    noRelatedSym_0_0.set(ExerciseStyle_22);
    Instrument_22.insert(ExerciseStyle_22.getString());
    FIX::Factor Factor_22;
    Factor_22.setString("20530932");
    noRelatedSym_0_0.set(Factor_22);
    Instrument_22.insert(Factor_22.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_22(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_22);
    Instrument_22.insert(FlexProductEligibilityIndicator_22.getString());
    FIX::FlexibleIndicator FlexibleIndicator_22(true);
    noRelatedSym_0_0.set(FlexibleIndicator_22);
    Instrument_22.insert(FlexibleIndicator_22.getString());
    FIX::FloorPrice FloorPrice_22;
    FloorPrice_22.setString("19398799");
    noRelatedSym_0_0.set(FloorPrice_22);
    Instrument_22.insert(FloorPrice_22.getString());
    FIX::FlowScheduleType FlowScheduleType_22(3);
    noRelatedSym_0_0.set(FlowScheduleType_22);
    Instrument_22.insert(FlowScheduleType_22.getString());
    FIX::InstrRegistry InstrRegistry_22("STRING_2076006900");
    noRelatedSym_0_0.set(InstrRegistry_22);
    Instrument_22.insert(InstrRegistry_22.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_22('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_22);
    Instrument_22.insert(InstrmtAssignmentMethod_22.getString());
    FIX::InterestAccrualDate InterestAccrualDate_22("LOCALMKTDATE_1113727320");
    noRelatedSym_0_0.set(InterestAccrualDate_22);
    Instrument_22.insert(InterestAccrualDate_22.getString());
    FIX::IssueDate IssueDate_22("LOCALMKTDATE_512898441");
    noRelatedSym_0_0.set(IssueDate_22);
    Instrument_22.insert(IssueDate_22.getString());
    FIX::Issuer Issuer_22("STRING_1544618472");
    noRelatedSym_0_0.set(Issuer_22);
    Instrument_22.insert(Issuer_22.getString());
    FIX::ListMethod ListMethod_22(0);
    noRelatedSym_0_0.set(ListMethod_22);
    Instrument_22.insert(ListMethod_22.getString());
    FIX::LocaleOfIssue LocaleOfIssue_22("STRING_1087477662");
    noRelatedSym_0_0.set(LocaleOfIssue_22);
    Instrument_22.insert(LocaleOfIssue_22.getString());
    FIX::MaturityDate MaturityDate_22("LOCALMKTDATE_1762857663");
    noRelatedSym_0_0.set(MaturityDate_22);
    Instrument_22.insert(MaturityDate_22.getString());
    FIX::MaturityMonthYear MaturityMonthYear_22("MONTHYEAR_134080293");
    noRelatedSym_0_0.set(MaturityMonthYear_22);
    Instrument_22.insert(MaturityMonthYear_22.getString());
    FIX::MaturityTime MaturityTime_22("TZTIMEONLY_1932951009");
    noRelatedSym_0_0.set(MaturityTime_22);
    Instrument_22.insert(MaturityTime_22.getString());
    FIX::MinPriceIncrement MinPriceIncrement_22;
    MinPriceIncrement_22.setString("1059723");
    noRelatedSym_0_0.set(MinPriceIncrement_22);
    Instrument_22.insert(MinPriceIncrement_22.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_22;
    MinPriceIncrementAmount_22.setString("18738840");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_22);
    Instrument_22.insert(MinPriceIncrementAmount_22.getString());
    FIX::NTPositionLimit NTPositionLimit_22(201005689);
    noRelatedSym_0_0.set(NTPositionLimit_22);
    Instrument_22.insert(NTPositionLimit_22.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_22;
    NotionalPercentageOutstanding_22.setString("40.860000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_22);
    Instrument_22.insert(NotionalPercentageOutstanding_22.getString());
    FIX::OptAttribute OptAttribute_22('1');
    noRelatedSym_0_0.set(OptAttribute_22);
    Instrument_22.insert(OptAttribute_22.getString());
    FIX::OptPayoutAmount OptPayoutAmount_22;
    OptPayoutAmount_22.setString("7414569");
    noRelatedSym_0_0.set(OptPayoutAmount_22);
    Instrument_22.insert(OptPayoutAmount_22.getString());
    FIX::OptPayoutType OptPayoutType_22(1);
    noRelatedSym_0_0.set(OptPayoutType_22);
    Instrument_22.insert(OptPayoutType_22.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_22;
    OriginalNotionalPercentageOutstanding_22.setString("71.860000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_22);
    Instrument_22.insert(OriginalNotionalPercentageOutstanding_22.getString());
    FIX::Pool Pool_22("STRING_2063148759");
    noRelatedSym_0_0.set(Pool_22);
    Instrument_22.insert(Pool_22.getString());
    FIX::PositionLimit PositionLimit_22(1834267471);
    noRelatedSym_0_0.set(PositionLimit_22);
    Instrument_22.insert(PositionLimit_22.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_22("STRING_INT");
    noRelatedSym_0_0.set(PriceQuoteMethod_22);
    Instrument_22.insert(PriceQuoteMethod_22.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_22("STRING_1390904881");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_22);
    Instrument_22.insert(PriceUnitOfMeasure_22.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_22;
    PriceUnitOfMeasureQty_22.setString("8340965");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_22);
    Instrument_22.insert(PriceUnitOfMeasureQty_22.getString());
    FIX::Product Product_24(4);
    noRelatedSym_0_0.set(Product_24);
    Instrument_22.insert(Product_24.getString());
    FIX::ProductComplex ProductComplex_22("STRING_1853405109");
    noRelatedSym_0_0.set(ProductComplex_22);
    Instrument_22.insert(ProductComplex_22.getString());
    FIX::PutOrCall PutOrCall_22(0);
    noRelatedSym_0_0.set(PutOrCall_22);
    Instrument_22.insert(PutOrCall_22.getString());
    FIX::RedemptionDate RedemptionDate_22("LOCALMKTDATE_1411674722");
    noRelatedSym_0_0.set(RedemptionDate_22);
    Instrument_22.insert(RedemptionDate_22.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_22("STRING_1919419892");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_22);
    Instrument_22.insert(RepoCollateralSecurityType_22.getString());
    FIX::RepurchaseRate RepurchaseRate_22;
    RepurchaseRate_22.setString("70.020000");
    noRelatedSym_0_0.set(RepurchaseRate_22);
    Instrument_22.insert(RepurchaseRate_22.getString());
    FIX::RepurchaseTerm RepurchaseTerm_22(1204070990);
    noRelatedSym_0_0.set(RepurchaseTerm_22);
    Instrument_22.insert(RepurchaseTerm_22.getString());
    FIX::RestructuringType RestructuringType_22("STRING_MR");
    noRelatedSym_0_0.set(RestructuringType_22);
    Instrument_22.insert(RestructuringType_22.getString());
    FIX::SecurityDesc SecurityDesc_22("STRING_1558320254");
    noRelatedSym_0_0.set(SecurityDesc_22);
    Instrument_22.insert(SecurityDesc_22.getString());
    FIX::SecurityExchange SecurityExchange_22("EXCHANGE_385255722");
    noRelatedSym_0_0.set(SecurityExchange_22);
    Instrument_22.insert(SecurityExchange_22.getString());
    FIX::SecurityGroup SecurityGroup_22("STRING_1259282373");
    noRelatedSym_0_0.set(SecurityGroup_22);
    Instrument_22.insert(SecurityGroup_22.getString());
    FIX::SecurityID SecurityID_22("STRING_2071218696");
    noRelatedSym_0_0.set(SecurityID_22);
    Instrument_22.insert(SecurityID_22.getString());
    FIX::SecurityIDSource SecurityIDSource_22("STRING_7");
    noRelatedSym_0_0.set(SecurityIDSource_22);
    Instrument_22.insert(SecurityIDSource_22.getString());
    FIX::SecurityStatus SecurityStatus_22("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_22);
    Instrument_22.insert(SecurityStatus_22.getString());
    FIX::SecuritySubType SecuritySubType_23("STRING_1011212710");
    noRelatedSym_0_0.set(SecuritySubType_23);
    Instrument_22.insert(SecuritySubType_23.getString());
    FIX::SecurityType SecurityType_24("STRING_GO");
    noRelatedSym_0_0.set(SecurityType_24);
    Instrument_22.insert(SecurityType_24.getString());
    FIX::Seniority Seniority_22("STRING_SR");
    noRelatedSym_0_0.set(Seniority_22);
    Instrument_22.insert(Seniority_22.getString());
    FIX::SettlMethod SettlMethod_22('P');
    noRelatedSym_0_0.set(SettlMethod_22);
    Instrument_22.insert(SettlMethod_22.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_22("STRING_1651220587");
    noRelatedSym_0_0.set(SettleOnOpenFlag_22);
    Instrument_22.insert(SettleOnOpenFlag_22.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_22("STRING_132626412");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_22);
    Instrument_22.insert(StateOrProvinceOfIssue_22.getString());
    FIX::StrikeCurrency StrikeCurrency_22("JPY");
    noRelatedSym_0_0.set(StrikeCurrency_22);
    Instrument_22.insert(StrikeCurrency_22.getString());
    FIX::StrikeMultiplier StrikeMultiplier_22;
    StrikeMultiplier_22.setString("15312444");
    noRelatedSym_0_0.set(StrikeMultiplier_22);
    Instrument_22.insert(StrikeMultiplier_22.getString());
    FIX::StrikePrice StrikePrice_22;
    StrikePrice_22.setString("17391427");
    noRelatedSym_0_0.set(StrikePrice_22);
    Instrument_22.insert(StrikePrice_22.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_22(5);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_22);
    Instrument_22.insert(StrikePriceBoundaryMethod_22.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_22;
    StrikePriceBoundaryPrecision_22.setString("80.260000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_22);
    Instrument_22.insert(StrikePriceBoundaryPrecision_22.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_22(4);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_22);
    Instrument_22.insert(StrikePriceDeterminationMethod_22.getString());
    FIX::StrikeValue StrikeValue_22;
    StrikeValue_22.setString("11275350");
    noRelatedSym_0_0.set(StrikeValue_22);
    Instrument_22.insert(StrikeValue_22.getString());
    FIX::Symbol Symbol_22("STRING_1222335344");
    noRelatedSym_0_0.set(Symbol_22);
    Instrument_22.insert(Symbol_22.getString());
    FIX::SymbolSfx SymbolSfx_22("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_22);
    Instrument_22.insert(SymbolSfx_22.getString());
    FIX::TimeUnit TimeUnit_22("STRING_S");
    noRelatedSym_0_0.set(TimeUnit_22);
    Instrument_22.insert(TimeUnit_22.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_22(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_22);
    Instrument_22.insert(UnderlyingPriceDeterminationMethod_22.getString());
    FIX::UnitOfMeasure UnitOfMeasure_22("STRING_USD");
    noRelatedSym_0_0.set(UnitOfMeasure_22);
    Instrument_22.insert(UnitOfMeasure_22.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_22;
    UnitOfMeasureQty_22.setString("15089992");
    noRelatedSym_0_0.set(UnitOfMeasureQty_22);
    Instrument_22.insert(UnitOfMeasureQty_22.getString());
    FIX::ValuationMethod ValuationMethod_22("STRING_FUT");
    noRelatedSym_0_0.set(ValuationMethod_22);
    Instrument_22.insert(ValuationMethod_22.getString());
    all_values.push_back(Instrument_22);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_45;
      FIX::ComplexEventCondition ComplexEventCondition_45(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventCondition_45.getString());
      FIX::ComplexEventPrice ComplexEventPrice_45;
      ComplexEventPrice_45.setString("10491789");
      noComplexEvents_0_1_0.set(ComplexEventPrice_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventPrice_45.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_45(4);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventPriceBoundaryMethod_45.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_45;
      ComplexEventPriceBoundaryPrecision_45.setString("91.800000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventPriceBoundaryPrecision_45.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_45(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventPriceTimeType_45.getString());
      FIX::ComplexEventType ComplexEventType_45(1);
      noComplexEvents_0_1_0.set(ComplexEventType_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventType_45.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_45;
      ComplexOptPayoutAmount_45.setString("3258842");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexOptPayoutAmount_45.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_45);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_95;
        FIX::ComplexEventEndDate ComplexEventEndDate_95(FIX::UTCTIMESTAMP(11, 19, 21, 22, 82003));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_95);
        ComplexEventDates_NoComplexEventDates_95.insert(ComplexEventEndDate_95.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_95(FIX::UTCTIMESTAMP(17, 0, 35, 6, 32014));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_95);
        ComplexEventDates_NoComplexEventDates_95.insert(ComplexEventStartDate_95.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_95);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_192;
          FIX::ComplexEventEndTime ComplexEventEndTime_192(FIX::UTCTIMEONLY(6, 37, 38));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_192);
          ComplexEventTimes_NoComplexEventTimes_192.insert(ComplexEventEndTime_192.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_192(FIX::UTCTIMEONLY(13, 57, 19));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_192);
          ComplexEventTimes_NoComplexEventTimes_192.insert(ComplexEventStartTime_192.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_192);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_193;
          FIX::ComplexEventEndTime ComplexEventEndTime_193(FIX::UTCTIMEONLY(18, 14, 3));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_193);
          ComplexEventTimes_NoComplexEventTimes_193.insert(ComplexEventEndTime_193.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_193(FIX::UTCTIMEONLY(3, 52, 19));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_193);
          ComplexEventTimes_NoComplexEventTimes_193.insert(ComplexEventStartTime_193.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_193);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_96;
        FIX::ComplexEventEndDate ComplexEventEndDate_96(FIX::UTCTIMESTAMP(7, 39, 12, 17, 112009));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_96);
        ComplexEventDates_NoComplexEventDates_96.insert(ComplexEventEndDate_96.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_96(FIX::UTCTIMESTAMP(15, 37, 15, 9, 52017));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_96);
        ComplexEventDates_NoComplexEventDates_96.insert(ComplexEventStartDate_96.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_96);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_194;
          FIX::ComplexEventEndTime ComplexEventEndTime_194(FIX::UTCTIMEONLY(12, 24, 1));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_194);
          ComplexEventTimes_NoComplexEventTimes_194.insert(ComplexEventEndTime_194.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_194(FIX::UTCTIMEONLY(5, 58, 27));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_194);
          ComplexEventTimes_NoComplexEventTimes_194.insert(ComplexEventStartTime_194.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_194);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_195;
          FIX::ComplexEventEndTime ComplexEventEndTime_195(FIX::UTCTIMEONLY(8, 42, 32));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_195);
          ComplexEventTimes_NoComplexEventTimes_195.insert(ComplexEventEndTime_195.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_195(FIX::UTCTIMEONLY(1, 16, 57));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_195);
          ComplexEventTimes_NoComplexEventTimes_195.insert(ComplexEventStartTime_195.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_195);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_196;
          FIX::ComplexEventEndTime ComplexEventEndTime_196(FIX::UTCTIMEONLY(11, 36, 28));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_196);
          ComplexEventTimes_NoComplexEventTimes_196.insert(ComplexEventEndTime_196.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_196(FIX::UTCTIMEONLY(2, 13, 17));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_196);
          ComplexEventTimes_NoComplexEventTimes_196.insert(ComplexEventStartTime_196.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_196);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_97;
        FIX::ComplexEventEndDate ComplexEventEndDate_97(FIX::UTCTIMESTAMP(14, 32, 18, 2, 32015));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_97);
        ComplexEventDates_NoComplexEventDates_97.insert(ComplexEventEndDate_97.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_97(FIX::UTCTIMESTAMP(14, 13, 14, 2, 122000));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_97);
        ComplexEventDates_NoComplexEventDates_97.insert(ComplexEventStartDate_97.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_97);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_197;
          FIX::ComplexEventEndTime ComplexEventEndTime_197(FIX::UTCTIMEONLY(0, 20, 51));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_197);
          ComplexEventTimes_NoComplexEventTimes_197.insert(ComplexEventEndTime_197.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_197(FIX::UTCTIMEONLY(13, 7, 34));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_197);
          ComplexEventTimes_NoComplexEventTimes_197.insert(ComplexEventStartTime_197.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_197);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_198;
          FIX::ComplexEventEndTime ComplexEventEndTime_198(FIX::UTCTIMEONLY(10, 2, 21));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventEndTime_198);
          ComplexEventTimes_NoComplexEventTimes_198.insert(ComplexEventEndTime_198.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_198(FIX::UTCTIMEONLY(4, 26, 52));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventStartTime_198);
          ComplexEventTimes_NoComplexEventTimes_198.insert(ComplexEventStartTime_198.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_198);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_199;
          FIX::ComplexEventEndTime ComplexEventEndTime_199(FIX::UTCTIMEONLY(8, 16, 59));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventEndTime_199);
          ComplexEventTimes_NoComplexEventTimes_199.insert(ComplexEventEndTime_199.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_199(FIX::UTCTIMEONLY(6, 56, 20));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventStartTime_199);
          ComplexEventTimes_NoComplexEventTimes_199.insert(ComplexEventStartTime_199.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_199);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_49;
      FIX::EventDate EventDate_49("LOCALMKTDATE_907861742");
      noEvents_0_1_0.set(EventDate_49);
      EvntGrp_NoEvents_49.insert(EventDate_49.getString());
      FIX::EventPx EventPx_49;
      EventPx_49.setString("18261708");
      noEvents_0_1_0.set(EventPx_49);
      EvntGrp_NoEvents_49.insert(EventPx_49.getString());
      FIX::EventText EventText_49("STRING_166900007");
      noEvents_0_1_0.set(EventText_49);
      EvntGrp_NoEvents_49.insert(EventText_49.getString());
      FIX::EventTime EventTime_49(FIX::UTCTIMESTAMP(2, 25, 20, 14, 22000));
      noEvents_0_1_0.set(EventTime_49);
      EvntGrp_NoEvents_49.insert(EventTime_49.getString());
      FIX::EventType EventType_49(99);
      noEvents_0_1_0.set(EventType_49);
      EvntGrp_NoEvents_49.insert(EventType_49.getString());
      all_values.push_back(EvntGrp_NoEvents_49);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_50;
      FIX::EventDate EventDate_50("LOCALMKTDATE_223400654");
      noEvents_0_1_1.set(EventDate_50);
      EvntGrp_NoEvents_50.insert(EventDate_50.getString());
      FIX::EventPx EventPx_50;
      EventPx_50.setString("7897797");
      noEvents_0_1_1.set(EventPx_50);
      EvntGrp_NoEvents_50.insert(EventPx_50.getString());
      FIX::EventText EventText_50("STRING_120266306");
      noEvents_0_1_1.set(EventText_50);
      EvntGrp_NoEvents_50.insert(EventText_50.getString());
      FIX::EventTime EventTime_50(FIX::UTCTIMESTAMP(2, 28, 20, 13, 22004));
      noEvents_0_1_1.set(EventTime_50);
      EvntGrp_NoEvents_50.insert(EventTime_50.getString());
      FIX::EventType EventType_50(2);
      noEvents_0_1_1.set(EventType_50);
      EvntGrp_NoEvents_50.insert(EventType_50.getString());
      all_values.push_back(EvntGrp_NoEvents_50);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_51;
      FIX::EventDate EventDate_51("LOCALMKTDATE_1607123318");
      noEvents_0_1_2.set(EventDate_51);
      EvntGrp_NoEvents_51.insert(EventDate_51.getString());
      FIX::EventPx EventPx_51;
      EventPx_51.setString("20010277");
      noEvents_0_1_2.set(EventPx_51);
      EvntGrp_NoEvents_51.insert(EventPx_51.getString());
      FIX::EventText EventText_51("STRING_1891735957");
      noEvents_0_1_2.set(EventText_51);
      EvntGrp_NoEvents_51.insert(EventText_51.getString());
      FIX::EventTime EventTime_51(FIX::UTCTIMESTAMP(5, 12, 26, 17, 12008));
      noEvents_0_1_2.set(EventTime_51);
      EvntGrp_NoEvents_51.insert(EventTime_51.getString());
      FIX::EventType EventType_51(12);
      noEvents_0_1_2.set(EventType_51);
      EvntGrp_NoEvents_51.insert(EventType_51.getString());
      all_values.push_back(EvntGrp_NoEvents_51);

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_40;
      FIX::InstrumentPartyID InstrumentPartyID_40("STRING_283789153");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_40);
      InstrumentParties_NoInstrumentParties_40.insert(InstrumentPartyID_40.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_40('6');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_40);
      InstrumentParties_NoInstrumentParties_40.insert(InstrumentPartyIDSource_40.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_40(1190295540);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_40);
      InstrumentParties_NoInstrumentParties_40.insert(InstrumentPartyRole_40.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_40);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80;
        FIX::InstrumentPartySubID InstrumentPartySubID_80("STRING_1357442611");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_80);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80.insert(InstrumentPartySubID_80.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_80(1321945237);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_80);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80.insert(InstrumentPartySubIDType_80.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81;
        FIX::InstrumentPartySubID InstrumentPartySubID_81("STRING_2013601606");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_81);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81.insert(InstrumentPartySubID_81.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_81(1481452471);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_81);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81.insert(InstrumentPartySubIDType_81.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_41;
      FIX::InstrumentPartyID InstrumentPartyID_41("STRING_1545345891");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_41);
      InstrumentParties_NoInstrumentParties_41.insert(InstrumentPartyID_41.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_41('6');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_41);
      InstrumentParties_NoInstrumentParties_41.insert(InstrumentPartyIDSource_41.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_41(1601718777);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_41);
      InstrumentParties_NoInstrumentParties_41.insert(InstrumentPartyRole_41.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_41);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82;
        FIX::InstrumentPartySubID InstrumentPartySubID_82("STRING_764639151");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_82);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82.insert(InstrumentPartySubID_82.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_82(948554717);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_82);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82.insert(InstrumentPartySubIDType_82.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83;
        FIX::InstrumentPartySubID InstrumentPartySubID_83("STRING_770997010");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_83);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83.insert(InstrumentPartySubID_83.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_83(654699080);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_83);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83.insert(InstrumentPartySubIDType_83.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84;
        FIX::InstrumentPartySubID InstrumentPartySubID_84("STRING_1828438926");
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubID_84);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84.insert(InstrumentPartySubID_84.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_84(2083032656);
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubIDType_84);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84.insert(InstrumentPartySubIDType_84.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_42;
      FIX::InstrumentPartyID InstrumentPartyID_42("STRING_370645953");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_42);
      InstrumentParties_NoInstrumentParties_42.insert(InstrumentPartyID_42.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_42('1');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_42);
      InstrumentParties_NoInstrumentParties_42.insert(InstrumentPartyIDSource_42.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_42(1936576783);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_42);
      InstrumentParties_NoInstrumentParties_42.insert(InstrumentPartyRole_42.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_42);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85;
        FIX::InstrumentPartySubID InstrumentPartySubID_85("STRING_1399092967");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_85);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85.insert(InstrumentPartySubID_85.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_85(1862015788);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_85);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85.insert(InstrumentPartySubIDType_85.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_49;
      FIX::SecurityAltID SecurityAltID_49("STRING_1342878985");
      noSecurityAltID_0_1_0.set(SecurityAltID_49);
      SecAltIDGrp_NoSecurityAltID_49.insert(SecurityAltID_49.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_49("STRING_1207519346");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_49);
      SecAltIDGrp_NoSecurityAltID_49.insert(SecurityAltIDSource_49.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_49);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_44;
    FIX::SecurityXML SecurityXML_45("XMLDATA_535762563");
    noRelatedSym_0_0.set(SecurityXML_45);
    FIX::SecurityXMLLen SecurityXMLLen_22(47043098);
    noRelatedSym_0_0.set(SecurityXMLLen_22);
    FIX::SecurityXMLSchema SecurityXMLSchema_22("STRING_231710089");
    noRelatedSym_0_0.set(SecurityXMLSchema_22);
    SecurityXML_44.insert(SecurityXMLSchema_22.getString());
    all_values.push_back(SecurityXML_44);

    msg.addGroup(noRelatedSym_0_0);
  }
  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Email::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_37;
    FIX::EncodedLegIssuer EncodedLegIssuer_37("DATA_330832251");
    noLegs_0_0.set(EncodedLegIssuer_37);
    InstrumentLeg_37.insert(EncodedLegIssuer_37.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_37(893957571);
    noLegs_0_0.set(EncodedLegIssuerLen_37);
    InstrumentLeg_37.insert(EncodedLegIssuerLen_37.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_37("DATA_2098033839");
    noLegs_0_0.set(EncodedLegSecurityDesc_37);
    InstrumentLeg_37.insert(EncodedLegSecurityDesc_37.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_37(1156975585);
    noLegs_0_0.set(EncodedLegSecurityDescLen_37);
    InstrumentLeg_37.insert(EncodedLegSecurityDescLen_37.getString());
    FIX::LegCFICode LegCFICode_37("STRING_103916534");
    noLegs_0_0.set(LegCFICode_37);
    InstrumentLeg_37.insert(LegCFICode_37.getString());
    FIX::LegContractMultiplier LegContractMultiplier_37;
    LegContractMultiplier_37.setString("12724954");
    noLegs_0_0.set(LegContractMultiplier_37);
    InstrumentLeg_37.insert(LegContractMultiplier_37.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_37(1023093543);
    noLegs_0_0.set(LegContractMultiplierUnit_37);
    InstrumentLeg_37.insert(LegContractMultiplierUnit_37.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_37("MONTHYEAR_1585369005");
    noLegs_0_0.set(LegContractSettlMonth_37);
    InstrumentLeg_37.insert(LegContractSettlMonth_37.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_37("COUNTRY_670357672");
    noLegs_0_0.set(LegCountryOfIssue_37);
    InstrumentLeg_37.insert(LegCountryOfIssue_37.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_37("LOCALMKTDATE_1678991213");
    noLegs_0_0.set(LegCouponPaymentDate_37);
    InstrumentLeg_37.insert(LegCouponPaymentDate_37.getString());
    FIX::LegCouponRate LegCouponRate_37;
    LegCouponRate_37.setString("41.340000");
    noLegs_0_0.set(LegCouponRate_37);
    InstrumentLeg_37.insert(LegCouponRate_37.getString());
    FIX::LegCreditRating LegCreditRating_37("STRING_1036406143");
    noLegs_0_0.set(LegCreditRating_37);
    InstrumentLeg_37.insert(LegCreditRating_37.getString());
    FIX::LegCurrency LegCurrency_37("JPY");
    noLegs_0_0.set(LegCurrency_37);
    InstrumentLeg_37.insert(LegCurrency_37.getString());
    FIX::LegDatedDate LegDatedDate_37("LOCALMKTDATE_1807403153");
    noLegs_0_0.set(LegDatedDate_37);
    InstrumentLeg_37.insert(LegDatedDate_37.getString());
    FIX::LegExerciseStyle LegExerciseStyle_37(950845797);
    noLegs_0_0.set(LegExerciseStyle_37);
    InstrumentLeg_37.insert(LegExerciseStyle_37.getString());
    FIX::LegFactor LegFactor_37;
    LegFactor_37.setString("16691141");
    noLegs_0_0.set(LegFactor_37);
    InstrumentLeg_37.insert(LegFactor_37.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_37(1742952162);
    noLegs_0_0.set(LegFlowScheduleType_37);
    InstrumentLeg_37.insert(LegFlowScheduleType_37.getString());
    FIX::LegInstrRegistry LegInstrRegistry_37("STRING_1321491750");
    noLegs_0_0.set(LegInstrRegistry_37);
    InstrumentLeg_37.insert(LegInstrRegistry_37.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_37("LOCALMKTDATE_809709079");
    noLegs_0_0.set(LegInterestAccrualDate_37);
    InstrumentLeg_37.insert(LegInterestAccrualDate_37.getString());
    FIX::LegIssueDate LegIssueDate_37("LOCALMKTDATE_1532045297");
    noLegs_0_0.set(LegIssueDate_37);
    InstrumentLeg_37.insert(LegIssueDate_37.getString());
    FIX::LegIssuer LegIssuer_37("STRING_1436390013");
    noLegs_0_0.set(LegIssuer_37);
    InstrumentLeg_37.insert(LegIssuer_37.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_37("STRING_61318398");
    noLegs_0_0.set(LegLocaleOfIssue_37);
    InstrumentLeg_37.insert(LegLocaleOfIssue_37.getString());
    FIX::LegMaturityDate LegMaturityDate_37("LOCALMKTDATE_1246577437");
    noLegs_0_0.set(LegMaturityDate_37);
    InstrumentLeg_37.insert(LegMaturityDate_37.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_37("MONTHYEAR_1767076848");
    noLegs_0_0.set(LegMaturityMonthYear_37);
    InstrumentLeg_37.insert(LegMaturityMonthYear_37.getString());
    FIX::LegMaturityTime LegMaturityTime_37("TZTIMEONLY_1404197384");
    noLegs_0_0.set(LegMaturityTime_37);
    InstrumentLeg_37.insert(LegMaturityTime_37.getString());
    FIX::LegOptAttribute LegOptAttribute_37('3');
    noLegs_0_0.set(LegOptAttribute_37);
    InstrumentLeg_37.insert(LegOptAttribute_37.getString());
    FIX::LegOptionRatio LegOptionRatio_37;
    LegOptionRatio_37.setString("1553557");
    noLegs_0_0.set(LegOptionRatio_37);
    InstrumentLeg_37.insert(LegOptionRatio_37.getString());
    FIX::LegPool LegPool_37("STRING_1451240482");
    noLegs_0_0.set(LegPool_37);
    InstrumentLeg_37.insert(LegPool_37.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_37("STRING_538323225");
    noLegs_0_0.set(LegPriceUnitOfMeasure_37);
    InstrumentLeg_37.insert(LegPriceUnitOfMeasure_37.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_37;
    LegPriceUnitOfMeasureQty_37.setString("10630940");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_37);
    InstrumentLeg_37.insert(LegPriceUnitOfMeasureQty_37.getString());
    FIX::LegProduct LegProduct_37(1782072733);
    noLegs_0_0.set(LegProduct_37);
    InstrumentLeg_37.insert(LegProduct_37.getString());
    FIX::LegPutOrCall LegPutOrCall_37(1432280796);
    noLegs_0_0.set(LegPutOrCall_37);
    InstrumentLeg_37.insert(LegPutOrCall_37.getString());
    FIX::LegRatioQty LegRatioQty_37;
    LegRatioQty_37.setString("10136442");
    noLegs_0_0.set(LegRatioQty_37);
    InstrumentLeg_37.insert(LegRatioQty_37.getString());
    FIX::LegRedemptionDate LegRedemptionDate_37("LOCALMKTDATE_791564671");
    noLegs_0_0.set(LegRedemptionDate_37);
    InstrumentLeg_37.insert(LegRedemptionDate_37.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_37("STRING_1536197330");
    noLegs_0_0.set(LegRepoCollateralSecurityType_37);
    InstrumentLeg_37.insert(LegRepoCollateralSecurityType_37.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_37;
    LegRepurchaseRate_37.setString("60.350000");
    noLegs_0_0.set(LegRepurchaseRate_37);
    InstrumentLeg_37.insert(LegRepurchaseRate_37.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_37(1814658214);
    noLegs_0_0.set(LegRepurchaseTerm_37);
    InstrumentLeg_37.insert(LegRepurchaseTerm_37.getString());
    FIX::LegSecurityDesc LegSecurityDesc_37("STRING_974082688");
    noLegs_0_0.set(LegSecurityDesc_37);
    InstrumentLeg_37.insert(LegSecurityDesc_37.getString());
    FIX::LegSecurityExchange LegSecurityExchange_37("EXCHANGE_809013708");
    noLegs_0_0.set(LegSecurityExchange_37);
    InstrumentLeg_37.insert(LegSecurityExchange_37.getString());
    FIX::LegSecurityID LegSecurityID_37("STRING_1346165779");
    noLegs_0_0.set(LegSecurityID_37);
    InstrumentLeg_37.insert(LegSecurityID_37.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_37("STRING_2013686822");
    noLegs_0_0.set(LegSecurityIDSource_37);
    InstrumentLeg_37.insert(LegSecurityIDSource_37.getString());
    FIX::LegSecuritySubType LegSecuritySubType_37("STRING_1845419851");
    noLegs_0_0.set(LegSecuritySubType_37);
    InstrumentLeg_37.insert(LegSecuritySubType_37.getString());
    FIX::LegSecurityType LegSecurityType_37("STRING_1642312496");
    noLegs_0_0.set(LegSecurityType_37);
    InstrumentLeg_37.insert(LegSecurityType_37.getString());
    FIX::LegSide LegSide_37('1');
    noLegs_0_0.set(LegSide_37);
    InstrumentLeg_37.insert(LegSide_37.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_37("STRING_1505339356");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_37);
    InstrumentLeg_37.insert(LegStateOrProvinceOfIssue_37.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_37("CAN");
    noLegs_0_0.set(LegStrikeCurrency_37);
    InstrumentLeg_37.insert(LegStrikeCurrency_37.getString());
    FIX::LegStrikePrice LegStrikePrice_37;
    LegStrikePrice_37.setString("11008078");
    noLegs_0_0.set(LegStrikePrice_37);
    InstrumentLeg_37.insert(LegStrikePrice_37.getString());
    FIX::LegSymbol LegSymbol_37("STRING_1767166395");
    noLegs_0_0.set(LegSymbol_37);
    InstrumentLeg_37.insert(LegSymbol_37.getString());
    FIX::LegSymbolSfx LegSymbolSfx_37("STRING_38217940");
    noLegs_0_0.set(LegSymbolSfx_37);
    InstrumentLeg_37.insert(LegSymbolSfx_37.getString());
    FIX::LegTimeUnit LegTimeUnit_37("STRING_485369519");
    noLegs_0_0.set(LegTimeUnit_37);
    InstrumentLeg_37.insert(LegTimeUnit_37.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_37("STRING_1056072761");
    noLegs_0_0.set(LegUnitOfMeasure_37);
    InstrumentLeg_37.insert(LegUnitOfMeasure_37.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_37;
    LegUnitOfMeasureQty_37.setString("995363");
    noLegs_0_0.set(LegUnitOfMeasureQty_37);
    InstrumentLeg_37.insert(LegUnitOfMeasureQty_37.getString());
    all_values.push_back(InstrumentLeg_37);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_63;
      FIX::LegSecurityAltID LegSecurityAltID_63("STRING_675665961");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_63);
      LegSecAltIDGrp_NoLegSecurityAltID_63.insert(LegSecurityAltID_63.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_63("STRING_1503733723");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_63);
      LegSecAltIDGrp_NoLegSecurityAltID_63.insert(LegSecurityAltIDSource_63.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_63);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_64;
      FIX::LegSecurityAltID LegSecurityAltID_64("STRING_2038560092");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_64);
      LegSecAltIDGrp_NoLegSecurityAltID_64.insert(LegSecurityAltID_64.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_64("STRING_831021725");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_64);
      LegSecAltIDGrp_NoLegSecurityAltID_64.insert(LegSecurityAltIDSource_64.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_64);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // LinesOfTextGrp
  // Group LinesOfTextGrp.NoLinesOfText
  {
    FIX50SP2::Email::NoLinesOfText noLinesOfText_0_0;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_0;
    FIX::EncodedText EncodedText_34("DATA_429399669");
    noLinesOfText_0_0.set(EncodedText_34);
    LinesOfTextGrp_NoLinesOfText_0.insert(EncodedText_34.getString());
    FIX::EncodedTextLen EncodedTextLen_34(1894115788);
    noLinesOfText_0_0.set(EncodedTextLen_34);
    LinesOfTextGrp_NoLinesOfText_0.insert(EncodedTextLen_34.getString());
    FIX::Text Text_34("STRING_442079642");
    noLinesOfText_0_0.set(Text_34);
    LinesOfTextGrp_NoLinesOfText_0.insert(Text_34.getString());
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_0);

    msg.addGroup(noLinesOfText_0_0);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::Email::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_0;
    FIX::RoutingID RoutingID_0("STRING_760276395");
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
    multiset<string> UnderlyingInstrument_30;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_30("DATA_898932430");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingIssuer_30.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_30(900818880);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingIssuerLen_30.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_30("DATA_76993188");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingSecurityDesc_30.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_30(1707946138);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingSecurityDescLen_30.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_30;
    UnderlyingAdjustedQuantity_30.setString("995010");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_30);
    UnderlyingInstrument_30.insert(UnderlyingAdjustedQuantity_30.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_30;
    UnderlyingAllocationPercent_30.setString("0.100000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_30);
    UnderlyingInstrument_30.insert(UnderlyingAllocationPercent_30.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_30;
    UnderlyingAttachmentPoint_30.setString("23.410000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_30);
    UnderlyingInstrument_30.insert(UnderlyingAttachmentPoint_30.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_30("STRING_1741813507");
    noUnderlyings_0_0.set(UnderlyingCFICode_30);
    UnderlyingInstrument_30.insert(UnderlyingCFICode_30.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_30("STRING_1797558389");
    noUnderlyings_0_0.set(UnderlyingCPProgram_30);
    UnderlyingInstrument_30.insert(UnderlyingCPProgram_30.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_30("STRING_763738050");
    noUnderlyings_0_0.set(UnderlyingCPRegType_30);
    UnderlyingInstrument_30.insert(UnderlyingCPRegType_30.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_30;
    UnderlyingCapValue_30.setString("400045");
    noUnderlyings_0_0.set(UnderlyingCapValue_30);
    UnderlyingInstrument_30.insert(UnderlyingCapValue_30.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_30;
    UnderlyingCashAmount_30.setString("10260672");
    noUnderlyings_0_0.set(UnderlyingCashAmount_30);
    UnderlyingInstrument_30.insert(UnderlyingCashAmount_30.getString());
    FIX::UnderlyingCashType UnderlyingCashType_30("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_30);
    UnderlyingInstrument_30.insert(UnderlyingCashType_30.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_30;
    UnderlyingContractMultiplier_30.setString("18071709");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_30);
    UnderlyingInstrument_30.insert(UnderlyingContractMultiplier_30.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_30(1064285190);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_30);
    UnderlyingInstrument_30.insert(UnderlyingContractMultiplierUnit_30.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_30("COUNTRY_202431792");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_30);
    UnderlyingInstrument_30.insert(UnderlyingCountryOfIssue_30.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_30("LOCALMKTDATE_715760013");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_30);
    UnderlyingInstrument_30.insert(UnderlyingCouponPaymentDate_30.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_30;
    UnderlyingCouponRate_30.setString("15.290000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_30);
    UnderlyingInstrument_30.insert(UnderlyingCouponRate_30.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_30("STRING_1934378749");
    noUnderlyings_0_0.set(UnderlyingCreditRating_30);
    UnderlyingInstrument_30.insert(UnderlyingCreditRating_30.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_30("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_30);
    UnderlyingInstrument_30.insert(UnderlyingCurrency_30.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_30;
    UnderlyingCurrentValue_30.setString("18254551");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_30);
    UnderlyingInstrument_30.insert(UnderlyingCurrentValue_30.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_30;
    UnderlyingDetachmentPoint_30.setString("40.520000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_30);
    UnderlyingInstrument_30.insert(UnderlyingDetachmentPoint_30.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_30;
    UnderlyingDirtyPrice_30.setString("13275621");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_30);
    UnderlyingInstrument_30.insert(UnderlyingDirtyPrice_30.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_30;
    UnderlyingEndPrice_30.setString("1073712");
    noUnderlyings_0_0.set(UnderlyingEndPrice_30);
    UnderlyingInstrument_30.insert(UnderlyingEndPrice_30.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_30;
    UnderlyingEndValue_30.setString("19690798");
    noUnderlyings_0_0.set(UnderlyingEndValue_30);
    UnderlyingInstrument_30.insert(UnderlyingEndValue_30.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_30(1769641804);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_30);
    UnderlyingInstrument_30.insert(UnderlyingExerciseStyle_30.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_30;
    UnderlyingFXRate_30.setString("19690516");
    noUnderlyings_0_0.set(UnderlyingFXRate_30);
    UnderlyingInstrument_30.insert(UnderlyingFXRate_30.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_30('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_30);
    UnderlyingInstrument_30.insert(UnderlyingFXRateCalc_30.getString());
    FIX::UnderlyingFactor UnderlyingFactor_30;
    UnderlyingFactor_30.setString("8558024");
    noUnderlyings_0_0.set(UnderlyingFactor_30);
    UnderlyingInstrument_30.insert(UnderlyingFactor_30.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_30(1071962180);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_30);
    UnderlyingInstrument_30.insert(UnderlyingFlowScheduleType_30.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_30("STRING_1480805018");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_30);
    UnderlyingInstrument_30.insert(UnderlyingInstrRegistry_30.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_30("LOCALMKTDATE_1756621349");
    noUnderlyings_0_0.set(UnderlyingIssueDate_30);
    UnderlyingInstrument_30.insert(UnderlyingIssueDate_30.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_30("STRING_1148955368");
    noUnderlyings_0_0.set(UnderlyingIssuer_30);
    UnderlyingInstrument_30.insert(UnderlyingIssuer_30.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_30("STRING_1041267508");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_30);
    UnderlyingInstrument_30.insert(UnderlyingLocaleOfIssue_30.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_30("LOCALMKTDATE_1856122361");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_30);
    UnderlyingInstrument_30.insert(UnderlyingMaturityDate_30.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_30("MONTHYEAR_1092151731");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_30);
    UnderlyingInstrument_30.insert(UnderlyingMaturityMonthYear_30.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_30("TZTIMEONLY_299666202");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_30);
    UnderlyingInstrument_30.insert(UnderlyingMaturityTime_30.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_30;
    UnderlyingNotionalPercentageOutstanding_30.setString("22.200000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_30);
    UnderlyingInstrument_30.insert(UnderlyingNotionalPercentageOutstanding_30.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_30('7');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_30);
    UnderlyingInstrument_30.insert(UnderlyingOptAttribute_30.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_30;
    UnderlyingOriginalNotionalPercentageOutstanding_30.setString("42.520000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_30);
    UnderlyingInstrument_30.insert(UnderlyingOriginalNotionalPercentageOutstanding_30.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_30("STRING_1490456725");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_30);
    UnderlyingInstrument_30.insert(UnderlyingPriceUnitOfMeasure_30.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_30;
    UnderlyingPriceUnitOfMeasureQty_30.setString("17682937");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_30);
    UnderlyingInstrument_30.insert(UnderlyingPriceUnitOfMeasureQty_30.getString());
    FIX::UnderlyingProduct UnderlyingProduct_30(780466524);
    noUnderlyings_0_0.set(UnderlyingProduct_30);
    UnderlyingInstrument_30.insert(UnderlyingProduct_30.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_30(1150143977);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_30);
    UnderlyingInstrument_30.insert(UnderlyingPutOrCall_30.getString());
    FIX::UnderlyingPx UnderlyingPx_30;
    UnderlyingPx_30.setString("6850952");
    noUnderlyings_0_0.set(UnderlyingPx_30);
    UnderlyingInstrument_30.insert(UnderlyingPx_30.getString());
    FIX::UnderlyingQty UnderlyingQty_30;
    UnderlyingQty_30.setString("9828983");
    noUnderlyings_0_0.set(UnderlyingQty_30);
    UnderlyingInstrument_30.insert(UnderlyingQty_30.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_30("LOCALMKTDATE_1865903990");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_30);
    UnderlyingInstrument_30.insert(UnderlyingRedemptionDate_30.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_30("STRING_1848916794");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_30);
    UnderlyingInstrument_30.insert(UnderlyingRepoCollateralSecurityType_30.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_30;
    UnderlyingRepurchaseRate_30.setString("34.170000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_30);
    UnderlyingInstrument_30.insert(UnderlyingRepurchaseRate_30.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_30(1109846316);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_30);
    UnderlyingInstrument_30.insert(UnderlyingRepurchaseTerm_30.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_30("STRING_221504750");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_30);
    UnderlyingInstrument_30.insert(UnderlyingRestructuringType_30.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_30("STRING_447764963");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityDesc_30.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_30("EXCHANGE_1184810368");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityExchange_30.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_30("STRING_1549066912");
    noUnderlyings_0_0.set(UnderlyingSecurityID_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityID_30.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_30("STRING_555136178");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityIDSource_30.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_30("STRING_1006406561");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_30);
    UnderlyingInstrument_30.insert(UnderlyingSecuritySubType_30.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_30("STRING_1171225068");
    noUnderlyings_0_0.set(UnderlyingSecurityType_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityType_30.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_30("STRING_376704210");
    noUnderlyings_0_0.set(UnderlyingSeniority_30);
    UnderlyingInstrument_30.insert(UnderlyingSeniority_30.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_30("STRING_1588279148");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_30);
    UnderlyingInstrument_30.insert(UnderlyingSettlMethod_30.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_30(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_30);
    UnderlyingInstrument_30.insert(UnderlyingSettlementType_30.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_30;
    UnderlyingStartValue_30.setString("14486663");
    noUnderlyings_0_0.set(UnderlyingStartValue_30);
    UnderlyingInstrument_30.insert(UnderlyingStartValue_30.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_30("STRING_921600518");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_30);
    UnderlyingInstrument_30.insert(UnderlyingStateOrProvinceOfIssue_30.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_30("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_30);
    UnderlyingInstrument_30.insert(UnderlyingStrikeCurrency_30.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_30;
    UnderlyingStrikePrice_30.setString("19628680");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_30);
    UnderlyingInstrument_30.insert(UnderlyingStrikePrice_30.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_30("STRING_1344803952");
    noUnderlyings_0_0.set(UnderlyingSymbol_30);
    UnderlyingInstrument_30.insert(UnderlyingSymbol_30.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_30("STRING_1542289842");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_30);
    UnderlyingInstrument_30.insert(UnderlyingSymbolSfx_30.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_30("STRING_115050581");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_30);
    UnderlyingInstrument_30.insert(UnderlyingTimeUnit_30.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_30("STRING_647772524");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_30);
    UnderlyingInstrument_30.insert(UnderlyingUnitOfMeasure_30.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_30;
    UnderlyingUnitOfMeasureQty_30.setString("1370326");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_30);
    UnderlyingInstrument_30.insert(UnderlyingUnitOfMeasureQty_30.getString());
    all_values.push_back(UnderlyingInstrument_30);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_59;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_59("STRING_2138229249");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_59);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_59.insert(UnderlyingSecurityAltID_59.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_59("STRING_1905326388");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_59);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_59.insert(UnderlyingSecurityAltIDSource_59.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_59);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_60;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_60("STRING_1958921357");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_60);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_60.insert(UnderlyingSecurityAltID_60.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_60("STRING_1140889578");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_60);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_60.insert(UnderlyingSecurityAltIDSource_60.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_60);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_61;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_61("STRING_442938005");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_61);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_61.insert(UnderlyingSecurityAltID_61.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_61("STRING_794336026");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_61);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_61.insert(UnderlyingSecurityAltIDSource_61.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_61);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_56;
      FIX::UnderlyingStipType UnderlyingStipType_56("STRING_144371151");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_56);
      UnderlyingStipulations_NoUnderlyingStips_56.insert(UnderlyingStipType_56.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_56("STRING_1564129443");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_56);
      UnderlyingStipulations_NoUnderlyingStips_56.insert(UnderlyingStipValue_56.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_56);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_55;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_55("STRING_365875901");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_55);
      UndlyInstrumentParties_NoUndlyInstrumentParties_55.insert(UnderlyingInstrumentPartyID_55.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_55('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_55);
      UndlyInstrumentParties_NoUndlyInstrumentParties_55.insert(UnderlyingInstrumentPartyIDSource_55.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_55(1006482957);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_55);
      UndlyInstrumentParties_NoUndlyInstrumentParties_55.insert(UnderlyingInstrumentPartyRole_55.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_55);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_104("STRING_419546936");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_104);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104.insert(UnderlyingInstrumentPartySubID_104.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_104(2012889518);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_104);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104.insert(UnderlyingInstrumentPartySubIDType_104.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_56;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_56("STRING_938684233");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_56);
      UndlyInstrumentParties_NoUndlyInstrumentParties_56.insert(UnderlyingInstrumentPartyID_56.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_56('7');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_56);
      UndlyInstrumentParties_NoUndlyInstrumentParties_56.insert(UnderlyingInstrumentPartyIDSource_56.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_56(1453685019);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_56);
      UndlyInstrumentParties_NoUndlyInstrumentParties_56.insert(UnderlyingInstrumentPartyRole_56.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_56);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_105("STRING_97433890");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_105);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105.insert(UnderlyingInstrumentPartySubID_105.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_105(227801889);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_105);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105.insert(UnderlyingInstrumentPartySubIDType_105.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_106("STRING_306909714");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_106);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106.insert(UnderlyingInstrumentPartySubID_106.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_106(547572001);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_106);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106.insert(UnderlyingInstrumentPartySubIDType_106.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_107("STRING_43186268");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_107);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107.insert(UnderlyingInstrumentPartySubID_107.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_107(1651713666);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_107);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107.insert(UnderlyingInstrumentPartySubIDType_107.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::Email::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_31;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_31("DATA_2089861844");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingIssuer_31.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_31(158236849);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingIssuerLen_31.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_31("DATA_152002542");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingSecurityDesc_31.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_31(79410862);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingSecurityDescLen_31.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_31;
    UnderlyingAdjustedQuantity_31.setString("13366916");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_31);
    UnderlyingInstrument_31.insert(UnderlyingAdjustedQuantity_31.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_31;
    UnderlyingAllocationPercent_31.setString("81.440000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_31);
    UnderlyingInstrument_31.insert(UnderlyingAllocationPercent_31.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_31;
    UnderlyingAttachmentPoint_31.setString("72.510000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_31);
    UnderlyingInstrument_31.insert(UnderlyingAttachmentPoint_31.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_31("STRING_1148129392");
    noUnderlyings_0_1.set(UnderlyingCFICode_31);
    UnderlyingInstrument_31.insert(UnderlyingCFICode_31.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_31("STRING_1283637722");
    noUnderlyings_0_1.set(UnderlyingCPProgram_31);
    UnderlyingInstrument_31.insert(UnderlyingCPProgram_31.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_31("STRING_280191608");
    noUnderlyings_0_1.set(UnderlyingCPRegType_31);
    UnderlyingInstrument_31.insert(UnderlyingCPRegType_31.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_31;
    UnderlyingCapValue_31.setString("19424654");
    noUnderlyings_0_1.set(UnderlyingCapValue_31);
    UnderlyingInstrument_31.insert(UnderlyingCapValue_31.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_31;
    UnderlyingCashAmount_31.setString("21429476");
    noUnderlyings_0_1.set(UnderlyingCashAmount_31);
    UnderlyingInstrument_31.insert(UnderlyingCashAmount_31.getString());
    FIX::UnderlyingCashType UnderlyingCashType_31("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_31);
    UnderlyingInstrument_31.insert(UnderlyingCashType_31.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_31;
    UnderlyingContractMultiplier_31.setString("13591112");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_31);
    UnderlyingInstrument_31.insert(UnderlyingContractMultiplier_31.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_31(1964620232);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_31);
    UnderlyingInstrument_31.insert(UnderlyingContractMultiplierUnit_31.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_31("COUNTRY_790438660");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_31);
    UnderlyingInstrument_31.insert(UnderlyingCountryOfIssue_31.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_31("LOCALMKTDATE_1223521972");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_31);
    UnderlyingInstrument_31.insert(UnderlyingCouponPaymentDate_31.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_31;
    UnderlyingCouponRate_31.setString("95.410000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_31);
    UnderlyingInstrument_31.insert(UnderlyingCouponRate_31.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_31("STRING_557897826");
    noUnderlyings_0_1.set(UnderlyingCreditRating_31);
    UnderlyingInstrument_31.insert(UnderlyingCreditRating_31.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_31("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_31);
    UnderlyingInstrument_31.insert(UnderlyingCurrency_31.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_31;
    UnderlyingCurrentValue_31.setString("14965820");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_31);
    UnderlyingInstrument_31.insert(UnderlyingCurrentValue_31.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_31;
    UnderlyingDetachmentPoint_31.setString("64.070000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_31);
    UnderlyingInstrument_31.insert(UnderlyingDetachmentPoint_31.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_31;
    UnderlyingDirtyPrice_31.setString("21427104");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_31);
    UnderlyingInstrument_31.insert(UnderlyingDirtyPrice_31.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_31;
    UnderlyingEndPrice_31.setString("1673265");
    noUnderlyings_0_1.set(UnderlyingEndPrice_31);
    UnderlyingInstrument_31.insert(UnderlyingEndPrice_31.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_31;
    UnderlyingEndValue_31.setString("3892702");
    noUnderlyings_0_1.set(UnderlyingEndValue_31);
    UnderlyingInstrument_31.insert(UnderlyingEndValue_31.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_31(223028672);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_31);
    UnderlyingInstrument_31.insert(UnderlyingExerciseStyle_31.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_31;
    UnderlyingFXRate_31.setString("4742362");
    noUnderlyings_0_1.set(UnderlyingFXRate_31);
    UnderlyingInstrument_31.insert(UnderlyingFXRate_31.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_31('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_31);
    UnderlyingInstrument_31.insert(UnderlyingFXRateCalc_31.getString());
    FIX::UnderlyingFactor UnderlyingFactor_31;
    UnderlyingFactor_31.setString("2662149");
    noUnderlyings_0_1.set(UnderlyingFactor_31);
    UnderlyingInstrument_31.insert(UnderlyingFactor_31.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_31(2125949914);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_31);
    UnderlyingInstrument_31.insert(UnderlyingFlowScheduleType_31.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_31("STRING_879220495");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_31);
    UnderlyingInstrument_31.insert(UnderlyingInstrRegistry_31.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_31("LOCALMKTDATE_424451790");
    noUnderlyings_0_1.set(UnderlyingIssueDate_31);
    UnderlyingInstrument_31.insert(UnderlyingIssueDate_31.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_31("STRING_130468809");
    noUnderlyings_0_1.set(UnderlyingIssuer_31);
    UnderlyingInstrument_31.insert(UnderlyingIssuer_31.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_31("STRING_958631357");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_31);
    UnderlyingInstrument_31.insert(UnderlyingLocaleOfIssue_31.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_31("LOCALMKTDATE_1761143473");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_31);
    UnderlyingInstrument_31.insert(UnderlyingMaturityDate_31.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_31("MONTHYEAR_273216953");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_31);
    UnderlyingInstrument_31.insert(UnderlyingMaturityMonthYear_31.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_31("TZTIMEONLY_795884960");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_31);
    UnderlyingInstrument_31.insert(UnderlyingMaturityTime_31.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_31;
    UnderlyingNotionalPercentageOutstanding_31.setString("92.170000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_31);
    UnderlyingInstrument_31.insert(UnderlyingNotionalPercentageOutstanding_31.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_31('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_31);
    UnderlyingInstrument_31.insert(UnderlyingOptAttribute_31.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_31;
    UnderlyingOriginalNotionalPercentageOutstanding_31.setString("65.680000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_31);
    UnderlyingInstrument_31.insert(UnderlyingOriginalNotionalPercentageOutstanding_31.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_31("STRING_556770987");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_31);
    UnderlyingInstrument_31.insert(UnderlyingPriceUnitOfMeasure_31.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_31;
    UnderlyingPriceUnitOfMeasureQty_31.setString("15523186");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_31);
    UnderlyingInstrument_31.insert(UnderlyingPriceUnitOfMeasureQty_31.getString());
    FIX::UnderlyingProduct UnderlyingProduct_31(1500639327);
    noUnderlyings_0_1.set(UnderlyingProduct_31);
    UnderlyingInstrument_31.insert(UnderlyingProduct_31.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_31(1915882200);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_31);
    UnderlyingInstrument_31.insert(UnderlyingPutOrCall_31.getString());
    FIX::UnderlyingPx UnderlyingPx_31;
    UnderlyingPx_31.setString("13694552");
    noUnderlyings_0_1.set(UnderlyingPx_31);
    UnderlyingInstrument_31.insert(UnderlyingPx_31.getString());
    FIX::UnderlyingQty UnderlyingQty_31;
    UnderlyingQty_31.setString("1435943");
    noUnderlyings_0_1.set(UnderlyingQty_31);
    UnderlyingInstrument_31.insert(UnderlyingQty_31.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_31("LOCALMKTDATE_991920524");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_31);
    UnderlyingInstrument_31.insert(UnderlyingRedemptionDate_31.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_31("STRING_45591148");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_31);
    UnderlyingInstrument_31.insert(UnderlyingRepoCollateralSecurityType_31.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_31;
    UnderlyingRepurchaseRate_31.setString("21.660000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_31);
    UnderlyingInstrument_31.insert(UnderlyingRepurchaseRate_31.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_31(487505785);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_31);
    UnderlyingInstrument_31.insert(UnderlyingRepurchaseTerm_31.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_31("STRING_734616560");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_31);
    UnderlyingInstrument_31.insert(UnderlyingRestructuringType_31.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_31("STRING_50590577");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityDesc_31.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_31("EXCHANGE_779342192");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityExchange_31.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_31("STRING_729843343");
    noUnderlyings_0_1.set(UnderlyingSecurityID_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityID_31.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_31("STRING_217917112");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityIDSource_31.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_31("STRING_1168612490");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_31);
    UnderlyingInstrument_31.insert(UnderlyingSecuritySubType_31.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_31("STRING_952872015");
    noUnderlyings_0_1.set(UnderlyingSecurityType_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityType_31.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_31("STRING_692153360");
    noUnderlyings_0_1.set(UnderlyingSeniority_31);
    UnderlyingInstrument_31.insert(UnderlyingSeniority_31.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_31("STRING_2105454789");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_31);
    UnderlyingInstrument_31.insert(UnderlyingSettlMethod_31.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_31(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_31);
    UnderlyingInstrument_31.insert(UnderlyingSettlementType_31.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_31;
    UnderlyingStartValue_31.setString("6706196");
    noUnderlyings_0_1.set(UnderlyingStartValue_31);
    UnderlyingInstrument_31.insert(UnderlyingStartValue_31.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_31("STRING_837191636");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_31);
    UnderlyingInstrument_31.insert(UnderlyingStateOrProvinceOfIssue_31.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_31("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_31);
    UnderlyingInstrument_31.insert(UnderlyingStrikeCurrency_31.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_31;
    UnderlyingStrikePrice_31.setString("17958229");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_31);
    UnderlyingInstrument_31.insert(UnderlyingStrikePrice_31.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_31("STRING_1257198572");
    noUnderlyings_0_1.set(UnderlyingSymbol_31);
    UnderlyingInstrument_31.insert(UnderlyingSymbol_31.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_31("STRING_1074305389");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_31);
    UnderlyingInstrument_31.insert(UnderlyingSymbolSfx_31.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_31("STRING_444224306");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_31);
    UnderlyingInstrument_31.insert(UnderlyingTimeUnit_31.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_31("STRING_2018987789");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_31);
    UnderlyingInstrument_31.insert(UnderlyingUnitOfMeasure_31.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_31;
    UnderlyingUnitOfMeasureQty_31.setString("4836764");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_31);
    UnderlyingInstrument_31.insert(UnderlyingUnitOfMeasureQty_31.getString());
    all_values.push_back(UnderlyingInstrument_31);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_62;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_62("STRING_428275128");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_62);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_62.insert(UnderlyingSecurityAltID_62.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_62("STRING_2035995087");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_62);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_62.insert(UnderlyingSecurityAltIDSource_62.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_62);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_57;
      FIX::UnderlyingStipType UnderlyingStipType_57("STRING_196673680");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_57);
      UnderlyingStipulations_NoUnderlyingStips_57.insert(UnderlyingStipType_57.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_57("STRING_1257966693");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_57);
      UnderlyingStipulations_NoUnderlyingStips_57.insert(UnderlyingStipValue_57.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_57);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_58;
      FIX::UnderlyingStipType UnderlyingStipType_58("STRING_1017050894");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_58);
      UnderlyingStipulations_NoUnderlyingStips_58.insert(UnderlyingStipType_58.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_58("STRING_1188594205");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_58);
      UnderlyingStipulations_NoUnderlyingStips_58.insert(UnderlyingStipValue_58.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_58);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_59;
      FIX::UnderlyingStipType UnderlyingStipType_59("STRING_1303557841");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_59);
      UnderlyingStipulations_NoUnderlyingStips_59.insert(UnderlyingStipType_59.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_59("STRING_1718543060");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_59);
      UnderlyingStipulations_NoUnderlyingStips_59.insert(UnderlyingStipValue_59.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_59);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_57;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_57("STRING_2038174401");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_57);
      UndlyInstrumentParties_NoUndlyInstrumentParties_57.insert(UnderlyingInstrumentPartyID_57.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_57('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_57);
      UndlyInstrumentParties_NoUndlyInstrumentParties_57.insert(UnderlyingInstrumentPartyIDSource_57.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_57(307958534);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_57);
      UndlyInstrumentParties_NoUndlyInstrumentParties_57.insert(UnderlyingInstrumentPartyRole_57.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_57);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_108("STRING_1987050749");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_108);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108.insert(UnderlyingInstrumentPartySubID_108.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_108(1476571024);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_108);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108.insert(UnderlyingInstrumentPartySubIDType_108.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_109("STRING_1573406112");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_109);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109.insert(UnderlyingInstrumentPartySubID_109.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_109(531720462);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_109);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109.insert(UnderlyingInstrumentPartySubIDType_109.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_110("STRING_1434542165");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_110);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110.insert(UnderlyingInstrumentPartySubID_110.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_110(645009420);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_110);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110.insert(UnderlyingInstrumentPartySubIDType_110.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_58;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_58("STRING_1202340089");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_58);
      UndlyInstrumentParties_NoUndlyInstrumentParties_58.insert(UnderlyingInstrumentPartyID_58.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_58('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_58);
      UndlyInstrumentParties_NoUndlyInstrumentParties_58.insert(UnderlyingInstrumentPartyIDSource_58.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_58(141064519);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_58);
      UndlyInstrumentParties_NoUndlyInstrumentParties_58.insert(UnderlyingInstrumentPartyRole_58.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_58);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_111("STRING_1920073147");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_111);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111.insert(UnderlyingInstrumentPartySubID_111.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_111(1398263091);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_111);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111.insert(UnderlyingInstrumentPartySubIDType_111.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_112("STRING_930250266");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_112);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112.insert(UnderlyingInstrumentPartySubID_112.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_112(216813805);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_112);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112.insert(UnderlyingInstrumentPartySubIDType_112.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_59;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_59("STRING_1269767232");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_59);
      UndlyInstrumentParties_NoUndlyInstrumentParties_59.insert(UnderlyingInstrumentPartyID_59.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_59('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_59);
      UndlyInstrumentParties_NoUndlyInstrumentParties_59.insert(UnderlyingInstrumentPartyIDSource_59.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_59(1737114679);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_59);
      UndlyInstrumentParties_NoUndlyInstrumentParties_59.insert(UnderlyingInstrumentPartyRole_59.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_59);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_113("STRING_1302438121");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_113);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113.insert(UnderlyingInstrumentPartySubID_113.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_113(463087585);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_113);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113.insert(UnderlyingInstrumentPartySubIDType_113.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
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
