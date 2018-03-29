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
  multiset<string> all_compo_names;
  multiset<string> ContraryIntentionReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_12("LOCALMKTDATE_1712760246");
  msg.set(ClearingBusinessDate_12);
  ContraryIntentionReport_0.insert(ClearingBusinessDate_12.getString());
  FIX::ContIntRptID ContIntRptID_0("STRING_1573790634");
  msg.set(ContIntRptID_0);
  ContraryIntentionReport_0.insert(ContIntRptID_0.getString());
  FIX::EncodedText EncodedText_24("DATA_1141138184");
  msg.set(EncodedText_24);
  ContraryIntentionReport_0.insert(EncodedText_24.getString());
  FIX::EncodedTextLen EncodedTextLen_24(204231668);
  msg.set(EncodedTextLen_24);
  ContraryIntentionReport_0.insert(EncodedTextLen_24.getString());
  FIX::InputSource InputSource_0("STRING_1739541781");
  msg.set(InputSource_0);
  ContraryIntentionReport_0.insert(InputSource_0.getString());
  FIX::LateIndicator LateIndicator_0(false);
  msg.set(LateIndicator_0);
  ContraryIntentionReport_0.insert(LateIndicator_0.getString());
  FIX::Text Text_24("STRING_1108992989");
  msg.set(Text_24);
  ContraryIntentionReport_0.insert(Text_24.getString());
  FIX::TransactTime TransactTime_13(FIX::UTCTIMESTAMP(6, 50, 42, 0, 5, 2002));
  msg.set(TransactTime_13);
  ContraryIntentionReport_0.insert(TransactTime_13.getString());
  all_values.push_back(ContraryIntentionReport_0);

  all_compo_names.insert("ContraryIntentionReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_1;
  FIX::ApplID ApplID_1("STRING_1345456095");
  msg.set(ApplID_1);
  ApplicationSequenceControl_1.insert(ApplID_1.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_1(349897725);
  msg.set(ApplLastSeqNum_1);
  ApplicationSequenceControl_1.insert(ApplLastSeqNum_1.getString());
  FIX::ApplResendFlag ApplResendFlag_1(false);
  msg.set(ApplResendFlag_1);
  ApplicationSequenceControl_1.insert(ApplResendFlag_1.getString());
  FIX::ApplSeqNum ApplSeqNum_1(2143194819);
  msg.set(ApplSeqNum_1);
  ApplicationSequenceControl_1.insert(ApplSeqNum_1.getString());
  all_values.push_back(ApplicationSequenceControl_1);
  all_compo_names.insert("ApplicationSequenceControl");

  // ExpirationQty
  // Group ExpirationQty.NoExpiration
  {
    FIX50SP2::ContraryIntentionReport::NoExpiration noExpiration_0_0;
    // ExpirationQty.NoExpiration
    multiset<string> ExpirationQty_NoExpiration_0;
    FIX::ExpQty ExpQty_0;
    ExpQty_0.setString("15595395");
    noExpiration_0_0.set(ExpQty_0);
    ExpirationQty_NoExpiration_0.insert(ExpQty_0.getString());
    FIX::ExpirationQtyType ExpirationQtyType_0(5);
    noExpiration_0_0.set(ExpirationQtyType_0);
    ExpirationQty_NoExpiration_0.insert(ExpirationQtyType_0.getString());
    all_values.push_back(ExpirationQty_NoExpiration_0);
    all_compo_names.insert("ExpirationQty.NoExpiration");

    msg.addGroup(noExpiration_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoExpiration noExpiration_0_1;
    // ExpirationQty.NoExpiration
    multiset<string> ExpirationQty_NoExpiration_1;
    FIX::ExpQty ExpQty_1;
    ExpQty_1.setString("20013230");
    noExpiration_0_1.set(ExpQty_1);
    ExpirationQty_NoExpiration_1.insert(ExpQty_1.getString());
    FIX::ExpirationQtyType ExpirationQtyType_1(1);
    noExpiration_0_1.set(ExpirationQtyType_1);
    ExpirationQty_NoExpiration_1.insert(ExpirationQtyType_1.getString());
    all_values.push_back(ExpirationQty_NoExpiration_1);
    all_compo_names.insert("ExpirationQty.NoExpiration");

    msg.addGroup(noExpiration_0_1);
  }
  // Instrument
  multiset<string> Instrument_13;
  FIX::AttachmentPoint AttachmentPoint_13;
  AttachmentPoint_13.setString("32.200000");
  msg.set(AttachmentPoint_13);
  Instrument_13.insert(AttachmentPoint_13.getString());
  FIX::CFICode CFICode_13("STRING_493920396");
  msg.set(CFICode_13);
  Instrument_13.insert(CFICode_13.getString());
  FIX::CPProgram CPProgram_13(1);
  msg.set(CPProgram_13);
  Instrument_13.insert(CPProgram_13.getString());
  FIX::CPRegType CPRegType_13("STRING_462204019");
  msg.set(CPRegType_13);
  Instrument_13.insert(CPRegType_13.getString());
  FIX::CapPrice CapPrice_13;
  CapPrice_13.setString("7746831");
  msg.set(CapPrice_13);
  Instrument_13.insert(CapPrice_13.getString());
  FIX::ContractMultiplier ContractMultiplier_13;
  ContractMultiplier_13.setString("19882528");
  msg.set(ContractMultiplier_13);
  Instrument_13.insert(ContractMultiplier_13.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_13(1);
  msg.set(ContractMultiplierUnit_13);
  Instrument_13.insert(ContractMultiplierUnit_13.getString());
  FIX::ContractSettlMonth ContractSettlMonth_13("MONTHYEAR_564176617");
  msg.set(ContractSettlMonth_13);
  Instrument_13.insert(ContractSettlMonth_13.getString());
  FIX::CountryOfIssue CountryOfIssue_13("COUNTRY_1553529489");
  msg.set(CountryOfIssue_13);
  Instrument_13.insert(CountryOfIssue_13.getString());
  FIX::CouponPaymentDate CouponPaymentDate_13("LOCALMKTDATE_2130513355");
  msg.set(CouponPaymentDate_13);
  Instrument_13.insert(CouponPaymentDate_13.getString());
  FIX::CouponRate CouponRate_13;
  CouponRate_13.setString("48.010000");
  msg.set(CouponRate_13);
  Instrument_13.insert(CouponRate_13.getString());
  FIX::CreditRating CreditRating_13("STRING_1757761157");
  msg.set(CreditRating_13);
  Instrument_13.insert(CreditRating_13.getString());
  FIX::DatedDate DatedDate_13("LOCALMKTDATE_1722571489");
  msg.set(DatedDate_13);
  Instrument_13.insert(DatedDate_13.getString());
  FIX::DetachmentPoint DetachmentPoint_13;
  DetachmentPoint_13.setString("95.740000");
  msg.set(DetachmentPoint_13);
  Instrument_13.insert(DetachmentPoint_13.getString());
  FIX::EncodedIssuer EncodedIssuer_13("DATA_719270499");
  msg.set(EncodedIssuer_13);
  Instrument_13.insert(EncodedIssuer_13.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_13(780616138);
  msg.set(EncodedIssuerLen_13);
  Instrument_13.insert(EncodedIssuerLen_13.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_13("DATA_569314877");
  msg.set(EncodedSecurityDesc_13);
  Instrument_13.insert(EncodedSecurityDesc_13.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_13(1054540169);
  msg.set(EncodedSecurityDescLen_13);
  Instrument_13.insert(EncodedSecurityDescLen_13.getString());
  FIX::ExerciseStyle ExerciseStyle_13(2);
  msg.set(ExerciseStyle_13);
  Instrument_13.insert(ExerciseStyle_13.getString());
  FIX::Factor Factor_13;
  Factor_13.setString("9871252");
  msg.set(Factor_13);
  Instrument_13.insert(Factor_13.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_13(false);
  msg.set(FlexProductEligibilityIndicator_13);
  Instrument_13.insert(FlexProductEligibilityIndicator_13.getString());
  FIX::FlexibleIndicator FlexibleIndicator_13(false);
  msg.set(FlexibleIndicator_13);
  Instrument_13.insert(FlexibleIndicator_13.getString());
  FIX::FloorPrice FloorPrice_13;
  FloorPrice_13.setString("1850976");
  msg.set(FloorPrice_13);
  Instrument_13.insert(FloorPrice_13.getString());
  FIX::FlowScheduleType FlowScheduleType_13(1);
  msg.set(FlowScheduleType_13);
  Instrument_13.insert(FlowScheduleType_13.getString());
  FIX::InstrRegistry InstrRegistry_13("STRING_45063627");
  msg.set(InstrRegistry_13);
  Instrument_13.insert(InstrRegistry_13.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_13('1');
  msg.set(InstrmtAssignmentMethod_13);
  Instrument_13.insert(InstrmtAssignmentMethod_13.getString());
  FIX::InterestAccrualDate InterestAccrualDate_13("LOCALMKTDATE_1712136810");
  msg.set(InterestAccrualDate_13);
  Instrument_13.insert(InterestAccrualDate_13.getString());
  FIX::IssueDate IssueDate_13("LOCALMKTDATE_1604603215");
  msg.set(IssueDate_13);
  Instrument_13.insert(IssueDate_13.getString());
  FIX::Issuer Issuer_13("STRING_561286784");
  msg.set(Issuer_13);
  Instrument_13.insert(Issuer_13.getString());
  FIX::ListMethod ListMethod_13(1);
  msg.set(ListMethod_13);
  Instrument_13.insert(ListMethod_13.getString());
  FIX::LocaleOfIssue LocaleOfIssue_13("STRING_895175552");
  msg.set(LocaleOfIssue_13);
  Instrument_13.insert(LocaleOfIssue_13.getString());
  FIX::MaturityDate MaturityDate_13("LOCALMKTDATE_1236800004");
  msg.set(MaturityDate_13);
  Instrument_13.insert(MaturityDate_13.getString());
  FIX::MaturityMonthYear MaturityMonthYear_13("MONTHYEAR_2059896643");
  msg.set(MaturityMonthYear_13);
  Instrument_13.insert(MaturityMonthYear_13.getString());
  FIX::MaturityTime MaturityTime_13("TZTIMEONLY_1438201679");
  msg.set(MaturityTime_13);
  Instrument_13.insert(MaturityTime_13.getString());
  FIX::MinPriceIncrement MinPriceIncrement_13;
  MinPriceIncrement_13.setString("16990040");
  msg.set(MinPriceIncrement_13);
  Instrument_13.insert(MinPriceIncrement_13.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_13;
  MinPriceIncrementAmount_13.setString("6870961");
  msg.set(MinPriceIncrementAmount_13);
  Instrument_13.insert(MinPriceIncrementAmount_13.getString());
  FIX::NTPositionLimit NTPositionLimit_13(1278970922);
  msg.set(NTPositionLimit_13);
  Instrument_13.insert(NTPositionLimit_13.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_13;
  NotionalPercentageOutstanding_13.setString("30.960000");
  msg.set(NotionalPercentageOutstanding_13);
  Instrument_13.insert(NotionalPercentageOutstanding_13.getString());
  FIX::OptAttribute OptAttribute_13('1');
  msg.set(OptAttribute_13);
  Instrument_13.insert(OptAttribute_13.getString());
  FIX::OptPayoutAmount OptPayoutAmount_13;
  OptPayoutAmount_13.setString("6850167");
  msg.set(OptPayoutAmount_13);
  Instrument_13.insert(OptPayoutAmount_13.getString());
  FIX::OptPayoutType OptPayoutType_13(1);
  msg.set(OptPayoutType_13);
  Instrument_13.insert(OptPayoutType_13.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_13;
  OriginalNotionalPercentageOutstanding_13.setString("39.100000");
  msg.set(OriginalNotionalPercentageOutstanding_13);
  Instrument_13.insert(OriginalNotionalPercentageOutstanding_13.getString());
  FIX::Pool Pool_13("STRING_295294272");
  msg.set(Pool_13);
  Instrument_13.insert(Pool_13.getString());
  FIX::PositionLimit PositionLimit_13(1813844293);
  msg.set(PositionLimit_13);
  Instrument_13.insert(PositionLimit_13.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_13("STRING_INX");
  msg.set(PriceQuoteMethod_13);
  Instrument_13.insert(PriceQuoteMethod_13.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_13("STRING_1014564771");
  msg.set(PriceUnitOfMeasure_13);
  Instrument_13.insert(PriceUnitOfMeasure_13.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_13;
  PriceUnitOfMeasureQty_13.setString("4469767");
  msg.set(PriceUnitOfMeasureQty_13);
  Instrument_13.insert(PriceUnitOfMeasureQty_13.getString());
  FIX::Product Product_15(6);
  msg.set(Product_15);
  Instrument_13.insert(Product_15.getString());
  FIX::ProductComplex ProductComplex_13("STRING_2069104941");
  msg.set(ProductComplex_13);
  Instrument_13.insert(ProductComplex_13.getString());
  FIX::PutOrCall PutOrCall_13(0);
  msg.set(PutOrCall_13);
  Instrument_13.insert(PutOrCall_13.getString());
  FIX::RedemptionDate RedemptionDate_13("LOCALMKTDATE_792559935");
  msg.set(RedemptionDate_13);
  Instrument_13.insert(RedemptionDate_13.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_13("STRING_2032794706");
  msg.set(RepoCollateralSecurityType_13);
  Instrument_13.insert(RepoCollateralSecurityType_13.getString());
  FIX::RepurchaseRate RepurchaseRate_13;
  RepurchaseRate_13.setString("2.340000");
  msg.set(RepurchaseRate_13);
  Instrument_13.insert(RepurchaseRate_13.getString());
  FIX::RepurchaseTerm RepurchaseTerm_13(977657604);
  msg.set(RepurchaseTerm_13);
  Instrument_13.insert(RepurchaseTerm_13.getString());
  FIX::RestructuringType RestructuringType_13("STRING_MR");
  msg.set(RestructuringType_13);
  Instrument_13.insert(RestructuringType_13.getString());
  FIX::SecurityDesc SecurityDesc_13("STRING_2046053861");
  msg.set(SecurityDesc_13);
  Instrument_13.insert(SecurityDesc_13.getString());
  FIX::SecurityExchange SecurityExchange_13("EXCHANGE_1158466445");
  msg.set(SecurityExchange_13);
  Instrument_13.insert(SecurityExchange_13.getString());
  FIX::SecurityGroup SecurityGroup_13("STRING_1911035360");
  msg.set(SecurityGroup_13);
  Instrument_13.insert(SecurityGroup_13.getString());
  FIX::SecurityID SecurityID_13("STRING_1503173428");
  msg.set(SecurityID_13);
  Instrument_13.insert(SecurityID_13.getString());
  FIX::SecurityIDSource SecurityIDSource_13("STRING_8");
  msg.set(SecurityIDSource_13);
  Instrument_13.insert(SecurityIDSource_13.getString());
  FIX::SecurityStatus SecurityStatus_13("STRING_2");
  msg.set(SecurityStatus_13);
  Instrument_13.insert(SecurityStatus_13.getString());
  FIX::SecuritySubType SecuritySubType_13("STRING_250865333");
  msg.set(SecuritySubType_13);
  Instrument_13.insert(SecuritySubType_13.getString());
  FIX::SecurityType SecurityType_15("STRING_WAR");
  msg.set(SecurityType_15);
  Instrument_13.insert(SecurityType_15.getString());
  FIX::Seniority Seniority_13("STRING_SR");
  msg.set(Seniority_13);
  Instrument_13.insert(Seniority_13.getString());
  FIX::SettlMethod SettlMethod_13('C');
  msg.set(SettlMethod_13);
  Instrument_13.insert(SettlMethod_13.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_13("STRING_360589961");
  msg.set(SettleOnOpenFlag_13);
  Instrument_13.insert(SettleOnOpenFlag_13.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_13("STRING_1929037095");
  msg.set(StateOrProvinceOfIssue_13);
  Instrument_13.insert(StateOrProvinceOfIssue_13.getString());
  FIX::StrikeCurrency StrikeCurrency_13("USD");
  msg.set(StrikeCurrency_13);
  Instrument_13.insert(StrikeCurrency_13.getString());
  FIX::StrikeMultiplier StrikeMultiplier_13;
  StrikeMultiplier_13.setString("10328262");
  msg.set(StrikeMultiplier_13);
  Instrument_13.insert(StrikeMultiplier_13.getString());
  FIX::StrikePrice StrikePrice_13;
  StrikePrice_13.setString("15055710");
  msg.set(StrikePrice_13);
  Instrument_13.insert(StrikePrice_13.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_13(3);
  msg.set(StrikePriceBoundaryMethod_13);
  Instrument_13.insert(StrikePriceBoundaryMethod_13.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_13;
  StrikePriceBoundaryPrecision_13.setString("1.150000");
  msg.set(StrikePriceBoundaryPrecision_13);
  Instrument_13.insert(StrikePriceBoundaryPrecision_13.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_13(3);
  msg.set(StrikePriceDeterminationMethod_13);
  Instrument_13.insert(StrikePriceDeterminationMethod_13.getString());
  FIX::StrikeValue StrikeValue_13;
  StrikeValue_13.setString("2264665");
  msg.set(StrikeValue_13);
  Instrument_13.insert(StrikeValue_13.getString());
  FIX::Symbol Symbol_13("STRING_1078049952");
  msg.set(Symbol_13);
  Instrument_13.insert(Symbol_13.getString());
  FIX::SymbolSfx SymbolSfx_13("STRING_WI");
  msg.set(SymbolSfx_13);
  Instrument_13.insert(SymbolSfx_13.getString());
  FIX::TimeUnit TimeUnit_13("STRING_S");
  msg.set(TimeUnit_13);
  Instrument_13.insert(TimeUnit_13.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_13(3);
  msg.set(UnderlyingPriceDeterminationMethod_13);
  Instrument_13.insert(UnderlyingPriceDeterminationMethod_13.getString());
  FIX::UnitOfMeasure UnitOfMeasure_13("STRING_lbs");
  msg.set(UnitOfMeasure_13);
  Instrument_13.insert(UnitOfMeasure_13.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_13;
  UnitOfMeasureQty_13.setString("8210205");
  msg.set(UnitOfMeasureQty_13);
  Instrument_13.insert(UnitOfMeasureQty_13.getString());
  FIX::ValuationMethod ValuationMethod_13("STRING_FUTDA");
  msg.set(ValuationMethod_13);
  Instrument_13.insert(ValuationMethod_13.getString());
  all_values.push_back(Instrument_13);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::ContraryIntentionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_27;
    FIX::ComplexEventCondition ComplexEventCondition_27(2);
    noComplexEvents_0_0.set(ComplexEventCondition_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventCondition_27.getString());
    FIX::ComplexEventPrice ComplexEventPrice_27;
    ComplexEventPrice_27.setString("5062185");
    noComplexEvents_0_0.set(ComplexEventPrice_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPrice_27.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_27(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPriceBoundaryMethod_27.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_27;
    ComplexEventPriceBoundaryPrecision_27.setString("73.860000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPriceBoundaryPrecision_27.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_27(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPriceTimeType_27.getString());
    FIX::ComplexEventType ComplexEventType_27(6);
    noComplexEvents_0_0.set(ComplexEventType_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventType_27.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_27;
    ComplexOptPayoutAmount_27.setString("20762708");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexOptPayoutAmount_27.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_27);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_62;
      FIX::ComplexEventEndDate ComplexEventEndDate_62(FIX::UTCTIMESTAMP(19, 51, 45, 16, 1, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_62);
      ComplexEventDates_NoComplexEventDates_62.insert(ComplexEventEndDate_62.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_62(FIX::UTCTIMESTAMP(6, 57, 40, 20, 6, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_62);
      ComplexEventDates_NoComplexEventDates_62.insert(ComplexEventStartDate_62.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_62);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_124;
        FIX::ComplexEventEndTime ComplexEventEndTime_124(FIX::UTCTIMEONLY(23, 54, 36));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_124);
        ComplexEventTimes_NoComplexEventTimes_124.insert(ComplexEventEndTime_124.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_124(FIX::UTCTIMEONLY(21, 10, 47));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_124);
        ComplexEventTimes_NoComplexEventTimes_124.insert(ComplexEventStartTime_124.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_124);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_125;
        FIX::ComplexEventEndTime ComplexEventEndTime_125(FIX::UTCTIMEONLY(8, 13, 0));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_125);
        ComplexEventTimes_NoComplexEventTimes_125.insert(ComplexEventEndTime_125.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_125(FIX::UTCTIMEONLY(20, 26, 49));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_125);
        ComplexEventTimes_NoComplexEventTimes_125.insert(ComplexEventStartTime_125.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_125);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_126;
        FIX::ComplexEventEndTime ComplexEventEndTime_126(FIX::UTCTIMEONLY(14, 32, 19));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_126);
        ComplexEventTimes_NoComplexEventTimes_126.insert(ComplexEventEndTime_126.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_126(FIX::UTCTIMEONLY(20, 11, 32));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_126);
        ComplexEventTimes_NoComplexEventTimes_126.insert(ComplexEventStartTime_126.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_126);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_28;
    FIX::ComplexEventCondition ComplexEventCondition_28(2);
    noComplexEvents_0_1.set(ComplexEventCondition_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventCondition_28.getString());
    FIX::ComplexEventPrice ComplexEventPrice_28;
    ComplexEventPrice_28.setString("9010407");
    noComplexEvents_0_1.set(ComplexEventPrice_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPrice_28.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_28(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPriceBoundaryMethod_28.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_28;
    ComplexEventPriceBoundaryPrecision_28.setString("71.750000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPriceBoundaryPrecision_28.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_28(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPriceTimeType_28.getString());
    FIX::ComplexEventType ComplexEventType_28(9);
    noComplexEvents_0_1.set(ComplexEventType_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventType_28.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_28;
    ComplexOptPayoutAmount_28.setString("13663994");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexOptPayoutAmount_28.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_28);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_63;
      FIX::ComplexEventEndDate ComplexEventEndDate_63(FIX::UTCTIMESTAMP(17, 43, 52, 22, 10, 2003));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_63);
      ComplexEventDates_NoComplexEventDates_63.insert(ComplexEventEndDate_63.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_63(FIX::UTCTIMESTAMP(6, 44, 52, 22, 9, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_63);
      ComplexEventDates_NoComplexEventDates_63.insert(ComplexEventStartDate_63.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_63);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_127;
        FIX::ComplexEventEndTime ComplexEventEndTime_127(FIX::UTCTIMEONLY(12, 3, 13));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_127);
        ComplexEventTimes_NoComplexEventTimes_127.insert(ComplexEventEndTime_127.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_127(FIX::UTCTIMEONLY(3, 25, 3));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_127);
        ComplexEventTimes_NoComplexEventTimes_127.insert(ComplexEventStartTime_127.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_127);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_64;
      FIX::ComplexEventEndDate ComplexEventEndDate_64(FIX::UTCTIMESTAMP(6, 7, 2, 0, 3, 2007));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_64);
      ComplexEventDates_NoComplexEventDates_64.insert(ComplexEventEndDate_64.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_64(FIX::UTCTIMESTAMP(8, 46, 59, 20, 5, 2008));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_64);
      ComplexEventDates_NoComplexEventDates_64.insert(ComplexEventStartDate_64.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_64);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_128;
        FIX::ComplexEventEndTime ComplexEventEndTime_128(FIX::UTCTIMEONLY(6, 11, 36));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_128);
        ComplexEventTimes_NoComplexEventTimes_128.insert(ComplexEventEndTime_128.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_128(FIX::UTCTIMEONLY(20, 38, 59));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_128);
        ComplexEventTimes_NoComplexEventTimes_128.insert(ComplexEventStartTime_128.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_128);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_129;
        FIX::ComplexEventEndTime ComplexEventEndTime_129(FIX::UTCTIMEONLY(19, 54, 40));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_129);
        ComplexEventTimes_NoComplexEventTimes_129.insert(ComplexEventEndTime_129.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_129(FIX::UTCTIMEONLY(2, 57, 44));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_129);
        ComplexEventTimes_NoComplexEventTimes_129.insert(ComplexEventStartTime_129.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_129);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_130;
        FIX::ComplexEventEndTime ComplexEventEndTime_130(FIX::UTCTIMEONLY(15, 44, 54));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_130);
        ComplexEventTimes_NoComplexEventTimes_130.insert(ComplexEventEndTime_130.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_130(FIX::UTCTIMEONLY(2, 47, 46));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_130);
        ComplexEventTimes_NoComplexEventTimes_130.insert(ComplexEventStartTime_130.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_130);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::ContraryIntentionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_24;
    FIX::EventDate EventDate_24("LOCALMKTDATE_1457336793");
    noEvents_0_0.set(EventDate_24);
    EvntGrp_NoEvents_24.insert(EventDate_24.getString());
    FIX::EventPx EventPx_24;
    EventPx_24.setString("19916293");
    noEvents_0_0.set(EventPx_24);
    EvntGrp_NoEvents_24.insert(EventPx_24.getString());
    FIX::EventText EventText_24("STRING_1021085610");
    noEvents_0_0.set(EventText_24);
    EvntGrp_NoEvents_24.insert(EventText_24.getString());
    FIX::EventTime EventTime_24(FIX::UTCTIMESTAMP(22, 5, 1, 8, 5, 2011));
    noEvents_0_0.set(EventTime_24);
    EvntGrp_NoEvents_24.insert(EventTime_24.getString());
    FIX::EventType EventType_24(14);
    noEvents_0_0.set(EventType_24);
    EvntGrp_NoEvents_24.insert(EventType_24.getString());
    all_values.push_back(EvntGrp_NoEvents_24);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_25;
    FIX::EventDate EventDate_25("LOCALMKTDATE_1647953268");
    noEvents_0_1.set(EventDate_25);
    EvntGrp_NoEvents_25.insert(EventDate_25.getString());
    FIX::EventPx EventPx_25;
    EventPx_25.setString("15878541");
    noEvents_0_1.set(EventPx_25);
    EvntGrp_NoEvents_25.insert(EventPx_25.getString());
    FIX::EventText EventText_25("STRING_1053235924");
    noEvents_0_1.set(EventText_25);
    EvntGrp_NoEvents_25.insert(EventText_25.getString());
    FIX::EventTime EventTime_25(FIX::UTCTIMESTAMP(19, 51, 47, 16, 6, 2002));
    noEvents_0_1.set(EventTime_25);
    EvntGrp_NoEvents_25.insert(EventTime_25.getString());
    FIX::EventType EventType_25(6);
    noEvents_0_1.set(EventType_25);
    EvntGrp_NoEvents_25.insert(EventType_25.getString());
    all_values.push_back(EvntGrp_NoEvents_25);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_26;
    FIX::EventDate EventDate_26("LOCALMKTDATE_929289613");
    noEvents_0_2.set(EventDate_26);
    EvntGrp_NoEvents_26.insert(EventDate_26.getString());
    FIX::EventPx EventPx_26;
    EventPx_26.setString("18940592");
    noEvents_0_2.set(EventPx_26);
    EvntGrp_NoEvents_26.insert(EventPx_26.getString());
    FIX::EventText EventText_26("STRING_1142062341");
    noEvents_0_2.set(EventText_26);
    EvntGrp_NoEvents_26.insert(EventText_26.getString());
    FIX::EventTime EventTime_26(FIX::UTCTIMESTAMP(10, 27, 47, 4, 6, 2007));
    noEvents_0_2.set(EventTime_26);
    EvntGrp_NoEvents_26.insert(EventTime_26.getString());
    FIX::EventType EventType_26(19);
    noEvents_0_2.set(EventType_26);
    EvntGrp_NoEvents_26.insert(EventType_26.getString());
    all_values.push_back(EvntGrp_NoEvents_26);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ContraryIntentionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_24;
    FIX::InstrumentPartyID InstrumentPartyID_24("STRING_436773750");
    noInstrumentParties_0_0.set(InstrumentPartyID_24);
    InstrumentParties_NoInstrumentParties_24.insert(InstrumentPartyID_24.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_24('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_24);
    InstrumentParties_NoInstrumentParties_24.insert(InstrumentPartyIDSource_24.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_24(903875180);
    noInstrumentParties_0_0.set(InstrumentPartyRole_24);
    InstrumentParties_NoInstrumentParties_24.insert(InstrumentPartyRole_24.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_24);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45;
      FIX::InstrumentPartySubID InstrumentPartySubID_45("STRING_342844964");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_45);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45.insert(InstrumentPartySubID_45.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_45(260852548);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_45);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45.insert(InstrumentPartySubIDType_45.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46;
      FIX::InstrumentPartySubID InstrumentPartySubID_46("STRING_1178809561");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_46);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46.insert(InstrumentPartySubID_46.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_46(1436332977);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_46);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46.insert(InstrumentPartySubIDType_46.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47;
      FIX::InstrumentPartySubID InstrumentPartySubID_47("STRING_1908805817");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_47);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47.insert(InstrumentPartySubID_47.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_47(619180081);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_47);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47.insert(InstrumentPartySubIDType_47.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_25;
    FIX::InstrumentPartyID InstrumentPartyID_25("STRING_342085254");
    noInstrumentParties_0_1.set(InstrumentPartyID_25);
    InstrumentParties_NoInstrumentParties_25.insert(InstrumentPartyID_25.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_25('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_25);
    InstrumentParties_NoInstrumentParties_25.insert(InstrumentPartyIDSource_25.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_25(805483940);
    noInstrumentParties_0_1.set(InstrumentPartyRole_25);
    InstrumentParties_NoInstrumentParties_25.insert(InstrumentPartyRole_25.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_25);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48;
      FIX::InstrumentPartySubID InstrumentPartySubID_48("STRING_1615289891");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_48);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48.insert(InstrumentPartySubID_48.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_48(960738861);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_48);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48.insert(InstrumentPartySubIDType_48.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_26;
    FIX::InstrumentPartyID InstrumentPartyID_26("STRING_436518966");
    noInstrumentParties_0_2.set(InstrumentPartyID_26);
    InstrumentParties_NoInstrumentParties_26.insert(InstrumentPartyID_26.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_26('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_26);
    InstrumentParties_NoInstrumentParties_26.insert(InstrumentPartyIDSource_26.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_26(641085298);
    noInstrumentParties_0_2.set(InstrumentPartyRole_26);
    InstrumentParties_NoInstrumentParties_26.insert(InstrumentPartyRole_26.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_26);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49;
      FIX::InstrumentPartySubID InstrumentPartySubID_49("STRING_2025704746");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_49);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49.insert(InstrumentPartySubID_49.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_49(1783147639);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_49);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49.insert(InstrumentPartySubIDType_49.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50;
      FIX::InstrumentPartySubID InstrumentPartySubID_50("STRING_1604611759");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_50);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50.insert(InstrumentPartySubID_50.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_50(1721340780);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_50);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50.insert(InstrumentPartySubIDType_50.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ContraryIntentionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_24;
    FIX::SecurityAltID SecurityAltID_24("STRING_449650799");
    noSecurityAltID_0_0.set(SecurityAltID_24);
    SecAltIDGrp_NoSecurityAltID_24.insert(SecurityAltID_24.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_24("STRING_509282032");
    noSecurityAltID_0_0.set(SecurityAltIDSource_24);
    SecAltIDGrp_NoSecurityAltID_24.insert(SecurityAltIDSource_24.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_24);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_25;
    FIX::SecurityAltID SecurityAltID_25("STRING_319035271");
    noSecurityAltID_0_1.set(SecurityAltID_25);
    SecAltIDGrp_NoSecurityAltID_25.insert(SecurityAltID_25.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_25("STRING_752026632");
    noSecurityAltID_0_1.set(SecurityAltIDSource_25);
    SecAltIDGrp_NoSecurityAltID_25.insert(SecurityAltIDSource_25.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_25);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_26;
  FIX::SecurityXML SecurityXML_27("XMLDATA_1288852650");
  msg.set(SecurityXML_27);
  FIX::SecurityXMLLen SecurityXMLLen_13(1991797314);
  msg.set(SecurityXMLLen_13);
  FIX::SecurityXMLSchema SecurityXMLSchema_13("STRING_1188800382");
  msg.set(SecurityXMLSchema_13);
  SecurityXML_26.insert(SecurityXMLSchema_13.getString());
  all_values.push_back(SecurityXML_26);
  all_compo_names.insert("SecurityXML");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ContraryIntentionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_31;
    FIX::PartyID PartyID_31("STRING_748188846");
    noPartyIDs_0_0.set(PartyID_31);
    Parties_NoPartyIDs_31.insert(PartyID_31.getString());
    FIX::PartyIDSource PartyIDSource_31('8');
    noPartyIDs_0_0.set(PartyIDSource_31);
    Parties_NoPartyIDs_31.insert(PartyIDSource_31.getString());
    FIX::PartyRole PartyRole_31(45);
    noPartyIDs_0_0.set(PartyRole_31);
    Parties_NoPartyIDs_31.insert(PartyRole_31.getString());
    all_values.push_back(Parties_NoPartyIDs_31);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_69;
      FIX::PartySubID PartySubID_69("STRING_1125329888");
      noPartySubIDs_0_1_0.set(PartySubID_69);
      PtysSubGrp_NoPartySubIDs_69.insert(PartySubID_69.getString());
      FIX::PartySubIDType PartySubIDType_69(30);
      noPartySubIDs_0_1_0.set(PartySubIDType_69);
      PtysSubGrp_NoPartySubIDs_69.insert(PartySubIDType_69.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_69);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_70;
      FIX::PartySubID PartySubID_70("STRING_770363563");
      noPartySubIDs_0_1_1.set(PartySubID_70);
      PtysSubGrp_NoPartySubIDs_70.insert(PartySubID_70.getString());
      FIX::PartySubIDType PartySubIDType_70(16);
      noPartySubIDs_0_1_1.set(PartySubIDType_70);
      PtysSubGrp_NoPartySubIDs_70.insert(PartySubIDType_70.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_70);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_32;
    FIX::PartyID PartyID_32("STRING_664569830");
    noPartyIDs_0_1.set(PartyID_32);
    Parties_NoPartyIDs_32.insert(PartyID_32.getString());
    FIX::PartyIDSource PartyIDSource_32('H');
    noPartyIDs_0_1.set(PartyIDSource_32);
    Parties_NoPartyIDs_32.insert(PartyIDSource_32.getString());
    FIX::PartyRole PartyRole_32(72);
    noPartyIDs_0_1.set(PartyRole_32);
    Parties_NoPartyIDs_32.insert(PartyRole_32.getString());
    all_values.push_back(Parties_NoPartyIDs_32);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_71;
      FIX::PartySubID PartySubID_71("STRING_1677213850");
      noPartySubIDs_1_1_0.set(PartySubID_71);
      PtysSubGrp_NoPartySubIDs_71.insert(PartySubID_71.getString());
      FIX::PartySubIDType PartySubIDType_71(17);
      noPartySubIDs_1_1_0.set(PartySubIDType_71);
      PtysSubGrp_NoPartySubIDs_71.insert(PartySubIDType_71.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_71);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_72;
      FIX::PartySubID PartySubID_72("STRING_1987508861");
      noPartySubIDs_1_1_1.set(PartySubID_72);
      PtysSubGrp_NoPartySubIDs_72.insert(PartySubID_72.getString());
      FIX::PartySubIDType PartySubIDType_72(31);
      noPartySubIDs_1_1_1.set(PartySubIDType_72);
      PtysSubGrp_NoPartySubIDs_72.insert(PartySubIDType_72.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_72);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_73;
      FIX::PartySubID PartySubID_73("STRING_2004334421");
      noPartySubIDs_1_1_2.set(PartySubID_73);
      PtysSubGrp_NoPartySubIDs_73.insert(PartySubID_73.getString());
      FIX::PartySubIDType PartySubIDType_73(33);
      noPartySubIDs_1_1_2.set(PartySubIDType_73);
      PtysSubGrp_NoPartySubIDs_73.insert(PartySubIDType_73.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_73);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ContraryIntentionReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_24;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_24("DATA_1639998412");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingIssuer_24.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_24(662961904);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingIssuerLen_24.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_24("DATA_1260937587");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingSecurityDesc_24.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_24(1307357250);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingSecurityDescLen_24.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_24;
    UnderlyingAdjustedQuantity_24.setString("11126127");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_24);
    UnderlyingInstrument_24.insert(UnderlyingAdjustedQuantity_24.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_24;
    UnderlyingAllocationPercent_24.setString("96.200000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_24);
    UnderlyingInstrument_24.insert(UnderlyingAllocationPercent_24.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_24;
    UnderlyingAttachmentPoint_24.setString("25.210000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_24);
    UnderlyingInstrument_24.insert(UnderlyingAttachmentPoint_24.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_24("STRING_1864639335");
    noUnderlyings_0_0.set(UnderlyingCFICode_24);
    UnderlyingInstrument_24.insert(UnderlyingCFICode_24.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_24("STRING_911588622");
    noUnderlyings_0_0.set(UnderlyingCPProgram_24);
    UnderlyingInstrument_24.insert(UnderlyingCPProgram_24.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_24("STRING_1470706187");
    noUnderlyings_0_0.set(UnderlyingCPRegType_24);
    UnderlyingInstrument_24.insert(UnderlyingCPRegType_24.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_24;
    UnderlyingCapValue_24.setString("9059560");
    noUnderlyings_0_0.set(UnderlyingCapValue_24);
    UnderlyingInstrument_24.insert(UnderlyingCapValue_24.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_24;
    UnderlyingCashAmount_24.setString("16023789");
    noUnderlyings_0_0.set(UnderlyingCashAmount_24);
    UnderlyingInstrument_24.insert(UnderlyingCashAmount_24.getString());
    FIX::UnderlyingCashType UnderlyingCashType_24("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_24);
    UnderlyingInstrument_24.insert(UnderlyingCashType_24.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_24;
    UnderlyingContractMultiplier_24.setString("8524763");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_24);
    UnderlyingInstrument_24.insert(UnderlyingContractMultiplier_24.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_24(488530504);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_24);
    UnderlyingInstrument_24.insert(UnderlyingContractMultiplierUnit_24.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_24("COUNTRY_1080452779");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_24);
    UnderlyingInstrument_24.insert(UnderlyingCountryOfIssue_24.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_24("LOCALMKTDATE_1977806284");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_24);
    UnderlyingInstrument_24.insert(UnderlyingCouponPaymentDate_24.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_24;
    UnderlyingCouponRate_24.setString("50.800000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_24);
    UnderlyingInstrument_24.insert(UnderlyingCouponRate_24.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_24("STRING_1850816343");
    noUnderlyings_0_0.set(UnderlyingCreditRating_24);
    UnderlyingInstrument_24.insert(UnderlyingCreditRating_24.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_24("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_24);
    UnderlyingInstrument_24.insert(UnderlyingCurrency_24.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_24;
    UnderlyingCurrentValue_24.setString("19127403");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_24);
    UnderlyingInstrument_24.insert(UnderlyingCurrentValue_24.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_24;
    UnderlyingDetachmentPoint_24.setString("28.680000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_24);
    UnderlyingInstrument_24.insert(UnderlyingDetachmentPoint_24.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_24;
    UnderlyingDirtyPrice_24.setString("8790911");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_24);
    UnderlyingInstrument_24.insert(UnderlyingDirtyPrice_24.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_24;
    UnderlyingEndPrice_24.setString("14424705");
    noUnderlyings_0_0.set(UnderlyingEndPrice_24);
    UnderlyingInstrument_24.insert(UnderlyingEndPrice_24.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_24;
    UnderlyingEndValue_24.setString("11931083");
    noUnderlyings_0_0.set(UnderlyingEndValue_24);
    UnderlyingInstrument_24.insert(UnderlyingEndValue_24.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_24(719116372);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_24);
    UnderlyingInstrument_24.insert(UnderlyingExerciseStyle_24.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_24;
    UnderlyingFXRate_24.setString("11038462");
    noUnderlyings_0_0.set(UnderlyingFXRate_24);
    UnderlyingInstrument_24.insert(UnderlyingFXRate_24.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_24('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_24);
    UnderlyingInstrument_24.insert(UnderlyingFXRateCalc_24.getString());
    FIX::UnderlyingFactor UnderlyingFactor_24;
    UnderlyingFactor_24.setString("19249501");
    noUnderlyings_0_0.set(UnderlyingFactor_24);
    UnderlyingInstrument_24.insert(UnderlyingFactor_24.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_24(643443022);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_24);
    UnderlyingInstrument_24.insert(UnderlyingFlowScheduleType_24.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_24("STRING_542473880");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_24);
    UnderlyingInstrument_24.insert(UnderlyingInstrRegistry_24.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_24("LOCALMKTDATE_440428421");
    noUnderlyings_0_0.set(UnderlyingIssueDate_24);
    UnderlyingInstrument_24.insert(UnderlyingIssueDate_24.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_24("STRING_1904380609");
    noUnderlyings_0_0.set(UnderlyingIssuer_24);
    UnderlyingInstrument_24.insert(UnderlyingIssuer_24.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_24("STRING_1849831130");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_24);
    UnderlyingInstrument_24.insert(UnderlyingLocaleOfIssue_24.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_24("LOCALMKTDATE_1553041125");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_24);
    UnderlyingInstrument_24.insert(UnderlyingMaturityDate_24.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_24("MONTHYEAR_1527116581");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_24);
    UnderlyingInstrument_24.insert(UnderlyingMaturityMonthYear_24.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_24("TZTIMEONLY_1328740003");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_24);
    UnderlyingInstrument_24.insert(UnderlyingMaturityTime_24.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_24;
    UnderlyingNotionalPercentageOutstanding_24.setString("68.120000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_24);
    UnderlyingInstrument_24.insert(UnderlyingNotionalPercentageOutstanding_24.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_24('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_24);
    UnderlyingInstrument_24.insert(UnderlyingOptAttribute_24.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_24;
    UnderlyingOriginalNotionalPercentageOutstanding_24.setString("25.420000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_24);
    UnderlyingInstrument_24.insert(UnderlyingOriginalNotionalPercentageOutstanding_24.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_24("STRING_28669234");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_24);
    UnderlyingInstrument_24.insert(UnderlyingPriceUnitOfMeasure_24.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_24;
    UnderlyingPriceUnitOfMeasureQty_24.setString("18936004");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_24);
    UnderlyingInstrument_24.insert(UnderlyingPriceUnitOfMeasureQty_24.getString());
    FIX::UnderlyingProduct UnderlyingProduct_24(723373927);
    noUnderlyings_0_0.set(UnderlyingProduct_24);
    UnderlyingInstrument_24.insert(UnderlyingProduct_24.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_24(881145631);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_24);
    UnderlyingInstrument_24.insert(UnderlyingPutOrCall_24.getString());
    FIX::UnderlyingPx UnderlyingPx_24;
    UnderlyingPx_24.setString("2346473");
    noUnderlyings_0_0.set(UnderlyingPx_24);
    UnderlyingInstrument_24.insert(UnderlyingPx_24.getString());
    FIX::UnderlyingQty UnderlyingQty_24;
    UnderlyingQty_24.setString("18038267");
    noUnderlyings_0_0.set(UnderlyingQty_24);
    UnderlyingInstrument_24.insert(UnderlyingQty_24.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_24("LOCALMKTDATE_711468267");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_24);
    UnderlyingInstrument_24.insert(UnderlyingRedemptionDate_24.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_24("STRING_1045662397");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_24);
    UnderlyingInstrument_24.insert(UnderlyingRepoCollateralSecurityType_24.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_24;
    UnderlyingRepurchaseRate_24.setString("94.010000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_24);
    UnderlyingInstrument_24.insert(UnderlyingRepurchaseRate_24.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_24(138817225);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_24);
    UnderlyingInstrument_24.insert(UnderlyingRepurchaseTerm_24.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_24("STRING_373763660");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_24);
    UnderlyingInstrument_24.insert(UnderlyingRestructuringType_24.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_24("STRING_1272416056");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityDesc_24.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_24("EXCHANGE_2116160093");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityExchange_24.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_24("STRING_1252854819");
    noUnderlyings_0_0.set(UnderlyingSecurityID_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityID_24.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_24("STRING_567402913");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityIDSource_24.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_24("STRING_1161784788");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_24);
    UnderlyingInstrument_24.insert(UnderlyingSecuritySubType_24.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_24("STRING_1971971191");
    noUnderlyings_0_0.set(UnderlyingSecurityType_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityType_24.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_24("STRING_1671249127");
    noUnderlyings_0_0.set(UnderlyingSeniority_24);
    UnderlyingInstrument_24.insert(UnderlyingSeniority_24.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_24("STRING_64260256");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_24);
    UnderlyingInstrument_24.insert(UnderlyingSettlMethod_24.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_24(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_24);
    UnderlyingInstrument_24.insert(UnderlyingSettlementType_24.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_24;
    UnderlyingStartValue_24.setString("1672085");
    noUnderlyings_0_0.set(UnderlyingStartValue_24);
    UnderlyingInstrument_24.insert(UnderlyingStartValue_24.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_24("STRING_606734136");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_24);
    UnderlyingInstrument_24.insert(UnderlyingStateOrProvinceOfIssue_24.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_24("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_24);
    UnderlyingInstrument_24.insert(UnderlyingStrikeCurrency_24.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_24;
    UnderlyingStrikePrice_24.setString("3090816");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_24);
    UnderlyingInstrument_24.insert(UnderlyingStrikePrice_24.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_24("STRING_1595423606");
    noUnderlyings_0_0.set(UnderlyingSymbol_24);
    UnderlyingInstrument_24.insert(UnderlyingSymbol_24.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_24("STRING_1451222044");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_24);
    UnderlyingInstrument_24.insert(UnderlyingSymbolSfx_24.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_24("STRING_1637821621");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_24);
    UnderlyingInstrument_24.insert(UnderlyingTimeUnit_24.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_24("STRING_718136771");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_24);
    UnderlyingInstrument_24.insert(UnderlyingUnitOfMeasure_24.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_24;
    UnderlyingUnitOfMeasureQty_24.setString("17424436");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_24);
    UnderlyingInstrument_24.insert(UnderlyingUnitOfMeasureQty_24.getString());
    all_values.push_back(UnderlyingInstrument_24);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_57;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_57("STRING_746806005");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_57);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_57.insert(UnderlyingSecurityAltID_57.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_57("STRING_1488560413");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_57);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_57.insert(UnderlyingSecurityAltIDSource_57.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_57);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_47;
      FIX::UnderlyingStipType UnderlyingStipType_47("STRING_1627951636");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_47);
      UnderlyingStipulations_NoUnderlyingStips_47.insert(UnderlyingStipType_47.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_47("STRING_1723207730");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_47);
      UnderlyingStipulations_NoUnderlyingStips_47.insert(UnderlyingStipValue_47.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_47);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_48;
      FIX::UnderlyingStipType UnderlyingStipType_48("STRING_522017501");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_48);
      UnderlyingStipulations_NoUnderlyingStips_48.insert(UnderlyingStipType_48.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_48("STRING_191936256");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_48);
      UnderlyingStipulations_NoUnderlyingStips_48.insert(UnderlyingStipValue_48.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_48);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_49;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_49("STRING_2029176902");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_49);
      UndlyInstrumentParties_NoUndlyInstrumentParties_49.insert(UnderlyingInstrumentPartyID_49.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_49('3');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_49);
      UndlyInstrumentParties_NoUndlyInstrumentParties_49.insert(UnderlyingInstrumentPartyIDSource_49.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_49(995150140);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_49);
      UndlyInstrumentParties_NoUndlyInstrumentParties_49.insert(UnderlyingInstrumentPartyRole_49.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_49);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_97("STRING_299429927");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_97);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97.insert(UnderlyingInstrumentPartySubID_97.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_97(100521311);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_97);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97.insert(UnderlyingInstrumentPartySubIDType_97.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_98("STRING_1721512223");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_98);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98.insert(UnderlyingInstrumentPartySubID_98.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_98(1461214715);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_98);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98.insert(UnderlyingInstrumentPartySubIDType_98.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_50;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_50("STRING_2072492502");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_50);
      UndlyInstrumentParties_NoUndlyInstrumentParties_50.insert(UnderlyingInstrumentPartyID_50.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_50('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_50);
      UndlyInstrumentParties_NoUndlyInstrumentParties_50.insert(UnderlyingInstrumentPartyIDSource_50.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_50(1525474972);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_50);
      UndlyInstrumentParties_NoUndlyInstrumentParties_50.insert(UnderlyingInstrumentPartyRole_50.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_50);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_99("STRING_1412486204");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_99);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99.insert(UnderlyingInstrumentPartySubID_99.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_99(2132209108);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_99);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99.insert(UnderlyingInstrumentPartySubIDType_99.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_51;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_51("STRING_1716829044");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_51);
      UndlyInstrumentParties_NoUndlyInstrumentParties_51.insert(UnderlyingInstrumentPartyID_51.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_51('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_51);
      UndlyInstrumentParties_NoUndlyInstrumentParties_51.insert(UnderlyingInstrumentPartyIDSource_51.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_51(293807079);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_51);
      UndlyInstrumentParties_NoUndlyInstrumentParties_51.insert(UnderlyingInstrumentPartyRole_51.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_51);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_100("STRING_640330064");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_100);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100.insert(UnderlyingInstrumentPartySubID_100.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_100(1931628700);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_100);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100.insert(UnderlyingInstrumentPartySubIDType_100.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

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
    multiset<string> UnderlyingInstrument_25;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_25("DATA_1882905773");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingIssuer_25.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_25(235290016);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingIssuerLen_25.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_25("DATA_2073929216");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingSecurityDesc_25.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_25(482228131);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingSecurityDescLen_25.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_25;
    UnderlyingAdjustedQuantity_25.setString("17238504");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_25);
    UnderlyingInstrument_25.insert(UnderlyingAdjustedQuantity_25.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_25;
    UnderlyingAllocationPercent_25.setString("0.100000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_25);
    UnderlyingInstrument_25.insert(UnderlyingAllocationPercent_25.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_25;
    UnderlyingAttachmentPoint_25.setString("97.670000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_25);
    UnderlyingInstrument_25.insert(UnderlyingAttachmentPoint_25.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_25("STRING_1299574512");
    noUnderlyings_0_1.set(UnderlyingCFICode_25);
    UnderlyingInstrument_25.insert(UnderlyingCFICode_25.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_25("STRING_1314137511");
    noUnderlyings_0_1.set(UnderlyingCPProgram_25);
    UnderlyingInstrument_25.insert(UnderlyingCPProgram_25.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_25("STRING_154632375");
    noUnderlyings_0_1.set(UnderlyingCPRegType_25);
    UnderlyingInstrument_25.insert(UnderlyingCPRegType_25.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_25;
    UnderlyingCapValue_25.setString("19209609");
    noUnderlyings_0_1.set(UnderlyingCapValue_25);
    UnderlyingInstrument_25.insert(UnderlyingCapValue_25.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_25;
    UnderlyingCashAmount_25.setString("11958307");
    noUnderlyings_0_1.set(UnderlyingCashAmount_25);
    UnderlyingInstrument_25.insert(UnderlyingCashAmount_25.getString());
    FIX::UnderlyingCashType UnderlyingCashType_25("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_25);
    UnderlyingInstrument_25.insert(UnderlyingCashType_25.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_25;
    UnderlyingContractMultiplier_25.setString("7686274");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_25);
    UnderlyingInstrument_25.insert(UnderlyingContractMultiplier_25.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_25(202456428);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_25);
    UnderlyingInstrument_25.insert(UnderlyingContractMultiplierUnit_25.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_25("COUNTRY_784815784");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_25);
    UnderlyingInstrument_25.insert(UnderlyingCountryOfIssue_25.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_25("LOCALMKTDATE_869148796");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_25);
    UnderlyingInstrument_25.insert(UnderlyingCouponPaymentDate_25.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_25;
    UnderlyingCouponRate_25.setString("86.520000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_25);
    UnderlyingInstrument_25.insert(UnderlyingCouponRate_25.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_25("STRING_98546851");
    noUnderlyings_0_1.set(UnderlyingCreditRating_25);
    UnderlyingInstrument_25.insert(UnderlyingCreditRating_25.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_25("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_25);
    UnderlyingInstrument_25.insert(UnderlyingCurrency_25.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_25;
    UnderlyingCurrentValue_25.setString("16240218");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_25);
    UnderlyingInstrument_25.insert(UnderlyingCurrentValue_25.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_25;
    UnderlyingDetachmentPoint_25.setString("5.650000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_25);
    UnderlyingInstrument_25.insert(UnderlyingDetachmentPoint_25.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_25;
    UnderlyingDirtyPrice_25.setString("2867652");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_25);
    UnderlyingInstrument_25.insert(UnderlyingDirtyPrice_25.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_25;
    UnderlyingEndPrice_25.setString("16087472");
    noUnderlyings_0_1.set(UnderlyingEndPrice_25);
    UnderlyingInstrument_25.insert(UnderlyingEndPrice_25.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_25;
    UnderlyingEndValue_25.setString("20379496");
    noUnderlyings_0_1.set(UnderlyingEndValue_25);
    UnderlyingInstrument_25.insert(UnderlyingEndValue_25.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_25(1623356931);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_25);
    UnderlyingInstrument_25.insert(UnderlyingExerciseStyle_25.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_25;
    UnderlyingFXRate_25.setString("19025543");
    noUnderlyings_0_1.set(UnderlyingFXRate_25);
    UnderlyingInstrument_25.insert(UnderlyingFXRate_25.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_25('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_25);
    UnderlyingInstrument_25.insert(UnderlyingFXRateCalc_25.getString());
    FIX::UnderlyingFactor UnderlyingFactor_25;
    UnderlyingFactor_25.setString("1162033");
    noUnderlyings_0_1.set(UnderlyingFactor_25);
    UnderlyingInstrument_25.insert(UnderlyingFactor_25.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_25(1686699415);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_25);
    UnderlyingInstrument_25.insert(UnderlyingFlowScheduleType_25.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_25("STRING_790657089");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_25);
    UnderlyingInstrument_25.insert(UnderlyingInstrRegistry_25.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_25("LOCALMKTDATE_351493363");
    noUnderlyings_0_1.set(UnderlyingIssueDate_25);
    UnderlyingInstrument_25.insert(UnderlyingIssueDate_25.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_25("STRING_1613144983");
    noUnderlyings_0_1.set(UnderlyingIssuer_25);
    UnderlyingInstrument_25.insert(UnderlyingIssuer_25.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_25("STRING_1272885220");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_25);
    UnderlyingInstrument_25.insert(UnderlyingLocaleOfIssue_25.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_25("LOCALMKTDATE_2075343793");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_25);
    UnderlyingInstrument_25.insert(UnderlyingMaturityDate_25.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_25("MONTHYEAR_257781346");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_25);
    UnderlyingInstrument_25.insert(UnderlyingMaturityMonthYear_25.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_25("TZTIMEONLY_1235581340");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_25);
    UnderlyingInstrument_25.insert(UnderlyingMaturityTime_25.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_25;
    UnderlyingNotionalPercentageOutstanding_25.setString("46.580000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_25);
    UnderlyingInstrument_25.insert(UnderlyingNotionalPercentageOutstanding_25.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_25('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_25);
    UnderlyingInstrument_25.insert(UnderlyingOptAttribute_25.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_25;
    UnderlyingOriginalNotionalPercentageOutstanding_25.setString("37.150000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_25);
    UnderlyingInstrument_25.insert(UnderlyingOriginalNotionalPercentageOutstanding_25.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_25("STRING_1000912002");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_25);
    UnderlyingInstrument_25.insert(UnderlyingPriceUnitOfMeasure_25.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_25;
    UnderlyingPriceUnitOfMeasureQty_25.setString("6202659");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_25);
    UnderlyingInstrument_25.insert(UnderlyingPriceUnitOfMeasureQty_25.getString());
    FIX::UnderlyingProduct UnderlyingProduct_25(1875599572);
    noUnderlyings_0_1.set(UnderlyingProduct_25);
    UnderlyingInstrument_25.insert(UnderlyingProduct_25.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_25(1769539487);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_25);
    UnderlyingInstrument_25.insert(UnderlyingPutOrCall_25.getString());
    FIX::UnderlyingPx UnderlyingPx_25;
    UnderlyingPx_25.setString("8227224");
    noUnderlyings_0_1.set(UnderlyingPx_25);
    UnderlyingInstrument_25.insert(UnderlyingPx_25.getString());
    FIX::UnderlyingQty UnderlyingQty_25;
    UnderlyingQty_25.setString("5129317");
    noUnderlyings_0_1.set(UnderlyingQty_25);
    UnderlyingInstrument_25.insert(UnderlyingQty_25.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_25("LOCALMKTDATE_491204636");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_25);
    UnderlyingInstrument_25.insert(UnderlyingRedemptionDate_25.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_25("STRING_599207408");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_25);
    UnderlyingInstrument_25.insert(UnderlyingRepoCollateralSecurityType_25.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_25;
    UnderlyingRepurchaseRate_25.setString("85.600000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_25);
    UnderlyingInstrument_25.insert(UnderlyingRepurchaseRate_25.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_25(1285362287);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_25);
    UnderlyingInstrument_25.insert(UnderlyingRepurchaseTerm_25.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_25("STRING_1620970115");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_25);
    UnderlyingInstrument_25.insert(UnderlyingRestructuringType_25.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_25("STRING_88016735");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityDesc_25.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_25("EXCHANGE_1606482852");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityExchange_25.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_25("STRING_1907735378");
    noUnderlyings_0_1.set(UnderlyingSecurityID_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityID_25.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_25("STRING_1696764019");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityIDSource_25.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_25("STRING_1496948814");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_25);
    UnderlyingInstrument_25.insert(UnderlyingSecuritySubType_25.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_25("STRING_1383608661");
    noUnderlyings_0_1.set(UnderlyingSecurityType_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityType_25.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_25("STRING_1451834734");
    noUnderlyings_0_1.set(UnderlyingSeniority_25);
    UnderlyingInstrument_25.insert(UnderlyingSeniority_25.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_25("STRING_404700130");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_25);
    UnderlyingInstrument_25.insert(UnderlyingSettlMethod_25.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_25(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_25);
    UnderlyingInstrument_25.insert(UnderlyingSettlementType_25.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_25;
    UnderlyingStartValue_25.setString("9910505");
    noUnderlyings_0_1.set(UnderlyingStartValue_25);
    UnderlyingInstrument_25.insert(UnderlyingStartValue_25.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_25("STRING_1195357219");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_25);
    UnderlyingInstrument_25.insert(UnderlyingStateOrProvinceOfIssue_25.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_25("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_25);
    UnderlyingInstrument_25.insert(UnderlyingStrikeCurrency_25.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_25;
    UnderlyingStrikePrice_25.setString("3207587");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_25);
    UnderlyingInstrument_25.insert(UnderlyingStrikePrice_25.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_25("STRING_1779165517");
    noUnderlyings_0_1.set(UnderlyingSymbol_25);
    UnderlyingInstrument_25.insert(UnderlyingSymbol_25.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_25("STRING_714493183");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_25);
    UnderlyingInstrument_25.insert(UnderlyingSymbolSfx_25.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_25("STRING_1556340132");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_25);
    UnderlyingInstrument_25.insert(UnderlyingTimeUnit_25.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_25("STRING_859116527");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_25);
    UnderlyingInstrument_25.insert(UnderlyingUnitOfMeasure_25.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_25;
    UnderlyingUnitOfMeasureQty_25.setString("1389283");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_25);
    UnderlyingInstrument_25.insert(UnderlyingUnitOfMeasureQty_25.getString());
    all_values.push_back(UnderlyingInstrument_25);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_58;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_58("STRING_1860028530");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_58);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_58.insert(UnderlyingSecurityAltID_58.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_58("STRING_759194368");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_58);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_58.insert(UnderlyingSecurityAltIDSource_58.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_58);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_49;
      FIX::UnderlyingStipType UnderlyingStipType_49("STRING_1482084369");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_49);
      UnderlyingStipulations_NoUnderlyingStips_49.insert(UnderlyingStipType_49.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_49("STRING_1581916772");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_49);
      UnderlyingStipulations_NoUnderlyingStips_49.insert(UnderlyingStipValue_49.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_49);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_52;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_52("STRING_1973289005");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_52);
      UndlyInstrumentParties_NoUndlyInstrumentParties_52.insert(UnderlyingInstrumentPartyID_52.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_52('3');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_52);
      UndlyInstrumentParties_NoUndlyInstrumentParties_52.insert(UnderlyingInstrumentPartyIDSource_52.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_52(1651596392);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_52);
      UndlyInstrumentParties_NoUndlyInstrumentParties_52.insert(UnderlyingInstrumentPartyRole_52.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_52);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_101("STRING_1654610647");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_101);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101.insert(UnderlyingInstrumentPartySubID_101.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_101(1739613128);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_101);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101.insert(UnderlyingInstrumentPartySubIDType_101.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_102("STRING_570166849");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_102);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102.insert(UnderlyingInstrumentPartySubID_102.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_102(1414862378);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_102);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102.insert(UnderlyingInstrumentPartySubIDType_102.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_103("STRING_1288893499");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_103);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103.insert(UnderlyingInstrumentPartySubID_103.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_103(2067115663);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_103);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103.insert(UnderlyingInstrumentPartySubIDType_103.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_26;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_26("DATA_650987391");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingIssuer_26.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_26(593244586);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingIssuerLen_26.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_26("DATA_324332145");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingSecurityDesc_26.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_26(3315752);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingSecurityDescLen_26.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_26;
    UnderlyingAdjustedQuantity_26.setString("15842950");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_26);
    UnderlyingInstrument_26.insert(UnderlyingAdjustedQuantity_26.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_26;
    UnderlyingAllocationPercent_26.setString("93.640000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_26);
    UnderlyingInstrument_26.insert(UnderlyingAllocationPercent_26.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_26;
    UnderlyingAttachmentPoint_26.setString("11.240000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_26);
    UnderlyingInstrument_26.insert(UnderlyingAttachmentPoint_26.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_26("STRING_2041006925");
    noUnderlyings_0_2.set(UnderlyingCFICode_26);
    UnderlyingInstrument_26.insert(UnderlyingCFICode_26.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_26("STRING_1840448156");
    noUnderlyings_0_2.set(UnderlyingCPProgram_26);
    UnderlyingInstrument_26.insert(UnderlyingCPProgram_26.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_26("STRING_1486302993");
    noUnderlyings_0_2.set(UnderlyingCPRegType_26);
    UnderlyingInstrument_26.insert(UnderlyingCPRegType_26.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_26;
    UnderlyingCapValue_26.setString("6080164");
    noUnderlyings_0_2.set(UnderlyingCapValue_26);
    UnderlyingInstrument_26.insert(UnderlyingCapValue_26.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_26;
    UnderlyingCashAmount_26.setString("12493046");
    noUnderlyings_0_2.set(UnderlyingCashAmount_26);
    UnderlyingInstrument_26.insert(UnderlyingCashAmount_26.getString());
    FIX::UnderlyingCashType UnderlyingCashType_26("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_26);
    UnderlyingInstrument_26.insert(UnderlyingCashType_26.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_26;
    UnderlyingContractMultiplier_26.setString("7469448");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_26);
    UnderlyingInstrument_26.insert(UnderlyingContractMultiplier_26.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_26(2048374840);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_26);
    UnderlyingInstrument_26.insert(UnderlyingContractMultiplierUnit_26.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_26("COUNTRY_2057964403");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_26);
    UnderlyingInstrument_26.insert(UnderlyingCountryOfIssue_26.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_26("LOCALMKTDATE_1506139222");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_26);
    UnderlyingInstrument_26.insert(UnderlyingCouponPaymentDate_26.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_26;
    UnderlyingCouponRate_26.setString("73.160000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_26);
    UnderlyingInstrument_26.insert(UnderlyingCouponRate_26.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_26("STRING_1392565124");
    noUnderlyings_0_2.set(UnderlyingCreditRating_26);
    UnderlyingInstrument_26.insert(UnderlyingCreditRating_26.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_26("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_26);
    UnderlyingInstrument_26.insert(UnderlyingCurrency_26.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_26;
    UnderlyingCurrentValue_26.setString("12183704");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_26);
    UnderlyingInstrument_26.insert(UnderlyingCurrentValue_26.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_26;
    UnderlyingDetachmentPoint_26.setString("28.790000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_26);
    UnderlyingInstrument_26.insert(UnderlyingDetachmentPoint_26.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_26;
    UnderlyingDirtyPrice_26.setString("9723078");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_26);
    UnderlyingInstrument_26.insert(UnderlyingDirtyPrice_26.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_26;
    UnderlyingEndPrice_26.setString("1820544");
    noUnderlyings_0_2.set(UnderlyingEndPrice_26);
    UnderlyingInstrument_26.insert(UnderlyingEndPrice_26.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_26;
    UnderlyingEndValue_26.setString("4813398");
    noUnderlyings_0_2.set(UnderlyingEndValue_26);
    UnderlyingInstrument_26.insert(UnderlyingEndValue_26.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_26(564437373);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_26);
    UnderlyingInstrument_26.insert(UnderlyingExerciseStyle_26.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_26;
    UnderlyingFXRate_26.setString("7522213");
    noUnderlyings_0_2.set(UnderlyingFXRate_26);
    UnderlyingInstrument_26.insert(UnderlyingFXRate_26.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_26('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_26);
    UnderlyingInstrument_26.insert(UnderlyingFXRateCalc_26.getString());
    FIX::UnderlyingFactor UnderlyingFactor_26;
    UnderlyingFactor_26.setString("18533308");
    noUnderlyings_0_2.set(UnderlyingFactor_26);
    UnderlyingInstrument_26.insert(UnderlyingFactor_26.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_26(671853342);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_26);
    UnderlyingInstrument_26.insert(UnderlyingFlowScheduleType_26.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_26("STRING_399706000");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_26);
    UnderlyingInstrument_26.insert(UnderlyingInstrRegistry_26.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_26("LOCALMKTDATE_299091810");
    noUnderlyings_0_2.set(UnderlyingIssueDate_26);
    UnderlyingInstrument_26.insert(UnderlyingIssueDate_26.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_26("STRING_996185487");
    noUnderlyings_0_2.set(UnderlyingIssuer_26);
    UnderlyingInstrument_26.insert(UnderlyingIssuer_26.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_26("STRING_403021752");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_26);
    UnderlyingInstrument_26.insert(UnderlyingLocaleOfIssue_26.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_26("LOCALMKTDATE_1883386898");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_26);
    UnderlyingInstrument_26.insert(UnderlyingMaturityDate_26.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_26("MONTHYEAR_368391204");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_26);
    UnderlyingInstrument_26.insert(UnderlyingMaturityMonthYear_26.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_26("TZTIMEONLY_110159228");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_26);
    UnderlyingInstrument_26.insert(UnderlyingMaturityTime_26.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_26;
    UnderlyingNotionalPercentageOutstanding_26.setString("1.760000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_26);
    UnderlyingInstrument_26.insert(UnderlyingNotionalPercentageOutstanding_26.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_26('6');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_26);
    UnderlyingInstrument_26.insert(UnderlyingOptAttribute_26.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_26;
    UnderlyingOriginalNotionalPercentageOutstanding_26.setString("22.220000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_26);
    UnderlyingInstrument_26.insert(UnderlyingOriginalNotionalPercentageOutstanding_26.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_26("STRING_237442989");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_26);
    UnderlyingInstrument_26.insert(UnderlyingPriceUnitOfMeasure_26.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_26;
    UnderlyingPriceUnitOfMeasureQty_26.setString("13106603");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_26);
    UnderlyingInstrument_26.insert(UnderlyingPriceUnitOfMeasureQty_26.getString());
    FIX::UnderlyingProduct UnderlyingProduct_26(1794398095);
    noUnderlyings_0_2.set(UnderlyingProduct_26);
    UnderlyingInstrument_26.insert(UnderlyingProduct_26.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_26(984387843);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_26);
    UnderlyingInstrument_26.insert(UnderlyingPutOrCall_26.getString());
    FIX::UnderlyingPx UnderlyingPx_26;
    UnderlyingPx_26.setString("12115515");
    noUnderlyings_0_2.set(UnderlyingPx_26);
    UnderlyingInstrument_26.insert(UnderlyingPx_26.getString());
    FIX::UnderlyingQty UnderlyingQty_26;
    UnderlyingQty_26.setString("17048788");
    noUnderlyings_0_2.set(UnderlyingQty_26);
    UnderlyingInstrument_26.insert(UnderlyingQty_26.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_26("LOCALMKTDATE_343043417");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_26);
    UnderlyingInstrument_26.insert(UnderlyingRedemptionDate_26.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_26("STRING_1639628861");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_26);
    UnderlyingInstrument_26.insert(UnderlyingRepoCollateralSecurityType_26.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_26;
    UnderlyingRepurchaseRate_26.setString("3.260000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_26);
    UnderlyingInstrument_26.insert(UnderlyingRepurchaseRate_26.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_26(1283615764);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_26);
    UnderlyingInstrument_26.insert(UnderlyingRepurchaseTerm_26.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_26("STRING_960340361");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_26);
    UnderlyingInstrument_26.insert(UnderlyingRestructuringType_26.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_26("STRING_20847160");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityDesc_26.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_26("EXCHANGE_110344996");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityExchange_26.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_26("STRING_1932648254");
    noUnderlyings_0_2.set(UnderlyingSecurityID_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityID_26.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_26("STRING_202901639");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityIDSource_26.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_26("STRING_591684875");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_26);
    UnderlyingInstrument_26.insert(UnderlyingSecuritySubType_26.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_26("STRING_349601979");
    noUnderlyings_0_2.set(UnderlyingSecurityType_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityType_26.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_26("STRING_955122966");
    noUnderlyings_0_2.set(UnderlyingSeniority_26);
    UnderlyingInstrument_26.insert(UnderlyingSeniority_26.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_26("STRING_340403484");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_26);
    UnderlyingInstrument_26.insert(UnderlyingSettlMethod_26.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_26(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_26);
    UnderlyingInstrument_26.insert(UnderlyingSettlementType_26.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_26;
    UnderlyingStartValue_26.setString("16269763");
    noUnderlyings_0_2.set(UnderlyingStartValue_26);
    UnderlyingInstrument_26.insert(UnderlyingStartValue_26.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_26("STRING_740109484");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_26);
    UnderlyingInstrument_26.insert(UnderlyingStateOrProvinceOfIssue_26.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_26("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_26);
    UnderlyingInstrument_26.insert(UnderlyingStrikeCurrency_26.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_26;
    UnderlyingStrikePrice_26.setString("11431312");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_26);
    UnderlyingInstrument_26.insert(UnderlyingStrikePrice_26.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_26("STRING_90444265");
    noUnderlyings_0_2.set(UnderlyingSymbol_26);
    UnderlyingInstrument_26.insert(UnderlyingSymbol_26.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_26("STRING_844069352");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_26);
    UnderlyingInstrument_26.insert(UnderlyingSymbolSfx_26.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_26("STRING_1253290465");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_26);
    UnderlyingInstrument_26.insert(UnderlyingTimeUnit_26.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_26("STRING_1867354441");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_26);
    UnderlyingInstrument_26.insert(UnderlyingUnitOfMeasure_26.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_26;
    UnderlyingUnitOfMeasureQty_26.setString("9054250");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_26);
    UnderlyingInstrument_26.insert(UnderlyingUnitOfMeasureQty_26.getString());
    all_values.push_back(UnderlyingInstrument_26);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_59;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_59("STRING_2104797430");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_59);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_59.insert(UnderlyingSecurityAltID_59.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_59("STRING_68601770");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_59);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_59.insert(UnderlyingSecurityAltIDSource_59.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_59);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_60;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_60("STRING_349183486");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_60);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_60.insert(UnderlyingSecurityAltID_60.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_60("STRING_941701625");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_60);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_60.insert(UnderlyingSecurityAltIDSource_60.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_60);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_61;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_61("STRING_1280153315");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_61);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_61.insert(UnderlyingSecurityAltID_61.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_61("STRING_2054062336");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_61);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_61.insert(UnderlyingSecurityAltIDSource_61.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_61);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_50;
      FIX::UnderlyingStipType UnderlyingStipType_50("STRING_772298528");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_50);
      UnderlyingStipulations_NoUnderlyingStips_50.insert(UnderlyingStipType_50.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_50("STRING_856539015");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_50);
      UnderlyingStipulations_NoUnderlyingStips_50.insert(UnderlyingStipValue_50.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_50);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_51;
      FIX::UnderlyingStipType UnderlyingStipType_51("STRING_420877159");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_51);
      UnderlyingStipulations_NoUnderlyingStips_51.insert(UnderlyingStipType_51.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_51("STRING_1732638889");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_51);
      UnderlyingStipulations_NoUnderlyingStips_51.insert(UnderlyingStipValue_51.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_51);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_53;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_53("STRING_531222155");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_53);
      UndlyInstrumentParties_NoUndlyInstrumentParties_53.insert(UnderlyingInstrumentPartyID_53.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_53('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_53);
      UndlyInstrumentParties_NoUndlyInstrumentParties_53.insert(UnderlyingInstrumentPartyIDSource_53.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_53(1080287814);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_53);
      UndlyInstrumentParties_NoUndlyInstrumentParties_53.insert(UnderlyingInstrumentPartyRole_53.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_53);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_104("STRING_1867405475");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_104);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104.insert(UnderlyingInstrumentPartySubID_104.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_104(2035410781);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_104);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104.insert(UnderlyingInstrumentPartySubIDType_104.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_105("STRING_1463310514");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_105);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105.insert(UnderlyingInstrumentPartySubID_105.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_105(1922854679);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_105);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105.insert(UnderlyingInstrumentPartySubIDType_105.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_54;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_54("STRING_1514903442");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_54);
      UndlyInstrumentParties_NoUndlyInstrumentParties_54.insert(UnderlyingInstrumentPartyID_54.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_54('5');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_54);
      UndlyInstrumentParties_NoUndlyInstrumentParties_54.insert(UnderlyingInstrumentPartyIDSource_54.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_54(129912046);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_54);
      UndlyInstrumentParties_NoUndlyInstrumentParties_54.insert(UnderlyingInstrumentPartyRole_54.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_54);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_106("STRING_1199067587");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_106);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106.insert(UnderlyingInstrumentPartySubID_106.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_106(220356311);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_106);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106.insert(UnderlyingInstrumentPartySubIDType_106.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_107("STRING_687167295");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_107);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107.insert(UnderlyingInstrumentPartySubID_107.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_107(304874405);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_107);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107.insert(UnderlyingInstrumentPartySubIDType_107.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_108("STRING_2087710752");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_108);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108.insert(UnderlyingInstrumentPartySubID_108.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_108(1592592360);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_108);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108.insert(UnderlyingInstrumentPartySubIDType_108.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
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
