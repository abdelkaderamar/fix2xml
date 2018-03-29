#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/OrderCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderCancelRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelRequest_0;
  FIX::Account Account_27("STRING_701294381");
  msg.set(Account_27);
  OrderCancelRequest_0.insert(Account_27.getString());
  FIX::AccountType AccountType_24(3);
  msg.set(AccountType_24);
  OrderCancelRequest_0.insert(AccountType_24.getString());
  FIX::AcctIDSource AcctIDSource_20(1);
  msg.set(AcctIDSource_20);
  OrderCancelRequest_0.insert(AcctIDSource_20.getString());
  FIX::ClOrdID ClOrdID_36("STRING_287702634");
  msg.set(ClOrdID_36);
  OrderCancelRequest_0.insert(ClOrdID_36.getString());
  FIX::ClOrdLinkID ClOrdLinkID_16("STRING_1823883067");
  msg.set(ClOrdLinkID_16);
  OrderCancelRequest_0.insert(ClOrdLinkID_16.getString());
  FIX::ComplianceID ComplianceID_11("STRING_694803108");
  msg.set(ComplianceID_11);
  OrderCancelRequest_0.insert(ComplianceID_11.getString());
  FIX::EncodedText EncodedText_67("DATA_1101905511");
  msg.set(EncodedText_67);
  OrderCancelRequest_0.insert(EncodedText_67.getString());
  FIX::EncodedTextLen EncodedTextLen_67(1038211753);
  msg.set(EncodedTextLen_67);
  OrderCancelRequest_0.insert(EncodedTextLen_67.getString());
  FIX::ListID ListID_25("STRING_633221617");
  msg.set(ListID_25);
  OrderCancelRequest_0.insert(ListID_25.getString());
  FIX::OrderID OrderID_29("STRING_1784777920");
  msg.set(OrderID_29);
  OrderCancelRequest_0.insert(OrderID_29.getString());
  FIX::OrigClOrdID OrigClOrdID_11("STRING_2024089990");
  msg.set(OrigClOrdID_11);
  OrderCancelRequest_0.insert(OrigClOrdID_11.getString());
  FIX::OrigOrdModTime OrigOrdModTime_4(FIX::UTCTIMESTAMP(11, 30, 7, 3, 10, 2008));
  msg.set(OrigOrdModTime_4);
  OrderCancelRequest_0.insert(OrigOrdModTime_4.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_34("STRING_775775611");
  msg.set(SecondaryClOrdID_34);
  OrderCancelRequest_0.insert(SecondaryClOrdID_34.getString());
  FIX::Side Side_34('6');
  msg.set(Side_34);
  OrderCancelRequest_0.insert(Side_34.getString());
  FIX::Text Text_67("STRING_893015597");
  msg.set(Text_67);
  OrderCancelRequest_0.insert(Text_67.getString());
  FIX::TransactTime TransactTime_49(FIX::UTCTIMESTAMP(4, 49, 49, 14, 9, 2003));
  msg.set(TransactTime_49);
  OrderCancelRequest_0.insert(TransactTime_49.getString());
  all_values.push_back(OrderCancelRequest_0);

  all_compo_names.insert("OrderCancelRequest");

  // FinancingDetails
  multiset<string> FinancingDetails_14;
  FIX::AgreementCurrency AgreementCurrency_14("USD");
  msg.set(AgreementCurrency_14);
  FinancingDetails_14.insert(AgreementCurrency_14.getString());
  FIX::AgreementDate AgreementDate_14("LOCALMKTDATE_1081002218");
  msg.set(AgreementDate_14);
  FinancingDetails_14.insert(AgreementDate_14.getString());
  FIX::AgreementDesc AgreementDesc_14("STRING_778790305");
  msg.set(AgreementDesc_14);
  FinancingDetails_14.insert(AgreementDesc_14.getString());
  FIX::AgreementID AgreementID_14("STRING_716414960");
  msg.set(AgreementID_14);
  FinancingDetails_14.insert(AgreementID_14.getString());
  FIX::DeliveryType DeliveryType_14(2);
  msg.set(DeliveryType_14);
  FinancingDetails_14.insert(DeliveryType_14.getString());
  FIX::EndDate EndDate_14("LOCALMKTDATE_1066492940");
  msg.set(EndDate_14);
  FinancingDetails_14.insert(EndDate_14.getString());
  FIX::MarginRatio MarginRatio_14;
  MarginRatio_14.setString("43.800000");
  msg.set(MarginRatio_14);
  FinancingDetails_14.insert(MarginRatio_14.getString());
  FIX::StartDate StartDate_14("LOCALMKTDATE_1914420434");
  msg.set(StartDate_14);
  FinancingDetails_14.insert(StartDate_14.getString());
  FIX::TerminationType TerminationType_14(4);
  msg.set(TerminationType_14);
  FinancingDetails_14.insert(TerminationType_14.getString());
  all_values.push_back(FinancingDetails_14);
  all_compo_names.insert("FinancingDetails");

  // Instrument
  multiset<string> Instrument_56;
  FIX::AttachmentPoint AttachmentPoint_56;
  AttachmentPoint_56.setString("61.330000");
  msg.set(AttachmentPoint_56);
  Instrument_56.insert(AttachmentPoint_56.getString());
  FIX::CFICode CFICode_56("STRING_400158403");
  msg.set(CFICode_56);
  Instrument_56.insert(CFICode_56.getString());
  FIX::CPProgram CPProgram_56(2);
  msg.set(CPProgram_56);
  Instrument_56.insert(CPProgram_56.getString());
  FIX::CPRegType CPRegType_56("STRING_1307632475");
  msg.set(CPRegType_56);
  Instrument_56.insert(CPRegType_56.getString());
  FIX::CapPrice CapPrice_56;
  CapPrice_56.setString("2488652");
  msg.set(CapPrice_56);
  Instrument_56.insert(CapPrice_56.getString());
  FIX::ContractMultiplier ContractMultiplier_56;
  ContractMultiplier_56.setString("16202433");
  msg.set(ContractMultiplier_56);
  Instrument_56.insert(ContractMultiplier_56.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_56(1);
  msg.set(ContractMultiplierUnit_56);
  Instrument_56.insert(ContractMultiplierUnit_56.getString());
  FIX::ContractSettlMonth ContractSettlMonth_56("MONTHYEAR_1045232786");
  msg.set(ContractSettlMonth_56);
  Instrument_56.insert(ContractSettlMonth_56.getString());
  FIX::CountryOfIssue CountryOfIssue_56("COUNTRY_184816622");
  msg.set(CountryOfIssue_56);
  Instrument_56.insert(CountryOfIssue_56.getString());
  FIX::CouponPaymentDate CouponPaymentDate_56("LOCALMKTDATE_560229227");
  msg.set(CouponPaymentDate_56);
  Instrument_56.insert(CouponPaymentDate_56.getString());
  FIX::CouponRate CouponRate_56;
  CouponRate_56.setString("27.060000");
  msg.set(CouponRate_56);
  Instrument_56.insert(CouponRate_56.getString());
  FIX::CreditRating CreditRating_56("STRING_960592233");
  msg.set(CreditRating_56);
  Instrument_56.insert(CreditRating_56.getString());
  FIX::DatedDate DatedDate_56("LOCALMKTDATE_227558352");
  msg.set(DatedDate_56);
  Instrument_56.insert(DatedDate_56.getString());
  FIX::DetachmentPoint DetachmentPoint_56;
  DetachmentPoint_56.setString("83.040000");
  msg.set(DetachmentPoint_56);
  Instrument_56.insert(DetachmentPoint_56.getString());
  FIX::EncodedIssuer EncodedIssuer_56("DATA_737413782");
  msg.set(EncodedIssuer_56);
  Instrument_56.insert(EncodedIssuer_56.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_56(1044117941);
  msg.set(EncodedIssuerLen_56);
  Instrument_56.insert(EncodedIssuerLen_56.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_56("DATA_1460233465");
  msg.set(EncodedSecurityDesc_56);
  Instrument_56.insert(EncodedSecurityDesc_56.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_56(647187504);
  msg.set(EncodedSecurityDescLen_56);
  Instrument_56.insert(EncodedSecurityDescLen_56.getString());
  FIX::ExerciseStyle ExerciseStyle_56(0);
  msg.set(ExerciseStyle_56);
  Instrument_56.insert(ExerciseStyle_56.getString());
  FIX::Factor Factor_56;
  Factor_56.setString("18592052");
  msg.set(Factor_56);
  Instrument_56.insert(Factor_56.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_56(false);
  msg.set(FlexProductEligibilityIndicator_56);
  Instrument_56.insert(FlexProductEligibilityIndicator_56.getString());
  FIX::FlexibleIndicator FlexibleIndicator_56(false);
  msg.set(FlexibleIndicator_56);
  Instrument_56.insert(FlexibleIndicator_56.getString());
  FIX::FloorPrice FloorPrice_56;
  FloorPrice_56.setString("6111012");
  msg.set(FloorPrice_56);
  Instrument_56.insert(FloorPrice_56.getString());
  FIX::FlowScheduleType FlowScheduleType_56(3);
  msg.set(FlowScheduleType_56);
  Instrument_56.insert(FlowScheduleType_56.getString());
  FIX::InstrRegistry InstrRegistry_56("STRING_869477209");
  msg.set(InstrRegistry_56);
  Instrument_56.insert(InstrRegistry_56.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_56('1');
  msg.set(InstrmtAssignmentMethod_56);
  Instrument_56.insert(InstrmtAssignmentMethod_56.getString());
  FIX::InterestAccrualDate InterestAccrualDate_56("LOCALMKTDATE_1434383394");
  msg.set(InterestAccrualDate_56);
  Instrument_56.insert(InterestAccrualDate_56.getString());
  FIX::IssueDate IssueDate_56("LOCALMKTDATE_1935970149");
  msg.set(IssueDate_56);
  Instrument_56.insert(IssueDate_56.getString());
  FIX::Issuer Issuer_56("STRING_1720330614");
  msg.set(Issuer_56);
  Instrument_56.insert(Issuer_56.getString());
  FIX::ListMethod ListMethod_56(1);
  msg.set(ListMethod_56);
  Instrument_56.insert(ListMethod_56.getString());
  FIX::LocaleOfIssue LocaleOfIssue_56("STRING_1956884952");
  msg.set(LocaleOfIssue_56);
  Instrument_56.insert(LocaleOfIssue_56.getString());
  FIX::MaturityDate MaturityDate_56("LOCALMKTDATE_1003873099");
  msg.set(MaturityDate_56);
  Instrument_56.insert(MaturityDate_56.getString());
  FIX::MaturityMonthYear MaturityMonthYear_56("MONTHYEAR_1601478584");
  msg.set(MaturityMonthYear_56);
  Instrument_56.insert(MaturityMonthYear_56.getString());
  FIX::MaturityTime MaturityTime_56("TZTIMEONLY_1615094027");
  msg.set(MaturityTime_56);
  Instrument_56.insert(MaturityTime_56.getString());
  FIX::MinPriceIncrement MinPriceIncrement_56;
  MinPriceIncrement_56.setString("1640219");
  msg.set(MinPriceIncrement_56);
  Instrument_56.insert(MinPriceIncrement_56.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_56;
  MinPriceIncrementAmount_56.setString("18503438");
  msg.set(MinPriceIncrementAmount_56);
  Instrument_56.insert(MinPriceIncrementAmount_56.getString());
  FIX::NTPositionLimit NTPositionLimit_56(1087853762);
  msg.set(NTPositionLimit_56);
  Instrument_56.insert(NTPositionLimit_56.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_56;
  NotionalPercentageOutstanding_56.setString("78.250000");
  msg.set(NotionalPercentageOutstanding_56);
  Instrument_56.insert(NotionalPercentageOutstanding_56.getString());
  FIX::OptAttribute OptAttribute_56('7');
  msg.set(OptAttribute_56);
  Instrument_56.insert(OptAttribute_56.getString());
  FIX::OptPayoutAmount OptPayoutAmount_56;
  OptPayoutAmount_56.setString("12726703");
  msg.set(OptPayoutAmount_56);
  Instrument_56.insert(OptPayoutAmount_56.getString());
  FIX::OptPayoutType OptPayoutType_56(3);
  msg.set(OptPayoutType_56);
  Instrument_56.insert(OptPayoutType_56.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_56;
  OriginalNotionalPercentageOutstanding_56.setString("56.880000");
  msg.set(OriginalNotionalPercentageOutstanding_56);
  Instrument_56.insert(OriginalNotionalPercentageOutstanding_56.getString());
  FIX::Pool Pool_56("STRING_85778969");
  msg.set(Pool_56);
  Instrument_56.insert(Pool_56.getString());
  FIX::PositionLimit PositionLimit_56(1699515404);
  msg.set(PositionLimit_56);
  Instrument_56.insert(PositionLimit_56.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_56("STRING_STD");
  msg.set(PriceQuoteMethod_56);
  Instrument_56.insert(PriceQuoteMethod_56.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_56("STRING_823192752");
  msg.set(PriceUnitOfMeasure_56);
  Instrument_56.insert(PriceUnitOfMeasure_56.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_56;
  PriceUnitOfMeasureQty_56.setString("5961496");
  msg.set(PriceUnitOfMeasureQty_56);
  Instrument_56.insert(PriceUnitOfMeasureQty_56.getString());
  FIX::Product Product_58(8);
  msg.set(Product_58);
  Instrument_56.insert(Product_58.getString());
  FIX::ProductComplex ProductComplex_56("STRING_1470380256");
  msg.set(ProductComplex_56);
  Instrument_56.insert(ProductComplex_56.getString());
  FIX::PutOrCall PutOrCall_56(0);
  msg.set(PutOrCall_56);
  Instrument_56.insert(PutOrCall_56.getString());
  FIX::RedemptionDate RedemptionDate_56("LOCALMKTDATE_374121762");
  msg.set(RedemptionDate_56);
  Instrument_56.insert(RedemptionDate_56.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_56("STRING_604144105");
  msg.set(RepoCollateralSecurityType_56);
  Instrument_56.insert(RepoCollateralSecurityType_56.getString());
  FIX::RepurchaseRate RepurchaseRate_56;
  RepurchaseRate_56.setString("75.800000");
  msg.set(RepurchaseRate_56);
  Instrument_56.insert(RepurchaseRate_56.getString());
  FIX::RepurchaseTerm RepurchaseTerm_56(985223036);
  msg.set(RepurchaseTerm_56);
  Instrument_56.insert(RepurchaseTerm_56.getString());
  FIX::RestructuringType RestructuringType_56("STRING_MR");
  msg.set(RestructuringType_56);
  Instrument_56.insert(RestructuringType_56.getString());
  FIX::SecurityDesc SecurityDesc_56("STRING_1569504789");
  msg.set(SecurityDesc_56);
  Instrument_56.insert(SecurityDesc_56.getString());
  FIX::SecurityExchange SecurityExchange_56("EXCHANGE_165255622");
  msg.set(SecurityExchange_56);
  Instrument_56.insert(SecurityExchange_56.getString());
  FIX::SecurityGroup SecurityGroup_56("STRING_105809920");
  msg.set(SecurityGroup_56);
  Instrument_56.insert(SecurityGroup_56.getString());
  FIX::SecurityID SecurityID_56("STRING_1357991290");
  msg.set(SecurityID_56);
  Instrument_56.insert(SecurityID_56.getString());
  FIX::SecurityIDSource SecurityIDSource_56("STRING_7");
  msg.set(SecurityIDSource_56);
  Instrument_56.insert(SecurityIDSource_56.getString());
  FIX::SecurityStatus SecurityStatus_56("STRING_2");
  msg.set(SecurityStatus_56);
  Instrument_56.insert(SecurityStatus_56.getString());
  FIX::SecuritySubType SecuritySubType_57("STRING_1167392594");
  msg.set(SecuritySubType_57);
  Instrument_56.insert(SecuritySubType_57.getString());
  FIX::SecurityType SecurityType_58("STRING_CP");
  msg.set(SecurityType_58);
  Instrument_56.insert(SecurityType_58.getString());
  FIX::Seniority Seniority_56("STRING_SB");
  msg.set(Seniority_56);
  Instrument_56.insert(Seniority_56.getString());
  FIX::SettlMethod SettlMethod_56('P');
  msg.set(SettlMethod_56);
  Instrument_56.insert(SettlMethod_56.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_56("STRING_905997614");
  msg.set(SettleOnOpenFlag_56);
  Instrument_56.insert(SettleOnOpenFlag_56.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_56("STRING_463985233");
  msg.set(StateOrProvinceOfIssue_56);
  Instrument_56.insert(StateOrProvinceOfIssue_56.getString());
  FIX::StrikeCurrency StrikeCurrency_56("CAN");
  msg.set(StrikeCurrency_56);
  Instrument_56.insert(StrikeCurrency_56.getString());
  FIX::StrikeMultiplier StrikeMultiplier_56;
  StrikeMultiplier_56.setString("12120782");
  msg.set(StrikeMultiplier_56);
  Instrument_56.insert(StrikeMultiplier_56.getString());
  FIX::StrikePrice StrikePrice_56;
  StrikePrice_56.setString("8480434");
  msg.set(StrikePrice_56);
  Instrument_56.insert(StrikePrice_56.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_56(4);
  msg.set(StrikePriceBoundaryMethod_56);
  Instrument_56.insert(StrikePriceBoundaryMethod_56.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_56;
  StrikePriceBoundaryPrecision_56.setString("2.540000");
  msg.set(StrikePriceBoundaryPrecision_56);
  Instrument_56.insert(StrikePriceBoundaryPrecision_56.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_56(2);
  msg.set(StrikePriceDeterminationMethod_56);
  Instrument_56.insert(StrikePriceDeterminationMethod_56.getString());
  FIX::StrikeValue StrikeValue_56;
  StrikeValue_56.setString("6942306");
  msg.set(StrikeValue_56);
  Instrument_56.insert(StrikeValue_56.getString());
  FIX::Symbol Symbol_56("STRING_2090350598");
  msg.set(Symbol_56);
  Instrument_56.insert(Symbol_56.getString());
  FIX::SymbolSfx SymbolSfx_56("STRING_WI");
  msg.set(SymbolSfx_56);
  Instrument_56.insert(SymbolSfx_56.getString());
  FIX::TimeUnit TimeUnit_56("STRING_D");
  msg.set(TimeUnit_56);
  Instrument_56.insert(TimeUnit_56.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_56(4);
  msg.set(UnderlyingPriceDeterminationMethod_56);
  Instrument_56.insert(UnderlyingPriceDeterminationMethod_56.getString());
  FIX::UnitOfMeasure UnitOfMeasure_56("STRING_Gal");
  msg.set(UnitOfMeasure_56);
  Instrument_56.insert(UnitOfMeasure_56.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_56;
  UnitOfMeasureQty_56.setString("18997209");
  msg.set(UnitOfMeasureQty_56);
  Instrument_56.insert(UnitOfMeasureQty_56.getString());
  FIX::ValuationMethod ValuationMethod_56("STRING_CDSD");
  msg.set(ValuationMethod_56);
  Instrument_56.insert(ValuationMethod_56.getString());
  all_values.push_back(Instrument_56);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_112;
    FIX::ComplexEventCondition ComplexEventCondition_112(1);
    noComplexEvents_0_0.set(ComplexEventCondition_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventCondition_112.getString());
    FIX::ComplexEventPrice ComplexEventPrice_112;
    ComplexEventPrice_112.setString("19646119");
    noComplexEvents_0_0.set(ComplexEventPrice_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventPrice_112.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_112(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventPriceBoundaryMethod_112.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_112;
    ComplexEventPriceBoundaryPrecision_112.setString("96.950000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventPriceBoundaryPrecision_112.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_112(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventPriceTimeType_112.getString());
    FIX::ComplexEventType ComplexEventType_112(8);
    noComplexEvents_0_0.set(ComplexEventType_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventType_112.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_112;
    ComplexOptPayoutAmount_112.setString("12322773");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexOptPayoutAmount_112.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_112);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_226;
      FIX::ComplexEventEndDate ComplexEventEndDate_226(FIX::UTCTIMESTAMP(19, 39, 42, 16, 7, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_226);
      ComplexEventDates_NoComplexEventDates_226.insert(ComplexEventEndDate_226.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_226(FIX::UTCTIMESTAMP(21, 30, 15, 21, 1, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_226);
      ComplexEventDates_NoComplexEventDates_226.insert(ComplexEventStartDate_226.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_226);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_459;
        FIX::ComplexEventEndTime ComplexEventEndTime_459(FIX::UTCTIMEONLY(1, 18, 18));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_459);
        ComplexEventTimes_NoComplexEventTimes_459.insert(ComplexEventEndTime_459.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_459(FIX::UTCTIMEONLY(0, 4, 13));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_459);
        ComplexEventTimes_NoComplexEventTimes_459.insert(ComplexEventStartTime_459.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_459);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_460;
        FIX::ComplexEventEndTime ComplexEventEndTime_460(FIX::UTCTIMEONLY(6, 25, 17));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_460);
        ComplexEventTimes_NoComplexEventTimes_460.insert(ComplexEventEndTime_460.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_460(FIX::UTCTIMEONLY(5, 46, 10));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_460);
        ComplexEventTimes_NoComplexEventTimes_460.insert(ComplexEventStartTime_460.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_460);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_227;
      FIX::ComplexEventEndDate ComplexEventEndDate_227(FIX::UTCTIMESTAMP(5, 42, 24, 22, 1, 2002));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_227);
      ComplexEventDates_NoComplexEventDates_227.insert(ComplexEventEndDate_227.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_227(FIX::UTCTIMESTAMP(13, 42, 37, 6, 11, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_227);
      ComplexEventDates_NoComplexEventDates_227.insert(ComplexEventStartDate_227.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_227);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_461;
        FIX::ComplexEventEndTime ComplexEventEndTime_461(FIX::UTCTIMEONLY(23, 26, 28));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_461);
        ComplexEventTimes_NoComplexEventTimes_461.insert(ComplexEventEndTime_461.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_461(FIX::UTCTIMEONLY(18, 32, 59));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_461);
        ComplexEventTimes_NoComplexEventTimes_461.insert(ComplexEventStartTime_461.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_461);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_228;
      FIX::ComplexEventEndDate ComplexEventEndDate_228(FIX::UTCTIMESTAMP(15, 24, 34, 17, 10, 2015));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_228);
      ComplexEventDates_NoComplexEventDates_228.insert(ComplexEventEndDate_228.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_228(FIX::UTCTIMESTAMP(3, 42, 2, 19, 5, 2006));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_228);
      ComplexEventDates_NoComplexEventDates_228.insert(ComplexEventStartDate_228.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_228);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_462;
        FIX::ComplexEventEndTime ComplexEventEndTime_462(FIX::UTCTIMEONLY(19, 25, 32));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_462);
        ComplexEventTimes_NoComplexEventTimes_462.insert(ComplexEventEndTime_462.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_462(FIX::UTCTIMEONLY(4, 30, 5));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_462);
        ComplexEventTimes_NoComplexEventTimes_462.insert(ComplexEventStartTime_462.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_462);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_113;
    FIX::ComplexEventCondition ComplexEventCondition_113(2);
    noComplexEvents_0_1.set(ComplexEventCondition_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventCondition_113.getString());
    FIX::ComplexEventPrice ComplexEventPrice_113;
    ComplexEventPrice_113.setString("11277003");
    noComplexEvents_0_1.set(ComplexEventPrice_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventPrice_113.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_113(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventPriceBoundaryMethod_113.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_113;
    ComplexEventPriceBoundaryPrecision_113.setString("43.730000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventPriceBoundaryPrecision_113.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_113(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventPriceTimeType_113.getString());
    FIX::ComplexEventType ComplexEventType_113(3);
    noComplexEvents_0_1.set(ComplexEventType_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventType_113.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_113;
    ComplexOptPayoutAmount_113.setString("12629933");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexOptPayoutAmount_113.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_113);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_229;
      FIX::ComplexEventEndDate ComplexEventEndDate_229(FIX::UTCTIMESTAMP(5, 22, 5, 2, 8, 2012));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_229);
      ComplexEventDates_NoComplexEventDates_229.insert(ComplexEventEndDate_229.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_229(FIX::UTCTIMESTAMP(14, 1, 28, 10, 10, 2014));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_229);
      ComplexEventDates_NoComplexEventDates_229.insert(ComplexEventStartDate_229.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_229);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_463;
        FIX::ComplexEventEndTime ComplexEventEndTime_463(FIX::UTCTIMEONLY(10, 35, 0));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_463);
        ComplexEventTimes_NoComplexEventTimes_463.insert(ComplexEventEndTime_463.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_463(FIX::UTCTIMEONLY(3, 22, 29));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_463);
        ComplexEventTimes_NoComplexEventTimes_463.insert(ComplexEventStartTime_463.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_463);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_464;
        FIX::ComplexEventEndTime ComplexEventEndTime_464(FIX::UTCTIMEONLY(19, 1, 54));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_464);
        ComplexEventTimes_NoComplexEventTimes_464.insert(ComplexEventEndTime_464.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_464(FIX::UTCTIMEONLY(7, 32, 41));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_464);
        ComplexEventTimes_NoComplexEventTimes_464.insert(ComplexEventStartTime_464.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_464);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_465;
        FIX::ComplexEventEndTime ComplexEventEndTime_465(FIX::UTCTIMEONLY(1, 56, 43));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_465);
        ComplexEventTimes_NoComplexEventTimes_465.insert(ComplexEventEndTime_465.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_465(FIX::UTCTIMEONLY(7, 2, 10));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_465);
        ComplexEventTimes_NoComplexEventTimes_465.insert(ComplexEventStartTime_465.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_465);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_230;
      FIX::ComplexEventEndDate ComplexEventEndDate_230(FIX::UTCTIMESTAMP(7, 38, 12, 16, 10, 2017));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_230);
      ComplexEventDates_NoComplexEventDates_230.insert(ComplexEventEndDate_230.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_230(FIX::UTCTIMESTAMP(19, 4, 48, 27, 12, 2004));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_230);
      ComplexEventDates_NoComplexEventDates_230.insert(ComplexEventStartDate_230.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_230);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_466;
        FIX::ComplexEventEndTime ComplexEventEndTime_466(FIX::UTCTIMEONLY(22, 41, 34));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_466);
        ComplexEventTimes_NoComplexEventTimes_466.insert(ComplexEventEndTime_466.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_466(FIX::UTCTIMEONLY(4, 6, 54));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_466);
        ComplexEventTimes_NoComplexEventTimes_466.insert(ComplexEventStartTime_466.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_466);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_467;
        FIX::ComplexEventEndTime ComplexEventEndTime_467(FIX::UTCTIMEONLY(23, 50, 54));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_467);
        ComplexEventTimes_NoComplexEventTimes_467.insert(ComplexEventEndTime_467.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_467(FIX::UTCTIMEONLY(22, 48, 28));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_467);
        ComplexEventTimes_NoComplexEventTimes_467.insert(ComplexEventStartTime_467.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_467);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderCancelRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_114;
    FIX::ComplexEventCondition ComplexEventCondition_114(1);
    noComplexEvents_0_2.set(ComplexEventCondition_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventCondition_114.getString());
    FIX::ComplexEventPrice ComplexEventPrice_114;
    ComplexEventPrice_114.setString("7675422");
    noComplexEvents_0_2.set(ComplexEventPrice_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventPrice_114.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_114(5);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventPriceBoundaryMethod_114.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_114;
    ComplexEventPriceBoundaryPrecision_114.setString("25.040000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventPriceBoundaryPrecision_114.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_114(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventPriceTimeType_114.getString());
    FIX::ComplexEventType ComplexEventType_114(9);
    noComplexEvents_0_2.set(ComplexEventType_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventType_114.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_114;
    ComplexOptPayoutAmount_114.setString("3728673");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexOptPayoutAmount_114.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_114);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_231;
      FIX::ComplexEventEndDate ComplexEventEndDate_231(FIX::UTCTIMESTAMP(18, 40, 18, 1, 8, 2010));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_231);
      ComplexEventDates_NoComplexEventDates_231.insert(ComplexEventEndDate_231.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_231(FIX::UTCTIMESTAMP(21, 32, 47, 14, 1, 2011));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_231);
      ComplexEventDates_NoComplexEventDates_231.insert(ComplexEventStartDate_231.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_231);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_468;
        FIX::ComplexEventEndTime ComplexEventEndTime_468(FIX::UTCTIMEONLY(8, 19, 9));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_468);
        ComplexEventTimes_NoComplexEventTimes_468.insert(ComplexEventEndTime_468.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_468(FIX::UTCTIMEONLY(21, 49, 59));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_468);
        ComplexEventTimes_NoComplexEventTimes_468.insert(ComplexEventStartTime_468.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_468);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_469;
        FIX::ComplexEventEndTime ComplexEventEndTime_469(FIX::UTCTIMEONLY(4, 58, 13));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_469);
        ComplexEventTimes_NoComplexEventTimes_469.insert(ComplexEventEndTime_469.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_469(FIX::UTCTIMEONLY(22, 58, 3));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_469);
        ComplexEventTimes_NoComplexEventTimes_469.insert(ComplexEventStartTime_469.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_469);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_232;
      FIX::ComplexEventEndDate ComplexEventEndDate_232(FIX::UTCTIMESTAMP(4, 36, 27, 26, 12, 2002));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_232);
      ComplexEventDates_NoComplexEventDates_232.insert(ComplexEventEndDate_232.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_232(FIX::UTCTIMESTAMP(8, 50, 23, 18, 7, 2014));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_232);
      ComplexEventDates_NoComplexEventDates_232.insert(ComplexEventStartDate_232.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_232);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_470;
        FIX::ComplexEventEndTime ComplexEventEndTime_470(FIX::UTCTIMEONLY(9, 45, 10));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_470);
        ComplexEventTimes_NoComplexEventTimes_470.insert(ComplexEventEndTime_470.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_470(FIX::UTCTIMEONLY(10, 59, 51));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_470);
        ComplexEventTimes_NoComplexEventTimes_470.insert(ComplexEventStartTime_470.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_470);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_471;
        FIX::ComplexEventEndTime ComplexEventEndTime_471(FIX::UTCTIMEONLY(19, 50, 24));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_471);
        ComplexEventTimes_NoComplexEventTimes_471.insert(ComplexEventEndTime_471.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_471(FIX::UTCTIMEONLY(16, 15, 22));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_471);
        ComplexEventTimes_NoComplexEventTimes_471.insert(ComplexEventStartTime_471.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_471);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_472;
        FIX::ComplexEventEndTime ComplexEventEndTime_472(FIX::UTCTIMEONLY(11, 50, 29));
        noComplexEventTimes_2_1_2_2.set(ComplexEventEndTime_472);
        ComplexEventTimes_NoComplexEventTimes_472.insert(ComplexEventEndTime_472.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_472(FIX::UTCTIMEONLY(17, 47, 29));
        noComplexEventTimes_2_1_2_2.set(ComplexEventStartTime_472);
        ComplexEventTimes_NoComplexEventTimes_472.insert(ComplexEventStartTime_472.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_472);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_109;
    FIX::EventDate EventDate_109("LOCALMKTDATE_665070637");
    noEvents_0_0.set(EventDate_109);
    EvntGrp_NoEvents_109.insert(EventDate_109.getString());
    FIX::EventPx EventPx_109;
    EventPx_109.setString("4958931");
    noEvents_0_0.set(EventPx_109);
    EvntGrp_NoEvents_109.insert(EventPx_109.getString());
    FIX::EventText EventText_109("STRING_68557095");
    noEvents_0_0.set(EventText_109);
    EvntGrp_NoEvents_109.insert(EventText_109.getString());
    FIX::EventTime EventTime_109(FIX::UTCTIMESTAMP(8, 42, 41, 5, 4, 2004));
    noEvents_0_0.set(EventTime_109);
    EvntGrp_NoEvents_109.insert(EventTime_109.getString());
    FIX::EventType EventType_109(18);
    noEvents_0_0.set(EventType_109);
    EvntGrp_NoEvents_109.insert(EventType_109.getString());
    all_values.push_back(EvntGrp_NoEvents_109);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_110;
    FIX::EventDate EventDate_110("LOCALMKTDATE_2092614590");
    noEvents_0_1.set(EventDate_110);
    EvntGrp_NoEvents_110.insert(EventDate_110.getString());
    FIX::EventPx EventPx_110;
    EventPx_110.setString("15436925");
    noEvents_0_1.set(EventPx_110);
    EvntGrp_NoEvents_110.insert(EventPx_110.getString());
    FIX::EventText EventText_110("STRING_860566249");
    noEvents_0_1.set(EventText_110);
    EvntGrp_NoEvents_110.insert(EventText_110.getString());
    FIX::EventTime EventTime_110(FIX::UTCTIMESTAMP(3, 31, 18, 14, 12, 2007));
    noEvents_0_1.set(EventTime_110);
    EvntGrp_NoEvents_110.insert(EventTime_110.getString());
    FIX::EventType EventType_110(17);
    noEvents_0_1.set(EventType_110);
    EvntGrp_NoEvents_110.insert(EventType_110.getString());
    all_values.push_back(EvntGrp_NoEvents_110);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderCancelRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_111;
    FIX::EventDate EventDate_111("LOCALMKTDATE_31316297");
    noEvents_0_2.set(EventDate_111);
    EvntGrp_NoEvents_111.insert(EventDate_111.getString());
    FIX::EventPx EventPx_111;
    EventPx_111.setString("16356894");
    noEvents_0_2.set(EventPx_111);
    EvntGrp_NoEvents_111.insert(EventPx_111.getString());
    FIX::EventText EventText_111("STRING_1570060327");
    noEvents_0_2.set(EventText_111);
    EvntGrp_NoEvents_111.insert(EventText_111.getString());
    FIX::EventTime EventTime_111(FIX::UTCTIMESTAMP(6, 0, 34, 19, 7, 2000));
    noEvents_0_2.set(EventTime_111);
    EvntGrp_NoEvents_111.insert(EventTime_111.getString());
    FIX::EventType EventType_111(99);
    noEvents_0_2.set(EventType_111);
    EvntGrp_NoEvents_111.insert(EventType_111.getString());
    all_values.push_back(EvntGrp_NoEvents_111);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_115;
    FIX::InstrumentPartyID InstrumentPartyID_115("STRING_819204576");
    noInstrumentParties_0_0.set(InstrumentPartyID_115);
    InstrumentParties_NoInstrumentParties_115.insert(InstrumentPartyID_115.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_115('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_115);
    InstrumentParties_NoInstrumentParties_115.insert(InstrumentPartyIDSource_115.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_115(187486207);
    noInstrumentParties_0_0.set(InstrumentPartyRole_115);
    InstrumentParties_NoInstrumentParties_115.insert(InstrumentPartyRole_115.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_115);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219;
      FIX::InstrumentPartySubID InstrumentPartySubID_219("STRING_639965521");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_219);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219.insert(InstrumentPartySubID_219.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_219(1847028755);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_219);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219.insert(InstrumentPartySubIDType_219.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_116;
    FIX::InstrumentPartyID InstrumentPartyID_116("STRING_1738151821");
    noInstrumentParties_0_1.set(InstrumentPartyID_116);
    InstrumentParties_NoInstrumentParties_116.insert(InstrumentPartyID_116.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_116('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_116);
    InstrumentParties_NoInstrumentParties_116.insert(InstrumentPartyIDSource_116.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_116(1792159697);
    noInstrumentParties_0_1.set(InstrumentPartyRole_116);
    InstrumentParties_NoInstrumentParties_116.insert(InstrumentPartyRole_116.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_116);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220;
      FIX::InstrumentPartySubID InstrumentPartySubID_220("STRING_2066929427");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_220);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220.insert(InstrumentPartySubID_220.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_220(2121789730);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_220);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220.insert(InstrumentPartySubIDType_220.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221;
      FIX::InstrumentPartySubID InstrumentPartySubID_221("STRING_724884080");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_221);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221.insert(InstrumentPartySubID_221.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_221(636251710);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_221);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221.insert(InstrumentPartySubIDType_221.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_103;
    FIX::SecurityAltID SecurityAltID_103("STRING_825809422");
    noSecurityAltID_0_0.set(SecurityAltID_103);
    SecAltIDGrp_NoSecurityAltID_103.insert(SecurityAltID_103.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_103("STRING_76794266");
    noSecurityAltID_0_0.set(SecurityAltIDSource_103);
    SecAltIDGrp_NoSecurityAltID_103.insert(SecurityAltIDSource_103.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_103);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_104;
    FIX::SecurityAltID SecurityAltID_104("STRING_698598037");
    noSecurityAltID_0_1.set(SecurityAltID_104);
    SecAltIDGrp_NoSecurityAltID_104.insert(SecurityAltID_104.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_104("STRING_904423358");
    noSecurityAltID_0_1.set(SecurityAltIDSource_104);
    SecAltIDGrp_NoSecurityAltID_104.insert(SecurityAltIDSource_104.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_104);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderCancelRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_105;
    FIX::SecurityAltID SecurityAltID_105("STRING_108110563");
    noSecurityAltID_0_2.set(SecurityAltID_105);
    SecAltIDGrp_NoSecurityAltID_105.insert(SecurityAltID_105.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_105("STRING_186803862");
    noSecurityAltID_0_2.set(SecurityAltIDSource_105);
    SecAltIDGrp_NoSecurityAltID_105.insert(SecurityAltIDSource_105.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_105);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_112;
  FIX::SecurityXML SecurityXML_113("XMLDATA_327000037");
  msg.set(SecurityXML_113);
  FIX::SecurityXMLLen SecurityXMLLen_56(1120749870);
  msg.set(SecurityXMLLen_56);
  FIX::SecurityXMLSchema SecurityXMLSchema_56("STRING_788232708");
  msg.set(SecurityXMLSchema_56);
  SecurityXML_112.insert(SecurityXMLSchema_56.getString());
  all_values.push_back(SecurityXML_112);
  all_compo_names.insert("SecurityXML");

  // OrderQtyData
  multiset<string> OrderQtyData_18;
  FIX::CashOrderQty CashOrderQty_18;
  CashOrderQty_18.setString("644942");
  msg.set(CashOrderQty_18);
  OrderQtyData_18.insert(CashOrderQty_18.getString());
  FIX::OrderPercent OrderPercent_18;
  OrderPercent_18.setString("88.970000");
  msg.set(OrderPercent_18);
  OrderQtyData_18.insert(OrderPercent_18.getString());
  FIX::OrderQty OrderQty_28;
  OrderQty_28.setString("19477109");
  msg.set(OrderQty_28);
  OrderQtyData_18.insert(OrderQty_28.getString());
  FIX::RoundingDirection RoundingDirection_18('1');
  msg.set(RoundingDirection_18);
  OrderQtyData_18.insert(RoundingDirection_18.getString());
  FIX::RoundingModulus RoundingModulus_18;
  RoundingModulus_18.setString("1351185");
  msg.set(RoundingModulus_18);
  OrderQtyData_18.insert(RoundingModulus_18.getString());
  all_values.push_back(OrderQtyData_18);
  all_compo_names.insert("OrderQtyData");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_81;
    FIX::PartyID PartyID_81("STRING_86839865");
    noPartyIDs_0_0.set(PartyID_81);
    Parties_NoPartyIDs_81.insert(PartyID_81.getString());
    FIX::PartyIDSource PartyIDSource_81('7');
    noPartyIDs_0_0.set(PartyIDSource_81);
    Parties_NoPartyIDs_81.insert(PartyIDSource_81.getString());
    FIX::PartyRole PartyRole_81(18);
    noPartyIDs_0_0.set(PartyRole_81);
    Parties_NoPartyIDs_81.insert(PartyRole_81.getString());
    all_values.push_back(Parties_NoPartyIDs_81);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_179;
      FIX::PartySubID PartySubID_179("STRING_1010713966");
      noPartySubIDs_0_1_0.set(PartySubID_179);
      PtysSubGrp_NoPartySubIDs_179.insert(PartySubID_179.getString());
      FIX::PartySubIDType PartySubIDType_179(19);
      noPartySubIDs_0_1_0.set(PartySubIDType_179);
      PtysSubGrp_NoPartySubIDs_179.insert(PartySubIDType_179.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_179);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_180;
      FIX::PartySubID PartySubID_180("STRING_2121354828");
      noPartySubIDs_0_1_1.set(PartySubID_180);
      PtysSubGrp_NoPartySubIDs_180.insert(PartySubID_180.getString());
      FIX::PartySubIDType PartySubIDType_180(8);
      noPartySubIDs_0_1_1.set(PartySubIDType_180);
      PtysSubGrp_NoPartySubIDs_180.insert(PartySubIDType_180.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_180);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_82;
    FIX::PartyID PartyID_82("STRING_997904901");
    noPartyIDs_0_1.set(PartyID_82);
    Parties_NoPartyIDs_82.insert(PartyID_82.getString());
    FIX::PartyIDSource PartyIDSource_82('5');
    noPartyIDs_0_1.set(PartyIDSource_82);
    Parties_NoPartyIDs_82.insert(PartyIDSource_82.getString());
    FIX::PartyRole PartyRole_82(79);
    noPartyIDs_0_1.set(PartyRole_82);
    Parties_NoPartyIDs_82.insert(PartyRole_82.getString());
    all_values.push_back(Parties_NoPartyIDs_82);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_181;
      FIX::PartySubID PartySubID_181("STRING_1740336959");
      noPartySubIDs_1_1_0.set(PartySubID_181);
      PtysSubGrp_NoPartySubIDs_181.insert(PartySubID_181.getString());
      FIX::PartySubIDType PartySubIDType_181(27);
      noPartySubIDs_1_1_0.set(PartySubIDType_181);
      PtysSubGrp_NoPartySubIDs_181.insert(PartySubIDType_181.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_181);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderCancelRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_78;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_78("DATA_1526568072");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_78);
    UnderlyingInstrument_78.insert(EncodedUnderlyingIssuer_78.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_78(1138952751);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_78);
    UnderlyingInstrument_78.insert(EncodedUnderlyingIssuerLen_78.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_78("DATA_1630396657");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_78);
    UnderlyingInstrument_78.insert(EncodedUnderlyingSecurityDesc_78.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_78(77682461);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_78);
    UnderlyingInstrument_78.insert(EncodedUnderlyingSecurityDescLen_78.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_78;
    UnderlyingAdjustedQuantity_78.setString("20433761");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_78);
    UnderlyingInstrument_78.insert(UnderlyingAdjustedQuantity_78.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_78;
    UnderlyingAllocationPercent_78.setString("72.200000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_78);
    UnderlyingInstrument_78.insert(UnderlyingAllocationPercent_78.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_78;
    UnderlyingAttachmentPoint_78.setString("63.230000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_78);
    UnderlyingInstrument_78.insert(UnderlyingAttachmentPoint_78.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_78("STRING_222892499");
    noUnderlyings_0_0.set(UnderlyingCFICode_78);
    UnderlyingInstrument_78.insert(UnderlyingCFICode_78.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_78("STRING_711773443");
    noUnderlyings_0_0.set(UnderlyingCPProgram_78);
    UnderlyingInstrument_78.insert(UnderlyingCPProgram_78.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_78("STRING_1052719031");
    noUnderlyings_0_0.set(UnderlyingCPRegType_78);
    UnderlyingInstrument_78.insert(UnderlyingCPRegType_78.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_78;
    UnderlyingCapValue_78.setString("2873867");
    noUnderlyings_0_0.set(UnderlyingCapValue_78);
    UnderlyingInstrument_78.insert(UnderlyingCapValue_78.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_78;
    UnderlyingCashAmount_78.setString("10071723");
    noUnderlyings_0_0.set(UnderlyingCashAmount_78);
    UnderlyingInstrument_78.insert(UnderlyingCashAmount_78.getString());
    FIX::UnderlyingCashType UnderlyingCashType_78("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_78);
    UnderlyingInstrument_78.insert(UnderlyingCashType_78.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_78;
    UnderlyingContractMultiplier_78.setString("3287752");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_78);
    UnderlyingInstrument_78.insert(UnderlyingContractMultiplier_78.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_78(1142290901);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_78);
    UnderlyingInstrument_78.insert(UnderlyingContractMultiplierUnit_78.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_78("COUNTRY_161061412");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_78);
    UnderlyingInstrument_78.insert(UnderlyingCountryOfIssue_78.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_78("LOCALMKTDATE_415615154");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_78);
    UnderlyingInstrument_78.insert(UnderlyingCouponPaymentDate_78.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_78;
    UnderlyingCouponRate_78.setString("40.380000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_78);
    UnderlyingInstrument_78.insert(UnderlyingCouponRate_78.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_78("STRING_1460121262");
    noUnderlyings_0_0.set(UnderlyingCreditRating_78);
    UnderlyingInstrument_78.insert(UnderlyingCreditRating_78.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_78("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_78);
    UnderlyingInstrument_78.insert(UnderlyingCurrency_78.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_78;
    UnderlyingCurrentValue_78.setString("12516629");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_78);
    UnderlyingInstrument_78.insert(UnderlyingCurrentValue_78.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_78;
    UnderlyingDetachmentPoint_78.setString("24.070000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_78);
    UnderlyingInstrument_78.insert(UnderlyingDetachmentPoint_78.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_78;
    UnderlyingDirtyPrice_78.setString("15612264");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_78);
    UnderlyingInstrument_78.insert(UnderlyingDirtyPrice_78.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_78;
    UnderlyingEndPrice_78.setString("1020842");
    noUnderlyings_0_0.set(UnderlyingEndPrice_78);
    UnderlyingInstrument_78.insert(UnderlyingEndPrice_78.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_78;
    UnderlyingEndValue_78.setString("2823596");
    noUnderlyings_0_0.set(UnderlyingEndValue_78);
    UnderlyingInstrument_78.insert(UnderlyingEndValue_78.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_78(1149485745);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_78);
    UnderlyingInstrument_78.insert(UnderlyingExerciseStyle_78.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_78;
    UnderlyingFXRate_78.setString("10194349");
    noUnderlyings_0_0.set(UnderlyingFXRate_78);
    UnderlyingInstrument_78.insert(UnderlyingFXRate_78.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_78('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_78);
    UnderlyingInstrument_78.insert(UnderlyingFXRateCalc_78.getString());
    FIX::UnderlyingFactor UnderlyingFactor_78;
    UnderlyingFactor_78.setString("14626290");
    noUnderlyings_0_0.set(UnderlyingFactor_78);
    UnderlyingInstrument_78.insert(UnderlyingFactor_78.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_78(425553661);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_78);
    UnderlyingInstrument_78.insert(UnderlyingFlowScheduleType_78.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_78("STRING_1401781020");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_78);
    UnderlyingInstrument_78.insert(UnderlyingInstrRegistry_78.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_78("LOCALMKTDATE_454098177");
    noUnderlyings_0_0.set(UnderlyingIssueDate_78);
    UnderlyingInstrument_78.insert(UnderlyingIssueDate_78.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_78("STRING_2055950318");
    noUnderlyings_0_0.set(UnderlyingIssuer_78);
    UnderlyingInstrument_78.insert(UnderlyingIssuer_78.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_78("STRING_1479463481");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_78);
    UnderlyingInstrument_78.insert(UnderlyingLocaleOfIssue_78.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_78("LOCALMKTDATE_349990639");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_78);
    UnderlyingInstrument_78.insert(UnderlyingMaturityDate_78.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_78("MONTHYEAR_1646973890");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_78);
    UnderlyingInstrument_78.insert(UnderlyingMaturityMonthYear_78.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_78("TZTIMEONLY_1743949805");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_78);
    UnderlyingInstrument_78.insert(UnderlyingMaturityTime_78.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_78;
    UnderlyingNotionalPercentageOutstanding_78.setString("31.380000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_78);
    UnderlyingInstrument_78.insert(UnderlyingNotionalPercentageOutstanding_78.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_78('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_78);
    UnderlyingInstrument_78.insert(UnderlyingOptAttribute_78.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_78;
    UnderlyingOriginalNotionalPercentageOutstanding_78.setString("51.880000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_78);
    UnderlyingInstrument_78.insert(UnderlyingOriginalNotionalPercentageOutstanding_78.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_78("STRING_860269907");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_78);
    UnderlyingInstrument_78.insert(UnderlyingPriceUnitOfMeasure_78.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_78;
    UnderlyingPriceUnitOfMeasureQty_78.setString("12184360");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_78);
    UnderlyingInstrument_78.insert(UnderlyingPriceUnitOfMeasureQty_78.getString());
    FIX::UnderlyingProduct UnderlyingProduct_78(1502131535);
    noUnderlyings_0_0.set(UnderlyingProduct_78);
    UnderlyingInstrument_78.insert(UnderlyingProduct_78.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_78(1189045196);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_78);
    UnderlyingInstrument_78.insert(UnderlyingPutOrCall_78.getString());
    FIX::UnderlyingPx UnderlyingPx_78;
    UnderlyingPx_78.setString("2132432");
    noUnderlyings_0_0.set(UnderlyingPx_78);
    UnderlyingInstrument_78.insert(UnderlyingPx_78.getString());
    FIX::UnderlyingQty UnderlyingQty_78;
    UnderlyingQty_78.setString("16631929");
    noUnderlyings_0_0.set(UnderlyingQty_78);
    UnderlyingInstrument_78.insert(UnderlyingQty_78.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_78("LOCALMKTDATE_1604660350");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_78);
    UnderlyingInstrument_78.insert(UnderlyingRedemptionDate_78.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_78("STRING_162373668");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_78);
    UnderlyingInstrument_78.insert(UnderlyingRepoCollateralSecurityType_78.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_78;
    UnderlyingRepurchaseRate_78.setString("5.610000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_78);
    UnderlyingInstrument_78.insert(UnderlyingRepurchaseRate_78.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_78(147117930);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_78);
    UnderlyingInstrument_78.insert(UnderlyingRepurchaseTerm_78.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_78("STRING_1122218025");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_78);
    UnderlyingInstrument_78.insert(UnderlyingRestructuringType_78.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_78("STRING_80009898");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_78);
    UnderlyingInstrument_78.insert(UnderlyingSecurityDesc_78.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_78("EXCHANGE_810930337");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_78);
    UnderlyingInstrument_78.insert(UnderlyingSecurityExchange_78.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_78("STRING_535960873");
    noUnderlyings_0_0.set(UnderlyingSecurityID_78);
    UnderlyingInstrument_78.insert(UnderlyingSecurityID_78.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_78("STRING_182094135");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_78);
    UnderlyingInstrument_78.insert(UnderlyingSecurityIDSource_78.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_78("STRING_1093289974");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_78);
    UnderlyingInstrument_78.insert(UnderlyingSecuritySubType_78.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_78("STRING_1685446619");
    noUnderlyings_0_0.set(UnderlyingSecurityType_78);
    UnderlyingInstrument_78.insert(UnderlyingSecurityType_78.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_78("STRING_1201529053");
    noUnderlyings_0_0.set(UnderlyingSeniority_78);
    UnderlyingInstrument_78.insert(UnderlyingSeniority_78.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_78("STRING_968502922");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_78);
    UnderlyingInstrument_78.insert(UnderlyingSettlMethod_78.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_78(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_78);
    UnderlyingInstrument_78.insert(UnderlyingSettlementType_78.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_78;
    UnderlyingStartValue_78.setString("16270827");
    noUnderlyings_0_0.set(UnderlyingStartValue_78);
    UnderlyingInstrument_78.insert(UnderlyingStartValue_78.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_78("STRING_222800294");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_78);
    UnderlyingInstrument_78.insert(UnderlyingStateOrProvinceOfIssue_78.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_78("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_78);
    UnderlyingInstrument_78.insert(UnderlyingStrikeCurrency_78.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_78;
    UnderlyingStrikePrice_78.setString("17022637");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_78);
    UnderlyingInstrument_78.insert(UnderlyingStrikePrice_78.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_78("STRING_1804680862");
    noUnderlyings_0_0.set(UnderlyingSymbol_78);
    UnderlyingInstrument_78.insert(UnderlyingSymbol_78.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_78("STRING_1035039627");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_78);
    UnderlyingInstrument_78.insert(UnderlyingSymbolSfx_78.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_78("STRING_1298729932");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_78);
    UnderlyingInstrument_78.insert(UnderlyingTimeUnit_78.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_78("STRING_230080352");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_78);
    UnderlyingInstrument_78.insert(UnderlyingUnitOfMeasure_78.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_78;
    UnderlyingUnitOfMeasureQty_78.setString("12463033");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_78);
    UnderlyingInstrument_78.insert(UnderlyingUnitOfMeasureQty_78.getString());
    all_values.push_back(UnderlyingInstrument_78);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_159;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_159("STRING_1090350259");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_159);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_159.insert(UnderlyingSecurityAltID_159.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_159("STRING_317255690");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_159);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_159.insert(UnderlyingSecurityAltIDSource_159.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_159);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_160;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_160("STRING_1302563008");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_160);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_160.insert(UnderlyingSecurityAltID_160.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_160("STRING_131911807");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_160);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_160.insert(UnderlyingSecurityAltIDSource_160.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_160);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_158;
      FIX::UnderlyingStipType UnderlyingStipType_158("STRING_818272307");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_158);
      UnderlyingStipulations_NoUnderlyingStips_158.insert(UnderlyingStipType_158.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_158("STRING_1736572157");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_158);
      UnderlyingStipulations_NoUnderlyingStips_158.insert(UnderlyingStipValue_158.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_158);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_159;
      FIX::UnderlyingStipType UnderlyingStipType_159("STRING_692872637");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_159);
      UnderlyingStipulations_NoUnderlyingStips_159.insert(UnderlyingStipType_159.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_159("STRING_1794102869");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_159);
      UnderlyingStipulations_NoUnderlyingStips_159.insert(UnderlyingStipValue_159.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_159);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_149;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_149("STRING_1815090662");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_149);
      UndlyInstrumentParties_NoUndlyInstrumentParties_149.insert(UnderlyingInstrumentPartyID_149.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_149('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_149);
      UndlyInstrumentParties_NoUndlyInstrumentParties_149.insert(UnderlyingInstrumentPartyIDSource_149.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_149(547136777);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_149);
      UndlyInstrumentParties_NoUndlyInstrumentParties_149.insert(UnderlyingInstrumentPartyRole_149.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_149);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_296("STRING_2056206902");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_296);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296.insert(UnderlyingInstrumentPartySubID_296.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_296(1640426751);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_296);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296.insert(UnderlyingInstrumentPartySubIDType_296.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_297("STRING_1889014506");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_297);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297.insert(UnderlyingInstrumentPartySubID_297.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_297(1110252308);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_297);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297.insert(UnderlyingInstrumentPartySubIDType_297.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_150;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_150("STRING_461446025");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_150);
      UndlyInstrumentParties_NoUndlyInstrumentParties_150.insert(UnderlyingInstrumentPartyID_150.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_150('7');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_150);
      UndlyInstrumentParties_NoUndlyInstrumentParties_150.insert(UnderlyingInstrumentPartyIDSource_150.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_150(589851374);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_150);
      UndlyInstrumentParties_NoUndlyInstrumentParties_150.insert(UnderlyingInstrumentPartyRole_150.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_150);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_298("STRING_49329479");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_298);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298.insert(UnderlyingInstrumentPartySubID_298.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_298(2125400759);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_298);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298.insert(UnderlyingInstrumentPartySubIDType_298.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_299("STRING_239026446");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_299);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299.insert(UnderlyingInstrumentPartySubID_299.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_299(1854010341);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_299);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299.insert(UnderlyingInstrumentPartySubIDType_299.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_151;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_151("STRING_1012956738");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_151);
      UndlyInstrumentParties_NoUndlyInstrumentParties_151.insert(UnderlyingInstrumentPartyID_151.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_151('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_151);
      UndlyInstrumentParties_NoUndlyInstrumentParties_151.insert(UnderlyingInstrumentPartyIDSource_151.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_151(2084090693);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_151);
      UndlyInstrumentParties_NoUndlyInstrumentParties_151.insert(UnderlyingInstrumentPartyRole_151.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_151);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_300("STRING_1338187852");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_300);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300.insert(UnderlyingInstrumentPartySubID_300.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_300(1026957304);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_300);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300.insert(UnderlyingInstrumentPartySubIDType_300.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_301("STRING_429032092");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_301);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301.insert(UnderlyingInstrumentPartySubID_301.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_301(493267212);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_301);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301.insert(UnderlyingInstrumentPartySubIDType_301.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_302("STRING_1158869111");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_302);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302.insert(UnderlyingInstrumentPartySubID_302.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_302(959531061);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_302);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302.insert(UnderlyingInstrumentPartySubIDType_302.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_79;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_79("DATA_1311539519");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_79);
    UnderlyingInstrument_79.insert(EncodedUnderlyingIssuer_79.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_79(747957620);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_79);
    UnderlyingInstrument_79.insert(EncodedUnderlyingIssuerLen_79.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_79("DATA_1652403698");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_79);
    UnderlyingInstrument_79.insert(EncodedUnderlyingSecurityDesc_79.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_79(958158740);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_79);
    UnderlyingInstrument_79.insert(EncodedUnderlyingSecurityDescLen_79.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_79;
    UnderlyingAdjustedQuantity_79.setString("4841640");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_79);
    UnderlyingInstrument_79.insert(UnderlyingAdjustedQuantity_79.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_79;
    UnderlyingAllocationPercent_79.setString("7.120000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_79);
    UnderlyingInstrument_79.insert(UnderlyingAllocationPercent_79.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_79;
    UnderlyingAttachmentPoint_79.setString("78.590000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_79);
    UnderlyingInstrument_79.insert(UnderlyingAttachmentPoint_79.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_79("STRING_1031300837");
    noUnderlyings_0_1.set(UnderlyingCFICode_79);
    UnderlyingInstrument_79.insert(UnderlyingCFICode_79.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_79("STRING_1523578599");
    noUnderlyings_0_1.set(UnderlyingCPProgram_79);
    UnderlyingInstrument_79.insert(UnderlyingCPProgram_79.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_79("STRING_593511114");
    noUnderlyings_0_1.set(UnderlyingCPRegType_79);
    UnderlyingInstrument_79.insert(UnderlyingCPRegType_79.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_79;
    UnderlyingCapValue_79.setString("5242439");
    noUnderlyings_0_1.set(UnderlyingCapValue_79);
    UnderlyingInstrument_79.insert(UnderlyingCapValue_79.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_79;
    UnderlyingCashAmount_79.setString("12651094");
    noUnderlyings_0_1.set(UnderlyingCashAmount_79);
    UnderlyingInstrument_79.insert(UnderlyingCashAmount_79.getString());
    FIX::UnderlyingCashType UnderlyingCashType_79("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_79);
    UnderlyingInstrument_79.insert(UnderlyingCashType_79.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_79;
    UnderlyingContractMultiplier_79.setString("9856899");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_79);
    UnderlyingInstrument_79.insert(UnderlyingContractMultiplier_79.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_79(2007232362);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_79);
    UnderlyingInstrument_79.insert(UnderlyingContractMultiplierUnit_79.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_79("COUNTRY_146131148");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_79);
    UnderlyingInstrument_79.insert(UnderlyingCountryOfIssue_79.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_79("LOCALMKTDATE_1669936284");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_79);
    UnderlyingInstrument_79.insert(UnderlyingCouponPaymentDate_79.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_79;
    UnderlyingCouponRate_79.setString("18.410000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_79);
    UnderlyingInstrument_79.insert(UnderlyingCouponRate_79.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_79("STRING_124048259");
    noUnderlyings_0_1.set(UnderlyingCreditRating_79);
    UnderlyingInstrument_79.insert(UnderlyingCreditRating_79.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_79("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_79);
    UnderlyingInstrument_79.insert(UnderlyingCurrency_79.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_79;
    UnderlyingCurrentValue_79.setString("11370049");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_79);
    UnderlyingInstrument_79.insert(UnderlyingCurrentValue_79.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_79;
    UnderlyingDetachmentPoint_79.setString("54.610000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_79);
    UnderlyingInstrument_79.insert(UnderlyingDetachmentPoint_79.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_79;
    UnderlyingDirtyPrice_79.setString("16996955");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_79);
    UnderlyingInstrument_79.insert(UnderlyingDirtyPrice_79.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_79;
    UnderlyingEndPrice_79.setString("12487814");
    noUnderlyings_0_1.set(UnderlyingEndPrice_79);
    UnderlyingInstrument_79.insert(UnderlyingEndPrice_79.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_79;
    UnderlyingEndValue_79.setString("4899396");
    noUnderlyings_0_1.set(UnderlyingEndValue_79);
    UnderlyingInstrument_79.insert(UnderlyingEndValue_79.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_79(579169235);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_79);
    UnderlyingInstrument_79.insert(UnderlyingExerciseStyle_79.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_79;
    UnderlyingFXRate_79.setString("16778134");
    noUnderlyings_0_1.set(UnderlyingFXRate_79);
    UnderlyingInstrument_79.insert(UnderlyingFXRate_79.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_79('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_79);
    UnderlyingInstrument_79.insert(UnderlyingFXRateCalc_79.getString());
    FIX::UnderlyingFactor UnderlyingFactor_79;
    UnderlyingFactor_79.setString("17380383");
    noUnderlyings_0_1.set(UnderlyingFactor_79);
    UnderlyingInstrument_79.insert(UnderlyingFactor_79.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_79(489860905);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_79);
    UnderlyingInstrument_79.insert(UnderlyingFlowScheduleType_79.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_79("STRING_147262749");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_79);
    UnderlyingInstrument_79.insert(UnderlyingInstrRegistry_79.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_79("LOCALMKTDATE_338512318");
    noUnderlyings_0_1.set(UnderlyingIssueDate_79);
    UnderlyingInstrument_79.insert(UnderlyingIssueDate_79.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_79("STRING_2142264603");
    noUnderlyings_0_1.set(UnderlyingIssuer_79);
    UnderlyingInstrument_79.insert(UnderlyingIssuer_79.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_79("STRING_1105421489");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_79);
    UnderlyingInstrument_79.insert(UnderlyingLocaleOfIssue_79.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_79("LOCALMKTDATE_822676378");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_79);
    UnderlyingInstrument_79.insert(UnderlyingMaturityDate_79.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_79("MONTHYEAR_1314791667");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_79);
    UnderlyingInstrument_79.insert(UnderlyingMaturityMonthYear_79.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_79("TZTIMEONLY_1790209349");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_79);
    UnderlyingInstrument_79.insert(UnderlyingMaturityTime_79.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_79;
    UnderlyingNotionalPercentageOutstanding_79.setString("72.150000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_79);
    UnderlyingInstrument_79.insert(UnderlyingNotionalPercentageOutstanding_79.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_79('6');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_79);
    UnderlyingInstrument_79.insert(UnderlyingOptAttribute_79.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_79;
    UnderlyingOriginalNotionalPercentageOutstanding_79.setString("68.150000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_79);
    UnderlyingInstrument_79.insert(UnderlyingOriginalNotionalPercentageOutstanding_79.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_79("STRING_230737507");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_79);
    UnderlyingInstrument_79.insert(UnderlyingPriceUnitOfMeasure_79.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_79;
    UnderlyingPriceUnitOfMeasureQty_79.setString("19559960");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_79);
    UnderlyingInstrument_79.insert(UnderlyingPriceUnitOfMeasureQty_79.getString());
    FIX::UnderlyingProduct UnderlyingProduct_79(1940000237);
    noUnderlyings_0_1.set(UnderlyingProduct_79);
    UnderlyingInstrument_79.insert(UnderlyingProduct_79.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_79(1216427472);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_79);
    UnderlyingInstrument_79.insert(UnderlyingPutOrCall_79.getString());
    FIX::UnderlyingPx UnderlyingPx_79;
    UnderlyingPx_79.setString("18157447");
    noUnderlyings_0_1.set(UnderlyingPx_79);
    UnderlyingInstrument_79.insert(UnderlyingPx_79.getString());
    FIX::UnderlyingQty UnderlyingQty_79;
    UnderlyingQty_79.setString("20861313");
    noUnderlyings_0_1.set(UnderlyingQty_79);
    UnderlyingInstrument_79.insert(UnderlyingQty_79.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_79("LOCALMKTDATE_738880108");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_79);
    UnderlyingInstrument_79.insert(UnderlyingRedemptionDate_79.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_79("STRING_1724822984");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_79);
    UnderlyingInstrument_79.insert(UnderlyingRepoCollateralSecurityType_79.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_79;
    UnderlyingRepurchaseRate_79.setString("59.970000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_79);
    UnderlyingInstrument_79.insert(UnderlyingRepurchaseRate_79.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_79(500359191);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_79);
    UnderlyingInstrument_79.insert(UnderlyingRepurchaseTerm_79.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_79("STRING_1340427870");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_79);
    UnderlyingInstrument_79.insert(UnderlyingRestructuringType_79.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_79("STRING_1199700994");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_79);
    UnderlyingInstrument_79.insert(UnderlyingSecurityDesc_79.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_79("EXCHANGE_1799594652");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_79);
    UnderlyingInstrument_79.insert(UnderlyingSecurityExchange_79.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_79("STRING_892639801");
    noUnderlyings_0_1.set(UnderlyingSecurityID_79);
    UnderlyingInstrument_79.insert(UnderlyingSecurityID_79.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_79("STRING_300998746");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_79);
    UnderlyingInstrument_79.insert(UnderlyingSecurityIDSource_79.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_79("STRING_142050670");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_79);
    UnderlyingInstrument_79.insert(UnderlyingSecuritySubType_79.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_79("STRING_1471809036");
    noUnderlyings_0_1.set(UnderlyingSecurityType_79);
    UnderlyingInstrument_79.insert(UnderlyingSecurityType_79.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_79("STRING_1978812239");
    noUnderlyings_0_1.set(UnderlyingSeniority_79);
    UnderlyingInstrument_79.insert(UnderlyingSeniority_79.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_79("STRING_1125257547");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_79);
    UnderlyingInstrument_79.insert(UnderlyingSettlMethod_79.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_79(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_79);
    UnderlyingInstrument_79.insert(UnderlyingSettlementType_79.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_79;
    UnderlyingStartValue_79.setString("3211894");
    noUnderlyings_0_1.set(UnderlyingStartValue_79);
    UnderlyingInstrument_79.insert(UnderlyingStartValue_79.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_79("STRING_1272520296");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_79);
    UnderlyingInstrument_79.insert(UnderlyingStateOrProvinceOfIssue_79.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_79("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_79);
    UnderlyingInstrument_79.insert(UnderlyingStrikeCurrency_79.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_79;
    UnderlyingStrikePrice_79.setString("2304581");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_79);
    UnderlyingInstrument_79.insert(UnderlyingStrikePrice_79.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_79("STRING_76068783");
    noUnderlyings_0_1.set(UnderlyingSymbol_79);
    UnderlyingInstrument_79.insert(UnderlyingSymbol_79.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_79("STRING_1630762119");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_79);
    UnderlyingInstrument_79.insert(UnderlyingSymbolSfx_79.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_79("STRING_2020667487");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_79);
    UnderlyingInstrument_79.insert(UnderlyingTimeUnit_79.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_79("STRING_1930045998");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_79);
    UnderlyingInstrument_79.insert(UnderlyingUnitOfMeasure_79.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_79;
    UnderlyingUnitOfMeasureQty_79.setString("1741650");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_79);
    UnderlyingInstrument_79.insert(UnderlyingUnitOfMeasureQty_79.getString());
    all_values.push_back(UnderlyingInstrument_79);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_161;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_161("STRING_13299858");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_161);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_161.insert(UnderlyingSecurityAltID_161.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_161("STRING_2130161167");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_161);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_161.insert(UnderlyingSecurityAltIDSource_161.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_161);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_162;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_162("STRING_2049420891");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_162);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_162.insert(UnderlyingSecurityAltID_162.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_162("STRING_1229727330");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_162);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_162.insert(UnderlyingSecurityAltIDSource_162.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_162);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_160;
      FIX::UnderlyingStipType UnderlyingStipType_160("STRING_1988068628");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_160);
      UnderlyingStipulations_NoUnderlyingStips_160.insert(UnderlyingStipType_160.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_160("STRING_1968607439");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_160);
      UnderlyingStipulations_NoUnderlyingStips_160.insert(UnderlyingStipValue_160.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_160);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_161;
      FIX::UnderlyingStipType UnderlyingStipType_161("STRING_1375761646");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_161);
      UnderlyingStipulations_NoUnderlyingStips_161.insert(UnderlyingStipType_161.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_161("STRING_2050764625");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_161);
      UnderlyingStipulations_NoUnderlyingStips_161.insert(UnderlyingStipValue_161.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_161);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_152;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_152("STRING_568705868");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_152);
      UndlyInstrumentParties_NoUndlyInstrumentParties_152.insert(UnderlyingInstrumentPartyID_152.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_152('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_152);
      UndlyInstrumentParties_NoUndlyInstrumentParties_152.insert(UnderlyingInstrumentPartyIDSource_152.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_152(2121077634);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_152);
      UndlyInstrumentParties_NoUndlyInstrumentParties_152.insert(UnderlyingInstrumentPartyRole_152.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_152);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_303("STRING_1403980718");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_303);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303.insert(UnderlyingInstrumentPartySubID_303.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_303(115644656);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_303);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303.insert(UnderlyingInstrumentPartySubIDType_303.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::OrderCancelRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_80;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_80("DATA_785671057");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_80);
    UnderlyingInstrument_80.insert(EncodedUnderlyingIssuer_80.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_80(1235309309);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_80);
    UnderlyingInstrument_80.insert(EncodedUnderlyingIssuerLen_80.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_80("DATA_1240902204");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_80);
    UnderlyingInstrument_80.insert(EncodedUnderlyingSecurityDesc_80.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_80(1848034791);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_80);
    UnderlyingInstrument_80.insert(EncodedUnderlyingSecurityDescLen_80.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_80;
    UnderlyingAdjustedQuantity_80.setString("15564988");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_80);
    UnderlyingInstrument_80.insert(UnderlyingAdjustedQuantity_80.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_80;
    UnderlyingAllocationPercent_80.setString("88.520000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_80);
    UnderlyingInstrument_80.insert(UnderlyingAllocationPercent_80.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_80;
    UnderlyingAttachmentPoint_80.setString("71.960000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_80);
    UnderlyingInstrument_80.insert(UnderlyingAttachmentPoint_80.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_80("STRING_1872469258");
    noUnderlyings_0_2.set(UnderlyingCFICode_80);
    UnderlyingInstrument_80.insert(UnderlyingCFICode_80.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_80("STRING_596396990");
    noUnderlyings_0_2.set(UnderlyingCPProgram_80);
    UnderlyingInstrument_80.insert(UnderlyingCPProgram_80.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_80("STRING_1177495979");
    noUnderlyings_0_2.set(UnderlyingCPRegType_80);
    UnderlyingInstrument_80.insert(UnderlyingCPRegType_80.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_80;
    UnderlyingCapValue_80.setString("13557477");
    noUnderlyings_0_2.set(UnderlyingCapValue_80);
    UnderlyingInstrument_80.insert(UnderlyingCapValue_80.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_80;
    UnderlyingCashAmount_80.setString("4695808");
    noUnderlyings_0_2.set(UnderlyingCashAmount_80);
    UnderlyingInstrument_80.insert(UnderlyingCashAmount_80.getString());
    FIX::UnderlyingCashType UnderlyingCashType_80("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_80);
    UnderlyingInstrument_80.insert(UnderlyingCashType_80.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_80;
    UnderlyingContractMultiplier_80.setString("15299128");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_80);
    UnderlyingInstrument_80.insert(UnderlyingContractMultiplier_80.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_80(579001483);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_80);
    UnderlyingInstrument_80.insert(UnderlyingContractMultiplierUnit_80.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_80("COUNTRY_973358187");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_80);
    UnderlyingInstrument_80.insert(UnderlyingCountryOfIssue_80.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_80("LOCALMKTDATE_1512590339");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_80);
    UnderlyingInstrument_80.insert(UnderlyingCouponPaymentDate_80.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_80;
    UnderlyingCouponRate_80.setString("87.260000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_80);
    UnderlyingInstrument_80.insert(UnderlyingCouponRate_80.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_80("STRING_55601870");
    noUnderlyings_0_2.set(UnderlyingCreditRating_80);
    UnderlyingInstrument_80.insert(UnderlyingCreditRating_80.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_80("CHF");
    noUnderlyings_0_2.set(UnderlyingCurrency_80);
    UnderlyingInstrument_80.insert(UnderlyingCurrency_80.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_80;
    UnderlyingCurrentValue_80.setString("20242093");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_80);
    UnderlyingInstrument_80.insert(UnderlyingCurrentValue_80.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_80;
    UnderlyingDetachmentPoint_80.setString("70.000000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_80);
    UnderlyingInstrument_80.insert(UnderlyingDetachmentPoint_80.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_80;
    UnderlyingDirtyPrice_80.setString("2248046");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_80);
    UnderlyingInstrument_80.insert(UnderlyingDirtyPrice_80.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_80;
    UnderlyingEndPrice_80.setString("1982086");
    noUnderlyings_0_2.set(UnderlyingEndPrice_80);
    UnderlyingInstrument_80.insert(UnderlyingEndPrice_80.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_80;
    UnderlyingEndValue_80.setString("9605128");
    noUnderlyings_0_2.set(UnderlyingEndValue_80);
    UnderlyingInstrument_80.insert(UnderlyingEndValue_80.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_80(1327786656);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_80);
    UnderlyingInstrument_80.insert(UnderlyingExerciseStyle_80.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_80;
    UnderlyingFXRate_80.setString("1718026");
    noUnderlyings_0_2.set(UnderlyingFXRate_80);
    UnderlyingInstrument_80.insert(UnderlyingFXRate_80.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_80('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_80);
    UnderlyingInstrument_80.insert(UnderlyingFXRateCalc_80.getString());
    FIX::UnderlyingFactor UnderlyingFactor_80;
    UnderlyingFactor_80.setString("5842837");
    noUnderlyings_0_2.set(UnderlyingFactor_80);
    UnderlyingInstrument_80.insert(UnderlyingFactor_80.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_80(287447286);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_80);
    UnderlyingInstrument_80.insert(UnderlyingFlowScheduleType_80.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_80("STRING_1060045948");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_80);
    UnderlyingInstrument_80.insert(UnderlyingInstrRegistry_80.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_80("LOCALMKTDATE_1819593036");
    noUnderlyings_0_2.set(UnderlyingIssueDate_80);
    UnderlyingInstrument_80.insert(UnderlyingIssueDate_80.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_80("STRING_1528349490");
    noUnderlyings_0_2.set(UnderlyingIssuer_80);
    UnderlyingInstrument_80.insert(UnderlyingIssuer_80.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_80("STRING_760597091");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_80);
    UnderlyingInstrument_80.insert(UnderlyingLocaleOfIssue_80.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_80("LOCALMKTDATE_1228608194");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_80);
    UnderlyingInstrument_80.insert(UnderlyingMaturityDate_80.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_80("MONTHYEAR_1894288342");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_80);
    UnderlyingInstrument_80.insert(UnderlyingMaturityMonthYear_80.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_80("TZTIMEONLY_1862024287");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_80);
    UnderlyingInstrument_80.insert(UnderlyingMaturityTime_80.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_80;
    UnderlyingNotionalPercentageOutstanding_80.setString("38.040000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_80);
    UnderlyingInstrument_80.insert(UnderlyingNotionalPercentageOutstanding_80.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_80('3');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_80);
    UnderlyingInstrument_80.insert(UnderlyingOptAttribute_80.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_80;
    UnderlyingOriginalNotionalPercentageOutstanding_80.setString("66.180000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_80);
    UnderlyingInstrument_80.insert(UnderlyingOriginalNotionalPercentageOutstanding_80.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_80("STRING_161857886");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_80);
    UnderlyingInstrument_80.insert(UnderlyingPriceUnitOfMeasure_80.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_80;
    UnderlyingPriceUnitOfMeasureQty_80.setString("8127825");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_80);
    UnderlyingInstrument_80.insert(UnderlyingPriceUnitOfMeasureQty_80.getString());
    FIX::UnderlyingProduct UnderlyingProduct_80(1852094948);
    noUnderlyings_0_2.set(UnderlyingProduct_80);
    UnderlyingInstrument_80.insert(UnderlyingProduct_80.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_80(1691770706);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_80);
    UnderlyingInstrument_80.insert(UnderlyingPutOrCall_80.getString());
    FIX::UnderlyingPx UnderlyingPx_80;
    UnderlyingPx_80.setString("13917839");
    noUnderlyings_0_2.set(UnderlyingPx_80);
    UnderlyingInstrument_80.insert(UnderlyingPx_80.getString());
    FIX::UnderlyingQty UnderlyingQty_80;
    UnderlyingQty_80.setString("6779694");
    noUnderlyings_0_2.set(UnderlyingQty_80);
    UnderlyingInstrument_80.insert(UnderlyingQty_80.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_80("LOCALMKTDATE_1056877397");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_80);
    UnderlyingInstrument_80.insert(UnderlyingRedemptionDate_80.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_80("STRING_1872722724");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_80);
    UnderlyingInstrument_80.insert(UnderlyingRepoCollateralSecurityType_80.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_80;
    UnderlyingRepurchaseRate_80.setString("13.570000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_80);
    UnderlyingInstrument_80.insert(UnderlyingRepurchaseRate_80.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_80(72922751);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_80);
    UnderlyingInstrument_80.insert(UnderlyingRepurchaseTerm_80.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_80("STRING_46762783");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_80);
    UnderlyingInstrument_80.insert(UnderlyingRestructuringType_80.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_80("STRING_610297018");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_80);
    UnderlyingInstrument_80.insert(UnderlyingSecurityDesc_80.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_80("EXCHANGE_464729752");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_80);
    UnderlyingInstrument_80.insert(UnderlyingSecurityExchange_80.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_80("STRING_271567468");
    noUnderlyings_0_2.set(UnderlyingSecurityID_80);
    UnderlyingInstrument_80.insert(UnderlyingSecurityID_80.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_80("STRING_808505661");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_80);
    UnderlyingInstrument_80.insert(UnderlyingSecurityIDSource_80.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_80("STRING_1425242621");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_80);
    UnderlyingInstrument_80.insert(UnderlyingSecuritySubType_80.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_80("STRING_1599354124");
    noUnderlyings_0_2.set(UnderlyingSecurityType_80);
    UnderlyingInstrument_80.insert(UnderlyingSecurityType_80.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_80("STRING_980308291");
    noUnderlyings_0_2.set(UnderlyingSeniority_80);
    UnderlyingInstrument_80.insert(UnderlyingSeniority_80.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_80("STRING_1699617511");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_80);
    UnderlyingInstrument_80.insert(UnderlyingSettlMethod_80.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_80(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_80);
    UnderlyingInstrument_80.insert(UnderlyingSettlementType_80.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_80;
    UnderlyingStartValue_80.setString("12677555");
    noUnderlyings_0_2.set(UnderlyingStartValue_80);
    UnderlyingInstrument_80.insert(UnderlyingStartValue_80.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_80("STRING_612179811");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_80);
    UnderlyingInstrument_80.insert(UnderlyingStateOrProvinceOfIssue_80.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_80("CAN");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_80);
    UnderlyingInstrument_80.insert(UnderlyingStrikeCurrency_80.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_80;
    UnderlyingStrikePrice_80.setString("13727769");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_80);
    UnderlyingInstrument_80.insert(UnderlyingStrikePrice_80.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_80("STRING_936871786");
    noUnderlyings_0_2.set(UnderlyingSymbol_80);
    UnderlyingInstrument_80.insert(UnderlyingSymbol_80.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_80("STRING_395426113");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_80);
    UnderlyingInstrument_80.insert(UnderlyingSymbolSfx_80.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_80("STRING_1087317542");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_80);
    UnderlyingInstrument_80.insert(UnderlyingTimeUnit_80.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_80("STRING_1890465591");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_80);
    UnderlyingInstrument_80.insert(UnderlyingUnitOfMeasure_80.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_80;
    UnderlyingUnitOfMeasureQty_80.setString("7386277");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_80);
    UnderlyingInstrument_80.insert(UnderlyingUnitOfMeasureQty_80.getString());
    all_values.push_back(UnderlyingInstrument_80);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_163;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_163("STRING_2052323477");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_163);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_163.insert(UnderlyingSecurityAltID_163.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_163("STRING_1551410313");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_163);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_163.insert(UnderlyingSecurityAltIDSource_163.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_163);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_164;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_164("STRING_1683965461");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_164);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_164.insert(UnderlyingSecurityAltID_164.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_164("STRING_1596610535");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_164);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_164.insert(UnderlyingSecurityAltIDSource_164.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_164);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_162;
      FIX::UnderlyingStipType UnderlyingStipType_162("STRING_214451300");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_162);
      UnderlyingStipulations_NoUnderlyingStips_162.insert(UnderlyingStipType_162.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_162("STRING_506004284");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_162);
      UnderlyingStipulations_NoUnderlyingStips_162.insert(UnderlyingStipValue_162.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_162);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_163;
      FIX::UnderlyingStipType UnderlyingStipType_163("STRING_520949739");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_163);
      UnderlyingStipulations_NoUnderlyingStips_163.insert(UnderlyingStipType_163.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_163("STRING_948022658");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_163);
      UnderlyingStipulations_NoUnderlyingStips_163.insert(UnderlyingStipValue_163.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_163);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_164;
      FIX::UnderlyingStipType UnderlyingStipType_164("STRING_578927036");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_164);
      UnderlyingStipulations_NoUnderlyingStips_164.insert(UnderlyingStipType_164.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_164("STRING_567712523");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_164);
      UnderlyingStipulations_NoUnderlyingStips_164.insert(UnderlyingStipValue_164.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_164);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_153;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_153("STRING_1043656788");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_153);
      UndlyInstrumentParties_NoUndlyInstrumentParties_153.insert(UnderlyingInstrumentPartyID_153.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_153('8');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_153);
      UndlyInstrumentParties_NoUndlyInstrumentParties_153.insert(UnderlyingInstrumentPartyIDSource_153.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_153(219341690);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_153);
      UndlyInstrumentParties_NoUndlyInstrumentParties_153.insert(UnderlyingInstrumentPartyRole_153.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_153);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_304("STRING_291150467");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_304);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304.insert(UnderlyingInstrumentPartySubID_304.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_304(1199649981);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_304);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304.insert(UnderlyingInstrumentPartySubIDType_304.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
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
