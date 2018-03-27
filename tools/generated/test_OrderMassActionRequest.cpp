#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/OrderMassActionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassActionRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderMassActionRequest msg;

  list<multiset<string>> all_values;
  multiset<string> OrderMassActionRequest_0;
  FIX::ClOrdID ClOrdID_38("STRING_1118872480");
  msg.set(ClOrdID_38);
  OrderMassActionRequest_0.insert(ClOrdID_38.getString());
  FIX::EncodedText EncodedText_64("DATA_173472214");
  msg.set(EncodedText_64);
  OrderMassActionRequest_0.insert(EncodedText_64.getString());
  FIX::EncodedTextLen EncodedTextLen_64(1140527517);
  msg.set(EncodedTextLen_64);
  OrderMassActionRequest_0.insert(EncodedTextLen_64.getString());
  FIX::MarketID MarketID_11("EXCHANGE_1905443667");
  msg.set(MarketID_11);
  OrderMassActionRequest_0.insert(MarketID_11.getString());
  FIX::MarketSegmentID MarketSegmentID_11("STRING_972630812");
  msg.set(MarketSegmentID_11);
  OrderMassActionRequest_0.insert(MarketSegmentID_11.getString());
  FIX::MassActionScope MassActionScope_1(4);
  msg.set(MassActionScope_1);
  OrderMassActionRequest_0.insert(MassActionScope_1.getString());
  FIX::MassActionType MassActionType_1(2);
  msg.set(MassActionType_1);
  OrderMassActionRequest_0.insert(MassActionType_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_36("STRING_611443910");
  msg.set(SecondaryClOrdID_36);
  OrderMassActionRequest_0.insert(SecondaryClOrdID_36.getString());
  FIX::Side Side_34('3');
  msg.set(Side_34);
  OrderMassActionRequest_0.insert(Side_34.getString());
  FIX::Text Text_64("STRING_1721840989");
  msg.set(Text_64);
  OrderMassActionRequest_0.insert(Text_64.getString());
  FIX::TradingSessionID TradingSessionID_52("STRING_1");
  msg.set(TradingSessionID_52);
  OrderMassActionRequest_0.insert(TradingSessionID_52.getString());
  FIX::TradingSessionSubID TradingSessionSubID_52("STRING_4");
  msg.set(TradingSessionSubID_52);
  OrderMassActionRequest_0.insert(TradingSessionSubID_52.getString());
  FIX::TransactTime TransactTime_40(FIX::UTCTIMESTAMP(8, 57, 43, 26, 122007));
  msg.set(TransactTime_40);
  OrderMassActionRequest_0.insert(TransactTime_40.getString());
  all_values.push_back(OrderMassActionRequest_0);

  // Instrument
  multiset<string> Instrument_48;
  FIX::AttachmentPoint AttachmentPoint_48;
  AttachmentPoint_48.setString("30.510000");
  msg.set(AttachmentPoint_48);
  Instrument_48.insert(AttachmentPoint_48.getString());
  FIX::CFICode CFICode_48("STRING_1410778639");
  msg.set(CFICode_48);
  Instrument_48.insert(CFICode_48.getString());
  FIX::CPProgram CPProgram_48(99);
  msg.set(CPProgram_48);
  Instrument_48.insert(CPProgram_48.getString());
  FIX::CPRegType CPRegType_48("STRING_865164234");
  msg.set(CPRegType_48);
  Instrument_48.insert(CPRegType_48.getString());
  FIX::CapPrice CapPrice_48;
  CapPrice_48.setString("9471227");
  msg.set(CapPrice_48);
  Instrument_48.insert(CapPrice_48.getString());
  FIX::ContractMultiplier ContractMultiplier_48;
  ContractMultiplier_48.setString("3657156");
  msg.set(ContractMultiplier_48);
  Instrument_48.insert(ContractMultiplier_48.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_48(0);
  msg.set(ContractMultiplierUnit_48);
  Instrument_48.insert(ContractMultiplierUnit_48.getString());
  FIX::ContractSettlMonth ContractSettlMonth_48("MONTHYEAR_126439638");
  msg.set(ContractSettlMonth_48);
  Instrument_48.insert(ContractSettlMonth_48.getString());
  FIX::CountryOfIssue CountryOfIssue_48("COUNTRY_573482940");
  msg.set(CountryOfIssue_48);
  Instrument_48.insert(CountryOfIssue_48.getString());
  FIX::CouponPaymentDate CouponPaymentDate_48("LOCALMKTDATE_1255715880");
  msg.set(CouponPaymentDate_48);
  Instrument_48.insert(CouponPaymentDate_48.getString());
  FIX::CouponRate CouponRate_48;
  CouponRate_48.setString("39.420000");
  msg.set(CouponRate_48);
  Instrument_48.insert(CouponRate_48.getString());
  FIX::CreditRating CreditRating_48("STRING_1298361408");
  msg.set(CreditRating_48);
  Instrument_48.insert(CreditRating_48.getString());
  FIX::DatedDate DatedDate_48("LOCALMKTDATE_227104712");
  msg.set(DatedDate_48);
  Instrument_48.insert(DatedDate_48.getString());
  FIX::DetachmentPoint DetachmentPoint_48;
  DetachmentPoint_48.setString("61.560000");
  msg.set(DetachmentPoint_48);
  Instrument_48.insert(DetachmentPoint_48.getString());
  FIX::EncodedIssuer EncodedIssuer_48("DATA_291405277");
  msg.set(EncodedIssuer_48);
  Instrument_48.insert(EncodedIssuer_48.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_48(2132548380);
  msg.set(EncodedIssuerLen_48);
  Instrument_48.insert(EncodedIssuerLen_48.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_48("DATA_1578916968");
  msg.set(EncodedSecurityDesc_48);
  Instrument_48.insert(EncodedSecurityDesc_48.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_48(585944032);
  msg.set(EncodedSecurityDescLen_48);
  Instrument_48.insert(EncodedSecurityDescLen_48.getString());
  FIX::ExerciseStyle ExerciseStyle_48(2);
  msg.set(ExerciseStyle_48);
  Instrument_48.insert(ExerciseStyle_48.getString());
  FIX::Factor Factor_48;
  Factor_48.setString("428772");
  msg.set(Factor_48);
  Instrument_48.insert(Factor_48.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_48(true);
  msg.set(FlexProductEligibilityIndicator_48);
  Instrument_48.insert(FlexProductEligibilityIndicator_48.getString());
  FIX::FlexibleIndicator FlexibleIndicator_48(true);
  msg.set(FlexibleIndicator_48);
  Instrument_48.insert(FlexibleIndicator_48.getString());
  FIX::FloorPrice FloorPrice_48;
  FloorPrice_48.setString("20413100");
  msg.set(FloorPrice_48);
  Instrument_48.insert(FloorPrice_48.getString());
  FIX::FlowScheduleType FlowScheduleType_48(3);
  msg.set(FlowScheduleType_48);
  Instrument_48.insert(FlowScheduleType_48.getString());
  FIX::InstrRegistry InstrRegistry_48("STRING_1389661169");
  msg.set(InstrRegistry_48);
  Instrument_48.insert(InstrRegistry_48.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_48('1');
  msg.set(InstrmtAssignmentMethod_48);
  Instrument_48.insert(InstrmtAssignmentMethod_48.getString());
  FIX::InterestAccrualDate InterestAccrualDate_48("LOCALMKTDATE_564647677");
  msg.set(InterestAccrualDate_48);
  Instrument_48.insert(InterestAccrualDate_48.getString());
  FIX::IssueDate IssueDate_48("LOCALMKTDATE_1662954372");
  msg.set(IssueDate_48);
  Instrument_48.insert(IssueDate_48.getString());
  FIX::Issuer Issuer_48("STRING_1039559741");
  msg.set(Issuer_48);
  Instrument_48.insert(Issuer_48.getString());
  FIX::ListMethod ListMethod_48(1);
  msg.set(ListMethod_48);
  Instrument_48.insert(ListMethod_48.getString());
  FIX::LocaleOfIssue LocaleOfIssue_48("STRING_1192023833");
  msg.set(LocaleOfIssue_48);
  Instrument_48.insert(LocaleOfIssue_48.getString());
  FIX::MaturityDate MaturityDate_48("LOCALMKTDATE_1818382792");
  msg.set(MaturityDate_48);
  Instrument_48.insert(MaturityDate_48.getString());
  FIX::MaturityMonthYear MaturityMonthYear_48("MONTHYEAR_1737026616");
  msg.set(MaturityMonthYear_48);
  Instrument_48.insert(MaturityMonthYear_48.getString());
  FIX::MaturityTime MaturityTime_48("TZTIMEONLY_167128245");
  msg.set(MaturityTime_48);
  Instrument_48.insert(MaturityTime_48.getString());
  FIX::MinPriceIncrement MinPriceIncrement_48;
  MinPriceIncrement_48.setString("5360633");
  msg.set(MinPriceIncrement_48);
  Instrument_48.insert(MinPriceIncrement_48.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_48;
  MinPriceIncrementAmount_48.setString("5366656");
  msg.set(MinPriceIncrementAmount_48);
  Instrument_48.insert(MinPriceIncrementAmount_48.getString());
  FIX::NTPositionLimit NTPositionLimit_48(532843906);
  msg.set(NTPositionLimit_48);
  Instrument_48.insert(NTPositionLimit_48.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_48;
  NotionalPercentageOutstanding_48.setString("79.030000");
  msg.set(NotionalPercentageOutstanding_48);
  Instrument_48.insert(NotionalPercentageOutstanding_48.getString());
  FIX::OptAttribute OptAttribute_48('6');
  msg.set(OptAttribute_48);
  Instrument_48.insert(OptAttribute_48.getString());
  FIX::OptPayoutAmount OptPayoutAmount_48;
  OptPayoutAmount_48.setString("11063268");
  msg.set(OptPayoutAmount_48);
  Instrument_48.insert(OptPayoutAmount_48.getString());
  FIX::OptPayoutType OptPayoutType_48(1);
  msg.set(OptPayoutType_48);
  Instrument_48.insert(OptPayoutType_48.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_48;
  OriginalNotionalPercentageOutstanding_48.setString("92.730000");
  msg.set(OriginalNotionalPercentageOutstanding_48);
  Instrument_48.insert(OriginalNotionalPercentageOutstanding_48.getString());
  FIX::Pool Pool_48("STRING_257204607");
  msg.set(Pool_48);
  Instrument_48.insert(Pool_48.getString());
  FIX::PositionLimit PositionLimit_48(223064848);
  msg.set(PositionLimit_48);
  Instrument_48.insert(PositionLimit_48.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_48("STRING_INT");
  msg.set(PriceQuoteMethod_48);
  Instrument_48.insert(PriceQuoteMethod_48.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_48("STRING_548609884");
  msg.set(PriceUnitOfMeasure_48);
  Instrument_48.insert(PriceUnitOfMeasure_48.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_48;
  PriceUnitOfMeasureQty_48.setString("2081295");
  msg.set(PriceUnitOfMeasureQty_48);
  Instrument_48.insert(PriceUnitOfMeasureQty_48.getString());
  FIX::Product Product_50(11);
  msg.set(Product_50);
  Instrument_48.insert(Product_50.getString());
  FIX::ProductComplex ProductComplex_48("STRING_1134553917");
  msg.set(ProductComplex_48);
  Instrument_48.insert(ProductComplex_48.getString());
  FIX::PutOrCall PutOrCall_48(0);
  msg.set(PutOrCall_48);
  Instrument_48.insert(PutOrCall_48.getString());
  FIX::RedemptionDate RedemptionDate_48("LOCALMKTDATE_1176515981");
  msg.set(RedemptionDate_48);
  Instrument_48.insert(RedemptionDate_48.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_48("STRING_764862271");
  msg.set(RepoCollateralSecurityType_48);
  Instrument_48.insert(RepoCollateralSecurityType_48.getString());
  FIX::RepurchaseRate RepurchaseRate_48;
  RepurchaseRate_48.setString("74.780000");
  msg.set(RepurchaseRate_48);
  Instrument_48.insert(RepurchaseRate_48.getString());
  FIX::RepurchaseTerm RepurchaseTerm_48(1070342345);
  msg.set(RepurchaseTerm_48);
  Instrument_48.insert(RepurchaseTerm_48.getString());
  FIX::RestructuringType RestructuringType_48("STRING_XR");
  msg.set(RestructuringType_48);
  Instrument_48.insert(RestructuringType_48.getString());
  FIX::SecurityDesc SecurityDesc_48("STRING_720184999");
  msg.set(SecurityDesc_48);
  Instrument_48.insert(SecurityDesc_48.getString());
  FIX::SecurityExchange SecurityExchange_48("EXCHANGE_335090644");
  msg.set(SecurityExchange_48);
  Instrument_48.insert(SecurityExchange_48.getString());
  FIX::SecurityGroup SecurityGroup_48("STRING_1125304369");
  msg.set(SecurityGroup_48);
  Instrument_48.insert(SecurityGroup_48.getString());
  FIX::SecurityID SecurityID_48("STRING_235655724");
  msg.set(SecurityID_48);
  Instrument_48.insert(SecurityID_48.getString());
  FIX::SecurityIDSource SecurityIDSource_48("STRING_B");
  msg.set(SecurityIDSource_48);
  Instrument_48.insert(SecurityIDSource_48.getString());
  FIX::SecurityStatus SecurityStatus_48("STRING_1");
  msg.set(SecurityStatus_48);
  Instrument_48.insert(SecurityStatus_48.getString());
  FIX::SecuritySubType SecuritySubType_49("STRING_1427679557");
  msg.set(SecuritySubType_49);
  Instrument_48.insert(SecuritySubType_49.getString());
  FIX::SecurityType SecurityType_50("STRING_FORWARD");
  msg.set(SecurityType_50);
  Instrument_48.insert(SecurityType_50.getString());
  FIX::Seniority Seniority_48("STRING_SR");
  msg.set(Seniority_48);
  Instrument_48.insert(Seniority_48.getString());
  FIX::SettlMethod SettlMethod_48('C');
  msg.set(SettlMethod_48);
  Instrument_48.insert(SettlMethod_48.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_48("STRING_1581612909");
  msg.set(SettleOnOpenFlag_48);
  Instrument_48.insert(SettleOnOpenFlag_48.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_48("STRING_1577761007");
  msg.set(StateOrProvinceOfIssue_48);
  Instrument_48.insert(StateOrProvinceOfIssue_48.getString());
  FIX::StrikeCurrency StrikeCurrency_48("JPY");
  msg.set(StrikeCurrency_48);
  Instrument_48.insert(StrikeCurrency_48.getString());
  FIX::StrikeMultiplier StrikeMultiplier_48;
  StrikeMultiplier_48.setString("933826");
  msg.set(StrikeMultiplier_48);
  Instrument_48.insert(StrikeMultiplier_48.getString());
  FIX::StrikePrice StrikePrice_48;
  StrikePrice_48.setString("10864949");
  msg.set(StrikePrice_48);
  Instrument_48.insert(StrikePrice_48.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_48(5);
  msg.set(StrikePriceBoundaryMethod_48);
  Instrument_48.insert(StrikePriceBoundaryMethod_48.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_48;
  StrikePriceBoundaryPrecision_48.setString("19.640000");
  msg.set(StrikePriceBoundaryPrecision_48);
  Instrument_48.insert(StrikePriceBoundaryPrecision_48.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_48(3);
  msg.set(StrikePriceDeterminationMethod_48);
  Instrument_48.insert(StrikePriceDeterminationMethod_48.getString());
  FIX::StrikeValue StrikeValue_48;
  StrikeValue_48.setString("5408821");
  msg.set(StrikeValue_48);
  Instrument_48.insert(StrikeValue_48.getString());
  FIX::Symbol Symbol_48("STRING_744023746");
  msg.set(Symbol_48);
  Instrument_48.insert(Symbol_48.getString());
  FIX::SymbolSfx SymbolSfx_48("STRING_CD");
  msg.set(SymbolSfx_48);
  Instrument_48.insert(SymbolSfx_48.getString());
  FIX::TimeUnit TimeUnit_48("STRING_S");
  msg.set(TimeUnit_48);
  Instrument_48.insert(TimeUnit_48.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_48(2);
  msg.set(UnderlyingPriceDeterminationMethod_48);
  Instrument_48.insert(UnderlyingPriceDeterminationMethod_48.getString());
  FIX::UnitOfMeasure UnitOfMeasure_48("STRING_tn");
  msg.set(UnitOfMeasure_48);
  Instrument_48.insert(UnitOfMeasure_48.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_48;
  UnitOfMeasureQty_48.setString("7311597");
  msg.set(UnitOfMeasureQty_48);
  Instrument_48.insert(UnitOfMeasureQty_48.getString());
  FIX::ValuationMethod ValuationMethod_48("STRING_EQTY");
  msg.set(ValuationMethod_48);
  Instrument_48.insert(ValuationMethod_48.getString());
  all_values.push_back(Instrument_48);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassActionRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_93;
    FIX::ComplexEventCondition ComplexEventCondition_93(1);
    noComplexEvents_0_0.set(ComplexEventCondition_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventCondition_93.getString());
    FIX::ComplexEventPrice ComplexEventPrice_93;
    ComplexEventPrice_93.setString("19770371");
    noComplexEvents_0_0.set(ComplexEventPrice_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventPrice_93.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_93(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventPriceBoundaryMethod_93.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_93;
    ComplexEventPriceBoundaryPrecision_93.setString("85.920000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventPriceBoundaryPrecision_93.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_93(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventPriceTimeType_93.getString());
    FIX::ComplexEventType ComplexEventType_93(3);
    noComplexEvents_0_0.set(ComplexEventType_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventType_93.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_93;
    ComplexOptPayoutAmount_93.setString("10175243");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexOptPayoutAmount_93.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_93);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_195;
      FIX::ComplexEventEndDate ComplexEventEndDate_195(FIX::UTCTIMESTAMP(9, 40, 43, 20, 22005));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_195);
      ComplexEventDates_NoComplexEventDates_195.insert(ComplexEventEndDate_195.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_195(FIX::UTCTIMESTAMP(9, 34, 47, 1, 32009));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_195);
      ComplexEventDates_NoComplexEventDates_195.insert(ComplexEventStartDate_195.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_195);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_383;
        FIX::ComplexEventEndTime ComplexEventEndTime_383(FIX::UTCTIMEONLY(20, 0, 26));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_383);
        ComplexEventTimes_NoComplexEventTimes_383.insert(ComplexEventEndTime_383.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_383(FIX::UTCTIMEONLY(18, 56, 22));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_383);
        ComplexEventTimes_NoComplexEventTimes_383.insert(ComplexEventStartTime_383.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_383);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_94;
    FIX::ComplexEventCondition ComplexEventCondition_94(1);
    noComplexEvents_0_1.set(ComplexEventCondition_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventCondition_94.getString());
    FIX::ComplexEventPrice ComplexEventPrice_94;
    ComplexEventPrice_94.setString("13038126");
    noComplexEvents_0_1.set(ComplexEventPrice_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventPrice_94.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_94(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventPriceBoundaryMethod_94.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_94;
    ComplexEventPriceBoundaryPrecision_94.setString("63.380000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventPriceBoundaryPrecision_94.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_94(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventPriceTimeType_94.getString());
    FIX::ComplexEventType ComplexEventType_94(9);
    noComplexEvents_0_1.set(ComplexEventType_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventType_94.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_94;
    ComplexOptPayoutAmount_94.setString("983270");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexOptPayoutAmount_94.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_94);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_196;
      FIX::ComplexEventEndDate ComplexEventEndDate_196(FIX::UTCTIMESTAMP(0, 46, 41, 4, 52002));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_196);
      ComplexEventDates_NoComplexEventDates_196.insert(ComplexEventEndDate_196.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_196(FIX::UTCTIMESTAMP(13, 30, 0, 6, 102009));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_196);
      ComplexEventDates_NoComplexEventDates_196.insert(ComplexEventStartDate_196.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_196);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_384;
        FIX::ComplexEventEndTime ComplexEventEndTime_384(FIX::UTCTIMEONLY(9, 55, 16));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_384);
        ComplexEventTimes_NoComplexEventTimes_384.insert(ComplexEventEndTime_384.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_384(FIX::UTCTIMEONLY(13, 12, 31));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_384);
        ComplexEventTimes_NoComplexEventTimes_384.insert(ComplexEventStartTime_384.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_384);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassActionRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_95;
    FIX::EventDate EventDate_95("LOCALMKTDATE_1079845588");
    noEvents_0_0.set(EventDate_95);
    EvntGrp_NoEvents_95.insert(EventDate_95.getString());
    FIX::EventPx EventPx_95;
    EventPx_95.setString("13860010");
    noEvents_0_0.set(EventPx_95);
    EvntGrp_NoEvents_95.insert(EventPx_95.getString());
    FIX::EventText EventText_95("STRING_343720586");
    noEvents_0_0.set(EventText_95);
    EvntGrp_NoEvents_95.insert(EventText_95.getString());
    FIX::EventTime EventTime_95(FIX::UTCTIMESTAMP(5, 52, 22, 27, 52007));
    noEvents_0_0.set(EventTime_95);
    EvntGrp_NoEvents_95.insert(EventTime_95.getString());
    FIX::EventType EventType_95(5);
    noEvents_0_0.set(EventType_95);
    EvntGrp_NoEvents_95.insert(EventType_95.getString());
    all_values.push_back(EvntGrp_NoEvents_95);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_96;
    FIX::EventDate EventDate_96("LOCALMKTDATE_979186436");
    noEvents_0_1.set(EventDate_96);
    EvntGrp_NoEvents_96.insert(EventDate_96.getString());
    FIX::EventPx EventPx_96;
    EventPx_96.setString("15803490");
    noEvents_0_1.set(EventPx_96);
    EvntGrp_NoEvents_96.insert(EventPx_96.getString());
    FIX::EventText EventText_96("STRING_1598959421");
    noEvents_0_1.set(EventText_96);
    EvntGrp_NoEvents_96.insert(EventText_96.getString());
    FIX::EventTime EventTime_96(FIX::UTCTIMESTAMP(10, 3, 9, 1, 12004));
    noEvents_0_1.set(EventTime_96);
    EvntGrp_NoEvents_96.insert(EventTime_96.getString());
    FIX::EventType EventType_96(9);
    noEvents_0_1.set(EventType_96);
    EvntGrp_NoEvents_96.insert(EventType_96.getString());
    all_values.push_back(EvntGrp_NoEvents_96);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_97;
    FIX::EventDate EventDate_97("LOCALMKTDATE_1623389594");
    noEvents_0_2.set(EventDate_97);
    EvntGrp_NoEvents_97.insert(EventDate_97.getString());
    FIX::EventPx EventPx_97;
    EventPx_97.setString("5006364");
    noEvents_0_2.set(EventPx_97);
    EvntGrp_NoEvents_97.insert(EventPx_97.getString());
    FIX::EventText EventText_97("STRING_1731433043");
    noEvents_0_2.set(EventText_97);
    EvntGrp_NoEvents_97.insert(EventText_97.getString());
    FIX::EventTime EventTime_97(FIX::UTCTIMESTAMP(17, 4, 35, 20, 42001));
    noEvents_0_2.set(EventTime_97);
    EvntGrp_NoEvents_97.insert(EventTime_97.getString());
    FIX::EventType EventType_97(2);
    noEvents_0_2.set(EventType_97);
    EvntGrp_NoEvents_97.insert(EventType_97.getString());
    all_values.push_back(EvntGrp_NoEvents_97);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassActionRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_87;
    FIX::InstrumentPartyID InstrumentPartyID_87("STRING_1181860632");
    noInstrumentParties_0_0.set(InstrumentPartyID_87);
    InstrumentParties_NoInstrumentParties_87.insert(InstrumentPartyID_87.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_87('4');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_87);
    InstrumentParties_NoInstrumentParties_87.insert(InstrumentPartyIDSource_87.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_87(301651970);
    noInstrumentParties_0_0.set(InstrumentPartyRole_87);
    InstrumentParties_NoInstrumentParties_87.insert(InstrumentPartyRole_87.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_87);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172;
      FIX::InstrumentPartySubID InstrumentPartySubID_172("STRING_785584461");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_172);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172.insert(InstrumentPartySubID_172.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_172(1139746794);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_172);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172.insert(InstrumentPartySubIDType_172.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173;
      FIX::InstrumentPartySubID InstrumentPartySubID_173("STRING_706694667");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_173);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173.insert(InstrumentPartySubID_173.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_173(190174137);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_173);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173.insert(InstrumentPartySubIDType_173.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174;
      FIX::InstrumentPartySubID InstrumentPartySubID_174("STRING_2118933231");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_174);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174.insert(InstrumentPartySubID_174.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_174(139560048);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_174);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174.insert(InstrumentPartySubIDType_174.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_88;
    FIX::InstrumentPartyID InstrumentPartyID_88("STRING_1789133558");
    noInstrumentParties_0_1.set(InstrumentPartyID_88);
    InstrumentParties_NoInstrumentParties_88.insert(InstrumentPartyID_88.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_88('8');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_88);
    InstrumentParties_NoInstrumentParties_88.insert(InstrumentPartyIDSource_88.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_88(934890203);
    noInstrumentParties_0_1.set(InstrumentPartyRole_88);
    InstrumentParties_NoInstrumentParties_88.insert(InstrumentPartyRole_88.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_88);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175;
      FIX::InstrumentPartySubID InstrumentPartySubID_175("STRING_192958313");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_175);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175.insert(InstrumentPartySubID_175.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_175(1456365648);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_175);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175.insert(InstrumentPartySubIDType_175.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176;
      FIX::InstrumentPartySubID InstrumentPartySubID_176("STRING_1933251718");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_176);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176.insert(InstrumentPartySubID_176.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_176(254911167);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_176);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176.insert(InstrumentPartySubIDType_176.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_89;
    FIX::InstrumentPartyID InstrumentPartyID_89("STRING_608549048");
    noInstrumentParties_0_2.set(InstrumentPartyID_89);
    InstrumentParties_NoInstrumentParties_89.insert(InstrumentPartyID_89.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_89('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_89);
    InstrumentParties_NoInstrumentParties_89.insert(InstrumentPartyIDSource_89.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_89(755547599);
    noInstrumentParties_0_2.set(InstrumentPartyRole_89);
    InstrumentParties_NoInstrumentParties_89.insert(InstrumentPartyRole_89.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_89);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177;
      FIX::InstrumentPartySubID InstrumentPartySubID_177("STRING_1334321007");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_177);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177.insert(InstrumentPartySubID_177.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_177(179512592);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_177);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177.insert(InstrumentPartySubIDType_177.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178;
      FIX::InstrumentPartySubID InstrumentPartySubID_178("STRING_592947987");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_178);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178.insert(InstrumentPartySubID_178.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_178(1035517254);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_178);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178.insert(InstrumentPartySubIDType_178.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179;
      FIX::InstrumentPartySubID InstrumentPartySubID_179("STRING_803176717");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_179);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179.insert(InstrumentPartySubID_179.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_179(108831778);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_179);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179.insert(InstrumentPartySubIDType_179.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_93;
    FIX::SecurityAltID SecurityAltID_93("STRING_665358230");
    noSecurityAltID_0_0.set(SecurityAltID_93);
    SecAltIDGrp_NoSecurityAltID_93.insert(SecurityAltID_93.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_93("STRING_2115919804");
    noSecurityAltID_0_0.set(SecurityAltIDSource_93);
    SecAltIDGrp_NoSecurityAltID_93.insert(SecurityAltIDSource_93.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_93);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_94;
    FIX::SecurityAltID SecurityAltID_94("STRING_850936074");
    noSecurityAltID_0_1.set(SecurityAltID_94);
    SecAltIDGrp_NoSecurityAltID_94.insert(SecurityAltID_94.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_94("STRING_1135078388");
    noSecurityAltID_0_1.set(SecurityAltIDSource_94);
    SecAltIDGrp_NoSecurityAltID_94.insert(SecurityAltIDSource_94.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_94);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_95;
    FIX::SecurityAltID SecurityAltID_95("STRING_270088126");
    noSecurityAltID_0_2.set(SecurityAltID_95);
    SecAltIDGrp_NoSecurityAltID_95.insert(SecurityAltID_95.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_95("STRING_1146399620");
    noSecurityAltID_0_2.set(SecurityAltIDSource_95);
    SecAltIDGrp_NoSecurityAltID_95.insert(SecurityAltIDSource_95.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_95);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_96;
  FIX::SecurityXML SecurityXML_97("XMLDATA_1920662849");
  msg.set(SecurityXML_97);
  FIX::SecurityXMLLen SecurityXMLLen_48(1409834920);
  msg.set(SecurityXMLLen_48);
  FIX::SecurityXMLSchema SecurityXMLSchema_48("STRING_1853094288");
  msg.set(SecurityXMLSchema_48);
  SecurityXML_96.insert(SecurityXMLSchema_48.getString());
  all_values.push_back(SecurityXML_96);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassActionRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_87;
    FIX::PartyID PartyID_87("STRING_1381284503");
    noPartyIDs_0_0.set(PartyID_87);
    Parties_NoPartyIDs_87.insert(PartyID_87.getString());
    FIX::PartyIDSource PartyIDSource_87('C');
    noPartyIDs_0_0.set(PartyIDSource_87);
    Parties_NoPartyIDs_87.insert(PartyIDSource_87.getString());
    FIX::PartyRole PartyRole_87(22);
    noPartyIDs_0_0.set(PartyRole_87);
    Parties_NoPartyIDs_87.insert(PartyRole_87.getString());
    all_values.push_back(Parties_NoPartyIDs_87);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_170;
      FIX::PartySubID PartySubID_170("STRING_780060891");
      noPartySubIDs_0_1_0.set(PartySubID_170);
      PtysSubGrp_NoPartySubIDs_170.insert(PartySubID_170.getString());
      FIX::PartySubIDType PartySubIDType_170(14);
      noPartySubIDs_0_1_0.set(PartySubIDType_170);
      PtysSubGrp_NoPartySubIDs_170.insert(PartySubIDType_170.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_170);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_171;
      FIX::PartySubID PartySubID_171("STRING_243699240");
      noPartySubIDs_0_1_1.set(PartySubID_171);
      PtysSubGrp_NoPartySubIDs_171.insert(PartySubID_171.getString());
      FIX::PartySubIDType PartySubIDType_171(5);
      noPartySubIDs_0_1_1.set(PartySubIDType_171);
      PtysSubGrp_NoPartySubIDs_171.insert(PartySubIDType_171.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_171);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_88;
    FIX::PartyID PartyID_88("STRING_1729810161");
    noPartyIDs_0_1.set(PartyID_88);
    Parties_NoPartyIDs_88.insert(PartyID_88.getString());
    FIX::PartyIDSource PartyIDSource_88('A');
    noPartyIDs_0_1.set(PartyIDSource_88);
    Parties_NoPartyIDs_88.insert(PartyIDSource_88.getString());
    FIX::PartyRole PartyRole_88(41);
    noPartyIDs_0_1.set(PartyRole_88);
    Parties_NoPartyIDs_88.insert(PartyRole_88.getString());
    all_values.push_back(Parties_NoPartyIDs_88);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_172;
      FIX::PartySubID PartySubID_172("STRING_1254158007");
      noPartySubIDs_1_1_0.set(PartySubID_172);
      PtysSubGrp_NoPartySubIDs_172.insert(PartySubID_172.getString());
      FIX::PartySubIDType PartySubIDType_172(18);
      noPartySubIDs_1_1_0.set(PartySubIDType_172);
      PtysSubGrp_NoPartySubIDs_172.insert(PartySubIDType_172.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_172);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_89;
    FIX::PartyID PartyID_89("STRING_178321538");
    noPartyIDs_0_2.set(PartyID_89);
    Parties_NoPartyIDs_89.insert(PartyID_89.getString());
    FIX::PartyIDSource PartyIDSource_89('C');
    noPartyIDs_0_2.set(PartyIDSource_89);
    Parties_NoPartyIDs_89.insert(PartyIDSource_89.getString());
    FIX::PartyRole PartyRole_89(18);
    noPartyIDs_0_2.set(PartyRole_89);
    Parties_NoPartyIDs_89.insert(PartyRole_89.getString());
    all_values.push_back(Parties_NoPartyIDs_89);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_173;
      FIX::PartySubID PartySubID_173("STRING_89363669");
      noPartySubIDs_2_1_0.set(PartySubID_173);
      PtysSubGrp_NoPartySubIDs_173.insert(PartySubID_173.getString());
      FIX::PartySubIDType PartySubIDType_173(2);
      noPartySubIDs_2_1_0.set(PartySubIDType_173);
      PtysSubGrp_NoPartySubIDs_173.insert(PartySubIDType_173.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_173);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_174;
      FIX::PartySubID PartySubID_174("STRING_882914234");
      noPartySubIDs_2_1_1.set(PartySubID_174);
      PtysSubGrp_NoPartySubIDs_174.insert(PartySubID_174.getString());
      FIX::PartySubIDType PartySubIDType_174(20);
      noPartySubIDs_2_1_1.set(PartySubIDType_174);
      PtysSubGrp_NoPartySubIDs_174.insert(PartySubIDType_174.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_174);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_175;
      FIX::PartySubID PartySubID_175("STRING_1560206304");
      noPartySubIDs_2_1_2.set(PartySubID_175);
      PtysSubGrp_NoPartySubIDs_175.insert(PartySubID_175.getString());
      FIX::PartySubIDType PartySubIDType_175(15);
      noPartySubIDs_2_1_2.set(PartySubIDType_175);
      PtysSubGrp_NoPartySubIDs_175.insert(PartySubIDType_175.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_175);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassActionRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_4;
    FIX::TargetPartyID TargetPartyID_4("STRING_1830294430");
    noTargetPartyIDs_0_0.set(TargetPartyID_4);
    TargetParties_NoTargetPartyIDs_4.insert(TargetPartyID_4.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_4('7');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_4);
    TargetParties_NoTargetPartyIDs_4.insert(TargetPartyIDSource_4.getString());
    FIX::TargetPartyRole TargetPartyRole_4(1662979488);
    noTargetPartyIDs_0_0.set(TargetPartyRole_4);
    TargetParties_NoTargetPartyIDs_4.insert(TargetPartyRole_4.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_4);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_75;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_75("DATA_1092645702");
  msg.set(EncodedUnderlyingIssuer_75);
  UnderlyingInstrument_75.insert(EncodedUnderlyingIssuer_75.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_75(438376921);
  msg.set(EncodedUnderlyingIssuerLen_75);
  UnderlyingInstrument_75.insert(EncodedUnderlyingIssuerLen_75.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_75("DATA_1626332826");
  msg.set(EncodedUnderlyingSecurityDesc_75);
  UnderlyingInstrument_75.insert(EncodedUnderlyingSecurityDesc_75.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_75(326446558);
  msg.set(EncodedUnderlyingSecurityDescLen_75);
  UnderlyingInstrument_75.insert(EncodedUnderlyingSecurityDescLen_75.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_75;
  UnderlyingAdjustedQuantity_75.setString("2835476");
  msg.set(UnderlyingAdjustedQuantity_75);
  UnderlyingInstrument_75.insert(UnderlyingAdjustedQuantity_75.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_75;
  UnderlyingAllocationPercent_75.setString("60.750000");
  msg.set(UnderlyingAllocationPercent_75);
  UnderlyingInstrument_75.insert(UnderlyingAllocationPercent_75.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_75;
  UnderlyingAttachmentPoint_75.setString("74.850000");
  msg.set(UnderlyingAttachmentPoint_75);
  UnderlyingInstrument_75.insert(UnderlyingAttachmentPoint_75.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_75("STRING_1063608501");
  msg.set(UnderlyingCFICode_75);
  UnderlyingInstrument_75.insert(UnderlyingCFICode_75.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_75("STRING_1027894518");
  msg.set(UnderlyingCPProgram_75);
  UnderlyingInstrument_75.insert(UnderlyingCPProgram_75.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_75("STRING_620886726");
  msg.set(UnderlyingCPRegType_75);
  UnderlyingInstrument_75.insert(UnderlyingCPRegType_75.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_75;
  UnderlyingCapValue_75.setString("11525513");
  msg.set(UnderlyingCapValue_75);
  UnderlyingInstrument_75.insert(UnderlyingCapValue_75.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_75;
  UnderlyingCashAmount_75.setString("6102210");
  msg.set(UnderlyingCashAmount_75);
  UnderlyingInstrument_75.insert(UnderlyingCashAmount_75.getString());
  FIX::UnderlyingCashType UnderlyingCashType_75("STRING_FIXED");
  msg.set(UnderlyingCashType_75);
  UnderlyingInstrument_75.insert(UnderlyingCashType_75.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_75;
  UnderlyingContractMultiplier_75.setString("18500433");
  msg.set(UnderlyingContractMultiplier_75);
  UnderlyingInstrument_75.insert(UnderlyingContractMultiplier_75.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_75(1601705210);
  msg.set(UnderlyingContractMultiplierUnit_75);
  UnderlyingInstrument_75.insert(UnderlyingContractMultiplierUnit_75.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_75("COUNTRY_226171493");
  msg.set(UnderlyingCountryOfIssue_75);
  UnderlyingInstrument_75.insert(UnderlyingCountryOfIssue_75.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_75("LOCALMKTDATE_592550066");
  msg.set(UnderlyingCouponPaymentDate_75);
  UnderlyingInstrument_75.insert(UnderlyingCouponPaymentDate_75.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_75;
  UnderlyingCouponRate_75.setString("67.480000");
  msg.set(UnderlyingCouponRate_75);
  UnderlyingInstrument_75.insert(UnderlyingCouponRate_75.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_75("STRING_1659842093");
  msg.set(UnderlyingCreditRating_75);
  UnderlyingInstrument_75.insert(UnderlyingCreditRating_75.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_75("CAN");
  msg.set(UnderlyingCurrency_75);
  UnderlyingInstrument_75.insert(UnderlyingCurrency_75.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_75;
  UnderlyingCurrentValue_75.setString("17492057");
  msg.set(UnderlyingCurrentValue_75);
  UnderlyingInstrument_75.insert(UnderlyingCurrentValue_75.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_75;
  UnderlyingDetachmentPoint_75.setString("49.360000");
  msg.set(UnderlyingDetachmentPoint_75);
  UnderlyingInstrument_75.insert(UnderlyingDetachmentPoint_75.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_75;
  UnderlyingDirtyPrice_75.setString("17292961");
  msg.set(UnderlyingDirtyPrice_75);
  UnderlyingInstrument_75.insert(UnderlyingDirtyPrice_75.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_75;
  UnderlyingEndPrice_75.setString("3564440");
  msg.set(UnderlyingEndPrice_75);
  UnderlyingInstrument_75.insert(UnderlyingEndPrice_75.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_75;
  UnderlyingEndValue_75.setString("9324975");
  msg.set(UnderlyingEndValue_75);
  UnderlyingInstrument_75.insert(UnderlyingEndValue_75.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_75(1315662788);
  msg.set(UnderlyingExerciseStyle_75);
  UnderlyingInstrument_75.insert(UnderlyingExerciseStyle_75.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_75;
  UnderlyingFXRate_75.setString("987606");
  msg.set(UnderlyingFXRate_75);
  UnderlyingInstrument_75.insert(UnderlyingFXRate_75.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_75('D');
  msg.set(UnderlyingFXRateCalc_75);
  UnderlyingInstrument_75.insert(UnderlyingFXRateCalc_75.getString());
  FIX::UnderlyingFactor UnderlyingFactor_75;
  UnderlyingFactor_75.setString("20484290");
  msg.set(UnderlyingFactor_75);
  UnderlyingInstrument_75.insert(UnderlyingFactor_75.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_75(1761740140);
  msg.set(UnderlyingFlowScheduleType_75);
  UnderlyingInstrument_75.insert(UnderlyingFlowScheduleType_75.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_75("STRING_1707954076");
  msg.set(UnderlyingInstrRegistry_75);
  UnderlyingInstrument_75.insert(UnderlyingInstrRegistry_75.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_75("LOCALMKTDATE_339322342");
  msg.set(UnderlyingIssueDate_75);
  UnderlyingInstrument_75.insert(UnderlyingIssueDate_75.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_75("STRING_1240589319");
  msg.set(UnderlyingIssuer_75);
  UnderlyingInstrument_75.insert(UnderlyingIssuer_75.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_75("STRING_2034400634");
  msg.set(UnderlyingLocaleOfIssue_75);
  UnderlyingInstrument_75.insert(UnderlyingLocaleOfIssue_75.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_75("LOCALMKTDATE_622869951");
  msg.set(UnderlyingMaturityDate_75);
  UnderlyingInstrument_75.insert(UnderlyingMaturityDate_75.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_75("MONTHYEAR_324441746");
  msg.set(UnderlyingMaturityMonthYear_75);
  UnderlyingInstrument_75.insert(UnderlyingMaturityMonthYear_75.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_75("TZTIMEONLY_264104472");
  msg.set(UnderlyingMaturityTime_75);
  UnderlyingInstrument_75.insert(UnderlyingMaturityTime_75.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_75;
  UnderlyingNotionalPercentageOutstanding_75.setString("84.520000");
  msg.set(UnderlyingNotionalPercentageOutstanding_75);
  UnderlyingInstrument_75.insert(UnderlyingNotionalPercentageOutstanding_75.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_75('1');
  msg.set(UnderlyingOptAttribute_75);
  UnderlyingInstrument_75.insert(UnderlyingOptAttribute_75.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_75;
  UnderlyingOriginalNotionalPercentageOutstanding_75.setString("11.980000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_75);
  UnderlyingInstrument_75.insert(UnderlyingOriginalNotionalPercentageOutstanding_75.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_75("STRING_691546197");
  msg.set(UnderlyingPriceUnitOfMeasure_75);
  UnderlyingInstrument_75.insert(UnderlyingPriceUnitOfMeasure_75.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_75;
  UnderlyingPriceUnitOfMeasureQty_75.setString("19625572");
  msg.set(UnderlyingPriceUnitOfMeasureQty_75);
  UnderlyingInstrument_75.insert(UnderlyingPriceUnitOfMeasureQty_75.getString());
  FIX::UnderlyingProduct UnderlyingProduct_75(2004488332);
  msg.set(UnderlyingProduct_75);
  UnderlyingInstrument_75.insert(UnderlyingProduct_75.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_75(394105881);
  msg.set(UnderlyingPutOrCall_75);
  UnderlyingInstrument_75.insert(UnderlyingPutOrCall_75.getString());
  FIX::UnderlyingPx UnderlyingPx_75;
  UnderlyingPx_75.setString("14167788");
  msg.set(UnderlyingPx_75);
  UnderlyingInstrument_75.insert(UnderlyingPx_75.getString());
  FIX::UnderlyingQty UnderlyingQty_75;
  UnderlyingQty_75.setString("831761");
  msg.set(UnderlyingQty_75);
  UnderlyingInstrument_75.insert(UnderlyingQty_75.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_75("LOCALMKTDATE_986655947");
  msg.set(UnderlyingRedemptionDate_75);
  UnderlyingInstrument_75.insert(UnderlyingRedemptionDate_75.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_75("STRING_1049321960");
  msg.set(UnderlyingRepoCollateralSecurityType_75);
  UnderlyingInstrument_75.insert(UnderlyingRepoCollateralSecurityType_75.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_75;
  UnderlyingRepurchaseRate_75.setString("82.710000");
  msg.set(UnderlyingRepurchaseRate_75);
  UnderlyingInstrument_75.insert(UnderlyingRepurchaseRate_75.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_75(914660735);
  msg.set(UnderlyingRepurchaseTerm_75);
  UnderlyingInstrument_75.insert(UnderlyingRepurchaseTerm_75.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_75("STRING_1895703853");
  msg.set(UnderlyingRestructuringType_75);
  UnderlyingInstrument_75.insert(UnderlyingRestructuringType_75.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_75("STRING_1344740385");
  msg.set(UnderlyingSecurityDesc_75);
  UnderlyingInstrument_75.insert(UnderlyingSecurityDesc_75.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_75("EXCHANGE_286952023");
  msg.set(UnderlyingSecurityExchange_75);
  UnderlyingInstrument_75.insert(UnderlyingSecurityExchange_75.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_75("STRING_1477516332");
  msg.set(UnderlyingSecurityID_75);
  UnderlyingInstrument_75.insert(UnderlyingSecurityID_75.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_75("STRING_1701184399");
  msg.set(UnderlyingSecurityIDSource_75);
  UnderlyingInstrument_75.insert(UnderlyingSecurityIDSource_75.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_75("STRING_1219449615");
  msg.set(UnderlyingSecuritySubType_75);
  UnderlyingInstrument_75.insert(UnderlyingSecuritySubType_75.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_75("STRING_645695472");
  msg.set(UnderlyingSecurityType_75);
  UnderlyingInstrument_75.insert(UnderlyingSecurityType_75.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_75("STRING_1799945051");
  msg.set(UnderlyingSeniority_75);
  UnderlyingInstrument_75.insert(UnderlyingSeniority_75.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_75("STRING_1834757989");
  msg.set(UnderlyingSettlMethod_75);
  UnderlyingInstrument_75.insert(UnderlyingSettlMethod_75.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_75(2);
  msg.set(UnderlyingSettlementType_75);
  UnderlyingInstrument_75.insert(UnderlyingSettlementType_75.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_75;
  UnderlyingStartValue_75.setString("14142015");
  msg.set(UnderlyingStartValue_75);
  UnderlyingInstrument_75.insert(UnderlyingStartValue_75.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_75("STRING_1395228418");
  msg.set(UnderlyingStateOrProvinceOfIssue_75);
  UnderlyingInstrument_75.insert(UnderlyingStateOrProvinceOfIssue_75.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_75("CHF");
  msg.set(UnderlyingStrikeCurrency_75);
  UnderlyingInstrument_75.insert(UnderlyingStrikeCurrency_75.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_75;
  UnderlyingStrikePrice_75.setString("12821454");
  msg.set(UnderlyingStrikePrice_75);
  UnderlyingInstrument_75.insert(UnderlyingStrikePrice_75.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_75("STRING_1508833187");
  msg.set(UnderlyingSymbol_75);
  UnderlyingInstrument_75.insert(UnderlyingSymbol_75.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_75("STRING_831748961");
  msg.set(UnderlyingSymbolSfx_75);
  UnderlyingInstrument_75.insert(UnderlyingSymbolSfx_75.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_75("STRING_1546249876");
  msg.set(UnderlyingTimeUnit_75);
  UnderlyingInstrument_75.insert(UnderlyingTimeUnit_75.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_75("STRING_1047827991");
  msg.set(UnderlyingUnitOfMeasure_75);
  UnderlyingInstrument_75.insert(UnderlyingUnitOfMeasure_75.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_75;
  UnderlyingUnitOfMeasureQty_75.setString("366015");
  msg.set(UnderlyingUnitOfMeasureQty_75);
  UnderlyingInstrument_75.insert(UnderlyingUnitOfMeasureQty_75.getString());
  all_values.push_back(UnderlyingInstrument_75);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_148;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_148("STRING_1739374188");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_148);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_148.insert(UnderlyingSecurityAltID_148.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_148("STRING_1999158875");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_148);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_148.insert(UnderlyingSecurityAltIDSource_148.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_148);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_149;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_149("STRING_140762110");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_149);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_149.insert(UnderlyingSecurityAltID_149.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_149("STRING_2133480069");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_149);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_149.insert(UnderlyingSecurityAltIDSource_149.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_149);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_150;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_150("STRING_1268454087");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltID_150);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_150.insert(UnderlyingSecurityAltID_150.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_150("STRING_223938288");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltIDSource_150);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_150.insert(UnderlyingSecurityAltIDSource_150.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_150);

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_141;
    FIX::UnderlyingStipType UnderlyingStipType_141("STRING_170292399");
    noUnderlyingStips_0_0.set(UnderlyingStipType_141);
    UnderlyingStipulations_NoUnderlyingStips_141.insert(UnderlyingStipType_141.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_141("STRING_1966956559");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_141);
    UnderlyingStipulations_NoUnderlyingStips_141.insert(UnderlyingStipValue_141.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_141);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_142;
    FIX::UnderlyingStipType UnderlyingStipType_142("STRING_1887313104");
    noUnderlyingStips_0_1.set(UnderlyingStipType_142);
    UnderlyingStipulations_NoUnderlyingStips_142.insert(UnderlyingStipType_142.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_142("STRING_2065996252");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_142);
    UnderlyingStipulations_NoUnderlyingStips_142.insert(UnderlyingStipValue_142.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_142);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_148;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_148("STRING_26781480");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_148);
    UndlyInstrumentParties_NoUndlyInstrumentParties_148.insert(UnderlyingInstrumentPartyID_148.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_148('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_148);
    UndlyInstrumentParties_NoUndlyInstrumentParties_148.insert(UnderlyingInstrumentPartyIDSource_148.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_148(717914047);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_148);
    UndlyInstrumentParties_NoUndlyInstrumentParties_148.insert(UnderlyingInstrumentPartyRole_148.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_148);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_283("STRING_2041724409");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_283);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283.insert(UnderlyingInstrumentPartySubID_283.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_283(370375451);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_283);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283.insert(UnderlyingInstrumentPartySubIDType_283.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_149;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_149("STRING_933505437");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_149);
    UndlyInstrumentParties_NoUndlyInstrumentParties_149.insert(UnderlyingInstrumentPartyID_149.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_149('4');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_149);
    UndlyInstrumentParties_NoUndlyInstrumentParties_149.insert(UnderlyingInstrumentPartyIDSource_149.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_149(1784576995);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_149);
    UndlyInstrumentParties_NoUndlyInstrumentParties_149.insert(UnderlyingInstrumentPartyRole_149.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_149);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_284("STRING_1326844890");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_284);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284.insert(UnderlyingInstrumentPartySubID_284.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_284(144400562);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_284);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284.insert(UnderlyingInstrumentPartySubIDType_284.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_285("STRING_1463395611");
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubID_285);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285.insert(UnderlyingInstrumentPartySubID_285.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_285(688194429);
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubIDType_285);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285.insert(UnderlyingInstrumentPartySubIDType_285.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_286("STRING_976149523");
      noUndlyInstrumentPartySubIDs_1_1_2.set(UnderlyingInstrumentPartySubID_286);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286.insert(UnderlyingInstrumentPartySubID_286.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_286(862161840);
      noUndlyInstrumentPartySubIDs_1_1_2.set(UnderlyingInstrumentPartySubIDType_286);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286.insert(UnderlyingInstrumentPartySubIDType_286.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_150;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_150("STRING_1736022420");
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyID_150);
    UndlyInstrumentParties_NoUndlyInstrumentParties_150.insert(UnderlyingInstrumentPartyID_150.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_150('1');
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyIDSource_150);
    UndlyInstrumentParties_NoUndlyInstrumentParties_150.insert(UnderlyingInstrumentPartyIDSource_150.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_150(1145919266);
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyRole_150);
    UndlyInstrumentParties_NoUndlyInstrumentParties_150.insert(UnderlyingInstrumentPartyRole_150.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_150);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_287("STRING_864426329");
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubID_287);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287.insert(UnderlyingInstrumentPartySubID_287.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_287(1286681377);
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubIDType_287);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287.insert(UnderlyingInstrumentPartySubIDType_287.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287);

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_288("STRING_1313909382");
      noUndlyInstrumentPartySubIDs_2_1_1.set(UnderlyingInstrumentPartySubID_288);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288.insert(UnderlyingInstrumentPartySubID_288.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_288(2132880416);
      noUndlyInstrumentPartySubIDs_2_1_1.set(UnderlyingInstrumentPartySubIDType_288);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288.insert(UnderlyingInstrumentPartySubIDType_288.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288);

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_289("STRING_1510619665");
      noUndlyInstrumentPartySubIDs_2_1_2.set(UnderlyingInstrumentPartySubID_289);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289.insert(UnderlyingInstrumentPartySubID_289.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_289(139078103);
      noUndlyInstrumentPartySubIDs_2_1_2.set(UnderlyingInstrumentPartySubIDType_289);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289.insert(UnderlyingInstrumentPartySubIDType_289.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289);

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_2);
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
