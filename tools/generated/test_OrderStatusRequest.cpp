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
  FIX::Account Account_26("STRING_1324733914");
  msg.set(Account_26);
  OrderStatusRequest_0.insert(Account_26.getString());
  FIX::AcctIDSource AcctIDSource_19(2);
  msg.set(AcctIDSource_19);
  OrderStatusRequest_0.insert(AcctIDSource_19.getString());
  FIX::ClOrdID ClOrdID_41("STRING_65581581");
  msg.set(ClOrdID_41);
  OrderStatusRequest_0.insert(ClOrdID_41.getString());
  FIX::ClOrdLinkID ClOrdLinkID_16("STRING_226272683");
  msg.set(ClOrdLinkID_16);
  OrderStatusRequest_0.insert(ClOrdLinkID_16.getString());
  FIX::OrdStatusReqID OrdStatusReqID_1("STRING_1396159580");
  msg.set(OrdStatusReqID_1);
  OrderStatusRequest_0.insert(OrdStatusReqID_1.getString());
  FIX::OrderID OrderID_33("STRING_292748020");
  msg.set(OrderID_33);
  OrderStatusRequest_0.insert(OrderID_33.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_39("STRING_1575762396");
  msg.set(SecondaryClOrdID_39);
  OrderStatusRequest_0.insert(SecondaryClOrdID_39.getString());
  FIX::Side Side_40('D');
  msg.set(Side_40);
  OrderStatusRequest_0.insert(Side_40.getString());
  all_values.push_back(OrderStatusRequest_0);

  // FinancingDetails
  multiset<string> FinancingDetails_15;
  FIX::AgreementCurrency AgreementCurrency_15("GBP");
  msg.set(AgreementCurrency_15);
  FinancingDetails_15.insert(AgreementCurrency_15.getString());
  FIX::AgreementDate AgreementDate_15("LOCALMKTDATE_1397672810");
  msg.set(AgreementDate_15);
  FinancingDetails_15.insert(AgreementDate_15.getString());
  FIX::AgreementDesc AgreementDesc_15("STRING_2127935632");
  msg.set(AgreementDesc_15);
  FinancingDetails_15.insert(AgreementDesc_15.getString());
  FIX::AgreementID AgreementID_15("STRING_1683171251");
  msg.set(AgreementID_15);
  FinancingDetails_15.insert(AgreementID_15.getString());
  FIX::DeliveryType DeliveryType_15(0);
  msg.set(DeliveryType_15);
  FinancingDetails_15.insert(DeliveryType_15.getString());
  FIX::EndDate EndDate_15("LOCALMKTDATE_1071501951");
  msg.set(EndDate_15);
  FinancingDetails_15.insert(EndDate_15.getString());
  FIX::MarginRatio MarginRatio_15;
  MarginRatio_15.setString("11.910000");
  msg.set(MarginRatio_15);
  FinancingDetails_15.insert(MarginRatio_15.getString());
  FIX::StartDate StartDate_15("LOCALMKTDATE_817468195");
  msg.set(StartDate_15);
  FinancingDetails_15.insert(StartDate_15.getString());
  FIX::TerminationType TerminationType_15(4);
  msg.set(TerminationType_15);
  FinancingDetails_15.insert(TerminationType_15.getString());
  all_values.push_back(FinancingDetails_15);

  // Instrument
  multiset<string> Instrument_56;
  FIX::AttachmentPoint AttachmentPoint_56;
  AttachmentPoint_56.setString("20.320000");
  msg.set(AttachmentPoint_56);
  Instrument_56.insert(AttachmentPoint_56.getString());
  FIX::CFICode CFICode_56("STRING_1207051244");
  msg.set(CFICode_56);
  Instrument_56.insert(CFICode_56.getString());
  FIX::CPProgram CPProgram_56(2);
  msg.set(CPProgram_56);
  Instrument_56.insert(CPProgram_56.getString());
  FIX::CPRegType CPRegType_56("STRING_719196328");
  msg.set(CPRegType_56);
  Instrument_56.insert(CPRegType_56.getString());
  FIX::CapPrice CapPrice_56;
  CapPrice_56.setString("19475195");
  msg.set(CapPrice_56);
  Instrument_56.insert(CapPrice_56.getString());
  FIX::ContractMultiplier ContractMultiplier_56;
  ContractMultiplier_56.setString("9116800");
  msg.set(ContractMultiplier_56);
  Instrument_56.insert(ContractMultiplier_56.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_56(1);
  msg.set(ContractMultiplierUnit_56);
  Instrument_56.insert(ContractMultiplierUnit_56.getString());
  FIX::ContractSettlMonth ContractSettlMonth_56("MONTHYEAR_1224418611");
  msg.set(ContractSettlMonth_56);
  Instrument_56.insert(ContractSettlMonth_56.getString());
  FIX::CountryOfIssue CountryOfIssue_56("COUNTRY_465055539");
  msg.set(CountryOfIssue_56);
  Instrument_56.insert(CountryOfIssue_56.getString());
  FIX::CouponPaymentDate CouponPaymentDate_56("LOCALMKTDATE_1254997150");
  msg.set(CouponPaymentDate_56);
  Instrument_56.insert(CouponPaymentDate_56.getString());
  FIX::CouponRate CouponRate_56;
  CouponRate_56.setString("79.860000");
  msg.set(CouponRate_56);
  Instrument_56.insert(CouponRate_56.getString());
  FIX::CreditRating CreditRating_56("STRING_1269781900");
  msg.set(CreditRating_56);
  Instrument_56.insert(CreditRating_56.getString());
  FIX::DatedDate DatedDate_56("LOCALMKTDATE_84277702");
  msg.set(DatedDate_56);
  Instrument_56.insert(DatedDate_56.getString());
  FIX::DetachmentPoint DetachmentPoint_56;
  DetachmentPoint_56.setString("82.520000");
  msg.set(DetachmentPoint_56);
  Instrument_56.insert(DetachmentPoint_56.getString());
  FIX::EncodedIssuer EncodedIssuer_56("DATA_1751294807");
  msg.set(EncodedIssuer_56);
  Instrument_56.insert(EncodedIssuer_56.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_56(149859284);
  msg.set(EncodedIssuerLen_56);
  Instrument_56.insert(EncodedIssuerLen_56.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_56("DATA_869900935");
  msg.set(EncodedSecurityDesc_56);
  Instrument_56.insert(EncodedSecurityDesc_56.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_56(999970739);
  msg.set(EncodedSecurityDescLen_56);
  Instrument_56.insert(EncodedSecurityDescLen_56.getString());
  FIX::ExerciseStyle ExerciseStyle_56(0);
  msg.set(ExerciseStyle_56);
  Instrument_56.insert(ExerciseStyle_56.getString());
  FIX::Factor Factor_56;
  Factor_56.setString("2981796");
  msg.set(Factor_56);
  Instrument_56.insert(Factor_56.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_56(false);
  msg.set(FlexProductEligibilityIndicator_56);
  Instrument_56.insert(FlexProductEligibilityIndicator_56.getString());
  FIX::FlexibleIndicator FlexibleIndicator_56(false);
  msg.set(FlexibleIndicator_56);
  Instrument_56.insert(FlexibleIndicator_56.getString());
  FIX::FloorPrice FloorPrice_56;
  FloorPrice_56.setString("6331316");
  msg.set(FloorPrice_56);
  Instrument_56.insert(FloorPrice_56.getString());
  FIX::FlowScheduleType FlowScheduleType_56(0);
  msg.set(FlowScheduleType_56);
  Instrument_56.insert(FlowScheduleType_56.getString());
  FIX::InstrRegistry InstrRegistry_56("STRING_1733664270");
  msg.set(InstrRegistry_56);
  Instrument_56.insert(InstrRegistry_56.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_56('1');
  msg.set(InstrmtAssignmentMethod_56);
  Instrument_56.insert(InstrmtAssignmentMethod_56.getString());
  FIX::InterestAccrualDate InterestAccrualDate_56("LOCALMKTDATE_2129603629");
  msg.set(InterestAccrualDate_56);
  Instrument_56.insert(InterestAccrualDate_56.getString());
  FIX::IssueDate IssueDate_56("LOCALMKTDATE_657682573");
  msg.set(IssueDate_56);
  Instrument_56.insert(IssueDate_56.getString());
  FIX::Issuer Issuer_56("STRING_130286764");
  msg.set(Issuer_56);
  Instrument_56.insert(Issuer_56.getString());
  FIX::ListMethod ListMethod_56(0);
  msg.set(ListMethod_56);
  Instrument_56.insert(ListMethod_56.getString());
  FIX::LocaleOfIssue LocaleOfIssue_56("STRING_536073780");
  msg.set(LocaleOfIssue_56);
  Instrument_56.insert(LocaleOfIssue_56.getString());
  FIX::MaturityDate MaturityDate_56("LOCALMKTDATE_894368796");
  msg.set(MaturityDate_56);
  Instrument_56.insert(MaturityDate_56.getString());
  FIX::MaturityMonthYear MaturityMonthYear_56("MONTHYEAR_2006639421");
  msg.set(MaturityMonthYear_56);
  Instrument_56.insert(MaturityMonthYear_56.getString());
  FIX::MaturityTime MaturityTime_56("TZTIMEONLY_188443184");
  msg.set(MaturityTime_56);
  Instrument_56.insert(MaturityTime_56.getString());
  FIX::MinPriceIncrement MinPriceIncrement_56;
  MinPriceIncrement_56.setString("16135651");
  msg.set(MinPriceIncrement_56);
  Instrument_56.insert(MinPriceIncrement_56.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_56;
  MinPriceIncrementAmount_56.setString("18066753");
  msg.set(MinPriceIncrementAmount_56);
  Instrument_56.insert(MinPriceIncrementAmount_56.getString());
  FIX::NTPositionLimit NTPositionLimit_56(1100123227);
  msg.set(NTPositionLimit_56);
  Instrument_56.insert(NTPositionLimit_56.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_56;
  NotionalPercentageOutstanding_56.setString("34.200000");
  msg.set(NotionalPercentageOutstanding_56);
  Instrument_56.insert(NotionalPercentageOutstanding_56.getString());
  FIX::OptAttribute OptAttribute_56('8');
  msg.set(OptAttribute_56);
  Instrument_56.insert(OptAttribute_56.getString());
  FIX::OptPayoutAmount OptPayoutAmount_56;
  OptPayoutAmount_56.setString("15651787");
  msg.set(OptPayoutAmount_56);
  Instrument_56.insert(OptPayoutAmount_56.getString());
  FIX::OptPayoutType OptPayoutType_56(1);
  msg.set(OptPayoutType_56);
  Instrument_56.insert(OptPayoutType_56.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_56;
  OriginalNotionalPercentageOutstanding_56.setString("46.350000");
  msg.set(OriginalNotionalPercentageOutstanding_56);
  Instrument_56.insert(OriginalNotionalPercentageOutstanding_56.getString());
  FIX::Pool Pool_56("STRING_687477018");
  msg.set(Pool_56);
  Instrument_56.insert(Pool_56.getString());
  FIX::PositionLimit PositionLimit_56(1889608273);
  msg.set(PositionLimit_56);
  Instrument_56.insert(PositionLimit_56.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_56("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_56);
  Instrument_56.insert(PriceQuoteMethod_56.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_56("STRING_291288178");
  msg.set(PriceUnitOfMeasure_56);
  Instrument_56.insert(PriceUnitOfMeasure_56.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_56;
  PriceUnitOfMeasureQty_56.setString("20394675");
  msg.set(PriceUnitOfMeasureQty_56);
  Instrument_56.insert(PriceUnitOfMeasureQty_56.getString());
  FIX::Product Product_58(11);
  msg.set(Product_58);
  Instrument_56.insert(Product_58.getString());
  FIX::ProductComplex ProductComplex_56("STRING_1291258917");
  msg.set(ProductComplex_56);
  Instrument_56.insert(ProductComplex_56.getString());
  FIX::PutOrCall PutOrCall_56(1);
  msg.set(PutOrCall_56);
  Instrument_56.insert(PutOrCall_56.getString());
  FIX::RedemptionDate RedemptionDate_56("LOCALMKTDATE_2014213506");
  msg.set(RedemptionDate_56);
  Instrument_56.insert(RedemptionDate_56.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_56("STRING_936682213");
  msg.set(RepoCollateralSecurityType_56);
  Instrument_56.insert(RepoCollateralSecurityType_56.getString());
  FIX::RepurchaseRate RepurchaseRate_56;
  RepurchaseRate_56.setString("34.990000");
  msg.set(RepurchaseRate_56);
  Instrument_56.insert(RepurchaseRate_56.getString());
  FIX::RepurchaseTerm RepurchaseTerm_56(499861476);
  msg.set(RepurchaseTerm_56);
  Instrument_56.insert(RepurchaseTerm_56.getString());
  FIX::RestructuringType RestructuringType_56("STRING_MM");
  msg.set(RestructuringType_56);
  Instrument_56.insert(RestructuringType_56.getString());
  FIX::SecurityDesc SecurityDesc_56("STRING_1673984121");
  msg.set(SecurityDesc_56);
  Instrument_56.insert(SecurityDesc_56.getString());
  FIX::SecurityExchange SecurityExchange_56("EXCHANGE_668680697");
  msg.set(SecurityExchange_56);
  Instrument_56.insert(SecurityExchange_56.getString());
  FIX::SecurityGroup SecurityGroup_56("STRING_1961898300");
  msg.set(SecurityGroup_56);
  Instrument_56.insert(SecurityGroup_56.getString());
  FIX::SecurityID SecurityID_56("STRING_184183046");
  msg.set(SecurityID_56);
  Instrument_56.insert(SecurityID_56.getString());
  FIX::SecurityIDSource SecurityIDSource_56("STRING_I");
  msg.set(SecurityIDSource_56);
  Instrument_56.insert(SecurityIDSource_56.getString());
  FIX::SecurityStatus SecurityStatus_56("STRING_1");
  msg.set(SecurityStatus_56);
  Instrument_56.insert(SecurityStatus_56.getString());
  FIX::SecuritySubType SecuritySubType_57("STRING_720256826");
  msg.set(SecuritySubType_57);
  Instrument_56.insert(SecuritySubType_57.getString());
  FIX::SecurityType SecurityType_58("STRING_BRADY");
  msg.set(SecurityType_58);
  Instrument_56.insert(SecurityType_58.getString());
  FIX::Seniority Seniority_56("STRING_SB");
  msg.set(Seniority_56);
  Instrument_56.insert(Seniority_56.getString());
  FIX::SettlMethod SettlMethod_56('C');
  msg.set(SettlMethod_56);
  Instrument_56.insert(SettlMethod_56.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_56("STRING_1159417735");
  msg.set(SettleOnOpenFlag_56);
  Instrument_56.insert(SettleOnOpenFlag_56.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_56("STRING_132350288");
  msg.set(StateOrProvinceOfIssue_56);
  Instrument_56.insert(StateOrProvinceOfIssue_56.getString());
  FIX::StrikeCurrency StrikeCurrency_56("CAN");
  msg.set(StrikeCurrency_56);
  Instrument_56.insert(StrikeCurrency_56.getString());
  FIX::StrikeMultiplier StrikeMultiplier_56;
  StrikeMultiplier_56.setString("10159605");
  msg.set(StrikeMultiplier_56);
  Instrument_56.insert(StrikeMultiplier_56.getString());
  FIX::StrikePrice StrikePrice_56;
  StrikePrice_56.setString("14265183");
  msg.set(StrikePrice_56);
  Instrument_56.insert(StrikePrice_56.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_56(4);
  msg.set(StrikePriceBoundaryMethod_56);
  Instrument_56.insert(StrikePriceBoundaryMethod_56.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_56;
  StrikePriceBoundaryPrecision_56.setString("52.210000");
  msg.set(StrikePriceBoundaryPrecision_56);
  Instrument_56.insert(StrikePriceBoundaryPrecision_56.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_56(3);
  msg.set(StrikePriceDeterminationMethod_56);
  Instrument_56.insert(StrikePriceDeterminationMethod_56.getString());
  FIX::StrikeValue StrikeValue_56;
  StrikeValue_56.setString("11097227");
  msg.set(StrikeValue_56);
  Instrument_56.insert(StrikeValue_56.getString());
  FIX::Symbol Symbol_56("STRING_2064598108");
  msg.set(Symbol_56);
  Instrument_56.insert(Symbol_56.getString());
  FIX::SymbolSfx SymbolSfx_56("STRING_CD");
  msg.set(SymbolSfx_56);
  Instrument_56.insert(SymbolSfx_56.getString());
  FIX::TimeUnit TimeUnit_56("STRING_Mo");
  msg.set(TimeUnit_56);
  Instrument_56.insert(TimeUnit_56.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_56(4);
  msg.set(UnderlyingPriceDeterminationMethod_56);
  Instrument_56.insert(UnderlyingPriceDeterminationMethod_56.getString());
  FIX::UnitOfMeasure UnitOfMeasure_56("STRING_Alw");
  msg.set(UnitOfMeasure_56);
  Instrument_56.insert(UnitOfMeasure_56.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_56;
  UnitOfMeasureQty_56.setString("13362978");
  msg.set(UnitOfMeasureQty_56);
  Instrument_56.insert(UnitOfMeasureQty_56.getString());
  FIX::ValuationMethod ValuationMethod_56("STRING_FUTDA");
  msg.set(ValuationMethod_56);
  Instrument_56.insert(ValuationMethod_56.getString());
  all_values.push_back(Instrument_56);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_110;
    FIX::ComplexEventCondition ComplexEventCondition_110(1);
    noComplexEvents_0_0.set(ComplexEventCondition_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventCondition_110.getString());
    FIX::ComplexEventPrice ComplexEventPrice_110;
    ComplexEventPrice_110.setString("19997396");
    noComplexEvents_0_0.set(ComplexEventPrice_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventPrice_110.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_110(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventPriceBoundaryMethod_110.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_110;
    ComplexEventPriceBoundaryPrecision_110.setString("81.510000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventPriceBoundaryPrecision_110.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_110(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventPriceTimeType_110.getString());
    FIX::ComplexEventType ComplexEventType_110(6);
    noComplexEvents_0_0.set(ComplexEventType_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventType_110.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_110;
    ComplexOptPayoutAmount_110.setString("9873011");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexOptPayoutAmount_110.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_110);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_227;
      FIX::ComplexEventEndDate ComplexEventEndDate_227(FIX::UTCTIMESTAMP(23, 59, 19, 9, 7, 2003));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_227);
      ComplexEventDates_NoComplexEventDates_227.insert(ComplexEventEndDate_227.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_227(FIX::UTCTIMESTAMP(22, 45, 31, 12, 3, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_227);
      ComplexEventDates_NoComplexEventDates_227.insert(ComplexEventStartDate_227.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_227);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_465;
        FIX::ComplexEventEndTime ComplexEventEndTime_465(FIX::UTCTIMEONLY(18, 2, 42));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_465);
        ComplexEventTimes_NoComplexEventTimes_465.insert(ComplexEventEndTime_465.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_465(FIX::UTCTIMEONLY(5, 36, 43));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_465);
        ComplexEventTimes_NoComplexEventTimes_465.insert(ComplexEventStartTime_465.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_465);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_466;
        FIX::ComplexEventEndTime ComplexEventEndTime_466(FIX::UTCTIMEONLY(2, 0, 10));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_466);
        ComplexEventTimes_NoComplexEventTimes_466.insert(ComplexEventEndTime_466.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_466(FIX::UTCTIMEONLY(10, 59, 4));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_466);
        ComplexEventTimes_NoComplexEventTimes_466.insert(ComplexEventStartTime_466.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_466);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_467;
        FIX::ComplexEventEndTime ComplexEventEndTime_467(FIX::UTCTIMEONLY(14, 55, 59));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_467);
        ComplexEventTimes_NoComplexEventTimes_467.insert(ComplexEventEndTime_467.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_467(FIX::UTCTIMEONLY(6, 19, 14));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_467);
        ComplexEventTimes_NoComplexEventTimes_467.insert(ComplexEventStartTime_467.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_467);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_111;
    FIX::ComplexEventCondition ComplexEventCondition_111(1);
    noComplexEvents_0_1.set(ComplexEventCondition_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventCondition_111.getString());
    FIX::ComplexEventPrice ComplexEventPrice_111;
    ComplexEventPrice_111.setString("5298594");
    noComplexEvents_0_1.set(ComplexEventPrice_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventPrice_111.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_111(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventPriceBoundaryMethod_111.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_111;
    ComplexEventPriceBoundaryPrecision_111.setString("96.080000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventPriceBoundaryPrecision_111.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_111(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventPriceTimeType_111.getString());
    FIX::ComplexEventType ComplexEventType_111(2);
    noComplexEvents_0_1.set(ComplexEventType_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventType_111.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_111;
    ComplexOptPayoutAmount_111.setString("3529650");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexOptPayoutAmount_111.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_111);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_228;
      FIX::ComplexEventEndDate ComplexEventEndDate_228(FIX::UTCTIMESTAMP(7, 50, 17, 0, 3, 2010));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_228);
      ComplexEventDates_NoComplexEventDates_228.insert(ComplexEventEndDate_228.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_228(FIX::UTCTIMESTAMP(21, 44, 13, 11, 11, 2006));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_228);
      ComplexEventDates_NoComplexEventDates_228.insert(ComplexEventStartDate_228.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_228);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_468;
        FIX::ComplexEventEndTime ComplexEventEndTime_468(FIX::UTCTIMEONLY(14, 19, 18));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_468);
        ComplexEventTimes_NoComplexEventTimes_468.insert(ComplexEventEndTime_468.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_468(FIX::UTCTIMEONLY(5, 37, 12));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_468);
        ComplexEventTimes_NoComplexEventTimes_468.insert(ComplexEventStartTime_468.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_468);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_469;
        FIX::ComplexEventEndTime ComplexEventEndTime_469(FIX::UTCTIMEONLY(5, 41, 17));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_469);
        ComplexEventTimes_NoComplexEventTimes_469.insert(ComplexEventEndTime_469.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_469(FIX::UTCTIMEONLY(0, 34, 11));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_469);
        ComplexEventTimes_NoComplexEventTimes_469.insert(ComplexEventStartTime_469.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_469);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_470;
        FIX::ComplexEventEndTime ComplexEventEndTime_470(FIX::UTCTIMEONLY(5, 54, 38));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_470);
        ComplexEventTimes_NoComplexEventTimes_470.insert(ComplexEventEndTime_470.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_470(FIX::UTCTIMEONLY(12, 30, 36));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_470);
        ComplexEventTimes_NoComplexEventTimes_470.insert(ComplexEventStartTime_470.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_470);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_229;
      FIX::ComplexEventEndDate ComplexEventEndDate_229(FIX::UTCTIMESTAMP(7, 49, 5, 9, 2, 2014));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_229);
      ComplexEventDates_NoComplexEventDates_229.insert(ComplexEventEndDate_229.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_229(FIX::UTCTIMESTAMP(7, 31, 30, 25, 1, 2001));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_229);
      ComplexEventDates_NoComplexEventDates_229.insert(ComplexEventStartDate_229.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_229);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_471;
        FIX::ComplexEventEndTime ComplexEventEndTime_471(FIX::UTCTIMEONLY(12, 2, 31));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_471);
        ComplexEventTimes_NoComplexEventTimes_471.insert(ComplexEventEndTime_471.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_471(FIX::UTCTIMEONLY(15, 57, 46));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_471);
        ComplexEventTimes_NoComplexEventTimes_471.insert(ComplexEventStartTime_471.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_471);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_230;
      FIX::ComplexEventEndDate ComplexEventEndDate_230(FIX::UTCTIMESTAMP(19, 40, 51, 12, 10, 2003));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_230);
      ComplexEventDates_NoComplexEventDates_230.insert(ComplexEventEndDate_230.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_230(FIX::UTCTIMESTAMP(10, 28, 26, 15, 3, 2014));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_230);
      ComplexEventDates_NoComplexEventDates_230.insert(ComplexEventStartDate_230.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_230);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_472;
        FIX::ComplexEventEndTime ComplexEventEndTime_472(FIX::UTCTIMEONLY(7, 3, 56));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_472);
        ComplexEventTimes_NoComplexEventTimes_472.insert(ComplexEventEndTime_472.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_472(FIX::UTCTIMEONLY(20, 3, 1));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_472);
        ComplexEventTimes_NoComplexEventTimes_472.insert(ComplexEventStartTime_472.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_472);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_473;
        FIX::ComplexEventEndTime ComplexEventEndTime_473(FIX::UTCTIMEONLY(19, 4, 56));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_473);
        ComplexEventTimes_NoComplexEventTimes_473.insert(ComplexEventEndTime_473.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_473(FIX::UTCTIMEONLY(11, 54, 4));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_473);
        ComplexEventTimes_NoComplexEventTimes_473.insert(ComplexEventStartTime_473.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_473);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
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
    multiset<string> EvntGrp_NoEvents_104;
    FIX::EventDate EventDate_104("LOCALMKTDATE_375376529");
    noEvents_0_0.set(EventDate_104);
    EvntGrp_NoEvents_104.insert(EventDate_104.getString());
    FIX::EventPx EventPx_104;
    EventPx_104.setString("3298177");
    noEvents_0_0.set(EventPx_104);
    EvntGrp_NoEvents_104.insert(EventPx_104.getString());
    FIX::EventText EventText_104("STRING_1356944270");
    noEvents_0_0.set(EventText_104);
    EvntGrp_NoEvents_104.insert(EventText_104.getString());
    FIX::EventTime EventTime_104(FIX::UTCTIMESTAMP(22, 4, 6, 8, 1, 2009));
    noEvents_0_0.set(EventTime_104);
    EvntGrp_NoEvents_104.insert(EventTime_104.getString());
    FIX::EventType EventType_104(5);
    noEvents_0_0.set(EventType_104);
    EvntGrp_NoEvents_104.insert(EventType_104.getString());
    all_values.push_back(EvntGrp_NoEvents_104);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_105;
    FIX::EventDate EventDate_105("LOCALMKTDATE_1603773518");
    noEvents_0_1.set(EventDate_105);
    EvntGrp_NoEvents_105.insert(EventDate_105.getString());
    FIX::EventPx EventPx_105;
    EventPx_105.setString("14130050");
    noEvents_0_1.set(EventPx_105);
    EvntGrp_NoEvents_105.insert(EventPx_105.getString());
    FIX::EventText EventText_105("STRING_899501256");
    noEvents_0_1.set(EventText_105);
    EvntGrp_NoEvents_105.insert(EventText_105.getString());
    FIX::EventTime EventTime_105(FIX::UTCTIMESTAMP(8, 39, 52, 9, 12, 2017));
    noEvents_0_1.set(EventTime_105);
    EvntGrp_NoEvents_105.insert(EventTime_105.getString());
    FIX::EventType EventType_105(11);
    noEvents_0_1.set(EventType_105);
    EvntGrp_NoEvents_105.insert(EventType_105.getString());
    all_values.push_back(EvntGrp_NoEvents_105);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderStatusRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_106;
    FIX::EventDate EventDate_106("LOCALMKTDATE_1187092885");
    noEvents_0_2.set(EventDate_106);
    EvntGrp_NoEvents_106.insert(EventDate_106.getString());
    FIX::EventPx EventPx_106;
    EventPx_106.setString("17997427");
    noEvents_0_2.set(EventPx_106);
    EvntGrp_NoEvents_106.insert(EventPx_106.getString());
    FIX::EventText EventText_106("STRING_1265935486");
    noEvents_0_2.set(EventText_106);
    EvntGrp_NoEvents_106.insert(EventText_106.getString());
    FIX::EventTime EventTime_106(FIX::UTCTIMESTAMP(12, 25, 59, 1, 2, 2016));
    noEvents_0_2.set(EventTime_106);
    EvntGrp_NoEvents_106.insert(EventTime_106.getString());
    FIX::EventType EventType_106(3);
    noEvents_0_2.set(EventType_106);
    EvntGrp_NoEvents_106.insert(EventType_106.getString());
    all_values.push_back(EvntGrp_NoEvents_106);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_105;
    FIX::InstrumentPartyID InstrumentPartyID_105("STRING_266644378");
    noInstrumentParties_0_0.set(InstrumentPartyID_105);
    InstrumentParties_NoInstrumentParties_105.insert(InstrumentPartyID_105.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_105('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_105);
    InstrumentParties_NoInstrumentParties_105.insert(InstrumentPartyIDSource_105.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_105(1492272671);
    noInstrumentParties_0_0.set(InstrumentPartyRole_105);
    InstrumentParties_NoInstrumentParties_105.insert(InstrumentPartyRole_105.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_105);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226;
      FIX::InstrumentPartySubID InstrumentPartySubID_226("STRING_472019600");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_226);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226.insert(InstrumentPartySubID_226.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_226(126989488);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_226);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226.insert(InstrumentPartySubIDType_226.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227;
      FIX::InstrumentPartySubID InstrumentPartySubID_227("STRING_221126189");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_227);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227.insert(InstrumentPartySubID_227.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_227(1814612904);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_227);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227.insert(InstrumentPartySubIDType_227.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_106;
    FIX::InstrumentPartyID InstrumentPartyID_106("STRING_1730763006");
    noInstrumentParties_0_1.set(InstrumentPartyID_106);
    InstrumentParties_NoInstrumentParties_106.insert(InstrumentPartyID_106.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_106('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_106);
    InstrumentParties_NoInstrumentParties_106.insert(InstrumentPartyIDSource_106.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_106(566630512);
    noInstrumentParties_0_1.set(InstrumentPartyRole_106);
    InstrumentParties_NoInstrumentParties_106.insert(InstrumentPartyRole_106.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_106);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228;
      FIX::InstrumentPartySubID InstrumentPartySubID_228("STRING_1803580223");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_228);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228.insert(InstrumentPartySubID_228.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_228(136103784);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_228);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228.insert(InstrumentPartySubIDType_228.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_121;
    FIX::SecurityAltID SecurityAltID_121("STRING_110299564");
    noSecurityAltID_0_0.set(SecurityAltID_121);
    SecAltIDGrp_NoSecurityAltID_121.insert(SecurityAltID_121.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_121("STRING_1963685243");
    noSecurityAltID_0_0.set(SecurityAltIDSource_121);
    SecAltIDGrp_NoSecurityAltID_121.insert(SecurityAltIDSource_121.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_121);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_122;
    FIX::SecurityAltID SecurityAltID_122("STRING_856773755");
    noSecurityAltID_0_1.set(SecurityAltID_122);
    SecAltIDGrp_NoSecurityAltID_122.insert(SecurityAltID_122.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_122("STRING_1616765814");
    noSecurityAltID_0_1.set(SecurityAltIDSource_122);
    SecAltIDGrp_NoSecurityAltID_122.insert(SecurityAltIDSource_122.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_122);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderStatusRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_123;
    FIX::SecurityAltID SecurityAltID_123("STRING_1003294480");
    noSecurityAltID_0_2.set(SecurityAltID_123);
    SecAltIDGrp_NoSecurityAltID_123.insert(SecurityAltID_123.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_123("STRING_509032857");
    noSecurityAltID_0_2.set(SecurityAltIDSource_123);
    SecAltIDGrp_NoSecurityAltID_123.insert(SecurityAltIDSource_123.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_123);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_112;
  FIX::SecurityXML SecurityXML_113("XMLDATA_735217653");
  msg.set(SecurityXML_113);
  FIX::SecurityXMLLen SecurityXMLLen_56(1337673294);
  msg.set(SecurityXMLLen_56);
  FIX::SecurityXMLSchema SecurityXMLSchema_56("STRING_371425598");
  msg.set(SecurityXMLSchema_56);
  SecurityXML_112.insert(SecurityXMLSchema_56.getString());
  all_values.push_back(SecurityXML_112);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_99;
    FIX::PartyID PartyID_99("STRING_1498965233");
    noPartyIDs_0_0.set(PartyID_99);
    Parties_NoPartyIDs_99.insert(PartyID_99.getString());
    FIX::PartyIDSource PartyIDSource_99('H');
    noPartyIDs_0_0.set(PartyIDSource_99);
    Parties_NoPartyIDs_99.insert(PartyIDSource_99.getString());
    FIX::PartyRole PartyRole_99(4);
    noPartyIDs_0_0.set(PartyRole_99);
    Parties_NoPartyIDs_99.insert(PartyRole_99.getString());
    all_values.push_back(Parties_NoPartyIDs_99);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_203;
      FIX::PartySubID PartySubID_203("STRING_1875747765");
      noPartySubIDs_0_1_0.set(PartySubID_203);
      PtysSubGrp_NoPartySubIDs_203.insert(PartySubID_203.getString());
      FIX::PartySubIDType PartySubIDType_203(12);
      noPartySubIDs_0_1_0.set(PartySubIDType_203);
      PtysSubGrp_NoPartySubIDs_203.insert(PartySubIDType_203.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_203);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_204;
      FIX::PartySubID PartySubID_204("STRING_154794432");
      noPartySubIDs_0_1_1.set(PartySubID_204);
      PtysSubGrp_NoPartySubIDs_204.insert(PartySubID_204.getString());
      FIX::PartySubIDType PartySubIDType_204(1);
      noPartySubIDs_0_1_1.set(PartySubIDType_204);
      PtysSubGrp_NoPartySubIDs_204.insert(PartySubIDType_204.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_204);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_100;
    FIX::PartyID PartyID_100("STRING_94145246");
    noPartyIDs_0_1.set(PartyID_100);
    Parties_NoPartyIDs_100.insert(PartyID_100.getString());
    FIX::PartyIDSource PartyIDSource_100('I');
    noPartyIDs_0_1.set(PartyIDSource_100);
    Parties_NoPartyIDs_100.insert(PartyIDSource_100.getString());
    FIX::PartyRole PartyRole_100(31);
    noPartyIDs_0_1.set(PartyRole_100);
    Parties_NoPartyIDs_100.insert(PartyRole_100.getString());
    all_values.push_back(Parties_NoPartyIDs_100);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_205;
      FIX::PartySubID PartySubID_205("STRING_854993626");
      noPartySubIDs_1_1_0.set(PartySubID_205);
      PtysSubGrp_NoPartySubIDs_205.insert(PartySubID_205.getString());
      FIX::PartySubIDType PartySubIDType_205(2);
      noPartySubIDs_1_1_0.set(PartySubIDType_205);
      PtysSubGrp_NoPartySubIDs_205.insert(PartySubIDType_205.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_205);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_80;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_80("DATA_341641192");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_80);
    UnderlyingInstrument_80.insert(EncodedUnderlyingIssuer_80.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_80(1999247270);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_80);
    UnderlyingInstrument_80.insert(EncodedUnderlyingIssuerLen_80.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_80("DATA_1646728016");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_80);
    UnderlyingInstrument_80.insert(EncodedUnderlyingSecurityDesc_80.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_80(2145221415);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_80);
    UnderlyingInstrument_80.insert(EncodedUnderlyingSecurityDescLen_80.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_80;
    UnderlyingAdjustedQuantity_80.setString("21353510");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_80);
    UnderlyingInstrument_80.insert(UnderlyingAdjustedQuantity_80.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_80;
    UnderlyingAllocationPercent_80.setString("18.150000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_80);
    UnderlyingInstrument_80.insert(UnderlyingAllocationPercent_80.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_80;
    UnderlyingAttachmentPoint_80.setString("73.310000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_80);
    UnderlyingInstrument_80.insert(UnderlyingAttachmentPoint_80.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_80("STRING_1951552650");
    noUnderlyings_0_0.set(UnderlyingCFICode_80);
    UnderlyingInstrument_80.insert(UnderlyingCFICode_80.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_80("STRING_917125570");
    noUnderlyings_0_0.set(UnderlyingCPProgram_80);
    UnderlyingInstrument_80.insert(UnderlyingCPProgram_80.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_80("STRING_1724803146");
    noUnderlyings_0_0.set(UnderlyingCPRegType_80);
    UnderlyingInstrument_80.insert(UnderlyingCPRegType_80.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_80;
    UnderlyingCapValue_80.setString("8073634");
    noUnderlyings_0_0.set(UnderlyingCapValue_80);
    UnderlyingInstrument_80.insert(UnderlyingCapValue_80.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_80;
    UnderlyingCashAmount_80.setString("14261584");
    noUnderlyings_0_0.set(UnderlyingCashAmount_80);
    UnderlyingInstrument_80.insert(UnderlyingCashAmount_80.getString());
    FIX::UnderlyingCashType UnderlyingCashType_80("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_80);
    UnderlyingInstrument_80.insert(UnderlyingCashType_80.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_80;
    UnderlyingContractMultiplier_80.setString("21450367");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_80);
    UnderlyingInstrument_80.insert(UnderlyingContractMultiplier_80.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_80(1797584026);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_80);
    UnderlyingInstrument_80.insert(UnderlyingContractMultiplierUnit_80.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_80("COUNTRY_1291187309");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_80);
    UnderlyingInstrument_80.insert(UnderlyingCountryOfIssue_80.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_80("LOCALMKTDATE_1496518362");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_80);
    UnderlyingInstrument_80.insert(UnderlyingCouponPaymentDate_80.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_80;
    UnderlyingCouponRate_80.setString("81.810000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_80);
    UnderlyingInstrument_80.insert(UnderlyingCouponRate_80.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_80("STRING_1476718365");
    noUnderlyings_0_0.set(UnderlyingCreditRating_80);
    UnderlyingInstrument_80.insert(UnderlyingCreditRating_80.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_80("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_80);
    UnderlyingInstrument_80.insert(UnderlyingCurrency_80.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_80;
    UnderlyingCurrentValue_80.setString("785909");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_80);
    UnderlyingInstrument_80.insert(UnderlyingCurrentValue_80.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_80;
    UnderlyingDetachmentPoint_80.setString("28.480000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_80);
    UnderlyingInstrument_80.insert(UnderlyingDetachmentPoint_80.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_80;
    UnderlyingDirtyPrice_80.setString("16305101");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_80);
    UnderlyingInstrument_80.insert(UnderlyingDirtyPrice_80.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_80;
    UnderlyingEndPrice_80.setString("1727361");
    noUnderlyings_0_0.set(UnderlyingEndPrice_80);
    UnderlyingInstrument_80.insert(UnderlyingEndPrice_80.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_80;
    UnderlyingEndValue_80.setString("258466");
    noUnderlyings_0_0.set(UnderlyingEndValue_80);
    UnderlyingInstrument_80.insert(UnderlyingEndValue_80.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_80(1248514052);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_80);
    UnderlyingInstrument_80.insert(UnderlyingExerciseStyle_80.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_80;
    UnderlyingFXRate_80.setString("3938709");
    noUnderlyings_0_0.set(UnderlyingFXRate_80);
    UnderlyingInstrument_80.insert(UnderlyingFXRate_80.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_80('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_80);
    UnderlyingInstrument_80.insert(UnderlyingFXRateCalc_80.getString());
    FIX::UnderlyingFactor UnderlyingFactor_80;
    UnderlyingFactor_80.setString("5336471");
    noUnderlyings_0_0.set(UnderlyingFactor_80);
    UnderlyingInstrument_80.insert(UnderlyingFactor_80.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_80(198285014);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_80);
    UnderlyingInstrument_80.insert(UnderlyingFlowScheduleType_80.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_80("STRING_1222481455");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_80);
    UnderlyingInstrument_80.insert(UnderlyingInstrRegistry_80.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_80("LOCALMKTDATE_385410785");
    noUnderlyings_0_0.set(UnderlyingIssueDate_80);
    UnderlyingInstrument_80.insert(UnderlyingIssueDate_80.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_80("STRING_1845013030");
    noUnderlyings_0_0.set(UnderlyingIssuer_80);
    UnderlyingInstrument_80.insert(UnderlyingIssuer_80.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_80("STRING_1220219222");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_80);
    UnderlyingInstrument_80.insert(UnderlyingLocaleOfIssue_80.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_80("LOCALMKTDATE_373278191");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_80);
    UnderlyingInstrument_80.insert(UnderlyingMaturityDate_80.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_80("MONTHYEAR_1905364845");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_80);
    UnderlyingInstrument_80.insert(UnderlyingMaturityMonthYear_80.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_80("TZTIMEONLY_1328256554");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_80);
    UnderlyingInstrument_80.insert(UnderlyingMaturityTime_80.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_80;
    UnderlyingNotionalPercentageOutstanding_80.setString("71.930000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_80);
    UnderlyingInstrument_80.insert(UnderlyingNotionalPercentageOutstanding_80.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_80('6');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_80);
    UnderlyingInstrument_80.insert(UnderlyingOptAttribute_80.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_80;
    UnderlyingOriginalNotionalPercentageOutstanding_80.setString("60.520000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_80);
    UnderlyingInstrument_80.insert(UnderlyingOriginalNotionalPercentageOutstanding_80.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_80("STRING_984710676");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_80);
    UnderlyingInstrument_80.insert(UnderlyingPriceUnitOfMeasure_80.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_80;
    UnderlyingPriceUnitOfMeasureQty_80.setString("21011651");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_80);
    UnderlyingInstrument_80.insert(UnderlyingPriceUnitOfMeasureQty_80.getString());
    FIX::UnderlyingProduct UnderlyingProduct_80(1218113203);
    noUnderlyings_0_0.set(UnderlyingProduct_80);
    UnderlyingInstrument_80.insert(UnderlyingProduct_80.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_80(982263804);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_80);
    UnderlyingInstrument_80.insert(UnderlyingPutOrCall_80.getString());
    FIX::UnderlyingPx UnderlyingPx_80;
    UnderlyingPx_80.setString("17512655");
    noUnderlyings_0_0.set(UnderlyingPx_80);
    UnderlyingInstrument_80.insert(UnderlyingPx_80.getString());
    FIX::UnderlyingQty UnderlyingQty_80;
    UnderlyingQty_80.setString("3618168");
    noUnderlyings_0_0.set(UnderlyingQty_80);
    UnderlyingInstrument_80.insert(UnderlyingQty_80.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_80("LOCALMKTDATE_331298518");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_80);
    UnderlyingInstrument_80.insert(UnderlyingRedemptionDate_80.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_80("STRING_212560107");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_80);
    UnderlyingInstrument_80.insert(UnderlyingRepoCollateralSecurityType_80.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_80;
    UnderlyingRepurchaseRate_80.setString("52.290000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_80);
    UnderlyingInstrument_80.insert(UnderlyingRepurchaseRate_80.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_80(1715966934);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_80);
    UnderlyingInstrument_80.insert(UnderlyingRepurchaseTerm_80.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_80("STRING_549602405");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_80);
    UnderlyingInstrument_80.insert(UnderlyingRestructuringType_80.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_80("STRING_1917126169");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_80);
    UnderlyingInstrument_80.insert(UnderlyingSecurityDesc_80.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_80("EXCHANGE_1107946134");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_80);
    UnderlyingInstrument_80.insert(UnderlyingSecurityExchange_80.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_80("STRING_32628956");
    noUnderlyings_0_0.set(UnderlyingSecurityID_80);
    UnderlyingInstrument_80.insert(UnderlyingSecurityID_80.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_80("STRING_2089862356");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_80);
    UnderlyingInstrument_80.insert(UnderlyingSecurityIDSource_80.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_80("STRING_1133792771");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_80);
    UnderlyingInstrument_80.insert(UnderlyingSecuritySubType_80.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_80("STRING_1281143008");
    noUnderlyings_0_0.set(UnderlyingSecurityType_80);
    UnderlyingInstrument_80.insert(UnderlyingSecurityType_80.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_80("STRING_336249629");
    noUnderlyings_0_0.set(UnderlyingSeniority_80);
    UnderlyingInstrument_80.insert(UnderlyingSeniority_80.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_80("STRING_2014633033");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_80);
    UnderlyingInstrument_80.insert(UnderlyingSettlMethod_80.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_80(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_80);
    UnderlyingInstrument_80.insert(UnderlyingSettlementType_80.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_80;
    UnderlyingStartValue_80.setString("5345346");
    noUnderlyings_0_0.set(UnderlyingStartValue_80);
    UnderlyingInstrument_80.insert(UnderlyingStartValue_80.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_80("STRING_1089630840");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_80);
    UnderlyingInstrument_80.insert(UnderlyingStateOrProvinceOfIssue_80.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_80("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_80);
    UnderlyingInstrument_80.insert(UnderlyingStrikeCurrency_80.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_80;
    UnderlyingStrikePrice_80.setString("1623664");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_80);
    UnderlyingInstrument_80.insert(UnderlyingStrikePrice_80.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_80("STRING_425995499");
    noUnderlyings_0_0.set(UnderlyingSymbol_80);
    UnderlyingInstrument_80.insert(UnderlyingSymbol_80.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_80("STRING_2137428870");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_80);
    UnderlyingInstrument_80.insert(UnderlyingSymbolSfx_80.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_80("STRING_1490622969");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_80);
    UnderlyingInstrument_80.insert(UnderlyingTimeUnit_80.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_80("STRING_603342693");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_80);
    UnderlyingInstrument_80.insert(UnderlyingUnitOfMeasure_80.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_80;
    UnderlyingUnitOfMeasureQty_80.setString("6649519");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_80);
    UnderlyingInstrument_80.insert(UnderlyingUnitOfMeasureQty_80.getString());
    all_values.push_back(UnderlyingInstrument_80);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_168;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_168("STRING_1588053369");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_168);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_168.insert(UnderlyingSecurityAltID_168.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_168("STRING_618633538");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_168);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_168.insert(UnderlyingSecurityAltIDSource_168.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_168);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_169;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_169("STRING_1466828576");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_169);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_169.insert(UnderlyingSecurityAltID_169.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_169("STRING_422833525");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_169);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_169.insert(UnderlyingSecurityAltIDSource_169.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_169);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_154;
      FIX::UnderlyingStipType UnderlyingStipType_154("STRING_1828645440");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_154);
      UnderlyingStipulations_NoUnderlyingStips_154.insert(UnderlyingStipType_154.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_154("STRING_754132044");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_154);
      UnderlyingStipulations_NoUnderlyingStips_154.insert(UnderlyingStipValue_154.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_154);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_163;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_163("STRING_1519697022");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_163);
      UndlyInstrumentParties_NoUndlyInstrumentParties_163.insert(UnderlyingInstrumentPartyID_163.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_163('3');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_163);
      UndlyInstrumentParties_NoUndlyInstrumentParties_163.insert(UnderlyingInstrumentPartyIDSource_163.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_163(984577976);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_163);
      UndlyInstrumentParties_NoUndlyInstrumentParties_163.insert(UnderlyingInstrumentPartyRole_163.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_163);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_329("STRING_1430561465");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_329);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329.insert(UnderlyingInstrumentPartySubID_329.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_329(1017206932);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_329);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329.insert(UnderlyingInstrumentPartySubIDType_329.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_330("STRING_1231718251");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_330);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330.insert(UnderlyingInstrumentPartySubID_330.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_330(416870588);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_330);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330.insert(UnderlyingInstrumentPartySubIDType_330.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_331("STRING_150866293");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_331);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331.insert(UnderlyingInstrumentPartySubID_331.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_331(1567967880);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_331);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331.insert(UnderlyingInstrumentPartySubIDType_331.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_81;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_81("DATA_284019973");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_81);
    UnderlyingInstrument_81.insert(EncodedUnderlyingIssuer_81.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_81(1965656464);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_81);
    UnderlyingInstrument_81.insert(EncodedUnderlyingIssuerLen_81.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_81("DATA_2102502523");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_81);
    UnderlyingInstrument_81.insert(EncodedUnderlyingSecurityDesc_81.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_81(1373650814);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_81);
    UnderlyingInstrument_81.insert(EncodedUnderlyingSecurityDescLen_81.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_81;
    UnderlyingAdjustedQuantity_81.setString("20183737");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_81);
    UnderlyingInstrument_81.insert(UnderlyingAdjustedQuantity_81.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_81;
    UnderlyingAllocationPercent_81.setString("29.000000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_81);
    UnderlyingInstrument_81.insert(UnderlyingAllocationPercent_81.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_81;
    UnderlyingAttachmentPoint_81.setString("72.290000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_81);
    UnderlyingInstrument_81.insert(UnderlyingAttachmentPoint_81.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_81("STRING_296885623");
    noUnderlyings_0_1.set(UnderlyingCFICode_81);
    UnderlyingInstrument_81.insert(UnderlyingCFICode_81.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_81("STRING_177028123");
    noUnderlyings_0_1.set(UnderlyingCPProgram_81);
    UnderlyingInstrument_81.insert(UnderlyingCPProgram_81.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_81("STRING_879156550");
    noUnderlyings_0_1.set(UnderlyingCPRegType_81);
    UnderlyingInstrument_81.insert(UnderlyingCPRegType_81.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_81;
    UnderlyingCapValue_81.setString("9002283");
    noUnderlyings_0_1.set(UnderlyingCapValue_81);
    UnderlyingInstrument_81.insert(UnderlyingCapValue_81.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_81;
    UnderlyingCashAmount_81.setString("8419801");
    noUnderlyings_0_1.set(UnderlyingCashAmount_81);
    UnderlyingInstrument_81.insert(UnderlyingCashAmount_81.getString());
    FIX::UnderlyingCashType UnderlyingCashType_81("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_81);
    UnderlyingInstrument_81.insert(UnderlyingCashType_81.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_81;
    UnderlyingContractMultiplier_81.setString("3407980");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_81);
    UnderlyingInstrument_81.insert(UnderlyingContractMultiplier_81.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_81(1460613652);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_81);
    UnderlyingInstrument_81.insert(UnderlyingContractMultiplierUnit_81.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_81("COUNTRY_447216851");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_81);
    UnderlyingInstrument_81.insert(UnderlyingCountryOfIssue_81.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_81("LOCALMKTDATE_763631563");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_81);
    UnderlyingInstrument_81.insert(UnderlyingCouponPaymentDate_81.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_81;
    UnderlyingCouponRate_81.setString("91.160000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_81);
    UnderlyingInstrument_81.insert(UnderlyingCouponRate_81.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_81("STRING_128378643");
    noUnderlyings_0_1.set(UnderlyingCreditRating_81);
    UnderlyingInstrument_81.insert(UnderlyingCreditRating_81.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_81("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_81);
    UnderlyingInstrument_81.insert(UnderlyingCurrency_81.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_81;
    UnderlyingCurrentValue_81.setString("16480756");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_81);
    UnderlyingInstrument_81.insert(UnderlyingCurrentValue_81.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_81;
    UnderlyingDetachmentPoint_81.setString("89.370000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_81);
    UnderlyingInstrument_81.insert(UnderlyingDetachmentPoint_81.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_81;
    UnderlyingDirtyPrice_81.setString("9550990");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_81);
    UnderlyingInstrument_81.insert(UnderlyingDirtyPrice_81.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_81;
    UnderlyingEndPrice_81.setString("7899315");
    noUnderlyings_0_1.set(UnderlyingEndPrice_81);
    UnderlyingInstrument_81.insert(UnderlyingEndPrice_81.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_81;
    UnderlyingEndValue_81.setString("11234567");
    noUnderlyings_0_1.set(UnderlyingEndValue_81);
    UnderlyingInstrument_81.insert(UnderlyingEndValue_81.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_81(1972305949);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_81);
    UnderlyingInstrument_81.insert(UnderlyingExerciseStyle_81.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_81;
    UnderlyingFXRate_81.setString("20216498");
    noUnderlyings_0_1.set(UnderlyingFXRate_81);
    UnderlyingInstrument_81.insert(UnderlyingFXRate_81.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_81('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_81);
    UnderlyingInstrument_81.insert(UnderlyingFXRateCalc_81.getString());
    FIX::UnderlyingFactor UnderlyingFactor_81;
    UnderlyingFactor_81.setString("21231722");
    noUnderlyings_0_1.set(UnderlyingFactor_81);
    UnderlyingInstrument_81.insert(UnderlyingFactor_81.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_81(1442134045);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_81);
    UnderlyingInstrument_81.insert(UnderlyingFlowScheduleType_81.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_81("STRING_1824347316");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_81);
    UnderlyingInstrument_81.insert(UnderlyingInstrRegistry_81.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_81("LOCALMKTDATE_1941345058");
    noUnderlyings_0_1.set(UnderlyingIssueDate_81);
    UnderlyingInstrument_81.insert(UnderlyingIssueDate_81.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_81("STRING_1397152920");
    noUnderlyings_0_1.set(UnderlyingIssuer_81);
    UnderlyingInstrument_81.insert(UnderlyingIssuer_81.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_81("STRING_1050514482");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_81);
    UnderlyingInstrument_81.insert(UnderlyingLocaleOfIssue_81.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_81("LOCALMKTDATE_1812235182");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_81);
    UnderlyingInstrument_81.insert(UnderlyingMaturityDate_81.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_81("MONTHYEAR_1584235821");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_81);
    UnderlyingInstrument_81.insert(UnderlyingMaturityMonthYear_81.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_81("TZTIMEONLY_439048063");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_81);
    UnderlyingInstrument_81.insert(UnderlyingMaturityTime_81.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_81;
    UnderlyingNotionalPercentageOutstanding_81.setString("8.050000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_81);
    UnderlyingInstrument_81.insert(UnderlyingNotionalPercentageOutstanding_81.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_81('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_81);
    UnderlyingInstrument_81.insert(UnderlyingOptAttribute_81.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_81;
    UnderlyingOriginalNotionalPercentageOutstanding_81.setString("46.130000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_81);
    UnderlyingInstrument_81.insert(UnderlyingOriginalNotionalPercentageOutstanding_81.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_81("STRING_861865474");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_81);
    UnderlyingInstrument_81.insert(UnderlyingPriceUnitOfMeasure_81.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_81;
    UnderlyingPriceUnitOfMeasureQty_81.setString("4557604");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_81);
    UnderlyingInstrument_81.insert(UnderlyingPriceUnitOfMeasureQty_81.getString());
    FIX::UnderlyingProduct UnderlyingProduct_81(298592888);
    noUnderlyings_0_1.set(UnderlyingProduct_81);
    UnderlyingInstrument_81.insert(UnderlyingProduct_81.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_81(1202663511);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_81);
    UnderlyingInstrument_81.insert(UnderlyingPutOrCall_81.getString());
    FIX::UnderlyingPx UnderlyingPx_81;
    UnderlyingPx_81.setString("19163740");
    noUnderlyings_0_1.set(UnderlyingPx_81);
    UnderlyingInstrument_81.insert(UnderlyingPx_81.getString());
    FIX::UnderlyingQty UnderlyingQty_81;
    UnderlyingQty_81.setString("7458097");
    noUnderlyings_0_1.set(UnderlyingQty_81);
    UnderlyingInstrument_81.insert(UnderlyingQty_81.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_81("LOCALMKTDATE_1966295074");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_81);
    UnderlyingInstrument_81.insert(UnderlyingRedemptionDate_81.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_81("STRING_1451919530");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_81);
    UnderlyingInstrument_81.insert(UnderlyingRepoCollateralSecurityType_81.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_81;
    UnderlyingRepurchaseRate_81.setString("83.820000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_81);
    UnderlyingInstrument_81.insert(UnderlyingRepurchaseRate_81.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_81(1336575033);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_81);
    UnderlyingInstrument_81.insert(UnderlyingRepurchaseTerm_81.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_81("STRING_1422440570");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_81);
    UnderlyingInstrument_81.insert(UnderlyingRestructuringType_81.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_81("STRING_374780400");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_81);
    UnderlyingInstrument_81.insert(UnderlyingSecurityDesc_81.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_81("EXCHANGE_1029470323");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_81);
    UnderlyingInstrument_81.insert(UnderlyingSecurityExchange_81.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_81("STRING_230055938");
    noUnderlyings_0_1.set(UnderlyingSecurityID_81);
    UnderlyingInstrument_81.insert(UnderlyingSecurityID_81.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_81("STRING_1164711961");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_81);
    UnderlyingInstrument_81.insert(UnderlyingSecurityIDSource_81.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_81("STRING_5443429");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_81);
    UnderlyingInstrument_81.insert(UnderlyingSecuritySubType_81.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_81("STRING_54878239");
    noUnderlyings_0_1.set(UnderlyingSecurityType_81);
    UnderlyingInstrument_81.insert(UnderlyingSecurityType_81.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_81("STRING_1038878125");
    noUnderlyings_0_1.set(UnderlyingSeniority_81);
    UnderlyingInstrument_81.insert(UnderlyingSeniority_81.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_81("STRING_1545770772");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_81);
    UnderlyingInstrument_81.insert(UnderlyingSettlMethod_81.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_81(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_81);
    UnderlyingInstrument_81.insert(UnderlyingSettlementType_81.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_81;
    UnderlyingStartValue_81.setString("3335285");
    noUnderlyings_0_1.set(UnderlyingStartValue_81);
    UnderlyingInstrument_81.insert(UnderlyingStartValue_81.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_81("STRING_1222634440");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_81);
    UnderlyingInstrument_81.insert(UnderlyingStateOrProvinceOfIssue_81.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_81("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_81);
    UnderlyingInstrument_81.insert(UnderlyingStrikeCurrency_81.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_81;
    UnderlyingStrikePrice_81.setString("1256652");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_81);
    UnderlyingInstrument_81.insert(UnderlyingStrikePrice_81.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_81("STRING_1636663425");
    noUnderlyings_0_1.set(UnderlyingSymbol_81);
    UnderlyingInstrument_81.insert(UnderlyingSymbol_81.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_81("STRING_1167433616");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_81);
    UnderlyingInstrument_81.insert(UnderlyingSymbolSfx_81.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_81("STRING_564713337");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_81);
    UnderlyingInstrument_81.insert(UnderlyingTimeUnit_81.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_81("STRING_1598300583");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_81);
    UnderlyingInstrument_81.insert(UnderlyingUnitOfMeasure_81.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_81;
    UnderlyingUnitOfMeasureQty_81.setString("7812139");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_81);
    UnderlyingInstrument_81.insert(UnderlyingUnitOfMeasureQty_81.getString());
    all_values.push_back(UnderlyingInstrument_81);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_170;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_170("STRING_312682409");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_170);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_170.insert(UnderlyingSecurityAltID_170.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_170("STRING_1236974321");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_170);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_170.insert(UnderlyingSecurityAltIDSource_170.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_170);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_171;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_171("STRING_34027190");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_171);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_171.insert(UnderlyingSecurityAltID_171.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_171("STRING_1515345920");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_171);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_171.insert(UnderlyingSecurityAltIDSource_171.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_171);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_172;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_172("STRING_1005864735");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_172);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_172.insert(UnderlyingSecurityAltID_172.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_172("STRING_779836929");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_172);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_172.insert(UnderlyingSecurityAltIDSource_172.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_172);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_155;
      FIX::UnderlyingStipType UnderlyingStipType_155("STRING_310300617");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_155);
      UnderlyingStipulations_NoUnderlyingStips_155.insert(UnderlyingStipType_155.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_155("STRING_1654025311");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_155);
      UnderlyingStipulations_NoUnderlyingStips_155.insert(UnderlyingStipValue_155.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_155);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_156;
      FIX::UnderlyingStipType UnderlyingStipType_156("STRING_523248732");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_156);
      UnderlyingStipulations_NoUnderlyingStips_156.insert(UnderlyingStipType_156.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_156("STRING_1732741187");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_156);
      UnderlyingStipulations_NoUnderlyingStips_156.insert(UnderlyingStipValue_156.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_156);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_157;
      FIX::UnderlyingStipType UnderlyingStipType_157("STRING_2028805711");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_157);
      UnderlyingStipulations_NoUnderlyingStips_157.insert(UnderlyingStipType_157.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_157("STRING_1552719055");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_157);
      UnderlyingStipulations_NoUnderlyingStips_157.insert(UnderlyingStipValue_157.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_157);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_164;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_164("STRING_1046034024");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_164);
      UndlyInstrumentParties_NoUndlyInstrumentParties_164.insert(UnderlyingInstrumentPartyID_164.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_164('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_164);
      UndlyInstrumentParties_NoUndlyInstrumentParties_164.insert(UnderlyingInstrumentPartyIDSource_164.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_164(2017675365);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_164);
      UndlyInstrumentParties_NoUndlyInstrumentParties_164.insert(UnderlyingInstrumentPartyRole_164.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_164);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_332("STRING_956449609");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_332);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332.insert(UnderlyingInstrumentPartySubID_332.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_332(2048242198);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_332);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332.insert(UnderlyingInstrumentPartySubIDType_332.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_333("STRING_270957024");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_333);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333.insert(UnderlyingInstrumentPartySubID_333.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_333(31600401);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_333);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333.insert(UnderlyingInstrumentPartySubIDType_333.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_334("STRING_1872670442");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_334);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334.insert(UnderlyingInstrumentPartySubID_334.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_334(2001638467);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_334);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334.insert(UnderlyingInstrumentPartySubIDType_334.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_165;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_165("STRING_157265675");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_165);
      UndlyInstrumentParties_NoUndlyInstrumentParties_165.insert(UnderlyingInstrumentPartyID_165.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_165('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_165);
      UndlyInstrumentParties_NoUndlyInstrumentParties_165.insert(UnderlyingInstrumentPartyIDSource_165.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_165(1021588435);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_165);
      UndlyInstrumentParties_NoUndlyInstrumentParties_165.insert(UnderlyingInstrumentPartyRole_165.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_165);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_335("STRING_812667154");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_335);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335.insert(UnderlyingInstrumentPartySubID_335.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_335(1802802347);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_335);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335.insert(UnderlyingInstrumentPartySubIDType_335.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_336("STRING_457413314");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_336);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336.insert(UnderlyingInstrumentPartySubID_336.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_336(1125349563);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_336);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336.insert(UnderlyingInstrumentPartySubIDType_336.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_337("STRING_892293021");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_337);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337.insert(UnderlyingInstrumentPartySubID_337.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_337(491440504);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_337);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337.insert(UnderlyingInstrumentPartySubIDType_337.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337);

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
