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
  multiset<string> OrderMassActionRequest_0;
  FIX::ClOrdID ClOrdID_37("STRING_2086786419");
  msg.set(ClOrdID_37);
  OrderMassActionRequest_0.insert(ClOrdID_37.getString());
  FIX::EncodedText EncodedText_62("DATA_363742593");
  msg.set(EncodedText_62);
  OrderMassActionRequest_0.insert(EncodedText_62.getString());
  FIX::EncodedTextLen EncodedTextLen_62(1467625094);
  msg.set(EncodedTextLen_62);
  OrderMassActionRequest_0.insert(EncodedTextLen_62.getString());
  FIX::MarketID MarketID_9("EXCHANGE_1573770811");
  msg.set(MarketID_9);
  OrderMassActionRequest_0.insert(MarketID_9.getString());
  FIX::MarketSegmentID MarketSegmentID_9("STRING_261020324");
  msg.set(MarketSegmentID_9);
  OrderMassActionRequest_0.insert(MarketSegmentID_9.getString());
  FIX::MassActionScope MassActionScope_1(2);
  msg.set(MassActionScope_1);
  OrderMassActionRequest_0.insert(MassActionScope_1.getString());
  FIX::MassActionType MassActionType_1(1);
  msg.set(MassActionType_1);
  OrderMassActionRequest_0.insert(MassActionType_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_35("STRING_502658068");
  msg.set(SecondaryClOrdID_35);
  OrderMassActionRequest_0.insert(SecondaryClOrdID_35.getString());
  FIX::Side Side_29('2');
  msg.set(Side_29);
  OrderMassActionRequest_0.insert(Side_29.getString());
  FIX::Text Text_62("STRING_1473946309");
  msg.set(Text_62);
  OrderMassActionRequest_0.insert(Text_62.getString());
  FIX::TradingSessionID TradingSessionID_54("STRING_2");
  msg.set(TradingSessionID_54);
  OrderMassActionRequest_0.insert(TradingSessionID_54.getString());
  FIX::TradingSessionSubID TradingSessionSubID_54("STRING_7");
  msg.set(TradingSessionSubID_54);
  OrderMassActionRequest_0.insert(TradingSessionSubID_54.getString());
  FIX::TransactTime TransactTime_47(FIX::UTCTIMESTAMP(6, 16, 9, 16, 4, 2014));
  msg.set(TransactTime_47);
  OrderMassActionRequest_0.insert(TransactTime_47.getString());
  all_values.push_back(OrderMassActionRequest_0);

  // Instrument
  multiset<string> Instrument_57;
  FIX::AttachmentPoint AttachmentPoint_57;
  AttachmentPoint_57.setString("81.640000");
  msg.set(AttachmentPoint_57);
  Instrument_57.insert(AttachmentPoint_57.getString());
  FIX::CFICode CFICode_57("STRING_775104458");
  msg.set(CFICode_57);
  Instrument_57.insert(CFICode_57.getString());
  FIX::CPProgram CPProgram_57(1);
  msg.set(CPProgram_57);
  Instrument_57.insert(CPProgram_57.getString());
  FIX::CPRegType CPRegType_57("STRING_933415575");
  msg.set(CPRegType_57);
  Instrument_57.insert(CPRegType_57.getString());
  FIX::CapPrice CapPrice_57;
  CapPrice_57.setString("20172655");
  msg.set(CapPrice_57);
  Instrument_57.insert(CapPrice_57.getString());
  FIX::ContractMultiplier ContractMultiplier_57;
  ContractMultiplier_57.setString("625552");
  msg.set(ContractMultiplier_57);
  Instrument_57.insert(ContractMultiplier_57.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_57(0);
  msg.set(ContractMultiplierUnit_57);
  Instrument_57.insert(ContractMultiplierUnit_57.getString());
  FIX::ContractSettlMonth ContractSettlMonth_57("MONTHYEAR_1411799592");
  msg.set(ContractSettlMonth_57);
  Instrument_57.insert(ContractSettlMonth_57.getString());
  FIX::CountryOfIssue CountryOfIssue_57("COUNTRY_1206259110");
  msg.set(CountryOfIssue_57);
  Instrument_57.insert(CountryOfIssue_57.getString());
  FIX::CouponPaymentDate CouponPaymentDate_57("LOCALMKTDATE_181237267");
  msg.set(CouponPaymentDate_57);
  Instrument_57.insert(CouponPaymentDate_57.getString());
  FIX::CouponRate CouponRate_57;
  CouponRate_57.setString("39.240000");
  msg.set(CouponRate_57);
  Instrument_57.insert(CouponRate_57.getString());
  FIX::CreditRating CreditRating_57("STRING_932541849");
  msg.set(CreditRating_57);
  Instrument_57.insert(CreditRating_57.getString());
  FIX::DatedDate DatedDate_57("LOCALMKTDATE_120540038");
  msg.set(DatedDate_57);
  Instrument_57.insert(DatedDate_57.getString());
  FIX::DetachmentPoint DetachmentPoint_57;
  DetachmentPoint_57.setString("65.170000");
  msg.set(DetachmentPoint_57);
  Instrument_57.insert(DetachmentPoint_57.getString());
  FIX::EncodedIssuer EncodedIssuer_57("DATA_252683296");
  msg.set(EncodedIssuer_57);
  Instrument_57.insert(EncodedIssuer_57.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_57(1694310850);
  msg.set(EncodedIssuerLen_57);
  Instrument_57.insert(EncodedIssuerLen_57.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_57("DATA_903726842");
  msg.set(EncodedSecurityDesc_57);
  Instrument_57.insert(EncodedSecurityDesc_57.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_57(369731885);
  msg.set(EncodedSecurityDescLen_57);
  Instrument_57.insert(EncodedSecurityDescLen_57.getString());
  FIX::ExerciseStyle ExerciseStyle_57(2);
  msg.set(ExerciseStyle_57);
  Instrument_57.insert(ExerciseStyle_57.getString());
  FIX::Factor Factor_57;
  Factor_57.setString("14063849");
  msg.set(Factor_57);
  Instrument_57.insert(Factor_57.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_57(true);
  msg.set(FlexProductEligibilityIndicator_57);
  Instrument_57.insert(FlexProductEligibilityIndicator_57.getString());
  FIX::FlexibleIndicator FlexibleIndicator_57(false);
  msg.set(FlexibleIndicator_57);
  Instrument_57.insert(FlexibleIndicator_57.getString());
  FIX::FloorPrice FloorPrice_57;
  FloorPrice_57.setString("5405472");
  msg.set(FloorPrice_57);
  Instrument_57.insert(FloorPrice_57.getString());
  FIX::FlowScheduleType FlowScheduleType_57(4);
  msg.set(FlowScheduleType_57);
  Instrument_57.insert(FlowScheduleType_57.getString());
  FIX::InstrRegistry InstrRegistry_57("STRING_968316921");
  msg.set(InstrRegistry_57);
  Instrument_57.insert(InstrRegistry_57.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_57('3');
  msg.set(InstrmtAssignmentMethod_57);
  Instrument_57.insert(InstrmtAssignmentMethod_57.getString());
  FIX::InterestAccrualDate InterestAccrualDate_57("LOCALMKTDATE_1534796206");
  msg.set(InterestAccrualDate_57);
  Instrument_57.insert(InterestAccrualDate_57.getString());
  FIX::IssueDate IssueDate_57("LOCALMKTDATE_934509742");
  msg.set(IssueDate_57);
  Instrument_57.insert(IssueDate_57.getString());
  FIX::Issuer Issuer_57("STRING_1976578812");
  msg.set(Issuer_57);
  Instrument_57.insert(Issuer_57.getString());
  FIX::ListMethod ListMethod_57(1);
  msg.set(ListMethod_57);
  Instrument_57.insert(ListMethod_57.getString());
  FIX::LocaleOfIssue LocaleOfIssue_57("STRING_2022239803");
  msg.set(LocaleOfIssue_57);
  Instrument_57.insert(LocaleOfIssue_57.getString());
  FIX::MaturityDate MaturityDate_57("LOCALMKTDATE_1024533328");
  msg.set(MaturityDate_57);
  Instrument_57.insert(MaturityDate_57.getString());
  FIX::MaturityMonthYear MaturityMonthYear_57("MONTHYEAR_976861375");
  msg.set(MaturityMonthYear_57);
  Instrument_57.insert(MaturityMonthYear_57.getString());
  FIX::MaturityTime MaturityTime_57("TZTIMEONLY_906167102");
  msg.set(MaturityTime_57);
  Instrument_57.insert(MaturityTime_57.getString());
  FIX::MinPriceIncrement MinPriceIncrement_57;
  MinPriceIncrement_57.setString("19579489");
  msg.set(MinPriceIncrement_57);
  Instrument_57.insert(MinPriceIncrement_57.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_57;
  MinPriceIncrementAmount_57.setString("8466432");
  msg.set(MinPriceIncrementAmount_57);
  Instrument_57.insert(MinPriceIncrementAmount_57.getString());
  FIX::NTPositionLimit NTPositionLimit_57(968722400);
  msg.set(NTPositionLimit_57);
  Instrument_57.insert(NTPositionLimit_57.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_57;
  NotionalPercentageOutstanding_57.setString("89.700000");
  msg.set(NotionalPercentageOutstanding_57);
  Instrument_57.insert(NotionalPercentageOutstanding_57.getString());
  FIX::OptAttribute OptAttribute_57('1');
  msg.set(OptAttribute_57);
  Instrument_57.insert(OptAttribute_57.getString());
  FIX::OptPayoutAmount OptPayoutAmount_57;
  OptPayoutAmount_57.setString("274978");
  msg.set(OptPayoutAmount_57);
  Instrument_57.insert(OptPayoutAmount_57.getString());
  FIX::OptPayoutType OptPayoutType_57(2);
  msg.set(OptPayoutType_57);
  Instrument_57.insert(OptPayoutType_57.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_57;
  OriginalNotionalPercentageOutstanding_57.setString("31.520000");
  msg.set(OriginalNotionalPercentageOutstanding_57);
  Instrument_57.insert(OriginalNotionalPercentageOutstanding_57.getString());
  FIX::Pool Pool_57("STRING_960039712");
  msg.set(Pool_57);
  Instrument_57.insert(Pool_57.getString());
  FIX::PositionLimit PositionLimit_57(1479246276);
  msg.set(PositionLimit_57);
  Instrument_57.insert(PositionLimit_57.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_57("STRING_INX");
  msg.set(PriceQuoteMethod_57);
  Instrument_57.insert(PriceQuoteMethod_57.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_57("STRING_1212723008");
  msg.set(PriceUnitOfMeasure_57);
  Instrument_57.insert(PriceUnitOfMeasure_57.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_57;
  PriceUnitOfMeasureQty_57.setString("10260734");
  msg.set(PriceUnitOfMeasureQty_57);
  Instrument_57.insert(PriceUnitOfMeasureQty_57.getString());
  FIX::Product Product_59(12);
  msg.set(Product_59);
  Instrument_57.insert(Product_59.getString());
  FIX::ProductComplex ProductComplex_57("STRING_1582454893");
  msg.set(ProductComplex_57);
  Instrument_57.insert(ProductComplex_57.getString());
  FIX::PutOrCall PutOrCall_57(1);
  msg.set(PutOrCall_57);
  Instrument_57.insert(PutOrCall_57.getString());
  FIX::RedemptionDate RedemptionDate_57("LOCALMKTDATE_1195257774");
  msg.set(RedemptionDate_57);
  Instrument_57.insert(RedemptionDate_57.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_57("STRING_882884267");
  msg.set(RepoCollateralSecurityType_57);
  Instrument_57.insert(RepoCollateralSecurityType_57.getString());
  FIX::RepurchaseRate RepurchaseRate_57;
  RepurchaseRate_57.setString("48.040000");
  msg.set(RepurchaseRate_57);
  Instrument_57.insert(RepurchaseRate_57.getString());
  FIX::RepurchaseTerm RepurchaseTerm_57(1735805027);
  msg.set(RepurchaseTerm_57);
  Instrument_57.insert(RepurchaseTerm_57.getString());
  FIX::RestructuringType RestructuringType_57("STRING_MR");
  msg.set(RestructuringType_57);
  Instrument_57.insert(RestructuringType_57.getString());
  FIX::SecurityDesc SecurityDesc_57("STRING_1706261726");
  msg.set(SecurityDesc_57);
  Instrument_57.insert(SecurityDesc_57.getString());
  FIX::SecurityExchange SecurityExchange_57("EXCHANGE_2107166391");
  msg.set(SecurityExchange_57);
  Instrument_57.insert(SecurityExchange_57.getString());
  FIX::SecurityGroup SecurityGroup_57("STRING_361874335");
  msg.set(SecurityGroup_57);
  Instrument_57.insert(SecurityGroup_57.getString());
  FIX::SecurityID SecurityID_57("STRING_493287820");
  msg.set(SecurityID_57);
  Instrument_57.insert(SecurityID_57.getString());
  FIX::SecurityIDSource SecurityIDSource_57("STRING_K");
  msg.set(SecurityIDSource_57);
  Instrument_57.insert(SecurityIDSource_57.getString());
  FIX::SecurityStatus SecurityStatus_57("STRING_1");
  msg.set(SecurityStatus_57);
  Instrument_57.insert(SecurityStatus_57.getString());
  FIX::SecuritySubType SecuritySubType_58("STRING_368043975");
  msg.set(SecuritySubType_58);
  Instrument_57.insert(SecuritySubType_58.getString());
  FIX::SecurityType SecurityType_59("STRING_EUCORP");
  msg.set(SecurityType_59);
  Instrument_57.insert(SecurityType_59.getString());
  FIX::Seniority Seniority_57("STRING_SB");
  msg.set(Seniority_57);
  Instrument_57.insert(Seniority_57.getString());
  FIX::SettlMethod SettlMethod_57('P');
  msg.set(SettlMethod_57);
  Instrument_57.insert(SettlMethod_57.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_57("STRING_623776491");
  msg.set(SettleOnOpenFlag_57);
  Instrument_57.insert(SettleOnOpenFlag_57.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_57("STRING_239652264");
  msg.set(StateOrProvinceOfIssue_57);
  Instrument_57.insert(StateOrProvinceOfIssue_57.getString());
  FIX::StrikeCurrency StrikeCurrency_57("CAN");
  msg.set(StrikeCurrency_57);
  Instrument_57.insert(StrikeCurrency_57.getString());
  FIX::StrikeMultiplier StrikeMultiplier_57;
  StrikeMultiplier_57.setString("3506114");
  msg.set(StrikeMultiplier_57);
  Instrument_57.insert(StrikeMultiplier_57.getString());
  FIX::StrikePrice StrikePrice_57;
  StrikePrice_57.setString("1229476");
  msg.set(StrikePrice_57);
  Instrument_57.insert(StrikePrice_57.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_57(2);
  msg.set(StrikePriceBoundaryMethod_57);
  Instrument_57.insert(StrikePriceBoundaryMethod_57.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_57;
  StrikePriceBoundaryPrecision_57.setString("46.440000");
  msg.set(StrikePriceBoundaryPrecision_57);
  Instrument_57.insert(StrikePriceBoundaryPrecision_57.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_57(2);
  msg.set(StrikePriceDeterminationMethod_57);
  Instrument_57.insert(StrikePriceDeterminationMethod_57.getString());
  FIX::StrikeValue StrikeValue_57;
  StrikeValue_57.setString("3442306");
  msg.set(StrikeValue_57);
  Instrument_57.insert(StrikeValue_57.getString());
  FIX::Symbol Symbol_57("STRING_1773164313");
  msg.set(Symbol_57);
  Instrument_57.insert(Symbol_57.getString());
  FIX::SymbolSfx SymbolSfx_57("STRING_CD");
  msg.set(SymbolSfx_57);
  Instrument_57.insert(SymbolSfx_57.getString());
  FIX::TimeUnit TimeUnit_57("STRING_Yr");
  msg.set(TimeUnit_57);
  Instrument_57.insert(TimeUnit_57.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_57(2);
  msg.set(UnderlyingPriceDeterminationMethod_57);
  Instrument_57.insert(UnderlyingPriceDeterminationMethod_57.getString());
  FIX::UnitOfMeasure UnitOfMeasure_57("STRING_Bu");
  msg.set(UnitOfMeasure_57);
  Instrument_57.insert(UnitOfMeasure_57.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_57;
  UnitOfMeasureQty_57.setString("15153401");
  msg.set(UnitOfMeasureQty_57);
  Instrument_57.insert(UnitOfMeasureQty_57.getString());
  FIX::ValuationMethod ValuationMethod_57("STRING_CDS");
  msg.set(ValuationMethod_57);
  Instrument_57.insert(ValuationMethod_57.getString());
  all_values.push_back(Instrument_57);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassActionRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_110;
    FIX::ComplexEventCondition ComplexEventCondition_110(1);
    noComplexEvents_0_0.set(ComplexEventCondition_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventCondition_110.getString());
    FIX::ComplexEventPrice ComplexEventPrice_110;
    ComplexEventPrice_110.setString("1981326");
    noComplexEvents_0_0.set(ComplexEventPrice_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventPrice_110.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_110(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventPriceBoundaryMethod_110.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_110;
    ComplexEventPriceBoundaryPrecision_110.setString("30.280000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventPriceBoundaryPrecision_110.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_110(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventPriceTimeType_110.getString());
    FIX::ComplexEventType ComplexEventType_110(3);
    noComplexEvents_0_0.set(ComplexEventType_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventType_110.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_110;
    ComplexOptPayoutAmount_110.setString("1578672");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexOptPayoutAmount_110.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_110);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_229;
      FIX::ComplexEventEndDate ComplexEventEndDate_229(FIX::UTCTIMESTAMP(16, 9, 23, 13, 1, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_229);
      ComplexEventDates_NoComplexEventDates_229.insert(ComplexEventEndDate_229.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_229(FIX::UTCTIMESTAMP(9, 31, 16, 13, 12, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_229);
      ComplexEventDates_NoComplexEventDates_229.insert(ComplexEventStartDate_229.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_229);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_460;
        FIX::ComplexEventEndTime ComplexEventEndTime_460(FIX::UTCTIMEONLY(20, 35, 58));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_460);
        ComplexEventTimes_NoComplexEventTimes_460.insert(ComplexEventEndTime_460.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_460(FIX::UTCTIMEONLY(21, 33, 30));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_460);
        ComplexEventTimes_NoComplexEventTimes_460.insert(ComplexEventStartTime_460.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_460);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_230;
      FIX::ComplexEventEndDate ComplexEventEndDate_230(FIX::UTCTIMESTAMP(19, 38, 55, 21, 6, 2007));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_230);
      ComplexEventDates_NoComplexEventDates_230.insert(ComplexEventEndDate_230.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_230(FIX::UTCTIMESTAMP(9, 11, 4, 4, 2, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_230);
      ComplexEventDates_NoComplexEventDates_230.insert(ComplexEventStartDate_230.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_230);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_461;
        FIX::ComplexEventEndTime ComplexEventEndTime_461(FIX::UTCTIMEONLY(17, 31, 41));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_461);
        ComplexEventTimes_NoComplexEventTimes_461.insert(ComplexEventEndTime_461.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_461(FIX::UTCTIMEONLY(11, 55, 23));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_461);
        ComplexEventTimes_NoComplexEventTimes_461.insert(ComplexEventStartTime_461.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_461);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_111;
    FIX::ComplexEventCondition ComplexEventCondition_111(1);
    noComplexEvents_0_1.set(ComplexEventCondition_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventCondition_111.getString());
    FIX::ComplexEventPrice ComplexEventPrice_111;
    ComplexEventPrice_111.setString("6195310");
    noComplexEvents_0_1.set(ComplexEventPrice_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventPrice_111.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_111(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventPriceBoundaryMethod_111.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_111;
    ComplexEventPriceBoundaryPrecision_111.setString("76.700000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventPriceBoundaryPrecision_111.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_111(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventPriceTimeType_111.getString());
    FIX::ComplexEventType ComplexEventType_111(5);
    noComplexEvents_0_1.set(ComplexEventType_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventType_111.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_111;
    ComplexOptPayoutAmount_111.setString("20691865");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexOptPayoutAmount_111.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_111);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_231;
      FIX::ComplexEventEndDate ComplexEventEndDate_231(FIX::UTCTIMESTAMP(10, 39, 38, 4, 10, 2003));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_231);
      ComplexEventDates_NoComplexEventDates_231.insert(ComplexEventEndDate_231.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_231(FIX::UTCTIMESTAMP(6, 37, 3, 26, 3, 2003));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_231);
      ComplexEventDates_NoComplexEventDates_231.insert(ComplexEventStartDate_231.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_231);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_462;
        FIX::ComplexEventEndTime ComplexEventEndTime_462(FIX::UTCTIMEONLY(0, 46, 19));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_462);
        ComplexEventTimes_NoComplexEventTimes_462.insert(ComplexEventEndTime_462.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_462(FIX::UTCTIMEONLY(21, 6, 46));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_462);
        ComplexEventTimes_NoComplexEventTimes_462.insert(ComplexEventStartTime_462.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_462);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_463;
        FIX::ComplexEventEndTime ComplexEventEndTime_463(FIX::UTCTIMEONLY(13, 37, 19));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_463);
        ComplexEventTimes_NoComplexEventTimes_463.insert(ComplexEventEndTime_463.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_463(FIX::UTCTIMEONLY(5, 34, 45));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_463);
        ComplexEventTimes_NoComplexEventTimes_463.insert(ComplexEventStartTime_463.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_463);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_232;
      FIX::ComplexEventEndDate ComplexEventEndDate_232(FIX::UTCTIMESTAMP(8, 24, 14, 12, 10, 2010));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_232);
      ComplexEventDates_NoComplexEventDates_232.insert(ComplexEventEndDate_232.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_232(FIX::UTCTIMESTAMP(19, 17, 42, 14, 8, 2003));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_232);
      ComplexEventDates_NoComplexEventDates_232.insert(ComplexEventStartDate_232.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_232);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_464;
        FIX::ComplexEventEndTime ComplexEventEndTime_464(FIX::UTCTIMEONLY(2, 26, 21));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_464);
        ComplexEventTimes_NoComplexEventTimes_464.insert(ComplexEventEndTime_464.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_464(FIX::UTCTIMEONLY(15, 27, 55));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_464);
        ComplexEventTimes_NoComplexEventTimes_464.insert(ComplexEventStartTime_464.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_464);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_465;
        FIX::ComplexEventEndTime ComplexEventEndTime_465(FIX::UTCTIMEONLY(5, 25, 51));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_465);
        ComplexEventTimes_NoComplexEventTimes_465.insert(ComplexEventEndTime_465.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_465(FIX::UTCTIMEONLY(10, 25, 2));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_465);
        ComplexEventTimes_NoComplexEventTimes_465.insert(ComplexEventStartTime_465.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_465);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_112;
    FIX::ComplexEventCondition ComplexEventCondition_112(2);
    noComplexEvents_0_2.set(ComplexEventCondition_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventCondition_112.getString());
    FIX::ComplexEventPrice ComplexEventPrice_112;
    ComplexEventPrice_112.setString("1701025");
    noComplexEvents_0_2.set(ComplexEventPrice_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventPrice_112.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_112(2);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventPriceBoundaryMethod_112.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_112;
    ComplexEventPriceBoundaryPrecision_112.setString("94.730000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventPriceBoundaryPrecision_112.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_112(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventPriceTimeType_112.getString());
    FIX::ComplexEventType ComplexEventType_112(5);
    noComplexEvents_0_2.set(ComplexEventType_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventType_112.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_112;
    ComplexOptPayoutAmount_112.setString("14991426");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexOptPayoutAmount_112.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_112);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_233;
      FIX::ComplexEventEndDate ComplexEventEndDate_233(FIX::UTCTIMESTAMP(6, 12, 9, 9, 3, 2014));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_233);
      ComplexEventDates_NoComplexEventDates_233.insert(ComplexEventEndDate_233.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_233(FIX::UTCTIMESTAMP(16, 8, 28, 25, 1, 2013));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_233);
      ComplexEventDates_NoComplexEventDates_233.insert(ComplexEventStartDate_233.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_233);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_466;
        FIX::ComplexEventEndTime ComplexEventEndTime_466(FIX::UTCTIMEONLY(16, 45, 28));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_466);
        ComplexEventTimes_NoComplexEventTimes_466.insert(ComplexEventEndTime_466.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_466(FIX::UTCTIMEONLY(20, 45, 47));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_466);
        ComplexEventTimes_NoComplexEventTimes_466.insert(ComplexEventStartTime_466.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_466);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_467;
        FIX::ComplexEventEndTime ComplexEventEndTime_467(FIX::UTCTIMEONLY(23, 6, 20));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_467);
        ComplexEventTimes_NoComplexEventTimes_467.insert(ComplexEventEndTime_467.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_467(FIX::UTCTIMEONLY(14, 54, 8));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_467);
        ComplexEventTimes_NoComplexEventTimes_467.insert(ComplexEventStartTime_467.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_467);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_468;
        FIX::ComplexEventEndTime ComplexEventEndTime_468(FIX::UTCTIMEONLY(12, 20, 3));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_468);
        ComplexEventTimes_NoComplexEventTimes_468.insert(ComplexEventEndTime_468.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_468(FIX::UTCTIMEONLY(10, 53, 49));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_468);
        ComplexEventTimes_NoComplexEventTimes_468.insert(ComplexEventStartTime_468.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_468);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_234;
      FIX::ComplexEventEndDate ComplexEventEndDate_234(FIX::UTCTIMESTAMP(13, 9, 31, 25, 9, 2004));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_234);
      ComplexEventDates_NoComplexEventDates_234.insert(ComplexEventEndDate_234.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_234(FIX::UTCTIMESTAMP(1, 29, 2, 22, 6, 2011));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_234);
      ComplexEventDates_NoComplexEventDates_234.insert(ComplexEventStartDate_234.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_234);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_469;
        FIX::ComplexEventEndTime ComplexEventEndTime_469(FIX::UTCTIMEONLY(11, 48, 5));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_469);
        ComplexEventTimes_NoComplexEventTimes_469.insert(ComplexEventEndTime_469.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_469(FIX::UTCTIMEONLY(2, 51, 13));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_469);
        ComplexEventTimes_NoComplexEventTimes_469.insert(ComplexEventStartTime_469.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_469);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_235;
      FIX::ComplexEventEndDate ComplexEventEndDate_235(FIX::UTCTIMESTAMP(7, 33, 38, 25, 1, 2005));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_235);
      ComplexEventDates_NoComplexEventDates_235.insert(ComplexEventEndDate_235.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_235(FIX::UTCTIMESTAMP(18, 25, 43, 10, 11, 2004));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_235);
      ComplexEventDates_NoComplexEventDates_235.insert(ComplexEventStartDate_235.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_235);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_470;
        FIX::ComplexEventEndTime ComplexEventEndTime_470(FIX::UTCTIMEONLY(9, 7, 50));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_470);
        ComplexEventTimes_NoComplexEventTimes_470.insert(ComplexEventEndTime_470.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_470(FIX::UTCTIMEONLY(13, 38, 33));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_470);
        ComplexEventTimes_NoComplexEventTimes_470.insert(ComplexEventStartTime_470.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_470);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_471;
        FIX::ComplexEventEndTime ComplexEventEndTime_471(FIX::UTCTIMEONLY(13, 13, 58));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_471);
        ComplexEventTimes_NoComplexEventTimes_471.insert(ComplexEventEndTime_471.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_471(FIX::UTCTIMEONLY(7, 49, 31));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_471);
        ComplexEventTimes_NoComplexEventTimes_471.insert(ComplexEventStartTime_471.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_471);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassActionRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_117;
    FIX::EventDate EventDate_117("LOCALMKTDATE_847039861");
    noEvents_0_0.set(EventDate_117);
    EvntGrp_NoEvents_117.insert(EventDate_117.getString());
    FIX::EventPx EventPx_117;
    EventPx_117.setString("12810061");
    noEvents_0_0.set(EventPx_117);
    EvntGrp_NoEvents_117.insert(EventPx_117.getString());
    FIX::EventText EventText_117("STRING_1050924189");
    noEvents_0_0.set(EventText_117);
    EvntGrp_NoEvents_117.insert(EventText_117.getString());
    FIX::EventTime EventTime_117(FIX::UTCTIMESTAMP(12, 33, 21, 23, 3, 2008));
    noEvents_0_0.set(EventTime_117);
    EvntGrp_NoEvents_117.insert(EventTime_117.getString());
    FIX::EventType EventType_117(6);
    noEvents_0_0.set(EventType_117);
    EvntGrp_NoEvents_117.insert(EventType_117.getString());
    all_values.push_back(EvntGrp_NoEvents_117);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_118;
    FIX::EventDate EventDate_118("LOCALMKTDATE_491422264");
    noEvents_0_1.set(EventDate_118);
    EvntGrp_NoEvents_118.insert(EventDate_118.getString());
    FIX::EventPx EventPx_118;
    EventPx_118.setString("17944642");
    noEvents_0_1.set(EventPx_118);
    EvntGrp_NoEvents_118.insert(EventPx_118.getString());
    FIX::EventText EventText_118("STRING_653998283");
    noEvents_0_1.set(EventText_118);
    EvntGrp_NoEvents_118.insert(EventText_118.getString());
    FIX::EventTime EventTime_118(FIX::UTCTIMESTAMP(1, 30, 51, 21, 12, 2009));
    noEvents_0_1.set(EventTime_118);
    EvntGrp_NoEvents_118.insert(EventTime_118.getString());
    FIX::EventType EventType_118(11);
    noEvents_0_1.set(EventType_118);
    EvntGrp_NoEvents_118.insert(EventType_118.getString());
    all_values.push_back(EvntGrp_NoEvents_118);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassActionRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_120;
    FIX::InstrumentPartyID InstrumentPartyID_120("STRING_42622706");
    noInstrumentParties_0_0.set(InstrumentPartyID_120);
    InstrumentParties_NoInstrumentParties_120.insert(InstrumentPartyID_120.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_120('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_120);
    InstrumentParties_NoInstrumentParties_120.insert(InstrumentPartyIDSource_120.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_120(108744999);
    noInstrumentParties_0_0.set(InstrumentPartyRole_120);
    InstrumentParties_NoInstrumentParties_120.insert(InstrumentPartyRole_120.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_120);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252;
      FIX::InstrumentPartySubID InstrumentPartySubID_252("STRING_1843185839");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_252);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252.insert(InstrumentPartySubID_252.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_252(1771475309);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_252);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252.insert(InstrumentPartySubIDType_252.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253;
      FIX::InstrumentPartySubID InstrumentPartySubID_253("STRING_1110444607");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_253);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253.insert(InstrumentPartySubID_253.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_253(44266342);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_253);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253.insert(InstrumentPartySubIDType_253.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254;
      FIX::InstrumentPartySubID InstrumentPartySubID_254("STRING_471031522");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_254);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254.insert(InstrumentPartySubID_254.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_254(243967076);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_254);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254.insert(InstrumentPartySubIDType_254.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_121;
    FIX::InstrumentPartyID InstrumentPartyID_121("STRING_1095190532");
    noInstrumentParties_0_1.set(InstrumentPartyID_121);
    InstrumentParties_NoInstrumentParties_121.insert(InstrumentPartyID_121.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_121('3');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_121);
    InstrumentParties_NoInstrumentParties_121.insert(InstrumentPartyIDSource_121.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_121(296766368);
    noInstrumentParties_0_1.set(InstrumentPartyRole_121);
    InstrumentParties_NoInstrumentParties_121.insert(InstrumentPartyRole_121.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_121);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255;
      FIX::InstrumentPartySubID InstrumentPartySubID_255("STRING_1264697369");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_255);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255.insert(InstrumentPartySubID_255.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_255(949860231);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_255);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255.insert(InstrumentPartySubIDType_255.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_128;
    FIX::SecurityAltID SecurityAltID_128("STRING_1489652666");
    noSecurityAltID_0_0.set(SecurityAltID_128);
    SecAltIDGrp_NoSecurityAltID_128.insert(SecurityAltID_128.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_128("STRING_584560348");
    noSecurityAltID_0_0.set(SecurityAltIDSource_128);
    SecAltIDGrp_NoSecurityAltID_128.insert(SecurityAltIDSource_128.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_128);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_129;
    FIX::SecurityAltID SecurityAltID_129("STRING_1475216931");
    noSecurityAltID_0_1.set(SecurityAltID_129);
    SecAltIDGrp_NoSecurityAltID_129.insert(SecurityAltID_129.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_129("STRING_1136633274");
    noSecurityAltID_0_1.set(SecurityAltIDSource_129);
    SecAltIDGrp_NoSecurityAltID_129.insert(SecurityAltIDSource_129.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_129);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_130;
    FIX::SecurityAltID SecurityAltID_130("STRING_1238558631");
    noSecurityAltID_0_2.set(SecurityAltID_130);
    SecAltIDGrp_NoSecurityAltID_130.insert(SecurityAltID_130.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_130("STRING_1257690104");
    noSecurityAltID_0_2.set(SecurityAltIDSource_130);
    SecAltIDGrp_NoSecurityAltID_130.insert(SecurityAltIDSource_130.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_130);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_114;
  FIX::SecurityXML SecurityXML_115("XMLDATA_1886029700");
  msg.set(SecurityXML_115);
  FIX::SecurityXMLLen SecurityXMLLen_57(278715554);
  msg.set(SecurityXMLLen_57);
  FIX::SecurityXMLSchema SecurityXMLSchema_57("STRING_1045690588");
  msg.set(SecurityXMLSchema_57);
  SecurityXML_114.insert(SecurityXMLSchema_57.getString());
  all_values.push_back(SecurityXML_114);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassActionRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_79;
    FIX::PartyID PartyID_79("STRING_1387309081");
    noPartyIDs_0_0.set(PartyID_79);
    Parties_NoPartyIDs_79.insert(PartyID_79.getString());
    FIX::PartyIDSource PartyIDSource_79('7');
    noPartyIDs_0_0.set(PartyIDSource_79);
    Parties_NoPartyIDs_79.insert(PartyIDSource_79.getString());
    FIX::PartyRole PartyRole_79(57);
    noPartyIDs_0_0.set(PartyRole_79);
    Parties_NoPartyIDs_79.insert(PartyRole_79.getString());
    all_values.push_back(Parties_NoPartyIDs_79);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_161;
      FIX::PartySubID PartySubID_161("STRING_1615697356");
      noPartySubIDs_0_1_0.set(PartySubID_161);
      PtysSubGrp_NoPartySubIDs_161.insert(PartySubID_161.getString());
      FIX::PartySubIDType PartySubIDType_161(1);
      noPartySubIDs_0_1_0.set(PartySubIDType_161);
      PtysSubGrp_NoPartySubIDs_161.insert(PartySubIDType_161.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_161);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_80;
    FIX::PartyID PartyID_80("STRING_1348456342");
    noPartyIDs_0_1.set(PartyID_80);
    Parties_NoPartyIDs_80.insert(PartyID_80.getString());
    FIX::PartyIDSource PartyIDSource_80('A');
    noPartyIDs_0_1.set(PartyIDSource_80);
    Parties_NoPartyIDs_80.insert(PartyIDSource_80.getString());
    FIX::PartyRole PartyRole_80(33);
    noPartyIDs_0_1.set(PartyRole_80);
    Parties_NoPartyIDs_80.insert(PartyRole_80.getString());
    all_values.push_back(Parties_NoPartyIDs_80);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_162;
      FIX::PartySubID PartySubID_162("STRING_2034933180");
      noPartySubIDs_1_1_0.set(PartySubID_162);
      PtysSubGrp_NoPartySubIDs_162.insert(PartySubID_162.getString());
      FIX::PartySubIDType PartySubIDType_162(21);
      noPartySubIDs_1_1_0.set(PartySubIDType_162);
      PtysSubGrp_NoPartySubIDs_162.insert(PartySubIDType_162.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_162);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_163;
      FIX::PartySubID PartySubID_163("STRING_1443479525");
      noPartySubIDs_1_1_1.set(PartySubID_163);
      PtysSubGrp_NoPartySubIDs_163.insert(PartySubID_163.getString());
      FIX::PartySubIDType PartySubIDType_163(16);
      noPartySubIDs_1_1_1.set(PartySubIDType_163);
      PtysSubGrp_NoPartySubIDs_163.insert(PartySubIDType_163.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_163);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_81;
    FIX::PartyID PartyID_81("STRING_133720073");
    noPartyIDs_0_2.set(PartyID_81);
    Parties_NoPartyIDs_81.insert(PartyID_81.getString());
    FIX::PartyIDSource PartyIDSource_81('D');
    noPartyIDs_0_2.set(PartyIDSource_81);
    Parties_NoPartyIDs_81.insert(PartyIDSource_81.getString());
    FIX::PartyRole PartyRole_81(34);
    noPartyIDs_0_2.set(PartyRole_81);
    Parties_NoPartyIDs_81.insert(PartyRole_81.getString());
    all_values.push_back(Parties_NoPartyIDs_81);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_164;
      FIX::PartySubID PartySubID_164("STRING_931457495");
      noPartySubIDs_2_1_0.set(PartySubID_164);
      PtysSubGrp_NoPartySubIDs_164.insert(PartySubID_164.getString());
      FIX::PartySubIDType PartySubIDType_164(4);
      noPartySubIDs_2_1_0.set(PartySubIDType_164);
      PtysSubGrp_NoPartySubIDs_164.insert(PartySubIDType_164.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_164);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_165;
      FIX::PartySubID PartySubID_165("STRING_1137890917");
      noPartySubIDs_2_1_1.set(PartySubID_165);
      PtysSubGrp_NoPartySubIDs_165.insert(PartySubID_165.getString());
      FIX::PartySubIDType PartySubIDType_165(18);
      noPartySubIDs_2_1_1.set(PartySubIDType_165);
      PtysSubGrp_NoPartySubIDs_165.insert(PartySubIDType_165.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_165);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_166;
      FIX::PartySubID PartySubID_166("STRING_1962603556");
      noPartySubIDs_2_1_2.set(PartySubID_166);
      PtysSubGrp_NoPartySubIDs_166.insert(PartySubID_166.getString());
      FIX::PartySubIDType PartySubIDType_166(10);
      noPartySubIDs_2_1_2.set(PartySubIDType_166);
      PtysSubGrp_NoPartySubIDs_166.insert(PartySubIDType_166.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_166);

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
    FIX::TargetPartyID TargetPartyID_4("STRING_1053678540");
    noTargetPartyIDs_0_0.set(TargetPartyID_4);
    TargetParties_NoTargetPartyIDs_4.insert(TargetPartyID_4.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_4('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_4);
    TargetParties_NoTargetPartyIDs_4.insert(TargetPartyIDSource_4.getString());
    FIX::TargetPartyRole TargetPartyRole_4(1148805839);
    noTargetPartyIDs_0_0.set(TargetPartyRole_4);
    TargetParties_NoTargetPartyIDs_4.insert(TargetPartyRole_4.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_4);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_5;
    FIX::TargetPartyID TargetPartyID_5("STRING_1332394094");
    noTargetPartyIDs_0_1.set(TargetPartyID_5);
    TargetParties_NoTargetPartyIDs_5.insert(TargetPartyID_5.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_5('6');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_5);
    TargetParties_NoTargetPartyIDs_5.insert(TargetPartyIDSource_5.getString());
    FIX::TargetPartyRole TargetPartyRole_5(1625466268);
    noTargetPartyIDs_0_1.set(TargetPartyRole_5);
    TargetParties_NoTargetPartyIDs_5.insert(TargetPartyRole_5.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_5);

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_6;
    FIX::TargetPartyID TargetPartyID_6("STRING_572219527");
    noTargetPartyIDs_0_2.set(TargetPartyID_6);
    TargetParties_NoTargetPartyIDs_6.insert(TargetPartyID_6.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_6('4');
    noTargetPartyIDs_0_2.set(TargetPartyIDSource_6);
    TargetParties_NoTargetPartyIDs_6.insert(TargetPartyIDSource_6.getString());
    FIX::TargetPartyRole TargetPartyRole_6(1365459820);
    noTargetPartyIDs_0_2.set(TargetPartyRole_6);
    TargetParties_NoTargetPartyIDs_6.insert(TargetPartyRole_6.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_6);

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_78;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_78("DATA_1811930870");
  msg.set(EncodedUnderlyingIssuer_78);
  UnderlyingInstrument_78.insert(EncodedUnderlyingIssuer_78.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_78(1662809603);
  msg.set(EncodedUnderlyingIssuerLen_78);
  UnderlyingInstrument_78.insert(EncodedUnderlyingIssuerLen_78.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_78("DATA_664020827");
  msg.set(EncodedUnderlyingSecurityDesc_78);
  UnderlyingInstrument_78.insert(EncodedUnderlyingSecurityDesc_78.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_78(1012903564);
  msg.set(EncodedUnderlyingSecurityDescLen_78);
  UnderlyingInstrument_78.insert(EncodedUnderlyingSecurityDescLen_78.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_78;
  UnderlyingAdjustedQuantity_78.setString("4398145");
  msg.set(UnderlyingAdjustedQuantity_78);
  UnderlyingInstrument_78.insert(UnderlyingAdjustedQuantity_78.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_78;
  UnderlyingAllocationPercent_78.setString("76.740000");
  msg.set(UnderlyingAllocationPercent_78);
  UnderlyingInstrument_78.insert(UnderlyingAllocationPercent_78.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_78;
  UnderlyingAttachmentPoint_78.setString("15.670000");
  msg.set(UnderlyingAttachmentPoint_78);
  UnderlyingInstrument_78.insert(UnderlyingAttachmentPoint_78.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_78("STRING_327264059");
  msg.set(UnderlyingCFICode_78);
  UnderlyingInstrument_78.insert(UnderlyingCFICode_78.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_78("STRING_844297216");
  msg.set(UnderlyingCPProgram_78);
  UnderlyingInstrument_78.insert(UnderlyingCPProgram_78.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_78("STRING_1281347444");
  msg.set(UnderlyingCPRegType_78);
  UnderlyingInstrument_78.insert(UnderlyingCPRegType_78.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_78;
  UnderlyingCapValue_78.setString("4586806");
  msg.set(UnderlyingCapValue_78);
  UnderlyingInstrument_78.insert(UnderlyingCapValue_78.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_78;
  UnderlyingCashAmount_78.setString("9780172");
  msg.set(UnderlyingCashAmount_78);
  UnderlyingInstrument_78.insert(UnderlyingCashAmount_78.getString());
  FIX::UnderlyingCashType UnderlyingCashType_78("STRING_DIFF");
  msg.set(UnderlyingCashType_78);
  UnderlyingInstrument_78.insert(UnderlyingCashType_78.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_78;
  UnderlyingContractMultiplier_78.setString("8868636");
  msg.set(UnderlyingContractMultiplier_78);
  UnderlyingInstrument_78.insert(UnderlyingContractMultiplier_78.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_78(1132113540);
  msg.set(UnderlyingContractMultiplierUnit_78);
  UnderlyingInstrument_78.insert(UnderlyingContractMultiplierUnit_78.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_78("COUNTRY_1879565064");
  msg.set(UnderlyingCountryOfIssue_78);
  UnderlyingInstrument_78.insert(UnderlyingCountryOfIssue_78.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_78("LOCALMKTDATE_117423204");
  msg.set(UnderlyingCouponPaymentDate_78);
  UnderlyingInstrument_78.insert(UnderlyingCouponPaymentDate_78.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_78;
  UnderlyingCouponRate_78.setString("8.090000");
  msg.set(UnderlyingCouponRate_78);
  UnderlyingInstrument_78.insert(UnderlyingCouponRate_78.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_78("STRING_5707929");
  msg.set(UnderlyingCreditRating_78);
  UnderlyingInstrument_78.insert(UnderlyingCreditRating_78.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_78("GBP");
  msg.set(UnderlyingCurrency_78);
  UnderlyingInstrument_78.insert(UnderlyingCurrency_78.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_78;
  UnderlyingCurrentValue_78.setString("14159677");
  msg.set(UnderlyingCurrentValue_78);
  UnderlyingInstrument_78.insert(UnderlyingCurrentValue_78.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_78;
  UnderlyingDetachmentPoint_78.setString("16.520000");
  msg.set(UnderlyingDetachmentPoint_78);
  UnderlyingInstrument_78.insert(UnderlyingDetachmentPoint_78.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_78;
  UnderlyingDirtyPrice_78.setString("1639756");
  msg.set(UnderlyingDirtyPrice_78);
  UnderlyingInstrument_78.insert(UnderlyingDirtyPrice_78.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_78;
  UnderlyingEndPrice_78.setString("4172899");
  msg.set(UnderlyingEndPrice_78);
  UnderlyingInstrument_78.insert(UnderlyingEndPrice_78.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_78;
  UnderlyingEndValue_78.setString("1711320");
  msg.set(UnderlyingEndValue_78);
  UnderlyingInstrument_78.insert(UnderlyingEndValue_78.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_78(785496913);
  msg.set(UnderlyingExerciseStyle_78);
  UnderlyingInstrument_78.insert(UnderlyingExerciseStyle_78.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_78;
  UnderlyingFXRate_78.setString("20427561");
  msg.set(UnderlyingFXRate_78);
  UnderlyingInstrument_78.insert(UnderlyingFXRate_78.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_78('D');
  msg.set(UnderlyingFXRateCalc_78);
  UnderlyingInstrument_78.insert(UnderlyingFXRateCalc_78.getString());
  FIX::UnderlyingFactor UnderlyingFactor_78;
  UnderlyingFactor_78.setString("8326091");
  msg.set(UnderlyingFactor_78);
  UnderlyingInstrument_78.insert(UnderlyingFactor_78.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_78(1260732349);
  msg.set(UnderlyingFlowScheduleType_78);
  UnderlyingInstrument_78.insert(UnderlyingFlowScheduleType_78.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_78("STRING_407798848");
  msg.set(UnderlyingInstrRegistry_78);
  UnderlyingInstrument_78.insert(UnderlyingInstrRegistry_78.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_78("LOCALMKTDATE_347935115");
  msg.set(UnderlyingIssueDate_78);
  UnderlyingInstrument_78.insert(UnderlyingIssueDate_78.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_78("STRING_1924753176");
  msg.set(UnderlyingIssuer_78);
  UnderlyingInstrument_78.insert(UnderlyingIssuer_78.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_78("STRING_1420702412");
  msg.set(UnderlyingLocaleOfIssue_78);
  UnderlyingInstrument_78.insert(UnderlyingLocaleOfIssue_78.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_78("LOCALMKTDATE_787749643");
  msg.set(UnderlyingMaturityDate_78);
  UnderlyingInstrument_78.insert(UnderlyingMaturityDate_78.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_78("MONTHYEAR_1583037203");
  msg.set(UnderlyingMaturityMonthYear_78);
  UnderlyingInstrument_78.insert(UnderlyingMaturityMonthYear_78.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_78("TZTIMEONLY_1258570331");
  msg.set(UnderlyingMaturityTime_78);
  UnderlyingInstrument_78.insert(UnderlyingMaturityTime_78.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_78;
  UnderlyingNotionalPercentageOutstanding_78.setString("37.020000");
  msg.set(UnderlyingNotionalPercentageOutstanding_78);
  UnderlyingInstrument_78.insert(UnderlyingNotionalPercentageOutstanding_78.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_78('2');
  msg.set(UnderlyingOptAttribute_78);
  UnderlyingInstrument_78.insert(UnderlyingOptAttribute_78.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_78;
  UnderlyingOriginalNotionalPercentageOutstanding_78.setString("41.270000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_78);
  UnderlyingInstrument_78.insert(UnderlyingOriginalNotionalPercentageOutstanding_78.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_78("STRING_1573694370");
  msg.set(UnderlyingPriceUnitOfMeasure_78);
  UnderlyingInstrument_78.insert(UnderlyingPriceUnitOfMeasure_78.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_78;
  UnderlyingPriceUnitOfMeasureQty_78.setString("12578680");
  msg.set(UnderlyingPriceUnitOfMeasureQty_78);
  UnderlyingInstrument_78.insert(UnderlyingPriceUnitOfMeasureQty_78.getString());
  FIX::UnderlyingProduct UnderlyingProduct_78(1340541696);
  msg.set(UnderlyingProduct_78);
  UnderlyingInstrument_78.insert(UnderlyingProduct_78.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_78(313074366);
  msg.set(UnderlyingPutOrCall_78);
  UnderlyingInstrument_78.insert(UnderlyingPutOrCall_78.getString());
  FIX::UnderlyingPx UnderlyingPx_78;
  UnderlyingPx_78.setString("2424979");
  msg.set(UnderlyingPx_78);
  UnderlyingInstrument_78.insert(UnderlyingPx_78.getString());
  FIX::UnderlyingQty UnderlyingQty_78;
  UnderlyingQty_78.setString("10726231");
  msg.set(UnderlyingQty_78);
  UnderlyingInstrument_78.insert(UnderlyingQty_78.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_78("LOCALMKTDATE_430497570");
  msg.set(UnderlyingRedemptionDate_78);
  UnderlyingInstrument_78.insert(UnderlyingRedemptionDate_78.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_78("STRING_365018762");
  msg.set(UnderlyingRepoCollateralSecurityType_78);
  UnderlyingInstrument_78.insert(UnderlyingRepoCollateralSecurityType_78.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_78;
  UnderlyingRepurchaseRate_78.setString("10.420000");
  msg.set(UnderlyingRepurchaseRate_78);
  UnderlyingInstrument_78.insert(UnderlyingRepurchaseRate_78.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_78(363040682);
  msg.set(UnderlyingRepurchaseTerm_78);
  UnderlyingInstrument_78.insert(UnderlyingRepurchaseTerm_78.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_78("STRING_953163772");
  msg.set(UnderlyingRestructuringType_78);
  UnderlyingInstrument_78.insert(UnderlyingRestructuringType_78.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_78("STRING_346815111");
  msg.set(UnderlyingSecurityDesc_78);
  UnderlyingInstrument_78.insert(UnderlyingSecurityDesc_78.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_78("EXCHANGE_1349262335");
  msg.set(UnderlyingSecurityExchange_78);
  UnderlyingInstrument_78.insert(UnderlyingSecurityExchange_78.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_78("STRING_1117139440");
  msg.set(UnderlyingSecurityID_78);
  UnderlyingInstrument_78.insert(UnderlyingSecurityID_78.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_78("STRING_764105020");
  msg.set(UnderlyingSecurityIDSource_78);
  UnderlyingInstrument_78.insert(UnderlyingSecurityIDSource_78.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_78("STRING_1520394433");
  msg.set(UnderlyingSecuritySubType_78);
  UnderlyingInstrument_78.insert(UnderlyingSecuritySubType_78.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_78("STRING_1902636354");
  msg.set(UnderlyingSecurityType_78);
  UnderlyingInstrument_78.insert(UnderlyingSecurityType_78.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_78("STRING_659377549");
  msg.set(UnderlyingSeniority_78);
  UnderlyingInstrument_78.insert(UnderlyingSeniority_78.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_78("STRING_116262411");
  msg.set(UnderlyingSettlMethod_78);
  UnderlyingInstrument_78.insert(UnderlyingSettlMethod_78.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_78(2);
  msg.set(UnderlyingSettlementType_78);
  UnderlyingInstrument_78.insert(UnderlyingSettlementType_78.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_78;
  UnderlyingStartValue_78.setString("19201098");
  msg.set(UnderlyingStartValue_78);
  UnderlyingInstrument_78.insert(UnderlyingStartValue_78.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_78("STRING_524061259");
  msg.set(UnderlyingStateOrProvinceOfIssue_78);
  UnderlyingInstrument_78.insert(UnderlyingStateOrProvinceOfIssue_78.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_78("USD");
  msg.set(UnderlyingStrikeCurrency_78);
  UnderlyingInstrument_78.insert(UnderlyingStrikeCurrency_78.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_78;
  UnderlyingStrikePrice_78.setString("19447636");
  msg.set(UnderlyingStrikePrice_78);
  UnderlyingInstrument_78.insert(UnderlyingStrikePrice_78.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_78("STRING_1723446625");
  msg.set(UnderlyingSymbol_78);
  UnderlyingInstrument_78.insert(UnderlyingSymbol_78.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_78("STRING_1132932981");
  msg.set(UnderlyingSymbolSfx_78);
  UnderlyingInstrument_78.insert(UnderlyingSymbolSfx_78.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_78("STRING_1055850354");
  msg.set(UnderlyingTimeUnit_78);
  UnderlyingInstrument_78.insert(UnderlyingTimeUnit_78.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_78("STRING_690976679");
  msg.set(UnderlyingUnitOfMeasure_78);
  UnderlyingInstrument_78.insert(UnderlyingUnitOfMeasure_78.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_78;
  UnderlyingUnitOfMeasureQty_78.setString("14127837");
  msg.set(UnderlyingUnitOfMeasureQty_78);
  UnderlyingInstrument_78.insert(UnderlyingUnitOfMeasureQty_78.getString());
  all_values.push_back(UnderlyingInstrument_78);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_151;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_151("STRING_117187401");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_151);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_151.insert(UnderlyingSecurityAltID_151.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_151("STRING_523168165");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_151);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_151.insert(UnderlyingSecurityAltIDSource_151.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_151);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_152;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_152("STRING_641342530");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_152);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_152.insert(UnderlyingSecurityAltID_152.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_152("STRING_430261767");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_152);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_152.insert(UnderlyingSecurityAltIDSource_152.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_152);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_153;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_153("STRING_765666117");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltID_153);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_153.insert(UnderlyingSecurityAltID_153.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_153("STRING_1713965643");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltIDSource_153);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_153.insert(UnderlyingSecurityAltIDSource_153.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_153);

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_136;
    FIX::UnderlyingStipType UnderlyingStipType_136("STRING_1130684879");
    noUnderlyingStips_0_0.set(UnderlyingStipType_136);
    UnderlyingStipulations_NoUnderlyingStips_136.insert(UnderlyingStipType_136.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_136("STRING_644813037");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_136);
    UnderlyingStipulations_NoUnderlyingStips_136.insert(UnderlyingStipValue_136.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_136);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_169;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_169("STRING_2083848652");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_169);
    UndlyInstrumentParties_NoUndlyInstrumentParties_169.insert(UnderlyingInstrumentPartyID_169.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_169('9');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_169);
    UndlyInstrumentParties_NoUndlyInstrumentParties_169.insert(UnderlyingInstrumentPartyIDSource_169.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_169(425578707);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_169);
    UndlyInstrumentParties_NoUndlyInstrumentParties_169.insert(UnderlyingInstrumentPartyRole_169.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_169);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_329("STRING_1755733169");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_329);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329.insert(UnderlyingInstrumentPartySubID_329.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_329(1945973140);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_329);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329.insert(UnderlyingInstrumentPartySubIDType_329.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
