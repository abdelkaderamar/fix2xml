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
  FIX::ClOrdID ClOrdID_40("STRING_792963941");
  msg.set(ClOrdID_40);
  OrderMassCancelRequest_0.insert(ClOrdID_40.getString());
  FIX::EncodedText EncodedText_75("DATA_860200960");
  msg.set(EncodedText_75);
  OrderMassCancelRequest_0.insert(EncodedText_75.getString());
  FIX::EncodedTextLen EncodedTextLen_75(779216732);
  msg.set(EncodedTextLen_75);
  OrderMassCancelRequest_0.insert(EncodedTextLen_75.getString());
  FIX::MarketID MarketID_13("EXCHANGE_823108578");
  msg.set(MarketID_13);
  OrderMassCancelRequest_0.insert(MarketID_13.getString());
  FIX::MarketSegmentID MarketSegmentID_13("STRING_1156179053");
  msg.set(MarketSegmentID_13);
  OrderMassCancelRequest_0.insert(MarketSegmentID_13.getString());
  FIX::MassCancelRequestType MassCancelRequestType_1('B');
  msg.set(MassCancelRequestType_1);
  OrderMassCancelRequest_0.insert(MassCancelRequestType_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_38("STRING_2026346875");
  msg.set(SecondaryClOrdID_38);
  OrderMassCancelRequest_0.insert(SecondaryClOrdID_38.getString());
  FIX::Side Side_38('5');
  msg.set(Side_38);
  OrderMassCancelRequest_0.insert(Side_38.getString());
  FIX::Text Text_75("STRING_161280046");
  msg.set(Text_75);
  OrderMassCancelRequest_0.insert(Text_75.getString());
  FIX::TradingSessionID TradingSessionID_58("STRING_4");
  msg.set(TradingSessionID_58);
  OrderMassCancelRequest_0.insert(TradingSessionID_58.getString());
  FIX::TradingSessionSubID TradingSessionSubID_58("STRING_4");
  msg.set(TradingSessionSubID_58);
  OrderMassCancelRequest_0.insert(TradingSessionSubID_58.getString());
  FIX::TransactTime TransactTime_45(FIX::UTCTIMESTAMP(2, 28, 51, 14, 9, 2011));
  msg.set(TransactTime_45);
  OrderMassCancelRequest_0.insert(TransactTime_45.getString());
  all_values.push_back(OrderMassCancelRequest_0);

  // Instrument
  multiset<string> Instrument_54;
  FIX::AttachmentPoint AttachmentPoint_54;
  AttachmentPoint_54.setString("0.240000");
  msg.set(AttachmentPoint_54);
  Instrument_54.insert(AttachmentPoint_54.getString());
  FIX::CFICode CFICode_54("STRING_685118086");
  msg.set(CFICode_54);
  Instrument_54.insert(CFICode_54.getString());
  FIX::CPProgram CPProgram_54(99);
  msg.set(CPProgram_54);
  Instrument_54.insert(CPProgram_54.getString());
  FIX::CPRegType CPRegType_54("STRING_1456296201");
  msg.set(CPRegType_54);
  Instrument_54.insert(CPRegType_54.getString());
  FIX::CapPrice CapPrice_54;
  CapPrice_54.setString("7964363");
  msg.set(CapPrice_54);
  Instrument_54.insert(CapPrice_54.getString());
  FIX::ContractMultiplier ContractMultiplier_54;
  ContractMultiplier_54.setString("18659293");
  msg.set(ContractMultiplier_54);
  Instrument_54.insert(ContractMultiplier_54.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_54(2);
  msg.set(ContractMultiplierUnit_54);
  Instrument_54.insert(ContractMultiplierUnit_54.getString());
  FIX::ContractSettlMonth ContractSettlMonth_54("MONTHYEAR_1287123962");
  msg.set(ContractSettlMonth_54);
  Instrument_54.insert(ContractSettlMonth_54.getString());
  FIX::CountryOfIssue CountryOfIssue_54("COUNTRY_507082217");
  msg.set(CountryOfIssue_54);
  Instrument_54.insert(CountryOfIssue_54.getString());
  FIX::CouponPaymentDate CouponPaymentDate_54("LOCALMKTDATE_228668556");
  msg.set(CouponPaymentDate_54);
  Instrument_54.insert(CouponPaymentDate_54.getString());
  FIX::CouponRate CouponRate_54;
  CouponRate_54.setString("91.930000");
  msg.set(CouponRate_54);
  Instrument_54.insert(CouponRate_54.getString());
  FIX::CreditRating CreditRating_54("STRING_1244254748");
  msg.set(CreditRating_54);
  Instrument_54.insert(CreditRating_54.getString());
  FIX::DatedDate DatedDate_54("LOCALMKTDATE_113902416");
  msg.set(DatedDate_54);
  Instrument_54.insert(DatedDate_54.getString());
  FIX::DetachmentPoint DetachmentPoint_54;
  DetachmentPoint_54.setString("94.860000");
  msg.set(DetachmentPoint_54);
  Instrument_54.insert(DetachmentPoint_54.getString());
  FIX::EncodedIssuer EncodedIssuer_54("DATA_2104455708");
  msg.set(EncodedIssuer_54);
  Instrument_54.insert(EncodedIssuer_54.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_54(893119148);
  msg.set(EncodedIssuerLen_54);
  Instrument_54.insert(EncodedIssuerLen_54.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_54("DATA_1042638065");
  msg.set(EncodedSecurityDesc_54);
  Instrument_54.insert(EncodedSecurityDesc_54.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_54(1113151114);
  msg.set(EncodedSecurityDescLen_54);
  Instrument_54.insert(EncodedSecurityDescLen_54.getString());
  FIX::ExerciseStyle ExerciseStyle_54(1);
  msg.set(ExerciseStyle_54);
  Instrument_54.insert(ExerciseStyle_54.getString());
  FIX::Factor Factor_54;
  Factor_54.setString("9215012");
  msg.set(Factor_54);
  Instrument_54.insert(Factor_54.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_54(true);
  msg.set(FlexProductEligibilityIndicator_54);
  Instrument_54.insert(FlexProductEligibilityIndicator_54.getString());
  FIX::FlexibleIndicator FlexibleIndicator_54(false);
  msg.set(FlexibleIndicator_54);
  Instrument_54.insert(FlexibleIndicator_54.getString());
  FIX::FloorPrice FloorPrice_54;
  FloorPrice_54.setString("12283641");
  msg.set(FloorPrice_54);
  Instrument_54.insert(FloorPrice_54.getString());
  FIX::FlowScheduleType FlowScheduleType_54(2);
  msg.set(FlowScheduleType_54);
  Instrument_54.insert(FlowScheduleType_54.getString());
  FIX::InstrRegistry InstrRegistry_54("STRING_1091179211");
  msg.set(InstrRegistry_54);
  Instrument_54.insert(InstrRegistry_54.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_54('1');
  msg.set(InstrmtAssignmentMethod_54);
  Instrument_54.insert(InstrmtAssignmentMethod_54.getString());
  FIX::InterestAccrualDate InterestAccrualDate_54("LOCALMKTDATE_775891742");
  msg.set(InterestAccrualDate_54);
  Instrument_54.insert(InterestAccrualDate_54.getString());
  FIX::IssueDate IssueDate_54("LOCALMKTDATE_1438810982");
  msg.set(IssueDate_54);
  Instrument_54.insert(IssueDate_54.getString());
  FIX::Issuer Issuer_54("STRING_1174847501");
  msg.set(Issuer_54);
  Instrument_54.insert(Issuer_54.getString());
  FIX::ListMethod ListMethod_54(0);
  msg.set(ListMethod_54);
  Instrument_54.insert(ListMethod_54.getString());
  FIX::LocaleOfIssue LocaleOfIssue_54("STRING_951653699");
  msg.set(LocaleOfIssue_54);
  Instrument_54.insert(LocaleOfIssue_54.getString());
  FIX::MaturityDate MaturityDate_54("LOCALMKTDATE_470673878");
  msg.set(MaturityDate_54);
  Instrument_54.insert(MaturityDate_54.getString());
  FIX::MaturityMonthYear MaturityMonthYear_54("MONTHYEAR_974142300");
  msg.set(MaturityMonthYear_54);
  Instrument_54.insert(MaturityMonthYear_54.getString());
  FIX::MaturityTime MaturityTime_54("TZTIMEONLY_34847789");
  msg.set(MaturityTime_54);
  Instrument_54.insert(MaturityTime_54.getString());
  FIX::MinPriceIncrement MinPriceIncrement_54;
  MinPriceIncrement_54.setString("19269700");
  msg.set(MinPriceIncrement_54);
  Instrument_54.insert(MinPriceIncrement_54.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_54;
  MinPriceIncrementAmount_54.setString("17705786");
  msg.set(MinPriceIncrementAmount_54);
  Instrument_54.insert(MinPriceIncrementAmount_54.getString());
  FIX::NTPositionLimit NTPositionLimit_54(1900777124);
  msg.set(NTPositionLimit_54);
  Instrument_54.insert(NTPositionLimit_54.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_54;
  NotionalPercentageOutstanding_54.setString("19.350000");
  msg.set(NotionalPercentageOutstanding_54);
  Instrument_54.insert(NotionalPercentageOutstanding_54.getString());
  FIX::OptAttribute OptAttribute_54('9');
  msg.set(OptAttribute_54);
  Instrument_54.insert(OptAttribute_54.getString());
  FIX::OptPayoutAmount OptPayoutAmount_54;
  OptPayoutAmount_54.setString("2603756");
  msg.set(OptPayoutAmount_54);
  Instrument_54.insert(OptPayoutAmount_54.getString());
  FIX::OptPayoutType OptPayoutType_54(1);
  msg.set(OptPayoutType_54);
  Instrument_54.insert(OptPayoutType_54.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_54;
  OriginalNotionalPercentageOutstanding_54.setString("45.370000");
  msg.set(OriginalNotionalPercentageOutstanding_54);
  Instrument_54.insert(OriginalNotionalPercentageOutstanding_54.getString());
  FIX::Pool Pool_54("STRING_1504630441");
  msg.set(Pool_54);
  Instrument_54.insert(Pool_54.getString());
  FIX::PositionLimit PositionLimit_54(1967662908);
  msg.set(PositionLimit_54);
  Instrument_54.insert(PositionLimit_54.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_54("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_54);
  Instrument_54.insert(PriceQuoteMethod_54.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_54("STRING_1461602502");
  msg.set(PriceUnitOfMeasure_54);
  Instrument_54.insert(PriceUnitOfMeasure_54.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_54;
  PriceUnitOfMeasureQty_54.setString("7132984");
  msg.set(PriceUnitOfMeasureQty_54);
  Instrument_54.insert(PriceUnitOfMeasureQty_54.getString());
  FIX::Product Product_56(7);
  msg.set(Product_56);
  Instrument_54.insert(Product_56.getString());
  FIX::ProductComplex ProductComplex_54("STRING_427269968");
  msg.set(ProductComplex_54);
  Instrument_54.insert(ProductComplex_54.getString());
  FIX::PutOrCall PutOrCall_54(1);
  msg.set(PutOrCall_54);
  Instrument_54.insert(PutOrCall_54.getString());
  FIX::RedemptionDate RedemptionDate_54("LOCALMKTDATE_372969732");
  msg.set(RedemptionDate_54);
  Instrument_54.insert(RedemptionDate_54.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_54("STRING_2145445214");
  msg.set(RepoCollateralSecurityType_54);
  Instrument_54.insert(RepoCollateralSecurityType_54.getString());
  FIX::RepurchaseRate RepurchaseRate_54;
  RepurchaseRate_54.setString("41.720000");
  msg.set(RepurchaseRate_54);
  Instrument_54.insert(RepurchaseRate_54.getString());
  FIX::RepurchaseTerm RepurchaseTerm_54(1601333906);
  msg.set(RepurchaseTerm_54);
  Instrument_54.insert(RepurchaseTerm_54.getString());
  FIX::RestructuringType RestructuringType_54("STRING_FR");
  msg.set(RestructuringType_54);
  Instrument_54.insert(RestructuringType_54.getString());
  FIX::SecurityDesc SecurityDesc_54("STRING_894599735");
  msg.set(SecurityDesc_54);
  Instrument_54.insert(SecurityDesc_54.getString());
  FIX::SecurityExchange SecurityExchange_54("EXCHANGE_810486249");
  msg.set(SecurityExchange_54);
  Instrument_54.insert(SecurityExchange_54.getString());
  FIX::SecurityGroup SecurityGroup_54("STRING_1688051150");
  msg.set(SecurityGroup_54);
  Instrument_54.insert(SecurityGroup_54.getString());
  FIX::SecurityID SecurityID_54("STRING_185927070");
  msg.set(SecurityID_54);
  Instrument_54.insert(SecurityID_54.getString());
  FIX::SecurityIDSource SecurityIDSource_54("STRING_6");
  msg.set(SecurityIDSource_54);
  Instrument_54.insert(SecurityIDSource_54.getString());
  FIX::SecurityStatus SecurityStatus_54("STRING_1");
  msg.set(SecurityStatus_54);
  Instrument_54.insert(SecurityStatus_54.getString());
  FIX::SecuritySubType SecuritySubType_55("STRING_1137580769");
  msg.set(SecuritySubType_55);
  Instrument_54.insert(SecuritySubType_55.getString());
  FIX::SecurityType SecurityType_56("STRING_USTB");
  msg.set(SecurityType_56);
  Instrument_54.insert(SecurityType_56.getString());
  FIX::Seniority Seniority_54("STRING_SB");
  msg.set(Seniority_54);
  Instrument_54.insert(Seniority_54.getString());
  FIX::SettlMethod SettlMethod_54('P');
  msg.set(SettlMethod_54);
  Instrument_54.insert(SettlMethod_54.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_54("STRING_88010412");
  msg.set(SettleOnOpenFlag_54);
  Instrument_54.insert(SettleOnOpenFlag_54.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_54("STRING_426829045");
  msg.set(StateOrProvinceOfIssue_54);
  Instrument_54.insert(StateOrProvinceOfIssue_54.getString());
  FIX::StrikeCurrency StrikeCurrency_54("USD");
  msg.set(StrikeCurrency_54);
  Instrument_54.insert(StrikeCurrency_54.getString());
  FIX::StrikeMultiplier StrikeMultiplier_54;
  StrikeMultiplier_54.setString("13370480");
  msg.set(StrikeMultiplier_54);
  Instrument_54.insert(StrikeMultiplier_54.getString());
  FIX::StrikePrice StrikePrice_54;
  StrikePrice_54.setString("11860977");
  msg.set(StrikePrice_54);
  Instrument_54.insert(StrikePrice_54.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_54(3);
  msg.set(StrikePriceBoundaryMethod_54);
  Instrument_54.insert(StrikePriceBoundaryMethod_54.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_54;
  StrikePriceBoundaryPrecision_54.setString("25.740000");
  msg.set(StrikePriceBoundaryPrecision_54);
  Instrument_54.insert(StrikePriceBoundaryPrecision_54.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_54(2);
  msg.set(StrikePriceDeterminationMethod_54);
  Instrument_54.insert(StrikePriceDeterminationMethod_54.getString());
  FIX::StrikeValue StrikeValue_54;
  StrikeValue_54.setString("12395584");
  msg.set(StrikeValue_54);
  Instrument_54.insert(StrikeValue_54.getString());
  FIX::Symbol Symbol_54("STRING_82662950");
  msg.set(Symbol_54);
  Instrument_54.insert(Symbol_54.getString());
  FIX::SymbolSfx SymbolSfx_54("STRING_WI");
  msg.set(SymbolSfx_54);
  Instrument_54.insert(SymbolSfx_54.getString());
  FIX::TimeUnit TimeUnit_54("STRING_Wk");
  msg.set(TimeUnit_54);
  Instrument_54.insert(TimeUnit_54.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_54(3);
  msg.set(UnderlyingPriceDeterminationMethod_54);
  Instrument_54.insert(UnderlyingPriceDeterminationMethod_54.getString());
  FIX::UnitOfMeasure UnitOfMeasure_54("STRING_Gal");
  msg.set(UnitOfMeasure_54);
  Instrument_54.insert(UnitOfMeasure_54.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_54;
  UnitOfMeasureQty_54.setString("10568344");
  msg.set(UnitOfMeasureQty_54);
  Instrument_54.insert(UnitOfMeasureQty_54.getString());
  FIX::ValuationMethod ValuationMethod_54("STRING_FUT");
  msg.set(ValuationMethod_54);
  Instrument_54.insert(ValuationMethod_54.getString());
  all_values.push_back(Instrument_54);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_107;
    FIX::ComplexEventCondition ComplexEventCondition_107(2);
    noComplexEvents_0_0.set(ComplexEventCondition_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventCondition_107.getString());
    FIX::ComplexEventPrice ComplexEventPrice_107;
    ComplexEventPrice_107.setString("15084350");
    noComplexEvents_0_0.set(ComplexEventPrice_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventPrice_107.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_107(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventPriceBoundaryMethod_107.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_107;
    ComplexEventPriceBoundaryPrecision_107.setString("47.410000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventPriceBoundaryPrecision_107.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_107(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventPriceTimeType_107.getString());
    FIX::ComplexEventType ComplexEventType_107(4);
    noComplexEvents_0_0.set(ComplexEventType_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventType_107.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_107;
    ComplexOptPayoutAmount_107.setString("19407818");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexOptPayoutAmount_107.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_107);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_223;
      FIX::ComplexEventEndDate ComplexEventEndDate_223(FIX::UTCTIMESTAMP(4, 54, 31, 19, 8, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_223);
      ComplexEventDates_NoComplexEventDates_223.insert(ComplexEventEndDate_223.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_223(FIX::UTCTIMESTAMP(19, 46, 46, 15, 2, 2006));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_223);
      ComplexEventDates_NoComplexEventDates_223.insert(ComplexEventStartDate_223.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_223);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_456;
        FIX::ComplexEventEndTime ComplexEventEndTime_456(FIX::UTCTIMEONLY(7, 17, 13));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_456);
        ComplexEventTimes_NoComplexEventTimes_456.insert(ComplexEventEndTime_456.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_456(FIX::UTCTIMEONLY(6, 36, 8));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_456);
        ComplexEventTimes_NoComplexEventTimes_456.insert(ComplexEventStartTime_456.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_456);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
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
    FIX::EventDate EventDate_100("LOCALMKTDATE_1543720405");
    noEvents_0_0.set(EventDate_100);
    EvntGrp_NoEvents_100.insert(EventDate_100.getString());
    FIX::EventPx EventPx_100;
    EventPx_100.setString("20827504");
    noEvents_0_0.set(EventPx_100);
    EvntGrp_NoEvents_100.insert(EventPx_100.getString());
    FIX::EventText EventText_100("STRING_1812728616");
    noEvents_0_0.set(EventText_100);
    EvntGrp_NoEvents_100.insert(EventText_100.getString());
    FIX::EventTime EventTime_100(FIX::UTCTIMESTAMP(13, 59, 49, 5, 9, 2002));
    noEvents_0_0.set(EventTime_100);
    EvntGrp_NoEvents_100.insert(EventTime_100.getString());
    FIX::EventType EventType_100(17);
    noEvents_0_0.set(EventType_100);
    EvntGrp_NoEvents_100.insert(EventType_100.getString());
    all_values.push_back(EvntGrp_NoEvents_100);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_101;
    FIX::EventDate EventDate_101("LOCALMKTDATE_345245907");
    noEvents_0_1.set(EventDate_101);
    EvntGrp_NoEvents_101.insert(EventDate_101.getString());
    FIX::EventPx EventPx_101;
    EventPx_101.setString("3005959");
    noEvents_0_1.set(EventPx_101);
    EvntGrp_NoEvents_101.insert(EventPx_101.getString());
    FIX::EventText EventText_101("STRING_104658985");
    noEvents_0_1.set(EventText_101);
    EvntGrp_NoEvents_101.insert(EventText_101.getString());
    FIX::EventTime EventTime_101(FIX::UTCTIMESTAMP(6, 12, 24, 5, 2, 2012));
    noEvents_0_1.set(EventTime_101);
    EvntGrp_NoEvents_101.insert(EventTime_101.getString());
    FIX::EventType EventType_101(13);
    noEvents_0_1.set(EventType_101);
    EvntGrp_NoEvents_101.insert(EventType_101.getString());
    all_values.push_back(EvntGrp_NoEvents_101);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_102;
    FIX::EventDate EventDate_102("LOCALMKTDATE_47659100");
    noEvents_0_2.set(EventDate_102);
    EvntGrp_NoEvents_102.insert(EventDate_102.getString());
    FIX::EventPx EventPx_102;
    EventPx_102.setString("19311240");
    noEvents_0_2.set(EventPx_102);
    EvntGrp_NoEvents_102.insert(EventPx_102.getString());
    FIX::EventText EventText_102("STRING_286536021");
    noEvents_0_2.set(EventText_102);
    EvntGrp_NoEvents_102.insert(EventText_102.getString());
    FIX::EventTime EventTime_102(FIX::UTCTIMESTAMP(23, 39, 10, 19, 4, 2011));
    noEvents_0_2.set(EventTime_102);
    EvntGrp_NoEvents_102.insert(EventTime_102.getString());
    FIX::EventType EventType_102(18);
    noEvents_0_2.set(EventType_102);
    EvntGrp_NoEvents_102.insert(EventType_102.getString());
    all_values.push_back(EvntGrp_NoEvents_102);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_102;
    FIX::InstrumentPartyID InstrumentPartyID_102("STRING_1322523523");
    noInstrumentParties_0_0.set(InstrumentPartyID_102);
    InstrumentParties_NoInstrumentParties_102.insert(InstrumentPartyID_102.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_102('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_102);
    InstrumentParties_NoInstrumentParties_102.insert(InstrumentPartyIDSource_102.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_102(813300515);
    noInstrumentParties_0_0.set(InstrumentPartyRole_102);
    InstrumentParties_NoInstrumentParties_102.insert(InstrumentPartyRole_102.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_102);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222;
      FIX::InstrumentPartySubID InstrumentPartySubID_222("STRING_970911600");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_222);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222.insert(InstrumentPartySubID_222.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_222(1202722579);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_222);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222.insert(InstrumentPartySubIDType_222.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223;
      FIX::InstrumentPartySubID InstrumentPartySubID_223("STRING_794259481");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_223);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223.insert(InstrumentPartySubID_223.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_223(1427577636);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_223);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223.insert(InstrumentPartySubIDType_223.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_103;
    FIX::InstrumentPartyID InstrumentPartyID_103("STRING_1547968486");
    noInstrumentParties_0_1.set(InstrumentPartyID_103);
    InstrumentParties_NoInstrumentParties_103.insert(InstrumentPartyID_103.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_103('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_103);
    InstrumentParties_NoInstrumentParties_103.insert(InstrumentPartyIDSource_103.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_103(1532236622);
    noInstrumentParties_0_1.set(InstrumentPartyRole_103);
    InstrumentParties_NoInstrumentParties_103.insert(InstrumentPartyRole_103.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_103);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224;
      FIX::InstrumentPartySubID InstrumentPartySubID_224("STRING_1366892234");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_224);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224.insert(InstrumentPartySubID_224.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_224(474452946);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_224);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224.insert(InstrumentPartySubIDType_224.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_117;
    FIX::SecurityAltID SecurityAltID_117("STRING_882265395");
    noSecurityAltID_0_0.set(SecurityAltID_117);
    SecAltIDGrp_NoSecurityAltID_117.insert(SecurityAltID_117.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_117("STRING_2075542831");
    noSecurityAltID_0_0.set(SecurityAltIDSource_117);
    SecAltIDGrp_NoSecurityAltID_117.insert(SecurityAltIDSource_117.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_117);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_118;
    FIX::SecurityAltID SecurityAltID_118("STRING_1237100945");
    noSecurityAltID_0_1.set(SecurityAltID_118);
    SecAltIDGrp_NoSecurityAltID_118.insert(SecurityAltID_118.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_118("STRING_880533379");
    noSecurityAltID_0_1.set(SecurityAltIDSource_118);
    SecAltIDGrp_NoSecurityAltID_118.insert(SecurityAltIDSource_118.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_118);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_108;
  FIX::SecurityXML SecurityXML_109("XMLDATA_2123201931");
  msg.set(SecurityXML_109);
  FIX::SecurityXMLLen SecurityXMLLen_54(1020741377);
  msg.set(SecurityXMLLen_54);
  FIX::SecurityXMLSchema SecurityXMLSchema_54("STRING_1167069401");
  msg.set(SecurityXMLSchema_54);
  SecurityXML_108.insert(SecurityXMLSchema_54.getString());
  all_values.push_back(SecurityXML_108);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_95;
    FIX::PartyID PartyID_95("STRING_1409783008");
    noPartyIDs_0_0.set(PartyID_95);
    Parties_NoPartyIDs_95.insert(PartyID_95.getString());
    FIX::PartyIDSource PartyIDSource_95('2');
    noPartyIDs_0_0.set(PartyIDSource_95);
    Parties_NoPartyIDs_95.insert(PartyIDSource_95.getString());
    FIX::PartyRole PartyRole_95(40);
    noPartyIDs_0_0.set(PartyRole_95);
    Parties_NoPartyIDs_95.insert(PartyRole_95.getString());
    all_values.push_back(Parties_NoPartyIDs_95);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_195;
      FIX::PartySubID PartySubID_195("STRING_193253059");
      noPartySubIDs_0_1_0.set(PartySubID_195);
      PtysSubGrp_NoPartySubIDs_195.insert(PartySubID_195.getString());
      FIX::PartySubIDType PartySubIDType_195(24);
      noPartySubIDs_0_1_0.set(PartySubIDType_195);
      PtysSubGrp_NoPartySubIDs_195.insert(PartySubIDType_195.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_195);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_196;
      FIX::PartySubID PartySubID_196("STRING_1751641617");
      noPartySubIDs_0_1_1.set(PartySubID_196);
      PtysSubGrp_NoPartySubIDs_196.insert(PartySubID_196.getString());
      FIX::PartySubIDType PartySubIDType_196(13);
      noPartySubIDs_0_1_1.set(PartySubIDType_196);
      PtysSubGrp_NoPartySubIDs_196.insert(PartySubIDType_196.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_196);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_96;
    FIX::PartyID PartyID_96("STRING_1292579377");
    noPartyIDs_0_1.set(PartyID_96);
    Parties_NoPartyIDs_96.insert(PartyID_96.getString());
    FIX::PartyIDSource PartyIDSource_96('8');
    noPartyIDs_0_1.set(PartyIDSource_96);
    Parties_NoPartyIDs_96.insert(PartyIDSource_96.getString());
    FIX::PartyRole PartyRole_96(19);
    noPartyIDs_0_1.set(PartyRole_96);
    Parties_NoPartyIDs_96.insert(PartyRole_96.getString());
    all_values.push_back(Parties_NoPartyIDs_96);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_197;
      FIX::PartySubID PartySubID_197("STRING_310479036");
      noPartySubIDs_1_1_0.set(PartySubID_197);
      PtysSubGrp_NoPartySubIDs_197.insert(PartySubID_197.getString());
      FIX::PartySubIDType PartySubIDType_197(8);
      noPartySubIDs_1_1_0.set(PartySubIDType_197);
      PtysSubGrp_NoPartySubIDs_197.insert(PartySubIDType_197.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_197);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassCancelRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_9;
    FIX::TargetPartyID TargetPartyID_9("STRING_1738056673");
    noTargetPartyIDs_0_0.set(TargetPartyID_9);
    TargetParties_NoTargetPartyIDs_9.insert(TargetPartyID_9.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_9('8');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_9);
    TargetParties_NoTargetPartyIDs_9.insert(TargetPartyIDSource_9.getString());
    FIX::TargetPartyRole TargetPartyRole_9(1933696299);
    noTargetPartyIDs_0_0.set(TargetPartyRole_9);
    TargetParties_NoTargetPartyIDs_9.insert(TargetPartyRole_9.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_9);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_10;
    FIX::TargetPartyID TargetPartyID_10("STRING_1122809647");
    noTargetPartyIDs_0_1.set(TargetPartyID_10);
    TargetParties_NoTargetPartyIDs_10.insert(TargetPartyID_10.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_10('1');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_10);
    TargetParties_NoTargetPartyIDs_10.insert(TargetPartyIDSource_10.getString());
    FIX::TargetPartyRole TargetPartyRole_10(1153104885);
    noTargetPartyIDs_0_1.set(TargetPartyRole_10);
    TargetParties_NoTargetPartyIDs_10.insert(TargetPartyRole_10.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_10);

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_78;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_78("DATA_1597262593");
  msg.set(EncodedUnderlyingIssuer_78);
  UnderlyingInstrument_78.insert(EncodedUnderlyingIssuer_78.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_78(1071056073);
  msg.set(EncodedUnderlyingIssuerLen_78);
  UnderlyingInstrument_78.insert(EncodedUnderlyingIssuerLen_78.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_78("DATA_2035370280");
  msg.set(EncodedUnderlyingSecurityDesc_78);
  UnderlyingInstrument_78.insert(EncodedUnderlyingSecurityDesc_78.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_78(1525321776);
  msg.set(EncodedUnderlyingSecurityDescLen_78);
  UnderlyingInstrument_78.insert(EncodedUnderlyingSecurityDescLen_78.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_78;
  UnderlyingAdjustedQuantity_78.setString("1606733");
  msg.set(UnderlyingAdjustedQuantity_78);
  UnderlyingInstrument_78.insert(UnderlyingAdjustedQuantity_78.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_78;
  UnderlyingAllocationPercent_78.setString("0.120000");
  msg.set(UnderlyingAllocationPercent_78);
  UnderlyingInstrument_78.insert(UnderlyingAllocationPercent_78.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_78;
  UnderlyingAttachmentPoint_78.setString("0.590000");
  msg.set(UnderlyingAttachmentPoint_78);
  UnderlyingInstrument_78.insert(UnderlyingAttachmentPoint_78.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_78("STRING_1181414748");
  msg.set(UnderlyingCFICode_78);
  UnderlyingInstrument_78.insert(UnderlyingCFICode_78.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_78("STRING_1935489413");
  msg.set(UnderlyingCPProgram_78);
  UnderlyingInstrument_78.insert(UnderlyingCPProgram_78.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_78("STRING_1652601695");
  msg.set(UnderlyingCPRegType_78);
  UnderlyingInstrument_78.insert(UnderlyingCPRegType_78.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_78;
  UnderlyingCapValue_78.setString("4437141");
  msg.set(UnderlyingCapValue_78);
  UnderlyingInstrument_78.insert(UnderlyingCapValue_78.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_78;
  UnderlyingCashAmount_78.setString("4392300");
  msg.set(UnderlyingCashAmount_78);
  UnderlyingInstrument_78.insert(UnderlyingCashAmount_78.getString());
  FIX::UnderlyingCashType UnderlyingCashType_78("STRING_FIXED");
  msg.set(UnderlyingCashType_78);
  UnderlyingInstrument_78.insert(UnderlyingCashType_78.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_78;
  UnderlyingContractMultiplier_78.setString("9830512");
  msg.set(UnderlyingContractMultiplier_78);
  UnderlyingInstrument_78.insert(UnderlyingContractMultiplier_78.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_78(632483117);
  msg.set(UnderlyingContractMultiplierUnit_78);
  UnderlyingInstrument_78.insert(UnderlyingContractMultiplierUnit_78.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_78("COUNTRY_1985347916");
  msg.set(UnderlyingCountryOfIssue_78);
  UnderlyingInstrument_78.insert(UnderlyingCountryOfIssue_78.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_78("LOCALMKTDATE_587209178");
  msg.set(UnderlyingCouponPaymentDate_78);
  UnderlyingInstrument_78.insert(UnderlyingCouponPaymentDate_78.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_78;
  UnderlyingCouponRate_78.setString("99.120000");
  msg.set(UnderlyingCouponRate_78);
  UnderlyingInstrument_78.insert(UnderlyingCouponRate_78.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_78("STRING_1130443645");
  msg.set(UnderlyingCreditRating_78);
  UnderlyingInstrument_78.insert(UnderlyingCreditRating_78.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_78("USD");
  msg.set(UnderlyingCurrency_78);
  UnderlyingInstrument_78.insert(UnderlyingCurrency_78.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_78;
  UnderlyingCurrentValue_78.setString("11750250");
  msg.set(UnderlyingCurrentValue_78);
  UnderlyingInstrument_78.insert(UnderlyingCurrentValue_78.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_78;
  UnderlyingDetachmentPoint_78.setString("56.510000");
  msg.set(UnderlyingDetachmentPoint_78);
  UnderlyingInstrument_78.insert(UnderlyingDetachmentPoint_78.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_78;
  UnderlyingDirtyPrice_78.setString("16633871");
  msg.set(UnderlyingDirtyPrice_78);
  UnderlyingInstrument_78.insert(UnderlyingDirtyPrice_78.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_78;
  UnderlyingEndPrice_78.setString("20138658");
  msg.set(UnderlyingEndPrice_78);
  UnderlyingInstrument_78.insert(UnderlyingEndPrice_78.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_78;
  UnderlyingEndValue_78.setString("19753123");
  msg.set(UnderlyingEndValue_78);
  UnderlyingInstrument_78.insert(UnderlyingEndValue_78.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_78(332938190);
  msg.set(UnderlyingExerciseStyle_78);
  UnderlyingInstrument_78.insert(UnderlyingExerciseStyle_78.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_78;
  UnderlyingFXRate_78.setString("18000785");
  msg.set(UnderlyingFXRate_78);
  UnderlyingInstrument_78.insert(UnderlyingFXRate_78.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_78('M');
  msg.set(UnderlyingFXRateCalc_78);
  UnderlyingInstrument_78.insert(UnderlyingFXRateCalc_78.getString());
  FIX::UnderlyingFactor UnderlyingFactor_78;
  UnderlyingFactor_78.setString("17772495");
  msg.set(UnderlyingFactor_78);
  UnderlyingInstrument_78.insert(UnderlyingFactor_78.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_78(805699764);
  msg.set(UnderlyingFlowScheduleType_78);
  UnderlyingInstrument_78.insert(UnderlyingFlowScheduleType_78.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_78("STRING_400417268");
  msg.set(UnderlyingInstrRegistry_78);
  UnderlyingInstrument_78.insert(UnderlyingInstrRegistry_78.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_78("LOCALMKTDATE_700821967");
  msg.set(UnderlyingIssueDate_78);
  UnderlyingInstrument_78.insert(UnderlyingIssueDate_78.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_78("STRING_693586397");
  msg.set(UnderlyingIssuer_78);
  UnderlyingInstrument_78.insert(UnderlyingIssuer_78.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_78("STRING_1925739044");
  msg.set(UnderlyingLocaleOfIssue_78);
  UnderlyingInstrument_78.insert(UnderlyingLocaleOfIssue_78.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_78("LOCALMKTDATE_861495338");
  msg.set(UnderlyingMaturityDate_78);
  UnderlyingInstrument_78.insert(UnderlyingMaturityDate_78.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_78("MONTHYEAR_1462006409");
  msg.set(UnderlyingMaturityMonthYear_78);
  UnderlyingInstrument_78.insert(UnderlyingMaturityMonthYear_78.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_78("TZTIMEONLY_1279295455");
  msg.set(UnderlyingMaturityTime_78);
  UnderlyingInstrument_78.insert(UnderlyingMaturityTime_78.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_78;
  UnderlyingNotionalPercentageOutstanding_78.setString("0.860000");
  msg.set(UnderlyingNotionalPercentageOutstanding_78);
  UnderlyingInstrument_78.insert(UnderlyingNotionalPercentageOutstanding_78.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_78('1');
  msg.set(UnderlyingOptAttribute_78);
  UnderlyingInstrument_78.insert(UnderlyingOptAttribute_78.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_78;
  UnderlyingOriginalNotionalPercentageOutstanding_78.setString("35.020000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_78);
  UnderlyingInstrument_78.insert(UnderlyingOriginalNotionalPercentageOutstanding_78.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_78("STRING_339140546");
  msg.set(UnderlyingPriceUnitOfMeasure_78);
  UnderlyingInstrument_78.insert(UnderlyingPriceUnitOfMeasure_78.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_78;
  UnderlyingPriceUnitOfMeasureQty_78.setString("16892422");
  msg.set(UnderlyingPriceUnitOfMeasureQty_78);
  UnderlyingInstrument_78.insert(UnderlyingPriceUnitOfMeasureQty_78.getString());
  FIX::UnderlyingProduct UnderlyingProduct_78(652221916);
  msg.set(UnderlyingProduct_78);
  UnderlyingInstrument_78.insert(UnderlyingProduct_78.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_78(1322191755);
  msg.set(UnderlyingPutOrCall_78);
  UnderlyingInstrument_78.insert(UnderlyingPutOrCall_78.getString());
  FIX::UnderlyingPx UnderlyingPx_78;
  UnderlyingPx_78.setString("1742417");
  msg.set(UnderlyingPx_78);
  UnderlyingInstrument_78.insert(UnderlyingPx_78.getString());
  FIX::UnderlyingQty UnderlyingQty_78;
  UnderlyingQty_78.setString("4900861");
  msg.set(UnderlyingQty_78);
  UnderlyingInstrument_78.insert(UnderlyingQty_78.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_78("LOCALMKTDATE_1909400933");
  msg.set(UnderlyingRedemptionDate_78);
  UnderlyingInstrument_78.insert(UnderlyingRedemptionDate_78.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_78("STRING_207251612");
  msg.set(UnderlyingRepoCollateralSecurityType_78);
  UnderlyingInstrument_78.insert(UnderlyingRepoCollateralSecurityType_78.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_78;
  UnderlyingRepurchaseRate_78.setString("98.300000");
  msg.set(UnderlyingRepurchaseRate_78);
  UnderlyingInstrument_78.insert(UnderlyingRepurchaseRate_78.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_78(1836177547);
  msg.set(UnderlyingRepurchaseTerm_78);
  UnderlyingInstrument_78.insert(UnderlyingRepurchaseTerm_78.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_78("STRING_454088834");
  msg.set(UnderlyingRestructuringType_78);
  UnderlyingInstrument_78.insert(UnderlyingRestructuringType_78.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_78("STRING_648071202");
  msg.set(UnderlyingSecurityDesc_78);
  UnderlyingInstrument_78.insert(UnderlyingSecurityDesc_78.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_78("EXCHANGE_2073433198");
  msg.set(UnderlyingSecurityExchange_78);
  UnderlyingInstrument_78.insert(UnderlyingSecurityExchange_78.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_78("STRING_2117475945");
  msg.set(UnderlyingSecurityID_78);
  UnderlyingInstrument_78.insert(UnderlyingSecurityID_78.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_78("STRING_514453429");
  msg.set(UnderlyingSecurityIDSource_78);
  UnderlyingInstrument_78.insert(UnderlyingSecurityIDSource_78.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_78("STRING_1901261874");
  msg.set(UnderlyingSecuritySubType_78);
  UnderlyingInstrument_78.insert(UnderlyingSecuritySubType_78.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_78("STRING_302930488");
  msg.set(UnderlyingSecurityType_78);
  UnderlyingInstrument_78.insert(UnderlyingSecurityType_78.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_78("STRING_167048308");
  msg.set(UnderlyingSeniority_78);
  UnderlyingInstrument_78.insert(UnderlyingSeniority_78.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_78("STRING_704416549");
  msg.set(UnderlyingSettlMethod_78);
  UnderlyingInstrument_78.insert(UnderlyingSettlMethod_78.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_78(4);
  msg.set(UnderlyingSettlementType_78);
  UnderlyingInstrument_78.insert(UnderlyingSettlementType_78.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_78;
  UnderlyingStartValue_78.setString("9727480");
  msg.set(UnderlyingStartValue_78);
  UnderlyingInstrument_78.insert(UnderlyingStartValue_78.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_78("STRING_1104833817");
  msg.set(UnderlyingStateOrProvinceOfIssue_78);
  UnderlyingInstrument_78.insert(UnderlyingStateOrProvinceOfIssue_78.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_78("JPY");
  msg.set(UnderlyingStrikeCurrency_78);
  UnderlyingInstrument_78.insert(UnderlyingStrikeCurrency_78.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_78;
  UnderlyingStrikePrice_78.setString("8830892");
  msg.set(UnderlyingStrikePrice_78);
  UnderlyingInstrument_78.insert(UnderlyingStrikePrice_78.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_78("STRING_1495013688");
  msg.set(UnderlyingSymbol_78);
  UnderlyingInstrument_78.insert(UnderlyingSymbol_78.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_78("STRING_980857231");
  msg.set(UnderlyingSymbolSfx_78);
  UnderlyingInstrument_78.insert(UnderlyingSymbolSfx_78.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_78("STRING_14901020");
  msg.set(UnderlyingTimeUnit_78);
  UnderlyingInstrument_78.insert(UnderlyingTimeUnit_78.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_78("STRING_1390440126");
  msg.set(UnderlyingUnitOfMeasure_78);
  UnderlyingInstrument_78.insert(UnderlyingUnitOfMeasure_78.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_78;
  UnderlyingUnitOfMeasureQty_78.setString("833857");
  msg.set(UnderlyingUnitOfMeasureQty_78);
  UnderlyingInstrument_78.insert(UnderlyingUnitOfMeasureQty_78.getString());
  all_values.push_back(UnderlyingInstrument_78);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_163;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_163("STRING_1729580672");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_163);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_163.insert(UnderlyingSecurityAltID_163.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_163("STRING_1772627988");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_163);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_163.insert(UnderlyingSecurityAltIDSource_163.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_163);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_164;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_164("STRING_1451536439");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_164);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_164.insert(UnderlyingSecurityAltID_164.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_164("STRING_904288779");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_164);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_164.insert(UnderlyingSecurityAltIDSource_164.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_164);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_151;
    FIX::UnderlyingStipType UnderlyingStipType_151("STRING_1941622624");
    noUnderlyingStips_0_0.set(UnderlyingStipType_151);
    UnderlyingStipulations_NoUnderlyingStips_151.insert(UnderlyingStipType_151.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_151("STRING_666206064");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_151);
    UnderlyingStipulations_NoUnderlyingStips_151.insert(UnderlyingStipValue_151.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_151);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_161;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_161("STRING_1414668806");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_161);
    UndlyInstrumentParties_NoUndlyInstrumentParties_161.insert(UnderlyingInstrumentPartyID_161.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_161('3');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_161);
    UndlyInstrumentParties_NoUndlyInstrumentParties_161.insert(UnderlyingInstrumentPartyIDSource_161.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_161(460726488);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_161);
    UndlyInstrumentParties_NoUndlyInstrumentParties_161.insert(UnderlyingInstrumentPartyRole_161.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_161);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_325("STRING_280849514");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_325);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325.insert(UnderlyingInstrumentPartySubID_325.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_325(430718785);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_325);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325.insert(UnderlyingInstrumentPartySubIDType_325.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_326("STRING_429709789");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_326);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326.insert(UnderlyingInstrumentPartySubID_326.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_326(34627741);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_326);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326.insert(UnderlyingInstrumentPartySubIDType_326.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_327("STRING_733649273");
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubID_327);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327.insert(UnderlyingInstrumentPartySubID_327.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_327(596758098);
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubIDType_327);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327.insert(UnderlyingInstrumentPartySubIDType_327.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327);

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
