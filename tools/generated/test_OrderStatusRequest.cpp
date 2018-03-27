#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/OrderStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderStatusRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> OrderStatusRequest_0;
  FIX::Account Account_27("STRING_134804723");
  msg.set(Account_27);
  OrderStatusRequest_0.insert(Account_27.getString());
  FIX::AcctIDSource AcctIDSource_20(2);
  msg.set(AcctIDSource_20);
  OrderStatusRequest_0.insert(AcctIDSource_20.getString());
  FIX::ClOrdID ClOrdID_41("STRING_1697906776");
  msg.set(ClOrdID_41);
  OrderStatusRequest_0.insert(ClOrdID_41.getString());
  FIX::ClOrdLinkID ClOrdLinkID_17("STRING_1736655692");
  msg.set(ClOrdLinkID_17);
  OrderStatusRequest_0.insert(ClOrdLinkID_17.getString());
  FIX::OrdStatusReqID OrdStatusReqID_1("STRING_556450096");
  msg.set(OrdStatusReqID_1);
  OrderStatusRequest_0.insert(OrdStatusReqID_1.getString());
  FIX::OrderID OrderID_30("STRING_669746753");
  msg.set(OrderID_30);
  OrderStatusRequest_0.insert(OrderID_30.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_39("STRING_856564450");
  msg.set(SecondaryClOrdID_39);
  OrderStatusRequest_0.insert(SecondaryClOrdID_39.getString());
  FIX::Side Side_38('E');
  msg.set(Side_38);
  OrderStatusRequest_0.insert(Side_38.getString());
  all_values.push_back(OrderStatusRequest_0);

  // FinancingDetails
  multiset<string> FinancingDetails_15;
  FIX::AgreementCurrency AgreementCurrency_15("JPY");
  msg.set(AgreementCurrency_15);
  FinancingDetails_15.insert(AgreementCurrency_15.getString());
  FIX::AgreementDate AgreementDate_15("LOCALMKTDATE_651868707");
  msg.set(AgreementDate_15);
  FinancingDetails_15.insert(AgreementDate_15.getString());
  FIX::AgreementDesc AgreementDesc_15("STRING_1804248098");
  msg.set(AgreementDesc_15);
  FinancingDetails_15.insert(AgreementDesc_15.getString());
  FIX::AgreementID AgreementID_15("STRING_1146103296");
  msg.set(AgreementID_15);
  FinancingDetails_15.insert(AgreementID_15.getString());
  FIX::DeliveryType DeliveryType_15(0);
  msg.set(DeliveryType_15);
  FinancingDetails_15.insert(DeliveryType_15.getString());
  FIX::EndDate EndDate_15("LOCALMKTDATE_69734774");
  msg.set(EndDate_15);
  FinancingDetails_15.insert(EndDate_15.getString());
  FIX::MarginRatio MarginRatio_15;
  MarginRatio_15.setString("90.880000");
  msg.set(MarginRatio_15);
  FinancingDetails_15.insert(MarginRatio_15.getString());
  FIX::StartDate StartDate_15("LOCALMKTDATE_2126282686");
  msg.set(StartDate_15);
  FinancingDetails_15.insert(StartDate_15.getString());
  FIX::TerminationType TerminationType_15(2);
  msg.set(TerminationType_15);
  FinancingDetails_15.insert(TerminationType_15.getString());
  all_values.push_back(FinancingDetails_15);

  // Instrument
  multiset<string> Instrument_52;
  FIX::AttachmentPoint AttachmentPoint_52;
  AttachmentPoint_52.setString("89.630000");
  msg.set(AttachmentPoint_52);
  Instrument_52.insert(AttachmentPoint_52.getString());
  FIX::CFICode CFICode_52("STRING_126484402");
  msg.set(CFICode_52);
  Instrument_52.insert(CFICode_52.getString());
  FIX::CPProgram CPProgram_52(2);
  msg.set(CPProgram_52);
  Instrument_52.insert(CPProgram_52.getString());
  FIX::CPRegType CPRegType_52("STRING_965398289");
  msg.set(CPRegType_52);
  Instrument_52.insert(CPRegType_52.getString());
  FIX::CapPrice CapPrice_52;
  CapPrice_52.setString("4538945");
  msg.set(CapPrice_52);
  Instrument_52.insert(CapPrice_52.getString());
  FIX::ContractMultiplier ContractMultiplier_52;
  ContractMultiplier_52.setString("16834012");
  msg.set(ContractMultiplier_52);
  Instrument_52.insert(ContractMultiplier_52.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_52(2);
  msg.set(ContractMultiplierUnit_52);
  Instrument_52.insert(ContractMultiplierUnit_52.getString());
  FIX::ContractSettlMonth ContractSettlMonth_52("MONTHYEAR_1116390452");
  msg.set(ContractSettlMonth_52);
  Instrument_52.insert(ContractSettlMonth_52.getString());
  FIX::CountryOfIssue CountryOfIssue_52("COUNTRY_163049233");
  msg.set(CountryOfIssue_52);
  Instrument_52.insert(CountryOfIssue_52.getString());
  FIX::CouponPaymentDate CouponPaymentDate_52("LOCALMKTDATE_1490871123");
  msg.set(CouponPaymentDate_52);
  Instrument_52.insert(CouponPaymentDate_52.getString());
  FIX::CouponRate CouponRate_52;
  CouponRate_52.setString("44.580000");
  msg.set(CouponRate_52);
  Instrument_52.insert(CouponRate_52.getString());
  FIX::CreditRating CreditRating_52("STRING_1730642497");
  msg.set(CreditRating_52);
  Instrument_52.insert(CreditRating_52.getString());
  FIX::DatedDate DatedDate_52("LOCALMKTDATE_659265520");
  msg.set(DatedDate_52);
  Instrument_52.insert(DatedDate_52.getString());
  FIX::DetachmentPoint DetachmentPoint_52;
  DetachmentPoint_52.setString("55.330000");
  msg.set(DetachmentPoint_52);
  Instrument_52.insert(DetachmentPoint_52.getString());
  FIX::EncodedIssuer EncodedIssuer_52("DATA_1173032347");
  msg.set(EncodedIssuer_52);
  Instrument_52.insert(EncodedIssuer_52.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_52(209688648);
  msg.set(EncodedIssuerLen_52);
  Instrument_52.insert(EncodedIssuerLen_52.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_52("DATA_1799771225");
  msg.set(EncodedSecurityDesc_52);
  Instrument_52.insert(EncodedSecurityDesc_52.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_52(1729482443);
  msg.set(EncodedSecurityDescLen_52);
  Instrument_52.insert(EncodedSecurityDescLen_52.getString());
  FIX::ExerciseStyle ExerciseStyle_52(2);
  msg.set(ExerciseStyle_52);
  Instrument_52.insert(ExerciseStyle_52.getString());
  FIX::Factor Factor_52;
  Factor_52.setString("5088520");
  msg.set(Factor_52);
  Instrument_52.insert(Factor_52.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_52(true);
  msg.set(FlexProductEligibilityIndicator_52);
  Instrument_52.insert(FlexProductEligibilityIndicator_52.getString());
  FIX::FlexibleIndicator FlexibleIndicator_52(false);
  msg.set(FlexibleIndicator_52);
  Instrument_52.insert(FlexibleIndicator_52.getString());
  FIX::FloorPrice FloorPrice_52;
  FloorPrice_52.setString("7487928");
  msg.set(FloorPrice_52);
  Instrument_52.insert(FloorPrice_52.getString());
  FIX::FlowScheduleType FlowScheduleType_52(2);
  msg.set(FlowScheduleType_52);
  Instrument_52.insert(FlowScheduleType_52.getString());
  FIX::InstrRegistry InstrRegistry_52("STRING_1569139755");
  msg.set(InstrRegistry_52);
  Instrument_52.insert(InstrRegistry_52.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_52('1');
  msg.set(InstrmtAssignmentMethod_52);
  Instrument_52.insert(InstrmtAssignmentMethod_52.getString());
  FIX::InterestAccrualDate InterestAccrualDate_52("LOCALMKTDATE_757508455");
  msg.set(InterestAccrualDate_52);
  Instrument_52.insert(InterestAccrualDate_52.getString());
  FIX::IssueDate IssueDate_52("LOCALMKTDATE_1638874530");
  msg.set(IssueDate_52);
  Instrument_52.insert(IssueDate_52.getString());
  FIX::Issuer Issuer_52("STRING_854581608");
  msg.set(Issuer_52);
  Instrument_52.insert(Issuer_52.getString());
  FIX::ListMethod ListMethod_52(0);
  msg.set(ListMethod_52);
  Instrument_52.insert(ListMethod_52.getString());
  FIX::LocaleOfIssue LocaleOfIssue_52("STRING_2071204675");
  msg.set(LocaleOfIssue_52);
  Instrument_52.insert(LocaleOfIssue_52.getString());
  FIX::MaturityDate MaturityDate_52("LOCALMKTDATE_1052860572");
  msg.set(MaturityDate_52);
  Instrument_52.insert(MaturityDate_52.getString());
  FIX::MaturityMonthYear MaturityMonthYear_52("MONTHYEAR_862791896");
  msg.set(MaturityMonthYear_52);
  Instrument_52.insert(MaturityMonthYear_52.getString());
  FIX::MaturityTime MaturityTime_52("TZTIMEONLY_920335971");
  msg.set(MaturityTime_52);
  Instrument_52.insert(MaturityTime_52.getString());
  FIX::MinPriceIncrement MinPriceIncrement_52;
  MinPriceIncrement_52.setString("20182588");
  msg.set(MinPriceIncrement_52);
  Instrument_52.insert(MinPriceIncrement_52.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_52;
  MinPriceIncrementAmount_52.setString("13166864");
  msg.set(MinPriceIncrementAmount_52);
  Instrument_52.insert(MinPriceIncrementAmount_52.getString());
  FIX::NTPositionLimit NTPositionLimit_52(456253595);
  msg.set(NTPositionLimit_52);
  Instrument_52.insert(NTPositionLimit_52.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_52;
  NotionalPercentageOutstanding_52.setString("3.510000");
  msg.set(NotionalPercentageOutstanding_52);
  Instrument_52.insert(NotionalPercentageOutstanding_52.getString());
  FIX::OptAttribute OptAttribute_52('2');
  msg.set(OptAttribute_52);
  Instrument_52.insert(OptAttribute_52.getString());
  FIX::OptPayoutAmount OptPayoutAmount_52;
  OptPayoutAmount_52.setString("6193028");
  msg.set(OptPayoutAmount_52);
  Instrument_52.insert(OptPayoutAmount_52.getString());
  FIX::OptPayoutType OptPayoutType_52(2);
  msg.set(OptPayoutType_52);
  Instrument_52.insert(OptPayoutType_52.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_52;
  OriginalNotionalPercentageOutstanding_52.setString("40.550000");
  msg.set(OriginalNotionalPercentageOutstanding_52);
  Instrument_52.insert(OriginalNotionalPercentageOutstanding_52.getString());
  FIX::Pool Pool_52("STRING_202461678");
  msg.set(Pool_52);
  Instrument_52.insert(Pool_52.getString());
  FIX::PositionLimit PositionLimit_52(1018963346);
  msg.set(PositionLimit_52);
  Instrument_52.insert(PositionLimit_52.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_52("STRING_STD");
  msg.set(PriceQuoteMethod_52);
  Instrument_52.insert(PriceQuoteMethod_52.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_52("STRING_1375494025");
  msg.set(PriceUnitOfMeasure_52);
  Instrument_52.insert(PriceUnitOfMeasure_52.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_52;
  PriceUnitOfMeasureQty_52.setString("12286519");
  msg.set(PriceUnitOfMeasureQty_52);
  Instrument_52.insert(PriceUnitOfMeasureQty_52.getString());
  FIX::Product Product_54(8);
  msg.set(Product_54);
  Instrument_52.insert(Product_54.getString());
  FIX::ProductComplex ProductComplex_52("STRING_957492820");
  msg.set(ProductComplex_52);
  Instrument_52.insert(ProductComplex_52.getString());
  FIX::PutOrCall PutOrCall_52(0);
  msg.set(PutOrCall_52);
  Instrument_52.insert(PutOrCall_52.getString());
  FIX::RedemptionDate RedemptionDate_52("LOCALMKTDATE_438159193");
  msg.set(RedemptionDate_52);
  Instrument_52.insert(RedemptionDate_52.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_52("STRING_1630899660");
  msg.set(RepoCollateralSecurityType_52);
  Instrument_52.insert(RepoCollateralSecurityType_52.getString());
  FIX::RepurchaseRate RepurchaseRate_52;
  RepurchaseRate_52.setString("90.530000");
  msg.set(RepurchaseRate_52);
  Instrument_52.insert(RepurchaseRate_52.getString());
  FIX::RepurchaseTerm RepurchaseTerm_52(1186952065);
  msg.set(RepurchaseTerm_52);
  Instrument_52.insert(RepurchaseTerm_52.getString());
  FIX::RestructuringType RestructuringType_52("STRING_FR");
  msg.set(RestructuringType_52);
  Instrument_52.insert(RestructuringType_52.getString());
  FIX::SecurityDesc SecurityDesc_52("STRING_1294635161");
  msg.set(SecurityDesc_52);
  Instrument_52.insert(SecurityDesc_52.getString());
  FIX::SecurityExchange SecurityExchange_52("EXCHANGE_934364585");
  msg.set(SecurityExchange_52);
  Instrument_52.insert(SecurityExchange_52.getString());
  FIX::SecurityGroup SecurityGroup_52("STRING_1566200015");
  msg.set(SecurityGroup_52);
  Instrument_52.insert(SecurityGroup_52.getString());
  FIX::SecurityID SecurityID_52("STRING_786026043");
  msg.set(SecurityID_52);
  Instrument_52.insert(SecurityID_52.getString());
  FIX::SecurityIDSource SecurityIDSource_52("STRING_2");
  msg.set(SecurityIDSource_52);
  Instrument_52.insert(SecurityIDSource_52.getString());
  FIX::SecurityStatus SecurityStatus_52("STRING_2");
  msg.set(SecurityStatus_52);
  Instrument_52.insert(SecurityStatus_52.getString());
  FIX::SecuritySubType SecuritySubType_53("STRING_709747070");
  msg.set(SecuritySubType_53);
  Instrument_52.insert(SecuritySubType_53.getString());
  FIX::SecurityType SecurityType_54("STRING_CS");
  msg.set(SecurityType_54);
  Instrument_52.insert(SecurityType_54.getString());
  FIX::Seniority Seniority_52("STRING_SR");
  msg.set(Seniority_52);
  Instrument_52.insert(Seniority_52.getString());
  FIX::SettlMethod SettlMethod_52('C');
  msg.set(SettlMethod_52);
  Instrument_52.insert(SettlMethod_52.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_52("STRING_565098331");
  msg.set(SettleOnOpenFlag_52);
  Instrument_52.insert(SettleOnOpenFlag_52.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_52("STRING_187018551");
  msg.set(StateOrProvinceOfIssue_52);
  Instrument_52.insert(StateOrProvinceOfIssue_52.getString());
  FIX::StrikeCurrency StrikeCurrency_52("JPY");
  msg.set(StrikeCurrency_52);
  Instrument_52.insert(StrikeCurrency_52.getString());
  FIX::StrikeMultiplier StrikeMultiplier_52;
  StrikeMultiplier_52.setString("4726117");
  msg.set(StrikeMultiplier_52);
  Instrument_52.insert(StrikeMultiplier_52.getString());
  FIX::StrikePrice StrikePrice_52;
  StrikePrice_52.setString("5581558");
  msg.set(StrikePrice_52);
  Instrument_52.insert(StrikePrice_52.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_52(4);
  msg.set(StrikePriceBoundaryMethod_52);
  Instrument_52.insert(StrikePriceBoundaryMethod_52.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_52;
  StrikePriceBoundaryPrecision_52.setString("58.520000");
  msg.set(StrikePriceBoundaryPrecision_52);
  Instrument_52.insert(StrikePriceBoundaryPrecision_52.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_52(2);
  msg.set(StrikePriceDeterminationMethod_52);
  Instrument_52.insert(StrikePriceDeterminationMethod_52.getString());
  FIX::StrikeValue StrikeValue_52;
  StrikeValue_52.setString("8125862");
  msg.set(StrikeValue_52);
  Instrument_52.insert(StrikeValue_52.getString());
  FIX::Symbol Symbol_52("STRING_963535440");
  msg.set(Symbol_52);
  Instrument_52.insert(Symbol_52.getString());
  FIX::SymbolSfx SymbolSfx_52("STRING_CD");
  msg.set(SymbolSfx_52);
  Instrument_52.insert(SymbolSfx_52.getString());
  FIX::TimeUnit TimeUnit_52("STRING_S");
  msg.set(TimeUnit_52);
  Instrument_52.insert(TimeUnit_52.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_52(3);
  msg.set(UnderlyingPriceDeterminationMethod_52);
  Instrument_52.insert(UnderlyingPriceDeterminationMethod_52.getString());
  FIX::UnitOfMeasure UnitOfMeasure_52("STRING_Bcf");
  msg.set(UnitOfMeasure_52);
  Instrument_52.insert(UnitOfMeasure_52.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_52;
  UnitOfMeasureQty_52.setString("20018419");
  msg.set(UnitOfMeasureQty_52);
  Instrument_52.insert(UnitOfMeasureQty_52.getString());
  FIX::ValuationMethod ValuationMethod_52("STRING_EQTY");
  msg.set(ValuationMethod_52);
  Instrument_52.insert(ValuationMethod_52.getString());
  all_values.push_back(Instrument_52);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_100;
    FIX::ComplexEventCondition ComplexEventCondition_100(2);
    noComplexEvents_0_0.set(ComplexEventCondition_100);
    ComplexEvents_NoComplexEvents_100.insert(ComplexEventCondition_100.getString());
    FIX::ComplexEventPrice ComplexEventPrice_100;
    ComplexEventPrice_100.setString("3704702");
    noComplexEvents_0_0.set(ComplexEventPrice_100);
    ComplexEvents_NoComplexEvents_100.insert(ComplexEventPrice_100.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_100(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_100);
    ComplexEvents_NoComplexEvents_100.insert(ComplexEventPriceBoundaryMethod_100.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_100;
    ComplexEventPriceBoundaryPrecision_100.setString("88.680000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_100);
    ComplexEvents_NoComplexEvents_100.insert(ComplexEventPriceBoundaryPrecision_100.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_100(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_100);
    ComplexEvents_NoComplexEvents_100.insert(ComplexEventPriceTimeType_100.getString());
    FIX::ComplexEventType ComplexEventType_100(4);
    noComplexEvents_0_0.set(ComplexEventType_100);
    ComplexEvents_NoComplexEvents_100.insert(ComplexEventType_100.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_100;
    ComplexOptPayoutAmount_100.setString("16605149");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_100);
    ComplexEvents_NoComplexEvents_100.insert(ComplexOptPayoutAmount_100.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_100);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_208;
      FIX::ComplexEventEndDate ComplexEventEndDate_208(FIX::UTCTIMESTAMP(13, 25, 14, 15, 12005));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_208);
      ComplexEventDates_NoComplexEventDates_208.insert(ComplexEventEndDate_208.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_208(FIX::UTCTIMESTAMP(22, 14, 55, 2, 72000));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_208);
      ComplexEventDates_NoComplexEventDates_208.insert(ComplexEventStartDate_208.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_208);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_409;
        FIX::ComplexEventEndTime ComplexEventEndTime_409(FIX::UTCTIMEONLY(11, 11, 5));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_409);
        ComplexEventTimes_NoComplexEventTimes_409.insert(ComplexEventEndTime_409.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_409(FIX::UTCTIMEONLY(8, 25, 1));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_409);
        ComplexEventTimes_NoComplexEventTimes_409.insert(ComplexEventStartTime_409.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_409);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_410;
        FIX::ComplexEventEndTime ComplexEventEndTime_410(FIX::UTCTIMEONLY(6, 49, 39));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_410);
        ComplexEventTimes_NoComplexEventTimes_410.insert(ComplexEventEndTime_410.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_410(FIX::UTCTIMEONLY(4, 10, 55));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_410);
        ComplexEventTimes_NoComplexEventTimes_410.insert(ComplexEventStartTime_410.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_410);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_411;
        FIX::ComplexEventEndTime ComplexEventEndTime_411(FIX::UTCTIMEONLY(4, 20, 19));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_411);
        ComplexEventTimes_NoComplexEventTimes_411.insert(ComplexEventEndTime_411.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_411(FIX::UTCTIMEONLY(8, 16, 8));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_411);
        ComplexEventTimes_NoComplexEventTimes_411.insert(ComplexEventStartTime_411.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_411);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_101;
    FIX::ComplexEventCondition ComplexEventCondition_101(1);
    noComplexEvents_0_1.set(ComplexEventCondition_101);
    ComplexEvents_NoComplexEvents_101.insert(ComplexEventCondition_101.getString());
    FIX::ComplexEventPrice ComplexEventPrice_101;
    ComplexEventPrice_101.setString("6330141");
    noComplexEvents_0_1.set(ComplexEventPrice_101);
    ComplexEvents_NoComplexEvents_101.insert(ComplexEventPrice_101.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_101(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_101);
    ComplexEvents_NoComplexEvents_101.insert(ComplexEventPriceBoundaryMethod_101.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_101;
    ComplexEventPriceBoundaryPrecision_101.setString("69.130000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_101);
    ComplexEvents_NoComplexEvents_101.insert(ComplexEventPriceBoundaryPrecision_101.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_101(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_101);
    ComplexEvents_NoComplexEvents_101.insert(ComplexEventPriceTimeType_101.getString());
    FIX::ComplexEventType ComplexEventType_101(6);
    noComplexEvents_0_1.set(ComplexEventType_101);
    ComplexEvents_NoComplexEvents_101.insert(ComplexEventType_101.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_101;
    ComplexOptPayoutAmount_101.setString("9701461");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_101);
    ComplexEvents_NoComplexEvents_101.insert(ComplexOptPayoutAmount_101.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_101);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_209;
      FIX::ComplexEventEndDate ComplexEventEndDate_209(FIX::UTCTIMESTAMP(21, 32, 49, 14, 22009));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_209);
      ComplexEventDates_NoComplexEventDates_209.insert(ComplexEventEndDate_209.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_209(FIX::UTCTIMESTAMP(7, 32, 1, 19, 52009));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_209);
      ComplexEventDates_NoComplexEventDates_209.insert(ComplexEventStartDate_209.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_209);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_412;
        FIX::ComplexEventEndTime ComplexEventEndTime_412(FIX::UTCTIMEONLY(19, 19, 59));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_412);
        ComplexEventTimes_NoComplexEventTimes_412.insert(ComplexEventEndTime_412.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_412(FIX::UTCTIMEONLY(15, 16, 31));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_412);
        ComplexEventTimes_NoComplexEventTimes_412.insert(ComplexEventStartTime_412.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_412);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_210;
      FIX::ComplexEventEndDate ComplexEventEndDate_210(FIX::UTCTIMESTAMP(2, 27, 35, 15, 12005));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_210);
      ComplexEventDates_NoComplexEventDates_210.insert(ComplexEventEndDate_210.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_210(FIX::UTCTIMESTAMP(11, 55, 14, 25, 62003));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_210);
      ComplexEventDates_NoComplexEventDates_210.insert(ComplexEventStartDate_210.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_210);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_413;
        FIX::ComplexEventEndTime ComplexEventEndTime_413(FIX::UTCTIMEONLY(22, 20, 27));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_413);
        ComplexEventTimes_NoComplexEventTimes_413.insert(ComplexEventEndTime_413.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_413(FIX::UTCTIMEONLY(0, 31, 3));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_413);
        ComplexEventTimes_NoComplexEventTimes_413.insert(ComplexEventStartTime_413.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_413);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_414;
        FIX::ComplexEventEndTime ComplexEventEndTime_414(FIX::UTCTIMEONLY(18, 22, 20));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_414);
        ComplexEventTimes_NoComplexEventTimes_414.insert(ComplexEventEndTime_414.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_414(FIX::UTCTIMEONLY(6, 28, 37));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_414);
        ComplexEventTimes_NoComplexEventTimes_414.insert(ComplexEventStartTime_414.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_414);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_415;
        FIX::ComplexEventEndTime ComplexEventEndTime_415(FIX::UTCTIMEONLY(22, 56, 39));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_415);
        ComplexEventTimes_NoComplexEventTimes_415.insert(ComplexEventEndTime_415.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_415(FIX::UTCTIMEONLY(0, 48, 47));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_415);
        ComplexEventTimes_NoComplexEventTimes_415.insert(ComplexEventStartTime_415.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_415);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_211;
      FIX::ComplexEventEndDate ComplexEventEndDate_211(FIX::UTCTIMESTAMP(19, 53, 45, 24, 12017));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_211);
      ComplexEventDates_NoComplexEventDates_211.insert(ComplexEventEndDate_211.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_211(FIX::UTCTIMESTAMP(14, 1, 26, 23, 62001));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_211);
      ComplexEventDates_NoComplexEventDates_211.insert(ComplexEventStartDate_211.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_211);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_416;
        FIX::ComplexEventEndTime ComplexEventEndTime_416(FIX::UTCTIMEONLY(8, 25, 13));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_416);
        ComplexEventTimes_NoComplexEventTimes_416.insert(ComplexEventEndTime_416.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_416(FIX::UTCTIMEONLY(7, 33, 6));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_416);
        ComplexEventTimes_NoComplexEventTimes_416.insert(ComplexEventStartTime_416.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_416);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_417;
        FIX::ComplexEventEndTime ComplexEventEndTime_417(FIX::UTCTIMEONLY(20, 3, 34));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_417);
        ComplexEventTimes_NoComplexEventTimes_417.insert(ComplexEventEndTime_417.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_417(FIX::UTCTIMEONLY(19, 23, 17));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_417);
        ComplexEventTimes_NoComplexEventTimes_417.insert(ComplexEventStartTime_417.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_417);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_418;
        FIX::ComplexEventEndTime ComplexEventEndTime_418(FIX::UTCTIMEONLY(22, 2, 44));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_418);
        ComplexEventTimes_NoComplexEventTimes_418.insert(ComplexEventEndTime_418.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_418(FIX::UTCTIMEONLY(3, 25, 46));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_418);
        ComplexEventTimes_NoComplexEventTimes_418.insert(ComplexEventStartTime_418.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_418);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_103;
    FIX::EventDate EventDate_103("LOCALMKTDATE_1957149918");
    noEvents_0_0.set(EventDate_103);
    EvntGrp_NoEvents_103.insert(EventDate_103.getString());
    FIX::EventPx EventPx_103;
    EventPx_103.setString("8577825");
    noEvents_0_0.set(EventPx_103);
    EvntGrp_NoEvents_103.insert(EventPx_103.getString());
    FIX::EventText EventText_103("STRING_288997045");
    noEvents_0_0.set(EventText_103);
    EvntGrp_NoEvents_103.insert(EventText_103.getString());
    FIX::EventTime EventTime_103(FIX::UTCTIMESTAMP(2, 36, 53, 26, 22000));
    noEvents_0_0.set(EventTime_103);
    EvntGrp_NoEvents_103.insert(EventTime_103.getString());
    FIX::EventType EventType_103(12);
    noEvents_0_0.set(EventType_103);
    EvntGrp_NoEvents_103.insert(EventType_103.getString());
    all_values.push_back(EvntGrp_NoEvents_103);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_104;
    FIX::EventDate EventDate_104("LOCALMKTDATE_530784121");
    noEvents_0_1.set(EventDate_104);
    EvntGrp_NoEvents_104.insert(EventDate_104.getString());
    FIX::EventPx EventPx_104;
    EventPx_104.setString("2378937");
    noEvents_0_1.set(EventPx_104);
    EvntGrp_NoEvents_104.insert(EventPx_104.getString());
    FIX::EventText EventText_104("STRING_549823150");
    noEvents_0_1.set(EventText_104);
    EvntGrp_NoEvents_104.insert(EventText_104.getString());
    FIX::EventTime EventTime_104(FIX::UTCTIMESTAMP(16, 5, 31, 21, 12012));
    noEvents_0_1.set(EventTime_104);
    EvntGrp_NoEvents_104.insert(EventTime_104.getString());
    FIX::EventType EventType_104(11);
    noEvents_0_1.set(EventType_104);
    EvntGrp_NoEvents_104.insert(EventType_104.getString());
    all_values.push_back(EvntGrp_NoEvents_104);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderStatusRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_105;
    FIX::EventDate EventDate_105("LOCALMKTDATE_837858084");
    noEvents_0_2.set(EventDate_105);
    EvntGrp_NoEvents_105.insert(EventDate_105.getString());
    FIX::EventPx EventPx_105;
    EventPx_105.setString("752424");
    noEvents_0_2.set(EventPx_105);
    EvntGrp_NoEvents_105.insert(EventPx_105.getString());
    FIX::EventText EventText_105("STRING_307532633");
    noEvents_0_2.set(EventText_105);
    EvntGrp_NoEvents_105.insert(EventText_105.getString());
    FIX::EventTime EventTime_105(FIX::UTCTIMESTAMP(19, 44, 26, 1, 62006));
    noEvents_0_2.set(EventTime_105);
    EvntGrp_NoEvents_105.insert(EventTime_105.getString());
    FIX::EventType EventType_105(3);
    noEvents_0_2.set(EventType_105);
    EvntGrp_NoEvents_105.insert(EventType_105.getString());
    all_values.push_back(EvntGrp_NoEvents_105);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_95;
    FIX::InstrumentPartyID InstrumentPartyID_95("STRING_1460745148");
    noInstrumentParties_0_0.set(InstrumentPartyID_95);
    InstrumentParties_NoInstrumentParties_95.insert(InstrumentPartyID_95.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_95('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_95);
    InstrumentParties_NoInstrumentParties_95.insert(InstrumentPartyIDSource_95.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_95(1991643354);
    noInstrumentParties_0_0.set(InstrumentPartyRole_95);
    InstrumentParties_NoInstrumentParties_95.insert(InstrumentPartyRole_95.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_95);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189;
      FIX::InstrumentPartySubID InstrumentPartySubID_189("STRING_1570239650");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_189);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189.insert(InstrumentPartySubID_189.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_189(493284828);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_189);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189.insert(InstrumentPartySubIDType_189.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190;
      FIX::InstrumentPartySubID InstrumentPartySubID_190("STRING_679818911");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_190);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190.insert(InstrumentPartySubID_190.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_190(1488985853);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_190);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190.insert(InstrumentPartySubIDType_190.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_102;
    FIX::SecurityAltID SecurityAltID_102("STRING_917712643");
    noSecurityAltID_0_0.set(SecurityAltID_102);
    SecAltIDGrp_NoSecurityAltID_102.insert(SecurityAltID_102.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_102("STRING_2038809003");
    noSecurityAltID_0_0.set(SecurityAltIDSource_102);
    SecAltIDGrp_NoSecurityAltID_102.insert(SecurityAltIDSource_102.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_102);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_103;
    FIX::SecurityAltID SecurityAltID_103("STRING_657591945");
    noSecurityAltID_0_1.set(SecurityAltID_103);
    SecAltIDGrp_NoSecurityAltID_103.insert(SecurityAltID_103.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_103("STRING_1730500427");
    noSecurityAltID_0_1.set(SecurityAltIDSource_103);
    SecAltIDGrp_NoSecurityAltID_103.insert(SecurityAltIDSource_103.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_103);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_104;
  FIX::SecurityXML SecurityXML_105("XMLDATA_68374020");
  msg.set(SecurityXML_105);
  FIX::SecurityXMLLen SecurityXMLLen_52(1058834236);
  msg.set(SecurityXMLLen_52);
  FIX::SecurityXMLSchema SecurityXMLSchema_52("STRING_1313200641");
  msg.set(SecurityXMLSchema_52);
  SecurityXML_104.insert(SecurityXMLSchema_52.getString());
  all_values.push_back(SecurityXML_104);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_96;
    FIX::PartyID PartyID_96("STRING_864372002");
    noPartyIDs_0_0.set(PartyID_96);
    Parties_NoPartyIDs_96.insert(PartyID_96.getString());
    FIX::PartyIDSource PartyIDSource_96('B');
    noPartyIDs_0_0.set(PartyIDSource_96);
    Parties_NoPartyIDs_96.insert(PartyIDSource_96.getString());
    FIX::PartyRole PartyRole_96(63);
    noPartyIDs_0_0.set(PartyRole_96);
    Parties_NoPartyIDs_96.insert(PartyRole_96.getString());
    all_values.push_back(Parties_NoPartyIDs_96);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_185;
      FIX::PartySubID PartySubID_185("STRING_1905010864");
      noPartySubIDs_0_1_0.set(PartySubID_185);
      PtysSubGrp_NoPartySubIDs_185.insert(PartySubID_185.getString());
      FIX::PartySubIDType PartySubIDType_185(14);
      noPartySubIDs_0_1_0.set(PartySubIDType_185);
      PtysSubGrp_NoPartySubIDs_185.insert(PartySubIDType_185.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_185);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_186;
      FIX::PartySubID PartySubID_186("STRING_892588570");
      noPartySubIDs_0_1_1.set(PartySubID_186);
      PtysSubGrp_NoPartySubIDs_186.insert(PartySubID_186.getString());
      FIX::PartySubIDType PartySubIDType_186(32);
      noPartySubIDs_0_1_1.set(PartySubIDType_186);
      PtysSubGrp_NoPartySubIDs_186.insert(PartySubIDType_186.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_186);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_187;
      FIX::PartySubID PartySubID_187("STRING_1586436315");
      noPartySubIDs_0_1_2.set(PartySubID_187);
      PtysSubGrp_NoPartySubIDs_187.insert(PartySubID_187.getString());
      FIX::PartySubIDType PartySubIDType_187(30);
      noPartySubIDs_0_1_2.set(PartySubIDType_187);
      PtysSubGrp_NoPartySubIDs_187.insert(PartySubIDType_187.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_187);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_97;
    FIX::PartyID PartyID_97("STRING_102905666");
    noPartyIDs_0_1.set(PartyID_97);
    Parties_NoPartyIDs_97.insert(PartyID_97.getString());
    FIX::PartyIDSource PartyIDSource_97('8');
    noPartyIDs_0_1.set(PartyIDSource_97);
    Parties_NoPartyIDs_97.insert(PartyIDSource_97.getString());
    FIX::PartyRole PartyRole_97(48);
    noPartyIDs_0_1.set(PartyRole_97);
    Parties_NoPartyIDs_97.insert(PartyRole_97.getString());
    all_values.push_back(Parties_NoPartyIDs_97);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_188;
      FIX::PartySubID PartySubID_188("STRING_1787846172");
      noPartySubIDs_1_1_0.set(PartySubID_188);
      PtysSubGrp_NoPartySubIDs_188.insert(PartySubID_188.getString());
      FIX::PartySubIDType PartySubIDType_188(3);
      noPartySubIDs_1_1_0.set(PartySubIDType_188);
      PtysSubGrp_NoPartySubIDs_188.insert(PartySubIDType_188.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_188);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_189;
      FIX::PartySubID PartySubID_189("STRING_1374802711");
      noPartySubIDs_1_1_1.set(PartySubID_189);
      PtysSubGrp_NoPartySubIDs_189.insert(PartySubID_189.getString());
      FIX::PartySubIDType PartySubIDType_189(6);
      noPartySubIDs_1_1_1.set(PartySubIDType_189);
      PtysSubGrp_NoPartySubIDs_189.insert(PartySubIDType_189.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_189);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_190;
      FIX::PartySubID PartySubID_190("STRING_395712692");
      noPartySubIDs_1_1_2.set(PartySubID_190);
      PtysSubGrp_NoPartySubIDs_190.insert(PartySubID_190.getString());
      FIX::PartySubIDType PartySubIDType_190(11);
      noPartySubIDs_1_1_2.set(PartySubIDType_190);
      PtysSubGrp_NoPartySubIDs_190.insert(PartySubIDType_190.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_190);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_79;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_79("DATA_1884698545");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_79);
    UnderlyingInstrument_79.insert(EncodedUnderlyingIssuer_79.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_79(744672840);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_79);
    UnderlyingInstrument_79.insert(EncodedUnderlyingIssuerLen_79.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_79("DATA_1995414672");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_79);
    UnderlyingInstrument_79.insert(EncodedUnderlyingSecurityDesc_79.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_79(1776023901);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_79);
    UnderlyingInstrument_79.insert(EncodedUnderlyingSecurityDescLen_79.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_79;
    UnderlyingAdjustedQuantity_79.setString("14022647");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_79);
    UnderlyingInstrument_79.insert(UnderlyingAdjustedQuantity_79.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_79;
    UnderlyingAllocationPercent_79.setString("14.510000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_79);
    UnderlyingInstrument_79.insert(UnderlyingAllocationPercent_79.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_79;
    UnderlyingAttachmentPoint_79.setString("79.210000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_79);
    UnderlyingInstrument_79.insert(UnderlyingAttachmentPoint_79.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_79("STRING_313615374");
    noUnderlyings_0_0.set(UnderlyingCFICode_79);
    UnderlyingInstrument_79.insert(UnderlyingCFICode_79.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_79("STRING_744148444");
    noUnderlyings_0_0.set(UnderlyingCPProgram_79);
    UnderlyingInstrument_79.insert(UnderlyingCPProgram_79.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_79("STRING_368114738");
    noUnderlyings_0_0.set(UnderlyingCPRegType_79);
    UnderlyingInstrument_79.insert(UnderlyingCPRegType_79.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_79;
    UnderlyingCapValue_79.setString("11779873");
    noUnderlyings_0_0.set(UnderlyingCapValue_79);
    UnderlyingInstrument_79.insert(UnderlyingCapValue_79.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_79;
    UnderlyingCashAmount_79.setString("1941430");
    noUnderlyings_0_0.set(UnderlyingCashAmount_79);
    UnderlyingInstrument_79.insert(UnderlyingCashAmount_79.getString());
    FIX::UnderlyingCashType UnderlyingCashType_79("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_79);
    UnderlyingInstrument_79.insert(UnderlyingCashType_79.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_79;
    UnderlyingContractMultiplier_79.setString("21176018");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_79);
    UnderlyingInstrument_79.insert(UnderlyingContractMultiplier_79.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_79(2099153892);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_79);
    UnderlyingInstrument_79.insert(UnderlyingContractMultiplierUnit_79.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_79("COUNTRY_237643869");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_79);
    UnderlyingInstrument_79.insert(UnderlyingCountryOfIssue_79.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_79("LOCALMKTDATE_862706746");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_79);
    UnderlyingInstrument_79.insert(UnderlyingCouponPaymentDate_79.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_79;
    UnderlyingCouponRate_79.setString("92.650000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_79);
    UnderlyingInstrument_79.insert(UnderlyingCouponRate_79.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_79("STRING_1824080184");
    noUnderlyings_0_0.set(UnderlyingCreditRating_79);
    UnderlyingInstrument_79.insert(UnderlyingCreditRating_79.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_79("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_79);
    UnderlyingInstrument_79.insert(UnderlyingCurrency_79.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_79;
    UnderlyingCurrentValue_79.setString("36975");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_79);
    UnderlyingInstrument_79.insert(UnderlyingCurrentValue_79.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_79;
    UnderlyingDetachmentPoint_79.setString("55.520000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_79);
    UnderlyingInstrument_79.insert(UnderlyingDetachmentPoint_79.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_79;
    UnderlyingDirtyPrice_79.setString("5493842");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_79);
    UnderlyingInstrument_79.insert(UnderlyingDirtyPrice_79.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_79;
    UnderlyingEndPrice_79.setString("17915437");
    noUnderlyings_0_0.set(UnderlyingEndPrice_79);
    UnderlyingInstrument_79.insert(UnderlyingEndPrice_79.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_79;
    UnderlyingEndValue_79.setString("18754222");
    noUnderlyings_0_0.set(UnderlyingEndValue_79);
    UnderlyingInstrument_79.insert(UnderlyingEndValue_79.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_79(1924186998);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_79);
    UnderlyingInstrument_79.insert(UnderlyingExerciseStyle_79.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_79;
    UnderlyingFXRate_79.setString("419432");
    noUnderlyings_0_0.set(UnderlyingFXRate_79);
    UnderlyingInstrument_79.insert(UnderlyingFXRate_79.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_79('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_79);
    UnderlyingInstrument_79.insert(UnderlyingFXRateCalc_79.getString());
    FIX::UnderlyingFactor UnderlyingFactor_79;
    UnderlyingFactor_79.setString("16447908");
    noUnderlyings_0_0.set(UnderlyingFactor_79);
    UnderlyingInstrument_79.insert(UnderlyingFactor_79.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_79(1119645230);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_79);
    UnderlyingInstrument_79.insert(UnderlyingFlowScheduleType_79.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_79("STRING_2008349831");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_79);
    UnderlyingInstrument_79.insert(UnderlyingInstrRegistry_79.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_79("LOCALMKTDATE_241980081");
    noUnderlyings_0_0.set(UnderlyingIssueDate_79);
    UnderlyingInstrument_79.insert(UnderlyingIssueDate_79.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_79("STRING_967576254");
    noUnderlyings_0_0.set(UnderlyingIssuer_79);
    UnderlyingInstrument_79.insert(UnderlyingIssuer_79.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_79("STRING_1636890084");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_79);
    UnderlyingInstrument_79.insert(UnderlyingLocaleOfIssue_79.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_79("LOCALMKTDATE_1644244867");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_79);
    UnderlyingInstrument_79.insert(UnderlyingMaturityDate_79.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_79("MONTHYEAR_398524057");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_79);
    UnderlyingInstrument_79.insert(UnderlyingMaturityMonthYear_79.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_79("TZTIMEONLY_1333804358");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_79);
    UnderlyingInstrument_79.insert(UnderlyingMaturityTime_79.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_79;
    UnderlyingNotionalPercentageOutstanding_79.setString("2.410000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_79);
    UnderlyingInstrument_79.insert(UnderlyingNotionalPercentageOutstanding_79.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_79('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_79);
    UnderlyingInstrument_79.insert(UnderlyingOptAttribute_79.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_79;
    UnderlyingOriginalNotionalPercentageOutstanding_79.setString("90.960000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_79);
    UnderlyingInstrument_79.insert(UnderlyingOriginalNotionalPercentageOutstanding_79.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_79("STRING_988363969");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_79);
    UnderlyingInstrument_79.insert(UnderlyingPriceUnitOfMeasure_79.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_79;
    UnderlyingPriceUnitOfMeasureQty_79.setString("13368155");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_79);
    UnderlyingInstrument_79.insert(UnderlyingPriceUnitOfMeasureQty_79.getString());
    FIX::UnderlyingProduct UnderlyingProduct_79(1431608736);
    noUnderlyings_0_0.set(UnderlyingProduct_79);
    UnderlyingInstrument_79.insert(UnderlyingProduct_79.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_79(958482145);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_79);
    UnderlyingInstrument_79.insert(UnderlyingPutOrCall_79.getString());
    FIX::UnderlyingPx UnderlyingPx_79;
    UnderlyingPx_79.setString("12884857");
    noUnderlyings_0_0.set(UnderlyingPx_79);
    UnderlyingInstrument_79.insert(UnderlyingPx_79.getString());
    FIX::UnderlyingQty UnderlyingQty_79;
    UnderlyingQty_79.setString("16692526");
    noUnderlyings_0_0.set(UnderlyingQty_79);
    UnderlyingInstrument_79.insert(UnderlyingQty_79.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_79("LOCALMKTDATE_1821188891");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_79);
    UnderlyingInstrument_79.insert(UnderlyingRedemptionDate_79.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_79("STRING_204321391");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_79);
    UnderlyingInstrument_79.insert(UnderlyingRepoCollateralSecurityType_79.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_79;
    UnderlyingRepurchaseRate_79.setString("91.410000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_79);
    UnderlyingInstrument_79.insert(UnderlyingRepurchaseRate_79.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_79(1992922689);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_79);
    UnderlyingInstrument_79.insert(UnderlyingRepurchaseTerm_79.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_79("STRING_1370546322");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_79);
    UnderlyingInstrument_79.insert(UnderlyingRestructuringType_79.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_79("STRING_1349546702");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_79);
    UnderlyingInstrument_79.insert(UnderlyingSecurityDesc_79.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_79("EXCHANGE_747904593");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_79);
    UnderlyingInstrument_79.insert(UnderlyingSecurityExchange_79.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_79("STRING_1919930610");
    noUnderlyings_0_0.set(UnderlyingSecurityID_79);
    UnderlyingInstrument_79.insert(UnderlyingSecurityID_79.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_79("STRING_993606786");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_79);
    UnderlyingInstrument_79.insert(UnderlyingSecurityIDSource_79.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_79("STRING_475843187");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_79);
    UnderlyingInstrument_79.insert(UnderlyingSecuritySubType_79.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_79("STRING_1696633960");
    noUnderlyings_0_0.set(UnderlyingSecurityType_79);
    UnderlyingInstrument_79.insert(UnderlyingSecurityType_79.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_79("STRING_1035549988");
    noUnderlyings_0_0.set(UnderlyingSeniority_79);
    UnderlyingInstrument_79.insert(UnderlyingSeniority_79.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_79("STRING_599494473");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_79);
    UnderlyingInstrument_79.insert(UnderlyingSettlMethod_79.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_79(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_79);
    UnderlyingInstrument_79.insert(UnderlyingSettlementType_79.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_79;
    UnderlyingStartValue_79.setString("77115");
    noUnderlyings_0_0.set(UnderlyingStartValue_79);
    UnderlyingInstrument_79.insert(UnderlyingStartValue_79.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_79("STRING_460360656");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_79);
    UnderlyingInstrument_79.insert(UnderlyingStateOrProvinceOfIssue_79.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_79("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_79);
    UnderlyingInstrument_79.insert(UnderlyingStrikeCurrency_79.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_79;
    UnderlyingStrikePrice_79.setString("20972507");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_79);
    UnderlyingInstrument_79.insert(UnderlyingStrikePrice_79.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_79("STRING_932682502");
    noUnderlyings_0_0.set(UnderlyingSymbol_79);
    UnderlyingInstrument_79.insert(UnderlyingSymbol_79.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_79("STRING_1373811881");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_79);
    UnderlyingInstrument_79.insert(UnderlyingSymbolSfx_79.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_79("STRING_1283571451");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_79);
    UnderlyingInstrument_79.insert(UnderlyingTimeUnit_79.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_79("STRING_743059095");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_79);
    UnderlyingInstrument_79.insert(UnderlyingUnitOfMeasure_79.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_79;
    UnderlyingUnitOfMeasureQty_79.setString("3690007");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_79);
    UnderlyingInstrument_79.insert(UnderlyingUnitOfMeasureQty_79.getString());
    all_values.push_back(UnderlyingInstrument_79);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_157;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_157("STRING_1731423065");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_157);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_157.insert(UnderlyingSecurityAltID_157.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_157("STRING_1705816265");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_157);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_157.insert(UnderlyingSecurityAltIDSource_157.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_157);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_148;
      FIX::UnderlyingStipType UnderlyingStipType_148("STRING_542421562");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_148);
      UnderlyingStipulations_NoUnderlyingStips_148.insert(UnderlyingStipType_148.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_148("STRING_846818392");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_148);
      UnderlyingStipulations_NoUnderlyingStips_148.insert(UnderlyingStipValue_148.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_148);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_149;
      FIX::UnderlyingStipType UnderlyingStipType_149("STRING_1791384592");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_149);
      UnderlyingStipulations_NoUnderlyingStips_149.insert(UnderlyingStipType_149.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_149("STRING_216126805");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_149);
      UnderlyingStipulations_NoUnderlyingStips_149.insert(UnderlyingStipValue_149.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_149);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_158;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_158("STRING_989750086");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_158);
      UndlyInstrumentParties_NoUndlyInstrumentParties_158.insert(UnderlyingInstrumentPartyID_158.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_158('6');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_158);
      UndlyInstrumentParties_NoUndlyInstrumentParties_158.insert(UnderlyingInstrumentPartyIDSource_158.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_158(274202458);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_158);
      UndlyInstrumentParties_NoUndlyInstrumentParties_158.insert(UnderlyingInstrumentPartyRole_158.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_158);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_304("STRING_809470439");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_304);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304.insert(UnderlyingInstrumentPartySubID_304.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_304(46649420);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_304);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304.insert(UnderlyingInstrumentPartySubIDType_304.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_305("STRING_1185419926");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_305);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305.insert(UnderlyingInstrumentPartySubID_305.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_305(1285313626);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_305);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305.insert(UnderlyingInstrumentPartySubIDType_305.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_159;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_159("STRING_1743283380");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_159);
      UndlyInstrumentParties_NoUndlyInstrumentParties_159.insert(UnderlyingInstrumentPartyID_159.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_159('7');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_159);
      UndlyInstrumentParties_NoUndlyInstrumentParties_159.insert(UnderlyingInstrumentPartyIDSource_159.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_159(1884808099);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_159);
      UndlyInstrumentParties_NoUndlyInstrumentParties_159.insert(UnderlyingInstrumentPartyRole_159.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_159);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_306("STRING_81197836");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_306);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306.insert(UnderlyingInstrumentPartySubID_306.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_306(197685107);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_306);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306.insert(UnderlyingInstrumentPartySubIDType_306.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_160;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_160("STRING_78178570");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_160);
      UndlyInstrumentParties_NoUndlyInstrumentParties_160.insert(UnderlyingInstrumentPartyID_160.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_160('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_160);
      UndlyInstrumentParties_NoUndlyInstrumentParties_160.insert(UnderlyingInstrumentPartyIDSource_160.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_160(147452200);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_160);
      UndlyInstrumentParties_NoUndlyInstrumentParties_160.insert(UnderlyingInstrumentPartyRole_160.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_160);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_307("STRING_282813894");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_307);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307.insert(UnderlyingInstrumentPartySubID_307.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_307(1431023651);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_307);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307.insert(UnderlyingInstrumentPartySubIDType_307.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_308("STRING_1753920168");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_308);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308.insert(UnderlyingInstrumentPartySubID_308.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_308(651814629);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_308);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308.insert(UnderlyingInstrumentPartySubIDType_308.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_309("STRING_121546903");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_309);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309.insert(UnderlyingInstrumentPartySubID_309.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_309(1337859585);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_309);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309.insert(UnderlyingInstrumentPartySubIDType_309.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_80;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_80("DATA_210147247");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_80);
    UnderlyingInstrument_80.insert(EncodedUnderlyingIssuer_80.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_80(243678890);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_80);
    UnderlyingInstrument_80.insert(EncodedUnderlyingIssuerLen_80.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_80("DATA_1880281147");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_80);
    UnderlyingInstrument_80.insert(EncodedUnderlyingSecurityDesc_80.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_80(1056965639);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_80);
    UnderlyingInstrument_80.insert(EncodedUnderlyingSecurityDescLen_80.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_80;
    UnderlyingAdjustedQuantity_80.setString("20350634");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_80);
    UnderlyingInstrument_80.insert(UnderlyingAdjustedQuantity_80.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_80;
    UnderlyingAllocationPercent_80.setString("79.520000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_80);
    UnderlyingInstrument_80.insert(UnderlyingAllocationPercent_80.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_80;
    UnderlyingAttachmentPoint_80.setString("54.220000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_80);
    UnderlyingInstrument_80.insert(UnderlyingAttachmentPoint_80.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_80("STRING_877329921");
    noUnderlyings_0_1.set(UnderlyingCFICode_80);
    UnderlyingInstrument_80.insert(UnderlyingCFICode_80.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_80("STRING_10490150");
    noUnderlyings_0_1.set(UnderlyingCPProgram_80);
    UnderlyingInstrument_80.insert(UnderlyingCPProgram_80.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_80("STRING_234824232");
    noUnderlyings_0_1.set(UnderlyingCPRegType_80);
    UnderlyingInstrument_80.insert(UnderlyingCPRegType_80.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_80;
    UnderlyingCapValue_80.setString("10691430");
    noUnderlyings_0_1.set(UnderlyingCapValue_80);
    UnderlyingInstrument_80.insert(UnderlyingCapValue_80.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_80;
    UnderlyingCashAmount_80.setString("8199605");
    noUnderlyings_0_1.set(UnderlyingCashAmount_80);
    UnderlyingInstrument_80.insert(UnderlyingCashAmount_80.getString());
    FIX::UnderlyingCashType UnderlyingCashType_80("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_80);
    UnderlyingInstrument_80.insert(UnderlyingCashType_80.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_80;
    UnderlyingContractMultiplier_80.setString("1070793");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_80);
    UnderlyingInstrument_80.insert(UnderlyingContractMultiplier_80.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_80(2105274215);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_80);
    UnderlyingInstrument_80.insert(UnderlyingContractMultiplierUnit_80.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_80("COUNTRY_2024757033");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_80);
    UnderlyingInstrument_80.insert(UnderlyingCountryOfIssue_80.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_80("LOCALMKTDATE_180565606");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_80);
    UnderlyingInstrument_80.insert(UnderlyingCouponPaymentDate_80.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_80;
    UnderlyingCouponRate_80.setString("86.660000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_80);
    UnderlyingInstrument_80.insert(UnderlyingCouponRate_80.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_80("STRING_667014319");
    noUnderlyings_0_1.set(UnderlyingCreditRating_80);
    UnderlyingInstrument_80.insert(UnderlyingCreditRating_80.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_80("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_80);
    UnderlyingInstrument_80.insert(UnderlyingCurrency_80.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_80;
    UnderlyingCurrentValue_80.setString("7451928");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_80);
    UnderlyingInstrument_80.insert(UnderlyingCurrentValue_80.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_80;
    UnderlyingDetachmentPoint_80.setString("91.030000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_80);
    UnderlyingInstrument_80.insert(UnderlyingDetachmentPoint_80.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_80;
    UnderlyingDirtyPrice_80.setString("402523");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_80);
    UnderlyingInstrument_80.insert(UnderlyingDirtyPrice_80.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_80;
    UnderlyingEndPrice_80.setString("17560539");
    noUnderlyings_0_1.set(UnderlyingEndPrice_80);
    UnderlyingInstrument_80.insert(UnderlyingEndPrice_80.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_80;
    UnderlyingEndValue_80.setString("16010629");
    noUnderlyings_0_1.set(UnderlyingEndValue_80);
    UnderlyingInstrument_80.insert(UnderlyingEndValue_80.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_80(1471275977);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_80);
    UnderlyingInstrument_80.insert(UnderlyingExerciseStyle_80.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_80;
    UnderlyingFXRate_80.setString("13624904");
    noUnderlyings_0_1.set(UnderlyingFXRate_80);
    UnderlyingInstrument_80.insert(UnderlyingFXRate_80.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_80('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_80);
    UnderlyingInstrument_80.insert(UnderlyingFXRateCalc_80.getString());
    FIX::UnderlyingFactor UnderlyingFactor_80;
    UnderlyingFactor_80.setString("15928228");
    noUnderlyings_0_1.set(UnderlyingFactor_80);
    UnderlyingInstrument_80.insert(UnderlyingFactor_80.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_80(552866419);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_80);
    UnderlyingInstrument_80.insert(UnderlyingFlowScheduleType_80.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_80("STRING_315541225");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_80);
    UnderlyingInstrument_80.insert(UnderlyingInstrRegistry_80.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_80("LOCALMKTDATE_1836501771");
    noUnderlyings_0_1.set(UnderlyingIssueDate_80);
    UnderlyingInstrument_80.insert(UnderlyingIssueDate_80.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_80("STRING_285663918");
    noUnderlyings_0_1.set(UnderlyingIssuer_80);
    UnderlyingInstrument_80.insert(UnderlyingIssuer_80.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_80("STRING_1372506864");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_80);
    UnderlyingInstrument_80.insert(UnderlyingLocaleOfIssue_80.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_80("LOCALMKTDATE_1724081606");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_80);
    UnderlyingInstrument_80.insert(UnderlyingMaturityDate_80.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_80("MONTHYEAR_234588222");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_80);
    UnderlyingInstrument_80.insert(UnderlyingMaturityMonthYear_80.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_80("TZTIMEONLY_1333128639");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_80);
    UnderlyingInstrument_80.insert(UnderlyingMaturityTime_80.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_80;
    UnderlyingNotionalPercentageOutstanding_80.setString("78.790000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_80);
    UnderlyingInstrument_80.insert(UnderlyingNotionalPercentageOutstanding_80.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_80('2');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_80);
    UnderlyingInstrument_80.insert(UnderlyingOptAttribute_80.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_80;
    UnderlyingOriginalNotionalPercentageOutstanding_80.setString("28.710000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_80);
    UnderlyingInstrument_80.insert(UnderlyingOriginalNotionalPercentageOutstanding_80.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_80("STRING_1523070940");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_80);
    UnderlyingInstrument_80.insert(UnderlyingPriceUnitOfMeasure_80.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_80;
    UnderlyingPriceUnitOfMeasureQty_80.setString("10650389");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_80);
    UnderlyingInstrument_80.insert(UnderlyingPriceUnitOfMeasureQty_80.getString());
    FIX::UnderlyingProduct UnderlyingProduct_80(1849426524);
    noUnderlyings_0_1.set(UnderlyingProduct_80);
    UnderlyingInstrument_80.insert(UnderlyingProduct_80.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_80(1630150279);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_80);
    UnderlyingInstrument_80.insert(UnderlyingPutOrCall_80.getString());
    FIX::UnderlyingPx UnderlyingPx_80;
    UnderlyingPx_80.setString("10228295");
    noUnderlyings_0_1.set(UnderlyingPx_80);
    UnderlyingInstrument_80.insert(UnderlyingPx_80.getString());
    FIX::UnderlyingQty UnderlyingQty_80;
    UnderlyingQty_80.setString("17266999");
    noUnderlyings_0_1.set(UnderlyingQty_80);
    UnderlyingInstrument_80.insert(UnderlyingQty_80.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_80("LOCALMKTDATE_1810715885");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_80);
    UnderlyingInstrument_80.insert(UnderlyingRedemptionDate_80.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_80("STRING_717944546");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_80);
    UnderlyingInstrument_80.insert(UnderlyingRepoCollateralSecurityType_80.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_80;
    UnderlyingRepurchaseRate_80.setString("5.800000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_80);
    UnderlyingInstrument_80.insert(UnderlyingRepurchaseRate_80.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_80(2072479328);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_80);
    UnderlyingInstrument_80.insert(UnderlyingRepurchaseTerm_80.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_80("STRING_610744671");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_80);
    UnderlyingInstrument_80.insert(UnderlyingRestructuringType_80.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_80("STRING_991423470");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_80);
    UnderlyingInstrument_80.insert(UnderlyingSecurityDesc_80.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_80("EXCHANGE_1243244783");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_80);
    UnderlyingInstrument_80.insert(UnderlyingSecurityExchange_80.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_80("STRING_650996997");
    noUnderlyings_0_1.set(UnderlyingSecurityID_80);
    UnderlyingInstrument_80.insert(UnderlyingSecurityID_80.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_80("STRING_599993784");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_80);
    UnderlyingInstrument_80.insert(UnderlyingSecurityIDSource_80.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_80("STRING_696824132");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_80);
    UnderlyingInstrument_80.insert(UnderlyingSecuritySubType_80.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_80("STRING_2122272975");
    noUnderlyings_0_1.set(UnderlyingSecurityType_80);
    UnderlyingInstrument_80.insert(UnderlyingSecurityType_80.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_80("STRING_1962484266");
    noUnderlyings_0_1.set(UnderlyingSeniority_80);
    UnderlyingInstrument_80.insert(UnderlyingSeniority_80.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_80("STRING_802218110");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_80);
    UnderlyingInstrument_80.insert(UnderlyingSettlMethod_80.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_80(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_80);
    UnderlyingInstrument_80.insert(UnderlyingSettlementType_80.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_80;
    UnderlyingStartValue_80.setString("3678670");
    noUnderlyings_0_1.set(UnderlyingStartValue_80);
    UnderlyingInstrument_80.insert(UnderlyingStartValue_80.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_80("STRING_1117759336");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_80);
    UnderlyingInstrument_80.insert(UnderlyingStateOrProvinceOfIssue_80.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_80("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_80);
    UnderlyingInstrument_80.insert(UnderlyingStrikeCurrency_80.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_80;
    UnderlyingStrikePrice_80.setString("3427825");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_80);
    UnderlyingInstrument_80.insert(UnderlyingStrikePrice_80.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_80("STRING_833228288");
    noUnderlyings_0_1.set(UnderlyingSymbol_80);
    UnderlyingInstrument_80.insert(UnderlyingSymbol_80.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_80("STRING_888119177");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_80);
    UnderlyingInstrument_80.insert(UnderlyingSymbolSfx_80.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_80("STRING_1675911191");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_80);
    UnderlyingInstrument_80.insert(UnderlyingTimeUnit_80.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_80("STRING_1287156167");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_80);
    UnderlyingInstrument_80.insert(UnderlyingUnitOfMeasure_80.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_80;
    UnderlyingUnitOfMeasureQty_80.setString("11331975");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_80);
    UnderlyingInstrument_80.insert(UnderlyingUnitOfMeasureQty_80.getString());
    all_values.push_back(UnderlyingInstrument_80);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_158;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_158("STRING_662743459");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_158);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_158.insert(UnderlyingSecurityAltID_158.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_158("STRING_50752862");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_158);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_158.insert(UnderlyingSecurityAltIDSource_158.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_158);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_159;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_159("STRING_798323291");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_159);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_159.insert(UnderlyingSecurityAltID_159.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_159("STRING_145410091");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_159);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_159.insert(UnderlyingSecurityAltIDSource_159.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_159);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_150;
      FIX::UnderlyingStipType UnderlyingStipType_150("STRING_377539552");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_150);
      UnderlyingStipulations_NoUnderlyingStips_150.insert(UnderlyingStipType_150.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_150("STRING_1956125976");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_150);
      UnderlyingStipulations_NoUnderlyingStips_150.insert(UnderlyingStipValue_150.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_150);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_151;
      FIX::UnderlyingStipType UnderlyingStipType_151("STRING_1791526936");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_151);
      UnderlyingStipulations_NoUnderlyingStips_151.insert(UnderlyingStipType_151.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_151("STRING_623770132");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_151);
      UnderlyingStipulations_NoUnderlyingStips_151.insert(UnderlyingStipValue_151.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_151);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_152;
      FIX::UnderlyingStipType UnderlyingStipType_152("STRING_1881121656");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_152);
      UnderlyingStipulations_NoUnderlyingStips_152.insert(UnderlyingStipType_152.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_152("STRING_254787959");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_152);
      UnderlyingStipulations_NoUnderlyingStips_152.insert(UnderlyingStipValue_152.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_152);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_161;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_161("STRING_976882791");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_161);
      UndlyInstrumentParties_NoUndlyInstrumentParties_161.insert(UnderlyingInstrumentPartyID_161.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_161('9');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_161);
      UndlyInstrumentParties_NoUndlyInstrumentParties_161.insert(UnderlyingInstrumentPartyIDSource_161.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_161(67703738);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_161);
      UndlyInstrumentParties_NoUndlyInstrumentParties_161.insert(UnderlyingInstrumentPartyRole_161.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_161);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_310("STRING_880574284");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_310);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310.insert(UnderlyingInstrumentPartySubID_310.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_310(2030188004);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_310);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310.insert(UnderlyingInstrumentPartySubIDType_310.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_311("STRING_328441386");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_311);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311.insert(UnderlyingInstrumentPartySubID_311.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_311(300702843);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_311);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311.insert(UnderlyingInstrumentPartySubIDType_311.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_312("STRING_250571393");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_312);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312.insert(UnderlyingInstrumentPartySubID_312.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_312(1446200722);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_312);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312.insert(UnderlyingInstrumentPartySubIDType_312.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_162;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_162("STRING_1557333174");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_162);
      UndlyInstrumentParties_NoUndlyInstrumentParties_162.insert(UnderlyingInstrumentPartyID_162.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_162('9');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_162);
      UndlyInstrumentParties_NoUndlyInstrumentParties_162.insert(UnderlyingInstrumentPartyIDSource_162.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_162(1788983274);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_162);
      UndlyInstrumentParties_NoUndlyInstrumentParties_162.insert(UnderlyingInstrumentPartyRole_162.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_162);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_313("STRING_1792221525");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_313);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313.insert(UnderlyingInstrumentPartySubID_313.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_313(1317410818);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_313);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313.insert(UnderlyingInstrumentPartySubIDType_313.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
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
