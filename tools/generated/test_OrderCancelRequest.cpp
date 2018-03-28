#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/OrderCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderCancelRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> OrderCancelRequest_0;
  FIX::Account Account_21("STRING_300178245");
  msg.set(Account_21);
  OrderCancelRequest_0.insert(Account_21.getString());
  FIX::AccountType AccountType_20(7);
  msg.set(AccountType_20);
  OrderCancelRequest_0.insert(AccountType_20.getString());
  FIX::AcctIDSource AcctIDSource_14(3);
  msg.set(AcctIDSource_14);
  OrderCancelRequest_0.insert(AcctIDSource_14.getString());
  FIX::ClOrdID ClOrdID_35("STRING_221718854");
  msg.set(ClOrdID_35);
  OrderCancelRequest_0.insert(ClOrdID_35.getString());
  FIX::ClOrdLinkID ClOrdLinkID_13("STRING_642942181");
  msg.set(ClOrdLinkID_13);
  OrderCancelRequest_0.insert(ClOrdLinkID_13.getString());
  FIX::ComplianceID ComplianceID_11("STRING_559508078");
  msg.set(ComplianceID_11);
  OrderCancelRequest_0.insert(ComplianceID_11.getString());
  FIX::EncodedText EncodedText_60("DATA_1197300509");
  msg.set(EncodedText_60);
  OrderCancelRequest_0.insert(EncodedText_60.getString());
  FIX::EncodedTextLen EncodedTextLen_60(1333108831);
  msg.set(EncodedTextLen_60);
  OrderCancelRequest_0.insert(EncodedTextLen_60.getString());
  FIX::ListID ListID_22("STRING_1651388701");
  msg.set(ListID_22);
  OrderCancelRequest_0.insert(ListID_22.getString());
  FIX::OrderID OrderID_30("STRING_102164978");
  msg.set(OrderID_30);
  OrderCancelRequest_0.insert(OrderID_30.getString());
  FIX::OrigClOrdID OrigClOrdID_9("STRING_2089811828");
  msg.set(OrigClOrdID_9);
  OrderCancelRequest_0.insert(OrigClOrdID_9.getString());
  FIX::OrigOrdModTime OrigOrdModTime_5(FIX::UTCTIMESTAMP(12, 38, 0, 3, 5, 2013));
  msg.set(OrigOrdModTime_5);
  OrderCancelRequest_0.insert(OrigOrdModTime_5.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_33("STRING_1023985029");
  msg.set(SecondaryClOrdID_33);
  OrderCancelRequest_0.insert(SecondaryClOrdID_33.getString());
  FIX::Side Side_27('6');
  msg.set(Side_27);
  OrderCancelRequest_0.insert(Side_27.getString());
  FIX::Text Text_60("STRING_1787460672");
  msg.set(Text_60);
  OrderCancelRequest_0.insert(Text_60.getString());
  FIX::TransactTime TransactTime_45(FIX::UTCTIMESTAMP(10, 48, 29, 15, 6, 2003));
  msg.set(TransactTime_45);
  OrderCancelRequest_0.insert(TransactTime_45.getString());
  all_values.push_back(OrderCancelRequest_0);

  // FinancingDetails
  multiset<string> FinancingDetails_14;
  FIX::AgreementCurrency AgreementCurrency_14("CAN");
  msg.set(AgreementCurrency_14);
  FinancingDetails_14.insert(AgreementCurrency_14.getString());
  FIX::AgreementDate AgreementDate_14("LOCALMKTDATE_339439362");
  msg.set(AgreementDate_14);
  FinancingDetails_14.insert(AgreementDate_14.getString());
  FIX::AgreementDesc AgreementDesc_14("STRING_1066418727");
  msg.set(AgreementDesc_14);
  FinancingDetails_14.insert(AgreementDesc_14.getString());
  FIX::AgreementID AgreementID_14("STRING_1660480545");
  msg.set(AgreementID_14);
  FinancingDetails_14.insert(AgreementID_14.getString());
  FIX::DeliveryType DeliveryType_14(0);
  msg.set(DeliveryType_14);
  FinancingDetails_14.insert(DeliveryType_14.getString());
  FIX::EndDate EndDate_14("LOCALMKTDATE_1288137581");
  msg.set(EndDate_14);
  FinancingDetails_14.insert(EndDate_14.getString());
  FIX::MarginRatio MarginRatio_14;
  MarginRatio_14.setString("90.780000");
  msg.set(MarginRatio_14);
  FinancingDetails_14.insert(MarginRatio_14.getString());
  FIX::StartDate StartDate_14("LOCALMKTDATE_1764503230");
  msg.set(StartDate_14);
  FinancingDetails_14.insert(StartDate_14.getString());
  FIX::TerminationType TerminationType_14(4);
  msg.set(TerminationType_14);
  FinancingDetails_14.insert(TerminationType_14.getString());
  all_values.push_back(FinancingDetails_14);

  // Instrument
  multiset<string> Instrument_55;
  FIX::AttachmentPoint AttachmentPoint_55;
  AttachmentPoint_55.setString("79.090000");
  msg.set(AttachmentPoint_55);
  Instrument_55.insert(AttachmentPoint_55.getString());
  FIX::CFICode CFICode_55("STRING_1268408283");
  msg.set(CFICode_55);
  Instrument_55.insert(CFICode_55.getString());
  FIX::CPProgram CPProgram_55(99);
  msg.set(CPProgram_55);
  Instrument_55.insert(CPProgram_55.getString());
  FIX::CPRegType CPRegType_55("STRING_1431376089");
  msg.set(CPRegType_55);
  Instrument_55.insert(CPRegType_55.getString());
  FIX::CapPrice CapPrice_55;
  CapPrice_55.setString("17751610");
  msg.set(CapPrice_55);
  Instrument_55.insert(CapPrice_55.getString());
  FIX::ContractMultiplier ContractMultiplier_55;
  ContractMultiplier_55.setString("3855117");
  msg.set(ContractMultiplier_55);
  Instrument_55.insert(ContractMultiplier_55.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_55(0);
  msg.set(ContractMultiplierUnit_55);
  Instrument_55.insert(ContractMultiplierUnit_55.getString());
  FIX::ContractSettlMonth ContractSettlMonth_55("MONTHYEAR_1677235504");
  msg.set(ContractSettlMonth_55);
  Instrument_55.insert(ContractSettlMonth_55.getString());
  FIX::CountryOfIssue CountryOfIssue_55("COUNTRY_1198094960");
  msg.set(CountryOfIssue_55);
  Instrument_55.insert(CountryOfIssue_55.getString());
  FIX::CouponPaymentDate CouponPaymentDate_55("LOCALMKTDATE_570455100");
  msg.set(CouponPaymentDate_55);
  Instrument_55.insert(CouponPaymentDate_55.getString());
  FIX::CouponRate CouponRate_55;
  CouponRate_55.setString("21.250000");
  msg.set(CouponRate_55);
  Instrument_55.insert(CouponRate_55.getString());
  FIX::CreditRating CreditRating_55("STRING_74596342");
  msg.set(CreditRating_55);
  Instrument_55.insert(CreditRating_55.getString());
  FIX::DatedDate DatedDate_55("LOCALMKTDATE_1559605521");
  msg.set(DatedDate_55);
  Instrument_55.insert(DatedDate_55.getString());
  FIX::DetachmentPoint DetachmentPoint_55;
  DetachmentPoint_55.setString("91.500000");
  msg.set(DetachmentPoint_55);
  Instrument_55.insert(DetachmentPoint_55.getString());
  FIX::EncodedIssuer EncodedIssuer_55("DATA_591194884");
  msg.set(EncodedIssuer_55);
  Instrument_55.insert(EncodedIssuer_55.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_55(34496363);
  msg.set(EncodedIssuerLen_55);
  Instrument_55.insert(EncodedIssuerLen_55.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_55("DATA_589920750");
  msg.set(EncodedSecurityDesc_55);
  Instrument_55.insert(EncodedSecurityDesc_55.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_55(883569273);
  msg.set(EncodedSecurityDescLen_55);
  Instrument_55.insert(EncodedSecurityDescLen_55.getString());
  FIX::ExerciseStyle ExerciseStyle_55(1);
  msg.set(ExerciseStyle_55);
  Instrument_55.insert(ExerciseStyle_55.getString());
  FIX::Factor Factor_55;
  Factor_55.setString("15807568");
  msg.set(Factor_55);
  Instrument_55.insert(Factor_55.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_55(false);
  msg.set(FlexProductEligibilityIndicator_55);
  Instrument_55.insert(FlexProductEligibilityIndicator_55.getString());
  FIX::FlexibleIndicator FlexibleIndicator_55(false);
  msg.set(FlexibleIndicator_55);
  Instrument_55.insert(FlexibleIndicator_55.getString());
  FIX::FloorPrice FloorPrice_55;
  FloorPrice_55.setString("15878928");
  msg.set(FloorPrice_55);
  Instrument_55.insert(FloorPrice_55.getString());
  FIX::FlowScheduleType FlowScheduleType_55(0);
  msg.set(FlowScheduleType_55);
  Instrument_55.insert(FlowScheduleType_55.getString());
  FIX::InstrRegistry InstrRegistry_55("STRING_1345892928");
  msg.set(InstrRegistry_55);
  Instrument_55.insert(InstrRegistry_55.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_55('1');
  msg.set(InstrmtAssignmentMethod_55);
  Instrument_55.insert(InstrmtAssignmentMethod_55.getString());
  FIX::InterestAccrualDate InterestAccrualDate_55("LOCALMKTDATE_1031133499");
  msg.set(InterestAccrualDate_55);
  Instrument_55.insert(InterestAccrualDate_55.getString());
  FIX::IssueDate IssueDate_55("LOCALMKTDATE_486546862");
  msg.set(IssueDate_55);
  Instrument_55.insert(IssueDate_55.getString());
  FIX::Issuer Issuer_55("STRING_1256828822");
  msg.set(Issuer_55);
  Instrument_55.insert(Issuer_55.getString());
  FIX::ListMethod ListMethod_55(1);
  msg.set(ListMethod_55);
  Instrument_55.insert(ListMethod_55.getString());
  FIX::LocaleOfIssue LocaleOfIssue_55("STRING_824501305");
  msg.set(LocaleOfIssue_55);
  Instrument_55.insert(LocaleOfIssue_55.getString());
  FIX::MaturityDate MaturityDate_55("LOCALMKTDATE_598393084");
  msg.set(MaturityDate_55);
  Instrument_55.insert(MaturityDate_55.getString());
  FIX::MaturityMonthYear MaturityMonthYear_55("MONTHYEAR_1916561365");
  msg.set(MaturityMonthYear_55);
  Instrument_55.insert(MaturityMonthYear_55.getString());
  FIX::MaturityTime MaturityTime_55("TZTIMEONLY_1264620726");
  msg.set(MaturityTime_55);
  Instrument_55.insert(MaturityTime_55.getString());
  FIX::MinPriceIncrement MinPriceIncrement_55;
  MinPriceIncrement_55.setString("20297691");
  msg.set(MinPriceIncrement_55);
  Instrument_55.insert(MinPriceIncrement_55.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_55;
  MinPriceIncrementAmount_55.setString("15442388");
  msg.set(MinPriceIncrementAmount_55);
  Instrument_55.insert(MinPriceIncrementAmount_55.getString());
  FIX::NTPositionLimit NTPositionLimit_55(1650132471);
  msg.set(NTPositionLimit_55);
  Instrument_55.insert(NTPositionLimit_55.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_55;
  NotionalPercentageOutstanding_55.setString("2.850000");
  msg.set(NotionalPercentageOutstanding_55);
  Instrument_55.insert(NotionalPercentageOutstanding_55.getString());
  FIX::OptAttribute OptAttribute_55('1');
  msg.set(OptAttribute_55);
  Instrument_55.insert(OptAttribute_55.getString());
  FIX::OptPayoutAmount OptPayoutAmount_55;
  OptPayoutAmount_55.setString("7007437");
  msg.set(OptPayoutAmount_55);
  Instrument_55.insert(OptPayoutAmount_55.getString());
  FIX::OptPayoutType OptPayoutType_55(1);
  msg.set(OptPayoutType_55);
  Instrument_55.insert(OptPayoutType_55.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_55;
  OriginalNotionalPercentageOutstanding_55.setString("91.430000");
  msg.set(OriginalNotionalPercentageOutstanding_55);
  Instrument_55.insert(OriginalNotionalPercentageOutstanding_55.getString());
  FIX::Pool Pool_55("STRING_775340125");
  msg.set(Pool_55);
  Instrument_55.insert(Pool_55.getString());
  FIX::PositionLimit PositionLimit_55(1045297258);
  msg.set(PositionLimit_55);
  Instrument_55.insert(PositionLimit_55.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_55("STRING_INX");
  msg.set(PriceQuoteMethod_55);
  Instrument_55.insert(PriceQuoteMethod_55.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_55("STRING_1366535009");
  msg.set(PriceUnitOfMeasure_55);
  Instrument_55.insert(PriceUnitOfMeasure_55.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_55;
  PriceUnitOfMeasureQty_55.setString("10797936");
  msg.set(PriceUnitOfMeasureQty_55);
  Instrument_55.insert(PriceUnitOfMeasureQty_55.getString());
  FIX::Product Product_57(5);
  msg.set(Product_57);
  Instrument_55.insert(Product_57.getString());
  FIX::ProductComplex ProductComplex_55("STRING_102620635");
  msg.set(ProductComplex_55);
  Instrument_55.insert(ProductComplex_55.getString());
  FIX::PutOrCall PutOrCall_55(1);
  msg.set(PutOrCall_55);
  Instrument_55.insert(PutOrCall_55.getString());
  FIX::RedemptionDate RedemptionDate_55("LOCALMKTDATE_1727542264");
  msg.set(RedemptionDate_55);
  Instrument_55.insert(RedemptionDate_55.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_55("STRING_1736803268");
  msg.set(RepoCollateralSecurityType_55);
  Instrument_55.insert(RepoCollateralSecurityType_55.getString());
  FIX::RepurchaseRate RepurchaseRate_55;
  RepurchaseRate_55.setString("15.400000");
  msg.set(RepurchaseRate_55);
  Instrument_55.insert(RepurchaseRate_55.getString());
  FIX::RepurchaseTerm RepurchaseTerm_55(1167951463);
  msg.set(RepurchaseTerm_55);
  Instrument_55.insert(RepurchaseTerm_55.getString());
  FIX::RestructuringType RestructuringType_55("STRING_XR");
  msg.set(RestructuringType_55);
  Instrument_55.insert(RestructuringType_55.getString());
  FIX::SecurityDesc SecurityDesc_55("STRING_70910821");
  msg.set(SecurityDesc_55);
  Instrument_55.insert(SecurityDesc_55.getString());
  FIX::SecurityExchange SecurityExchange_55("EXCHANGE_121357560");
  msg.set(SecurityExchange_55);
  Instrument_55.insert(SecurityExchange_55.getString());
  FIX::SecurityGroup SecurityGroup_55("STRING_446591466");
  msg.set(SecurityGroup_55);
  Instrument_55.insert(SecurityGroup_55.getString());
  FIX::SecurityID SecurityID_55("STRING_557457683");
  msg.set(SecurityID_55);
  Instrument_55.insert(SecurityID_55.getString());
  FIX::SecurityIDSource SecurityIDSource_55("STRING_D");
  msg.set(SecurityIDSource_55);
  Instrument_55.insert(SecurityIDSource_55.getString());
  FIX::SecurityStatus SecurityStatus_55("STRING_2");
  msg.set(SecurityStatus_55);
  Instrument_55.insert(SecurityStatus_55.getString());
  FIX::SecuritySubType SecuritySubType_56("STRING_1381958988");
  msg.set(SecuritySubType_56);
  Instrument_55.insert(SecuritySubType_56.getString());
  FIX::SecurityType SecurityType_57("STRING_DEFLTED");
  msg.set(SecurityType_57);
  Instrument_55.insert(SecurityType_57.getString());
  FIX::Seniority Seniority_55("STRING_SB");
  msg.set(Seniority_55);
  Instrument_55.insert(Seniority_55.getString());
  FIX::SettlMethod SettlMethod_55('C');
  msg.set(SettlMethod_55);
  Instrument_55.insert(SettlMethod_55.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_55("STRING_1858864992");
  msg.set(SettleOnOpenFlag_55);
  Instrument_55.insert(SettleOnOpenFlag_55.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_55("STRING_260577426");
  msg.set(StateOrProvinceOfIssue_55);
  Instrument_55.insert(StateOrProvinceOfIssue_55.getString());
  FIX::StrikeCurrency StrikeCurrency_55("EUR");
  msg.set(StrikeCurrency_55);
  Instrument_55.insert(StrikeCurrency_55.getString());
  FIX::StrikeMultiplier StrikeMultiplier_55;
  StrikeMultiplier_55.setString("13345680");
  msg.set(StrikeMultiplier_55);
  Instrument_55.insert(StrikeMultiplier_55.getString());
  FIX::StrikePrice StrikePrice_55;
  StrikePrice_55.setString("7024886");
  msg.set(StrikePrice_55);
  Instrument_55.insert(StrikePrice_55.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_55(2);
  msg.set(StrikePriceBoundaryMethod_55);
  Instrument_55.insert(StrikePriceBoundaryMethod_55.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_55;
  StrikePriceBoundaryPrecision_55.setString("72.350000");
  msg.set(StrikePriceBoundaryPrecision_55);
  Instrument_55.insert(StrikePriceBoundaryPrecision_55.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_55(3);
  msg.set(StrikePriceDeterminationMethod_55);
  Instrument_55.insert(StrikePriceDeterminationMethod_55.getString());
  FIX::StrikeValue StrikeValue_55;
  StrikeValue_55.setString("13050906");
  msg.set(StrikeValue_55);
  Instrument_55.insert(StrikeValue_55.getString());
  FIX::Symbol Symbol_55("STRING_1386871881");
  msg.set(Symbol_55);
  Instrument_55.insert(Symbol_55.getString());
  FIX::SymbolSfx SymbolSfx_55("STRING_WI");
  msg.set(SymbolSfx_55);
  Instrument_55.insert(SymbolSfx_55.getString());
  FIX::TimeUnit TimeUnit_55("STRING_H");
  msg.set(TimeUnit_55);
  Instrument_55.insert(TimeUnit_55.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_55(2);
  msg.set(UnderlyingPriceDeterminationMethod_55);
  Instrument_55.insert(UnderlyingPriceDeterminationMethod_55.getString());
  FIX::UnitOfMeasure UnitOfMeasure_55("STRING_MMbbl");
  msg.set(UnitOfMeasure_55);
  Instrument_55.insert(UnitOfMeasure_55.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_55;
  UnitOfMeasureQty_55.setString("8304279");
  msg.set(UnitOfMeasureQty_55);
  Instrument_55.insert(UnitOfMeasureQty_55.getString());
  FIX::ValuationMethod ValuationMethod_55("STRING_CDS");
  msg.set(ValuationMethod_55);
  Instrument_55.insert(ValuationMethod_55.getString());
  all_values.push_back(Instrument_55);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_106;
    FIX::ComplexEventCondition ComplexEventCondition_106(2);
    noComplexEvents_0_0.set(ComplexEventCondition_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventCondition_106.getString());
    FIX::ComplexEventPrice ComplexEventPrice_106;
    ComplexEventPrice_106.setString("1341837");
    noComplexEvents_0_0.set(ComplexEventPrice_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPrice_106.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_106(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPriceBoundaryMethod_106.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_106;
    ComplexEventPriceBoundaryPrecision_106.setString("2.980000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPriceBoundaryPrecision_106.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_106(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPriceTimeType_106.getString());
    FIX::ComplexEventType ComplexEventType_106(5);
    noComplexEvents_0_0.set(ComplexEventType_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventType_106.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_106;
    ComplexOptPayoutAmount_106.setString("1838143");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexOptPayoutAmount_106.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_106);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_220;
      FIX::ComplexEventEndDate ComplexEventEndDate_220(FIX::UTCTIMESTAMP(1, 9, 11, 7, 2, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_220);
      ComplexEventDates_NoComplexEventDates_220.insert(ComplexEventEndDate_220.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_220(FIX::UTCTIMESTAMP(2, 49, 40, 24, 6, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_220);
      ComplexEventDates_NoComplexEventDates_220.insert(ComplexEventStartDate_220.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_220);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_443;
        FIX::ComplexEventEndTime ComplexEventEndTime_443(FIX::UTCTIMEONLY(2, 21, 7));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_443);
        ComplexEventTimes_NoComplexEventTimes_443.insert(ComplexEventEndTime_443.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_443(FIX::UTCTIMEONLY(14, 32, 19));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_443);
        ComplexEventTimes_NoComplexEventTimes_443.insert(ComplexEventStartTime_443.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_443);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_444;
        FIX::ComplexEventEndTime ComplexEventEndTime_444(FIX::UTCTIMEONLY(4, 20, 37));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_444);
        ComplexEventTimes_NoComplexEventTimes_444.insert(ComplexEventEndTime_444.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_444(FIX::UTCTIMEONLY(16, 50, 52));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_444);
        ComplexEventTimes_NoComplexEventTimes_444.insert(ComplexEventStartTime_444.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_444);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_445;
        FIX::ComplexEventEndTime ComplexEventEndTime_445(FIX::UTCTIMEONLY(19, 53, 6));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_445);
        ComplexEventTimes_NoComplexEventTimes_445.insert(ComplexEventEndTime_445.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_445(FIX::UTCTIMEONLY(7, 24, 30));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_445);
        ComplexEventTimes_NoComplexEventTimes_445.insert(ComplexEventStartTime_445.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_445);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_221;
      FIX::ComplexEventEndDate ComplexEventEndDate_221(FIX::UTCTIMESTAMP(5, 10, 22, 26, 6, 2016));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_221);
      ComplexEventDates_NoComplexEventDates_221.insert(ComplexEventEndDate_221.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_221(FIX::UTCTIMESTAMP(11, 20, 43, 27, 3, 2003));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_221);
      ComplexEventDates_NoComplexEventDates_221.insert(ComplexEventStartDate_221.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_221);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_446;
        FIX::ComplexEventEndTime ComplexEventEndTime_446(FIX::UTCTIMEONLY(0, 51, 18));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_446);
        ComplexEventTimes_NoComplexEventTimes_446.insert(ComplexEventEndTime_446.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_446(FIX::UTCTIMEONLY(11, 0, 21));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_446);
        ComplexEventTimes_NoComplexEventTimes_446.insert(ComplexEventStartTime_446.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_446);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_447;
        FIX::ComplexEventEndTime ComplexEventEndTime_447(FIX::UTCTIMEONLY(11, 14, 4));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_447);
        ComplexEventTimes_NoComplexEventTimes_447.insert(ComplexEventEndTime_447.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_447(FIX::UTCTIMEONLY(13, 28, 19));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_447);
        ComplexEventTimes_NoComplexEventTimes_447.insert(ComplexEventStartTime_447.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_447);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_448;
        FIX::ComplexEventEndTime ComplexEventEndTime_448(FIX::UTCTIMEONLY(14, 21, 29));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_448);
        ComplexEventTimes_NoComplexEventTimes_448.insert(ComplexEventEndTime_448.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_448(FIX::UTCTIMEONLY(2, 27, 25));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_448);
        ComplexEventTimes_NoComplexEventTimes_448.insert(ComplexEventStartTime_448.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_448);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_222;
      FIX::ComplexEventEndDate ComplexEventEndDate_222(FIX::UTCTIMESTAMP(3, 0, 45, 25, 9, 2009));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_222);
      ComplexEventDates_NoComplexEventDates_222.insert(ComplexEventEndDate_222.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_222(FIX::UTCTIMESTAMP(8, 6, 32, 25, 6, 2006));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_222);
      ComplexEventDates_NoComplexEventDates_222.insert(ComplexEventStartDate_222.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_222);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_449;
        FIX::ComplexEventEndTime ComplexEventEndTime_449(FIX::UTCTIMEONLY(11, 52, 20));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_449);
        ComplexEventTimes_NoComplexEventTimes_449.insert(ComplexEventEndTime_449.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_449(FIX::UTCTIMEONLY(10, 40, 7));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_449);
        ComplexEventTimes_NoComplexEventTimes_449.insert(ComplexEventStartTime_449.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_449);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_450;
        FIX::ComplexEventEndTime ComplexEventEndTime_450(FIX::UTCTIMEONLY(22, 29, 34));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_450);
        ComplexEventTimes_NoComplexEventTimes_450.insert(ComplexEventEndTime_450.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_450(FIX::UTCTIMEONLY(11, 53, 56));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_450);
        ComplexEventTimes_NoComplexEventTimes_450.insert(ComplexEventStartTime_450.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_450);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_451;
        FIX::ComplexEventEndTime ComplexEventEndTime_451(FIX::UTCTIMEONLY(9, 56, 26));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_451);
        ComplexEventTimes_NoComplexEventTimes_451.insert(ComplexEventEndTime_451.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_451(FIX::UTCTIMEONLY(4, 41, 21));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_451);
        ComplexEventTimes_NoComplexEventTimes_451.insert(ComplexEventStartTime_451.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_451);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_107;
    FIX::ComplexEventCondition ComplexEventCondition_107(1);
    noComplexEvents_0_1.set(ComplexEventCondition_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventCondition_107.getString());
    FIX::ComplexEventPrice ComplexEventPrice_107;
    ComplexEventPrice_107.setString("7336637");
    noComplexEvents_0_1.set(ComplexEventPrice_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventPrice_107.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_107(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventPriceBoundaryMethod_107.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_107;
    ComplexEventPriceBoundaryPrecision_107.setString("42.370000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventPriceBoundaryPrecision_107.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_107(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventPriceTimeType_107.getString());
    FIX::ComplexEventType ComplexEventType_107(8);
    noComplexEvents_0_1.set(ComplexEventType_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventType_107.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_107;
    ComplexOptPayoutAmount_107.setString("16363750");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexOptPayoutAmount_107.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_107);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_223;
      FIX::ComplexEventEndDate ComplexEventEndDate_223(FIX::UTCTIMESTAMP(16, 17, 50, 18, 2, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_223);
      ComplexEventDates_NoComplexEventDates_223.insert(ComplexEventEndDate_223.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_223(FIX::UTCTIMESTAMP(0, 18, 17, 19, 11, 2014));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_223);
      ComplexEventDates_NoComplexEventDates_223.insert(ComplexEventStartDate_223.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_223);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_452;
        FIX::ComplexEventEndTime ComplexEventEndTime_452(FIX::UTCTIMEONLY(3, 3, 41));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_452);
        ComplexEventTimes_NoComplexEventTimes_452.insert(ComplexEventEndTime_452.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_452(FIX::UTCTIMEONLY(8, 14, 47));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_452);
        ComplexEventTimes_NoComplexEventTimes_452.insert(ComplexEventStartTime_452.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_452);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_224;
      FIX::ComplexEventEndDate ComplexEventEndDate_224(FIX::UTCTIMESTAMP(22, 24, 10, 12, 3, 2003));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_224);
      ComplexEventDates_NoComplexEventDates_224.insert(ComplexEventEndDate_224.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_224(FIX::UTCTIMESTAMP(16, 37, 50, 10, 8, 2015));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_224);
      ComplexEventDates_NoComplexEventDates_224.insert(ComplexEventStartDate_224.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_224);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_453;
        FIX::ComplexEventEndTime ComplexEventEndTime_453(FIX::UTCTIMEONLY(15, 10, 59));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_453);
        ComplexEventTimes_NoComplexEventTimes_453.insert(ComplexEventEndTime_453.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_453(FIX::UTCTIMEONLY(20, 54, 1));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_453);
        ComplexEventTimes_NoComplexEventTimes_453.insert(ComplexEventStartTime_453.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_453);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_454;
        FIX::ComplexEventEndTime ComplexEventEndTime_454(FIX::UTCTIMEONLY(21, 5, 32));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_454);
        ComplexEventTimes_NoComplexEventTimes_454.insert(ComplexEventEndTime_454.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_454(FIX::UTCTIMEONLY(17, 38, 26));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_454);
        ComplexEventTimes_NoComplexEventTimes_454.insert(ComplexEventStartTime_454.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_454);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_455;
        FIX::ComplexEventEndTime ComplexEventEndTime_455(FIX::UTCTIMEONLY(13, 51, 59));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_455);
        ComplexEventTimes_NoComplexEventTimes_455.insert(ComplexEventEndTime_455.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_455(FIX::UTCTIMEONLY(5, 57, 34));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_455);
        ComplexEventTimes_NoComplexEventTimes_455.insert(ComplexEventStartTime_455.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_455);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_225;
      FIX::ComplexEventEndDate ComplexEventEndDate_225(FIX::UTCTIMESTAMP(2, 16, 47, 26, 8, 2015));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_225);
      ComplexEventDates_NoComplexEventDates_225.insert(ComplexEventEndDate_225.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_225(FIX::UTCTIMESTAMP(11, 49, 0, 13, 2, 2000));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_225);
      ComplexEventDates_NoComplexEventDates_225.insert(ComplexEventStartDate_225.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_225);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_456;
        FIX::ComplexEventEndTime ComplexEventEndTime_456(FIX::UTCTIMEONLY(3, 0, 40));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_456);
        ComplexEventTimes_NoComplexEventTimes_456.insert(ComplexEventEndTime_456.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_456(FIX::UTCTIMEONLY(17, 10, 29));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_456);
        ComplexEventTimes_NoComplexEventTimes_456.insert(ComplexEventStartTime_456.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_456);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderCancelRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_108;
    FIX::ComplexEventCondition ComplexEventCondition_108(1);
    noComplexEvents_0_2.set(ComplexEventCondition_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventCondition_108.getString());
    FIX::ComplexEventPrice ComplexEventPrice_108;
    ComplexEventPrice_108.setString("8378697");
    noComplexEvents_0_2.set(ComplexEventPrice_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventPrice_108.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_108(3);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventPriceBoundaryMethod_108.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_108;
    ComplexEventPriceBoundaryPrecision_108.setString("87.740000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventPriceBoundaryPrecision_108.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_108(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventPriceTimeType_108.getString());
    FIX::ComplexEventType ComplexEventType_108(1);
    noComplexEvents_0_2.set(ComplexEventType_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventType_108.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_108;
    ComplexOptPayoutAmount_108.setString("15353251");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexOptPayoutAmount_108.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_108);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_226;
      FIX::ComplexEventEndDate ComplexEventEndDate_226(FIX::UTCTIMESTAMP(13, 2, 47, 7, 11, 2002));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_226);
      ComplexEventDates_NoComplexEventDates_226.insert(ComplexEventEndDate_226.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_226(FIX::UTCTIMESTAMP(1, 7, 28, 6, 1, 2010));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_226);
      ComplexEventDates_NoComplexEventDates_226.insert(ComplexEventStartDate_226.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_226);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_457;
        FIX::ComplexEventEndTime ComplexEventEndTime_457(FIX::UTCTIMEONLY(17, 9, 12));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_457);
        ComplexEventTimes_NoComplexEventTimes_457.insert(ComplexEventEndTime_457.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_457(FIX::UTCTIMEONLY(18, 22, 54));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_457);
        ComplexEventTimes_NoComplexEventTimes_457.insert(ComplexEventStartTime_457.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_457);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_227;
      FIX::ComplexEventEndDate ComplexEventEndDate_227(FIX::UTCTIMESTAMP(18, 6, 47, 14, 5, 2010));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_227);
      ComplexEventDates_NoComplexEventDates_227.insert(ComplexEventEndDate_227.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_227(FIX::UTCTIMESTAMP(4, 23, 35, 27, 8, 2007));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_227);
      ComplexEventDates_NoComplexEventDates_227.insert(ComplexEventStartDate_227.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_227);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_458;
        FIX::ComplexEventEndTime ComplexEventEndTime_458(FIX::UTCTIMEONLY(2, 40, 31));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_458);
        ComplexEventTimes_NoComplexEventTimes_458.insert(ComplexEventEndTime_458.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_458(FIX::UTCTIMEONLY(20, 45, 54));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_458);
        ComplexEventTimes_NoComplexEventTimes_458.insert(ComplexEventStartTime_458.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_458);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_113;
    FIX::EventDate EventDate_113("LOCALMKTDATE_380614394");
    noEvents_0_0.set(EventDate_113);
    EvntGrp_NoEvents_113.insert(EventDate_113.getString());
    FIX::EventPx EventPx_113;
    EventPx_113.setString("18378867");
    noEvents_0_0.set(EventPx_113);
    EvntGrp_NoEvents_113.insert(EventPx_113.getString());
    FIX::EventText EventText_113("STRING_945324880");
    noEvents_0_0.set(EventText_113);
    EvntGrp_NoEvents_113.insert(EventText_113.getString());
    FIX::EventTime EventTime_113(FIX::UTCTIMESTAMP(2, 54, 33, 15, 1, 2013));
    noEvents_0_0.set(EventTime_113);
    EvntGrp_NoEvents_113.insert(EventTime_113.getString());
    FIX::EventType EventType_113(3);
    noEvents_0_0.set(EventType_113);
    EvntGrp_NoEvents_113.insert(EventType_113.getString());
    all_values.push_back(EvntGrp_NoEvents_113);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_117;
    FIX::InstrumentPartyID InstrumentPartyID_117("STRING_1184521560");
    noInstrumentParties_0_0.set(InstrumentPartyID_117);
    InstrumentParties_NoInstrumentParties_117.insert(InstrumentPartyID_117.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_117('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_117);
    InstrumentParties_NoInstrumentParties_117.insert(InstrumentPartyIDSource_117.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_117(347829064);
    noInstrumentParties_0_0.set(InstrumentPartyRole_117);
    InstrumentParties_NoInstrumentParties_117.insert(InstrumentPartyRole_117.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_117);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246;
      FIX::InstrumentPartySubID InstrumentPartySubID_246("STRING_1143875660");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_246);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246.insert(InstrumentPartySubID_246.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_246(766307619);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_246);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246.insert(InstrumentPartySubIDType_246.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247;
      FIX::InstrumentPartySubID InstrumentPartySubID_247("STRING_90509795");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_247);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247.insert(InstrumentPartySubID_247.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_247(610661755);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_247);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247.insert(InstrumentPartySubIDType_247.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_118;
    FIX::InstrumentPartyID InstrumentPartyID_118("STRING_1139610725");
    noInstrumentParties_0_1.set(InstrumentPartyID_118);
    InstrumentParties_NoInstrumentParties_118.insert(InstrumentPartyID_118.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_118('4');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_118);
    InstrumentParties_NoInstrumentParties_118.insert(InstrumentPartyIDSource_118.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_118(516627598);
    noInstrumentParties_0_1.set(InstrumentPartyRole_118);
    InstrumentParties_NoInstrumentParties_118.insert(InstrumentPartyRole_118.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_118);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248;
      FIX::InstrumentPartySubID InstrumentPartySubID_248("STRING_2111068128");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_248);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248.insert(InstrumentPartySubID_248.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_248(1289854889);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_248);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248.insert(InstrumentPartySubIDType_248.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249;
      FIX::InstrumentPartySubID InstrumentPartySubID_249("STRING_1558980620");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_249);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249.insert(InstrumentPartySubID_249.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_249(28908516);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_249);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249.insert(InstrumentPartySubIDType_249.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250;
      FIX::InstrumentPartySubID InstrumentPartySubID_250("STRING_1350572834");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_250);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250.insert(InstrumentPartySubID_250.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_250(435668107);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_250);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250.insert(InstrumentPartySubIDType_250.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_124;
    FIX::SecurityAltID SecurityAltID_124("STRING_1731187228");
    noSecurityAltID_0_0.set(SecurityAltID_124);
    SecAltIDGrp_NoSecurityAltID_124.insert(SecurityAltID_124.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_124("STRING_126071163");
    noSecurityAltID_0_0.set(SecurityAltIDSource_124);
    SecAltIDGrp_NoSecurityAltID_124.insert(SecurityAltIDSource_124.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_124);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_110;
  FIX::SecurityXML SecurityXML_111("XMLDATA_804064844");
  msg.set(SecurityXML_111);
  FIX::SecurityXMLLen SecurityXMLLen_55(1805650687);
  msg.set(SecurityXMLLen_55);
  FIX::SecurityXMLSchema SecurityXMLSchema_55("STRING_336388805");
  msg.set(SecurityXMLSchema_55);
  SecurityXML_110.insert(SecurityXMLSchema_55.getString());
  all_values.push_back(SecurityXML_110);

  // OrderQtyData
  multiset<string> OrderQtyData_15;
  FIX::CashOrderQty CashOrderQty_15;
  CashOrderQty_15.setString("16443476");
  msg.set(CashOrderQty_15);
  OrderQtyData_15.insert(CashOrderQty_15.getString());
  FIX::OrderPercent OrderPercent_15;
  OrderPercent_15.setString("96.320000");
  msg.set(OrderPercent_15);
  OrderQtyData_15.insert(OrderPercent_15.getString());
  FIX::OrderQty OrderQty_26;
  OrderQty_26.setString("21050715");
  msg.set(OrderQty_26);
  OrderQtyData_15.insert(OrderQty_26.getString());
  FIX::RoundingDirection RoundingDirection_15('1');
  msg.set(RoundingDirection_15);
  OrderQtyData_15.insert(RoundingDirection_15.getString());
  FIX::RoundingModulus RoundingModulus_15;
  RoundingModulus_15.setString("16194734");
  msg.set(RoundingModulus_15);
  OrderQtyData_15.insert(RoundingModulus_15.getString());
  all_values.push_back(OrderQtyData_15);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_76;
    FIX::PartyID PartyID_76("STRING_336753690");
    noPartyIDs_0_0.set(PartyID_76);
    Parties_NoPartyIDs_76.insert(PartyID_76.getString());
    FIX::PartyIDSource PartyIDSource_76('8');
    noPartyIDs_0_0.set(PartyIDSource_76);
    Parties_NoPartyIDs_76.insert(PartyIDSource_76.getString());
    FIX::PartyRole PartyRole_76(78);
    noPartyIDs_0_0.set(PartyRole_76);
    Parties_NoPartyIDs_76.insert(PartyRole_76.getString());
    all_values.push_back(Parties_NoPartyIDs_76);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_157;
      FIX::PartySubID PartySubID_157("STRING_1948688544");
      noPartySubIDs_0_1_0.set(PartySubID_157);
      PtysSubGrp_NoPartySubIDs_157.insert(PartySubID_157.getString());
      FIX::PartySubIDType PartySubIDType_157(22);
      noPartySubIDs_0_1_0.set(PartySubIDType_157);
      PtysSubGrp_NoPartySubIDs_157.insert(PartySubIDType_157.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_157);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_158;
      FIX::PartySubID PartySubID_158("STRING_1450890373");
      noPartySubIDs_0_1_1.set(PartySubID_158);
      PtysSubGrp_NoPartySubIDs_158.insert(PartySubID_158.getString());
      FIX::PartySubIDType PartySubIDType_158(3);
      noPartySubIDs_0_1_1.set(PartySubIDType_158);
      PtysSubGrp_NoPartySubIDs_158.insert(PartySubIDType_158.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_158);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_77;
    FIX::PartyID PartyID_77("STRING_1883112175");
    noPartyIDs_0_1.set(PartyID_77);
    Parties_NoPartyIDs_77.insert(PartyID_77.getString());
    FIX::PartyIDSource PartyIDSource_77('I');
    noPartyIDs_0_1.set(PartyIDSource_77);
    Parties_NoPartyIDs_77.insert(PartyIDSource_77.getString());
    FIX::PartyRole PartyRole_77(61);
    noPartyIDs_0_1.set(PartyRole_77);
    Parties_NoPartyIDs_77.insert(PartyRole_77.getString());
    all_values.push_back(Parties_NoPartyIDs_77);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_159;
      FIX::PartySubID PartySubID_159("STRING_1194255226");
      noPartySubIDs_1_1_0.set(PartySubID_159);
      PtysSubGrp_NoPartySubIDs_159.insert(PartySubID_159.getString());
      FIX::PartySubIDType PartySubIDType_159(13);
      noPartySubIDs_1_1_0.set(PartySubIDType_159);
      PtysSubGrp_NoPartySubIDs_159.insert(PartySubIDType_159.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_159);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderCancelRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_74;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_74("DATA_605752198");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_74);
    UnderlyingInstrument_74.insert(EncodedUnderlyingIssuer_74.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_74(318139635);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_74);
    UnderlyingInstrument_74.insert(EncodedUnderlyingIssuerLen_74.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_74("DATA_745200200");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_74);
    UnderlyingInstrument_74.insert(EncodedUnderlyingSecurityDesc_74.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_74(1041420305);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_74);
    UnderlyingInstrument_74.insert(EncodedUnderlyingSecurityDescLen_74.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_74;
    UnderlyingAdjustedQuantity_74.setString("1768795");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_74);
    UnderlyingInstrument_74.insert(UnderlyingAdjustedQuantity_74.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_74;
    UnderlyingAllocationPercent_74.setString("37.800000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_74);
    UnderlyingInstrument_74.insert(UnderlyingAllocationPercent_74.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_74;
    UnderlyingAttachmentPoint_74.setString("14.680000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_74);
    UnderlyingInstrument_74.insert(UnderlyingAttachmentPoint_74.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_74("STRING_980944443");
    noUnderlyings_0_0.set(UnderlyingCFICode_74);
    UnderlyingInstrument_74.insert(UnderlyingCFICode_74.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_74("STRING_2134554468");
    noUnderlyings_0_0.set(UnderlyingCPProgram_74);
    UnderlyingInstrument_74.insert(UnderlyingCPProgram_74.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_74("STRING_1503880274");
    noUnderlyings_0_0.set(UnderlyingCPRegType_74);
    UnderlyingInstrument_74.insert(UnderlyingCPRegType_74.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_74;
    UnderlyingCapValue_74.setString("4778084");
    noUnderlyings_0_0.set(UnderlyingCapValue_74);
    UnderlyingInstrument_74.insert(UnderlyingCapValue_74.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_74;
    UnderlyingCashAmount_74.setString("9890504");
    noUnderlyings_0_0.set(UnderlyingCashAmount_74);
    UnderlyingInstrument_74.insert(UnderlyingCashAmount_74.getString());
    FIX::UnderlyingCashType UnderlyingCashType_74("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_74);
    UnderlyingInstrument_74.insert(UnderlyingCashType_74.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_74;
    UnderlyingContractMultiplier_74.setString("15477830");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_74);
    UnderlyingInstrument_74.insert(UnderlyingContractMultiplier_74.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_74(461040248);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_74);
    UnderlyingInstrument_74.insert(UnderlyingContractMultiplierUnit_74.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_74("COUNTRY_122181830");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_74);
    UnderlyingInstrument_74.insert(UnderlyingCountryOfIssue_74.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_74("LOCALMKTDATE_1884536710");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_74);
    UnderlyingInstrument_74.insert(UnderlyingCouponPaymentDate_74.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_74;
    UnderlyingCouponRate_74.setString("16.040000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_74);
    UnderlyingInstrument_74.insert(UnderlyingCouponRate_74.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_74("STRING_250756590");
    noUnderlyings_0_0.set(UnderlyingCreditRating_74);
    UnderlyingInstrument_74.insert(UnderlyingCreditRating_74.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_74("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_74);
    UnderlyingInstrument_74.insert(UnderlyingCurrency_74.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_74;
    UnderlyingCurrentValue_74.setString("15232070");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_74);
    UnderlyingInstrument_74.insert(UnderlyingCurrentValue_74.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_74;
    UnderlyingDetachmentPoint_74.setString("61.900000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_74);
    UnderlyingInstrument_74.insert(UnderlyingDetachmentPoint_74.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_74;
    UnderlyingDirtyPrice_74.setString("8104711");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_74);
    UnderlyingInstrument_74.insert(UnderlyingDirtyPrice_74.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_74;
    UnderlyingEndPrice_74.setString("12588355");
    noUnderlyings_0_0.set(UnderlyingEndPrice_74);
    UnderlyingInstrument_74.insert(UnderlyingEndPrice_74.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_74;
    UnderlyingEndValue_74.setString("1680599");
    noUnderlyings_0_0.set(UnderlyingEndValue_74);
    UnderlyingInstrument_74.insert(UnderlyingEndValue_74.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_74(1136117830);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_74);
    UnderlyingInstrument_74.insert(UnderlyingExerciseStyle_74.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_74;
    UnderlyingFXRate_74.setString("15110916");
    noUnderlyings_0_0.set(UnderlyingFXRate_74);
    UnderlyingInstrument_74.insert(UnderlyingFXRate_74.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_74('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_74);
    UnderlyingInstrument_74.insert(UnderlyingFXRateCalc_74.getString());
    FIX::UnderlyingFactor UnderlyingFactor_74;
    UnderlyingFactor_74.setString("14253489");
    noUnderlyings_0_0.set(UnderlyingFactor_74);
    UnderlyingInstrument_74.insert(UnderlyingFactor_74.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_74(905719028);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_74);
    UnderlyingInstrument_74.insert(UnderlyingFlowScheduleType_74.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_74("STRING_1968067417");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_74);
    UnderlyingInstrument_74.insert(UnderlyingInstrRegistry_74.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_74("LOCALMKTDATE_1743488584");
    noUnderlyings_0_0.set(UnderlyingIssueDate_74);
    UnderlyingInstrument_74.insert(UnderlyingIssueDate_74.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_74("STRING_1650919228");
    noUnderlyings_0_0.set(UnderlyingIssuer_74);
    UnderlyingInstrument_74.insert(UnderlyingIssuer_74.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_74("STRING_862004074");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_74);
    UnderlyingInstrument_74.insert(UnderlyingLocaleOfIssue_74.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_74("LOCALMKTDATE_1920368183");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_74);
    UnderlyingInstrument_74.insert(UnderlyingMaturityDate_74.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_74("MONTHYEAR_1979823009");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_74);
    UnderlyingInstrument_74.insert(UnderlyingMaturityMonthYear_74.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_74("TZTIMEONLY_2029495543");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_74);
    UnderlyingInstrument_74.insert(UnderlyingMaturityTime_74.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_74;
    UnderlyingNotionalPercentageOutstanding_74.setString("89.780000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_74);
    UnderlyingInstrument_74.insert(UnderlyingNotionalPercentageOutstanding_74.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_74('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_74);
    UnderlyingInstrument_74.insert(UnderlyingOptAttribute_74.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_74;
    UnderlyingOriginalNotionalPercentageOutstanding_74.setString("21.690000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_74);
    UnderlyingInstrument_74.insert(UnderlyingOriginalNotionalPercentageOutstanding_74.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_74("STRING_1231637452");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_74);
    UnderlyingInstrument_74.insert(UnderlyingPriceUnitOfMeasure_74.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_74;
    UnderlyingPriceUnitOfMeasureQty_74.setString("8084606");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_74);
    UnderlyingInstrument_74.insert(UnderlyingPriceUnitOfMeasureQty_74.getString());
    FIX::UnderlyingProduct UnderlyingProduct_74(699876716);
    noUnderlyings_0_0.set(UnderlyingProduct_74);
    UnderlyingInstrument_74.insert(UnderlyingProduct_74.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_74(631936824);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_74);
    UnderlyingInstrument_74.insert(UnderlyingPutOrCall_74.getString());
    FIX::UnderlyingPx UnderlyingPx_74;
    UnderlyingPx_74.setString("12695008");
    noUnderlyings_0_0.set(UnderlyingPx_74);
    UnderlyingInstrument_74.insert(UnderlyingPx_74.getString());
    FIX::UnderlyingQty UnderlyingQty_74;
    UnderlyingQty_74.setString("8220585");
    noUnderlyings_0_0.set(UnderlyingQty_74);
    UnderlyingInstrument_74.insert(UnderlyingQty_74.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_74("LOCALMKTDATE_368989887");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_74);
    UnderlyingInstrument_74.insert(UnderlyingRedemptionDate_74.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_74("STRING_239568838");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_74);
    UnderlyingInstrument_74.insert(UnderlyingRepoCollateralSecurityType_74.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_74;
    UnderlyingRepurchaseRate_74.setString("51.370000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_74);
    UnderlyingInstrument_74.insert(UnderlyingRepurchaseRate_74.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_74(790625703);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_74);
    UnderlyingInstrument_74.insert(UnderlyingRepurchaseTerm_74.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_74("STRING_1158325339");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_74);
    UnderlyingInstrument_74.insert(UnderlyingRestructuringType_74.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_74("STRING_448538499");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_74);
    UnderlyingInstrument_74.insert(UnderlyingSecurityDesc_74.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_74("EXCHANGE_515668245");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_74);
    UnderlyingInstrument_74.insert(UnderlyingSecurityExchange_74.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_74("STRING_1968796530");
    noUnderlyings_0_0.set(UnderlyingSecurityID_74);
    UnderlyingInstrument_74.insert(UnderlyingSecurityID_74.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_74("STRING_1707374037");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_74);
    UnderlyingInstrument_74.insert(UnderlyingSecurityIDSource_74.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_74("STRING_683728238");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_74);
    UnderlyingInstrument_74.insert(UnderlyingSecuritySubType_74.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_74("STRING_957430713");
    noUnderlyings_0_0.set(UnderlyingSecurityType_74);
    UnderlyingInstrument_74.insert(UnderlyingSecurityType_74.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_74("STRING_1070982051");
    noUnderlyings_0_0.set(UnderlyingSeniority_74);
    UnderlyingInstrument_74.insert(UnderlyingSeniority_74.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_74("STRING_2046043456");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_74);
    UnderlyingInstrument_74.insert(UnderlyingSettlMethod_74.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_74(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_74);
    UnderlyingInstrument_74.insert(UnderlyingSettlementType_74.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_74;
    UnderlyingStartValue_74.setString("19767010");
    noUnderlyings_0_0.set(UnderlyingStartValue_74);
    UnderlyingInstrument_74.insert(UnderlyingStartValue_74.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_74("STRING_1866627225");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_74);
    UnderlyingInstrument_74.insert(UnderlyingStateOrProvinceOfIssue_74.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_74("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_74);
    UnderlyingInstrument_74.insert(UnderlyingStrikeCurrency_74.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_74;
    UnderlyingStrikePrice_74.setString("5811476");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_74);
    UnderlyingInstrument_74.insert(UnderlyingStrikePrice_74.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_74("STRING_1751669134");
    noUnderlyings_0_0.set(UnderlyingSymbol_74);
    UnderlyingInstrument_74.insert(UnderlyingSymbol_74.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_74("STRING_1312476021");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_74);
    UnderlyingInstrument_74.insert(UnderlyingSymbolSfx_74.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_74("STRING_463159547");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_74);
    UnderlyingInstrument_74.insert(UnderlyingTimeUnit_74.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_74("STRING_358014465");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_74);
    UnderlyingInstrument_74.insert(UnderlyingUnitOfMeasure_74.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_74;
    UnderlyingUnitOfMeasureQty_74.setString("11318862");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_74);
    UnderlyingInstrument_74.insert(UnderlyingUnitOfMeasureQty_74.getString());
    all_values.push_back(UnderlyingInstrument_74);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_144;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_144("STRING_1589651917");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_144);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_144.insert(UnderlyingSecurityAltID_144.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_144("STRING_1940346836");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_144);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_144.insert(UnderlyingSecurityAltIDSource_144.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_144);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_132;
      FIX::UnderlyingStipType UnderlyingStipType_132("STRING_74105093");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_132);
      UnderlyingStipulations_NoUnderlyingStips_132.insert(UnderlyingStipType_132.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_132("STRING_1062364070");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_132);
      UnderlyingStipulations_NoUnderlyingStips_132.insert(UnderlyingStipValue_132.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_132);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_161;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_161("STRING_443094980");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_161);
      UndlyInstrumentParties_NoUndlyInstrumentParties_161.insert(UnderlyingInstrumentPartyID_161.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_161('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_161);
      UndlyInstrumentParties_NoUndlyInstrumentParties_161.insert(UnderlyingInstrumentPartyIDSource_161.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_161(148834819);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_161);
      UndlyInstrumentParties_NoUndlyInstrumentParties_161.insert(UnderlyingInstrumentPartyRole_161.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_161);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_316("STRING_312774599");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_316);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316.insert(UnderlyingInstrumentPartySubID_316.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_316(597373319);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_316);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316.insert(UnderlyingInstrumentPartySubIDType_316.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_162;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_162("STRING_1749388929");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_162);
      UndlyInstrumentParties_NoUndlyInstrumentParties_162.insert(UnderlyingInstrumentPartyID_162.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_162('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_162);
      UndlyInstrumentParties_NoUndlyInstrumentParties_162.insert(UnderlyingInstrumentPartyIDSource_162.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_162(157263708);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_162);
      UndlyInstrumentParties_NoUndlyInstrumentParties_162.insert(UnderlyingInstrumentPartyRole_162.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_162);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_317("STRING_1091518195");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_317);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317.insert(UnderlyingInstrumentPartySubID_317.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_317(1228245759);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_317);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317.insert(UnderlyingInstrumentPartySubIDType_317.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_75;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_75("DATA_184193328");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_75);
    UnderlyingInstrument_75.insert(EncodedUnderlyingIssuer_75.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_75(1326814209);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_75);
    UnderlyingInstrument_75.insert(EncodedUnderlyingIssuerLen_75.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_75("DATA_1057463191");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_75);
    UnderlyingInstrument_75.insert(EncodedUnderlyingSecurityDesc_75.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_75(2050820553);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_75);
    UnderlyingInstrument_75.insert(EncodedUnderlyingSecurityDescLen_75.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_75;
    UnderlyingAdjustedQuantity_75.setString("11581151");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_75);
    UnderlyingInstrument_75.insert(UnderlyingAdjustedQuantity_75.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_75;
    UnderlyingAllocationPercent_75.setString("62.040000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_75);
    UnderlyingInstrument_75.insert(UnderlyingAllocationPercent_75.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_75;
    UnderlyingAttachmentPoint_75.setString("45.570000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_75);
    UnderlyingInstrument_75.insert(UnderlyingAttachmentPoint_75.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_75("STRING_762300647");
    noUnderlyings_0_1.set(UnderlyingCFICode_75);
    UnderlyingInstrument_75.insert(UnderlyingCFICode_75.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_75("STRING_1702592225");
    noUnderlyings_0_1.set(UnderlyingCPProgram_75);
    UnderlyingInstrument_75.insert(UnderlyingCPProgram_75.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_75("STRING_947644104");
    noUnderlyings_0_1.set(UnderlyingCPRegType_75);
    UnderlyingInstrument_75.insert(UnderlyingCPRegType_75.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_75;
    UnderlyingCapValue_75.setString("11203151");
    noUnderlyings_0_1.set(UnderlyingCapValue_75);
    UnderlyingInstrument_75.insert(UnderlyingCapValue_75.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_75;
    UnderlyingCashAmount_75.setString("6869947");
    noUnderlyings_0_1.set(UnderlyingCashAmount_75);
    UnderlyingInstrument_75.insert(UnderlyingCashAmount_75.getString());
    FIX::UnderlyingCashType UnderlyingCashType_75("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_75);
    UnderlyingInstrument_75.insert(UnderlyingCashType_75.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_75;
    UnderlyingContractMultiplier_75.setString("5624833");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_75);
    UnderlyingInstrument_75.insert(UnderlyingContractMultiplier_75.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_75(479857968);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_75);
    UnderlyingInstrument_75.insert(UnderlyingContractMultiplierUnit_75.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_75("COUNTRY_1050656956");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_75);
    UnderlyingInstrument_75.insert(UnderlyingCountryOfIssue_75.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_75("LOCALMKTDATE_636588474");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_75);
    UnderlyingInstrument_75.insert(UnderlyingCouponPaymentDate_75.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_75;
    UnderlyingCouponRate_75.setString("20.380000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_75);
    UnderlyingInstrument_75.insert(UnderlyingCouponRate_75.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_75("STRING_126676639");
    noUnderlyings_0_1.set(UnderlyingCreditRating_75);
    UnderlyingInstrument_75.insert(UnderlyingCreditRating_75.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_75("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_75);
    UnderlyingInstrument_75.insert(UnderlyingCurrency_75.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_75;
    UnderlyingCurrentValue_75.setString("2755114");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_75);
    UnderlyingInstrument_75.insert(UnderlyingCurrentValue_75.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_75;
    UnderlyingDetachmentPoint_75.setString("4.910000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_75);
    UnderlyingInstrument_75.insert(UnderlyingDetachmentPoint_75.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_75;
    UnderlyingDirtyPrice_75.setString("10094458");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_75);
    UnderlyingInstrument_75.insert(UnderlyingDirtyPrice_75.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_75;
    UnderlyingEndPrice_75.setString("8728847");
    noUnderlyings_0_1.set(UnderlyingEndPrice_75);
    UnderlyingInstrument_75.insert(UnderlyingEndPrice_75.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_75;
    UnderlyingEndValue_75.setString("19153094");
    noUnderlyings_0_1.set(UnderlyingEndValue_75);
    UnderlyingInstrument_75.insert(UnderlyingEndValue_75.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_75(1143533380);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_75);
    UnderlyingInstrument_75.insert(UnderlyingExerciseStyle_75.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_75;
    UnderlyingFXRate_75.setString("10301484");
    noUnderlyings_0_1.set(UnderlyingFXRate_75);
    UnderlyingInstrument_75.insert(UnderlyingFXRate_75.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_75('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_75);
    UnderlyingInstrument_75.insert(UnderlyingFXRateCalc_75.getString());
    FIX::UnderlyingFactor UnderlyingFactor_75;
    UnderlyingFactor_75.setString("875679");
    noUnderlyings_0_1.set(UnderlyingFactor_75);
    UnderlyingInstrument_75.insert(UnderlyingFactor_75.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_75(110910597);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_75);
    UnderlyingInstrument_75.insert(UnderlyingFlowScheduleType_75.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_75("STRING_237652620");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_75);
    UnderlyingInstrument_75.insert(UnderlyingInstrRegistry_75.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_75("LOCALMKTDATE_1414382136");
    noUnderlyings_0_1.set(UnderlyingIssueDate_75);
    UnderlyingInstrument_75.insert(UnderlyingIssueDate_75.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_75("STRING_1168373788");
    noUnderlyings_0_1.set(UnderlyingIssuer_75);
    UnderlyingInstrument_75.insert(UnderlyingIssuer_75.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_75("STRING_140989525");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_75);
    UnderlyingInstrument_75.insert(UnderlyingLocaleOfIssue_75.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_75("LOCALMKTDATE_425013649");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_75);
    UnderlyingInstrument_75.insert(UnderlyingMaturityDate_75.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_75("MONTHYEAR_1558489992");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_75);
    UnderlyingInstrument_75.insert(UnderlyingMaturityMonthYear_75.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_75("TZTIMEONLY_625474083");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_75);
    UnderlyingInstrument_75.insert(UnderlyingMaturityTime_75.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_75;
    UnderlyingNotionalPercentageOutstanding_75.setString("42.960000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_75);
    UnderlyingInstrument_75.insert(UnderlyingNotionalPercentageOutstanding_75.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_75('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_75);
    UnderlyingInstrument_75.insert(UnderlyingOptAttribute_75.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_75;
    UnderlyingOriginalNotionalPercentageOutstanding_75.setString("81.870000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_75);
    UnderlyingInstrument_75.insert(UnderlyingOriginalNotionalPercentageOutstanding_75.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_75("STRING_160145760");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_75);
    UnderlyingInstrument_75.insert(UnderlyingPriceUnitOfMeasure_75.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_75;
    UnderlyingPriceUnitOfMeasureQty_75.setString("18005933");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_75);
    UnderlyingInstrument_75.insert(UnderlyingPriceUnitOfMeasureQty_75.getString());
    FIX::UnderlyingProduct UnderlyingProduct_75(74846712);
    noUnderlyings_0_1.set(UnderlyingProduct_75);
    UnderlyingInstrument_75.insert(UnderlyingProduct_75.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_75(722629141);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_75);
    UnderlyingInstrument_75.insert(UnderlyingPutOrCall_75.getString());
    FIX::UnderlyingPx UnderlyingPx_75;
    UnderlyingPx_75.setString("1329676");
    noUnderlyings_0_1.set(UnderlyingPx_75);
    UnderlyingInstrument_75.insert(UnderlyingPx_75.getString());
    FIX::UnderlyingQty UnderlyingQty_75;
    UnderlyingQty_75.setString("11255036");
    noUnderlyings_0_1.set(UnderlyingQty_75);
    UnderlyingInstrument_75.insert(UnderlyingQty_75.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_75("LOCALMKTDATE_1359217615");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_75);
    UnderlyingInstrument_75.insert(UnderlyingRedemptionDate_75.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_75("STRING_1675189708");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_75);
    UnderlyingInstrument_75.insert(UnderlyingRepoCollateralSecurityType_75.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_75;
    UnderlyingRepurchaseRate_75.setString("3.070000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_75);
    UnderlyingInstrument_75.insert(UnderlyingRepurchaseRate_75.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_75(291417422);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_75);
    UnderlyingInstrument_75.insert(UnderlyingRepurchaseTerm_75.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_75("STRING_224377358");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_75);
    UnderlyingInstrument_75.insert(UnderlyingRestructuringType_75.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_75("STRING_1527691766");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_75);
    UnderlyingInstrument_75.insert(UnderlyingSecurityDesc_75.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_75("EXCHANGE_457337913");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_75);
    UnderlyingInstrument_75.insert(UnderlyingSecurityExchange_75.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_75("STRING_1233823256");
    noUnderlyings_0_1.set(UnderlyingSecurityID_75);
    UnderlyingInstrument_75.insert(UnderlyingSecurityID_75.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_75("STRING_253092895");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_75);
    UnderlyingInstrument_75.insert(UnderlyingSecurityIDSource_75.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_75("STRING_225163686");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_75);
    UnderlyingInstrument_75.insert(UnderlyingSecuritySubType_75.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_75("STRING_229872988");
    noUnderlyings_0_1.set(UnderlyingSecurityType_75);
    UnderlyingInstrument_75.insert(UnderlyingSecurityType_75.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_75("STRING_1283241381");
    noUnderlyings_0_1.set(UnderlyingSeniority_75);
    UnderlyingInstrument_75.insert(UnderlyingSeniority_75.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_75("STRING_278622978");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_75);
    UnderlyingInstrument_75.insert(UnderlyingSettlMethod_75.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_75(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_75);
    UnderlyingInstrument_75.insert(UnderlyingSettlementType_75.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_75;
    UnderlyingStartValue_75.setString("13941519");
    noUnderlyings_0_1.set(UnderlyingStartValue_75);
    UnderlyingInstrument_75.insert(UnderlyingStartValue_75.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_75("STRING_516275598");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_75);
    UnderlyingInstrument_75.insert(UnderlyingStateOrProvinceOfIssue_75.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_75("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_75);
    UnderlyingInstrument_75.insert(UnderlyingStrikeCurrency_75.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_75;
    UnderlyingStrikePrice_75.setString("6572651");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_75);
    UnderlyingInstrument_75.insert(UnderlyingStrikePrice_75.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_75("STRING_9353053");
    noUnderlyings_0_1.set(UnderlyingSymbol_75);
    UnderlyingInstrument_75.insert(UnderlyingSymbol_75.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_75("STRING_1973532111");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_75);
    UnderlyingInstrument_75.insert(UnderlyingSymbolSfx_75.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_75("STRING_1282739206");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_75);
    UnderlyingInstrument_75.insert(UnderlyingTimeUnit_75.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_75("STRING_1196667349");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_75);
    UnderlyingInstrument_75.insert(UnderlyingUnitOfMeasure_75.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_75;
    UnderlyingUnitOfMeasureQty_75.setString("9396470");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_75);
    UnderlyingInstrument_75.insert(UnderlyingUnitOfMeasureQty_75.getString());
    all_values.push_back(UnderlyingInstrument_75);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_145;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_145("STRING_1356813109");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_145);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_145.insert(UnderlyingSecurityAltID_145.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_145("STRING_592756735");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_145);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_145.insert(UnderlyingSecurityAltIDSource_145.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_145);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_133;
      FIX::UnderlyingStipType UnderlyingStipType_133("STRING_2079442250");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_133);
      UnderlyingStipulations_NoUnderlyingStips_133.insert(UnderlyingStipType_133.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_133("STRING_725724405");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_133);
      UnderlyingStipulations_NoUnderlyingStips_133.insert(UnderlyingStipValue_133.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_133);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_163;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_163("STRING_1291176217");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_163);
      UndlyInstrumentParties_NoUndlyInstrumentParties_163.insert(UnderlyingInstrumentPartyID_163.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_163('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_163);
      UndlyInstrumentParties_NoUndlyInstrumentParties_163.insert(UnderlyingInstrumentPartyIDSource_163.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_163(1013420786);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_163);
      UndlyInstrumentParties_NoUndlyInstrumentParties_163.insert(UnderlyingInstrumentPartyRole_163.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_163);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_318("STRING_477807823");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_318);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318.insert(UnderlyingInstrumentPartySubID_318.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_318(393628904);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_318);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318.insert(UnderlyingInstrumentPartySubIDType_318.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_319("STRING_2039931553");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_319);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319.insert(UnderlyingInstrumentPartySubID_319.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_319(1711631080);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_319);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319.insert(UnderlyingInstrumentPartySubIDType_319.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_164;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_164("STRING_646721799");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_164);
      UndlyInstrumentParties_NoUndlyInstrumentParties_164.insert(UnderlyingInstrumentPartyID_164.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_164('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_164);
      UndlyInstrumentParties_NoUndlyInstrumentParties_164.insert(UnderlyingInstrumentPartyIDSource_164.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_164(1941504068);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_164);
      UndlyInstrumentParties_NoUndlyInstrumentParties_164.insert(UnderlyingInstrumentPartyRole_164.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_164);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_320("STRING_396234569");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_320);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320.insert(UnderlyingInstrumentPartySubID_320.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_320(111461336);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_320);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320.insert(UnderlyingInstrumentPartySubIDType_320.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::OrderCancelRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_76;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_76("DATA_1176631510");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_76);
    UnderlyingInstrument_76.insert(EncodedUnderlyingIssuer_76.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_76(912510167);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_76);
    UnderlyingInstrument_76.insert(EncodedUnderlyingIssuerLen_76.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_76("DATA_1843284388");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_76);
    UnderlyingInstrument_76.insert(EncodedUnderlyingSecurityDesc_76.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_76(1591673629);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_76);
    UnderlyingInstrument_76.insert(EncodedUnderlyingSecurityDescLen_76.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_76;
    UnderlyingAdjustedQuantity_76.setString("15697752");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_76);
    UnderlyingInstrument_76.insert(UnderlyingAdjustedQuantity_76.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_76;
    UnderlyingAllocationPercent_76.setString("74.410000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_76);
    UnderlyingInstrument_76.insert(UnderlyingAllocationPercent_76.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_76;
    UnderlyingAttachmentPoint_76.setString("20.920000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_76);
    UnderlyingInstrument_76.insert(UnderlyingAttachmentPoint_76.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_76("STRING_705030849");
    noUnderlyings_0_2.set(UnderlyingCFICode_76);
    UnderlyingInstrument_76.insert(UnderlyingCFICode_76.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_76("STRING_901821142");
    noUnderlyings_0_2.set(UnderlyingCPProgram_76);
    UnderlyingInstrument_76.insert(UnderlyingCPProgram_76.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_76("STRING_209885477");
    noUnderlyings_0_2.set(UnderlyingCPRegType_76);
    UnderlyingInstrument_76.insert(UnderlyingCPRegType_76.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_76;
    UnderlyingCapValue_76.setString("14134045");
    noUnderlyings_0_2.set(UnderlyingCapValue_76);
    UnderlyingInstrument_76.insert(UnderlyingCapValue_76.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_76;
    UnderlyingCashAmount_76.setString("1111506");
    noUnderlyings_0_2.set(UnderlyingCashAmount_76);
    UnderlyingInstrument_76.insert(UnderlyingCashAmount_76.getString());
    FIX::UnderlyingCashType UnderlyingCashType_76("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_76);
    UnderlyingInstrument_76.insert(UnderlyingCashType_76.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_76;
    UnderlyingContractMultiplier_76.setString("491414");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_76);
    UnderlyingInstrument_76.insert(UnderlyingContractMultiplier_76.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_76(43109205);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_76);
    UnderlyingInstrument_76.insert(UnderlyingContractMultiplierUnit_76.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_76("COUNTRY_1528366617");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_76);
    UnderlyingInstrument_76.insert(UnderlyingCountryOfIssue_76.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_76("LOCALMKTDATE_1957865532");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_76);
    UnderlyingInstrument_76.insert(UnderlyingCouponPaymentDate_76.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_76;
    UnderlyingCouponRate_76.setString("54.220000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_76);
    UnderlyingInstrument_76.insert(UnderlyingCouponRate_76.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_76("STRING_1781797082");
    noUnderlyings_0_2.set(UnderlyingCreditRating_76);
    UnderlyingInstrument_76.insert(UnderlyingCreditRating_76.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_76("USD");
    noUnderlyings_0_2.set(UnderlyingCurrency_76);
    UnderlyingInstrument_76.insert(UnderlyingCurrency_76.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_76;
    UnderlyingCurrentValue_76.setString("1121212");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_76);
    UnderlyingInstrument_76.insert(UnderlyingCurrentValue_76.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_76;
    UnderlyingDetachmentPoint_76.setString("15.740000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_76);
    UnderlyingInstrument_76.insert(UnderlyingDetachmentPoint_76.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_76;
    UnderlyingDirtyPrice_76.setString("6618433");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_76);
    UnderlyingInstrument_76.insert(UnderlyingDirtyPrice_76.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_76;
    UnderlyingEndPrice_76.setString("18237523");
    noUnderlyings_0_2.set(UnderlyingEndPrice_76);
    UnderlyingInstrument_76.insert(UnderlyingEndPrice_76.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_76;
    UnderlyingEndValue_76.setString("18641533");
    noUnderlyings_0_2.set(UnderlyingEndValue_76);
    UnderlyingInstrument_76.insert(UnderlyingEndValue_76.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_76(779454911);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_76);
    UnderlyingInstrument_76.insert(UnderlyingExerciseStyle_76.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_76;
    UnderlyingFXRate_76.setString("16177727");
    noUnderlyings_0_2.set(UnderlyingFXRate_76);
    UnderlyingInstrument_76.insert(UnderlyingFXRate_76.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_76('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_76);
    UnderlyingInstrument_76.insert(UnderlyingFXRateCalc_76.getString());
    FIX::UnderlyingFactor UnderlyingFactor_76;
    UnderlyingFactor_76.setString("11756894");
    noUnderlyings_0_2.set(UnderlyingFactor_76);
    UnderlyingInstrument_76.insert(UnderlyingFactor_76.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_76(1729234094);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_76);
    UnderlyingInstrument_76.insert(UnderlyingFlowScheduleType_76.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_76("STRING_675780768");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_76);
    UnderlyingInstrument_76.insert(UnderlyingInstrRegistry_76.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_76("LOCALMKTDATE_2088199648");
    noUnderlyings_0_2.set(UnderlyingIssueDate_76);
    UnderlyingInstrument_76.insert(UnderlyingIssueDate_76.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_76("STRING_1425034834");
    noUnderlyings_0_2.set(UnderlyingIssuer_76);
    UnderlyingInstrument_76.insert(UnderlyingIssuer_76.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_76("STRING_119970749");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_76);
    UnderlyingInstrument_76.insert(UnderlyingLocaleOfIssue_76.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_76("LOCALMKTDATE_1510491291");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_76);
    UnderlyingInstrument_76.insert(UnderlyingMaturityDate_76.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_76("MONTHYEAR_1130188627");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_76);
    UnderlyingInstrument_76.insert(UnderlyingMaturityMonthYear_76.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_76("TZTIMEONLY_1537692841");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_76);
    UnderlyingInstrument_76.insert(UnderlyingMaturityTime_76.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_76;
    UnderlyingNotionalPercentageOutstanding_76.setString("84.930000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_76);
    UnderlyingInstrument_76.insert(UnderlyingNotionalPercentageOutstanding_76.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_76('2');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_76);
    UnderlyingInstrument_76.insert(UnderlyingOptAttribute_76.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_76;
    UnderlyingOriginalNotionalPercentageOutstanding_76.setString("83.180000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_76);
    UnderlyingInstrument_76.insert(UnderlyingOriginalNotionalPercentageOutstanding_76.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_76("STRING_1481443088");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_76);
    UnderlyingInstrument_76.insert(UnderlyingPriceUnitOfMeasure_76.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_76;
    UnderlyingPriceUnitOfMeasureQty_76.setString("21431603");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_76);
    UnderlyingInstrument_76.insert(UnderlyingPriceUnitOfMeasureQty_76.getString());
    FIX::UnderlyingProduct UnderlyingProduct_76(402736882);
    noUnderlyings_0_2.set(UnderlyingProduct_76);
    UnderlyingInstrument_76.insert(UnderlyingProduct_76.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_76(1530584494);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_76);
    UnderlyingInstrument_76.insert(UnderlyingPutOrCall_76.getString());
    FIX::UnderlyingPx UnderlyingPx_76;
    UnderlyingPx_76.setString("387859");
    noUnderlyings_0_2.set(UnderlyingPx_76);
    UnderlyingInstrument_76.insert(UnderlyingPx_76.getString());
    FIX::UnderlyingQty UnderlyingQty_76;
    UnderlyingQty_76.setString("19311034");
    noUnderlyings_0_2.set(UnderlyingQty_76);
    UnderlyingInstrument_76.insert(UnderlyingQty_76.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_76("LOCALMKTDATE_1340966378");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_76);
    UnderlyingInstrument_76.insert(UnderlyingRedemptionDate_76.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_76("STRING_1373071351");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_76);
    UnderlyingInstrument_76.insert(UnderlyingRepoCollateralSecurityType_76.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_76;
    UnderlyingRepurchaseRate_76.setString("69.330000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_76);
    UnderlyingInstrument_76.insert(UnderlyingRepurchaseRate_76.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_76(17285400);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_76);
    UnderlyingInstrument_76.insert(UnderlyingRepurchaseTerm_76.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_76("STRING_2142466766");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_76);
    UnderlyingInstrument_76.insert(UnderlyingRestructuringType_76.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_76("STRING_1677538191");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_76);
    UnderlyingInstrument_76.insert(UnderlyingSecurityDesc_76.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_76("EXCHANGE_1234716974");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_76);
    UnderlyingInstrument_76.insert(UnderlyingSecurityExchange_76.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_76("STRING_656826438");
    noUnderlyings_0_2.set(UnderlyingSecurityID_76);
    UnderlyingInstrument_76.insert(UnderlyingSecurityID_76.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_76("STRING_1353806880");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_76);
    UnderlyingInstrument_76.insert(UnderlyingSecurityIDSource_76.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_76("STRING_951386699");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_76);
    UnderlyingInstrument_76.insert(UnderlyingSecuritySubType_76.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_76("STRING_1436281349");
    noUnderlyings_0_2.set(UnderlyingSecurityType_76);
    UnderlyingInstrument_76.insert(UnderlyingSecurityType_76.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_76("STRING_824095990");
    noUnderlyings_0_2.set(UnderlyingSeniority_76);
    UnderlyingInstrument_76.insert(UnderlyingSeniority_76.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_76("STRING_450535957");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_76);
    UnderlyingInstrument_76.insert(UnderlyingSettlMethod_76.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_76(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_76);
    UnderlyingInstrument_76.insert(UnderlyingSettlementType_76.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_76;
    UnderlyingStartValue_76.setString("4058464");
    noUnderlyings_0_2.set(UnderlyingStartValue_76);
    UnderlyingInstrument_76.insert(UnderlyingStartValue_76.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_76("STRING_1126316726");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_76);
    UnderlyingInstrument_76.insert(UnderlyingStateOrProvinceOfIssue_76.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_76("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_76);
    UnderlyingInstrument_76.insert(UnderlyingStrikeCurrency_76.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_76;
    UnderlyingStrikePrice_76.setString("12462874");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_76);
    UnderlyingInstrument_76.insert(UnderlyingStrikePrice_76.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_76("STRING_1915694474");
    noUnderlyings_0_2.set(UnderlyingSymbol_76);
    UnderlyingInstrument_76.insert(UnderlyingSymbol_76.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_76("STRING_813586249");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_76);
    UnderlyingInstrument_76.insert(UnderlyingSymbolSfx_76.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_76("STRING_636496669");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_76);
    UnderlyingInstrument_76.insert(UnderlyingTimeUnit_76.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_76("STRING_1983732967");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_76);
    UnderlyingInstrument_76.insert(UnderlyingUnitOfMeasure_76.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_76;
    UnderlyingUnitOfMeasureQty_76.setString("6981123");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_76);
    UnderlyingInstrument_76.insert(UnderlyingUnitOfMeasureQty_76.getString());
    all_values.push_back(UnderlyingInstrument_76);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_146;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_146("STRING_1317692408");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_146);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_146.insert(UnderlyingSecurityAltID_146.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_146("STRING_693789094");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_146);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_146.insert(UnderlyingSecurityAltIDSource_146.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_146);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_147;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_147("STRING_639328222");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_147);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_147.insert(UnderlyingSecurityAltID_147.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_147("STRING_700793254");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_147);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_147.insert(UnderlyingSecurityAltIDSource_147.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_147);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_148;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_148("STRING_732575023");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_148);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_148.insert(UnderlyingSecurityAltID_148.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_148("STRING_422948073");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_148);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_148.insert(UnderlyingSecurityAltIDSource_148.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_148);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_134;
      FIX::UnderlyingStipType UnderlyingStipType_134("STRING_2105646375");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_134);
      UnderlyingStipulations_NoUnderlyingStips_134.insert(UnderlyingStipType_134.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_134("STRING_1988365007");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_134);
      UnderlyingStipulations_NoUnderlyingStips_134.insert(UnderlyingStipValue_134.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_134);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_165;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_165("STRING_2100629493");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_165);
      UndlyInstrumentParties_NoUndlyInstrumentParties_165.insert(UnderlyingInstrumentPartyID_165.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_165('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_165);
      UndlyInstrumentParties_NoUndlyInstrumentParties_165.insert(UnderlyingInstrumentPartyIDSource_165.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_165(1146278358);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_165);
      UndlyInstrumentParties_NoUndlyInstrumentParties_165.insert(UnderlyingInstrumentPartyRole_165.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_165);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_321("STRING_724742782");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_321);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321.insert(UnderlyingInstrumentPartySubID_321.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_321(2097665057);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_321);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321.insert(UnderlyingInstrumentPartySubIDType_321.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_322("STRING_2046253632");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_322);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322.insert(UnderlyingInstrumentPartySubID_322.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_322(1548838773);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_322);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322.insert(UnderlyingInstrumentPartySubIDType_322.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322);

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
