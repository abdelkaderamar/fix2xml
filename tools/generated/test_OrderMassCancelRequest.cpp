#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/OrderMassCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassCancelRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderMassCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> OrderMassCancelRequest_0;
  FIX::ClOrdID ClOrdID_40("STRING_315649216");
  msg.set(ClOrdID_40);
  OrderMassCancelRequest_0.insert(ClOrdID_40.getString());
  FIX::EncodedText EncodedText_66("DATA_392415058");
  msg.set(EncodedText_66);
  OrderMassCancelRequest_0.insert(EncodedText_66.getString());
  FIX::EncodedTextLen EncodedTextLen_66(1192433513);
  msg.set(EncodedTextLen_66);
  OrderMassCancelRequest_0.insert(EncodedTextLen_66.getString());
  FIX::MarketID MarketID_13("EXCHANGE_109805858");
  msg.set(MarketID_13);
  OrderMassCancelRequest_0.insert(MarketID_13.getString());
  FIX::MarketSegmentID MarketSegmentID_13("STRING_1333549324");
  msg.set(MarketSegmentID_13);
  OrderMassCancelRequest_0.insert(MarketSegmentID_13.getString());
  FIX::MassCancelRequestType MassCancelRequestType_1('7');
  msg.set(MassCancelRequestType_1);
  OrderMassCancelRequest_0.insert(MassCancelRequestType_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_38("STRING_1248425918");
  msg.set(SecondaryClOrdID_38);
  OrderMassCancelRequest_0.insert(SecondaryClOrdID_38.getString());
  FIX::Side Side_36('6');
  msg.set(Side_36);
  OrderMassCancelRequest_0.insert(Side_36.getString());
  FIX::Text Text_66("STRING_1808469344");
  msg.set(Text_66);
  OrderMassCancelRequest_0.insert(Text_66.getString());
  FIX::TradingSessionID TradingSessionID_54("STRING_3");
  msg.set(TradingSessionID_54);
  OrderMassCancelRequest_0.insert(TradingSessionID_54.getString());
  FIX::TradingSessionSubID TradingSessionSubID_54("STRING_2");
  msg.set(TradingSessionSubID_54);
  OrderMassCancelRequest_0.insert(TradingSessionSubID_54.getString());
  FIX::TransactTime TransactTime_42(FIX::UTCTIMESTAMP(11, 48, 27, 10, 22009));
  msg.set(TransactTime_42);
  OrderMassCancelRequest_0.insert(TransactTime_42.getString());
  all_values.push_back(OrderMassCancelRequest_0);

  // Instrument
  multiset<string> Instrument_50;
  FIX::AttachmentPoint AttachmentPoint_50;
  AttachmentPoint_50.setString("46.830000");
  msg.set(AttachmentPoint_50);
  Instrument_50.insert(AttachmentPoint_50.getString());
  FIX::CFICode CFICode_50("STRING_1123636870");
  msg.set(CFICode_50);
  Instrument_50.insert(CFICode_50.getString());
  FIX::CPProgram CPProgram_50(1);
  msg.set(CPProgram_50);
  Instrument_50.insert(CPProgram_50.getString());
  FIX::CPRegType CPRegType_50("STRING_1663625253");
  msg.set(CPRegType_50);
  Instrument_50.insert(CPRegType_50.getString());
  FIX::CapPrice CapPrice_50;
  CapPrice_50.setString("1993390");
  msg.set(CapPrice_50);
  Instrument_50.insert(CapPrice_50.getString());
  FIX::ContractMultiplier ContractMultiplier_50;
  ContractMultiplier_50.setString("16662013");
  msg.set(ContractMultiplier_50);
  Instrument_50.insert(ContractMultiplier_50.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_50(0);
  msg.set(ContractMultiplierUnit_50);
  Instrument_50.insert(ContractMultiplierUnit_50.getString());
  FIX::ContractSettlMonth ContractSettlMonth_50("MONTHYEAR_868143968");
  msg.set(ContractSettlMonth_50);
  Instrument_50.insert(ContractSettlMonth_50.getString());
  FIX::CountryOfIssue CountryOfIssue_50("COUNTRY_2016369439");
  msg.set(CountryOfIssue_50);
  Instrument_50.insert(CountryOfIssue_50.getString());
  FIX::CouponPaymentDate CouponPaymentDate_50("LOCALMKTDATE_1979726499");
  msg.set(CouponPaymentDate_50);
  Instrument_50.insert(CouponPaymentDate_50.getString());
  FIX::CouponRate CouponRate_50;
  CouponRate_50.setString("67.840000");
  msg.set(CouponRate_50);
  Instrument_50.insert(CouponRate_50.getString());
  FIX::CreditRating CreditRating_50("STRING_1636683740");
  msg.set(CreditRating_50);
  Instrument_50.insert(CreditRating_50.getString());
  FIX::DatedDate DatedDate_50("LOCALMKTDATE_1604302584");
  msg.set(DatedDate_50);
  Instrument_50.insert(DatedDate_50.getString());
  FIX::DetachmentPoint DetachmentPoint_50;
  DetachmentPoint_50.setString("60.000000");
  msg.set(DetachmentPoint_50);
  Instrument_50.insert(DetachmentPoint_50.getString());
  FIX::EncodedIssuer EncodedIssuer_50("DATA_2029098798");
  msg.set(EncodedIssuer_50);
  Instrument_50.insert(EncodedIssuer_50.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_50(649252449);
  msg.set(EncodedIssuerLen_50);
  Instrument_50.insert(EncodedIssuerLen_50.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_50("DATA_2091461858");
  msg.set(EncodedSecurityDesc_50);
  Instrument_50.insert(EncodedSecurityDesc_50.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_50(1215164475);
  msg.set(EncodedSecurityDescLen_50);
  Instrument_50.insert(EncodedSecurityDescLen_50.getString());
  FIX::ExerciseStyle ExerciseStyle_50(2);
  msg.set(ExerciseStyle_50);
  Instrument_50.insert(ExerciseStyle_50.getString());
  FIX::Factor Factor_50;
  Factor_50.setString("11924041");
  msg.set(Factor_50);
  Instrument_50.insert(Factor_50.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_50(true);
  msg.set(FlexProductEligibilityIndicator_50);
  Instrument_50.insert(FlexProductEligibilityIndicator_50.getString());
  FIX::FlexibleIndicator FlexibleIndicator_50(true);
  msg.set(FlexibleIndicator_50);
  Instrument_50.insert(FlexibleIndicator_50.getString());
  FIX::FloorPrice FloorPrice_50;
  FloorPrice_50.setString("16530051");
  msg.set(FloorPrice_50);
  Instrument_50.insert(FloorPrice_50.getString());
  FIX::FlowScheduleType FlowScheduleType_50(0);
  msg.set(FlowScheduleType_50);
  Instrument_50.insert(FlowScheduleType_50.getString());
  FIX::InstrRegistry InstrRegistry_50("STRING_6619393");
  msg.set(InstrRegistry_50);
  Instrument_50.insert(InstrRegistry_50.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_50('1');
  msg.set(InstrmtAssignmentMethod_50);
  Instrument_50.insert(InstrmtAssignmentMethod_50.getString());
  FIX::InterestAccrualDate InterestAccrualDate_50("LOCALMKTDATE_1220192030");
  msg.set(InterestAccrualDate_50);
  Instrument_50.insert(InterestAccrualDate_50.getString());
  FIX::IssueDate IssueDate_50("LOCALMKTDATE_1576052920");
  msg.set(IssueDate_50);
  Instrument_50.insert(IssueDate_50.getString());
  FIX::Issuer Issuer_50("STRING_1011151640");
  msg.set(Issuer_50);
  Instrument_50.insert(Issuer_50.getString());
  FIX::ListMethod ListMethod_50(1);
  msg.set(ListMethod_50);
  Instrument_50.insert(ListMethod_50.getString());
  FIX::LocaleOfIssue LocaleOfIssue_50("STRING_1295802324");
  msg.set(LocaleOfIssue_50);
  Instrument_50.insert(LocaleOfIssue_50.getString());
  FIX::MaturityDate MaturityDate_50("LOCALMKTDATE_514572675");
  msg.set(MaturityDate_50);
  Instrument_50.insert(MaturityDate_50.getString());
  FIX::MaturityMonthYear MaturityMonthYear_50("MONTHYEAR_560652498");
  msg.set(MaturityMonthYear_50);
  Instrument_50.insert(MaturityMonthYear_50.getString());
  FIX::MaturityTime MaturityTime_50("TZTIMEONLY_1199168320");
  msg.set(MaturityTime_50);
  Instrument_50.insert(MaturityTime_50.getString());
  FIX::MinPriceIncrement MinPriceIncrement_50;
  MinPriceIncrement_50.setString("307142");
  msg.set(MinPriceIncrement_50);
  Instrument_50.insert(MinPriceIncrement_50.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_50;
  MinPriceIncrementAmount_50.setString("7599915");
  msg.set(MinPriceIncrementAmount_50);
  Instrument_50.insert(MinPriceIncrementAmount_50.getString());
  FIX::NTPositionLimit NTPositionLimit_50(717885980);
  msg.set(NTPositionLimit_50);
  Instrument_50.insert(NTPositionLimit_50.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_50;
  NotionalPercentageOutstanding_50.setString("43.320000");
  msg.set(NotionalPercentageOutstanding_50);
  Instrument_50.insert(NotionalPercentageOutstanding_50.getString());
  FIX::OptAttribute OptAttribute_50('1');
  msg.set(OptAttribute_50);
  Instrument_50.insert(OptAttribute_50.getString());
  FIX::OptPayoutAmount OptPayoutAmount_50;
  OptPayoutAmount_50.setString("5867717");
  msg.set(OptPayoutAmount_50);
  Instrument_50.insert(OptPayoutAmount_50.getString());
  FIX::OptPayoutType OptPayoutType_50(3);
  msg.set(OptPayoutType_50);
  Instrument_50.insert(OptPayoutType_50.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_50;
  OriginalNotionalPercentageOutstanding_50.setString("86.550000");
  msg.set(OriginalNotionalPercentageOutstanding_50);
  Instrument_50.insert(OriginalNotionalPercentageOutstanding_50.getString());
  FIX::Pool Pool_50("STRING_75971864");
  msg.set(Pool_50);
  Instrument_50.insert(Pool_50.getString());
  FIX::PositionLimit PositionLimit_50(1723659767);
  msg.set(PositionLimit_50);
  Instrument_50.insert(PositionLimit_50.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_50("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_50);
  Instrument_50.insert(PriceQuoteMethod_50.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_50("STRING_2105070662");
  msg.set(PriceUnitOfMeasure_50);
  Instrument_50.insert(PriceUnitOfMeasure_50.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_50;
  PriceUnitOfMeasureQty_50.setString("2254285");
  msg.set(PriceUnitOfMeasureQty_50);
  Instrument_50.insert(PriceUnitOfMeasureQty_50.getString());
  FIX::Product Product_52(8);
  msg.set(Product_52);
  Instrument_50.insert(Product_52.getString());
  FIX::ProductComplex ProductComplex_50("STRING_1172751489");
  msg.set(ProductComplex_50);
  Instrument_50.insert(ProductComplex_50.getString());
  FIX::PutOrCall PutOrCall_50(1);
  msg.set(PutOrCall_50);
  Instrument_50.insert(PutOrCall_50.getString());
  FIX::RedemptionDate RedemptionDate_50("LOCALMKTDATE_2117213345");
  msg.set(RedemptionDate_50);
  Instrument_50.insert(RedemptionDate_50.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_50("STRING_2135371826");
  msg.set(RepoCollateralSecurityType_50);
  Instrument_50.insert(RepoCollateralSecurityType_50.getString());
  FIX::RepurchaseRate RepurchaseRate_50;
  RepurchaseRate_50.setString("45.050000");
  msg.set(RepurchaseRate_50);
  Instrument_50.insert(RepurchaseRate_50.getString());
  FIX::RepurchaseTerm RepurchaseTerm_50(1622734868);
  msg.set(RepurchaseTerm_50);
  Instrument_50.insert(RepurchaseTerm_50.getString());
  FIX::RestructuringType RestructuringType_50("STRING_FR");
  msg.set(RestructuringType_50);
  Instrument_50.insert(RestructuringType_50.getString());
  FIX::SecurityDesc SecurityDesc_50("STRING_2093413898");
  msg.set(SecurityDesc_50);
  Instrument_50.insert(SecurityDesc_50.getString());
  FIX::SecurityExchange SecurityExchange_50("EXCHANGE_690931106");
  msg.set(SecurityExchange_50);
  Instrument_50.insert(SecurityExchange_50.getString());
  FIX::SecurityGroup SecurityGroup_50("STRING_478804751");
  msg.set(SecurityGroup_50);
  Instrument_50.insert(SecurityGroup_50.getString());
  FIX::SecurityID SecurityID_50("STRING_1521983171");
  msg.set(SecurityID_50);
  Instrument_50.insert(SecurityID_50.getString());
  FIX::SecurityIDSource SecurityIDSource_50("STRING_D");
  msg.set(SecurityIDSource_50);
  Instrument_50.insert(SecurityIDSource_50.getString());
  FIX::SecurityStatus SecurityStatus_50("STRING_1");
  msg.set(SecurityStatus_50);
  Instrument_50.insert(SecurityStatus_50.getString());
  FIX::SecuritySubType SecuritySubType_51("STRING_670301847");
  msg.set(SecuritySubType_51);
  Instrument_50.insert(SecuritySubType_51.getString());
  FIX::SecurityType SecurityType_52("STRING_MATURED");
  msg.set(SecurityType_52);
  Instrument_50.insert(SecurityType_52.getString());
  FIX::Seniority Seniority_50("STRING_SD");
  msg.set(Seniority_50);
  Instrument_50.insert(Seniority_50.getString());
  FIX::SettlMethod SettlMethod_50('P');
  msg.set(SettlMethod_50);
  Instrument_50.insert(SettlMethod_50.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_50("STRING_99886053");
  msg.set(SettleOnOpenFlag_50);
  Instrument_50.insert(SettleOnOpenFlag_50.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_50("STRING_1236464427");
  msg.set(StateOrProvinceOfIssue_50);
  Instrument_50.insert(StateOrProvinceOfIssue_50.getString());
  FIX::StrikeCurrency StrikeCurrency_50("EUR");
  msg.set(StrikeCurrency_50);
  Instrument_50.insert(StrikeCurrency_50.getString());
  FIX::StrikeMultiplier StrikeMultiplier_50;
  StrikeMultiplier_50.setString("7171162");
  msg.set(StrikeMultiplier_50);
  Instrument_50.insert(StrikeMultiplier_50.getString());
  FIX::StrikePrice StrikePrice_50;
  StrikePrice_50.setString("10266442");
  msg.set(StrikePrice_50);
  Instrument_50.insert(StrikePrice_50.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_50(5);
  msg.set(StrikePriceBoundaryMethod_50);
  Instrument_50.insert(StrikePriceBoundaryMethod_50.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_50;
  StrikePriceBoundaryPrecision_50.setString("49.530000");
  msg.set(StrikePriceBoundaryPrecision_50);
  Instrument_50.insert(StrikePriceBoundaryPrecision_50.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_50(3);
  msg.set(StrikePriceDeterminationMethod_50);
  Instrument_50.insert(StrikePriceDeterminationMethod_50.getString());
  FIX::StrikeValue StrikeValue_50;
  StrikeValue_50.setString("825336");
  msg.set(StrikeValue_50);
  Instrument_50.insert(StrikeValue_50.getString());
  FIX::Symbol Symbol_50("STRING_697122312");
  msg.set(Symbol_50);
  Instrument_50.insert(Symbol_50.getString());
  FIX::SymbolSfx SymbolSfx_50("STRING_WI");
  msg.set(SymbolSfx_50);
  Instrument_50.insert(SymbolSfx_50.getString());
  FIX::TimeUnit TimeUnit_50("STRING_Min");
  msg.set(TimeUnit_50);
  Instrument_50.insert(TimeUnit_50.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_50(2);
  msg.set(UnderlyingPriceDeterminationMethod_50);
  Instrument_50.insert(UnderlyingPriceDeterminationMethod_50.getString());
  FIX::UnitOfMeasure UnitOfMeasure_50("STRING_Gal");
  msg.set(UnitOfMeasure_50);
  Instrument_50.insert(UnitOfMeasure_50.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_50;
  UnitOfMeasureQty_50.setString("5598391");
  msg.set(UnitOfMeasureQty_50);
  Instrument_50.insert(UnitOfMeasureQty_50.getString());
  FIX::ValuationMethod ValuationMethod_50("STRING_FUT");
  msg.set(ValuationMethod_50);
  Instrument_50.insert(ValuationMethod_50.getString());
  all_values.push_back(Instrument_50);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_96;
    FIX::ComplexEventCondition ComplexEventCondition_96(1);
    noComplexEvents_0_0.set(ComplexEventCondition_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventCondition_96.getString());
    FIX::ComplexEventPrice ComplexEventPrice_96;
    ComplexEventPrice_96.setString("10669124");
    noComplexEvents_0_0.set(ComplexEventPrice_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPrice_96.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_96(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPriceBoundaryMethod_96.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_96;
    ComplexEventPriceBoundaryPrecision_96.setString("2.300000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPriceBoundaryPrecision_96.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_96(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPriceTimeType_96.getString());
    FIX::ComplexEventType ComplexEventType_96(5);
    noComplexEvents_0_0.set(ComplexEventType_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventType_96.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_96;
    ComplexOptPayoutAmount_96.setString("19670634");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexOptPayoutAmount_96.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_96);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_198;
      FIX::ComplexEventEndDate ComplexEventEndDate_198(FIX::UTCTIMESTAMP(8, 5, 15, 15, 42000));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_198);
      ComplexEventDates_NoComplexEventDates_198.insert(ComplexEventEndDate_198.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_198(FIX::UTCTIMESTAMP(16, 52, 29, 1, 102013));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_198);
      ComplexEventDates_NoComplexEventDates_198.insert(ComplexEventStartDate_198.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_198);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_387;
        FIX::ComplexEventEndTime ComplexEventEndTime_387(FIX::UTCTIMEONLY(12, 31, 58));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_387);
        ComplexEventTimes_NoComplexEventTimes_387.insert(ComplexEventEndTime_387.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_387(FIX::UTCTIMEONLY(22, 56, 43));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_387);
        ComplexEventTimes_NoComplexEventTimes_387.insert(ComplexEventStartTime_387.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_387);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_388;
        FIX::ComplexEventEndTime ComplexEventEndTime_388(FIX::UTCTIMEONLY(7, 52, 44));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_388);
        ComplexEventTimes_NoComplexEventTimes_388.insert(ComplexEventEndTime_388.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_388(FIX::UTCTIMEONLY(12, 38, 33));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_388);
        ComplexEventTimes_NoComplexEventTimes_388.insert(ComplexEventStartTime_388.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_388);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_389;
        FIX::ComplexEventEndTime ComplexEventEndTime_389(FIX::UTCTIMEONLY(2, 30, 6));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_389);
        ComplexEventTimes_NoComplexEventTimes_389.insert(ComplexEventEndTime_389.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_389(FIX::UTCTIMEONLY(21, 40, 48));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_389);
        ComplexEventTimes_NoComplexEventTimes_389.insert(ComplexEventStartTime_389.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_389);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_100;
    FIX::EventDate EventDate_100("LOCALMKTDATE_226183772");
    noEvents_0_0.set(EventDate_100);
    EvntGrp_NoEvents_100.insert(EventDate_100.getString());
    FIX::EventPx EventPx_100;
    EventPx_100.setString("6784277");
    noEvents_0_0.set(EventPx_100);
    EvntGrp_NoEvents_100.insert(EventPx_100.getString());
    FIX::EventText EventText_100("STRING_1994944311");
    noEvents_0_0.set(EventText_100);
    EvntGrp_NoEvents_100.insert(EventText_100.getString());
    FIX::EventTime EventTime_100(FIX::UTCTIMESTAMP(5, 57, 58, 5, 62000));
    noEvents_0_0.set(EventTime_100);
    EvntGrp_NoEvents_100.insert(EventTime_100.getString());
    FIX::EventType EventType_100(9);
    noEvents_0_0.set(EventType_100);
    EvntGrp_NoEvents_100.insert(EventType_100.getString());
    all_values.push_back(EvntGrp_NoEvents_100);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_92;
    FIX::InstrumentPartyID InstrumentPartyID_92("STRING_1759940804");
    noInstrumentParties_0_0.set(InstrumentPartyID_92);
    InstrumentParties_NoInstrumentParties_92.insert(InstrumentPartyID_92.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_92('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_92);
    InstrumentParties_NoInstrumentParties_92.insert(InstrumentPartyIDSource_92.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_92(1482325909);
    noInstrumentParties_0_0.set(InstrumentPartyRole_92);
    InstrumentParties_NoInstrumentParties_92.insert(InstrumentPartyRole_92.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_92);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183;
      FIX::InstrumentPartySubID InstrumentPartySubID_183("STRING_1379479476");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_183);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183.insert(InstrumentPartySubID_183.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_183(1456782325);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_183);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183.insert(InstrumentPartySubIDType_183.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184;
      FIX::InstrumentPartySubID InstrumentPartySubID_184("STRING_39054053");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_184);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184.insert(InstrumentPartySubID_184.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_184(227295041);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_184);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184.insert(InstrumentPartySubIDType_184.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185;
      FIX::InstrumentPartySubID InstrumentPartySubID_185("STRING_1250818495");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_185);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185.insert(InstrumentPartySubID_185.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_185(1369975106);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_185);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185.insert(InstrumentPartySubIDType_185.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_97;
    FIX::SecurityAltID SecurityAltID_97("STRING_1534736266");
    noSecurityAltID_0_0.set(SecurityAltID_97);
    SecAltIDGrp_NoSecurityAltID_97.insert(SecurityAltID_97.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_97("STRING_1935026936");
    noSecurityAltID_0_0.set(SecurityAltIDSource_97);
    SecAltIDGrp_NoSecurityAltID_97.insert(SecurityAltIDSource_97.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_97);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_98;
    FIX::SecurityAltID SecurityAltID_98("STRING_1874157398");
    noSecurityAltID_0_1.set(SecurityAltID_98);
    SecAltIDGrp_NoSecurityAltID_98.insert(SecurityAltID_98.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_98("STRING_2030522156");
    noSecurityAltID_0_1.set(SecurityAltIDSource_98);
    SecAltIDGrp_NoSecurityAltID_98.insert(SecurityAltIDSource_98.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_98);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_99;
    FIX::SecurityAltID SecurityAltID_99("STRING_1834095598");
    noSecurityAltID_0_2.set(SecurityAltID_99);
    SecAltIDGrp_NoSecurityAltID_99.insert(SecurityAltID_99.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_99("STRING_2091174198");
    noSecurityAltID_0_2.set(SecurityAltIDSource_99);
    SecAltIDGrp_NoSecurityAltID_99.insert(SecurityAltIDSource_99.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_99);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_100;
  FIX::SecurityXML SecurityXML_101("XMLDATA_1030565016");
  msg.set(SecurityXML_101);
  FIX::SecurityXMLLen SecurityXMLLen_50(1454181476);
  msg.set(SecurityXMLLen_50);
  FIX::SecurityXMLSchema SecurityXMLSchema_50("STRING_169874322");
  msg.set(SecurityXMLSchema_50);
  SecurityXML_100.insert(SecurityXMLSchema_50.getString());
  all_values.push_back(SecurityXML_100);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_91;
    FIX::PartyID PartyID_91("STRING_1301642139");
    noPartyIDs_0_0.set(PartyID_91);
    Parties_NoPartyIDs_91.insert(PartyID_91.getString());
    FIX::PartyIDSource PartyIDSource_91('5');
    noPartyIDs_0_0.set(PartyIDSource_91);
    Parties_NoPartyIDs_91.insert(PartyIDSource_91.getString());
    FIX::PartyRole PartyRole_91(69);
    noPartyIDs_0_0.set(PartyRole_91);
    Parties_NoPartyIDs_91.insert(PartyRole_91.getString());
    all_values.push_back(Parties_NoPartyIDs_91);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_177;
      FIX::PartySubID PartySubID_177("STRING_495739009");
      noPartySubIDs_0_1_0.set(PartySubID_177);
      PtysSubGrp_NoPartySubIDs_177.insert(PartySubID_177.getString());
      FIX::PartySubIDType PartySubIDType_177(20);
      noPartySubIDs_0_1_0.set(PartySubIDType_177);
      PtysSubGrp_NoPartySubIDs_177.insert(PartySubIDType_177.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_177);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_178;
      FIX::PartySubID PartySubID_178("STRING_86767498");
      noPartySubIDs_0_1_1.set(PartySubID_178);
      PtysSubGrp_NoPartySubIDs_178.insert(PartySubID_178.getString());
      FIX::PartySubIDType PartySubIDType_178(26);
      noPartySubIDs_0_1_1.set(PartySubIDType_178);
      PtysSubGrp_NoPartySubIDs_178.insert(PartySubIDType_178.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_178);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_92;
    FIX::PartyID PartyID_92("STRING_74042465");
    noPartyIDs_0_1.set(PartyID_92);
    Parties_NoPartyIDs_92.insert(PartyID_92.getString());
    FIX::PartyIDSource PartyIDSource_92('3');
    noPartyIDs_0_1.set(PartyIDSource_92);
    Parties_NoPartyIDs_92.insert(PartyIDSource_92.getString());
    FIX::PartyRole PartyRole_92(39);
    noPartyIDs_0_1.set(PartyRole_92);
    Parties_NoPartyIDs_92.insert(PartyRole_92.getString());
    all_values.push_back(Parties_NoPartyIDs_92);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_179;
      FIX::PartySubID PartySubID_179("STRING_1374559482");
      noPartySubIDs_1_1_0.set(PartySubID_179);
      PtysSubGrp_NoPartySubIDs_179.insert(PartySubID_179.getString());
      FIX::PartySubIDType PartySubIDType_179(28);
      noPartySubIDs_1_1_0.set(PartySubIDType_179);
      PtysSubGrp_NoPartySubIDs_179.insert(PartySubIDType_179.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_179);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_180;
      FIX::PartySubID PartySubID_180("STRING_1648478845");
      noPartySubIDs_1_1_1.set(PartySubID_180);
      PtysSubGrp_NoPartySubIDs_180.insert(PartySubID_180.getString());
      FIX::PartySubIDType PartySubIDType_180(18);
      noPartySubIDs_1_1_1.set(PartySubIDType_180);
      PtysSubGrp_NoPartySubIDs_180.insert(PartySubIDType_180.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_180);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassCancelRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_8;
    FIX::TargetPartyID TargetPartyID_8("STRING_1875773886");
    noTargetPartyIDs_0_0.set(TargetPartyID_8);
    TargetParties_NoTargetPartyIDs_8.insert(TargetPartyID_8.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_8('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_8);
    TargetParties_NoTargetPartyIDs_8.insert(TargetPartyIDSource_8.getString());
    FIX::TargetPartyRole TargetPartyRole_8(1809052084);
    noTargetPartyIDs_0_0.set(TargetPartyRole_8);
    TargetParties_NoTargetPartyIDs_8.insert(TargetPartyRole_8.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_8);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_9;
    FIX::TargetPartyID TargetPartyID_9("STRING_677481510");
    noTargetPartyIDs_0_1.set(TargetPartyID_9);
    TargetParties_NoTargetPartyIDs_9.insert(TargetPartyID_9.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_9('1');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_9);
    TargetParties_NoTargetPartyIDs_9.insert(TargetPartyIDSource_9.getString());
    FIX::TargetPartyRole TargetPartyRole_9(1596595373);
    noTargetPartyIDs_0_1.set(TargetPartyRole_9);
    TargetParties_NoTargetPartyIDs_9.insert(TargetPartyRole_9.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_9);

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_10;
    FIX::TargetPartyID TargetPartyID_10("STRING_404155260");
    noTargetPartyIDs_0_2.set(TargetPartyID_10);
    TargetParties_NoTargetPartyIDs_10.insert(TargetPartyID_10.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_10('1');
    noTargetPartyIDs_0_2.set(TargetPartyIDSource_10);
    TargetParties_NoTargetPartyIDs_10.insert(TargetPartyIDSource_10.getString());
    FIX::TargetPartyRole TargetPartyRole_10(1283207323);
    noTargetPartyIDs_0_2.set(TargetPartyRole_10);
    TargetParties_NoTargetPartyIDs_10.insert(TargetPartyRole_10.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_10);

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_77;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_77("DATA_347845810");
  msg.set(EncodedUnderlyingIssuer_77);
  UnderlyingInstrument_77.insert(EncodedUnderlyingIssuer_77.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_77(88049149);
  msg.set(EncodedUnderlyingIssuerLen_77);
  UnderlyingInstrument_77.insert(EncodedUnderlyingIssuerLen_77.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_77("DATA_589905151");
  msg.set(EncodedUnderlyingSecurityDesc_77);
  UnderlyingInstrument_77.insert(EncodedUnderlyingSecurityDesc_77.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_77(517720132);
  msg.set(EncodedUnderlyingSecurityDescLen_77);
  UnderlyingInstrument_77.insert(EncodedUnderlyingSecurityDescLen_77.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_77;
  UnderlyingAdjustedQuantity_77.setString("17970419");
  msg.set(UnderlyingAdjustedQuantity_77);
  UnderlyingInstrument_77.insert(UnderlyingAdjustedQuantity_77.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_77;
  UnderlyingAllocationPercent_77.setString("72.900000");
  msg.set(UnderlyingAllocationPercent_77);
  UnderlyingInstrument_77.insert(UnderlyingAllocationPercent_77.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_77;
  UnderlyingAttachmentPoint_77.setString("65.030000");
  msg.set(UnderlyingAttachmentPoint_77);
  UnderlyingInstrument_77.insert(UnderlyingAttachmentPoint_77.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_77("STRING_523012510");
  msg.set(UnderlyingCFICode_77);
  UnderlyingInstrument_77.insert(UnderlyingCFICode_77.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_77("STRING_1203074919");
  msg.set(UnderlyingCPProgram_77);
  UnderlyingInstrument_77.insert(UnderlyingCPProgram_77.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_77("STRING_1134975512");
  msg.set(UnderlyingCPRegType_77);
  UnderlyingInstrument_77.insert(UnderlyingCPRegType_77.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_77;
  UnderlyingCapValue_77.setString("1071651");
  msg.set(UnderlyingCapValue_77);
  UnderlyingInstrument_77.insert(UnderlyingCapValue_77.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_77;
  UnderlyingCashAmount_77.setString("12898424");
  msg.set(UnderlyingCashAmount_77);
  UnderlyingInstrument_77.insert(UnderlyingCashAmount_77.getString());
  FIX::UnderlyingCashType UnderlyingCashType_77("STRING_DIFF");
  msg.set(UnderlyingCashType_77);
  UnderlyingInstrument_77.insert(UnderlyingCashType_77.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_77;
  UnderlyingContractMultiplier_77.setString("1812075");
  msg.set(UnderlyingContractMultiplier_77);
  UnderlyingInstrument_77.insert(UnderlyingContractMultiplier_77.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_77(1182075990);
  msg.set(UnderlyingContractMultiplierUnit_77);
  UnderlyingInstrument_77.insert(UnderlyingContractMultiplierUnit_77.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_77("COUNTRY_133929255");
  msg.set(UnderlyingCountryOfIssue_77);
  UnderlyingInstrument_77.insert(UnderlyingCountryOfIssue_77.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_77("LOCALMKTDATE_450206941");
  msg.set(UnderlyingCouponPaymentDate_77);
  UnderlyingInstrument_77.insert(UnderlyingCouponPaymentDate_77.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_77;
  UnderlyingCouponRate_77.setString("18.240000");
  msg.set(UnderlyingCouponRate_77);
  UnderlyingInstrument_77.insert(UnderlyingCouponRate_77.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_77("STRING_533952180");
  msg.set(UnderlyingCreditRating_77);
  UnderlyingInstrument_77.insert(UnderlyingCreditRating_77.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_77("JPY");
  msg.set(UnderlyingCurrency_77);
  UnderlyingInstrument_77.insert(UnderlyingCurrency_77.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_77;
  UnderlyingCurrentValue_77.setString("9730291");
  msg.set(UnderlyingCurrentValue_77);
  UnderlyingInstrument_77.insert(UnderlyingCurrentValue_77.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_77;
  UnderlyingDetachmentPoint_77.setString("60.250000");
  msg.set(UnderlyingDetachmentPoint_77);
  UnderlyingInstrument_77.insert(UnderlyingDetachmentPoint_77.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_77;
  UnderlyingDirtyPrice_77.setString("8802029");
  msg.set(UnderlyingDirtyPrice_77);
  UnderlyingInstrument_77.insert(UnderlyingDirtyPrice_77.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_77;
  UnderlyingEndPrice_77.setString("6345975");
  msg.set(UnderlyingEndPrice_77);
  UnderlyingInstrument_77.insert(UnderlyingEndPrice_77.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_77;
  UnderlyingEndValue_77.setString("3569738");
  msg.set(UnderlyingEndValue_77);
  UnderlyingInstrument_77.insert(UnderlyingEndValue_77.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_77(54648616);
  msg.set(UnderlyingExerciseStyle_77);
  UnderlyingInstrument_77.insert(UnderlyingExerciseStyle_77.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_77;
  UnderlyingFXRate_77.setString("837093");
  msg.set(UnderlyingFXRate_77);
  UnderlyingInstrument_77.insert(UnderlyingFXRate_77.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_77('D');
  msg.set(UnderlyingFXRateCalc_77);
  UnderlyingInstrument_77.insert(UnderlyingFXRateCalc_77.getString());
  FIX::UnderlyingFactor UnderlyingFactor_77;
  UnderlyingFactor_77.setString("12596163");
  msg.set(UnderlyingFactor_77);
  UnderlyingInstrument_77.insert(UnderlyingFactor_77.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_77(1366916643);
  msg.set(UnderlyingFlowScheduleType_77);
  UnderlyingInstrument_77.insert(UnderlyingFlowScheduleType_77.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_77("STRING_1108974958");
  msg.set(UnderlyingInstrRegistry_77);
  UnderlyingInstrument_77.insert(UnderlyingInstrRegistry_77.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_77("LOCALMKTDATE_1347665546");
  msg.set(UnderlyingIssueDate_77);
  UnderlyingInstrument_77.insert(UnderlyingIssueDate_77.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_77("STRING_1956821794");
  msg.set(UnderlyingIssuer_77);
  UnderlyingInstrument_77.insert(UnderlyingIssuer_77.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_77("STRING_1626695091");
  msg.set(UnderlyingLocaleOfIssue_77);
  UnderlyingInstrument_77.insert(UnderlyingLocaleOfIssue_77.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_77("LOCALMKTDATE_997223814");
  msg.set(UnderlyingMaturityDate_77);
  UnderlyingInstrument_77.insert(UnderlyingMaturityDate_77.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_77("MONTHYEAR_1700885437");
  msg.set(UnderlyingMaturityMonthYear_77);
  UnderlyingInstrument_77.insert(UnderlyingMaturityMonthYear_77.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_77("TZTIMEONLY_118447946");
  msg.set(UnderlyingMaturityTime_77);
  UnderlyingInstrument_77.insert(UnderlyingMaturityTime_77.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_77;
  UnderlyingNotionalPercentageOutstanding_77.setString("63.240000");
  msg.set(UnderlyingNotionalPercentageOutstanding_77);
  UnderlyingInstrument_77.insert(UnderlyingNotionalPercentageOutstanding_77.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_77('7');
  msg.set(UnderlyingOptAttribute_77);
  UnderlyingInstrument_77.insert(UnderlyingOptAttribute_77.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_77;
  UnderlyingOriginalNotionalPercentageOutstanding_77.setString("34.590000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_77);
  UnderlyingInstrument_77.insert(UnderlyingOriginalNotionalPercentageOutstanding_77.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_77("STRING_1627401431");
  msg.set(UnderlyingPriceUnitOfMeasure_77);
  UnderlyingInstrument_77.insert(UnderlyingPriceUnitOfMeasure_77.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_77;
  UnderlyingPriceUnitOfMeasureQty_77.setString("20463191");
  msg.set(UnderlyingPriceUnitOfMeasureQty_77);
  UnderlyingInstrument_77.insert(UnderlyingPriceUnitOfMeasureQty_77.getString());
  FIX::UnderlyingProduct UnderlyingProduct_77(1007905440);
  msg.set(UnderlyingProduct_77);
  UnderlyingInstrument_77.insert(UnderlyingProduct_77.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_77(1808609003);
  msg.set(UnderlyingPutOrCall_77);
  UnderlyingInstrument_77.insert(UnderlyingPutOrCall_77.getString());
  FIX::UnderlyingPx UnderlyingPx_77;
  UnderlyingPx_77.setString("10809114");
  msg.set(UnderlyingPx_77);
  UnderlyingInstrument_77.insert(UnderlyingPx_77.getString());
  FIX::UnderlyingQty UnderlyingQty_77;
  UnderlyingQty_77.setString("11418346");
  msg.set(UnderlyingQty_77);
  UnderlyingInstrument_77.insert(UnderlyingQty_77.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_77("LOCALMKTDATE_111332296");
  msg.set(UnderlyingRedemptionDate_77);
  UnderlyingInstrument_77.insert(UnderlyingRedemptionDate_77.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_77("STRING_1490063293");
  msg.set(UnderlyingRepoCollateralSecurityType_77);
  UnderlyingInstrument_77.insert(UnderlyingRepoCollateralSecurityType_77.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_77;
  UnderlyingRepurchaseRate_77.setString("68.760000");
  msg.set(UnderlyingRepurchaseRate_77);
  UnderlyingInstrument_77.insert(UnderlyingRepurchaseRate_77.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_77(62534435);
  msg.set(UnderlyingRepurchaseTerm_77);
  UnderlyingInstrument_77.insert(UnderlyingRepurchaseTerm_77.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_77("STRING_435589629");
  msg.set(UnderlyingRestructuringType_77);
  UnderlyingInstrument_77.insert(UnderlyingRestructuringType_77.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_77("STRING_501332387");
  msg.set(UnderlyingSecurityDesc_77);
  UnderlyingInstrument_77.insert(UnderlyingSecurityDesc_77.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_77("EXCHANGE_1889510460");
  msg.set(UnderlyingSecurityExchange_77);
  UnderlyingInstrument_77.insert(UnderlyingSecurityExchange_77.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_77("STRING_1315792620");
  msg.set(UnderlyingSecurityID_77);
  UnderlyingInstrument_77.insert(UnderlyingSecurityID_77.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_77("STRING_1135929982");
  msg.set(UnderlyingSecurityIDSource_77);
  UnderlyingInstrument_77.insert(UnderlyingSecurityIDSource_77.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_77("STRING_99000699");
  msg.set(UnderlyingSecuritySubType_77);
  UnderlyingInstrument_77.insert(UnderlyingSecuritySubType_77.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_77("STRING_1370441236");
  msg.set(UnderlyingSecurityType_77);
  UnderlyingInstrument_77.insert(UnderlyingSecurityType_77.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_77("STRING_1219639303");
  msg.set(UnderlyingSeniority_77);
  UnderlyingInstrument_77.insert(UnderlyingSeniority_77.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_77("STRING_860129847");
  msg.set(UnderlyingSettlMethod_77);
  UnderlyingInstrument_77.insert(UnderlyingSettlMethod_77.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_77(2);
  msg.set(UnderlyingSettlementType_77);
  UnderlyingInstrument_77.insert(UnderlyingSettlementType_77.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_77;
  UnderlyingStartValue_77.setString("4390722");
  msg.set(UnderlyingStartValue_77);
  UnderlyingInstrument_77.insert(UnderlyingStartValue_77.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_77("STRING_1969104806");
  msg.set(UnderlyingStateOrProvinceOfIssue_77);
  UnderlyingInstrument_77.insert(UnderlyingStateOrProvinceOfIssue_77.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_77("CAN");
  msg.set(UnderlyingStrikeCurrency_77);
  UnderlyingInstrument_77.insert(UnderlyingStrikeCurrency_77.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_77;
  UnderlyingStrikePrice_77.setString("14483162");
  msg.set(UnderlyingStrikePrice_77);
  UnderlyingInstrument_77.insert(UnderlyingStrikePrice_77.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_77("STRING_679979697");
  msg.set(UnderlyingSymbol_77);
  UnderlyingInstrument_77.insert(UnderlyingSymbol_77.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_77("STRING_1949295882");
  msg.set(UnderlyingSymbolSfx_77);
  UnderlyingInstrument_77.insert(UnderlyingSymbolSfx_77.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_77("STRING_1566764195");
  msg.set(UnderlyingTimeUnit_77);
  UnderlyingInstrument_77.insert(UnderlyingTimeUnit_77.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_77("STRING_52732374");
  msg.set(UnderlyingUnitOfMeasure_77);
  UnderlyingInstrument_77.insert(UnderlyingUnitOfMeasure_77.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_77;
  UnderlyingUnitOfMeasureQty_77.setString("5582889");
  msg.set(UnderlyingUnitOfMeasureQty_77);
  UnderlyingInstrument_77.insert(UnderlyingUnitOfMeasureQty_77.getString());
  all_values.push_back(UnderlyingInstrument_77);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_152;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_152("STRING_1680133805");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_152);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_152.insert(UnderlyingSecurityAltID_152.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_152("STRING_457124420");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_152);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_152.insert(UnderlyingSecurityAltIDSource_152.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_152);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_153;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_153("STRING_1680609447");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_153);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_153.insert(UnderlyingSecurityAltID_153.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_153("STRING_1341259161");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_153);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_153.insert(UnderlyingSecurityAltIDSource_153.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_153);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_154;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_154("STRING_1538035889");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltID_154);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_154.insert(UnderlyingSecurityAltID_154.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_154("STRING_674960494");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltIDSource_154);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_154.insert(UnderlyingSecurityAltIDSource_154.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_154);

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_144;
    FIX::UnderlyingStipType UnderlyingStipType_144("STRING_880615534");
    noUnderlyingStips_0_0.set(UnderlyingStipType_144);
    UnderlyingStipulations_NoUnderlyingStips_144.insert(UnderlyingStipType_144.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_144("STRING_203263722");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_144);
    UnderlyingStipulations_NoUnderlyingStips_144.insert(UnderlyingStipValue_144.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_144);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_145;
    FIX::UnderlyingStipType UnderlyingStipType_145("STRING_1515125892");
    noUnderlyingStips_0_1.set(UnderlyingStipType_145);
    UnderlyingStipulations_NoUnderlyingStips_145.insert(UnderlyingStipType_145.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_145("STRING_1316205163");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_145);
    UnderlyingStipulations_NoUnderlyingStips_145.insert(UnderlyingStipValue_145.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_145);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_152;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_152("STRING_1257152704");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_152);
    UndlyInstrumentParties_NoUndlyInstrumentParties_152.insert(UnderlyingInstrumentPartyID_152.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_152('4');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_152);
    UndlyInstrumentParties_NoUndlyInstrumentParties_152.insert(UnderlyingInstrumentPartyIDSource_152.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_152(1840526092);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_152);
    UndlyInstrumentParties_NoUndlyInstrumentParties_152.insert(UnderlyingInstrumentPartyRole_152.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_152);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_292("STRING_1854955371");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_292);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292.insert(UnderlyingInstrumentPartySubID_292.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_292(912681747);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_292);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292.insert(UnderlyingInstrumentPartySubIDType_292.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_293("STRING_68799603");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_293);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293.insert(UnderlyingInstrumentPartySubID_293.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_293(190045708);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_293);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293.insert(UnderlyingInstrumentPartySubIDType_293.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_294("STRING_1351754045");
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubID_294);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294.insert(UnderlyingInstrumentPartySubID_294.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_294(2037904409);
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubIDType_294);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294.insert(UnderlyingInstrumentPartySubIDType_294.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_153;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_153("STRING_2020285239");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_153);
    UndlyInstrumentParties_NoUndlyInstrumentParties_153.insert(UnderlyingInstrumentPartyID_153.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_153('1');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_153);
    UndlyInstrumentParties_NoUndlyInstrumentParties_153.insert(UnderlyingInstrumentPartyIDSource_153.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_153(1338737010);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_153);
    UndlyInstrumentParties_NoUndlyInstrumentParties_153.insert(UnderlyingInstrumentPartyRole_153.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_153);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_295("STRING_1401976724");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_295);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295.insert(UnderlyingInstrumentPartySubID_295.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_295(758017558);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_295);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295.insert(UnderlyingInstrumentPartySubIDType_295.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_296("STRING_605513663");
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubID_296);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296.insert(UnderlyingInstrumentPartySubID_296.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_296(1960265667);
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubIDType_296);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296.insert(UnderlyingInstrumentPartySubIDType_296.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_297("STRING_1430721564");
      noUndlyInstrumentPartySubIDs_1_1_2.set(UnderlyingInstrumentPartySubID_297);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297.insert(UnderlyingInstrumentPartySubID_297.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_297(138163820);
      noUndlyInstrumentPartySubIDs_1_1_2.set(UnderlyingInstrumentPartySubIDType_297);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297.insert(UnderlyingInstrumentPartySubIDType_297.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_154;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_154("STRING_269906439");
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyID_154);
    UndlyInstrumentParties_NoUndlyInstrumentParties_154.insert(UnderlyingInstrumentPartyID_154.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_154('9');
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyIDSource_154);
    UndlyInstrumentParties_NoUndlyInstrumentParties_154.insert(UnderlyingInstrumentPartyIDSource_154.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_154(1479422981);
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyRole_154);
    UndlyInstrumentParties_NoUndlyInstrumentParties_154.insert(UnderlyingInstrumentPartyRole_154.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_154);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_298("STRING_1638807858");
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubID_298);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298.insert(UnderlyingInstrumentPartySubID_298.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_298(784530791);
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubIDType_298);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298.insert(UnderlyingInstrumentPartySubIDType_298.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298);

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_299("STRING_541074214");
      noUndlyInstrumentPartySubIDs_2_1_1.set(UnderlyingInstrumentPartySubID_299);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299.insert(UnderlyingInstrumentPartySubID_299.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_299(1842071580);
      noUndlyInstrumentPartySubIDs_2_1_1.set(UnderlyingInstrumentPartySubIDType_299);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299.insert(UnderlyingInstrumentPartySubIDType_299.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299);

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_300("STRING_152173035");
      noUndlyInstrumentPartySubIDs_2_1_2.set(UnderlyingInstrumentPartySubID_300);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300.insert(UnderlyingInstrumentPartySubID_300.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_300(1857279377);
      noUndlyInstrumentPartySubIDs_2_1_2.set(UnderlyingInstrumentPartySubIDType_300);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300.insert(UnderlyingInstrumentPartySubIDType_300.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300);

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
