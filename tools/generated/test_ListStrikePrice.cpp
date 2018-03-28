#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/ListStrikePrice.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListStrikePrice, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ListStrikePrice msg;

  list<multiset<string>> all_values;
  multiset<string> ListStrikePrice_0;
  FIX::LastFragment LastFragment_7(false);
  msg.set(LastFragment_7);
  ListStrikePrice_0.insert(LastFragment_7.getString());
  FIX::ListID ListID_18("STRING_1843270012");
  msg.set(ListID_18);
  ListStrikePrice_0.insert(ListID_18.getString());
  FIX::TotNoStrikes TotNoStrikes_0(1958805493);
  msg.set(TotNoStrikes_0);
  ListStrikePrice_0.insert(TotNoStrikes_0.getString());
  all_values.push_back(ListStrikePrice_0);

  // InstrmtStrkPxGrp
  // Group InstrmtStrkPxGrp.NoStrikes
  {
    FIX50SP2::ListStrikePrice::NoStrikes noStrikes_0_0;
    // InstrmtStrkPxGrp.NoStrikes
    multiset<string> InstrmtStrkPxGrp_NoStrikes_0;
    FIX::ClOrdID ClOrdID_25("STRING_1989418176");
    noStrikes_0_0.set(ClOrdID_25);
    InstrmtStrkPxGrp_NoStrikes_0.insert(ClOrdID_25.getString());
    FIX::Currency Currency_22("GBP");
    noStrikes_0_0.set(Currency_22);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Currency_22.getString());
    FIX::EncodedText EncodedText_43("DATA_135997640");
    noStrikes_0_0.set(EncodedText_43);
    InstrmtStrkPxGrp_NoStrikes_0.insert(EncodedText_43.getString());
    FIX::EncodedTextLen EncodedTextLen_43(1189109684);
    noStrikes_0_0.set(EncodedTextLen_43);
    InstrmtStrkPxGrp_NoStrikes_0.insert(EncodedTextLen_43.getString());
    FIX::PrevClosePx PrevClosePx_1;
    PrevClosePx_1.setString("16172386");
    noStrikes_0_0.set(PrevClosePx_1);
    InstrmtStrkPxGrp_NoStrikes_0.insert(PrevClosePx_1.getString());
    FIX::Price Price_10;
    Price_10.setString("21302696");
    noStrikes_0_0.set(Price_10);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Price_10.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_23("STRING_1691227446");
    noStrikes_0_0.set(SecondaryClOrdID_23);
    InstrmtStrkPxGrp_NoStrikes_0.insert(SecondaryClOrdID_23.getString());
    FIX::Side Side_18('E');
    noStrikes_0_0.set(Side_18);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Side_18.getString());
    FIX::Text Text_43("STRING_1819067914");
    noStrikes_0_0.set(Text_43);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Text_43.getString());
    all_values.push_back(InstrmtStrkPxGrp_NoStrikes_0);

    // Instrument
    multiset<string> Instrument_29;
    FIX::AttachmentPoint AttachmentPoint_29;
    AttachmentPoint_29.setString("26.210000");
    noStrikes_0_0.set(AttachmentPoint_29);
    Instrument_29.insert(AttachmentPoint_29.getString());
    FIX::CFICode CFICode_29("STRING_2111012571");
    noStrikes_0_0.set(CFICode_29);
    Instrument_29.insert(CFICode_29.getString());
    FIX::CPProgram CPProgram_29(99);
    noStrikes_0_0.set(CPProgram_29);
    Instrument_29.insert(CPProgram_29.getString());
    FIX::CPRegType CPRegType_29("STRING_1628240011");
    noStrikes_0_0.set(CPRegType_29);
    Instrument_29.insert(CPRegType_29.getString());
    FIX::CapPrice CapPrice_29;
    CapPrice_29.setString("10982712");
    noStrikes_0_0.set(CapPrice_29);
    Instrument_29.insert(CapPrice_29.getString());
    FIX::ContractMultiplier ContractMultiplier_29;
    ContractMultiplier_29.setString("9904386");
    noStrikes_0_0.set(ContractMultiplier_29);
    Instrument_29.insert(ContractMultiplier_29.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_29(1);
    noStrikes_0_0.set(ContractMultiplierUnit_29);
    Instrument_29.insert(ContractMultiplierUnit_29.getString());
    FIX::ContractSettlMonth ContractSettlMonth_29("MONTHYEAR_2070919089");
    noStrikes_0_0.set(ContractSettlMonth_29);
    Instrument_29.insert(ContractSettlMonth_29.getString());
    FIX::CountryOfIssue CountryOfIssue_29("COUNTRY_771851592");
    noStrikes_0_0.set(CountryOfIssue_29);
    Instrument_29.insert(CountryOfIssue_29.getString());
    FIX::CouponPaymentDate CouponPaymentDate_29("LOCALMKTDATE_1991316487");
    noStrikes_0_0.set(CouponPaymentDate_29);
    Instrument_29.insert(CouponPaymentDate_29.getString());
    FIX::CouponRate CouponRate_29;
    CouponRate_29.setString("23.290000");
    noStrikes_0_0.set(CouponRate_29);
    Instrument_29.insert(CouponRate_29.getString());
    FIX::CreditRating CreditRating_29("STRING_687407332");
    noStrikes_0_0.set(CreditRating_29);
    Instrument_29.insert(CreditRating_29.getString());
    FIX::DatedDate DatedDate_29("LOCALMKTDATE_733362052");
    noStrikes_0_0.set(DatedDate_29);
    Instrument_29.insert(DatedDate_29.getString());
    FIX::DetachmentPoint DetachmentPoint_29;
    DetachmentPoint_29.setString("20.850000");
    noStrikes_0_0.set(DetachmentPoint_29);
    Instrument_29.insert(DetachmentPoint_29.getString());
    FIX::EncodedIssuer EncodedIssuer_29("DATA_2000226025");
    noStrikes_0_0.set(EncodedIssuer_29);
    Instrument_29.insert(EncodedIssuer_29.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_29(1175147980);
    noStrikes_0_0.set(EncodedIssuerLen_29);
    Instrument_29.insert(EncodedIssuerLen_29.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_29("DATA_133613962");
    noStrikes_0_0.set(EncodedSecurityDesc_29);
    Instrument_29.insert(EncodedSecurityDesc_29.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_29(1164136109);
    noStrikes_0_0.set(EncodedSecurityDescLen_29);
    Instrument_29.insert(EncodedSecurityDescLen_29.getString());
    FIX::ExerciseStyle ExerciseStyle_29(1);
    noStrikes_0_0.set(ExerciseStyle_29);
    Instrument_29.insert(ExerciseStyle_29.getString());
    FIX::Factor Factor_29;
    Factor_29.setString("20924194");
    noStrikes_0_0.set(Factor_29);
    Instrument_29.insert(Factor_29.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_29(false);
    noStrikes_0_0.set(FlexProductEligibilityIndicator_29);
    Instrument_29.insert(FlexProductEligibilityIndicator_29.getString());
    FIX::FlexibleIndicator FlexibleIndicator_29(false);
    noStrikes_0_0.set(FlexibleIndicator_29);
    Instrument_29.insert(FlexibleIndicator_29.getString());
    FIX::FloorPrice FloorPrice_29;
    FloorPrice_29.setString("4163969");
    noStrikes_0_0.set(FloorPrice_29);
    Instrument_29.insert(FloorPrice_29.getString());
    FIX::FlowScheduleType FlowScheduleType_29(0);
    noStrikes_0_0.set(FlowScheduleType_29);
    Instrument_29.insert(FlowScheduleType_29.getString());
    FIX::InstrRegistry InstrRegistry_29("STRING_848866513");
    noStrikes_0_0.set(InstrRegistry_29);
    Instrument_29.insert(InstrRegistry_29.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_29('1');
    noStrikes_0_0.set(InstrmtAssignmentMethod_29);
    Instrument_29.insert(InstrmtAssignmentMethod_29.getString());
    FIX::InterestAccrualDate InterestAccrualDate_29("LOCALMKTDATE_661698448");
    noStrikes_0_0.set(InterestAccrualDate_29);
    Instrument_29.insert(InterestAccrualDate_29.getString());
    FIX::IssueDate IssueDate_29("LOCALMKTDATE_831652492");
    noStrikes_0_0.set(IssueDate_29);
    Instrument_29.insert(IssueDate_29.getString());
    FIX::Issuer Issuer_29("STRING_1149250399");
    noStrikes_0_0.set(Issuer_29);
    Instrument_29.insert(Issuer_29.getString());
    FIX::ListMethod ListMethod_29(1);
    noStrikes_0_0.set(ListMethod_29);
    Instrument_29.insert(ListMethod_29.getString());
    FIX::LocaleOfIssue LocaleOfIssue_29("STRING_503236759");
    noStrikes_0_0.set(LocaleOfIssue_29);
    Instrument_29.insert(LocaleOfIssue_29.getString());
    FIX::MaturityDate MaturityDate_29("LOCALMKTDATE_73189372");
    noStrikes_0_0.set(MaturityDate_29);
    Instrument_29.insert(MaturityDate_29.getString());
    FIX::MaturityMonthYear MaturityMonthYear_29("MONTHYEAR_319186809");
    noStrikes_0_0.set(MaturityMonthYear_29);
    Instrument_29.insert(MaturityMonthYear_29.getString());
    FIX::MaturityTime MaturityTime_29("TZTIMEONLY_2073302322");
    noStrikes_0_0.set(MaturityTime_29);
    Instrument_29.insert(MaturityTime_29.getString());
    FIX::MinPriceIncrement MinPriceIncrement_29;
    MinPriceIncrement_29.setString("17014293");
    noStrikes_0_0.set(MinPriceIncrement_29);
    Instrument_29.insert(MinPriceIncrement_29.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_29;
    MinPriceIncrementAmount_29.setString("14174580");
    noStrikes_0_0.set(MinPriceIncrementAmount_29);
    Instrument_29.insert(MinPriceIncrementAmount_29.getString());
    FIX::NTPositionLimit NTPositionLimit_29(916257276);
    noStrikes_0_0.set(NTPositionLimit_29);
    Instrument_29.insert(NTPositionLimit_29.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_29;
    NotionalPercentageOutstanding_29.setString("94.390000");
    noStrikes_0_0.set(NotionalPercentageOutstanding_29);
    Instrument_29.insert(NotionalPercentageOutstanding_29.getString());
    FIX::OptAttribute OptAttribute_29('1');
    noStrikes_0_0.set(OptAttribute_29);
    Instrument_29.insert(OptAttribute_29.getString());
    FIX::OptPayoutAmount OptPayoutAmount_29;
    OptPayoutAmount_29.setString("16881088");
    noStrikes_0_0.set(OptPayoutAmount_29);
    Instrument_29.insert(OptPayoutAmount_29.getString());
    FIX::OptPayoutType OptPayoutType_29(1);
    noStrikes_0_0.set(OptPayoutType_29);
    Instrument_29.insert(OptPayoutType_29.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_29;
    OriginalNotionalPercentageOutstanding_29.setString("21.870000");
    noStrikes_0_0.set(OriginalNotionalPercentageOutstanding_29);
    Instrument_29.insert(OriginalNotionalPercentageOutstanding_29.getString());
    FIX::Pool Pool_29("STRING_228032553");
    noStrikes_0_0.set(Pool_29);
    Instrument_29.insert(Pool_29.getString());
    FIX::PositionLimit PositionLimit_29(1194514331);
    noStrikes_0_0.set(PositionLimit_29);
    Instrument_29.insert(PositionLimit_29.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_29("STRING_STD");
    noStrikes_0_0.set(PriceQuoteMethod_29);
    Instrument_29.insert(PriceQuoteMethod_29.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_29("STRING_80774931");
    noStrikes_0_0.set(PriceUnitOfMeasure_29);
    Instrument_29.insert(PriceUnitOfMeasure_29.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_29;
    PriceUnitOfMeasureQty_29.setString("2221786");
    noStrikes_0_0.set(PriceUnitOfMeasureQty_29);
    Instrument_29.insert(PriceUnitOfMeasureQty_29.getString());
    FIX::Product Product_31(6);
    noStrikes_0_0.set(Product_31);
    Instrument_29.insert(Product_31.getString());
    FIX::ProductComplex ProductComplex_29("STRING_1244911040");
    noStrikes_0_0.set(ProductComplex_29);
    Instrument_29.insert(ProductComplex_29.getString());
    FIX::PutOrCall PutOrCall_29(0);
    noStrikes_0_0.set(PutOrCall_29);
    Instrument_29.insert(PutOrCall_29.getString());
    FIX::RedemptionDate RedemptionDate_29("LOCALMKTDATE_889524042");
    noStrikes_0_0.set(RedemptionDate_29);
    Instrument_29.insert(RedemptionDate_29.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_29("STRING_32903529");
    noStrikes_0_0.set(RepoCollateralSecurityType_29);
    Instrument_29.insert(RepoCollateralSecurityType_29.getString());
    FIX::RepurchaseRate RepurchaseRate_29;
    RepurchaseRate_29.setString("18.810000");
    noStrikes_0_0.set(RepurchaseRate_29);
    Instrument_29.insert(RepurchaseRate_29.getString());
    FIX::RepurchaseTerm RepurchaseTerm_29(1305920960);
    noStrikes_0_0.set(RepurchaseTerm_29);
    Instrument_29.insert(RepurchaseTerm_29.getString());
    FIX::RestructuringType RestructuringType_29("STRING_MR");
    noStrikes_0_0.set(RestructuringType_29);
    Instrument_29.insert(RestructuringType_29.getString());
    FIX::SecurityDesc SecurityDesc_29("STRING_507364746");
    noStrikes_0_0.set(SecurityDesc_29);
    Instrument_29.insert(SecurityDesc_29.getString());
    FIX::SecurityExchange SecurityExchange_29("EXCHANGE_763943913");
    noStrikes_0_0.set(SecurityExchange_29);
    Instrument_29.insert(SecurityExchange_29.getString());
    FIX::SecurityGroup SecurityGroup_29("STRING_1886545393");
    noStrikes_0_0.set(SecurityGroup_29);
    Instrument_29.insert(SecurityGroup_29.getString());
    FIX::SecurityID SecurityID_29("STRING_1339017239");
    noStrikes_0_0.set(SecurityID_29);
    Instrument_29.insert(SecurityID_29.getString());
    FIX::SecurityIDSource SecurityIDSource_29("STRING_K");
    noStrikes_0_0.set(SecurityIDSource_29);
    Instrument_29.insert(SecurityIDSource_29.getString());
    FIX::SecurityStatus SecurityStatus_29("STRING_1");
    noStrikes_0_0.set(SecurityStatus_29);
    Instrument_29.insert(SecurityStatus_29.getString());
    FIX::SecuritySubType SecuritySubType_30("STRING_1842253998");
    noStrikes_0_0.set(SecuritySubType_30);
    Instrument_29.insert(SecuritySubType_30.getString());
    FIX::SecurityType SecurityType_31("STRING_PEF");
    noStrikes_0_0.set(SecurityType_31);
    Instrument_29.insert(SecurityType_31.getString());
    FIX::Seniority Seniority_29("STRING_SD");
    noStrikes_0_0.set(Seniority_29);
    Instrument_29.insert(Seniority_29.getString());
    FIX::SettlMethod SettlMethod_29('C');
    noStrikes_0_0.set(SettlMethod_29);
    Instrument_29.insert(SettlMethod_29.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_29("STRING_1540329421");
    noStrikes_0_0.set(SettleOnOpenFlag_29);
    Instrument_29.insert(SettleOnOpenFlag_29.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_29("STRING_1831364503");
    noStrikes_0_0.set(StateOrProvinceOfIssue_29);
    Instrument_29.insert(StateOrProvinceOfIssue_29.getString());
    FIX::StrikeCurrency StrikeCurrency_29("USD");
    noStrikes_0_0.set(StrikeCurrency_29);
    Instrument_29.insert(StrikeCurrency_29.getString());
    FIX::StrikeMultiplier StrikeMultiplier_29;
    StrikeMultiplier_29.setString("10247743");
    noStrikes_0_0.set(StrikeMultiplier_29);
    Instrument_29.insert(StrikeMultiplier_29.getString());
    FIX::StrikePrice StrikePrice_29;
    StrikePrice_29.setString("774715");
    noStrikes_0_0.set(StrikePrice_29);
    Instrument_29.insert(StrikePrice_29.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_29(2);
    noStrikes_0_0.set(StrikePriceBoundaryMethod_29);
    Instrument_29.insert(StrikePriceBoundaryMethod_29.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_29;
    StrikePriceBoundaryPrecision_29.setString("65.480000");
    noStrikes_0_0.set(StrikePriceBoundaryPrecision_29);
    Instrument_29.insert(StrikePriceBoundaryPrecision_29.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_29(4);
    noStrikes_0_0.set(StrikePriceDeterminationMethod_29);
    Instrument_29.insert(StrikePriceDeterminationMethod_29.getString());
    FIX::StrikeValue StrikeValue_29;
    StrikeValue_29.setString("16658318");
    noStrikes_0_0.set(StrikeValue_29);
    Instrument_29.insert(StrikeValue_29.getString());
    FIX::Symbol Symbol_29("STRING_185357172");
    noStrikes_0_0.set(Symbol_29);
    Instrument_29.insert(Symbol_29.getString());
    FIX::SymbolSfx SymbolSfx_29("STRING_CD");
    noStrikes_0_0.set(SymbolSfx_29);
    Instrument_29.insert(SymbolSfx_29.getString());
    FIX::TimeUnit TimeUnit_29("STRING_Wk");
    noStrikes_0_0.set(TimeUnit_29);
    Instrument_29.insert(TimeUnit_29.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_29(3);
    noStrikes_0_0.set(UnderlyingPriceDeterminationMethod_29);
    Instrument_29.insert(UnderlyingPriceDeterminationMethod_29.getString());
    FIX::UnitOfMeasure UnitOfMeasure_29("STRING_Bu");
    noStrikes_0_0.set(UnitOfMeasure_29);
    Instrument_29.insert(UnitOfMeasure_29.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_29;
    UnitOfMeasureQty_29.setString("8336398");
    noStrikes_0_0.set(UnitOfMeasureQty_29);
    Instrument_29.insert(UnitOfMeasureQty_29.getString());
    FIX::ValuationMethod ValuationMethod_29("STRING_CDSD");
    noStrikes_0_0.set(ValuationMethod_29);
    Instrument_29.insert(ValuationMethod_29.getString());
    all_values.push_back(Instrument_29);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_52;
      FIX::ComplexEventCondition ComplexEventCondition_52(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_52);
      ComplexEvents_NoComplexEvents_52.insert(ComplexEventCondition_52.getString());
      FIX::ComplexEventPrice ComplexEventPrice_52;
      ComplexEventPrice_52.setString("11779067");
      noComplexEvents_0_1_0.set(ComplexEventPrice_52);
      ComplexEvents_NoComplexEvents_52.insert(ComplexEventPrice_52.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_52(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_52);
      ComplexEvents_NoComplexEvents_52.insert(ComplexEventPriceBoundaryMethod_52.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_52;
      ComplexEventPriceBoundaryPrecision_52.setString("28.260000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_52);
      ComplexEvents_NoComplexEvents_52.insert(ComplexEventPriceBoundaryPrecision_52.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_52(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_52);
      ComplexEvents_NoComplexEvents_52.insert(ComplexEventPriceTimeType_52.getString());
      FIX::ComplexEventType ComplexEventType_52(5);
      noComplexEvents_0_1_0.set(ComplexEventType_52);
      ComplexEvents_NoComplexEvents_52.insert(ComplexEventType_52.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_52;
      ComplexOptPayoutAmount_52.setString("1910364");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_52);
      ComplexEvents_NoComplexEvents_52.insert(ComplexOptPayoutAmount_52.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_52);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_102;
        FIX::ComplexEventEndDate ComplexEventEndDate_102(FIX::UTCTIMESTAMP(23, 17, 47, 23, 11, 2017));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_102);
        ComplexEventDates_NoComplexEventDates_102.insert(ComplexEventEndDate_102.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_102(FIX::UTCTIMESTAMP(10, 4, 33, 21, 1, 2008));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_102);
        ComplexEventDates_NoComplexEventDates_102.insert(ComplexEventStartDate_102.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_102);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_207;
          FIX::ComplexEventEndTime ComplexEventEndTime_207(FIX::UTCTIMEONLY(22, 45, 54));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_207);
          ComplexEventTimes_NoComplexEventTimes_207.insert(ComplexEventEndTime_207.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_207(FIX::UTCTIMEONLY(23, 55, 7));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_207);
          ComplexEventTimes_NoComplexEventTimes_207.insert(ComplexEventStartTime_207.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_207);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noStrikes_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_53;
      FIX::ComplexEventCondition ComplexEventCondition_53(1);
      noComplexEvents_0_1_1.set(ComplexEventCondition_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventCondition_53.getString());
      FIX::ComplexEventPrice ComplexEventPrice_53;
      ComplexEventPrice_53.setString("12898942");
      noComplexEvents_0_1_1.set(ComplexEventPrice_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventPrice_53.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_53(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventPriceBoundaryMethod_53.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_53;
      ComplexEventPriceBoundaryPrecision_53.setString("19.680000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventPriceBoundaryPrecision_53.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_53(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventPriceTimeType_53.getString());
      FIX::ComplexEventType ComplexEventType_53(1);
      noComplexEvents_0_1_1.set(ComplexEventType_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventType_53.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_53;
      ComplexOptPayoutAmount_53.setString("10484983");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexOptPayoutAmount_53.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_53);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_103;
        FIX::ComplexEventEndDate ComplexEventEndDate_103(FIX::UTCTIMESTAMP(8, 43, 57, 11, 6, 2008));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_103);
        ComplexEventDates_NoComplexEventDates_103.insert(ComplexEventEndDate_103.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_103(FIX::UTCTIMESTAMP(16, 16, 48, 25, 5, 2008));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_103);
        ComplexEventDates_NoComplexEventDates_103.insert(ComplexEventStartDate_103.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_103);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_208;
          FIX::ComplexEventEndTime ComplexEventEndTime_208(FIX::UTCTIMEONLY(6, 6, 2));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_208);
          ComplexEventTimes_NoComplexEventTimes_208.insert(ComplexEventEndTime_208.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_208(FIX::UTCTIMEONLY(9, 58, 41));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_208);
          ComplexEventTimes_NoComplexEventTimes_208.insert(ComplexEventStartTime_208.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_208);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_209;
          FIX::ComplexEventEndTime ComplexEventEndTime_209(FIX::UTCTIMEONLY(6, 5, 20));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_209);
          ComplexEventTimes_NoComplexEventTimes_209.insert(ComplexEventEndTime_209.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_209(FIX::UTCTIMEONLY(15, 25, 44));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_209);
          ComplexEventTimes_NoComplexEventTimes_209.insert(ComplexEventStartTime_209.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_209);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_210;
          FIX::ComplexEventEndTime ComplexEventEndTime_210(FIX::UTCTIMEONLY(2, 27, 21));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventEndTime_210);
          ComplexEventTimes_NoComplexEventTimes_210.insert(ComplexEventEndTime_210.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_210(FIX::UTCTIMEONLY(13, 33, 48));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventStartTime_210);
          ComplexEventTimes_NoComplexEventTimes_210.insert(ComplexEventStartTime_210.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_210);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_104;
        FIX::ComplexEventEndDate ComplexEventEndDate_104(FIX::UTCTIMESTAMP(1, 36, 22, 17, 1, 2007));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_104);
        ComplexEventDates_NoComplexEventDates_104.insert(ComplexEventEndDate_104.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_104(FIX::UTCTIMESTAMP(10, 41, 24, 16, 3, 2004));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_104);
        ComplexEventDates_NoComplexEventDates_104.insert(ComplexEventStartDate_104.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_104);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_211;
          FIX::ComplexEventEndTime ComplexEventEndTime_211(FIX::UTCTIMEONLY(4, 59, 42));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_211);
          ComplexEventTimes_NoComplexEventTimes_211.insert(ComplexEventEndTime_211.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_211(FIX::UTCTIMEONLY(18, 59, 6));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_211);
          ComplexEventTimes_NoComplexEventTimes_211.insert(ComplexEventStartTime_211.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_211);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      noStrikes_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_54;
      FIX::EventDate EventDate_54("LOCALMKTDATE_1428306889");
      noEvents_0_1_0.set(EventDate_54);
      EvntGrp_NoEvents_54.insert(EventDate_54.getString());
      FIX::EventPx EventPx_54;
      EventPx_54.setString("11254967");
      noEvents_0_1_0.set(EventPx_54);
      EvntGrp_NoEvents_54.insert(EventPx_54.getString());
      FIX::EventText EventText_54("STRING_121722224");
      noEvents_0_1_0.set(EventText_54);
      EvntGrp_NoEvents_54.insert(EventText_54.getString());
      FIX::EventTime EventTime_54(FIX::UTCTIMESTAMP(2, 18, 3, 7, 8, 2008));
      noEvents_0_1_0.set(EventTime_54);
      EvntGrp_NoEvents_54.insert(EventTime_54.getString());
      FIX::EventType EventType_54(7);
      noEvents_0_1_0.set(EventType_54);
      EvntGrp_NoEvents_54.insert(EventType_54.getString());
      all_values.push_back(EvntGrp_NoEvents_54);

      noStrikes_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_55;
      FIX::EventDate EventDate_55("LOCALMKTDATE_1927777649");
      noEvents_0_1_1.set(EventDate_55);
      EvntGrp_NoEvents_55.insert(EventDate_55.getString());
      FIX::EventPx EventPx_55;
      EventPx_55.setString("6663278");
      noEvents_0_1_1.set(EventPx_55);
      EvntGrp_NoEvents_55.insert(EventPx_55.getString());
      FIX::EventText EventText_55("STRING_279649301");
      noEvents_0_1_1.set(EventText_55);
      EvntGrp_NoEvents_55.insert(EventText_55.getString());
      FIX::EventTime EventTime_55(FIX::UTCTIMESTAMP(11, 23, 14, 23, 2, 2016));
      noEvents_0_1_1.set(EventTime_55);
      EvntGrp_NoEvents_55.insert(EventTime_55.getString());
      FIX::EventType EventType_55(2);
      noEvents_0_1_1.set(EventType_55);
      EvntGrp_NoEvents_55.insert(EventType_55.getString());
      all_values.push_back(EvntGrp_NoEvents_55);

      noStrikes_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_61;
      FIX::InstrumentPartyID InstrumentPartyID_61("STRING_774670069");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_61);
      InstrumentParties_NoInstrumentParties_61.insert(InstrumentPartyID_61.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_61('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_61);
      InstrumentParties_NoInstrumentParties_61.insert(InstrumentPartyIDSource_61.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_61(718905429);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_61);
      InstrumentParties_NoInstrumentParties_61.insert(InstrumentPartyRole_61.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_61);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127;
        FIX::InstrumentPartySubID InstrumentPartySubID_127("STRING_1376053967");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_127);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127.insert(InstrumentPartySubID_127.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_127(1553928549);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_127);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127.insert(InstrumentPartySubIDType_127.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128;
        FIX::InstrumentPartySubID InstrumentPartySubID_128("STRING_993190457");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_128);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128.insert(InstrumentPartySubID_128.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_128(189583390);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_128);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128.insert(InstrumentPartySubIDType_128.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noStrikes_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_62;
      FIX::InstrumentPartyID InstrumentPartyID_62("STRING_834751790");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_62);
      InstrumentParties_NoInstrumentParties_62.insert(InstrumentPartyID_62.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_62('2');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_62);
      InstrumentParties_NoInstrumentParties_62.insert(InstrumentPartyIDSource_62.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_62(311305615);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_62);
      InstrumentParties_NoInstrumentParties_62.insert(InstrumentPartyRole_62.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_62);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129;
        FIX::InstrumentPartySubID InstrumentPartySubID_129("STRING_2055426313");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_129);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129.insert(InstrumentPartySubID_129.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_129(718450333);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_129);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129.insert(InstrumentPartySubIDType_129.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130;
        FIX::InstrumentPartySubID InstrumentPartySubID_130("STRING_834811801");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_130);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130.insert(InstrumentPartySubID_130.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_130(588020336);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_130);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130.insert(InstrumentPartySubIDType_130.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131;
        FIX::InstrumentPartySubID InstrumentPartySubID_131("STRING_2086047140");
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubID_131);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131.insert(InstrumentPartySubID_131.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_131(495164605);
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubIDType_131);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131.insert(InstrumentPartySubIDType_131.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noStrikes_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_63;
      FIX::InstrumentPartyID InstrumentPartyID_63("STRING_1069355402");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_63);
      InstrumentParties_NoInstrumentParties_63.insert(InstrumentPartyID_63.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_63('1');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_63);
      InstrumentParties_NoInstrumentParties_63.insert(InstrumentPartyIDSource_63.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_63(1161492493);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_63);
      InstrumentParties_NoInstrumentParties_63.insert(InstrumentPartyRole_63.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_63);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132;
        FIX::InstrumentPartySubID InstrumentPartySubID_132("STRING_916601064");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_132);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132.insert(InstrumentPartySubID_132.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_132(382199200);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_132);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132.insert(InstrumentPartySubIDType_132.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133;
        FIX::InstrumentPartySubID InstrumentPartySubID_133("STRING_2103689947");
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubID_133);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133.insert(InstrumentPartySubID_133.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_133(334097370);
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubIDType_133);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133.insert(InstrumentPartySubIDType_133.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134;
        FIX::InstrumentPartySubID InstrumentPartySubID_134("STRING_296858848");
        noInstrumentPartySubIDs_0_2_2_2.set(InstrumentPartySubID_134);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134.insert(InstrumentPartySubID_134.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_134(1228470252);
        noInstrumentPartySubIDs_0_2_2_2.set(InstrumentPartySubIDType_134);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134.insert(InstrumentPartySubIDType_134.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_2);
      }
      noStrikes_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_62;
      FIX::SecurityAltID SecurityAltID_62("STRING_710374929");
      noSecurityAltID_0_1_0.set(SecurityAltID_62);
      SecAltIDGrp_NoSecurityAltID_62.insert(SecurityAltID_62.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_62("STRING_771331180");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_62);
      SecAltIDGrp_NoSecurityAltID_62.insert(SecurityAltIDSource_62.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_62);

      noStrikes_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_63;
      FIX::SecurityAltID SecurityAltID_63("STRING_2102758128");
      noSecurityAltID_0_1_1.set(SecurityAltID_63);
      SecAltIDGrp_NoSecurityAltID_63.insert(SecurityAltID_63.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_63("STRING_1981920830");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_63);
      SecAltIDGrp_NoSecurityAltID_63.insert(SecurityAltIDSource_63.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_63);

      noStrikes_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_64;
      FIX::SecurityAltID SecurityAltID_64("STRING_1490236609");
      noSecurityAltID_0_1_2.set(SecurityAltID_64);
      SecAltIDGrp_NoSecurityAltID_64.insert(SecurityAltID_64.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_64("STRING_1946553899");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_64);
      SecAltIDGrp_NoSecurityAltID_64.insert(SecurityAltIDSource_64.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_64);

      noStrikes_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_58;
    FIX::SecurityXML SecurityXML_59("XMLDATA_1210491150");
    noStrikes_0_0.set(SecurityXML_59);
    FIX::SecurityXMLLen SecurityXMLLen_29(896681510);
    noStrikes_0_0.set(SecurityXMLLen_29);
    FIX::SecurityXMLSchema SecurityXMLSchema_29("STRING_792260708");
    noStrikes_0_0.set(SecurityXMLSchema_29);
    SecurityXML_58.insert(SecurityXMLSchema_29.getString());
    all_values.push_back(SecurityXML_58);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_44;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_44("DATA_1731433301");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_44);
      UnderlyingInstrument_44.insert(EncodedUnderlyingIssuer_44.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_44(763464282);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_44);
      UnderlyingInstrument_44.insert(EncodedUnderlyingIssuerLen_44.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_44("DATA_1711380155");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_44);
      UnderlyingInstrument_44.insert(EncodedUnderlyingSecurityDesc_44.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_44(733509398);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_44);
      UnderlyingInstrument_44.insert(EncodedUnderlyingSecurityDescLen_44.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_44;
      UnderlyingAdjustedQuantity_44.setString("6714069");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_44);
      UnderlyingInstrument_44.insert(UnderlyingAdjustedQuantity_44.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_44;
      UnderlyingAllocationPercent_44.setString("68.400000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_44);
      UnderlyingInstrument_44.insert(UnderlyingAllocationPercent_44.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_44;
      UnderlyingAttachmentPoint_44.setString("11.990000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_44);
      UnderlyingInstrument_44.insert(UnderlyingAttachmentPoint_44.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_44("STRING_1259427284");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_44);
      UnderlyingInstrument_44.insert(UnderlyingCFICode_44.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_44("STRING_220910333");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_44);
      UnderlyingInstrument_44.insert(UnderlyingCPProgram_44.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_44("STRING_2063485804");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_44);
      UnderlyingInstrument_44.insert(UnderlyingCPRegType_44.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_44;
      UnderlyingCapValue_44.setString("1812990");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_44);
      UnderlyingInstrument_44.insert(UnderlyingCapValue_44.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_44;
      UnderlyingCashAmount_44.setString("20872514");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_44);
      UnderlyingInstrument_44.insert(UnderlyingCashAmount_44.getString());
      FIX::UnderlyingCashType UnderlyingCashType_44("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_44);
      UnderlyingInstrument_44.insert(UnderlyingCashType_44.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_44;
      UnderlyingContractMultiplier_44.setString("15303037");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_44);
      UnderlyingInstrument_44.insert(UnderlyingContractMultiplier_44.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_44(856368890);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_44);
      UnderlyingInstrument_44.insert(UnderlyingContractMultiplierUnit_44.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_44("COUNTRY_1459693850");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_44);
      UnderlyingInstrument_44.insert(UnderlyingCountryOfIssue_44.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_44("LOCALMKTDATE_1486510041");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_44);
      UnderlyingInstrument_44.insert(UnderlyingCouponPaymentDate_44.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_44;
      UnderlyingCouponRate_44.setString("62.610000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_44);
      UnderlyingInstrument_44.insert(UnderlyingCouponRate_44.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_44("STRING_1756552698");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_44);
      UnderlyingInstrument_44.insert(UnderlyingCreditRating_44.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_44("USD");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_44);
      UnderlyingInstrument_44.insert(UnderlyingCurrency_44.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_44;
      UnderlyingCurrentValue_44.setString("3194439");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_44);
      UnderlyingInstrument_44.insert(UnderlyingCurrentValue_44.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_44;
      UnderlyingDetachmentPoint_44.setString("78.260000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_44);
      UnderlyingInstrument_44.insert(UnderlyingDetachmentPoint_44.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_44;
      UnderlyingDirtyPrice_44.setString("3263451");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_44);
      UnderlyingInstrument_44.insert(UnderlyingDirtyPrice_44.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_44;
      UnderlyingEndPrice_44.setString("1538811");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_44);
      UnderlyingInstrument_44.insert(UnderlyingEndPrice_44.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_44;
      UnderlyingEndValue_44.setString("6815807");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_44);
      UnderlyingInstrument_44.insert(UnderlyingEndValue_44.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_44(125415403);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_44);
      UnderlyingInstrument_44.insert(UnderlyingExerciseStyle_44.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_44;
      UnderlyingFXRate_44.setString("13643723");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_44);
      UnderlyingInstrument_44.insert(UnderlyingFXRate_44.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_44('D');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_44);
      UnderlyingInstrument_44.insert(UnderlyingFXRateCalc_44.getString());
      FIX::UnderlyingFactor UnderlyingFactor_44;
      UnderlyingFactor_44.setString("9176761");
      noUnderlyings_0_1_0.set(UnderlyingFactor_44);
      UnderlyingInstrument_44.insert(UnderlyingFactor_44.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_44(616963205);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_44);
      UnderlyingInstrument_44.insert(UnderlyingFlowScheduleType_44.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_44("STRING_1162211951");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_44);
      UnderlyingInstrument_44.insert(UnderlyingInstrRegistry_44.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_44("LOCALMKTDATE_1681140393");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_44);
      UnderlyingInstrument_44.insert(UnderlyingIssueDate_44.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_44("STRING_180859712");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_44);
      UnderlyingInstrument_44.insert(UnderlyingIssuer_44.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_44("STRING_1895721349");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_44);
      UnderlyingInstrument_44.insert(UnderlyingLocaleOfIssue_44.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_44("LOCALMKTDATE_205063693");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_44);
      UnderlyingInstrument_44.insert(UnderlyingMaturityDate_44.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_44("MONTHYEAR_463206553");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_44);
      UnderlyingInstrument_44.insert(UnderlyingMaturityMonthYear_44.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_44("TZTIMEONLY_1316558901");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_44);
      UnderlyingInstrument_44.insert(UnderlyingMaturityTime_44.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_44;
      UnderlyingNotionalPercentageOutstanding_44.setString("9.770000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_44);
      UnderlyingInstrument_44.insert(UnderlyingNotionalPercentageOutstanding_44.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_44('6');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_44);
      UnderlyingInstrument_44.insert(UnderlyingOptAttribute_44.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_44;
      UnderlyingOriginalNotionalPercentageOutstanding_44.setString("10.570000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_44);
      UnderlyingInstrument_44.insert(UnderlyingOriginalNotionalPercentageOutstanding_44.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_44("STRING_1645790015");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_44);
      UnderlyingInstrument_44.insert(UnderlyingPriceUnitOfMeasure_44.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_44;
      UnderlyingPriceUnitOfMeasureQty_44.setString("6238847");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_44);
      UnderlyingInstrument_44.insert(UnderlyingPriceUnitOfMeasureQty_44.getString());
      FIX::UnderlyingProduct UnderlyingProduct_44(162572059);
      noUnderlyings_0_1_0.set(UnderlyingProduct_44);
      UnderlyingInstrument_44.insert(UnderlyingProduct_44.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_44(1028610110);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_44);
      UnderlyingInstrument_44.insert(UnderlyingPutOrCall_44.getString());
      FIX::UnderlyingPx UnderlyingPx_44;
      UnderlyingPx_44.setString("14802536");
      noUnderlyings_0_1_0.set(UnderlyingPx_44);
      UnderlyingInstrument_44.insert(UnderlyingPx_44.getString());
      FIX::UnderlyingQty UnderlyingQty_44;
      UnderlyingQty_44.setString("16222659");
      noUnderlyings_0_1_0.set(UnderlyingQty_44);
      UnderlyingInstrument_44.insert(UnderlyingQty_44.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_44("LOCALMKTDATE_367636503");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_44);
      UnderlyingInstrument_44.insert(UnderlyingRedemptionDate_44.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_44("STRING_523236216");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_44);
      UnderlyingInstrument_44.insert(UnderlyingRepoCollateralSecurityType_44.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_44;
      UnderlyingRepurchaseRate_44.setString("49.600000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_44);
      UnderlyingInstrument_44.insert(UnderlyingRepurchaseRate_44.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_44(935133149);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_44);
      UnderlyingInstrument_44.insert(UnderlyingRepurchaseTerm_44.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_44("STRING_894306888");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_44);
      UnderlyingInstrument_44.insert(UnderlyingRestructuringType_44.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_44("STRING_1550778940");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_44);
      UnderlyingInstrument_44.insert(UnderlyingSecurityDesc_44.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_44("EXCHANGE_126477327");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_44);
      UnderlyingInstrument_44.insert(UnderlyingSecurityExchange_44.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_44("STRING_1220652040");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_44);
      UnderlyingInstrument_44.insert(UnderlyingSecurityID_44.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_44("STRING_1704660103");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_44);
      UnderlyingInstrument_44.insert(UnderlyingSecurityIDSource_44.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_44("STRING_808058115");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_44);
      UnderlyingInstrument_44.insert(UnderlyingSecuritySubType_44.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_44("STRING_1346067443");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_44);
      UnderlyingInstrument_44.insert(UnderlyingSecurityType_44.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_44("STRING_921548767");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_44);
      UnderlyingInstrument_44.insert(UnderlyingSeniority_44.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_44("STRING_238836765");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_44);
      UnderlyingInstrument_44.insert(UnderlyingSettlMethod_44.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_44(2);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_44);
      UnderlyingInstrument_44.insert(UnderlyingSettlementType_44.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_44;
      UnderlyingStartValue_44.setString("15385119");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_44);
      UnderlyingInstrument_44.insert(UnderlyingStartValue_44.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_44("STRING_1401048716");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_44);
      UnderlyingInstrument_44.insert(UnderlyingStateOrProvinceOfIssue_44.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_44("CHF");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_44);
      UnderlyingInstrument_44.insert(UnderlyingStrikeCurrency_44.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_44;
      UnderlyingStrikePrice_44.setString("11492864");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_44);
      UnderlyingInstrument_44.insert(UnderlyingStrikePrice_44.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_44("STRING_2002463992");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_44);
      UnderlyingInstrument_44.insert(UnderlyingSymbol_44.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_44("STRING_35094590");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_44);
      UnderlyingInstrument_44.insert(UnderlyingSymbolSfx_44.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_44("STRING_318361670");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_44);
      UnderlyingInstrument_44.insert(UnderlyingTimeUnit_44.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_44("STRING_1319471321");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_44);
      UnderlyingInstrument_44.insert(UnderlyingUnitOfMeasure_44.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_44;
      UnderlyingUnitOfMeasureQty_44.setString("7192114");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_44);
      UnderlyingInstrument_44.insert(UnderlyingUnitOfMeasureQty_44.getString());
      all_values.push_back(UnderlyingInstrument_44);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_90;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_90("STRING_817777689");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_90);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_90.insert(UnderlyingSecurityAltID_90.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_90("STRING_1343096188");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_90);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_90.insert(UnderlyingSecurityAltIDSource_90.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_90);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_91;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_91("STRING_1713494787");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_91);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_91.insert(UnderlyingSecurityAltID_91.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_91("STRING_1846387799");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_91);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_91.insert(UnderlyingSecurityAltIDSource_91.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_91);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_92;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_92("STRING_675866143");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltID_92);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_92.insert(UnderlyingSecurityAltID_92.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_92("STRING_1188277049");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltIDSource_92);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_92.insert(UnderlyingSecurityAltIDSource_92.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_92);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_78;
        FIX::UnderlyingStipType UnderlyingStipType_78("STRING_1199102359");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_78);
        UnderlyingStipulations_NoUnderlyingStips_78.insert(UnderlyingStipType_78.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_78("STRING_272128362");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_78);
        UnderlyingStipulations_NoUnderlyingStips_78.insert(UnderlyingStipValue_78.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_78);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_97;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_97("STRING_2093409247");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_97);
        UndlyInstrumentParties_NoUndlyInstrumentParties_97.insert(UnderlyingInstrumentPartyID_97.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_97('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_97);
        UndlyInstrumentParties_NoUndlyInstrumentParties_97.insert(UnderlyingInstrumentPartyIDSource_97.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_97(1128151131);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_97);
        UndlyInstrumentParties_NoUndlyInstrumentParties_97.insert(UnderlyingInstrumentPartyRole_97.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_97);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_191("STRING_1380083757");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_191);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191.insert(UnderlyingInstrumentPartySubID_191.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_191(1936209246);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_191);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191.insert(UnderlyingInstrumentPartySubIDType_191.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noStrikes_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_45;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_45("DATA_365161434");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_45);
      UnderlyingInstrument_45.insert(EncodedUnderlyingIssuer_45.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_45(154148877);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_45);
      UnderlyingInstrument_45.insert(EncodedUnderlyingIssuerLen_45.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_45("DATA_27562363");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_45);
      UnderlyingInstrument_45.insert(EncodedUnderlyingSecurityDesc_45.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_45(481421340);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_45);
      UnderlyingInstrument_45.insert(EncodedUnderlyingSecurityDescLen_45.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_45;
      UnderlyingAdjustedQuantity_45.setString("16926608");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_45);
      UnderlyingInstrument_45.insert(UnderlyingAdjustedQuantity_45.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_45;
      UnderlyingAllocationPercent_45.setString("10.790000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_45);
      UnderlyingInstrument_45.insert(UnderlyingAllocationPercent_45.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_45;
      UnderlyingAttachmentPoint_45.setString("79.920000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_45);
      UnderlyingInstrument_45.insert(UnderlyingAttachmentPoint_45.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_45("STRING_1264548886");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_45);
      UnderlyingInstrument_45.insert(UnderlyingCFICode_45.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_45("STRING_430413849");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_45);
      UnderlyingInstrument_45.insert(UnderlyingCPProgram_45.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_45("STRING_2133801984");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_45);
      UnderlyingInstrument_45.insert(UnderlyingCPRegType_45.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_45;
      UnderlyingCapValue_45.setString("12996434");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_45);
      UnderlyingInstrument_45.insert(UnderlyingCapValue_45.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_45;
      UnderlyingCashAmount_45.setString("7487755");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_45);
      UnderlyingInstrument_45.insert(UnderlyingCashAmount_45.getString());
      FIX::UnderlyingCashType UnderlyingCashType_45("STRING_FIXED");
      noUnderlyings_0_1_1.set(UnderlyingCashType_45);
      UnderlyingInstrument_45.insert(UnderlyingCashType_45.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_45;
      UnderlyingContractMultiplier_45.setString("20188549");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_45);
      UnderlyingInstrument_45.insert(UnderlyingContractMultiplier_45.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_45(152214599);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_45);
      UnderlyingInstrument_45.insert(UnderlyingContractMultiplierUnit_45.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_45("COUNTRY_2123567347");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_45);
      UnderlyingInstrument_45.insert(UnderlyingCountryOfIssue_45.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_45("LOCALMKTDATE_1214467493");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_45);
      UnderlyingInstrument_45.insert(UnderlyingCouponPaymentDate_45.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_45;
      UnderlyingCouponRate_45.setString("93.870000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_45);
      UnderlyingInstrument_45.insert(UnderlyingCouponRate_45.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_45("STRING_1822471498");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_45);
      UnderlyingInstrument_45.insert(UnderlyingCreditRating_45.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_45("USD");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_45);
      UnderlyingInstrument_45.insert(UnderlyingCurrency_45.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_45;
      UnderlyingCurrentValue_45.setString("18890121");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_45);
      UnderlyingInstrument_45.insert(UnderlyingCurrentValue_45.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_45;
      UnderlyingDetachmentPoint_45.setString("23.480000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_45);
      UnderlyingInstrument_45.insert(UnderlyingDetachmentPoint_45.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_45;
      UnderlyingDirtyPrice_45.setString("11786311");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_45);
      UnderlyingInstrument_45.insert(UnderlyingDirtyPrice_45.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_45;
      UnderlyingEndPrice_45.setString("7432023");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_45);
      UnderlyingInstrument_45.insert(UnderlyingEndPrice_45.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_45;
      UnderlyingEndValue_45.setString("8878779");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_45);
      UnderlyingInstrument_45.insert(UnderlyingEndValue_45.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_45(854054805);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_45);
      UnderlyingInstrument_45.insert(UnderlyingExerciseStyle_45.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_45;
      UnderlyingFXRate_45.setString("18713534");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_45);
      UnderlyingInstrument_45.insert(UnderlyingFXRate_45.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_45('M');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_45);
      UnderlyingInstrument_45.insert(UnderlyingFXRateCalc_45.getString());
      FIX::UnderlyingFactor UnderlyingFactor_45;
      UnderlyingFactor_45.setString("866549");
      noUnderlyings_0_1_1.set(UnderlyingFactor_45);
      UnderlyingInstrument_45.insert(UnderlyingFactor_45.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_45(1660079038);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_45);
      UnderlyingInstrument_45.insert(UnderlyingFlowScheduleType_45.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_45("STRING_272133373");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_45);
      UnderlyingInstrument_45.insert(UnderlyingInstrRegistry_45.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_45("LOCALMKTDATE_240803791");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_45);
      UnderlyingInstrument_45.insert(UnderlyingIssueDate_45.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_45("STRING_1687641402");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_45);
      UnderlyingInstrument_45.insert(UnderlyingIssuer_45.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_45("STRING_753554714");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_45);
      UnderlyingInstrument_45.insert(UnderlyingLocaleOfIssue_45.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_45("LOCALMKTDATE_1933464641");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_45);
      UnderlyingInstrument_45.insert(UnderlyingMaturityDate_45.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_45("MONTHYEAR_968768833");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_45);
      UnderlyingInstrument_45.insert(UnderlyingMaturityMonthYear_45.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_45("TZTIMEONLY_884892706");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_45);
      UnderlyingInstrument_45.insert(UnderlyingMaturityTime_45.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_45;
      UnderlyingNotionalPercentageOutstanding_45.setString("98.790000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_45);
      UnderlyingInstrument_45.insert(UnderlyingNotionalPercentageOutstanding_45.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_45('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_45);
      UnderlyingInstrument_45.insert(UnderlyingOptAttribute_45.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_45;
      UnderlyingOriginalNotionalPercentageOutstanding_45.setString("10.420000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_45);
      UnderlyingInstrument_45.insert(UnderlyingOriginalNotionalPercentageOutstanding_45.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_45("STRING_202689708");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_45);
      UnderlyingInstrument_45.insert(UnderlyingPriceUnitOfMeasure_45.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_45;
      UnderlyingPriceUnitOfMeasureQty_45.setString("4745");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_45);
      UnderlyingInstrument_45.insert(UnderlyingPriceUnitOfMeasureQty_45.getString());
      FIX::UnderlyingProduct UnderlyingProduct_45(29517052);
      noUnderlyings_0_1_1.set(UnderlyingProduct_45);
      UnderlyingInstrument_45.insert(UnderlyingProduct_45.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_45(74061012);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_45);
      UnderlyingInstrument_45.insert(UnderlyingPutOrCall_45.getString());
      FIX::UnderlyingPx UnderlyingPx_45;
      UnderlyingPx_45.setString("1526891");
      noUnderlyings_0_1_1.set(UnderlyingPx_45);
      UnderlyingInstrument_45.insert(UnderlyingPx_45.getString());
      FIX::UnderlyingQty UnderlyingQty_45;
      UnderlyingQty_45.setString("56007");
      noUnderlyings_0_1_1.set(UnderlyingQty_45);
      UnderlyingInstrument_45.insert(UnderlyingQty_45.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_45("LOCALMKTDATE_1288528505");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_45);
      UnderlyingInstrument_45.insert(UnderlyingRedemptionDate_45.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_45("STRING_2018398540");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_45);
      UnderlyingInstrument_45.insert(UnderlyingRepoCollateralSecurityType_45.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_45;
      UnderlyingRepurchaseRate_45.setString("22.490000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_45);
      UnderlyingInstrument_45.insert(UnderlyingRepurchaseRate_45.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_45(1031378494);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_45);
      UnderlyingInstrument_45.insert(UnderlyingRepurchaseTerm_45.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_45("STRING_777417681");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_45);
      UnderlyingInstrument_45.insert(UnderlyingRestructuringType_45.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_45("STRING_1569600754");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_45);
      UnderlyingInstrument_45.insert(UnderlyingSecurityDesc_45.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_45("EXCHANGE_1973330842");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_45);
      UnderlyingInstrument_45.insert(UnderlyingSecurityExchange_45.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_45("STRING_1956048831");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_45);
      UnderlyingInstrument_45.insert(UnderlyingSecurityID_45.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_45("STRING_165319414");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_45);
      UnderlyingInstrument_45.insert(UnderlyingSecurityIDSource_45.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_45("STRING_713725141");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_45);
      UnderlyingInstrument_45.insert(UnderlyingSecuritySubType_45.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_45("STRING_662619988");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_45);
      UnderlyingInstrument_45.insert(UnderlyingSecurityType_45.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_45("STRING_2036672854");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_45);
      UnderlyingInstrument_45.insert(UnderlyingSeniority_45.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_45("STRING_620697080");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_45);
      UnderlyingInstrument_45.insert(UnderlyingSettlMethod_45.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_45(2);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_45);
      UnderlyingInstrument_45.insert(UnderlyingSettlementType_45.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_45;
      UnderlyingStartValue_45.setString("15492682");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_45);
      UnderlyingInstrument_45.insert(UnderlyingStartValue_45.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_45("STRING_892830454");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_45);
      UnderlyingInstrument_45.insert(UnderlyingStateOrProvinceOfIssue_45.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_45("CAN");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_45);
      UnderlyingInstrument_45.insert(UnderlyingStrikeCurrency_45.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_45;
      UnderlyingStrikePrice_45.setString("16463851");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_45);
      UnderlyingInstrument_45.insert(UnderlyingStrikePrice_45.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_45("STRING_776059687");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_45);
      UnderlyingInstrument_45.insert(UnderlyingSymbol_45.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_45("STRING_2058194832");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_45);
      UnderlyingInstrument_45.insert(UnderlyingSymbolSfx_45.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_45("STRING_383794226");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_45);
      UnderlyingInstrument_45.insert(UnderlyingTimeUnit_45.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_45("STRING_1826589567");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_45);
      UnderlyingInstrument_45.insert(UnderlyingUnitOfMeasure_45.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_45;
      UnderlyingUnitOfMeasureQty_45.setString("13098938");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_45);
      UnderlyingInstrument_45.insert(UnderlyingUnitOfMeasureQty_45.getString());
      all_values.push_back(UnderlyingInstrument_45);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_93;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_93("STRING_2029279275");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_93);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_93.insert(UnderlyingSecurityAltID_93.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_93("STRING_1310368421");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_93);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_93.insert(UnderlyingSecurityAltIDSource_93.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_93);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_94;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_94("STRING_1284522321");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_94);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_94.insert(UnderlyingSecurityAltID_94.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_94("STRING_2103340287");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_94);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_94.insert(UnderlyingSecurityAltIDSource_94.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_94);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_79;
        FIX::UnderlyingStipType UnderlyingStipType_79("STRING_1290123072");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_79);
        UnderlyingStipulations_NoUnderlyingStips_79.insert(UnderlyingStipType_79.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_79("STRING_1244385145");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_79);
        UnderlyingStipulations_NoUnderlyingStips_79.insert(UnderlyingStipValue_79.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_79);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_98;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_98("STRING_970711674");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_98);
        UndlyInstrumentParties_NoUndlyInstrumentParties_98.insert(UnderlyingInstrumentPartyID_98.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_98('1');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_98);
        UndlyInstrumentParties_NoUndlyInstrumentParties_98.insert(UnderlyingInstrumentPartyIDSource_98.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_98(2111390148);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_98);
        UndlyInstrumentParties_NoUndlyInstrumentParties_98.insert(UnderlyingInstrumentPartyRole_98.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_98);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_192("STRING_2101610833");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_192);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192.insert(UnderlyingInstrumentPartySubID_192.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_192(1919955331);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_192);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192.insert(UnderlyingInstrumentPartySubIDType_192.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_193("STRING_558148194");
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubID_193);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193.insert(UnderlyingInstrumentPartySubID_193.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_193(667852326);
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_193);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193.insert(UnderlyingInstrumentPartySubIDType_193.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_194("STRING_435091672");
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubID_194);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194.insert(UnderlyingInstrumentPartySubID_194.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_194(447337401);
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_194);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194.insert(UnderlyingInstrumentPartySubIDType_194.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      noStrikes_0_0.addGroup(noUnderlyings_0_1_1);
    }
    msg.addGroup(noStrikes_0_0);
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
