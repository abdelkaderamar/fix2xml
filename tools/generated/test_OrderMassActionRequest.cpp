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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderMassActionRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassActionRequest_0;
  FIX::ClOrdID ClOrdID_38("STRING_537937035");
  msg.set(ClOrdID_38);
  OrderMassActionRequest_0.insert(ClOrdID_38.getString());
  FIX::EncodedText EncodedText_69("DATA_922546388");
  msg.set(EncodedText_69);
  OrderMassActionRequest_0.insert(EncodedText_69.getString());
  FIX::EncodedTextLen EncodedTextLen_69(1397428527);
  msg.set(EncodedTextLen_69);
  OrderMassActionRequest_0.insert(EncodedTextLen_69.getString());
  FIX::MarketID MarketID_12("EXCHANGE_607214093");
  msg.set(MarketID_12);
  OrderMassActionRequest_0.insert(MarketID_12.getString());
  FIX::MarketSegmentID MarketSegmentID_12("STRING_1655881387");
  msg.set(MarketSegmentID_12);
  OrderMassActionRequest_0.insert(MarketSegmentID_12.getString());
  FIX::MassActionScope MassActionScope_1(4);
  msg.set(MassActionScope_1);
  OrderMassActionRequest_0.insert(MassActionScope_1.getString());
  FIX::MassActionType MassActionType_1(2);
  msg.set(MassActionType_1);
  OrderMassActionRequest_0.insert(MassActionType_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_36("STRING_2102565614");
  msg.set(SecondaryClOrdID_36);
  OrderMassActionRequest_0.insert(SecondaryClOrdID_36.getString());
  FIX::Side Side_36('G');
  msg.set(Side_36);
  OrderMassActionRequest_0.insert(Side_36.getString());
  FIX::Text Text_69("STRING_1365609125");
  msg.set(Text_69);
  OrderMassActionRequest_0.insert(Text_69.getString());
  FIX::TradingSessionID TradingSessionID_71("STRING_4");
  msg.set(TradingSessionID_71);
  OrderMassActionRequest_0.insert(TradingSessionID_71.getString());
  FIX::TradingSessionSubID TradingSessionSubID_71("STRING_7");
  msg.set(TradingSessionSubID_71);
  OrderMassActionRequest_0.insert(TradingSessionSubID_71.getString());
  FIX::TransactTime TransactTime_51(FIX::UTCTIMESTAMP(13, 40, 11, 4, 1, 2014));
  msg.set(TransactTime_51);
  OrderMassActionRequest_0.insert(TransactTime_51.getString());
  all_values.push_back(OrderMassActionRequest_0);

  all_compo_names.insert("OrderMassActionRequest");

  // Instrument
  multiset<string> Instrument_58;
  FIX::AttachmentPoint AttachmentPoint_58;
  AttachmentPoint_58.setString("19.230000");
  msg.set(AttachmentPoint_58);
  Instrument_58.insert(AttachmentPoint_58.getString());
  FIX::CFICode CFICode_58("STRING_1085727510");
  msg.set(CFICode_58);
  Instrument_58.insert(CFICode_58.getString());
  FIX::CPProgram CPProgram_58(2);
  msg.set(CPProgram_58);
  Instrument_58.insert(CPProgram_58.getString());
  FIX::CPRegType CPRegType_58("STRING_1280941309");
  msg.set(CPRegType_58);
  Instrument_58.insert(CPRegType_58.getString());
  FIX::CapPrice CapPrice_58;
  CapPrice_58.setString("10179287");
  msg.set(CapPrice_58);
  Instrument_58.insert(CapPrice_58.getString());
  FIX::ContractMultiplier ContractMultiplier_58;
  ContractMultiplier_58.setString("7267566");
  msg.set(ContractMultiplier_58);
  Instrument_58.insert(ContractMultiplier_58.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_58(2);
  msg.set(ContractMultiplierUnit_58);
  Instrument_58.insert(ContractMultiplierUnit_58.getString());
  FIX::ContractSettlMonth ContractSettlMonth_58("MONTHYEAR_1338054297");
  msg.set(ContractSettlMonth_58);
  Instrument_58.insert(ContractSettlMonth_58.getString());
  FIX::CountryOfIssue CountryOfIssue_58("COUNTRY_1954858289");
  msg.set(CountryOfIssue_58);
  Instrument_58.insert(CountryOfIssue_58.getString());
  FIX::CouponPaymentDate CouponPaymentDate_58("LOCALMKTDATE_728521780");
  msg.set(CouponPaymentDate_58);
  Instrument_58.insert(CouponPaymentDate_58.getString());
  FIX::CouponRate CouponRate_58;
  CouponRate_58.setString("30.700000");
  msg.set(CouponRate_58);
  Instrument_58.insert(CouponRate_58.getString());
  FIX::CreditRating CreditRating_58("STRING_1815464560");
  msg.set(CreditRating_58);
  Instrument_58.insert(CreditRating_58.getString());
  FIX::DatedDate DatedDate_58("LOCALMKTDATE_1266458815");
  msg.set(DatedDate_58);
  Instrument_58.insert(DatedDate_58.getString());
  FIX::DetachmentPoint DetachmentPoint_58;
  DetachmentPoint_58.setString("94.580000");
  msg.set(DetachmentPoint_58);
  Instrument_58.insert(DetachmentPoint_58.getString());
  FIX::EncodedIssuer EncodedIssuer_58("DATA_1065409440");
  msg.set(EncodedIssuer_58);
  Instrument_58.insert(EncodedIssuer_58.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_58(1873672909);
  msg.set(EncodedIssuerLen_58);
  Instrument_58.insert(EncodedIssuerLen_58.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_58("DATA_761297198");
  msg.set(EncodedSecurityDesc_58);
  Instrument_58.insert(EncodedSecurityDesc_58.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_58(531893695);
  msg.set(EncodedSecurityDescLen_58);
  Instrument_58.insert(EncodedSecurityDescLen_58.getString());
  FIX::ExerciseStyle ExerciseStyle_58(0);
  msg.set(ExerciseStyle_58);
  Instrument_58.insert(ExerciseStyle_58.getString());
  FIX::Factor Factor_58;
  Factor_58.setString("7163791");
  msg.set(Factor_58);
  Instrument_58.insert(Factor_58.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_58(true);
  msg.set(FlexProductEligibilityIndicator_58);
  Instrument_58.insert(FlexProductEligibilityIndicator_58.getString());
  FIX::FlexibleIndicator FlexibleIndicator_58(false);
  msg.set(FlexibleIndicator_58);
  Instrument_58.insert(FlexibleIndicator_58.getString());
  FIX::FloorPrice FloorPrice_58;
  FloorPrice_58.setString("21233107");
  msg.set(FloorPrice_58);
  Instrument_58.insert(FloorPrice_58.getString());
  FIX::FlowScheduleType FlowScheduleType_58(0);
  msg.set(FlowScheduleType_58);
  Instrument_58.insert(FlowScheduleType_58.getString());
  FIX::InstrRegistry InstrRegistry_58("STRING_926683977");
  msg.set(InstrRegistry_58);
  Instrument_58.insert(InstrRegistry_58.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_58('2');
  msg.set(InstrmtAssignmentMethod_58);
  Instrument_58.insert(InstrmtAssignmentMethod_58.getString());
  FIX::InterestAccrualDate InterestAccrualDate_58("LOCALMKTDATE_1053239910");
  msg.set(InterestAccrualDate_58);
  Instrument_58.insert(InterestAccrualDate_58.getString());
  FIX::IssueDate IssueDate_58("LOCALMKTDATE_167585220");
  msg.set(IssueDate_58);
  Instrument_58.insert(IssueDate_58.getString());
  FIX::Issuer Issuer_58("STRING_2130944065");
  msg.set(Issuer_58);
  Instrument_58.insert(Issuer_58.getString());
  FIX::ListMethod ListMethod_58(0);
  msg.set(ListMethod_58);
  Instrument_58.insert(ListMethod_58.getString());
  FIX::LocaleOfIssue LocaleOfIssue_58("STRING_616571295");
  msg.set(LocaleOfIssue_58);
  Instrument_58.insert(LocaleOfIssue_58.getString());
  FIX::MaturityDate MaturityDate_58("LOCALMKTDATE_454322340");
  msg.set(MaturityDate_58);
  Instrument_58.insert(MaturityDate_58.getString());
  FIX::MaturityMonthYear MaturityMonthYear_58("MONTHYEAR_1138716605");
  msg.set(MaturityMonthYear_58);
  Instrument_58.insert(MaturityMonthYear_58.getString());
  FIX::MaturityTime MaturityTime_58("TZTIMEONLY_1015025116");
  msg.set(MaturityTime_58);
  Instrument_58.insert(MaturityTime_58.getString());
  FIX::MinPriceIncrement MinPriceIncrement_58;
  MinPriceIncrement_58.setString("17352636");
  msg.set(MinPriceIncrement_58);
  Instrument_58.insert(MinPriceIncrement_58.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_58;
  MinPriceIncrementAmount_58.setString("91617");
  msg.set(MinPriceIncrementAmount_58);
  Instrument_58.insert(MinPriceIncrementAmount_58.getString());
  FIX::NTPositionLimit NTPositionLimit_58(1741781801);
  msg.set(NTPositionLimit_58);
  Instrument_58.insert(NTPositionLimit_58.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_58;
  NotionalPercentageOutstanding_58.setString("66.790000");
  msg.set(NotionalPercentageOutstanding_58);
  Instrument_58.insert(NotionalPercentageOutstanding_58.getString());
  FIX::OptAttribute OptAttribute_58('1');
  msg.set(OptAttribute_58);
  Instrument_58.insert(OptAttribute_58.getString());
  FIX::OptPayoutAmount OptPayoutAmount_58;
  OptPayoutAmount_58.setString("15491564");
  msg.set(OptPayoutAmount_58);
  Instrument_58.insert(OptPayoutAmount_58.getString());
  FIX::OptPayoutType OptPayoutType_58(3);
  msg.set(OptPayoutType_58);
  Instrument_58.insert(OptPayoutType_58.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_58;
  OriginalNotionalPercentageOutstanding_58.setString("90.760000");
  msg.set(OriginalNotionalPercentageOutstanding_58);
  Instrument_58.insert(OriginalNotionalPercentageOutstanding_58.getString());
  FIX::Pool Pool_58("STRING_1217137355");
  msg.set(Pool_58);
  Instrument_58.insert(Pool_58.getString());
  FIX::PositionLimit PositionLimit_58(1677523627);
  msg.set(PositionLimit_58);
  Instrument_58.insert(PositionLimit_58.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_58("STRING_INT");
  msg.set(PriceQuoteMethod_58);
  Instrument_58.insert(PriceQuoteMethod_58.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_58("STRING_135063147");
  msg.set(PriceUnitOfMeasure_58);
  Instrument_58.insert(PriceUnitOfMeasure_58.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_58;
  PriceUnitOfMeasureQty_58.setString("14037128");
  msg.set(PriceUnitOfMeasureQty_58);
  Instrument_58.insert(PriceUnitOfMeasureQty_58.getString());
  FIX::Product Product_60(8);
  msg.set(Product_60);
  Instrument_58.insert(Product_60.getString());
  FIX::ProductComplex ProductComplex_58("STRING_666956842");
  msg.set(ProductComplex_58);
  Instrument_58.insert(ProductComplex_58.getString());
  FIX::PutOrCall PutOrCall_58(0);
  msg.set(PutOrCall_58);
  Instrument_58.insert(PutOrCall_58.getString());
  FIX::RedemptionDate RedemptionDate_58("LOCALMKTDATE_113177601");
  msg.set(RedemptionDate_58);
  Instrument_58.insert(RedemptionDate_58.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_58("STRING_2040737224");
  msg.set(RepoCollateralSecurityType_58);
  Instrument_58.insert(RepoCollateralSecurityType_58.getString());
  FIX::RepurchaseRate RepurchaseRate_58;
  RepurchaseRate_58.setString("24.580000");
  msg.set(RepurchaseRate_58);
  Instrument_58.insert(RepurchaseRate_58.getString());
  FIX::RepurchaseTerm RepurchaseTerm_58(89004709);
  msg.set(RepurchaseTerm_58);
  Instrument_58.insert(RepurchaseTerm_58.getString());
  FIX::RestructuringType RestructuringType_58("STRING_MM");
  msg.set(RestructuringType_58);
  Instrument_58.insert(RestructuringType_58.getString());
  FIX::SecurityDesc SecurityDesc_58("STRING_1826396435");
  msg.set(SecurityDesc_58);
  Instrument_58.insert(SecurityDesc_58.getString());
  FIX::SecurityExchange SecurityExchange_58("EXCHANGE_306056454");
  msg.set(SecurityExchange_58);
  Instrument_58.insert(SecurityExchange_58.getString());
  FIX::SecurityGroup SecurityGroup_58("STRING_1887174137");
  msg.set(SecurityGroup_58);
  Instrument_58.insert(SecurityGroup_58.getString());
  FIX::SecurityID SecurityID_58("STRING_1993981655");
  msg.set(SecurityID_58);
  Instrument_58.insert(SecurityID_58.getString());
  FIX::SecurityIDSource SecurityIDSource_58("STRING_I");
  msg.set(SecurityIDSource_58);
  Instrument_58.insert(SecurityIDSource_58.getString());
  FIX::SecurityStatus SecurityStatus_58("STRING_2");
  msg.set(SecurityStatus_58);
  Instrument_58.insert(SecurityStatus_58.getString());
  FIX::SecuritySubType SecuritySubType_59("STRING_463069302");
  msg.set(SecuritySubType_59);
  Instrument_58.insert(SecuritySubType_59.getString());
  FIX::SecurityType SecurityType_60("STRING_STRUCT");
  msg.set(SecurityType_60);
  Instrument_58.insert(SecurityType_60.getString());
  FIX::Seniority Seniority_58("STRING_SD");
  msg.set(Seniority_58);
  Instrument_58.insert(Seniority_58.getString());
  FIX::SettlMethod SettlMethod_58('P');
  msg.set(SettlMethod_58);
  Instrument_58.insert(SettlMethod_58.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_58("STRING_331619212");
  msg.set(SettleOnOpenFlag_58);
  Instrument_58.insert(SettleOnOpenFlag_58.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_58("STRING_940557897");
  msg.set(StateOrProvinceOfIssue_58);
  Instrument_58.insert(StateOrProvinceOfIssue_58.getString());
  FIX::StrikeCurrency StrikeCurrency_58("CAN");
  msg.set(StrikeCurrency_58);
  Instrument_58.insert(StrikeCurrency_58.getString());
  FIX::StrikeMultiplier StrikeMultiplier_58;
  StrikeMultiplier_58.setString("1402902");
  msg.set(StrikeMultiplier_58);
  Instrument_58.insert(StrikeMultiplier_58.getString());
  FIX::StrikePrice StrikePrice_58;
  StrikePrice_58.setString("4740653");
  msg.set(StrikePrice_58);
  Instrument_58.insert(StrikePrice_58.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_58(1);
  msg.set(StrikePriceBoundaryMethod_58);
  Instrument_58.insert(StrikePriceBoundaryMethod_58.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_58;
  StrikePriceBoundaryPrecision_58.setString("93.310000");
  msg.set(StrikePriceBoundaryPrecision_58);
  Instrument_58.insert(StrikePriceBoundaryPrecision_58.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_58(2);
  msg.set(StrikePriceDeterminationMethod_58);
  Instrument_58.insert(StrikePriceDeterminationMethod_58.getString());
  FIX::StrikeValue StrikeValue_58;
  StrikeValue_58.setString("21027506");
  msg.set(StrikeValue_58);
  Instrument_58.insert(StrikeValue_58.getString());
  FIX::Symbol Symbol_58("STRING_453360569");
  msg.set(Symbol_58);
  Instrument_58.insert(Symbol_58.getString());
  FIX::SymbolSfx SymbolSfx_58("STRING_CD");
  msg.set(SymbolSfx_58);
  Instrument_58.insert(SymbolSfx_58.getString());
  FIX::TimeUnit TimeUnit_58("STRING_Yr");
  msg.set(TimeUnit_58);
  Instrument_58.insert(TimeUnit_58.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_58(3);
  msg.set(UnderlyingPriceDeterminationMethod_58);
  Instrument_58.insert(UnderlyingPriceDeterminationMethod_58.getString());
  FIX::UnitOfMeasure UnitOfMeasure_58("STRING_lbs");
  msg.set(UnitOfMeasure_58);
  Instrument_58.insert(UnitOfMeasure_58.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_58;
  UnitOfMeasureQty_58.setString("18278880");
  msg.set(UnitOfMeasureQty_58);
  Instrument_58.insert(UnitOfMeasureQty_58.getString());
  FIX::ValuationMethod ValuationMethod_58("STRING_EQTY");
  msg.set(ValuationMethod_58);
  Instrument_58.insert(ValuationMethod_58.getString());
  all_values.push_back(Instrument_58);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassActionRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_117;
    FIX::ComplexEventCondition ComplexEventCondition_117(1);
    noComplexEvents_0_0.set(ComplexEventCondition_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventCondition_117.getString());
    FIX::ComplexEventPrice ComplexEventPrice_117;
    ComplexEventPrice_117.setString("523413");
    noComplexEvents_0_0.set(ComplexEventPrice_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventPrice_117.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_117(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventPriceBoundaryMethod_117.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_117;
    ComplexEventPriceBoundaryPrecision_117.setString("96.290000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventPriceBoundaryPrecision_117.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_117(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventPriceTimeType_117.getString());
    FIX::ComplexEventType ComplexEventType_117(2);
    noComplexEvents_0_0.set(ComplexEventType_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventType_117.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_117;
    ComplexOptPayoutAmount_117.setString("1055276");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexOptPayoutAmount_117.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_117);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_237;
      FIX::ComplexEventEndDate ComplexEventEndDate_237(FIX::UTCTIMESTAMP(3, 32, 6, 26, 1, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_237);
      ComplexEventDates_NoComplexEventDates_237.insert(ComplexEventEndDate_237.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_237(FIX::UTCTIMESTAMP(11, 50, 29, 10, 2, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_237);
      ComplexEventDates_NoComplexEventDates_237.insert(ComplexEventStartDate_237.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_237);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_481;
        FIX::ComplexEventEndTime ComplexEventEndTime_481(FIX::UTCTIMEONLY(7, 10, 49));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_481);
        ComplexEventTimes_NoComplexEventTimes_481.insert(ComplexEventEndTime_481.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_481(FIX::UTCTIMEONLY(23, 16, 4));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_481);
        ComplexEventTimes_NoComplexEventTimes_481.insert(ComplexEventStartTime_481.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_481);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_482;
        FIX::ComplexEventEndTime ComplexEventEndTime_482(FIX::UTCTIMEONLY(20, 22, 7));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_482);
        ComplexEventTimes_NoComplexEventTimes_482.insert(ComplexEventEndTime_482.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_482(FIX::UTCTIMEONLY(8, 4, 3));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_482);
        ComplexEventTimes_NoComplexEventTimes_482.insert(ComplexEventStartTime_482.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_482);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_483;
        FIX::ComplexEventEndTime ComplexEventEndTime_483(FIX::UTCTIMEONLY(23, 27, 13));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_483);
        ComplexEventTimes_NoComplexEventTimes_483.insert(ComplexEventEndTime_483.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_483(FIX::UTCTIMEONLY(19, 8, 8));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_483);
        ComplexEventTimes_NoComplexEventTimes_483.insert(ComplexEventStartTime_483.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_483);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassActionRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_115;
    FIX::EventDate EventDate_115("LOCALMKTDATE_1785290639");
    noEvents_0_0.set(EventDate_115);
    EvntGrp_NoEvents_115.insert(EventDate_115.getString());
    FIX::EventPx EventPx_115;
    EventPx_115.setString("5447074");
    noEvents_0_0.set(EventPx_115);
    EvntGrp_NoEvents_115.insert(EventPx_115.getString());
    FIX::EventText EventText_115("STRING_2038916865");
    noEvents_0_0.set(EventText_115);
    EvntGrp_NoEvents_115.insert(EventText_115.getString());
    FIX::EventTime EventTime_115(FIX::UTCTIMESTAMP(4, 33, 47, 19, 1, 2006));
    noEvents_0_0.set(EventTime_115);
    EvntGrp_NoEvents_115.insert(EventTime_115.getString());
    FIX::EventType EventType_115(13);
    noEvents_0_0.set(EventType_115);
    EvntGrp_NoEvents_115.insert(EventType_115.getString());
    all_values.push_back(EvntGrp_NoEvents_115);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassActionRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_120;
    FIX::InstrumentPartyID InstrumentPartyID_120("STRING_1223276572");
    noInstrumentParties_0_0.set(InstrumentPartyID_120);
    InstrumentParties_NoInstrumentParties_120.insert(InstrumentPartyID_120.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_120('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_120);
    InstrumentParties_NoInstrumentParties_120.insert(InstrumentPartyIDSource_120.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_120(1643997940);
    noInstrumentParties_0_0.set(InstrumentPartyRole_120);
    InstrumentParties_NoInstrumentParties_120.insert(InstrumentPartyRole_120.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_120);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226;
      FIX::InstrumentPartySubID InstrumentPartySubID_226("STRING_352438331");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_226);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226.insert(InstrumentPartySubID_226.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_226(1345590819);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_226);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226.insert(InstrumentPartySubIDType_226.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_107;
    FIX::SecurityAltID SecurityAltID_107("STRING_1343397547");
    noSecurityAltID_0_0.set(SecurityAltID_107);
    SecAltIDGrp_NoSecurityAltID_107.insert(SecurityAltID_107.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_107("STRING_1152711335");
    noSecurityAltID_0_0.set(SecurityAltIDSource_107);
    SecAltIDGrp_NoSecurityAltID_107.insert(SecurityAltIDSource_107.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_107);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_108;
    FIX::SecurityAltID SecurityAltID_108("STRING_1819395541");
    noSecurityAltID_0_1.set(SecurityAltID_108);
    SecAltIDGrp_NoSecurityAltID_108.insert(SecurityAltID_108.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_108("STRING_792170054");
    noSecurityAltID_0_1.set(SecurityAltIDSource_108);
    SecAltIDGrp_NoSecurityAltID_108.insert(SecurityAltIDSource_108.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_108);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_116;
  FIX::SecurityXML SecurityXML_117("XMLDATA_1528428791");
  msg.set(SecurityXML_117);
  FIX::SecurityXMLLen SecurityXMLLen_58(382125320);
  msg.set(SecurityXMLLen_58);
  FIX::SecurityXMLSchema SecurityXMLSchema_58("STRING_1777635687");
  msg.set(SecurityXMLSchema_58);
  SecurityXML_116.insert(SecurityXMLSchema_58.getString());
  all_values.push_back(SecurityXML_116);
  all_compo_names.insert("SecurityXML");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassActionRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_86;
    FIX::PartyID PartyID_86("STRING_668228163");
    noPartyIDs_0_0.set(PartyID_86);
    Parties_NoPartyIDs_86.insert(PartyID_86.getString());
    FIX::PartyIDSource PartyIDSource_86('5');
    noPartyIDs_0_0.set(PartyIDSource_86);
    Parties_NoPartyIDs_86.insert(PartyIDSource_86.getString());
    FIX::PartyRole PartyRole_86(55);
    noPartyIDs_0_0.set(PartyRole_86);
    Parties_NoPartyIDs_86.insert(PartyRole_86.getString());
    all_values.push_back(Parties_NoPartyIDs_86);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_188;
      FIX::PartySubID PartySubID_188("STRING_583192038");
      noPartySubIDs_0_1_0.set(PartySubID_188);
      PtysSubGrp_NoPartySubIDs_188.insert(PartySubID_188.getString());
      FIX::PartySubIDType PartySubIDType_188(12);
      noPartySubIDs_0_1_0.set(PartySubIDType_188);
      PtysSubGrp_NoPartySubIDs_188.insert(PartySubIDType_188.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_188);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_189;
      FIX::PartySubID PartySubID_189("STRING_435815883");
      noPartySubIDs_0_1_1.set(PartySubID_189);
      PtysSubGrp_NoPartySubIDs_189.insert(PartySubID_189.getString());
      FIX::PartySubIDType PartySubIDType_189(9);
      noPartySubIDs_0_1_1.set(PartySubIDType_189);
      PtysSubGrp_NoPartySubIDs_189.insert(PartySubIDType_189.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_189);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_190;
      FIX::PartySubID PartySubID_190("STRING_833711731");
      noPartySubIDs_0_1_2.set(PartySubID_190);
      PtysSubGrp_NoPartySubIDs_190.insert(PartySubID_190.getString());
      FIX::PartySubIDType PartySubIDType_190(11);
      noPartySubIDs_0_1_2.set(PartySubIDType_190);
      PtysSubGrp_NoPartySubIDs_190.insert(PartySubIDType_190.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_190);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_87;
    FIX::PartyID PartyID_87("STRING_733466530");
    noPartyIDs_0_1.set(PartyID_87);
    Parties_NoPartyIDs_87.insert(PartyID_87.getString());
    FIX::PartyIDSource PartyIDSource_87('G');
    noPartyIDs_0_1.set(PartyIDSource_87);
    Parties_NoPartyIDs_87.insert(PartyIDSource_87.getString());
    FIX::PartyRole PartyRole_87(66);
    noPartyIDs_0_1.set(PartyRole_87);
    Parties_NoPartyIDs_87.insert(PartyRole_87.getString());
    all_values.push_back(Parties_NoPartyIDs_87);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_191;
      FIX::PartySubID PartySubID_191("STRING_1957168670");
      noPartySubIDs_1_1_0.set(PartySubID_191);
      PtysSubGrp_NoPartySubIDs_191.insert(PartySubID_191.getString());
      FIX::PartySubIDType PartySubIDType_191(17);
      noPartySubIDs_1_1_0.set(PartySubIDType_191);
      PtysSubGrp_NoPartySubIDs_191.insert(PartySubIDType_191.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_191);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_192;
      FIX::PartySubID PartySubID_192("STRING_625246531");
      noPartySubIDs_1_1_1.set(PartySubID_192);
      PtysSubGrp_NoPartySubIDs_192.insert(PartySubID_192.getString());
      FIX::PartySubIDType PartySubIDType_192(4);
      noPartySubIDs_1_1_1.set(PartySubIDType_192);
      PtysSubGrp_NoPartySubIDs_192.insert(PartySubIDType_192.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_192);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_193;
      FIX::PartySubID PartySubID_193("STRING_1039764820");
      noPartySubIDs_1_1_2.set(PartySubID_193);
      PtysSubGrp_NoPartySubIDs_193.insert(PartySubID_193.getString());
      FIX::PartySubIDType PartySubIDType_193(1);
      noPartySubIDs_1_1_2.set(PartySubIDType_193);
      PtysSubGrp_NoPartySubIDs_193.insert(PartySubIDType_193.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_193);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_88;
    FIX::PartyID PartyID_88("STRING_336219822");
    noPartyIDs_0_2.set(PartyID_88);
    Parties_NoPartyIDs_88.insert(PartyID_88.getString());
    FIX::PartyIDSource PartyIDSource_88('B');
    noPartyIDs_0_2.set(PartyIDSource_88);
    Parties_NoPartyIDs_88.insert(PartyIDSource_88.getString());
    FIX::PartyRole PartyRole_88(84);
    noPartyIDs_0_2.set(PartyRole_88);
    Parties_NoPartyIDs_88.insert(PartyRole_88.getString());
    all_values.push_back(Parties_NoPartyIDs_88);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_194;
      FIX::PartySubID PartySubID_194("STRING_1390583327");
      noPartySubIDs_2_1_0.set(PartySubID_194);
      PtysSubGrp_NoPartySubIDs_194.insert(PartySubID_194.getString());
      FIX::PartySubIDType PartySubIDType_194(17);
      noPartySubIDs_2_1_0.set(PartySubIDType_194);
      PtysSubGrp_NoPartySubIDs_194.insert(PartySubIDType_194.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_194);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_195;
      FIX::PartySubID PartySubID_195("STRING_324303776");
      noPartySubIDs_2_1_1.set(PartySubID_195);
      PtysSubGrp_NoPartySubIDs_195.insert(PartySubID_195.getString());
      FIX::PartySubIDType PartySubIDType_195(21);
      noPartySubIDs_2_1_1.set(PartySubIDType_195);
      PtysSubGrp_NoPartySubIDs_195.insert(PartySubIDType_195.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_195);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_196;
      FIX::PartySubID PartySubID_196("STRING_568159800");
      noPartySubIDs_2_1_2.set(PartySubID_196);
      PtysSubGrp_NoPartySubIDs_196.insert(PartySubID_196.getString());
      FIX::PartySubIDType PartySubIDType_196(9);
      noPartySubIDs_2_1_2.set(PartySubIDType_196);
      PtysSubGrp_NoPartySubIDs_196.insert(PartySubIDType_196.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_196);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassActionRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_5;
    FIX::TargetPartyID TargetPartyID_5("STRING_1236387964");
    noTargetPartyIDs_0_0.set(TargetPartyID_5);
    TargetParties_NoTargetPartyIDs_5.insert(TargetPartyID_5.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_5('8');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_5);
    TargetParties_NoTargetPartyIDs_5.insert(TargetPartyIDSource_5.getString());
    FIX::TargetPartyRole TargetPartyRole_5(1329794536);
    noTargetPartyIDs_0_0.set(TargetPartyRole_5);
    TargetParties_NoTargetPartyIDs_5.insert(TargetPartyRole_5.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_5);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_6;
    FIX::TargetPartyID TargetPartyID_6("STRING_1780770630");
    noTargetPartyIDs_0_1.set(TargetPartyID_6);
    TargetParties_NoTargetPartyIDs_6.insert(TargetPartyID_6.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_6('1');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_6);
    TargetParties_NoTargetPartyIDs_6.insert(TargetPartyIDSource_6.getString());
    FIX::TargetPartyRole TargetPartyRole_6(629414095);
    noTargetPartyIDs_0_1.set(TargetPartyRole_6);
    TargetParties_NoTargetPartyIDs_6.insert(TargetPartyRole_6.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_6);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_7;
    FIX::TargetPartyID TargetPartyID_7("STRING_69102865");
    noTargetPartyIDs_0_2.set(TargetPartyID_7);
    TargetParties_NoTargetPartyIDs_7.insert(TargetPartyID_7.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_7('1');
    noTargetPartyIDs_0_2.set(TargetPartyIDSource_7);
    TargetParties_NoTargetPartyIDs_7.insert(TargetPartyIDSource_7.getString());
    FIX::TargetPartyRole TargetPartyRole_7(1463125826);
    noTargetPartyIDs_0_2.set(TargetPartyRole_7);
    TargetParties_NoTargetPartyIDs_7.insert(TargetPartyRole_7.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_7);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_82;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_82("DATA_366897713");
  msg.set(EncodedUnderlyingIssuer_82);
  UnderlyingInstrument_82.insert(EncodedUnderlyingIssuer_82.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_82(430448126);
  msg.set(EncodedUnderlyingIssuerLen_82);
  UnderlyingInstrument_82.insert(EncodedUnderlyingIssuerLen_82.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_82("DATA_204129376");
  msg.set(EncodedUnderlyingSecurityDesc_82);
  UnderlyingInstrument_82.insert(EncodedUnderlyingSecurityDesc_82.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_82(1856197198);
  msg.set(EncodedUnderlyingSecurityDescLen_82);
  UnderlyingInstrument_82.insert(EncodedUnderlyingSecurityDescLen_82.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_82;
  UnderlyingAdjustedQuantity_82.setString("19799017");
  msg.set(UnderlyingAdjustedQuantity_82);
  UnderlyingInstrument_82.insert(UnderlyingAdjustedQuantity_82.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_82;
  UnderlyingAllocationPercent_82.setString("43.990000");
  msg.set(UnderlyingAllocationPercent_82);
  UnderlyingInstrument_82.insert(UnderlyingAllocationPercent_82.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_82;
  UnderlyingAttachmentPoint_82.setString("40.770000");
  msg.set(UnderlyingAttachmentPoint_82);
  UnderlyingInstrument_82.insert(UnderlyingAttachmentPoint_82.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_82("STRING_457664617");
  msg.set(UnderlyingCFICode_82);
  UnderlyingInstrument_82.insert(UnderlyingCFICode_82.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_82("STRING_2145079538");
  msg.set(UnderlyingCPProgram_82);
  UnderlyingInstrument_82.insert(UnderlyingCPProgram_82.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_82("STRING_144245249");
  msg.set(UnderlyingCPRegType_82);
  UnderlyingInstrument_82.insert(UnderlyingCPRegType_82.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_82;
  UnderlyingCapValue_82.setString("6183348");
  msg.set(UnderlyingCapValue_82);
  UnderlyingInstrument_82.insert(UnderlyingCapValue_82.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_82;
  UnderlyingCashAmount_82.setString("3338157");
  msg.set(UnderlyingCashAmount_82);
  UnderlyingInstrument_82.insert(UnderlyingCashAmount_82.getString());
  FIX::UnderlyingCashType UnderlyingCashType_82("STRING_DIFF");
  msg.set(UnderlyingCashType_82);
  UnderlyingInstrument_82.insert(UnderlyingCashType_82.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_82;
  UnderlyingContractMultiplier_82.setString("11324574");
  msg.set(UnderlyingContractMultiplier_82);
  UnderlyingInstrument_82.insert(UnderlyingContractMultiplier_82.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_82(2013433083);
  msg.set(UnderlyingContractMultiplierUnit_82);
  UnderlyingInstrument_82.insert(UnderlyingContractMultiplierUnit_82.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_82("COUNTRY_1772700568");
  msg.set(UnderlyingCountryOfIssue_82);
  UnderlyingInstrument_82.insert(UnderlyingCountryOfIssue_82.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_82("LOCALMKTDATE_1318491951");
  msg.set(UnderlyingCouponPaymentDate_82);
  UnderlyingInstrument_82.insert(UnderlyingCouponPaymentDate_82.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_82;
  UnderlyingCouponRate_82.setString("32.110000");
  msg.set(UnderlyingCouponRate_82);
  UnderlyingInstrument_82.insert(UnderlyingCouponRate_82.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_82("STRING_396745390");
  msg.set(UnderlyingCreditRating_82);
  UnderlyingInstrument_82.insert(UnderlyingCreditRating_82.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_82("USD");
  msg.set(UnderlyingCurrency_82);
  UnderlyingInstrument_82.insert(UnderlyingCurrency_82.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_82;
  UnderlyingCurrentValue_82.setString("8241441");
  msg.set(UnderlyingCurrentValue_82);
  UnderlyingInstrument_82.insert(UnderlyingCurrentValue_82.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_82;
  UnderlyingDetachmentPoint_82.setString("60.680000");
  msg.set(UnderlyingDetachmentPoint_82);
  UnderlyingInstrument_82.insert(UnderlyingDetachmentPoint_82.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_82;
  UnderlyingDirtyPrice_82.setString("10445498");
  msg.set(UnderlyingDirtyPrice_82);
  UnderlyingInstrument_82.insert(UnderlyingDirtyPrice_82.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_82;
  UnderlyingEndPrice_82.setString("64550");
  msg.set(UnderlyingEndPrice_82);
  UnderlyingInstrument_82.insert(UnderlyingEndPrice_82.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_82;
  UnderlyingEndValue_82.setString("6088430");
  msg.set(UnderlyingEndValue_82);
  UnderlyingInstrument_82.insert(UnderlyingEndValue_82.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_82(380099141);
  msg.set(UnderlyingExerciseStyle_82);
  UnderlyingInstrument_82.insert(UnderlyingExerciseStyle_82.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_82;
  UnderlyingFXRate_82.setString("6358691");
  msg.set(UnderlyingFXRate_82);
  UnderlyingInstrument_82.insert(UnderlyingFXRate_82.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_82('M');
  msg.set(UnderlyingFXRateCalc_82);
  UnderlyingInstrument_82.insert(UnderlyingFXRateCalc_82.getString());
  FIX::UnderlyingFactor UnderlyingFactor_82;
  UnderlyingFactor_82.setString("770807");
  msg.set(UnderlyingFactor_82);
  UnderlyingInstrument_82.insert(UnderlyingFactor_82.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_82(2098994979);
  msg.set(UnderlyingFlowScheduleType_82);
  UnderlyingInstrument_82.insert(UnderlyingFlowScheduleType_82.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_82("STRING_1044843628");
  msg.set(UnderlyingInstrRegistry_82);
  UnderlyingInstrument_82.insert(UnderlyingInstrRegistry_82.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_82("LOCALMKTDATE_507528864");
  msg.set(UnderlyingIssueDate_82);
  UnderlyingInstrument_82.insert(UnderlyingIssueDate_82.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_82("STRING_155640708");
  msg.set(UnderlyingIssuer_82);
  UnderlyingInstrument_82.insert(UnderlyingIssuer_82.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_82("STRING_753557178");
  msg.set(UnderlyingLocaleOfIssue_82);
  UnderlyingInstrument_82.insert(UnderlyingLocaleOfIssue_82.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_82("LOCALMKTDATE_339946949");
  msg.set(UnderlyingMaturityDate_82);
  UnderlyingInstrument_82.insert(UnderlyingMaturityDate_82.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_82("MONTHYEAR_169455107");
  msg.set(UnderlyingMaturityMonthYear_82);
  UnderlyingInstrument_82.insert(UnderlyingMaturityMonthYear_82.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_82("TZTIMEONLY_2005521256");
  msg.set(UnderlyingMaturityTime_82);
  UnderlyingInstrument_82.insert(UnderlyingMaturityTime_82.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_82;
  UnderlyingNotionalPercentageOutstanding_82.setString("15.660000");
  msg.set(UnderlyingNotionalPercentageOutstanding_82);
  UnderlyingInstrument_82.insert(UnderlyingNotionalPercentageOutstanding_82.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_82('1');
  msg.set(UnderlyingOptAttribute_82);
  UnderlyingInstrument_82.insert(UnderlyingOptAttribute_82.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_82;
  UnderlyingOriginalNotionalPercentageOutstanding_82.setString("28.570000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_82);
  UnderlyingInstrument_82.insert(UnderlyingOriginalNotionalPercentageOutstanding_82.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_82("STRING_1415946451");
  msg.set(UnderlyingPriceUnitOfMeasure_82);
  UnderlyingInstrument_82.insert(UnderlyingPriceUnitOfMeasure_82.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_82;
  UnderlyingPriceUnitOfMeasureQty_82.setString("5008667");
  msg.set(UnderlyingPriceUnitOfMeasureQty_82);
  UnderlyingInstrument_82.insert(UnderlyingPriceUnitOfMeasureQty_82.getString());
  FIX::UnderlyingProduct UnderlyingProduct_82(384400098);
  msg.set(UnderlyingProduct_82);
  UnderlyingInstrument_82.insert(UnderlyingProduct_82.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_82(400920275);
  msg.set(UnderlyingPutOrCall_82);
  UnderlyingInstrument_82.insert(UnderlyingPutOrCall_82.getString());
  FIX::UnderlyingPx UnderlyingPx_82;
  UnderlyingPx_82.setString("3668161");
  msg.set(UnderlyingPx_82);
  UnderlyingInstrument_82.insert(UnderlyingPx_82.getString());
  FIX::UnderlyingQty UnderlyingQty_82;
  UnderlyingQty_82.setString("96170");
  msg.set(UnderlyingQty_82);
  UnderlyingInstrument_82.insert(UnderlyingQty_82.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_82("LOCALMKTDATE_1719412226");
  msg.set(UnderlyingRedemptionDate_82);
  UnderlyingInstrument_82.insert(UnderlyingRedemptionDate_82.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_82("STRING_557069356");
  msg.set(UnderlyingRepoCollateralSecurityType_82);
  UnderlyingInstrument_82.insert(UnderlyingRepoCollateralSecurityType_82.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_82;
  UnderlyingRepurchaseRate_82.setString("24.080000");
  msg.set(UnderlyingRepurchaseRate_82);
  UnderlyingInstrument_82.insert(UnderlyingRepurchaseRate_82.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_82(1458580330);
  msg.set(UnderlyingRepurchaseTerm_82);
  UnderlyingInstrument_82.insert(UnderlyingRepurchaseTerm_82.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_82("STRING_701778382");
  msg.set(UnderlyingRestructuringType_82);
  UnderlyingInstrument_82.insert(UnderlyingRestructuringType_82.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_82("STRING_1230506577");
  msg.set(UnderlyingSecurityDesc_82);
  UnderlyingInstrument_82.insert(UnderlyingSecurityDesc_82.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_82("EXCHANGE_286652750");
  msg.set(UnderlyingSecurityExchange_82);
  UnderlyingInstrument_82.insert(UnderlyingSecurityExchange_82.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_82("STRING_1746328271");
  msg.set(UnderlyingSecurityID_82);
  UnderlyingInstrument_82.insert(UnderlyingSecurityID_82.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_82("STRING_1236961635");
  msg.set(UnderlyingSecurityIDSource_82);
  UnderlyingInstrument_82.insert(UnderlyingSecurityIDSource_82.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_82("STRING_895495800");
  msg.set(UnderlyingSecuritySubType_82);
  UnderlyingInstrument_82.insert(UnderlyingSecuritySubType_82.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_82("STRING_2126427412");
  msg.set(UnderlyingSecurityType_82);
  UnderlyingInstrument_82.insert(UnderlyingSecurityType_82.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_82("STRING_1872830788");
  msg.set(UnderlyingSeniority_82);
  UnderlyingInstrument_82.insert(UnderlyingSeniority_82.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_82("STRING_1573441715");
  msg.set(UnderlyingSettlMethod_82);
  UnderlyingInstrument_82.insert(UnderlyingSettlMethod_82.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_82(2);
  msg.set(UnderlyingSettlementType_82);
  UnderlyingInstrument_82.insert(UnderlyingSettlementType_82.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_82;
  UnderlyingStartValue_82.setString("18243421");
  msg.set(UnderlyingStartValue_82);
  UnderlyingInstrument_82.insert(UnderlyingStartValue_82.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_82("STRING_470801696");
  msg.set(UnderlyingStateOrProvinceOfIssue_82);
  UnderlyingInstrument_82.insert(UnderlyingStateOrProvinceOfIssue_82.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_82("CAN");
  msg.set(UnderlyingStrikeCurrency_82);
  UnderlyingInstrument_82.insert(UnderlyingStrikeCurrency_82.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_82;
  UnderlyingStrikePrice_82.setString("12243588");
  msg.set(UnderlyingStrikePrice_82);
  UnderlyingInstrument_82.insert(UnderlyingStrikePrice_82.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_82("STRING_903500315");
  msg.set(UnderlyingSymbol_82);
  UnderlyingInstrument_82.insert(UnderlyingSymbol_82.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_82("STRING_1954286");
  msg.set(UnderlyingSymbolSfx_82);
  UnderlyingInstrument_82.insert(UnderlyingSymbolSfx_82.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_82("STRING_1082396482");
  msg.set(UnderlyingTimeUnit_82);
  UnderlyingInstrument_82.insert(UnderlyingTimeUnit_82.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_82("STRING_1701111882");
  msg.set(UnderlyingUnitOfMeasure_82);
  UnderlyingInstrument_82.insert(UnderlyingUnitOfMeasure_82.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_82;
  UnderlyingUnitOfMeasureQty_82.setString("1690052");
  msg.set(UnderlyingUnitOfMeasureQty_82);
  UnderlyingInstrument_82.insert(UnderlyingUnitOfMeasureQty_82.getString());
  all_values.push_back(UnderlyingInstrument_82);
  all_compo_names.insert("UnderlyingInstrument");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_166;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_166("STRING_969574685");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_166);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_166.insert(UnderlyingSecurityAltID_166.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_166("STRING_669871994");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_166);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_166.insert(UnderlyingSecurityAltIDSource_166.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_166);
    all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_167;
    FIX::UnderlyingStipType UnderlyingStipType_167("STRING_1370494960");
    noUnderlyingStips_0_0.set(UnderlyingStipType_167);
    UnderlyingStipulations_NoUnderlyingStips_167.insert(UnderlyingStipType_167.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_167("STRING_1036688140");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_167);
    UnderlyingStipulations_NoUnderlyingStips_167.insert(UnderlyingStipValue_167.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_167);
    all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_155;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_155("STRING_942423539");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_155);
    UndlyInstrumentParties_NoUndlyInstrumentParties_155.insert(UnderlyingInstrumentPartyID_155.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_155('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_155);
    UndlyInstrumentParties_NoUndlyInstrumentParties_155.insert(UnderlyingInstrumentPartyIDSource_155.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_155(1885058865);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_155);
    UndlyInstrumentParties_NoUndlyInstrumentParties_155.insert(UnderlyingInstrumentPartyRole_155.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_155);
    all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_307("STRING_148052231");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_307);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307.insert(UnderlyingInstrumentPartySubID_307.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_307(968081795);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_307);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307.insert(UnderlyingInstrumentPartySubIDType_307.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_308("STRING_540172972");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_308);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308.insert(UnderlyingInstrumentPartySubID_308.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_308(1894380502);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_308);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308.insert(UnderlyingInstrumentPartySubIDType_308.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
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
