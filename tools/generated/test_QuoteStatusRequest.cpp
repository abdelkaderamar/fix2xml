#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/QuoteStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteStatusRequest_0;
  FIX::Account Account_40("STRING_1301638849");
  msg.set(Account_40);
  QuoteStatusRequest_0.insert(Account_40.getString());
  FIX::AccountType AccountType_35(2);
  msg.set(AccountType_35);
  QuoteStatusRequest_0.insert(AccountType_35.getString());
  FIX::AcctIDSource AcctIDSource_33(1);
  msg.set(AcctIDSource_33);
  QuoteStatusRequest_0.insert(AcctIDSource_33.getString());
  FIX::QuoteID QuoteID_14("STRING_138047890");
  msg.set(QuoteID_14);
  QuoteStatusRequest_0.insert(QuoteID_14.getString());
  FIX::QuoteStatusReqID QuoteStatusReqID_1("STRING_2125967387");
  msg.set(QuoteStatusReqID_1);
  QuoteStatusRequest_0.insert(QuoteStatusReqID_1.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_5('0');
  msg.set(SubscriptionRequestType_5);
  QuoteStatusRequest_0.insert(SubscriptionRequestType_5.getString());
  FIX::TradingSessionID TradingSessionID_87("STRING_4");
  msg.set(TradingSessionID_87);
  QuoteStatusRequest_0.insert(TradingSessionID_87.getString());
  FIX::TradingSessionSubID TradingSessionSubID_87("STRING_2");
  msg.set(TradingSessionSubID_87);
  QuoteStatusRequest_0.insert(TradingSessionSubID_87.getString());
  all_values.push_back(QuoteStatusRequest_0);

  all_compo_names.insert("QuoteStatusRequest");

  // FinancingDetails
  multiset<string> FinancingDetails_24;
  FIX::AgreementCurrency AgreementCurrency_24("USD");
  msg.set(AgreementCurrency_24);
  FinancingDetails_24.insert(AgreementCurrency_24.getString());
  FIX::AgreementDate AgreementDate_24("LOCALMKTDATE_605942590");
  msg.set(AgreementDate_24);
  FinancingDetails_24.insert(AgreementDate_24.getString());
  FIX::AgreementDesc AgreementDesc_24("STRING_415965774");
  msg.set(AgreementDesc_24);
  FinancingDetails_24.insert(AgreementDesc_24.getString());
  FIX::AgreementID AgreementID_24("STRING_273541161");
  msg.set(AgreementID_24);
  FinancingDetails_24.insert(AgreementID_24.getString());
  FIX::DeliveryType DeliveryType_24(1);
  msg.set(DeliveryType_24);
  FinancingDetails_24.insert(DeliveryType_24.getString());
  FIX::EndDate EndDate_24("LOCALMKTDATE_45094768");
  msg.set(EndDate_24);
  FinancingDetails_24.insert(EndDate_24.getString());
  FIX::MarginRatio MarginRatio_24;
  MarginRatio_24.setString("48.850000");
  msg.set(MarginRatio_24);
  FinancingDetails_24.insert(MarginRatio_24.getString());
  FIX::StartDate StartDate_24("LOCALMKTDATE_1367546188");
  msg.set(StartDate_24);
  FinancingDetails_24.insert(StartDate_24.getString());
  FIX::TerminationType TerminationType_24(2);
  msg.set(TerminationType_24);
  FinancingDetails_24.insert(TerminationType_24.getString());
  all_values.push_back(FinancingDetails_24);
  all_compo_names.insert("FinancingDetails");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::QuoteStatusRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_117;
    FIX::EncodedLegIssuer EncodedLegIssuer_117("DATA_368095571");
    noLegs_0_0.set(EncodedLegIssuer_117);
    InstrumentLeg_117.insert(EncodedLegIssuer_117.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_117(1012576845);
    noLegs_0_0.set(EncodedLegIssuerLen_117);
    InstrumentLeg_117.insert(EncodedLegIssuerLen_117.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_117("DATA_558281228");
    noLegs_0_0.set(EncodedLegSecurityDesc_117);
    InstrumentLeg_117.insert(EncodedLegSecurityDesc_117.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_117(1971567242);
    noLegs_0_0.set(EncodedLegSecurityDescLen_117);
    InstrumentLeg_117.insert(EncodedLegSecurityDescLen_117.getString());
    FIX::LegCFICode LegCFICode_117("STRING_23887174");
    noLegs_0_0.set(LegCFICode_117);
    InstrumentLeg_117.insert(LegCFICode_117.getString());
    FIX::LegContractMultiplier LegContractMultiplier_117;
    LegContractMultiplier_117.setString("13151349");
    noLegs_0_0.set(LegContractMultiplier_117);
    InstrumentLeg_117.insert(LegContractMultiplier_117.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_117(925983844);
    noLegs_0_0.set(LegContractMultiplierUnit_117);
    InstrumentLeg_117.insert(LegContractMultiplierUnit_117.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_117("MONTHYEAR_1627672550");
    noLegs_0_0.set(LegContractSettlMonth_117);
    InstrumentLeg_117.insert(LegContractSettlMonth_117.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_117("COUNTRY_1407306733");
    noLegs_0_0.set(LegCountryOfIssue_117);
    InstrumentLeg_117.insert(LegCountryOfIssue_117.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_117("LOCALMKTDATE_89866626");
    noLegs_0_0.set(LegCouponPaymentDate_117);
    InstrumentLeg_117.insert(LegCouponPaymentDate_117.getString());
    FIX::LegCouponRate LegCouponRate_117;
    LegCouponRate_117.setString("20.090000");
    noLegs_0_0.set(LegCouponRate_117);
    InstrumentLeg_117.insert(LegCouponRate_117.getString());
    FIX::LegCreditRating LegCreditRating_117("STRING_323718335");
    noLegs_0_0.set(LegCreditRating_117);
    InstrumentLeg_117.insert(LegCreditRating_117.getString());
    FIX::LegCurrency LegCurrency_117("GBP");
    noLegs_0_0.set(LegCurrency_117);
    InstrumentLeg_117.insert(LegCurrency_117.getString());
    FIX::LegDatedDate LegDatedDate_117("LOCALMKTDATE_1282230425");
    noLegs_0_0.set(LegDatedDate_117);
    InstrumentLeg_117.insert(LegDatedDate_117.getString());
    FIX::LegExerciseStyle LegExerciseStyle_117(1529553365);
    noLegs_0_0.set(LegExerciseStyle_117);
    InstrumentLeg_117.insert(LegExerciseStyle_117.getString());
    FIX::LegFactor LegFactor_117;
    LegFactor_117.setString("21067552");
    noLegs_0_0.set(LegFactor_117);
    InstrumentLeg_117.insert(LegFactor_117.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_117(1498301192);
    noLegs_0_0.set(LegFlowScheduleType_117);
    InstrumentLeg_117.insert(LegFlowScheduleType_117.getString());
    FIX::LegInstrRegistry LegInstrRegistry_117("STRING_2043760616");
    noLegs_0_0.set(LegInstrRegistry_117);
    InstrumentLeg_117.insert(LegInstrRegistry_117.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_117("LOCALMKTDATE_1786607760");
    noLegs_0_0.set(LegInterestAccrualDate_117);
    InstrumentLeg_117.insert(LegInterestAccrualDate_117.getString());
    FIX::LegIssueDate LegIssueDate_117("LOCALMKTDATE_1996609166");
    noLegs_0_0.set(LegIssueDate_117);
    InstrumentLeg_117.insert(LegIssueDate_117.getString());
    FIX::LegIssuer LegIssuer_117("STRING_849642558");
    noLegs_0_0.set(LegIssuer_117);
    InstrumentLeg_117.insert(LegIssuer_117.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_117("STRING_245066703");
    noLegs_0_0.set(LegLocaleOfIssue_117);
    InstrumentLeg_117.insert(LegLocaleOfIssue_117.getString());
    FIX::LegMaturityDate LegMaturityDate_117("LOCALMKTDATE_265091292");
    noLegs_0_0.set(LegMaturityDate_117);
    InstrumentLeg_117.insert(LegMaturityDate_117.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_117("MONTHYEAR_1123183720");
    noLegs_0_0.set(LegMaturityMonthYear_117);
    InstrumentLeg_117.insert(LegMaturityMonthYear_117.getString());
    FIX::LegMaturityTime LegMaturityTime_117("TZTIMEONLY_2129809700");
    noLegs_0_0.set(LegMaturityTime_117);
    InstrumentLeg_117.insert(LegMaturityTime_117.getString());
    FIX::LegOptAttribute LegOptAttribute_117('3');
    noLegs_0_0.set(LegOptAttribute_117);
    InstrumentLeg_117.insert(LegOptAttribute_117.getString());
    FIX::LegOptionRatio LegOptionRatio_117;
    LegOptionRatio_117.setString("10653049");
    noLegs_0_0.set(LegOptionRatio_117);
    InstrumentLeg_117.insert(LegOptionRatio_117.getString());
    FIX::LegPool LegPool_117("STRING_1349872240");
    noLegs_0_0.set(LegPool_117);
    InstrumentLeg_117.insert(LegPool_117.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_117("STRING_290196870");
    noLegs_0_0.set(LegPriceUnitOfMeasure_117);
    InstrumentLeg_117.insert(LegPriceUnitOfMeasure_117.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_117;
    LegPriceUnitOfMeasureQty_117.setString("17668680");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_117);
    InstrumentLeg_117.insert(LegPriceUnitOfMeasureQty_117.getString());
    FIX::LegProduct LegProduct_117(1717967811);
    noLegs_0_0.set(LegProduct_117);
    InstrumentLeg_117.insert(LegProduct_117.getString());
    FIX::LegPutOrCall LegPutOrCall_117(1302773715);
    noLegs_0_0.set(LegPutOrCall_117);
    InstrumentLeg_117.insert(LegPutOrCall_117.getString());
    FIX::LegRatioQty LegRatioQty_117;
    LegRatioQty_117.setString("1776656");
    noLegs_0_0.set(LegRatioQty_117);
    InstrumentLeg_117.insert(LegRatioQty_117.getString());
    FIX::LegRedemptionDate LegRedemptionDate_117("LOCALMKTDATE_1542051405");
    noLegs_0_0.set(LegRedemptionDate_117);
    InstrumentLeg_117.insert(LegRedemptionDate_117.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_117("STRING_1326660890");
    noLegs_0_0.set(LegRepoCollateralSecurityType_117);
    InstrumentLeg_117.insert(LegRepoCollateralSecurityType_117.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_117;
    LegRepurchaseRate_117.setString("6.510000");
    noLegs_0_0.set(LegRepurchaseRate_117);
    InstrumentLeg_117.insert(LegRepurchaseRate_117.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_117(320551601);
    noLegs_0_0.set(LegRepurchaseTerm_117);
    InstrumentLeg_117.insert(LegRepurchaseTerm_117.getString());
    FIX::LegSecurityDesc LegSecurityDesc_117("STRING_806849792");
    noLegs_0_0.set(LegSecurityDesc_117);
    InstrumentLeg_117.insert(LegSecurityDesc_117.getString());
    FIX::LegSecurityExchange LegSecurityExchange_117("EXCHANGE_752623737");
    noLegs_0_0.set(LegSecurityExchange_117);
    InstrumentLeg_117.insert(LegSecurityExchange_117.getString());
    FIX::LegSecurityID LegSecurityID_117("STRING_410418227");
    noLegs_0_0.set(LegSecurityID_117);
    InstrumentLeg_117.insert(LegSecurityID_117.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_117("STRING_501008153");
    noLegs_0_0.set(LegSecurityIDSource_117);
    InstrumentLeg_117.insert(LegSecurityIDSource_117.getString());
    FIX::LegSecuritySubType LegSecuritySubType_117("STRING_1076342072");
    noLegs_0_0.set(LegSecuritySubType_117);
    InstrumentLeg_117.insert(LegSecuritySubType_117.getString());
    FIX::LegSecurityType LegSecurityType_117("STRING_1801923702");
    noLegs_0_0.set(LegSecurityType_117);
    InstrumentLeg_117.insert(LegSecurityType_117.getString());
    FIX::LegSide LegSide_117('4');
    noLegs_0_0.set(LegSide_117);
    InstrumentLeg_117.insert(LegSide_117.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_117("STRING_211088850");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_117);
    InstrumentLeg_117.insert(LegStateOrProvinceOfIssue_117.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_117("CHF");
    noLegs_0_0.set(LegStrikeCurrency_117);
    InstrumentLeg_117.insert(LegStrikeCurrency_117.getString());
    FIX::LegStrikePrice LegStrikePrice_117;
    LegStrikePrice_117.setString("17093900");
    noLegs_0_0.set(LegStrikePrice_117);
    InstrumentLeg_117.insert(LegStrikePrice_117.getString());
    FIX::LegSymbol LegSymbol_117("STRING_1080270388");
    noLegs_0_0.set(LegSymbol_117);
    InstrumentLeg_117.insert(LegSymbol_117.getString());
    FIX::LegSymbolSfx LegSymbolSfx_117("STRING_80191681");
    noLegs_0_0.set(LegSymbolSfx_117);
    InstrumentLeg_117.insert(LegSymbolSfx_117.getString());
    FIX::LegTimeUnit LegTimeUnit_117("STRING_1558515561");
    noLegs_0_0.set(LegTimeUnit_117);
    InstrumentLeg_117.insert(LegTimeUnit_117.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_117("STRING_1929912947");
    noLegs_0_0.set(LegUnitOfMeasure_117);
    InstrumentLeg_117.insert(LegUnitOfMeasure_117.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_117;
    LegUnitOfMeasureQty_117.setString("3252583");
    noLegs_0_0.set(LegUnitOfMeasureQty_117);
    InstrumentLeg_117.insert(LegUnitOfMeasureQty_117.getString());
    all_values.push_back(InstrumentLeg_117);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_237;
      FIX::LegSecurityAltID LegSecurityAltID_237("STRING_905613019");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_237);
      LegSecAltIDGrp_NoLegSecurityAltID_237.insert(LegSecurityAltID_237.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_237("STRING_307584436");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_237);
      LegSecAltIDGrp_NoLegSecurityAltID_237.insert(LegSecurityAltIDSource_237.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_237);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_74;
  FIX::AttachmentPoint AttachmentPoint_74;
  AttachmentPoint_74.setString("29.140000");
  msg.set(AttachmentPoint_74);
  Instrument_74.insert(AttachmentPoint_74.getString());
  FIX::CFICode CFICode_74("STRING_1970917976");
  msg.set(CFICode_74);
  Instrument_74.insert(CFICode_74.getString());
  FIX::CPProgram CPProgram_74(99);
  msg.set(CPProgram_74);
  Instrument_74.insert(CPProgram_74.getString());
  FIX::CPRegType CPRegType_74("STRING_276506136");
  msg.set(CPRegType_74);
  Instrument_74.insert(CPRegType_74.getString());
  FIX::CapPrice CapPrice_74;
  CapPrice_74.setString("15903024");
  msg.set(CapPrice_74);
  Instrument_74.insert(CapPrice_74.getString());
  FIX::ContractMultiplier ContractMultiplier_74;
  ContractMultiplier_74.setString("12279408");
  msg.set(ContractMultiplier_74);
  Instrument_74.insert(ContractMultiplier_74.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_74(0);
  msg.set(ContractMultiplierUnit_74);
  Instrument_74.insert(ContractMultiplierUnit_74.getString());
  FIX::ContractSettlMonth ContractSettlMonth_74("MONTHYEAR_1767968057");
  msg.set(ContractSettlMonth_74);
  Instrument_74.insert(ContractSettlMonth_74.getString());
  FIX::CountryOfIssue CountryOfIssue_74("COUNTRY_622508596");
  msg.set(CountryOfIssue_74);
  Instrument_74.insert(CountryOfIssue_74.getString());
  FIX::CouponPaymentDate CouponPaymentDate_74("LOCALMKTDATE_758457093");
  msg.set(CouponPaymentDate_74);
  Instrument_74.insert(CouponPaymentDate_74.getString());
  FIX::CouponRate CouponRate_74;
  CouponRate_74.setString("50.600000");
  msg.set(CouponRate_74);
  Instrument_74.insert(CouponRate_74.getString());
  FIX::CreditRating CreditRating_74("STRING_943060198");
  msg.set(CreditRating_74);
  Instrument_74.insert(CreditRating_74.getString());
  FIX::DatedDate DatedDate_74("LOCALMKTDATE_1565306885");
  msg.set(DatedDate_74);
  Instrument_74.insert(DatedDate_74.getString());
  FIX::DetachmentPoint DetachmentPoint_74;
  DetachmentPoint_74.setString("87.970000");
  msg.set(DetachmentPoint_74);
  Instrument_74.insert(DetachmentPoint_74.getString());
  FIX::EncodedIssuer EncodedIssuer_74("DATA_1353478425");
  msg.set(EncodedIssuer_74);
  Instrument_74.insert(EncodedIssuer_74.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_74(2066315038);
  msg.set(EncodedIssuerLen_74);
  Instrument_74.insert(EncodedIssuerLen_74.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_74("DATA_794767222");
  msg.set(EncodedSecurityDesc_74);
  Instrument_74.insert(EncodedSecurityDesc_74.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_74(1007918480);
  msg.set(EncodedSecurityDescLen_74);
  Instrument_74.insert(EncodedSecurityDescLen_74.getString());
  FIX::ExerciseStyle ExerciseStyle_74(2);
  msg.set(ExerciseStyle_74);
  Instrument_74.insert(ExerciseStyle_74.getString());
  FIX::Factor Factor_74;
  Factor_74.setString("10058560");
  msg.set(Factor_74);
  Instrument_74.insert(Factor_74.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_74(true);
  msg.set(FlexProductEligibilityIndicator_74);
  Instrument_74.insert(FlexProductEligibilityIndicator_74.getString());
  FIX::FlexibleIndicator FlexibleIndicator_74(false);
  msg.set(FlexibleIndicator_74);
  Instrument_74.insert(FlexibleIndicator_74.getString());
  FIX::FloorPrice FloorPrice_74;
  FloorPrice_74.setString("5677624");
  msg.set(FloorPrice_74);
  Instrument_74.insert(FloorPrice_74.getString());
  FIX::FlowScheduleType FlowScheduleType_74(0);
  msg.set(FlowScheduleType_74);
  Instrument_74.insert(FlowScheduleType_74.getString());
  FIX::InstrRegistry InstrRegistry_74("STRING_921886632");
  msg.set(InstrRegistry_74);
  Instrument_74.insert(InstrRegistry_74.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_74('2');
  msg.set(InstrmtAssignmentMethod_74);
  Instrument_74.insert(InstrmtAssignmentMethod_74.getString());
  FIX::InterestAccrualDate InterestAccrualDate_74("LOCALMKTDATE_907127939");
  msg.set(InterestAccrualDate_74);
  Instrument_74.insert(InterestAccrualDate_74.getString());
  FIX::IssueDate IssueDate_74("LOCALMKTDATE_1247145017");
  msg.set(IssueDate_74);
  Instrument_74.insert(IssueDate_74.getString());
  FIX::Issuer Issuer_74("STRING_1802401233");
  msg.set(Issuer_74);
  Instrument_74.insert(Issuer_74.getString());
  FIX::ListMethod ListMethod_74(0);
  msg.set(ListMethod_74);
  Instrument_74.insert(ListMethod_74.getString());
  FIX::LocaleOfIssue LocaleOfIssue_74("STRING_1554729453");
  msg.set(LocaleOfIssue_74);
  Instrument_74.insert(LocaleOfIssue_74.getString());
  FIX::MaturityDate MaturityDate_74("LOCALMKTDATE_1788710499");
  msg.set(MaturityDate_74);
  Instrument_74.insert(MaturityDate_74.getString());
  FIX::MaturityMonthYear MaturityMonthYear_74("MONTHYEAR_1636175287");
  msg.set(MaturityMonthYear_74);
  Instrument_74.insert(MaturityMonthYear_74.getString());
  FIX::MaturityTime MaturityTime_74("TZTIMEONLY_1064702482");
  msg.set(MaturityTime_74);
  Instrument_74.insert(MaturityTime_74.getString());
  FIX::MinPriceIncrement MinPriceIncrement_74;
  MinPriceIncrement_74.setString("20652166");
  msg.set(MinPriceIncrement_74);
  Instrument_74.insert(MinPriceIncrement_74.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_74;
  MinPriceIncrementAmount_74.setString("10789940");
  msg.set(MinPriceIncrementAmount_74);
  Instrument_74.insert(MinPriceIncrementAmount_74.getString());
  FIX::NTPositionLimit NTPositionLimit_74(145159673);
  msg.set(NTPositionLimit_74);
  Instrument_74.insert(NTPositionLimit_74.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_74;
  NotionalPercentageOutstanding_74.setString("28.380000");
  msg.set(NotionalPercentageOutstanding_74);
  Instrument_74.insert(NotionalPercentageOutstanding_74.getString());
  FIX::OptAttribute OptAttribute_74('6');
  msg.set(OptAttribute_74);
  Instrument_74.insert(OptAttribute_74.getString());
  FIX::OptPayoutAmount OptPayoutAmount_74;
  OptPayoutAmount_74.setString("7676682");
  msg.set(OptPayoutAmount_74);
  Instrument_74.insert(OptPayoutAmount_74.getString());
  FIX::OptPayoutType OptPayoutType_74(1);
  msg.set(OptPayoutType_74);
  Instrument_74.insert(OptPayoutType_74.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_74;
  OriginalNotionalPercentageOutstanding_74.setString("35.110000");
  msg.set(OriginalNotionalPercentageOutstanding_74);
  Instrument_74.insert(OriginalNotionalPercentageOutstanding_74.getString());
  FIX::Pool Pool_74("STRING_1710728468");
  msg.set(Pool_74);
  Instrument_74.insert(Pool_74.getString());
  FIX::PositionLimit PositionLimit_74(1673293169);
  msg.set(PositionLimit_74);
  Instrument_74.insert(PositionLimit_74.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_74("STRING_STD");
  msg.set(PriceQuoteMethod_74);
  Instrument_74.insert(PriceQuoteMethod_74.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_74("STRING_916723245");
  msg.set(PriceUnitOfMeasure_74);
  Instrument_74.insert(PriceUnitOfMeasure_74.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_74;
  PriceUnitOfMeasureQty_74.setString("15921245");
  msg.set(PriceUnitOfMeasureQty_74);
  Instrument_74.insert(PriceUnitOfMeasureQty_74.getString());
  FIX::Product Product_76(6);
  msg.set(Product_76);
  Instrument_74.insert(Product_76.getString());
  FIX::ProductComplex ProductComplex_74("STRING_1924641725");
  msg.set(ProductComplex_74);
  Instrument_74.insert(ProductComplex_74.getString());
  FIX::PutOrCall PutOrCall_74(0);
  msg.set(PutOrCall_74);
  Instrument_74.insert(PutOrCall_74.getString());
  FIX::RedemptionDate RedemptionDate_74("LOCALMKTDATE_1184328306");
  msg.set(RedemptionDate_74);
  Instrument_74.insert(RedemptionDate_74.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_74("STRING_1969069977");
  msg.set(RepoCollateralSecurityType_74);
  Instrument_74.insert(RepoCollateralSecurityType_74.getString());
  FIX::RepurchaseRate RepurchaseRate_74;
  RepurchaseRate_74.setString("32.450000");
  msg.set(RepurchaseRate_74);
  Instrument_74.insert(RepurchaseRate_74.getString());
  FIX::RepurchaseTerm RepurchaseTerm_74(1752090773);
  msg.set(RepurchaseTerm_74);
  Instrument_74.insert(RepurchaseTerm_74.getString());
  FIX::RestructuringType RestructuringType_74("STRING_MM");
  msg.set(RestructuringType_74);
  Instrument_74.insert(RestructuringType_74.getString());
  FIX::SecurityDesc SecurityDesc_74("STRING_1608849877");
  msg.set(SecurityDesc_74);
  Instrument_74.insert(SecurityDesc_74.getString());
  FIX::SecurityExchange SecurityExchange_74("EXCHANGE_1730885152");
  msg.set(SecurityExchange_74);
  Instrument_74.insert(SecurityExchange_74.getString());
  FIX::SecurityGroup SecurityGroup_74("STRING_1853412909");
  msg.set(SecurityGroup_74);
  Instrument_74.insert(SecurityGroup_74.getString());
  FIX::SecurityID SecurityID_74("STRING_708511246");
  msg.set(SecurityID_74);
  Instrument_74.insert(SecurityID_74.getString());
  FIX::SecurityIDSource SecurityIDSource_74("STRING_C");
  msg.set(SecurityIDSource_74);
  Instrument_74.insert(SecurityIDSource_74.getString());
  FIX::SecurityStatus SecurityStatus_74("STRING_1");
  msg.set(SecurityStatus_74);
  Instrument_74.insert(SecurityStatus_74.getString());
  FIX::SecuritySubType SecuritySubType_75("STRING_115757052");
  msg.set(SecuritySubType_75);
  Instrument_74.insert(SecuritySubType_75.getString());
  FIX::SecurityType SecurityType_76("STRING_EUCP");
  msg.set(SecurityType_76);
  Instrument_74.insert(SecurityType_76.getString());
  FIX::Seniority Seniority_74("STRING_SR");
  msg.set(Seniority_74);
  Instrument_74.insert(Seniority_74.getString());
  FIX::SettlMethod SettlMethod_74('C');
  msg.set(SettlMethod_74);
  Instrument_74.insert(SettlMethod_74.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_74("STRING_944762575");
  msg.set(SettleOnOpenFlag_74);
  Instrument_74.insert(SettleOnOpenFlag_74.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_74("STRING_2086355900");
  msg.set(StateOrProvinceOfIssue_74);
  Instrument_74.insert(StateOrProvinceOfIssue_74.getString());
  FIX::StrikeCurrency StrikeCurrency_74("JPY");
  msg.set(StrikeCurrency_74);
  Instrument_74.insert(StrikeCurrency_74.getString());
  FIX::StrikeMultiplier StrikeMultiplier_74;
  StrikeMultiplier_74.setString("6383507");
  msg.set(StrikeMultiplier_74);
  Instrument_74.insert(StrikeMultiplier_74.getString());
  FIX::StrikePrice StrikePrice_74;
  StrikePrice_74.setString("20932874");
  msg.set(StrikePrice_74);
  Instrument_74.insert(StrikePrice_74.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_74(1);
  msg.set(StrikePriceBoundaryMethod_74);
  Instrument_74.insert(StrikePriceBoundaryMethod_74.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_74;
  StrikePriceBoundaryPrecision_74.setString("5.660000");
  msg.set(StrikePriceBoundaryPrecision_74);
  Instrument_74.insert(StrikePriceBoundaryPrecision_74.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_74(2);
  msg.set(StrikePriceDeterminationMethod_74);
  Instrument_74.insert(StrikePriceDeterminationMethod_74.getString());
  FIX::StrikeValue StrikeValue_74;
  StrikeValue_74.setString("20755712");
  msg.set(StrikeValue_74);
  Instrument_74.insert(StrikeValue_74.getString());
  FIX::Symbol Symbol_74("STRING_1834819226");
  msg.set(Symbol_74);
  Instrument_74.insert(Symbol_74.getString());
  FIX::SymbolSfx SymbolSfx_74("STRING_WI");
  msg.set(SymbolSfx_74);
  Instrument_74.insert(SymbolSfx_74.getString());
  FIX::TimeUnit TimeUnit_74("STRING_Wk");
  msg.set(TimeUnit_74);
  Instrument_74.insert(TimeUnit_74.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_74(2);
  msg.set(UnderlyingPriceDeterminationMethod_74);
  Instrument_74.insert(UnderlyingPriceDeterminationMethod_74.getString());
  FIX::UnitOfMeasure UnitOfMeasure_74("STRING_USD");
  msg.set(UnitOfMeasure_74);
  Instrument_74.insert(UnitOfMeasure_74.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_74;
  UnitOfMeasureQty_74.setString("13654804");
  msg.set(UnitOfMeasureQty_74);
  Instrument_74.insert(UnitOfMeasureQty_74.getString());
  FIX::ValuationMethod ValuationMethod_74("STRING_CDSD");
  msg.set(ValuationMethod_74);
  Instrument_74.insert(ValuationMethod_74.getString());
  all_values.push_back(Instrument_74);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_155;
    FIX::ComplexEventCondition ComplexEventCondition_155(1);
    noComplexEvents_0_0.set(ComplexEventCondition_155);
    ComplexEvents_NoComplexEvents_155.insert(ComplexEventCondition_155.getString());
    FIX::ComplexEventPrice ComplexEventPrice_155;
    ComplexEventPrice_155.setString("6547432");
    noComplexEvents_0_0.set(ComplexEventPrice_155);
    ComplexEvents_NoComplexEvents_155.insert(ComplexEventPrice_155.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_155(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_155);
    ComplexEvents_NoComplexEvents_155.insert(ComplexEventPriceBoundaryMethod_155.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_155;
    ComplexEventPriceBoundaryPrecision_155.setString("99.000000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_155);
    ComplexEvents_NoComplexEvents_155.insert(ComplexEventPriceBoundaryPrecision_155.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_155(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_155);
    ComplexEvents_NoComplexEvents_155.insert(ComplexEventPriceTimeType_155.getString());
    FIX::ComplexEventType ComplexEventType_155(5);
    noComplexEvents_0_0.set(ComplexEventType_155);
    ComplexEvents_NoComplexEvents_155.insert(ComplexEventType_155.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_155;
    ComplexOptPayoutAmount_155.setString("748374");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_155);
    ComplexEvents_NoComplexEvents_155.insert(ComplexOptPayoutAmount_155.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_155);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_315;
      FIX::ComplexEventEndDate ComplexEventEndDate_315(FIX::UTCTIMESTAMP(14, 7, 44, 8, 3, 2003));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_315);
      ComplexEventDates_NoComplexEventDates_315.insert(ComplexEventEndDate_315.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_315(FIX::UTCTIMESTAMP(0, 20, 13, 2, 11, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_315);
      ComplexEventDates_NoComplexEventDates_315.insert(ComplexEventStartDate_315.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_315);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_640;
        FIX::ComplexEventEndTime ComplexEventEndTime_640(FIX::UTCTIMEONLY(10, 13, 37));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_640);
        ComplexEventTimes_NoComplexEventTimes_640.insert(ComplexEventEndTime_640.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_640(FIX::UTCTIMEONLY(11, 9, 12));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_640);
        ComplexEventTimes_NoComplexEventTimes_640.insert(ComplexEventStartTime_640.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_640);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_316;
      FIX::ComplexEventEndDate ComplexEventEndDate_316(FIX::UTCTIMESTAMP(9, 24, 33, 26, 7, 2016));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_316);
      ComplexEventDates_NoComplexEventDates_316.insert(ComplexEventEndDate_316.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_316(FIX::UTCTIMESTAMP(19, 54, 8, 16, 8, 2002));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_316);
      ComplexEventDates_NoComplexEventDates_316.insert(ComplexEventStartDate_316.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_316);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_641;
        FIX::ComplexEventEndTime ComplexEventEndTime_641(FIX::UTCTIMEONLY(19, 49, 8));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_641);
        ComplexEventTimes_NoComplexEventTimes_641.insert(ComplexEventEndTime_641.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_641(FIX::UTCTIMEONLY(15, 51, 55));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_641);
        ComplexEventTimes_NoComplexEventTimes_641.insert(ComplexEventStartTime_641.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_641);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_642;
        FIX::ComplexEventEndTime ComplexEventEndTime_642(FIX::UTCTIMEONLY(13, 9, 53));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_642);
        ComplexEventTimes_NoComplexEventTimes_642.insert(ComplexEventEndTime_642.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_642(FIX::UTCTIMEONLY(0, 2, 4));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_642);
        ComplexEventTimes_NoComplexEventTimes_642.insert(ComplexEventStartTime_642.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_642);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_643;
        FIX::ComplexEventEndTime ComplexEventEndTime_643(FIX::UTCTIMEONLY(11, 29, 11));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_643);
        ComplexEventTimes_NoComplexEventTimes_643.insert(ComplexEventEndTime_643.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_643(FIX::UTCTIMEONLY(23, 15, 11));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_643);
        ComplexEventTimes_NoComplexEventTimes_643.insert(ComplexEventStartTime_643.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_643);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_317;
      FIX::ComplexEventEndDate ComplexEventEndDate_317(FIX::UTCTIMESTAMP(21, 11, 26, 0, 2, 2007));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_317);
      ComplexEventDates_NoComplexEventDates_317.insert(ComplexEventEndDate_317.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_317(FIX::UTCTIMESTAMP(20, 36, 24, 18, 8, 2003));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_317);
      ComplexEventDates_NoComplexEventDates_317.insert(ComplexEventStartDate_317.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_317);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_644;
        FIX::ComplexEventEndTime ComplexEventEndTime_644(FIX::UTCTIMEONLY(17, 26, 12));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_644);
        ComplexEventTimes_NoComplexEventTimes_644.insert(ComplexEventEndTime_644.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_644(FIX::UTCTIMEONLY(2, 6, 1));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_644);
        ComplexEventTimes_NoComplexEventTimes_644.insert(ComplexEventStartTime_644.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_644);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_645;
        FIX::ComplexEventEndTime ComplexEventEndTime_645(FIX::UTCTIMEONLY(5, 22, 27));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_645);
        ComplexEventTimes_NoComplexEventTimes_645.insert(ComplexEventEndTime_645.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_645(FIX::UTCTIMEONLY(1, 42, 46));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_645);
        ComplexEventTimes_NoComplexEventTimes_645.insert(ComplexEventStartTime_645.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_645);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_156;
    FIX::ComplexEventCondition ComplexEventCondition_156(1);
    noComplexEvents_0_1.set(ComplexEventCondition_156);
    ComplexEvents_NoComplexEvents_156.insert(ComplexEventCondition_156.getString());
    FIX::ComplexEventPrice ComplexEventPrice_156;
    ComplexEventPrice_156.setString("15270947");
    noComplexEvents_0_1.set(ComplexEventPrice_156);
    ComplexEvents_NoComplexEvents_156.insert(ComplexEventPrice_156.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_156(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_156);
    ComplexEvents_NoComplexEvents_156.insert(ComplexEventPriceBoundaryMethod_156.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_156;
    ComplexEventPriceBoundaryPrecision_156.setString("23.660000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_156);
    ComplexEvents_NoComplexEvents_156.insert(ComplexEventPriceBoundaryPrecision_156.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_156(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_156);
    ComplexEvents_NoComplexEvents_156.insert(ComplexEventPriceTimeType_156.getString());
    FIX::ComplexEventType ComplexEventType_156(1);
    noComplexEvents_0_1.set(ComplexEventType_156);
    ComplexEvents_NoComplexEvents_156.insert(ComplexEventType_156.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_156;
    ComplexOptPayoutAmount_156.setString("7807445");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_156);
    ComplexEvents_NoComplexEvents_156.insert(ComplexOptPayoutAmount_156.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_156);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_318;
      FIX::ComplexEventEndDate ComplexEventEndDate_318(FIX::UTCTIMESTAMP(14, 43, 21, 2, 12, 2003));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_318);
      ComplexEventDates_NoComplexEventDates_318.insert(ComplexEventEndDate_318.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_318(FIX::UTCTIMESTAMP(20, 5, 1, 1, 1, 2013));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_318);
      ComplexEventDates_NoComplexEventDates_318.insert(ComplexEventStartDate_318.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_318);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_646;
        FIX::ComplexEventEndTime ComplexEventEndTime_646(FIX::UTCTIMEONLY(4, 1, 19));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_646);
        ComplexEventTimes_NoComplexEventTimes_646.insert(ComplexEventEndTime_646.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_646(FIX::UTCTIMEONLY(2, 1, 10));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_646);
        ComplexEventTimes_NoComplexEventTimes_646.insert(ComplexEventStartTime_646.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_646);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_647;
        FIX::ComplexEventEndTime ComplexEventEndTime_647(FIX::UTCTIMEONLY(8, 0, 33));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_647);
        ComplexEventTimes_NoComplexEventTimes_647.insert(ComplexEventEndTime_647.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_647(FIX::UTCTIMEONLY(15, 39, 8));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_647);
        ComplexEventTimes_NoComplexEventTimes_647.insert(ComplexEventStartTime_647.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_647);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_157;
    FIX::ComplexEventCondition ComplexEventCondition_157(1);
    noComplexEvents_0_2.set(ComplexEventCondition_157);
    ComplexEvents_NoComplexEvents_157.insert(ComplexEventCondition_157.getString());
    FIX::ComplexEventPrice ComplexEventPrice_157;
    ComplexEventPrice_157.setString("17130261");
    noComplexEvents_0_2.set(ComplexEventPrice_157);
    ComplexEvents_NoComplexEvents_157.insert(ComplexEventPrice_157.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_157(2);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_157);
    ComplexEvents_NoComplexEvents_157.insert(ComplexEventPriceBoundaryMethod_157.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_157;
    ComplexEventPriceBoundaryPrecision_157.setString("1.360000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_157);
    ComplexEvents_NoComplexEvents_157.insert(ComplexEventPriceBoundaryPrecision_157.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_157(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_157);
    ComplexEvents_NoComplexEvents_157.insert(ComplexEventPriceTimeType_157.getString());
    FIX::ComplexEventType ComplexEventType_157(4);
    noComplexEvents_0_2.set(ComplexEventType_157);
    ComplexEvents_NoComplexEvents_157.insert(ComplexEventType_157.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_157;
    ComplexOptPayoutAmount_157.setString("3736604");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_157);
    ComplexEvents_NoComplexEvents_157.insert(ComplexOptPayoutAmount_157.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_157);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_319;
      FIX::ComplexEventEndDate ComplexEventEndDate_319(FIX::UTCTIMESTAMP(8, 57, 23, 16, 5, 2002));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_319);
      ComplexEventDates_NoComplexEventDates_319.insert(ComplexEventEndDate_319.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_319(FIX::UTCTIMESTAMP(21, 55, 23, 1, 10, 2016));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_319);
      ComplexEventDates_NoComplexEventDates_319.insert(ComplexEventStartDate_319.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_319);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_648;
        FIX::ComplexEventEndTime ComplexEventEndTime_648(FIX::UTCTIMEONLY(13, 11, 41));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_648);
        ComplexEventTimes_NoComplexEventTimes_648.insert(ComplexEventEndTime_648.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_648(FIX::UTCTIMEONLY(18, 20, 49));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_648);
        ComplexEventTimes_NoComplexEventTimes_648.insert(ComplexEventStartTime_648.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_648);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_649;
        FIX::ComplexEventEndTime ComplexEventEndTime_649(FIX::UTCTIMEONLY(17, 41, 9));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_649);
        ComplexEventTimes_NoComplexEventTimes_649.insert(ComplexEventEndTime_649.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_649(FIX::UTCTIMEONLY(23, 56, 45));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_649);
        ComplexEventTimes_NoComplexEventTimes_649.insert(ComplexEventStartTime_649.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_649);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_650;
        FIX::ComplexEventEndTime ComplexEventEndTime_650(FIX::UTCTIMEONLY(16, 35, 9));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_650);
        ComplexEventTimes_NoComplexEventTimes_650.insert(ComplexEventEndTime_650.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_650(FIX::UTCTIMEONLY(15, 3, 57));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_650);
        ComplexEventTimes_NoComplexEventTimes_650.insert(ComplexEventStartTime_650.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_650);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_320;
      FIX::ComplexEventEndDate ComplexEventEndDate_320(FIX::UTCTIMESTAMP(10, 21, 17, 12, 6, 2009));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_320);
      ComplexEventDates_NoComplexEventDates_320.insert(ComplexEventEndDate_320.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_320(FIX::UTCTIMESTAMP(10, 24, 49, 4, 8, 2003));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_320);
      ComplexEventDates_NoComplexEventDates_320.insert(ComplexEventStartDate_320.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_320);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_651;
        FIX::ComplexEventEndTime ComplexEventEndTime_651(FIX::UTCTIMEONLY(14, 26, 41));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_651);
        ComplexEventTimes_NoComplexEventTimes_651.insert(ComplexEventEndTime_651.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_651(FIX::UTCTIMEONLY(18, 29, 9));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_651);
        ComplexEventTimes_NoComplexEventTimes_651.insert(ComplexEventStartTime_651.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_651);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_652;
        FIX::ComplexEventEndTime ComplexEventEndTime_652(FIX::UTCTIMEONLY(9, 36, 37));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_652);
        ComplexEventTimes_NoComplexEventTimes_652.insert(ComplexEventEndTime_652.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_652(FIX::UTCTIMEONLY(3, 33, 0));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_652);
        ComplexEventTimes_NoComplexEventTimes_652.insert(ComplexEventStartTime_652.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_652);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_653;
        FIX::ComplexEventEndTime ComplexEventEndTime_653(FIX::UTCTIMEONLY(19, 13, 33));
        noComplexEventTimes_2_1_2_2.set(ComplexEventEndTime_653);
        ComplexEventTimes_NoComplexEventTimes_653.insert(ComplexEventEndTime_653.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_653(FIX::UTCTIMEONLY(6, 54, 39));
        noComplexEventTimes_2_1_2_2.set(ComplexEventStartTime_653);
        ComplexEventTimes_NoComplexEventTimes_653.insert(ComplexEventStartTime_653.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_653);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_321;
      FIX::ComplexEventEndDate ComplexEventEndDate_321(FIX::UTCTIMESTAMP(19, 20, 9, 18, 6, 2000));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_321);
      ComplexEventDates_NoComplexEventDates_321.insert(ComplexEventEndDate_321.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_321(FIX::UTCTIMESTAMP(0, 13, 39, 23, 12, 2014));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_321);
      ComplexEventDates_NoComplexEventDates_321.insert(ComplexEventStartDate_321.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_321);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_654;
        FIX::ComplexEventEndTime ComplexEventEndTime_654(FIX::UTCTIMEONLY(17, 12, 44));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_654);
        ComplexEventTimes_NoComplexEventTimes_654.insert(ComplexEventEndTime_654.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_654(FIX::UTCTIMEONLY(20, 17, 12));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_654);
        ComplexEventTimes_NoComplexEventTimes_654.insert(ComplexEventStartTime_654.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_654);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::QuoteStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_150;
    FIX::EventDate EventDate_150("LOCALMKTDATE_401851181");
    noEvents_0_0.set(EventDate_150);
    EvntGrp_NoEvents_150.insert(EventDate_150.getString());
    FIX::EventPx EventPx_150;
    EventPx_150.setString("3421609");
    noEvents_0_0.set(EventPx_150);
    EvntGrp_NoEvents_150.insert(EventPx_150.getString());
    FIX::EventText EventText_150("STRING_2137648457");
    noEvents_0_0.set(EventText_150);
    EvntGrp_NoEvents_150.insert(EventText_150.getString());
    FIX::EventTime EventTime_150(FIX::UTCTIMESTAMP(11, 4, 44, 16, 4, 2004));
    noEvents_0_0.set(EventTime_150);
    EvntGrp_NoEvents_150.insert(EventTime_150.getString());
    FIX::EventType EventType_150(6);
    noEvents_0_0.set(EventType_150);
    EvntGrp_NoEvents_150.insert(EventType_150.getString());
    all_values.push_back(EvntGrp_NoEvents_150);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_151;
    FIX::EventDate EventDate_151("LOCALMKTDATE_2069606157");
    noEvents_0_1.set(EventDate_151);
    EvntGrp_NoEvents_151.insert(EventDate_151.getString());
    FIX::EventPx EventPx_151;
    EventPx_151.setString("16542298");
    noEvents_0_1.set(EventPx_151);
    EvntGrp_NoEvents_151.insert(EventPx_151.getString());
    FIX::EventText EventText_151("STRING_1464310132");
    noEvents_0_1.set(EventText_151);
    EvntGrp_NoEvents_151.insert(EventText_151.getString());
    FIX::EventTime EventTime_151(FIX::UTCTIMESTAMP(6, 57, 34, 25, 9, 2010));
    noEvents_0_1.set(EventTime_151);
    EvntGrp_NoEvents_151.insert(EventTime_151.getString());
    FIX::EventType EventType_151(15);
    noEvents_0_1.set(EventType_151);
    EvntGrp_NoEvents_151.insert(EventType_151.getString());
    all_values.push_back(EvntGrp_NoEvents_151);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_152;
    FIX::EventDate EventDate_152("LOCALMKTDATE_599586531");
    noEvents_0_2.set(EventDate_152);
    EvntGrp_NoEvents_152.insert(EventDate_152.getString());
    FIX::EventPx EventPx_152;
    EventPx_152.setString("19180669");
    noEvents_0_2.set(EventPx_152);
    EvntGrp_NoEvents_152.insert(EventPx_152.getString());
    FIX::EventText EventText_152("STRING_1440299738");
    noEvents_0_2.set(EventText_152);
    EvntGrp_NoEvents_152.insert(EventText_152.getString());
    FIX::EventTime EventTime_152(FIX::UTCTIMESTAMP(7, 50, 45, 27, 3, 2002));
    noEvents_0_2.set(EventTime_152);
    EvntGrp_NoEvents_152.insert(EventTime_152.getString());
    FIX::EventType EventType_152(17);
    noEvents_0_2.set(EventType_152);
    EvntGrp_NoEvents_152.insert(EventType_152.getString());
    all_values.push_back(EvntGrp_NoEvents_152);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_154;
    FIX::InstrumentPartyID InstrumentPartyID_154("STRING_1303119030");
    noInstrumentParties_0_0.set(InstrumentPartyID_154);
    InstrumentParties_NoInstrumentParties_154.insert(InstrumentPartyID_154.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_154('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_154);
    InstrumentParties_NoInstrumentParties_154.insert(InstrumentPartyIDSource_154.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_154(1572012460);
    noInstrumentParties_0_0.set(InstrumentPartyRole_154);
    InstrumentParties_NoInstrumentParties_154.insert(InstrumentPartyRole_154.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_154);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300;
      FIX::InstrumentPartySubID InstrumentPartySubID_300("STRING_1719213792");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_300);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300.insert(InstrumentPartySubID_300.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_300(355146527);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_300);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300.insert(InstrumentPartySubIDType_300.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_137;
    FIX::SecurityAltID SecurityAltID_137("STRING_1527766870");
    noSecurityAltID_0_0.set(SecurityAltID_137);
    SecAltIDGrp_NoSecurityAltID_137.insert(SecurityAltID_137.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_137("STRING_277269036");
    noSecurityAltID_0_0.set(SecurityAltIDSource_137);
    SecAltIDGrp_NoSecurityAltID_137.insert(SecurityAltIDSource_137.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_137);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_148;
  FIX::SecurityXML SecurityXML_149("XMLDATA_78095361");
  msg.set(SecurityXML_149);
  FIX::SecurityXMLLen SecurityXMLLen_74(844593354);
  msg.set(SecurityXMLLen_74);
  FIX::SecurityXMLSchema SecurityXMLSchema_74("STRING_1097645311");
  msg.set(SecurityXMLSchema_74);
  SecurityXML_148.insert(SecurityXMLSchema_74.getString());
  all_values.push_back(SecurityXML_148);
  all_compo_names.insert("SecurityXML");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_117;
    FIX::PartyID PartyID_117("STRING_1406559831");
    noPartyIDs_0_0.set(PartyID_117);
    Parties_NoPartyIDs_117.insert(PartyID_117.getString());
    FIX::PartyIDSource PartyIDSource_117('F');
    noPartyIDs_0_0.set(PartyIDSource_117);
    Parties_NoPartyIDs_117.insert(PartyIDSource_117.getString());
    FIX::PartyRole PartyRole_117(30);
    noPartyIDs_0_0.set(PartyRole_117);
    Parties_NoPartyIDs_117.insert(PartyRole_117.getString());
    all_values.push_back(Parties_NoPartyIDs_117);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_258;
      FIX::PartySubID PartySubID_258("STRING_627001531");
      noPartySubIDs_0_1_0.set(PartySubID_258);
      PtysSubGrp_NoPartySubIDs_258.insert(PartySubID_258.getString());
      FIX::PartySubIDType PartySubIDType_258(31);
      noPartySubIDs_0_1_0.set(PartySubIDType_258);
      PtysSubGrp_NoPartySubIDs_258.insert(PartySubIDType_258.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_258);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_19;
    FIX::TargetPartyID TargetPartyID_19("STRING_397584854");
    noTargetPartyIDs_0_0.set(TargetPartyID_19);
    TargetParties_NoTargetPartyIDs_19.insert(TargetPartyID_19.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_19('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_19);
    TargetParties_NoTargetPartyIDs_19.insert(TargetPartyIDSource_19.getString());
    FIX::TargetPartyRole TargetPartyRole_19(693754125);
    noTargetPartyIDs_0_0.set(TargetPartyRole_19);
    TargetParties_NoTargetPartyIDs_19.insert(TargetPartyRole_19.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_19);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_112;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_112("DATA_2063243735");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_112);
    UnderlyingInstrument_112.insert(EncodedUnderlyingIssuer_112.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_112(1597069770);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_112);
    UnderlyingInstrument_112.insert(EncodedUnderlyingIssuerLen_112.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_112("DATA_805522329");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_112);
    UnderlyingInstrument_112.insert(EncodedUnderlyingSecurityDesc_112.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_112(409380594);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_112);
    UnderlyingInstrument_112.insert(EncodedUnderlyingSecurityDescLen_112.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_112;
    UnderlyingAdjustedQuantity_112.setString("7547529");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_112);
    UnderlyingInstrument_112.insert(UnderlyingAdjustedQuantity_112.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_112;
    UnderlyingAllocationPercent_112.setString("25.060000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_112);
    UnderlyingInstrument_112.insert(UnderlyingAllocationPercent_112.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_112;
    UnderlyingAttachmentPoint_112.setString("59.100000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_112);
    UnderlyingInstrument_112.insert(UnderlyingAttachmentPoint_112.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_112("STRING_2057871979");
    noUnderlyings_0_0.set(UnderlyingCFICode_112);
    UnderlyingInstrument_112.insert(UnderlyingCFICode_112.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_112("STRING_674891494");
    noUnderlyings_0_0.set(UnderlyingCPProgram_112);
    UnderlyingInstrument_112.insert(UnderlyingCPProgram_112.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_112("STRING_317694722");
    noUnderlyings_0_0.set(UnderlyingCPRegType_112);
    UnderlyingInstrument_112.insert(UnderlyingCPRegType_112.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_112;
    UnderlyingCapValue_112.setString("7228537");
    noUnderlyings_0_0.set(UnderlyingCapValue_112);
    UnderlyingInstrument_112.insert(UnderlyingCapValue_112.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_112;
    UnderlyingCashAmount_112.setString("2466216");
    noUnderlyings_0_0.set(UnderlyingCashAmount_112);
    UnderlyingInstrument_112.insert(UnderlyingCashAmount_112.getString());
    FIX::UnderlyingCashType UnderlyingCashType_112("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_112);
    UnderlyingInstrument_112.insert(UnderlyingCashType_112.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_112;
    UnderlyingContractMultiplier_112.setString("12942029");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_112);
    UnderlyingInstrument_112.insert(UnderlyingContractMultiplier_112.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_112(1774388508);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_112);
    UnderlyingInstrument_112.insert(UnderlyingContractMultiplierUnit_112.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_112("COUNTRY_950110285");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_112);
    UnderlyingInstrument_112.insert(UnderlyingCountryOfIssue_112.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_112("LOCALMKTDATE_1372298261");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_112);
    UnderlyingInstrument_112.insert(UnderlyingCouponPaymentDate_112.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_112;
    UnderlyingCouponRate_112.setString("82.140000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_112);
    UnderlyingInstrument_112.insert(UnderlyingCouponRate_112.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_112("STRING_2047755596");
    noUnderlyings_0_0.set(UnderlyingCreditRating_112);
    UnderlyingInstrument_112.insert(UnderlyingCreditRating_112.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_112("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_112);
    UnderlyingInstrument_112.insert(UnderlyingCurrency_112.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_112;
    UnderlyingCurrentValue_112.setString("3439465");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_112);
    UnderlyingInstrument_112.insert(UnderlyingCurrentValue_112.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_112;
    UnderlyingDetachmentPoint_112.setString("95.850000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_112);
    UnderlyingInstrument_112.insert(UnderlyingDetachmentPoint_112.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_112;
    UnderlyingDirtyPrice_112.setString("2711741");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_112);
    UnderlyingInstrument_112.insert(UnderlyingDirtyPrice_112.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_112;
    UnderlyingEndPrice_112.setString("9709480");
    noUnderlyings_0_0.set(UnderlyingEndPrice_112);
    UnderlyingInstrument_112.insert(UnderlyingEndPrice_112.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_112;
    UnderlyingEndValue_112.setString("8440521");
    noUnderlyings_0_0.set(UnderlyingEndValue_112);
    UnderlyingInstrument_112.insert(UnderlyingEndValue_112.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_112(1411360382);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_112);
    UnderlyingInstrument_112.insert(UnderlyingExerciseStyle_112.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_112;
    UnderlyingFXRate_112.setString("13685329");
    noUnderlyings_0_0.set(UnderlyingFXRate_112);
    UnderlyingInstrument_112.insert(UnderlyingFXRate_112.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_112('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_112);
    UnderlyingInstrument_112.insert(UnderlyingFXRateCalc_112.getString());
    FIX::UnderlyingFactor UnderlyingFactor_112;
    UnderlyingFactor_112.setString("21051145");
    noUnderlyings_0_0.set(UnderlyingFactor_112);
    UnderlyingInstrument_112.insert(UnderlyingFactor_112.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_112(2116356100);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_112);
    UnderlyingInstrument_112.insert(UnderlyingFlowScheduleType_112.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_112("STRING_103570816");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_112);
    UnderlyingInstrument_112.insert(UnderlyingInstrRegistry_112.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_112("LOCALMKTDATE_1554700630");
    noUnderlyings_0_0.set(UnderlyingIssueDate_112);
    UnderlyingInstrument_112.insert(UnderlyingIssueDate_112.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_112("STRING_774394782");
    noUnderlyings_0_0.set(UnderlyingIssuer_112);
    UnderlyingInstrument_112.insert(UnderlyingIssuer_112.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_112("STRING_512951410");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_112);
    UnderlyingInstrument_112.insert(UnderlyingLocaleOfIssue_112.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_112("LOCALMKTDATE_161969931");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_112);
    UnderlyingInstrument_112.insert(UnderlyingMaturityDate_112.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_112("MONTHYEAR_1979777288");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_112);
    UnderlyingInstrument_112.insert(UnderlyingMaturityMonthYear_112.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_112("TZTIMEONLY_1406117320");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_112);
    UnderlyingInstrument_112.insert(UnderlyingMaturityTime_112.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_112;
    UnderlyingNotionalPercentageOutstanding_112.setString("82.620000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_112);
    UnderlyingInstrument_112.insert(UnderlyingNotionalPercentageOutstanding_112.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_112('5');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_112);
    UnderlyingInstrument_112.insert(UnderlyingOptAttribute_112.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_112;
    UnderlyingOriginalNotionalPercentageOutstanding_112.setString("20.420000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_112);
    UnderlyingInstrument_112.insert(UnderlyingOriginalNotionalPercentageOutstanding_112.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_112("STRING_795211999");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_112);
    UnderlyingInstrument_112.insert(UnderlyingPriceUnitOfMeasure_112.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_112;
    UnderlyingPriceUnitOfMeasureQty_112.setString("7538067");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_112);
    UnderlyingInstrument_112.insert(UnderlyingPriceUnitOfMeasureQty_112.getString());
    FIX::UnderlyingProduct UnderlyingProduct_112(249169643);
    noUnderlyings_0_0.set(UnderlyingProduct_112);
    UnderlyingInstrument_112.insert(UnderlyingProduct_112.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_112(2089414900);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_112);
    UnderlyingInstrument_112.insert(UnderlyingPutOrCall_112.getString());
    FIX::UnderlyingPx UnderlyingPx_112;
    UnderlyingPx_112.setString("3807116");
    noUnderlyings_0_0.set(UnderlyingPx_112);
    UnderlyingInstrument_112.insert(UnderlyingPx_112.getString());
    FIX::UnderlyingQty UnderlyingQty_112;
    UnderlyingQty_112.setString("11992799");
    noUnderlyings_0_0.set(UnderlyingQty_112);
    UnderlyingInstrument_112.insert(UnderlyingQty_112.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_112("LOCALMKTDATE_1314229513");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_112);
    UnderlyingInstrument_112.insert(UnderlyingRedemptionDate_112.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_112("STRING_852209847");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_112);
    UnderlyingInstrument_112.insert(UnderlyingRepoCollateralSecurityType_112.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_112;
    UnderlyingRepurchaseRate_112.setString("18.760000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_112);
    UnderlyingInstrument_112.insert(UnderlyingRepurchaseRate_112.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_112(1990764878);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_112);
    UnderlyingInstrument_112.insert(UnderlyingRepurchaseTerm_112.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_112("STRING_582784245");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_112);
    UnderlyingInstrument_112.insert(UnderlyingRestructuringType_112.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_112("STRING_1443498441");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_112);
    UnderlyingInstrument_112.insert(UnderlyingSecurityDesc_112.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_112("EXCHANGE_636390815");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_112);
    UnderlyingInstrument_112.insert(UnderlyingSecurityExchange_112.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_112("STRING_853958369");
    noUnderlyings_0_0.set(UnderlyingSecurityID_112);
    UnderlyingInstrument_112.insert(UnderlyingSecurityID_112.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_112("STRING_266962889");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_112);
    UnderlyingInstrument_112.insert(UnderlyingSecurityIDSource_112.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_112("STRING_1480442926");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_112);
    UnderlyingInstrument_112.insert(UnderlyingSecuritySubType_112.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_112("STRING_117835104");
    noUnderlyings_0_0.set(UnderlyingSecurityType_112);
    UnderlyingInstrument_112.insert(UnderlyingSecurityType_112.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_112("STRING_1635495839");
    noUnderlyings_0_0.set(UnderlyingSeniority_112);
    UnderlyingInstrument_112.insert(UnderlyingSeniority_112.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_112("STRING_1668253655");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_112);
    UnderlyingInstrument_112.insert(UnderlyingSettlMethod_112.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_112(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_112);
    UnderlyingInstrument_112.insert(UnderlyingSettlementType_112.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_112;
    UnderlyingStartValue_112.setString("16043682");
    noUnderlyings_0_0.set(UnderlyingStartValue_112);
    UnderlyingInstrument_112.insert(UnderlyingStartValue_112.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_112("STRING_1771824471");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_112);
    UnderlyingInstrument_112.insert(UnderlyingStateOrProvinceOfIssue_112.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_112("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_112);
    UnderlyingInstrument_112.insert(UnderlyingStrikeCurrency_112.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_112;
    UnderlyingStrikePrice_112.setString("1372922");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_112);
    UnderlyingInstrument_112.insert(UnderlyingStrikePrice_112.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_112("STRING_1792136525");
    noUnderlyings_0_0.set(UnderlyingSymbol_112);
    UnderlyingInstrument_112.insert(UnderlyingSymbol_112.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_112("STRING_63573066");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_112);
    UnderlyingInstrument_112.insert(UnderlyingSymbolSfx_112.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_112("STRING_1543409553");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_112);
    UnderlyingInstrument_112.insert(UnderlyingTimeUnit_112.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_112("STRING_1864494787");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_112);
    UnderlyingInstrument_112.insert(UnderlyingUnitOfMeasure_112.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_112;
    UnderlyingUnitOfMeasureQty_112.setString("5707582");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_112);
    UnderlyingInstrument_112.insert(UnderlyingUnitOfMeasureQty_112.getString());
    all_values.push_back(UnderlyingInstrument_112);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_219;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_219("STRING_512223139");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_219);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_219.insert(UnderlyingSecurityAltID_219.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_219("STRING_1324564972");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_219);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_219.insert(UnderlyingSecurityAltIDSource_219.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_219);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_220;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_220("STRING_1368907590");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_220);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_220.insert(UnderlyingSecurityAltID_220.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_220("STRING_454154391");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_220);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_220.insert(UnderlyingSecurityAltIDSource_220.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_220);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_223;
      FIX::UnderlyingStipType UnderlyingStipType_223("STRING_420703870");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_223);
      UnderlyingStipulations_NoUnderlyingStips_223.insert(UnderlyingStipType_223.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_223("STRING_1768383904");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_223);
      UnderlyingStipulations_NoUnderlyingStips_223.insert(UnderlyingStipValue_223.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_223);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_216;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_216("STRING_1520255746");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_216);
      UndlyInstrumentParties_NoUndlyInstrumentParties_216.insert(UnderlyingInstrumentPartyID_216.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_216('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_216);
      UndlyInstrumentParties_NoUndlyInstrumentParties_216.insert(UnderlyingInstrumentPartyIDSource_216.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_216(992787050);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_216);
      UndlyInstrumentParties_NoUndlyInstrumentParties_216.insert(UnderlyingInstrumentPartyRole_216.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_216);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_432("STRING_100572301");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_432);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432.insert(UnderlyingInstrumentPartySubID_432.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_432(1846745419);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_432);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432.insert(UnderlyingInstrumentPartySubIDType_432.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_433("STRING_1083233428");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_433);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433.insert(UnderlyingInstrumentPartySubID_433.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_433(1581015228);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_433);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433.insert(UnderlyingInstrumentPartySubIDType_433.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_434("STRING_1964580523");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_434);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434.insert(UnderlyingInstrumentPartySubID_434.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_434(571245619);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_434);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434.insert(UnderlyingInstrumentPartySubIDType_434.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_217;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_217("STRING_1101785235");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_217);
      UndlyInstrumentParties_NoUndlyInstrumentParties_217.insert(UnderlyingInstrumentPartyID_217.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_217('2');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_217);
      UndlyInstrumentParties_NoUndlyInstrumentParties_217.insert(UnderlyingInstrumentPartyIDSource_217.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_217(28130263);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_217);
      UndlyInstrumentParties_NoUndlyInstrumentParties_217.insert(UnderlyingInstrumentPartyRole_217.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_217);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_435("STRING_1522729434");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_435);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435.insert(UnderlyingInstrumentPartySubID_435.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_435(259409689);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_435);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435.insert(UnderlyingInstrumentPartySubIDType_435.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_436("STRING_863418291");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_436);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436.insert(UnderlyingInstrumentPartySubID_436.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_436(1167382311);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_436);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436.insert(UnderlyingInstrumentPartySubIDType_436.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_218;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_218("STRING_322982755");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_218);
      UndlyInstrumentParties_NoUndlyInstrumentParties_218.insert(UnderlyingInstrumentPartyID_218.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_218('2');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_218);
      UndlyInstrumentParties_NoUndlyInstrumentParties_218.insert(UnderlyingInstrumentPartyIDSource_218.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_218(884393451);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_218);
      UndlyInstrumentParties_NoUndlyInstrumentParties_218.insert(UnderlyingInstrumentPartyRole_218.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_218);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_437("STRING_1379082143");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_437);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437.insert(UnderlyingInstrumentPartySubID_437.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_437(1396616590);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_437);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437.insert(UnderlyingInstrumentPartySubIDType_437.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_438("STRING_70822280");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_438);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438.insert(UnderlyingInstrumentPartySubID_438.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_438(600506085);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_438);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438.insert(UnderlyingInstrumentPartySubIDType_438.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_439("STRING_1850770981");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_439);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439.insert(UnderlyingInstrumentPartySubID_439.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_439(1776098885);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_439);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439.insert(UnderlyingInstrumentPartySubIDType_439.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_113;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_113("DATA_1021209955");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_113);
    UnderlyingInstrument_113.insert(EncodedUnderlyingIssuer_113.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_113(1471671237);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_113);
    UnderlyingInstrument_113.insert(EncodedUnderlyingIssuerLen_113.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_113("DATA_38618042");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_113);
    UnderlyingInstrument_113.insert(EncodedUnderlyingSecurityDesc_113.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_113(393982053);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_113);
    UnderlyingInstrument_113.insert(EncodedUnderlyingSecurityDescLen_113.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_113;
    UnderlyingAdjustedQuantity_113.setString("9358527");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_113);
    UnderlyingInstrument_113.insert(UnderlyingAdjustedQuantity_113.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_113;
    UnderlyingAllocationPercent_113.setString("50.920000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_113);
    UnderlyingInstrument_113.insert(UnderlyingAllocationPercent_113.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_113;
    UnderlyingAttachmentPoint_113.setString("25.920000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_113);
    UnderlyingInstrument_113.insert(UnderlyingAttachmentPoint_113.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_113("STRING_1036425025");
    noUnderlyings_0_1.set(UnderlyingCFICode_113);
    UnderlyingInstrument_113.insert(UnderlyingCFICode_113.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_113("STRING_730666864");
    noUnderlyings_0_1.set(UnderlyingCPProgram_113);
    UnderlyingInstrument_113.insert(UnderlyingCPProgram_113.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_113("STRING_146002372");
    noUnderlyings_0_1.set(UnderlyingCPRegType_113);
    UnderlyingInstrument_113.insert(UnderlyingCPRegType_113.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_113;
    UnderlyingCapValue_113.setString("4699566");
    noUnderlyings_0_1.set(UnderlyingCapValue_113);
    UnderlyingInstrument_113.insert(UnderlyingCapValue_113.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_113;
    UnderlyingCashAmount_113.setString("5477637");
    noUnderlyings_0_1.set(UnderlyingCashAmount_113);
    UnderlyingInstrument_113.insert(UnderlyingCashAmount_113.getString());
    FIX::UnderlyingCashType UnderlyingCashType_113("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_113);
    UnderlyingInstrument_113.insert(UnderlyingCashType_113.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_113;
    UnderlyingContractMultiplier_113.setString("15717418");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_113);
    UnderlyingInstrument_113.insert(UnderlyingContractMultiplier_113.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_113(440326579);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_113);
    UnderlyingInstrument_113.insert(UnderlyingContractMultiplierUnit_113.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_113("COUNTRY_745378255");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_113);
    UnderlyingInstrument_113.insert(UnderlyingCountryOfIssue_113.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_113("LOCALMKTDATE_150384250");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_113);
    UnderlyingInstrument_113.insert(UnderlyingCouponPaymentDate_113.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_113;
    UnderlyingCouponRate_113.setString("60.130000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_113);
    UnderlyingInstrument_113.insert(UnderlyingCouponRate_113.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_113("STRING_1004787944");
    noUnderlyings_0_1.set(UnderlyingCreditRating_113);
    UnderlyingInstrument_113.insert(UnderlyingCreditRating_113.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_113("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_113);
    UnderlyingInstrument_113.insert(UnderlyingCurrency_113.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_113;
    UnderlyingCurrentValue_113.setString("13277707");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_113);
    UnderlyingInstrument_113.insert(UnderlyingCurrentValue_113.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_113;
    UnderlyingDetachmentPoint_113.setString("67.370000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_113);
    UnderlyingInstrument_113.insert(UnderlyingDetachmentPoint_113.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_113;
    UnderlyingDirtyPrice_113.setString("18673481");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_113);
    UnderlyingInstrument_113.insert(UnderlyingDirtyPrice_113.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_113;
    UnderlyingEndPrice_113.setString("740280");
    noUnderlyings_0_1.set(UnderlyingEndPrice_113);
    UnderlyingInstrument_113.insert(UnderlyingEndPrice_113.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_113;
    UnderlyingEndValue_113.setString("5047452");
    noUnderlyings_0_1.set(UnderlyingEndValue_113);
    UnderlyingInstrument_113.insert(UnderlyingEndValue_113.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_113(1116481069);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_113);
    UnderlyingInstrument_113.insert(UnderlyingExerciseStyle_113.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_113;
    UnderlyingFXRate_113.setString("1448502");
    noUnderlyings_0_1.set(UnderlyingFXRate_113);
    UnderlyingInstrument_113.insert(UnderlyingFXRate_113.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_113('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_113);
    UnderlyingInstrument_113.insert(UnderlyingFXRateCalc_113.getString());
    FIX::UnderlyingFactor UnderlyingFactor_113;
    UnderlyingFactor_113.setString("8197684");
    noUnderlyings_0_1.set(UnderlyingFactor_113);
    UnderlyingInstrument_113.insert(UnderlyingFactor_113.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_113(1920949173);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_113);
    UnderlyingInstrument_113.insert(UnderlyingFlowScheduleType_113.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_113("STRING_2126461272");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_113);
    UnderlyingInstrument_113.insert(UnderlyingInstrRegistry_113.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_113("LOCALMKTDATE_143955992");
    noUnderlyings_0_1.set(UnderlyingIssueDate_113);
    UnderlyingInstrument_113.insert(UnderlyingIssueDate_113.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_113("STRING_1959567215");
    noUnderlyings_0_1.set(UnderlyingIssuer_113);
    UnderlyingInstrument_113.insert(UnderlyingIssuer_113.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_113("STRING_372959677");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_113);
    UnderlyingInstrument_113.insert(UnderlyingLocaleOfIssue_113.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_113("LOCALMKTDATE_1079808716");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_113);
    UnderlyingInstrument_113.insert(UnderlyingMaturityDate_113.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_113("MONTHYEAR_843488660");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_113);
    UnderlyingInstrument_113.insert(UnderlyingMaturityMonthYear_113.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_113("TZTIMEONLY_1583212269");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_113);
    UnderlyingInstrument_113.insert(UnderlyingMaturityTime_113.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_113;
    UnderlyingNotionalPercentageOutstanding_113.setString("37.410000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_113);
    UnderlyingInstrument_113.insert(UnderlyingNotionalPercentageOutstanding_113.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_113('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_113);
    UnderlyingInstrument_113.insert(UnderlyingOptAttribute_113.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_113;
    UnderlyingOriginalNotionalPercentageOutstanding_113.setString("46.410000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_113);
    UnderlyingInstrument_113.insert(UnderlyingOriginalNotionalPercentageOutstanding_113.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_113("STRING_438706699");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_113);
    UnderlyingInstrument_113.insert(UnderlyingPriceUnitOfMeasure_113.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_113;
    UnderlyingPriceUnitOfMeasureQty_113.setString("21219192");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_113);
    UnderlyingInstrument_113.insert(UnderlyingPriceUnitOfMeasureQty_113.getString());
    FIX::UnderlyingProduct UnderlyingProduct_113(298978985);
    noUnderlyings_0_1.set(UnderlyingProduct_113);
    UnderlyingInstrument_113.insert(UnderlyingProduct_113.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_113(2010448539);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_113);
    UnderlyingInstrument_113.insert(UnderlyingPutOrCall_113.getString());
    FIX::UnderlyingPx UnderlyingPx_113;
    UnderlyingPx_113.setString("4147621");
    noUnderlyings_0_1.set(UnderlyingPx_113);
    UnderlyingInstrument_113.insert(UnderlyingPx_113.getString());
    FIX::UnderlyingQty UnderlyingQty_113;
    UnderlyingQty_113.setString("10443572");
    noUnderlyings_0_1.set(UnderlyingQty_113);
    UnderlyingInstrument_113.insert(UnderlyingQty_113.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_113("LOCALMKTDATE_13349142");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_113);
    UnderlyingInstrument_113.insert(UnderlyingRedemptionDate_113.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_113("STRING_230334559");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_113);
    UnderlyingInstrument_113.insert(UnderlyingRepoCollateralSecurityType_113.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_113;
    UnderlyingRepurchaseRate_113.setString("51.840000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_113);
    UnderlyingInstrument_113.insert(UnderlyingRepurchaseRate_113.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_113(1027151683);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_113);
    UnderlyingInstrument_113.insert(UnderlyingRepurchaseTerm_113.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_113("STRING_1213289236");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_113);
    UnderlyingInstrument_113.insert(UnderlyingRestructuringType_113.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_113("STRING_1229432236");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_113);
    UnderlyingInstrument_113.insert(UnderlyingSecurityDesc_113.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_113("EXCHANGE_152814773");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_113);
    UnderlyingInstrument_113.insert(UnderlyingSecurityExchange_113.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_113("STRING_933153715");
    noUnderlyings_0_1.set(UnderlyingSecurityID_113);
    UnderlyingInstrument_113.insert(UnderlyingSecurityID_113.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_113("STRING_1303460244");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_113);
    UnderlyingInstrument_113.insert(UnderlyingSecurityIDSource_113.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_113("STRING_657560005");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_113);
    UnderlyingInstrument_113.insert(UnderlyingSecuritySubType_113.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_113("STRING_2049634785");
    noUnderlyings_0_1.set(UnderlyingSecurityType_113);
    UnderlyingInstrument_113.insert(UnderlyingSecurityType_113.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_113("STRING_1448310531");
    noUnderlyings_0_1.set(UnderlyingSeniority_113);
    UnderlyingInstrument_113.insert(UnderlyingSeniority_113.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_113("STRING_1762811323");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_113);
    UnderlyingInstrument_113.insert(UnderlyingSettlMethod_113.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_113(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_113);
    UnderlyingInstrument_113.insert(UnderlyingSettlementType_113.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_113;
    UnderlyingStartValue_113.setString("12217760");
    noUnderlyings_0_1.set(UnderlyingStartValue_113);
    UnderlyingInstrument_113.insert(UnderlyingStartValue_113.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_113("STRING_1741788947");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_113);
    UnderlyingInstrument_113.insert(UnderlyingStateOrProvinceOfIssue_113.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_113("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_113);
    UnderlyingInstrument_113.insert(UnderlyingStrikeCurrency_113.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_113;
    UnderlyingStrikePrice_113.setString("21147486");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_113);
    UnderlyingInstrument_113.insert(UnderlyingStrikePrice_113.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_113("STRING_1945684247");
    noUnderlyings_0_1.set(UnderlyingSymbol_113);
    UnderlyingInstrument_113.insert(UnderlyingSymbol_113.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_113("STRING_1877348284");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_113);
    UnderlyingInstrument_113.insert(UnderlyingSymbolSfx_113.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_113("STRING_1550477246");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_113);
    UnderlyingInstrument_113.insert(UnderlyingTimeUnit_113.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_113("STRING_1914434341");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_113);
    UnderlyingInstrument_113.insert(UnderlyingUnitOfMeasure_113.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_113;
    UnderlyingUnitOfMeasureQty_113.setString("13040201");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_113);
    UnderlyingInstrument_113.insert(UnderlyingUnitOfMeasureQty_113.getString());
    all_values.push_back(UnderlyingInstrument_113);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_221;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_221("STRING_205657392");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_221);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_221.insert(UnderlyingSecurityAltID_221.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_221("STRING_1278455775");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_221);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_221.insert(UnderlyingSecurityAltIDSource_221.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_221);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_222;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_222("STRING_1431187225");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_222);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_222.insert(UnderlyingSecurityAltID_222.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_222("STRING_68622283");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_222);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_222.insert(UnderlyingSecurityAltIDSource_222.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_222);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_223;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_223("STRING_1693217970");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_223);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_223.insert(UnderlyingSecurityAltID_223.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_223("STRING_328060817");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_223);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_223.insert(UnderlyingSecurityAltIDSource_223.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_223);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_224;
      FIX::UnderlyingStipType UnderlyingStipType_224("STRING_1923552529");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_224);
      UnderlyingStipulations_NoUnderlyingStips_224.insert(UnderlyingStipType_224.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_224("STRING_229722353");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_224);
      UnderlyingStipulations_NoUnderlyingStips_224.insert(UnderlyingStipValue_224.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_224);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_225;
      FIX::UnderlyingStipType UnderlyingStipType_225("STRING_1109123109");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_225);
      UnderlyingStipulations_NoUnderlyingStips_225.insert(UnderlyingStipType_225.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_225("STRING_989358117");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_225);
      UnderlyingStipulations_NoUnderlyingStips_225.insert(UnderlyingStipValue_225.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_225);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_219;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_219("STRING_1261937882");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_219);
      UndlyInstrumentParties_NoUndlyInstrumentParties_219.insert(UnderlyingInstrumentPartyID_219.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_219('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_219);
      UndlyInstrumentParties_NoUndlyInstrumentParties_219.insert(UnderlyingInstrumentPartyIDSource_219.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_219(615131186);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_219);
      UndlyInstrumentParties_NoUndlyInstrumentParties_219.insert(UnderlyingInstrumentPartyRole_219.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_219);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_440("STRING_1824662970");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_440);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440.insert(UnderlyingInstrumentPartySubID_440.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_440(2063441717);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_440);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440.insert(UnderlyingInstrumentPartySubIDType_440.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_220;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_220("STRING_1534825562");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_220);
      UndlyInstrumentParties_NoUndlyInstrumentParties_220.insert(UnderlyingInstrumentPartyID_220.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_220('3');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_220);
      UndlyInstrumentParties_NoUndlyInstrumentParties_220.insert(UnderlyingInstrumentPartyIDSource_220.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_220(1137734126);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_220);
      UndlyInstrumentParties_NoUndlyInstrumentParties_220.insert(UnderlyingInstrumentPartyRole_220.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_220);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_441("STRING_1264974393");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_441);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441.insert(UnderlyingInstrumentPartySubID_441.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_441(24110102);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_441);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441.insert(UnderlyingInstrumentPartySubIDType_441.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
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
