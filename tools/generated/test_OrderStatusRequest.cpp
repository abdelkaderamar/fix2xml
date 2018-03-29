#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/OrderStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderStatusRequest_0;
  FIX::Account Account_29("STRING_51819009");
  msg.set(Account_29);
  OrderStatusRequest_0.insert(Account_29.getString());
  FIX::AcctIDSource AcctIDSource_22(99);
  msg.set(AcctIDSource_22);
  OrderStatusRequest_0.insert(AcctIDSource_22.getString());
  FIX::ClOrdID ClOrdID_41("STRING_677273247");
  msg.set(ClOrdID_41);
  OrderStatusRequest_0.insert(ClOrdID_41.getString());
  FIX::ClOrdLinkID ClOrdLinkID_17("STRING_695465798");
  msg.set(ClOrdLinkID_17);
  OrderStatusRequest_0.insert(ClOrdLinkID_17.getString());
  FIX::OrdStatusReqID OrdStatusReqID_1("STRING_113416489");
  msg.set(OrdStatusReqID_1);
  OrderStatusRequest_0.insert(OrdStatusReqID_1.getString());
  FIX::OrderID OrderID_31("STRING_76178163");
  msg.set(OrderID_31);
  OrderStatusRequest_0.insert(OrderID_31.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_39("STRING_533833492");
  msg.set(SecondaryClOrdID_39);
  OrderStatusRequest_0.insert(SecondaryClOrdID_39.getString());
  FIX::Side Side_40('8');
  msg.set(Side_40);
  OrderStatusRequest_0.insert(Side_40.getString());
  all_values.push_back(OrderStatusRequest_0);

  all_compo_names.insert("OrderStatusRequest");

  // FinancingDetails
  multiset<string> FinancingDetails_15;
  FIX::AgreementCurrency AgreementCurrency_15("CHF");
  msg.set(AgreementCurrency_15);
  FinancingDetails_15.insert(AgreementCurrency_15.getString());
  FIX::AgreementDate AgreementDate_15("LOCALMKTDATE_105063321");
  msg.set(AgreementDate_15);
  FinancingDetails_15.insert(AgreementDate_15.getString());
  FIX::AgreementDesc AgreementDesc_15("STRING_809744583");
  msg.set(AgreementDesc_15);
  FinancingDetails_15.insert(AgreementDesc_15.getString());
  FIX::AgreementID AgreementID_15("STRING_759102257");
  msg.set(AgreementID_15);
  FinancingDetails_15.insert(AgreementID_15.getString());
  FIX::DeliveryType DeliveryType_15(1);
  msg.set(DeliveryType_15);
  FinancingDetails_15.insert(DeliveryType_15.getString());
  FIX::EndDate EndDate_15("LOCALMKTDATE_1603545004");
  msg.set(EndDate_15);
  FinancingDetails_15.insert(EndDate_15.getString());
  FIX::MarginRatio MarginRatio_15;
  MarginRatio_15.setString("91.200000");
  msg.set(MarginRatio_15);
  FinancingDetails_15.insert(MarginRatio_15.getString());
  FIX::StartDate StartDate_15("LOCALMKTDATE_1947920769");
  msg.set(StartDate_15);
  FinancingDetails_15.insert(StartDate_15.getString());
  FIX::TerminationType TerminationType_15(2);
  msg.set(TerminationType_15);
  FinancingDetails_15.insert(TerminationType_15.getString());
  all_values.push_back(FinancingDetails_15);
  all_compo_names.insert("FinancingDetails");

  // Instrument
  multiset<string> Instrument_62;
  FIX::AttachmentPoint AttachmentPoint_62;
  AttachmentPoint_62.setString("64.830000");
  msg.set(AttachmentPoint_62);
  Instrument_62.insert(AttachmentPoint_62.getString());
  FIX::CFICode CFICode_62("STRING_1717390715");
  msg.set(CFICode_62);
  Instrument_62.insert(CFICode_62.getString());
  FIX::CPProgram CPProgram_62(1);
  msg.set(CPProgram_62);
  Instrument_62.insert(CPProgram_62.getString());
  FIX::CPRegType CPRegType_62("STRING_130460267");
  msg.set(CPRegType_62);
  Instrument_62.insert(CPRegType_62.getString());
  FIX::CapPrice CapPrice_62;
  CapPrice_62.setString("10770160");
  msg.set(CapPrice_62);
  Instrument_62.insert(CapPrice_62.getString());
  FIX::ContractMultiplier ContractMultiplier_62;
  ContractMultiplier_62.setString("14683300");
  msg.set(ContractMultiplier_62);
  Instrument_62.insert(ContractMultiplier_62.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_62(1);
  msg.set(ContractMultiplierUnit_62);
  Instrument_62.insert(ContractMultiplierUnit_62.getString());
  FIX::ContractSettlMonth ContractSettlMonth_62("MONTHYEAR_1225730259");
  msg.set(ContractSettlMonth_62);
  Instrument_62.insert(ContractSettlMonth_62.getString());
  FIX::CountryOfIssue CountryOfIssue_62("COUNTRY_1747101341");
  msg.set(CountryOfIssue_62);
  Instrument_62.insert(CountryOfIssue_62.getString());
  FIX::CouponPaymentDate CouponPaymentDate_62("LOCALMKTDATE_1765329581");
  msg.set(CouponPaymentDate_62);
  Instrument_62.insert(CouponPaymentDate_62.getString());
  FIX::CouponRate CouponRate_62;
  CouponRate_62.setString("6.640000");
  msg.set(CouponRate_62);
  Instrument_62.insert(CouponRate_62.getString());
  FIX::CreditRating CreditRating_62("STRING_886393523");
  msg.set(CreditRating_62);
  Instrument_62.insert(CreditRating_62.getString());
  FIX::DatedDate DatedDate_62("LOCALMKTDATE_36842254");
  msg.set(DatedDate_62);
  Instrument_62.insert(DatedDate_62.getString());
  FIX::DetachmentPoint DetachmentPoint_62;
  DetachmentPoint_62.setString("96.730000");
  msg.set(DetachmentPoint_62);
  Instrument_62.insert(DetachmentPoint_62.getString());
  FIX::EncodedIssuer EncodedIssuer_62("DATA_539169297");
  msg.set(EncodedIssuer_62);
  Instrument_62.insert(EncodedIssuer_62.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_62(714115501);
  msg.set(EncodedIssuerLen_62);
  Instrument_62.insert(EncodedIssuerLen_62.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_62("DATA_302311823");
  msg.set(EncodedSecurityDesc_62);
  Instrument_62.insert(EncodedSecurityDesc_62.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_62(652585786);
  msg.set(EncodedSecurityDescLen_62);
  Instrument_62.insert(EncodedSecurityDescLen_62.getString());
  FIX::ExerciseStyle ExerciseStyle_62(1);
  msg.set(ExerciseStyle_62);
  Instrument_62.insert(ExerciseStyle_62.getString());
  FIX::Factor Factor_62;
  Factor_62.setString("8361453");
  msg.set(Factor_62);
  Instrument_62.insert(Factor_62.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_62(false);
  msg.set(FlexProductEligibilityIndicator_62);
  Instrument_62.insert(FlexProductEligibilityIndicator_62.getString());
  FIX::FlexibleIndicator FlexibleIndicator_62(true);
  msg.set(FlexibleIndicator_62);
  Instrument_62.insert(FlexibleIndicator_62.getString());
  FIX::FloorPrice FloorPrice_62;
  FloorPrice_62.setString("10530430");
  msg.set(FloorPrice_62);
  Instrument_62.insert(FloorPrice_62.getString());
  FIX::FlowScheduleType FlowScheduleType_62(3);
  msg.set(FlowScheduleType_62);
  Instrument_62.insert(FlowScheduleType_62.getString());
  FIX::InstrRegistry InstrRegistry_62("STRING_573312080");
  msg.set(InstrRegistry_62);
  Instrument_62.insert(InstrRegistry_62.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_62('1');
  msg.set(InstrmtAssignmentMethod_62);
  Instrument_62.insert(InstrmtAssignmentMethod_62.getString());
  FIX::InterestAccrualDate InterestAccrualDate_62("LOCALMKTDATE_963132583");
  msg.set(InterestAccrualDate_62);
  Instrument_62.insert(InterestAccrualDate_62.getString());
  FIX::IssueDate IssueDate_62("LOCALMKTDATE_29373436");
  msg.set(IssueDate_62);
  Instrument_62.insert(IssueDate_62.getString());
  FIX::Issuer Issuer_62("STRING_1292890805");
  msg.set(Issuer_62);
  Instrument_62.insert(Issuer_62.getString());
  FIX::ListMethod ListMethod_62(0);
  msg.set(ListMethod_62);
  Instrument_62.insert(ListMethod_62.getString());
  FIX::LocaleOfIssue LocaleOfIssue_62("STRING_6162961");
  msg.set(LocaleOfIssue_62);
  Instrument_62.insert(LocaleOfIssue_62.getString());
  FIX::MaturityDate MaturityDate_62("LOCALMKTDATE_996503640");
  msg.set(MaturityDate_62);
  Instrument_62.insert(MaturityDate_62.getString());
  FIX::MaturityMonthYear MaturityMonthYear_62("MONTHYEAR_333476772");
  msg.set(MaturityMonthYear_62);
  Instrument_62.insert(MaturityMonthYear_62.getString());
  FIX::MaturityTime MaturityTime_62("TZTIMEONLY_1935978808");
  msg.set(MaturityTime_62);
  Instrument_62.insert(MaturityTime_62.getString());
  FIX::MinPriceIncrement MinPriceIncrement_62;
  MinPriceIncrement_62.setString("11269639");
  msg.set(MinPriceIncrement_62);
  Instrument_62.insert(MinPriceIncrement_62.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_62;
  MinPriceIncrementAmount_62.setString("14104928");
  msg.set(MinPriceIncrementAmount_62);
  Instrument_62.insert(MinPriceIncrementAmount_62.getString());
  FIX::NTPositionLimit NTPositionLimit_62(1256825160);
  msg.set(NTPositionLimit_62);
  Instrument_62.insert(NTPositionLimit_62.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_62;
  NotionalPercentageOutstanding_62.setString("88.480000");
  msg.set(NotionalPercentageOutstanding_62);
  Instrument_62.insert(NotionalPercentageOutstanding_62.getString());
  FIX::OptAttribute OptAttribute_62('4');
  msg.set(OptAttribute_62);
  Instrument_62.insert(OptAttribute_62.getString());
  FIX::OptPayoutAmount OptPayoutAmount_62;
  OptPayoutAmount_62.setString("8564428");
  msg.set(OptPayoutAmount_62);
  Instrument_62.insert(OptPayoutAmount_62.getString());
  FIX::OptPayoutType OptPayoutType_62(2);
  msg.set(OptPayoutType_62);
  Instrument_62.insert(OptPayoutType_62.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_62;
  OriginalNotionalPercentageOutstanding_62.setString("64.490000");
  msg.set(OriginalNotionalPercentageOutstanding_62);
  Instrument_62.insert(OriginalNotionalPercentageOutstanding_62.getString());
  FIX::Pool Pool_62("STRING_1742836377");
  msg.set(Pool_62);
  Instrument_62.insert(Pool_62.getString());
  FIX::PositionLimit PositionLimit_62(443877036);
  msg.set(PositionLimit_62);
  Instrument_62.insert(PositionLimit_62.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_62("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_62);
  Instrument_62.insert(PriceQuoteMethod_62.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_62("STRING_134522026");
  msg.set(PriceUnitOfMeasure_62);
  Instrument_62.insert(PriceUnitOfMeasure_62.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_62;
  PriceUnitOfMeasureQty_62.setString("11579925");
  msg.set(PriceUnitOfMeasureQty_62);
  Instrument_62.insert(PriceUnitOfMeasureQty_62.getString());
  FIX::Product Product_64(1);
  msg.set(Product_64);
  Instrument_62.insert(Product_64.getString());
  FIX::ProductComplex ProductComplex_62("STRING_787107812");
  msg.set(ProductComplex_62);
  Instrument_62.insert(ProductComplex_62.getString());
  FIX::PutOrCall PutOrCall_62(0);
  msg.set(PutOrCall_62);
  Instrument_62.insert(PutOrCall_62.getString());
  FIX::RedemptionDate RedemptionDate_62("LOCALMKTDATE_789069614");
  msg.set(RedemptionDate_62);
  Instrument_62.insert(RedemptionDate_62.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_62("STRING_2009616149");
  msg.set(RepoCollateralSecurityType_62);
  Instrument_62.insert(RepoCollateralSecurityType_62.getString());
  FIX::RepurchaseRate RepurchaseRate_62;
  RepurchaseRate_62.setString("36.980000");
  msg.set(RepurchaseRate_62);
  Instrument_62.insert(RepurchaseRate_62.getString());
  FIX::RepurchaseTerm RepurchaseTerm_62(1842112689);
  msg.set(RepurchaseTerm_62);
  Instrument_62.insert(RepurchaseTerm_62.getString());
  FIX::RestructuringType RestructuringType_62("STRING_XR");
  msg.set(RestructuringType_62);
  Instrument_62.insert(RestructuringType_62.getString());
  FIX::SecurityDesc SecurityDesc_62("STRING_137682130");
  msg.set(SecurityDesc_62);
  Instrument_62.insert(SecurityDesc_62.getString());
  FIX::SecurityExchange SecurityExchange_62("EXCHANGE_1506774374");
  msg.set(SecurityExchange_62);
  Instrument_62.insert(SecurityExchange_62.getString());
  FIX::SecurityGroup SecurityGroup_62("STRING_5353094");
  msg.set(SecurityGroup_62);
  Instrument_62.insert(SecurityGroup_62.getString());
  FIX::SecurityID SecurityID_62("STRING_167055566");
  msg.set(SecurityID_62);
  Instrument_62.insert(SecurityID_62.getString());
  FIX::SecurityIDSource SecurityIDSource_62("STRING_2");
  msg.set(SecurityIDSource_62);
  Instrument_62.insert(SecurityIDSource_62.getString());
  FIX::SecurityStatus SecurityStatus_62("STRING_2");
  msg.set(SecurityStatus_62);
  Instrument_62.insert(SecurityStatus_62.getString());
  FIX::SecuritySubType SecuritySubType_63("STRING_173218527");
  msg.set(SecuritySubType_63);
  Instrument_62.insert(SecuritySubType_63.getString());
  FIX::SecurityType SecurityType_64("STRING_REPO");
  msg.set(SecurityType_64);
  Instrument_62.insert(SecurityType_64.getString());
  FIX::Seniority Seniority_62("STRING_SB");
  msg.set(Seniority_62);
  Instrument_62.insert(Seniority_62.getString());
  FIX::SettlMethod SettlMethod_62('C');
  msg.set(SettlMethod_62);
  Instrument_62.insert(SettlMethod_62.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_62("STRING_628165430");
  msg.set(SettleOnOpenFlag_62);
  Instrument_62.insert(SettleOnOpenFlag_62.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_62("STRING_365408745");
  msg.set(StateOrProvinceOfIssue_62);
  Instrument_62.insert(StateOrProvinceOfIssue_62.getString());
  FIX::StrikeCurrency StrikeCurrency_62("USD");
  msg.set(StrikeCurrency_62);
  Instrument_62.insert(StrikeCurrency_62.getString());
  FIX::StrikeMultiplier StrikeMultiplier_62;
  StrikeMultiplier_62.setString("8541481");
  msg.set(StrikeMultiplier_62);
  Instrument_62.insert(StrikeMultiplier_62.getString());
  FIX::StrikePrice StrikePrice_62;
  StrikePrice_62.setString("20749817");
  msg.set(StrikePrice_62);
  Instrument_62.insert(StrikePrice_62.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_62(1);
  msg.set(StrikePriceBoundaryMethod_62);
  Instrument_62.insert(StrikePriceBoundaryMethod_62.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_62;
  StrikePriceBoundaryPrecision_62.setString("46.280000");
  msg.set(StrikePriceBoundaryPrecision_62);
  Instrument_62.insert(StrikePriceBoundaryPrecision_62.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_62(1);
  msg.set(StrikePriceDeterminationMethod_62);
  Instrument_62.insert(StrikePriceDeterminationMethod_62.getString());
  FIX::StrikeValue StrikeValue_62;
  StrikeValue_62.setString("1207824");
  msg.set(StrikeValue_62);
  Instrument_62.insert(StrikeValue_62.getString());
  FIX::Symbol Symbol_62("STRING_548527103");
  msg.set(Symbol_62);
  Instrument_62.insert(Symbol_62.getString());
  FIX::SymbolSfx SymbolSfx_62("STRING_CD");
  msg.set(SymbolSfx_62);
  Instrument_62.insert(SymbolSfx_62.getString());
  FIX::TimeUnit TimeUnit_62("STRING_Mo");
  msg.set(TimeUnit_62);
  Instrument_62.insert(TimeUnit_62.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_62(2);
  msg.set(UnderlyingPriceDeterminationMethod_62);
  Instrument_62.insert(UnderlyingPriceDeterminationMethod_62.getString());
  FIX::UnitOfMeasure UnitOfMeasure_62("STRING_MMBtu");
  msg.set(UnitOfMeasure_62);
  Instrument_62.insert(UnitOfMeasure_62.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_62;
  UnitOfMeasureQty_62.setString("10795775");
  msg.set(UnitOfMeasureQty_62);
  Instrument_62.insert(UnitOfMeasureQty_62.getString());
  FIX::ValuationMethod ValuationMethod_62("STRING_FUT");
  msg.set(ValuationMethod_62);
  Instrument_62.insert(ValuationMethod_62.getString());
  all_values.push_back(Instrument_62);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_127;
    FIX::ComplexEventCondition ComplexEventCondition_127(1);
    noComplexEvents_0_0.set(ComplexEventCondition_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventCondition_127.getString());
    FIX::ComplexEventPrice ComplexEventPrice_127;
    ComplexEventPrice_127.setString("9851500");
    noComplexEvents_0_0.set(ComplexEventPrice_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventPrice_127.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_127(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventPriceBoundaryMethod_127.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_127;
    ComplexEventPriceBoundaryPrecision_127.setString("97.200000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventPriceBoundaryPrecision_127.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_127(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventPriceTimeType_127.getString());
    FIX::ComplexEventType ComplexEventType_127(3);
    noComplexEvents_0_0.set(ComplexEventType_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventType_127.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_127;
    ComplexOptPayoutAmount_127.setString("9486852");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexOptPayoutAmount_127.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_127);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_260;
      FIX::ComplexEventEndDate ComplexEventEndDate_260(FIX::UTCTIMESTAMP(6, 57, 40, 2, 12, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_260);
      ComplexEventDates_NoComplexEventDates_260.insert(ComplexEventEndDate_260.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_260(FIX::UTCTIMESTAMP(10, 16, 37, 2, 5, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_260);
      ComplexEventDates_NoComplexEventDates_260.insert(ComplexEventStartDate_260.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_260);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_530;
        FIX::ComplexEventEndTime ComplexEventEndTime_530(FIX::UTCTIMEONLY(16, 23, 40));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_530);
        ComplexEventTimes_NoComplexEventTimes_530.insert(ComplexEventEndTime_530.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_530(FIX::UTCTIMEONLY(3, 16, 39));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_530);
        ComplexEventTimes_NoComplexEventTimes_530.insert(ComplexEventStartTime_530.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_530);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_531;
        FIX::ComplexEventEndTime ComplexEventEndTime_531(FIX::UTCTIMEONLY(22, 3, 5));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_531);
        ComplexEventTimes_NoComplexEventTimes_531.insert(ComplexEventEndTime_531.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_531(FIX::UTCTIMEONLY(10, 24, 24));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_531);
        ComplexEventTimes_NoComplexEventTimes_531.insert(ComplexEventStartTime_531.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_531);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_128;
    FIX::ComplexEventCondition ComplexEventCondition_128(2);
    noComplexEvents_0_1.set(ComplexEventCondition_128);
    ComplexEvents_NoComplexEvents_128.insert(ComplexEventCondition_128.getString());
    FIX::ComplexEventPrice ComplexEventPrice_128;
    ComplexEventPrice_128.setString("17530993");
    noComplexEvents_0_1.set(ComplexEventPrice_128);
    ComplexEvents_NoComplexEvents_128.insert(ComplexEventPrice_128.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_128(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_128);
    ComplexEvents_NoComplexEvents_128.insert(ComplexEventPriceBoundaryMethod_128.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_128;
    ComplexEventPriceBoundaryPrecision_128.setString("70.960000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_128);
    ComplexEvents_NoComplexEvents_128.insert(ComplexEventPriceBoundaryPrecision_128.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_128(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_128);
    ComplexEvents_NoComplexEvents_128.insert(ComplexEventPriceTimeType_128.getString());
    FIX::ComplexEventType ComplexEventType_128(8);
    noComplexEvents_0_1.set(ComplexEventType_128);
    ComplexEvents_NoComplexEvents_128.insert(ComplexEventType_128.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_128;
    ComplexOptPayoutAmount_128.setString("16560449");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_128);
    ComplexEvents_NoComplexEvents_128.insert(ComplexOptPayoutAmount_128.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_128);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_261;
      FIX::ComplexEventEndDate ComplexEventEndDate_261(FIX::UTCTIMESTAMP(5, 54, 9, 5, 12, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_261);
      ComplexEventDates_NoComplexEventDates_261.insert(ComplexEventEndDate_261.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_261(FIX::UTCTIMESTAMP(15, 22, 13, 18, 2, 2011));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_261);
      ComplexEventDates_NoComplexEventDates_261.insert(ComplexEventStartDate_261.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_261);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_532;
        FIX::ComplexEventEndTime ComplexEventEndTime_532(FIX::UTCTIMEONLY(19, 45, 32));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_532);
        ComplexEventTimes_NoComplexEventTimes_532.insert(ComplexEventEndTime_532.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_532(FIX::UTCTIMEONLY(19, 56, 53));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_532);
        ComplexEventTimes_NoComplexEventTimes_532.insert(ComplexEventStartTime_532.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_532);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_533;
        FIX::ComplexEventEndTime ComplexEventEndTime_533(FIX::UTCTIMEONLY(19, 6, 51));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_533);
        ComplexEventTimes_NoComplexEventTimes_533.insert(ComplexEventEndTime_533.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_533(FIX::UTCTIMEONLY(7, 44, 17));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_533);
        ComplexEventTimes_NoComplexEventTimes_533.insert(ComplexEventStartTime_533.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_533);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_534;
        FIX::ComplexEventEndTime ComplexEventEndTime_534(FIX::UTCTIMEONLY(18, 3, 7));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_534);
        ComplexEventTimes_NoComplexEventTimes_534.insert(ComplexEventEndTime_534.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_534(FIX::UTCTIMEONLY(15, 6, 40));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_534);
        ComplexEventTimes_NoComplexEventTimes_534.insert(ComplexEventStartTime_534.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_534);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_262;
      FIX::ComplexEventEndDate ComplexEventEndDate_262(FIX::UTCTIMESTAMP(9, 45, 49, 22, 7, 2015));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_262);
      ComplexEventDates_NoComplexEventDates_262.insert(ComplexEventEndDate_262.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_262(FIX::UTCTIMESTAMP(2, 16, 57, 7, 5, 2017));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_262);
      ComplexEventDates_NoComplexEventDates_262.insert(ComplexEventStartDate_262.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_262);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_535;
        FIX::ComplexEventEndTime ComplexEventEndTime_535(FIX::UTCTIMEONLY(1, 50, 26));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_535);
        ComplexEventTimes_NoComplexEventTimes_535.insert(ComplexEventEndTime_535.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_535(FIX::UTCTIMEONLY(2, 10, 11));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_535);
        ComplexEventTimes_NoComplexEventTimes_535.insert(ComplexEventStartTime_535.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_535);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_536;
        FIX::ComplexEventEndTime ComplexEventEndTime_536(FIX::UTCTIMEONLY(16, 15, 48));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_536);
        ComplexEventTimes_NoComplexEventTimes_536.insert(ComplexEventEndTime_536.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_536(FIX::UTCTIMEONLY(22, 54, 44));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_536);
        ComplexEventTimes_NoComplexEventTimes_536.insert(ComplexEventStartTime_536.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_536);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_537;
        FIX::ComplexEventEndTime ComplexEventEndTime_537(FIX::UTCTIMEONLY(19, 29, 13));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_537);
        ComplexEventTimes_NoComplexEventTimes_537.insert(ComplexEventEndTime_537.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_537(FIX::UTCTIMEONLY(11, 44, 31));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_537);
        ComplexEventTimes_NoComplexEventTimes_537.insert(ComplexEventStartTime_537.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_537);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderStatusRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_129;
    FIX::ComplexEventCondition ComplexEventCondition_129(2);
    noComplexEvents_0_2.set(ComplexEventCondition_129);
    ComplexEvents_NoComplexEvents_129.insert(ComplexEventCondition_129.getString());
    FIX::ComplexEventPrice ComplexEventPrice_129;
    ComplexEventPrice_129.setString("9808744");
    noComplexEvents_0_2.set(ComplexEventPrice_129);
    ComplexEvents_NoComplexEvents_129.insert(ComplexEventPrice_129.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_129(4);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_129);
    ComplexEvents_NoComplexEvents_129.insert(ComplexEventPriceBoundaryMethod_129.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_129;
    ComplexEventPriceBoundaryPrecision_129.setString("87.920000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_129);
    ComplexEvents_NoComplexEvents_129.insert(ComplexEventPriceBoundaryPrecision_129.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_129(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_129);
    ComplexEvents_NoComplexEvents_129.insert(ComplexEventPriceTimeType_129.getString());
    FIX::ComplexEventType ComplexEventType_129(5);
    noComplexEvents_0_2.set(ComplexEventType_129);
    ComplexEvents_NoComplexEvents_129.insert(ComplexEventType_129.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_129;
    ComplexOptPayoutAmount_129.setString("21093187");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_129);
    ComplexEvents_NoComplexEvents_129.insert(ComplexOptPayoutAmount_129.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_129);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_263;
      FIX::ComplexEventEndDate ComplexEventEndDate_263(FIX::UTCTIMESTAMP(23, 30, 8, 17, 5, 2000));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_263);
      ComplexEventDates_NoComplexEventDates_263.insert(ComplexEventEndDate_263.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_263(FIX::UTCTIMESTAMP(9, 19, 17, 17, 6, 2004));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_263);
      ComplexEventDates_NoComplexEventDates_263.insert(ComplexEventStartDate_263.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_263);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_538;
        FIX::ComplexEventEndTime ComplexEventEndTime_538(FIX::UTCTIMEONLY(11, 54, 43));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_538);
        ComplexEventTimes_NoComplexEventTimes_538.insert(ComplexEventEndTime_538.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_538(FIX::UTCTIMEONLY(9, 27, 32));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_538);
        ComplexEventTimes_NoComplexEventTimes_538.insert(ComplexEventStartTime_538.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_538);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_539;
        FIX::ComplexEventEndTime ComplexEventEndTime_539(FIX::UTCTIMEONLY(8, 0, 35));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_539);
        ComplexEventTimes_NoComplexEventTimes_539.insert(ComplexEventEndTime_539.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_539(FIX::UTCTIMEONLY(18, 44, 45));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_539);
        ComplexEventTimes_NoComplexEventTimes_539.insert(ComplexEventStartTime_539.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_539);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_264;
      FIX::ComplexEventEndDate ComplexEventEndDate_264(FIX::UTCTIMESTAMP(11, 15, 21, 8, 1, 2009));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_264);
      ComplexEventDates_NoComplexEventDates_264.insert(ComplexEventEndDate_264.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_264(FIX::UTCTIMESTAMP(1, 52, 3, 10, 2, 2013));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_264);
      ComplexEventDates_NoComplexEventDates_264.insert(ComplexEventStartDate_264.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_264);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_540;
        FIX::ComplexEventEndTime ComplexEventEndTime_540(FIX::UTCTIMEONLY(18, 25, 53));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_540);
        ComplexEventTimes_NoComplexEventTimes_540.insert(ComplexEventEndTime_540.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_540(FIX::UTCTIMEONLY(22, 21, 0));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_540);
        ComplexEventTimes_NoComplexEventTimes_540.insert(ComplexEventStartTime_540.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_540);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_119;
    FIX::EventDate EventDate_119("LOCALMKTDATE_1919512301");
    noEvents_0_0.set(EventDate_119);
    EvntGrp_NoEvents_119.insert(EventDate_119.getString());
    FIX::EventPx EventPx_119;
    EventPx_119.setString("18443441");
    noEvents_0_0.set(EventPx_119);
    EvntGrp_NoEvents_119.insert(EventPx_119.getString());
    FIX::EventText EventText_119("STRING_1762873157");
    noEvents_0_0.set(EventText_119);
    EvntGrp_NoEvents_119.insert(EventText_119.getString());
    FIX::EventTime EventTime_119(FIX::UTCTIMESTAMP(3, 53, 8, 27, 5, 2016));
    noEvents_0_0.set(EventTime_119);
    EvntGrp_NoEvents_119.insert(EventTime_119.getString());
    FIX::EventType EventType_119(5);
    noEvents_0_0.set(EventType_119);
    EvntGrp_NoEvents_119.insert(EventType_119.getString());
    all_values.push_back(EvntGrp_NoEvents_119);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_120;
    FIX::EventDate EventDate_120("LOCALMKTDATE_1819190144");
    noEvents_0_1.set(EventDate_120);
    EvntGrp_NoEvents_120.insert(EventDate_120.getString());
    FIX::EventPx EventPx_120;
    EventPx_120.setString("18988950");
    noEvents_0_1.set(EventPx_120);
    EvntGrp_NoEvents_120.insert(EventPx_120.getString());
    FIX::EventText EventText_120("STRING_1019292837");
    noEvents_0_1.set(EventText_120);
    EvntGrp_NoEvents_120.insert(EventText_120.getString());
    FIX::EventTime EventTime_120(FIX::UTCTIMESTAMP(17, 41, 24, 11, 7, 2007));
    noEvents_0_1.set(EventTime_120);
    EvntGrp_NoEvents_120.insert(EventTime_120.getString());
    FIX::EventType EventType_120(7);
    noEvents_0_1.set(EventType_120);
    EvntGrp_NoEvents_120.insert(EventType_120.getString());
    all_values.push_back(EvntGrp_NoEvents_120);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderStatusRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_121;
    FIX::EventDate EventDate_121("LOCALMKTDATE_2033999869");
    noEvents_0_2.set(EventDate_121);
    EvntGrp_NoEvents_121.insert(EventDate_121.getString());
    FIX::EventPx EventPx_121;
    EventPx_121.setString("10465508");
    noEvents_0_2.set(EventPx_121);
    EvntGrp_NoEvents_121.insert(EventPx_121.getString());
    FIX::EventText EventText_121("STRING_1280011771");
    noEvents_0_2.set(EventText_121);
    EvntGrp_NoEvents_121.insert(EventText_121.getString());
    FIX::EventTime EventTime_121(FIX::UTCTIMESTAMP(14, 9, 47, 18, 4, 2011));
    noEvents_0_2.set(EventTime_121);
    EvntGrp_NoEvents_121.insert(EventTime_121.getString());
    FIX::EventType EventType_121(99);
    noEvents_0_2.set(EventType_121);
    EvntGrp_NoEvents_121.insert(EventType_121.getString());
    all_values.push_back(EvntGrp_NoEvents_121);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_127;
    FIX::InstrumentPartyID InstrumentPartyID_127("STRING_1408201064");
    noInstrumentParties_0_0.set(InstrumentPartyID_127);
    InstrumentParties_NoInstrumentParties_127.insert(InstrumentPartyID_127.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_127('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_127);
    InstrumentParties_NoInstrumentParties_127.insert(InstrumentPartyIDSource_127.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_127(1765999013);
    noInstrumentParties_0_0.set(InstrumentPartyRole_127);
    InstrumentParties_NoInstrumentParties_127.insert(InstrumentPartyRole_127.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_127);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239;
      FIX::InstrumentPartySubID InstrumentPartySubID_239("STRING_1972043922");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_239);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239.insert(InstrumentPartySubID_239.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_239(1384961593);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_239);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239.insert(InstrumentPartySubIDType_239.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240;
      FIX::InstrumentPartySubID InstrumentPartySubID_240("STRING_455075392");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_240);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240.insert(InstrumentPartySubID_240.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_240(2042753346);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_240);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240.insert(InstrumentPartySubIDType_240.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241;
      FIX::InstrumentPartySubID InstrumentPartySubID_241("STRING_1056668089");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_241);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241.insert(InstrumentPartySubID_241.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_241(206486808);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_241);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241.insert(InstrumentPartySubIDType_241.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_116;
    FIX::SecurityAltID SecurityAltID_116("STRING_883103650");
    noSecurityAltID_0_0.set(SecurityAltID_116);
    SecAltIDGrp_NoSecurityAltID_116.insert(SecurityAltID_116.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_116("STRING_124641969");
    noSecurityAltID_0_0.set(SecurityAltIDSource_116);
    SecAltIDGrp_NoSecurityAltID_116.insert(SecurityAltIDSource_116.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_116);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_117;
    FIX::SecurityAltID SecurityAltID_117("STRING_1039663117");
    noSecurityAltID_0_1.set(SecurityAltID_117);
    SecAltIDGrp_NoSecurityAltID_117.insert(SecurityAltID_117.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_117("STRING_1427426435");
    noSecurityAltID_0_1.set(SecurityAltIDSource_117);
    SecAltIDGrp_NoSecurityAltID_117.insert(SecurityAltIDSource_117.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_117);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderStatusRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_118;
    FIX::SecurityAltID SecurityAltID_118("STRING_1354769984");
    noSecurityAltID_0_2.set(SecurityAltID_118);
    SecAltIDGrp_NoSecurityAltID_118.insert(SecurityAltID_118.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_118("STRING_1585058828");
    noSecurityAltID_0_2.set(SecurityAltIDSource_118);
    SecAltIDGrp_NoSecurityAltID_118.insert(SecurityAltIDSource_118.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_118);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_124;
  FIX::SecurityXML SecurityXML_125("XMLDATA_896321338");
  msg.set(SecurityXML_125);
  FIX::SecurityXMLLen SecurityXMLLen_62(1865146310);
  msg.set(SecurityXMLLen_62);
  FIX::SecurityXMLSchema SecurityXMLSchema_62("STRING_1471575049");
  msg.set(SecurityXMLSchema_62);
  SecurityXML_124.insert(SecurityXMLSchema_62.getString());
  all_values.push_back(SecurityXML_124);
  all_compo_names.insert("SecurityXML");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_94;
    FIX::PartyID PartyID_94("STRING_997674433");
    noPartyIDs_0_0.set(PartyID_94);
    Parties_NoPartyIDs_94.insert(PartyID_94.getString());
    FIX::PartyIDSource PartyIDSource_94('B');
    noPartyIDs_0_0.set(PartyIDSource_94);
    Parties_NoPartyIDs_94.insert(PartyIDSource_94.getString());
    FIX::PartyRole PartyRole_94(72);
    noPartyIDs_0_0.set(PartyRole_94);
    Parties_NoPartyIDs_94.insert(PartyRole_94.getString());
    all_values.push_back(Parties_NoPartyIDs_94);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_208;
      FIX::PartySubID PartySubID_208("STRING_2028046211");
      noPartySubIDs_0_1_0.set(PartySubID_208);
      PtysSubGrp_NoPartySubIDs_208.insert(PartySubID_208.getString());
      FIX::PartySubIDType PartySubIDType_208(18);
      noPartySubIDs_0_1_0.set(PartySubIDType_208);
      PtysSubGrp_NoPartySubIDs_208.insert(PartySubIDType_208.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_208);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_209;
      FIX::PartySubID PartySubID_209("STRING_685221306");
      noPartySubIDs_0_1_1.set(PartySubID_209);
      PtysSubGrp_NoPartySubIDs_209.insert(PartySubID_209.getString());
      FIX::PartySubIDType PartySubIDType_209(27);
      noPartySubIDs_0_1_1.set(PartySubIDType_209);
      PtysSubGrp_NoPartySubIDs_209.insert(PartySubIDType_209.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_209);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_210;
      FIX::PartySubID PartySubID_210("STRING_1483932008");
      noPartySubIDs_0_1_2.set(PartySubID_210);
      PtysSubGrp_NoPartySubIDs_210.insert(PartySubID_210.getString());
      FIX::PartySubIDType PartySubIDType_210(28);
      noPartySubIDs_0_1_2.set(PartySubIDType_210);
      PtysSubGrp_NoPartySubIDs_210.insert(PartySubIDType_210.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_210);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_95;
    FIX::PartyID PartyID_95("STRING_1175602568");
    noPartyIDs_0_1.set(PartyID_95);
    Parties_NoPartyIDs_95.insert(PartyID_95.getString());
    FIX::PartyIDSource PartyIDSource_95('F');
    noPartyIDs_0_1.set(PartyIDSource_95);
    Parties_NoPartyIDs_95.insert(PartyIDSource_95.getString());
    FIX::PartyRole PartyRole_95(16);
    noPartyIDs_0_1.set(PartyRole_95);
    Parties_NoPartyIDs_95.insert(PartyRole_95.getString());
    all_values.push_back(Parties_NoPartyIDs_95);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_211;
      FIX::PartySubID PartySubID_211("STRING_1617964693");
      noPartySubIDs_1_1_0.set(PartySubID_211);
      PtysSubGrp_NoPartySubIDs_211.insert(PartySubID_211.getString());
      FIX::PartySubIDType PartySubIDType_211(15);
      noPartySubIDs_1_1_0.set(PartySubIDType_211);
      PtysSubGrp_NoPartySubIDs_211.insert(PartySubIDType_211.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_211);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_212;
      FIX::PartySubID PartySubID_212("STRING_766945177");
      noPartySubIDs_1_1_1.set(PartySubID_212);
      PtysSubGrp_NoPartySubIDs_212.insert(PartySubID_212.getString());
      FIX::PartySubIDType PartySubIDType_212(21);
      noPartySubIDs_1_1_1.set(PartySubIDType_212);
      PtysSubGrp_NoPartySubIDs_212.insert(PartySubIDType_212.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_212);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_213;
      FIX::PartySubID PartySubID_213("STRING_1237791045");
      noPartySubIDs_1_1_2.set(PartySubID_213);
      PtysSubGrp_NoPartySubIDs_213.insert(PartySubID_213.getString());
      FIX::PartySubIDType PartySubIDType_213(32);
      noPartySubIDs_1_1_2.set(PartySubIDType_213);
      PtysSubGrp_NoPartySubIDs_213.insert(PartySubIDType_213.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_213);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_86;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_86("DATA_2120894695");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingIssuer_86.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_86(1098073955);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingIssuerLen_86.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_86("DATA_1319976397");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingSecurityDesc_86.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_86(1400837482);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingSecurityDescLen_86.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_86;
    UnderlyingAdjustedQuantity_86.setString("3053602");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_86);
    UnderlyingInstrument_86.insert(UnderlyingAdjustedQuantity_86.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_86;
    UnderlyingAllocationPercent_86.setString("15.770000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_86);
    UnderlyingInstrument_86.insert(UnderlyingAllocationPercent_86.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_86;
    UnderlyingAttachmentPoint_86.setString("51.730000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_86);
    UnderlyingInstrument_86.insert(UnderlyingAttachmentPoint_86.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_86("STRING_23022954");
    noUnderlyings_0_0.set(UnderlyingCFICode_86);
    UnderlyingInstrument_86.insert(UnderlyingCFICode_86.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_86("STRING_81642978");
    noUnderlyings_0_0.set(UnderlyingCPProgram_86);
    UnderlyingInstrument_86.insert(UnderlyingCPProgram_86.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_86("STRING_2092547393");
    noUnderlyings_0_0.set(UnderlyingCPRegType_86);
    UnderlyingInstrument_86.insert(UnderlyingCPRegType_86.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_86;
    UnderlyingCapValue_86.setString("10206973");
    noUnderlyings_0_0.set(UnderlyingCapValue_86);
    UnderlyingInstrument_86.insert(UnderlyingCapValue_86.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_86;
    UnderlyingCashAmount_86.setString("19948789");
    noUnderlyings_0_0.set(UnderlyingCashAmount_86);
    UnderlyingInstrument_86.insert(UnderlyingCashAmount_86.getString());
    FIX::UnderlyingCashType UnderlyingCashType_86("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_86);
    UnderlyingInstrument_86.insert(UnderlyingCashType_86.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_86;
    UnderlyingContractMultiplier_86.setString("6813998");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_86);
    UnderlyingInstrument_86.insert(UnderlyingContractMultiplier_86.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_86(1875441464);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_86);
    UnderlyingInstrument_86.insert(UnderlyingContractMultiplierUnit_86.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_86("COUNTRY_1704222229");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_86);
    UnderlyingInstrument_86.insert(UnderlyingCountryOfIssue_86.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_86("LOCALMKTDATE_1366621168");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_86);
    UnderlyingInstrument_86.insert(UnderlyingCouponPaymentDate_86.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_86;
    UnderlyingCouponRate_86.setString("29.680000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_86);
    UnderlyingInstrument_86.insert(UnderlyingCouponRate_86.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_86("STRING_1040670589");
    noUnderlyings_0_0.set(UnderlyingCreditRating_86);
    UnderlyingInstrument_86.insert(UnderlyingCreditRating_86.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_86("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_86);
    UnderlyingInstrument_86.insert(UnderlyingCurrency_86.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_86;
    UnderlyingCurrentValue_86.setString("6865913");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_86);
    UnderlyingInstrument_86.insert(UnderlyingCurrentValue_86.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_86;
    UnderlyingDetachmentPoint_86.setString("21.770000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_86);
    UnderlyingInstrument_86.insert(UnderlyingDetachmentPoint_86.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_86;
    UnderlyingDirtyPrice_86.setString("9828316");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_86);
    UnderlyingInstrument_86.insert(UnderlyingDirtyPrice_86.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_86;
    UnderlyingEndPrice_86.setString("1570724");
    noUnderlyings_0_0.set(UnderlyingEndPrice_86);
    UnderlyingInstrument_86.insert(UnderlyingEndPrice_86.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_86;
    UnderlyingEndValue_86.setString("16690351");
    noUnderlyings_0_0.set(UnderlyingEndValue_86);
    UnderlyingInstrument_86.insert(UnderlyingEndValue_86.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_86(1749776850);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_86);
    UnderlyingInstrument_86.insert(UnderlyingExerciseStyle_86.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_86;
    UnderlyingFXRate_86.setString("16703067");
    noUnderlyings_0_0.set(UnderlyingFXRate_86);
    UnderlyingInstrument_86.insert(UnderlyingFXRate_86.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_86('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_86);
    UnderlyingInstrument_86.insert(UnderlyingFXRateCalc_86.getString());
    FIX::UnderlyingFactor UnderlyingFactor_86;
    UnderlyingFactor_86.setString("5757251");
    noUnderlyings_0_0.set(UnderlyingFactor_86);
    UnderlyingInstrument_86.insert(UnderlyingFactor_86.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_86(1950620076);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_86);
    UnderlyingInstrument_86.insert(UnderlyingFlowScheduleType_86.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_86("STRING_732753578");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_86);
    UnderlyingInstrument_86.insert(UnderlyingInstrRegistry_86.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_86("LOCALMKTDATE_1673799142");
    noUnderlyings_0_0.set(UnderlyingIssueDate_86);
    UnderlyingInstrument_86.insert(UnderlyingIssueDate_86.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_86("STRING_1123112825");
    noUnderlyings_0_0.set(UnderlyingIssuer_86);
    UnderlyingInstrument_86.insert(UnderlyingIssuer_86.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_86("STRING_2133591060");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_86);
    UnderlyingInstrument_86.insert(UnderlyingLocaleOfIssue_86.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_86("LOCALMKTDATE_1979159434");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_86);
    UnderlyingInstrument_86.insert(UnderlyingMaturityDate_86.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_86("MONTHYEAR_1880664402");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_86);
    UnderlyingInstrument_86.insert(UnderlyingMaturityMonthYear_86.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_86("TZTIMEONLY_135782585");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_86);
    UnderlyingInstrument_86.insert(UnderlyingMaturityTime_86.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_86;
    UnderlyingNotionalPercentageOutstanding_86.setString("23.880000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_86);
    UnderlyingInstrument_86.insert(UnderlyingNotionalPercentageOutstanding_86.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_86('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_86);
    UnderlyingInstrument_86.insert(UnderlyingOptAttribute_86.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_86;
    UnderlyingOriginalNotionalPercentageOutstanding_86.setString("63.310000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_86);
    UnderlyingInstrument_86.insert(UnderlyingOriginalNotionalPercentageOutstanding_86.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_86("STRING_875396127");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_86);
    UnderlyingInstrument_86.insert(UnderlyingPriceUnitOfMeasure_86.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_86;
    UnderlyingPriceUnitOfMeasureQty_86.setString("18097026");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_86);
    UnderlyingInstrument_86.insert(UnderlyingPriceUnitOfMeasureQty_86.getString());
    FIX::UnderlyingProduct UnderlyingProduct_86(602991911);
    noUnderlyings_0_0.set(UnderlyingProduct_86);
    UnderlyingInstrument_86.insert(UnderlyingProduct_86.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_86(1556795990);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_86);
    UnderlyingInstrument_86.insert(UnderlyingPutOrCall_86.getString());
    FIX::UnderlyingPx UnderlyingPx_86;
    UnderlyingPx_86.setString("15376604");
    noUnderlyings_0_0.set(UnderlyingPx_86);
    UnderlyingInstrument_86.insert(UnderlyingPx_86.getString());
    FIX::UnderlyingQty UnderlyingQty_86;
    UnderlyingQty_86.setString("1597304");
    noUnderlyings_0_0.set(UnderlyingQty_86);
    UnderlyingInstrument_86.insert(UnderlyingQty_86.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_86("LOCALMKTDATE_775933510");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_86);
    UnderlyingInstrument_86.insert(UnderlyingRedemptionDate_86.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_86("STRING_1033019771");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_86);
    UnderlyingInstrument_86.insert(UnderlyingRepoCollateralSecurityType_86.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_86;
    UnderlyingRepurchaseRate_86.setString("10.810000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_86);
    UnderlyingInstrument_86.insert(UnderlyingRepurchaseRate_86.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_86(1320200677);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_86);
    UnderlyingInstrument_86.insert(UnderlyingRepurchaseTerm_86.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_86("STRING_1703981659");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_86);
    UnderlyingInstrument_86.insert(UnderlyingRestructuringType_86.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_86("STRING_1886992442");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityDesc_86.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_86("EXCHANGE_660629206");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityExchange_86.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_86("STRING_539329684");
    noUnderlyings_0_0.set(UnderlyingSecurityID_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityID_86.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_86("STRING_2044064847");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityIDSource_86.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_86("STRING_182180692");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_86);
    UnderlyingInstrument_86.insert(UnderlyingSecuritySubType_86.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_86("STRING_141622886");
    noUnderlyings_0_0.set(UnderlyingSecurityType_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityType_86.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_86("STRING_1566887996");
    noUnderlyings_0_0.set(UnderlyingSeniority_86);
    UnderlyingInstrument_86.insert(UnderlyingSeniority_86.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_86("STRING_941523222");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_86);
    UnderlyingInstrument_86.insert(UnderlyingSettlMethod_86.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_86(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_86);
    UnderlyingInstrument_86.insert(UnderlyingSettlementType_86.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_86;
    UnderlyingStartValue_86.setString("13700244");
    noUnderlyings_0_0.set(UnderlyingStartValue_86);
    UnderlyingInstrument_86.insert(UnderlyingStartValue_86.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_86("STRING_1674276800");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_86);
    UnderlyingInstrument_86.insert(UnderlyingStateOrProvinceOfIssue_86.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_86("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_86);
    UnderlyingInstrument_86.insert(UnderlyingStrikeCurrency_86.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_86;
    UnderlyingStrikePrice_86.setString("16603842");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_86);
    UnderlyingInstrument_86.insert(UnderlyingStrikePrice_86.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_86("STRING_75339354");
    noUnderlyings_0_0.set(UnderlyingSymbol_86);
    UnderlyingInstrument_86.insert(UnderlyingSymbol_86.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_86("STRING_78834357");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_86);
    UnderlyingInstrument_86.insert(UnderlyingSymbolSfx_86.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_86("STRING_1796166798");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_86);
    UnderlyingInstrument_86.insert(UnderlyingTimeUnit_86.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_86("STRING_2077521742");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_86);
    UnderlyingInstrument_86.insert(UnderlyingUnitOfMeasure_86.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_86;
    UnderlyingUnitOfMeasureQty_86.setString("20411417");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_86);
    UnderlyingInstrument_86.insert(UnderlyingUnitOfMeasureQty_86.getString());
    all_values.push_back(UnderlyingInstrument_86);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_173;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_173("STRING_805434222");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_173);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_173.insert(UnderlyingSecurityAltID_173.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_173("STRING_1703360723");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_173);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_173.insert(UnderlyingSecurityAltIDSource_173.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_173);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_173;
      FIX::UnderlyingStipType UnderlyingStipType_173("STRING_214746564");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_173);
      UnderlyingStipulations_NoUnderlyingStips_173.insert(UnderlyingStipType_173.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_173("STRING_1093537526");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_173);
      UnderlyingStipulations_NoUnderlyingStips_173.insert(UnderlyingStipValue_173.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_173);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_161;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_161("STRING_990680074");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_161);
      UndlyInstrumentParties_NoUndlyInstrumentParties_161.insert(UnderlyingInstrumentPartyID_161.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_161('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_161);
      UndlyInstrumentParties_NoUndlyInstrumentParties_161.insert(UnderlyingInstrumentPartyIDSource_161.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_161(1692652966);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_161);
      UndlyInstrumentParties_NoUndlyInstrumentParties_161.insert(UnderlyingInstrumentPartyRole_161.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_161);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_321("STRING_1683055308");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_321);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321.insert(UnderlyingInstrumentPartySubID_321.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_321(1432161760);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_321);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321.insert(UnderlyingInstrumentPartySubIDType_321.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_162;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_162("STRING_824026310");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_162);
      UndlyInstrumentParties_NoUndlyInstrumentParties_162.insert(UnderlyingInstrumentPartyID_162.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_162('7');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_162);
      UndlyInstrumentParties_NoUndlyInstrumentParties_162.insert(UnderlyingInstrumentPartyIDSource_162.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_162(1328742959);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_162);
      UndlyInstrumentParties_NoUndlyInstrumentParties_162.insert(UnderlyingInstrumentPartyRole_162.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_162);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_322("STRING_216524231");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_322);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322.insert(UnderlyingInstrumentPartySubID_322.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_322(748147308);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_322);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322.insert(UnderlyingInstrumentPartySubIDType_322.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_87;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_87("DATA_1947730224");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingIssuer_87.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_87(933872305);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingIssuerLen_87.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_87("DATA_2118171733");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingSecurityDesc_87.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_87(1474523377);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingSecurityDescLen_87.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_87;
    UnderlyingAdjustedQuantity_87.setString("11775358");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_87);
    UnderlyingInstrument_87.insert(UnderlyingAdjustedQuantity_87.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_87;
    UnderlyingAllocationPercent_87.setString("16.870000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_87);
    UnderlyingInstrument_87.insert(UnderlyingAllocationPercent_87.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_87;
    UnderlyingAttachmentPoint_87.setString("39.420000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_87);
    UnderlyingInstrument_87.insert(UnderlyingAttachmentPoint_87.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_87("STRING_1252875228");
    noUnderlyings_0_1.set(UnderlyingCFICode_87);
    UnderlyingInstrument_87.insert(UnderlyingCFICode_87.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_87("STRING_395176044");
    noUnderlyings_0_1.set(UnderlyingCPProgram_87);
    UnderlyingInstrument_87.insert(UnderlyingCPProgram_87.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_87("STRING_636107092");
    noUnderlyings_0_1.set(UnderlyingCPRegType_87);
    UnderlyingInstrument_87.insert(UnderlyingCPRegType_87.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_87;
    UnderlyingCapValue_87.setString("11829133");
    noUnderlyings_0_1.set(UnderlyingCapValue_87);
    UnderlyingInstrument_87.insert(UnderlyingCapValue_87.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_87;
    UnderlyingCashAmount_87.setString("2888341");
    noUnderlyings_0_1.set(UnderlyingCashAmount_87);
    UnderlyingInstrument_87.insert(UnderlyingCashAmount_87.getString());
    FIX::UnderlyingCashType UnderlyingCashType_87("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_87);
    UnderlyingInstrument_87.insert(UnderlyingCashType_87.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_87;
    UnderlyingContractMultiplier_87.setString("19883475");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_87);
    UnderlyingInstrument_87.insert(UnderlyingContractMultiplier_87.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_87(1992194857);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_87);
    UnderlyingInstrument_87.insert(UnderlyingContractMultiplierUnit_87.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_87("COUNTRY_698157966");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_87);
    UnderlyingInstrument_87.insert(UnderlyingCountryOfIssue_87.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_87("LOCALMKTDATE_55610461");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_87);
    UnderlyingInstrument_87.insert(UnderlyingCouponPaymentDate_87.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_87;
    UnderlyingCouponRate_87.setString("87.350000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_87);
    UnderlyingInstrument_87.insert(UnderlyingCouponRate_87.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_87("STRING_1190409851");
    noUnderlyings_0_1.set(UnderlyingCreditRating_87);
    UnderlyingInstrument_87.insert(UnderlyingCreditRating_87.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_87("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_87);
    UnderlyingInstrument_87.insert(UnderlyingCurrency_87.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_87;
    UnderlyingCurrentValue_87.setString("7355791");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_87);
    UnderlyingInstrument_87.insert(UnderlyingCurrentValue_87.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_87;
    UnderlyingDetachmentPoint_87.setString("76.390000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_87);
    UnderlyingInstrument_87.insert(UnderlyingDetachmentPoint_87.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_87;
    UnderlyingDirtyPrice_87.setString("4528940");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_87);
    UnderlyingInstrument_87.insert(UnderlyingDirtyPrice_87.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_87;
    UnderlyingEndPrice_87.setString("202572");
    noUnderlyings_0_1.set(UnderlyingEndPrice_87);
    UnderlyingInstrument_87.insert(UnderlyingEndPrice_87.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_87;
    UnderlyingEndValue_87.setString("20337139");
    noUnderlyings_0_1.set(UnderlyingEndValue_87);
    UnderlyingInstrument_87.insert(UnderlyingEndValue_87.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_87(527795390);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_87);
    UnderlyingInstrument_87.insert(UnderlyingExerciseStyle_87.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_87;
    UnderlyingFXRate_87.setString("13490002");
    noUnderlyings_0_1.set(UnderlyingFXRate_87);
    UnderlyingInstrument_87.insert(UnderlyingFXRate_87.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_87('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_87);
    UnderlyingInstrument_87.insert(UnderlyingFXRateCalc_87.getString());
    FIX::UnderlyingFactor UnderlyingFactor_87;
    UnderlyingFactor_87.setString("7443196");
    noUnderlyings_0_1.set(UnderlyingFactor_87);
    UnderlyingInstrument_87.insert(UnderlyingFactor_87.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_87(2097147548);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_87);
    UnderlyingInstrument_87.insert(UnderlyingFlowScheduleType_87.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_87("STRING_692683879");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_87);
    UnderlyingInstrument_87.insert(UnderlyingInstrRegistry_87.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_87("LOCALMKTDATE_1678191927");
    noUnderlyings_0_1.set(UnderlyingIssueDate_87);
    UnderlyingInstrument_87.insert(UnderlyingIssueDate_87.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_87("STRING_2067835633");
    noUnderlyings_0_1.set(UnderlyingIssuer_87);
    UnderlyingInstrument_87.insert(UnderlyingIssuer_87.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_87("STRING_19723608");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_87);
    UnderlyingInstrument_87.insert(UnderlyingLocaleOfIssue_87.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_87("LOCALMKTDATE_708244153");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_87);
    UnderlyingInstrument_87.insert(UnderlyingMaturityDate_87.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_87("MONTHYEAR_236693673");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_87);
    UnderlyingInstrument_87.insert(UnderlyingMaturityMonthYear_87.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_87("TZTIMEONLY_1007147550");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_87);
    UnderlyingInstrument_87.insert(UnderlyingMaturityTime_87.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_87;
    UnderlyingNotionalPercentageOutstanding_87.setString("93.810000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_87);
    UnderlyingInstrument_87.insert(UnderlyingNotionalPercentageOutstanding_87.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_87('6');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_87);
    UnderlyingInstrument_87.insert(UnderlyingOptAttribute_87.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_87;
    UnderlyingOriginalNotionalPercentageOutstanding_87.setString("46.430000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_87);
    UnderlyingInstrument_87.insert(UnderlyingOriginalNotionalPercentageOutstanding_87.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_87("STRING_996549056");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_87);
    UnderlyingInstrument_87.insert(UnderlyingPriceUnitOfMeasure_87.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_87;
    UnderlyingPriceUnitOfMeasureQty_87.setString("9207038");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_87);
    UnderlyingInstrument_87.insert(UnderlyingPriceUnitOfMeasureQty_87.getString());
    FIX::UnderlyingProduct UnderlyingProduct_87(2008891217);
    noUnderlyings_0_1.set(UnderlyingProduct_87);
    UnderlyingInstrument_87.insert(UnderlyingProduct_87.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_87(837412953);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_87);
    UnderlyingInstrument_87.insert(UnderlyingPutOrCall_87.getString());
    FIX::UnderlyingPx UnderlyingPx_87;
    UnderlyingPx_87.setString("7654150");
    noUnderlyings_0_1.set(UnderlyingPx_87);
    UnderlyingInstrument_87.insert(UnderlyingPx_87.getString());
    FIX::UnderlyingQty UnderlyingQty_87;
    UnderlyingQty_87.setString("5595655");
    noUnderlyings_0_1.set(UnderlyingQty_87);
    UnderlyingInstrument_87.insert(UnderlyingQty_87.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_87("LOCALMKTDATE_893023414");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_87);
    UnderlyingInstrument_87.insert(UnderlyingRedemptionDate_87.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_87("STRING_1703663796");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_87);
    UnderlyingInstrument_87.insert(UnderlyingRepoCollateralSecurityType_87.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_87;
    UnderlyingRepurchaseRate_87.setString("53.860000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_87);
    UnderlyingInstrument_87.insert(UnderlyingRepurchaseRate_87.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_87(1939313950);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_87);
    UnderlyingInstrument_87.insert(UnderlyingRepurchaseTerm_87.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_87("STRING_473502533");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_87);
    UnderlyingInstrument_87.insert(UnderlyingRestructuringType_87.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_87("STRING_338070907");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityDesc_87.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_87("EXCHANGE_1001517941");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityExchange_87.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_87("STRING_926396578");
    noUnderlyings_0_1.set(UnderlyingSecurityID_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityID_87.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_87("STRING_358328188");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityIDSource_87.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_87("STRING_887748242");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_87);
    UnderlyingInstrument_87.insert(UnderlyingSecuritySubType_87.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_87("STRING_1454191968");
    noUnderlyings_0_1.set(UnderlyingSecurityType_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityType_87.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_87("STRING_1707328429");
    noUnderlyings_0_1.set(UnderlyingSeniority_87);
    UnderlyingInstrument_87.insert(UnderlyingSeniority_87.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_87("STRING_1780185545");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_87);
    UnderlyingInstrument_87.insert(UnderlyingSettlMethod_87.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_87(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_87);
    UnderlyingInstrument_87.insert(UnderlyingSettlementType_87.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_87;
    UnderlyingStartValue_87.setString("16569923");
    noUnderlyings_0_1.set(UnderlyingStartValue_87);
    UnderlyingInstrument_87.insert(UnderlyingStartValue_87.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_87("STRING_325385776");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_87);
    UnderlyingInstrument_87.insert(UnderlyingStateOrProvinceOfIssue_87.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_87("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_87);
    UnderlyingInstrument_87.insert(UnderlyingStrikeCurrency_87.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_87;
    UnderlyingStrikePrice_87.setString("3451093");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_87);
    UnderlyingInstrument_87.insert(UnderlyingStrikePrice_87.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_87("STRING_289980373");
    noUnderlyings_0_1.set(UnderlyingSymbol_87);
    UnderlyingInstrument_87.insert(UnderlyingSymbol_87.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_87("STRING_1814037988");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_87);
    UnderlyingInstrument_87.insert(UnderlyingSymbolSfx_87.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_87("STRING_1352256935");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_87);
    UnderlyingInstrument_87.insert(UnderlyingTimeUnit_87.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_87("STRING_103616107");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_87);
    UnderlyingInstrument_87.insert(UnderlyingUnitOfMeasure_87.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_87;
    UnderlyingUnitOfMeasureQty_87.setString("2984240");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_87);
    UnderlyingInstrument_87.insert(UnderlyingUnitOfMeasureQty_87.getString());
    all_values.push_back(UnderlyingInstrument_87);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_174;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_174("STRING_1100165163");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_174);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_174.insert(UnderlyingSecurityAltID_174.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_174("STRING_1219127909");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_174);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_174.insert(UnderlyingSecurityAltIDSource_174.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_174);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_175;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_175("STRING_709435499");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_175);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_175.insert(UnderlyingSecurityAltID_175.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_175("STRING_1937578117");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_175);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_175.insert(UnderlyingSecurityAltIDSource_175.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_175);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_176;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_176("STRING_1984542970");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_176);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_176.insert(UnderlyingSecurityAltID_176.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_176("STRING_1269001035");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_176);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_176.insert(UnderlyingSecurityAltIDSource_176.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_176);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_174;
      FIX::UnderlyingStipType UnderlyingStipType_174("STRING_1540723118");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_174);
      UnderlyingStipulations_NoUnderlyingStips_174.insert(UnderlyingStipType_174.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_174("STRING_871492773");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_174);
      UnderlyingStipulations_NoUnderlyingStips_174.insert(UnderlyingStipValue_174.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_174);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_163;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_163("STRING_2014225651");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_163);
      UndlyInstrumentParties_NoUndlyInstrumentParties_163.insert(UnderlyingInstrumentPartyID_163.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_163('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_163);
      UndlyInstrumentParties_NoUndlyInstrumentParties_163.insert(UnderlyingInstrumentPartyIDSource_163.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_163(1476466126);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_163);
      UndlyInstrumentParties_NoUndlyInstrumentParties_163.insert(UnderlyingInstrumentPartyRole_163.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_163);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_323("STRING_1567891869");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_323);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323.insert(UnderlyingInstrumentPartySubID_323.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_323(216730720);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_323);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323.insert(UnderlyingInstrumentPartySubIDType_323.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_164;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_164("STRING_99846901");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_164);
      UndlyInstrumentParties_NoUndlyInstrumentParties_164.insert(UnderlyingInstrumentPartyID_164.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_164('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_164);
      UndlyInstrumentParties_NoUndlyInstrumentParties_164.insert(UnderlyingInstrumentPartyIDSource_164.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_164(1996916265);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_164);
      UndlyInstrumentParties_NoUndlyInstrumentParties_164.insert(UnderlyingInstrumentPartyRole_164.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_164);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_324("STRING_637245332");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_324);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324.insert(UnderlyingInstrumentPartySubID_324.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_324(174818394);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_324);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324.insert(UnderlyingInstrumentPartySubIDType_324.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_325("STRING_1880094711");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_325);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325.insert(UnderlyingInstrumentPartySubID_325.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_325(67105999);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_325);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325.insert(UnderlyingInstrumentPartySubIDType_325.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_165;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_165("STRING_519927779");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_165);
      UndlyInstrumentParties_NoUndlyInstrumentParties_165.insert(UnderlyingInstrumentPartyID_165.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_165('2');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_165);
      UndlyInstrumentParties_NoUndlyInstrumentParties_165.insert(UnderlyingInstrumentPartyIDSource_165.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_165(1881143987);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_165);
      UndlyInstrumentParties_NoUndlyInstrumentParties_165.insert(UnderlyingInstrumentPartyRole_165.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_165);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_326("STRING_126207544");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_326);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326.insert(UnderlyingInstrumentPartySubID_326.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_326(32084396);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_326);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326.insert(UnderlyingInstrumentPartySubIDType_326.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_327("STRING_572728997");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_327);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327.insert(UnderlyingInstrumentPartySubID_327.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_327(1226372707);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_327);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327.insert(UnderlyingInstrumentPartySubIDType_327.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::OrderStatusRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_88;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_88("DATA_1251212305");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_88);
    UnderlyingInstrument_88.insert(EncodedUnderlyingIssuer_88.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_88(1282164496);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_88);
    UnderlyingInstrument_88.insert(EncodedUnderlyingIssuerLen_88.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_88("DATA_1016467176");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_88);
    UnderlyingInstrument_88.insert(EncodedUnderlyingSecurityDesc_88.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_88(1088271627);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_88);
    UnderlyingInstrument_88.insert(EncodedUnderlyingSecurityDescLen_88.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_88;
    UnderlyingAdjustedQuantity_88.setString("4036818");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_88);
    UnderlyingInstrument_88.insert(UnderlyingAdjustedQuantity_88.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_88;
    UnderlyingAllocationPercent_88.setString("50.600000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_88);
    UnderlyingInstrument_88.insert(UnderlyingAllocationPercent_88.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_88;
    UnderlyingAttachmentPoint_88.setString("10.980000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_88);
    UnderlyingInstrument_88.insert(UnderlyingAttachmentPoint_88.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_88("STRING_1275174657");
    noUnderlyings_0_2.set(UnderlyingCFICode_88);
    UnderlyingInstrument_88.insert(UnderlyingCFICode_88.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_88("STRING_27049597");
    noUnderlyings_0_2.set(UnderlyingCPProgram_88);
    UnderlyingInstrument_88.insert(UnderlyingCPProgram_88.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_88("STRING_348253101");
    noUnderlyings_0_2.set(UnderlyingCPRegType_88);
    UnderlyingInstrument_88.insert(UnderlyingCPRegType_88.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_88;
    UnderlyingCapValue_88.setString("3372546");
    noUnderlyings_0_2.set(UnderlyingCapValue_88);
    UnderlyingInstrument_88.insert(UnderlyingCapValue_88.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_88;
    UnderlyingCashAmount_88.setString("15035157");
    noUnderlyings_0_2.set(UnderlyingCashAmount_88);
    UnderlyingInstrument_88.insert(UnderlyingCashAmount_88.getString());
    FIX::UnderlyingCashType UnderlyingCashType_88("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_88);
    UnderlyingInstrument_88.insert(UnderlyingCashType_88.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_88;
    UnderlyingContractMultiplier_88.setString("19051465");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_88);
    UnderlyingInstrument_88.insert(UnderlyingContractMultiplier_88.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_88(1720246444);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_88);
    UnderlyingInstrument_88.insert(UnderlyingContractMultiplierUnit_88.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_88("COUNTRY_1241238584");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_88);
    UnderlyingInstrument_88.insert(UnderlyingCountryOfIssue_88.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_88("LOCALMKTDATE_885399562");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_88);
    UnderlyingInstrument_88.insert(UnderlyingCouponPaymentDate_88.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_88;
    UnderlyingCouponRate_88.setString("90.620000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_88);
    UnderlyingInstrument_88.insert(UnderlyingCouponRate_88.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_88("STRING_1392113427");
    noUnderlyings_0_2.set(UnderlyingCreditRating_88);
    UnderlyingInstrument_88.insert(UnderlyingCreditRating_88.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_88("USD");
    noUnderlyings_0_2.set(UnderlyingCurrency_88);
    UnderlyingInstrument_88.insert(UnderlyingCurrency_88.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_88;
    UnderlyingCurrentValue_88.setString("11247244");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_88);
    UnderlyingInstrument_88.insert(UnderlyingCurrentValue_88.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_88;
    UnderlyingDetachmentPoint_88.setString("8.930000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_88);
    UnderlyingInstrument_88.insert(UnderlyingDetachmentPoint_88.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_88;
    UnderlyingDirtyPrice_88.setString("1169415");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_88);
    UnderlyingInstrument_88.insert(UnderlyingDirtyPrice_88.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_88;
    UnderlyingEndPrice_88.setString("11473159");
    noUnderlyings_0_2.set(UnderlyingEndPrice_88);
    UnderlyingInstrument_88.insert(UnderlyingEndPrice_88.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_88;
    UnderlyingEndValue_88.setString("13234112");
    noUnderlyings_0_2.set(UnderlyingEndValue_88);
    UnderlyingInstrument_88.insert(UnderlyingEndValue_88.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_88(1989126301);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_88);
    UnderlyingInstrument_88.insert(UnderlyingExerciseStyle_88.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_88;
    UnderlyingFXRate_88.setString("12735234");
    noUnderlyings_0_2.set(UnderlyingFXRate_88);
    UnderlyingInstrument_88.insert(UnderlyingFXRate_88.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_88('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_88);
    UnderlyingInstrument_88.insert(UnderlyingFXRateCalc_88.getString());
    FIX::UnderlyingFactor UnderlyingFactor_88;
    UnderlyingFactor_88.setString("4143716");
    noUnderlyings_0_2.set(UnderlyingFactor_88);
    UnderlyingInstrument_88.insert(UnderlyingFactor_88.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_88(352412531);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_88);
    UnderlyingInstrument_88.insert(UnderlyingFlowScheduleType_88.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_88("STRING_459224286");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_88);
    UnderlyingInstrument_88.insert(UnderlyingInstrRegistry_88.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_88("LOCALMKTDATE_1696536147");
    noUnderlyings_0_2.set(UnderlyingIssueDate_88);
    UnderlyingInstrument_88.insert(UnderlyingIssueDate_88.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_88("STRING_1368879708");
    noUnderlyings_0_2.set(UnderlyingIssuer_88);
    UnderlyingInstrument_88.insert(UnderlyingIssuer_88.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_88("STRING_1547495913");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_88);
    UnderlyingInstrument_88.insert(UnderlyingLocaleOfIssue_88.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_88("LOCALMKTDATE_2100218030");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_88);
    UnderlyingInstrument_88.insert(UnderlyingMaturityDate_88.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_88("MONTHYEAR_920981120");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_88);
    UnderlyingInstrument_88.insert(UnderlyingMaturityMonthYear_88.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_88("TZTIMEONLY_2029007011");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_88);
    UnderlyingInstrument_88.insert(UnderlyingMaturityTime_88.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_88;
    UnderlyingNotionalPercentageOutstanding_88.setString("90.390000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_88);
    UnderlyingInstrument_88.insert(UnderlyingNotionalPercentageOutstanding_88.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_88('9');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_88);
    UnderlyingInstrument_88.insert(UnderlyingOptAttribute_88.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_88;
    UnderlyingOriginalNotionalPercentageOutstanding_88.setString("64.650000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_88);
    UnderlyingInstrument_88.insert(UnderlyingOriginalNotionalPercentageOutstanding_88.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_88("STRING_1565163729");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_88);
    UnderlyingInstrument_88.insert(UnderlyingPriceUnitOfMeasure_88.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_88;
    UnderlyingPriceUnitOfMeasureQty_88.setString("3040627");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_88);
    UnderlyingInstrument_88.insert(UnderlyingPriceUnitOfMeasureQty_88.getString());
    FIX::UnderlyingProduct UnderlyingProduct_88(1371168148);
    noUnderlyings_0_2.set(UnderlyingProduct_88);
    UnderlyingInstrument_88.insert(UnderlyingProduct_88.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_88(1322826641);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_88);
    UnderlyingInstrument_88.insert(UnderlyingPutOrCall_88.getString());
    FIX::UnderlyingPx UnderlyingPx_88;
    UnderlyingPx_88.setString("20243092");
    noUnderlyings_0_2.set(UnderlyingPx_88);
    UnderlyingInstrument_88.insert(UnderlyingPx_88.getString());
    FIX::UnderlyingQty UnderlyingQty_88;
    UnderlyingQty_88.setString("4649230");
    noUnderlyings_0_2.set(UnderlyingQty_88);
    UnderlyingInstrument_88.insert(UnderlyingQty_88.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_88("LOCALMKTDATE_60742555");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_88);
    UnderlyingInstrument_88.insert(UnderlyingRedemptionDate_88.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_88("STRING_1446504652");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_88);
    UnderlyingInstrument_88.insert(UnderlyingRepoCollateralSecurityType_88.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_88;
    UnderlyingRepurchaseRate_88.setString("65.120000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_88);
    UnderlyingInstrument_88.insert(UnderlyingRepurchaseRate_88.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_88(1583387449);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_88);
    UnderlyingInstrument_88.insert(UnderlyingRepurchaseTerm_88.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_88("STRING_1043518460");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_88);
    UnderlyingInstrument_88.insert(UnderlyingRestructuringType_88.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_88("STRING_834277355");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_88);
    UnderlyingInstrument_88.insert(UnderlyingSecurityDesc_88.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_88("EXCHANGE_1025654694");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_88);
    UnderlyingInstrument_88.insert(UnderlyingSecurityExchange_88.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_88("STRING_1160460047");
    noUnderlyings_0_2.set(UnderlyingSecurityID_88);
    UnderlyingInstrument_88.insert(UnderlyingSecurityID_88.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_88("STRING_1981593283");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_88);
    UnderlyingInstrument_88.insert(UnderlyingSecurityIDSource_88.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_88("STRING_201582278");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_88);
    UnderlyingInstrument_88.insert(UnderlyingSecuritySubType_88.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_88("STRING_1002102700");
    noUnderlyings_0_2.set(UnderlyingSecurityType_88);
    UnderlyingInstrument_88.insert(UnderlyingSecurityType_88.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_88("STRING_1107633107");
    noUnderlyings_0_2.set(UnderlyingSeniority_88);
    UnderlyingInstrument_88.insert(UnderlyingSeniority_88.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_88("STRING_1557077906");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_88);
    UnderlyingInstrument_88.insert(UnderlyingSettlMethod_88.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_88(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_88);
    UnderlyingInstrument_88.insert(UnderlyingSettlementType_88.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_88;
    UnderlyingStartValue_88.setString("14600456");
    noUnderlyings_0_2.set(UnderlyingStartValue_88);
    UnderlyingInstrument_88.insert(UnderlyingStartValue_88.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_88("STRING_2016302192");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_88);
    UnderlyingInstrument_88.insert(UnderlyingStateOrProvinceOfIssue_88.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_88("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_88);
    UnderlyingInstrument_88.insert(UnderlyingStrikeCurrency_88.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_88;
    UnderlyingStrikePrice_88.setString("14163144");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_88);
    UnderlyingInstrument_88.insert(UnderlyingStrikePrice_88.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_88("STRING_918261232");
    noUnderlyings_0_2.set(UnderlyingSymbol_88);
    UnderlyingInstrument_88.insert(UnderlyingSymbol_88.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_88("STRING_1602422818");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_88);
    UnderlyingInstrument_88.insert(UnderlyingSymbolSfx_88.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_88("STRING_1297837821");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_88);
    UnderlyingInstrument_88.insert(UnderlyingTimeUnit_88.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_88("STRING_2146170272");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_88);
    UnderlyingInstrument_88.insert(UnderlyingUnitOfMeasure_88.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_88;
    UnderlyingUnitOfMeasureQty_88.setString("4029698");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_88);
    UnderlyingInstrument_88.insert(UnderlyingUnitOfMeasureQty_88.getString());
    all_values.push_back(UnderlyingInstrument_88);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_177;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_177("STRING_1563850353");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_177);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_177.insert(UnderlyingSecurityAltID_177.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_177("STRING_707032681");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_177);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_177.insert(UnderlyingSecurityAltIDSource_177.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_177);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_175;
      FIX::UnderlyingStipType UnderlyingStipType_175("STRING_739193346");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_175);
      UnderlyingStipulations_NoUnderlyingStips_175.insert(UnderlyingStipType_175.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_175("STRING_583858271");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_175);
      UnderlyingStipulations_NoUnderlyingStips_175.insert(UnderlyingStipValue_175.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_175);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_176;
      FIX::UnderlyingStipType UnderlyingStipType_176("STRING_1216221871");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_176);
      UnderlyingStipulations_NoUnderlyingStips_176.insert(UnderlyingStipType_176.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_176("STRING_799935901");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_176);
      UnderlyingStipulations_NoUnderlyingStips_176.insert(UnderlyingStipValue_176.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_176);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_177;
      FIX::UnderlyingStipType UnderlyingStipType_177("STRING_2030362923");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_177);
      UnderlyingStipulations_NoUnderlyingStips_177.insert(UnderlyingStipType_177.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_177("STRING_925774735");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_177);
      UnderlyingStipulations_NoUnderlyingStips_177.insert(UnderlyingStipValue_177.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_177);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_166;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_166("STRING_926397735");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_166);
      UndlyInstrumentParties_NoUndlyInstrumentParties_166.insert(UnderlyingInstrumentPartyID_166.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_166('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_166);
      UndlyInstrumentParties_NoUndlyInstrumentParties_166.insert(UnderlyingInstrumentPartyIDSource_166.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_166(1261494396);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_166);
      UndlyInstrumentParties_NoUndlyInstrumentParties_166.insert(UnderlyingInstrumentPartyRole_166.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_166);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_328("STRING_1594161725");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_328);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328.insert(UnderlyingInstrumentPartySubID_328.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_328(1463076674);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_328);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328.insert(UnderlyingInstrumentPartySubIDType_328.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_329("STRING_941476835");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_329);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329.insert(UnderlyingInstrumentPartySubID_329.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_329(554311184);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_329);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329.insert(UnderlyingInstrumentPartySubIDType_329.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_330("STRING_872670933");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_330);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330.insert(UnderlyingInstrumentPartySubID_330.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_330(210467538);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_330);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330.insert(UnderlyingInstrumentPartySubIDType_330.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
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
