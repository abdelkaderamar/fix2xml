#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/OrderMassStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderMassStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> OrderMassStatusRequest_0;
  FIX::Account Account_22("STRING_216355646");
  msg.set(Account_22);
  OrderMassStatusRequest_0.insert(Account_22.getString());
  FIX::AcctIDSource AcctIDSource_15(99);
  msg.set(AcctIDSource_15);
  OrderMassStatusRequest_0.insert(AcctIDSource_15.getString());
  FIX::MassStatusReqID MassStatusReqID_1("STRING_1043617814");
  msg.set(MassStatusReqID_1);
  OrderMassStatusRequest_0.insert(MassStatusReqID_1.getString());
  FIX::MassStatusReqType MassStatusReqType_0(7);
  msg.set(MassStatusReqType_0);
  OrderMassStatusRequest_0.insert(MassStatusReqType_0.getString());
  FIX::Side Side_32('2');
  msg.set(Side_32);
  OrderMassStatusRequest_0.insert(Side_32.getString());
  FIX::TradingSessionID TradingSessionID_57("STRING_5");
  msg.set(TradingSessionID_57);
  OrderMassStatusRequest_0.insert(TradingSessionID_57.getString());
  FIX::TradingSessionSubID TradingSessionSubID_57("STRING_4");
  msg.set(TradingSessionSubID_57);
  OrderMassStatusRequest_0.insert(TradingSessionSubID_57.getString());
  all_values.push_back(OrderMassStatusRequest_0);

  // Instrument
  multiset<string> Instrument_60;
  FIX::AttachmentPoint AttachmentPoint_60;
  AttachmentPoint_60.setString("76.140000");
  msg.set(AttachmentPoint_60);
  Instrument_60.insert(AttachmentPoint_60.getString());
  FIX::CFICode CFICode_60("STRING_304148581");
  msg.set(CFICode_60);
  Instrument_60.insert(CFICode_60.getString());
  FIX::CPProgram CPProgram_60(2);
  msg.set(CPProgram_60);
  Instrument_60.insert(CPProgram_60.getString());
  FIX::CPRegType CPRegType_60("STRING_877333305");
  msg.set(CPRegType_60);
  Instrument_60.insert(CPRegType_60.getString());
  FIX::CapPrice CapPrice_60;
  CapPrice_60.setString("4265898");
  msg.set(CapPrice_60);
  Instrument_60.insert(CapPrice_60.getString());
  FIX::ContractMultiplier ContractMultiplier_60;
  ContractMultiplier_60.setString("14809221");
  msg.set(ContractMultiplier_60);
  Instrument_60.insert(ContractMultiplier_60.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_60(1);
  msg.set(ContractMultiplierUnit_60);
  Instrument_60.insert(ContractMultiplierUnit_60.getString());
  FIX::ContractSettlMonth ContractSettlMonth_60("MONTHYEAR_1067990743");
  msg.set(ContractSettlMonth_60);
  Instrument_60.insert(ContractSettlMonth_60.getString());
  FIX::CountryOfIssue CountryOfIssue_60("COUNTRY_60715499");
  msg.set(CountryOfIssue_60);
  Instrument_60.insert(CountryOfIssue_60.getString());
  FIX::CouponPaymentDate CouponPaymentDate_60("LOCALMKTDATE_1019860384");
  msg.set(CouponPaymentDate_60);
  Instrument_60.insert(CouponPaymentDate_60.getString());
  FIX::CouponRate CouponRate_60;
  CouponRate_60.setString("3.110000");
  msg.set(CouponRate_60);
  Instrument_60.insert(CouponRate_60.getString());
  FIX::CreditRating CreditRating_60("STRING_1680943556");
  msg.set(CreditRating_60);
  Instrument_60.insert(CreditRating_60.getString());
  FIX::DatedDate DatedDate_60("LOCALMKTDATE_1413311890");
  msg.set(DatedDate_60);
  Instrument_60.insert(DatedDate_60.getString());
  FIX::DetachmentPoint DetachmentPoint_60;
  DetachmentPoint_60.setString("79.330000");
  msg.set(DetachmentPoint_60);
  Instrument_60.insert(DetachmentPoint_60.getString());
  FIX::EncodedIssuer EncodedIssuer_60("DATA_1761653659");
  msg.set(EncodedIssuer_60);
  Instrument_60.insert(EncodedIssuer_60.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_60(1858583618);
  msg.set(EncodedIssuerLen_60);
  Instrument_60.insert(EncodedIssuerLen_60.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_60("DATA_421035532");
  msg.set(EncodedSecurityDesc_60);
  Instrument_60.insert(EncodedSecurityDesc_60.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_60(546638534);
  msg.set(EncodedSecurityDescLen_60);
  Instrument_60.insert(EncodedSecurityDescLen_60.getString());
  FIX::ExerciseStyle ExerciseStyle_60(2);
  msg.set(ExerciseStyle_60);
  Instrument_60.insert(ExerciseStyle_60.getString());
  FIX::Factor Factor_60;
  Factor_60.setString("10578859");
  msg.set(Factor_60);
  Instrument_60.insert(Factor_60.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_60(true);
  msg.set(FlexProductEligibilityIndicator_60);
  Instrument_60.insert(FlexProductEligibilityIndicator_60.getString());
  FIX::FlexibleIndicator FlexibleIndicator_60(true);
  msg.set(FlexibleIndicator_60);
  Instrument_60.insert(FlexibleIndicator_60.getString());
  FIX::FloorPrice FloorPrice_60;
  FloorPrice_60.setString("1682679");
  msg.set(FloorPrice_60);
  Instrument_60.insert(FloorPrice_60.getString());
  FIX::FlowScheduleType FlowScheduleType_60(1);
  msg.set(FlowScheduleType_60);
  Instrument_60.insert(FlowScheduleType_60.getString());
  FIX::InstrRegistry InstrRegistry_60("STRING_1930713771");
  msg.set(InstrRegistry_60);
  Instrument_60.insert(InstrRegistry_60.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_60('5');
  msg.set(InstrmtAssignmentMethod_60);
  Instrument_60.insert(InstrmtAssignmentMethod_60.getString());
  FIX::InterestAccrualDate InterestAccrualDate_60("LOCALMKTDATE_1915365600");
  msg.set(InterestAccrualDate_60);
  Instrument_60.insert(InterestAccrualDate_60.getString());
  FIX::IssueDate IssueDate_60("LOCALMKTDATE_974645109");
  msg.set(IssueDate_60);
  Instrument_60.insert(IssueDate_60.getString());
  FIX::Issuer Issuer_60("STRING_471081138");
  msg.set(Issuer_60);
  Instrument_60.insert(Issuer_60.getString());
  FIX::ListMethod ListMethod_60(1);
  msg.set(ListMethod_60);
  Instrument_60.insert(ListMethod_60.getString());
  FIX::LocaleOfIssue LocaleOfIssue_60("STRING_97638106");
  msg.set(LocaleOfIssue_60);
  Instrument_60.insert(LocaleOfIssue_60.getString());
  FIX::MaturityDate MaturityDate_60("LOCALMKTDATE_1467438752");
  msg.set(MaturityDate_60);
  Instrument_60.insert(MaturityDate_60.getString());
  FIX::MaturityMonthYear MaturityMonthYear_60("MONTHYEAR_1009677790");
  msg.set(MaturityMonthYear_60);
  Instrument_60.insert(MaturityMonthYear_60.getString());
  FIX::MaturityTime MaturityTime_60("TZTIMEONLY_278695982");
  msg.set(MaturityTime_60);
  Instrument_60.insert(MaturityTime_60.getString());
  FIX::MinPriceIncrement MinPriceIncrement_60;
  MinPriceIncrement_60.setString("1972884");
  msg.set(MinPriceIncrement_60);
  Instrument_60.insert(MinPriceIncrement_60.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_60;
  MinPriceIncrementAmount_60.setString("14362676");
  msg.set(MinPriceIncrementAmount_60);
  Instrument_60.insert(MinPriceIncrementAmount_60.getString());
  FIX::NTPositionLimit NTPositionLimit_60(1759618133);
  msg.set(NTPositionLimit_60);
  Instrument_60.insert(NTPositionLimit_60.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_60;
  NotionalPercentageOutstanding_60.setString("95.640000");
  msg.set(NotionalPercentageOutstanding_60);
  Instrument_60.insert(NotionalPercentageOutstanding_60.getString());
  FIX::OptAttribute OptAttribute_60('3');
  msg.set(OptAttribute_60);
  Instrument_60.insert(OptAttribute_60.getString());
  FIX::OptPayoutAmount OptPayoutAmount_60;
  OptPayoutAmount_60.setString("18203336");
  msg.set(OptPayoutAmount_60);
  Instrument_60.insert(OptPayoutAmount_60.getString());
  FIX::OptPayoutType OptPayoutType_60(1);
  msg.set(OptPayoutType_60);
  Instrument_60.insert(OptPayoutType_60.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_60;
  OriginalNotionalPercentageOutstanding_60.setString("50.830000");
  msg.set(OriginalNotionalPercentageOutstanding_60);
  Instrument_60.insert(OriginalNotionalPercentageOutstanding_60.getString());
  FIX::Pool Pool_60("STRING_1353793540");
  msg.set(Pool_60);
  Instrument_60.insert(Pool_60.getString());
  FIX::PositionLimit PositionLimit_60(1817508190);
  msg.set(PositionLimit_60);
  Instrument_60.insert(PositionLimit_60.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_60("STRING_STD");
  msg.set(PriceQuoteMethod_60);
  Instrument_60.insert(PriceQuoteMethod_60.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_60("STRING_967963551");
  msg.set(PriceUnitOfMeasure_60);
  Instrument_60.insert(PriceUnitOfMeasure_60.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_60;
  PriceUnitOfMeasureQty_60.setString("15286081");
  msg.set(PriceUnitOfMeasureQty_60);
  Instrument_60.insert(PriceUnitOfMeasureQty_60.getString());
  FIX::Product Product_62(3);
  msg.set(Product_62);
  Instrument_60.insert(Product_62.getString());
  FIX::ProductComplex ProductComplex_60("STRING_1514602086");
  msg.set(ProductComplex_60);
  Instrument_60.insert(ProductComplex_60.getString());
  FIX::PutOrCall PutOrCall_60(1);
  msg.set(PutOrCall_60);
  Instrument_60.insert(PutOrCall_60.getString());
  FIX::RedemptionDate RedemptionDate_60("LOCALMKTDATE_96317169");
  msg.set(RedemptionDate_60);
  Instrument_60.insert(RedemptionDate_60.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_60("STRING_674560410");
  msg.set(RepoCollateralSecurityType_60);
  Instrument_60.insert(RepoCollateralSecurityType_60.getString());
  FIX::RepurchaseRate RepurchaseRate_60;
  RepurchaseRate_60.setString("75.690000");
  msg.set(RepurchaseRate_60);
  Instrument_60.insert(RepurchaseRate_60.getString());
  FIX::RepurchaseTerm RepurchaseTerm_60(264585129);
  msg.set(RepurchaseTerm_60);
  Instrument_60.insert(RepurchaseTerm_60.getString());
  FIX::RestructuringType RestructuringType_60("STRING_MR");
  msg.set(RestructuringType_60);
  Instrument_60.insert(RestructuringType_60.getString());
  FIX::SecurityDesc SecurityDesc_60("STRING_684497692");
  msg.set(SecurityDesc_60);
  Instrument_60.insert(SecurityDesc_60.getString());
  FIX::SecurityExchange SecurityExchange_60("EXCHANGE_861127370");
  msg.set(SecurityExchange_60);
  Instrument_60.insert(SecurityExchange_60.getString());
  FIX::SecurityGroup SecurityGroup_60("STRING_1314190149");
  msg.set(SecurityGroup_60);
  Instrument_60.insert(SecurityGroup_60.getString());
  FIX::SecurityID SecurityID_60("STRING_1659142802");
  msg.set(SecurityID_60);
  Instrument_60.insert(SecurityID_60.getString());
  FIX::SecurityIDSource SecurityIDSource_60("STRING_5");
  msg.set(SecurityIDSource_60);
  Instrument_60.insert(SecurityIDSource_60.getString());
  FIX::SecurityStatus SecurityStatus_60("STRING_1");
  msg.set(SecurityStatus_60);
  Instrument_60.insert(SecurityStatus_60.getString());
  FIX::SecuritySubType SecuritySubType_61("STRING_1756780908");
  msg.set(SecuritySubType_61);
  Instrument_60.insert(SecuritySubType_61.getString());
  FIX::SecurityType SecurityType_62("STRING_BRADY");
  msg.set(SecurityType_62);
  Instrument_60.insert(SecurityType_62.getString());
  FIX::Seniority Seniority_60("STRING_SD");
  msg.set(Seniority_60);
  Instrument_60.insert(Seniority_60.getString());
  FIX::SettlMethod SettlMethod_60('C');
  msg.set(SettlMethod_60);
  Instrument_60.insert(SettlMethod_60.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_60("STRING_849452022");
  msg.set(SettleOnOpenFlag_60);
  Instrument_60.insert(SettleOnOpenFlag_60.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_60("STRING_170697529");
  msg.set(StateOrProvinceOfIssue_60);
  Instrument_60.insert(StateOrProvinceOfIssue_60.getString());
  FIX::StrikeCurrency StrikeCurrency_60("GBP");
  msg.set(StrikeCurrency_60);
  Instrument_60.insert(StrikeCurrency_60.getString());
  FIX::StrikeMultiplier StrikeMultiplier_60;
  StrikeMultiplier_60.setString("5274723");
  msg.set(StrikeMultiplier_60);
  Instrument_60.insert(StrikeMultiplier_60.getString());
  FIX::StrikePrice StrikePrice_60;
  StrikePrice_60.setString("13204613");
  msg.set(StrikePrice_60);
  Instrument_60.insert(StrikePrice_60.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_60(5);
  msg.set(StrikePriceBoundaryMethod_60);
  Instrument_60.insert(StrikePriceBoundaryMethod_60.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_60;
  StrikePriceBoundaryPrecision_60.setString("73.830000");
  msg.set(StrikePriceBoundaryPrecision_60);
  Instrument_60.insert(StrikePriceBoundaryPrecision_60.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_60(1);
  msg.set(StrikePriceDeterminationMethod_60);
  Instrument_60.insert(StrikePriceDeterminationMethod_60.getString());
  FIX::StrikeValue StrikeValue_60;
  StrikeValue_60.setString("3080087");
  msg.set(StrikeValue_60);
  Instrument_60.insert(StrikeValue_60.getString());
  FIX::Symbol Symbol_60("STRING_427193104");
  msg.set(Symbol_60);
  Instrument_60.insert(Symbol_60.getString());
  FIX::SymbolSfx SymbolSfx_60("STRING_WI");
  msg.set(SymbolSfx_60);
  Instrument_60.insert(SymbolSfx_60.getString());
  FIX::TimeUnit TimeUnit_60("STRING_Yr");
  msg.set(TimeUnit_60);
  Instrument_60.insert(TimeUnit_60.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_60(2);
  msg.set(UnderlyingPriceDeterminationMethod_60);
  Instrument_60.insert(UnderlyingPriceDeterminationMethod_60.getString());
  FIX::UnitOfMeasure UnitOfMeasure_60("STRING_MMBtu");
  msg.set(UnitOfMeasure_60);
  Instrument_60.insert(UnitOfMeasure_60.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_60;
  UnitOfMeasureQty_60.setString("10235263");
  msg.set(UnitOfMeasureQty_60);
  Instrument_60.insert(UnitOfMeasureQty_60.getString());
  FIX::ValuationMethod ValuationMethod_60("STRING_CDSD");
  msg.set(ValuationMethod_60);
  Instrument_60.insert(ValuationMethod_60.getString());
  all_values.push_back(Instrument_60);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_117;
    FIX::ComplexEventCondition ComplexEventCondition_117(1);
    noComplexEvents_0_0.set(ComplexEventCondition_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventCondition_117.getString());
    FIX::ComplexEventPrice ComplexEventPrice_117;
    ComplexEventPrice_117.setString("19740103");
    noComplexEvents_0_0.set(ComplexEventPrice_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventPrice_117.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_117(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventPriceBoundaryMethod_117.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_117;
    ComplexEventPriceBoundaryPrecision_117.setString("80.010000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventPriceBoundaryPrecision_117.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_117(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventPriceTimeType_117.getString());
    FIX::ComplexEventType ComplexEventType_117(2);
    noComplexEvents_0_0.set(ComplexEventType_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventType_117.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_117;
    ComplexOptPayoutAmount_117.setString("21209508");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexOptPayoutAmount_117.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_117);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_244;
      FIX::ComplexEventEndDate ComplexEventEndDate_244(FIX::UTCTIMESTAMP(7, 58, 54, 9, 5, 2001));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_244);
      ComplexEventDates_NoComplexEventDates_244.insert(ComplexEventEndDate_244.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_244(FIX::UTCTIMESTAMP(18, 43, 3, 25, 8, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_244);
      ComplexEventDates_NoComplexEventDates_244.insert(ComplexEventStartDate_244.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_244);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_489;
        FIX::ComplexEventEndTime ComplexEventEndTime_489(FIX::UTCTIMEONLY(7, 45, 40));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_489);
        ComplexEventTimes_NoComplexEventTimes_489.insert(ComplexEventEndTime_489.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_489(FIX::UTCTIMEONLY(16, 6, 16));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_489);
        ComplexEventTimes_NoComplexEventTimes_489.insert(ComplexEventStartTime_489.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_489);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_490;
        FIX::ComplexEventEndTime ComplexEventEndTime_490(FIX::UTCTIMEONLY(18, 37, 1));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_490);
        ComplexEventTimes_NoComplexEventTimes_490.insert(ComplexEventEndTime_490.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_490(FIX::UTCTIMEONLY(12, 56, 33));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_490);
        ComplexEventTimes_NoComplexEventTimes_490.insert(ComplexEventStartTime_490.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_490);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_123;
    FIX::EventDate EventDate_123("LOCALMKTDATE_914301391");
    noEvents_0_0.set(EventDate_123);
    EvntGrp_NoEvents_123.insert(EventDate_123.getString());
    FIX::EventPx EventPx_123;
    EventPx_123.setString("15824385");
    noEvents_0_0.set(EventPx_123);
    EvntGrp_NoEvents_123.insert(EventPx_123.getString());
    FIX::EventText EventText_123("STRING_136125979");
    noEvents_0_0.set(EventText_123);
    EvntGrp_NoEvents_123.insert(EventText_123.getString());
    FIX::EventTime EventTime_123(FIX::UTCTIMESTAMP(3, 2, 40, 17, 2, 2008));
    noEvents_0_0.set(EventTime_123);
    EvntGrp_NoEvents_123.insert(EventTime_123.getString());
    FIX::EventType EventType_123(4);
    noEvents_0_0.set(EventType_123);
    EvntGrp_NoEvents_123.insert(EventType_123.getString());
    all_values.push_back(EvntGrp_NoEvents_123);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_124;
    FIX::InstrumentPartyID InstrumentPartyID_124("STRING_465409171");
    noInstrumentParties_0_0.set(InstrumentPartyID_124);
    InstrumentParties_NoInstrumentParties_124.insert(InstrumentPartyID_124.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_124('7');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_124);
    InstrumentParties_NoInstrumentParties_124.insert(InstrumentPartyIDSource_124.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_124(1282561931);
    noInstrumentParties_0_0.set(InstrumentPartyRole_124);
    InstrumentParties_NoInstrumentParties_124.insert(InstrumentPartyRole_124.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_124);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261;
      FIX::InstrumentPartySubID InstrumentPartySubID_261("STRING_869248219");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_261);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261.insert(InstrumentPartySubID_261.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_261(244473223);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_261);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261.insert(InstrumentPartySubIDType_261.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262;
      FIX::InstrumentPartySubID InstrumentPartySubID_262("STRING_1658000715");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_262);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262.insert(InstrumentPartySubID_262.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_262(1988199731);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_262);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262.insert(InstrumentPartySubIDType_262.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263;
      FIX::InstrumentPartySubID InstrumentPartySubID_263("STRING_915809690");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_263);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263.insert(InstrumentPartySubID_263.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_263(2074153111);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_263);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263.insert(InstrumentPartySubIDType_263.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_125;
    FIX::InstrumentPartyID InstrumentPartyID_125("STRING_736977903");
    noInstrumentParties_0_1.set(InstrumentPartyID_125);
    InstrumentParties_NoInstrumentParties_125.insert(InstrumentPartyID_125.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_125('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_125);
    InstrumentParties_NoInstrumentParties_125.insert(InstrumentPartyIDSource_125.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_125(1278060061);
    noInstrumentParties_0_1.set(InstrumentPartyRole_125);
    InstrumentParties_NoInstrumentParties_125.insert(InstrumentPartyRole_125.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_125);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264;
      FIX::InstrumentPartySubID InstrumentPartySubID_264("STRING_451706311");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_264);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264.insert(InstrumentPartySubID_264.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_264(583911713);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_264);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264.insert(InstrumentPartySubIDType_264.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265;
      FIX::InstrumentPartySubID InstrumentPartySubID_265("STRING_1279101053");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_265);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265.insert(InstrumentPartySubID_265.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_265(1509602344);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_265);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265.insert(InstrumentPartySubIDType_265.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266;
      FIX::InstrumentPartySubID InstrumentPartySubID_266("STRING_2011427426");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_266);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266.insert(InstrumentPartySubID_266.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_266(45918797);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_266);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266.insert(InstrumentPartySubIDType_266.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_126;
    FIX::InstrumentPartyID InstrumentPartyID_126("STRING_944557227");
    noInstrumentParties_0_2.set(InstrumentPartyID_126);
    InstrumentParties_NoInstrumentParties_126.insert(InstrumentPartyID_126.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_126('6');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_126);
    InstrumentParties_NoInstrumentParties_126.insert(InstrumentPartyIDSource_126.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_126(430977845);
    noInstrumentParties_0_2.set(InstrumentPartyRole_126);
    InstrumentParties_NoInstrumentParties_126.insert(InstrumentPartyRole_126.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_126);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267;
      FIX::InstrumentPartySubID InstrumentPartySubID_267("STRING_1162987179");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_267);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267.insert(InstrumentPartySubID_267.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_267(1934405926);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_267);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267.insert(InstrumentPartySubIDType_267.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_135;
    FIX::SecurityAltID SecurityAltID_135("STRING_1732684696");
    noSecurityAltID_0_0.set(SecurityAltID_135);
    SecAltIDGrp_NoSecurityAltID_135.insert(SecurityAltID_135.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_135("STRING_1581697102");
    noSecurityAltID_0_0.set(SecurityAltIDSource_135);
    SecAltIDGrp_NoSecurityAltID_135.insert(SecurityAltIDSource_135.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_135);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_136;
    FIX::SecurityAltID SecurityAltID_136("STRING_242802459");
    noSecurityAltID_0_1.set(SecurityAltID_136);
    SecAltIDGrp_NoSecurityAltID_136.insert(SecurityAltID_136.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_136("STRING_1371476045");
    noSecurityAltID_0_1.set(SecurityAltIDSource_136);
    SecAltIDGrp_NoSecurityAltID_136.insert(SecurityAltIDSource_136.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_136);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_137;
    FIX::SecurityAltID SecurityAltID_137("STRING_2047106273");
    noSecurityAltID_0_2.set(SecurityAltID_137);
    SecAltIDGrp_NoSecurityAltID_137.insert(SecurityAltID_137.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_137("STRING_1016625553");
    noSecurityAltID_0_2.set(SecurityAltIDSource_137);
    SecAltIDGrp_NoSecurityAltID_137.insert(SecurityAltIDSource_137.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_137);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_120;
  FIX::SecurityXML SecurityXML_121("XMLDATA_506554328");
  msg.set(SecurityXML_121);
  FIX::SecurityXMLLen SecurityXMLLen_60(530400948);
  msg.set(SecurityXMLLen_60);
  FIX::SecurityXMLSchema SecurityXMLSchema_60("STRING_1885873772");
  msg.set(SecurityXMLSchema_60);
  SecurityXML_120.insert(SecurityXMLSchema_60.getString());
  all_values.push_back(SecurityXML_120);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_85;
    FIX::PartyID PartyID_85("STRING_40918015");
    noPartyIDs_0_0.set(PartyID_85);
    Parties_NoPartyIDs_85.insert(PartyID_85.getString());
    FIX::PartyIDSource PartyIDSource_85('B');
    noPartyIDs_0_0.set(PartyIDSource_85);
    Parties_NoPartyIDs_85.insert(PartyIDSource_85.getString());
    FIX::PartyRole PartyRole_85(44);
    noPartyIDs_0_0.set(PartyRole_85);
    Parties_NoPartyIDs_85.insert(PartyRole_85.getString());
    all_values.push_back(Parties_NoPartyIDs_85);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_175;
      FIX::PartySubID PartySubID_175("STRING_316084110");
      noPartySubIDs_0_1_0.set(PartySubID_175);
      PtysSubGrp_NoPartySubIDs_175.insert(PartySubID_175.getString());
      FIX::PartySubIDType PartySubIDType_175(16);
      noPartySubIDs_0_1_0.set(PartySubIDType_175);
      PtysSubGrp_NoPartySubIDs_175.insert(PartySubIDType_175.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_175);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_176;
      FIX::PartySubID PartySubID_176("STRING_1245647539");
      noPartySubIDs_0_1_1.set(PartySubID_176);
      PtysSubGrp_NoPartySubIDs_176.insert(PartySubID_176.getString());
      FIX::PartySubIDType PartySubIDType_176(1);
      noPartySubIDs_0_1_1.set(PartySubIDType_176);
      PtysSubGrp_NoPartySubIDs_176.insert(PartySubIDType_176.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_176);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_177;
      FIX::PartySubID PartySubID_177("STRING_1384732717");
      noPartySubIDs_0_1_2.set(PartySubID_177);
      PtysSubGrp_NoPartySubIDs_177.insert(PartySubID_177.getString());
      FIX::PartySubIDType PartySubIDType_177(16);
      noPartySubIDs_0_1_2.set(PartySubIDType_177);
      PtysSubGrp_NoPartySubIDs_177.insert(PartySubIDType_177.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_177);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_86;
    FIX::PartyID PartyID_86("STRING_1542749241");
    noPartyIDs_0_1.set(PartyID_86);
    Parties_NoPartyIDs_86.insert(PartyID_86.getString());
    FIX::PartyIDSource PartyIDSource_86('A');
    noPartyIDs_0_1.set(PartyIDSource_86);
    Parties_NoPartyIDs_86.insert(PartyIDSource_86.getString());
    FIX::PartyRole PartyRole_86(32);
    noPartyIDs_0_1.set(PartyRole_86);
    Parties_NoPartyIDs_86.insert(PartyRole_86.getString());
    all_values.push_back(Parties_NoPartyIDs_86);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_178;
      FIX::PartySubID PartySubID_178("STRING_1691408641");
      noPartySubIDs_1_1_0.set(PartySubID_178);
      PtysSubGrp_NoPartySubIDs_178.insert(PartySubID_178.getString());
      FIX::PartySubIDType PartySubIDType_178(17);
      noPartySubIDs_1_1_0.set(PartySubIDType_178);
      PtysSubGrp_NoPartySubIDs_178.insert(PartySubIDType_178.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_178);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_179;
      FIX::PartySubID PartySubID_179("STRING_2019645883");
      noPartySubIDs_1_1_1.set(PartySubID_179);
      PtysSubGrp_NoPartySubIDs_179.insert(PartySubID_179.getString());
      FIX::PartySubIDType PartySubIDType_179(28);
      noPartySubIDs_1_1_1.set(PartySubIDType_179);
      PtysSubGrp_NoPartySubIDs_179.insert(PartySubIDType_179.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_179);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_180;
      FIX::PartySubID PartySubID_180("STRING_709076318");
      noPartySubIDs_1_1_2.set(PartySubID_180);
      PtysSubGrp_NoPartySubIDs_180.insert(PartySubID_180.getString());
      FIX::PartySubIDType PartySubIDType_180(25);
      noPartySubIDs_1_1_2.set(PartySubIDType_180);
      PtysSubGrp_NoPartySubIDs_180.insert(PartySubIDType_180.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_180);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_11;
    FIX::TargetPartyID TargetPartyID_11("STRING_294277367");
    noTargetPartyIDs_0_0.set(TargetPartyID_11);
    TargetParties_NoTargetPartyIDs_11.insert(TargetPartyID_11.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_11('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_11);
    TargetParties_NoTargetPartyIDs_11.insert(TargetPartyIDSource_11.getString());
    FIX::TargetPartyRole TargetPartyRole_11(1415505279);
    noTargetPartyIDs_0_0.set(TargetPartyRole_11);
    TargetParties_NoTargetPartyIDs_11.insert(TargetPartyRole_11.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_11);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_81;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_81("DATA_1665753412");
  msg.set(EncodedUnderlyingIssuer_81);
  UnderlyingInstrument_81.insert(EncodedUnderlyingIssuer_81.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_81(1140404241);
  msg.set(EncodedUnderlyingIssuerLen_81);
  UnderlyingInstrument_81.insert(EncodedUnderlyingIssuerLen_81.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_81("DATA_284647184");
  msg.set(EncodedUnderlyingSecurityDesc_81);
  UnderlyingInstrument_81.insert(EncodedUnderlyingSecurityDesc_81.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_81(24824092);
  msg.set(EncodedUnderlyingSecurityDescLen_81);
  UnderlyingInstrument_81.insert(EncodedUnderlyingSecurityDescLen_81.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_81;
  UnderlyingAdjustedQuantity_81.setString("16708051");
  msg.set(UnderlyingAdjustedQuantity_81);
  UnderlyingInstrument_81.insert(UnderlyingAdjustedQuantity_81.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_81;
  UnderlyingAllocationPercent_81.setString("73.080000");
  msg.set(UnderlyingAllocationPercent_81);
  UnderlyingInstrument_81.insert(UnderlyingAllocationPercent_81.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_81;
  UnderlyingAttachmentPoint_81.setString("16.440000");
  msg.set(UnderlyingAttachmentPoint_81);
  UnderlyingInstrument_81.insert(UnderlyingAttachmentPoint_81.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_81("STRING_1711723204");
  msg.set(UnderlyingCFICode_81);
  UnderlyingInstrument_81.insert(UnderlyingCFICode_81.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_81("STRING_1749627163");
  msg.set(UnderlyingCPProgram_81);
  UnderlyingInstrument_81.insert(UnderlyingCPProgram_81.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_81("STRING_295205238");
  msg.set(UnderlyingCPRegType_81);
  UnderlyingInstrument_81.insert(UnderlyingCPRegType_81.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_81;
  UnderlyingCapValue_81.setString("16793106");
  msg.set(UnderlyingCapValue_81);
  UnderlyingInstrument_81.insert(UnderlyingCapValue_81.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_81;
  UnderlyingCashAmount_81.setString("20657112");
  msg.set(UnderlyingCashAmount_81);
  UnderlyingInstrument_81.insert(UnderlyingCashAmount_81.getString());
  FIX::UnderlyingCashType UnderlyingCashType_81("STRING_FIXED");
  msg.set(UnderlyingCashType_81);
  UnderlyingInstrument_81.insert(UnderlyingCashType_81.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_81;
  UnderlyingContractMultiplier_81.setString("7774745");
  msg.set(UnderlyingContractMultiplier_81);
  UnderlyingInstrument_81.insert(UnderlyingContractMultiplier_81.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_81(181875813);
  msg.set(UnderlyingContractMultiplierUnit_81);
  UnderlyingInstrument_81.insert(UnderlyingContractMultiplierUnit_81.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_81("COUNTRY_465480714");
  msg.set(UnderlyingCountryOfIssue_81);
  UnderlyingInstrument_81.insert(UnderlyingCountryOfIssue_81.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_81("LOCALMKTDATE_459550178");
  msg.set(UnderlyingCouponPaymentDate_81);
  UnderlyingInstrument_81.insert(UnderlyingCouponPaymentDate_81.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_81;
  UnderlyingCouponRate_81.setString("50.540000");
  msg.set(UnderlyingCouponRate_81);
  UnderlyingInstrument_81.insert(UnderlyingCouponRate_81.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_81("STRING_1212332128");
  msg.set(UnderlyingCreditRating_81);
  UnderlyingInstrument_81.insert(UnderlyingCreditRating_81.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_81("USD");
  msg.set(UnderlyingCurrency_81);
  UnderlyingInstrument_81.insert(UnderlyingCurrency_81.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_81;
  UnderlyingCurrentValue_81.setString("7562571");
  msg.set(UnderlyingCurrentValue_81);
  UnderlyingInstrument_81.insert(UnderlyingCurrentValue_81.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_81;
  UnderlyingDetachmentPoint_81.setString("23.480000");
  msg.set(UnderlyingDetachmentPoint_81);
  UnderlyingInstrument_81.insert(UnderlyingDetachmentPoint_81.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_81;
  UnderlyingDirtyPrice_81.setString("10379716");
  msg.set(UnderlyingDirtyPrice_81);
  UnderlyingInstrument_81.insert(UnderlyingDirtyPrice_81.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_81;
  UnderlyingEndPrice_81.setString("20536887");
  msg.set(UnderlyingEndPrice_81);
  UnderlyingInstrument_81.insert(UnderlyingEndPrice_81.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_81;
  UnderlyingEndValue_81.setString("2607350");
  msg.set(UnderlyingEndValue_81);
  UnderlyingInstrument_81.insert(UnderlyingEndValue_81.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_81(697056193);
  msg.set(UnderlyingExerciseStyle_81);
  UnderlyingInstrument_81.insert(UnderlyingExerciseStyle_81.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_81;
  UnderlyingFXRate_81.setString("10789079");
  msg.set(UnderlyingFXRate_81);
  UnderlyingInstrument_81.insert(UnderlyingFXRate_81.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_81('D');
  msg.set(UnderlyingFXRateCalc_81);
  UnderlyingInstrument_81.insert(UnderlyingFXRateCalc_81.getString());
  FIX::UnderlyingFactor UnderlyingFactor_81;
  UnderlyingFactor_81.setString("19378378");
  msg.set(UnderlyingFactor_81);
  UnderlyingInstrument_81.insert(UnderlyingFactor_81.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_81(346929548);
  msg.set(UnderlyingFlowScheduleType_81);
  UnderlyingInstrument_81.insert(UnderlyingFlowScheduleType_81.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_81("STRING_73282150");
  msg.set(UnderlyingInstrRegistry_81);
  UnderlyingInstrument_81.insert(UnderlyingInstrRegistry_81.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_81("LOCALMKTDATE_930758401");
  msg.set(UnderlyingIssueDate_81);
  UnderlyingInstrument_81.insert(UnderlyingIssueDate_81.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_81("STRING_631576732");
  msg.set(UnderlyingIssuer_81);
  UnderlyingInstrument_81.insert(UnderlyingIssuer_81.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_81("STRING_98106242");
  msg.set(UnderlyingLocaleOfIssue_81);
  UnderlyingInstrument_81.insert(UnderlyingLocaleOfIssue_81.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_81("LOCALMKTDATE_454079942");
  msg.set(UnderlyingMaturityDate_81);
  UnderlyingInstrument_81.insert(UnderlyingMaturityDate_81.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_81("MONTHYEAR_654614040");
  msg.set(UnderlyingMaturityMonthYear_81);
  UnderlyingInstrument_81.insert(UnderlyingMaturityMonthYear_81.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_81("TZTIMEONLY_873957887");
  msg.set(UnderlyingMaturityTime_81);
  UnderlyingInstrument_81.insert(UnderlyingMaturityTime_81.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_81;
  UnderlyingNotionalPercentageOutstanding_81.setString("94.980000");
  msg.set(UnderlyingNotionalPercentageOutstanding_81);
  UnderlyingInstrument_81.insert(UnderlyingNotionalPercentageOutstanding_81.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_81('2');
  msg.set(UnderlyingOptAttribute_81);
  UnderlyingInstrument_81.insert(UnderlyingOptAttribute_81.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_81;
  UnderlyingOriginalNotionalPercentageOutstanding_81.setString("31.250000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_81);
  UnderlyingInstrument_81.insert(UnderlyingOriginalNotionalPercentageOutstanding_81.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_81("STRING_1697630181");
  msg.set(UnderlyingPriceUnitOfMeasure_81);
  UnderlyingInstrument_81.insert(UnderlyingPriceUnitOfMeasure_81.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_81;
  UnderlyingPriceUnitOfMeasureQty_81.setString("1749851");
  msg.set(UnderlyingPriceUnitOfMeasureQty_81);
  UnderlyingInstrument_81.insert(UnderlyingPriceUnitOfMeasureQty_81.getString());
  FIX::UnderlyingProduct UnderlyingProduct_81(249911122);
  msg.set(UnderlyingProduct_81);
  UnderlyingInstrument_81.insert(UnderlyingProduct_81.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_81(327621107);
  msg.set(UnderlyingPutOrCall_81);
  UnderlyingInstrument_81.insert(UnderlyingPutOrCall_81.getString());
  FIX::UnderlyingPx UnderlyingPx_81;
  UnderlyingPx_81.setString("3568609");
  msg.set(UnderlyingPx_81);
  UnderlyingInstrument_81.insert(UnderlyingPx_81.getString());
  FIX::UnderlyingQty UnderlyingQty_81;
  UnderlyingQty_81.setString("7153918");
  msg.set(UnderlyingQty_81);
  UnderlyingInstrument_81.insert(UnderlyingQty_81.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_81("LOCALMKTDATE_787171285");
  msg.set(UnderlyingRedemptionDate_81);
  UnderlyingInstrument_81.insert(UnderlyingRedemptionDate_81.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_81("STRING_2081486048");
  msg.set(UnderlyingRepoCollateralSecurityType_81);
  UnderlyingInstrument_81.insert(UnderlyingRepoCollateralSecurityType_81.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_81;
  UnderlyingRepurchaseRate_81.setString("39.640000");
  msg.set(UnderlyingRepurchaseRate_81);
  UnderlyingInstrument_81.insert(UnderlyingRepurchaseRate_81.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_81(792740846);
  msg.set(UnderlyingRepurchaseTerm_81);
  UnderlyingInstrument_81.insert(UnderlyingRepurchaseTerm_81.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_81("STRING_1099811844");
  msg.set(UnderlyingRestructuringType_81);
  UnderlyingInstrument_81.insert(UnderlyingRestructuringType_81.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_81("STRING_536497437");
  msg.set(UnderlyingSecurityDesc_81);
  UnderlyingInstrument_81.insert(UnderlyingSecurityDesc_81.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_81("EXCHANGE_344399547");
  msg.set(UnderlyingSecurityExchange_81);
  UnderlyingInstrument_81.insert(UnderlyingSecurityExchange_81.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_81("STRING_2137783523");
  msg.set(UnderlyingSecurityID_81);
  UnderlyingInstrument_81.insert(UnderlyingSecurityID_81.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_81("STRING_442702535");
  msg.set(UnderlyingSecurityIDSource_81);
  UnderlyingInstrument_81.insert(UnderlyingSecurityIDSource_81.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_81("STRING_605134566");
  msg.set(UnderlyingSecuritySubType_81);
  UnderlyingInstrument_81.insert(UnderlyingSecuritySubType_81.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_81("STRING_687356068");
  msg.set(UnderlyingSecurityType_81);
  UnderlyingInstrument_81.insert(UnderlyingSecurityType_81.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_81("STRING_1521610452");
  msg.set(UnderlyingSeniority_81);
  UnderlyingInstrument_81.insert(UnderlyingSeniority_81.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_81("STRING_1160146952");
  msg.set(UnderlyingSettlMethod_81);
  UnderlyingInstrument_81.insert(UnderlyingSettlMethod_81.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_81(2);
  msg.set(UnderlyingSettlementType_81);
  UnderlyingInstrument_81.insert(UnderlyingSettlementType_81.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_81;
  UnderlyingStartValue_81.setString("18685400");
  msg.set(UnderlyingStartValue_81);
  UnderlyingInstrument_81.insert(UnderlyingStartValue_81.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_81("STRING_1233429102");
  msg.set(UnderlyingStateOrProvinceOfIssue_81);
  UnderlyingInstrument_81.insert(UnderlyingStateOrProvinceOfIssue_81.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_81("CAN");
  msg.set(UnderlyingStrikeCurrency_81);
  UnderlyingInstrument_81.insert(UnderlyingStrikeCurrency_81.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_81;
  UnderlyingStrikePrice_81.setString("13315353");
  msg.set(UnderlyingStrikePrice_81);
  UnderlyingInstrument_81.insert(UnderlyingStrikePrice_81.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_81("STRING_1862548573");
  msg.set(UnderlyingSymbol_81);
  UnderlyingInstrument_81.insert(UnderlyingSymbol_81.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_81("STRING_1007247126");
  msg.set(UnderlyingSymbolSfx_81);
  UnderlyingInstrument_81.insert(UnderlyingSymbolSfx_81.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_81("STRING_58009583");
  msg.set(UnderlyingTimeUnit_81);
  UnderlyingInstrument_81.insert(UnderlyingTimeUnit_81.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_81("STRING_1880868071");
  msg.set(UnderlyingUnitOfMeasure_81);
  UnderlyingInstrument_81.insert(UnderlyingUnitOfMeasure_81.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_81;
  UnderlyingUnitOfMeasureQty_81.setString("12640046");
  msg.set(UnderlyingUnitOfMeasureQty_81);
  UnderlyingInstrument_81.insert(UnderlyingUnitOfMeasureQty_81.getString());
  all_values.push_back(UnderlyingInstrument_81);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_158;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_158("STRING_1431014604");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_158);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_158.insert(UnderlyingSecurityAltID_158.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_158("STRING_1438989862");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_158);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_158.insert(UnderlyingSecurityAltIDSource_158.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_158);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_159;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_159("STRING_1477083831");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_159);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_159.insert(UnderlyingSecurityAltID_159.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_159("STRING_1758635711");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_159);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_159.insert(UnderlyingSecurityAltIDSource_159.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_159);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_160;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_160("STRING_1795850856");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltID_160);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_160.insert(UnderlyingSecurityAltID_160.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_160("STRING_44992019");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltIDSource_160);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_160.insert(UnderlyingSecurityAltIDSource_160.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_160);

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_142;
    FIX::UnderlyingStipType UnderlyingStipType_142("STRING_1729853256");
    noUnderlyingStips_0_0.set(UnderlyingStipType_142);
    UnderlyingStipulations_NoUnderlyingStips_142.insert(UnderlyingStipType_142.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_142("STRING_1972715983");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_142);
    UnderlyingStipulations_NoUnderlyingStips_142.insert(UnderlyingStipValue_142.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_142);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_143;
    FIX::UnderlyingStipType UnderlyingStipType_143("STRING_1191064195");
    noUnderlyingStips_0_1.set(UnderlyingStipType_143);
    UnderlyingStipulations_NoUnderlyingStips_143.insert(UnderlyingStipType_143.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_143("STRING_682181452");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_143);
    UnderlyingStipulations_NoUnderlyingStips_143.insert(UnderlyingStipValue_143.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_143);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingStips noUnderlyingStips_0_2;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_144;
    FIX::UnderlyingStipType UnderlyingStipType_144("STRING_361729772");
    noUnderlyingStips_0_2.set(UnderlyingStipType_144);
    UnderlyingStipulations_NoUnderlyingStips_144.insert(UnderlyingStipType_144.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_144("STRING_1535463742");
    noUnderlyingStips_0_2.set(UnderlyingStipValue_144);
    UnderlyingStipulations_NoUnderlyingStips_144.insert(UnderlyingStipValue_144.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_144);

    msg.addGroup(noUnderlyingStips_0_2);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_173;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_173("STRING_804432307");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_173);
    UndlyInstrumentParties_NoUndlyInstrumentParties_173.insert(UnderlyingInstrumentPartyID_173.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_173('2');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_173);
    UndlyInstrumentParties_NoUndlyInstrumentParties_173.insert(UnderlyingInstrumentPartyIDSource_173.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_173(1359837396);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_173);
    UndlyInstrumentParties_NoUndlyInstrumentParties_173.insert(UnderlyingInstrumentPartyRole_173.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_173);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_335("STRING_1153261612");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_335);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335.insert(UnderlyingInstrumentPartySubID_335.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_335(1837547625);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_335);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335.insert(UnderlyingInstrumentPartySubIDType_335.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_174;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_174("STRING_2047099113");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_174);
    UndlyInstrumentParties_NoUndlyInstrumentParties_174.insert(UnderlyingInstrumentPartyID_174.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_174('2');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_174);
    UndlyInstrumentParties_NoUndlyInstrumentParties_174.insert(UnderlyingInstrumentPartyIDSource_174.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_174(1098532608);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_174);
    UndlyInstrumentParties_NoUndlyInstrumentParties_174.insert(UnderlyingInstrumentPartyRole_174.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_174);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_336("STRING_1570742411");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_336);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336.insert(UnderlyingInstrumentPartySubID_336.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_336(813597533);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_336);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336.insert(UnderlyingInstrumentPartySubIDType_336.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_175;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_175("STRING_1259495676");
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyID_175);
    UndlyInstrumentParties_NoUndlyInstrumentParties_175.insert(UnderlyingInstrumentPartyID_175.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_175('1');
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyIDSource_175);
    UndlyInstrumentParties_NoUndlyInstrumentParties_175.insert(UnderlyingInstrumentPartyIDSource_175.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_175(546981956);
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyRole_175);
    UndlyInstrumentParties_NoUndlyInstrumentParties_175.insert(UnderlyingInstrumentPartyRole_175.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_175);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_337("STRING_708441055");
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubID_337);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337.insert(UnderlyingInstrumentPartySubID_337.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_337(1977996561);
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubIDType_337);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337.insert(UnderlyingInstrumentPartySubIDType_337.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337);

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_338("STRING_1815006572");
      noUndlyInstrumentPartySubIDs_2_1_1.set(UnderlyingInstrumentPartySubID_338);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338.insert(UnderlyingInstrumentPartySubID_338.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_338(38041238);
      noUndlyInstrumentPartySubIDs_2_1_1.set(UnderlyingInstrumentPartySubIDType_338);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338.insert(UnderlyingInstrumentPartySubIDType_338.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338);

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_1);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
