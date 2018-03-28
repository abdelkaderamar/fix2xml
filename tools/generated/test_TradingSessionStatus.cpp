#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/TradingSessionStatus.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionStatus, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradingSessionStatus msg;

  list<multiset<string>> all_values;
  multiset<string> TradingSessionStatus_0;
  FIX::EncodedText EncodedText_109("DATA_1100525586");
  msg.set(EncodedText_109);
  TradingSessionStatus_0.insert(EncodedText_109.getString());
  FIX::EncodedTextLen EncodedTextLen_109(2041916286);
  msg.set(EncodedTextLen_109);
  TradingSessionStatus_0.insert(EncodedTextLen_109.getString());
  FIX::MarketID MarketID_32("EXCHANGE_1599387683");
  msg.set(MarketID_32);
  TradingSessionStatus_0.insert(MarketID_32.getString());
  FIX::MarketSegmentID MarketSegmentID_32("STRING_7152821");
  msg.set(MarketSegmentID_32);
  TradingSessionStatus_0.insert(MarketSegmentID_32.getString());
  FIX::Text Text_109("STRING_1624622595");
  msg.set(Text_109);
  TradingSessionStatus_0.insert(Text_109.getString());
  FIX::TotalVolumeTraded TotalVolumeTraded_5;
  TotalVolumeTraded_5.setString("12783770");
  msg.set(TotalVolumeTraded_5);
  TradingSessionStatus_0.insert(TotalVolumeTraded_5.getString());
  FIX::TradSesCloseTime TradSesCloseTime_5(FIX::UTCTIMESTAMP(6, 26, 54, 25, 8, 2007));
  msg.set(TradSesCloseTime_5);
  TradingSessionStatus_0.insert(TradSesCloseTime_5.getString());
  FIX::TradSesEndTime TradSesEndTime_5(FIX::UTCTIMESTAMP(19, 30, 14, 1, 12, 2005));
  msg.set(TradSesEndTime_5);
  TradingSessionStatus_0.insert(TradSesEndTime_5.getString());
  FIX::TradSesEvent TradSesEvent_0(0);
  msg.set(TradSesEvent_0);
  TradingSessionStatus_0.insert(TradSesEvent_0.getString());
  FIX::TradSesMethod TradSesMethod_6(3);
  msg.set(TradSesMethod_6);
  TradingSessionStatus_0.insert(TradSesMethod_6.getString());
  FIX::TradSesMode TradSesMode_6(2);
  msg.set(TradSesMode_6);
  TradingSessionStatus_0.insert(TradSesMode_6.getString());
  FIX::TradSesOpenTime TradSesOpenTime_5(FIX::UTCTIMESTAMP(11, 28, 6, 13, 11, 2010));
  msg.set(TradSesOpenTime_5);
  TradingSessionStatus_0.insert(TradSesOpenTime_5.getString());
  FIX::TradSesPreCloseTime TradSesPreCloseTime_5(FIX::UTCTIMESTAMP(8, 26, 2, 14, 10, 2013));
  msg.set(TradSesPreCloseTime_5);
  TradingSessionStatus_0.insert(TradSesPreCloseTime_5.getString());
  FIX::TradSesReqID TradSesReqID_3("STRING_2052881652");
  msg.set(TradSesReqID_3);
  TradingSessionStatus_0.insert(TradSesReqID_3.getString());
  FIX::TradSesStartTime TradSesStartTime_5(FIX::UTCTIMESTAMP(8, 58, 37, 11, 6, 2004));
  msg.set(TradSesStartTime_5);
  TradingSessionStatus_0.insert(TradSesStartTime_5.getString());
  FIX::TradSesStatus TradSesStatus_5(5);
  msg.set(TradSesStatus_5);
  TradingSessionStatus_0.insert(TradSesStatus_5.getString());
  FIX::TradSesStatusRejReason TradSesStatusRejReason_5(1);
  msg.set(TradSesStatusRejReason_5);
  TradingSessionStatus_0.insert(TradSesStatusRejReason_5.getString());
  FIX::TradingSessionID TradingSessionID_101("STRING_2");
  msg.set(TradingSessionID_101);
  TradingSessionStatus_0.insert(TradingSessionID_101.getString());
  FIX::TradingSessionSubID TradingSessionSubID_101("STRING_1");
  msg.set(TradingSessionSubID_101);
  TradingSessionStatus_0.insert(TradingSessionSubID_101.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_9(false);
  msg.set(UnsolicitedIndicator_9);
  TradingSessionStatus_0.insert(UnsolicitedIndicator_9.getString());
  all_values.push_back(TradingSessionStatus_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_22;
  FIX::ApplID ApplID_22("STRING_501286780");
  msg.set(ApplID_22);
  ApplicationSequenceControl_22.insert(ApplID_22.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_22(454824224);
  msg.set(ApplLastSeqNum_22);
  ApplicationSequenceControl_22.insert(ApplLastSeqNum_22.getString());
  FIX::ApplResendFlag ApplResendFlag_22(true);
  msg.set(ApplResendFlag_22);
  ApplicationSequenceControl_22.insert(ApplResendFlag_22.getString());
  FIX::ApplSeqNum ApplSeqNum_22(1828209560);
  msg.set(ApplSeqNum_22);
  ApplicationSequenceControl_22.insert(ApplSeqNum_22.getString());
  all_values.push_back(ApplicationSequenceControl_22);

  // Instrument
  multiset<string> Instrument_93;
  FIX::AttachmentPoint AttachmentPoint_93;
  AttachmentPoint_93.setString("76.220000");
  msg.set(AttachmentPoint_93);
  Instrument_93.insert(AttachmentPoint_93.getString());
  FIX::CFICode CFICode_98("STRING_240077651");
  msg.set(CFICode_98);
  Instrument_93.insert(CFICode_98.getString());
  FIX::CPProgram CPProgram_93(2);
  msg.set(CPProgram_93);
  Instrument_93.insert(CPProgram_93.getString());
  FIX::CPRegType CPRegType_93("STRING_459678180");
  msg.set(CPRegType_93);
  Instrument_93.insert(CPRegType_93.getString());
  FIX::CapPrice CapPrice_93;
  CapPrice_93.setString("13066030");
  msg.set(CapPrice_93);
  Instrument_93.insert(CapPrice_93.getString());
  FIX::ContractMultiplier ContractMultiplier_93;
  ContractMultiplier_93.setString("16146574");
  msg.set(ContractMultiplier_93);
  Instrument_93.insert(ContractMultiplier_93.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_93(2);
  msg.set(ContractMultiplierUnit_93);
  Instrument_93.insert(ContractMultiplierUnit_93.getString());
  FIX::ContractSettlMonth ContractSettlMonth_93("MONTHYEAR_1655417491");
  msg.set(ContractSettlMonth_93);
  Instrument_93.insert(ContractSettlMonth_93.getString());
  FIX::CountryOfIssue CountryOfIssue_93("COUNTRY_454215259");
  msg.set(CountryOfIssue_93);
  Instrument_93.insert(CountryOfIssue_93.getString());
  FIX::CouponPaymentDate CouponPaymentDate_93("LOCALMKTDATE_2126468635");
  msg.set(CouponPaymentDate_93);
  Instrument_93.insert(CouponPaymentDate_93.getString());
  FIX::CouponRate CouponRate_93;
  CouponRate_93.setString("60.060000");
  msg.set(CouponRate_93);
  Instrument_93.insert(CouponRate_93.getString());
  FIX::CreditRating CreditRating_93("STRING_1448409537");
  msg.set(CreditRating_93);
  Instrument_93.insert(CreditRating_93.getString());
  FIX::DatedDate DatedDate_93("LOCALMKTDATE_236735481");
  msg.set(DatedDate_93);
  Instrument_93.insert(DatedDate_93.getString());
  FIX::DetachmentPoint DetachmentPoint_93;
  DetachmentPoint_93.setString("79.070000");
  msg.set(DetachmentPoint_93);
  Instrument_93.insert(DetachmentPoint_93.getString());
  FIX::EncodedIssuer EncodedIssuer_93("DATA_1353807541");
  msg.set(EncodedIssuer_93);
  Instrument_93.insert(EncodedIssuer_93.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_93(1193634037);
  msg.set(EncodedIssuerLen_93);
  Instrument_93.insert(EncodedIssuerLen_93.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_93("DATA_1347143115");
  msg.set(EncodedSecurityDesc_93);
  Instrument_93.insert(EncodedSecurityDesc_93.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_93(1506626099);
  msg.set(EncodedSecurityDescLen_93);
  Instrument_93.insert(EncodedSecurityDescLen_93.getString());
  FIX::ExerciseStyle ExerciseStyle_93(2);
  msg.set(ExerciseStyle_93);
  Instrument_93.insert(ExerciseStyle_93.getString());
  FIX::Factor Factor_93;
  Factor_93.setString("18457008");
  msg.set(Factor_93);
  Instrument_93.insert(Factor_93.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_93(false);
  msg.set(FlexProductEligibilityIndicator_93);
  Instrument_93.insert(FlexProductEligibilityIndicator_93.getString());
  FIX::FlexibleIndicator FlexibleIndicator_93(true);
  msg.set(FlexibleIndicator_93);
  Instrument_93.insert(FlexibleIndicator_93.getString());
  FIX::FloorPrice FloorPrice_93;
  FloorPrice_93.setString("3545304");
  msg.set(FloorPrice_93);
  Instrument_93.insert(FloorPrice_93.getString());
  FIX::FlowScheduleType FlowScheduleType_93(0);
  msg.set(FlowScheduleType_93);
  Instrument_93.insert(FlowScheduleType_93.getString());
  FIX::InstrRegistry InstrRegistry_93("STRING_1390549721");
  msg.set(InstrRegistry_93);
  Instrument_93.insert(InstrRegistry_93.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_93('1');
  msg.set(InstrmtAssignmentMethod_93);
  Instrument_93.insert(InstrmtAssignmentMethod_93.getString());
  FIX::InterestAccrualDate InterestAccrualDate_93("LOCALMKTDATE_494669524");
  msg.set(InterestAccrualDate_93);
  Instrument_93.insert(InterestAccrualDate_93.getString());
  FIX::IssueDate IssueDate_93("LOCALMKTDATE_1891836501");
  msg.set(IssueDate_93);
  Instrument_93.insert(IssueDate_93.getString());
  FIX::Issuer Issuer_93("STRING_30652373");
  msg.set(Issuer_93);
  Instrument_93.insert(Issuer_93.getString());
  FIX::ListMethod ListMethod_93(1);
  msg.set(ListMethod_93);
  Instrument_93.insert(ListMethod_93.getString());
  FIX::LocaleOfIssue LocaleOfIssue_93("STRING_1572562413");
  msg.set(LocaleOfIssue_93);
  Instrument_93.insert(LocaleOfIssue_93.getString());
  FIX::MaturityDate MaturityDate_93("LOCALMKTDATE_1330379995");
  msg.set(MaturityDate_93);
  Instrument_93.insert(MaturityDate_93.getString());
  FIX::MaturityMonthYear MaturityMonthYear_93("MONTHYEAR_139606960");
  msg.set(MaturityMonthYear_93);
  Instrument_93.insert(MaturityMonthYear_93.getString());
  FIX::MaturityTime MaturityTime_93("TZTIMEONLY_1153220346");
  msg.set(MaturityTime_93);
  Instrument_93.insert(MaturityTime_93.getString());
  FIX::MinPriceIncrement MinPriceIncrement_93;
  MinPriceIncrement_93.setString("17900581");
  msg.set(MinPriceIncrement_93);
  Instrument_93.insert(MinPriceIncrement_93.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_93;
  MinPriceIncrementAmount_93.setString("14462099");
  msg.set(MinPriceIncrementAmount_93);
  Instrument_93.insert(MinPriceIncrementAmount_93.getString());
  FIX::NTPositionLimit NTPositionLimit_93(620394148);
  msg.set(NTPositionLimit_93);
  Instrument_93.insert(NTPositionLimit_93.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_93;
  NotionalPercentageOutstanding_93.setString("16.170000");
  msg.set(NotionalPercentageOutstanding_93);
  Instrument_93.insert(NotionalPercentageOutstanding_93.getString());
  FIX::OptAttribute OptAttribute_93('9');
  msg.set(OptAttribute_93);
  Instrument_93.insert(OptAttribute_93.getString());
  FIX::OptPayoutAmount OptPayoutAmount_93;
  OptPayoutAmount_93.setString("10746094");
  msg.set(OptPayoutAmount_93);
  Instrument_93.insert(OptPayoutAmount_93.getString());
  FIX::OptPayoutType OptPayoutType_93(2);
  msg.set(OptPayoutType_93);
  Instrument_93.insert(OptPayoutType_93.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_93;
  OriginalNotionalPercentageOutstanding_93.setString("61.740000");
  msg.set(OriginalNotionalPercentageOutstanding_93);
  Instrument_93.insert(OriginalNotionalPercentageOutstanding_93.getString());
  FIX::Pool Pool_93("STRING_375535296");
  msg.set(Pool_93);
  Instrument_93.insert(Pool_93.getString());
  FIX::PositionLimit PositionLimit_93(1204152085);
  msg.set(PositionLimit_93);
  Instrument_93.insert(PositionLimit_93.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_93("STRING_INT");
  msg.set(PriceQuoteMethod_93);
  Instrument_93.insert(PriceQuoteMethod_93.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_93("STRING_1729342837");
  msg.set(PriceUnitOfMeasure_93);
  Instrument_93.insert(PriceUnitOfMeasure_93.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_93;
  PriceUnitOfMeasureQty_93.setString("2503024");
  msg.set(PriceUnitOfMeasureQty_93);
  Instrument_93.insert(PriceUnitOfMeasureQty_93.getString());
  FIX::Product Product_101(13);
  msg.set(Product_101);
  Instrument_93.insert(Product_101.getString());
  FIX::ProductComplex ProductComplex_93("STRING_1088485289");
  msg.set(ProductComplex_93);
  Instrument_93.insert(ProductComplex_93.getString());
  FIX::PutOrCall PutOrCall_93(0);
  msg.set(PutOrCall_93);
  Instrument_93.insert(PutOrCall_93.getString());
  FIX::RedemptionDate RedemptionDate_93("LOCALMKTDATE_1695904372");
  msg.set(RedemptionDate_93);
  Instrument_93.insert(RedemptionDate_93.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_93("STRING_1240230782");
  msg.set(RepoCollateralSecurityType_93);
  Instrument_93.insert(RepoCollateralSecurityType_93.getString());
  FIX::RepurchaseRate RepurchaseRate_93;
  RepurchaseRate_93.setString("22.750000");
  msg.set(RepurchaseRate_93);
  Instrument_93.insert(RepurchaseRate_93.getString());
  FIX::RepurchaseTerm RepurchaseTerm_93(2050434825);
  msg.set(RepurchaseTerm_93);
  Instrument_93.insert(RepurchaseTerm_93.getString());
  FIX::RestructuringType RestructuringType_93("STRING_XR");
  msg.set(RestructuringType_93);
  Instrument_93.insert(RestructuringType_93.getString());
  FIX::SecurityDesc SecurityDesc_93("STRING_55198348");
  msg.set(SecurityDesc_93);
  Instrument_93.insert(SecurityDesc_93.getString());
  FIX::SecurityExchange SecurityExchange_99("EXCHANGE_1626262974");
  msg.set(SecurityExchange_99);
  Instrument_93.insert(SecurityExchange_99.getString());
  FIX::SecurityGroup SecurityGroup_93("STRING_1699519423");
  msg.set(SecurityGroup_93);
  Instrument_93.insert(SecurityGroup_93.getString());
  FIX::SecurityID SecurityID_93("STRING_1947034850");
  msg.set(SecurityID_93);
  Instrument_93.insert(SecurityID_93.getString());
  FIX::SecurityIDSource SecurityIDSource_93("STRING_M");
  msg.set(SecurityIDSource_93);
  Instrument_93.insert(SecurityIDSource_93.getString());
  FIX::SecurityStatus SecurityStatus_94("STRING_1");
  msg.set(SecurityStatus_94);
  Instrument_93.insert(SecurityStatus_94.getString());
  FIX::SecuritySubType SecuritySubType_97("STRING_1372113615");
  msg.set(SecuritySubType_97);
  Instrument_93.insert(SecuritySubType_97.getString());
  FIX::SecurityType SecurityType_101("STRING_SECLOAN");
  msg.set(SecurityType_101);
  Instrument_93.insert(SecurityType_101.getString());
  FIX::Seniority Seniority_93("STRING_SB");
  msg.set(Seniority_93);
  Instrument_93.insert(Seniority_93.getString());
  FIX::SettlMethod SettlMethod_93('P');
  msg.set(SettlMethod_93);
  Instrument_93.insert(SettlMethod_93.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_93("STRING_482386222");
  msg.set(SettleOnOpenFlag_93);
  Instrument_93.insert(SettleOnOpenFlag_93.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_93("STRING_1037382018");
  msg.set(StateOrProvinceOfIssue_93);
  Instrument_93.insert(StateOrProvinceOfIssue_93.getString());
  FIX::StrikeCurrency StrikeCurrency_93("CHF");
  msg.set(StrikeCurrency_93);
  Instrument_93.insert(StrikeCurrency_93.getString());
  FIX::StrikeMultiplier StrikeMultiplier_93;
  StrikeMultiplier_93.setString("19915258");
  msg.set(StrikeMultiplier_93);
  Instrument_93.insert(StrikeMultiplier_93.getString());
  FIX::StrikePrice StrikePrice_93;
  StrikePrice_93.setString("20728538");
  msg.set(StrikePrice_93);
  Instrument_93.insert(StrikePrice_93.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_93(2);
  msg.set(StrikePriceBoundaryMethod_93);
  Instrument_93.insert(StrikePriceBoundaryMethod_93.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_93;
  StrikePriceBoundaryPrecision_93.setString("83.610000");
  msg.set(StrikePriceBoundaryPrecision_93);
  Instrument_93.insert(StrikePriceBoundaryPrecision_93.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_93(3);
  msg.set(StrikePriceDeterminationMethod_93);
  Instrument_93.insert(StrikePriceDeterminationMethod_93.getString());
  FIX::StrikeValue StrikeValue_93;
  StrikeValue_93.setString("14949028");
  msg.set(StrikeValue_93);
  Instrument_93.insert(StrikeValue_93.getString());
  FIX::Symbol Symbol_93("STRING_757382443");
  msg.set(Symbol_93);
  Instrument_93.insert(Symbol_93.getString());
  FIX::SymbolSfx SymbolSfx_93("STRING_WI");
  msg.set(SymbolSfx_93);
  Instrument_93.insert(SymbolSfx_93.getString());
  FIX::TimeUnit TimeUnit_93("STRING_Yr");
  msg.set(TimeUnit_93);
  Instrument_93.insert(TimeUnit_93.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_93(1);
  msg.set(UnderlyingPriceDeterminationMethod_93);
  Instrument_93.insert(UnderlyingPriceDeterminationMethod_93.getString());
  FIX::UnitOfMeasure UnitOfMeasure_93("STRING_MMBtu");
  msg.set(UnitOfMeasure_93);
  Instrument_93.insert(UnitOfMeasure_93.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_93;
  UnitOfMeasureQty_93.setString("11659406");
  msg.set(UnitOfMeasureQty_93);
  Instrument_93.insert(UnitOfMeasureQty_93.getString());
  FIX::ValuationMethod ValuationMethod_93("STRING_FUT");
  msg.set(ValuationMethod_93);
  Instrument_93.insert(ValuationMethod_93.getString());
  all_values.push_back(Instrument_93);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradingSessionStatus::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_179;
    FIX::ComplexEventCondition ComplexEventCondition_179(2);
    noComplexEvents_0_0.set(ComplexEventCondition_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventCondition_179.getString());
    FIX::ComplexEventPrice ComplexEventPrice_179;
    ComplexEventPrice_179.setString("589578");
    noComplexEvents_0_0.set(ComplexEventPrice_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventPrice_179.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_179(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventPriceBoundaryMethod_179.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_179;
    ComplexEventPriceBoundaryPrecision_179.setString("12.600000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventPriceBoundaryPrecision_179.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_179(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventPriceTimeType_179.getString());
    FIX::ComplexEventType ComplexEventType_179(6);
    noComplexEvents_0_0.set(ComplexEventType_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventType_179.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_179;
    ComplexOptPayoutAmount_179.setString("18328224");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexOptPayoutAmount_179.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_179);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_358;
      FIX::ComplexEventEndDate ComplexEventEndDate_358(FIX::UTCTIMESTAMP(21, 41, 2, 7, 8, 2000));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_358);
      ComplexEventDates_NoComplexEventDates_358.insert(ComplexEventEndDate_358.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_358(FIX::UTCTIMESTAMP(11, 19, 18, 7, 5, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_358);
      ComplexEventDates_NoComplexEventDates_358.insert(ComplexEventStartDate_358.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_358);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_738;
        FIX::ComplexEventEndTime ComplexEventEndTime_738(FIX::UTCTIMEONLY(20, 52, 27));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_738);
        ComplexEventTimes_NoComplexEventTimes_738.insert(ComplexEventEndTime_738.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_738(FIX::UTCTIMEONLY(17, 24, 31));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_738);
        ComplexEventTimes_NoComplexEventTimes_738.insert(ComplexEventStartTime_738.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_738);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_739;
        FIX::ComplexEventEndTime ComplexEventEndTime_739(FIX::UTCTIMEONLY(9, 52, 44));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_739);
        ComplexEventTimes_NoComplexEventTimes_739.insert(ComplexEventEndTime_739.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_739(FIX::UTCTIMEONLY(21, 38, 23));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_739);
        ComplexEventTimes_NoComplexEventTimes_739.insert(ComplexEventStartTime_739.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_739);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_180;
    FIX::ComplexEventCondition ComplexEventCondition_180(2);
    noComplexEvents_0_1.set(ComplexEventCondition_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventCondition_180.getString());
    FIX::ComplexEventPrice ComplexEventPrice_180;
    ComplexEventPrice_180.setString("5537015");
    noComplexEvents_0_1.set(ComplexEventPrice_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventPrice_180.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_180(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventPriceBoundaryMethod_180.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_180;
    ComplexEventPriceBoundaryPrecision_180.setString("51.410000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventPriceBoundaryPrecision_180.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_180(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventPriceTimeType_180.getString());
    FIX::ComplexEventType ComplexEventType_180(8);
    noComplexEvents_0_1.set(ComplexEventType_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventType_180.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_180;
    ComplexOptPayoutAmount_180.setString("2621834");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexOptPayoutAmount_180.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_180);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_359;
      FIX::ComplexEventEndDate ComplexEventEndDate_359(FIX::UTCTIMESTAMP(1, 10, 22, 21, 4, 2006));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_359);
      ComplexEventDates_NoComplexEventDates_359.insert(ComplexEventEndDate_359.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_359(FIX::UTCTIMESTAMP(11, 11, 47, 23, 5, 2011));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_359);
      ComplexEventDates_NoComplexEventDates_359.insert(ComplexEventStartDate_359.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_359);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_740;
        FIX::ComplexEventEndTime ComplexEventEndTime_740(FIX::UTCTIMEONLY(9, 59, 53));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_740);
        ComplexEventTimes_NoComplexEventTimes_740.insert(ComplexEventEndTime_740.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_740(FIX::UTCTIMEONLY(20, 23, 41));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_740);
        ComplexEventTimes_NoComplexEventTimes_740.insert(ComplexEventStartTime_740.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_740);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_741;
        FIX::ComplexEventEndTime ComplexEventEndTime_741(FIX::UTCTIMEONLY(3, 38, 49));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_741);
        ComplexEventTimes_NoComplexEventTimes_741.insert(ComplexEventEndTime_741.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_741(FIX::UTCTIMEONLY(22, 55, 50));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_741);
        ComplexEventTimes_NoComplexEventTimes_741.insert(ComplexEventStartTime_741.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_741);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_742;
        FIX::ComplexEventEndTime ComplexEventEndTime_742(FIX::UTCTIMEONLY(8, 1, 55));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_742);
        ComplexEventTimes_NoComplexEventTimes_742.insert(ComplexEventEndTime_742.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_742(FIX::UTCTIMEONLY(20, 13, 29));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_742);
        ComplexEventTimes_NoComplexEventTimes_742.insert(ComplexEventStartTime_742.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_742);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_360;
      FIX::ComplexEventEndDate ComplexEventEndDate_360(FIX::UTCTIMESTAMP(12, 16, 14, 24, 9, 2003));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_360);
      ComplexEventDates_NoComplexEventDates_360.insert(ComplexEventEndDate_360.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_360(FIX::UTCTIMESTAMP(21, 20, 10, 27, 9, 2001));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_360);
      ComplexEventDates_NoComplexEventDates_360.insert(ComplexEventStartDate_360.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_360);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_743;
        FIX::ComplexEventEndTime ComplexEventEndTime_743(FIX::UTCTIMEONLY(5, 50, 45));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_743);
        ComplexEventTimes_NoComplexEventTimes_743.insert(ComplexEventEndTime_743.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_743(FIX::UTCTIMEONLY(12, 40, 10));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_743);
        ComplexEventTimes_NoComplexEventTimes_743.insert(ComplexEventStartTime_743.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_743);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_744;
        FIX::ComplexEventEndTime ComplexEventEndTime_744(FIX::UTCTIMEONLY(16, 3, 40));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_744);
        ComplexEventTimes_NoComplexEventTimes_744.insert(ComplexEventEndTime_744.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_744(FIX::UTCTIMEONLY(23, 54, 30));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_744);
        ComplexEventTimes_NoComplexEventTimes_744.insert(ComplexEventStartTime_744.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_744);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_745;
        FIX::ComplexEventEndTime ComplexEventEndTime_745(FIX::UTCTIMEONLY(10, 38, 52));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_745);
        ComplexEventTimes_NoComplexEventTimes_745.insert(ComplexEventEndTime_745.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_745(FIX::UTCTIMEONLY(14, 5, 28));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_745);
        ComplexEventTimes_NoComplexEventTimes_745.insert(ComplexEventStartTime_745.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_745);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::TradingSessionStatus::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_181;
    FIX::ComplexEventCondition ComplexEventCondition_181(2);
    noComplexEvents_0_2.set(ComplexEventCondition_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventCondition_181.getString());
    FIX::ComplexEventPrice ComplexEventPrice_181;
    ComplexEventPrice_181.setString("20277693");
    noComplexEvents_0_2.set(ComplexEventPrice_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventPrice_181.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_181(1);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventPriceBoundaryMethod_181.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_181;
    ComplexEventPriceBoundaryPrecision_181.setString("34.220000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventPriceBoundaryPrecision_181.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_181(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventPriceTimeType_181.getString());
    FIX::ComplexEventType ComplexEventType_181(2);
    noComplexEvents_0_2.set(ComplexEventType_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventType_181.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_181;
    ComplexOptPayoutAmount_181.setString("2448493");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexOptPayoutAmount_181.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_181);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_361;
      FIX::ComplexEventEndDate ComplexEventEndDate_361(FIX::UTCTIMESTAMP(9, 59, 36, 22, 8, 2014));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_361);
      ComplexEventDates_NoComplexEventDates_361.insert(ComplexEventEndDate_361.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_361(FIX::UTCTIMESTAMP(15, 41, 8, 24, 9, 2006));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_361);
      ComplexEventDates_NoComplexEventDates_361.insert(ComplexEventStartDate_361.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_361);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_746;
        FIX::ComplexEventEndTime ComplexEventEndTime_746(FIX::UTCTIMEONLY(4, 16, 34));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_746);
        ComplexEventTimes_NoComplexEventTimes_746.insert(ComplexEventEndTime_746.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_746(FIX::UTCTIMEONLY(11, 40, 27));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_746);
        ComplexEventTimes_NoComplexEventTimes_746.insert(ComplexEventStartTime_746.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_746);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_747;
        FIX::ComplexEventEndTime ComplexEventEndTime_747(FIX::UTCTIMEONLY(21, 57, 45));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_747);
        ComplexEventTimes_NoComplexEventTimes_747.insert(ComplexEventEndTime_747.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_747(FIX::UTCTIMEONLY(21, 40, 29));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_747);
        ComplexEventTimes_NoComplexEventTimes_747.insert(ComplexEventStartTime_747.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_747);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_748;
        FIX::ComplexEventEndTime ComplexEventEndTime_748(FIX::UTCTIMEONLY(17, 28, 29));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_748);
        ComplexEventTimes_NoComplexEventTimes_748.insert(ComplexEventEndTime_748.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_748(FIX::UTCTIMEONLY(15, 7, 35));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_748);
        ComplexEventTimes_NoComplexEventTimes_748.insert(ComplexEventStartTime_748.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_748);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_362;
      FIX::ComplexEventEndDate ComplexEventEndDate_362(FIX::UTCTIMESTAMP(4, 43, 22, 16, 2, 2006));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_362);
      ComplexEventDates_NoComplexEventDates_362.insert(ComplexEventEndDate_362.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_362(FIX::UTCTIMESTAMP(9, 9, 37, 25, 9, 2003));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_362);
      ComplexEventDates_NoComplexEventDates_362.insert(ComplexEventStartDate_362.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_362);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_749;
        FIX::ComplexEventEndTime ComplexEventEndTime_749(FIX::UTCTIMEONLY(22, 58, 39));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_749);
        ComplexEventTimes_NoComplexEventTimes_749.insert(ComplexEventEndTime_749.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_749(FIX::UTCTIMEONLY(19, 19, 35));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_749);
        ComplexEventTimes_NoComplexEventTimes_749.insert(ComplexEventStartTime_749.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_749);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_750;
        FIX::ComplexEventEndTime ComplexEventEndTime_750(FIX::UTCTIMEONLY(17, 56, 6));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_750);
        ComplexEventTimes_NoComplexEventTimes_750.insert(ComplexEventEndTime_750.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_750(FIX::UTCTIMEONLY(11, 13, 11));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_750);
        ComplexEventTimes_NoComplexEventTimes_750.insert(ComplexEventStartTime_750.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_750);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_751;
        FIX::ComplexEventEndTime ComplexEventEndTime_751(FIX::UTCTIMEONLY(22, 46, 8));
        noComplexEventTimes_2_1_2_2.set(ComplexEventEndTime_751);
        ComplexEventTimes_NoComplexEventTimes_751.insert(ComplexEventEndTime_751.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_751(FIX::UTCTIMEONLY(23, 1, 25));
        noComplexEventTimes_2_1_2_2.set(ComplexEventStartTime_751);
        ComplexEventTimes_NoComplexEventTimes_751.insert(ComplexEventStartTime_751.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_751);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradingSessionStatus::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_180;
    FIX::EventDate EventDate_180("LOCALMKTDATE_1697061370");
    noEvents_0_0.set(EventDate_180);
    EvntGrp_NoEvents_180.insert(EventDate_180.getString());
    FIX::EventPx EventPx_180;
    EventPx_180.setString("16153966");
    noEvents_0_0.set(EventPx_180);
    EvntGrp_NoEvents_180.insert(EventPx_180.getString());
    FIX::EventText EventText_180("STRING_173927370");
    noEvents_0_0.set(EventText_180);
    EvntGrp_NoEvents_180.insert(EventText_180.getString());
    FIX::EventTime EventTime_180(FIX::UTCTIMESTAMP(15, 38, 4, 5, 1, 2014));
    noEvents_0_0.set(EventTime_180);
    EvntGrp_NoEvents_180.insert(EventTime_180.getString());
    FIX::EventType EventType_180(8);
    noEvents_0_0.set(EventType_180);
    EvntGrp_NoEvents_180.insert(EventType_180.getString());
    all_values.push_back(EvntGrp_NoEvents_180);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_180;
    FIX::InstrumentPartyID InstrumentPartyID_180("STRING_242573695");
    noInstrumentParties_0_0.set(InstrumentPartyID_180);
    InstrumentParties_NoInstrumentParties_180.insert(InstrumentPartyID_180.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_180('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_180);
    InstrumentParties_NoInstrumentParties_180.insert(InstrumentPartyIDSource_180.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_180(334437048);
    noInstrumentParties_0_0.set(InstrumentPartyRole_180);
    InstrumentParties_NoInstrumentParties_180.insert(InstrumentPartyRole_180.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_180);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365;
      FIX::InstrumentPartySubID InstrumentPartySubID_365("STRING_1905378639");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_365);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365.insert(InstrumentPartySubID_365.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_365(690019794);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_365);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365.insert(InstrumentPartySubIDType_365.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_181;
    FIX::InstrumentPartyID InstrumentPartyID_181("STRING_549479033");
    noInstrumentParties_0_1.set(InstrumentPartyID_181);
    InstrumentParties_NoInstrumentParties_181.insert(InstrumentPartyID_181.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_181('6');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_181);
    InstrumentParties_NoInstrumentParties_181.insert(InstrumentPartyIDSource_181.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_181(3166739);
    noInstrumentParties_0_1.set(InstrumentPartyRole_181);
    InstrumentParties_NoInstrumentParties_181.insert(InstrumentPartyRole_181.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_181);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366;
      FIX::InstrumentPartySubID InstrumentPartySubID_366("STRING_2059010172");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_366);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366.insert(InstrumentPartySubID_366.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_366(50859705);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_366);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366.insert(InstrumentPartySubIDType_366.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367;
      FIX::InstrumentPartySubID InstrumentPartySubID_367("STRING_683966203");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_367);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367.insert(InstrumentPartySubID_367.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_367(525329953);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_367);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367.insert(InstrumentPartySubIDType_367.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368;
      FIX::InstrumentPartySubID InstrumentPartySubID_368("STRING_1759934648");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_368);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368.insert(InstrumentPartySubID_368.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_368(1590695586);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_368);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368.insert(InstrumentPartySubIDType_368.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_182;
    FIX::InstrumentPartyID InstrumentPartyID_182("STRING_741197594");
    noInstrumentParties_0_2.set(InstrumentPartyID_182);
    InstrumentParties_NoInstrumentParties_182.insert(InstrumentPartyID_182.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_182('2');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_182);
    InstrumentParties_NoInstrumentParties_182.insert(InstrumentPartyIDSource_182.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_182(691124155);
    noInstrumentParties_0_2.set(InstrumentPartyRole_182);
    InstrumentParties_NoInstrumentParties_182.insert(InstrumentPartyRole_182.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_182);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369;
      FIX::InstrumentPartySubID InstrumentPartySubID_369("STRING_1875171327");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_369);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369.insert(InstrumentPartySubID_369.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_369(865051525);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_369);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369.insert(InstrumentPartySubIDType_369.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370;
      FIX::InstrumentPartySubID InstrumentPartySubID_370("STRING_1962874106");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_370);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370.insert(InstrumentPartySubID_370.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_370(65195182);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_370);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370.insert(InstrumentPartySubIDType_370.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_192;
    FIX::SecurityAltID SecurityAltID_192("STRING_15155962");
    noSecurityAltID_0_0.set(SecurityAltID_192);
    SecAltIDGrp_NoSecurityAltID_192.insert(SecurityAltID_192.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_192("STRING_1054104563");
    noSecurityAltID_0_0.set(SecurityAltIDSource_192);
    SecAltIDGrp_NoSecurityAltID_192.insert(SecurityAltIDSource_192.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_192);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_193;
    FIX::SecurityAltID SecurityAltID_193("STRING_1764602792");
    noSecurityAltID_0_1.set(SecurityAltID_193);
    SecAltIDGrp_NoSecurityAltID_193.insert(SecurityAltID_193.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_193("STRING_372624546");
    noSecurityAltID_0_1.set(SecurityAltIDSource_193);
    SecAltIDGrp_NoSecurityAltID_193.insert(SecurityAltIDSource_193.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_193);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_194;
    FIX::SecurityAltID SecurityAltID_194("STRING_1742640811");
    noSecurityAltID_0_2.set(SecurityAltID_194);
    SecAltIDGrp_NoSecurityAltID_194.insert(SecurityAltID_194.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_194("STRING_2120178164");
    noSecurityAltID_0_2.set(SecurityAltIDSource_194);
    SecAltIDGrp_NoSecurityAltID_194.insert(SecurityAltIDSource_194.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_194);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_186;
  FIX::SecurityXML SecurityXML_187("XMLDATA_615198242");
  msg.set(SecurityXML_187);
  FIX::SecurityXMLLen SecurityXMLLen_93(1001650926);
  msg.set(SecurityXMLLen_93);
  FIX::SecurityXMLSchema SecurityXMLSchema_93("STRING_307131564");
  msg.set(SecurityXMLSchema_93);
  SecurityXML_186.insert(SecurityXMLSchema_93.getString());
  all_values.push_back(SecurityXML_186);


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
