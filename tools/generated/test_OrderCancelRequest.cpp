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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> OrderCancelRequest_0;
  FIX::Account Account_25("STRING_722360888");
  msg.set(Account_25);
  OrderCancelRequest_0.insert(Account_25.getString());
  FIX::AccountType AccountType_23(7);
  msg.set(AccountType_23);
  OrderCancelRequest_0.insert(AccountType_23.getString());
  FIX::AcctIDSource AcctIDSource_18(4);
  msg.set(AcctIDSource_18);
  OrderCancelRequest_0.insert(AcctIDSource_18.getString());
  FIX::ClOrdID ClOrdID_36("STRING_327779094");
  msg.set(ClOrdID_36);
  OrderCancelRequest_0.insert(ClOrdID_36.getString());
  FIX::ClOrdLinkID ClOrdLinkID_16("STRING_247286797");
  msg.set(ClOrdLinkID_16);
  OrderCancelRequest_0.insert(ClOrdLinkID_16.getString());
  FIX::ComplianceID ComplianceID_12("STRING_1469241056");
  msg.set(ComplianceID_12);
  OrderCancelRequest_0.insert(ComplianceID_12.getString());
  FIX::EncodedText EncodedText_62("DATA_795843744");
  msg.set(EncodedText_62);
  OrderCancelRequest_0.insert(EncodedText_62.getString());
  FIX::EncodedTextLen EncodedTextLen_62(751870186);
  msg.set(EncodedTextLen_62);
  OrderCancelRequest_0.insert(EncodedTextLen_62.getString());
  FIX::ListID ListID_21("STRING_1664982707");
  msg.set(ListID_21);
  OrderCancelRequest_0.insert(ListID_21.getString());
  FIX::OrderID OrderID_28("STRING_1304938335");
  msg.set(OrderID_28);
  OrderCancelRequest_0.insert(OrderID_28.getString());
  FIX::OrigClOrdID OrigClOrdID_11("STRING_2108084814");
  msg.set(OrigClOrdID_11);
  OrderCancelRequest_0.insert(OrigClOrdID_11.getString());
  FIX::OrigOrdModTime OrigOrdModTime_5(FIX::UTCTIMESTAMP(23, 14, 23, 9, 92001));
  msg.set(OrigOrdModTime_5);
  OrderCancelRequest_0.insert(OrigOrdModTime_5.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_34("STRING_675587926");
  msg.set(SecondaryClOrdID_34);
  OrderCancelRequest_0.insert(SecondaryClOrdID_34.getString());
  FIX::Side Side_32('8');
  msg.set(Side_32);
  OrderCancelRequest_0.insert(Side_32.getString());
  FIX::Text Text_62("STRING_1437044352");
  msg.set(Text_62);
  OrderCancelRequest_0.insert(Text_62.getString());
  FIX::TransactTime TransactTime_38(FIX::UTCTIMESTAMP(16, 59, 53, 15, 102000));
  msg.set(TransactTime_38);
  OrderCancelRequest_0.insert(TransactTime_38.getString());
  all_values.push_back(OrderCancelRequest_0);

  // FinancingDetails
  multiset<string> FinancingDetails_14;
  FIX::AgreementCurrency AgreementCurrency_14("EUR");
  msg.set(AgreementCurrency_14);
  FinancingDetails_14.insert(AgreementCurrency_14.getString());
  FIX::AgreementDate AgreementDate_14("LOCALMKTDATE_1689004274");
  msg.set(AgreementDate_14);
  FinancingDetails_14.insert(AgreementDate_14.getString());
  FIX::AgreementDesc AgreementDesc_14("STRING_558302827");
  msg.set(AgreementDesc_14);
  FinancingDetails_14.insert(AgreementDesc_14.getString());
  FIX::AgreementID AgreementID_14("STRING_1664042941");
  msg.set(AgreementID_14);
  FinancingDetails_14.insert(AgreementID_14.getString());
  FIX::DeliveryType DeliveryType_14(1);
  msg.set(DeliveryType_14);
  FinancingDetails_14.insert(DeliveryType_14.getString());
  FIX::EndDate EndDate_14("LOCALMKTDATE_886081922");
  msg.set(EndDate_14);
  FinancingDetails_14.insert(EndDate_14.getString());
  FIX::MarginRatio MarginRatio_14;
  MarginRatio_14.setString("97.390000");
  msg.set(MarginRatio_14);
  FinancingDetails_14.insert(MarginRatio_14.getString());
  FIX::StartDate StartDate_14("LOCALMKTDATE_1285650078");
  msg.set(StartDate_14);
  FinancingDetails_14.insert(StartDate_14.getString());
  FIX::TerminationType TerminationType_14(3);
  msg.set(TerminationType_14);
  FinancingDetails_14.insert(TerminationType_14.getString());
  all_values.push_back(FinancingDetails_14);

  // Instrument
  multiset<string> Instrument_46;
  FIX::AttachmentPoint AttachmentPoint_46;
  AttachmentPoint_46.setString("62.770000");
  msg.set(AttachmentPoint_46);
  Instrument_46.insert(AttachmentPoint_46.getString());
  FIX::CFICode CFICode_46("STRING_803149137");
  msg.set(CFICode_46);
  Instrument_46.insert(CFICode_46.getString());
  FIX::CPProgram CPProgram_46(1);
  msg.set(CPProgram_46);
  Instrument_46.insert(CPProgram_46.getString());
  FIX::CPRegType CPRegType_46("STRING_476317443");
  msg.set(CPRegType_46);
  Instrument_46.insert(CPRegType_46.getString());
  FIX::CapPrice CapPrice_46;
  CapPrice_46.setString("9024031");
  msg.set(CapPrice_46);
  Instrument_46.insert(CapPrice_46.getString());
  FIX::ContractMultiplier ContractMultiplier_46;
  ContractMultiplier_46.setString("12940278");
  msg.set(ContractMultiplier_46);
  Instrument_46.insert(ContractMultiplier_46.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_46(2);
  msg.set(ContractMultiplierUnit_46);
  Instrument_46.insert(ContractMultiplierUnit_46.getString());
  FIX::ContractSettlMonth ContractSettlMonth_46("MONTHYEAR_505069798");
  msg.set(ContractSettlMonth_46);
  Instrument_46.insert(ContractSettlMonth_46.getString());
  FIX::CountryOfIssue CountryOfIssue_46("COUNTRY_1950793662");
  msg.set(CountryOfIssue_46);
  Instrument_46.insert(CountryOfIssue_46.getString());
  FIX::CouponPaymentDate CouponPaymentDate_46("LOCALMKTDATE_1473900913");
  msg.set(CouponPaymentDate_46);
  Instrument_46.insert(CouponPaymentDate_46.getString());
  FIX::CouponRate CouponRate_46;
  CouponRate_46.setString("46.200000");
  msg.set(CouponRate_46);
  Instrument_46.insert(CouponRate_46.getString());
  FIX::CreditRating CreditRating_46("STRING_478897940");
  msg.set(CreditRating_46);
  Instrument_46.insert(CreditRating_46.getString());
  FIX::DatedDate DatedDate_46("LOCALMKTDATE_23997000");
  msg.set(DatedDate_46);
  Instrument_46.insert(DatedDate_46.getString());
  FIX::DetachmentPoint DetachmentPoint_46;
  DetachmentPoint_46.setString("53.240000");
  msg.set(DetachmentPoint_46);
  Instrument_46.insert(DetachmentPoint_46.getString());
  FIX::EncodedIssuer EncodedIssuer_46("DATA_466808415");
  msg.set(EncodedIssuer_46);
  Instrument_46.insert(EncodedIssuer_46.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_46(309582305);
  msg.set(EncodedIssuerLen_46);
  Instrument_46.insert(EncodedIssuerLen_46.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_46("DATA_1649700843");
  msg.set(EncodedSecurityDesc_46);
  Instrument_46.insert(EncodedSecurityDesc_46.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_46(707662148);
  msg.set(EncodedSecurityDescLen_46);
  Instrument_46.insert(EncodedSecurityDescLen_46.getString());
  FIX::ExerciseStyle ExerciseStyle_46(2);
  msg.set(ExerciseStyle_46);
  Instrument_46.insert(ExerciseStyle_46.getString());
  FIX::Factor Factor_46;
  Factor_46.setString("4412323");
  msg.set(Factor_46);
  Instrument_46.insert(Factor_46.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_46(false);
  msg.set(FlexProductEligibilityIndicator_46);
  Instrument_46.insert(FlexProductEligibilityIndicator_46.getString());
  FIX::FlexibleIndicator FlexibleIndicator_46(false);
  msg.set(FlexibleIndicator_46);
  Instrument_46.insert(FlexibleIndicator_46.getString());
  FIX::FloorPrice FloorPrice_46;
  FloorPrice_46.setString("8075520");
  msg.set(FloorPrice_46);
  Instrument_46.insert(FloorPrice_46.getString());
  FIX::FlowScheduleType FlowScheduleType_46(0);
  msg.set(FlowScheduleType_46);
  Instrument_46.insert(FlowScheduleType_46.getString());
  FIX::InstrRegistry InstrRegistry_46("STRING_1870041927");
  msg.set(InstrRegistry_46);
  Instrument_46.insert(InstrRegistry_46.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_46('3');
  msg.set(InstrmtAssignmentMethod_46);
  Instrument_46.insert(InstrmtAssignmentMethod_46.getString());
  FIX::InterestAccrualDate InterestAccrualDate_46("LOCALMKTDATE_1365617587");
  msg.set(InterestAccrualDate_46);
  Instrument_46.insert(InterestAccrualDate_46.getString());
  FIX::IssueDate IssueDate_46("LOCALMKTDATE_608640201");
  msg.set(IssueDate_46);
  Instrument_46.insert(IssueDate_46.getString());
  FIX::Issuer Issuer_46("STRING_87957390");
  msg.set(Issuer_46);
  Instrument_46.insert(Issuer_46.getString());
  FIX::ListMethod ListMethod_46(1);
  msg.set(ListMethod_46);
  Instrument_46.insert(ListMethod_46.getString());
  FIX::LocaleOfIssue LocaleOfIssue_46("STRING_143082219");
  msg.set(LocaleOfIssue_46);
  Instrument_46.insert(LocaleOfIssue_46.getString());
  FIX::MaturityDate MaturityDate_46("LOCALMKTDATE_603673667");
  msg.set(MaturityDate_46);
  Instrument_46.insert(MaturityDate_46.getString());
  FIX::MaturityMonthYear MaturityMonthYear_46("MONTHYEAR_1306933154");
  msg.set(MaturityMonthYear_46);
  Instrument_46.insert(MaturityMonthYear_46.getString());
  FIX::MaturityTime MaturityTime_46("TZTIMEONLY_982462573");
  msg.set(MaturityTime_46);
  Instrument_46.insert(MaturityTime_46.getString());
  FIX::MinPriceIncrement MinPriceIncrement_46;
  MinPriceIncrement_46.setString("10799911");
  msg.set(MinPriceIncrement_46);
  Instrument_46.insert(MinPriceIncrement_46.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_46;
  MinPriceIncrementAmount_46.setString("618526");
  msg.set(MinPriceIncrementAmount_46);
  Instrument_46.insert(MinPriceIncrementAmount_46.getString());
  FIX::NTPositionLimit NTPositionLimit_46(129006734);
  msg.set(NTPositionLimit_46);
  Instrument_46.insert(NTPositionLimit_46.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_46;
  NotionalPercentageOutstanding_46.setString("6.670000");
  msg.set(NotionalPercentageOutstanding_46);
  Instrument_46.insert(NotionalPercentageOutstanding_46.getString());
  FIX::OptAttribute OptAttribute_46('5');
  msg.set(OptAttribute_46);
  Instrument_46.insert(OptAttribute_46.getString());
  FIX::OptPayoutAmount OptPayoutAmount_46;
  OptPayoutAmount_46.setString("20798003");
  msg.set(OptPayoutAmount_46);
  Instrument_46.insert(OptPayoutAmount_46.getString());
  FIX::OptPayoutType OptPayoutType_46(1);
  msg.set(OptPayoutType_46);
  Instrument_46.insert(OptPayoutType_46.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_46;
  OriginalNotionalPercentageOutstanding_46.setString("70.870000");
  msg.set(OriginalNotionalPercentageOutstanding_46);
  Instrument_46.insert(OriginalNotionalPercentageOutstanding_46.getString());
  FIX::Pool Pool_46("STRING_411214688");
  msg.set(Pool_46);
  Instrument_46.insert(Pool_46.getString());
  FIX::PositionLimit PositionLimit_46(1064194933);
  msg.set(PositionLimit_46);
  Instrument_46.insert(PositionLimit_46.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_46("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_46);
  Instrument_46.insert(PriceQuoteMethod_46.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_46("STRING_878023104");
  msg.set(PriceUnitOfMeasure_46);
  Instrument_46.insert(PriceUnitOfMeasure_46.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_46;
  PriceUnitOfMeasureQty_46.setString("13737772");
  msg.set(PriceUnitOfMeasureQty_46);
  Instrument_46.insert(PriceUnitOfMeasureQty_46.getString());
  FIX::Product Product_48(1);
  msg.set(Product_48);
  Instrument_46.insert(Product_48.getString());
  FIX::ProductComplex ProductComplex_46("STRING_1585685252");
  msg.set(ProductComplex_46);
  Instrument_46.insert(ProductComplex_46.getString());
  FIX::PutOrCall PutOrCall_46(0);
  msg.set(PutOrCall_46);
  Instrument_46.insert(PutOrCall_46.getString());
  FIX::RedemptionDate RedemptionDate_46("LOCALMKTDATE_1573541991");
  msg.set(RedemptionDate_46);
  Instrument_46.insert(RedemptionDate_46.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_46("STRING_1445889543");
  msg.set(RepoCollateralSecurityType_46);
  Instrument_46.insert(RepoCollateralSecurityType_46.getString());
  FIX::RepurchaseRate RepurchaseRate_46;
  RepurchaseRate_46.setString("98.500000");
  msg.set(RepurchaseRate_46);
  Instrument_46.insert(RepurchaseRate_46.getString());
  FIX::RepurchaseTerm RepurchaseTerm_46(233610349);
  msg.set(RepurchaseTerm_46);
  Instrument_46.insert(RepurchaseTerm_46.getString());
  FIX::RestructuringType RestructuringType_46("STRING_MR");
  msg.set(RestructuringType_46);
  Instrument_46.insert(RestructuringType_46.getString());
  FIX::SecurityDesc SecurityDesc_46("STRING_1736388129");
  msg.set(SecurityDesc_46);
  Instrument_46.insert(SecurityDesc_46.getString());
  FIX::SecurityExchange SecurityExchange_46("EXCHANGE_557721648");
  msg.set(SecurityExchange_46);
  Instrument_46.insert(SecurityExchange_46.getString());
  FIX::SecurityGroup SecurityGroup_46("STRING_65748400");
  msg.set(SecurityGroup_46);
  Instrument_46.insert(SecurityGroup_46.getString());
  FIX::SecurityID SecurityID_46("STRING_197544682");
  msg.set(SecurityID_46);
  Instrument_46.insert(SecurityID_46.getString());
  FIX::SecurityIDSource SecurityIDSource_46("STRING_5");
  msg.set(SecurityIDSource_46);
  Instrument_46.insert(SecurityIDSource_46.getString());
  FIX::SecurityStatus SecurityStatus_46("STRING_2");
  msg.set(SecurityStatus_46);
  Instrument_46.insert(SecurityStatus_46.getString());
  FIX::SecuritySubType SecuritySubType_47("STRING_340626901");
  msg.set(SecuritySubType_47);
  Instrument_46.insert(SecuritySubType_47.getString());
  FIX::SecurityType SecurityType_48("STRING_COFO");
  msg.set(SecurityType_48);
  Instrument_46.insert(SecurityType_48.getString());
  FIX::Seniority Seniority_46("STRING_SB");
  msg.set(Seniority_46);
  Instrument_46.insert(Seniority_46.getString());
  FIX::SettlMethod SettlMethod_46('C');
  msg.set(SettlMethod_46);
  Instrument_46.insert(SettlMethod_46.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_46("STRING_181860167");
  msg.set(SettleOnOpenFlag_46);
  Instrument_46.insert(SettleOnOpenFlag_46.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_46("STRING_1938318240");
  msg.set(StateOrProvinceOfIssue_46);
  Instrument_46.insert(StateOrProvinceOfIssue_46.getString());
  FIX::StrikeCurrency StrikeCurrency_46("USD");
  msg.set(StrikeCurrency_46);
  Instrument_46.insert(StrikeCurrency_46.getString());
  FIX::StrikeMultiplier StrikeMultiplier_46;
  StrikeMultiplier_46.setString("3577570");
  msg.set(StrikeMultiplier_46);
  Instrument_46.insert(StrikeMultiplier_46.getString());
  FIX::StrikePrice StrikePrice_46;
  StrikePrice_46.setString("13844129");
  msg.set(StrikePrice_46);
  Instrument_46.insert(StrikePrice_46.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_46(4);
  msg.set(StrikePriceBoundaryMethod_46);
  Instrument_46.insert(StrikePriceBoundaryMethod_46.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_46;
  StrikePriceBoundaryPrecision_46.setString("41.470000");
  msg.set(StrikePriceBoundaryPrecision_46);
  Instrument_46.insert(StrikePriceBoundaryPrecision_46.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_46(2);
  msg.set(StrikePriceDeterminationMethod_46);
  Instrument_46.insert(StrikePriceDeterminationMethod_46.getString());
  FIX::StrikeValue StrikeValue_46;
  StrikeValue_46.setString("18525500");
  msg.set(StrikeValue_46);
  Instrument_46.insert(StrikeValue_46.getString());
  FIX::Symbol Symbol_46("STRING_1294092910");
  msg.set(Symbol_46);
  Instrument_46.insert(Symbol_46.getString());
  FIX::SymbolSfx SymbolSfx_46("STRING_WI");
  msg.set(SymbolSfx_46);
  Instrument_46.insert(SymbolSfx_46.getString());
  FIX::TimeUnit TimeUnit_46("STRING_Min");
  msg.set(TimeUnit_46);
  Instrument_46.insert(TimeUnit_46.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_46(2);
  msg.set(UnderlyingPriceDeterminationMethod_46);
  Instrument_46.insert(UnderlyingPriceDeterminationMethod_46.getString());
  FIX::UnitOfMeasure UnitOfMeasure_46("STRING_Bcf");
  msg.set(UnitOfMeasure_46);
  Instrument_46.insert(UnitOfMeasure_46.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_46;
  UnitOfMeasureQty_46.setString("17809343");
  msg.set(UnitOfMeasureQty_46);
  Instrument_46.insert(UnitOfMeasureQty_46.getString());
  FIX::ValuationMethod ValuationMethod_46("STRING_FUT");
  msg.set(ValuationMethod_46);
  Instrument_46.insert(ValuationMethod_46.getString());
  all_values.push_back(Instrument_46);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_91;
    FIX::ComplexEventCondition ComplexEventCondition_91(1);
    noComplexEvents_0_0.set(ComplexEventCondition_91);
    ComplexEvents_NoComplexEvents_91.insert(ComplexEventCondition_91.getString());
    FIX::ComplexEventPrice ComplexEventPrice_91;
    ComplexEventPrice_91.setString("20860712");
    noComplexEvents_0_0.set(ComplexEventPrice_91);
    ComplexEvents_NoComplexEvents_91.insert(ComplexEventPrice_91.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_91(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_91);
    ComplexEvents_NoComplexEvents_91.insert(ComplexEventPriceBoundaryMethod_91.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_91;
    ComplexEventPriceBoundaryPrecision_91.setString("50.750000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_91);
    ComplexEvents_NoComplexEvents_91.insert(ComplexEventPriceBoundaryPrecision_91.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_91(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_91);
    ComplexEvents_NoComplexEvents_91.insert(ComplexEventPriceTimeType_91.getString());
    FIX::ComplexEventType ComplexEventType_91(2);
    noComplexEvents_0_0.set(ComplexEventType_91);
    ComplexEvents_NoComplexEvents_91.insert(ComplexEventType_91.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_91;
    ComplexOptPayoutAmount_91.setString("14337297");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_91);
    ComplexEvents_NoComplexEvents_91.insert(ComplexOptPayoutAmount_91.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_91);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_191;
      FIX::ComplexEventEndDate ComplexEventEndDate_191(FIX::UTCTIMESTAMP(10, 25, 22, 17, 12002));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_191);
      ComplexEventDates_NoComplexEventDates_191.insert(ComplexEventEndDate_191.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_191(FIX::UTCTIMESTAMP(10, 53, 42, 4, 12005));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_191);
      ComplexEventDates_NoComplexEventDates_191.insert(ComplexEventStartDate_191.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_191);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_378;
        FIX::ComplexEventEndTime ComplexEventEndTime_378(FIX::UTCTIMEONLY(4, 21, 12));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_378);
        ComplexEventTimes_NoComplexEventTimes_378.insert(ComplexEventEndTime_378.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_378(FIX::UTCTIMEONLY(5, 45, 46));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_378);
        ComplexEventTimes_NoComplexEventTimes_378.insert(ComplexEventStartTime_378.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_378);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_192;
      FIX::ComplexEventEndDate ComplexEventEndDate_192(FIX::UTCTIMESTAMP(19, 28, 6, 5, 32007));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_192);
      ComplexEventDates_NoComplexEventDates_192.insert(ComplexEventEndDate_192.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_192(FIX::UTCTIMESTAMP(9, 46, 2, 3, 42014));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_192);
      ComplexEventDates_NoComplexEventDates_192.insert(ComplexEventStartDate_192.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_192);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_379;
        FIX::ComplexEventEndTime ComplexEventEndTime_379(FIX::UTCTIMEONLY(0, 31, 50));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_379);
        ComplexEventTimes_NoComplexEventTimes_379.insert(ComplexEventEndTime_379.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_379(FIX::UTCTIMEONLY(19, 41, 1));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_379);
        ComplexEventTimes_NoComplexEventTimes_379.insert(ComplexEventStartTime_379.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_379);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_380;
        FIX::ComplexEventEndTime ComplexEventEndTime_380(FIX::UTCTIMEONLY(1, 14, 3));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_380);
        ComplexEventTimes_NoComplexEventTimes_380.insert(ComplexEventEndTime_380.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_380(FIX::UTCTIMEONLY(0, 40, 37));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_380);
        ComplexEventTimes_NoComplexEventTimes_380.insert(ComplexEventStartTime_380.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_380);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_91;
    FIX::EventDate EventDate_91("LOCALMKTDATE_1643975868");
    noEvents_0_0.set(EventDate_91);
    EvntGrp_NoEvents_91.insert(EventDate_91.getString());
    FIX::EventPx EventPx_91;
    EventPx_91.setString("2041717");
    noEvents_0_0.set(EventPx_91);
    EvntGrp_NoEvents_91.insert(EventPx_91.getString());
    FIX::EventText EventText_91("STRING_998365602");
    noEvents_0_0.set(EventText_91);
    EvntGrp_NoEvents_91.insert(EventText_91.getString());
    FIX::EventTime EventTime_91(FIX::UTCTIMESTAMP(12, 29, 27, 22, 42005));
    noEvents_0_0.set(EventTime_91);
    EvntGrp_NoEvents_91.insert(EventTime_91.getString());
    FIX::EventType EventType_91(14);
    noEvents_0_0.set(EventType_91);
    EvntGrp_NoEvents_91.insert(EventType_91.getString());
    all_values.push_back(EvntGrp_NoEvents_91);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_92;
    FIX::EventDate EventDate_92("LOCALMKTDATE_1112562898");
    noEvents_0_1.set(EventDate_92);
    EvntGrp_NoEvents_92.insert(EventDate_92.getString());
    FIX::EventPx EventPx_92;
    EventPx_92.setString("10989896");
    noEvents_0_1.set(EventPx_92);
    EvntGrp_NoEvents_92.insert(EventPx_92.getString());
    FIX::EventText EventText_92("STRING_373912543");
    noEvents_0_1.set(EventText_92);
    EvntGrp_NoEvents_92.insert(EventText_92.getString());
    FIX::EventTime EventTime_92(FIX::UTCTIMESTAMP(4, 14, 49, 25, 22007));
    noEvents_0_1.set(EventTime_92);
    EvntGrp_NoEvents_92.insert(EventTime_92.getString());
    FIX::EventType EventType_92(15);
    noEvents_0_1.set(EventType_92);
    EvntGrp_NoEvents_92.insert(EventType_92.getString());
    all_values.push_back(EvntGrp_NoEvents_92);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_84;
    FIX::InstrumentPartyID InstrumentPartyID_84("STRING_22654116");
    noInstrumentParties_0_0.set(InstrumentPartyID_84);
    InstrumentParties_NoInstrumentParties_84.insert(InstrumentPartyID_84.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_84('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_84);
    InstrumentParties_NoInstrumentParties_84.insert(InstrumentPartyIDSource_84.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_84(675302863);
    noInstrumentParties_0_0.set(InstrumentPartyRole_84);
    InstrumentParties_NoInstrumentParties_84.insert(InstrumentPartyRole_84.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_84);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168;
      FIX::InstrumentPartySubID InstrumentPartySubID_168("STRING_1684733461");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_168);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168.insert(InstrumentPartySubID_168.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_168(815458223);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_168);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168.insert(InstrumentPartySubIDType_168.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_88;
    FIX::SecurityAltID SecurityAltID_88("STRING_567526476");
    noSecurityAltID_0_0.set(SecurityAltID_88);
    SecAltIDGrp_NoSecurityAltID_88.insert(SecurityAltID_88.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_88("STRING_311950443");
    noSecurityAltID_0_0.set(SecurityAltIDSource_88);
    SecAltIDGrp_NoSecurityAltID_88.insert(SecurityAltIDSource_88.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_88);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_89;
    FIX::SecurityAltID SecurityAltID_89("STRING_1588031403");
    noSecurityAltID_0_1.set(SecurityAltID_89);
    SecAltIDGrp_NoSecurityAltID_89.insert(SecurityAltID_89.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_89("STRING_1565892078");
    noSecurityAltID_0_1.set(SecurityAltIDSource_89);
    SecAltIDGrp_NoSecurityAltID_89.insert(SecurityAltIDSource_89.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_89);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderCancelRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_90;
    FIX::SecurityAltID SecurityAltID_90("STRING_1808572381");
    noSecurityAltID_0_2.set(SecurityAltID_90);
    SecAltIDGrp_NoSecurityAltID_90.insert(SecurityAltID_90.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_90("STRING_971688463");
    noSecurityAltID_0_2.set(SecurityAltIDSource_90);
    SecAltIDGrp_NoSecurityAltID_90.insert(SecurityAltIDSource_90.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_90);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_92;
  FIX::SecurityXML SecurityXML_93("XMLDATA_1818592728");
  msg.set(SecurityXML_93);
  FIX::SecurityXMLLen SecurityXMLLen_46(4861340);
  msg.set(SecurityXMLLen_46);
  FIX::SecurityXMLSchema SecurityXMLSchema_46("STRING_280500685");
  msg.set(SecurityXMLSchema_46);
  SecurityXML_92.insert(SecurityXMLSchema_46.getString());
  all_values.push_back(SecurityXML_92);

  // OrderQtyData
  multiset<string> OrderQtyData_18;
  FIX::CashOrderQty CashOrderQty_18;
  CashOrderQty_18.setString("9525014");
  msg.set(CashOrderQty_18);
  OrderQtyData_18.insert(CashOrderQty_18.getString());
  FIX::OrderPercent OrderPercent_18;
  OrderPercent_18.setString("55.690000");
  msg.set(OrderPercent_18);
  OrderQtyData_18.insert(OrderPercent_18.getString());
  FIX::OrderQty OrderQty_27;
  OrderQty_27.setString("21366035");
  msg.set(OrderQty_27);
  OrderQtyData_18.insert(OrderQty_27.getString());
  FIX::RoundingDirection RoundingDirection_18('0');
  msg.set(RoundingDirection_18);
  OrderQtyData_18.insert(RoundingDirection_18.getString());
  FIX::RoundingModulus RoundingModulus_18;
  RoundingModulus_18.setString("5386315");
  msg.set(RoundingModulus_18);
  OrderQtyData_18.insert(RoundingModulus_18.getString());
  all_values.push_back(OrderQtyData_18);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_82;
    FIX::PartyID PartyID_82("STRING_1115889173");
    noPartyIDs_0_0.set(PartyID_82);
    Parties_NoPartyIDs_82.insert(PartyID_82.getString());
    FIX::PartyIDSource PartyIDSource_82('I');
    noPartyIDs_0_0.set(PartyIDSource_82);
    Parties_NoPartyIDs_82.insert(PartyIDSource_82.getString());
    FIX::PartyRole PartyRole_82(17);
    noPartyIDs_0_0.set(PartyRole_82);
    Parties_NoPartyIDs_82.insert(PartyRole_82.getString());
    all_values.push_back(Parties_NoPartyIDs_82);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_162;
      FIX::PartySubID PartySubID_162("STRING_623157391");
      noPartySubIDs_0_1_0.set(PartySubID_162);
      PtysSubGrp_NoPartySubIDs_162.insert(PartySubID_162.getString());
      FIX::PartySubIDType PartySubIDType_162(22);
      noPartySubIDs_0_1_0.set(PartySubIDType_162);
      PtysSubGrp_NoPartySubIDs_162.insert(PartySubIDType_162.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_162);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_83;
    FIX::PartyID PartyID_83("STRING_1383904325");
    noPartyIDs_0_1.set(PartyID_83);
    Parties_NoPartyIDs_83.insert(PartyID_83.getString());
    FIX::PartyIDSource PartyIDSource_83('2');
    noPartyIDs_0_1.set(PartyIDSource_83);
    Parties_NoPartyIDs_83.insert(PartyIDSource_83.getString());
    FIX::PartyRole PartyRole_83(27);
    noPartyIDs_0_1.set(PartyRole_83);
    Parties_NoPartyIDs_83.insert(PartyRole_83.getString());
    all_values.push_back(Parties_NoPartyIDs_83);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_163;
      FIX::PartySubID PartySubID_163("STRING_624580127");
      noPartySubIDs_1_1_0.set(PartySubID_163);
      PtysSubGrp_NoPartySubIDs_163.insert(PartySubID_163.getString());
      FIX::PartySubIDType PartySubIDType_163(3);
      noPartySubIDs_1_1_0.set(PartySubIDType_163);
      PtysSubGrp_NoPartySubIDs_163.insert(PartySubIDType_163.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_163);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderCancelRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_84;
    FIX::PartyID PartyID_84("STRING_1589594109");
    noPartyIDs_0_2.set(PartyID_84);
    Parties_NoPartyIDs_84.insert(PartyID_84.getString());
    FIX::PartyIDSource PartyIDSource_84('A');
    noPartyIDs_0_2.set(PartyIDSource_84);
    Parties_NoPartyIDs_84.insert(PartyIDSource_84.getString());
    FIX::PartyRole PartyRole_84(50);
    noPartyIDs_0_2.set(PartyRole_84);
    Parties_NoPartyIDs_84.insert(PartyRole_84.getString());
    all_values.push_back(Parties_NoPartyIDs_84);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_164;
      FIX::PartySubID PartySubID_164("STRING_729356416");
      noPartySubIDs_2_1_0.set(PartySubID_164);
      PtysSubGrp_NoPartySubIDs_164.insert(PartySubID_164.getString());
      FIX::PartySubIDType PartySubIDType_164(1);
      noPartySubIDs_2_1_0.set(PartySubIDType_164);
      PtysSubGrp_NoPartySubIDs_164.insert(PartySubIDType_164.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_164);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderCancelRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_72;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_72("DATA_147764847");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingIssuer_72.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_72(237958004);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingIssuerLen_72.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_72("DATA_1238206305");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingSecurityDesc_72.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_72(1966357575);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingSecurityDescLen_72.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_72;
    UnderlyingAdjustedQuantity_72.setString("2428193");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_72);
    UnderlyingInstrument_72.insert(UnderlyingAdjustedQuantity_72.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_72;
    UnderlyingAllocationPercent_72.setString("69.900000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_72);
    UnderlyingInstrument_72.insert(UnderlyingAllocationPercent_72.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_72;
    UnderlyingAttachmentPoint_72.setString("53.620000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_72);
    UnderlyingInstrument_72.insert(UnderlyingAttachmentPoint_72.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_72("STRING_1829944914");
    noUnderlyings_0_0.set(UnderlyingCFICode_72);
    UnderlyingInstrument_72.insert(UnderlyingCFICode_72.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_72("STRING_1507826861");
    noUnderlyings_0_0.set(UnderlyingCPProgram_72);
    UnderlyingInstrument_72.insert(UnderlyingCPProgram_72.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_72("STRING_688956048");
    noUnderlyings_0_0.set(UnderlyingCPRegType_72);
    UnderlyingInstrument_72.insert(UnderlyingCPRegType_72.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_72;
    UnderlyingCapValue_72.setString("2210928");
    noUnderlyings_0_0.set(UnderlyingCapValue_72);
    UnderlyingInstrument_72.insert(UnderlyingCapValue_72.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_72;
    UnderlyingCashAmount_72.setString("18708592");
    noUnderlyings_0_0.set(UnderlyingCashAmount_72);
    UnderlyingInstrument_72.insert(UnderlyingCashAmount_72.getString());
    FIX::UnderlyingCashType UnderlyingCashType_72("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_72);
    UnderlyingInstrument_72.insert(UnderlyingCashType_72.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_72;
    UnderlyingContractMultiplier_72.setString("15493142");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_72);
    UnderlyingInstrument_72.insert(UnderlyingContractMultiplier_72.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_72(1748857395);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_72);
    UnderlyingInstrument_72.insert(UnderlyingContractMultiplierUnit_72.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_72("COUNTRY_1548809176");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_72);
    UnderlyingInstrument_72.insert(UnderlyingCountryOfIssue_72.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_72("LOCALMKTDATE_24987985");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_72);
    UnderlyingInstrument_72.insert(UnderlyingCouponPaymentDate_72.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_72;
    UnderlyingCouponRate_72.setString("83.370000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_72);
    UnderlyingInstrument_72.insert(UnderlyingCouponRate_72.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_72("STRING_785229853");
    noUnderlyings_0_0.set(UnderlyingCreditRating_72);
    UnderlyingInstrument_72.insert(UnderlyingCreditRating_72.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_72("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_72);
    UnderlyingInstrument_72.insert(UnderlyingCurrency_72.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_72;
    UnderlyingCurrentValue_72.setString("443046");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_72);
    UnderlyingInstrument_72.insert(UnderlyingCurrentValue_72.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_72;
    UnderlyingDetachmentPoint_72.setString("75.780000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_72);
    UnderlyingInstrument_72.insert(UnderlyingDetachmentPoint_72.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_72;
    UnderlyingDirtyPrice_72.setString("9412203");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_72);
    UnderlyingInstrument_72.insert(UnderlyingDirtyPrice_72.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_72;
    UnderlyingEndPrice_72.setString("16338987");
    noUnderlyings_0_0.set(UnderlyingEndPrice_72);
    UnderlyingInstrument_72.insert(UnderlyingEndPrice_72.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_72;
    UnderlyingEndValue_72.setString("20496175");
    noUnderlyings_0_0.set(UnderlyingEndValue_72);
    UnderlyingInstrument_72.insert(UnderlyingEndValue_72.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_72(1206139159);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_72);
    UnderlyingInstrument_72.insert(UnderlyingExerciseStyle_72.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_72;
    UnderlyingFXRate_72.setString("3123851");
    noUnderlyings_0_0.set(UnderlyingFXRate_72);
    UnderlyingInstrument_72.insert(UnderlyingFXRate_72.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_72('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_72);
    UnderlyingInstrument_72.insert(UnderlyingFXRateCalc_72.getString());
    FIX::UnderlyingFactor UnderlyingFactor_72;
    UnderlyingFactor_72.setString("17830084");
    noUnderlyings_0_0.set(UnderlyingFactor_72);
    UnderlyingInstrument_72.insert(UnderlyingFactor_72.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_72(578903037);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_72);
    UnderlyingInstrument_72.insert(UnderlyingFlowScheduleType_72.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_72("STRING_779255133");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_72);
    UnderlyingInstrument_72.insert(UnderlyingInstrRegistry_72.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_72("LOCALMKTDATE_2020966435");
    noUnderlyings_0_0.set(UnderlyingIssueDate_72);
    UnderlyingInstrument_72.insert(UnderlyingIssueDate_72.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_72("STRING_1817109342");
    noUnderlyings_0_0.set(UnderlyingIssuer_72);
    UnderlyingInstrument_72.insert(UnderlyingIssuer_72.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_72("STRING_598129060");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_72);
    UnderlyingInstrument_72.insert(UnderlyingLocaleOfIssue_72.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_72("LOCALMKTDATE_116302131");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_72);
    UnderlyingInstrument_72.insert(UnderlyingMaturityDate_72.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_72("MONTHYEAR_1188332684");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_72);
    UnderlyingInstrument_72.insert(UnderlyingMaturityMonthYear_72.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_72("TZTIMEONLY_1369504423");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_72);
    UnderlyingInstrument_72.insert(UnderlyingMaturityTime_72.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_72;
    UnderlyingNotionalPercentageOutstanding_72.setString("70.450000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_72);
    UnderlyingInstrument_72.insert(UnderlyingNotionalPercentageOutstanding_72.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_72('5');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_72);
    UnderlyingInstrument_72.insert(UnderlyingOptAttribute_72.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_72;
    UnderlyingOriginalNotionalPercentageOutstanding_72.setString("4.710000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_72);
    UnderlyingInstrument_72.insert(UnderlyingOriginalNotionalPercentageOutstanding_72.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_72("STRING_19856261");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_72);
    UnderlyingInstrument_72.insert(UnderlyingPriceUnitOfMeasure_72.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_72;
    UnderlyingPriceUnitOfMeasureQty_72.setString("2720515");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_72);
    UnderlyingInstrument_72.insert(UnderlyingPriceUnitOfMeasureQty_72.getString());
    FIX::UnderlyingProduct UnderlyingProduct_72(1715822045);
    noUnderlyings_0_0.set(UnderlyingProduct_72);
    UnderlyingInstrument_72.insert(UnderlyingProduct_72.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_72(1569170502);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_72);
    UnderlyingInstrument_72.insert(UnderlyingPutOrCall_72.getString());
    FIX::UnderlyingPx UnderlyingPx_72;
    UnderlyingPx_72.setString("20209089");
    noUnderlyings_0_0.set(UnderlyingPx_72);
    UnderlyingInstrument_72.insert(UnderlyingPx_72.getString());
    FIX::UnderlyingQty UnderlyingQty_72;
    UnderlyingQty_72.setString("11171475");
    noUnderlyings_0_0.set(UnderlyingQty_72);
    UnderlyingInstrument_72.insert(UnderlyingQty_72.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_72("LOCALMKTDATE_1594158487");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_72);
    UnderlyingInstrument_72.insert(UnderlyingRedemptionDate_72.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_72("STRING_443543610");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_72);
    UnderlyingInstrument_72.insert(UnderlyingRepoCollateralSecurityType_72.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_72;
    UnderlyingRepurchaseRate_72.setString("74.260000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_72);
    UnderlyingInstrument_72.insert(UnderlyingRepurchaseRate_72.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_72(709882290);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_72);
    UnderlyingInstrument_72.insert(UnderlyingRepurchaseTerm_72.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_72("STRING_1935303336");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_72);
    UnderlyingInstrument_72.insert(UnderlyingRestructuringType_72.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_72("STRING_1946682074");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityDesc_72.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_72("EXCHANGE_450186220");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityExchange_72.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_72("STRING_729040019");
    noUnderlyings_0_0.set(UnderlyingSecurityID_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityID_72.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_72("STRING_1433097183");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityIDSource_72.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_72("STRING_352320090");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_72);
    UnderlyingInstrument_72.insert(UnderlyingSecuritySubType_72.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_72("STRING_1935179178");
    noUnderlyings_0_0.set(UnderlyingSecurityType_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityType_72.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_72("STRING_1745482378");
    noUnderlyings_0_0.set(UnderlyingSeniority_72);
    UnderlyingInstrument_72.insert(UnderlyingSeniority_72.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_72("STRING_983810377");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_72);
    UnderlyingInstrument_72.insert(UnderlyingSettlMethod_72.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_72(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_72);
    UnderlyingInstrument_72.insert(UnderlyingSettlementType_72.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_72;
    UnderlyingStartValue_72.setString("1769017");
    noUnderlyings_0_0.set(UnderlyingStartValue_72);
    UnderlyingInstrument_72.insert(UnderlyingStartValue_72.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_72("STRING_1763065510");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_72);
    UnderlyingInstrument_72.insert(UnderlyingStateOrProvinceOfIssue_72.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_72("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_72);
    UnderlyingInstrument_72.insert(UnderlyingStrikeCurrency_72.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_72;
    UnderlyingStrikePrice_72.setString("2137109");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_72);
    UnderlyingInstrument_72.insert(UnderlyingStrikePrice_72.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_72("STRING_1560488879");
    noUnderlyings_0_0.set(UnderlyingSymbol_72);
    UnderlyingInstrument_72.insert(UnderlyingSymbol_72.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_72("STRING_1034860146");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_72);
    UnderlyingInstrument_72.insert(UnderlyingSymbolSfx_72.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_72("STRING_1583215346");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_72);
    UnderlyingInstrument_72.insert(UnderlyingTimeUnit_72.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_72("STRING_1359252277");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_72);
    UnderlyingInstrument_72.insert(UnderlyingUnitOfMeasure_72.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_72;
    UnderlyingUnitOfMeasureQty_72.setString("15835360");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_72);
    UnderlyingInstrument_72.insert(UnderlyingUnitOfMeasureQty_72.getString());
    all_values.push_back(UnderlyingInstrument_72);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_141;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_141("STRING_1379108538");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_141);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_141.insert(UnderlyingSecurityAltID_141.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_141("STRING_1855587569");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_141);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_141.insert(UnderlyingSecurityAltIDSource_141.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_141);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_142;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_142("STRING_1062530566");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_142);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_142.insert(UnderlyingSecurityAltID_142.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_142("STRING_800795392");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_142);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_142.insert(UnderlyingSecurityAltIDSource_142.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_142);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_138;
      FIX::UnderlyingStipType UnderlyingStipType_138("STRING_32194491");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_138);
      UnderlyingStipulations_NoUnderlyingStips_138.insert(UnderlyingStipType_138.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_138("STRING_247470232");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_138);
      UnderlyingStipulations_NoUnderlyingStips_138.insert(UnderlyingStipValue_138.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_138);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_144;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_144("STRING_1934571918");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_144);
      UndlyInstrumentParties_NoUndlyInstrumentParties_144.insert(UnderlyingInstrumentPartyID_144.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_144('9');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_144);
      UndlyInstrumentParties_NoUndlyInstrumentParties_144.insert(UnderlyingInstrumentPartyIDSource_144.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_144(1960376141);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_144);
      UndlyInstrumentParties_NoUndlyInstrumentParties_144.insert(UnderlyingInstrumentPartyRole_144.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_144);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_279("STRING_1407538743");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_279);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279.insert(UnderlyingInstrumentPartySubID_279.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_279(541932512);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_279);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279.insert(UnderlyingInstrumentPartySubIDType_279.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_145;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_145("STRING_1019383879");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_145);
      UndlyInstrumentParties_NoUndlyInstrumentParties_145.insert(UnderlyingInstrumentPartyID_145.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_145('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_145);
      UndlyInstrumentParties_NoUndlyInstrumentParties_145.insert(UnderlyingInstrumentPartyIDSource_145.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_145(329628043);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_145);
      UndlyInstrumentParties_NoUndlyInstrumentParties_145.insert(UnderlyingInstrumentPartyRole_145.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_145);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_280("STRING_596185562");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_280);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280.insert(UnderlyingInstrumentPartySubID_280.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_280(1900332004);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_280);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280.insert(UnderlyingInstrumentPartySubIDType_280.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_73;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_73("DATA_794284377");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingIssuer_73.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_73(211767425);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingIssuerLen_73.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_73("DATA_1197035104");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingSecurityDesc_73.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_73(640811838);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingSecurityDescLen_73.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_73;
    UnderlyingAdjustedQuantity_73.setString("4254783");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_73);
    UnderlyingInstrument_73.insert(UnderlyingAdjustedQuantity_73.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_73;
    UnderlyingAllocationPercent_73.setString("3.350000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_73);
    UnderlyingInstrument_73.insert(UnderlyingAllocationPercent_73.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_73;
    UnderlyingAttachmentPoint_73.setString("19.840000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_73);
    UnderlyingInstrument_73.insert(UnderlyingAttachmentPoint_73.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_73("STRING_2008693694");
    noUnderlyings_0_1.set(UnderlyingCFICode_73);
    UnderlyingInstrument_73.insert(UnderlyingCFICode_73.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_73("STRING_1969292612");
    noUnderlyings_0_1.set(UnderlyingCPProgram_73);
    UnderlyingInstrument_73.insert(UnderlyingCPProgram_73.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_73("STRING_1111724380");
    noUnderlyings_0_1.set(UnderlyingCPRegType_73);
    UnderlyingInstrument_73.insert(UnderlyingCPRegType_73.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_73;
    UnderlyingCapValue_73.setString("13554022");
    noUnderlyings_0_1.set(UnderlyingCapValue_73);
    UnderlyingInstrument_73.insert(UnderlyingCapValue_73.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_73;
    UnderlyingCashAmount_73.setString("12009175");
    noUnderlyings_0_1.set(UnderlyingCashAmount_73);
    UnderlyingInstrument_73.insert(UnderlyingCashAmount_73.getString());
    FIX::UnderlyingCashType UnderlyingCashType_73("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_73);
    UnderlyingInstrument_73.insert(UnderlyingCashType_73.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_73;
    UnderlyingContractMultiplier_73.setString("2704491");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_73);
    UnderlyingInstrument_73.insert(UnderlyingContractMultiplier_73.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_73(2001712895);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_73);
    UnderlyingInstrument_73.insert(UnderlyingContractMultiplierUnit_73.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_73("COUNTRY_401357496");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_73);
    UnderlyingInstrument_73.insert(UnderlyingCountryOfIssue_73.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_73("LOCALMKTDATE_302643625");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_73);
    UnderlyingInstrument_73.insert(UnderlyingCouponPaymentDate_73.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_73;
    UnderlyingCouponRate_73.setString("94.790000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_73);
    UnderlyingInstrument_73.insert(UnderlyingCouponRate_73.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_73("STRING_426430301");
    noUnderlyings_0_1.set(UnderlyingCreditRating_73);
    UnderlyingInstrument_73.insert(UnderlyingCreditRating_73.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_73("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_73);
    UnderlyingInstrument_73.insert(UnderlyingCurrency_73.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_73;
    UnderlyingCurrentValue_73.setString("2393227");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_73);
    UnderlyingInstrument_73.insert(UnderlyingCurrentValue_73.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_73;
    UnderlyingDetachmentPoint_73.setString("22.390000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_73);
    UnderlyingInstrument_73.insert(UnderlyingDetachmentPoint_73.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_73;
    UnderlyingDirtyPrice_73.setString("3191070");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_73);
    UnderlyingInstrument_73.insert(UnderlyingDirtyPrice_73.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_73;
    UnderlyingEndPrice_73.setString("7812553");
    noUnderlyings_0_1.set(UnderlyingEndPrice_73);
    UnderlyingInstrument_73.insert(UnderlyingEndPrice_73.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_73;
    UnderlyingEndValue_73.setString("6954024");
    noUnderlyings_0_1.set(UnderlyingEndValue_73);
    UnderlyingInstrument_73.insert(UnderlyingEndValue_73.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_73(2078965930);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_73);
    UnderlyingInstrument_73.insert(UnderlyingExerciseStyle_73.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_73;
    UnderlyingFXRate_73.setString("11108833");
    noUnderlyings_0_1.set(UnderlyingFXRate_73);
    UnderlyingInstrument_73.insert(UnderlyingFXRate_73.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_73('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_73);
    UnderlyingInstrument_73.insert(UnderlyingFXRateCalc_73.getString());
    FIX::UnderlyingFactor UnderlyingFactor_73;
    UnderlyingFactor_73.setString("5276678");
    noUnderlyings_0_1.set(UnderlyingFactor_73);
    UnderlyingInstrument_73.insert(UnderlyingFactor_73.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_73(863731705);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_73);
    UnderlyingInstrument_73.insert(UnderlyingFlowScheduleType_73.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_73("STRING_2107069457");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_73);
    UnderlyingInstrument_73.insert(UnderlyingInstrRegistry_73.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_73("LOCALMKTDATE_739435269");
    noUnderlyings_0_1.set(UnderlyingIssueDate_73);
    UnderlyingInstrument_73.insert(UnderlyingIssueDate_73.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_73("STRING_2060766809");
    noUnderlyings_0_1.set(UnderlyingIssuer_73);
    UnderlyingInstrument_73.insert(UnderlyingIssuer_73.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_73("STRING_600397647");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_73);
    UnderlyingInstrument_73.insert(UnderlyingLocaleOfIssue_73.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_73("LOCALMKTDATE_1164913617");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_73);
    UnderlyingInstrument_73.insert(UnderlyingMaturityDate_73.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_73("MONTHYEAR_523323497");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_73);
    UnderlyingInstrument_73.insert(UnderlyingMaturityMonthYear_73.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_73("TZTIMEONLY_128585984");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_73);
    UnderlyingInstrument_73.insert(UnderlyingMaturityTime_73.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_73;
    UnderlyingNotionalPercentageOutstanding_73.setString("36.630000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_73);
    UnderlyingInstrument_73.insert(UnderlyingNotionalPercentageOutstanding_73.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_73('3');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_73);
    UnderlyingInstrument_73.insert(UnderlyingOptAttribute_73.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_73;
    UnderlyingOriginalNotionalPercentageOutstanding_73.setString("3.640000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_73);
    UnderlyingInstrument_73.insert(UnderlyingOriginalNotionalPercentageOutstanding_73.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_73("STRING_234042231");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_73);
    UnderlyingInstrument_73.insert(UnderlyingPriceUnitOfMeasure_73.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_73;
    UnderlyingPriceUnitOfMeasureQty_73.setString("15460499");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_73);
    UnderlyingInstrument_73.insert(UnderlyingPriceUnitOfMeasureQty_73.getString());
    FIX::UnderlyingProduct UnderlyingProduct_73(2060138666);
    noUnderlyings_0_1.set(UnderlyingProduct_73);
    UnderlyingInstrument_73.insert(UnderlyingProduct_73.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_73(504491365);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_73);
    UnderlyingInstrument_73.insert(UnderlyingPutOrCall_73.getString());
    FIX::UnderlyingPx UnderlyingPx_73;
    UnderlyingPx_73.setString("14002792");
    noUnderlyings_0_1.set(UnderlyingPx_73);
    UnderlyingInstrument_73.insert(UnderlyingPx_73.getString());
    FIX::UnderlyingQty UnderlyingQty_73;
    UnderlyingQty_73.setString("3140125");
    noUnderlyings_0_1.set(UnderlyingQty_73);
    UnderlyingInstrument_73.insert(UnderlyingQty_73.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_73("LOCALMKTDATE_807134990");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_73);
    UnderlyingInstrument_73.insert(UnderlyingRedemptionDate_73.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_73("STRING_1501978690");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_73);
    UnderlyingInstrument_73.insert(UnderlyingRepoCollateralSecurityType_73.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_73;
    UnderlyingRepurchaseRate_73.setString("28.160000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_73);
    UnderlyingInstrument_73.insert(UnderlyingRepurchaseRate_73.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_73(896866886);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_73);
    UnderlyingInstrument_73.insert(UnderlyingRepurchaseTerm_73.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_73("STRING_413547043");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_73);
    UnderlyingInstrument_73.insert(UnderlyingRestructuringType_73.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_73("STRING_979765610");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityDesc_73.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_73("EXCHANGE_572885477");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityExchange_73.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_73("STRING_732654140");
    noUnderlyings_0_1.set(UnderlyingSecurityID_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityID_73.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_73("STRING_1761020916");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityIDSource_73.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_73("STRING_1268287948");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_73);
    UnderlyingInstrument_73.insert(UnderlyingSecuritySubType_73.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_73("STRING_664136422");
    noUnderlyings_0_1.set(UnderlyingSecurityType_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityType_73.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_73("STRING_724420618");
    noUnderlyings_0_1.set(UnderlyingSeniority_73);
    UnderlyingInstrument_73.insert(UnderlyingSeniority_73.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_73("STRING_433589380");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_73);
    UnderlyingInstrument_73.insert(UnderlyingSettlMethod_73.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_73(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_73);
    UnderlyingInstrument_73.insert(UnderlyingSettlementType_73.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_73;
    UnderlyingStartValue_73.setString("15881523");
    noUnderlyings_0_1.set(UnderlyingStartValue_73);
    UnderlyingInstrument_73.insert(UnderlyingStartValue_73.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_73("STRING_393175189");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_73);
    UnderlyingInstrument_73.insert(UnderlyingStateOrProvinceOfIssue_73.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_73("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_73);
    UnderlyingInstrument_73.insert(UnderlyingStrikeCurrency_73.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_73;
    UnderlyingStrikePrice_73.setString("9935728");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_73);
    UnderlyingInstrument_73.insert(UnderlyingStrikePrice_73.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_73("STRING_948669505");
    noUnderlyings_0_1.set(UnderlyingSymbol_73);
    UnderlyingInstrument_73.insert(UnderlyingSymbol_73.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_73("STRING_2024758982");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_73);
    UnderlyingInstrument_73.insert(UnderlyingSymbolSfx_73.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_73("STRING_1122158820");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_73);
    UnderlyingInstrument_73.insert(UnderlyingTimeUnit_73.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_73("STRING_1974793169");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_73);
    UnderlyingInstrument_73.insert(UnderlyingUnitOfMeasure_73.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_73;
    UnderlyingUnitOfMeasureQty_73.setString("2224077");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_73);
    UnderlyingInstrument_73.insert(UnderlyingUnitOfMeasureQty_73.getString());
    all_values.push_back(UnderlyingInstrument_73);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_143;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_143("STRING_61351752");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_143);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_143.insert(UnderlyingSecurityAltID_143.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_143("STRING_1768457759");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_143);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_143.insert(UnderlyingSecurityAltIDSource_143.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_143);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_144;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_144("STRING_127640555");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_144);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_144.insert(UnderlyingSecurityAltID_144.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_144("STRING_565843117");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_144);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_144.insert(UnderlyingSecurityAltIDSource_144.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_144);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_145;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_145("STRING_1021253322");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_145);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_145.insert(UnderlyingSecurityAltID_145.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_145("STRING_441653070");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_145);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_145.insert(UnderlyingSecurityAltIDSource_145.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_145);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_139;
      FIX::UnderlyingStipType UnderlyingStipType_139("STRING_375748364");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_139);
      UnderlyingStipulations_NoUnderlyingStips_139.insert(UnderlyingStipType_139.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_139("STRING_1182095886");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_139);
      UnderlyingStipulations_NoUnderlyingStips_139.insert(UnderlyingStipValue_139.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_139);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_146;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_146("STRING_789295408");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_146);
      UndlyInstrumentParties_NoUndlyInstrumentParties_146.insert(UnderlyingInstrumentPartyID_146.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_146('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_146);
      UndlyInstrumentParties_NoUndlyInstrumentParties_146.insert(UnderlyingInstrumentPartyIDSource_146.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_146(695246823);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_146);
      UndlyInstrumentParties_NoUndlyInstrumentParties_146.insert(UnderlyingInstrumentPartyRole_146.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_146);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_281("STRING_1775398765");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_281);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281.insert(UnderlyingInstrumentPartySubID_281.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_281(1963534771);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_281);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281.insert(UnderlyingInstrumentPartySubIDType_281.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
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
