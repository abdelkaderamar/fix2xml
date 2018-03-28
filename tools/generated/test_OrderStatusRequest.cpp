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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> OrderStatusRequest_0;
  FIX::Account Account_23("STRING_1589148624");
  msg.set(Account_23);
  OrderStatusRequest_0.insert(Account_23.getString());
  FIX::AcctIDSource AcctIDSource_16(2);
  msg.set(AcctIDSource_16);
  OrderStatusRequest_0.insert(AcctIDSource_16.getString());
  FIX::ClOrdID ClOrdID_40("STRING_83033257");
  msg.set(ClOrdID_40);
  OrderStatusRequest_0.insert(ClOrdID_40.getString());
  FIX::ClOrdLinkID ClOrdLinkID_14("STRING_1987471973");
  msg.set(ClOrdLinkID_14);
  OrderStatusRequest_0.insert(ClOrdLinkID_14.getString());
  FIX::OrdStatusReqID OrdStatusReqID_1("STRING_1045743389");
  msg.set(OrdStatusReqID_1);
  OrderStatusRequest_0.insert(OrdStatusReqID_1.getString());
  FIX::OrderID OrderID_32("STRING_2055749240");
  msg.set(OrderID_32);
  OrderStatusRequest_0.insert(OrderID_32.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_38("STRING_1031052521");
  msg.set(SecondaryClOrdID_38);
  OrderStatusRequest_0.insert(SecondaryClOrdID_38.getString());
  FIX::Side Side_33('B');
  msg.set(Side_33);
  OrderStatusRequest_0.insert(Side_33.getString());
  all_values.push_back(OrderStatusRequest_0);

  // FinancingDetails
  multiset<string> FinancingDetails_15;
  FIX::AgreementCurrency AgreementCurrency_15("EUR");
  msg.set(AgreementCurrency_15);
  FinancingDetails_15.insert(AgreementCurrency_15.getString());
  FIX::AgreementDate AgreementDate_15("LOCALMKTDATE_252922522");
  msg.set(AgreementDate_15);
  FinancingDetails_15.insert(AgreementDate_15.getString());
  FIX::AgreementDesc AgreementDesc_15("STRING_1074427672");
  msg.set(AgreementDesc_15);
  FinancingDetails_15.insert(AgreementDesc_15.getString());
  FIX::AgreementID AgreementID_15("STRING_412147276");
  msg.set(AgreementID_15);
  FinancingDetails_15.insert(AgreementID_15.getString());
  FIX::DeliveryType DeliveryType_15(2);
  msg.set(DeliveryType_15);
  FinancingDetails_15.insert(DeliveryType_15.getString());
  FIX::EndDate EndDate_15("LOCALMKTDATE_1252986784");
  msg.set(EndDate_15);
  FinancingDetails_15.insert(EndDate_15.getString());
  FIX::MarginRatio MarginRatio_15;
  MarginRatio_15.setString("88.880000");
  msg.set(MarginRatio_15);
  FinancingDetails_15.insert(MarginRatio_15.getString());
  FIX::StartDate StartDate_15("LOCALMKTDATE_1302823896");
  msg.set(StartDate_15);
  FinancingDetails_15.insert(StartDate_15.getString());
  FIX::TerminationType TerminationType_15(2);
  msg.set(TerminationType_15);
  FinancingDetails_15.insert(TerminationType_15.getString());
  all_values.push_back(FinancingDetails_15);

  // Instrument
  multiset<string> Instrument_61;
  FIX::AttachmentPoint AttachmentPoint_61;
  AttachmentPoint_61.setString("59.550000");
  msg.set(AttachmentPoint_61);
  Instrument_61.insert(AttachmentPoint_61.getString());
  FIX::CFICode CFICode_61("STRING_253872856");
  msg.set(CFICode_61);
  Instrument_61.insert(CFICode_61.getString());
  FIX::CPProgram CPProgram_61(1);
  msg.set(CPProgram_61);
  Instrument_61.insert(CPProgram_61.getString());
  FIX::CPRegType CPRegType_61("STRING_1227874718");
  msg.set(CPRegType_61);
  Instrument_61.insert(CPRegType_61.getString());
  FIX::CapPrice CapPrice_61;
  CapPrice_61.setString("10674703");
  msg.set(CapPrice_61);
  Instrument_61.insert(CapPrice_61.getString());
  FIX::ContractMultiplier ContractMultiplier_61;
  ContractMultiplier_61.setString("5168628");
  msg.set(ContractMultiplier_61);
  Instrument_61.insert(ContractMultiplier_61.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_61(1);
  msg.set(ContractMultiplierUnit_61);
  Instrument_61.insert(ContractMultiplierUnit_61.getString());
  FIX::ContractSettlMonth ContractSettlMonth_61("MONTHYEAR_1614452345");
  msg.set(ContractSettlMonth_61);
  Instrument_61.insert(ContractSettlMonth_61.getString());
  FIX::CountryOfIssue CountryOfIssue_61("COUNTRY_892879538");
  msg.set(CountryOfIssue_61);
  Instrument_61.insert(CountryOfIssue_61.getString());
  FIX::CouponPaymentDate CouponPaymentDate_61("LOCALMKTDATE_1417584120");
  msg.set(CouponPaymentDate_61);
  Instrument_61.insert(CouponPaymentDate_61.getString());
  FIX::CouponRate CouponRate_61;
  CouponRate_61.setString("52.580000");
  msg.set(CouponRate_61);
  Instrument_61.insert(CouponRate_61.getString());
  FIX::CreditRating CreditRating_61("STRING_560402463");
  msg.set(CreditRating_61);
  Instrument_61.insert(CreditRating_61.getString());
  FIX::DatedDate DatedDate_61("LOCALMKTDATE_1455625358");
  msg.set(DatedDate_61);
  Instrument_61.insert(DatedDate_61.getString());
  FIX::DetachmentPoint DetachmentPoint_61;
  DetachmentPoint_61.setString("2.350000");
  msg.set(DetachmentPoint_61);
  Instrument_61.insert(DetachmentPoint_61.getString());
  FIX::EncodedIssuer EncodedIssuer_61("DATA_2023776244");
  msg.set(EncodedIssuer_61);
  Instrument_61.insert(EncodedIssuer_61.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_61(1538658616);
  msg.set(EncodedIssuerLen_61);
  Instrument_61.insert(EncodedIssuerLen_61.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_61("DATA_726618560");
  msg.set(EncodedSecurityDesc_61);
  Instrument_61.insert(EncodedSecurityDesc_61.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_61(922035985);
  msg.set(EncodedSecurityDescLen_61);
  Instrument_61.insert(EncodedSecurityDescLen_61.getString());
  FIX::ExerciseStyle ExerciseStyle_61(1);
  msg.set(ExerciseStyle_61);
  Instrument_61.insert(ExerciseStyle_61.getString());
  FIX::Factor Factor_61;
  Factor_61.setString("17576710");
  msg.set(Factor_61);
  Instrument_61.insert(Factor_61.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_61(false);
  msg.set(FlexProductEligibilityIndicator_61);
  Instrument_61.insert(FlexProductEligibilityIndicator_61.getString());
  FIX::FlexibleIndicator FlexibleIndicator_61(false);
  msg.set(FlexibleIndicator_61);
  Instrument_61.insert(FlexibleIndicator_61.getString());
  FIX::FloorPrice FloorPrice_61;
  FloorPrice_61.setString("292200");
  msg.set(FloorPrice_61);
  Instrument_61.insert(FloorPrice_61.getString());
  FIX::FlowScheduleType FlowScheduleType_61(1);
  msg.set(FlowScheduleType_61);
  Instrument_61.insert(FlowScheduleType_61.getString());
  FIX::InstrRegistry InstrRegistry_61("STRING_643863598");
  msg.set(InstrRegistry_61);
  Instrument_61.insert(InstrRegistry_61.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_61('4');
  msg.set(InstrmtAssignmentMethod_61);
  Instrument_61.insert(InstrmtAssignmentMethod_61.getString());
  FIX::InterestAccrualDate InterestAccrualDate_61("LOCALMKTDATE_220675972");
  msg.set(InterestAccrualDate_61);
  Instrument_61.insert(InterestAccrualDate_61.getString());
  FIX::IssueDate IssueDate_61("LOCALMKTDATE_1896850382");
  msg.set(IssueDate_61);
  Instrument_61.insert(IssueDate_61.getString());
  FIX::Issuer Issuer_61("STRING_2006776213");
  msg.set(Issuer_61);
  Instrument_61.insert(Issuer_61.getString());
  FIX::ListMethod ListMethod_61(0);
  msg.set(ListMethod_61);
  Instrument_61.insert(ListMethod_61.getString());
  FIX::LocaleOfIssue LocaleOfIssue_61("STRING_901968984");
  msg.set(LocaleOfIssue_61);
  Instrument_61.insert(LocaleOfIssue_61.getString());
  FIX::MaturityDate MaturityDate_61("LOCALMKTDATE_1663908520");
  msg.set(MaturityDate_61);
  Instrument_61.insert(MaturityDate_61.getString());
  FIX::MaturityMonthYear MaturityMonthYear_61("MONTHYEAR_1777372724");
  msg.set(MaturityMonthYear_61);
  Instrument_61.insert(MaturityMonthYear_61.getString());
  FIX::MaturityTime MaturityTime_61("TZTIMEONLY_159336136");
  msg.set(MaturityTime_61);
  Instrument_61.insert(MaturityTime_61.getString());
  FIX::MinPriceIncrement MinPriceIncrement_61;
  MinPriceIncrement_61.setString("7442995");
  msg.set(MinPriceIncrement_61);
  Instrument_61.insert(MinPriceIncrement_61.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_61;
  MinPriceIncrementAmount_61.setString("6973594");
  msg.set(MinPriceIncrementAmount_61);
  Instrument_61.insert(MinPriceIncrementAmount_61.getString());
  FIX::NTPositionLimit NTPositionLimit_61(676198964);
  msg.set(NTPositionLimit_61);
  Instrument_61.insert(NTPositionLimit_61.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_61;
  NotionalPercentageOutstanding_61.setString("26.550000");
  msg.set(NotionalPercentageOutstanding_61);
  Instrument_61.insert(NotionalPercentageOutstanding_61.getString());
  FIX::OptAttribute OptAttribute_61('1');
  msg.set(OptAttribute_61);
  Instrument_61.insert(OptAttribute_61.getString());
  FIX::OptPayoutAmount OptPayoutAmount_61;
  OptPayoutAmount_61.setString("15690785");
  msg.set(OptPayoutAmount_61);
  Instrument_61.insert(OptPayoutAmount_61.getString());
  FIX::OptPayoutType OptPayoutType_61(2);
  msg.set(OptPayoutType_61);
  Instrument_61.insert(OptPayoutType_61.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_61;
  OriginalNotionalPercentageOutstanding_61.setString("34.210000");
  msg.set(OriginalNotionalPercentageOutstanding_61);
  Instrument_61.insert(OriginalNotionalPercentageOutstanding_61.getString());
  FIX::Pool Pool_61("STRING_2129480966");
  msg.set(Pool_61);
  Instrument_61.insert(Pool_61.getString());
  FIX::PositionLimit PositionLimit_61(31684837);
  msg.set(PositionLimit_61);
  Instrument_61.insert(PositionLimit_61.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_61("STRING_STD");
  msg.set(PriceQuoteMethod_61);
  Instrument_61.insert(PriceQuoteMethod_61.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_61("STRING_2005773562");
  msg.set(PriceUnitOfMeasure_61);
  Instrument_61.insert(PriceUnitOfMeasure_61.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_61;
  PriceUnitOfMeasureQty_61.setString("15703434");
  msg.set(PriceUnitOfMeasureQty_61);
  Instrument_61.insert(PriceUnitOfMeasureQty_61.getString());
  FIX::Product Product_63(13);
  msg.set(Product_63);
  Instrument_61.insert(Product_63.getString());
  FIX::ProductComplex ProductComplex_61("STRING_780325899");
  msg.set(ProductComplex_61);
  Instrument_61.insert(ProductComplex_61.getString());
  FIX::PutOrCall PutOrCall_61(0);
  msg.set(PutOrCall_61);
  Instrument_61.insert(PutOrCall_61.getString());
  FIX::RedemptionDate RedemptionDate_61("LOCALMKTDATE_685246002");
  msg.set(RedemptionDate_61);
  Instrument_61.insert(RedemptionDate_61.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_61("STRING_1282803079");
  msg.set(RepoCollateralSecurityType_61);
  Instrument_61.insert(RepoCollateralSecurityType_61.getString());
  FIX::RepurchaseRate RepurchaseRate_61;
  RepurchaseRate_61.setString("99.390000");
  msg.set(RepurchaseRate_61);
  Instrument_61.insert(RepurchaseRate_61.getString());
  FIX::RepurchaseTerm RepurchaseTerm_61(714466051);
  msg.set(RepurchaseTerm_61);
  Instrument_61.insert(RepurchaseTerm_61.getString());
  FIX::RestructuringType RestructuringType_61("STRING_FR");
  msg.set(RestructuringType_61);
  Instrument_61.insert(RestructuringType_61.getString());
  FIX::SecurityDesc SecurityDesc_61("STRING_1083083537");
  msg.set(SecurityDesc_61);
  Instrument_61.insert(SecurityDesc_61.getString());
  FIX::SecurityExchange SecurityExchange_61("EXCHANGE_1155833376");
  msg.set(SecurityExchange_61);
  Instrument_61.insert(SecurityExchange_61.getString());
  FIX::SecurityGroup SecurityGroup_61("STRING_111395104");
  msg.set(SecurityGroup_61);
  Instrument_61.insert(SecurityGroup_61.getString());
  FIX::SecurityID SecurityID_61("STRING_832450272");
  msg.set(SecurityID_61);
  Instrument_61.insert(SecurityID_61.getString());
  FIX::SecurityIDSource SecurityIDSource_61("STRING_6");
  msg.set(SecurityIDSource_61);
  Instrument_61.insert(SecurityIDSource_61.getString());
  FIX::SecurityStatus SecurityStatus_61("STRING_1");
  msg.set(SecurityStatus_61);
  Instrument_61.insert(SecurityStatus_61.getString());
  FIX::SecuritySubType SecuritySubType_62("STRING_1734419256");
  msg.set(SecuritySubType_62);
  Instrument_61.insert(SecuritySubType_62.getString());
  FIX::SecurityType SecurityType_63("STRING_WAR");
  msg.set(SecurityType_63);
  Instrument_61.insert(SecurityType_63.getString());
  FIX::Seniority Seniority_61("STRING_SB");
  msg.set(Seniority_61);
  Instrument_61.insert(Seniority_61.getString());
  FIX::SettlMethod SettlMethod_61('C');
  msg.set(SettlMethod_61);
  Instrument_61.insert(SettlMethod_61.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_61("STRING_1275850404");
  msg.set(SettleOnOpenFlag_61);
  Instrument_61.insert(SettleOnOpenFlag_61.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_61("STRING_1962143513");
  msg.set(StateOrProvinceOfIssue_61);
  Instrument_61.insert(StateOrProvinceOfIssue_61.getString());
  FIX::StrikeCurrency StrikeCurrency_61("EUR");
  msg.set(StrikeCurrency_61);
  Instrument_61.insert(StrikeCurrency_61.getString());
  FIX::StrikeMultiplier StrikeMultiplier_61;
  StrikeMultiplier_61.setString("21264716");
  msg.set(StrikeMultiplier_61);
  Instrument_61.insert(StrikeMultiplier_61.getString());
  FIX::StrikePrice StrikePrice_61;
  StrikePrice_61.setString("19915492");
  msg.set(StrikePrice_61);
  Instrument_61.insert(StrikePrice_61.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_61(4);
  msg.set(StrikePriceBoundaryMethod_61);
  Instrument_61.insert(StrikePriceBoundaryMethod_61.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_61;
  StrikePriceBoundaryPrecision_61.setString("14.490000");
  msg.set(StrikePriceBoundaryPrecision_61);
  Instrument_61.insert(StrikePriceBoundaryPrecision_61.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_61(2);
  msg.set(StrikePriceDeterminationMethod_61);
  Instrument_61.insert(StrikePriceDeterminationMethod_61.getString());
  FIX::StrikeValue StrikeValue_61;
  StrikeValue_61.setString("13370373");
  msg.set(StrikeValue_61);
  Instrument_61.insert(StrikeValue_61.getString());
  FIX::Symbol Symbol_61("STRING_1936721457");
  msg.set(Symbol_61);
  Instrument_61.insert(Symbol_61.getString());
  FIX::SymbolSfx SymbolSfx_61("STRING_WI");
  msg.set(SymbolSfx_61);
  Instrument_61.insert(SymbolSfx_61.getString());
  FIX::TimeUnit TimeUnit_61("STRING_Min");
  msg.set(TimeUnit_61);
  Instrument_61.insert(TimeUnit_61.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_61(2);
  msg.set(UnderlyingPriceDeterminationMethod_61);
  Instrument_61.insert(UnderlyingPriceDeterminationMethod_61.getString());
  FIX::UnitOfMeasure UnitOfMeasure_61("STRING_Bcf");
  msg.set(UnitOfMeasure_61);
  Instrument_61.insert(UnitOfMeasure_61.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_61;
  UnitOfMeasureQty_61.setString("16296811");
  msg.set(UnitOfMeasureQty_61);
  Instrument_61.insert(UnitOfMeasureQty_61.getString());
  FIX::ValuationMethod ValuationMethod_61("STRING_CDSD");
  msg.set(ValuationMethod_61);
  Instrument_61.insert(ValuationMethod_61.getString());
  all_values.push_back(Instrument_61);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_118;
    FIX::ComplexEventCondition ComplexEventCondition_118(2);
    noComplexEvents_0_0.set(ComplexEventCondition_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventCondition_118.getString());
    FIX::ComplexEventPrice ComplexEventPrice_118;
    ComplexEventPrice_118.setString("1165247");
    noComplexEvents_0_0.set(ComplexEventPrice_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventPrice_118.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_118(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventPriceBoundaryMethod_118.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_118;
    ComplexEventPriceBoundaryPrecision_118.setString("10.240000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventPriceBoundaryPrecision_118.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_118(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventPriceTimeType_118.getString());
    FIX::ComplexEventType ComplexEventType_118(8);
    noComplexEvents_0_0.set(ComplexEventType_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventType_118.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_118;
    ComplexOptPayoutAmount_118.setString("18369512");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexOptPayoutAmount_118.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_118);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_245;
      FIX::ComplexEventEndDate ComplexEventEndDate_245(FIX::UTCTIMESTAMP(0, 6, 56, 8, 7, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_245);
      ComplexEventDates_NoComplexEventDates_245.insert(ComplexEventEndDate_245.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_245(FIX::UTCTIMESTAMP(18, 9, 20, 4, 3, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_245);
      ComplexEventDates_NoComplexEventDates_245.insert(ComplexEventStartDate_245.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_245);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_491;
        FIX::ComplexEventEndTime ComplexEventEndTime_491(FIX::UTCTIMEONLY(13, 42, 57));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_491);
        ComplexEventTimes_NoComplexEventTimes_491.insert(ComplexEventEndTime_491.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_491(FIX::UTCTIMEONLY(13, 16, 38));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_491);
        ComplexEventTimes_NoComplexEventTimes_491.insert(ComplexEventStartTime_491.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_491);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_492;
        FIX::ComplexEventEndTime ComplexEventEndTime_492(FIX::UTCTIMEONLY(11, 57, 1));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_492);
        ComplexEventTimes_NoComplexEventTimes_492.insert(ComplexEventEndTime_492.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_492(FIX::UTCTIMEONLY(8, 49, 1));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_492);
        ComplexEventTimes_NoComplexEventTimes_492.insert(ComplexEventStartTime_492.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_492);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_246;
      FIX::ComplexEventEndDate ComplexEventEndDate_246(FIX::UTCTIMESTAMP(6, 7, 11, 22, 7, 2011));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_246);
      ComplexEventDates_NoComplexEventDates_246.insert(ComplexEventEndDate_246.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_246(FIX::UTCTIMESTAMP(0, 2, 56, 8, 10, 2004));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_246);
      ComplexEventDates_NoComplexEventDates_246.insert(ComplexEventStartDate_246.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_246);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_493;
        FIX::ComplexEventEndTime ComplexEventEndTime_493(FIX::UTCTIMEONLY(11, 3, 49));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_493);
        ComplexEventTimes_NoComplexEventTimes_493.insert(ComplexEventEndTime_493.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_493(FIX::UTCTIMEONLY(8, 58, 50));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_493);
        ComplexEventTimes_NoComplexEventTimes_493.insert(ComplexEventStartTime_493.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_493);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_119;
    FIX::ComplexEventCondition ComplexEventCondition_119(2);
    noComplexEvents_0_1.set(ComplexEventCondition_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventCondition_119.getString());
    FIX::ComplexEventPrice ComplexEventPrice_119;
    ComplexEventPrice_119.setString("6271051");
    noComplexEvents_0_1.set(ComplexEventPrice_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventPrice_119.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_119(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventPriceBoundaryMethod_119.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_119;
    ComplexEventPriceBoundaryPrecision_119.setString("77.140000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventPriceBoundaryPrecision_119.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_119(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventPriceTimeType_119.getString());
    FIX::ComplexEventType ComplexEventType_119(8);
    noComplexEvents_0_1.set(ComplexEventType_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventType_119.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_119;
    ComplexOptPayoutAmount_119.setString("14268886");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexOptPayoutAmount_119.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_119);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_247;
      FIX::ComplexEventEndDate ComplexEventEndDate_247(FIX::UTCTIMESTAMP(21, 51, 18, 12, 10, 2015));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_247);
      ComplexEventDates_NoComplexEventDates_247.insert(ComplexEventEndDate_247.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_247(FIX::UTCTIMESTAMP(1, 58, 11, 2, 8, 2003));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_247);
      ComplexEventDates_NoComplexEventDates_247.insert(ComplexEventStartDate_247.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_247);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_494;
        FIX::ComplexEventEndTime ComplexEventEndTime_494(FIX::UTCTIMEONLY(21, 34, 5));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_494);
        ComplexEventTimes_NoComplexEventTimes_494.insert(ComplexEventEndTime_494.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_494(FIX::UTCTIMEONLY(10, 55, 3));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_494);
        ComplexEventTimes_NoComplexEventTimes_494.insert(ComplexEventStartTime_494.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_494);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_248;
      FIX::ComplexEventEndDate ComplexEventEndDate_248(FIX::UTCTIMESTAMP(20, 43, 57, 26, 7, 2007));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_248);
      ComplexEventDates_NoComplexEventDates_248.insert(ComplexEventEndDate_248.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_248(FIX::UTCTIMESTAMP(21, 58, 18, 4, 3, 2001));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_248);
      ComplexEventDates_NoComplexEventDates_248.insert(ComplexEventStartDate_248.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_248);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_495;
        FIX::ComplexEventEndTime ComplexEventEndTime_495(FIX::UTCTIMEONLY(13, 9, 57));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_495);
        ComplexEventTimes_NoComplexEventTimes_495.insert(ComplexEventEndTime_495.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_495(FIX::UTCTIMEONLY(20, 19, 42));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_495);
        ComplexEventTimes_NoComplexEventTimes_495.insert(ComplexEventStartTime_495.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_495);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_496;
        FIX::ComplexEventEndTime ComplexEventEndTime_496(FIX::UTCTIMEONLY(20, 16, 45));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_496);
        ComplexEventTimes_NoComplexEventTimes_496.insert(ComplexEventEndTime_496.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_496(FIX::UTCTIMEONLY(14, 40, 36));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_496);
        ComplexEventTimes_NoComplexEventTimes_496.insert(ComplexEventStartTime_496.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_496);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_497;
        FIX::ComplexEventEndTime ComplexEventEndTime_497(FIX::UTCTIMEONLY(12, 19, 19));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_497);
        ComplexEventTimes_NoComplexEventTimes_497.insert(ComplexEventEndTime_497.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_497(FIX::UTCTIMEONLY(6, 36, 17));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_497);
        ComplexEventTimes_NoComplexEventTimes_497.insert(ComplexEventStartTime_497.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_497);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderStatusRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_120;
    FIX::ComplexEventCondition ComplexEventCondition_120(2);
    noComplexEvents_0_2.set(ComplexEventCondition_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventCondition_120.getString());
    FIX::ComplexEventPrice ComplexEventPrice_120;
    ComplexEventPrice_120.setString("15252563");
    noComplexEvents_0_2.set(ComplexEventPrice_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventPrice_120.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_120(3);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventPriceBoundaryMethod_120.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_120;
    ComplexEventPriceBoundaryPrecision_120.setString("13.590000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventPriceBoundaryPrecision_120.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_120(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventPriceTimeType_120.getString());
    FIX::ComplexEventType ComplexEventType_120(3);
    noComplexEvents_0_2.set(ComplexEventType_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventType_120.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_120;
    ComplexOptPayoutAmount_120.setString("17771686");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexOptPayoutAmount_120.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_120);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_249;
      FIX::ComplexEventEndDate ComplexEventEndDate_249(FIX::UTCTIMESTAMP(12, 49, 54, 5, 9, 2000));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_249);
      ComplexEventDates_NoComplexEventDates_249.insert(ComplexEventEndDate_249.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_249(FIX::UTCTIMESTAMP(4, 44, 18, 1, 12, 2004));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_249);
      ComplexEventDates_NoComplexEventDates_249.insert(ComplexEventStartDate_249.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_249);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_498;
        FIX::ComplexEventEndTime ComplexEventEndTime_498(FIX::UTCTIMEONLY(2, 41, 44));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_498);
        ComplexEventTimes_NoComplexEventTimes_498.insert(ComplexEventEndTime_498.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_498(FIX::UTCTIMEONLY(11, 21, 5));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_498);
        ComplexEventTimes_NoComplexEventTimes_498.insert(ComplexEventStartTime_498.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_498);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_499;
        FIX::ComplexEventEndTime ComplexEventEndTime_499(FIX::UTCTIMEONLY(12, 32, 18));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_499);
        ComplexEventTimes_NoComplexEventTimes_499.insert(ComplexEventEndTime_499.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_499(FIX::UTCTIMEONLY(15, 21, 45));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_499);
        ComplexEventTimes_NoComplexEventTimes_499.insert(ComplexEventStartTime_499.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_499);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_500;
        FIX::ComplexEventEndTime ComplexEventEndTime_500(FIX::UTCTIMEONLY(21, 34, 45));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_500);
        ComplexEventTimes_NoComplexEventTimes_500.insert(ComplexEventEndTime_500.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_500(FIX::UTCTIMEONLY(10, 21, 43));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_500);
        ComplexEventTimes_NoComplexEventTimes_500.insert(ComplexEventStartTime_500.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_500);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_124;
    FIX::EventDate EventDate_124("LOCALMKTDATE_1959537966");
    noEvents_0_0.set(EventDate_124);
    EvntGrp_NoEvents_124.insert(EventDate_124.getString());
    FIX::EventPx EventPx_124;
    EventPx_124.setString("15461020");
    noEvents_0_0.set(EventPx_124);
    EvntGrp_NoEvents_124.insert(EventPx_124.getString());
    FIX::EventText EventText_124("STRING_381964067");
    noEvents_0_0.set(EventText_124);
    EvntGrp_NoEvents_124.insert(EventText_124.getString());
    FIX::EventTime EventTime_124(FIX::UTCTIMESTAMP(15, 16, 34, 21, 2, 2000));
    noEvents_0_0.set(EventTime_124);
    EvntGrp_NoEvents_124.insert(EventTime_124.getString());
    FIX::EventType EventType_124(15);
    noEvents_0_0.set(EventType_124);
    EvntGrp_NoEvents_124.insert(EventType_124.getString());
    all_values.push_back(EvntGrp_NoEvents_124);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_127;
    FIX::InstrumentPartyID InstrumentPartyID_127("STRING_286505731");
    noInstrumentParties_0_0.set(InstrumentPartyID_127);
    InstrumentParties_NoInstrumentParties_127.insert(InstrumentPartyID_127.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_127('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_127);
    InstrumentParties_NoInstrumentParties_127.insert(InstrumentPartyIDSource_127.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_127(1488811543);
    noInstrumentParties_0_0.set(InstrumentPartyRole_127);
    InstrumentParties_NoInstrumentParties_127.insert(InstrumentPartyRole_127.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_127);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268;
      FIX::InstrumentPartySubID InstrumentPartySubID_268("STRING_114687316");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_268);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268.insert(InstrumentPartySubID_268.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_268(1384260653);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_268);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268.insert(InstrumentPartySubIDType_268.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269;
      FIX::InstrumentPartySubID InstrumentPartySubID_269("STRING_1534256293");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_269);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269.insert(InstrumentPartySubID_269.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_269(1258323211);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_269);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269.insert(InstrumentPartySubIDType_269.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_138;
    FIX::SecurityAltID SecurityAltID_138("STRING_953099270");
    noSecurityAltID_0_0.set(SecurityAltID_138);
    SecAltIDGrp_NoSecurityAltID_138.insert(SecurityAltID_138.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_138("STRING_694031241");
    noSecurityAltID_0_0.set(SecurityAltIDSource_138);
    SecAltIDGrp_NoSecurityAltID_138.insert(SecurityAltIDSource_138.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_138);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_122;
  FIX::SecurityXML SecurityXML_123("XMLDATA_475021291");
  msg.set(SecurityXML_123);
  FIX::SecurityXMLLen SecurityXMLLen_61(840329896);
  msg.set(SecurityXMLLen_61);
  FIX::SecurityXMLSchema SecurityXMLSchema_61("STRING_1157286786");
  msg.set(SecurityXMLSchema_61);
  SecurityXML_122.insert(SecurityXMLSchema_61.getString());
  all_values.push_back(SecurityXML_122);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_87;
    FIX::PartyID PartyID_87("STRING_2001930530");
    noPartyIDs_0_0.set(PartyID_87);
    Parties_NoPartyIDs_87.insert(PartyID_87.getString());
    FIX::PartyIDSource PartyIDSource_87('4');
    noPartyIDs_0_0.set(PartyIDSource_87);
    Parties_NoPartyIDs_87.insert(PartyIDSource_87.getString());
    FIX::PartyRole PartyRole_87(51);
    noPartyIDs_0_0.set(PartyRole_87);
    Parties_NoPartyIDs_87.insert(PartyRole_87.getString());
    all_values.push_back(Parties_NoPartyIDs_87);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_181;
      FIX::PartySubID PartySubID_181("STRING_373900278");
      noPartySubIDs_0_1_0.set(PartySubID_181);
      PtysSubGrp_NoPartySubIDs_181.insert(PartySubID_181.getString());
      FIX::PartySubIDType PartySubIDType_181(28);
      noPartySubIDs_0_1_0.set(PartySubIDType_181);
      PtysSubGrp_NoPartySubIDs_181.insert(PartySubIDType_181.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_181);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_82;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_82("DATA_72574219");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_82);
    UnderlyingInstrument_82.insert(EncodedUnderlyingIssuer_82.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_82(1400611030);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_82);
    UnderlyingInstrument_82.insert(EncodedUnderlyingIssuerLen_82.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_82("DATA_125986651");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_82);
    UnderlyingInstrument_82.insert(EncodedUnderlyingSecurityDesc_82.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_82(1240503293);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_82);
    UnderlyingInstrument_82.insert(EncodedUnderlyingSecurityDescLen_82.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_82;
    UnderlyingAdjustedQuantity_82.setString("5736829");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_82);
    UnderlyingInstrument_82.insert(UnderlyingAdjustedQuantity_82.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_82;
    UnderlyingAllocationPercent_82.setString("40.410000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_82);
    UnderlyingInstrument_82.insert(UnderlyingAllocationPercent_82.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_82;
    UnderlyingAttachmentPoint_82.setString("71.630000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_82);
    UnderlyingInstrument_82.insert(UnderlyingAttachmentPoint_82.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_82("STRING_282086626");
    noUnderlyings_0_0.set(UnderlyingCFICode_82);
    UnderlyingInstrument_82.insert(UnderlyingCFICode_82.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_82("STRING_1132654185");
    noUnderlyings_0_0.set(UnderlyingCPProgram_82);
    UnderlyingInstrument_82.insert(UnderlyingCPProgram_82.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_82("STRING_1100662895");
    noUnderlyings_0_0.set(UnderlyingCPRegType_82);
    UnderlyingInstrument_82.insert(UnderlyingCPRegType_82.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_82;
    UnderlyingCapValue_82.setString("4302609");
    noUnderlyings_0_0.set(UnderlyingCapValue_82);
    UnderlyingInstrument_82.insert(UnderlyingCapValue_82.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_82;
    UnderlyingCashAmount_82.setString("4739820");
    noUnderlyings_0_0.set(UnderlyingCashAmount_82);
    UnderlyingInstrument_82.insert(UnderlyingCashAmount_82.getString());
    FIX::UnderlyingCashType UnderlyingCashType_82("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_82);
    UnderlyingInstrument_82.insert(UnderlyingCashType_82.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_82;
    UnderlyingContractMultiplier_82.setString("5449482");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_82);
    UnderlyingInstrument_82.insert(UnderlyingContractMultiplier_82.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_82(1858242733);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_82);
    UnderlyingInstrument_82.insert(UnderlyingContractMultiplierUnit_82.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_82("COUNTRY_864565859");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_82);
    UnderlyingInstrument_82.insert(UnderlyingCountryOfIssue_82.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_82("LOCALMKTDATE_1803271464");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_82);
    UnderlyingInstrument_82.insert(UnderlyingCouponPaymentDate_82.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_82;
    UnderlyingCouponRate_82.setString("38.910000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_82);
    UnderlyingInstrument_82.insert(UnderlyingCouponRate_82.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_82("STRING_1817665129");
    noUnderlyings_0_0.set(UnderlyingCreditRating_82);
    UnderlyingInstrument_82.insert(UnderlyingCreditRating_82.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_82("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_82);
    UnderlyingInstrument_82.insert(UnderlyingCurrency_82.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_82;
    UnderlyingCurrentValue_82.setString("5105113");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_82);
    UnderlyingInstrument_82.insert(UnderlyingCurrentValue_82.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_82;
    UnderlyingDetachmentPoint_82.setString("58.440000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_82);
    UnderlyingInstrument_82.insert(UnderlyingDetachmentPoint_82.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_82;
    UnderlyingDirtyPrice_82.setString("12272576");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_82);
    UnderlyingInstrument_82.insert(UnderlyingDirtyPrice_82.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_82;
    UnderlyingEndPrice_82.setString("3649582");
    noUnderlyings_0_0.set(UnderlyingEndPrice_82);
    UnderlyingInstrument_82.insert(UnderlyingEndPrice_82.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_82;
    UnderlyingEndValue_82.setString("20689518");
    noUnderlyings_0_0.set(UnderlyingEndValue_82);
    UnderlyingInstrument_82.insert(UnderlyingEndValue_82.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_82(1778513510);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_82);
    UnderlyingInstrument_82.insert(UnderlyingExerciseStyle_82.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_82;
    UnderlyingFXRate_82.setString("8906044");
    noUnderlyings_0_0.set(UnderlyingFXRate_82);
    UnderlyingInstrument_82.insert(UnderlyingFXRate_82.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_82('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_82);
    UnderlyingInstrument_82.insert(UnderlyingFXRateCalc_82.getString());
    FIX::UnderlyingFactor UnderlyingFactor_82;
    UnderlyingFactor_82.setString("17283877");
    noUnderlyings_0_0.set(UnderlyingFactor_82);
    UnderlyingInstrument_82.insert(UnderlyingFactor_82.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_82(1798214678);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_82);
    UnderlyingInstrument_82.insert(UnderlyingFlowScheduleType_82.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_82("STRING_367942653");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_82);
    UnderlyingInstrument_82.insert(UnderlyingInstrRegistry_82.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_82("LOCALMKTDATE_981515172");
    noUnderlyings_0_0.set(UnderlyingIssueDate_82);
    UnderlyingInstrument_82.insert(UnderlyingIssueDate_82.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_82("STRING_1924201330");
    noUnderlyings_0_0.set(UnderlyingIssuer_82);
    UnderlyingInstrument_82.insert(UnderlyingIssuer_82.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_82("STRING_1608445946");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_82);
    UnderlyingInstrument_82.insert(UnderlyingLocaleOfIssue_82.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_82("LOCALMKTDATE_1555198092");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_82);
    UnderlyingInstrument_82.insert(UnderlyingMaturityDate_82.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_82("MONTHYEAR_2058605371");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_82);
    UnderlyingInstrument_82.insert(UnderlyingMaturityMonthYear_82.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_82("TZTIMEONLY_275119462");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_82);
    UnderlyingInstrument_82.insert(UnderlyingMaturityTime_82.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_82;
    UnderlyingNotionalPercentageOutstanding_82.setString("47.180000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_82);
    UnderlyingInstrument_82.insert(UnderlyingNotionalPercentageOutstanding_82.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_82('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_82);
    UnderlyingInstrument_82.insert(UnderlyingOptAttribute_82.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_82;
    UnderlyingOriginalNotionalPercentageOutstanding_82.setString("23.570000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_82);
    UnderlyingInstrument_82.insert(UnderlyingOriginalNotionalPercentageOutstanding_82.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_82("STRING_120062007");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_82);
    UnderlyingInstrument_82.insert(UnderlyingPriceUnitOfMeasure_82.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_82;
    UnderlyingPriceUnitOfMeasureQty_82.setString("15177579");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_82);
    UnderlyingInstrument_82.insert(UnderlyingPriceUnitOfMeasureQty_82.getString());
    FIX::UnderlyingProduct UnderlyingProduct_82(706091923);
    noUnderlyings_0_0.set(UnderlyingProduct_82);
    UnderlyingInstrument_82.insert(UnderlyingProduct_82.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_82(665010261);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_82);
    UnderlyingInstrument_82.insert(UnderlyingPutOrCall_82.getString());
    FIX::UnderlyingPx UnderlyingPx_82;
    UnderlyingPx_82.setString("12285170");
    noUnderlyings_0_0.set(UnderlyingPx_82);
    UnderlyingInstrument_82.insert(UnderlyingPx_82.getString());
    FIX::UnderlyingQty UnderlyingQty_82;
    UnderlyingQty_82.setString("15706577");
    noUnderlyings_0_0.set(UnderlyingQty_82);
    UnderlyingInstrument_82.insert(UnderlyingQty_82.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_82("LOCALMKTDATE_320798077");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_82);
    UnderlyingInstrument_82.insert(UnderlyingRedemptionDate_82.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_82("STRING_1848670966");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_82);
    UnderlyingInstrument_82.insert(UnderlyingRepoCollateralSecurityType_82.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_82;
    UnderlyingRepurchaseRate_82.setString("92.640000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_82);
    UnderlyingInstrument_82.insert(UnderlyingRepurchaseRate_82.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_82(670617135);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_82);
    UnderlyingInstrument_82.insert(UnderlyingRepurchaseTerm_82.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_82("STRING_796362501");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_82);
    UnderlyingInstrument_82.insert(UnderlyingRestructuringType_82.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_82("STRING_1751350642");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_82);
    UnderlyingInstrument_82.insert(UnderlyingSecurityDesc_82.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_82("EXCHANGE_30239332");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_82);
    UnderlyingInstrument_82.insert(UnderlyingSecurityExchange_82.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_82("STRING_2023620166");
    noUnderlyings_0_0.set(UnderlyingSecurityID_82);
    UnderlyingInstrument_82.insert(UnderlyingSecurityID_82.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_82("STRING_2116308901");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_82);
    UnderlyingInstrument_82.insert(UnderlyingSecurityIDSource_82.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_82("STRING_2099191136");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_82);
    UnderlyingInstrument_82.insert(UnderlyingSecuritySubType_82.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_82("STRING_1654650028");
    noUnderlyings_0_0.set(UnderlyingSecurityType_82);
    UnderlyingInstrument_82.insert(UnderlyingSecurityType_82.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_82("STRING_859429689");
    noUnderlyings_0_0.set(UnderlyingSeniority_82);
    UnderlyingInstrument_82.insert(UnderlyingSeniority_82.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_82("STRING_247075923");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_82);
    UnderlyingInstrument_82.insert(UnderlyingSettlMethod_82.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_82(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_82);
    UnderlyingInstrument_82.insert(UnderlyingSettlementType_82.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_82;
    UnderlyingStartValue_82.setString("5101607");
    noUnderlyings_0_0.set(UnderlyingStartValue_82);
    UnderlyingInstrument_82.insert(UnderlyingStartValue_82.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_82("STRING_615018576");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_82);
    UnderlyingInstrument_82.insert(UnderlyingStateOrProvinceOfIssue_82.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_82("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_82);
    UnderlyingInstrument_82.insert(UnderlyingStrikeCurrency_82.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_82;
    UnderlyingStrikePrice_82.setString("759808");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_82);
    UnderlyingInstrument_82.insert(UnderlyingStrikePrice_82.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_82("STRING_1624783786");
    noUnderlyings_0_0.set(UnderlyingSymbol_82);
    UnderlyingInstrument_82.insert(UnderlyingSymbol_82.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_82("STRING_198000124");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_82);
    UnderlyingInstrument_82.insert(UnderlyingSymbolSfx_82.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_82("STRING_351100337");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_82);
    UnderlyingInstrument_82.insert(UnderlyingTimeUnit_82.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_82("STRING_1314584856");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_82);
    UnderlyingInstrument_82.insert(UnderlyingUnitOfMeasure_82.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_82;
    UnderlyingUnitOfMeasureQty_82.setString("12417760");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_82);
    UnderlyingInstrument_82.insert(UnderlyingUnitOfMeasureQty_82.getString());
    all_values.push_back(UnderlyingInstrument_82);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_161;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_161("STRING_1434646863");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_161);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_161.insert(UnderlyingSecurityAltID_161.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_161("STRING_612050374");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_161);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_161.insert(UnderlyingSecurityAltIDSource_161.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_161);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_162;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_162("STRING_285490969");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_162);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_162.insert(UnderlyingSecurityAltID_162.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_162("STRING_2099657124");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_162);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_162.insert(UnderlyingSecurityAltIDSource_162.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_162);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_163;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_163("STRING_1840567448");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_163);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_163.insert(UnderlyingSecurityAltID_163.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_163("STRING_1856148752");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_163);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_163.insert(UnderlyingSecurityAltIDSource_163.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_163);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_145;
      FIX::UnderlyingStipType UnderlyingStipType_145("STRING_1541754766");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_145);
      UnderlyingStipulations_NoUnderlyingStips_145.insert(UnderlyingStipType_145.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_145("STRING_949504369");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_145);
      UnderlyingStipulations_NoUnderlyingStips_145.insert(UnderlyingStipValue_145.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_145);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_176;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_176("STRING_190633619");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_176);
      UndlyInstrumentParties_NoUndlyInstrumentParties_176.insert(UnderlyingInstrumentPartyID_176.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_176('5');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_176);
      UndlyInstrumentParties_NoUndlyInstrumentParties_176.insert(UnderlyingInstrumentPartyIDSource_176.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_176(973828021);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_176);
      UndlyInstrumentParties_NoUndlyInstrumentParties_176.insert(UnderlyingInstrumentPartyRole_176.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_176);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_339("STRING_522196616");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_339);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339.insert(UnderlyingInstrumentPartySubID_339.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_339(925535510);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_339);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339.insert(UnderlyingInstrumentPartySubIDType_339.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_340("STRING_1721420166");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_340);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340.insert(UnderlyingInstrumentPartySubID_340.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_340(1381626305);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_340);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340.insert(UnderlyingInstrumentPartySubIDType_340.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_83;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_83("DATA_1172611433");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_83);
    UnderlyingInstrument_83.insert(EncodedUnderlyingIssuer_83.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_83(809490688);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_83);
    UnderlyingInstrument_83.insert(EncodedUnderlyingIssuerLen_83.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_83("DATA_1891787025");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_83);
    UnderlyingInstrument_83.insert(EncodedUnderlyingSecurityDesc_83.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_83(1787630009);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_83);
    UnderlyingInstrument_83.insert(EncodedUnderlyingSecurityDescLen_83.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_83;
    UnderlyingAdjustedQuantity_83.setString("8790763");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_83);
    UnderlyingInstrument_83.insert(UnderlyingAdjustedQuantity_83.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_83;
    UnderlyingAllocationPercent_83.setString("17.780000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_83);
    UnderlyingInstrument_83.insert(UnderlyingAllocationPercent_83.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_83;
    UnderlyingAttachmentPoint_83.setString("8.840000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_83);
    UnderlyingInstrument_83.insert(UnderlyingAttachmentPoint_83.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_83("STRING_356376520");
    noUnderlyings_0_1.set(UnderlyingCFICode_83);
    UnderlyingInstrument_83.insert(UnderlyingCFICode_83.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_83("STRING_229181903");
    noUnderlyings_0_1.set(UnderlyingCPProgram_83);
    UnderlyingInstrument_83.insert(UnderlyingCPProgram_83.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_83("STRING_67227573");
    noUnderlyings_0_1.set(UnderlyingCPRegType_83);
    UnderlyingInstrument_83.insert(UnderlyingCPRegType_83.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_83;
    UnderlyingCapValue_83.setString("16709613");
    noUnderlyings_0_1.set(UnderlyingCapValue_83);
    UnderlyingInstrument_83.insert(UnderlyingCapValue_83.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_83;
    UnderlyingCashAmount_83.setString("14709579");
    noUnderlyings_0_1.set(UnderlyingCashAmount_83);
    UnderlyingInstrument_83.insert(UnderlyingCashAmount_83.getString());
    FIX::UnderlyingCashType UnderlyingCashType_83("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_83);
    UnderlyingInstrument_83.insert(UnderlyingCashType_83.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_83;
    UnderlyingContractMultiplier_83.setString("9581245");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_83);
    UnderlyingInstrument_83.insert(UnderlyingContractMultiplier_83.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_83(2083008310);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_83);
    UnderlyingInstrument_83.insert(UnderlyingContractMultiplierUnit_83.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_83("COUNTRY_2079601237");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_83);
    UnderlyingInstrument_83.insert(UnderlyingCountryOfIssue_83.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_83("LOCALMKTDATE_910298068");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_83);
    UnderlyingInstrument_83.insert(UnderlyingCouponPaymentDate_83.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_83;
    UnderlyingCouponRate_83.setString("21.100000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_83);
    UnderlyingInstrument_83.insert(UnderlyingCouponRate_83.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_83("STRING_1788266341");
    noUnderlyings_0_1.set(UnderlyingCreditRating_83);
    UnderlyingInstrument_83.insert(UnderlyingCreditRating_83.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_83("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_83);
    UnderlyingInstrument_83.insert(UnderlyingCurrency_83.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_83;
    UnderlyingCurrentValue_83.setString("5902870");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_83);
    UnderlyingInstrument_83.insert(UnderlyingCurrentValue_83.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_83;
    UnderlyingDetachmentPoint_83.setString("83.110000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_83);
    UnderlyingInstrument_83.insert(UnderlyingDetachmentPoint_83.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_83;
    UnderlyingDirtyPrice_83.setString("13609968");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_83);
    UnderlyingInstrument_83.insert(UnderlyingDirtyPrice_83.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_83;
    UnderlyingEndPrice_83.setString("11436584");
    noUnderlyings_0_1.set(UnderlyingEndPrice_83);
    UnderlyingInstrument_83.insert(UnderlyingEndPrice_83.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_83;
    UnderlyingEndValue_83.setString("9532026");
    noUnderlyings_0_1.set(UnderlyingEndValue_83);
    UnderlyingInstrument_83.insert(UnderlyingEndValue_83.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_83(1427766986);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_83);
    UnderlyingInstrument_83.insert(UnderlyingExerciseStyle_83.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_83;
    UnderlyingFXRate_83.setString("16658550");
    noUnderlyings_0_1.set(UnderlyingFXRate_83);
    UnderlyingInstrument_83.insert(UnderlyingFXRate_83.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_83('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_83);
    UnderlyingInstrument_83.insert(UnderlyingFXRateCalc_83.getString());
    FIX::UnderlyingFactor UnderlyingFactor_83;
    UnderlyingFactor_83.setString("10017035");
    noUnderlyings_0_1.set(UnderlyingFactor_83);
    UnderlyingInstrument_83.insert(UnderlyingFactor_83.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_83(899997699);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_83);
    UnderlyingInstrument_83.insert(UnderlyingFlowScheduleType_83.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_83("STRING_903865980");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_83);
    UnderlyingInstrument_83.insert(UnderlyingInstrRegistry_83.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_83("LOCALMKTDATE_1811194192");
    noUnderlyings_0_1.set(UnderlyingIssueDate_83);
    UnderlyingInstrument_83.insert(UnderlyingIssueDate_83.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_83("STRING_644301076");
    noUnderlyings_0_1.set(UnderlyingIssuer_83);
    UnderlyingInstrument_83.insert(UnderlyingIssuer_83.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_83("STRING_544012341");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_83);
    UnderlyingInstrument_83.insert(UnderlyingLocaleOfIssue_83.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_83("LOCALMKTDATE_542786926");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_83);
    UnderlyingInstrument_83.insert(UnderlyingMaturityDate_83.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_83("MONTHYEAR_675482855");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_83);
    UnderlyingInstrument_83.insert(UnderlyingMaturityMonthYear_83.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_83("TZTIMEONLY_260139578");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_83);
    UnderlyingInstrument_83.insert(UnderlyingMaturityTime_83.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_83;
    UnderlyingNotionalPercentageOutstanding_83.setString("34.460000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_83);
    UnderlyingInstrument_83.insert(UnderlyingNotionalPercentageOutstanding_83.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_83('9');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_83);
    UnderlyingInstrument_83.insert(UnderlyingOptAttribute_83.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_83;
    UnderlyingOriginalNotionalPercentageOutstanding_83.setString("71.510000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_83);
    UnderlyingInstrument_83.insert(UnderlyingOriginalNotionalPercentageOutstanding_83.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_83("STRING_422641174");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_83);
    UnderlyingInstrument_83.insert(UnderlyingPriceUnitOfMeasure_83.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_83;
    UnderlyingPriceUnitOfMeasureQty_83.setString("2281390");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_83);
    UnderlyingInstrument_83.insert(UnderlyingPriceUnitOfMeasureQty_83.getString());
    FIX::UnderlyingProduct UnderlyingProduct_83(2121477419);
    noUnderlyings_0_1.set(UnderlyingProduct_83);
    UnderlyingInstrument_83.insert(UnderlyingProduct_83.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_83(1380765765);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_83);
    UnderlyingInstrument_83.insert(UnderlyingPutOrCall_83.getString());
    FIX::UnderlyingPx UnderlyingPx_83;
    UnderlyingPx_83.setString("1636637");
    noUnderlyings_0_1.set(UnderlyingPx_83);
    UnderlyingInstrument_83.insert(UnderlyingPx_83.getString());
    FIX::UnderlyingQty UnderlyingQty_83;
    UnderlyingQty_83.setString("20535950");
    noUnderlyings_0_1.set(UnderlyingQty_83);
    UnderlyingInstrument_83.insert(UnderlyingQty_83.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_83("LOCALMKTDATE_143580185");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_83);
    UnderlyingInstrument_83.insert(UnderlyingRedemptionDate_83.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_83("STRING_1939755818");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_83);
    UnderlyingInstrument_83.insert(UnderlyingRepoCollateralSecurityType_83.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_83;
    UnderlyingRepurchaseRate_83.setString("77.010000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_83);
    UnderlyingInstrument_83.insert(UnderlyingRepurchaseRate_83.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_83(1326849807);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_83);
    UnderlyingInstrument_83.insert(UnderlyingRepurchaseTerm_83.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_83("STRING_962635399");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_83);
    UnderlyingInstrument_83.insert(UnderlyingRestructuringType_83.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_83("STRING_137181116");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_83);
    UnderlyingInstrument_83.insert(UnderlyingSecurityDesc_83.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_83("EXCHANGE_1306224471");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_83);
    UnderlyingInstrument_83.insert(UnderlyingSecurityExchange_83.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_83("STRING_176148600");
    noUnderlyings_0_1.set(UnderlyingSecurityID_83);
    UnderlyingInstrument_83.insert(UnderlyingSecurityID_83.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_83("STRING_1280839541");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_83);
    UnderlyingInstrument_83.insert(UnderlyingSecurityIDSource_83.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_83("STRING_111943508");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_83);
    UnderlyingInstrument_83.insert(UnderlyingSecuritySubType_83.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_83("STRING_1603915586");
    noUnderlyings_0_1.set(UnderlyingSecurityType_83);
    UnderlyingInstrument_83.insert(UnderlyingSecurityType_83.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_83("STRING_799210935");
    noUnderlyings_0_1.set(UnderlyingSeniority_83);
    UnderlyingInstrument_83.insert(UnderlyingSeniority_83.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_83("STRING_1990681703");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_83);
    UnderlyingInstrument_83.insert(UnderlyingSettlMethod_83.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_83(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_83);
    UnderlyingInstrument_83.insert(UnderlyingSettlementType_83.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_83;
    UnderlyingStartValue_83.setString("16992086");
    noUnderlyings_0_1.set(UnderlyingStartValue_83);
    UnderlyingInstrument_83.insert(UnderlyingStartValue_83.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_83("STRING_747064035");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_83);
    UnderlyingInstrument_83.insert(UnderlyingStateOrProvinceOfIssue_83.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_83("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_83);
    UnderlyingInstrument_83.insert(UnderlyingStrikeCurrency_83.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_83;
    UnderlyingStrikePrice_83.setString("12910763");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_83);
    UnderlyingInstrument_83.insert(UnderlyingStrikePrice_83.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_83("STRING_664632912");
    noUnderlyings_0_1.set(UnderlyingSymbol_83);
    UnderlyingInstrument_83.insert(UnderlyingSymbol_83.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_83("STRING_871508918");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_83);
    UnderlyingInstrument_83.insert(UnderlyingSymbolSfx_83.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_83("STRING_1551215954");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_83);
    UnderlyingInstrument_83.insert(UnderlyingTimeUnit_83.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_83("STRING_1563796358");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_83);
    UnderlyingInstrument_83.insert(UnderlyingUnitOfMeasure_83.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_83;
    UnderlyingUnitOfMeasureQty_83.setString("17761736");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_83);
    UnderlyingInstrument_83.insert(UnderlyingUnitOfMeasureQty_83.getString());
    all_values.push_back(UnderlyingInstrument_83);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_164;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_164("STRING_1986437532");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_164);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_164.insert(UnderlyingSecurityAltID_164.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_164("STRING_2004312722");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_164);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_164.insert(UnderlyingSecurityAltIDSource_164.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_164);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_165;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_165("STRING_1852576877");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_165);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_165.insert(UnderlyingSecurityAltID_165.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_165("STRING_1219719649");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_165);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_165.insert(UnderlyingSecurityAltIDSource_165.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_165);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_166;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_166("STRING_20492782");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_166);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_166.insert(UnderlyingSecurityAltID_166.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_166("STRING_1758688237");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_166);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_166.insert(UnderlyingSecurityAltIDSource_166.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_166);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_146;
      FIX::UnderlyingStipType UnderlyingStipType_146("STRING_1960248601");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_146);
      UnderlyingStipulations_NoUnderlyingStips_146.insert(UnderlyingStipType_146.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_146("STRING_1305582290");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_146);
      UnderlyingStipulations_NoUnderlyingStips_146.insert(UnderlyingStipValue_146.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_146);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_147;
      FIX::UnderlyingStipType UnderlyingStipType_147("STRING_542665994");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_147);
      UnderlyingStipulations_NoUnderlyingStips_147.insert(UnderlyingStipType_147.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_147("STRING_775400352");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_147);
      UnderlyingStipulations_NoUnderlyingStips_147.insert(UnderlyingStipValue_147.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_147);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_177;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_177("STRING_1848890465");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_177);
      UndlyInstrumentParties_NoUndlyInstrumentParties_177.insert(UnderlyingInstrumentPartyID_177.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_177('9');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_177);
      UndlyInstrumentParties_NoUndlyInstrumentParties_177.insert(UnderlyingInstrumentPartyIDSource_177.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_177(576119300);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_177);
      UndlyInstrumentParties_NoUndlyInstrumentParties_177.insert(UnderlyingInstrumentPartyRole_177.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_177);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_341("STRING_407980890");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_341);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341.insert(UnderlyingInstrumentPartySubID_341.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_341(1375330235);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_341);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341.insert(UnderlyingInstrumentPartySubIDType_341.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_342("STRING_1804032028");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_342);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342.insert(UnderlyingInstrumentPartySubID_342.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_342(866116332);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_342);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342.insert(UnderlyingInstrumentPartySubIDType_342.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_178;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_178("STRING_927055222");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_178);
      UndlyInstrumentParties_NoUndlyInstrumentParties_178.insert(UnderlyingInstrumentPartyID_178.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_178('4');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_178);
      UndlyInstrumentParties_NoUndlyInstrumentParties_178.insert(UnderlyingInstrumentPartyIDSource_178.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_178(987962318);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_178);
      UndlyInstrumentParties_NoUndlyInstrumentParties_178.insert(UnderlyingInstrumentPartyRole_178.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_178);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_343("STRING_1694688792");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_343);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343.insert(UnderlyingInstrumentPartySubID_343.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_343(1652595230);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_343);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343.insert(UnderlyingInstrumentPartySubIDType_343.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_344("STRING_1994590204");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_344);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344.insert(UnderlyingInstrumentPartySubID_344.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_344(1098421098);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_344);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344.insert(UnderlyingInstrumentPartySubIDType_344.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_345("STRING_1068907940");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_345);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345.insert(UnderlyingInstrumentPartySubID_345.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_345(1623280233);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_345);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345.insert(UnderlyingInstrumentPartySubIDType_345.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::OrderStatusRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_84;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_84("DATA_829520556");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_84);
    UnderlyingInstrument_84.insert(EncodedUnderlyingIssuer_84.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_84(907861824);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_84);
    UnderlyingInstrument_84.insert(EncodedUnderlyingIssuerLen_84.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_84("DATA_1480109307");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_84);
    UnderlyingInstrument_84.insert(EncodedUnderlyingSecurityDesc_84.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_84(534613785);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_84);
    UnderlyingInstrument_84.insert(EncodedUnderlyingSecurityDescLen_84.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_84;
    UnderlyingAdjustedQuantity_84.setString("21275814");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_84);
    UnderlyingInstrument_84.insert(UnderlyingAdjustedQuantity_84.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_84;
    UnderlyingAllocationPercent_84.setString("20.900000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_84);
    UnderlyingInstrument_84.insert(UnderlyingAllocationPercent_84.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_84;
    UnderlyingAttachmentPoint_84.setString("83.740000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_84);
    UnderlyingInstrument_84.insert(UnderlyingAttachmentPoint_84.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_84("STRING_1343397661");
    noUnderlyings_0_2.set(UnderlyingCFICode_84);
    UnderlyingInstrument_84.insert(UnderlyingCFICode_84.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_84("STRING_1313367043");
    noUnderlyings_0_2.set(UnderlyingCPProgram_84);
    UnderlyingInstrument_84.insert(UnderlyingCPProgram_84.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_84("STRING_1451400665");
    noUnderlyings_0_2.set(UnderlyingCPRegType_84);
    UnderlyingInstrument_84.insert(UnderlyingCPRegType_84.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_84;
    UnderlyingCapValue_84.setString("18860636");
    noUnderlyings_0_2.set(UnderlyingCapValue_84);
    UnderlyingInstrument_84.insert(UnderlyingCapValue_84.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_84;
    UnderlyingCashAmount_84.setString("20887673");
    noUnderlyings_0_2.set(UnderlyingCashAmount_84);
    UnderlyingInstrument_84.insert(UnderlyingCashAmount_84.getString());
    FIX::UnderlyingCashType UnderlyingCashType_84("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_84);
    UnderlyingInstrument_84.insert(UnderlyingCashType_84.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_84;
    UnderlyingContractMultiplier_84.setString("15874704");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_84);
    UnderlyingInstrument_84.insert(UnderlyingContractMultiplier_84.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_84(892832700);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_84);
    UnderlyingInstrument_84.insert(UnderlyingContractMultiplierUnit_84.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_84("COUNTRY_1322799723");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_84);
    UnderlyingInstrument_84.insert(UnderlyingCountryOfIssue_84.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_84("LOCALMKTDATE_1400820798");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_84);
    UnderlyingInstrument_84.insert(UnderlyingCouponPaymentDate_84.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_84;
    UnderlyingCouponRate_84.setString("35.900000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_84);
    UnderlyingInstrument_84.insert(UnderlyingCouponRate_84.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_84("STRING_550646311");
    noUnderlyings_0_2.set(UnderlyingCreditRating_84);
    UnderlyingInstrument_84.insert(UnderlyingCreditRating_84.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_84("CAN");
    noUnderlyings_0_2.set(UnderlyingCurrency_84);
    UnderlyingInstrument_84.insert(UnderlyingCurrency_84.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_84;
    UnderlyingCurrentValue_84.setString("14777015");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_84);
    UnderlyingInstrument_84.insert(UnderlyingCurrentValue_84.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_84;
    UnderlyingDetachmentPoint_84.setString("15.940000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_84);
    UnderlyingInstrument_84.insert(UnderlyingDetachmentPoint_84.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_84;
    UnderlyingDirtyPrice_84.setString("10074085");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_84);
    UnderlyingInstrument_84.insert(UnderlyingDirtyPrice_84.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_84;
    UnderlyingEndPrice_84.setString("4532991");
    noUnderlyings_0_2.set(UnderlyingEndPrice_84);
    UnderlyingInstrument_84.insert(UnderlyingEndPrice_84.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_84;
    UnderlyingEndValue_84.setString("10081867");
    noUnderlyings_0_2.set(UnderlyingEndValue_84);
    UnderlyingInstrument_84.insert(UnderlyingEndValue_84.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_84(512520176);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_84);
    UnderlyingInstrument_84.insert(UnderlyingExerciseStyle_84.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_84;
    UnderlyingFXRate_84.setString("3004057");
    noUnderlyings_0_2.set(UnderlyingFXRate_84);
    UnderlyingInstrument_84.insert(UnderlyingFXRate_84.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_84('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_84);
    UnderlyingInstrument_84.insert(UnderlyingFXRateCalc_84.getString());
    FIX::UnderlyingFactor UnderlyingFactor_84;
    UnderlyingFactor_84.setString("15814281");
    noUnderlyings_0_2.set(UnderlyingFactor_84);
    UnderlyingInstrument_84.insert(UnderlyingFactor_84.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_84(1923685961);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_84);
    UnderlyingInstrument_84.insert(UnderlyingFlowScheduleType_84.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_84("STRING_788644745");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_84);
    UnderlyingInstrument_84.insert(UnderlyingInstrRegistry_84.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_84("LOCALMKTDATE_341806293");
    noUnderlyings_0_2.set(UnderlyingIssueDate_84);
    UnderlyingInstrument_84.insert(UnderlyingIssueDate_84.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_84("STRING_1256311620");
    noUnderlyings_0_2.set(UnderlyingIssuer_84);
    UnderlyingInstrument_84.insert(UnderlyingIssuer_84.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_84("STRING_1323258531");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_84);
    UnderlyingInstrument_84.insert(UnderlyingLocaleOfIssue_84.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_84("LOCALMKTDATE_321904119");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_84);
    UnderlyingInstrument_84.insert(UnderlyingMaturityDate_84.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_84("MONTHYEAR_609430062");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_84);
    UnderlyingInstrument_84.insert(UnderlyingMaturityMonthYear_84.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_84("TZTIMEONLY_1469076905");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_84);
    UnderlyingInstrument_84.insert(UnderlyingMaturityTime_84.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_84;
    UnderlyingNotionalPercentageOutstanding_84.setString("17.800000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_84);
    UnderlyingInstrument_84.insert(UnderlyingNotionalPercentageOutstanding_84.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_84('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_84);
    UnderlyingInstrument_84.insert(UnderlyingOptAttribute_84.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_84;
    UnderlyingOriginalNotionalPercentageOutstanding_84.setString("39.220000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_84);
    UnderlyingInstrument_84.insert(UnderlyingOriginalNotionalPercentageOutstanding_84.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_84("STRING_1403881787");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_84);
    UnderlyingInstrument_84.insert(UnderlyingPriceUnitOfMeasure_84.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_84;
    UnderlyingPriceUnitOfMeasureQty_84.setString("18640808");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_84);
    UnderlyingInstrument_84.insert(UnderlyingPriceUnitOfMeasureQty_84.getString());
    FIX::UnderlyingProduct UnderlyingProduct_84(1519674346);
    noUnderlyings_0_2.set(UnderlyingProduct_84);
    UnderlyingInstrument_84.insert(UnderlyingProduct_84.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_84(843868612);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_84);
    UnderlyingInstrument_84.insert(UnderlyingPutOrCall_84.getString());
    FIX::UnderlyingPx UnderlyingPx_84;
    UnderlyingPx_84.setString("6094299");
    noUnderlyings_0_2.set(UnderlyingPx_84);
    UnderlyingInstrument_84.insert(UnderlyingPx_84.getString());
    FIX::UnderlyingQty UnderlyingQty_84;
    UnderlyingQty_84.setString("6949904");
    noUnderlyings_0_2.set(UnderlyingQty_84);
    UnderlyingInstrument_84.insert(UnderlyingQty_84.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_84("LOCALMKTDATE_97205763");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_84);
    UnderlyingInstrument_84.insert(UnderlyingRedemptionDate_84.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_84("STRING_1910243495");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_84);
    UnderlyingInstrument_84.insert(UnderlyingRepoCollateralSecurityType_84.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_84;
    UnderlyingRepurchaseRate_84.setString("67.320000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_84);
    UnderlyingInstrument_84.insert(UnderlyingRepurchaseRate_84.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_84(1154574942);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_84);
    UnderlyingInstrument_84.insert(UnderlyingRepurchaseTerm_84.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_84("STRING_1929689770");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_84);
    UnderlyingInstrument_84.insert(UnderlyingRestructuringType_84.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_84("STRING_575854618");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_84);
    UnderlyingInstrument_84.insert(UnderlyingSecurityDesc_84.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_84("EXCHANGE_468072888");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_84);
    UnderlyingInstrument_84.insert(UnderlyingSecurityExchange_84.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_84("STRING_789614716");
    noUnderlyings_0_2.set(UnderlyingSecurityID_84);
    UnderlyingInstrument_84.insert(UnderlyingSecurityID_84.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_84("STRING_1029153789");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_84);
    UnderlyingInstrument_84.insert(UnderlyingSecurityIDSource_84.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_84("STRING_1476259627");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_84);
    UnderlyingInstrument_84.insert(UnderlyingSecuritySubType_84.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_84("STRING_1302134892");
    noUnderlyings_0_2.set(UnderlyingSecurityType_84);
    UnderlyingInstrument_84.insert(UnderlyingSecurityType_84.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_84("STRING_1329559517");
    noUnderlyings_0_2.set(UnderlyingSeniority_84);
    UnderlyingInstrument_84.insert(UnderlyingSeniority_84.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_84("STRING_1435383816");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_84);
    UnderlyingInstrument_84.insert(UnderlyingSettlMethod_84.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_84(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_84);
    UnderlyingInstrument_84.insert(UnderlyingSettlementType_84.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_84;
    UnderlyingStartValue_84.setString("11057618");
    noUnderlyings_0_2.set(UnderlyingStartValue_84);
    UnderlyingInstrument_84.insert(UnderlyingStartValue_84.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_84("STRING_76544913");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_84);
    UnderlyingInstrument_84.insert(UnderlyingStateOrProvinceOfIssue_84.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_84("EUR");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_84);
    UnderlyingInstrument_84.insert(UnderlyingStrikeCurrency_84.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_84;
    UnderlyingStrikePrice_84.setString("13998034");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_84);
    UnderlyingInstrument_84.insert(UnderlyingStrikePrice_84.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_84("STRING_1399789772");
    noUnderlyings_0_2.set(UnderlyingSymbol_84);
    UnderlyingInstrument_84.insert(UnderlyingSymbol_84.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_84("STRING_824019865");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_84);
    UnderlyingInstrument_84.insert(UnderlyingSymbolSfx_84.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_84("STRING_721396702");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_84);
    UnderlyingInstrument_84.insert(UnderlyingTimeUnit_84.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_84("STRING_917607904");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_84);
    UnderlyingInstrument_84.insert(UnderlyingUnitOfMeasure_84.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_84;
    UnderlyingUnitOfMeasureQty_84.setString("5993333");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_84);
    UnderlyingInstrument_84.insert(UnderlyingUnitOfMeasureQty_84.getString());
    all_values.push_back(UnderlyingInstrument_84);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_167;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_167("STRING_174006044");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_167);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_167.insert(UnderlyingSecurityAltID_167.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_167("STRING_315930528");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_167);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_167.insert(UnderlyingSecurityAltIDSource_167.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_167);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_148;
      FIX::UnderlyingStipType UnderlyingStipType_148("STRING_1017874656");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_148);
      UnderlyingStipulations_NoUnderlyingStips_148.insert(UnderlyingStipType_148.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_148("STRING_925360433");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_148);
      UnderlyingStipulations_NoUnderlyingStips_148.insert(UnderlyingStipValue_148.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_148);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_149;
      FIX::UnderlyingStipType UnderlyingStipType_149("STRING_1561571744");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_149);
      UnderlyingStipulations_NoUnderlyingStips_149.insert(UnderlyingStipType_149.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_149("STRING_1115080419");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_149);
      UnderlyingStipulations_NoUnderlyingStips_149.insert(UnderlyingStipValue_149.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_149);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_150;
      FIX::UnderlyingStipType UnderlyingStipType_150("STRING_688120280");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_150);
      UnderlyingStipulations_NoUnderlyingStips_150.insert(UnderlyingStipType_150.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_150("STRING_659724828");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_150);
      UnderlyingStipulations_NoUnderlyingStips_150.insert(UnderlyingStipValue_150.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_150);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_179;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_179("STRING_470326403");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_179);
      UndlyInstrumentParties_NoUndlyInstrumentParties_179.insert(UnderlyingInstrumentPartyID_179.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_179('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_179);
      UndlyInstrumentParties_NoUndlyInstrumentParties_179.insert(UnderlyingInstrumentPartyIDSource_179.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_179(590244602);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_179);
      UndlyInstrumentParties_NoUndlyInstrumentParties_179.insert(UnderlyingInstrumentPartyRole_179.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_179);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_346("STRING_117249588");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_346);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346.insert(UnderlyingInstrumentPartySubID_346.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_346(2066504229);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_346);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346.insert(UnderlyingInstrumentPartySubIDType_346.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_180;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_180("STRING_414592363");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_180);
      UndlyInstrumentParties_NoUndlyInstrumentParties_180.insert(UnderlyingInstrumentPartyID_180.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_180('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_180);
      UndlyInstrumentParties_NoUndlyInstrumentParties_180.insert(UnderlyingInstrumentPartyIDSource_180.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_180(1354404397);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_180);
      UndlyInstrumentParties_NoUndlyInstrumentParties_180.insert(UnderlyingInstrumentPartyRole_180.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_180);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_347("STRING_405087288");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_347);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347.insert(UnderlyingInstrumentPartySubID_347.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_347(1430949310);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_347);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347.insert(UnderlyingInstrumentPartySubIDType_347.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347);

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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
