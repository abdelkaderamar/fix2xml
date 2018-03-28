#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/OrderMassStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassStatusRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderMassStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> OrderMassStatusRequest_0;
  FIX::Account Account_25("STRING_739044290");
  msg.set(Account_25);
  OrderMassStatusRequest_0.insert(Account_25.getString());
  FIX::AcctIDSource AcctIDSource_18(3);
  msg.set(AcctIDSource_18);
  OrderMassStatusRequest_0.insert(AcctIDSource_18.getString());
  FIX::MassStatusReqID MassStatusReqID_1("STRING_1569506171");
  msg.set(MassStatusReqID_1);
  OrderMassStatusRequest_0.insert(MassStatusReqID_1.getString());
  FIX::MassStatusReqType MassStatusReqType_0(9);
  msg.set(MassStatusReqType_0);
  OrderMassStatusRequest_0.insert(MassStatusReqType_0.getString());
  FIX::Side Side_39('7');
  msg.set(Side_39);
  OrderMassStatusRequest_0.insert(Side_39.getString());
  FIX::TradingSessionID TradingSessionID_59("STRING_2");
  msg.set(TradingSessionID_59);
  OrderMassStatusRequest_0.insert(TradingSessionID_59.getString());
  FIX::TradingSessionSubID TradingSessionSubID_59("STRING_7");
  msg.set(TradingSessionSubID_59);
  OrderMassStatusRequest_0.insert(TradingSessionSubID_59.getString());
  all_values.push_back(OrderMassStatusRequest_0);

  // Instrument
  multiset<string> Instrument_55;
  FIX::AttachmentPoint AttachmentPoint_55;
  AttachmentPoint_55.setString("40.460000");
  msg.set(AttachmentPoint_55);
  Instrument_55.insert(AttachmentPoint_55.getString());
  FIX::CFICode CFICode_55("STRING_2069214224");
  msg.set(CFICode_55);
  Instrument_55.insert(CFICode_55.getString());
  FIX::CPProgram CPProgram_55(2);
  msg.set(CPProgram_55);
  Instrument_55.insert(CPProgram_55.getString());
  FIX::CPRegType CPRegType_55("STRING_2037834172");
  msg.set(CPRegType_55);
  Instrument_55.insert(CPRegType_55.getString());
  FIX::CapPrice CapPrice_55;
  CapPrice_55.setString("51163");
  msg.set(CapPrice_55);
  Instrument_55.insert(CapPrice_55.getString());
  FIX::ContractMultiplier ContractMultiplier_55;
  ContractMultiplier_55.setString("13936992");
  msg.set(ContractMultiplier_55);
  Instrument_55.insert(ContractMultiplier_55.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_55(1);
  msg.set(ContractMultiplierUnit_55);
  Instrument_55.insert(ContractMultiplierUnit_55.getString());
  FIX::ContractSettlMonth ContractSettlMonth_55("MONTHYEAR_1777744321");
  msg.set(ContractSettlMonth_55);
  Instrument_55.insert(ContractSettlMonth_55.getString());
  FIX::CountryOfIssue CountryOfIssue_55("COUNTRY_697752008");
  msg.set(CountryOfIssue_55);
  Instrument_55.insert(CountryOfIssue_55.getString());
  FIX::CouponPaymentDate CouponPaymentDate_55("LOCALMKTDATE_376736328");
  msg.set(CouponPaymentDate_55);
  Instrument_55.insert(CouponPaymentDate_55.getString());
  FIX::CouponRate CouponRate_55;
  CouponRate_55.setString("3.620000");
  msg.set(CouponRate_55);
  Instrument_55.insert(CouponRate_55.getString());
  FIX::CreditRating CreditRating_55("STRING_491890984");
  msg.set(CreditRating_55);
  Instrument_55.insert(CreditRating_55.getString());
  FIX::DatedDate DatedDate_55("LOCALMKTDATE_1042942392");
  msg.set(DatedDate_55);
  Instrument_55.insert(DatedDate_55.getString());
  FIX::DetachmentPoint DetachmentPoint_55;
  DetachmentPoint_55.setString("80.160000");
  msg.set(DetachmentPoint_55);
  Instrument_55.insert(DetachmentPoint_55.getString());
  FIX::EncodedIssuer EncodedIssuer_55("DATA_1906559790");
  msg.set(EncodedIssuer_55);
  Instrument_55.insert(EncodedIssuer_55.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_55(1397842356);
  msg.set(EncodedIssuerLen_55);
  Instrument_55.insert(EncodedIssuerLen_55.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_55("DATA_2044494504");
  msg.set(EncodedSecurityDesc_55);
  Instrument_55.insert(EncodedSecurityDesc_55.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_55(1821816150);
  msg.set(EncodedSecurityDescLen_55);
  Instrument_55.insert(EncodedSecurityDescLen_55.getString());
  FIX::ExerciseStyle ExerciseStyle_55(0);
  msg.set(ExerciseStyle_55);
  Instrument_55.insert(ExerciseStyle_55.getString());
  FIX::Factor Factor_55;
  Factor_55.setString("3277296");
  msg.set(Factor_55);
  Instrument_55.insert(Factor_55.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_55(true);
  msg.set(FlexProductEligibilityIndicator_55);
  Instrument_55.insert(FlexProductEligibilityIndicator_55.getString());
  FIX::FlexibleIndicator FlexibleIndicator_55(true);
  msg.set(FlexibleIndicator_55);
  Instrument_55.insert(FlexibleIndicator_55.getString());
  FIX::FloorPrice FloorPrice_55;
  FloorPrice_55.setString("10613789");
  msg.set(FloorPrice_55);
  Instrument_55.insert(FloorPrice_55.getString());
  FIX::FlowScheduleType FlowScheduleType_55(0);
  msg.set(FlowScheduleType_55);
  Instrument_55.insert(FlowScheduleType_55.getString());
  FIX::InstrRegistry InstrRegistry_55("STRING_304880254");
  msg.set(InstrRegistry_55);
  Instrument_55.insert(InstrRegistry_55.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_55('1');
  msg.set(InstrmtAssignmentMethod_55);
  Instrument_55.insert(InstrmtAssignmentMethod_55.getString());
  FIX::InterestAccrualDate InterestAccrualDate_55("LOCALMKTDATE_122822913");
  msg.set(InterestAccrualDate_55);
  Instrument_55.insert(InterestAccrualDate_55.getString());
  FIX::IssueDate IssueDate_55("LOCALMKTDATE_1274714");
  msg.set(IssueDate_55);
  Instrument_55.insert(IssueDate_55.getString());
  FIX::Issuer Issuer_55("STRING_880104929");
  msg.set(Issuer_55);
  Instrument_55.insert(Issuer_55.getString());
  FIX::ListMethod ListMethod_55(0);
  msg.set(ListMethod_55);
  Instrument_55.insert(ListMethod_55.getString());
  FIX::LocaleOfIssue LocaleOfIssue_55("STRING_580758388");
  msg.set(LocaleOfIssue_55);
  Instrument_55.insert(LocaleOfIssue_55.getString());
  FIX::MaturityDate MaturityDate_55("LOCALMKTDATE_1527498975");
  msg.set(MaturityDate_55);
  Instrument_55.insert(MaturityDate_55.getString());
  FIX::MaturityMonthYear MaturityMonthYear_55("MONTHYEAR_1132910482");
  msg.set(MaturityMonthYear_55);
  Instrument_55.insert(MaturityMonthYear_55.getString());
  FIX::MaturityTime MaturityTime_55("TZTIMEONLY_1175143082");
  msg.set(MaturityTime_55);
  Instrument_55.insert(MaturityTime_55.getString());
  FIX::MinPriceIncrement MinPriceIncrement_55;
  MinPriceIncrement_55.setString("14178494");
  msg.set(MinPriceIncrement_55);
  Instrument_55.insert(MinPriceIncrement_55.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_55;
  MinPriceIncrementAmount_55.setString("11380268");
  msg.set(MinPriceIncrementAmount_55);
  Instrument_55.insert(MinPriceIncrementAmount_55.getString());
  FIX::NTPositionLimit NTPositionLimit_55(421358651);
  msg.set(NTPositionLimit_55);
  Instrument_55.insert(NTPositionLimit_55.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_55;
  NotionalPercentageOutstanding_55.setString("70.470000");
  msg.set(NotionalPercentageOutstanding_55);
  Instrument_55.insert(NotionalPercentageOutstanding_55.getString());
  FIX::OptAttribute OptAttribute_55('7');
  msg.set(OptAttribute_55);
  Instrument_55.insert(OptAttribute_55.getString());
  FIX::OptPayoutAmount OptPayoutAmount_55;
  OptPayoutAmount_55.setString("11191106");
  msg.set(OptPayoutAmount_55);
  Instrument_55.insert(OptPayoutAmount_55.getString());
  FIX::OptPayoutType OptPayoutType_55(2);
  msg.set(OptPayoutType_55);
  Instrument_55.insert(OptPayoutType_55.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_55;
  OriginalNotionalPercentageOutstanding_55.setString("42.030000");
  msg.set(OriginalNotionalPercentageOutstanding_55);
  Instrument_55.insert(OriginalNotionalPercentageOutstanding_55.getString());
  FIX::Pool Pool_55("STRING_1611001644");
  msg.set(Pool_55);
  Instrument_55.insert(Pool_55.getString());
  FIX::PositionLimit PositionLimit_55(162492120);
  msg.set(PositionLimit_55);
  Instrument_55.insert(PositionLimit_55.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_55("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_55);
  Instrument_55.insert(PriceQuoteMethod_55.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_55("STRING_1370077786");
  msg.set(PriceUnitOfMeasure_55);
  Instrument_55.insert(PriceUnitOfMeasure_55.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_55;
  PriceUnitOfMeasureQty_55.setString("15603344");
  msg.set(PriceUnitOfMeasureQty_55);
  Instrument_55.insert(PriceUnitOfMeasureQty_55.getString());
  FIX::Product Product_57(1);
  msg.set(Product_57);
  Instrument_55.insert(Product_57.getString());
  FIX::ProductComplex ProductComplex_55("STRING_1044410289");
  msg.set(ProductComplex_55);
  Instrument_55.insert(ProductComplex_55.getString());
  FIX::PutOrCall PutOrCall_55(1);
  msg.set(PutOrCall_55);
  Instrument_55.insert(PutOrCall_55.getString());
  FIX::RedemptionDate RedemptionDate_55("LOCALMKTDATE_2006442716");
  msg.set(RedemptionDate_55);
  Instrument_55.insert(RedemptionDate_55.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_55("STRING_1148452581");
  msg.set(RepoCollateralSecurityType_55);
  Instrument_55.insert(RepoCollateralSecurityType_55.getString());
  FIX::RepurchaseRate RepurchaseRate_55;
  RepurchaseRate_55.setString("86.630000");
  msg.set(RepurchaseRate_55);
  Instrument_55.insert(RepurchaseRate_55.getString());
  FIX::RepurchaseTerm RepurchaseTerm_55(920337983);
  msg.set(RepurchaseTerm_55);
  Instrument_55.insert(RepurchaseTerm_55.getString());
  FIX::RestructuringType RestructuringType_55("STRING_XR");
  msg.set(RestructuringType_55);
  Instrument_55.insert(RestructuringType_55.getString());
  FIX::SecurityDesc SecurityDesc_55("STRING_962258918");
  msg.set(SecurityDesc_55);
  Instrument_55.insert(SecurityDesc_55.getString());
  FIX::SecurityExchange SecurityExchange_55("EXCHANGE_500578906");
  msg.set(SecurityExchange_55);
  Instrument_55.insert(SecurityExchange_55.getString());
  FIX::SecurityGroup SecurityGroup_55("STRING_1972075884");
  msg.set(SecurityGroup_55);
  Instrument_55.insert(SecurityGroup_55.getString());
  FIX::SecurityID SecurityID_55("STRING_963533632");
  msg.set(SecurityID_55);
  Instrument_55.insert(SecurityID_55.getString());
  FIX::SecurityIDSource SecurityIDSource_55("STRING_4");
  msg.set(SecurityIDSource_55);
  Instrument_55.insert(SecurityIDSource_55.getString());
  FIX::SecurityStatus SecurityStatus_55("STRING_1");
  msg.set(SecurityStatus_55);
  Instrument_55.insert(SecurityStatus_55.getString());
  FIX::SecuritySubType SecuritySubType_56("STRING_1544292020");
  msg.set(SecuritySubType_56);
  Instrument_55.insert(SecuritySubType_56.getString());
  FIX::SecurityType SecurityType_57("STRING_CPP");
  msg.set(SecurityType_57);
  Instrument_55.insert(SecurityType_57.getString());
  FIX::Seniority Seniority_55("STRING_SR");
  msg.set(Seniority_55);
  Instrument_55.insert(Seniority_55.getString());
  FIX::SettlMethod SettlMethod_55('C');
  msg.set(SettlMethod_55);
  Instrument_55.insert(SettlMethod_55.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_55("STRING_31065013");
  msg.set(SettleOnOpenFlag_55);
  Instrument_55.insert(SettleOnOpenFlag_55.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_55("STRING_1159225791");
  msg.set(StateOrProvinceOfIssue_55);
  Instrument_55.insert(StateOrProvinceOfIssue_55.getString());
  FIX::StrikeCurrency StrikeCurrency_55("CHF");
  msg.set(StrikeCurrency_55);
  Instrument_55.insert(StrikeCurrency_55.getString());
  FIX::StrikeMultiplier StrikeMultiplier_55;
  StrikeMultiplier_55.setString("19275132");
  msg.set(StrikeMultiplier_55);
  Instrument_55.insert(StrikeMultiplier_55.getString());
  FIX::StrikePrice StrikePrice_55;
  StrikePrice_55.setString("21124207");
  msg.set(StrikePrice_55);
  Instrument_55.insert(StrikePrice_55.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_55(4);
  msg.set(StrikePriceBoundaryMethod_55);
  Instrument_55.insert(StrikePriceBoundaryMethod_55.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_55;
  StrikePriceBoundaryPrecision_55.setString("74.820000");
  msg.set(StrikePriceBoundaryPrecision_55);
  Instrument_55.insert(StrikePriceBoundaryPrecision_55.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_55(2);
  msg.set(StrikePriceDeterminationMethod_55);
  Instrument_55.insert(StrikePriceDeterminationMethod_55.getString());
  FIX::StrikeValue StrikeValue_55;
  StrikeValue_55.setString("2034039");
  msg.set(StrikeValue_55);
  Instrument_55.insert(StrikeValue_55.getString());
  FIX::Symbol Symbol_55("STRING_1759666053");
  msg.set(Symbol_55);
  Instrument_55.insert(Symbol_55.getString());
  FIX::SymbolSfx SymbolSfx_55("STRING_WI");
  msg.set(SymbolSfx_55);
  Instrument_55.insert(SymbolSfx_55.getString());
  FIX::TimeUnit TimeUnit_55("STRING_D");
  msg.set(TimeUnit_55);
  Instrument_55.insert(TimeUnit_55.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_55(1);
  msg.set(UnderlyingPriceDeterminationMethod_55);
  Instrument_55.insert(UnderlyingPriceDeterminationMethod_55.getString());
  FIX::UnitOfMeasure UnitOfMeasure_55("STRING_oz_tr");
  msg.set(UnitOfMeasure_55);
  Instrument_55.insert(UnitOfMeasure_55.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_55;
  UnitOfMeasureQty_55.setString("7077974");
  msg.set(UnitOfMeasureQty_55);
  Instrument_55.insert(UnitOfMeasureQty_55.getString());
  FIX::ValuationMethod ValuationMethod_55("STRING_CDSD");
  msg.set(ValuationMethod_55);
  Instrument_55.insert(ValuationMethod_55.getString());
  all_values.push_back(Instrument_55);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_108;
    FIX::ComplexEventCondition ComplexEventCondition_108(1);
    noComplexEvents_0_0.set(ComplexEventCondition_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventCondition_108.getString());
    FIX::ComplexEventPrice ComplexEventPrice_108;
    ComplexEventPrice_108.setString("20701925");
    noComplexEvents_0_0.set(ComplexEventPrice_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventPrice_108.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_108(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventPriceBoundaryMethod_108.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_108;
    ComplexEventPriceBoundaryPrecision_108.setString("13.700000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventPriceBoundaryPrecision_108.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_108(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventPriceTimeType_108.getString());
    FIX::ComplexEventType ComplexEventType_108(1);
    noComplexEvents_0_0.set(ComplexEventType_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventType_108.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_108;
    ComplexOptPayoutAmount_108.setString("11434850");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexOptPayoutAmount_108.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_108);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_224;
      FIX::ComplexEventEndDate ComplexEventEndDate_224(FIX::UTCTIMESTAMP(23, 1, 18, 17, 3, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_224);
      ComplexEventDates_NoComplexEventDates_224.insert(ComplexEventEndDate_224.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_224(FIX::UTCTIMESTAMP(23, 13, 52, 20, 12, 2009));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_224);
      ComplexEventDates_NoComplexEventDates_224.insert(ComplexEventStartDate_224.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_224);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_457;
        FIX::ComplexEventEndTime ComplexEventEndTime_457(FIX::UTCTIMEONLY(16, 29, 53));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_457);
        ComplexEventTimes_NoComplexEventTimes_457.insert(ComplexEventEndTime_457.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_457(FIX::UTCTIMEONLY(14, 14, 58));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_457);
        ComplexEventTimes_NoComplexEventTimes_457.insert(ComplexEventStartTime_457.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_457);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_458;
        FIX::ComplexEventEndTime ComplexEventEndTime_458(FIX::UTCTIMEONLY(23, 43, 48));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_458);
        ComplexEventTimes_NoComplexEventTimes_458.insert(ComplexEventEndTime_458.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_458(FIX::UTCTIMEONLY(19, 2, 8));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_458);
        ComplexEventTimes_NoComplexEventTimes_458.insert(ComplexEventStartTime_458.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_458);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_225;
      FIX::ComplexEventEndDate ComplexEventEndDate_225(FIX::UTCTIMESTAMP(13, 9, 48, 11, 1, 2002));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_225);
      ComplexEventDates_NoComplexEventDates_225.insert(ComplexEventEndDate_225.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_225(FIX::UTCTIMESTAMP(15, 3, 18, 27, 3, 2007));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_225);
      ComplexEventDates_NoComplexEventDates_225.insert(ComplexEventStartDate_225.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_225);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_459;
        FIX::ComplexEventEndTime ComplexEventEndTime_459(FIX::UTCTIMEONLY(11, 41, 57));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_459);
        ComplexEventTimes_NoComplexEventTimes_459.insert(ComplexEventEndTime_459.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_459(FIX::UTCTIMEONLY(19, 11, 7));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_459);
        ComplexEventTimes_NoComplexEventTimes_459.insert(ComplexEventStartTime_459.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_459);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_460;
        FIX::ComplexEventEndTime ComplexEventEndTime_460(FIX::UTCTIMEONLY(22, 42, 57));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_460);
        ComplexEventTimes_NoComplexEventTimes_460.insert(ComplexEventEndTime_460.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_460(FIX::UTCTIMEONLY(5, 0, 41));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_460);
        ComplexEventTimes_NoComplexEventTimes_460.insert(ComplexEventStartTime_460.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_460);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_461;
        FIX::ComplexEventEndTime ComplexEventEndTime_461(FIX::UTCTIMEONLY(13, 50, 44));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_461);
        ComplexEventTimes_NoComplexEventTimes_461.insert(ComplexEventEndTime_461.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_461(FIX::UTCTIMEONLY(2, 34, 22));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_461);
        ComplexEventTimes_NoComplexEventTimes_461.insert(ComplexEventStartTime_461.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_461);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_109;
    FIX::ComplexEventCondition ComplexEventCondition_109(1);
    noComplexEvents_0_1.set(ComplexEventCondition_109);
    ComplexEvents_NoComplexEvents_109.insert(ComplexEventCondition_109.getString());
    FIX::ComplexEventPrice ComplexEventPrice_109;
    ComplexEventPrice_109.setString("6912663");
    noComplexEvents_0_1.set(ComplexEventPrice_109);
    ComplexEvents_NoComplexEvents_109.insert(ComplexEventPrice_109.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_109(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_109);
    ComplexEvents_NoComplexEvents_109.insert(ComplexEventPriceBoundaryMethod_109.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_109;
    ComplexEventPriceBoundaryPrecision_109.setString("88.130000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_109);
    ComplexEvents_NoComplexEvents_109.insert(ComplexEventPriceBoundaryPrecision_109.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_109(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_109);
    ComplexEvents_NoComplexEvents_109.insert(ComplexEventPriceTimeType_109.getString());
    FIX::ComplexEventType ComplexEventType_109(4);
    noComplexEvents_0_1.set(ComplexEventType_109);
    ComplexEvents_NoComplexEvents_109.insert(ComplexEventType_109.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_109;
    ComplexOptPayoutAmount_109.setString("5037111");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_109);
    ComplexEvents_NoComplexEvents_109.insert(ComplexOptPayoutAmount_109.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_109);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_226;
      FIX::ComplexEventEndDate ComplexEventEndDate_226(FIX::UTCTIMESTAMP(15, 4, 31, 26, 4, 2000));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_226);
      ComplexEventDates_NoComplexEventDates_226.insert(ComplexEventEndDate_226.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_226(FIX::UTCTIMESTAMP(6, 12, 41, 18, 7, 2003));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_226);
      ComplexEventDates_NoComplexEventDates_226.insert(ComplexEventStartDate_226.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_226);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_462;
        FIX::ComplexEventEndTime ComplexEventEndTime_462(FIX::UTCTIMEONLY(23, 14, 53));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_462);
        ComplexEventTimes_NoComplexEventTimes_462.insert(ComplexEventEndTime_462.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_462(FIX::UTCTIMEONLY(20, 27, 14));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_462);
        ComplexEventTimes_NoComplexEventTimes_462.insert(ComplexEventStartTime_462.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_462);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_463;
        FIX::ComplexEventEndTime ComplexEventEndTime_463(FIX::UTCTIMEONLY(12, 46, 44));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_463);
        ComplexEventTimes_NoComplexEventTimes_463.insert(ComplexEventEndTime_463.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_463(FIX::UTCTIMEONLY(6, 29, 15));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_463);
        ComplexEventTimes_NoComplexEventTimes_463.insert(ComplexEventStartTime_463.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_463);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_464;
        FIX::ComplexEventEndTime ComplexEventEndTime_464(FIX::UTCTIMEONLY(20, 19, 0));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_464);
        ComplexEventTimes_NoComplexEventTimes_464.insert(ComplexEventEndTime_464.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_464(FIX::UTCTIMEONLY(2, 31, 59));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_464);
        ComplexEventTimes_NoComplexEventTimes_464.insert(ComplexEventStartTime_464.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_464);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_103;
    FIX::EventDate EventDate_103("LOCALMKTDATE_1489130683");
    noEvents_0_0.set(EventDate_103);
    EvntGrp_NoEvents_103.insert(EventDate_103.getString());
    FIX::EventPx EventPx_103;
    EventPx_103.setString("19448628");
    noEvents_0_0.set(EventPx_103);
    EvntGrp_NoEvents_103.insert(EventPx_103.getString());
    FIX::EventText EventText_103("STRING_616640299");
    noEvents_0_0.set(EventText_103);
    EvntGrp_NoEvents_103.insert(EventText_103.getString());
    FIX::EventTime EventTime_103(FIX::UTCTIMESTAMP(10, 42, 23, 17, 1, 2016));
    noEvents_0_0.set(EventTime_103);
    EvntGrp_NoEvents_103.insert(EventTime_103.getString());
    FIX::EventType EventType_103(1);
    noEvents_0_0.set(EventType_103);
    EvntGrp_NoEvents_103.insert(EventType_103.getString());
    all_values.push_back(EvntGrp_NoEvents_103);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_104;
    FIX::InstrumentPartyID InstrumentPartyID_104("STRING_1454834256");
    noInstrumentParties_0_0.set(InstrumentPartyID_104);
    InstrumentParties_NoInstrumentParties_104.insert(InstrumentPartyID_104.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_104('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_104);
    InstrumentParties_NoInstrumentParties_104.insert(InstrumentPartyIDSource_104.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_104(1318790719);
    noInstrumentParties_0_0.set(InstrumentPartyRole_104);
    InstrumentParties_NoInstrumentParties_104.insert(InstrumentPartyRole_104.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_104);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225;
      FIX::InstrumentPartySubID InstrumentPartySubID_225("STRING_57014333");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_225);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225.insert(InstrumentPartySubID_225.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_225(2120338803);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_225);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225.insert(InstrumentPartySubIDType_225.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_119;
    FIX::SecurityAltID SecurityAltID_119("STRING_901823819");
    noSecurityAltID_0_0.set(SecurityAltID_119);
    SecAltIDGrp_NoSecurityAltID_119.insert(SecurityAltID_119.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_119("STRING_1278114385");
    noSecurityAltID_0_0.set(SecurityAltIDSource_119);
    SecAltIDGrp_NoSecurityAltID_119.insert(SecurityAltIDSource_119.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_119);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_120;
    FIX::SecurityAltID SecurityAltID_120("STRING_485685751");
    noSecurityAltID_0_1.set(SecurityAltID_120);
    SecAltIDGrp_NoSecurityAltID_120.insert(SecurityAltID_120.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_120("STRING_874296328");
    noSecurityAltID_0_1.set(SecurityAltIDSource_120);
    SecAltIDGrp_NoSecurityAltID_120.insert(SecurityAltIDSource_120.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_120);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_110;
  FIX::SecurityXML SecurityXML_111("XMLDATA_1091758093");
  msg.set(SecurityXML_111);
  FIX::SecurityXMLLen SecurityXMLLen_55(1069980410);
  msg.set(SecurityXMLLen_55);
  FIX::SecurityXMLSchema SecurityXMLSchema_55("STRING_1186592908");
  msg.set(SecurityXMLSchema_55);
  SecurityXML_110.insert(SecurityXMLSchema_55.getString());
  all_values.push_back(SecurityXML_110);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_97;
    FIX::PartyID PartyID_97("STRING_1627646477");
    noPartyIDs_0_0.set(PartyID_97);
    Parties_NoPartyIDs_97.insert(PartyID_97.getString());
    FIX::PartyIDSource PartyIDSource_97('1');
    noPartyIDs_0_0.set(PartyIDSource_97);
    Parties_NoPartyIDs_97.insert(PartyIDSource_97.getString());
    FIX::PartyRole PartyRole_97(57);
    noPartyIDs_0_0.set(PartyRole_97);
    Parties_NoPartyIDs_97.insert(PartyRole_97.getString());
    all_values.push_back(Parties_NoPartyIDs_97);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_198;
      FIX::PartySubID PartySubID_198("STRING_934406075");
      noPartySubIDs_0_1_0.set(PartySubID_198);
      PtysSubGrp_NoPartySubIDs_198.insert(PartySubID_198.getString());
      FIX::PartySubIDType PartySubIDType_198(21);
      noPartySubIDs_0_1_0.set(PartySubIDType_198);
      PtysSubGrp_NoPartySubIDs_198.insert(PartySubIDType_198.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_198);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_199;
      FIX::PartySubID PartySubID_199("STRING_515775784");
      noPartySubIDs_0_1_1.set(PartySubID_199);
      PtysSubGrp_NoPartySubIDs_199.insert(PartySubID_199.getString());
      FIX::PartySubIDType PartySubIDType_199(29);
      noPartySubIDs_0_1_1.set(PartySubIDType_199);
      PtysSubGrp_NoPartySubIDs_199.insert(PartySubIDType_199.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_199);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_200;
      FIX::PartySubID PartySubID_200("STRING_1514162382");
      noPartySubIDs_0_1_2.set(PartySubID_200);
      PtysSubGrp_NoPartySubIDs_200.insert(PartySubID_200.getString());
      FIX::PartySubIDType PartySubIDType_200(6);
      noPartySubIDs_0_1_2.set(PartySubIDType_200);
      PtysSubGrp_NoPartySubIDs_200.insert(PartySubIDType_200.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_200);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_98;
    FIX::PartyID PartyID_98("STRING_1223250115");
    noPartyIDs_0_1.set(PartyID_98);
    Parties_NoPartyIDs_98.insert(PartyID_98.getString());
    FIX::PartyIDSource PartyIDSource_98('7');
    noPartyIDs_0_1.set(PartyIDSource_98);
    Parties_NoPartyIDs_98.insert(PartyIDSource_98.getString());
    FIX::PartyRole PartyRole_98(77);
    noPartyIDs_0_1.set(PartyRole_98);
    Parties_NoPartyIDs_98.insert(PartyRole_98.getString());
    all_values.push_back(Parties_NoPartyIDs_98);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_201;
      FIX::PartySubID PartySubID_201("STRING_585456215");
      noPartySubIDs_1_1_0.set(PartySubID_201);
      PtysSubGrp_NoPartySubIDs_201.insert(PartySubID_201.getString());
      FIX::PartySubIDType PartySubIDType_201(14);
      noPartySubIDs_1_1_0.set(PartySubIDType_201);
      PtysSubGrp_NoPartySubIDs_201.insert(PartySubIDType_201.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_201);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_202;
      FIX::PartySubID PartySubID_202("STRING_2095600480");
      noPartySubIDs_1_1_1.set(PartySubID_202);
      PtysSubGrp_NoPartySubIDs_202.insert(PartySubID_202.getString());
      FIX::PartySubIDType PartySubIDType_202(18);
      noPartySubIDs_1_1_1.set(PartySubIDType_202);
      PtysSubGrp_NoPartySubIDs_202.insert(PartySubIDType_202.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_202);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_11;
    FIX::TargetPartyID TargetPartyID_11("STRING_1984051916");
    noTargetPartyIDs_0_0.set(TargetPartyID_11);
    TargetParties_NoTargetPartyIDs_11.insert(TargetPartyID_11.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_11('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_11);
    TargetParties_NoTargetPartyIDs_11.insert(TargetPartyIDSource_11.getString());
    FIX::TargetPartyRole TargetPartyRole_11(1577436283);
    noTargetPartyIDs_0_0.set(TargetPartyRole_11);
    TargetParties_NoTargetPartyIDs_11.insert(TargetPartyRole_11.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_11);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_79;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_79("DATA_1996017313");
  msg.set(EncodedUnderlyingIssuer_79);
  UnderlyingInstrument_79.insert(EncodedUnderlyingIssuer_79.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_79(664940794);
  msg.set(EncodedUnderlyingIssuerLen_79);
  UnderlyingInstrument_79.insert(EncodedUnderlyingIssuerLen_79.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_79("DATA_708067020");
  msg.set(EncodedUnderlyingSecurityDesc_79);
  UnderlyingInstrument_79.insert(EncodedUnderlyingSecurityDesc_79.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_79(334219416);
  msg.set(EncodedUnderlyingSecurityDescLen_79);
  UnderlyingInstrument_79.insert(EncodedUnderlyingSecurityDescLen_79.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_79;
  UnderlyingAdjustedQuantity_79.setString("15392371");
  msg.set(UnderlyingAdjustedQuantity_79);
  UnderlyingInstrument_79.insert(UnderlyingAdjustedQuantity_79.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_79;
  UnderlyingAllocationPercent_79.setString("51.140000");
  msg.set(UnderlyingAllocationPercent_79);
  UnderlyingInstrument_79.insert(UnderlyingAllocationPercent_79.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_79;
  UnderlyingAttachmentPoint_79.setString("98.270000");
  msg.set(UnderlyingAttachmentPoint_79);
  UnderlyingInstrument_79.insert(UnderlyingAttachmentPoint_79.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_79("STRING_578346382");
  msg.set(UnderlyingCFICode_79);
  UnderlyingInstrument_79.insert(UnderlyingCFICode_79.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_79("STRING_1156266814");
  msg.set(UnderlyingCPProgram_79);
  UnderlyingInstrument_79.insert(UnderlyingCPProgram_79.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_79("STRING_884362656");
  msg.set(UnderlyingCPRegType_79);
  UnderlyingInstrument_79.insert(UnderlyingCPRegType_79.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_79;
  UnderlyingCapValue_79.setString("236217");
  msg.set(UnderlyingCapValue_79);
  UnderlyingInstrument_79.insert(UnderlyingCapValue_79.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_79;
  UnderlyingCashAmount_79.setString("4742456");
  msg.set(UnderlyingCashAmount_79);
  UnderlyingInstrument_79.insert(UnderlyingCashAmount_79.getString());
  FIX::UnderlyingCashType UnderlyingCashType_79("STRING_DIFF");
  msg.set(UnderlyingCashType_79);
  UnderlyingInstrument_79.insert(UnderlyingCashType_79.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_79;
  UnderlyingContractMultiplier_79.setString("9580278");
  msg.set(UnderlyingContractMultiplier_79);
  UnderlyingInstrument_79.insert(UnderlyingContractMultiplier_79.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_79(1737087270);
  msg.set(UnderlyingContractMultiplierUnit_79);
  UnderlyingInstrument_79.insert(UnderlyingContractMultiplierUnit_79.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_79("COUNTRY_1299273926");
  msg.set(UnderlyingCountryOfIssue_79);
  UnderlyingInstrument_79.insert(UnderlyingCountryOfIssue_79.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_79("LOCALMKTDATE_616496421");
  msg.set(UnderlyingCouponPaymentDate_79);
  UnderlyingInstrument_79.insert(UnderlyingCouponPaymentDate_79.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_79;
  UnderlyingCouponRate_79.setString("60.040000");
  msg.set(UnderlyingCouponRate_79);
  UnderlyingInstrument_79.insert(UnderlyingCouponRate_79.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_79("STRING_923148905");
  msg.set(UnderlyingCreditRating_79);
  UnderlyingInstrument_79.insert(UnderlyingCreditRating_79.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_79("CHF");
  msg.set(UnderlyingCurrency_79);
  UnderlyingInstrument_79.insert(UnderlyingCurrency_79.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_79;
  UnderlyingCurrentValue_79.setString("12574415");
  msg.set(UnderlyingCurrentValue_79);
  UnderlyingInstrument_79.insert(UnderlyingCurrentValue_79.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_79;
  UnderlyingDetachmentPoint_79.setString("91.130000");
  msg.set(UnderlyingDetachmentPoint_79);
  UnderlyingInstrument_79.insert(UnderlyingDetachmentPoint_79.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_79;
  UnderlyingDirtyPrice_79.setString("11036997");
  msg.set(UnderlyingDirtyPrice_79);
  UnderlyingInstrument_79.insert(UnderlyingDirtyPrice_79.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_79;
  UnderlyingEndPrice_79.setString("15432319");
  msg.set(UnderlyingEndPrice_79);
  UnderlyingInstrument_79.insert(UnderlyingEndPrice_79.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_79;
  UnderlyingEndValue_79.setString("2811459");
  msg.set(UnderlyingEndValue_79);
  UnderlyingInstrument_79.insert(UnderlyingEndValue_79.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_79(809802356);
  msg.set(UnderlyingExerciseStyle_79);
  UnderlyingInstrument_79.insert(UnderlyingExerciseStyle_79.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_79;
  UnderlyingFXRate_79.setString("10003294");
  msg.set(UnderlyingFXRate_79);
  UnderlyingInstrument_79.insert(UnderlyingFXRate_79.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_79('M');
  msg.set(UnderlyingFXRateCalc_79);
  UnderlyingInstrument_79.insert(UnderlyingFXRateCalc_79.getString());
  FIX::UnderlyingFactor UnderlyingFactor_79;
  UnderlyingFactor_79.setString("5729193");
  msg.set(UnderlyingFactor_79);
  UnderlyingInstrument_79.insert(UnderlyingFactor_79.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_79(430282036);
  msg.set(UnderlyingFlowScheduleType_79);
  UnderlyingInstrument_79.insert(UnderlyingFlowScheduleType_79.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_79("STRING_2113731526");
  msg.set(UnderlyingInstrRegistry_79);
  UnderlyingInstrument_79.insert(UnderlyingInstrRegistry_79.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_79("LOCALMKTDATE_1237860125");
  msg.set(UnderlyingIssueDate_79);
  UnderlyingInstrument_79.insert(UnderlyingIssueDate_79.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_79("STRING_1138349057");
  msg.set(UnderlyingIssuer_79);
  UnderlyingInstrument_79.insert(UnderlyingIssuer_79.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_79("STRING_300467295");
  msg.set(UnderlyingLocaleOfIssue_79);
  UnderlyingInstrument_79.insert(UnderlyingLocaleOfIssue_79.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_79("LOCALMKTDATE_629613599");
  msg.set(UnderlyingMaturityDate_79);
  UnderlyingInstrument_79.insert(UnderlyingMaturityDate_79.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_79("MONTHYEAR_790690523");
  msg.set(UnderlyingMaturityMonthYear_79);
  UnderlyingInstrument_79.insert(UnderlyingMaturityMonthYear_79.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_79("TZTIMEONLY_1704667122");
  msg.set(UnderlyingMaturityTime_79);
  UnderlyingInstrument_79.insert(UnderlyingMaturityTime_79.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_79;
  UnderlyingNotionalPercentageOutstanding_79.setString("99.820000");
  msg.set(UnderlyingNotionalPercentageOutstanding_79);
  UnderlyingInstrument_79.insert(UnderlyingNotionalPercentageOutstanding_79.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_79('1');
  msg.set(UnderlyingOptAttribute_79);
  UnderlyingInstrument_79.insert(UnderlyingOptAttribute_79.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_79;
  UnderlyingOriginalNotionalPercentageOutstanding_79.setString("61.300000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_79);
  UnderlyingInstrument_79.insert(UnderlyingOriginalNotionalPercentageOutstanding_79.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_79("STRING_1231581756");
  msg.set(UnderlyingPriceUnitOfMeasure_79);
  UnderlyingInstrument_79.insert(UnderlyingPriceUnitOfMeasure_79.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_79;
  UnderlyingPriceUnitOfMeasureQty_79.setString("2737193");
  msg.set(UnderlyingPriceUnitOfMeasureQty_79);
  UnderlyingInstrument_79.insert(UnderlyingPriceUnitOfMeasureQty_79.getString());
  FIX::UnderlyingProduct UnderlyingProduct_79(1225044271);
  msg.set(UnderlyingProduct_79);
  UnderlyingInstrument_79.insert(UnderlyingProduct_79.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_79(42125957);
  msg.set(UnderlyingPutOrCall_79);
  UnderlyingInstrument_79.insert(UnderlyingPutOrCall_79.getString());
  FIX::UnderlyingPx UnderlyingPx_79;
  UnderlyingPx_79.setString("20108065");
  msg.set(UnderlyingPx_79);
  UnderlyingInstrument_79.insert(UnderlyingPx_79.getString());
  FIX::UnderlyingQty UnderlyingQty_79;
  UnderlyingQty_79.setString("3768345");
  msg.set(UnderlyingQty_79);
  UnderlyingInstrument_79.insert(UnderlyingQty_79.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_79("LOCALMKTDATE_658622378");
  msg.set(UnderlyingRedemptionDate_79);
  UnderlyingInstrument_79.insert(UnderlyingRedemptionDate_79.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_79("STRING_967088941");
  msg.set(UnderlyingRepoCollateralSecurityType_79);
  UnderlyingInstrument_79.insert(UnderlyingRepoCollateralSecurityType_79.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_79;
  UnderlyingRepurchaseRate_79.setString("34.540000");
  msg.set(UnderlyingRepurchaseRate_79);
  UnderlyingInstrument_79.insert(UnderlyingRepurchaseRate_79.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_79(350885267);
  msg.set(UnderlyingRepurchaseTerm_79);
  UnderlyingInstrument_79.insert(UnderlyingRepurchaseTerm_79.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_79("STRING_1485332440");
  msg.set(UnderlyingRestructuringType_79);
  UnderlyingInstrument_79.insert(UnderlyingRestructuringType_79.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_79("STRING_409941319");
  msg.set(UnderlyingSecurityDesc_79);
  UnderlyingInstrument_79.insert(UnderlyingSecurityDesc_79.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_79("EXCHANGE_683914380");
  msg.set(UnderlyingSecurityExchange_79);
  UnderlyingInstrument_79.insert(UnderlyingSecurityExchange_79.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_79("STRING_441548507");
  msg.set(UnderlyingSecurityID_79);
  UnderlyingInstrument_79.insert(UnderlyingSecurityID_79.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_79("STRING_1953173240");
  msg.set(UnderlyingSecurityIDSource_79);
  UnderlyingInstrument_79.insert(UnderlyingSecurityIDSource_79.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_79("STRING_965060325");
  msg.set(UnderlyingSecuritySubType_79);
  UnderlyingInstrument_79.insert(UnderlyingSecuritySubType_79.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_79("STRING_1251350863");
  msg.set(UnderlyingSecurityType_79);
  UnderlyingInstrument_79.insert(UnderlyingSecurityType_79.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_79("STRING_806018993");
  msg.set(UnderlyingSeniority_79);
  UnderlyingInstrument_79.insert(UnderlyingSeniority_79.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_79("STRING_1082774539");
  msg.set(UnderlyingSettlMethod_79);
  UnderlyingInstrument_79.insert(UnderlyingSettlMethod_79.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_79(2);
  msg.set(UnderlyingSettlementType_79);
  UnderlyingInstrument_79.insert(UnderlyingSettlementType_79.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_79;
  UnderlyingStartValue_79.setString("12363010");
  msg.set(UnderlyingStartValue_79);
  UnderlyingInstrument_79.insert(UnderlyingStartValue_79.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_79("STRING_1049022417");
  msg.set(UnderlyingStateOrProvinceOfIssue_79);
  UnderlyingInstrument_79.insert(UnderlyingStateOrProvinceOfIssue_79.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_79("USD");
  msg.set(UnderlyingStrikeCurrency_79);
  UnderlyingInstrument_79.insert(UnderlyingStrikeCurrency_79.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_79;
  UnderlyingStrikePrice_79.setString("13494897");
  msg.set(UnderlyingStrikePrice_79);
  UnderlyingInstrument_79.insert(UnderlyingStrikePrice_79.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_79("STRING_1544260272");
  msg.set(UnderlyingSymbol_79);
  UnderlyingInstrument_79.insert(UnderlyingSymbol_79.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_79("STRING_1017856961");
  msg.set(UnderlyingSymbolSfx_79);
  UnderlyingInstrument_79.insert(UnderlyingSymbolSfx_79.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_79("STRING_906673186");
  msg.set(UnderlyingTimeUnit_79);
  UnderlyingInstrument_79.insert(UnderlyingTimeUnit_79.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_79("STRING_604736606");
  msg.set(UnderlyingUnitOfMeasure_79);
  UnderlyingInstrument_79.insert(UnderlyingUnitOfMeasure_79.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_79;
  UnderlyingUnitOfMeasureQty_79.setString("8173306");
  msg.set(UnderlyingUnitOfMeasureQty_79);
  UnderlyingInstrument_79.insert(UnderlyingUnitOfMeasureQty_79.getString());
  all_values.push_back(UnderlyingInstrument_79);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_165;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_165("STRING_1836318362");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_165);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_165.insert(UnderlyingSecurityAltID_165.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_165("STRING_1091049966");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_165);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_165.insert(UnderlyingSecurityAltIDSource_165.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_165);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_166;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_166("STRING_425779940");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_166);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_166.insert(UnderlyingSecurityAltID_166.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_166("STRING_1878444319");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_166);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_166.insert(UnderlyingSecurityAltIDSource_166.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_166);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_167;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_167("STRING_954372904");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltID_167);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_167.insert(UnderlyingSecurityAltID_167.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_167("STRING_802614489");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltIDSource_167);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_167.insert(UnderlyingSecurityAltIDSource_167.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_167);

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_152;
    FIX::UnderlyingStipType UnderlyingStipType_152("STRING_1921461845");
    noUnderlyingStips_0_0.set(UnderlyingStipType_152);
    UnderlyingStipulations_NoUnderlyingStips_152.insert(UnderlyingStipType_152.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_152("STRING_2102597944");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_152);
    UnderlyingStipulations_NoUnderlyingStips_152.insert(UnderlyingStipValue_152.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_152);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_153;
    FIX::UnderlyingStipType UnderlyingStipType_153("STRING_740468317");
    noUnderlyingStips_0_1.set(UnderlyingStipType_153);
    UnderlyingStipulations_NoUnderlyingStips_153.insert(UnderlyingStipType_153.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_153("STRING_1259310638");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_153);
    UnderlyingStipulations_NoUnderlyingStips_153.insert(UnderlyingStipValue_153.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_153);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_162;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_162("STRING_1424382697");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_162);
    UndlyInstrumentParties_NoUndlyInstrumentParties_162.insert(UnderlyingInstrumentPartyID_162.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_162('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_162);
    UndlyInstrumentParties_NoUndlyInstrumentParties_162.insert(UnderlyingInstrumentPartyIDSource_162.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_162(170745207);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_162);
    UndlyInstrumentParties_NoUndlyInstrumentParties_162.insert(UnderlyingInstrumentPartyRole_162.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_162);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_328("STRING_804726360");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_328);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328.insert(UnderlyingInstrumentPartySubID_328.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_328(976764200);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_328);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328.insert(UnderlyingInstrumentPartySubIDType_328.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328);

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
