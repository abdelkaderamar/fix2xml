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
  FIX::EncodedText EncodedText_103("DATA_1981856934");
  msg.set(EncodedText_103);
  TradingSessionStatus_0.insert(EncodedText_103.getString());
  FIX::EncodedTextLen EncodedTextLen_103(1781389130);
  msg.set(EncodedTextLen_103);
  TradingSessionStatus_0.insert(EncodedTextLen_103.getString());
  FIX::MarketID MarketID_34("EXCHANGE_892334849");
  msg.set(MarketID_34);
  TradingSessionStatus_0.insert(MarketID_34.getString());
  FIX::MarketSegmentID MarketSegmentID_34("STRING_1080680729");
  msg.set(MarketSegmentID_34);
  TradingSessionStatus_0.insert(MarketSegmentID_34.getString());
  FIX::Text Text_103("STRING_1987196903");
  msg.set(Text_103);
  TradingSessionStatus_0.insert(Text_103.getString());
  FIX::TotalVolumeTraded TotalVolumeTraded_3;
  TotalVolumeTraded_3.setString("11697708");
  msg.set(TotalVolumeTraded_3);
  TradingSessionStatus_0.insert(TotalVolumeTraded_3.getString());
  FIX::TradSesCloseTime TradSesCloseTime_3(FIX::UTCTIMESTAMP(20, 45, 56, 17, 112006));
  msg.set(TradSesCloseTime_3);
  TradingSessionStatus_0.insert(TradSesCloseTime_3.getString());
  FIX::TradSesEndTime TradSesEndTime_3(FIX::UTCTIMESTAMP(4, 11, 14, 26, 122005));
  msg.set(TradSesEndTime_3);
  TradingSessionStatus_0.insert(TradSesEndTime_3.getString());
  FIX::TradSesEvent TradSesEvent_0(1);
  msg.set(TradSesEvent_0);
  TradingSessionStatus_0.insert(TradSesEvent_0.getString());
  FIX::TradSesMethod TradSesMethod_4(3);
  msg.set(TradSesMethod_4);
  TradingSessionStatus_0.insert(TradSesMethod_4.getString());
  FIX::TradSesMode TradSesMode_4(3);
  msg.set(TradSesMode_4);
  TradingSessionStatus_0.insert(TradSesMode_4.getString());
  FIX::TradSesOpenTime TradSesOpenTime_3(FIX::UTCTIMESTAMP(21, 54, 50, 16, 62014));
  msg.set(TradSesOpenTime_3);
  TradingSessionStatus_0.insert(TradSesOpenTime_3.getString());
  FIX::TradSesPreCloseTime TradSesPreCloseTime_3(FIX::UTCTIMESTAMP(11, 20, 25, 9, 122009));
  msg.set(TradSesPreCloseTime_3);
  TradingSessionStatus_0.insert(TradSesPreCloseTime_3.getString());
  FIX::TradSesReqID TradSesReqID_3("STRING_2030439881");
  msg.set(TradSesReqID_3);
  TradingSessionStatus_0.insert(TradSesReqID_3.getString());
  FIX::TradSesStartTime TradSesStartTime_3(FIX::UTCTIMESTAMP(4, 29, 24, 22, 52003));
  msg.set(TradSesStartTime_3);
  TradingSessionStatus_0.insert(TradSesStartTime_3.getString());
  FIX::TradSesStatus TradSesStatus_3(1);
  msg.set(TradSesStatus_3);
  TradingSessionStatus_0.insert(TradSesStatus_3.getString());
  FIX::TradSesStatusRejReason TradSesStatusRejReason_3(99);
  msg.set(TradSesStatusRejReason_3);
  TradingSessionStatus_0.insert(TradSesStatusRejReason_3.getString());
  FIX::TradingSessionID TradingSessionID_107("STRING_1");
  msg.set(TradingSessionID_107);
  TradingSessionStatus_0.insert(TradingSessionID_107.getString());
  FIX::TradingSessionSubID TradingSessionSubID_107("STRING_5");
  msg.set(TradingSessionSubID_107);
  TradingSessionStatus_0.insert(TradingSessionSubID_107.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_7(false);
  msg.set(UnsolicitedIndicator_7);
  TradingSessionStatus_0.insert(UnsolicitedIndicator_7.getString());
  all_values.push_back(TradingSessionStatus_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_22;
  FIX::ApplID ApplID_22("STRING_797821979");
  msg.set(ApplID_22);
  ApplicationSequenceControl_22.insert(ApplID_22.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_22(825462039);
  msg.set(ApplLastSeqNum_22);
  ApplicationSequenceControl_22.insert(ApplLastSeqNum_22.getString());
  FIX::ApplResendFlag ApplResendFlag_22(true);
  msg.set(ApplResendFlag_22);
  ApplicationSequenceControl_22.insert(ApplResendFlag_22.getString());
  FIX::ApplSeqNum ApplSeqNum_22(241971233);
  msg.set(ApplSeqNum_22);
  ApplicationSequenceControl_22.insert(ApplSeqNum_22.getString());
  all_values.push_back(ApplicationSequenceControl_22);

  // Instrument
  multiset<string> Instrument_93;
  FIX::AttachmentPoint AttachmentPoint_93;
  AttachmentPoint_93.setString("65.070000");
  msg.set(AttachmentPoint_93);
  Instrument_93.insert(AttachmentPoint_93.getString());
  FIX::CFICode CFICode_100("STRING_1100785317");
  msg.set(CFICode_100);
  Instrument_93.insert(CFICode_100.getString());
  FIX::CPProgram CPProgram_93(99);
  msg.set(CPProgram_93);
  Instrument_93.insert(CPProgram_93.getString());
  FIX::CPRegType CPRegType_93("STRING_843412057");
  msg.set(CPRegType_93);
  Instrument_93.insert(CPRegType_93.getString());
  FIX::CapPrice CapPrice_93;
  CapPrice_93.setString("16563077");
  msg.set(CapPrice_93);
  Instrument_93.insert(CapPrice_93.getString());
  FIX::ContractMultiplier ContractMultiplier_93;
  ContractMultiplier_93.setString("18133096");
  msg.set(ContractMultiplier_93);
  Instrument_93.insert(ContractMultiplier_93.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_93(1);
  msg.set(ContractMultiplierUnit_93);
  Instrument_93.insert(ContractMultiplierUnit_93.getString());
  FIX::ContractSettlMonth ContractSettlMonth_93("MONTHYEAR_916887414");
  msg.set(ContractSettlMonth_93);
  Instrument_93.insert(ContractSettlMonth_93.getString());
  FIX::CountryOfIssue CountryOfIssue_93("COUNTRY_1790884820");
  msg.set(CountryOfIssue_93);
  Instrument_93.insert(CountryOfIssue_93.getString());
  FIX::CouponPaymentDate CouponPaymentDate_93("LOCALMKTDATE_56350288");
  msg.set(CouponPaymentDate_93);
  Instrument_93.insert(CouponPaymentDate_93.getString());
  FIX::CouponRate CouponRate_93;
  CouponRate_93.setString("18.790000");
  msg.set(CouponRate_93);
  Instrument_93.insert(CouponRate_93.getString());
  FIX::CreditRating CreditRating_93("STRING_701657121");
  msg.set(CreditRating_93);
  Instrument_93.insert(CreditRating_93.getString());
  FIX::DatedDate DatedDate_93("LOCALMKTDATE_393227224");
  msg.set(DatedDate_93);
  Instrument_93.insert(DatedDate_93.getString());
  FIX::DetachmentPoint DetachmentPoint_93;
  DetachmentPoint_93.setString("35.820000");
  msg.set(DetachmentPoint_93);
  Instrument_93.insert(DetachmentPoint_93.getString());
  FIX::EncodedIssuer EncodedIssuer_93("DATA_584613354");
  msg.set(EncodedIssuer_93);
  Instrument_93.insert(EncodedIssuer_93.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_93(1241487899);
  msg.set(EncodedIssuerLen_93);
  Instrument_93.insert(EncodedIssuerLen_93.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_93("DATA_901423891");
  msg.set(EncodedSecurityDesc_93);
  Instrument_93.insert(EncodedSecurityDesc_93.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_93(151844296);
  msg.set(EncodedSecurityDescLen_93);
  Instrument_93.insert(EncodedSecurityDescLen_93.getString());
  FIX::ExerciseStyle ExerciseStyle_93(1);
  msg.set(ExerciseStyle_93);
  Instrument_93.insert(ExerciseStyle_93.getString());
  FIX::Factor Factor_93;
  Factor_93.setString("13854957");
  msg.set(Factor_93);
  Instrument_93.insert(Factor_93.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_93(true);
  msg.set(FlexProductEligibilityIndicator_93);
  Instrument_93.insert(FlexProductEligibilityIndicator_93.getString());
  FIX::FlexibleIndicator FlexibleIndicator_93(false);
  msg.set(FlexibleIndicator_93);
  Instrument_93.insert(FlexibleIndicator_93.getString());
  FIX::FloorPrice FloorPrice_93;
  FloorPrice_93.setString("15721534");
  msg.set(FloorPrice_93);
  Instrument_93.insert(FloorPrice_93.getString());
  FIX::FlowScheduleType FlowScheduleType_93(0);
  msg.set(FlowScheduleType_93);
  Instrument_93.insert(FlowScheduleType_93.getString());
  FIX::InstrRegistry InstrRegistry_93("STRING_846421513");
  msg.set(InstrRegistry_93);
  Instrument_93.insert(InstrRegistry_93.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_93('1');
  msg.set(InstrmtAssignmentMethod_93);
  Instrument_93.insert(InstrmtAssignmentMethod_93.getString());
  FIX::InterestAccrualDate InterestAccrualDate_93("LOCALMKTDATE_1640266586");
  msg.set(InterestAccrualDate_93);
  Instrument_93.insert(InterestAccrualDate_93.getString());
  FIX::IssueDate IssueDate_93("LOCALMKTDATE_1644243493");
  msg.set(IssueDate_93);
  Instrument_93.insert(IssueDate_93.getString());
  FIX::Issuer Issuer_93("STRING_380953389");
  msg.set(Issuer_93);
  Instrument_93.insert(Issuer_93.getString());
  FIX::ListMethod ListMethod_93(1);
  msg.set(ListMethod_93);
  Instrument_93.insert(ListMethod_93.getString());
  FIX::LocaleOfIssue LocaleOfIssue_93("STRING_1886214726");
  msg.set(LocaleOfIssue_93);
  Instrument_93.insert(LocaleOfIssue_93.getString());
  FIX::MaturityDate MaturityDate_93("LOCALMKTDATE_1081329896");
  msg.set(MaturityDate_93);
  Instrument_93.insert(MaturityDate_93.getString());
  FIX::MaturityMonthYear MaturityMonthYear_93("MONTHYEAR_884583832");
  msg.set(MaturityMonthYear_93);
  Instrument_93.insert(MaturityMonthYear_93.getString());
  FIX::MaturityTime MaturityTime_93("TZTIMEONLY_1408838746");
  msg.set(MaturityTime_93);
  Instrument_93.insert(MaturityTime_93.getString());
  FIX::MinPriceIncrement MinPriceIncrement_93;
  MinPriceIncrement_93.setString("19247419");
  msg.set(MinPriceIncrement_93);
  Instrument_93.insert(MinPriceIncrement_93.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_93;
  MinPriceIncrementAmount_93.setString("3934079");
  msg.set(MinPriceIncrementAmount_93);
  Instrument_93.insert(MinPriceIncrementAmount_93.getString());
  FIX::NTPositionLimit NTPositionLimit_93(1074664698);
  msg.set(NTPositionLimit_93);
  Instrument_93.insert(NTPositionLimit_93.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_93;
  NotionalPercentageOutstanding_93.setString("85.620000");
  msg.set(NotionalPercentageOutstanding_93);
  Instrument_93.insert(NotionalPercentageOutstanding_93.getString());
  FIX::OptAttribute OptAttribute_93('1');
  msg.set(OptAttribute_93);
  Instrument_93.insert(OptAttribute_93.getString());
  FIX::OptPayoutAmount OptPayoutAmount_93;
  OptPayoutAmount_93.setString("7180658");
  msg.set(OptPayoutAmount_93);
  Instrument_93.insert(OptPayoutAmount_93.getString());
  FIX::OptPayoutType OptPayoutType_93(2);
  msg.set(OptPayoutType_93);
  Instrument_93.insert(OptPayoutType_93.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_93;
  OriginalNotionalPercentageOutstanding_93.setString("36.280000");
  msg.set(OriginalNotionalPercentageOutstanding_93);
  Instrument_93.insert(OriginalNotionalPercentageOutstanding_93.getString());
  FIX::Pool Pool_93("STRING_1419722991");
  msg.set(Pool_93);
  Instrument_93.insert(Pool_93.getString());
  FIX::PositionLimit PositionLimit_93(1933506074);
  msg.set(PositionLimit_93);
  Instrument_93.insert(PositionLimit_93.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_93("STRING_INT");
  msg.set(PriceQuoteMethod_93);
  Instrument_93.insert(PriceQuoteMethod_93.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_93("STRING_2004336346");
  msg.set(PriceUnitOfMeasure_93);
  Instrument_93.insert(PriceUnitOfMeasure_93.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_93;
  PriceUnitOfMeasureQty_93.setString("10275103");
  msg.set(PriceUnitOfMeasureQty_93);
  Instrument_93.insert(PriceUnitOfMeasureQty_93.getString());
  FIX::Product Product_103(10);
  msg.set(Product_103);
  Instrument_93.insert(Product_103.getString());
  FIX::ProductComplex ProductComplex_93("STRING_8696994");
  msg.set(ProductComplex_93);
  Instrument_93.insert(ProductComplex_93.getString());
  FIX::PutOrCall PutOrCall_93(0);
  msg.set(PutOrCall_93);
  Instrument_93.insert(PutOrCall_93.getString());
  FIX::RedemptionDate RedemptionDate_93("LOCALMKTDATE_617053179");
  msg.set(RedemptionDate_93);
  Instrument_93.insert(RedemptionDate_93.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_93("STRING_570160394");
  msg.set(RepoCollateralSecurityType_93);
  Instrument_93.insert(RepoCollateralSecurityType_93.getString());
  FIX::RepurchaseRate RepurchaseRate_93;
  RepurchaseRate_93.setString("17.090000");
  msg.set(RepurchaseRate_93);
  Instrument_93.insert(RepurchaseRate_93.getString());
  FIX::RepurchaseTerm RepurchaseTerm_93(41723015);
  msg.set(RepurchaseTerm_93);
  Instrument_93.insert(RepurchaseTerm_93.getString());
  FIX::RestructuringType RestructuringType_93("STRING_MR");
  msg.set(RestructuringType_93);
  Instrument_93.insert(RestructuringType_93.getString());
  FIX::SecurityDesc SecurityDesc_93("STRING_2010063223");
  msg.set(SecurityDesc_93);
  Instrument_93.insert(SecurityDesc_93.getString());
  FIX::SecurityExchange SecurityExchange_97("EXCHANGE_1744698013");
  msg.set(SecurityExchange_97);
  Instrument_93.insert(SecurityExchange_97.getString());
  FIX::SecurityGroup SecurityGroup_93("STRING_1093835228");
  msg.set(SecurityGroup_93);
  Instrument_93.insert(SecurityGroup_93.getString());
  FIX::SecurityID SecurityID_93("STRING_1506823068");
  msg.set(SecurityID_93);
  Instrument_93.insert(SecurityID_93.getString());
  FIX::SecurityIDSource SecurityIDSource_93("STRING_7");
  msg.set(SecurityIDSource_93);
  Instrument_93.insert(SecurityIDSource_93.getString());
  FIX::SecurityStatus SecurityStatus_94("STRING_2");
  msg.set(SecurityStatus_94);
  Instrument_93.insert(SecurityStatus_94.getString());
  FIX::SecuritySubType SecuritySubType_98("STRING_1245554146");
  msg.set(SecuritySubType_98);
  Instrument_93.insert(SecuritySubType_98.getString());
  FIX::SecurityType SecurityType_103("STRING_TLQN");
  msg.set(SecurityType_103);
  Instrument_93.insert(SecurityType_103.getString());
  FIX::Seniority Seniority_93("STRING_SR");
  msg.set(Seniority_93);
  Instrument_93.insert(Seniority_93.getString());
  FIX::SettlMethod SettlMethod_93('C');
  msg.set(SettlMethod_93);
  Instrument_93.insert(SettlMethod_93.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_93("STRING_836755957");
  msg.set(SettleOnOpenFlag_93);
  Instrument_93.insert(SettleOnOpenFlag_93.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_93("STRING_8141910");
  msg.set(StateOrProvinceOfIssue_93);
  Instrument_93.insert(StateOrProvinceOfIssue_93.getString());
  FIX::StrikeCurrency StrikeCurrency_93("CAN");
  msg.set(StrikeCurrency_93);
  Instrument_93.insert(StrikeCurrency_93.getString());
  FIX::StrikeMultiplier StrikeMultiplier_93;
  StrikeMultiplier_93.setString("13184373");
  msg.set(StrikeMultiplier_93);
  Instrument_93.insert(StrikeMultiplier_93.getString());
  FIX::StrikePrice StrikePrice_93;
  StrikePrice_93.setString("1521561");
  msg.set(StrikePrice_93);
  Instrument_93.insert(StrikePrice_93.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_93(2);
  msg.set(StrikePriceBoundaryMethod_93);
  Instrument_93.insert(StrikePriceBoundaryMethod_93.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_93;
  StrikePriceBoundaryPrecision_93.setString("9.340000");
  msg.set(StrikePriceBoundaryPrecision_93);
  Instrument_93.insert(StrikePriceBoundaryPrecision_93.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_93(2);
  msg.set(StrikePriceDeterminationMethod_93);
  Instrument_93.insert(StrikePriceDeterminationMethod_93.getString());
  FIX::StrikeValue StrikeValue_93;
  StrikeValue_93.setString("14995021");
  msg.set(StrikeValue_93);
  Instrument_93.insert(StrikeValue_93.getString());
  FIX::Symbol Symbol_93("STRING_2028668145");
  msg.set(Symbol_93);
  Instrument_93.insert(Symbol_93.getString());
  FIX::SymbolSfx SymbolSfx_93("STRING_WI");
  msg.set(SymbolSfx_93);
  Instrument_93.insert(SymbolSfx_93.getString());
  FIX::TimeUnit TimeUnit_93("STRING_Mo");
  msg.set(TimeUnit_93);
  Instrument_93.insert(TimeUnit_93.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_93(3);
  msg.set(UnderlyingPriceDeterminationMethod_93);
  Instrument_93.insert(UnderlyingPriceDeterminationMethod_93.getString());
  FIX::UnitOfMeasure UnitOfMeasure_93("STRING_Alw");
  msg.set(UnitOfMeasure_93);
  Instrument_93.insert(UnitOfMeasure_93.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_93;
  UnitOfMeasureQty_93.setString("14233234");
  msg.set(UnitOfMeasureQty_93);
  Instrument_93.insert(UnitOfMeasureQty_93.getString());
  FIX::ValuationMethod ValuationMethod_93("STRING_FUTDA");
  msg.set(ValuationMethod_93);
  Instrument_93.insert(ValuationMethod_93.getString());
  all_values.push_back(Instrument_93);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradingSessionStatus::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_171;
    FIX::ComplexEventCondition ComplexEventCondition_171(2);
    noComplexEvents_0_0.set(ComplexEventCondition_171);
    ComplexEvents_NoComplexEvents_171.insert(ComplexEventCondition_171.getString());
    FIX::ComplexEventPrice ComplexEventPrice_171;
    ComplexEventPrice_171.setString("19190017");
    noComplexEvents_0_0.set(ComplexEventPrice_171);
    ComplexEvents_NoComplexEvents_171.insert(ComplexEventPrice_171.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_171(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_171);
    ComplexEvents_NoComplexEvents_171.insert(ComplexEventPriceBoundaryMethod_171.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_171;
    ComplexEventPriceBoundaryPrecision_171.setString("11.040000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_171);
    ComplexEvents_NoComplexEvents_171.insert(ComplexEventPriceBoundaryPrecision_171.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_171(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_171);
    ComplexEvents_NoComplexEvents_171.insert(ComplexEventPriceTimeType_171.getString());
    FIX::ComplexEventType ComplexEventType_171(4);
    noComplexEvents_0_0.set(ComplexEventType_171);
    ComplexEvents_NoComplexEvents_171.insert(ComplexEventType_171.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_171;
    ComplexOptPayoutAmount_171.setString("18088841");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_171);
    ComplexEvents_NoComplexEvents_171.insert(ComplexOptPayoutAmount_171.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_171);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_359;
      FIX::ComplexEventEndDate ComplexEventEndDate_359(FIX::UTCTIMESTAMP(23, 36, 15, 23, 22009));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_359);
      ComplexEventDates_NoComplexEventDates_359.insert(ComplexEventEndDate_359.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_359(FIX::UTCTIMESTAMP(0, 43, 16, 21, 32005));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_359);
      ComplexEventDates_NoComplexEventDates_359.insert(ComplexEventStartDate_359.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_359);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_712;
        FIX::ComplexEventEndTime ComplexEventEndTime_712(FIX::UTCTIMEONLY(4, 23, 5));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_712);
        ComplexEventTimes_NoComplexEventTimes_712.insert(ComplexEventEndTime_712.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_712(FIX::UTCTIMEONLY(11, 35, 36));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_712);
        ComplexEventTimes_NoComplexEventTimes_712.insert(ComplexEventStartTime_712.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_712);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_172;
    FIX::ComplexEventCondition ComplexEventCondition_172(2);
    noComplexEvents_0_1.set(ComplexEventCondition_172);
    ComplexEvents_NoComplexEvents_172.insert(ComplexEventCondition_172.getString());
    FIX::ComplexEventPrice ComplexEventPrice_172;
    ComplexEventPrice_172.setString("1252633");
    noComplexEvents_0_1.set(ComplexEventPrice_172);
    ComplexEvents_NoComplexEvents_172.insert(ComplexEventPrice_172.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_172(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_172);
    ComplexEvents_NoComplexEvents_172.insert(ComplexEventPriceBoundaryMethod_172.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_172;
    ComplexEventPriceBoundaryPrecision_172.setString("5.970000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_172);
    ComplexEvents_NoComplexEvents_172.insert(ComplexEventPriceBoundaryPrecision_172.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_172(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_172);
    ComplexEvents_NoComplexEvents_172.insert(ComplexEventPriceTimeType_172.getString());
    FIX::ComplexEventType ComplexEventType_172(3);
    noComplexEvents_0_1.set(ComplexEventType_172);
    ComplexEvents_NoComplexEvents_172.insert(ComplexEventType_172.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_172;
    ComplexOptPayoutAmount_172.setString("3926811");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_172);
    ComplexEvents_NoComplexEvents_172.insert(ComplexOptPayoutAmount_172.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_172);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_360;
      FIX::ComplexEventEndDate ComplexEventEndDate_360(FIX::UTCTIMESTAMP(9, 59, 51, 8, 52000));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_360);
      ComplexEventDates_NoComplexEventDates_360.insert(ComplexEventEndDate_360.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_360(FIX::UTCTIMESTAMP(4, 20, 19, 14, 32012));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_360);
      ComplexEventDates_NoComplexEventDates_360.insert(ComplexEventStartDate_360.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_360);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_713;
        FIX::ComplexEventEndTime ComplexEventEndTime_713(FIX::UTCTIMEONLY(8, 19, 2));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_713);
        ComplexEventTimes_NoComplexEventTimes_713.insert(ComplexEventEndTime_713.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_713(FIX::UTCTIMEONLY(22, 37, 25));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_713);
        ComplexEventTimes_NoComplexEventTimes_713.insert(ComplexEventStartTime_713.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_713);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_714;
        FIX::ComplexEventEndTime ComplexEventEndTime_714(FIX::UTCTIMEONLY(17, 17, 25));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_714);
        ComplexEventTimes_NoComplexEventTimes_714.insert(ComplexEventEndTime_714.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_714(FIX::UTCTIMEONLY(22, 47, 23));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_714);
        ComplexEventTimes_NoComplexEventTimes_714.insert(ComplexEventStartTime_714.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_714);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_361;
      FIX::ComplexEventEndDate ComplexEventEndDate_361(FIX::UTCTIMESTAMP(12, 23, 2, 16, 42007));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_361);
      ComplexEventDates_NoComplexEventDates_361.insert(ComplexEventEndDate_361.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_361(FIX::UTCTIMESTAMP(12, 43, 34, 6, 22016));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_361);
      ComplexEventDates_NoComplexEventDates_361.insert(ComplexEventStartDate_361.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_361);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_715;
        FIX::ComplexEventEndTime ComplexEventEndTime_715(FIX::UTCTIMEONLY(18, 44, 24));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_715);
        ComplexEventTimes_NoComplexEventTimes_715.insert(ComplexEventEndTime_715.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_715(FIX::UTCTIMEONLY(23, 54, 8));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_715);
        ComplexEventTimes_NoComplexEventTimes_715.insert(ComplexEventStartTime_715.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_715);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_362;
      FIX::ComplexEventEndDate ComplexEventEndDate_362(FIX::UTCTIMESTAMP(15, 26, 51, 7, 52000));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_362);
      ComplexEventDates_NoComplexEventDates_362.insert(ComplexEventEndDate_362.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_362(FIX::UTCTIMESTAMP(7, 42, 50, 26, 82009));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_362);
      ComplexEventDates_NoComplexEventDates_362.insert(ComplexEventStartDate_362.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_362);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_716;
        FIX::ComplexEventEndTime ComplexEventEndTime_716(FIX::UTCTIMEONLY(13, 56, 37));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_716);
        ComplexEventTimes_NoComplexEventTimes_716.insert(ComplexEventEndTime_716.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_716(FIX::UTCTIMEONLY(9, 35, 53));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_716);
        ComplexEventTimes_NoComplexEventTimes_716.insert(ComplexEventStartTime_716.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_716);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradingSessionStatus::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_178;
    FIX::EventDate EventDate_178("LOCALMKTDATE_719586142");
    noEvents_0_0.set(EventDate_178);
    EvntGrp_NoEvents_178.insert(EventDate_178.getString());
    FIX::EventPx EventPx_178;
    EventPx_178.setString("13296045");
    noEvents_0_0.set(EventPx_178);
    EvntGrp_NoEvents_178.insert(EventPx_178.getString());
    FIX::EventText EventText_178("STRING_2074295999");
    noEvents_0_0.set(EventText_178);
    EvntGrp_NoEvents_178.insert(EventText_178.getString());
    FIX::EventTime EventTime_178(FIX::UTCTIMESTAMP(12, 45, 6, 11, 62000));
    noEvents_0_0.set(EventTime_178);
    EvntGrp_NoEvents_178.insert(EventTime_178.getString());
    FIX::EventType EventType_178(7);
    noEvents_0_0.set(EventType_178);
    EvntGrp_NoEvents_178.insert(EventType_178.getString());
    all_values.push_back(EvntGrp_NoEvents_178);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_179;
    FIX::EventDate EventDate_179("LOCALMKTDATE_454033484");
    noEvents_0_1.set(EventDate_179);
    EvntGrp_NoEvents_179.insert(EventDate_179.getString());
    FIX::EventPx EventPx_179;
    EventPx_179.setString("19961277");
    noEvents_0_1.set(EventPx_179);
    EvntGrp_NoEvents_179.insert(EventPx_179.getString());
    FIX::EventText EventText_179("STRING_332267529");
    noEvents_0_1.set(EventText_179);
    EvntGrp_NoEvents_179.insert(EventText_179.getString());
    FIX::EventTime EventTime_179(FIX::UTCTIMESTAMP(4, 51, 53, 6, 32009));
    noEvents_0_1.set(EventTime_179);
    EvntGrp_NoEvents_179.insert(EventTime_179.getString());
    FIX::EventType EventType_179(8);
    noEvents_0_1.set(EventType_179);
    EvntGrp_NoEvents_179.insert(EventType_179.getString());
    all_values.push_back(EvntGrp_NoEvents_179);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_184;
    FIX::InstrumentPartyID InstrumentPartyID_184("STRING_66991844");
    noInstrumentParties_0_0.set(InstrumentPartyID_184);
    InstrumentParties_NoInstrumentParties_184.insert(InstrumentPartyID_184.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_184('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_184);
    InstrumentParties_NoInstrumentParties_184.insert(InstrumentPartyIDSource_184.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_184(785311818);
    noInstrumentParties_0_0.set(InstrumentPartyRole_184);
    InstrumentParties_NoInstrumentParties_184.insert(InstrumentPartyRole_184.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_184);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370;
      FIX::InstrumentPartySubID InstrumentPartySubID_370("STRING_644440876");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_370);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370.insert(InstrumentPartySubID_370.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_370(2127797093);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_370);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370.insert(InstrumentPartySubIDType_370.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_185;
    FIX::InstrumentPartyID InstrumentPartyID_185("STRING_1545119945");
    noInstrumentParties_0_1.set(InstrumentPartyID_185);
    InstrumentParties_NoInstrumentParties_185.insert(InstrumentPartyID_185.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_185('6');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_185);
    InstrumentParties_NoInstrumentParties_185.insert(InstrumentPartyIDSource_185.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_185(699899587);
    noInstrumentParties_0_1.set(InstrumentPartyRole_185);
    InstrumentParties_NoInstrumentParties_185.insert(InstrumentPartyRole_185.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_185);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371;
      FIX::InstrumentPartySubID InstrumentPartySubID_371("STRING_561529902");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_371);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371.insert(InstrumentPartySubID_371.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_371(189142865);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_371);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371.insert(InstrumentPartySubIDType_371.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372;
      FIX::InstrumentPartySubID InstrumentPartySubID_372("STRING_531892923");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_372);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372.insert(InstrumentPartySubID_372.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_372(1997838388);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_372);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372.insert(InstrumentPartySubIDType_372.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_186;
    FIX::InstrumentPartyID InstrumentPartyID_186("STRING_991371731");
    noInstrumentParties_0_2.set(InstrumentPartyID_186);
    InstrumentParties_NoInstrumentParties_186.insert(InstrumentPartyID_186.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_186('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_186);
    InstrumentParties_NoInstrumentParties_186.insert(InstrumentPartyIDSource_186.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_186(199415881);
    noInstrumentParties_0_2.set(InstrumentPartyRole_186);
    InstrumentParties_NoInstrumentParties_186.insert(InstrumentPartyRole_186.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_186);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373;
      FIX::InstrumentPartySubID InstrumentPartySubID_373("STRING_838231596");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_373);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373.insert(InstrumentPartySubID_373.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_373(653449365);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_373);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373.insert(InstrumentPartySubIDType_373.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374;
      FIX::InstrumentPartySubID InstrumentPartySubID_374("STRING_1520554183");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_374);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374.insert(InstrumentPartySubID_374.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_374(1170499125);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_374);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374.insert(InstrumentPartySubIDType_374.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375;
      FIX::InstrumentPartySubID InstrumentPartySubID_375("STRING_1245571017");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_375);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375.insert(InstrumentPartySubID_375.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_375(1836715547);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_375);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375.insert(InstrumentPartySubIDType_375.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_191;
    FIX::SecurityAltID SecurityAltID_191("STRING_1256190710");
    noSecurityAltID_0_0.set(SecurityAltID_191);
    SecAltIDGrp_NoSecurityAltID_191.insert(SecurityAltID_191.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_191("STRING_386847453");
    noSecurityAltID_0_0.set(SecurityAltIDSource_191);
    SecAltIDGrp_NoSecurityAltID_191.insert(SecurityAltIDSource_191.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_191);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_192;
    FIX::SecurityAltID SecurityAltID_192("STRING_999752047");
    noSecurityAltID_0_1.set(SecurityAltID_192);
    SecAltIDGrp_NoSecurityAltID_192.insert(SecurityAltID_192.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_192("STRING_456166245");
    noSecurityAltID_0_1.set(SecurityAltIDSource_192);
    SecAltIDGrp_NoSecurityAltID_192.insert(SecurityAltIDSource_192.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_192);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_193;
    FIX::SecurityAltID SecurityAltID_193("STRING_902398420");
    noSecurityAltID_0_2.set(SecurityAltID_193);
    SecAltIDGrp_NoSecurityAltID_193.insert(SecurityAltID_193.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_193("STRING_1570306128");
    noSecurityAltID_0_2.set(SecurityAltIDSource_193);
    SecAltIDGrp_NoSecurityAltID_193.insert(SecurityAltIDSource_193.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_193);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_186;
  FIX::SecurityXML SecurityXML_187("XMLDATA_523158090");
  msg.set(SecurityXML_187);
  FIX::SecurityXMLLen SecurityXMLLen_93(273883055);
  msg.set(SecurityXMLLen_93);
  FIX::SecurityXMLSchema SecurityXMLSchema_93("STRING_208134298");
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
