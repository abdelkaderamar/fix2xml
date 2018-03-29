#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/News.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( News, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::News msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> News_0;
  FIX::EncodedHeadline EncodedHeadline_0("DATA_1261846070");
  msg.set(EncodedHeadline_0);
  News_0.insert(EncodedHeadline_0.getString());
  FIX::EncodedHeadlineLen EncodedHeadlineLen_0(516551368);
  msg.set(EncodedHeadlineLen_0);
  News_0.insert(EncodedHeadlineLen_0.getString());
  FIX::Headline Headline_0("STRING_365528095");
  msg.set(Headline_0);
  News_0.insert(Headline_0.getString());
  FIX::LanguageCode LanguageCode_0("FR");
  msg.set(LanguageCode_0);
  News_0.insert(LanguageCode_0.getString());
  FIX::MarketID MarketID_10("EXCHANGE_197992571");
  msg.set(MarketID_10);
  News_0.insert(MarketID_10.getString());
  FIX::MarketSegmentID MarketSegmentID_10("STRING_1751638599");
  msg.set(MarketSegmentID_10);
  News_0.insert(MarketSegmentID_10.getString());
  FIX::NewsCategory NewsCategory_0(3);
  msg.set(NewsCategory_0);
  News_0.insert(NewsCategory_0.getString());
  FIX::NewsID NewsID_0("STRING_910980445");
  msg.set(NewsID_0);
  News_0.insert(NewsID_0.getString());
  FIX::OrigTime OrigTime_1(FIX::UTCTIMESTAMP(19, 9, 7, 0, 2, 2007));
  msg.set(OrigTime_1);
  News_0.insert(OrigTime_1.getString());
  FIX::RawData RawData_1("DATA_1844571875");
  msg.set(RawData_1);
  News_0.insert(RawData_1.getString());
  FIX::RawDataLength RawDataLength_1(697574988);
  msg.set(RawDataLength_1);
  News_0.insert(RawDataLength_1.getString());
  FIX::URLLink URLLink_2("STRING_836878672");
  msg.set(URLLink_2);
  News_0.insert(URLLink_2.getString());
  FIX::Urgency Urgency_0('2');
  msg.set(Urgency_0);
  News_0.insert(Urgency_0.getString());
  all_values.push_back(News_0);

  all_compo_names.insert("News");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_10;
  FIX::ApplID ApplID_10("STRING_1302485267");
  msg.set(ApplID_10);
  ApplicationSequenceControl_10.insert(ApplID_10.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_10(810233013);
  msg.set(ApplLastSeqNum_10);
  ApplicationSequenceControl_10.insert(ApplLastSeqNum_10.getString());
  FIX::ApplResendFlag ApplResendFlag_10(true);
  msg.set(ApplResendFlag_10);
  ApplicationSequenceControl_10.insert(ApplResendFlag_10.getString());
  FIX::ApplSeqNum ApplSeqNum_10(410551093);
  msg.set(ApplSeqNum_10);
  ApplicationSequenceControl_10.insert(ApplSeqNum_10.getString());
  all_values.push_back(ApplicationSequenceControl_10);
  all_compo_names.insert("ApplicationSequenceControl");

  // InstrmtGrp
  // Group InstrmtGrp.NoRelatedSym
  {
    FIX50SP2::News::NoRelatedSym noRelatedSym_0_0;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_53;
    FIX::AttachmentPoint AttachmentPoint_53;
    AttachmentPoint_53.setString("10.420000");
    noRelatedSym_0_0.set(AttachmentPoint_53);
    Instrument_53.insert(AttachmentPoint_53.getString());
    FIX::CFICode CFICode_53("STRING_1512209349");
    noRelatedSym_0_0.set(CFICode_53);
    Instrument_53.insert(CFICode_53.getString());
    FIX::CPProgram CPProgram_53(2);
    noRelatedSym_0_0.set(CPProgram_53);
    Instrument_53.insert(CPProgram_53.getString());
    FIX::CPRegType CPRegType_53("STRING_449467924");
    noRelatedSym_0_0.set(CPRegType_53);
    Instrument_53.insert(CPRegType_53.getString());
    FIX::CapPrice CapPrice_53;
    CapPrice_53.setString("16208966");
    noRelatedSym_0_0.set(CapPrice_53);
    Instrument_53.insert(CapPrice_53.getString());
    FIX::ContractMultiplier ContractMultiplier_53;
    ContractMultiplier_53.setString("15393941");
    noRelatedSym_0_0.set(ContractMultiplier_53);
    Instrument_53.insert(ContractMultiplier_53.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_53(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_53);
    Instrument_53.insert(ContractMultiplierUnit_53.getString());
    FIX::ContractSettlMonth ContractSettlMonth_53("MONTHYEAR_735259116");
    noRelatedSym_0_0.set(ContractSettlMonth_53);
    Instrument_53.insert(ContractSettlMonth_53.getString());
    FIX::CountryOfIssue CountryOfIssue_53("COUNTRY_2055945554");
    noRelatedSym_0_0.set(CountryOfIssue_53);
    Instrument_53.insert(CountryOfIssue_53.getString());
    FIX::CouponPaymentDate CouponPaymentDate_53("LOCALMKTDATE_229274804");
    noRelatedSym_0_0.set(CouponPaymentDate_53);
    Instrument_53.insert(CouponPaymentDate_53.getString());
    FIX::CouponRate CouponRate_53;
    CouponRate_53.setString("45.990000");
    noRelatedSym_0_0.set(CouponRate_53);
    Instrument_53.insert(CouponRate_53.getString());
    FIX::CreditRating CreditRating_53("STRING_106454477");
    noRelatedSym_0_0.set(CreditRating_53);
    Instrument_53.insert(CreditRating_53.getString());
    FIX::DatedDate DatedDate_53("LOCALMKTDATE_1980913403");
    noRelatedSym_0_0.set(DatedDate_53);
    Instrument_53.insert(DatedDate_53.getString());
    FIX::DetachmentPoint DetachmentPoint_53;
    DetachmentPoint_53.setString("97.850000");
    noRelatedSym_0_0.set(DetachmentPoint_53);
    Instrument_53.insert(DetachmentPoint_53.getString());
    FIX::EncodedIssuer EncodedIssuer_53("DATA_1017434922");
    noRelatedSym_0_0.set(EncodedIssuer_53);
    Instrument_53.insert(EncodedIssuer_53.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_53(1708988350);
    noRelatedSym_0_0.set(EncodedIssuerLen_53);
    Instrument_53.insert(EncodedIssuerLen_53.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_53("DATA_1734785100");
    noRelatedSym_0_0.set(EncodedSecurityDesc_53);
    Instrument_53.insert(EncodedSecurityDesc_53.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_53(1252298452);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_53);
    Instrument_53.insert(EncodedSecurityDescLen_53.getString());
    FIX::ExerciseStyle ExerciseStyle_53(0);
    noRelatedSym_0_0.set(ExerciseStyle_53);
    Instrument_53.insert(ExerciseStyle_53.getString());
    FIX::Factor Factor_53;
    Factor_53.setString("424004");
    noRelatedSym_0_0.set(Factor_53);
    Instrument_53.insert(Factor_53.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_53(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_53);
    Instrument_53.insert(FlexProductEligibilityIndicator_53.getString());
    FIX::FlexibleIndicator FlexibleIndicator_53(false);
    noRelatedSym_0_0.set(FlexibleIndicator_53);
    Instrument_53.insert(FlexibleIndicator_53.getString());
    FIX::FloorPrice FloorPrice_53;
    FloorPrice_53.setString("18869723");
    noRelatedSym_0_0.set(FloorPrice_53);
    Instrument_53.insert(FloorPrice_53.getString());
    FIX::FlowScheduleType FlowScheduleType_53(4);
    noRelatedSym_0_0.set(FlowScheduleType_53);
    Instrument_53.insert(FlowScheduleType_53.getString());
    FIX::InstrRegistry InstrRegistry_53("STRING_203418283");
    noRelatedSym_0_0.set(InstrRegistry_53);
    Instrument_53.insert(InstrRegistry_53.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_53('2');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_53);
    Instrument_53.insert(InstrmtAssignmentMethod_53.getString());
    FIX::InterestAccrualDate InterestAccrualDate_53("LOCALMKTDATE_1951531856");
    noRelatedSym_0_0.set(InterestAccrualDate_53);
    Instrument_53.insert(InterestAccrualDate_53.getString());
    FIX::IssueDate IssueDate_53("LOCALMKTDATE_1013651296");
    noRelatedSym_0_0.set(IssueDate_53);
    Instrument_53.insert(IssueDate_53.getString());
    FIX::Issuer Issuer_53("STRING_531709941");
    noRelatedSym_0_0.set(Issuer_53);
    Instrument_53.insert(Issuer_53.getString());
    FIX::ListMethod ListMethod_53(1);
    noRelatedSym_0_0.set(ListMethod_53);
    Instrument_53.insert(ListMethod_53.getString());
    FIX::LocaleOfIssue LocaleOfIssue_53("STRING_1382420586");
    noRelatedSym_0_0.set(LocaleOfIssue_53);
    Instrument_53.insert(LocaleOfIssue_53.getString());
    FIX::MaturityDate MaturityDate_53("LOCALMKTDATE_981650983");
    noRelatedSym_0_0.set(MaturityDate_53);
    Instrument_53.insert(MaturityDate_53.getString());
    FIX::MaturityMonthYear MaturityMonthYear_53("MONTHYEAR_1726808651");
    noRelatedSym_0_0.set(MaturityMonthYear_53);
    Instrument_53.insert(MaturityMonthYear_53.getString());
    FIX::MaturityTime MaturityTime_53("TZTIMEONLY_1369602275");
    noRelatedSym_0_0.set(MaturityTime_53);
    Instrument_53.insert(MaturityTime_53.getString());
    FIX::MinPriceIncrement MinPriceIncrement_53;
    MinPriceIncrement_53.setString("14311189");
    noRelatedSym_0_0.set(MinPriceIncrement_53);
    Instrument_53.insert(MinPriceIncrement_53.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_53;
    MinPriceIncrementAmount_53.setString("12002216");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_53);
    Instrument_53.insert(MinPriceIncrementAmount_53.getString());
    FIX::NTPositionLimit NTPositionLimit_53(761512813);
    noRelatedSym_0_0.set(NTPositionLimit_53);
    Instrument_53.insert(NTPositionLimit_53.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_53;
    NotionalPercentageOutstanding_53.setString("56.160000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_53);
    Instrument_53.insert(NotionalPercentageOutstanding_53.getString());
    FIX::OptAttribute OptAttribute_53('1');
    noRelatedSym_0_0.set(OptAttribute_53);
    Instrument_53.insert(OptAttribute_53.getString());
    FIX::OptPayoutAmount OptPayoutAmount_53;
    OptPayoutAmount_53.setString("6699747");
    noRelatedSym_0_0.set(OptPayoutAmount_53);
    Instrument_53.insert(OptPayoutAmount_53.getString());
    FIX::OptPayoutType OptPayoutType_53(1);
    noRelatedSym_0_0.set(OptPayoutType_53);
    Instrument_53.insert(OptPayoutType_53.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_53;
    OriginalNotionalPercentageOutstanding_53.setString("17.650000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_53);
    Instrument_53.insert(OriginalNotionalPercentageOutstanding_53.getString());
    FIX::Pool Pool_53("STRING_776429197");
    noRelatedSym_0_0.set(Pool_53);
    Instrument_53.insert(Pool_53.getString());
    FIX::PositionLimit PositionLimit_53(1357570176);
    noRelatedSym_0_0.set(PositionLimit_53);
    Instrument_53.insert(PositionLimit_53.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_53("STRING_INT");
    noRelatedSym_0_0.set(PriceQuoteMethod_53);
    Instrument_53.insert(PriceQuoteMethod_53.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_53("STRING_1793864120");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_53);
    Instrument_53.insert(PriceUnitOfMeasure_53.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_53;
    PriceUnitOfMeasureQty_53.setString("9190748");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_53);
    Instrument_53.insert(PriceUnitOfMeasureQty_53.getString());
    FIX::Product Product_55(3);
    noRelatedSym_0_0.set(Product_55);
    Instrument_53.insert(Product_55.getString());
    FIX::ProductComplex ProductComplex_53("STRING_898678924");
    noRelatedSym_0_0.set(ProductComplex_53);
    Instrument_53.insert(ProductComplex_53.getString());
    FIX::PutOrCall PutOrCall_53(1);
    noRelatedSym_0_0.set(PutOrCall_53);
    Instrument_53.insert(PutOrCall_53.getString());
    FIX::RedemptionDate RedemptionDate_53("LOCALMKTDATE_1729423490");
    noRelatedSym_0_0.set(RedemptionDate_53);
    Instrument_53.insert(RedemptionDate_53.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_53("STRING_850150525");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_53);
    Instrument_53.insert(RepoCollateralSecurityType_53.getString());
    FIX::RepurchaseRate RepurchaseRate_53;
    RepurchaseRate_53.setString("20.000000");
    noRelatedSym_0_0.set(RepurchaseRate_53);
    Instrument_53.insert(RepurchaseRate_53.getString());
    FIX::RepurchaseTerm RepurchaseTerm_53(1468912206);
    noRelatedSym_0_0.set(RepurchaseTerm_53);
    Instrument_53.insert(RepurchaseTerm_53.getString());
    FIX::RestructuringType RestructuringType_53("STRING_MM");
    noRelatedSym_0_0.set(RestructuringType_53);
    Instrument_53.insert(RestructuringType_53.getString());
    FIX::SecurityDesc SecurityDesc_53("STRING_254260283");
    noRelatedSym_0_0.set(SecurityDesc_53);
    Instrument_53.insert(SecurityDesc_53.getString());
    FIX::SecurityExchange SecurityExchange_53("EXCHANGE_1361905503");
    noRelatedSym_0_0.set(SecurityExchange_53);
    Instrument_53.insert(SecurityExchange_53.getString());
    FIX::SecurityGroup SecurityGroup_53("STRING_1303245323");
    noRelatedSym_0_0.set(SecurityGroup_53);
    Instrument_53.insert(SecurityGroup_53.getString());
    FIX::SecurityID SecurityID_53("STRING_1267911579");
    noRelatedSym_0_0.set(SecurityID_53);
    Instrument_53.insert(SecurityID_53.getString());
    FIX::SecurityIDSource SecurityIDSource_53("STRING_7");
    noRelatedSym_0_0.set(SecurityIDSource_53);
    Instrument_53.insert(SecurityIDSource_53.getString());
    FIX::SecurityStatus SecurityStatus_53("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_53);
    Instrument_53.insert(SecurityStatus_53.getString());
    FIX::SecuritySubType SecuritySubType_54("STRING_502848517");
    noRelatedSym_0_0.set(SecuritySubType_54);
    Instrument_53.insert(SecuritySubType_54.getString());
    FIX::SecurityType SecurityType_55("STRING_ABS");
    noRelatedSym_0_0.set(SecurityType_55);
    Instrument_53.insert(SecurityType_55.getString());
    FIX::Seniority Seniority_53("STRING_SD");
    noRelatedSym_0_0.set(Seniority_53);
    Instrument_53.insert(Seniority_53.getString());
    FIX::SettlMethod SettlMethod_53('P');
    noRelatedSym_0_0.set(SettlMethod_53);
    Instrument_53.insert(SettlMethod_53.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_53("STRING_11418039");
    noRelatedSym_0_0.set(SettleOnOpenFlag_53);
    Instrument_53.insert(SettleOnOpenFlag_53.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_53("STRING_149907676");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_53);
    Instrument_53.insert(StateOrProvinceOfIssue_53.getString());
    FIX::StrikeCurrency StrikeCurrency_53("JPY");
    noRelatedSym_0_0.set(StrikeCurrency_53);
    Instrument_53.insert(StrikeCurrency_53.getString());
    FIX::StrikeMultiplier StrikeMultiplier_53;
    StrikeMultiplier_53.setString("20853884");
    noRelatedSym_0_0.set(StrikeMultiplier_53);
    Instrument_53.insert(StrikeMultiplier_53.getString());
    FIX::StrikePrice StrikePrice_53;
    StrikePrice_53.setString("11564546");
    noRelatedSym_0_0.set(StrikePrice_53);
    Instrument_53.insert(StrikePrice_53.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_53(5);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_53);
    Instrument_53.insert(StrikePriceBoundaryMethod_53.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_53;
    StrikePriceBoundaryPrecision_53.setString("66.070000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_53);
    Instrument_53.insert(StrikePriceBoundaryPrecision_53.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_53(1);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_53);
    Instrument_53.insert(StrikePriceDeterminationMethod_53.getString());
    FIX::StrikeValue StrikeValue_53;
    StrikeValue_53.setString("20405106");
    noRelatedSym_0_0.set(StrikeValue_53);
    Instrument_53.insert(StrikeValue_53.getString());
    FIX::Symbol Symbol_53("STRING_1042814509");
    noRelatedSym_0_0.set(Symbol_53);
    Instrument_53.insert(Symbol_53.getString());
    FIX::SymbolSfx SymbolSfx_53("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_53);
    Instrument_53.insert(SymbolSfx_53.getString());
    FIX::TimeUnit TimeUnit_53("STRING_H");
    noRelatedSym_0_0.set(TimeUnit_53);
    Instrument_53.insert(TimeUnit_53.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_53(4);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_53);
    Instrument_53.insert(UnderlyingPriceDeterminationMethod_53.getString());
    FIX::UnitOfMeasure UnitOfMeasure_53("STRING_MMbbl");
    noRelatedSym_0_0.set(UnitOfMeasure_53);
    Instrument_53.insert(UnitOfMeasure_53.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_53;
    UnitOfMeasureQty_53.setString("14964042");
    noRelatedSym_0_0.set(UnitOfMeasureQty_53);
    Instrument_53.insert(UnitOfMeasureQty_53.getString());
    FIX::ValuationMethod ValuationMethod_53("STRING_EQTY");
    noRelatedSym_0_0.set(ValuationMethod_53);
    Instrument_53.insert(ValuationMethod_53.getString());
    all_values.push_back(Instrument_53);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_107;
      FIX::ComplexEventCondition ComplexEventCondition_107(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_107);
      ComplexEvents_NoComplexEvents_107.insert(ComplexEventCondition_107.getString());
      FIX::ComplexEventPrice ComplexEventPrice_107;
      ComplexEventPrice_107.setString("16332059");
      noComplexEvents_0_1_0.set(ComplexEventPrice_107);
      ComplexEvents_NoComplexEvents_107.insert(ComplexEventPrice_107.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_107(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_107);
      ComplexEvents_NoComplexEvents_107.insert(ComplexEventPriceBoundaryMethod_107.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_107;
      ComplexEventPriceBoundaryPrecision_107.setString("65.080000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_107);
      ComplexEvents_NoComplexEvents_107.insert(ComplexEventPriceBoundaryPrecision_107.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_107(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_107);
      ComplexEvents_NoComplexEvents_107.insert(ComplexEventPriceTimeType_107.getString());
      FIX::ComplexEventType ComplexEventType_107(3);
      noComplexEvents_0_1_0.set(ComplexEventType_107);
      ComplexEvents_NoComplexEvents_107.insert(ComplexEventType_107.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_107;
      ComplexOptPayoutAmount_107.setString("9219344");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_107);
      ComplexEvents_NoComplexEvents_107.insert(ComplexOptPayoutAmount_107.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_107);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_217;
        FIX::ComplexEventEndDate ComplexEventEndDate_217(FIX::UTCTIMESTAMP(13, 43, 14, 18, 11, 2013));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_217);
        ComplexEventDates_NoComplexEventDates_217.insert(ComplexEventEndDate_217.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_217(FIX::UTCTIMESTAMP(6, 13, 31, 19, 1, 2009));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_217);
        ComplexEventDates_NoComplexEventDates_217.insert(ComplexEventStartDate_217.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_217);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_439;
          FIX::ComplexEventEndTime ComplexEventEndTime_439(FIX::UTCTIMEONLY(19, 33, 24));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_439);
          ComplexEventTimes_NoComplexEventTimes_439.insert(ComplexEventEndTime_439.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_439(FIX::UTCTIMEONLY(15, 49, 12));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_439);
          ComplexEventTimes_NoComplexEventTimes_439.insert(ComplexEventStartTime_439.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_439);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_218;
        FIX::ComplexEventEndDate ComplexEventEndDate_218(FIX::UTCTIMESTAMP(1, 28, 9, 27, 11, 2015));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_218);
        ComplexEventDates_NoComplexEventDates_218.insert(ComplexEventEndDate_218.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_218(FIX::UTCTIMESTAMP(21, 38, 57, 24, 10, 2012));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_218);
        ComplexEventDates_NoComplexEventDates_218.insert(ComplexEventStartDate_218.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_218);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_440;
          FIX::ComplexEventEndTime ComplexEventEndTime_440(FIX::UTCTIMEONLY(6, 44, 45));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_440);
          ComplexEventTimes_NoComplexEventTimes_440.insert(ComplexEventEndTime_440.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_440(FIX::UTCTIMEONLY(0, 17, 31));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_440);
          ComplexEventTimes_NoComplexEventTimes_440.insert(ComplexEventStartTime_440.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_440);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_441;
          FIX::ComplexEventEndTime ComplexEventEndTime_441(FIX::UTCTIMEONLY(12, 56, 41));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_441);
          ComplexEventTimes_NoComplexEventTimes_441.insert(ComplexEventEndTime_441.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_441(FIX::UTCTIMEONLY(23, 22, 52));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_441);
          ComplexEventTimes_NoComplexEventTimes_441.insert(ComplexEventStartTime_441.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_441);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_108;
      FIX::ComplexEventCondition ComplexEventCondition_108(1);
      noComplexEvents_0_1_1.set(ComplexEventCondition_108);
      ComplexEvents_NoComplexEvents_108.insert(ComplexEventCondition_108.getString());
      FIX::ComplexEventPrice ComplexEventPrice_108;
      ComplexEventPrice_108.setString("8746273");
      noComplexEvents_0_1_1.set(ComplexEventPrice_108);
      ComplexEvents_NoComplexEvents_108.insert(ComplexEventPrice_108.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_108(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_108);
      ComplexEvents_NoComplexEvents_108.insert(ComplexEventPriceBoundaryMethod_108.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_108;
      ComplexEventPriceBoundaryPrecision_108.setString("47.170000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_108);
      ComplexEvents_NoComplexEvents_108.insert(ComplexEventPriceBoundaryPrecision_108.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_108(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_108);
      ComplexEvents_NoComplexEvents_108.insert(ComplexEventPriceTimeType_108.getString());
      FIX::ComplexEventType ComplexEventType_108(4);
      noComplexEvents_0_1_1.set(ComplexEventType_108);
      ComplexEvents_NoComplexEvents_108.insert(ComplexEventType_108.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_108;
      ComplexOptPayoutAmount_108.setString("17784647");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_108);
      ComplexEvents_NoComplexEvents_108.insert(ComplexOptPayoutAmount_108.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_108);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_219;
        FIX::ComplexEventEndDate ComplexEventEndDate_219(FIX::UTCTIMESTAMP(4, 19, 48, 1, 8, 2005));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_219);
        ComplexEventDates_NoComplexEventDates_219.insert(ComplexEventEndDate_219.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_219(FIX::UTCTIMESTAMP(13, 47, 21, 23, 12, 2008));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_219);
        ComplexEventDates_NoComplexEventDates_219.insert(ComplexEventStartDate_219.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_219);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_442;
          FIX::ComplexEventEndTime ComplexEventEndTime_442(FIX::UTCTIMEONLY(18, 7, 13));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_442);
          ComplexEventTimes_NoComplexEventTimes_442.insert(ComplexEventEndTime_442.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_442(FIX::UTCTIMEONLY(10, 36, 27));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_442);
          ComplexEventTimes_NoComplexEventTimes_442.insert(ComplexEventStartTime_442.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_442);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_443;
          FIX::ComplexEventEndTime ComplexEventEndTime_443(FIX::UTCTIMEONLY(15, 31, 51));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_443);
          ComplexEventTimes_NoComplexEventTimes_443.insert(ComplexEventEndTime_443.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_443(FIX::UTCTIMEONLY(22, 29, 32));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_443);
          ComplexEventTimes_NoComplexEventTimes_443.insert(ComplexEventStartTime_443.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_443);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_220;
        FIX::ComplexEventEndDate ComplexEventEndDate_220(FIX::UTCTIMESTAMP(22, 51, 55, 27, 11, 2001));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_220);
        ComplexEventDates_NoComplexEventDates_220.insert(ComplexEventEndDate_220.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_220(FIX::UTCTIMESTAMP(3, 46, 20, 27, 11, 2002));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_220);
        ComplexEventDates_NoComplexEventDates_220.insert(ComplexEventStartDate_220.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_220);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_444;
          FIX::ComplexEventEndTime ComplexEventEndTime_444(FIX::UTCTIMEONLY(20, 16, 56));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_444);
          ComplexEventTimes_NoComplexEventTimes_444.insert(ComplexEventEndTime_444.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_444(FIX::UTCTIMEONLY(3, 24, 38));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_444);
          ComplexEventTimes_NoComplexEventTimes_444.insert(ComplexEventStartTime_444.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_444);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_445;
          FIX::ComplexEventEndTime ComplexEventEndTime_445(FIX::UTCTIMEONLY(3, 9, 1));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventEndTime_445);
          ComplexEventTimes_NoComplexEventTimes_445.insert(ComplexEventEndTime_445.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_445(FIX::UTCTIMEONLY(12, 22, 10));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventStartTime_445);
          ComplexEventTimes_NoComplexEventTimes_445.insert(ComplexEventStartTime_445.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_445);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_446;
          FIX::ComplexEventEndTime ComplexEventEndTime_446(FIX::UTCTIMEONLY(20, 53, 38));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventEndTime_446);
          ComplexEventTimes_NoComplexEventTimes_446.insert(ComplexEventEndTime_446.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_446(FIX::UTCTIMEONLY(19, 37, 15));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventStartTime_446);
          ComplexEventTimes_NoComplexEventTimes_446.insert(ComplexEventStartTime_446.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_446);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_221;
        FIX::ComplexEventEndDate ComplexEventEndDate_221(FIX::UTCTIMESTAMP(12, 27, 33, 26, 6, 2001));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_221);
        ComplexEventDates_NoComplexEventDates_221.insert(ComplexEventEndDate_221.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_221(FIX::UTCTIMESTAMP(1, 59, 4, 12, 3, 2016));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_221);
        ComplexEventDates_NoComplexEventDates_221.insert(ComplexEventStartDate_221.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_221);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_447;
          FIX::ComplexEventEndTime ComplexEventEndTime_447(FIX::UTCTIMEONLY(0, 52, 5));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_447);
          ComplexEventTimes_NoComplexEventTimes_447.insert(ComplexEventEndTime_447.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_447(FIX::UTCTIMEONLY(4, 27, 28));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_447);
          ComplexEventTimes_NoComplexEventTimes_447.insert(ComplexEventStartTime_447.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_447);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_448;
          FIX::ComplexEventEndTime ComplexEventEndTime_448(FIX::UTCTIMEONLY(16, 21, 49));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventEndTime_448);
          ComplexEventTimes_NoComplexEventTimes_448.insert(ComplexEventEndTime_448.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_448(FIX::UTCTIMEONLY(4, 27, 51));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventStartTime_448);
          ComplexEventTimes_NoComplexEventTimes_448.insert(ComplexEventStartTime_448.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_448);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_449;
          FIX::ComplexEventEndTime ComplexEventEndTime_449(FIX::UTCTIMEONLY(7, 18, 20));
          noComplexEventTimes_0_1_2_3_2.set(ComplexEventEndTime_449);
          ComplexEventTimes_NoComplexEventTimes_449.insert(ComplexEventEndTime_449.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_449(FIX::UTCTIMEONLY(15, 3, 25));
          noComplexEventTimes_0_1_2_3_2.set(ComplexEventStartTime_449);
          ComplexEventTimes_NoComplexEventTimes_449.insert(ComplexEventStartTime_449.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_449);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_100;
      FIX::EventDate EventDate_100("LOCALMKTDATE_1455265202");
      noEvents_0_1_0.set(EventDate_100);
      EvntGrp_NoEvents_100.insert(EventDate_100.getString());
      FIX::EventPx EventPx_100;
      EventPx_100.setString("2737786");
      noEvents_0_1_0.set(EventPx_100);
      EvntGrp_NoEvents_100.insert(EventPx_100.getString());
      FIX::EventText EventText_100("STRING_1741254153");
      noEvents_0_1_0.set(EventText_100);
      EvntGrp_NoEvents_100.insert(EventText_100.getString());
      FIX::EventTime EventTime_100(FIX::UTCTIMESTAMP(6, 15, 1, 14, 8, 2006));
      noEvents_0_1_0.set(EventTime_100);
      EvntGrp_NoEvents_100.insert(EventTime_100.getString());
      FIX::EventType EventType_100(9);
      noEvents_0_1_0.set(EventType_100);
      EvntGrp_NoEvents_100.insert(EventType_100.getString());
      all_values.push_back(EvntGrp_NoEvents_100);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_101;
      FIX::EventDate EventDate_101("LOCALMKTDATE_558174327");
      noEvents_0_1_1.set(EventDate_101);
      EvntGrp_NoEvents_101.insert(EventDate_101.getString());
      FIX::EventPx EventPx_101;
      EventPx_101.setString("12866092");
      noEvents_0_1_1.set(EventPx_101);
      EvntGrp_NoEvents_101.insert(EventPx_101.getString());
      FIX::EventText EventText_101("STRING_636198968");
      noEvents_0_1_1.set(EventText_101);
      EvntGrp_NoEvents_101.insert(EventText_101.getString());
      FIX::EventTime EventTime_101(FIX::UTCTIMESTAMP(5, 21, 20, 9, 2, 2015));
      noEvents_0_1_1.set(EventTime_101);
      EvntGrp_NoEvents_101.insert(EventTime_101.getString());
      FIX::EventType EventType_101(1);
      noEvents_0_1_1.set(EventType_101);
      EvntGrp_NoEvents_101.insert(EventType_101.getString());
      all_values.push_back(EvntGrp_NoEvents_101);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_102;
      FIX::EventDate EventDate_102("LOCALMKTDATE_841356936");
      noEvents_0_1_2.set(EventDate_102);
      EvntGrp_NoEvents_102.insert(EventDate_102.getString());
      FIX::EventPx EventPx_102;
      EventPx_102.setString("12329029");
      noEvents_0_1_2.set(EventPx_102);
      EvntGrp_NoEvents_102.insert(EventPx_102.getString());
      FIX::EventText EventText_102("STRING_946149510");
      noEvents_0_1_2.set(EventText_102);
      EvntGrp_NoEvents_102.insert(EventText_102.getString());
      FIX::EventTime EventTime_102(FIX::UTCTIMESTAMP(7, 49, 59, 24, 11, 2017));
      noEvents_0_1_2.set(EventTime_102);
      EvntGrp_NoEvents_102.insert(EventTime_102.getString());
      FIX::EventType EventType_102(11);
      noEvents_0_1_2.set(EventType_102);
      EvntGrp_NoEvents_102.insert(EventType_102.getString());
      all_values.push_back(EvntGrp_NoEvents_102);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_106;
      FIX::InstrumentPartyID InstrumentPartyID_106("STRING_2056952750");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_106);
      InstrumentParties_NoInstrumentParties_106.insert(InstrumentPartyID_106.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_106('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_106);
      InstrumentParties_NoInstrumentParties_106.insert(InstrumentPartyIDSource_106.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_106(1573661450);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_106);
      InstrumentParties_NoInstrumentParties_106.insert(InstrumentPartyRole_106.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_106);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205;
        FIX::InstrumentPartySubID InstrumentPartySubID_205("STRING_1328438783");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_205);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205.insert(InstrumentPartySubID_205.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_205(651510350);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_205);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205.insert(InstrumentPartySubIDType_205.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206;
        FIX::InstrumentPartySubID InstrumentPartySubID_206("STRING_912440261");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_206);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206.insert(InstrumentPartySubID_206.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_206(468288364);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_206);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206.insert(InstrumentPartySubIDType_206.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_107;
      FIX::InstrumentPartyID InstrumentPartyID_107("STRING_1209684677");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_107);
      InstrumentParties_NoInstrumentParties_107.insert(InstrumentPartyID_107.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_107('5');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_107);
      InstrumentParties_NoInstrumentParties_107.insert(InstrumentPartyIDSource_107.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_107(1104487332);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_107);
      InstrumentParties_NoInstrumentParties_107.insert(InstrumentPartyRole_107.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_107);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207;
        FIX::InstrumentPartySubID InstrumentPartySubID_207("STRING_2038546072");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_207);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207.insert(InstrumentPartySubID_207.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_207(1206383014);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_207);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207.insert(InstrumentPartySubIDType_207.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_108;
      FIX::InstrumentPartyID InstrumentPartyID_108("STRING_2005128248");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_108);
      InstrumentParties_NoInstrumentParties_108.insert(InstrumentPartyID_108.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_108('6');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_108);
      InstrumentParties_NoInstrumentParties_108.insert(InstrumentPartyIDSource_108.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_108(783636195);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_108);
      InstrumentParties_NoInstrumentParties_108.insert(InstrumentPartyRole_108.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_108);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208;
        FIX::InstrumentPartySubID InstrumentPartySubID_208("STRING_1801707514");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_208);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208.insert(InstrumentPartySubID_208.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_208(1624993131);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_208);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208.insert(InstrumentPartySubIDType_208.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_96;
      FIX::SecurityAltID SecurityAltID_96("STRING_600373377");
      noSecurityAltID_0_1_0.set(SecurityAltID_96);
      SecAltIDGrp_NoSecurityAltID_96.insert(SecurityAltID_96.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_96("STRING_376212639");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_96);
      SecAltIDGrp_NoSecurityAltID_96.insert(SecurityAltIDSource_96.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_96);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_97;
      FIX::SecurityAltID SecurityAltID_97("STRING_624055044");
      noSecurityAltID_0_1_1.set(SecurityAltID_97);
      SecAltIDGrp_NoSecurityAltID_97.insert(SecurityAltID_97.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_97("STRING_715551646");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_97);
      SecAltIDGrp_NoSecurityAltID_97.insert(SecurityAltIDSource_97.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_97);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_106;
    FIX::SecurityXML SecurityXML_107("XMLDATA_1794679838");
    noRelatedSym_0_0.set(SecurityXML_107);
    FIX::SecurityXMLLen SecurityXMLLen_53(356317092);
    noRelatedSym_0_0.set(SecurityXMLLen_53);
    FIX::SecurityXMLSchema SecurityXMLSchema_53("STRING_1958855036");
    noRelatedSym_0_0.set(SecurityXMLSchema_53);
    SecurityXML_106.insert(SecurityXMLSchema_53.getString());
    all_values.push_back(SecurityXML_106);
    all_compo_names.insert("SecurityXML");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::News::NoRelatedSym noRelatedSym_0_1;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_54;
    FIX::AttachmentPoint AttachmentPoint_54;
    AttachmentPoint_54.setString("49.440000");
    noRelatedSym_0_1.set(AttachmentPoint_54);
    Instrument_54.insert(AttachmentPoint_54.getString());
    FIX::CFICode CFICode_54("STRING_362357783");
    noRelatedSym_0_1.set(CFICode_54);
    Instrument_54.insert(CFICode_54.getString());
    FIX::CPProgram CPProgram_54(99);
    noRelatedSym_0_1.set(CPProgram_54);
    Instrument_54.insert(CPProgram_54.getString());
    FIX::CPRegType CPRegType_54("STRING_282914046");
    noRelatedSym_0_1.set(CPRegType_54);
    Instrument_54.insert(CPRegType_54.getString());
    FIX::CapPrice CapPrice_54;
    CapPrice_54.setString("5439447");
    noRelatedSym_0_1.set(CapPrice_54);
    Instrument_54.insert(CapPrice_54.getString());
    FIX::ContractMultiplier ContractMultiplier_54;
    ContractMultiplier_54.setString("746230");
    noRelatedSym_0_1.set(ContractMultiplier_54);
    Instrument_54.insert(ContractMultiplier_54.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_54(2);
    noRelatedSym_0_1.set(ContractMultiplierUnit_54);
    Instrument_54.insert(ContractMultiplierUnit_54.getString());
    FIX::ContractSettlMonth ContractSettlMonth_54("MONTHYEAR_1872383559");
    noRelatedSym_0_1.set(ContractSettlMonth_54);
    Instrument_54.insert(ContractSettlMonth_54.getString());
    FIX::CountryOfIssue CountryOfIssue_54("COUNTRY_726133436");
    noRelatedSym_0_1.set(CountryOfIssue_54);
    Instrument_54.insert(CountryOfIssue_54.getString());
    FIX::CouponPaymentDate CouponPaymentDate_54("LOCALMKTDATE_9217223");
    noRelatedSym_0_1.set(CouponPaymentDate_54);
    Instrument_54.insert(CouponPaymentDate_54.getString());
    FIX::CouponRate CouponRate_54;
    CouponRate_54.setString("82.750000");
    noRelatedSym_0_1.set(CouponRate_54);
    Instrument_54.insert(CouponRate_54.getString());
    FIX::CreditRating CreditRating_54("STRING_1935818113");
    noRelatedSym_0_1.set(CreditRating_54);
    Instrument_54.insert(CreditRating_54.getString());
    FIX::DatedDate DatedDate_54("LOCALMKTDATE_60783082");
    noRelatedSym_0_1.set(DatedDate_54);
    Instrument_54.insert(DatedDate_54.getString());
    FIX::DetachmentPoint DetachmentPoint_54;
    DetachmentPoint_54.setString("56.080000");
    noRelatedSym_0_1.set(DetachmentPoint_54);
    Instrument_54.insert(DetachmentPoint_54.getString());
    FIX::EncodedIssuer EncodedIssuer_54("DATA_565536773");
    noRelatedSym_0_1.set(EncodedIssuer_54);
    Instrument_54.insert(EncodedIssuer_54.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_54(2099329155);
    noRelatedSym_0_1.set(EncodedIssuerLen_54);
    Instrument_54.insert(EncodedIssuerLen_54.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_54("DATA_356574974");
    noRelatedSym_0_1.set(EncodedSecurityDesc_54);
    Instrument_54.insert(EncodedSecurityDesc_54.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_54(423181373);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_54);
    Instrument_54.insert(EncodedSecurityDescLen_54.getString());
    FIX::ExerciseStyle ExerciseStyle_54(0);
    noRelatedSym_0_1.set(ExerciseStyle_54);
    Instrument_54.insert(ExerciseStyle_54.getString());
    FIX::Factor Factor_54;
    Factor_54.setString("11402111");
    noRelatedSym_0_1.set(Factor_54);
    Instrument_54.insert(Factor_54.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_54(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_54);
    Instrument_54.insert(FlexProductEligibilityIndicator_54.getString());
    FIX::FlexibleIndicator FlexibleIndicator_54(false);
    noRelatedSym_0_1.set(FlexibleIndicator_54);
    Instrument_54.insert(FlexibleIndicator_54.getString());
    FIX::FloorPrice FloorPrice_54;
    FloorPrice_54.setString("6177206");
    noRelatedSym_0_1.set(FloorPrice_54);
    Instrument_54.insert(FloorPrice_54.getString());
    FIX::FlowScheduleType FlowScheduleType_54(0);
    noRelatedSym_0_1.set(FlowScheduleType_54);
    Instrument_54.insert(FlowScheduleType_54.getString());
    FIX::InstrRegistry InstrRegistry_54("STRING_822537884");
    noRelatedSym_0_1.set(InstrRegistry_54);
    Instrument_54.insert(InstrRegistry_54.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_54('9');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_54);
    Instrument_54.insert(InstrmtAssignmentMethod_54.getString());
    FIX::InterestAccrualDate InterestAccrualDate_54("LOCALMKTDATE_1912244269");
    noRelatedSym_0_1.set(InterestAccrualDate_54);
    Instrument_54.insert(InterestAccrualDate_54.getString());
    FIX::IssueDate IssueDate_54("LOCALMKTDATE_1538089531");
    noRelatedSym_0_1.set(IssueDate_54);
    Instrument_54.insert(IssueDate_54.getString());
    FIX::Issuer Issuer_54("STRING_641129483");
    noRelatedSym_0_1.set(Issuer_54);
    Instrument_54.insert(Issuer_54.getString());
    FIX::ListMethod ListMethod_54(0);
    noRelatedSym_0_1.set(ListMethod_54);
    Instrument_54.insert(ListMethod_54.getString());
    FIX::LocaleOfIssue LocaleOfIssue_54("STRING_1349460919");
    noRelatedSym_0_1.set(LocaleOfIssue_54);
    Instrument_54.insert(LocaleOfIssue_54.getString());
    FIX::MaturityDate MaturityDate_54("LOCALMKTDATE_1014574427");
    noRelatedSym_0_1.set(MaturityDate_54);
    Instrument_54.insert(MaturityDate_54.getString());
    FIX::MaturityMonthYear MaturityMonthYear_54("MONTHYEAR_483435497");
    noRelatedSym_0_1.set(MaturityMonthYear_54);
    Instrument_54.insert(MaturityMonthYear_54.getString());
    FIX::MaturityTime MaturityTime_54("TZTIMEONLY_1997906203");
    noRelatedSym_0_1.set(MaturityTime_54);
    Instrument_54.insert(MaturityTime_54.getString());
    FIX::MinPriceIncrement MinPriceIncrement_54;
    MinPriceIncrement_54.setString("12974884");
    noRelatedSym_0_1.set(MinPriceIncrement_54);
    Instrument_54.insert(MinPriceIncrement_54.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_54;
    MinPriceIncrementAmount_54.setString("10273802");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_54);
    Instrument_54.insert(MinPriceIncrementAmount_54.getString());
    FIX::NTPositionLimit NTPositionLimit_54(2072529289);
    noRelatedSym_0_1.set(NTPositionLimit_54);
    Instrument_54.insert(NTPositionLimit_54.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_54;
    NotionalPercentageOutstanding_54.setString("54.350000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_54);
    Instrument_54.insert(NotionalPercentageOutstanding_54.getString());
    FIX::OptAttribute OptAttribute_54('7');
    noRelatedSym_0_1.set(OptAttribute_54);
    Instrument_54.insert(OptAttribute_54.getString());
    FIX::OptPayoutAmount OptPayoutAmount_54;
    OptPayoutAmount_54.setString("6511790");
    noRelatedSym_0_1.set(OptPayoutAmount_54);
    Instrument_54.insert(OptPayoutAmount_54.getString());
    FIX::OptPayoutType OptPayoutType_54(3);
    noRelatedSym_0_1.set(OptPayoutType_54);
    Instrument_54.insert(OptPayoutType_54.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_54;
    OriginalNotionalPercentageOutstanding_54.setString("84.600000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_54);
    Instrument_54.insert(OriginalNotionalPercentageOutstanding_54.getString());
    FIX::Pool Pool_54("STRING_439513542");
    noRelatedSym_0_1.set(Pool_54);
    Instrument_54.insert(Pool_54.getString());
    FIX::PositionLimit PositionLimit_54(464265741);
    noRelatedSym_0_1.set(PositionLimit_54);
    Instrument_54.insert(PositionLimit_54.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_54("STRING_STD");
    noRelatedSym_0_1.set(PriceQuoteMethod_54);
    Instrument_54.insert(PriceQuoteMethod_54.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_54("STRING_1005050316");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_54);
    Instrument_54.insert(PriceUnitOfMeasure_54.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_54;
    PriceUnitOfMeasureQty_54.setString("4161112");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_54);
    Instrument_54.insert(PriceUnitOfMeasureQty_54.getString());
    FIX::Product Product_56(1);
    noRelatedSym_0_1.set(Product_56);
    Instrument_54.insert(Product_56.getString());
    FIX::ProductComplex ProductComplex_54("STRING_1428231689");
    noRelatedSym_0_1.set(ProductComplex_54);
    Instrument_54.insert(ProductComplex_54.getString());
    FIX::PutOrCall PutOrCall_54(1);
    noRelatedSym_0_1.set(PutOrCall_54);
    Instrument_54.insert(PutOrCall_54.getString());
    FIX::RedemptionDate RedemptionDate_54("LOCALMKTDATE_1592446563");
    noRelatedSym_0_1.set(RedemptionDate_54);
    Instrument_54.insert(RedemptionDate_54.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_54("STRING_593723694");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_54);
    Instrument_54.insert(RepoCollateralSecurityType_54.getString());
    FIX::RepurchaseRate RepurchaseRate_54;
    RepurchaseRate_54.setString("63.970000");
    noRelatedSym_0_1.set(RepurchaseRate_54);
    Instrument_54.insert(RepurchaseRate_54.getString());
    FIX::RepurchaseTerm RepurchaseTerm_54(62683568);
    noRelatedSym_0_1.set(RepurchaseTerm_54);
    Instrument_54.insert(RepurchaseTerm_54.getString());
    FIX::RestructuringType RestructuringType_54("STRING_XR");
    noRelatedSym_0_1.set(RestructuringType_54);
    Instrument_54.insert(RestructuringType_54.getString());
    FIX::SecurityDesc SecurityDesc_54("STRING_2028754281");
    noRelatedSym_0_1.set(SecurityDesc_54);
    Instrument_54.insert(SecurityDesc_54.getString());
    FIX::SecurityExchange SecurityExchange_54("EXCHANGE_1056616861");
    noRelatedSym_0_1.set(SecurityExchange_54);
    Instrument_54.insert(SecurityExchange_54.getString());
    FIX::SecurityGroup SecurityGroup_54("STRING_1646673541");
    noRelatedSym_0_1.set(SecurityGroup_54);
    Instrument_54.insert(SecurityGroup_54.getString());
    FIX::SecurityID SecurityID_54("STRING_1419360164");
    noRelatedSym_0_1.set(SecurityID_54);
    Instrument_54.insert(SecurityID_54.getString());
    FIX::SecurityIDSource SecurityIDSource_54("STRING_9");
    noRelatedSym_0_1.set(SecurityIDSource_54);
    Instrument_54.insert(SecurityIDSource_54.getString());
    FIX::SecurityStatus SecurityStatus_54("STRING_2");
    noRelatedSym_0_1.set(SecurityStatus_54);
    Instrument_54.insert(SecurityStatus_54.getString());
    FIX::SecuritySubType SecuritySubType_55("STRING_621337436");
    noRelatedSym_0_1.set(SecuritySubType_55);
    Instrument_54.insert(SecuritySubType_55.getString());
    FIX::SecurityType SecurityType_56("STRING_CAN");
    noRelatedSym_0_1.set(SecurityType_56);
    Instrument_54.insert(SecurityType_56.getString());
    FIX::Seniority Seniority_54("STRING_SR");
    noRelatedSym_0_1.set(Seniority_54);
    Instrument_54.insert(Seniority_54.getString());
    FIX::SettlMethod SettlMethod_54('P');
    noRelatedSym_0_1.set(SettlMethod_54);
    Instrument_54.insert(SettlMethod_54.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_54("STRING_1862325596");
    noRelatedSym_0_1.set(SettleOnOpenFlag_54);
    Instrument_54.insert(SettleOnOpenFlag_54.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_54("STRING_1131083377");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_54);
    Instrument_54.insert(StateOrProvinceOfIssue_54.getString());
    FIX::StrikeCurrency StrikeCurrency_54("USD");
    noRelatedSym_0_1.set(StrikeCurrency_54);
    Instrument_54.insert(StrikeCurrency_54.getString());
    FIX::StrikeMultiplier StrikeMultiplier_54;
    StrikeMultiplier_54.setString("18833635");
    noRelatedSym_0_1.set(StrikeMultiplier_54);
    Instrument_54.insert(StrikeMultiplier_54.getString());
    FIX::StrikePrice StrikePrice_54;
    StrikePrice_54.setString("10479847");
    noRelatedSym_0_1.set(StrikePrice_54);
    Instrument_54.insert(StrikePrice_54.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_54(4);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_54);
    Instrument_54.insert(StrikePriceBoundaryMethod_54.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_54;
    StrikePriceBoundaryPrecision_54.setString("83.730000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_54);
    Instrument_54.insert(StrikePriceBoundaryPrecision_54.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_54(4);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_54);
    Instrument_54.insert(StrikePriceDeterminationMethod_54.getString());
    FIX::StrikeValue StrikeValue_54;
    StrikeValue_54.setString("9768557");
    noRelatedSym_0_1.set(StrikeValue_54);
    Instrument_54.insert(StrikeValue_54.getString());
    FIX::Symbol Symbol_54("STRING_777008793");
    noRelatedSym_0_1.set(Symbol_54);
    Instrument_54.insert(Symbol_54.getString());
    FIX::SymbolSfx SymbolSfx_54("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_54);
    Instrument_54.insert(SymbolSfx_54.getString());
    FIX::TimeUnit TimeUnit_54("STRING_D");
    noRelatedSym_0_1.set(TimeUnit_54);
    Instrument_54.insert(TimeUnit_54.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_54(4);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_54);
    Instrument_54.insert(UnderlyingPriceDeterminationMethod_54.getString());
    FIX::UnitOfMeasure UnitOfMeasure_54("STRING_lbs");
    noRelatedSym_0_1.set(UnitOfMeasure_54);
    Instrument_54.insert(UnitOfMeasure_54.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_54;
    UnitOfMeasureQty_54.setString("2295352");
    noRelatedSym_0_1.set(UnitOfMeasureQty_54);
    Instrument_54.insert(UnitOfMeasureQty_54.getString());
    FIX::ValuationMethod ValuationMethod_54("STRING_CDS");
    noRelatedSym_0_1.set(ValuationMethod_54);
    Instrument_54.insert(ValuationMethod_54.getString());
    all_values.push_back(Instrument_54);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_109;
      FIX::ComplexEventCondition ComplexEventCondition_109(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_109);
      ComplexEvents_NoComplexEvents_109.insert(ComplexEventCondition_109.getString());
      FIX::ComplexEventPrice ComplexEventPrice_109;
      ComplexEventPrice_109.setString("7368906");
      noComplexEvents_1_1_0.set(ComplexEventPrice_109);
      ComplexEvents_NoComplexEvents_109.insert(ComplexEventPrice_109.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_109(5);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_109);
      ComplexEvents_NoComplexEvents_109.insert(ComplexEventPriceBoundaryMethod_109.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_109;
      ComplexEventPriceBoundaryPrecision_109.setString("23.050000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_109);
      ComplexEvents_NoComplexEvents_109.insert(ComplexEventPriceBoundaryPrecision_109.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_109(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_109);
      ComplexEvents_NoComplexEvents_109.insert(ComplexEventPriceTimeType_109.getString());
      FIX::ComplexEventType ComplexEventType_109(7);
      noComplexEvents_1_1_0.set(ComplexEventType_109);
      ComplexEvents_NoComplexEvents_109.insert(ComplexEventType_109.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_109;
      ComplexOptPayoutAmount_109.setString("5888988");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_109);
      ComplexEvents_NoComplexEvents_109.insert(ComplexOptPayoutAmount_109.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_109);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_222;
        FIX::ComplexEventEndDate ComplexEventEndDate_222(FIX::UTCTIMESTAMP(17, 31, 18, 16, 9, 2011));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_222);
        ComplexEventDates_NoComplexEventDates_222.insert(ComplexEventEndDate_222.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_222(FIX::UTCTIMESTAMP(20, 21, 41, 3, 11, 2011));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_222);
        ComplexEventDates_NoComplexEventDates_222.insert(ComplexEventStartDate_222.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_222);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_450;
          FIX::ComplexEventEndTime ComplexEventEndTime_450(FIX::UTCTIMEONLY(16, 48, 7));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_450);
          ComplexEventTimes_NoComplexEventTimes_450.insert(ComplexEventEndTime_450.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_450(FIX::UTCTIMEONLY(19, 10, 40));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_450);
          ComplexEventTimes_NoComplexEventTimes_450.insert(ComplexEventStartTime_450.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_450);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_451;
          FIX::ComplexEventEndTime ComplexEventEndTime_451(FIX::UTCTIMEONLY(22, 7, 51));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_451);
          ComplexEventTimes_NoComplexEventTimes_451.insert(ComplexEventEndTime_451.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_451(FIX::UTCTIMEONLY(10, 13, 47));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_451);
          ComplexEventTimes_NoComplexEventTimes_451.insert(ComplexEventStartTime_451.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_451);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_223;
        FIX::ComplexEventEndDate ComplexEventEndDate_223(FIX::UTCTIMESTAMP(10, 10, 51, 15, 11, 2015));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_223);
        ComplexEventDates_NoComplexEventDates_223.insert(ComplexEventEndDate_223.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_223(FIX::UTCTIMESTAMP(6, 0, 37, 17, 11, 2006));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_223);
        ComplexEventDates_NoComplexEventDates_223.insert(ComplexEventStartDate_223.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_223);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_452;
          FIX::ComplexEventEndTime ComplexEventEndTime_452(FIX::UTCTIMEONLY(2, 29, 42));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_452);
          ComplexEventTimes_NoComplexEventTimes_452.insert(ComplexEventEndTime_452.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_452(FIX::UTCTIMEONLY(0, 44, 44));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_452);
          ComplexEventTimes_NoComplexEventTimes_452.insert(ComplexEventStartTime_452.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_452);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_453;
          FIX::ComplexEventEndTime ComplexEventEndTime_453(FIX::UTCTIMEONLY(10, 51, 2));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_453);
          ComplexEventTimes_NoComplexEventTimes_453.insert(ComplexEventEndTime_453.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_453(FIX::UTCTIMEONLY(6, 7, 4));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_453);
          ComplexEventTimes_NoComplexEventTimes_453.insert(ComplexEventStartTime_453.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_453);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_454;
          FIX::ComplexEventEndTime ComplexEventEndTime_454(FIX::UTCTIMEONLY(18, 14, 42));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventEndTime_454);
          ComplexEventTimes_NoComplexEventTimes_454.insert(ComplexEventEndTime_454.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_454(FIX::UTCTIMEONLY(13, 21, 28));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventStartTime_454);
          ComplexEventTimes_NoComplexEventTimes_454.insert(ComplexEventStartTime_454.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_454);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_103;
      FIX::EventDate EventDate_103("LOCALMKTDATE_1863757941");
      noEvents_1_1_0.set(EventDate_103);
      EvntGrp_NoEvents_103.insert(EventDate_103.getString());
      FIX::EventPx EventPx_103;
      EventPx_103.setString("6668033");
      noEvents_1_1_0.set(EventPx_103);
      EvntGrp_NoEvents_103.insert(EventPx_103.getString());
      FIX::EventText EventText_103("STRING_712674153");
      noEvents_1_1_0.set(EventText_103);
      EvntGrp_NoEvents_103.insert(EventText_103.getString());
      FIX::EventTime EventTime_103(FIX::UTCTIMESTAMP(19, 14, 22, 18, 12, 2002));
      noEvents_1_1_0.set(EventTime_103);
      EvntGrp_NoEvents_103.insert(EventTime_103.getString());
      FIX::EventType EventType_103(15);
      noEvents_1_1_0.set(EventType_103);
      EvntGrp_NoEvents_103.insert(EventType_103.getString());
      all_values.push_back(EvntGrp_NoEvents_103);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_104;
      FIX::EventDate EventDate_104("LOCALMKTDATE_103129180");
      noEvents_1_1_1.set(EventDate_104);
      EvntGrp_NoEvents_104.insert(EventDate_104.getString());
      FIX::EventPx EventPx_104;
      EventPx_104.setString("14835281");
      noEvents_1_1_1.set(EventPx_104);
      EvntGrp_NoEvents_104.insert(EventPx_104.getString());
      FIX::EventText EventText_104("STRING_1443861478");
      noEvents_1_1_1.set(EventText_104);
      EvntGrp_NoEvents_104.insert(EventText_104.getString());
      FIX::EventTime EventTime_104(FIX::UTCTIMESTAMP(3, 42, 53, 0, 1, 2007));
      noEvents_1_1_1.set(EventTime_104);
      EvntGrp_NoEvents_104.insert(EventTime_104.getString());
      FIX::EventType EventType_104(13);
      noEvents_1_1_1.set(EventType_104);
      EvntGrp_NoEvents_104.insert(EventType_104.getString());
      all_values.push_back(EvntGrp_NoEvents_104);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_105;
      FIX::EventDate EventDate_105("LOCALMKTDATE_27243883");
      noEvents_1_1_2.set(EventDate_105);
      EvntGrp_NoEvents_105.insert(EventDate_105.getString());
      FIX::EventPx EventPx_105;
      EventPx_105.setString("11338651");
      noEvents_1_1_2.set(EventPx_105);
      EvntGrp_NoEvents_105.insert(EventPx_105.getString());
      FIX::EventText EventText_105("STRING_1253747527");
      noEvents_1_1_2.set(EventText_105);
      EvntGrp_NoEvents_105.insert(EventText_105.getString());
      FIX::EventTime EventTime_105(FIX::UTCTIMESTAMP(20, 36, 47, 12, 12, 2000));
      noEvents_1_1_2.set(EventTime_105);
      EvntGrp_NoEvents_105.insert(EventTime_105.getString());
      FIX::EventType EventType_105(15);
      noEvents_1_1_2.set(EventType_105);
      EvntGrp_NoEvents_105.insert(EventType_105.getString());
      all_values.push_back(EvntGrp_NoEvents_105);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_109;
      FIX::InstrumentPartyID InstrumentPartyID_109("STRING_474978400");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_109);
      InstrumentParties_NoInstrumentParties_109.insert(InstrumentPartyID_109.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_109('4');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_109);
      InstrumentParties_NoInstrumentParties_109.insert(InstrumentPartyIDSource_109.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_109(1466776310);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_109);
      InstrumentParties_NoInstrumentParties_109.insert(InstrumentPartyRole_109.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_109);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209;
        FIX::InstrumentPartySubID InstrumentPartySubID_209("STRING_627068935");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_209);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209.insert(InstrumentPartySubID_209.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_209(2015889266);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_209);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209.insert(InstrumentPartySubIDType_209.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210;
        FIX::InstrumentPartySubID InstrumentPartySubID_210("STRING_1224784011");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_210);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210.insert(InstrumentPartySubID_210.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_210(1183173489);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_210);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210.insert(InstrumentPartySubIDType_210.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_110;
      FIX::InstrumentPartyID InstrumentPartyID_110("STRING_2119018446");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_110);
      InstrumentParties_NoInstrumentParties_110.insert(InstrumentPartyID_110.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_110('5');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_110);
      InstrumentParties_NoInstrumentParties_110.insert(InstrumentPartyIDSource_110.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_110(479551320);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_110);
      InstrumentParties_NoInstrumentParties_110.insert(InstrumentPartyRole_110.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_110);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211;
        FIX::InstrumentPartySubID InstrumentPartySubID_211("STRING_187421816");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_211);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211.insert(InstrumentPartySubID_211.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_211(1127384082);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_211);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211.insert(InstrumentPartySubIDType_211.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_111;
      FIX::InstrumentPartyID InstrumentPartyID_111("STRING_1655569970");
      noInstrumentParties_1_1_2.set(InstrumentPartyID_111);
      InstrumentParties_NoInstrumentParties_111.insert(InstrumentPartyID_111.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_111('1');
      noInstrumentParties_1_1_2.set(InstrumentPartyIDSource_111);
      InstrumentParties_NoInstrumentParties_111.insert(InstrumentPartyIDSource_111.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_111(896041954);
      noInstrumentParties_1_1_2.set(InstrumentPartyRole_111);
      InstrumentParties_NoInstrumentParties_111.insert(InstrumentPartyRole_111.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_111);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212;
        FIX::InstrumentPartySubID InstrumentPartySubID_212("STRING_1778891085");
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubID_212);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212.insert(InstrumentPartySubID_212.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_212(923285837);
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubIDType_212);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212.insert(InstrumentPartySubIDType_212.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_98;
      FIX::SecurityAltID SecurityAltID_98("STRING_885154964");
      noSecurityAltID_1_1_0.set(SecurityAltID_98);
      SecAltIDGrp_NoSecurityAltID_98.insert(SecurityAltID_98.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_98("STRING_1524003162");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_98);
      SecAltIDGrp_NoSecurityAltID_98.insert(SecurityAltIDSource_98.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_98);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_99;
      FIX::SecurityAltID SecurityAltID_99("STRING_1103190010");
      noSecurityAltID_1_1_1.set(SecurityAltID_99);
      SecAltIDGrp_NoSecurityAltID_99.insert(SecurityAltID_99.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_99("STRING_1286873600");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_99);
      SecAltIDGrp_NoSecurityAltID_99.insert(SecurityAltIDSource_99.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_99);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_100;
      FIX::SecurityAltID SecurityAltID_100("STRING_1173807621");
      noSecurityAltID_1_1_2.set(SecurityAltID_100);
      SecAltIDGrp_NoSecurityAltID_100.insert(SecurityAltID_100.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_100("STRING_795125607");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_100);
      SecAltIDGrp_NoSecurityAltID_100.insert(SecurityAltIDSource_100.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_100);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_108;
    FIX::SecurityXML SecurityXML_109("XMLDATA_496341503");
    noRelatedSym_0_1.set(SecurityXML_109);
    FIX::SecurityXMLLen SecurityXMLLen_54(539886374);
    noRelatedSym_0_1.set(SecurityXMLLen_54);
    FIX::SecurityXMLSchema SecurityXMLSchema_54("STRING_1153864541");
    noRelatedSym_0_1.set(SecurityXMLSchema_54);
    SecurityXML_108.insert(SecurityXMLSchema_54.getString());
    all_values.push_back(SecurityXML_108);
    all_compo_names.insert("SecurityXML");

    msg.addGroup(noRelatedSym_0_1);
  }
  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::News::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_92;
    FIX::EncodedLegIssuer EncodedLegIssuer_92("DATA_1014864774");
    noLegs_0_0.set(EncodedLegIssuer_92);
    InstrumentLeg_92.insert(EncodedLegIssuer_92.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_92(1602853766);
    noLegs_0_0.set(EncodedLegIssuerLen_92);
    InstrumentLeg_92.insert(EncodedLegIssuerLen_92.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_92("DATA_1885259870");
    noLegs_0_0.set(EncodedLegSecurityDesc_92);
    InstrumentLeg_92.insert(EncodedLegSecurityDesc_92.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_92(1198847869);
    noLegs_0_0.set(EncodedLegSecurityDescLen_92);
    InstrumentLeg_92.insert(EncodedLegSecurityDescLen_92.getString());
    FIX::LegCFICode LegCFICode_92("STRING_82439054");
    noLegs_0_0.set(LegCFICode_92);
    InstrumentLeg_92.insert(LegCFICode_92.getString());
    FIX::LegContractMultiplier LegContractMultiplier_92;
    LegContractMultiplier_92.setString("17536654");
    noLegs_0_0.set(LegContractMultiplier_92);
    InstrumentLeg_92.insert(LegContractMultiplier_92.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_92(276148233);
    noLegs_0_0.set(LegContractMultiplierUnit_92);
    InstrumentLeg_92.insert(LegContractMultiplierUnit_92.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_92("MONTHYEAR_1265612543");
    noLegs_0_0.set(LegContractSettlMonth_92);
    InstrumentLeg_92.insert(LegContractSettlMonth_92.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_92("COUNTRY_1725200286");
    noLegs_0_0.set(LegCountryOfIssue_92);
    InstrumentLeg_92.insert(LegCountryOfIssue_92.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_92("LOCALMKTDATE_836976717");
    noLegs_0_0.set(LegCouponPaymentDate_92);
    InstrumentLeg_92.insert(LegCouponPaymentDate_92.getString());
    FIX::LegCouponRate LegCouponRate_92;
    LegCouponRate_92.setString("38.630000");
    noLegs_0_0.set(LegCouponRate_92);
    InstrumentLeg_92.insert(LegCouponRate_92.getString());
    FIX::LegCreditRating LegCreditRating_92("STRING_1191686035");
    noLegs_0_0.set(LegCreditRating_92);
    InstrumentLeg_92.insert(LegCreditRating_92.getString());
    FIX::LegCurrency LegCurrency_92("CHF");
    noLegs_0_0.set(LegCurrency_92);
    InstrumentLeg_92.insert(LegCurrency_92.getString());
    FIX::LegDatedDate LegDatedDate_92("LOCALMKTDATE_699772358");
    noLegs_0_0.set(LegDatedDate_92);
    InstrumentLeg_92.insert(LegDatedDate_92.getString());
    FIX::LegExerciseStyle LegExerciseStyle_92(622808078);
    noLegs_0_0.set(LegExerciseStyle_92);
    InstrumentLeg_92.insert(LegExerciseStyle_92.getString());
    FIX::LegFactor LegFactor_92;
    LegFactor_92.setString("16211062");
    noLegs_0_0.set(LegFactor_92);
    InstrumentLeg_92.insert(LegFactor_92.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_92(392351901);
    noLegs_0_0.set(LegFlowScheduleType_92);
    InstrumentLeg_92.insert(LegFlowScheduleType_92.getString());
    FIX::LegInstrRegistry LegInstrRegistry_92("STRING_254215515");
    noLegs_0_0.set(LegInstrRegistry_92);
    InstrumentLeg_92.insert(LegInstrRegistry_92.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_92("LOCALMKTDATE_396908440");
    noLegs_0_0.set(LegInterestAccrualDate_92);
    InstrumentLeg_92.insert(LegInterestAccrualDate_92.getString());
    FIX::LegIssueDate LegIssueDate_92("LOCALMKTDATE_1218796596");
    noLegs_0_0.set(LegIssueDate_92);
    InstrumentLeg_92.insert(LegIssueDate_92.getString());
    FIX::LegIssuer LegIssuer_92("STRING_1139370479");
    noLegs_0_0.set(LegIssuer_92);
    InstrumentLeg_92.insert(LegIssuer_92.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_92("STRING_1920911603");
    noLegs_0_0.set(LegLocaleOfIssue_92);
    InstrumentLeg_92.insert(LegLocaleOfIssue_92.getString());
    FIX::LegMaturityDate LegMaturityDate_92("LOCALMKTDATE_174502958");
    noLegs_0_0.set(LegMaturityDate_92);
    InstrumentLeg_92.insert(LegMaturityDate_92.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_92("MONTHYEAR_278760431");
    noLegs_0_0.set(LegMaturityMonthYear_92);
    InstrumentLeg_92.insert(LegMaturityMonthYear_92.getString());
    FIX::LegMaturityTime LegMaturityTime_92("TZTIMEONLY_947235576");
    noLegs_0_0.set(LegMaturityTime_92);
    InstrumentLeg_92.insert(LegMaturityTime_92.getString());
    FIX::LegOptAttribute LegOptAttribute_92('9');
    noLegs_0_0.set(LegOptAttribute_92);
    InstrumentLeg_92.insert(LegOptAttribute_92.getString());
    FIX::LegOptionRatio LegOptionRatio_92;
    LegOptionRatio_92.setString("7751019");
    noLegs_0_0.set(LegOptionRatio_92);
    InstrumentLeg_92.insert(LegOptionRatio_92.getString());
    FIX::LegPool LegPool_92("STRING_1487121950");
    noLegs_0_0.set(LegPool_92);
    InstrumentLeg_92.insert(LegPool_92.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_92("STRING_2123493106");
    noLegs_0_0.set(LegPriceUnitOfMeasure_92);
    InstrumentLeg_92.insert(LegPriceUnitOfMeasure_92.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_92;
    LegPriceUnitOfMeasureQty_92.setString("11935854");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_92);
    InstrumentLeg_92.insert(LegPriceUnitOfMeasureQty_92.getString());
    FIX::LegProduct LegProduct_92(354503077);
    noLegs_0_0.set(LegProduct_92);
    InstrumentLeg_92.insert(LegProduct_92.getString());
    FIX::LegPutOrCall LegPutOrCall_92(1578863225);
    noLegs_0_0.set(LegPutOrCall_92);
    InstrumentLeg_92.insert(LegPutOrCall_92.getString());
    FIX::LegRatioQty LegRatioQty_92;
    LegRatioQty_92.setString("9313617");
    noLegs_0_0.set(LegRatioQty_92);
    InstrumentLeg_92.insert(LegRatioQty_92.getString());
    FIX::LegRedemptionDate LegRedemptionDate_92("LOCALMKTDATE_1553350946");
    noLegs_0_0.set(LegRedemptionDate_92);
    InstrumentLeg_92.insert(LegRedemptionDate_92.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_92("STRING_1661302279");
    noLegs_0_0.set(LegRepoCollateralSecurityType_92);
    InstrumentLeg_92.insert(LegRepoCollateralSecurityType_92.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_92;
    LegRepurchaseRate_92.setString("35.570000");
    noLegs_0_0.set(LegRepurchaseRate_92);
    InstrumentLeg_92.insert(LegRepurchaseRate_92.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_92(1829499179);
    noLegs_0_0.set(LegRepurchaseTerm_92);
    InstrumentLeg_92.insert(LegRepurchaseTerm_92.getString());
    FIX::LegSecurityDesc LegSecurityDesc_92("STRING_779431174");
    noLegs_0_0.set(LegSecurityDesc_92);
    InstrumentLeg_92.insert(LegSecurityDesc_92.getString());
    FIX::LegSecurityExchange LegSecurityExchange_92("EXCHANGE_115260196");
    noLegs_0_0.set(LegSecurityExchange_92);
    InstrumentLeg_92.insert(LegSecurityExchange_92.getString());
    FIX::LegSecurityID LegSecurityID_92("STRING_518992249");
    noLegs_0_0.set(LegSecurityID_92);
    InstrumentLeg_92.insert(LegSecurityID_92.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_92("STRING_377111390");
    noLegs_0_0.set(LegSecurityIDSource_92);
    InstrumentLeg_92.insert(LegSecurityIDSource_92.getString());
    FIX::LegSecuritySubType LegSecuritySubType_92("STRING_1306946231");
    noLegs_0_0.set(LegSecuritySubType_92);
    InstrumentLeg_92.insert(LegSecuritySubType_92.getString());
    FIX::LegSecurityType LegSecurityType_92("STRING_1543390782");
    noLegs_0_0.set(LegSecurityType_92);
    InstrumentLeg_92.insert(LegSecurityType_92.getString());
    FIX::LegSide LegSide_92('1');
    noLegs_0_0.set(LegSide_92);
    InstrumentLeg_92.insert(LegSide_92.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_92("STRING_2006718589");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_92);
    InstrumentLeg_92.insert(LegStateOrProvinceOfIssue_92.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_92("CAN");
    noLegs_0_0.set(LegStrikeCurrency_92);
    InstrumentLeg_92.insert(LegStrikeCurrency_92.getString());
    FIX::LegStrikePrice LegStrikePrice_92;
    LegStrikePrice_92.setString("2515868");
    noLegs_0_0.set(LegStrikePrice_92);
    InstrumentLeg_92.insert(LegStrikePrice_92.getString());
    FIX::LegSymbol LegSymbol_92("STRING_272930727");
    noLegs_0_0.set(LegSymbol_92);
    InstrumentLeg_92.insert(LegSymbol_92.getString());
    FIX::LegSymbolSfx LegSymbolSfx_92("STRING_972706731");
    noLegs_0_0.set(LegSymbolSfx_92);
    InstrumentLeg_92.insert(LegSymbolSfx_92.getString());
    FIX::LegTimeUnit LegTimeUnit_92("STRING_1470383439");
    noLegs_0_0.set(LegTimeUnit_92);
    InstrumentLeg_92.insert(LegTimeUnit_92.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_92("STRING_1412301206");
    noLegs_0_0.set(LegUnitOfMeasure_92);
    InstrumentLeg_92.insert(LegUnitOfMeasure_92.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_92;
    LegUnitOfMeasureQty_92.setString("7461346");
    noLegs_0_0.set(LegUnitOfMeasureQty_92);
    InstrumentLeg_92.insert(LegUnitOfMeasureQty_92.getString());
    all_values.push_back(InstrumentLeg_92);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_187;
      FIX::LegSecurityAltID LegSecurityAltID_187("STRING_1691061637");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_187);
      LegSecAltIDGrp_NoLegSecurityAltID_187.insert(LegSecurityAltID_187.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_187("STRING_1693370263");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_187);
      LegSecAltIDGrp_NoLegSecurityAltID_187.insert(LegSecurityAltIDSource_187.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_187);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_188;
      FIX::LegSecurityAltID LegSecurityAltID_188("STRING_467031315");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_188);
      LegSecAltIDGrp_NoLegSecurityAltID_188.insert(LegSecurityAltID_188.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_188("STRING_318679924");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_188);
      LegSecAltIDGrp_NoLegSecurityAltID_188.insert(LegSecurityAltIDSource_188.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_188);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_189;
      FIX::LegSecurityAltID LegSecurityAltID_189("STRING_1033008565");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_189);
      LegSecAltIDGrp_NoLegSecurityAltID_189.insert(LegSecurityAltID_189.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_189("STRING_443040773");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_189);
      LegSecAltIDGrp_NoLegSecurityAltID_189.insert(LegSecurityAltIDSource_189.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_189);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // LinesOfTextGrp
  // Group LinesOfTextGrp.NoLinesOfText
  {
    FIX50SP2::News::NoLinesOfText noLinesOfText_0_0;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_2;
    FIX::EncodedText EncodedText_62("DATA_1387511642");
    noLinesOfText_0_0.set(EncodedText_62);
    LinesOfTextGrp_NoLinesOfText_2.insert(EncodedText_62.getString());
    FIX::EncodedTextLen EncodedTextLen_62(2021903998);
    noLinesOfText_0_0.set(EncodedTextLen_62);
    LinesOfTextGrp_NoLinesOfText_2.insert(EncodedTextLen_62.getString());
    FIX::Text Text_62("STRING_296143487");
    noLinesOfText_0_0.set(Text_62);
    LinesOfTextGrp_NoLinesOfText_2.insert(Text_62.getString());
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_2);
    all_compo_names.insert("LinesOfTextGrp.NoLinesOfText");

    msg.addGroup(noLinesOfText_0_0);
  }
  {
    FIX50SP2::News::NoLinesOfText noLinesOfText_0_1;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_3;
    FIX::EncodedText EncodedText_63("DATA_793378941");
    noLinesOfText_0_1.set(EncodedText_63);
    LinesOfTextGrp_NoLinesOfText_3.insert(EncodedText_63.getString());
    FIX::EncodedTextLen EncodedTextLen_63(1535722629);
    noLinesOfText_0_1.set(EncodedTextLen_63);
    LinesOfTextGrp_NoLinesOfText_3.insert(EncodedTextLen_63.getString());
    FIX::Text Text_63("STRING_833687045");
    noLinesOfText_0_1.set(Text_63);
    LinesOfTextGrp_NoLinesOfText_3.insert(Text_63.getString());
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_3);
    all_compo_names.insert("LinesOfTextGrp.NoLinesOfText");

    msg.addGroup(noLinesOfText_0_1);
  }
  {
    FIX50SP2::News::NoLinesOfText noLinesOfText_0_2;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_4;
    FIX::EncodedText EncodedText_64("DATA_475394472");
    noLinesOfText_0_2.set(EncodedText_64);
    LinesOfTextGrp_NoLinesOfText_4.insert(EncodedText_64.getString());
    FIX::EncodedTextLen EncodedTextLen_64(167670156);
    noLinesOfText_0_2.set(EncodedTextLen_64);
    LinesOfTextGrp_NoLinesOfText_4.insert(EncodedTextLen_64.getString());
    FIX::Text Text_64("STRING_948947241");
    noLinesOfText_0_2.set(Text_64);
    LinesOfTextGrp_NoLinesOfText_4.insert(Text_64.getString());
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_4);
    all_compo_names.insert("LinesOfTextGrp.NoLinesOfText");

    msg.addGroup(noLinesOfText_0_2);
  }
  // NewsRefGrp
  // Group NewsRefGrp.NoNewsRefIDs
  {
    FIX50SP2::News::NoNewsRefIDs noNewsRefIDs_0_0;
    // NewsRefGrp.NoNewsRefIDs
    multiset<string> NewsRefGrp_NoNewsRefIDs_0;
    FIX::NewsRefID NewsRefID_0("STRING_544781546");
    noNewsRefIDs_0_0.set(NewsRefID_0);
    NewsRefGrp_NoNewsRefIDs_0.insert(NewsRefID_0.getString());
    FIX::NewsRefType NewsRefType_0(0);
    noNewsRefIDs_0_0.set(NewsRefType_0);
    NewsRefGrp_NoNewsRefIDs_0.insert(NewsRefType_0.getString());
    all_values.push_back(NewsRefGrp_NoNewsRefIDs_0);
    all_compo_names.insert("NewsRefGrp.NoNewsRefIDs");

    msg.addGroup(noNewsRefIDs_0_0);
  }
  {
    FIX50SP2::News::NoNewsRefIDs noNewsRefIDs_0_1;
    // NewsRefGrp.NoNewsRefIDs
    multiset<string> NewsRefGrp_NoNewsRefIDs_1;
    FIX::NewsRefID NewsRefID_1("STRING_390293856");
    noNewsRefIDs_0_1.set(NewsRefID_1);
    NewsRefGrp_NoNewsRefIDs_1.insert(NewsRefID_1.getString());
    FIX::NewsRefType NewsRefType_1(1);
    noNewsRefIDs_0_1.set(NewsRefType_1);
    NewsRefGrp_NoNewsRefIDs_1.insert(NewsRefType_1.getString());
    all_values.push_back(NewsRefGrp_NoNewsRefIDs_1);
    all_compo_names.insert("NewsRefGrp.NoNewsRefIDs");

    msg.addGroup(noNewsRefIDs_0_1);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_6;
    FIX::RoutingID RoutingID_6("STRING_409009068");
    noRoutingIDs_0_0.set(RoutingID_6);
    RoutingGrp_NoRoutingIDs_6.insert(RoutingID_6.getString());
    FIX::RoutingType RoutingType_6(1);
    noRoutingIDs_0_0.set(RoutingType_6);
    RoutingGrp_NoRoutingIDs_6.insert(RoutingType_6.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_6);
    all_compo_names.insert("RoutingGrp.NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
  }
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_1;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_7;
    FIX::RoutingID RoutingID_7("STRING_219231609");
    noRoutingIDs_0_1.set(RoutingID_7);
    RoutingGrp_NoRoutingIDs_7.insert(RoutingID_7.getString());
    FIX::RoutingType RoutingType_7(1);
    noRoutingIDs_0_1.set(RoutingType_7);
    RoutingGrp_NoRoutingIDs_7.insert(RoutingType_7.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_7);
    all_compo_names.insert("RoutingGrp.NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_1);
  }
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_2;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_8;
    FIX::RoutingID RoutingID_8("STRING_1047978608");
    noRoutingIDs_0_2.set(RoutingID_8);
    RoutingGrp_NoRoutingIDs_8.insert(RoutingID_8.getString());
    FIX::RoutingType RoutingType_8(1);
    noRoutingIDs_0_2.set(RoutingType_8);
    RoutingGrp_NoRoutingIDs_8.insert(RoutingType_8.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_8);
    all_compo_names.insert("RoutingGrp.NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::News::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_76;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_76("DATA_1794113294");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_76);
    UnderlyingInstrument_76.insert(EncodedUnderlyingIssuer_76.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_76(1187017797);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_76);
    UnderlyingInstrument_76.insert(EncodedUnderlyingIssuerLen_76.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_76("DATA_1637818992");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_76);
    UnderlyingInstrument_76.insert(EncodedUnderlyingSecurityDesc_76.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_76(1339999909);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_76);
    UnderlyingInstrument_76.insert(EncodedUnderlyingSecurityDescLen_76.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_76;
    UnderlyingAdjustedQuantity_76.setString("16540491");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_76);
    UnderlyingInstrument_76.insert(UnderlyingAdjustedQuantity_76.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_76;
    UnderlyingAllocationPercent_76.setString("89.160000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_76);
    UnderlyingInstrument_76.insert(UnderlyingAllocationPercent_76.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_76;
    UnderlyingAttachmentPoint_76.setString("48.270000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_76);
    UnderlyingInstrument_76.insert(UnderlyingAttachmentPoint_76.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_76("STRING_2097089886");
    noUnderlyings_0_0.set(UnderlyingCFICode_76);
    UnderlyingInstrument_76.insert(UnderlyingCFICode_76.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_76("STRING_1321280686");
    noUnderlyings_0_0.set(UnderlyingCPProgram_76);
    UnderlyingInstrument_76.insert(UnderlyingCPProgram_76.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_76("STRING_1613036469");
    noUnderlyings_0_0.set(UnderlyingCPRegType_76);
    UnderlyingInstrument_76.insert(UnderlyingCPRegType_76.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_76;
    UnderlyingCapValue_76.setString("19715102");
    noUnderlyings_0_0.set(UnderlyingCapValue_76);
    UnderlyingInstrument_76.insert(UnderlyingCapValue_76.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_76;
    UnderlyingCashAmount_76.setString("16174241");
    noUnderlyings_0_0.set(UnderlyingCashAmount_76);
    UnderlyingInstrument_76.insert(UnderlyingCashAmount_76.getString());
    FIX::UnderlyingCashType UnderlyingCashType_76("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_76);
    UnderlyingInstrument_76.insert(UnderlyingCashType_76.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_76;
    UnderlyingContractMultiplier_76.setString("13597492");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_76);
    UnderlyingInstrument_76.insert(UnderlyingContractMultiplier_76.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_76(303627571);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_76);
    UnderlyingInstrument_76.insert(UnderlyingContractMultiplierUnit_76.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_76("COUNTRY_734326235");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_76);
    UnderlyingInstrument_76.insert(UnderlyingCountryOfIssue_76.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_76("LOCALMKTDATE_1527419374");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_76);
    UnderlyingInstrument_76.insert(UnderlyingCouponPaymentDate_76.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_76;
    UnderlyingCouponRate_76.setString("48.120000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_76);
    UnderlyingInstrument_76.insert(UnderlyingCouponRate_76.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_76("STRING_1728712956");
    noUnderlyings_0_0.set(UnderlyingCreditRating_76);
    UnderlyingInstrument_76.insert(UnderlyingCreditRating_76.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_76("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_76);
    UnderlyingInstrument_76.insert(UnderlyingCurrency_76.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_76;
    UnderlyingCurrentValue_76.setString("21190068");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_76);
    UnderlyingInstrument_76.insert(UnderlyingCurrentValue_76.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_76;
    UnderlyingDetachmentPoint_76.setString("45.050000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_76);
    UnderlyingInstrument_76.insert(UnderlyingDetachmentPoint_76.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_76;
    UnderlyingDirtyPrice_76.setString("13286294");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_76);
    UnderlyingInstrument_76.insert(UnderlyingDirtyPrice_76.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_76;
    UnderlyingEndPrice_76.setString("3805322");
    noUnderlyings_0_0.set(UnderlyingEndPrice_76);
    UnderlyingInstrument_76.insert(UnderlyingEndPrice_76.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_76;
    UnderlyingEndValue_76.setString("16469463");
    noUnderlyings_0_0.set(UnderlyingEndValue_76);
    UnderlyingInstrument_76.insert(UnderlyingEndValue_76.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_76(1547861011);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_76);
    UnderlyingInstrument_76.insert(UnderlyingExerciseStyle_76.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_76;
    UnderlyingFXRate_76.setString("10624720");
    noUnderlyings_0_0.set(UnderlyingFXRate_76);
    UnderlyingInstrument_76.insert(UnderlyingFXRate_76.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_76('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_76);
    UnderlyingInstrument_76.insert(UnderlyingFXRateCalc_76.getString());
    FIX::UnderlyingFactor UnderlyingFactor_76;
    UnderlyingFactor_76.setString("10899924");
    noUnderlyings_0_0.set(UnderlyingFactor_76);
    UnderlyingInstrument_76.insert(UnderlyingFactor_76.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_76(1009229383);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_76);
    UnderlyingInstrument_76.insert(UnderlyingFlowScheduleType_76.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_76("STRING_194070988");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_76);
    UnderlyingInstrument_76.insert(UnderlyingInstrRegistry_76.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_76("LOCALMKTDATE_129526561");
    noUnderlyings_0_0.set(UnderlyingIssueDate_76);
    UnderlyingInstrument_76.insert(UnderlyingIssueDate_76.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_76("STRING_499564727");
    noUnderlyings_0_0.set(UnderlyingIssuer_76);
    UnderlyingInstrument_76.insert(UnderlyingIssuer_76.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_76("STRING_1534070898");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_76);
    UnderlyingInstrument_76.insert(UnderlyingLocaleOfIssue_76.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_76("LOCALMKTDATE_1783575673");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_76);
    UnderlyingInstrument_76.insert(UnderlyingMaturityDate_76.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_76("MONTHYEAR_308579995");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_76);
    UnderlyingInstrument_76.insert(UnderlyingMaturityMonthYear_76.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_76("TZTIMEONLY_1759595725");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_76);
    UnderlyingInstrument_76.insert(UnderlyingMaturityTime_76.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_76;
    UnderlyingNotionalPercentageOutstanding_76.setString("19.110000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_76);
    UnderlyingInstrument_76.insert(UnderlyingNotionalPercentageOutstanding_76.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_76('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_76);
    UnderlyingInstrument_76.insert(UnderlyingOptAttribute_76.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_76;
    UnderlyingOriginalNotionalPercentageOutstanding_76.setString("85.460000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_76);
    UnderlyingInstrument_76.insert(UnderlyingOriginalNotionalPercentageOutstanding_76.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_76("STRING_1557208500");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_76);
    UnderlyingInstrument_76.insert(UnderlyingPriceUnitOfMeasure_76.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_76;
    UnderlyingPriceUnitOfMeasureQty_76.setString("10998012");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_76);
    UnderlyingInstrument_76.insert(UnderlyingPriceUnitOfMeasureQty_76.getString());
    FIX::UnderlyingProduct UnderlyingProduct_76(1484080309);
    noUnderlyings_0_0.set(UnderlyingProduct_76);
    UnderlyingInstrument_76.insert(UnderlyingProduct_76.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_76(769474070);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_76);
    UnderlyingInstrument_76.insert(UnderlyingPutOrCall_76.getString());
    FIX::UnderlyingPx UnderlyingPx_76;
    UnderlyingPx_76.setString("14034287");
    noUnderlyings_0_0.set(UnderlyingPx_76);
    UnderlyingInstrument_76.insert(UnderlyingPx_76.getString());
    FIX::UnderlyingQty UnderlyingQty_76;
    UnderlyingQty_76.setString("709228");
    noUnderlyings_0_0.set(UnderlyingQty_76);
    UnderlyingInstrument_76.insert(UnderlyingQty_76.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_76("LOCALMKTDATE_149409796");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_76);
    UnderlyingInstrument_76.insert(UnderlyingRedemptionDate_76.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_76("STRING_508519943");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_76);
    UnderlyingInstrument_76.insert(UnderlyingRepoCollateralSecurityType_76.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_76;
    UnderlyingRepurchaseRate_76.setString("58.520000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_76);
    UnderlyingInstrument_76.insert(UnderlyingRepurchaseRate_76.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_76(74127068);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_76);
    UnderlyingInstrument_76.insert(UnderlyingRepurchaseTerm_76.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_76("STRING_1869504579");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_76);
    UnderlyingInstrument_76.insert(UnderlyingRestructuringType_76.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_76("STRING_1771159017");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_76);
    UnderlyingInstrument_76.insert(UnderlyingSecurityDesc_76.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_76("EXCHANGE_1645801573");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_76);
    UnderlyingInstrument_76.insert(UnderlyingSecurityExchange_76.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_76("STRING_1050650334");
    noUnderlyings_0_0.set(UnderlyingSecurityID_76);
    UnderlyingInstrument_76.insert(UnderlyingSecurityID_76.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_76("STRING_4207602");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_76);
    UnderlyingInstrument_76.insert(UnderlyingSecurityIDSource_76.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_76("STRING_1145264307");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_76);
    UnderlyingInstrument_76.insert(UnderlyingSecuritySubType_76.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_76("STRING_451027697");
    noUnderlyings_0_0.set(UnderlyingSecurityType_76);
    UnderlyingInstrument_76.insert(UnderlyingSecurityType_76.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_76("STRING_1066679631");
    noUnderlyings_0_0.set(UnderlyingSeniority_76);
    UnderlyingInstrument_76.insert(UnderlyingSeniority_76.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_76("STRING_1692705649");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_76);
    UnderlyingInstrument_76.insert(UnderlyingSettlMethod_76.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_76(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_76);
    UnderlyingInstrument_76.insert(UnderlyingSettlementType_76.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_76;
    UnderlyingStartValue_76.setString("20759090");
    noUnderlyings_0_0.set(UnderlyingStartValue_76);
    UnderlyingInstrument_76.insert(UnderlyingStartValue_76.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_76("STRING_1886776638");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_76);
    UnderlyingInstrument_76.insert(UnderlyingStateOrProvinceOfIssue_76.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_76("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_76);
    UnderlyingInstrument_76.insert(UnderlyingStrikeCurrency_76.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_76;
    UnderlyingStrikePrice_76.setString("12733638");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_76);
    UnderlyingInstrument_76.insert(UnderlyingStrikePrice_76.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_76("STRING_1306638695");
    noUnderlyings_0_0.set(UnderlyingSymbol_76);
    UnderlyingInstrument_76.insert(UnderlyingSymbol_76.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_76("STRING_736570089");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_76);
    UnderlyingInstrument_76.insert(UnderlyingSymbolSfx_76.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_76("STRING_885475965");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_76);
    UnderlyingInstrument_76.insert(UnderlyingTimeUnit_76.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_76("STRING_892336959");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_76);
    UnderlyingInstrument_76.insert(UnderlyingUnitOfMeasure_76.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_76;
    UnderlyingUnitOfMeasureQty_76.setString("2189471");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_76);
    UnderlyingInstrument_76.insert(UnderlyingUnitOfMeasureQty_76.getString());
    all_values.push_back(UnderlyingInstrument_76);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_155;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_155("STRING_302061811");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_155);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_155.insert(UnderlyingSecurityAltID_155.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_155("STRING_1318748331");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_155);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_155.insert(UnderlyingSecurityAltIDSource_155.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_155);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_156;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_156("STRING_1447221172");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_156);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_156.insert(UnderlyingSecurityAltID_156.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_156("STRING_1071535881");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_156);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_156.insert(UnderlyingSecurityAltIDSource_156.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_156);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_157;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_157("STRING_574693462");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_157);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_157.insert(UnderlyingSecurityAltID_157.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_157("STRING_1518144068");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_157);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_157.insert(UnderlyingSecurityAltIDSource_157.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_157);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_155;
      FIX::UnderlyingStipType UnderlyingStipType_155("STRING_1083213405");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_155);
      UnderlyingStipulations_NoUnderlyingStips_155.insert(UnderlyingStipType_155.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_155("STRING_1170296273");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_155);
      UnderlyingStipulations_NoUnderlyingStips_155.insert(UnderlyingStipValue_155.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_155);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_156;
      FIX::UnderlyingStipType UnderlyingStipType_156("STRING_1295072745");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_156);
      UnderlyingStipulations_NoUnderlyingStips_156.insert(UnderlyingStipType_156.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_156("STRING_805234337");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_156);
      UnderlyingStipulations_NoUnderlyingStips_156.insert(UnderlyingStipValue_156.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_156);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_145;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_145("STRING_793390670");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_145);
      UndlyInstrumentParties_NoUndlyInstrumentParties_145.insert(UnderlyingInstrumentPartyID_145.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_145('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_145);
      UndlyInstrumentParties_NoUndlyInstrumentParties_145.insert(UnderlyingInstrumentPartyIDSource_145.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_145(798179244);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_145);
      UndlyInstrumentParties_NoUndlyInstrumentParties_145.insert(UnderlyingInstrumentPartyRole_145.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_145);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_289("STRING_159428720");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_289);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289.insert(UnderlyingInstrumentPartySubID_289.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_289(1864858875);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_289);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289.insert(UnderlyingInstrumentPartySubIDType_289.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
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
