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
  multiset<string> all_compo_names;
  multiset<string> TradingSessionStatus_0;
  FIX::EncodedText EncodedText_112("DATA_1859366076");
  msg.set(EncodedText_112);
  TradingSessionStatus_0.insert(EncodedText_112.getString());
  FIX::EncodedTextLen EncodedTextLen_112(2076891235);
  msg.set(EncodedTextLen_112);
  TradingSessionStatus_0.insert(EncodedTextLen_112.getString());
  FIX::MarketID MarketID_36("EXCHANGE_1928424288");
  msg.set(MarketID_36);
  TradingSessionStatus_0.insert(MarketID_36.getString());
  FIX::MarketSegmentID MarketSegmentID_36("STRING_1305725349");
  msg.set(MarketSegmentID_36);
  TradingSessionStatus_0.insert(MarketSegmentID_36.getString());
  FIX::Text Text_112("STRING_2019710915");
  msg.set(Text_112);
  TradingSessionStatus_0.insert(Text_112.getString());
  FIX::TotalVolumeTraded TotalVolumeTraded_6;
  TotalVolumeTraded_6.setString("5364044");
  msg.set(TotalVolumeTraded_6);
  TradingSessionStatus_0.insert(TotalVolumeTraded_6.getString());
  FIX::TradSesCloseTime TradSesCloseTime_6(FIX::UTCTIMESTAMP(18, 14, 28, 24, 5, 2012));
  msg.set(TradSesCloseTime_6);
  TradingSessionStatus_0.insert(TradSesCloseTime_6.getString());
  FIX::TradSesEndTime TradSesEndTime_6(FIX::UTCTIMESTAMP(5, 7, 39, 17, 2, 2005));
  msg.set(TradSesEndTime_6);
  TradingSessionStatus_0.insert(TradSesEndTime_6.getString());
  FIX::TradSesEvent TradSesEvent_0(3);
  msg.set(TradSesEvent_0);
  TradingSessionStatus_0.insert(TradSesEvent_0.getString());
  FIX::TradSesMethod TradSesMethod_7(3);
  msg.set(TradSesMethod_7);
  TradingSessionStatus_0.insert(TradSesMethod_7.getString());
  FIX::TradSesMode TradSesMode_7(2);
  msg.set(TradSesMode_7);
  TradingSessionStatus_0.insert(TradSesMode_7.getString());
  FIX::TradSesOpenTime TradSesOpenTime_6(FIX::UTCTIMESTAMP(19, 10, 35, 7, 12, 2014));
  msg.set(TradSesOpenTime_6);
  TradingSessionStatus_0.insert(TradSesOpenTime_6.getString());
  FIX::TradSesPreCloseTime TradSesPreCloseTime_6(FIX::UTCTIMESTAMP(3, 25, 28, 16, 5, 2010));
  msg.set(TradSesPreCloseTime_6);
  TradingSessionStatus_0.insert(TradSesPreCloseTime_6.getString());
  FIX::TradSesReqID TradSesReqID_3("STRING_1523381759");
  msg.set(TradSesReqID_3);
  TradingSessionStatus_0.insert(TradSesReqID_3.getString());
  FIX::TradSesStartTime TradSesStartTime_6(FIX::UTCTIMESTAMP(12, 28, 50, 25, 9, 2000));
  msg.set(TradSesStartTime_6);
  TradingSessionStatus_0.insert(TradSesStartTime_6.getString());
  FIX::TradSesStatus TradSesStatus_6(3);
  msg.set(TradSesStatus_6);
  TradingSessionStatus_0.insert(TradSesStatus_6.getString());
  FIX::TradSesStatusRejReason TradSesStatusRejReason_6(99);
  msg.set(TradSesStatusRejReason_6);
  TradingSessionStatus_0.insert(TradSesStatusRejReason_6.getString());
  FIX::TradingSessionID TradingSessionID_130("STRING_2");
  msg.set(TradingSessionID_130);
  TradingSessionStatus_0.insert(TradingSessionID_130.getString());
  FIX::TradingSessionSubID TradingSessionSubID_130("STRING_7");
  msg.set(TradingSessionSubID_130);
  TradingSessionStatus_0.insert(TradingSessionSubID_130.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_10(true);
  msg.set(UnsolicitedIndicator_10);
  TradingSessionStatus_0.insert(UnsolicitedIndicator_10.getString());
  all_values.push_back(TradingSessionStatus_0);

  all_compo_names.insert("TradingSessionStatus");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_22;
  FIX::ApplID ApplID_22("STRING_760497269");
  msg.set(ApplID_22);
  ApplicationSequenceControl_22.insert(ApplID_22.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_22(2112365007);
  msg.set(ApplLastSeqNum_22);
  ApplicationSequenceControl_22.insert(ApplLastSeqNum_22.getString());
  FIX::ApplResendFlag ApplResendFlag_22(false);
  msg.set(ApplResendFlag_22);
  ApplicationSequenceControl_22.insert(ApplResendFlag_22.getString());
  FIX::ApplSeqNum ApplSeqNum_22(1548985854);
  msg.set(ApplSeqNum_22);
  ApplicationSequenceControl_22.insert(ApplSeqNum_22.getString());
  all_values.push_back(ApplicationSequenceControl_22);
  all_compo_names.insert("ApplicationSequenceControl");

  // Instrument
  multiset<string> Instrument_104;
  FIX::AttachmentPoint AttachmentPoint_104;
  AttachmentPoint_104.setString("18.590000");
  msg.set(AttachmentPoint_104);
  Instrument_104.insert(AttachmentPoint_104.getString());
  FIX::CFICode CFICode_109("STRING_1238178960");
  msg.set(CFICode_109);
  Instrument_104.insert(CFICode_109.getString());
  FIX::CPProgram CPProgram_104(1);
  msg.set(CPProgram_104);
  Instrument_104.insert(CPProgram_104.getString());
  FIX::CPRegType CPRegType_104("STRING_713229206");
  msg.set(CPRegType_104);
  Instrument_104.insert(CPRegType_104.getString());
  FIX::CapPrice CapPrice_104;
  CapPrice_104.setString("32311");
  msg.set(CapPrice_104);
  Instrument_104.insert(CapPrice_104.getString());
  FIX::ContractMultiplier ContractMultiplier_104;
  ContractMultiplier_104.setString("5416920");
  msg.set(ContractMultiplier_104);
  Instrument_104.insert(ContractMultiplier_104.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_104(0);
  msg.set(ContractMultiplierUnit_104);
  Instrument_104.insert(ContractMultiplierUnit_104.getString());
  FIX::ContractSettlMonth ContractSettlMonth_104("MONTHYEAR_151456108");
  msg.set(ContractSettlMonth_104);
  Instrument_104.insert(ContractSettlMonth_104.getString());
  FIX::CountryOfIssue CountryOfIssue_104("COUNTRY_1481151747");
  msg.set(CountryOfIssue_104);
  Instrument_104.insert(CountryOfIssue_104.getString());
  FIX::CouponPaymentDate CouponPaymentDate_104("LOCALMKTDATE_277273934");
  msg.set(CouponPaymentDate_104);
  Instrument_104.insert(CouponPaymentDate_104.getString());
  FIX::CouponRate CouponRate_104;
  CouponRate_104.setString("16.880000");
  msg.set(CouponRate_104);
  Instrument_104.insert(CouponRate_104.getString());
  FIX::CreditRating CreditRating_104("STRING_1578853172");
  msg.set(CreditRating_104);
  Instrument_104.insert(CreditRating_104.getString());
  FIX::DatedDate DatedDate_104("LOCALMKTDATE_2043711007");
  msg.set(DatedDate_104);
  Instrument_104.insert(DatedDate_104.getString());
  FIX::DetachmentPoint DetachmentPoint_104;
  DetachmentPoint_104.setString("16.980000");
  msg.set(DetachmentPoint_104);
  Instrument_104.insert(DetachmentPoint_104.getString());
  FIX::EncodedIssuer EncodedIssuer_104("DATA_954751283");
  msg.set(EncodedIssuer_104);
  Instrument_104.insert(EncodedIssuer_104.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_104(2038566345);
  msg.set(EncodedIssuerLen_104);
  Instrument_104.insert(EncodedIssuerLen_104.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_104("DATA_319850295");
  msg.set(EncodedSecurityDesc_104);
  Instrument_104.insert(EncodedSecurityDesc_104.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_104(429359803);
  msg.set(EncodedSecurityDescLen_104);
  Instrument_104.insert(EncodedSecurityDescLen_104.getString());
  FIX::ExerciseStyle ExerciseStyle_104(1);
  msg.set(ExerciseStyle_104);
  Instrument_104.insert(ExerciseStyle_104.getString());
  FIX::Factor Factor_104;
  Factor_104.setString("2382846");
  msg.set(Factor_104);
  Instrument_104.insert(Factor_104.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_104(false);
  msg.set(FlexProductEligibilityIndicator_104);
  Instrument_104.insert(FlexProductEligibilityIndicator_104.getString());
  FIX::FlexibleIndicator FlexibleIndicator_104(true);
  msg.set(FlexibleIndicator_104);
  Instrument_104.insert(FlexibleIndicator_104.getString());
  FIX::FloorPrice FloorPrice_104;
  FloorPrice_104.setString("5758106");
  msg.set(FloorPrice_104);
  Instrument_104.insert(FloorPrice_104.getString());
  FIX::FlowScheduleType FlowScheduleType_104(2);
  msg.set(FlowScheduleType_104);
  Instrument_104.insert(FlowScheduleType_104.getString());
  FIX::InstrRegistry InstrRegistry_104("STRING_2102499747");
  msg.set(InstrRegistry_104);
  Instrument_104.insert(InstrRegistry_104.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_104('9');
  msg.set(InstrmtAssignmentMethod_104);
  Instrument_104.insert(InstrmtAssignmentMethod_104.getString());
  FIX::InterestAccrualDate InterestAccrualDate_104("LOCALMKTDATE_1541885754");
  msg.set(InterestAccrualDate_104);
  Instrument_104.insert(InterestAccrualDate_104.getString());
  FIX::IssueDate IssueDate_104("LOCALMKTDATE_715513368");
  msg.set(IssueDate_104);
  Instrument_104.insert(IssueDate_104.getString());
  FIX::Issuer Issuer_104("STRING_908206273");
  msg.set(Issuer_104);
  Instrument_104.insert(Issuer_104.getString());
  FIX::ListMethod ListMethod_104(1);
  msg.set(ListMethod_104);
  Instrument_104.insert(ListMethod_104.getString());
  FIX::LocaleOfIssue LocaleOfIssue_104("STRING_117015575");
  msg.set(LocaleOfIssue_104);
  Instrument_104.insert(LocaleOfIssue_104.getString());
  FIX::MaturityDate MaturityDate_104("LOCALMKTDATE_44724484");
  msg.set(MaturityDate_104);
  Instrument_104.insert(MaturityDate_104.getString());
  FIX::MaturityMonthYear MaturityMonthYear_104("MONTHYEAR_1536894496");
  msg.set(MaturityMonthYear_104);
  Instrument_104.insert(MaturityMonthYear_104.getString());
  FIX::MaturityTime MaturityTime_104("TZTIMEONLY_1578613952");
  msg.set(MaturityTime_104);
  Instrument_104.insert(MaturityTime_104.getString());
  FIX::MinPriceIncrement MinPriceIncrement_104;
  MinPriceIncrement_104.setString("7579536");
  msg.set(MinPriceIncrement_104);
  Instrument_104.insert(MinPriceIncrement_104.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_104;
  MinPriceIncrementAmount_104.setString("15401256");
  msg.set(MinPriceIncrementAmount_104);
  Instrument_104.insert(MinPriceIncrementAmount_104.getString());
  FIX::NTPositionLimit NTPositionLimit_104(2120305976);
  msg.set(NTPositionLimit_104);
  Instrument_104.insert(NTPositionLimit_104.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_104;
  NotionalPercentageOutstanding_104.setString("14.680000");
  msg.set(NotionalPercentageOutstanding_104);
  Instrument_104.insert(NotionalPercentageOutstanding_104.getString());
  FIX::OptAttribute OptAttribute_104('1');
  msg.set(OptAttribute_104);
  Instrument_104.insert(OptAttribute_104.getString());
  FIX::OptPayoutAmount OptPayoutAmount_104;
  OptPayoutAmount_104.setString("14539740");
  msg.set(OptPayoutAmount_104);
  Instrument_104.insert(OptPayoutAmount_104.getString());
  FIX::OptPayoutType OptPayoutType_104(1);
  msg.set(OptPayoutType_104);
  Instrument_104.insert(OptPayoutType_104.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_104;
  OriginalNotionalPercentageOutstanding_104.setString("34.600000");
  msg.set(OriginalNotionalPercentageOutstanding_104);
  Instrument_104.insert(OriginalNotionalPercentageOutstanding_104.getString());
  FIX::Pool Pool_104("STRING_885343599");
  msg.set(Pool_104);
  Instrument_104.insert(Pool_104.getString());
  FIX::PositionLimit PositionLimit_104(1462002761);
  msg.set(PositionLimit_104);
  Instrument_104.insert(PositionLimit_104.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_104("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_104);
  Instrument_104.insert(PriceQuoteMethod_104.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_104("STRING_1840094883");
  msg.set(PriceUnitOfMeasure_104);
  Instrument_104.insert(PriceUnitOfMeasure_104.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_104;
  PriceUnitOfMeasureQty_104.setString("13530854");
  msg.set(PriceUnitOfMeasureQty_104);
  Instrument_104.insert(PriceUnitOfMeasureQty_104.getString());
  FIX::Product Product_112(3);
  msg.set(Product_112);
  Instrument_104.insert(Product_112.getString());
  FIX::ProductComplex ProductComplex_104("STRING_121971038");
  msg.set(ProductComplex_104);
  Instrument_104.insert(ProductComplex_104.getString());
  FIX::PutOrCall PutOrCall_104(1);
  msg.set(PutOrCall_104);
  Instrument_104.insert(PutOrCall_104.getString());
  FIX::RedemptionDate RedemptionDate_104("LOCALMKTDATE_729046430");
  msg.set(RedemptionDate_104);
  Instrument_104.insert(RedemptionDate_104.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_104("STRING_945986262");
  msg.set(RepoCollateralSecurityType_104);
  Instrument_104.insert(RepoCollateralSecurityType_104.getString());
  FIX::RepurchaseRate RepurchaseRate_104;
  RepurchaseRate_104.setString("19.470000");
  msg.set(RepurchaseRate_104);
  Instrument_104.insert(RepurchaseRate_104.getString());
  FIX::RepurchaseTerm RepurchaseTerm_104(1304857036);
  msg.set(RepurchaseTerm_104);
  Instrument_104.insert(RepurchaseTerm_104.getString());
  FIX::RestructuringType RestructuringType_104("STRING_FR");
  msg.set(RestructuringType_104);
  Instrument_104.insert(RestructuringType_104.getString());
  FIX::SecurityDesc SecurityDesc_104("STRING_282638046");
  msg.set(SecurityDesc_104);
  Instrument_104.insert(SecurityDesc_104.getString());
  FIX::SecurityExchange SecurityExchange_111("EXCHANGE_100698302");
  msg.set(SecurityExchange_111);
  Instrument_104.insert(SecurityExchange_111.getString());
  FIX::SecurityGroup SecurityGroup_104("STRING_816052551");
  msg.set(SecurityGroup_104);
  Instrument_104.insert(SecurityGroup_104.getString());
  FIX::SecurityID SecurityID_104("STRING_998151415");
  msg.set(SecurityID_104);
  Instrument_104.insert(SecurityID_104.getString());
  FIX::SecurityIDSource SecurityIDSource_104("STRING_K");
  msg.set(SecurityIDSource_104);
  Instrument_104.insert(SecurityIDSource_104.getString());
  FIX::SecurityStatus SecurityStatus_105("STRING_1");
  msg.set(SecurityStatus_105);
  Instrument_104.insert(SecurityStatus_105.getString());
  FIX::SecuritySubType SecuritySubType_108("STRING_1115166990");
  msg.set(SecuritySubType_108);
  Instrument_104.insert(SecuritySubType_108.getString());
  FIX::SecurityType SecurityType_112("STRING_REV");
  msg.set(SecurityType_112);
  Instrument_104.insert(SecurityType_112.getString());
  FIX::Seniority Seniority_104("STRING_SB");
  msg.set(Seniority_104);
  Instrument_104.insert(Seniority_104.getString());
  FIX::SettlMethod SettlMethod_104('C');
  msg.set(SettlMethod_104);
  Instrument_104.insert(SettlMethod_104.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_104("STRING_1811582751");
  msg.set(SettleOnOpenFlag_104);
  Instrument_104.insert(SettleOnOpenFlag_104.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_104("STRING_2044304598");
  msg.set(StateOrProvinceOfIssue_104);
  Instrument_104.insert(StateOrProvinceOfIssue_104.getString());
  FIX::StrikeCurrency StrikeCurrency_104("CAN");
  msg.set(StrikeCurrency_104);
  Instrument_104.insert(StrikeCurrency_104.getString());
  FIX::StrikeMultiplier StrikeMultiplier_104;
  StrikeMultiplier_104.setString("15884027");
  msg.set(StrikeMultiplier_104);
  Instrument_104.insert(StrikeMultiplier_104.getString());
  FIX::StrikePrice StrikePrice_104;
  StrikePrice_104.setString("19730936");
  msg.set(StrikePrice_104);
  Instrument_104.insert(StrikePrice_104.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_104(1);
  msg.set(StrikePriceBoundaryMethod_104);
  Instrument_104.insert(StrikePriceBoundaryMethod_104.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_104;
  StrikePriceBoundaryPrecision_104.setString("25.350000");
  msg.set(StrikePriceBoundaryPrecision_104);
  Instrument_104.insert(StrikePriceBoundaryPrecision_104.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_104(2);
  msg.set(StrikePriceDeterminationMethod_104);
  Instrument_104.insert(StrikePriceDeterminationMethod_104.getString());
  FIX::StrikeValue StrikeValue_104;
  StrikeValue_104.setString("18328950");
  msg.set(StrikeValue_104);
  Instrument_104.insert(StrikeValue_104.getString());
  FIX::Symbol Symbol_104("STRING_1384034046");
  msg.set(Symbol_104);
  Instrument_104.insert(Symbol_104.getString());
  FIX::SymbolSfx SymbolSfx_104("STRING_CD");
  msg.set(SymbolSfx_104);
  Instrument_104.insert(SymbolSfx_104.getString());
  FIX::TimeUnit TimeUnit_104("STRING_Mo");
  msg.set(TimeUnit_104);
  Instrument_104.insert(TimeUnit_104.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_104(1);
  msg.set(UnderlyingPriceDeterminationMethod_104);
  Instrument_104.insert(UnderlyingPriceDeterminationMethod_104.getString());
  FIX::UnitOfMeasure UnitOfMeasure_104("STRING_MMBtu");
  msg.set(UnitOfMeasure_104);
  Instrument_104.insert(UnitOfMeasure_104.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_104;
  UnitOfMeasureQty_104.setString("8998045");
  msg.set(UnitOfMeasureQty_104);
  Instrument_104.insert(UnitOfMeasureQty_104.getString());
  FIX::ValuationMethod ValuationMethod_104("STRING_CDSD");
  msg.set(ValuationMethod_104);
  Instrument_104.insert(ValuationMethod_104.getString());
  all_values.push_back(Instrument_104);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradingSessionStatus::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_206;
    FIX::ComplexEventCondition ComplexEventCondition_206(1);
    noComplexEvents_0_0.set(ComplexEventCondition_206);
    ComplexEvents_NoComplexEvents_206.insert(ComplexEventCondition_206.getString());
    FIX::ComplexEventPrice ComplexEventPrice_206;
    ComplexEventPrice_206.setString("17612156");
    noComplexEvents_0_0.set(ComplexEventPrice_206);
    ComplexEvents_NoComplexEvents_206.insert(ComplexEventPrice_206.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_206(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_206);
    ComplexEvents_NoComplexEvents_206.insert(ComplexEventPriceBoundaryMethod_206.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_206;
    ComplexEventPriceBoundaryPrecision_206.setString("45.300000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_206);
    ComplexEvents_NoComplexEvents_206.insert(ComplexEventPriceBoundaryPrecision_206.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_206(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_206);
    ComplexEvents_NoComplexEvents_206.insert(ComplexEventPriceTimeType_206.getString());
    FIX::ComplexEventType ComplexEventType_206(9);
    noComplexEvents_0_0.set(ComplexEventType_206);
    ComplexEvents_NoComplexEvents_206.insert(ComplexEventType_206.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_206;
    ComplexOptPayoutAmount_206.setString("3607322");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_206);
    ComplexEvents_NoComplexEvents_206.insert(ComplexOptPayoutAmount_206.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_206);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_414;
      FIX::ComplexEventEndDate ComplexEventEndDate_414(FIX::UTCTIMESTAMP(15, 0, 45, 13, 8, 2001));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_414);
      ComplexEventDates_NoComplexEventDates_414.insert(ComplexEventEndDate_414.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_414(FIX::UTCTIMESTAMP(10, 30, 45, 24, 2, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_414);
      ComplexEventDates_NoComplexEventDates_414.insert(ComplexEventStartDate_414.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_414);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_836;
        FIX::ComplexEventEndTime ComplexEventEndTime_836(FIX::UTCTIMEONLY(2, 29, 47));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_836);
        ComplexEventTimes_NoComplexEventTimes_836.insert(ComplexEventEndTime_836.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_836(FIX::UTCTIMEONLY(2, 1, 17));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_836);
        ComplexEventTimes_NoComplexEventTimes_836.insert(ComplexEventStartTime_836.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_836);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_415;
      FIX::ComplexEventEndDate ComplexEventEndDate_415(FIX::UTCTIMESTAMP(11, 58, 44, 20, 11, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_415);
      ComplexEventDates_NoComplexEventDates_415.insert(ComplexEventEndDate_415.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_415(FIX::UTCTIMESTAMP(16, 1, 21, 21, 4, 2017));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_415);
      ComplexEventDates_NoComplexEventDates_415.insert(ComplexEventStartDate_415.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_415);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_837;
        FIX::ComplexEventEndTime ComplexEventEndTime_837(FIX::UTCTIMEONLY(7, 55, 55));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_837);
        ComplexEventTimes_NoComplexEventTimes_837.insert(ComplexEventEndTime_837.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_837(FIX::UTCTIMEONLY(12, 9, 6));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_837);
        ComplexEventTimes_NoComplexEventTimes_837.insert(ComplexEventStartTime_837.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_837);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_838;
        FIX::ComplexEventEndTime ComplexEventEndTime_838(FIX::UTCTIMEONLY(15, 27, 14));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_838);
        ComplexEventTimes_NoComplexEventTimes_838.insert(ComplexEventEndTime_838.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_838(FIX::UTCTIMEONLY(17, 15, 29));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_838);
        ComplexEventTimes_NoComplexEventTimes_838.insert(ComplexEventStartTime_838.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_838);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_207;
    FIX::ComplexEventCondition ComplexEventCondition_207(2);
    noComplexEvents_0_1.set(ComplexEventCondition_207);
    ComplexEvents_NoComplexEvents_207.insert(ComplexEventCondition_207.getString());
    FIX::ComplexEventPrice ComplexEventPrice_207;
    ComplexEventPrice_207.setString("1916743");
    noComplexEvents_0_1.set(ComplexEventPrice_207);
    ComplexEvents_NoComplexEvents_207.insert(ComplexEventPrice_207.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_207(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_207);
    ComplexEvents_NoComplexEvents_207.insert(ComplexEventPriceBoundaryMethod_207.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_207;
    ComplexEventPriceBoundaryPrecision_207.setString("35.440000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_207);
    ComplexEvents_NoComplexEvents_207.insert(ComplexEventPriceBoundaryPrecision_207.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_207(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_207);
    ComplexEvents_NoComplexEvents_207.insert(ComplexEventPriceTimeType_207.getString());
    FIX::ComplexEventType ComplexEventType_207(1);
    noComplexEvents_0_1.set(ComplexEventType_207);
    ComplexEvents_NoComplexEvents_207.insert(ComplexEventType_207.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_207;
    ComplexOptPayoutAmount_207.setString("13319747");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_207);
    ComplexEvents_NoComplexEvents_207.insert(ComplexOptPayoutAmount_207.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_207);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_416;
      FIX::ComplexEventEndDate ComplexEventEndDate_416(FIX::UTCTIMESTAMP(19, 1, 47, 18, 11, 2016));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_416);
      ComplexEventDates_NoComplexEventDates_416.insert(ComplexEventEndDate_416.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_416(FIX::UTCTIMESTAMP(6, 51, 20, 21, 8, 2016));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_416);
      ComplexEventDates_NoComplexEventDates_416.insert(ComplexEventStartDate_416.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_416);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_839;
        FIX::ComplexEventEndTime ComplexEventEndTime_839(FIX::UTCTIMEONLY(1, 23, 36));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_839);
        ComplexEventTimes_NoComplexEventTimes_839.insert(ComplexEventEndTime_839.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_839(FIX::UTCTIMEONLY(5, 43, 26));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_839);
        ComplexEventTimes_NoComplexEventTimes_839.insert(ComplexEventStartTime_839.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_839);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_840;
        FIX::ComplexEventEndTime ComplexEventEndTime_840(FIX::UTCTIMEONLY(13, 45, 32));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_840);
        ComplexEventTimes_NoComplexEventTimes_840.insert(ComplexEventEndTime_840.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_840(FIX::UTCTIMEONLY(10, 30, 12));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_840);
        ComplexEventTimes_NoComplexEventTimes_840.insert(ComplexEventStartTime_840.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_840);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_841;
        FIX::ComplexEventEndTime ComplexEventEndTime_841(FIX::UTCTIMEONLY(2, 14, 7));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_841);
        ComplexEventTimes_NoComplexEventTimes_841.insert(ComplexEventEndTime_841.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_841(FIX::UTCTIMEONLY(0, 11, 17));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_841);
        ComplexEventTimes_NoComplexEventTimes_841.insert(ComplexEventStartTime_841.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_841);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::TradingSessionStatus::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_208;
    FIX::ComplexEventCondition ComplexEventCondition_208(1);
    noComplexEvents_0_2.set(ComplexEventCondition_208);
    ComplexEvents_NoComplexEvents_208.insert(ComplexEventCondition_208.getString());
    FIX::ComplexEventPrice ComplexEventPrice_208;
    ComplexEventPrice_208.setString("19742010");
    noComplexEvents_0_2.set(ComplexEventPrice_208);
    ComplexEvents_NoComplexEvents_208.insert(ComplexEventPrice_208.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_208(1);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_208);
    ComplexEvents_NoComplexEvents_208.insert(ComplexEventPriceBoundaryMethod_208.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_208;
    ComplexEventPriceBoundaryPrecision_208.setString("79.640000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_208);
    ComplexEvents_NoComplexEvents_208.insert(ComplexEventPriceBoundaryPrecision_208.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_208(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_208);
    ComplexEvents_NoComplexEvents_208.insert(ComplexEventPriceTimeType_208.getString());
    FIX::ComplexEventType ComplexEventType_208(8);
    noComplexEvents_0_2.set(ComplexEventType_208);
    ComplexEvents_NoComplexEvents_208.insert(ComplexEventType_208.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_208;
    ComplexOptPayoutAmount_208.setString("4550393");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_208);
    ComplexEvents_NoComplexEvents_208.insert(ComplexOptPayoutAmount_208.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_208);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_417;
      FIX::ComplexEventEndDate ComplexEventEndDate_417(FIX::UTCTIMESTAMP(3, 47, 43, 24, 7, 2003));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_417);
      ComplexEventDates_NoComplexEventDates_417.insert(ComplexEventEndDate_417.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_417(FIX::UTCTIMESTAMP(11, 47, 5, 4, 10, 2012));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_417);
      ComplexEventDates_NoComplexEventDates_417.insert(ComplexEventStartDate_417.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_417);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_842;
        FIX::ComplexEventEndTime ComplexEventEndTime_842(FIX::UTCTIMEONLY(18, 26, 32));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_842);
        ComplexEventTimes_NoComplexEventTimes_842.insert(ComplexEventEndTime_842.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_842(FIX::UTCTIMEONLY(19, 35, 8));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_842);
        ComplexEventTimes_NoComplexEventTimes_842.insert(ComplexEventStartTime_842.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_842);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_418;
      FIX::ComplexEventEndDate ComplexEventEndDate_418(FIX::UTCTIMESTAMP(17, 30, 9, 18, 3, 2001));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_418);
      ComplexEventDates_NoComplexEventDates_418.insert(ComplexEventEndDate_418.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_418(FIX::UTCTIMESTAMP(15, 45, 8, 14, 10, 2012));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_418);
      ComplexEventDates_NoComplexEventDates_418.insert(ComplexEventStartDate_418.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_418);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_843;
        FIX::ComplexEventEndTime ComplexEventEndTime_843(FIX::UTCTIMEONLY(18, 31, 48));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_843);
        ComplexEventTimes_NoComplexEventTimes_843.insert(ComplexEventEndTime_843.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_843(FIX::UTCTIMEONLY(4, 16, 18));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_843);
        ComplexEventTimes_NoComplexEventTimes_843.insert(ComplexEventStartTime_843.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_843);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_844;
        FIX::ComplexEventEndTime ComplexEventEndTime_844(FIX::UTCTIMEONLY(10, 45, 10));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_844);
        ComplexEventTimes_NoComplexEventTimes_844.insert(ComplexEventEndTime_844.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_844(FIX::UTCTIMEONLY(16, 38, 12));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_844);
        ComplexEventTimes_NoComplexEventTimes_844.insert(ComplexEventStartTime_844.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_844);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_845;
        FIX::ComplexEventEndTime ComplexEventEndTime_845(FIX::UTCTIMEONLY(7, 34, 35));
        noComplexEventTimes_2_1_2_2.set(ComplexEventEndTime_845);
        ComplexEventTimes_NoComplexEventTimes_845.insert(ComplexEventEndTime_845.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_845(FIX::UTCTIMEONLY(12, 16, 47));
        noComplexEventTimes_2_1_2_2.set(ComplexEventStartTime_845);
        ComplexEventTimes_NoComplexEventTimes_845.insert(ComplexEventStartTime_845.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_845);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_419;
      FIX::ComplexEventEndDate ComplexEventEndDate_419(FIX::UTCTIMESTAMP(13, 56, 6, 15, 3, 2014));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_419);
      ComplexEventDates_NoComplexEventDates_419.insert(ComplexEventEndDate_419.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_419(FIX::UTCTIMESTAMP(8, 13, 25, 6, 11, 2017));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_419);
      ComplexEventDates_NoComplexEventDates_419.insert(ComplexEventStartDate_419.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_419);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_846;
        FIX::ComplexEventEndTime ComplexEventEndTime_846(FIX::UTCTIMEONLY(7, 26, 22));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_846);
        ComplexEventTimes_NoComplexEventTimes_846.insert(ComplexEventEndTime_846.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_846(FIX::UTCTIMEONLY(10, 0, 4));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_846);
        ComplexEventTimes_NoComplexEventTimes_846.insert(ComplexEventStartTime_846.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_846);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_847;
        FIX::ComplexEventEndTime ComplexEventEndTime_847(FIX::UTCTIMEONLY(20, 39, 34));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_847);
        ComplexEventTimes_NoComplexEventTimes_847.insert(ComplexEventEndTime_847.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_847(FIX::UTCTIMEONLY(3, 51, 5));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_847);
        ComplexEventTimes_NoComplexEventTimes_847.insert(ComplexEventStartTime_847.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_847);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradingSessionStatus::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_207;
    FIX::EventDate EventDate_207("LOCALMKTDATE_248105084");
    noEvents_0_0.set(EventDate_207);
    EvntGrp_NoEvents_207.insert(EventDate_207.getString());
    FIX::EventPx EventPx_207;
    EventPx_207.setString("436664");
    noEvents_0_0.set(EventPx_207);
    EvntGrp_NoEvents_207.insert(EventPx_207.getString());
    FIX::EventText EventText_207("STRING_2052861066");
    noEvents_0_0.set(EventText_207);
    EvntGrp_NoEvents_207.insert(EventText_207.getString());
    FIX::EventTime EventTime_207(FIX::UTCTIMESTAMP(8, 48, 33, 8, 3, 2008));
    noEvents_0_0.set(EventTime_207);
    EvntGrp_NoEvents_207.insert(EventTime_207.getString());
    FIX::EventType EventType_207(16);
    noEvents_0_0.set(EventType_207);
    EvntGrp_NoEvents_207.insert(EventType_207.getString());
    all_values.push_back(EvntGrp_NoEvents_207);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_208;
    FIX::EventDate EventDate_208("LOCALMKTDATE_79513648");
    noEvents_0_1.set(EventDate_208);
    EvntGrp_NoEvents_208.insert(EventDate_208.getString());
    FIX::EventPx EventPx_208;
    EventPx_208.setString("1311615");
    noEvents_0_1.set(EventPx_208);
    EvntGrp_NoEvents_208.insert(EventPx_208.getString());
    FIX::EventText EventText_208("STRING_1585068784");
    noEvents_0_1.set(EventText_208);
    EvntGrp_NoEvents_208.insert(EventText_208.getString());
    FIX::EventTime EventTime_208(FIX::UTCTIMESTAMP(19, 30, 2, 3, 5, 2003));
    noEvents_0_1.set(EventTime_208);
    EvntGrp_NoEvents_208.insert(EventTime_208.getString());
    FIX::EventType EventType_208(17);
    noEvents_0_1.set(EventType_208);
    EvntGrp_NoEvents_208.insert(EventType_208.getString());
    all_values.push_back(EvntGrp_NoEvents_208);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::TradingSessionStatus::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_209;
    FIX::EventDate EventDate_209("LOCALMKTDATE_1403718183");
    noEvents_0_2.set(EventDate_209);
    EvntGrp_NoEvents_209.insert(EventDate_209.getString());
    FIX::EventPx EventPx_209;
    EventPx_209.setString("11731887");
    noEvents_0_2.set(EventPx_209);
    EvntGrp_NoEvents_209.insert(EventPx_209.getString());
    FIX::EventText EventText_209("STRING_1511520955");
    noEvents_0_2.set(EventText_209);
    EvntGrp_NoEvents_209.insert(EventText_209.getString());
    FIX::EventTime EventTime_209(FIX::UTCTIMESTAMP(9, 14, 21, 26, 7, 2017));
    noEvents_0_2.set(EventTime_209);
    EvntGrp_NoEvents_209.insert(EventTime_209.getString());
    FIX::EventType EventType_209(1);
    noEvents_0_2.set(EventType_209);
    EvntGrp_NoEvents_209.insert(EventType_209.getString());
    all_values.push_back(EvntGrp_NoEvents_209);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_218;
    FIX::InstrumentPartyID InstrumentPartyID_218("STRING_693759593");
    noInstrumentParties_0_0.set(InstrumentPartyID_218);
    InstrumentParties_NoInstrumentParties_218.insert(InstrumentPartyID_218.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_218('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_218);
    InstrumentParties_NoInstrumentParties_218.insert(InstrumentPartyIDSource_218.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_218(2146484752);
    noInstrumentParties_0_0.set(InstrumentPartyRole_218);
    InstrumentParties_NoInstrumentParties_218.insert(InstrumentPartyRole_218.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_218);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_430;
      FIX::InstrumentPartySubID InstrumentPartySubID_430("STRING_109028708");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_430);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_430.insert(InstrumentPartySubID_430.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_430(2015540026);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_430);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_430.insert(InstrumentPartySubIDType_430.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_430);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_219;
    FIX::InstrumentPartyID InstrumentPartyID_219("STRING_370480568");
    noInstrumentParties_0_1.set(InstrumentPartyID_219);
    InstrumentParties_NoInstrumentParties_219.insert(InstrumentPartyID_219.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_219('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_219);
    InstrumentParties_NoInstrumentParties_219.insert(InstrumentPartyIDSource_219.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_219(2095053674);
    noInstrumentParties_0_1.set(InstrumentPartyRole_219);
    InstrumentParties_NoInstrumentParties_219.insert(InstrumentPartyRole_219.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_219);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_431;
      FIX::InstrumentPartySubID InstrumentPartySubID_431("STRING_566008639");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_431);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_431.insert(InstrumentPartySubID_431.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_431(1617745194);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_431);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_431.insert(InstrumentPartySubIDType_431.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_431);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_432;
      FIX::InstrumentPartySubID InstrumentPartySubID_432("STRING_2086670632");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_432);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_432.insert(InstrumentPartySubID_432.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_432(340155401);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_432);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_432.insert(InstrumentPartySubIDType_432.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_432);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_433;
      FIX::InstrumentPartySubID InstrumentPartySubID_433("STRING_1868973777");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_433);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_433.insert(InstrumentPartySubID_433.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_433(364479715);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_433);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_433.insert(InstrumentPartySubIDType_433.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_433);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_197;
    FIX::SecurityAltID SecurityAltID_197("STRING_932137732");
    noSecurityAltID_0_0.set(SecurityAltID_197);
    SecAltIDGrp_NoSecurityAltID_197.insert(SecurityAltID_197.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_197("STRING_1158918551");
    noSecurityAltID_0_0.set(SecurityAltIDSource_197);
    SecAltIDGrp_NoSecurityAltID_197.insert(SecurityAltIDSource_197.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_197);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_198;
    FIX::SecurityAltID SecurityAltID_198("STRING_1716891341");
    noSecurityAltID_0_1.set(SecurityAltID_198);
    SecAltIDGrp_NoSecurityAltID_198.insert(SecurityAltID_198.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_198("STRING_2105326435");
    noSecurityAltID_0_1.set(SecurityAltIDSource_198);
    SecAltIDGrp_NoSecurityAltID_198.insert(SecurityAltIDSource_198.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_198);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_208;
  FIX::SecurityXML SecurityXML_209("XMLDATA_522955858");
  msg.set(SecurityXML_209);
  FIX::SecurityXMLLen SecurityXMLLen_104(1004486471);
  msg.set(SecurityXMLLen_104);
  FIX::SecurityXMLSchema SecurityXMLSchema_104("STRING_977787068");
  msg.set(SecurityXMLSchema_104);
  SecurityXML_208.insert(SecurityXMLSchema_104.getString());
  all_values.push_back(SecurityXML_208);
  all_compo_names.insert("SecurityXML");


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
