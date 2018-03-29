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
  multiset<string> all_compo_names;
  multiset<string> OrderMassStatusRequest_0;
  FIX::Account Account_28("STRING_603137950");
  msg.set(Account_28);
  OrderMassStatusRequest_0.insert(Account_28.getString());
  FIX::AcctIDSource AcctIDSource_21(1);
  msg.set(AcctIDSource_21);
  OrderMassStatusRequest_0.insert(AcctIDSource_21.getString());
  FIX::MassStatusReqID MassStatusReqID_1("STRING_1556010696");
  msg.set(MassStatusReqID_1);
  OrderMassStatusRequest_0.insert(MassStatusReqID_1.getString());
  FIX::MassStatusReqType MassStatusReqType_0(7);
  msg.set(MassStatusReqType_0);
  OrderMassStatusRequest_0.insert(MassStatusReqType_0.getString());
  FIX::Side Side_39('3');
  msg.set(Side_39);
  OrderMassStatusRequest_0.insert(Side_39.getString());
  FIX::TradingSessionID TradingSessionID_74("STRING_3");
  msg.set(TradingSessionID_74);
  OrderMassStatusRequest_0.insert(TradingSessionID_74.getString());
  FIX::TradingSessionSubID TradingSessionSubID_74("STRING_2");
  msg.set(TradingSessionSubID_74);
  OrderMassStatusRequest_0.insert(TradingSessionSubID_74.getString());
  all_values.push_back(OrderMassStatusRequest_0);

  all_compo_names.insert("OrderMassStatusRequest");

  // Instrument
  multiset<string> Instrument_61;
  FIX::AttachmentPoint AttachmentPoint_61;
  AttachmentPoint_61.setString("19.230000");
  msg.set(AttachmentPoint_61);
  Instrument_61.insert(AttachmentPoint_61.getString());
  FIX::CFICode CFICode_61("STRING_439377837");
  msg.set(CFICode_61);
  Instrument_61.insert(CFICode_61.getString());
  FIX::CPProgram CPProgram_61(99);
  msg.set(CPProgram_61);
  Instrument_61.insert(CPProgram_61.getString());
  FIX::CPRegType CPRegType_61("STRING_1615562235");
  msg.set(CPRegType_61);
  Instrument_61.insert(CPRegType_61.getString());
  FIX::CapPrice CapPrice_61;
  CapPrice_61.setString("12533236");
  msg.set(CapPrice_61);
  Instrument_61.insert(CapPrice_61.getString());
  FIX::ContractMultiplier ContractMultiplier_61;
  ContractMultiplier_61.setString("12246165");
  msg.set(ContractMultiplier_61);
  Instrument_61.insert(ContractMultiplier_61.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_61(0);
  msg.set(ContractMultiplierUnit_61);
  Instrument_61.insert(ContractMultiplierUnit_61.getString());
  FIX::ContractSettlMonth ContractSettlMonth_61("MONTHYEAR_1413823745");
  msg.set(ContractSettlMonth_61);
  Instrument_61.insert(ContractSettlMonth_61.getString());
  FIX::CountryOfIssue CountryOfIssue_61("COUNTRY_924957528");
  msg.set(CountryOfIssue_61);
  Instrument_61.insert(CountryOfIssue_61.getString());
  FIX::CouponPaymentDate CouponPaymentDate_61("LOCALMKTDATE_415012827");
  msg.set(CouponPaymentDate_61);
  Instrument_61.insert(CouponPaymentDate_61.getString());
  FIX::CouponRate CouponRate_61;
  CouponRate_61.setString("83.770000");
  msg.set(CouponRate_61);
  Instrument_61.insert(CouponRate_61.getString());
  FIX::CreditRating CreditRating_61("STRING_336033404");
  msg.set(CreditRating_61);
  Instrument_61.insert(CreditRating_61.getString());
  FIX::DatedDate DatedDate_61("LOCALMKTDATE_1549316140");
  msg.set(DatedDate_61);
  Instrument_61.insert(DatedDate_61.getString());
  FIX::DetachmentPoint DetachmentPoint_61;
  DetachmentPoint_61.setString("14.430000");
  msg.set(DetachmentPoint_61);
  Instrument_61.insert(DetachmentPoint_61.getString());
  FIX::EncodedIssuer EncodedIssuer_61("DATA_74660889");
  msg.set(EncodedIssuer_61);
  Instrument_61.insert(EncodedIssuer_61.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_61(1717429972);
  msg.set(EncodedIssuerLen_61);
  Instrument_61.insert(EncodedIssuerLen_61.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_61("DATA_1538823713");
  msg.set(EncodedSecurityDesc_61);
  Instrument_61.insert(EncodedSecurityDesc_61.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_61(1590530835);
  msg.set(EncodedSecurityDescLen_61);
  Instrument_61.insert(EncodedSecurityDescLen_61.getString());
  FIX::ExerciseStyle ExerciseStyle_61(0);
  msg.set(ExerciseStyle_61);
  Instrument_61.insert(ExerciseStyle_61.getString());
  FIX::Factor Factor_61;
  Factor_61.setString("13850447");
  msg.set(Factor_61);
  Instrument_61.insert(Factor_61.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_61(true);
  msg.set(FlexProductEligibilityIndicator_61);
  Instrument_61.insert(FlexProductEligibilityIndicator_61.getString());
  FIX::FlexibleIndicator FlexibleIndicator_61(false);
  msg.set(FlexibleIndicator_61);
  Instrument_61.insert(FlexibleIndicator_61.getString());
  FIX::FloorPrice FloorPrice_61;
  FloorPrice_61.setString("1126844");
  msg.set(FloorPrice_61);
  Instrument_61.insert(FloorPrice_61.getString());
  FIX::FlowScheduleType FlowScheduleType_61(2);
  msg.set(FlowScheduleType_61);
  Instrument_61.insert(FlowScheduleType_61.getString());
  FIX::InstrRegistry InstrRegistry_61("STRING_655394933");
  msg.set(InstrRegistry_61);
  Instrument_61.insert(InstrRegistry_61.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_61('8');
  msg.set(InstrmtAssignmentMethod_61);
  Instrument_61.insert(InstrmtAssignmentMethod_61.getString());
  FIX::InterestAccrualDate InterestAccrualDate_61("LOCALMKTDATE_1705206183");
  msg.set(InterestAccrualDate_61);
  Instrument_61.insert(InterestAccrualDate_61.getString());
  FIX::IssueDate IssueDate_61("LOCALMKTDATE_2125883160");
  msg.set(IssueDate_61);
  Instrument_61.insert(IssueDate_61.getString());
  FIX::Issuer Issuer_61("STRING_1020820296");
  msg.set(Issuer_61);
  Instrument_61.insert(Issuer_61.getString());
  FIX::ListMethod ListMethod_61(0);
  msg.set(ListMethod_61);
  Instrument_61.insert(ListMethod_61.getString());
  FIX::LocaleOfIssue LocaleOfIssue_61("STRING_2011199646");
  msg.set(LocaleOfIssue_61);
  Instrument_61.insert(LocaleOfIssue_61.getString());
  FIX::MaturityDate MaturityDate_61("LOCALMKTDATE_1692732219");
  msg.set(MaturityDate_61);
  Instrument_61.insert(MaturityDate_61.getString());
  FIX::MaturityMonthYear MaturityMonthYear_61("MONTHYEAR_1302078115");
  msg.set(MaturityMonthYear_61);
  Instrument_61.insert(MaturityMonthYear_61.getString());
  FIX::MaturityTime MaturityTime_61("TZTIMEONLY_1071686388");
  msg.set(MaturityTime_61);
  Instrument_61.insert(MaturityTime_61.getString());
  FIX::MinPriceIncrement MinPriceIncrement_61;
  MinPriceIncrement_61.setString("11608108");
  msg.set(MinPriceIncrement_61);
  Instrument_61.insert(MinPriceIncrement_61.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_61;
  MinPriceIncrementAmount_61.setString("4079181");
  msg.set(MinPriceIncrementAmount_61);
  Instrument_61.insert(MinPriceIncrementAmount_61.getString());
  FIX::NTPositionLimit NTPositionLimit_61(148819316);
  msg.set(NTPositionLimit_61);
  Instrument_61.insert(NTPositionLimit_61.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_61;
  NotionalPercentageOutstanding_61.setString("23.600000");
  msg.set(NotionalPercentageOutstanding_61);
  Instrument_61.insert(NotionalPercentageOutstanding_61.getString());
  FIX::OptAttribute OptAttribute_61('1');
  msg.set(OptAttribute_61);
  Instrument_61.insert(OptAttribute_61.getString());
  FIX::OptPayoutAmount OptPayoutAmount_61;
  OptPayoutAmount_61.setString("10737768");
  msg.set(OptPayoutAmount_61);
  Instrument_61.insert(OptPayoutAmount_61.getString());
  FIX::OptPayoutType OptPayoutType_61(1);
  msg.set(OptPayoutType_61);
  Instrument_61.insert(OptPayoutType_61.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_61;
  OriginalNotionalPercentageOutstanding_61.setString("65.840000");
  msg.set(OriginalNotionalPercentageOutstanding_61);
  Instrument_61.insert(OriginalNotionalPercentageOutstanding_61.getString());
  FIX::Pool Pool_61("STRING_1409810249");
  msg.set(Pool_61);
  Instrument_61.insert(Pool_61.getString());
  FIX::PositionLimit PositionLimit_61(1750527680);
  msg.set(PositionLimit_61);
  Instrument_61.insert(PositionLimit_61.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_61("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_61);
  Instrument_61.insert(PriceQuoteMethod_61.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_61("STRING_1484471138");
  msg.set(PriceUnitOfMeasure_61);
  Instrument_61.insert(PriceUnitOfMeasure_61.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_61;
  PriceUnitOfMeasureQty_61.setString("13204740");
  msg.set(PriceUnitOfMeasureQty_61);
  Instrument_61.insert(PriceUnitOfMeasureQty_61.getString());
  FIX::Product Product_63(3);
  msg.set(Product_63);
  Instrument_61.insert(Product_63.getString());
  FIX::ProductComplex ProductComplex_61("STRING_927518326");
  msg.set(ProductComplex_61);
  Instrument_61.insert(ProductComplex_61.getString());
  FIX::PutOrCall PutOrCall_61(0);
  msg.set(PutOrCall_61);
  Instrument_61.insert(PutOrCall_61.getString());
  FIX::RedemptionDate RedemptionDate_61("LOCALMKTDATE_814629188");
  msg.set(RedemptionDate_61);
  Instrument_61.insert(RedemptionDate_61.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_61("STRING_2043220164");
  msg.set(RepoCollateralSecurityType_61);
  Instrument_61.insert(RepoCollateralSecurityType_61.getString());
  FIX::RepurchaseRate RepurchaseRate_61;
  RepurchaseRate_61.setString("65.690000");
  msg.set(RepurchaseRate_61);
  Instrument_61.insert(RepurchaseRate_61.getString());
  FIX::RepurchaseTerm RepurchaseTerm_61(927313590);
  msg.set(RepurchaseTerm_61);
  Instrument_61.insert(RepurchaseTerm_61.getString());
  FIX::RestructuringType RestructuringType_61("STRING_XR");
  msg.set(RestructuringType_61);
  Instrument_61.insert(RestructuringType_61.getString());
  FIX::SecurityDesc SecurityDesc_61("STRING_392907855");
  msg.set(SecurityDesc_61);
  Instrument_61.insert(SecurityDesc_61.getString());
  FIX::SecurityExchange SecurityExchange_61("EXCHANGE_1779467452");
  msg.set(SecurityExchange_61);
  Instrument_61.insert(SecurityExchange_61.getString());
  FIX::SecurityGroup SecurityGroup_61("STRING_1750138187");
  msg.set(SecurityGroup_61);
  Instrument_61.insert(SecurityGroup_61.getString());
  FIX::SecurityID SecurityID_61("STRING_371307367");
  msg.set(SecurityID_61);
  Instrument_61.insert(SecurityID_61.getString());
  FIX::SecurityIDSource SecurityIDSource_61("STRING_F");
  msg.set(SecurityIDSource_61);
  Instrument_61.insert(SecurityIDSource_61.getString());
  FIX::SecurityStatus SecurityStatus_61("STRING_2");
  msg.set(SecurityStatus_61);
  Instrument_61.insert(SecurityStatus_61.getString());
  FIX::SecuritySubType SecuritySubType_62("STRING_235023365");
  msg.set(SecuritySubType_62);
  Instrument_61.insert(SecuritySubType_62.getString());
  FIX::SecurityType SecurityType_63("STRING_MATURED");
  msg.set(SecurityType_63);
  Instrument_61.insert(SecurityType_63.getString());
  FIX::Seniority Seniority_61("STRING_SB");
  msg.set(Seniority_61);
  Instrument_61.insert(Seniority_61.getString());
  FIX::SettlMethod SettlMethod_61('C');
  msg.set(SettlMethod_61);
  Instrument_61.insert(SettlMethod_61.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_61("STRING_1358863478");
  msg.set(SettleOnOpenFlag_61);
  Instrument_61.insert(SettleOnOpenFlag_61.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_61("STRING_27867394");
  msg.set(StateOrProvinceOfIssue_61);
  Instrument_61.insert(StateOrProvinceOfIssue_61.getString());
  FIX::StrikeCurrency StrikeCurrency_61("CHF");
  msg.set(StrikeCurrency_61);
  Instrument_61.insert(StrikeCurrency_61.getString());
  FIX::StrikeMultiplier StrikeMultiplier_61;
  StrikeMultiplier_61.setString("18496092");
  msg.set(StrikeMultiplier_61);
  Instrument_61.insert(StrikeMultiplier_61.getString());
  FIX::StrikePrice StrikePrice_61;
  StrikePrice_61.setString("3818222");
  msg.set(StrikePrice_61);
  Instrument_61.insert(StrikePrice_61.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_61(1);
  msg.set(StrikePriceBoundaryMethod_61);
  Instrument_61.insert(StrikePriceBoundaryMethod_61.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_61;
  StrikePriceBoundaryPrecision_61.setString("21.860000");
  msg.set(StrikePriceBoundaryPrecision_61);
  Instrument_61.insert(StrikePriceBoundaryPrecision_61.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_61(1);
  msg.set(StrikePriceDeterminationMethod_61);
  Instrument_61.insert(StrikePriceDeterminationMethod_61.getString());
  FIX::StrikeValue StrikeValue_61;
  StrikeValue_61.setString("9493177");
  msg.set(StrikeValue_61);
  Instrument_61.insert(StrikeValue_61.getString());
  FIX::Symbol Symbol_61("STRING_1439346566");
  msg.set(Symbol_61);
  Instrument_61.insert(Symbol_61.getString());
  FIX::SymbolSfx SymbolSfx_61("STRING_WI");
  msg.set(SymbolSfx_61);
  Instrument_61.insert(SymbolSfx_61.getString());
  FIX::TimeUnit TimeUnit_61("STRING_S");
  msg.set(TimeUnit_61);
  Instrument_61.insert(TimeUnit_61.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_61(3);
  msg.set(UnderlyingPriceDeterminationMethod_61);
  Instrument_61.insert(UnderlyingPriceDeterminationMethod_61.getString());
  FIX::UnitOfMeasure UnitOfMeasure_61("STRING_MMBtu");
  msg.set(UnitOfMeasure_61);
  Instrument_61.insert(UnitOfMeasure_61.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_61;
  UnitOfMeasureQty_61.setString("19550477");
  msg.set(UnitOfMeasureQty_61);
  Instrument_61.insert(UnitOfMeasureQty_61.getString());
  FIX::ValuationMethod ValuationMethod_61("STRING_CDS");
  msg.set(ValuationMethod_61);
  Instrument_61.insert(ValuationMethod_61.getString());
  all_values.push_back(Instrument_61);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_124;
    FIX::ComplexEventCondition ComplexEventCondition_124(1);
    noComplexEvents_0_0.set(ComplexEventCondition_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventCondition_124.getString());
    FIX::ComplexEventPrice ComplexEventPrice_124;
    ComplexEventPrice_124.setString("4633901");
    noComplexEvents_0_0.set(ComplexEventPrice_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventPrice_124.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_124(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventPriceBoundaryMethod_124.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_124;
    ComplexEventPriceBoundaryPrecision_124.setString("84.810000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventPriceBoundaryPrecision_124.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_124(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventPriceTimeType_124.getString());
    FIX::ComplexEventType ComplexEventType_124(5);
    noComplexEvents_0_0.set(ComplexEventType_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventType_124.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_124;
    ComplexOptPayoutAmount_124.setString("3092922");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexOptPayoutAmount_124.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_124);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_252;
      FIX::ComplexEventEndDate ComplexEventEndDate_252(FIX::UTCTIMESTAMP(5, 56, 53, 3, 3, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_252);
      ComplexEventDates_NoComplexEventDates_252.insert(ComplexEventEndDate_252.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_252(FIX::UTCTIMESTAMP(17, 10, 9, 12, 9, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_252);
      ComplexEventDates_NoComplexEventDates_252.insert(ComplexEventStartDate_252.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_252);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_516;
        FIX::ComplexEventEndTime ComplexEventEndTime_516(FIX::UTCTIMEONLY(5, 1, 57));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_516);
        ComplexEventTimes_NoComplexEventTimes_516.insert(ComplexEventEndTime_516.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_516(FIX::UTCTIMEONLY(5, 27, 51));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_516);
        ComplexEventTimes_NoComplexEventTimes_516.insert(ComplexEventStartTime_516.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_516);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_517;
        FIX::ComplexEventEndTime ComplexEventEndTime_517(FIX::UTCTIMEONLY(16, 56, 48));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_517);
        ComplexEventTimes_NoComplexEventTimes_517.insert(ComplexEventEndTime_517.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_517(FIX::UTCTIMEONLY(16, 48, 17));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_517);
        ComplexEventTimes_NoComplexEventTimes_517.insert(ComplexEventStartTime_517.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_517);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_253;
      FIX::ComplexEventEndDate ComplexEventEndDate_253(FIX::UTCTIMESTAMP(6, 5, 47, 1, 8, 2001));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_253);
      ComplexEventDates_NoComplexEventDates_253.insert(ComplexEventEndDate_253.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_253(FIX::UTCTIMESTAMP(13, 17, 29, 9, 6, 2001));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_253);
      ComplexEventDates_NoComplexEventDates_253.insert(ComplexEventStartDate_253.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_253);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_518;
        FIX::ComplexEventEndTime ComplexEventEndTime_518(FIX::UTCTIMEONLY(0, 36, 41));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_518);
        ComplexEventTimes_NoComplexEventTimes_518.insert(ComplexEventEndTime_518.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_518(FIX::UTCTIMEONLY(10, 8, 41));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_518);
        ComplexEventTimes_NoComplexEventTimes_518.insert(ComplexEventStartTime_518.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_518);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_519;
        FIX::ComplexEventEndTime ComplexEventEndTime_519(FIX::UTCTIMEONLY(16, 30, 22));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_519);
        ComplexEventTimes_NoComplexEventTimes_519.insert(ComplexEventEndTime_519.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_519(FIX::UTCTIMEONLY(14, 10, 50));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_519);
        ComplexEventTimes_NoComplexEventTimes_519.insert(ComplexEventStartTime_519.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_519);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_125;
    FIX::ComplexEventCondition ComplexEventCondition_125(1);
    noComplexEvents_0_1.set(ComplexEventCondition_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventCondition_125.getString());
    FIX::ComplexEventPrice ComplexEventPrice_125;
    ComplexEventPrice_125.setString("7795600");
    noComplexEvents_0_1.set(ComplexEventPrice_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventPrice_125.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_125(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventPriceBoundaryMethod_125.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_125;
    ComplexEventPriceBoundaryPrecision_125.setString("44.310000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventPriceBoundaryPrecision_125.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_125(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventPriceTimeType_125.getString());
    FIX::ComplexEventType ComplexEventType_125(6);
    noComplexEvents_0_1.set(ComplexEventType_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventType_125.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_125;
    ComplexOptPayoutAmount_125.setString("2684631");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexOptPayoutAmount_125.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_125);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_254;
      FIX::ComplexEventEndDate ComplexEventEndDate_254(FIX::UTCTIMESTAMP(7, 14, 28, 24, 10, 2016));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_254);
      ComplexEventDates_NoComplexEventDates_254.insert(ComplexEventEndDate_254.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_254(FIX::UTCTIMESTAMP(1, 32, 41, 7, 7, 2000));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_254);
      ComplexEventDates_NoComplexEventDates_254.insert(ComplexEventStartDate_254.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_254);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_520;
        FIX::ComplexEventEndTime ComplexEventEndTime_520(FIX::UTCTIMEONLY(10, 3, 22));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_520);
        ComplexEventTimes_NoComplexEventTimes_520.insert(ComplexEventEndTime_520.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_520(FIX::UTCTIMEONLY(5, 24, 33));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_520);
        ComplexEventTimes_NoComplexEventTimes_520.insert(ComplexEventStartTime_520.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_520);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_255;
      FIX::ComplexEventEndDate ComplexEventEndDate_255(FIX::UTCTIMESTAMP(21, 28, 44, 11, 12, 2016));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_255);
      ComplexEventDates_NoComplexEventDates_255.insert(ComplexEventEndDate_255.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_255(FIX::UTCTIMESTAMP(10, 33, 55, 15, 3, 2010));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_255);
      ComplexEventDates_NoComplexEventDates_255.insert(ComplexEventStartDate_255.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_255);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_521;
        FIX::ComplexEventEndTime ComplexEventEndTime_521(FIX::UTCTIMEONLY(22, 43, 24));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_521);
        ComplexEventTimes_NoComplexEventTimes_521.insert(ComplexEventEndTime_521.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_521(FIX::UTCTIMEONLY(6, 6, 46));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_521);
        ComplexEventTimes_NoComplexEventTimes_521.insert(ComplexEventStartTime_521.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_521);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_522;
        FIX::ComplexEventEndTime ComplexEventEndTime_522(FIX::UTCTIMEONLY(8, 49, 8));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_522);
        ComplexEventTimes_NoComplexEventTimes_522.insert(ComplexEventEndTime_522.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_522(FIX::UTCTIMEONLY(23, 24, 25));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_522);
        ComplexEventTimes_NoComplexEventTimes_522.insert(ComplexEventStartTime_522.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_522);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_523;
        FIX::ComplexEventEndTime ComplexEventEndTime_523(FIX::UTCTIMEONLY(1, 54, 25));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_523);
        ComplexEventTimes_NoComplexEventTimes_523.insert(ComplexEventEndTime_523.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_523(FIX::UTCTIMEONLY(9, 59, 5));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_523);
        ComplexEventTimes_NoComplexEventTimes_523.insert(ComplexEventStartTime_523.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_523);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_256;
      FIX::ComplexEventEndDate ComplexEventEndDate_256(FIX::UTCTIMESTAMP(21, 0, 26, 27, 9, 2013));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_256);
      ComplexEventDates_NoComplexEventDates_256.insert(ComplexEventEndDate_256.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_256(FIX::UTCTIMESTAMP(6, 13, 29, 24, 8, 2015));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_256);
      ComplexEventDates_NoComplexEventDates_256.insert(ComplexEventStartDate_256.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_256);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_524;
        FIX::ComplexEventEndTime ComplexEventEndTime_524(FIX::UTCTIMEONLY(0, 24, 53));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_524);
        ComplexEventTimes_NoComplexEventTimes_524.insert(ComplexEventEndTime_524.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_524(FIX::UTCTIMEONLY(11, 17, 53));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_524);
        ComplexEventTimes_NoComplexEventTimes_524.insert(ComplexEventStartTime_524.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_524);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_126;
    FIX::ComplexEventCondition ComplexEventCondition_126(2);
    noComplexEvents_0_2.set(ComplexEventCondition_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventCondition_126.getString());
    FIX::ComplexEventPrice ComplexEventPrice_126;
    ComplexEventPrice_126.setString("6212720");
    noComplexEvents_0_2.set(ComplexEventPrice_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventPrice_126.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_126(5);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventPriceBoundaryMethod_126.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_126;
    ComplexEventPriceBoundaryPrecision_126.setString("43.360000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventPriceBoundaryPrecision_126.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_126(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventPriceTimeType_126.getString());
    FIX::ComplexEventType ComplexEventType_126(1);
    noComplexEvents_0_2.set(ComplexEventType_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventType_126.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_126;
    ComplexOptPayoutAmount_126.setString("989817");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexOptPayoutAmount_126.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_126);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_257;
      FIX::ComplexEventEndDate ComplexEventEndDate_257(FIX::UTCTIMESTAMP(17, 8, 50, 8, 10, 2002));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_257);
      ComplexEventDates_NoComplexEventDates_257.insert(ComplexEventEndDate_257.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_257(FIX::UTCTIMESTAMP(19, 33, 15, 11, 5, 2016));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_257);
      ComplexEventDates_NoComplexEventDates_257.insert(ComplexEventStartDate_257.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_257);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_525;
        FIX::ComplexEventEndTime ComplexEventEndTime_525(FIX::UTCTIMEONLY(10, 50, 18));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_525);
        ComplexEventTimes_NoComplexEventTimes_525.insert(ComplexEventEndTime_525.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_525(FIX::UTCTIMEONLY(5, 27, 16));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_525);
        ComplexEventTimes_NoComplexEventTimes_525.insert(ComplexEventStartTime_525.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_525);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_526;
        FIX::ComplexEventEndTime ComplexEventEndTime_526(FIX::UTCTIMEONLY(2, 55, 45));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_526);
        ComplexEventTimes_NoComplexEventTimes_526.insert(ComplexEventEndTime_526.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_526(FIX::UTCTIMEONLY(0, 53, 26));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_526);
        ComplexEventTimes_NoComplexEventTimes_526.insert(ComplexEventStartTime_526.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_526);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_527;
        FIX::ComplexEventEndTime ComplexEventEndTime_527(FIX::UTCTIMEONLY(10, 27, 6));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_527);
        ComplexEventTimes_NoComplexEventTimes_527.insert(ComplexEventEndTime_527.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_527(FIX::UTCTIMEONLY(4, 26, 7));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_527);
        ComplexEventTimes_NoComplexEventTimes_527.insert(ComplexEventStartTime_527.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_527);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_258;
      FIX::ComplexEventEndDate ComplexEventEndDate_258(FIX::UTCTIMESTAMP(23, 22, 19, 7, 2, 2003));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_258);
      ComplexEventDates_NoComplexEventDates_258.insert(ComplexEventEndDate_258.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_258(FIX::UTCTIMESTAMP(15, 27, 6, 6, 1, 2002));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_258);
      ComplexEventDates_NoComplexEventDates_258.insert(ComplexEventStartDate_258.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_258);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_528;
        FIX::ComplexEventEndTime ComplexEventEndTime_528(FIX::UTCTIMEONLY(20, 25, 25));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_528);
        ComplexEventTimes_NoComplexEventTimes_528.insert(ComplexEventEndTime_528.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_528(FIX::UTCTIMEONLY(5, 18, 9));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_528);
        ComplexEventTimes_NoComplexEventTimes_528.insert(ComplexEventStartTime_528.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_528);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_259;
      FIX::ComplexEventEndDate ComplexEventEndDate_259(FIX::UTCTIMESTAMP(20, 28, 40, 6, 9, 2012));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_259);
      ComplexEventDates_NoComplexEventDates_259.insert(ComplexEventEndDate_259.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_259(FIX::UTCTIMESTAMP(19, 58, 20, 22, 6, 2009));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_259);
      ComplexEventDates_NoComplexEventDates_259.insert(ComplexEventStartDate_259.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_259);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_529;
        FIX::ComplexEventEndTime ComplexEventEndTime_529(FIX::UTCTIMEONLY(1, 6, 16));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_529);
        ComplexEventTimes_NoComplexEventTimes_529.insert(ComplexEventEndTime_529.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_529(FIX::UTCTIMEONLY(10, 42, 45));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_529);
        ComplexEventTimes_NoComplexEventTimes_529.insert(ComplexEventStartTime_529.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_529);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_118;
    FIX::EventDate EventDate_118("LOCALMKTDATE_745689427");
    noEvents_0_0.set(EventDate_118);
    EvntGrp_NoEvents_118.insert(EventDate_118.getString());
    FIX::EventPx EventPx_118;
    EventPx_118.setString("12266760");
    noEvents_0_0.set(EventPx_118);
    EvntGrp_NoEvents_118.insert(EventPx_118.getString());
    FIX::EventText EventText_118("STRING_703024816");
    noEvents_0_0.set(EventText_118);
    EvntGrp_NoEvents_118.insert(EventText_118.getString());
    FIX::EventTime EventTime_118(FIX::UTCTIMESTAMP(0, 35, 58, 21, 8, 2002));
    noEvents_0_0.set(EventTime_118);
    EvntGrp_NoEvents_118.insert(EventTime_118.getString());
    FIX::EventType EventType_118(18);
    noEvents_0_0.set(EventType_118);
    EvntGrp_NoEvents_118.insert(EventType_118.getString());
    all_values.push_back(EvntGrp_NoEvents_118);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_125;
    FIX::InstrumentPartyID InstrumentPartyID_125("STRING_236354126");
    noInstrumentParties_0_0.set(InstrumentPartyID_125);
    InstrumentParties_NoInstrumentParties_125.insert(InstrumentPartyID_125.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_125('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_125);
    InstrumentParties_NoInstrumentParties_125.insert(InstrumentPartyIDSource_125.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_125(1437454996);
    noInstrumentParties_0_0.set(InstrumentPartyRole_125);
    InstrumentParties_NoInstrumentParties_125.insert(InstrumentPartyRole_125.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_125);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235;
      FIX::InstrumentPartySubID InstrumentPartySubID_235("STRING_756377414");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_235);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235.insert(InstrumentPartySubID_235.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_235(479096128);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_235);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235.insert(InstrumentPartySubIDType_235.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236;
      FIX::InstrumentPartySubID InstrumentPartySubID_236("STRING_116901784");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_236);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236.insert(InstrumentPartySubID_236.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_236(536669435);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_236);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236.insert(InstrumentPartySubIDType_236.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_126;
    FIX::InstrumentPartyID InstrumentPartyID_126("STRING_2101981538");
    noInstrumentParties_0_1.set(InstrumentPartyID_126);
    InstrumentParties_NoInstrumentParties_126.insert(InstrumentPartyID_126.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_126('5');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_126);
    InstrumentParties_NoInstrumentParties_126.insert(InstrumentPartyIDSource_126.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_126(198025365);
    noInstrumentParties_0_1.set(InstrumentPartyRole_126);
    InstrumentParties_NoInstrumentParties_126.insert(InstrumentPartyRole_126.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_126);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237;
      FIX::InstrumentPartySubID InstrumentPartySubID_237("STRING_72337002");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_237);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237.insert(InstrumentPartySubID_237.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_237(1421639282);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_237);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237.insert(InstrumentPartySubIDType_237.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238;
      FIX::InstrumentPartySubID InstrumentPartySubID_238("STRING_848816498");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_238);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238.insert(InstrumentPartySubID_238.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_238(597545333);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_238);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238.insert(InstrumentPartySubIDType_238.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_115;
    FIX::SecurityAltID SecurityAltID_115("STRING_2124753863");
    noSecurityAltID_0_0.set(SecurityAltID_115);
    SecAltIDGrp_NoSecurityAltID_115.insert(SecurityAltID_115.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_115("STRING_1034802644");
    noSecurityAltID_0_0.set(SecurityAltIDSource_115);
    SecAltIDGrp_NoSecurityAltID_115.insert(SecurityAltIDSource_115.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_115);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_122;
  FIX::SecurityXML SecurityXML_123("XMLDATA_2113640683");
  msg.set(SecurityXML_123);
  FIX::SecurityXMLLen SecurityXMLLen_61(1203946217);
  msg.set(SecurityXMLLen_61);
  FIX::SecurityXMLSchema SecurityXMLSchema_61("STRING_1737827460");
  msg.set(SecurityXMLSchema_61);
  SecurityXML_122.insert(SecurityXMLSchema_61.getString());
  all_values.push_back(SecurityXML_122);
  all_compo_names.insert("SecurityXML");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_92;
    FIX::PartyID PartyID_92("STRING_1754513849");
    noPartyIDs_0_0.set(PartyID_92);
    Parties_NoPartyIDs_92.insert(PartyID_92.getString());
    FIX::PartyIDSource PartyIDSource_92('5');
    noPartyIDs_0_0.set(PartyIDSource_92);
    Parties_NoPartyIDs_92.insert(PartyIDSource_92.getString());
    FIX::PartyRole PartyRole_92(77);
    noPartyIDs_0_0.set(PartyRole_92);
    Parties_NoPartyIDs_92.insert(PartyRole_92.getString());
    all_values.push_back(Parties_NoPartyIDs_92);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_204;
      FIX::PartySubID PartySubID_204("STRING_936137919");
      noPartySubIDs_0_1_0.set(PartySubID_204);
      PtysSubGrp_NoPartySubIDs_204.insert(PartySubID_204.getString());
      FIX::PartySubIDType PartySubIDType_204(23);
      noPartySubIDs_0_1_0.set(PartySubIDType_204);
      PtysSubGrp_NoPartySubIDs_204.insert(PartySubIDType_204.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_204);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_205;
      FIX::PartySubID PartySubID_205("STRING_1833952764");
      noPartySubIDs_0_1_1.set(PartySubID_205);
      PtysSubGrp_NoPartySubIDs_205.insert(PartySubID_205.getString());
      FIX::PartySubIDType PartySubIDType_205(14);
      noPartySubIDs_0_1_1.set(PartySubIDType_205);
      PtysSubGrp_NoPartySubIDs_205.insert(PartySubIDType_205.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_205);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_93;
    FIX::PartyID PartyID_93("STRING_600822120");
    noPartyIDs_0_1.set(PartyID_93);
    Parties_NoPartyIDs_93.insert(PartyID_93.getString());
    FIX::PartyIDSource PartyIDSource_93('G');
    noPartyIDs_0_1.set(PartyIDSource_93);
    Parties_NoPartyIDs_93.insert(PartyIDSource_93.getString());
    FIX::PartyRole PartyRole_93(35);
    noPartyIDs_0_1.set(PartyRole_93);
    Parties_NoPartyIDs_93.insert(PartyRole_93.getString());
    all_values.push_back(Parties_NoPartyIDs_93);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_206;
      FIX::PartySubID PartySubID_206("STRING_478677046");
      noPartySubIDs_1_1_0.set(PartySubID_206);
      PtysSubGrp_NoPartySubIDs_206.insert(PartySubID_206.getString());
      FIX::PartySubIDType PartySubIDType_206(5);
      noPartySubIDs_1_1_0.set(PartySubIDType_206);
      PtysSubGrp_NoPartySubIDs_206.insert(PartySubIDType_206.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_206);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_207;
      FIX::PartySubID PartySubID_207("STRING_1823421435");
      noPartySubIDs_1_1_1.set(PartySubID_207);
      PtysSubGrp_NoPartySubIDs_207.insert(PartySubID_207.getString());
      FIX::PartySubIDType PartySubIDType_207(8);
      noPartySubIDs_1_1_1.set(PartySubIDType_207);
      PtysSubGrp_NoPartySubIDs_207.insert(PartySubIDType_207.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_207);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_13;
    FIX::TargetPartyID TargetPartyID_13("STRING_198181251");
    noTargetPartyIDs_0_0.set(TargetPartyID_13);
    TargetParties_NoTargetPartyIDs_13.insert(TargetPartyID_13.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_13('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_13);
    TargetParties_NoTargetPartyIDs_13.insert(TargetPartyIDSource_13.getString());
    FIX::TargetPartyRole TargetPartyRole_13(559128738);
    noTargetPartyIDs_0_0.set(TargetPartyRole_13);
    TargetParties_NoTargetPartyIDs_13.insert(TargetPartyRole_13.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_13);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_14;
    FIX::TargetPartyID TargetPartyID_14("STRING_270518253");
    noTargetPartyIDs_0_1.set(TargetPartyID_14);
    TargetParties_NoTargetPartyIDs_14.insert(TargetPartyID_14.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_14('4');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_14);
    TargetParties_NoTargetPartyIDs_14.insert(TargetPartyIDSource_14.getString());
    FIX::TargetPartyRole TargetPartyRole_14(1407945236);
    noTargetPartyIDs_0_1.set(TargetPartyRole_14);
    TargetParties_NoTargetPartyIDs_14.insert(TargetPartyRole_14.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_14);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_85;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_85("DATA_868063586");
  msg.set(EncodedUnderlyingIssuer_85);
  UnderlyingInstrument_85.insert(EncodedUnderlyingIssuer_85.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_85(1855478738);
  msg.set(EncodedUnderlyingIssuerLen_85);
  UnderlyingInstrument_85.insert(EncodedUnderlyingIssuerLen_85.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_85("DATA_1385215451");
  msg.set(EncodedUnderlyingSecurityDesc_85);
  UnderlyingInstrument_85.insert(EncodedUnderlyingSecurityDesc_85.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_85(1902866230);
  msg.set(EncodedUnderlyingSecurityDescLen_85);
  UnderlyingInstrument_85.insert(EncodedUnderlyingSecurityDescLen_85.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_85;
  UnderlyingAdjustedQuantity_85.setString("18216357");
  msg.set(UnderlyingAdjustedQuantity_85);
  UnderlyingInstrument_85.insert(UnderlyingAdjustedQuantity_85.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_85;
  UnderlyingAllocationPercent_85.setString("80.210000");
  msg.set(UnderlyingAllocationPercent_85);
  UnderlyingInstrument_85.insert(UnderlyingAllocationPercent_85.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_85;
  UnderlyingAttachmentPoint_85.setString("0.430000");
  msg.set(UnderlyingAttachmentPoint_85);
  UnderlyingInstrument_85.insert(UnderlyingAttachmentPoint_85.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_85("STRING_273596370");
  msg.set(UnderlyingCFICode_85);
  UnderlyingInstrument_85.insert(UnderlyingCFICode_85.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_85("STRING_48708222");
  msg.set(UnderlyingCPProgram_85);
  UnderlyingInstrument_85.insert(UnderlyingCPProgram_85.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_85("STRING_357562762");
  msg.set(UnderlyingCPRegType_85);
  UnderlyingInstrument_85.insert(UnderlyingCPRegType_85.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_85;
  UnderlyingCapValue_85.setString("6499756");
  msg.set(UnderlyingCapValue_85);
  UnderlyingInstrument_85.insert(UnderlyingCapValue_85.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_85;
  UnderlyingCashAmount_85.setString("12302530");
  msg.set(UnderlyingCashAmount_85);
  UnderlyingInstrument_85.insert(UnderlyingCashAmount_85.getString());
  FIX::UnderlyingCashType UnderlyingCashType_85("STRING_DIFF");
  msg.set(UnderlyingCashType_85);
  UnderlyingInstrument_85.insert(UnderlyingCashType_85.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_85;
  UnderlyingContractMultiplier_85.setString("10144436");
  msg.set(UnderlyingContractMultiplier_85);
  UnderlyingInstrument_85.insert(UnderlyingContractMultiplier_85.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_85(916722126);
  msg.set(UnderlyingContractMultiplierUnit_85);
  UnderlyingInstrument_85.insert(UnderlyingContractMultiplierUnit_85.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_85("COUNTRY_312921882");
  msg.set(UnderlyingCountryOfIssue_85);
  UnderlyingInstrument_85.insert(UnderlyingCountryOfIssue_85.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_85("LOCALMKTDATE_1615265780");
  msg.set(UnderlyingCouponPaymentDate_85);
  UnderlyingInstrument_85.insert(UnderlyingCouponPaymentDate_85.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_85;
  UnderlyingCouponRate_85.setString("17.580000");
  msg.set(UnderlyingCouponRate_85);
  UnderlyingInstrument_85.insert(UnderlyingCouponRate_85.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_85("STRING_769598079");
  msg.set(UnderlyingCreditRating_85);
  UnderlyingInstrument_85.insert(UnderlyingCreditRating_85.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_85("EUR");
  msg.set(UnderlyingCurrency_85);
  UnderlyingInstrument_85.insert(UnderlyingCurrency_85.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_85;
  UnderlyingCurrentValue_85.setString("17053704");
  msg.set(UnderlyingCurrentValue_85);
  UnderlyingInstrument_85.insert(UnderlyingCurrentValue_85.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_85;
  UnderlyingDetachmentPoint_85.setString("95.700000");
  msg.set(UnderlyingDetachmentPoint_85);
  UnderlyingInstrument_85.insert(UnderlyingDetachmentPoint_85.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_85;
  UnderlyingDirtyPrice_85.setString("21330452");
  msg.set(UnderlyingDirtyPrice_85);
  UnderlyingInstrument_85.insert(UnderlyingDirtyPrice_85.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_85;
  UnderlyingEndPrice_85.setString("4481569");
  msg.set(UnderlyingEndPrice_85);
  UnderlyingInstrument_85.insert(UnderlyingEndPrice_85.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_85;
  UnderlyingEndValue_85.setString("10484208");
  msg.set(UnderlyingEndValue_85);
  UnderlyingInstrument_85.insert(UnderlyingEndValue_85.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_85(1198933486);
  msg.set(UnderlyingExerciseStyle_85);
  UnderlyingInstrument_85.insert(UnderlyingExerciseStyle_85.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_85;
  UnderlyingFXRate_85.setString("10072857");
  msg.set(UnderlyingFXRate_85);
  UnderlyingInstrument_85.insert(UnderlyingFXRate_85.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_85('D');
  msg.set(UnderlyingFXRateCalc_85);
  UnderlyingInstrument_85.insert(UnderlyingFXRateCalc_85.getString());
  FIX::UnderlyingFactor UnderlyingFactor_85;
  UnderlyingFactor_85.setString("16864609");
  msg.set(UnderlyingFactor_85);
  UnderlyingInstrument_85.insert(UnderlyingFactor_85.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_85(267747299);
  msg.set(UnderlyingFlowScheduleType_85);
  UnderlyingInstrument_85.insert(UnderlyingFlowScheduleType_85.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_85("STRING_39519013");
  msg.set(UnderlyingInstrRegistry_85);
  UnderlyingInstrument_85.insert(UnderlyingInstrRegistry_85.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_85("LOCALMKTDATE_1394456058");
  msg.set(UnderlyingIssueDate_85);
  UnderlyingInstrument_85.insert(UnderlyingIssueDate_85.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_85("STRING_1652962751");
  msg.set(UnderlyingIssuer_85);
  UnderlyingInstrument_85.insert(UnderlyingIssuer_85.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_85("STRING_1942385243");
  msg.set(UnderlyingLocaleOfIssue_85);
  UnderlyingInstrument_85.insert(UnderlyingLocaleOfIssue_85.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_85("LOCALMKTDATE_1068608183");
  msg.set(UnderlyingMaturityDate_85);
  UnderlyingInstrument_85.insert(UnderlyingMaturityDate_85.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_85("MONTHYEAR_2094640772");
  msg.set(UnderlyingMaturityMonthYear_85);
  UnderlyingInstrument_85.insert(UnderlyingMaturityMonthYear_85.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_85("TZTIMEONLY_1288111638");
  msg.set(UnderlyingMaturityTime_85);
  UnderlyingInstrument_85.insert(UnderlyingMaturityTime_85.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_85;
  UnderlyingNotionalPercentageOutstanding_85.setString("45.540000");
  msg.set(UnderlyingNotionalPercentageOutstanding_85);
  UnderlyingInstrument_85.insert(UnderlyingNotionalPercentageOutstanding_85.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_85('2');
  msg.set(UnderlyingOptAttribute_85);
  UnderlyingInstrument_85.insert(UnderlyingOptAttribute_85.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_85;
  UnderlyingOriginalNotionalPercentageOutstanding_85.setString("44.010000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_85);
  UnderlyingInstrument_85.insert(UnderlyingOriginalNotionalPercentageOutstanding_85.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_85("STRING_1992180220");
  msg.set(UnderlyingPriceUnitOfMeasure_85);
  UnderlyingInstrument_85.insert(UnderlyingPriceUnitOfMeasure_85.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_85;
  UnderlyingPriceUnitOfMeasureQty_85.setString("12261183");
  msg.set(UnderlyingPriceUnitOfMeasureQty_85);
  UnderlyingInstrument_85.insert(UnderlyingPriceUnitOfMeasureQty_85.getString());
  FIX::UnderlyingProduct UnderlyingProduct_85(791891434);
  msg.set(UnderlyingProduct_85);
  UnderlyingInstrument_85.insert(UnderlyingProduct_85.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_85(859140232);
  msg.set(UnderlyingPutOrCall_85);
  UnderlyingInstrument_85.insert(UnderlyingPutOrCall_85.getString());
  FIX::UnderlyingPx UnderlyingPx_85;
  UnderlyingPx_85.setString("21428404");
  msg.set(UnderlyingPx_85);
  UnderlyingInstrument_85.insert(UnderlyingPx_85.getString());
  FIX::UnderlyingQty UnderlyingQty_85;
  UnderlyingQty_85.setString("11048133");
  msg.set(UnderlyingQty_85);
  UnderlyingInstrument_85.insert(UnderlyingQty_85.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_85("LOCALMKTDATE_326922364");
  msg.set(UnderlyingRedemptionDate_85);
  UnderlyingInstrument_85.insert(UnderlyingRedemptionDate_85.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_85("STRING_634378592");
  msg.set(UnderlyingRepoCollateralSecurityType_85);
  UnderlyingInstrument_85.insert(UnderlyingRepoCollateralSecurityType_85.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_85;
  UnderlyingRepurchaseRate_85.setString("13.960000");
  msg.set(UnderlyingRepurchaseRate_85);
  UnderlyingInstrument_85.insert(UnderlyingRepurchaseRate_85.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_85(1501224147);
  msg.set(UnderlyingRepurchaseTerm_85);
  UnderlyingInstrument_85.insert(UnderlyingRepurchaseTerm_85.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_85("STRING_1752077397");
  msg.set(UnderlyingRestructuringType_85);
  UnderlyingInstrument_85.insert(UnderlyingRestructuringType_85.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_85("STRING_1432298153");
  msg.set(UnderlyingSecurityDesc_85);
  UnderlyingInstrument_85.insert(UnderlyingSecurityDesc_85.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_85("EXCHANGE_203980069");
  msg.set(UnderlyingSecurityExchange_85);
  UnderlyingInstrument_85.insert(UnderlyingSecurityExchange_85.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_85("STRING_1737639036");
  msg.set(UnderlyingSecurityID_85);
  UnderlyingInstrument_85.insert(UnderlyingSecurityID_85.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_85("STRING_1880455126");
  msg.set(UnderlyingSecurityIDSource_85);
  UnderlyingInstrument_85.insert(UnderlyingSecurityIDSource_85.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_85("STRING_1252400890");
  msg.set(UnderlyingSecuritySubType_85);
  UnderlyingInstrument_85.insert(UnderlyingSecuritySubType_85.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_85("STRING_789088875");
  msg.set(UnderlyingSecurityType_85);
  UnderlyingInstrument_85.insert(UnderlyingSecurityType_85.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_85("STRING_740257189");
  msg.set(UnderlyingSeniority_85);
  UnderlyingInstrument_85.insert(UnderlyingSeniority_85.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_85("STRING_423856317");
  msg.set(UnderlyingSettlMethod_85);
  UnderlyingInstrument_85.insert(UnderlyingSettlMethod_85.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_85(4);
  msg.set(UnderlyingSettlementType_85);
  UnderlyingInstrument_85.insert(UnderlyingSettlementType_85.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_85;
  UnderlyingStartValue_85.setString("10080044");
  msg.set(UnderlyingStartValue_85);
  UnderlyingInstrument_85.insert(UnderlyingStartValue_85.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_85("STRING_463375330");
  msg.set(UnderlyingStateOrProvinceOfIssue_85);
  UnderlyingInstrument_85.insert(UnderlyingStateOrProvinceOfIssue_85.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_85("CHF");
  msg.set(UnderlyingStrikeCurrency_85);
  UnderlyingInstrument_85.insert(UnderlyingStrikeCurrency_85.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_85;
  UnderlyingStrikePrice_85.setString("2582769");
  msg.set(UnderlyingStrikePrice_85);
  UnderlyingInstrument_85.insert(UnderlyingStrikePrice_85.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_85("STRING_643646788");
  msg.set(UnderlyingSymbol_85);
  UnderlyingInstrument_85.insert(UnderlyingSymbol_85.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_85("STRING_460640715");
  msg.set(UnderlyingSymbolSfx_85);
  UnderlyingInstrument_85.insert(UnderlyingSymbolSfx_85.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_85("STRING_1546388564");
  msg.set(UnderlyingTimeUnit_85);
  UnderlyingInstrument_85.insert(UnderlyingTimeUnit_85.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_85("STRING_1985851342");
  msg.set(UnderlyingUnitOfMeasure_85);
  UnderlyingInstrument_85.insert(UnderlyingUnitOfMeasure_85.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_85;
  UnderlyingUnitOfMeasureQty_85.setString("4565060");
  msg.set(UnderlyingUnitOfMeasureQty_85);
  UnderlyingInstrument_85.insert(UnderlyingUnitOfMeasureQty_85.getString());
  all_values.push_back(UnderlyingInstrument_85);
  all_compo_names.insert("UnderlyingInstrument");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_170;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_170("STRING_1830547914");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_170);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_170.insert(UnderlyingSecurityAltID_170.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_170("STRING_1682624418");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_170);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_170.insert(UnderlyingSecurityAltIDSource_170.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_170);
    all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_171;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_171("STRING_1836470751");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_171);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_171.insert(UnderlyingSecurityAltID_171.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_171("STRING_542204498");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_171);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_171.insert(UnderlyingSecurityAltIDSource_171.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_171);
    all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_172;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_172("STRING_1677981252");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltID_172);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_172.insert(UnderlyingSecurityAltID_172.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_172("STRING_793800420");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltIDSource_172);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_172.insert(UnderlyingSecurityAltIDSource_172.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_172);
    all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_171;
    FIX::UnderlyingStipType UnderlyingStipType_171("STRING_164876196");
    noUnderlyingStips_0_0.set(UnderlyingStipType_171);
    UnderlyingStipulations_NoUnderlyingStips_171.insert(UnderlyingStipType_171.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_171("STRING_520728169");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_171);
    UnderlyingStipulations_NoUnderlyingStips_171.insert(UnderlyingStipValue_171.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_171);
    all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_172;
    FIX::UnderlyingStipType UnderlyingStipType_172("STRING_222867362");
    noUnderlyingStips_0_1.set(UnderlyingStipType_172);
    UnderlyingStipulations_NoUnderlyingStips_172.insert(UnderlyingStipType_172.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_172("STRING_1916953594");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_172);
    UnderlyingStipulations_NoUnderlyingStips_172.insert(UnderlyingStipValue_172.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_172);
    all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_160;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_160("STRING_426847432");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_160);
    UndlyInstrumentParties_NoUndlyInstrumentParties_160.insert(UnderlyingInstrumentPartyID_160.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_160('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_160);
    UndlyInstrumentParties_NoUndlyInstrumentParties_160.insert(UnderlyingInstrumentPartyIDSource_160.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_160(1685997800);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_160);
    UndlyInstrumentParties_NoUndlyInstrumentParties_160.insert(UnderlyingInstrumentPartyRole_160.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_160);
    all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_318("STRING_148714209");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_318);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318.insert(UnderlyingInstrumentPartySubID_318.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_318(278771341);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_318);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318.insert(UnderlyingInstrumentPartySubIDType_318.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_319("STRING_2103104639");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_319);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319.insert(UnderlyingInstrumentPartySubID_319.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_319(476780404);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_319);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319.insert(UnderlyingInstrumentPartySubIDType_319.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_320("STRING_1286775830");
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubID_320);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320.insert(UnderlyingInstrumentPartySubID_320.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_320(418996321);
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubIDType_320);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320.insert(UnderlyingInstrumentPartySubIDType_320.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
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
