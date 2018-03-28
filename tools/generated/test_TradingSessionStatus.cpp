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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradingSessionStatus msg;

  list<multiset<string>> all_values;
  multiset<string> TradingSessionStatus_0;
  FIX::EncodedText EncodedText_96("DATA_1142997819");
  msg.set(EncodedText_96);
  TradingSessionStatus_0.insert(EncodedText_96.getString());
  FIX::EncodedTextLen EncodedTextLen_96(1478232569);
  msg.set(EncodedTextLen_96);
  TradingSessionStatus_0.insert(EncodedTextLen_96.getString());
  FIX::MarketID MarketID_28("EXCHANGE_1179071663");
  msg.set(MarketID_28);
  TradingSessionStatus_0.insert(MarketID_28.getString());
  FIX::MarketSegmentID MarketSegmentID_28("STRING_2057086218");
  msg.set(MarketSegmentID_28);
  TradingSessionStatus_0.insert(MarketSegmentID_28.getString());
  FIX::Text Text_96("STRING_804415750");
  msg.set(Text_96);
  TradingSessionStatus_0.insert(Text_96.getString());
  FIX::TotalVolumeTraded TotalVolumeTraded_2;
  TotalVolumeTraded_2.setString("18589350");
  msg.set(TotalVolumeTraded_2);
  TradingSessionStatus_0.insert(TotalVolumeTraded_2.getString());
  FIX::TradSesCloseTime TradSesCloseTime_2(FIX::UTCTIMESTAMP(6, 49, 56, 5, 1, 2000));
  msg.set(TradSesCloseTime_2);
  TradingSessionStatus_0.insert(TradSesCloseTime_2.getString());
  FIX::TradSesEndTime TradSesEndTime_2(FIX::UTCTIMESTAMP(6, 53, 41, 12, 1, 2009));
  msg.set(TradSesEndTime_2);
  TradingSessionStatus_0.insert(TradSesEndTime_2.getString());
  FIX::TradSesEvent TradSesEvent_0(2);
  msg.set(TradSesEvent_0);
  TradingSessionStatus_0.insert(TradSesEvent_0.getString());
  FIX::TradSesMethod TradSesMethod_3(2);
  msg.set(TradSesMethod_3);
  TradingSessionStatus_0.insert(TradSesMethod_3.getString());
  FIX::TradSesMode TradSesMode_3(2);
  msg.set(TradSesMode_3);
  TradingSessionStatus_0.insert(TradSesMode_3.getString());
  FIX::TradSesOpenTime TradSesOpenTime_2(FIX::UTCTIMESTAMP(4, 54, 58, 20, 10, 2002));
  msg.set(TradSesOpenTime_2);
  TradingSessionStatus_0.insert(TradSesOpenTime_2.getString());
  FIX::TradSesPreCloseTime TradSesPreCloseTime_2(FIX::UTCTIMESTAMP(5, 18, 51, 15, 5, 2000));
  msg.set(TradSesPreCloseTime_2);
  TradingSessionStatus_0.insert(TradSesPreCloseTime_2.getString());
  FIX::TradSesReqID TradSesReqID_3("STRING_788652381");
  msg.set(TradSesReqID_3);
  TradingSessionStatus_0.insert(TradSesReqID_3.getString());
  FIX::TradSesStartTime TradSesStartTime_2(FIX::UTCTIMESTAMP(1, 17, 47, 1, 6, 2000));
  msg.set(TradSesStartTime_2);
  TradingSessionStatus_0.insert(TradSesStartTime_2.getString());
  FIX::TradSesStatus TradSesStatus_2(3);
  msg.set(TradSesStatus_2);
  TradingSessionStatus_0.insert(TradSesStatus_2.getString());
  FIX::TradSesStatusRejReason TradSesStatusRejReason_2(1);
  msg.set(TradSesStatusRejReason_2);
  TradingSessionStatus_0.insert(TradSesStatusRejReason_2.getString());
  FIX::TradingSessionID TradingSessionID_96("STRING_4");
  msg.set(TradingSessionID_96);
  TradingSessionStatus_0.insert(TradingSessionID_96.getString());
  FIX::TradingSessionSubID TradingSessionSubID_96("STRING_2");
  msg.set(TradingSessionSubID_96);
  TradingSessionStatus_0.insert(TradingSessionSubID_96.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_6(false);
  msg.set(UnsolicitedIndicator_6);
  TradingSessionStatus_0.insert(UnsolicitedIndicator_6.getString());
  all_values.push_back(TradingSessionStatus_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_22;
  FIX::ApplID ApplID_22("STRING_1927704726");
  msg.set(ApplID_22);
  ApplicationSequenceControl_22.insert(ApplID_22.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_22(290052875);
  msg.set(ApplLastSeqNum_22);
  ApplicationSequenceControl_22.insert(ApplLastSeqNum_22.getString());
  FIX::ApplResendFlag ApplResendFlag_22(false);
  msg.set(ApplResendFlag_22);
  ApplicationSequenceControl_22.insert(ApplResendFlag_22.getString());
  FIX::ApplSeqNum ApplSeqNum_22(1609141695);
  msg.set(ApplSeqNum_22);
  ApplicationSequenceControl_22.insert(ApplSeqNum_22.getString());
  all_values.push_back(ApplicationSequenceControl_22);

  // Instrument
  multiset<string> Instrument_99;
  FIX::AttachmentPoint AttachmentPoint_99;
  AttachmentPoint_99.setString("77.250000");
  msg.set(AttachmentPoint_99);
  Instrument_99.insert(AttachmentPoint_99.getString());
  FIX::CFICode CFICode_104("STRING_1793007113");
  msg.set(CFICode_104);
  Instrument_99.insert(CFICode_104.getString());
  FIX::CPProgram CPProgram_99(2);
  msg.set(CPProgram_99);
  Instrument_99.insert(CPProgram_99.getString());
  FIX::CPRegType CPRegType_99("STRING_1210768215");
  msg.set(CPRegType_99);
  Instrument_99.insert(CPRegType_99.getString());
  FIX::CapPrice CapPrice_99;
  CapPrice_99.setString("9486021");
  msg.set(CapPrice_99);
  Instrument_99.insert(CapPrice_99.getString());
  FIX::ContractMultiplier ContractMultiplier_99;
  ContractMultiplier_99.setString("6588234");
  msg.set(ContractMultiplier_99);
  Instrument_99.insert(ContractMultiplier_99.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_99(1);
  msg.set(ContractMultiplierUnit_99);
  Instrument_99.insert(ContractMultiplierUnit_99.getString());
  FIX::ContractSettlMonth ContractSettlMonth_99("MONTHYEAR_522783533");
  msg.set(ContractSettlMonth_99);
  Instrument_99.insert(ContractSettlMonth_99.getString());
  FIX::CountryOfIssue CountryOfIssue_99("COUNTRY_1700939563");
  msg.set(CountryOfIssue_99);
  Instrument_99.insert(CountryOfIssue_99.getString());
  FIX::CouponPaymentDate CouponPaymentDate_99("LOCALMKTDATE_651024802");
  msg.set(CouponPaymentDate_99);
  Instrument_99.insert(CouponPaymentDate_99.getString());
  FIX::CouponRate CouponRate_99;
  CouponRate_99.setString("65.440000");
  msg.set(CouponRate_99);
  Instrument_99.insert(CouponRate_99.getString());
  FIX::CreditRating CreditRating_99("STRING_505174587");
  msg.set(CreditRating_99);
  Instrument_99.insert(CreditRating_99.getString());
  FIX::DatedDate DatedDate_99("LOCALMKTDATE_1914685130");
  msg.set(DatedDate_99);
  Instrument_99.insert(DatedDate_99.getString());
  FIX::DetachmentPoint DetachmentPoint_99;
  DetachmentPoint_99.setString("9.610000");
  msg.set(DetachmentPoint_99);
  Instrument_99.insert(DetachmentPoint_99.getString());
  FIX::EncodedIssuer EncodedIssuer_99("DATA_1293826968");
  msg.set(EncodedIssuer_99);
  Instrument_99.insert(EncodedIssuer_99.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_99(1669065449);
  msg.set(EncodedIssuerLen_99);
  Instrument_99.insert(EncodedIssuerLen_99.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_99("DATA_134463938");
  msg.set(EncodedSecurityDesc_99);
  Instrument_99.insert(EncodedSecurityDesc_99.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_99(184660377);
  msg.set(EncodedSecurityDescLen_99);
  Instrument_99.insert(EncodedSecurityDescLen_99.getString());
  FIX::ExerciseStyle ExerciseStyle_99(2);
  msg.set(ExerciseStyle_99);
  Instrument_99.insert(ExerciseStyle_99.getString());
  FIX::Factor Factor_99;
  Factor_99.setString("2794441");
  msg.set(Factor_99);
  Instrument_99.insert(Factor_99.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_99(true);
  msg.set(FlexProductEligibilityIndicator_99);
  Instrument_99.insert(FlexProductEligibilityIndicator_99.getString());
  FIX::FlexibleIndicator FlexibleIndicator_99(true);
  msg.set(FlexibleIndicator_99);
  Instrument_99.insert(FlexibleIndicator_99.getString());
  FIX::FloorPrice FloorPrice_99;
  FloorPrice_99.setString("17109634");
  msg.set(FloorPrice_99);
  Instrument_99.insert(FloorPrice_99.getString());
  FIX::FlowScheduleType FlowScheduleType_99(2);
  msg.set(FlowScheduleType_99);
  Instrument_99.insert(FlowScheduleType_99.getString());
  FIX::InstrRegistry InstrRegistry_99("STRING_799688674");
  msg.set(InstrRegistry_99);
  Instrument_99.insert(InstrRegistry_99.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_99('1');
  msg.set(InstrmtAssignmentMethod_99);
  Instrument_99.insert(InstrmtAssignmentMethod_99.getString());
  FIX::InterestAccrualDate InterestAccrualDate_99("LOCALMKTDATE_1064788063");
  msg.set(InterestAccrualDate_99);
  Instrument_99.insert(InterestAccrualDate_99.getString());
  FIX::IssueDate IssueDate_99("LOCALMKTDATE_579909752");
  msg.set(IssueDate_99);
  Instrument_99.insert(IssueDate_99.getString());
  FIX::Issuer Issuer_99("STRING_1414210179");
  msg.set(Issuer_99);
  Instrument_99.insert(Issuer_99.getString());
  FIX::ListMethod ListMethod_99(0);
  msg.set(ListMethod_99);
  Instrument_99.insert(ListMethod_99.getString());
  FIX::LocaleOfIssue LocaleOfIssue_99("STRING_41567799");
  msg.set(LocaleOfIssue_99);
  Instrument_99.insert(LocaleOfIssue_99.getString());
  FIX::MaturityDate MaturityDate_99("LOCALMKTDATE_1042204257");
  msg.set(MaturityDate_99);
  Instrument_99.insert(MaturityDate_99.getString());
  FIX::MaturityMonthYear MaturityMonthYear_99("MONTHYEAR_1854079613");
  msg.set(MaturityMonthYear_99);
  Instrument_99.insert(MaturityMonthYear_99.getString());
  FIX::MaturityTime MaturityTime_99("TZTIMEONLY_801272980");
  msg.set(MaturityTime_99);
  Instrument_99.insert(MaturityTime_99.getString());
  FIX::MinPriceIncrement MinPriceIncrement_99;
  MinPriceIncrement_99.setString("1054888");
  msg.set(MinPriceIncrement_99);
  Instrument_99.insert(MinPriceIncrement_99.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_99;
  MinPriceIncrementAmount_99.setString("6551981");
  msg.set(MinPriceIncrementAmount_99);
  Instrument_99.insert(MinPriceIncrementAmount_99.getString());
  FIX::NTPositionLimit NTPositionLimit_99(1460096443);
  msg.set(NTPositionLimit_99);
  Instrument_99.insert(NTPositionLimit_99.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_99;
  NotionalPercentageOutstanding_99.setString("90.480000");
  msg.set(NotionalPercentageOutstanding_99);
  Instrument_99.insert(NotionalPercentageOutstanding_99.getString());
  FIX::OptAttribute OptAttribute_99('1');
  msg.set(OptAttribute_99);
  Instrument_99.insert(OptAttribute_99.getString());
  FIX::OptPayoutAmount OptPayoutAmount_99;
  OptPayoutAmount_99.setString("10135523");
  msg.set(OptPayoutAmount_99);
  Instrument_99.insert(OptPayoutAmount_99.getString());
  FIX::OptPayoutType OptPayoutType_99(1);
  msg.set(OptPayoutType_99);
  Instrument_99.insert(OptPayoutType_99.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_99;
  OriginalNotionalPercentageOutstanding_99.setString("45.800000");
  msg.set(OriginalNotionalPercentageOutstanding_99);
  Instrument_99.insert(OriginalNotionalPercentageOutstanding_99.getString());
  FIX::Pool Pool_99("STRING_1518726945");
  msg.set(Pool_99);
  Instrument_99.insert(Pool_99.getString());
  FIX::PositionLimit PositionLimit_99(715495333);
  msg.set(PositionLimit_99);
  Instrument_99.insert(PositionLimit_99.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_99("STRING_INX");
  msg.set(PriceQuoteMethod_99);
  Instrument_99.insert(PriceQuoteMethod_99.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_99("STRING_665070265");
  msg.set(PriceUnitOfMeasure_99);
  Instrument_99.insert(PriceUnitOfMeasure_99.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_99;
  PriceUnitOfMeasureQty_99.setString("2370771");
  msg.set(PriceUnitOfMeasureQty_99);
  Instrument_99.insert(PriceUnitOfMeasureQty_99.getString());
  FIX::Product Product_107(13);
  msg.set(Product_107);
  Instrument_99.insert(Product_107.getString());
  FIX::ProductComplex ProductComplex_99("STRING_849730642");
  msg.set(ProductComplex_99);
  Instrument_99.insert(ProductComplex_99.getString());
  FIX::PutOrCall PutOrCall_99(0);
  msg.set(PutOrCall_99);
  Instrument_99.insert(PutOrCall_99.getString());
  FIX::RedemptionDate RedemptionDate_99("LOCALMKTDATE_313699935");
  msg.set(RedemptionDate_99);
  Instrument_99.insert(RedemptionDate_99.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_99("STRING_21046456");
  msg.set(RepoCollateralSecurityType_99);
  Instrument_99.insert(RepoCollateralSecurityType_99.getString());
  FIX::RepurchaseRate RepurchaseRate_99;
  RepurchaseRate_99.setString("80.050000");
  msg.set(RepurchaseRate_99);
  Instrument_99.insert(RepurchaseRate_99.getString());
  FIX::RepurchaseTerm RepurchaseTerm_99(2024663411);
  msg.set(RepurchaseTerm_99);
  Instrument_99.insert(RepurchaseTerm_99.getString());
  FIX::RestructuringType RestructuringType_99("STRING_MR");
  msg.set(RestructuringType_99);
  Instrument_99.insert(RestructuringType_99.getString());
  FIX::SecurityDesc SecurityDesc_99("STRING_959666679");
  msg.set(SecurityDesc_99);
  Instrument_99.insert(SecurityDesc_99.getString());
  FIX::SecurityExchange SecurityExchange_102("EXCHANGE_1001337068");
  msg.set(SecurityExchange_102);
  Instrument_99.insert(SecurityExchange_102.getString());
  FIX::SecurityGroup SecurityGroup_99("STRING_1658522512");
  msg.set(SecurityGroup_99);
  Instrument_99.insert(SecurityGroup_99.getString());
  FIX::SecurityID SecurityID_99("STRING_1539576431");
  msg.set(SecurityID_99);
  Instrument_99.insert(SecurityID_99.getString());
  FIX::SecurityIDSource SecurityIDSource_99("STRING_2");
  msg.set(SecurityIDSource_99);
  Instrument_99.insert(SecurityIDSource_99.getString());
  FIX::SecurityStatus SecurityStatus_100("STRING_2");
  msg.set(SecurityStatus_100);
  Instrument_99.insert(SecurityStatus_100.getString());
  FIX::SecuritySubType SecuritySubType_103("STRING_1581144231");
  msg.set(SecuritySubType_103);
  Instrument_99.insert(SecuritySubType_103.getString());
  FIX::SecurityType SecurityType_107("STRING_TECP");
  msg.set(SecurityType_107);
  Instrument_99.insert(SecurityType_107.getString());
  FIX::Seniority Seniority_99("STRING_SB");
  msg.set(Seniority_99);
  Instrument_99.insert(Seniority_99.getString());
  FIX::SettlMethod SettlMethod_99('P');
  msg.set(SettlMethod_99);
  Instrument_99.insert(SettlMethod_99.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_99("STRING_1415756681");
  msg.set(SettleOnOpenFlag_99);
  Instrument_99.insert(SettleOnOpenFlag_99.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_99("STRING_2081389129");
  msg.set(StateOrProvinceOfIssue_99);
  Instrument_99.insert(StateOrProvinceOfIssue_99.getString());
  FIX::StrikeCurrency StrikeCurrency_99("EUR");
  msg.set(StrikeCurrency_99);
  Instrument_99.insert(StrikeCurrency_99.getString());
  FIX::StrikeMultiplier StrikeMultiplier_99;
  StrikeMultiplier_99.setString("11118871");
  msg.set(StrikeMultiplier_99);
  Instrument_99.insert(StrikeMultiplier_99.getString());
  FIX::StrikePrice StrikePrice_99;
  StrikePrice_99.setString("5610987");
  msg.set(StrikePrice_99);
  Instrument_99.insert(StrikePrice_99.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_99(3);
  msg.set(StrikePriceBoundaryMethod_99);
  Instrument_99.insert(StrikePriceBoundaryMethod_99.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_99;
  StrikePriceBoundaryPrecision_99.setString("17.440000");
  msg.set(StrikePriceBoundaryPrecision_99);
  Instrument_99.insert(StrikePriceBoundaryPrecision_99.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_99(3);
  msg.set(StrikePriceDeterminationMethod_99);
  Instrument_99.insert(StrikePriceDeterminationMethod_99.getString());
  FIX::StrikeValue StrikeValue_99;
  StrikeValue_99.setString("12293312");
  msg.set(StrikeValue_99);
  Instrument_99.insert(StrikeValue_99.getString());
  FIX::Symbol Symbol_99("STRING_1318213637");
  msg.set(Symbol_99);
  Instrument_99.insert(Symbol_99.getString());
  FIX::SymbolSfx SymbolSfx_99("STRING_CD");
  msg.set(SymbolSfx_99);
  Instrument_99.insert(SymbolSfx_99.getString());
  FIX::TimeUnit TimeUnit_99("STRING_Min");
  msg.set(TimeUnit_99);
  Instrument_99.insert(TimeUnit_99.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_99(2);
  msg.set(UnderlyingPriceDeterminationMethod_99);
  Instrument_99.insert(UnderlyingPriceDeterminationMethod_99.getString());
  FIX::UnitOfMeasure UnitOfMeasure_99("STRING_Bbl");
  msg.set(UnitOfMeasure_99);
  Instrument_99.insert(UnitOfMeasure_99.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_99;
  UnitOfMeasureQty_99.setString("11253359");
  msg.set(UnitOfMeasureQty_99);
  Instrument_99.insert(UnitOfMeasureQty_99.getString());
  FIX::ValuationMethod ValuationMethod_99("STRING_CDSD");
  msg.set(ValuationMethod_99);
  Instrument_99.insert(ValuationMethod_99.getString());
  all_values.push_back(Instrument_99);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradingSessionStatus::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_183;
    FIX::ComplexEventCondition ComplexEventCondition_183(1);
    noComplexEvents_0_0.set(ComplexEventCondition_183);
    ComplexEvents_NoComplexEvents_183.insert(ComplexEventCondition_183.getString());
    FIX::ComplexEventPrice ComplexEventPrice_183;
    ComplexEventPrice_183.setString("15433491");
    noComplexEvents_0_0.set(ComplexEventPrice_183);
    ComplexEvents_NoComplexEvents_183.insert(ComplexEventPrice_183.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_183(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_183);
    ComplexEvents_NoComplexEvents_183.insert(ComplexEventPriceBoundaryMethod_183.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_183;
    ComplexEventPriceBoundaryPrecision_183.setString("70.090000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_183);
    ComplexEvents_NoComplexEvents_183.insert(ComplexEventPriceBoundaryPrecision_183.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_183(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_183);
    ComplexEvents_NoComplexEvents_183.insert(ComplexEventPriceTimeType_183.getString());
    FIX::ComplexEventType ComplexEventType_183(5);
    noComplexEvents_0_0.set(ComplexEventType_183);
    ComplexEvents_NoComplexEvents_183.insert(ComplexEventType_183.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_183;
    ComplexOptPayoutAmount_183.setString("16370734");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_183);
    ComplexEvents_NoComplexEvents_183.insert(ComplexOptPayoutAmount_183.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_183);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_370;
      FIX::ComplexEventEndDate ComplexEventEndDate_370(FIX::UTCTIMESTAMP(16, 24, 8, 7, 10, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_370);
      ComplexEventDates_NoComplexEventDates_370.insert(ComplexEventEndDate_370.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_370(FIX::UTCTIMESTAMP(14, 33, 43, 10, 3, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_370);
      ComplexEventDates_NoComplexEventDates_370.insert(ComplexEventStartDate_370.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_370);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_748;
        FIX::ComplexEventEndTime ComplexEventEndTime_748(FIX::UTCTIMEONLY(21, 6, 48));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_748);
        ComplexEventTimes_NoComplexEventTimes_748.insert(ComplexEventEndTime_748.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_748(FIX::UTCTIMEONLY(8, 45, 23));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_748);
        ComplexEventTimes_NoComplexEventTimes_748.insert(ComplexEventStartTime_748.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_748);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_749;
        FIX::ComplexEventEndTime ComplexEventEndTime_749(FIX::UTCTIMEONLY(9, 23, 12));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_749);
        ComplexEventTimes_NoComplexEventTimes_749.insert(ComplexEventEndTime_749.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_749(FIX::UTCTIMEONLY(3, 33, 40));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_749);
        ComplexEventTimes_NoComplexEventTimes_749.insert(ComplexEventStartTime_749.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_749);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_371;
      FIX::ComplexEventEndDate ComplexEventEndDate_371(FIX::UTCTIMESTAMP(5, 56, 53, 16, 10, 2012));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_371);
      ComplexEventDates_NoComplexEventDates_371.insert(ComplexEventEndDate_371.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_371(FIX::UTCTIMESTAMP(0, 7, 57, 18, 10, 2003));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_371);
      ComplexEventDates_NoComplexEventDates_371.insert(ComplexEventStartDate_371.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_371);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_750;
        FIX::ComplexEventEndTime ComplexEventEndTime_750(FIX::UTCTIMEONLY(4, 12, 37));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_750);
        ComplexEventTimes_NoComplexEventTimes_750.insert(ComplexEventEndTime_750.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_750(FIX::UTCTIMEONLY(8, 22, 3));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_750);
        ComplexEventTimes_NoComplexEventTimes_750.insert(ComplexEventStartTime_750.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_750);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_751;
        FIX::ComplexEventEndTime ComplexEventEndTime_751(FIX::UTCTIMEONLY(7, 26, 59));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_751);
        ComplexEventTimes_NoComplexEventTimes_751.insert(ComplexEventEndTime_751.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_751(FIX::UTCTIMEONLY(10, 24, 33));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_751);
        ComplexEventTimes_NoComplexEventTimes_751.insert(ComplexEventStartTime_751.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_751);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_752;
        FIX::ComplexEventEndTime ComplexEventEndTime_752(FIX::UTCTIMEONLY(17, 21, 4));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_752);
        ComplexEventTimes_NoComplexEventTimes_752.insert(ComplexEventEndTime_752.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_752(FIX::UTCTIMEONLY(19, 38, 56));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_752);
        ComplexEventTimes_NoComplexEventTimes_752.insert(ComplexEventStartTime_752.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_752);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_372;
      FIX::ComplexEventEndDate ComplexEventEndDate_372(FIX::UTCTIMESTAMP(13, 45, 37, 11, 5, 2001));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_372);
      ComplexEventDates_NoComplexEventDates_372.insert(ComplexEventEndDate_372.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_372(FIX::UTCTIMESTAMP(9, 56, 53, 21, 5, 2002));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_372);
      ComplexEventDates_NoComplexEventDates_372.insert(ComplexEventStartDate_372.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_372);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_753;
        FIX::ComplexEventEndTime ComplexEventEndTime_753(FIX::UTCTIMEONLY(3, 23, 18));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_753);
        ComplexEventTimes_NoComplexEventTimes_753.insert(ComplexEventEndTime_753.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_753(FIX::UTCTIMEONLY(13, 34, 33));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_753);
        ComplexEventTimes_NoComplexEventTimes_753.insert(ComplexEventStartTime_753.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_753);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_184;
    FIX::ComplexEventCondition ComplexEventCondition_184(1);
    noComplexEvents_0_1.set(ComplexEventCondition_184);
    ComplexEvents_NoComplexEvents_184.insert(ComplexEventCondition_184.getString());
    FIX::ComplexEventPrice ComplexEventPrice_184;
    ComplexEventPrice_184.setString("17911597");
    noComplexEvents_0_1.set(ComplexEventPrice_184);
    ComplexEvents_NoComplexEvents_184.insert(ComplexEventPrice_184.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_184(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_184);
    ComplexEvents_NoComplexEvents_184.insert(ComplexEventPriceBoundaryMethod_184.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_184;
    ComplexEventPriceBoundaryPrecision_184.setString("70.360000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_184);
    ComplexEvents_NoComplexEvents_184.insert(ComplexEventPriceBoundaryPrecision_184.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_184(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_184);
    ComplexEvents_NoComplexEvents_184.insert(ComplexEventPriceTimeType_184.getString());
    FIX::ComplexEventType ComplexEventType_184(9);
    noComplexEvents_0_1.set(ComplexEventType_184);
    ComplexEvents_NoComplexEvents_184.insert(ComplexEventType_184.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_184;
    ComplexOptPayoutAmount_184.setString("14208524");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_184);
    ComplexEvents_NoComplexEvents_184.insert(ComplexOptPayoutAmount_184.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_184);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_373;
      FIX::ComplexEventEndDate ComplexEventEndDate_373(FIX::UTCTIMESTAMP(0, 26, 54, 19, 8, 2001));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_373);
      ComplexEventDates_NoComplexEventDates_373.insert(ComplexEventEndDate_373.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_373(FIX::UTCTIMESTAMP(20, 25, 48, 17, 7, 2014));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_373);
      ComplexEventDates_NoComplexEventDates_373.insert(ComplexEventStartDate_373.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_373);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_754;
        FIX::ComplexEventEndTime ComplexEventEndTime_754(FIX::UTCTIMEONLY(4, 50, 36));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_754);
        ComplexEventTimes_NoComplexEventTimes_754.insert(ComplexEventEndTime_754.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_754(FIX::UTCTIMEONLY(7, 2, 29));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_754);
        ComplexEventTimes_NoComplexEventTimes_754.insert(ComplexEventStartTime_754.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_754);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_755;
        FIX::ComplexEventEndTime ComplexEventEndTime_755(FIX::UTCTIMEONLY(18, 15, 28));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_755);
        ComplexEventTimes_NoComplexEventTimes_755.insert(ComplexEventEndTime_755.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_755(FIX::UTCTIMEONLY(9, 55, 12));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_755);
        ComplexEventTimes_NoComplexEventTimes_755.insert(ComplexEventStartTime_755.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_755);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_374;
      FIX::ComplexEventEndDate ComplexEventEndDate_374(FIX::UTCTIMESTAMP(11, 38, 11, 6, 2, 2017));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_374);
      ComplexEventDates_NoComplexEventDates_374.insert(ComplexEventEndDate_374.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_374(FIX::UTCTIMESTAMP(21, 6, 5, 23, 5, 2008));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_374);
      ComplexEventDates_NoComplexEventDates_374.insert(ComplexEventStartDate_374.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_374);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_756;
        FIX::ComplexEventEndTime ComplexEventEndTime_756(FIX::UTCTIMEONLY(10, 31, 50));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_756);
        ComplexEventTimes_NoComplexEventTimes_756.insert(ComplexEventEndTime_756.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_756(FIX::UTCTIMEONLY(15, 52, 23));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_756);
        ComplexEventTimes_NoComplexEventTimes_756.insert(ComplexEventStartTime_756.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_756);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_757;
        FIX::ComplexEventEndTime ComplexEventEndTime_757(FIX::UTCTIMEONLY(14, 30, 47));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_757);
        ComplexEventTimes_NoComplexEventTimes_757.insert(ComplexEventEndTime_757.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_757(FIX::UTCTIMEONLY(15, 42, 41));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_757);
        ComplexEventTimes_NoComplexEventTimes_757.insert(ComplexEventStartTime_757.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_757);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_758;
        FIX::ComplexEventEndTime ComplexEventEndTime_758(FIX::UTCTIMEONLY(17, 12, 0));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_758);
        ComplexEventTimes_NoComplexEventTimes_758.insert(ComplexEventEndTime_758.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_758(FIX::UTCTIMEONLY(13, 41, 36));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_758);
        ComplexEventTimes_NoComplexEventTimes_758.insert(ComplexEventStartTime_758.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_758);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::TradingSessionStatus::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_185;
    FIX::ComplexEventCondition ComplexEventCondition_185(2);
    noComplexEvents_0_2.set(ComplexEventCondition_185);
    ComplexEvents_NoComplexEvents_185.insert(ComplexEventCondition_185.getString());
    FIX::ComplexEventPrice ComplexEventPrice_185;
    ComplexEventPrice_185.setString("13202347");
    noComplexEvents_0_2.set(ComplexEventPrice_185);
    ComplexEvents_NoComplexEvents_185.insert(ComplexEventPrice_185.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_185(3);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_185);
    ComplexEvents_NoComplexEvents_185.insert(ComplexEventPriceBoundaryMethod_185.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_185;
    ComplexEventPriceBoundaryPrecision_185.setString("73.460000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_185);
    ComplexEvents_NoComplexEvents_185.insert(ComplexEventPriceBoundaryPrecision_185.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_185(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_185);
    ComplexEvents_NoComplexEvents_185.insert(ComplexEventPriceTimeType_185.getString());
    FIX::ComplexEventType ComplexEventType_185(1);
    noComplexEvents_0_2.set(ComplexEventType_185);
    ComplexEvents_NoComplexEvents_185.insert(ComplexEventType_185.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_185;
    ComplexOptPayoutAmount_185.setString("18068303");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_185);
    ComplexEvents_NoComplexEvents_185.insert(ComplexOptPayoutAmount_185.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_185);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_375;
      FIX::ComplexEventEndDate ComplexEventEndDate_375(FIX::UTCTIMESTAMP(23, 40, 20, 14, 2, 2007));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_375);
      ComplexEventDates_NoComplexEventDates_375.insert(ComplexEventEndDate_375.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_375(FIX::UTCTIMESTAMP(7, 5, 12, 25, 10, 2007));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_375);
      ComplexEventDates_NoComplexEventDates_375.insert(ComplexEventStartDate_375.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_375);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_759;
        FIX::ComplexEventEndTime ComplexEventEndTime_759(FIX::UTCTIMEONLY(4, 46, 34));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_759);
        ComplexEventTimes_NoComplexEventTimes_759.insert(ComplexEventEndTime_759.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_759(FIX::UTCTIMEONLY(4, 8, 8));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_759);
        ComplexEventTimes_NoComplexEventTimes_759.insert(ComplexEventStartTime_759.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_759);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_376;
      FIX::ComplexEventEndDate ComplexEventEndDate_376(FIX::UTCTIMESTAMP(16, 42, 41, 20, 7, 2002));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_376);
      ComplexEventDates_NoComplexEventDates_376.insert(ComplexEventEndDate_376.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_376(FIX::UTCTIMESTAMP(8, 31, 39, 20, 6, 2004));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_376);
      ComplexEventDates_NoComplexEventDates_376.insert(ComplexEventStartDate_376.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_376);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_760;
        FIX::ComplexEventEndTime ComplexEventEndTime_760(FIX::UTCTIMEONLY(0, 37, 7));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_760);
        ComplexEventTimes_NoComplexEventTimes_760.insert(ComplexEventEndTime_760.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_760(FIX::UTCTIMEONLY(2, 54, 11));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_760);
        ComplexEventTimes_NoComplexEventTimes_760.insert(ComplexEventStartTime_760.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_760);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_761;
        FIX::ComplexEventEndTime ComplexEventEndTime_761(FIX::UTCTIMEONLY(10, 50, 14));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_761);
        ComplexEventTimes_NoComplexEventTimes_761.insert(ComplexEventEndTime_761.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_761(FIX::UTCTIMEONLY(18, 14, 55));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_761);
        ComplexEventTimes_NoComplexEventTimes_761.insert(ComplexEventStartTime_761.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_761);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
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
    multiset<string> EvntGrp_NoEvents_195;
    FIX::EventDate EventDate_195("LOCALMKTDATE_179918386");
    noEvents_0_0.set(EventDate_195);
    EvntGrp_NoEvents_195.insert(EventDate_195.getString());
    FIX::EventPx EventPx_195;
    EventPx_195.setString("10347761");
    noEvents_0_0.set(EventPx_195);
    EvntGrp_NoEvents_195.insert(EventPx_195.getString());
    FIX::EventText EventText_195("STRING_498509938");
    noEvents_0_0.set(EventText_195);
    EvntGrp_NoEvents_195.insert(EventText_195.getString());
    FIX::EventTime EventTime_195(FIX::UTCTIMESTAMP(12, 18, 2, 16, 7, 2011));
    noEvents_0_0.set(EventTime_195);
    EvntGrp_NoEvents_195.insert(EventTime_195.getString());
    FIX::EventType EventType_195(2);
    noEvents_0_0.set(EventType_195);
    EvntGrp_NoEvents_195.insert(EventType_195.getString());
    all_values.push_back(EvntGrp_NoEvents_195);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_196;
    FIX::EventDate EventDate_196("LOCALMKTDATE_1696954991");
    noEvents_0_1.set(EventDate_196);
    EvntGrp_NoEvents_196.insert(EventDate_196.getString());
    FIX::EventPx EventPx_196;
    EventPx_196.setString("4099323");
    noEvents_0_1.set(EventPx_196);
    EvntGrp_NoEvents_196.insert(EventPx_196.getString());
    FIX::EventText EventText_196("STRING_984228292");
    noEvents_0_1.set(EventText_196);
    EvntGrp_NoEvents_196.insert(EventText_196.getString());
    FIX::EventTime EventTime_196(FIX::UTCTIMESTAMP(2, 29, 57, 15, 8, 2003));
    noEvents_0_1.set(EventTime_196);
    EvntGrp_NoEvents_196.insert(EventTime_196.getString());
    FIX::EventType EventType_196(7);
    noEvents_0_1.set(EventType_196);
    EvntGrp_NoEvents_196.insert(EventType_196.getString());
    all_values.push_back(EvntGrp_NoEvents_196);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_195;
    FIX::InstrumentPartyID InstrumentPartyID_195("STRING_890995505");
    noInstrumentParties_0_0.set(InstrumentPartyID_195);
    InstrumentParties_NoInstrumentParties_195.insert(InstrumentPartyID_195.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_195('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_195);
    InstrumentParties_NoInstrumentParties_195.insert(InstrumentPartyIDSource_195.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_195(385034010);
    noInstrumentParties_0_0.set(InstrumentPartyRole_195);
    InstrumentParties_NoInstrumentParties_195.insert(InstrumentPartyRole_195.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_195);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_405;
      FIX::InstrumentPartySubID InstrumentPartySubID_405("STRING_1637247918");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_405);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_405.insert(InstrumentPartySubID_405.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_405(1667093804);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_405);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_405.insert(InstrumentPartySubIDType_405.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_405);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_406;
      FIX::InstrumentPartySubID InstrumentPartySubID_406("STRING_665138267");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_406);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_406.insert(InstrumentPartySubID_406.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_406(1267361975);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_406);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_406.insert(InstrumentPartySubIDType_406.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_406);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_196;
    FIX::InstrumentPartyID InstrumentPartyID_196("STRING_1847012191");
    noInstrumentParties_0_1.set(InstrumentPartyID_196);
    InstrumentParties_NoInstrumentParties_196.insert(InstrumentPartyID_196.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_196('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_196);
    InstrumentParties_NoInstrumentParties_196.insert(InstrumentPartyIDSource_196.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_196(1765871913);
    noInstrumentParties_0_1.set(InstrumentPartyRole_196);
    InstrumentParties_NoInstrumentParties_196.insert(InstrumentPartyRole_196.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_196);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_407;
      FIX::InstrumentPartySubID InstrumentPartySubID_407("STRING_265126324");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_407);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_407.insert(InstrumentPartySubID_407.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_407(644640764);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_407);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_407.insert(InstrumentPartySubIDType_407.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_407);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_408;
      FIX::InstrumentPartySubID InstrumentPartySubID_408("STRING_75011240");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_408);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_408.insert(InstrumentPartySubID_408.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_408(769987649);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_408);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_408.insert(InstrumentPartySubIDType_408.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_408);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_409;
      FIX::InstrumentPartySubID InstrumentPartySubID_409("STRING_1404362606");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_409);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_409.insert(InstrumentPartySubID_409.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_409(1384213441);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_409);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_409.insert(InstrumentPartySubIDType_409.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_409);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_197;
    FIX::InstrumentPartyID InstrumentPartyID_197("STRING_1597645790");
    noInstrumentParties_0_2.set(InstrumentPartyID_197);
    InstrumentParties_NoInstrumentParties_197.insert(InstrumentPartyID_197.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_197('9');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_197);
    InstrumentParties_NoInstrumentParties_197.insert(InstrumentPartyIDSource_197.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_197(1794145779);
    noInstrumentParties_0_2.set(InstrumentPartyRole_197);
    InstrumentParties_NoInstrumentParties_197.insert(InstrumentPartyRole_197.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_197);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_410;
      FIX::InstrumentPartySubID InstrumentPartySubID_410("STRING_1565560347");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_410);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_410.insert(InstrumentPartySubID_410.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_410(1513700085);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_410);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_410.insert(InstrumentPartySubIDType_410.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_410);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_411;
      FIX::InstrumentPartySubID InstrumentPartySubID_411("STRING_1719068884");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_411);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_411.insert(InstrumentPartySubID_411.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_411(1608513564);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_411);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_411.insert(InstrumentPartySubIDType_411.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_411);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_217;
    FIX::SecurityAltID SecurityAltID_217("STRING_1079648199");
    noSecurityAltID_0_0.set(SecurityAltID_217);
    SecAltIDGrp_NoSecurityAltID_217.insert(SecurityAltID_217.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_217("STRING_586643107");
    noSecurityAltID_0_0.set(SecurityAltIDSource_217);
    SecAltIDGrp_NoSecurityAltID_217.insert(SecurityAltIDSource_217.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_217);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_218;
    FIX::SecurityAltID SecurityAltID_218("STRING_1935822547");
    noSecurityAltID_0_1.set(SecurityAltID_218);
    SecAltIDGrp_NoSecurityAltID_218.insert(SecurityAltID_218.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_218("STRING_2055213543");
    noSecurityAltID_0_1.set(SecurityAltIDSource_218);
    SecAltIDGrp_NoSecurityAltID_218.insert(SecurityAltIDSource_218.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_218);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_219;
    FIX::SecurityAltID SecurityAltID_219("STRING_1477638613");
    noSecurityAltID_0_2.set(SecurityAltID_219);
    SecAltIDGrp_NoSecurityAltID_219.insert(SecurityAltID_219.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_219("STRING_1001011295");
    noSecurityAltID_0_2.set(SecurityAltIDSource_219);
    SecAltIDGrp_NoSecurityAltID_219.insert(SecurityAltIDSource_219.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_219);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_198;
  FIX::SecurityXML SecurityXML_199("XMLDATA_292763905");
  msg.set(SecurityXML_199);
  FIX::SecurityXMLLen SecurityXMLLen_99(1702386545);
  msg.set(SecurityXMLLen_99);
  FIX::SecurityXMLSchema SecurityXMLSchema_99("STRING_490775566");
  msg.set(SecurityXMLSchema_99);
  SecurityXML_198.insert(SecurityXMLSchema_99.getString());
  all_values.push_back(SecurityXML_198);


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
