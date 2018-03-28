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
  FIX::ClOrdID ClOrdID_38("STRING_1539970719");
  msg.set(ClOrdID_38);
  OrderMassActionRequest_0.insert(ClOrdID_38.getString());
  FIX::EncodedText EncodedText_73("DATA_1647140529");
  msg.set(EncodedText_73);
  OrderMassActionRequest_0.insert(EncodedText_73.getString());
  FIX::EncodedTextLen EncodedTextLen_73(902347488);
  msg.set(EncodedTextLen_73);
  OrderMassActionRequest_0.insert(EncodedTextLen_73.getString());
  FIX::MarketID MarketID_11("EXCHANGE_103020508");
  msg.set(MarketID_11);
  OrderMassActionRequest_0.insert(MarketID_11.getString());
  FIX::MarketSegmentID MarketSegmentID_11("STRING_1236127542");
  msg.set(MarketSegmentID_11);
  OrderMassActionRequest_0.insert(MarketSegmentID_11.getString());
  FIX::MassActionScope MassActionScope_1(9);
  msg.set(MassActionScope_1);
  OrderMassActionRequest_0.insert(MassActionScope_1.getString());
  FIX::MassActionType MassActionType_1(2);
  msg.set(MassActionType_1);
  OrderMassActionRequest_0.insert(MassActionType_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_36("STRING_1435477702");
  msg.set(SecondaryClOrdID_36);
  OrderMassActionRequest_0.insert(SecondaryClOrdID_36.getString());
  FIX::Side Side_36('7');
  msg.set(Side_36);
  OrderMassActionRequest_0.insert(Side_36.getString());
  FIX::Text Text_73("STRING_1754074826");
  msg.set(Text_73);
  OrderMassActionRequest_0.insert(Text_73.getString());
  FIX::TradingSessionID TradingSessionID_56("STRING_1");
  msg.set(TradingSessionID_56);
  OrderMassActionRequest_0.insert(TradingSessionID_56.getString());
  FIX::TradingSessionSubID TradingSessionSubID_56("STRING_4");
  msg.set(TradingSessionSubID_56);
  OrderMassActionRequest_0.insert(TradingSessionSubID_56.getString());
  FIX::TransactTime TransactTime_43(FIX::UTCTIMESTAMP(23, 10, 9, 15, 4, 2012));
  msg.set(TransactTime_43);
  OrderMassActionRequest_0.insert(TransactTime_43.getString());
  all_values.push_back(OrderMassActionRequest_0);

  // Instrument
  multiset<string> Instrument_52;
  FIX::AttachmentPoint AttachmentPoint_52;
  AttachmentPoint_52.setString("68.290000");
  msg.set(AttachmentPoint_52);
  Instrument_52.insert(AttachmentPoint_52.getString());
  FIX::CFICode CFICode_52("STRING_1365221743");
  msg.set(CFICode_52);
  Instrument_52.insert(CFICode_52.getString());
  FIX::CPProgram CPProgram_52(2);
  msg.set(CPProgram_52);
  Instrument_52.insert(CPProgram_52.getString());
  FIX::CPRegType CPRegType_52("STRING_1683913779");
  msg.set(CPRegType_52);
  Instrument_52.insert(CPRegType_52.getString());
  FIX::CapPrice CapPrice_52;
  CapPrice_52.setString("11084117");
  msg.set(CapPrice_52);
  Instrument_52.insert(CapPrice_52.getString());
  FIX::ContractMultiplier ContractMultiplier_52;
  ContractMultiplier_52.setString("7969659");
  msg.set(ContractMultiplier_52);
  Instrument_52.insert(ContractMultiplier_52.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_52(2);
  msg.set(ContractMultiplierUnit_52);
  Instrument_52.insert(ContractMultiplierUnit_52.getString());
  FIX::ContractSettlMonth ContractSettlMonth_52("MONTHYEAR_859283666");
  msg.set(ContractSettlMonth_52);
  Instrument_52.insert(ContractSettlMonth_52.getString());
  FIX::CountryOfIssue CountryOfIssue_52("COUNTRY_682201168");
  msg.set(CountryOfIssue_52);
  Instrument_52.insert(CountryOfIssue_52.getString());
  FIX::CouponPaymentDate CouponPaymentDate_52("LOCALMKTDATE_1538794030");
  msg.set(CouponPaymentDate_52);
  Instrument_52.insert(CouponPaymentDate_52.getString());
  FIX::CouponRate CouponRate_52;
  CouponRate_52.setString("52.860000");
  msg.set(CouponRate_52);
  Instrument_52.insert(CouponRate_52.getString());
  FIX::CreditRating CreditRating_52("STRING_214904598");
  msg.set(CreditRating_52);
  Instrument_52.insert(CreditRating_52.getString());
  FIX::DatedDate DatedDate_52("LOCALMKTDATE_931281101");
  msg.set(DatedDate_52);
  Instrument_52.insert(DatedDate_52.getString());
  FIX::DetachmentPoint DetachmentPoint_52;
  DetachmentPoint_52.setString("21.670000");
  msg.set(DetachmentPoint_52);
  Instrument_52.insert(DetachmentPoint_52.getString());
  FIX::EncodedIssuer EncodedIssuer_52("DATA_1117252086");
  msg.set(EncodedIssuer_52);
  Instrument_52.insert(EncodedIssuer_52.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_52(1034301609);
  msg.set(EncodedIssuerLen_52);
  Instrument_52.insert(EncodedIssuerLen_52.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_52("DATA_267086061");
  msg.set(EncodedSecurityDesc_52);
  Instrument_52.insert(EncodedSecurityDesc_52.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_52(2064106899);
  msg.set(EncodedSecurityDescLen_52);
  Instrument_52.insert(EncodedSecurityDescLen_52.getString());
  FIX::ExerciseStyle ExerciseStyle_52(2);
  msg.set(ExerciseStyle_52);
  Instrument_52.insert(ExerciseStyle_52.getString());
  FIX::Factor Factor_52;
  Factor_52.setString("17025637");
  msg.set(Factor_52);
  Instrument_52.insert(Factor_52.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_52(false);
  msg.set(FlexProductEligibilityIndicator_52);
  Instrument_52.insert(FlexProductEligibilityIndicator_52.getString());
  FIX::FlexibleIndicator FlexibleIndicator_52(false);
  msg.set(FlexibleIndicator_52);
  Instrument_52.insert(FlexibleIndicator_52.getString());
  FIX::FloorPrice FloorPrice_52;
  FloorPrice_52.setString("7666034");
  msg.set(FloorPrice_52);
  Instrument_52.insert(FloorPrice_52.getString());
  FIX::FlowScheduleType FlowScheduleType_52(0);
  msg.set(FlowScheduleType_52);
  Instrument_52.insert(FlowScheduleType_52.getString());
  FIX::InstrRegistry InstrRegistry_52("STRING_516654387");
  msg.set(InstrRegistry_52);
  Instrument_52.insert(InstrRegistry_52.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_52('1');
  msg.set(InstrmtAssignmentMethod_52);
  Instrument_52.insert(InstrmtAssignmentMethod_52.getString());
  FIX::InterestAccrualDate InterestAccrualDate_52("LOCALMKTDATE_1403474185");
  msg.set(InterestAccrualDate_52);
  Instrument_52.insert(InterestAccrualDate_52.getString());
  FIX::IssueDate IssueDate_52("LOCALMKTDATE_459677069");
  msg.set(IssueDate_52);
  Instrument_52.insert(IssueDate_52.getString());
  FIX::Issuer Issuer_52("STRING_1856522392");
  msg.set(Issuer_52);
  Instrument_52.insert(Issuer_52.getString());
  FIX::ListMethod ListMethod_52(0);
  msg.set(ListMethod_52);
  Instrument_52.insert(ListMethod_52.getString());
  FIX::LocaleOfIssue LocaleOfIssue_52("STRING_1659715967");
  msg.set(LocaleOfIssue_52);
  Instrument_52.insert(LocaleOfIssue_52.getString());
  FIX::MaturityDate MaturityDate_52("LOCALMKTDATE_551125573");
  msg.set(MaturityDate_52);
  Instrument_52.insert(MaturityDate_52.getString());
  FIX::MaturityMonthYear MaturityMonthYear_52("MONTHYEAR_1941948267");
  msg.set(MaturityMonthYear_52);
  Instrument_52.insert(MaturityMonthYear_52.getString());
  FIX::MaturityTime MaturityTime_52("TZTIMEONLY_894951949");
  msg.set(MaturityTime_52);
  Instrument_52.insert(MaturityTime_52.getString());
  FIX::MinPriceIncrement MinPriceIncrement_52;
  MinPriceIncrement_52.setString("875557");
  msg.set(MinPriceIncrement_52);
  Instrument_52.insert(MinPriceIncrement_52.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_52;
  MinPriceIncrementAmount_52.setString("9028763");
  msg.set(MinPriceIncrementAmount_52);
  Instrument_52.insert(MinPriceIncrementAmount_52.getString());
  FIX::NTPositionLimit NTPositionLimit_52(1691917933);
  msg.set(NTPositionLimit_52);
  Instrument_52.insert(NTPositionLimit_52.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_52;
  NotionalPercentageOutstanding_52.setString("29.400000");
  msg.set(NotionalPercentageOutstanding_52);
  Instrument_52.insert(NotionalPercentageOutstanding_52.getString());
  FIX::OptAttribute OptAttribute_52('1');
  msg.set(OptAttribute_52);
  Instrument_52.insert(OptAttribute_52.getString());
  FIX::OptPayoutAmount OptPayoutAmount_52;
  OptPayoutAmount_52.setString("2266354");
  msg.set(OptPayoutAmount_52);
  Instrument_52.insert(OptPayoutAmount_52.getString());
  FIX::OptPayoutType OptPayoutType_52(1);
  msg.set(OptPayoutType_52);
  Instrument_52.insert(OptPayoutType_52.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_52;
  OriginalNotionalPercentageOutstanding_52.setString("16.470000");
  msg.set(OriginalNotionalPercentageOutstanding_52);
  Instrument_52.insert(OriginalNotionalPercentageOutstanding_52.getString());
  FIX::Pool Pool_52("STRING_441540052");
  msg.set(Pool_52);
  Instrument_52.insert(Pool_52.getString());
  FIX::PositionLimit PositionLimit_52(313730775);
  msg.set(PositionLimit_52);
  Instrument_52.insert(PositionLimit_52.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_52("STRING_INT");
  msg.set(PriceQuoteMethod_52);
  Instrument_52.insert(PriceQuoteMethod_52.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_52("STRING_1558792138");
  msg.set(PriceUnitOfMeasure_52);
  Instrument_52.insert(PriceUnitOfMeasure_52.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_52;
  PriceUnitOfMeasureQty_52.setString("13480323");
  msg.set(PriceUnitOfMeasureQty_52);
  Instrument_52.insert(PriceUnitOfMeasureQty_52.getString());
  FIX::Product Product_54(1);
  msg.set(Product_54);
  Instrument_52.insert(Product_54.getString());
  FIX::ProductComplex ProductComplex_52("STRING_1475415389");
  msg.set(ProductComplex_52);
  Instrument_52.insert(ProductComplex_52.getString());
  FIX::PutOrCall PutOrCall_52(1);
  msg.set(PutOrCall_52);
  Instrument_52.insert(PutOrCall_52.getString());
  FIX::RedemptionDate RedemptionDate_52("LOCALMKTDATE_146586343");
  msg.set(RedemptionDate_52);
  Instrument_52.insert(RedemptionDate_52.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_52("STRING_2010912519");
  msg.set(RepoCollateralSecurityType_52);
  Instrument_52.insert(RepoCollateralSecurityType_52.getString());
  FIX::RepurchaseRate RepurchaseRate_52;
  RepurchaseRate_52.setString("14.010000");
  msg.set(RepurchaseRate_52);
  Instrument_52.insert(RepurchaseRate_52.getString());
  FIX::RepurchaseTerm RepurchaseTerm_52(913189776);
  msg.set(RepurchaseTerm_52);
  Instrument_52.insert(RepurchaseTerm_52.getString());
  FIX::RestructuringType RestructuringType_52("STRING_MM");
  msg.set(RestructuringType_52);
  Instrument_52.insert(RestructuringType_52.getString());
  FIX::SecurityDesc SecurityDesc_52("STRING_114922140");
  msg.set(SecurityDesc_52);
  Instrument_52.insert(SecurityDesc_52.getString());
  FIX::SecurityExchange SecurityExchange_52("EXCHANGE_173873073");
  msg.set(SecurityExchange_52);
  Instrument_52.insert(SecurityExchange_52.getString());
  FIX::SecurityGroup SecurityGroup_52("STRING_1797016991");
  msg.set(SecurityGroup_52);
  Instrument_52.insert(SecurityGroup_52.getString());
  FIX::SecurityID SecurityID_52("STRING_574599209");
  msg.set(SecurityID_52);
  Instrument_52.insert(SecurityID_52.getString());
  FIX::SecurityIDSource SecurityIDSource_52("STRING_M");
  msg.set(SecurityIDSource_52);
  Instrument_52.insert(SecurityIDSource_52.getString());
  FIX::SecurityStatus SecurityStatus_52("STRING_2");
  msg.set(SecurityStatus_52);
  Instrument_52.insert(SecurityStatus_52.getString());
  FIX::SecuritySubType SecuritySubType_53("STRING_86831528");
  msg.set(SecuritySubType_53);
  Instrument_52.insert(SecuritySubType_53.getString());
  FIX::SecurityType SecurityType_54("STRING_FXSPOT");
  msg.set(SecurityType_54);
  Instrument_52.insert(SecurityType_54.getString());
  FIX::Seniority Seniority_52("STRING_SD");
  msg.set(Seniority_52);
  Instrument_52.insert(Seniority_52.getString());
  FIX::SettlMethod SettlMethod_52('P');
  msg.set(SettlMethod_52);
  Instrument_52.insert(SettlMethod_52.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_52("STRING_521593095");
  msg.set(SettleOnOpenFlag_52);
  Instrument_52.insert(SettleOnOpenFlag_52.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_52("STRING_923600829");
  msg.set(StateOrProvinceOfIssue_52);
  Instrument_52.insert(StateOrProvinceOfIssue_52.getString());
  FIX::StrikeCurrency StrikeCurrency_52("USD");
  msg.set(StrikeCurrency_52);
  Instrument_52.insert(StrikeCurrency_52.getString());
  FIX::StrikeMultiplier StrikeMultiplier_52;
  StrikeMultiplier_52.setString("5382771");
  msg.set(StrikeMultiplier_52);
  Instrument_52.insert(StrikeMultiplier_52.getString());
  FIX::StrikePrice StrikePrice_52;
  StrikePrice_52.setString("7528532");
  msg.set(StrikePrice_52);
  Instrument_52.insert(StrikePrice_52.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_52(1);
  msg.set(StrikePriceBoundaryMethod_52);
  Instrument_52.insert(StrikePriceBoundaryMethod_52.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_52;
  StrikePriceBoundaryPrecision_52.setString("88.380000");
  msg.set(StrikePriceBoundaryPrecision_52);
  Instrument_52.insert(StrikePriceBoundaryPrecision_52.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_52(2);
  msg.set(StrikePriceDeterminationMethod_52);
  Instrument_52.insert(StrikePriceDeterminationMethod_52.getString());
  FIX::StrikeValue StrikeValue_52;
  StrikeValue_52.setString("2089128");
  msg.set(StrikeValue_52);
  Instrument_52.insert(StrikeValue_52.getString());
  FIX::Symbol Symbol_52("STRING_8675357");
  msg.set(Symbol_52);
  Instrument_52.insert(Symbol_52.getString());
  FIX::SymbolSfx SymbolSfx_52("STRING_WI");
  msg.set(SymbolSfx_52);
  Instrument_52.insert(SymbolSfx_52.getString());
  FIX::TimeUnit TimeUnit_52("STRING_H");
  msg.set(TimeUnit_52);
  Instrument_52.insert(TimeUnit_52.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_52(1);
  msg.set(UnderlyingPriceDeterminationMethod_52);
  Instrument_52.insert(UnderlyingPriceDeterminationMethod_52.getString());
  FIX::UnitOfMeasure UnitOfMeasure_52("STRING_Gal");
  msg.set(UnitOfMeasure_52);
  Instrument_52.insert(UnitOfMeasure_52.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_52;
  UnitOfMeasureQty_52.setString("11530578");
  msg.set(UnitOfMeasureQty_52);
  Instrument_52.insert(UnitOfMeasureQty_52.getString());
  FIX::ValuationMethod ValuationMethod_52("STRING_FUTDA");
  msg.set(ValuationMethod_52);
  Instrument_52.insert(ValuationMethod_52.getString());
  all_values.push_back(Instrument_52);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassActionRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_101;
    FIX::ComplexEventCondition ComplexEventCondition_101(2);
    noComplexEvents_0_0.set(ComplexEventCondition_101);
    ComplexEvents_NoComplexEvents_101.insert(ComplexEventCondition_101.getString());
    FIX::ComplexEventPrice ComplexEventPrice_101;
    ComplexEventPrice_101.setString("16599577");
    noComplexEvents_0_0.set(ComplexEventPrice_101);
    ComplexEvents_NoComplexEvents_101.insert(ComplexEventPrice_101.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_101(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_101);
    ComplexEvents_NoComplexEvents_101.insert(ComplexEventPriceBoundaryMethod_101.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_101;
    ComplexEventPriceBoundaryPrecision_101.setString("77.710000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_101);
    ComplexEvents_NoComplexEvents_101.insert(ComplexEventPriceBoundaryPrecision_101.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_101(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_101);
    ComplexEvents_NoComplexEvents_101.insert(ComplexEventPriceTimeType_101.getString());
    FIX::ComplexEventType ComplexEventType_101(7);
    noComplexEvents_0_0.set(ComplexEventType_101);
    ComplexEvents_NoComplexEvents_101.insert(ComplexEventType_101.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_101;
    ComplexOptPayoutAmount_101.setString("14408469");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_101);
    ComplexEvents_NoComplexEvents_101.insert(ComplexOptPayoutAmount_101.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_101);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_208;
      FIX::ComplexEventEndDate ComplexEventEndDate_208(FIX::UTCTIMESTAMP(5, 58, 54, 23, 2, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_208);
      ComplexEventDates_NoComplexEventDates_208.insert(ComplexEventEndDate_208.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_208(FIX::UTCTIMESTAMP(13, 34, 59, 12, 6, 2002));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_208);
      ComplexEventDates_NoComplexEventDates_208.insert(ComplexEventStartDate_208.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_208);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_427;
        FIX::ComplexEventEndTime ComplexEventEndTime_427(FIX::UTCTIMEONLY(3, 56, 46));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_427);
        ComplexEventTimes_NoComplexEventTimes_427.insert(ComplexEventEndTime_427.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_427(FIX::UTCTIMEONLY(14, 46, 32));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_427);
        ComplexEventTimes_NoComplexEventTimes_427.insert(ComplexEventStartTime_427.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_427);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_428;
        FIX::ComplexEventEndTime ComplexEventEndTime_428(FIX::UTCTIMEONLY(18, 30, 49));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_428);
        ComplexEventTimes_NoComplexEventTimes_428.insert(ComplexEventEndTime_428.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_428(FIX::UTCTIMEONLY(7, 2, 6));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_428);
        ComplexEventTimes_NoComplexEventTimes_428.insert(ComplexEventStartTime_428.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_428);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_429;
        FIX::ComplexEventEndTime ComplexEventEndTime_429(FIX::UTCTIMEONLY(19, 4, 13));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_429);
        ComplexEventTimes_NoComplexEventTimes_429.insert(ComplexEventEndTime_429.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_429(FIX::UTCTIMEONLY(18, 9, 4));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_429);
        ComplexEventTimes_NoComplexEventTimes_429.insert(ComplexEventStartTime_429.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_429);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_209;
      FIX::ComplexEventEndDate ComplexEventEndDate_209(FIX::UTCTIMESTAMP(19, 55, 35, 12, 4, 2005));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_209);
      ComplexEventDates_NoComplexEventDates_209.insert(ComplexEventEndDate_209.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_209(FIX::UTCTIMESTAMP(11, 26, 41, 3, 9, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_209);
      ComplexEventDates_NoComplexEventDates_209.insert(ComplexEventStartDate_209.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_209);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_430;
        FIX::ComplexEventEndTime ComplexEventEndTime_430(FIX::UTCTIMEONLY(1, 2, 11));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_430);
        ComplexEventTimes_NoComplexEventTimes_430.insert(ComplexEventEndTime_430.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_430(FIX::UTCTIMEONLY(14, 13, 19));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_430);
        ComplexEventTimes_NoComplexEventTimes_430.insert(ComplexEventStartTime_430.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_430);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_431;
        FIX::ComplexEventEndTime ComplexEventEndTime_431(FIX::UTCTIMEONLY(12, 15, 51));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_431);
        ComplexEventTimes_NoComplexEventTimes_431.insert(ComplexEventEndTime_431.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_431(FIX::UTCTIMEONLY(21, 0, 23));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_431);
        ComplexEventTimes_NoComplexEventTimes_431.insert(ComplexEventStartTime_431.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_431);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_432;
        FIX::ComplexEventEndTime ComplexEventEndTime_432(FIX::UTCTIMEONLY(23, 11, 4));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_432);
        ComplexEventTimes_NoComplexEventTimes_432.insert(ComplexEventEndTime_432.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_432(FIX::UTCTIMEONLY(2, 34, 10));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_432);
        ComplexEventTimes_NoComplexEventTimes_432.insert(ComplexEventStartTime_432.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_432);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_210;
      FIX::ComplexEventEndDate ComplexEventEndDate_210(FIX::UTCTIMESTAMP(12, 43, 13, 8, 3, 2003));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_210);
      ComplexEventDates_NoComplexEventDates_210.insert(ComplexEventEndDate_210.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_210(FIX::UTCTIMESTAMP(7, 39, 5, 4, 10, 2004));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_210);
      ComplexEventDates_NoComplexEventDates_210.insert(ComplexEventStartDate_210.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_210);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_433;
        FIX::ComplexEventEndTime ComplexEventEndTime_433(FIX::UTCTIMEONLY(11, 30, 26));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_433);
        ComplexEventTimes_NoComplexEventTimes_433.insert(ComplexEventEndTime_433.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_433(FIX::UTCTIMEONLY(8, 26, 21));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_433);
        ComplexEventTimes_NoComplexEventTimes_433.insert(ComplexEventStartTime_433.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_433);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_102;
    FIX::ComplexEventCondition ComplexEventCondition_102(2);
    noComplexEvents_0_1.set(ComplexEventCondition_102);
    ComplexEvents_NoComplexEvents_102.insert(ComplexEventCondition_102.getString());
    FIX::ComplexEventPrice ComplexEventPrice_102;
    ComplexEventPrice_102.setString("18051268");
    noComplexEvents_0_1.set(ComplexEventPrice_102);
    ComplexEvents_NoComplexEvents_102.insert(ComplexEventPrice_102.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_102(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_102);
    ComplexEvents_NoComplexEvents_102.insert(ComplexEventPriceBoundaryMethod_102.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_102;
    ComplexEventPriceBoundaryPrecision_102.setString("35.970000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_102);
    ComplexEvents_NoComplexEvents_102.insert(ComplexEventPriceBoundaryPrecision_102.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_102(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_102);
    ComplexEvents_NoComplexEvents_102.insert(ComplexEventPriceTimeType_102.getString());
    FIX::ComplexEventType ComplexEventType_102(1);
    noComplexEvents_0_1.set(ComplexEventType_102);
    ComplexEvents_NoComplexEvents_102.insert(ComplexEventType_102.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_102;
    ComplexOptPayoutAmount_102.setString("884895");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_102);
    ComplexEvents_NoComplexEvents_102.insert(ComplexOptPayoutAmount_102.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_102);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_211;
      FIX::ComplexEventEndDate ComplexEventEndDate_211(FIX::UTCTIMESTAMP(7, 3, 9, 20, 11, 2016));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_211);
      ComplexEventDates_NoComplexEventDates_211.insert(ComplexEventEndDate_211.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_211(FIX::UTCTIMESTAMP(17, 18, 4, 25, 4, 2002));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_211);
      ComplexEventDates_NoComplexEventDates_211.insert(ComplexEventStartDate_211.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_211);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_434;
        FIX::ComplexEventEndTime ComplexEventEndTime_434(FIX::UTCTIMEONLY(1, 23, 16));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_434);
        ComplexEventTimes_NoComplexEventTimes_434.insert(ComplexEventEndTime_434.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_434(FIX::UTCTIMEONLY(7, 34, 13));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_434);
        ComplexEventTimes_NoComplexEventTimes_434.insert(ComplexEventStartTime_434.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_434);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_435;
        FIX::ComplexEventEndTime ComplexEventEndTime_435(FIX::UTCTIMEONLY(16, 37, 13));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_435);
        ComplexEventTimes_NoComplexEventTimes_435.insert(ComplexEventEndTime_435.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_435(FIX::UTCTIMEONLY(16, 17, 49));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_435);
        ComplexEventTimes_NoComplexEventTimes_435.insert(ComplexEventStartTime_435.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_435);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_212;
      FIX::ComplexEventEndDate ComplexEventEndDate_212(FIX::UTCTIMESTAMP(12, 45, 26, 4, 8, 2005));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_212);
      ComplexEventDates_NoComplexEventDates_212.insert(ComplexEventEndDate_212.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_212(FIX::UTCTIMESTAMP(12, 15, 35, 22, 7, 2001));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_212);
      ComplexEventDates_NoComplexEventDates_212.insert(ComplexEventStartDate_212.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_212);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_436;
        FIX::ComplexEventEndTime ComplexEventEndTime_436(FIX::UTCTIMEONLY(7, 9, 29));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_436);
        ComplexEventTimes_NoComplexEventTimes_436.insert(ComplexEventEndTime_436.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_436(FIX::UTCTIMEONLY(20, 56, 47));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_436);
        ComplexEventTimes_NoComplexEventTimes_436.insert(ComplexEventStartTime_436.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_436);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_213;
      FIX::ComplexEventEndDate ComplexEventEndDate_213(FIX::UTCTIMESTAMP(0, 25, 10, 13, 10, 2003));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_213);
      ComplexEventDates_NoComplexEventDates_213.insert(ComplexEventEndDate_213.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_213(FIX::UTCTIMESTAMP(10, 39, 28, 9, 5, 2005));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_213);
      ComplexEventDates_NoComplexEventDates_213.insert(ComplexEventStartDate_213.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_213);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_437;
        FIX::ComplexEventEndTime ComplexEventEndTime_437(FIX::UTCTIMEONLY(15, 49, 10));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_437);
        ComplexEventTimes_NoComplexEventTimes_437.insert(ComplexEventEndTime_437.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_437(FIX::UTCTIMEONLY(23, 51, 16));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_437);
        ComplexEventTimes_NoComplexEventTimes_437.insert(ComplexEventStartTime_437.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_437);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_438;
        FIX::ComplexEventEndTime ComplexEventEndTime_438(FIX::UTCTIMEONLY(10, 17, 46));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_438);
        ComplexEventTimes_NoComplexEventTimes_438.insert(ComplexEventEndTime_438.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_438(FIX::UTCTIMEONLY(18, 42, 48));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_438);
        ComplexEventTimes_NoComplexEventTimes_438.insert(ComplexEventStartTime_438.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_438);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_103;
    FIX::ComplexEventCondition ComplexEventCondition_103(1);
    noComplexEvents_0_2.set(ComplexEventCondition_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventCondition_103.getString());
    FIX::ComplexEventPrice ComplexEventPrice_103;
    ComplexEventPrice_103.setString("20071798");
    noComplexEvents_0_2.set(ComplexEventPrice_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventPrice_103.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_103(1);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventPriceBoundaryMethod_103.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_103;
    ComplexEventPriceBoundaryPrecision_103.setString("35.160000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventPriceBoundaryPrecision_103.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_103(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventPriceTimeType_103.getString());
    FIX::ComplexEventType ComplexEventType_103(1);
    noComplexEvents_0_2.set(ComplexEventType_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventType_103.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_103;
    ComplexOptPayoutAmount_103.setString("881877");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexOptPayoutAmount_103.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_103);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_214;
      FIX::ComplexEventEndDate ComplexEventEndDate_214(FIX::UTCTIMESTAMP(23, 2, 22, 27, 6, 2000));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_214);
      ComplexEventDates_NoComplexEventDates_214.insert(ComplexEventEndDate_214.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_214(FIX::UTCTIMESTAMP(9, 29, 16, 22, 6, 2007));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_214);
      ComplexEventDates_NoComplexEventDates_214.insert(ComplexEventStartDate_214.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_214);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_439;
        FIX::ComplexEventEndTime ComplexEventEndTime_439(FIX::UTCTIMEONLY(10, 20, 43));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_439);
        ComplexEventTimes_NoComplexEventTimes_439.insert(ComplexEventEndTime_439.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_439(FIX::UTCTIMEONLY(2, 17, 15));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_439);
        ComplexEventTimes_NoComplexEventTimes_439.insert(ComplexEventStartTime_439.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_439);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_440;
        FIX::ComplexEventEndTime ComplexEventEndTime_440(FIX::UTCTIMEONLY(15, 21, 45));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_440);
        ComplexEventTimes_NoComplexEventTimes_440.insert(ComplexEventEndTime_440.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_440(FIX::UTCTIMEONLY(4, 40, 41));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_440);
        ComplexEventTimes_NoComplexEventTimes_440.insert(ComplexEventStartTime_440.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_440);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_441;
        FIX::ComplexEventEndTime ComplexEventEndTime_441(FIX::UTCTIMEONLY(19, 44, 20));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_441);
        ComplexEventTimes_NoComplexEventTimes_441.insert(ComplexEventEndTime_441.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_441(FIX::UTCTIMEONLY(13, 0, 36));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_441);
        ComplexEventTimes_NoComplexEventTimes_441.insert(ComplexEventStartTime_441.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_441);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_215;
      FIX::ComplexEventEndDate ComplexEventEndDate_215(FIX::UTCTIMESTAMP(6, 52, 1, 7, 5, 2009));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_215);
      ComplexEventDates_NoComplexEventDates_215.insert(ComplexEventEndDate_215.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_215(FIX::UTCTIMESTAMP(6, 15, 36, 5, 10, 2017));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_215);
      ComplexEventDates_NoComplexEventDates_215.insert(ComplexEventStartDate_215.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_215);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_442;
        FIX::ComplexEventEndTime ComplexEventEndTime_442(FIX::UTCTIMEONLY(9, 13, 43));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_442);
        ComplexEventTimes_NoComplexEventTimes_442.insert(ComplexEventEndTime_442.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_442(FIX::UTCTIMEONLY(17, 23, 57));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_442);
        ComplexEventTimes_NoComplexEventTimes_442.insert(ComplexEventStartTime_442.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_442);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassActionRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_96;
    FIX::EventDate EventDate_96("LOCALMKTDATE_1174649243");
    noEvents_0_0.set(EventDate_96);
    EvntGrp_NoEvents_96.insert(EventDate_96.getString());
    FIX::EventPx EventPx_96;
    EventPx_96.setString("12535250");
    noEvents_0_0.set(EventPx_96);
    EvntGrp_NoEvents_96.insert(EventPx_96.getString());
    FIX::EventText EventText_96("STRING_1388424507");
    noEvents_0_0.set(EventText_96);
    EvntGrp_NoEvents_96.insert(EventText_96.getString());
    FIX::EventTime EventTime_96(FIX::UTCTIMESTAMP(15, 27, 30, 5, 2, 2014));
    noEvents_0_0.set(EventTime_96);
    EvntGrp_NoEvents_96.insert(EventTime_96.getString());
    FIX::EventType EventType_96(3);
    noEvents_0_0.set(EventType_96);
    EvntGrp_NoEvents_96.insert(EventType_96.getString());
    all_values.push_back(EvntGrp_NoEvents_96);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassActionRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_98;
    FIX::InstrumentPartyID InstrumentPartyID_98("STRING_1832107446");
    noInstrumentParties_0_0.set(InstrumentPartyID_98);
    InstrumentParties_NoInstrumentParties_98.insert(InstrumentPartyID_98.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_98('9');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_98);
    InstrumentParties_NoInstrumentParties_98.insert(InstrumentPartyIDSource_98.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_98(1287012233);
    noInstrumentParties_0_0.set(InstrumentPartyRole_98);
    InstrumentParties_NoInstrumentParties_98.insert(InstrumentPartyRole_98.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_98);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213;
      FIX::InstrumentPartySubID InstrumentPartySubID_213("STRING_1342297181");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_213);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213.insert(InstrumentPartySubID_213.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_213(1555796249);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_213);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213.insert(InstrumentPartySubIDType_213.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214;
      FIX::InstrumentPartySubID InstrumentPartySubID_214("STRING_680870821");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_214);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214.insert(InstrumentPartySubID_214.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_214(1692805779);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_214);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214.insert(InstrumentPartySubIDType_214.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_99;
    FIX::InstrumentPartyID InstrumentPartyID_99("STRING_370881554");
    noInstrumentParties_0_1.set(InstrumentPartyID_99);
    InstrumentParties_NoInstrumentParties_99.insert(InstrumentPartyID_99.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_99('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_99);
    InstrumentParties_NoInstrumentParties_99.insert(InstrumentPartyIDSource_99.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_99(370816717);
    noInstrumentParties_0_1.set(InstrumentPartyRole_99);
    InstrumentParties_NoInstrumentParties_99.insert(InstrumentPartyRole_99.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_99);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215;
      FIX::InstrumentPartySubID InstrumentPartySubID_215("STRING_112285387");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_215);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215.insert(InstrumentPartySubID_215.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_215(713047160);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_215);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215.insert(InstrumentPartySubIDType_215.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216;
      FIX::InstrumentPartySubID InstrumentPartySubID_216("STRING_1459598371");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_216);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216.insert(InstrumentPartySubID_216.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_216(1080587005);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_216);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216.insert(InstrumentPartySubIDType_216.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217;
      FIX::InstrumentPartySubID InstrumentPartySubID_217("STRING_660201215");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_217);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217.insert(InstrumentPartySubID_217.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_217(1335511041);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_217);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217.insert(InstrumentPartySubIDType_217.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_112;
    FIX::SecurityAltID SecurityAltID_112("STRING_1834850458");
    noSecurityAltID_0_0.set(SecurityAltID_112);
    SecAltIDGrp_NoSecurityAltID_112.insert(SecurityAltID_112.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_112("STRING_441552466");
    noSecurityAltID_0_0.set(SecurityAltIDSource_112);
    SecAltIDGrp_NoSecurityAltID_112.insert(SecurityAltIDSource_112.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_112);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_113;
    FIX::SecurityAltID SecurityAltID_113("STRING_2037912359");
    noSecurityAltID_0_1.set(SecurityAltID_113);
    SecAltIDGrp_NoSecurityAltID_113.insert(SecurityAltID_113.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_113("STRING_156356504");
    noSecurityAltID_0_1.set(SecurityAltIDSource_113);
    SecAltIDGrp_NoSecurityAltID_113.insert(SecurityAltIDSource_113.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_113);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_114;
    FIX::SecurityAltID SecurityAltID_114("STRING_1544015401");
    noSecurityAltID_0_2.set(SecurityAltID_114);
    SecAltIDGrp_NoSecurityAltID_114.insert(SecurityAltID_114.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_114("STRING_1634784438");
    noSecurityAltID_0_2.set(SecurityAltIDSource_114);
    SecAltIDGrp_NoSecurityAltID_114.insert(SecurityAltIDSource_114.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_114);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_104;
  FIX::SecurityXML SecurityXML_105("XMLDATA_706434974");
  msg.set(SecurityXML_105);
  FIX::SecurityXMLLen SecurityXMLLen_52(1629804383);
  msg.set(SecurityXMLLen_52);
  FIX::SecurityXMLSchema SecurityXMLSchema_52("STRING_1987082108");
  msg.set(SecurityXMLSchema_52);
  SecurityXML_104.insert(SecurityXMLSchema_52.getString());
  all_values.push_back(SecurityXML_104);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassActionRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_90;
    FIX::PartyID PartyID_90("STRING_1760006565");
    noPartyIDs_0_0.set(PartyID_90);
    Parties_NoPartyIDs_90.insert(PartyID_90.getString());
    FIX::PartyIDSource PartyIDSource_90('G');
    noPartyIDs_0_0.set(PartyIDSource_90);
    Parties_NoPartyIDs_90.insert(PartyIDSource_90.getString());
    FIX::PartyRole PartyRole_90(4);
    noPartyIDs_0_0.set(PartyRole_90);
    Parties_NoPartyIDs_90.insert(PartyRole_90.getString());
    all_values.push_back(Parties_NoPartyIDs_90);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_184;
      FIX::PartySubID PartySubID_184("STRING_1597523985");
      noPartySubIDs_0_1_0.set(PartySubID_184);
      PtysSubGrp_NoPartySubIDs_184.insert(PartySubID_184.getString());
      FIX::PartySubIDType PartySubIDType_184(2);
      noPartySubIDs_0_1_0.set(PartySubIDType_184);
      PtysSubGrp_NoPartySubIDs_184.insert(PartySubIDType_184.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_184);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_91;
    FIX::PartyID PartyID_91("STRING_1862168925");
    noPartyIDs_0_1.set(PartyID_91);
    Parties_NoPartyIDs_91.insert(PartyID_91.getString());
    FIX::PartyIDSource PartyIDSource_91('2');
    noPartyIDs_0_1.set(PartyIDSource_91);
    Parties_NoPartyIDs_91.insert(PartyIDSource_91.getString());
    FIX::PartyRole PartyRole_91(59);
    noPartyIDs_0_1.set(PartyRole_91);
    Parties_NoPartyIDs_91.insert(PartyRole_91.getString());
    all_values.push_back(Parties_NoPartyIDs_91);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_185;
      FIX::PartySubID PartySubID_185("STRING_1376718141");
      noPartySubIDs_1_1_0.set(PartySubID_185);
      PtysSubGrp_NoPartySubIDs_185.insert(PartySubID_185.getString());
      FIX::PartySubIDType PartySubIDType_185(13);
      noPartySubIDs_1_1_0.set(PartySubIDType_185);
      PtysSubGrp_NoPartySubIDs_185.insert(PartySubIDType_185.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_185);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_186;
      FIX::PartySubID PartySubID_186("STRING_1778307773");
      noPartySubIDs_1_1_1.set(PartySubID_186);
      PtysSubGrp_NoPartySubIDs_186.insert(PartySubID_186.getString());
      FIX::PartySubIDType PartySubIDType_186(16);
      noPartySubIDs_1_1_1.set(PartySubIDType_186);
      PtysSubGrp_NoPartySubIDs_186.insert(PartySubIDType_186.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_186);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassActionRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_4;
    FIX::TargetPartyID TargetPartyID_4("STRING_343871285");
    noTargetPartyIDs_0_0.set(TargetPartyID_4);
    TargetParties_NoTargetPartyIDs_4.insert(TargetPartyID_4.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_4('4');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_4);
    TargetParties_NoTargetPartyIDs_4.insert(TargetPartyIDSource_4.getString());
    FIX::TargetPartyRole TargetPartyRole_4(410744583);
    noTargetPartyIDs_0_0.set(TargetPartyRole_4);
    TargetParties_NoTargetPartyIDs_4.insert(TargetPartyRole_4.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_4);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_5;
    FIX::TargetPartyID TargetPartyID_5("STRING_1004072500");
    noTargetPartyIDs_0_1.set(TargetPartyID_5);
    TargetParties_NoTargetPartyIDs_5.insert(TargetPartyID_5.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_5('1');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_5);
    TargetParties_NoTargetPartyIDs_5.insert(TargetPartyIDSource_5.getString());
    FIX::TargetPartyRole TargetPartyRole_5(1060232435);
    noTargetPartyIDs_0_1.set(TargetPartyRole_5);
    TargetParties_NoTargetPartyIDs_5.insert(TargetPartyRole_5.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_5);

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_76;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_76("DATA_691439311");
  msg.set(EncodedUnderlyingIssuer_76);
  UnderlyingInstrument_76.insert(EncodedUnderlyingIssuer_76.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_76(57860759);
  msg.set(EncodedUnderlyingIssuerLen_76);
  UnderlyingInstrument_76.insert(EncodedUnderlyingIssuerLen_76.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_76("DATA_950661146");
  msg.set(EncodedUnderlyingSecurityDesc_76);
  UnderlyingInstrument_76.insert(EncodedUnderlyingSecurityDesc_76.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_76(847795815);
  msg.set(EncodedUnderlyingSecurityDescLen_76);
  UnderlyingInstrument_76.insert(EncodedUnderlyingSecurityDescLen_76.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_76;
  UnderlyingAdjustedQuantity_76.setString("16018761");
  msg.set(UnderlyingAdjustedQuantity_76);
  UnderlyingInstrument_76.insert(UnderlyingAdjustedQuantity_76.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_76;
  UnderlyingAllocationPercent_76.setString("19.370000");
  msg.set(UnderlyingAllocationPercent_76);
  UnderlyingInstrument_76.insert(UnderlyingAllocationPercent_76.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_76;
  UnderlyingAttachmentPoint_76.setString("7.890000");
  msg.set(UnderlyingAttachmentPoint_76);
  UnderlyingInstrument_76.insert(UnderlyingAttachmentPoint_76.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_76("STRING_1084196896");
  msg.set(UnderlyingCFICode_76);
  UnderlyingInstrument_76.insert(UnderlyingCFICode_76.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_76("STRING_277560397");
  msg.set(UnderlyingCPProgram_76);
  UnderlyingInstrument_76.insert(UnderlyingCPProgram_76.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_76("STRING_326632789");
  msg.set(UnderlyingCPRegType_76);
  UnderlyingInstrument_76.insert(UnderlyingCPRegType_76.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_76;
  UnderlyingCapValue_76.setString("6967198");
  msg.set(UnderlyingCapValue_76);
  UnderlyingInstrument_76.insert(UnderlyingCapValue_76.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_76;
  UnderlyingCashAmount_76.setString("5880721");
  msg.set(UnderlyingCashAmount_76);
  UnderlyingInstrument_76.insert(UnderlyingCashAmount_76.getString());
  FIX::UnderlyingCashType UnderlyingCashType_76("STRING_FIXED");
  msg.set(UnderlyingCashType_76);
  UnderlyingInstrument_76.insert(UnderlyingCashType_76.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_76;
  UnderlyingContractMultiplier_76.setString("12165915");
  msg.set(UnderlyingContractMultiplier_76);
  UnderlyingInstrument_76.insert(UnderlyingContractMultiplier_76.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_76(38112487);
  msg.set(UnderlyingContractMultiplierUnit_76);
  UnderlyingInstrument_76.insert(UnderlyingContractMultiplierUnit_76.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_76("COUNTRY_2049357600");
  msg.set(UnderlyingCountryOfIssue_76);
  UnderlyingInstrument_76.insert(UnderlyingCountryOfIssue_76.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_76("LOCALMKTDATE_931276834");
  msg.set(UnderlyingCouponPaymentDate_76);
  UnderlyingInstrument_76.insert(UnderlyingCouponPaymentDate_76.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_76;
  UnderlyingCouponRate_76.setString("90.730000");
  msg.set(UnderlyingCouponRate_76);
  UnderlyingInstrument_76.insert(UnderlyingCouponRate_76.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_76("STRING_1700960137");
  msg.set(UnderlyingCreditRating_76);
  UnderlyingInstrument_76.insert(UnderlyingCreditRating_76.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_76("GBP");
  msg.set(UnderlyingCurrency_76);
  UnderlyingInstrument_76.insert(UnderlyingCurrency_76.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_76;
  UnderlyingCurrentValue_76.setString("9188323");
  msg.set(UnderlyingCurrentValue_76);
  UnderlyingInstrument_76.insert(UnderlyingCurrentValue_76.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_76;
  UnderlyingDetachmentPoint_76.setString("20.150000");
  msg.set(UnderlyingDetachmentPoint_76);
  UnderlyingInstrument_76.insert(UnderlyingDetachmentPoint_76.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_76;
  UnderlyingDirtyPrice_76.setString("13893497");
  msg.set(UnderlyingDirtyPrice_76);
  UnderlyingInstrument_76.insert(UnderlyingDirtyPrice_76.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_76;
  UnderlyingEndPrice_76.setString("2489899");
  msg.set(UnderlyingEndPrice_76);
  UnderlyingInstrument_76.insert(UnderlyingEndPrice_76.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_76;
  UnderlyingEndValue_76.setString("1659796");
  msg.set(UnderlyingEndValue_76);
  UnderlyingInstrument_76.insert(UnderlyingEndValue_76.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_76(1817630643);
  msg.set(UnderlyingExerciseStyle_76);
  UnderlyingInstrument_76.insert(UnderlyingExerciseStyle_76.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_76;
  UnderlyingFXRate_76.setString("6597344");
  msg.set(UnderlyingFXRate_76);
  UnderlyingInstrument_76.insert(UnderlyingFXRate_76.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_76('D');
  msg.set(UnderlyingFXRateCalc_76);
  UnderlyingInstrument_76.insert(UnderlyingFXRateCalc_76.getString());
  FIX::UnderlyingFactor UnderlyingFactor_76;
  UnderlyingFactor_76.setString("14339389");
  msg.set(UnderlyingFactor_76);
  UnderlyingInstrument_76.insert(UnderlyingFactor_76.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_76(1719966925);
  msg.set(UnderlyingFlowScheduleType_76);
  UnderlyingInstrument_76.insert(UnderlyingFlowScheduleType_76.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_76("STRING_1861491463");
  msg.set(UnderlyingInstrRegistry_76);
  UnderlyingInstrument_76.insert(UnderlyingInstrRegistry_76.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_76("LOCALMKTDATE_1491799695");
  msg.set(UnderlyingIssueDate_76);
  UnderlyingInstrument_76.insert(UnderlyingIssueDate_76.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_76("STRING_523144424");
  msg.set(UnderlyingIssuer_76);
  UnderlyingInstrument_76.insert(UnderlyingIssuer_76.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_76("STRING_561803630");
  msg.set(UnderlyingLocaleOfIssue_76);
  UnderlyingInstrument_76.insert(UnderlyingLocaleOfIssue_76.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_76("LOCALMKTDATE_946192208");
  msg.set(UnderlyingMaturityDate_76);
  UnderlyingInstrument_76.insert(UnderlyingMaturityDate_76.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_76("MONTHYEAR_961106361");
  msg.set(UnderlyingMaturityMonthYear_76);
  UnderlyingInstrument_76.insert(UnderlyingMaturityMonthYear_76.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_76("TZTIMEONLY_2116034419");
  msg.set(UnderlyingMaturityTime_76);
  UnderlyingInstrument_76.insert(UnderlyingMaturityTime_76.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_76;
  UnderlyingNotionalPercentageOutstanding_76.setString("91.040000");
  msg.set(UnderlyingNotionalPercentageOutstanding_76);
  UnderlyingInstrument_76.insert(UnderlyingNotionalPercentageOutstanding_76.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_76('1');
  msg.set(UnderlyingOptAttribute_76);
  UnderlyingInstrument_76.insert(UnderlyingOptAttribute_76.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_76;
  UnderlyingOriginalNotionalPercentageOutstanding_76.setString("35.610000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_76);
  UnderlyingInstrument_76.insert(UnderlyingOriginalNotionalPercentageOutstanding_76.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_76("STRING_579625270");
  msg.set(UnderlyingPriceUnitOfMeasure_76);
  UnderlyingInstrument_76.insert(UnderlyingPriceUnitOfMeasure_76.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_76;
  UnderlyingPriceUnitOfMeasureQty_76.setString("18267389");
  msg.set(UnderlyingPriceUnitOfMeasureQty_76);
  UnderlyingInstrument_76.insert(UnderlyingPriceUnitOfMeasureQty_76.getString());
  FIX::UnderlyingProduct UnderlyingProduct_76(1226325797);
  msg.set(UnderlyingProduct_76);
  UnderlyingInstrument_76.insert(UnderlyingProduct_76.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_76(1796216827);
  msg.set(UnderlyingPutOrCall_76);
  UnderlyingInstrument_76.insert(UnderlyingPutOrCall_76.getString());
  FIX::UnderlyingPx UnderlyingPx_76;
  UnderlyingPx_76.setString("18648513");
  msg.set(UnderlyingPx_76);
  UnderlyingInstrument_76.insert(UnderlyingPx_76.getString());
  FIX::UnderlyingQty UnderlyingQty_76;
  UnderlyingQty_76.setString("11281997");
  msg.set(UnderlyingQty_76);
  UnderlyingInstrument_76.insert(UnderlyingQty_76.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_76("LOCALMKTDATE_580010013");
  msg.set(UnderlyingRedemptionDate_76);
  UnderlyingInstrument_76.insert(UnderlyingRedemptionDate_76.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_76("STRING_761316820");
  msg.set(UnderlyingRepoCollateralSecurityType_76);
  UnderlyingInstrument_76.insert(UnderlyingRepoCollateralSecurityType_76.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_76;
  UnderlyingRepurchaseRate_76.setString("62.380000");
  msg.set(UnderlyingRepurchaseRate_76);
  UnderlyingInstrument_76.insert(UnderlyingRepurchaseRate_76.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_76(771294255);
  msg.set(UnderlyingRepurchaseTerm_76);
  UnderlyingInstrument_76.insert(UnderlyingRepurchaseTerm_76.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_76("STRING_1034500386");
  msg.set(UnderlyingRestructuringType_76);
  UnderlyingInstrument_76.insert(UnderlyingRestructuringType_76.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_76("STRING_1600508566");
  msg.set(UnderlyingSecurityDesc_76);
  UnderlyingInstrument_76.insert(UnderlyingSecurityDesc_76.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_76("EXCHANGE_593402622");
  msg.set(UnderlyingSecurityExchange_76);
  UnderlyingInstrument_76.insert(UnderlyingSecurityExchange_76.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_76("STRING_276366481");
  msg.set(UnderlyingSecurityID_76);
  UnderlyingInstrument_76.insert(UnderlyingSecurityID_76.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_76("STRING_1849498473");
  msg.set(UnderlyingSecurityIDSource_76);
  UnderlyingInstrument_76.insert(UnderlyingSecurityIDSource_76.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_76("STRING_759382274");
  msg.set(UnderlyingSecuritySubType_76);
  UnderlyingInstrument_76.insert(UnderlyingSecuritySubType_76.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_76("STRING_2093997124");
  msg.set(UnderlyingSecurityType_76);
  UnderlyingInstrument_76.insert(UnderlyingSecurityType_76.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_76("STRING_361749315");
  msg.set(UnderlyingSeniority_76);
  UnderlyingInstrument_76.insert(UnderlyingSeniority_76.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_76("STRING_1929434426");
  msg.set(UnderlyingSettlMethod_76);
  UnderlyingInstrument_76.insert(UnderlyingSettlMethod_76.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_76(2);
  msg.set(UnderlyingSettlementType_76);
  UnderlyingInstrument_76.insert(UnderlyingSettlementType_76.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_76;
  UnderlyingStartValue_76.setString("20817162");
  msg.set(UnderlyingStartValue_76);
  UnderlyingInstrument_76.insert(UnderlyingStartValue_76.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_76("STRING_1643442242");
  msg.set(UnderlyingStateOrProvinceOfIssue_76);
  UnderlyingInstrument_76.insert(UnderlyingStateOrProvinceOfIssue_76.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_76("JPY");
  msg.set(UnderlyingStrikeCurrency_76);
  UnderlyingInstrument_76.insert(UnderlyingStrikeCurrency_76.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_76;
  UnderlyingStrikePrice_76.setString("577622");
  msg.set(UnderlyingStrikePrice_76);
  UnderlyingInstrument_76.insert(UnderlyingStrikePrice_76.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_76("STRING_1670960668");
  msg.set(UnderlyingSymbol_76);
  UnderlyingInstrument_76.insert(UnderlyingSymbol_76.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_76("STRING_1418483377");
  msg.set(UnderlyingSymbolSfx_76);
  UnderlyingInstrument_76.insert(UnderlyingSymbolSfx_76.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_76("STRING_26312996");
  msg.set(UnderlyingTimeUnit_76);
  UnderlyingInstrument_76.insert(UnderlyingTimeUnit_76.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_76("STRING_1553866125");
  msg.set(UnderlyingUnitOfMeasure_76);
  UnderlyingInstrument_76.insert(UnderlyingUnitOfMeasure_76.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_76;
  UnderlyingUnitOfMeasureQty_76.setString("5096664");
  msg.set(UnderlyingUnitOfMeasureQty_76);
  UnderlyingInstrument_76.insert(UnderlyingUnitOfMeasureQty_76.getString());
  all_values.push_back(UnderlyingInstrument_76);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_161;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_161("STRING_2133491395");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_161);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_161.insert(UnderlyingSecurityAltID_161.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_161("STRING_188921747");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_161);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_161.insert(UnderlyingSecurityAltIDSource_161.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_161);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_145;
    FIX::UnderlyingStipType UnderlyingStipType_145("STRING_1782224574");
    noUnderlyingStips_0_0.set(UnderlyingStipType_145);
    UnderlyingStipulations_NoUnderlyingStips_145.insert(UnderlyingStipType_145.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_145("STRING_2053773141");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_145);
    UnderlyingStipulations_NoUnderlyingStips_145.insert(UnderlyingStipValue_145.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_145);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_146;
    FIX::UnderlyingStipType UnderlyingStipType_146("STRING_528538456");
    noUnderlyingStips_0_1.set(UnderlyingStipType_146);
    UnderlyingStipulations_NoUnderlyingStips_146.insert(UnderlyingStipType_146.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_146("STRING_214750939");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_146);
    UnderlyingStipulations_NoUnderlyingStips_146.insert(UnderlyingStipValue_146.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_146);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingStips noUnderlyingStips_0_2;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_147;
    FIX::UnderlyingStipType UnderlyingStipType_147("STRING_667606313");
    noUnderlyingStips_0_2.set(UnderlyingStipType_147);
    UnderlyingStipulations_NoUnderlyingStips_147.insert(UnderlyingStipType_147.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_147("STRING_1210214694");
    noUnderlyingStips_0_2.set(UnderlyingStipValue_147);
    UnderlyingStipulations_NoUnderlyingStips_147.insert(UnderlyingStipValue_147.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_147);

    msg.addGroup(noUnderlyingStips_0_2);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_158;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_158("STRING_1702106700");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_158);
    UndlyInstrumentParties_NoUndlyInstrumentParties_158.insert(UnderlyingInstrumentPartyID_158.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_158('6');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_158);
    UndlyInstrumentParties_NoUndlyInstrumentParties_158.insert(UnderlyingInstrumentPartyIDSource_158.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_158(1579447816);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_158);
    UndlyInstrumentParties_NoUndlyInstrumentParties_158.insert(UnderlyingInstrumentPartyRole_158.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_158);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_320("STRING_365254438");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_320);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320.insert(UnderlyingInstrumentPartySubID_320.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_320(191346442);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_320);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320.insert(UnderlyingInstrumentPartySubIDType_320.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_321("STRING_1924986658");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_321);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321.insert(UnderlyingInstrumentPartySubID_321.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_321(727003753);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_321);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321.insert(UnderlyingInstrumentPartySubIDType_321.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_159;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_159("STRING_2120780868");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_159);
    UndlyInstrumentParties_NoUndlyInstrumentParties_159.insert(UnderlyingInstrumentPartyID_159.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_159('1');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_159);
    UndlyInstrumentParties_NoUndlyInstrumentParties_159.insert(UnderlyingInstrumentPartyIDSource_159.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_159(661236345);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_159);
    UndlyInstrumentParties_NoUndlyInstrumentParties_159.insert(UnderlyingInstrumentPartyRole_159.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_159);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_322("STRING_1882723882");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_322);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322.insert(UnderlyingInstrumentPartySubID_322.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_322(1118613362);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_322);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322.insert(UnderlyingInstrumentPartySubIDType_322.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
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
