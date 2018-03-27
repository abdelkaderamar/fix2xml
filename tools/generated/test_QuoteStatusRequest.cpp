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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> QuoteStatusRequest_0;
  FIX::Account Account_39("STRING_1817094655");
  msg.set(Account_39);
  QuoteStatusRequest_0.insert(Account_39.getString());
  FIX::AccountType AccountType_35(3);
  msg.set(AccountType_35);
  QuoteStatusRequest_0.insert(AccountType_35.getString());
  FIX::AcctIDSource AcctIDSource_32(5);
  msg.set(AcctIDSource_32);
  QuoteStatusRequest_0.insert(AcctIDSource_32.getString());
  FIX::QuoteID QuoteID_14("STRING_1707451799");
  msg.set(QuoteID_14);
  QuoteStatusRequest_0.insert(QuoteID_14.getString());
  FIX::QuoteStatusReqID QuoteStatusReqID_1("STRING_957511844");
  msg.set(QuoteStatusReqID_1);
  QuoteStatusRequest_0.insert(QuoteStatusReqID_1.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_5('1');
  msg.set(SubscriptionRequestType_5);
  QuoteStatusRequest_0.insert(SubscriptionRequestType_5.getString());
  FIX::TradingSessionID TradingSessionID_68("STRING_4");
  msg.set(TradingSessionID_68);
  QuoteStatusRequest_0.insert(TradingSessionID_68.getString());
  FIX::TradingSessionSubID TradingSessionSubID_68("STRING_7");
  msg.set(TradingSessionSubID_68);
  QuoteStatusRequest_0.insert(TradingSessionSubID_68.getString());
  all_values.push_back(QuoteStatusRequest_0);

  // FinancingDetails
  multiset<string> FinancingDetails_25;
  FIX::AgreementCurrency AgreementCurrency_25("JPY");
  msg.set(AgreementCurrency_25);
  FinancingDetails_25.insert(AgreementCurrency_25.getString());
  FIX::AgreementDate AgreementDate_25("LOCALMKTDATE_1671807149");
  msg.set(AgreementDate_25);
  FinancingDetails_25.insert(AgreementDate_25.getString());
  FIX::AgreementDesc AgreementDesc_25("STRING_1509415816");
  msg.set(AgreementDesc_25);
  FinancingDetails_25.insert(AgreementDesc_25.getString());
  FIX::AgreementID AgreementID_25("STRING_971458170");
  msg.set(AgreementID_25);
  FinancingDetails_25.insert(AgreementID_25.getString());
  FIX::DeliveryType DeliveryType_25(2);
  msg.set(DeliveryType_25);
  FinancingDetails_25.insert(DeliveryType_25.getString());
  FIX::EndDate EndDate_25("LOCALMKTDATE_1347843808");
  msg.set(EndDate_25);
  FinancingDetails_25.insert(EndDate_25.getString());
  FIX::MarginRatio MarginRatio_25;
  MarginRatio_25.setString("73.950000");
  msg.set(MarginRatio_25);
  FinancingDetails_25.insert(MarginRatio_25.getString());
  FIX::StartDate StartDate_25("LOCALMKTDATE_393537570");
  msg.set(StartDate_25);
  FinancingDetails_25.insert(StartDate_25.getString());
  FIX::TerminationType TerminationType_25(2);
  msg.set(TerminationType_25);
  FinancingDetails_25.insert(TerminationType_25.getString());
  all_values.push_back(FinancingDetails_25);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::QuoteStatusRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_88;
    FIX::EncodedLegIssuer EncodedLegIssuer_88("DATA_544878855");
    noLegs_0_0.set(EncodedLegIssuer_88);
    InstrumentLeg_88.insert(EncodedLegIssuer_88.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_88(2077755845);
    noLegs_0_0.set(EncodedLegIssuerLen_88);
    InstrumentLeg_88.insert(EncodedLegIssuerLen_88.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_88("DATA_1845593521");
    noLegs_0_0.set(EncodedLegSecurityDesc_88);
    InstrumentLeg_88.insert(EncodedLegSecurityDesc_88.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_88(430660630);
    noLegs_0_0.set(EncodedLegSecurityDescLen_88);
    InstrumentLeg_88.insert(EncodedLegSecurityDescLen_88.getString());
    FIX::LegCFICode LegCFICode_88("STRING_1898388935");
    noLegs_0_0.set(LegCFICode_88);
    InstrumentLeg_88.insert(LegCFICode_88.getString());
    FIX::LegContractMultiplier LegContractMultiplier_88;
    LegContractMultiplier_88.setString("12558355");
    noLegs_0_0.set(LegContractMultiplier_88);
    InstrumentLeg_88.insert(LegContractMultiplier_88.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_88(496280899);
    noLegs_0_0.set(LegContractMultiplierUnit_88);
    InstrumentLeg_88.insert(LegContractMultiplierUnit_88.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_88("MONTHYEAR_174073916");
    noLegs_0_0.set(LegContractSettlMonth_88);
    InstrumentLeg_88.insert(LegContractSettlMonth_88.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_88("COUNTRY_2079785597");
    noLegs_0_0.set(LegCountryOfIssue_88);
    InstrumentLeg_88.insert(LegCountryOfIssue_88.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_88("LOCALMKTDATE_591007056");
    noLegs_0_0.set(LegCouponPaymentDate_88);
    InstrumentLeg_88.insert(LegCouponPaymentDate_88.getString());
    FIX::LegCouponRate LegCouponRate_88;
    LegCouponRate_88.setString("50.270000");
    noLegs_0_0.set(LegCouponRate_88);
    InstrumentLeg_88.insert(LegCouponRate_88.getString());
    FIX::LegCreditRating LegCreditRating_88("STRING_572053185");
    noLegs_0_0.set(LegCreditRating_88);
    InstrumentLeg_88.insert(LegCreditRating_88.getString());
    FIX::LegCurrency LegCurrency_88("CHF");
    noLegs_0_0.set(LegCurrency_88);
    InstrumentLeg_88.insert(LegCurrency_88.getString());
    FIX::LegDatedDate LegDatedDate_88("LOCALMKTDATE_2020725499");
    noLegs_0_0.set(LegDatedDate_88);
    InstrumentLeg_88.insert(LegDatedDate_88.getString());
    FIX::LegExerciseStyle LegExerciseStyle_88(1968069862);
    noLegs_0_0.set(LegExerciseStyle_88);
    InstrumentLeg_88.insert(LegExerciseStyle_88.getString());
    FIX::LegFactor LegFactor_88;
    LegFactor_88.setString("6499508");
    noLegs_0_0.set(LegFactor_88);
    InstrumentLeg_88.insert(LegFactor_88.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_88(696599295);
    noLegs_0_0.set(LegFlowScheduleType_88);
    InstrumentLeg_88.insert(LegFlowScheduleType_88.getString());
    FIX::LegInstrRegistry LegInstrRegistry_88("STRING_1009718045");
    noLegs_0_0.set(LegInstrRegistry_88);
    InstrumentLeg_88.insert(LegInstrRegistry_88.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_88("LOCALMKTDATE_2146177970");
    noLegs_0_0.set(LegInterestAccrualDate_88);
    InstrumentLeg_88.insert(LegInterestAccrualDate_88.getString());
    FIX::LegIssueDate LegIssueDate_88("LOCALMKTDATE_1872331664");
    noLegs_0_0.set(LegIssueDate_88);
    InstrumentLeg_88.insert(LegIssueDate_88.getString());
    FIX::LegIssuer LegIssuer_88("STRING_1156856109");
    noLegs_0_0.set(LegIssuer_88);
    InstrumentLeg_88.insert(LegIssuer_88.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_88("STRING_1670501472");
    noLegs_0_0.set(LegLocaleOfIssue_88);
    InstrumentLeg_88.insert(LegLocaleOfIssue_88.getString());
    FIX::LegMaturityDate LegMaturityDate_88("LOCALMKTDATE_1234263833");
    noLegs_0_0.set(LegMaturityDate_88);
    InstrumentLeg_88.insert(LegMaturityDate_88.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_88("MONTHYEAR_2128314279");
    noLegs_0_0.set(LegMaturityMonthYear_88);
    InstrumentLeg_88.insert(LegMaturityMonthYear_88.getString());
    FIX::LegMaturityTime LegMaturityTime_88("TZTIMEONLY_566789222");
    noLegs_0_0.set(LegMaturityTime_88);
    InstrumentLeg_88.insert(LegMaturityTime_88.getString());
    FIX::LegOptAttribute LegOptAttribute_88('4');
    noLegs_0_0.set(LegOptAttribute_88);
    InstrumentLeg_88.insert(LegOptAttribute_88.getString());
    FIX::LegOptionRatio LegOptionRatio_88;
    LegOptionRatio_88.setString("3061580");
    noLegs_0_0.set(LegOptionRatio_88);
    InstrumentLeg_88.insert(LegOptionRatio_88.getString());
    FIX::LegPool LegPool_88("STRING_960326792");
    noLegs_0_0.set(LegPool_88);
    InstrumentLeg_88.insert(LegPool_88.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_88("STRING_9808650");
    noLegs_0_0.set(LegPriceUnitOfMeasure_88);
    InstrumentLeg_88.insert(LegPriceUnitOfMeasure_88.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_88;
    LegPriceUnitOfMeasureQty_88.setString("11491123");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_88);
    InstrumentLeg_88.insert(LegPriceUnitOfMeasureQty_88.getString());
    FIX::LegProduct LegProduct_88(1505205647);
    noLegs_0_0.set(LegProduct_88);
    InstrumentLeg_88.insert(LegProduct_88.getString());
    FIX::LegPutOrCall LegPutOrCall_88(2087564495);
    noLegs_0_0.set(LegPutOrCall_88);
    InstrumentLeg_88.insert(LegPutOrCall_88.getString());
    FIX::LegRatioQty LegRatioQty_88;
    LegRatioQty_88.setString("8472222");
    noLegs_0_0.set(LegRatioQty_88);
    InstrumentLeg_88.insert(LegRatioQty_88.getString());
    FIX::LegRedemptionDate LegRedemptionDate_88("LOCALMKTDATE_1935866278");
    noLegs_0_0.set(LegRedemptionDate_88);
    InstrumentLeg_88.insert(LegRedemptionDate_88.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_88("STRING_1838469782");
    noLegs_0_0.set(LegRepoCollateralSecurityType_88);
    InstrumentLeg_88.insert(LegRepoCollateralSecurityType_88.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_88;
    LegRepurchaseRate_88.setString("78.190000");
    noLegs_0_0.set(LegRepurchaseRate_88);
    InstrumentLeg_88.insert(LegRepurchaseRate_88.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_88(284663529);
    noLegs_0_0.set(LegRepurchaseTerm_88);
    InstrumentLeg_88.insert(LegRepurchaseTerm_88.getString());
    FIX::LegSecurityDesc LegSecurityDesc_88("STRING_2012543699");
    noLegs_0_0.set(LegSecurityDesc_88);
    InstrumentLeg_88.insert(LegSecurityDesc_88.getString());
    FIX::LegSecurityExchange LegSecurityExchange_88("EXCHANGE_2035359768");
    noLegs_0_0.set(LegSecurityExchange_88);
    InstrumentLeg_88.insert(LegSecurityExchange_88.getString());
    FIX::LegSecurityID LegSecurityID_88("STRING_875670585");
    noLegs_0_0.set(LegSecurityID_88);
    InstrumentLeg_88.insert(LegSecurityID_88.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_88("STRING_1746415078");
    noLegs_0_0.set(LegSecurityIDSource_88);
    InstrumentLeg_88.insert(LegSecurityIDSource_88.getString());
    FIX::LegSecuritySubType LegSecuritySubType_88("STRING_459929305");
    noLegs_0_0.set(LegSecuritySubType_88);
    InstrumentLeg_88.insert(LegSecuritySubType_88.getString());
    FIX::LegSecurityType LegSecurityType_88("STRING_1136288648");
    noLegs_0_0.set(LegSecurityType_88);
    InstrumentLeg_88.insert(LegSecurityType_88.getString());
    FIX::LegSide LegSide_88('1');
    noLegs_0_0.set(LegSide_88);
    InstrumentLeg_88.insert(LegSide_88.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_88("STRING_333171156");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_88);
    InstrumentLeg_88.insert(LegStateOrProvinceOfIssue_88.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_88("JPY");
    noLegs_0_0.set(LegStrikeCurrency_88);
    InstrumentLeg_88.insert(LegStrikeCurrency_88.getString());
    FIX::LegStrikePrice LegStrikePrice_88;
    LegStrikePrice_88.setString("10297704");
    noLegs_0_0.set(LegStrikePrice_88);
    InstrumentLeg_88.insert(LegStrikePrice_88.getString());
    FIX::LegSymbol LegSymbol_88("STRING_1966592908");
    noLegs_0_0.set(LegSymbol_88);
    InstrumentLeg_88.insert(LegSymbol_88.getString());
    FIX::LegSymbolSfx LegSymbolSfx_88("STRING_2087499292");
    noLegs_0_0.set(LegSymbolSfx_88);
    InstrumentLeg_88.insert(LegSymbolSfx_88.getString());
    FIX::LegTimeUnit LegTimeUnit_88("STRING_754618468");
    noLegs_0_0.set(LegTimeUnit_88);
    InstrumentLeg_88.insert(LegTimeUnit_88.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_88("STRING_975965370");
    noLegs_0_0.set(LegUnitOfMeasure_88);
    InstrumentLeg_88.insert(LegUnitOfMeasure_88.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_88;
    LegUnitOfMeasureQty_88.setString("16105171");
    noLegs_0_0.set(LegUnitOfMeasureQty_88);
    InstrumentLeg_88.insert(LegUnitOfMeasureQty_88.getString());
    all_values.push_back(InstrumentLeg_88);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_157;
      FIX::LegSecurityAltID LegSecurityAltID_157("STRING_956796001");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_157);
      LegSecAltIDGrp_NoLegSecurityAltID_157.insert(LegSecurityAltID_157.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_157("STRING_29822691");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_157);
      LegSecAltIDGrp_NoLegSecurityAltID_157.insert(LegSecurityAltIDSource_157.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_157);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_65;
  FIX::AttachmentPoint AttachmentPoint_65;
  AttachmentPoint_65.setString("26.460000");
  msg.set(AttachmentPoint_65);
  Instrument_65.insert(AttachmentPoint_65.getString());
  FIX::CFICode CFICode_65("STRING_1262954028");
  msg.set(CFICode_65);
  Instrument_65.insert(CFICode_65.getString());
  FIX::CPProgram CPProgram_65(99);
  msg.set(CPProgram_65);
  Instrument_65.insert(CPProgram_65.getString());
  FIX::CPRegType CPRegType_65("STRING_285831296");
  msg.set(CPRegType_65);
  Instrument_65.insert(CPRegType_65.getString());
  FIX::CapPrice CapPrice_65;
  CapPrice_65.setString("2645827");
  msg.set(CapPrice_65);
  Instrument_65.insert(CapPrice_65.getString());
  FIX::ContractMultiplier ContractMultiplier_65;
  ContractMultiplier_65.setString("3478714");
  msg.set(ContractMultiplier_65);
  Instrument_65.insert(ContractMultiplier_65.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_65(2);
  msg.set(ContractMultiplierUnit_65);
  Instrument_65.insert(ContractMultiplierUnit_65.getString());
  FIX::ContractSettlMonth ContractSettlMonth_65("MONTHYEAR_1111804999");
  msg.set(ContractSettlMonth_65);
  Instrument_65.insert(ContractSettlMonth_65.getString());
  FIX::CountryOfIssue CountryOfIssue_65("COUNTRY_136254113");
  msg.set(CountryOfIssue_65);
  Instrument_65.insert(CountryOfIssue_65.getString());
  FIX::CouponPaymentDate CouponPaymentDate_65("LOCALMKTDATE_2064381925");
  msg.set(CouponPaymentDate_65);
  Instrument_65.insert(CouponPaymentDate_65.getString());
  FIX::CouponRate CouponRate_65;
  CouponRate_65.setString("91.710000");
  msg.set(CouponRate_65);
  Instrument_65.insert(CouponRate_65.getString());
  FIX::CreditRating CreditRating_65("STRING_420917642");
  msg.set(CreditRating_65);
  Instrument_65.insert(CreditRating_65.getString());
  FIX::DatedDate DatedDate_65("LOCALMKTDATE_1929441976");
  msg.set(DatedDate_65);
  Instrument_65.insert(DatedDate_65.getString());
  FIX::DetachmentPoint DetachmentPoint_65;
  DetachmentPoint_65.setString("52.910000");
  msg.set(DetachmentPoint_65);
  Instrument_65.insert(DetachmentPoint_65.getString());
  FIX::EncodedIssuer EncodedIssuer_65("DATA_1296588228");
  msg.set(EncodedIssuer_65);
  Instrument_65.insert(EncodedIssuer_65.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_65(1528373407);
  msg.set(EncodedIssuerLen_65);
  Instrument_65.insert(EncodedIssuerLen_65.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_65("DATA_1415184597");
  msg.set(EncodedSecurityDesc_65);
  Instrument_65.insert(EncodedSecurityDesc_65.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_65(285393228);
  msg.set(EncodedSecurityDescLen_65);
  Instrument_65.insert(EncodedSecurityDescLen_65.getString());
  FIX::ExerciseStyle ExerciseStyle_65(2);
  msg.set(ExerciseStyle_65);
  Instrument_65.insert(ExerciseStyle_65.getString());
  FIX::Factor Factor_65;
  Factor_65.setString("17483557");
  msg.set(Factor_65);
  Instrument_65.insert(Factor_65.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_65(false);
  msg.set(FlexProductEligibilityIndicator_65);
  Instrument_65.insert(FlexProductEligibilityIndicator_65.getString());
  FIX::FlexibleIndicator FlexibleIndicator_65(false);
  msg.set(FlexibleIndicator_65);
  Instrument_65.insert(FlexibleIndicator_65.getString());
  FIX::FloorPrice FloorPrice_65;
  FloorPrice_65.setString("6306425");
  msg.set(FloorPrice_65);
  Instrument_65.insert(FloorPrice_65.getString());
  FIX::FlowScheduleType FlowScheduleType_65(2);
  msg.set(FlowScheduleType_65);
  Instrument_65.insert(FlowScheduleType_65.getString());
  FIX::InstrRegistry InstrRegistry_65("STRING_701080827");
  msg.set(InstrRegistry_65);
  Instrument_65.insert(InstrRegistry_65.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_65('1');
  msg.set(InstrmtAssignmentMethod_65);
  Instrument_65.insert(InstrmtAssignmentMethod_65.getString());
  FIX::InterestAccrualDate InterestAccrualDate_65("LOCALMKTDATE_2037342722");
  msg.set(InterestAccrualDate_65);
  Instrument_65.insert(InterestAccrualDate_65.getString());
  FIX::IssueDate IssueDate_65("LOCALMKTDATE_164114296");
  msg.set(IssueDate_65);
  Instrument_65.insert(IssueDate_65.getString());
  FIX::Issuer Issuer_65("STRING_1226659678");
  msg.set(Issuer_65);
  Instrument_65.insert(Issuer_65.getString());
  FIX::ListMethod ListMethod_65(1);
  msg.set(ListMethod_65);
  Instrument_65.insert(ListMethod_65.getString());
  FIX::LocaleOfIssue LocaleOfIssue_65("STRING_193936987");
  msg.set(LocaleOfIssue_65);
  Instrument_65.insert(LocaleOfIssue_65.getString());
  FIX::MaturityDate MaturityDate_65("LOCALMKTDATE_1502682324");
  msg.set(MaturityDate_65);
  Instrument_65.insert(MaturityDate_65.getString());
  FIX::MaturityMonthYear MaturityMonthYear_65("MONTHYEAR_2109609104");
  msg.set(MaturityMonthYear_65);
  Instrument_65.insert(MaturityMonthYear_65.getString());
  FIX::MaturityTime MaturityTime_65("TZTIMEONLY_1184086470");
  msg.set(MaturityTime_65);
  Instrument_65.insert(MaturityTime_65.getString());
  FIX::MinPriceIncrement MinPriceIncrement_65;
  MinPriceIncrement_65.setString("17885136");
  msg.set(MinPriceIncrement_65);
  Instrument_65.insert(MinPriceIncrement_65.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_65;
  MinPriceIncrementAmount_65.setString("2267082");
  msg.set(MinPriceIncrementAmount_65);
  Instrument_65.insert(MinPriceIncrementAmount_65.getString());
  FIX::NTPositionLimit NTPositionLimit_65(1531957953);
  msg.set(NTPositionLimit_65);
  Instrument_65.insert(NTPositionLimit_65.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_65;
  NotionalPercentageOutstanding_65.setString("57.630000");
  msg.set(NotionalPercentageOutstanding_65);
  Instrument_65.insert(NotionalPercentageOutstanding_65.getString());
  FIX::OptAttribute OptAttribute_65('1');
  msg.set(OptAttribute_65);
  Instrument_65.insert(OptAttribute_65.getString());
  FIX::OptPayoutAmount OptPayoutAmount_65;
  OptPayoutAmount_65.setString("16682120");
  msg.set(OptPayoutAmount_65);
  Instrument_65.insert(OptPayoutAmount_65.getString());
  FIX::OptPayoutType OptPayoutType_65(1);
  msg.set(OptPayoutType_65);
  Instrument_65.insert(OptPayoutType_65.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_65;
  OriginalNotionalPercentageOutstanding_65.setString("87.320000");
  msg.set(OriginalNotionalPercentageOutstanding_65);
  Instrument_65.insert(OriginalNotionalPercentageOutstanding_65.getString());
  FIX::Pool Pool_65("STRING_2089129709");
  msg.set(Pool_65);
  Instrument_65.insert(Pool_65.getString());
  FIX::PositionLimit PositionLimit_65(1713282369);
  msg.set(PositionLimit_65);
  Instrument_65.insert(PositionLimit_65.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_65("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_65);
  Instrument_65.insert(PriceQuoteMethod_65.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_65("STRING_1238234289");
  msg.set(PriceUnitOfMeasure_65);
  Instrument_65.insert(PriceUnitOfMeasure_65.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_65;
  PriceUnitOfMeasureQty_65.setString("10941721");
  msg.set(PriceUnitOfMeasureQty_65);
  Instrument_65.insert(PriceUnitOfMeasureQty_65.getString());
  FIX::Product Product_67(11);
  msg.set(Product_67);
  Instrument_65.insert(Product_67.getString());
  FIX::ProductComplex ProductComplex_65("STRING_1523627517");
  msg.set(ProductComplex_65);
  Instrument_65.insert(ProductComplex_65.getString());
  FIX::PutOrCall PutOrCall_65(1);
  msg.set(PutOrCall_65);
  Instrument_65.insert(PutOrCall_65.getString());
  FIX::RedemptionDate RedemptionDate_65("LOCALMKTDATE_82237078");
  msg.set(RedemptionDate_65);
  Instrument_65.insert(RedemptionDate_65.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_65("STRING_618411961");
  msg.set(RepoCollateralSecurityType_65);
  Instrument_65.insert(RepoCollateralSecurityType_65.getString());
  FIX::RepurchaseRate RepurchaseRate_65;
  RepurchaseRate_65.setString("75.240000");
  msg.set(RepurchaseRate_65);
  Instrument_65.insert(RepurchaseRate_65.getString());
  FIX::RepurchaseTerm RepurchaseTerm_65(712879635);
  msg.set(RepurchaseTerm_65);
  Instrument_65.insert(RepurchaseTerm_65.getString());
  FIX::RestructuringType RestructuringType_65("STRING_MR");
  msg.set(RestructuringType_65);
  Instrument_65.insert(RestructuringType_65.getString());
  FIX::SecurityDesc SecurityDesc_65("STRING_1228578351");
  msg.set(SecurityDesc_65);
  Instrument_65.insert(SecurityDesc_65.getString());
  FIX::SecurityExchange SecurityExchange_65("EXCHANGE_2098140660");
  msg.set(SecurityExchange_65);
  Instrument_65.insert(SecurityExchange_65.getString());
  FIX::SecurityGroup SecurityGroup_65("STRING_1569648387");
  msg.set(SecurityGroup_65);
  Instrument_65.insert(SecurityGroup_65.getString());
  FIX::SecurityID SecurityID_65("STRING_1392692647");
  msg.set(SecurityID_65);
  Instrument_65.insert(SecurityID_65.getString());
  FIX::SecurityIDSource SecurityIDSource_65("STRING_1");
  msg.set(SecurityIDSource_65);
  Instrument_65.insert(SecurityIDSource_65.getString());
  FIX::SecurityStatus SecurityStatus_65("STRING_1");
  msg.set(SecurityStatus_65);
  Instrument_65.insert(SecurityStatus_65.getString());
  FIX::SecuritySubType SecuritySubType_66("STRING_1586629634");
  msg.set(SecuritySubType_66);
  Instrument_65.insert(SecuritySubType_66.getString());
  FIX::SecurityType SecurityType_67("STRING_DUAL");
  msg.set(SecurityType_67);
  Instrument_65.insert(SecurityType_67.getString());
  FIX::Seniority Seniority_65("STRING_SB");
  msg.set(Seniority_65);
  Instrument_65.insert(Seniority_65.getString());
  FIX::SettlMethod SettlMethod_65('P');
  msg.set(SettlMethod_65);
  Instrument_65.insert(SettlMethod_65.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_65("STRING_173545338");
  msg.set(SettleOnOpenFlag_65);
  Instrument_65.insert(SettleOnOpenFlag_65.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_65("STRING_457653480");
  msg.set(StateOrProvinceOfIssue_65);
  Instrument_65.insert(StateOrProvinceOfIssue_65.getString());
  FIX::StrikeCurrency StrikeCurrency_65("CAN");
  msg.set(StrikeCurrency_65);
  Instrument_65.insert(StrikeCurrency_65.getString());
  FIX::StrikeMultiplier StrikeMultiplier_65;
  StrikeMultiplier_65.setString("17961666");
  msg.set(StrikeMultiplier_65);
  Instrument_65.insert(StrikeMultiplier_65.getString());
  FIX::StrikePrice StrikePrice_65;
  StrikePrice_65.setString("16759188");
  msg.set(StrikePrice_65);
  Instrument_65.insert(StrikePrice_65.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_65(4);
  msg.set(StrikePriceBoundaryMethod_65);
  Instrument_65.insert(StrikePriceBoundaryMethod_65.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_65;
  StrikePriceBoundaryPrecision_65.setString("54.210000");
  msg.set(StrikePriceBoundaryPrecision_65);
  Instrument_65.insert(StrikePriceBoundaryPrecision_65.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_65(3);
  msg.set(StrikePriceDeterminationMethod_65);
  Instrument_65.insert(StrikePriceDeterminationMethod_65.getString());
  FIX::StrikeValue StrikeValue_65;
  StrikeValue_65.setString("15376102");
  msg.set(StrikeValue_65);
  Instrument_65.insert(StrikeValue_65.getString());
  FIX::Symbol Symbol_65("STRING_1120755796");
  msg.set(Symbol_65);
  Instrument_65.insert(Symbol_65.getString());
  FIX::SymbolSfx SymbolSfx_65("STRING_WI");
  msg.set(SymbolSfx_65);
  Instrument_65.insert(SymbolSfx_65.getString());
  FIX::TimeUnit TimeUnit_65("STRING_Mo");
  msg.set(TimeUnit_65);
  Instrument_65.insert(TimeUnit_65.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_65(2);
  msg.set(UnderlyingPriceDeterminationMethod_65);
  Instrument_65.insert(UnderlyingPriceDeterminationMethod_65.getString());
  FIX::UnitOfMeasure UnitOfMeasure_65("STRING_Alw");
  msg.set(UnitOfMeasure_65);
  Instrument_65.insert(UnitOfMeasure_65.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_65;
  UnitOfMeasureQty_65.setString("2507310");
  msg.set(UnitOfMeasureQty_65);
  Instrument_65.insert(UnitOfMeasureQty_65.getString());
  FIX::ValuationMethod ValuationMethod_65("STRING_FUTDA");
  msg.set(ValuationMethod_65);
  Instrument_65.insert(ValuationMethod_65.getString());
  all_values.push_back(Instrument_65);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_123;
    FIX::ComplexEventCondition ComplexEventCondition_123(2);
    noComplexEvents_0_0.set(ComplexEventCondition_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventCondition_123.getString());
    FIX::ComplexEventPrice ComplexEventPrice_123;
    ComplexEventPrice_123.setString("2497538");
    noComplexEvents_0_0.set(ComplexEventPrice_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventPrice_123.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_123(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventPriceBoundaryMethod_123.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_123;
    ComplexEventPriceBoundaryPrecision_123.setString("69.110000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventPriceBoundaryPrecision_123.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_123(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventPriceTimeType_123.getString());
    FIX::ComplexEventType ComplexEventType_123(1);
    noComplexEvents_0_0.set(ComplexEventType_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventType_123.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_123;
    ComplexOptPayoutAmount_123.setString("12520159");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexOptPayoutAmount_123.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_123);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_254;
      FIX::ComplexEventEndDate ComplexEventEndDate_254(FIX::UTCTIMESTAMP(9, 42, 30, 14, 12012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_254);
      ComplexEventDates_NoComplexEventDates_254.insert(ComplexEventEndDate_254.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_254(FIX::UTCTIMESTAMP(5, 51, 57, 14, 12009));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_254);
      ComplexEventDates_NoComplexEventDates_254.insert(ComplexEventStartDate_254.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_254);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_498;
        FIX::ComplexEventEndTime ComplexEventEndTime_498(FIX::UTCTIMEONLY(6, 19, 22));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_498);
        ComplexEventTimes_NoComplexEventTimes_498.insert(ComplexEventEndTime_498.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_498(FIX::UTCTIMEONLY(19, 1, 52));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_498);
        ComplexEventTimes_NoComplexEventTimes_498.insert(ComplexEventStartTime_498.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_498);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_499;
        FIX::ComplexEventEndTime ComplexEventEndTime_499(FIX::UTCTIMEONLY(7, 59, 29));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_499);
        ComplexEventTimes_NoComplexEventTimes_499.insert(ComplexEventEndTime_499.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_499(FIX::UTCTIMEONLY(0, 20, 17));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_499);
        ComplexEventTimes_NoComplexEventTimes_499.insert(ComplexEventStartTime_499.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_499);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_124;
    FIX::ComplexEventCondition ComplexEventCondition_124(1);
    noComplexEvents_0_1.set(ComplexEventCondition_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventCondition_124.getString());
    FIX::ComplexEventPrice ComplexEventPrice_124;
    ComplexEventPrice_124.setString("3595221");
    noComplexEvents_0_1.set(ComplexEventPrice_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventPrice_124.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_124(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventPriceBoundaryMethod_124.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_124;
    ComplexEventPriceBoundaryPrecision_124.setString("10.550000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventPriceBoundaryPrecision_124.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_124(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventPriceTimeType_124.getString());
    FIX::ComplexEventType ComplexEventType_124(2);
    noComplexEvents_0_1.set(ComplexEventType_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventType_124.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_124;
    ComplexOptPayoutAmount_124.setString("2593277");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexOptPayoutAmount_124.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_124);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_255;
      FIX::ComplexEventEndDate ComplexEventEndDate_255(FIX::UTCTIMESTAMP(13, 9, 58, 17, 12015));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_255);
      ComplexEventDates_NoComplexEventDates_255.insert(ComplexEventEndDate_255.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_255(FIX::UTCTIMESTAMP(11, 27, 8, 2, 32003));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_255);
      ComplexEventDates_NoComplexEventDates_255.insert(ComplexEventStartDate_255.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_255);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_500;
        FIX::ComplexEventEndTime ComplexEventEndTime_500(FIX::UTCTIMEONLY(4, 57, 30));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_500);
        ComplexEventTimes_NoComplexEventTimes_500.insert(ComplexEventEndTime_500.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_500(FIX::UTCTIMEONLY(14, 42, 54));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_500);
        ComplexEventTimes_NoComplexEventTimes_500.insert(ComplexEventStartTime_500.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_500);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_256;
      FIX::ComplexEventEndDate ComplexEventEndDate_256(FIX::UTCTIMESTAMP(3, 37, 37, 26, 12005));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_256);
      ComplexEventDates_NoComplexEventDates_256.insert(ComplexEventEndDate_256.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_256(FIX::UTCTIMESTAMP(20, 24, 38, 15, 22001));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_256);
      ComplexEventDates_NoComplexEventDates_256.insert(ComplexEventStartDate_256.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_256);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_501;
        FIX::ComplexEventEndTime ComplexEventEndTime_501(FIX::UTCTIMEONLY(22, 5, 24));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_501);
        ComplexEventTimes_NoComplexEventTimes_501.insert(ComplexEventEndTime_501.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_501(FIX::UTCTIMEONLY(11, 34, 42));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_501);
        ComplexEventTimes_NoComplexEventTimes_501.insert(ComplexEventStartTime_501.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_501);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_502;
        FIX::ComplexEventEndTime ComplexEventEndTime_502(FIX::UTCTIMEONLY(18, 32, 34));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_502);
        ComplexEventTimes_NoComplexEventTimes_502.insert(ComplexEventEndTime_502.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_502(FIX::UTCTIMEONLY(14, 16, 54));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_502);
        ComplexEventTimes_NoComplexEventTimes_502.insert(ComplexEventStartTime_502.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_502);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_503;
        FIX::ComplexEventEndTime ComplexEventEndTime_503(FIX::UTCTIMEONLY(11, 32, 26));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_503);
        ComplexEventTimes_NoComplexEventTimes_503.insert(ComplexEventEndTime_503.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_503(FIX::UTCTIMEONLY(0, 1, 46));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_503);
        ComplexEventTimes_NoComplexEventTimes_503.insert(ComplexEventStartTime_503.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_503);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_257;
      FIX::ComplexEventEndDate ComplexEventEndDate_257(FIX::UTCTIMESTAMP(5, 25, 24, 18, 12014));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_257);
      ComplexEventDates_NoComplexEventDates_257.insert(ComplexEventEndDate_257.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_257(FIX::UTCTIMESTAMP(22, 0, 35, 26, 122001));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_257);
      ComplexEventDates_NoComplexEventDates_257.insert(ComplexEventStartDate_257.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_257);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_504;
        FIX::ComplexEventEndTime ComplexEventEndTime_504(FIX::UTCTIMEONLY(19, 32, 49));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_504);
        ComplexEventTimes_NoComplexEventTimes_504.insert(ComplexEventEndTime_504.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_504(FIX::UTCTIMEONLY(22, 57, 34));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_504);
        ComplexEventTimes_NoComplexEventTimes_504.insert(ComplexEventStartTime_504.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_504);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_505;
        FIX::ComplexEventEndTime ComplexEventEndTime_505(FIX::UTCTIMEONLY(12, 58, 17));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_505);
        ComplexEventTimes_NoComplexEventTimes_505.insert(ComplexEventEndTime_505.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_505(FIX::UTCTIMEONLY(22, 18, 52));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_505);
        ComplexEventTimes_NoComplexEventTimes_505.insert(ComplexEventStartTime_505.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_505);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_506;
        FIX::ComplexEventEndTime ComplexEventEndTime_506(FIX::UTCTIMEONLY(3, 9, 51));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_506);
        ComplexEventTimes_NoComplexEventTimes_506.insert(ComplexEventEndTime_506.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_506(FIX::UTCTIMEONLY(1, 46, 16));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_506);
        ComplexEventTimes_NoComplexEventTimes_506.insert(ComplexEventStartTime_506.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_506);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_125;
    FIX::ComplexEventCondition ComplexEventCondition_125(2);
    noComplexEvents_0_2.set(ComplexEventCondition_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventCondition_125.getString());
    FIX::ComplexEventPrice ComplexEventPrice_125;
    ComplexEventPrice_125.setString("3031223");
    noComplexEvents_0_2.set(ComplexEventPrice_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventPrice_125.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_125(4);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventPriceBoundaryMethod_125.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_125;
    ComplexEventPriceBoundaryPrecision_125.setString("87.410000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventPriceBoundaryPrecision_125.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_125(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventPriceTimeType_125.getString());
    FIX::ComplexEventType ComplexEventType_125(3);
    noComplexEvents_0_2.set(ComplexEventType_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventType_125.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_125;
    ComplexOptPayoutAmount_125.setString("7775695");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexOptPayoutAmount_125.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_125);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_258;
      FIX::ComplexEventEndDate ComplexEventEndDate_258(FIX::UTCTIMESTAMP(22, 46, 47, 8, 12003));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_258);
      ComplexEventDates_NoComplexEventDates_258.insert(ComplexEventEndDate_258.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_258(FIX::UTCTIMESTAMP(12, 19, 52, 18, 102014));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_258);
      ComplexEventDates_NoComplexEventDates_258.insert(ComplexEventStartDate_258.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_258);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_507;
        FIX::ComplexEventEndTime ComplexEventEndTime_507(FIX::UTCTIMEONLY(5, 15, 4));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_507);
        ComplexEventTimes_NoComplexEventTimes_507.insert(ComplexEventEndTime_507.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_507(FIX::UTCTIMEONLY(16, 42, 51));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_507);
        ComplexEventTimes_NoComplexEventTimes_507.insert(ComplexEventStartTime_507.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_507);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_508;
        FIX::ComplexEventEndTime ComplexEventEndTime_508(FIX::UTCTIMEONLY(8, 34, 12));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_508);
        ComplexEventTimes_NoComplexEventTimes_508.insert(ComplexEventEndTime_508.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_508(FIX::UTCTIMEONLY(18, 13, 59));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_508);
        ComplexEventTimes_NoComplexEventTimes_508.insert(ComplexEventStartTime_508.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_508);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_509;
        FIX::ComplexEventEndTime ComplexEventEndTime_509(FIX::UTCTIMEONLY(15, 37, 12));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_509);
        ComplexEventTimes_NoComplexEventTimes_509.insert(ComplexEventEndTime_509.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_509(FIX::UTCTIMEONLY(5, 25, 51));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_509);
        ComplexEventTimes_NoComplexEventTimes_509.insert(ComplexEventStartTime_509.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_509);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::QuoteStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_125;
    FIX::EventDate EventDate_125("LOCALMKTDATE_1727286704");
    noEvents_0_0.set(EventDate_125);
    EvntGrp_NoEvents_125.insert(EventDate_125.getString());
    FIX::EventPx EventPx_125;
    EventPx_125.setString("7020147");
    noEvents_0_0.set(EventPx_125);
    EvntGrp_NoEvents_125.insert(EventPx_125.getString());
    FIX::EventText EventText_125("STRING_210144284");
    noEvents_0_0.set(EventText_125);
    EvntGrp_NoEvents_125.insert(EventText_125.getString());
    FIX::EventTime EventTime_125(FIX::UTCTIMESTAMP(6, 58, 27, 8, 62011));
    noEvents_0_0.set(EventTime_125);
    EvntGrp_NoEvents_125.insert(EventTime_125.getString());
    FIX::EventType EventType_125(8);
    noEvents_0_0.set(EventType_125);
    EvntGrp_NoEvents_125.insert(EventType_125.getString());
    all_values.push_back(EvntGrp_NoEvents_125);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_121;
    FIX::InstrumentPartyID InstrumentPartyID_121("STRING_872222886");
    noInstrumentParties_0_0.set(InstrumentPartyID_121);
    InstrumentParties_NoInstrumentParties_121.insert(InstrumentPartyID_121.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_121('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_121);
    InstrumentParties_NoInstrumentParties_121.insert(InstrumentPartyIDSource_121.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_121(1417464008);
    noInstrumentParties_0_0.set(InstrumentPartyRole_121);
    InstrumentParties_NoInstrumentParties_121.insert(InstrumentPartyRole_121.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_121);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238;
      FIX::InstrumentPartySubID InstrumentPartySubID_238("STRING_941787344");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_238);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238.insert(InstrumentPartySubID_238.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_238(93035772);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_238);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238.insert(InstrumentPartySubIDType_238.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239;
      FIX::InstrumentPartySubID InstrumentPartySubID_239("STRING_596322800");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_239);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239.insert(InstrumentPartySubID_239.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_239(691002114);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_239);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239.insert(InstrumentPartySubIDType_239.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240;
      FIX::InstrumentPartySubID InstrumentPartySubID_240("STRING_1693660765");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_240);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240.insert(InstrumentPartySubID_240.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_240(50677871);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_240);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240.insert(InstrumentPartySubIDType_240.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_122;
    FIX::InstrumentPartyID InstrumentPartyID_122("STRING_1820924899");
    noInstrumentParties_0_1.set(InstrumentPartyID_122);
    InstrumentParties_NoInstrumentParties_122.insert(InstrumentPartyID_122.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_122('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_122);
    InstrumentParties_NoInstrumentParties_122.insert(InstrumentPartyIDSource_122.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_122(1568491429);
    noInstrumentParties_0_1.set(InstrumentPartyRole_122);
    InstrumentParties_NoInstrumentParties_122.insert(InstrumentPartyRole_122.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_122);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241;
      FIX::InstrumentPartySubID InstrumentPartySubID_241("STRING_396450673");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_241);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241.insert(InstrumentPartySubID_241.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_241(2008737474);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_241);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241.insert(InstrumentPartySubIDType_241.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_136;
    FIX::SecurityAltID SecurityAltID_136("STRING_1712974864");
    noSecurityAltID_0_0.set(SecurityAltID_136);
    SecAltIDGrp_NoSecurityAltID_136.insert(SecurityAltID_136.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_136("STRING_1840313116");
    noSecurityAltID_0_0.set(SecurityAltIDSource_136);
    SecAltIDGrp_NoSecurityAltID_136.insert(SecurityAltIDSource_136.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_136);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_137;
    FIX::SecurityAltID SecurityAltID_137("STRING_519339206");
    noSecurityAltID_0_1.set(SecurityAltID_137);
    SecAltIDGrp_NoSecurityAltID_137.insert(SecurityAltID_137.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_137("STRING_267506012");
    noSecurityAltID_0_1.set(SecurityAltIDSource_137);
    SecAltIDGrp_NoSecurityAltID_137.insert(SecurityAltIDSource_137.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_137);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_130;
  FIX::SecurityXML SecurityXML_131("XMLDATA_2050457400");
  msg.set(SecurityXML_131);
  FIX::SecurityXMLLen SecurityXMLLen_65(1522998828);
  msg.set(SecurityXMLLen_65);
  FIX::SecurityXMLSchema SecurityXMLSchema_65("STRING_336124563");
  msg.set(SecurityXMLSchema_65);
  SecurityXML_130.insert(SecurityXMLSchema_65.getString());
  all_values.push_back(SecurityXML_130);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_121;
    FIX::PartyID PartyID_121("STRING_1764836475");
    noPartyIDs_0_0.set(PartyID_121);
    Parties_NoPartyIDs_121.insert(PartyID_121.getString());
    FIX::PartyIDSource PartyIDSource_121('3');
    noPartyIDs_0_0.set(PartyIDSource_121);
    Parties_NoPartyIDs_121.insert(PartyIDSource_121.getString());
    FIX::PartyRole PartyRole_121(12);
    noPartyIDs_0_0.set(PartyRole_121);
    Parties_NoPartyIDs_121.insert(PartyRole_121.getString());
    all_values.push_back(Parties_NoPartyIDs_121);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_236;
      FIX::PartySubID PartySubID_236("STRING_1067832022");
      noPartySubIDs_0_1_0.set(PartySubID_236);
      PtysSubGrp_NoPartySubIDs_236.insert(PartySubID_236.getString());
      FIX::PartySubIDType PartySubIDType_236(25);
      noPartySubIDs_0_1_0.set(PartySubIDType_236);
      PtysSubGrp_NoPartySubIDs_236.insert(PartySubIDType_236.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_236);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_237;
      FIX::PartySubID PartySubID_237("STRING_700172736");
      noPartySubIDs_0_1_1.set(PartySubID_237);
      PtysSubGrp_NoPartySubIDs_237.insert(PartySubID_237.getString());
      FIX::PartySubIDType PartySubIDType_237(27);
      noPartySubIDs_0_1_1.set(PartySubIDType_237);
      PtysSubGrp_NoPartySubIDs_237.insert(PartySubIDType_237.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_237);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_238;
      FIX::PartySubID PartySubID_238("STRING_2012306324");
      noPartySubIDs_0_1_2.set(PartySubID_238);
      PtysSubGrp_NoPartySubIDs_238.insert(PartySubID_238.getString());
      FIX::PartySubIDType PartySubIDType_238(11);
      noPartySubIDs_0_1_2.set(PartySubIDType_238);
      PtysSubGrp_NoPartySubIDs_238.insert(PartySubIDType_238.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_238);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_122;
    FIX::PartyID PartyID_122("STRING_1720317496");
    noPartyIDs_0_1.set(PartyID_122);
    Parties_NoPartyIDs_122.insert(PartyID_122.getString());
    FIX::PartyIDSource PartyIDSource_122('E');
    noPartyIDs_0_1.set(PartyIDSource_122);
    Parties_NoPartyIDs_122.insert(PartyIDSource_122.getString());
    FIX::PartyRole PartyRole_122(4);
    noPartyIDs_0_1.set(PartyRole_122);
    Parties_NoPartyIDs_122.insert(PartyRole_122.getString());
    all_values.push_back(Parties_NoPartyIDs_122);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_239;
      FIX::PartySubID PartySubID_239("STRING_1651519214");
      noPartySubIDs_1_1_0.set(PartySubID_239);
      PtysSubGrp_NoPartySubIDs_239.insert(PartySubID_239.getString());
      FIX::PartySubIDType PartySubIDType_239(10);
      noPartySubIDs_1_1_0.set(PartySubIDType_239);
      PtysSubGrp_NoPartySubIDs_239.insert(PartySubIDType_239.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_239);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_240;
      FIX::PartySubID PartySubID_240("STRING_2084760861");
      noPartySubIDs_1_1_1.set(PartySubID_240);
      PtysSubGrp_NoPartySubIDs_240.insert(PartySubID_240.getString());
      FIX::PartySubIDType PartySubIDType_240(6);
      noPartySubIDs_1_1_1.set(PartySubIDType_240);
      PtysSubGrp_NoPartySubIDs_240.insert(PartySubIDType_240.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_240);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_241;
      FIX::PartySubID PartySubID_241("STRING_457668668");
      noPartySubIDs_1_1_2.set(PartySubID_241);
      PtysSubGrp_NoPartySubIDs_241.insert(PartySubID_241.getString());
      FIX::PartySubIDType PartySubIDType_241(11);
      noPartySubIDs_1_1_2.set(PartySubIDType_241);
      PtysSubGrp_NoPartySubIDs_241.insert(PartySubIDType_241.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_241);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_123;
    FIX::PartyID PartyID_123("STRING_61919116");
    noPartyIDs_0_2.set(PartyID_123);
    Parties_NoPartyIDs_123.insert(PartyID_123.getString());
    FIX::PartyIDSource PartyIDSource_123('2');
    noPartyIDs_0_2.set(PartyIDSource_123);
    Parties_NoPartyIDs_123.insert(PartyIDSource_123.getString());
    FIX::PartyRole PartyRole_123(29);
    noPartyIDs_0_2.set(PartyRole_123);
    Parties_NoPartyIDs_123.insert(PartyRole_123.getString());
    all_values.push_back(Parties_NoPartyIDs_123);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_242;
      FIX::PartySubID PartySubID_242("STRING_11751963");
      noPartySubIDs_2_1_0.set(PartySubID_242);
      PtysSubGrp_NoPartySubIDs_242.insert(PartySubID_242.getString());
      FIX::PartySubIDType PartySubIDType_242(13);
      noPartySubIDs_2_1_0.set(PartySubIDType_242);
      PtysSubGrp_NoPartySubIDs_242.insert(PartySubIDType_242.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_242);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_243;
      FIX::PartySubID PartySubID_243("STRING_2042399993");
      noPartySubIDs_2_1_1.set(PartySubID_243);
      PtysSubGrp_NoPartySubIDs_243.insert(PartySubID_243.getString());
      FIX::PartySubIDType PartySubIDType_243(28);
      noPartySubIDs_2_1_1.set(PartySubIDType_243);
      PtysSubGrp_NoPartySubIDs_243.insert(PartySubIDType_243.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_243);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_244;
      FIX::PartySubID PartySubID_244("STRING_1652669073");
      noPartySubIDs_2_1_2.set(PartySubID_244);
      PtysSubGrp_NoPartySubIDs_244.insert(PartySubID_244.getString());
      FIX::PartySubIDType PartySubIDType_244(22);
      noPartySubIDs_2_1_2.set(PartySubIDType_244);
      PtysSubGrp_NoPartySubIDs_244.insert(PartySubIDType_244.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_244);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_17;
    FIX::TargetPartyID TargetPartyID_17("STRING_1270021900");
    noTargetPartyIDs_0_0.set(TargetPartyID_17);
    TargetParties_NoTargetPartyIDs_17.insert(TargetPartyID_17.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_17('5');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_17);
    TargetParties_NoTargetPartyIDs_17.insert(TargetPartyIDSource_17.getString());
    FIX::TargetPartyRole TargetPartyRole_17(204334825);
    noTargetPartyIDs_0_0.set(TargetPartyRole_17);
    TargetParties_NoTargetPartyIDs_17.insert(TargetPartyRole_17.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_17);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_18;
    FIX::TargetPartyID TargetPartyID_18("STRING_1097971750");
    noTargetPartyIDs_0_1.set(TargetPartyID_18);
    TargetParties_NoTargetPartyIDs_18.insert(TargetPartyID_18.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_18('1');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_18);
    TargetParties_NoTargetPartyIDs_18.insert(TargetPartyIDSource_18.getString());
    FIX::TargetPartyRole TargetPartyRole_18(799177142);
    noTargetPartyIDs_0_1.set(TargetPartyRole_18);
    TargetParties_NoTargetPartyIDs_18.insert(TargetPartyRole_18.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_18);

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_108;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_108("DATA_274717649");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingIssuer_108.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_108(663999818);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingIssuerLen_108.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_108("DATA_40321054");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingSecurityDesc_108.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_108(1995035145);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingSecurityDescLen_108.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_108;
    UnderlyingAdjustedQuantity_108.setString("6218582");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_108);
    UnderlyingInstrument_108.insert(UnderlyingAdjustedQuantity_108.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_108;
    UnderlyingAllocationPercent_108.setString("40.690000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_108);
    UnderlyingInstrument_108.insert(UnderlyingAllocationPercent_108.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_108;
    UnderlyingAttachmentPoint_108.setString("74.590000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_108);
    UnderlyingInstrument_108.insert(UnderlyingAttachmentPoint_108.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_108("STRING_125893833");
    noUnderlyings_0_0.set(UnderlyingCFICode_108);
    UnderlyingInstrument_108.insert(UnderlyingCFICode_108.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_108("STRING_2062964956");
    noUnderlyings_0_0.set(UnderlyingCPProgram_108);
    UnderlyingInstrument_108.insert(UnderlyingCPProgram_108.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_108("STRING_48664672");
    noUnderlyings_0_0.set(UnderlyingCPRegType_108);
    UnderlyingInstrument_108.insert(UnderlyingCPRegType_108.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_108;
    UnderlyingCapValue_108.setString("19388459");
    noUnderlyings_0_0.set(UnderlyingCapValue_108);
    UnderlyingInstrument_108.insert(UnderlyingCapValue_108.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_108;
    UnderlyingCashAmount_108.setString("3731499");
    noUnderlyings_0_0.set(UnderlyingCashAmount_108);
    UnderlyingInstrument_108.insert(UnderlyingCashAmount_108.getString());
    FIX::UnderlyingCashType UnderlyingCashType_108("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_108);
    UnderlyingInstrument_108.insert(UnderlyingCashType_108.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_108;
    UnderlyingContractMultiplier_108.setString("20007650");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_108);
    UnderlyingInstrument_108.insert(UnderlyingContractMultiplier_108.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_108(692072471);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_108);
    UnderlyingInstrument_108.insert(UnderlyingContractMultiplierUnit_108.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_108("COUNTRY_477274249");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_108);
    UnderlyingInstrument_108.insert(UnderlyingCountryOfIssue_108.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_108("LOCALMKTDATE_1628175372");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_108);
    UnderlyingInstrument_108.insert(UnderlyingCouponPaymentDate_108.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_108;
    UnderlyingCouponRate_108.setString("44.340000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_108);
    UnderlyingInstrument_108.insert(UnderlyingCouponRate_108.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_108("STRING_606944494");
    noUnderlyings_0_0.set(UnderlyingCreditRating_108);
    UnderlyingInstrument_108.insert(UnderlyingCreditRating_108.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_108("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_108);
    UnderlyingInstrument_108.insert(UnderlyingCurrency_108.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_108;
    UnderlyingCurrentValue_108.setString("1121299");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_108);
    UnderlyingInstrument_108.insert(UnderlyingCurrentValue_108.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_108;
    UnderlyingDetachmentPoint_108.setString("26.250000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_108);
    UnderlyingInstrument_108.insert(UnderlyingDetachmentPoint_108.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_108;
    UnderlyingDirtyPrice_108.setString("2874963");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_108);
    UnderlyingInstrument_108.insert(UnderlyingDirtyPrice_108.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_108;
    UnderlyingEndPrice_108.setString("13821518");
    noUnderlyings_0_0.set(UnderlyingEndPrice_108);
    UnderlyingInstrument_108.insert(UnderlyingEndPrice_108.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_108;
    UnderlyingEndValue_108.setString("1824881");
    noUnderlyings_0_0.set(UnderlyingEndValue_108);
    UnderlyingInstrument_108.insert(UnderlyingEndValue_108.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_108(491831173);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_108);
    UnderlyingInstrument_108.insert(UnderlyingExerciseStyle_108.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_108;
    UnderlyingFXRate_108.setString("3326399");
    noUnderlyings_0_0.set(UnderlyingFXRate_108);
    UnderlyingInstrument_108.insert(UnderlyingFXRate_108.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_108('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_108);
    UnderlyingInstrument_108.insert(UnderlyingFXRateCalc_108.getString());
    FIX::UnderlyingFactor UnderlyingFactor_108;
    UnderlyingFactor_108.setString("12910083");
    noUnderlyings_0_0.set(UnderlyingFactor_108);
    UnderlyingInstrument_108.insert(UnderlyingFactor_108.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_108(2130784408);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_108);
    UnderlyingInstrument_108.insert(UnderlyingFlowScheduleType_108.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_108("STRING_2100876894");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_108);
    UnderlyingInstrument_108.insert(UnderlyingInstrRegistry_108.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_108("LOCALMKTDATE_1955008133");
    noUnderlyings_0_0.set(UnderlyingIssueDate_108);
    UnderlyingInstrument_108.insert(UnderlyingIssueDate_108.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_108("STRING_23621814");
    noUnderlyings_0_0.set(UnderlyingIssuer_108);
    UnderlyingInstrument_108.insert(UnderlyingIssuer_108.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_108("STRING_1948428391");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_108);
    UnderlyingInstrument_108.insert(UnderlyingLocaleOfIssue_108.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_108("LOCALMKTDATE_429382752");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_108);
    UnderlyingInstrument_108.insert(UnderlyingMaturityDate_108.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_108("MONTHYEAR_1049925884");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_108);
    UnderlyingInstrument_108.insert(UnderlyingMaturityMonthYear_108.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_108("TZTIMEONLY_2059815850");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_108);
    UnderlyingInstrument_108.insert(UnderlyingMaturityTime_108.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_108;
    UnderlyingNotionalPercentageOutstanding_108.setString("65.850000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_108);
    UnderlyingInstrument_108.insert(UnderlyingNotionalPercentageOutstanding_108.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_108('9');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_108);
    UnderlyingInstrument_108.insert(UnderlyingOptAttribute_108.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_108;
    UnderlyingOriginalNotionalPercentageOutstanding_108.setString("5.230000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_108);
    UnderlyingInstrument_108.insert(UnderlyingOriginalNotionalPercentageOutstanding_108.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_108("STRING_346638861");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_108);
    UnderlyingInstrument_108.insert(UnderlyingPriceUnitOfMeasure_108.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_108;
    UnderlyingPriceUnitOfMeasureQty_108.setString("13385571");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_108);
    UnderlyingInstrument_108.insert(UnderlyingPriceUnitOfMeasureQty_108.getString());
    FIX::UnderlyingProduct UnderlyingProduct_108(827940085);
    noUnderlyings_0_0.set(UnderlyingProduct_108);
    UnderlyingInstrument_108.insert(UnderlyingProduct_108.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_108(199920253);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_108);
    UnderlyingInstrument_108.insert(UnderlyingPutOrCall_108.getString());
    FIX::UnderlyingPx UnderlyingPx_108;
    UnderlyingPx_108.setString("20306296");
    noUnderlyings_0_0.set(UnderlyingPx_108);
    UnderlyingInstrument_108.insert(UnderlyingPx_108.getString());
    FIX::UnderlyingQty UnderlyingQty_108;
    UnderlyingQty_108.setString("13052143");
    noUnderlyings_0_0.set(UnderlyingQty_108);
    UnderlyingInstrument_108.insert(UnderlyingQty_108.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_108("LOCALMKTDATE_1828095626");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_108);
    UnderlyingInstrument_108.insert(UnderlyingRedemptionDate_108.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_108("STRING_586970426");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_108);
    UnderlyingInstrument_108.insert(UnderlyingRepoCollateralSecurityType_108.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_108;
    UnderlyingRepurchaseRate_108.setString("88.280000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_108);
    UnderlyingInstrument_108.insert(UnderlyingRepurchaseRate_108.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_108(1203703695);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_108);
    UnderlyingInstrument_108.insert(UnderlyingRepurchaseTerm_108.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_108("STRING_1205520575");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_108);
    UnderlyingInstrument_108.insert(UnderlyingRestructuringType_108.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_108("STRING_2024288747");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityDesc_108.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_108("EXCHANGE_810352673");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityExchange_108.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_108("STRING_1493016923");
    noUnderlyings_0_0.set(UnderlyingSecurityID_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityID_108.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_108("STRING_1258956918");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityIDSource_108.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_108("STRING_992840773");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_108);
    UnderlyingInstrument_108.insert(UnderlyingSecuritySubType_108.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_108("STRING_1984848096");
    noUnderlyings_0_0.set(UnderlyingSecurityType_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityType_108.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_108("STRING_1591596839");
    noUnderlyings_0_0.set(UnderlyingSeniority_108);
    UnderlyingInstrument_108.insert(UnderlyingSeniority_108.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_108("STRING_671516371");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_108);
    UnderlyingInstrument_108.insert(UnderlyingSettlMethod_108.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_108(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_108);
    UnderlyingInstrument_108.insert(UnderlyingSettlementType_108.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_108;
    UnderlyingStartValue_108.setString("15748976");
    noUnderlyings_0_0.set(UnderlyingStartValue_108);
    UnderlyingInstrument_108.insert(UnderlyingStartValue_108.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_108("STRING_624909617");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_108);
    UnderlyingInstrument_108.insert(UnderlyingStateOrProvinceOfIssue_108.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_108("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_108);
    UnderlyingInstrument_108.insert(UnderlyingStrikeCurrency_108.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_108;
    UnderlyingStrikePrice_108.setString("4258543");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_108);
    UnderlyingInstrument_108.insert(UnderlyingStrikePrice_108.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_108("STRING_1365280001");
    noUnderlyings_0_0.set(UnderlyingSymbol_108);
    UnderlyingInstrument_108.insert(UnderlyingSymbol_108.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_108("STRING_500961650");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_108);
    UnderlyingInstrument_108.insert(UnderlyingSymbolSfx_108.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_108("STRING_338186563");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_108);
    UnderlyingInstrument_108.insert(UnderlyingTimeUnit_108.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_108("STRING_1920556586");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_108);
    UnderlyingInstrument_108.insert(UnderlyingUnitOfMeasure_108.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_108;
    UnderlyingUnitOfMeasureQty_108.setString("14663688");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_108);
    UnderlyingInstrument_108.insert(UnderlyingUnitOfMeasureQty_108.getString());
    all_values.push_back(UnderlyingInstrument_108);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_214;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_214("STRING_119711800");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_214);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_214.insert(UnderlyingSecurityAltID_214.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_214("STRING_657442364");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_214);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_214.insert(UnderlyingSecurityAltIDSource_214.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_214);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_215;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_215("STRING_1127123523");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_215);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_215.insert(UnderlyingSecurityAltID_215.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_215("STRING_319632053");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_215);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_215.insert(UnderlyingSecurityAltIDSource_215.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_215);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_216;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_216("STRING_540588356");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_216);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_216.insert(UnderlyingSecurityAltID_216.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_216("STRING_284854209");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_216);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_216.insert(UnderlyingSecurityAltIDSource_216.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_216);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_209;
      FIX::UnderlyingStipType UnderlyingStipType_209("STRING_1127558782");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_209);
      UnderlyingStipulations_NoUnderlyingStips_209.insert(UnderlyingStipType_209.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_209("STRING_49529389");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_209);
      UnderlyingStipulations_NoUnderlyingStips_209.insert(UnderlyingStipValue_209.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_209);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_210;
      FIX::UnderlyingStipType UnderlyingStipType_210("STRING_1203947727");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_210);
      UnderlyingStipulations_NoUnderlyingStips_210.insert(UnderlyingStipType_210.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_210("STRING_185595709");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_210);
      UnderlyingStipulations_NoUnderlyingStips_210.insert(UnderlyingStipValue_210.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_210);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_211;
      FIX::UnderlyingStipType UnderlyingStipType_211("STRING_2073818136");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_211);
      UnderlyingStipulations_NoUnderlyingStips_211.insert(UnderlyingStipType_211.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_211("STRING_2014300400");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_211);
      UnderlyingStipulations_NoUnderlyingStips_211.insert(UnderlyingStipValue_211.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_211);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_218;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_218("STRING_1185291406");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_218);
      UndlyInstrumentParties_NoUndlyInstrumentParties_218.insert(UnderlyingInstrumentPartyID_218.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_218('8');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_218);
      UndlyInstrumentParties_NoUndlyInstrumentParties_218.insert(UnderlyingInstrumentPartyIDSource_218.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_218(1515977080);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_218);
      UndlyInstrumentParties_NoUndlyInstrumentParties_218.insert(UnderlyingInstrumentPartyRole_218.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_218);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_426("STRING_1531173896");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_426);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426.insert(UnderlyingInstrumentPartySubID_426.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_426(496866195);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_426);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426.insert(UnderlyingInstrumentPartySubIDType_426.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_427("STRING_56818550");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_427);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427.insert(UnderlyingInstrumentPartySubID_427.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_427(8599866);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_427);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427.insert(UnderlyingInstrumentPartySubIDType_427.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_428("STRING_1432763444");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_428);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428.insert(UnderlyingInstrumentPartySubID_428.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_428(1655337964);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_428);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428.insert(UnderlyingInstrumentPartySubIDType_428.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_109;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_109("DATA_434454227");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingIssuer_109.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_109(650559797);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingIssuerLen_109.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_109("DATA_8815967");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingSecurityDesc_109.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_109(772640790);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingSecurityDescLen_109.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_109;
    UnderlyingAdjustedQuantity_109.setString("4236327");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_109);
    UnderlyingInstrument_109.insert(UnderlyingAdjustedQuantity_109.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_109;
    UnderlyingAllocationPercent_109.setString("48.100000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_109);
    UnderlyingInstrument_109.insert(UnderlyingAllocationPercent_109.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_109;
    UnderlyingAttachmentPoint_109.setString("42.290000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_109);
    UnderlyingInstrument_109.insert(UnderlyingAttachmentPoint_109.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_109("STRING_543344535");
    noUnderlyings_0_1.set(UnderlyingCFICode_109);
    UnderlyingInstrument_109.insert(UnderlyingCFICode_109.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_109("STRING_2132627174");
    noUnderlyings_0_1.set(UnderlyingCPProgram_109);
    UnderlyingInstrument_109.insert(UnderlyingCPProgram_109.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_109("STRING_51464104");
    noUnderlyings_0_1.set(UnderlyingCPRegType_109);
    UnderlyingInstrument_109.insert(UnderlyingCPRegType_109.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_109;
    UnderlyingCapValue_109.setString("8629765");
    noUnderlyings_0_1.set(UnderlyingCapValue_109);
    UnderlyingInstrument_109.insert(UnderlyingCapValue_109.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_109;
    UnderlyingCashAmount_109.setString("5257318");
    noUnderlyings_0_1.set(UnderlyingCashAmount_109);
    UnderlyingInstrument_109.insert(UnderlyingCashAmount_109.getString());
    FIX::UnderlyingCashType UnderlyingCashType_109("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_109);
    UnderlyingInstrument_109.insert(UnderlyingCashType_109.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_109;
    UnderlyingContractMultiplier_109.setString("8632206");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_109);
    UnderlyingInstrument_109.insert(UnderlyingContractMultiplier_109.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_109(1653290664);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_109);
    UnderlyingInstrument_109.insert(UnderlyingContractMultiplierUnit_109.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_109("COUNTRY_385847703");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_109);
    UnderlyingInstrument_109.insert(UnderlyingCountryOfIssue_109.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_109("LOCALMKTDATE_2067168347");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_109);
    UnderlyingInstrument_109.insert(UnderlyingCouponPaymentDate_109.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_109;
    UnderlyingCouponRate_109.setString("63.730000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_109);
    UnderlyingInstrument_109.insert(UnderlyingCouponRate_109.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_109("STRING_312182192");
    noUnderlyings_0_1.set(UnderlyingCreditRating_109);
    UnderlyingInstrument_109.insert(UnderlyingCreditRating_109.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_109("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_109);
    UnderlyingInstrument_109.insert(UnderlyingCurrency_109.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_109;
    UnderlyingCurrentValue_109.setString("14974735");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_109);
    UnderlyingInstrument_109.insert(UnderlyingCurrentValue_109.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_109;
    UnderlyingDetachmentPoint_109.setString("89.770000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_109);
    UnderlyingInstrument_109.insert(UnderlyingDetachmentPoint_109.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_109;
    UnderlyingDirtyPrice_109.setString("7385087");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_109);
    UnderlyingInstrument_109.insert(UnderlyingDirtyPrice_109.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_109;
    UnderlyingEndPrice_109.setString("21268781");
    noUnderlyings_0_1.set(UnderlyingEndPrice_109);
    UnderlyingInstrument_109.insert(UnderlyingEndPrice_109.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_109;
    UnderlyingEndValue_109.setString("298492");
    noUnderlyings_0_1.set(UnderlyingEndValue_109);
    UnderlyingInstrument_109.insert(UnderlyingEndValue_109.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_109(1235374986);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_109);
    UnderlyingInstrument_109.insert(UnderlyingExerciseStyle_109.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_109;
    UnderlyingFXRate_109.setString("362130");
    noUnderlyings_0_1.set(UnderlyingFXRate_109);
    UnderlyingInstrument_109.insert(UnderlyingFXRate_109.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_109('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_109);
    UnderlyingInstrument_109.insert(UnderlyingFXRateCalc_109.getString());
    FIX::UnderlyingFactor UnderlyingFactor_109;
    UnderlyingFactor_109.setString("5206547");
    noUnderlyings_0_1.set(UnderlyingFactor_109);
    UnderlyingInstrument_109.insert(UnderlyingFactor_109.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_109(1691551063);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_109);
    UnderlyingInstrument_109.insert(UnderlyingFlowScheduleType_109.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_109("STRING_472903318");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_109);
    UnderlyingInstrument_109.insert(UnderlyingInstrRegistry_109.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_109("LOCALMKTDATE_1171214579");
    noUnderlyings_0_1.set(UnderlyingIssueDate_109);
    UnderlyingInstrument_109.insert(UnderlyingIssueDate_109.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_109("STRING_1700367030");
    noUnderlyings_0_1.set(UnderlyingIssuer_109);
    UnderlyingInstrument_109.insert(UnderlyingIssuer_109.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_109("STRING_1245544109");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_109);
    UnderlyingInstrument_109.insert(UnderlyingLocaleOfIssue_109.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_109("LOCALMKTDATE_1594847314");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_109);
    UnderlyingInstrument_109.insert(UnderlyingMaturityDate_109.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_109("MONTHYEAR_1028068192");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_109);
    UnderlyingInstrument_109.insert(UnderlyingMaturityMonthYear_109.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_109("TZTIMEONLY_169884690");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_109);
    UnderlyingInstrument_109.insert(UnderlyingMaturityTime_109.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_109;
    UnderlyingNotionalPercentageOutstanding_109.setString("18.500000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_109);
    UnderlyingInstrument_109.insert(UnderlyingNotionalPercentageOutstanding_109.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_109('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_109);
    UnderlyingInstrument_109.insert(UnderlyingOptAttribute_109.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_109;
    UnderlyingOriginalNotionalPercentageOutstanding_109.setString("87.940000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_109);
    UnderlyingInstrument_109.insert(UnderlyingOriginalNotionalPercentageOutstanding_109.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_109("STRING_853684791");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_109);
    UnderlyingInstrument_109.insert(UnderlyingPriceUnitOfMeasure_109.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_109;
    UnderlyingPriceUnitOfMeasureQty_109.setString("15389436");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_109);
    UnderlyingInstrument_109.insert(UnderlyingPriceUnitOfMeasureQty_109.getString());
    FIX::UnderlyingProduct UnderlyingProduct_109(557667108);
    noUnderlyings_0_1.set(UnderlyingProduct_109);
    UnderlyingInstrument_109.insert(UnderlyingProduct_109.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_109(1716905411);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_109);
    UnderlyingInstrument_109.insert(UnderlyingPutOrCall_109.getString());
    FIX::UnderlyingPx UnderlyingPx_109;
    UnderlyingPx_109.setString("10447506");
    noUnderlyings_0_1.set(UnderlyingPx_109);
    UnderlyingInstrument_109.insert(UnderlyingPx_109.getString());
    FIX::UnderlyingQty UnderlyingQty_109;
    UnderlyingQty_109.setString("9435148");
    noUnderlyings_0_1.set(UnderlyingQty_109);
    UnderlyingInstrument_109.insert(UnderlyingQty_109.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_109("LOCALMKTDATE_1636590111");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_109);
    UnderlyingInstrument_109.insert(UnderlyingRedemptionDate_109.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_109("STRING_736153341");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_109);
    UnderlyingInstrument_109.insert(UnderlyingRepoCollateralSecurityType_109.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_109;
    UnderlyingRepurchaseRate_109.setString("70.040000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_109);
    UnderlyingInstrument_109.insert(UnderlyingRepurchaseRate_109.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_109(1423091562);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_109);
    UnderlyingInstrument_109.insert(UnderlyingRepurchaseTerm_109.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_109("STRING_2106168699");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_109);
    UnderlyingInstrument_109.insert(UnderlyingRestructuringType_109.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_109("STRING_605686954");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityDesc_109.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_109("EXCHANGE_2069250539");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityExchange_109.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_109("STRING_697193842");
    noUnderlyings_0_1.set(UnderlyingSecurityID_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityID_109.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_109("STRING_585081503");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityIDSource_109.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_109("STRING_2099099765");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_109);
    UnderlyingInstrument_109.insert(UnderlyingSecuritySubType_109.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_109("STRING_1932568828");
    noUnderlyings_0_1.set(UnderlyingSecurityType_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityType_109.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_109("STRING_621294601");
    noUnderlyings_0_1.set(UnderlyingSeniority_109);
    UnderlyingInstrument_109.insert(UnderlyingSeniority_109.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_109("STRING_2137548856");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_109);
    UnderlyingInstrument_109.insert(UnderlyingSettlMethod_109.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_109(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_109);
    UnderlyingInstrument_109.insert(UnderlyingSettlementType_109.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_109;
    UnderlyingStartValue_109.setString("1653620");
    noUnderlyings_0_1.set(UnderlyingStartValue_109);
    UnderlyingInstrument_109.insert(UnderlyingStartValue_109.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_109("STRING_462968527");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_109);
    UnderlyingInstrument_109.insert(UnderlyingStateOrProvinceOfIssue_109.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_109("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_109);
    UnderlyingInstrument_109.insert(UnderlyingStrikeCurrency_109.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_109;
    UnderlyingStrikePrice_109.setString("17085126");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_109);
    UnderlyingInstrument_109.insert(UnderlyingStrikePrice_109.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_109("STRING_924318207");
    noUnderlyings_0_1.set(UnderlyingSymbol_109);
    UnderlyingInstrument_109.insert(UnderlyingSymbol_109.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_109("STRING_746313590");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_109);
    UnderlyingInstrument_109.insert(UnderlyingSymbolSfx_109.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_109("STRING_1878397326");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_109);
    UnderlyingInstrument_109.insert(UnderlyingTimeUnit_109.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_109("STRING_915026409");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_109);
    UnderlyingInstrument_109.insert(UnderlyingUnitOfMeasure_109.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_109;
    UnderlyingUnitOfMeasureQty_109.setString("17595253");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_109);
    UnderlyingInstrument_109.insert(UnderlyingUnitOfMeasureQty_109.getString());
    all_values.push_back(UnderlyingInstrument_109);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_217;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_217("STRING_1768711200");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_217);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_217.insert(UnderlyingSecurityAltID_217.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_217("STRING_1150985260");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_217);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_217.insert(UnderlyingSecurityAltIDSource_217.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_217);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_218;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_218("STRING_509929581");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_218);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_218.insert(UnderlyingSecurityAltID_218.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_218("STRING_1338132964");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_218);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_218.insert(UnderlyingSecurityAltIDSource_218.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_218);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_212;
      FIX::UnderlyingStipType UnderlyingStipType_212("STRING_1453444393");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_212);
      UnderlyingStipulations_NoUnderlyingStips_212.insert(UnderlyingStipType_212.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_212("STRING_827239427");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_212);
      UnderlyingStipulations_NoUnderlyingStips_212.insert(UnderlyingStipValue_212.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_212);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_219;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_219("STRING_561657749");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_219);
      UndlyInstrumentParties_NoUndlyInstrumentParties_219.insert(UnderlyingInstrumentPartyID_219.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_219('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_219);
      UndlyInstrumentParties_NoUndlyInstrumentParties_219.insert(UnderlyingInstrumentPartyIDSource_219.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_219(743090621);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_219);
      UndlyInstrumentParties_NoUndlyInstrumentParties_219.insert(UnderlyingInstrumentPartyRole_219.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_219);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_429("STRING_24614233");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_429);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429.insert(UnderlyingInstrumentPartySubID_429.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_429(1440284463);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_429);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429.insert(UnderlyingInstrumentPartySubIDType_429.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_220;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_220("STRING_1752426206");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_220);
      UndlyInstrumentParties_NoUndlyInstrumentParties_220.insert(UnderlyingInstrumentPartyID_220.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_220('2');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_220);
      UndlyInstrumentParties_NoUndlyInstrumentParties_220.insert(UnderlyingInstrumentPartyIDSource_220.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_220(1225369643);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_220);
      UndlyInstrumentParties_NoUndlyInstrumentParties_220.insert(UnderlyingInstrumentPartyRole_220.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_220);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_430("STRING_2113779206");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_430);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430.insert(UnderlyingInstrumentPartySubID_430.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_430(1531109605);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_430);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430.insert(UnderlyingInstrumentPartySubIDType_430.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_431("STRING_391599176");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_431);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431.insert(UnderlyingInstrumentPartySubID_431.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_431(429264085);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_431);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431.insert(UnderlyingInstrumentPartySubIDType_431.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_432("STRING_860580498");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_432);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432.insert(UnderlyingInstrumentPartySubID_432.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_432(109844575);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_432);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432.insert(UnderlyingInstrumentPartySubIDType_432.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_110;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_110("DATA_2137776721");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingIssuer_110.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_110(1784898706);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingIssuerLen_110.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_110("DATA_856158165");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingSecurityDesc_110.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_110(1868690399);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingSecurityDescLen_110.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_110;
    UnderlyingAdjustedQuantity_110.setString("5524414");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_110);
    UnderlyingInstrument_110.insert(UnderlyingAdjustedQuantity_110.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_110;
    UnderlyingAllocationPercent_110.setString("98.260000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_110);
    UnderlyingInstrument_110.insert(UnderlyingAllocationPercent_110.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_110;
    UnderlyingAttachmentPoint_110.setString("28.720000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_110);
    UnderlyingInstrument_110.insert(UnderlyingAttachmentPoint_110.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_110("STRING_173669020");
    noUnderlyings_0_2.set(UnderlyingCFICode_110);
    UnderlyingInstrument_110.insert(UnderlyingCFICode_110.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_110("STRING_1619185086");
    noUnderlyings_0_2.set(UnderlyingCPProgram_110);
    UnderlyingInstrument_110.insert(UnderlyingCPProgram_110.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_110("STRING_183398805");
    noUnderlyings_0_2.set(UnderlyingCPRegType_110);
    UnderlyingInstrument_110.insert(UnderlyingCPRegType_110.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_110;
    UnderlyingCapValue_110.setString("15118019");
    noUnderlyings_0_2.set(UnderlyingCapValue_110);
    UnderlyingInstrument_110.insert(UnderlyingCapValue_110.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_110;
    UnderlyingCashAmount_110.setString("16674373");
    noUnderlyings_0_2.set(UnderlyingCashAmount_110);
    UnderlyingInstrument_110.insert(UnderlyingCashAmount_110.getString());
    FIX::UnderlyingCashType UnderlyingCashType_110("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_110);
    UnderlyingInstrument_110.insert(UnderlyingCashType_110.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_110;
    UnderlyingContractMultiplier_110.setString("1915577");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_110);
    UnderlyingInstrument_110.insert(UnderlyingContractMultiplier_110.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_110(304359237);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_110);
    UnderlyingInstrument_110.insert(UnderlyingContractMultiplierUnit_110.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_110("COUNTRY_51017299");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_110);
    UnderlyingInstrument_110.insert(UnderlyingCountryOfIssue_110.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_110("LOCALMKTDATE_294405104");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_110);
    UnderlyingInstrument_110.insert(UnderlyingCouponPaymentDate_110.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_110;
    UnderlyingCouponRate_110.setString("98.580000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_110);
    UnderlyingInstrument_110.insert(UnderlyingCouponRate_110.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_110("STRING_1218362002");
    noUnderlyings_0_2.set(UnderlyingCreditRating_110);
    UnderlyingInstrument_110.insert(UnderlyingCreditRating_110.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_110("JPY");
    noUnderlyings_0_2.set(UnderlyingCurrency_110);
    UnderlyingInstrument_110.insert(UnderlyingCurrency_110.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_110;
    UnderlyingCurrentValue_110.setString("8233045");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_110);
    UnderlyingInstrument_110.insert(UnderlyingCurrentValue_110.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_110;
    UnderlyingDetachmentPoint_110.setString("96.870000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_110);
    UnderlyingInstrument_110.insert(UnderlyingDetachmentPoint_110.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_110;
    UnderlyingDirtyPrice_110.setString("15656203");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_110);
    UnderlyingInstrument_110.insert(UnderlyingDirtyPrice_110.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_110;
    UnderlyingEndPrice_110.setString("10495417");
    noUnderlyings_0_2.set(UnderlyingEndPrice_110);
    UnderlyingInstrument_110.insert(UnderlyingEndPrice_110.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_110;
    UnderlyingEndValue_110.setString("2615452");
    noUnderlyings_0_2.set(UnderlyingEndValue_110);
    UnderlyingInstrument_110.insert(UnderlyingEndValue_110.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_110(949246275);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_110);
    UnderlyingInstrument_110.insert(UnderlyingExerciseStyle_110.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_110;
    UnderlyingFXRate_110.setString("14411408");
    noUnderlyings_0_2.set(UnderlyingFXRate_110);
    UnderlyingInstrument_110.insert(UnderlyingFXRate_110.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_110('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_110);
    UnderlyingInstrument_110.insert(UnderlyingFXRateCalc_110.getString());
    FIX::UnderlyingFactor UnderlyingFactor_110;
    UnderlyingFactor_110.setString("18098267");
    noUnderlyings_0_2.set(UnderlyingFactor_110);
    UnderlyingInstrument_110.insert(UnderlyingFactor_110.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_110(1550985472);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_110);
    UnderlyingInstrument_110.insert(UnderlyingFlowScheduleType_110.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_110("STRING_681102405");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_110);
    UnderlyingInstrument_110.insert(UnderlyingInstrRegistry_110.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_110("LOCALMKTDATE_1447241831");
    noUnderlyings_0_2.set(UnderlyingIssueDate_110);
    UnderlyingInstrument_110.insert(UnderlyingIssueDate_110.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_110("STRING_259659990");
    noUnderlyings_0_2.set(UnderlyingIssuer_110);
    UnderlyingInstrument_110.insert(UnderlyingIssuer_110.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_110("STRING_402309156");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_110);
    UnderlyingInstrument_110.insert(UnderlyingLocaleOfIssue_110.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_110("LOCALMKTDATE_1999683299");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_110);
    UnderlyingInstrument_110.insert(UnderlyingMaturityDate_110.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_110("MONTHYEAR_727859816");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_110);
    UnderlyingInstrument_110.insert(UnderlyingMaturityMonthYear_110.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_110("TZTIMEONLY_75778380");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_110);
    UnderlyingInstrument_110.insert(UnderlyingMaturityTime_110.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_110;
    UnderlyingNotionalPercentageOutstanding_110.setString("86.710000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_110);
    UnderlyingInstrument_110.insert(UnderlyingNotionalPercentageOutstanding_110.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_110('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_110);
    UnderlyingInstrument_110.insert(UnderlyingOptAttribute_110.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_110;
    UnderlyingOriginalNotionalPercentageOutstanding_110.setString("71.850000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_110);
    UnderlyingInstrument_110.insert(UnderlyingOriginalNotionalPercentageOutstanding_110.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_110("STRING_1537670655");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_110);
    UnderlyingInstrument_110.insert(UnderlyingPriceUnitOfMeasure_110.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_110;
    UnderlyingPriceUnitOfMeasureQty_110.setString("18669985");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_110);
    UnderlyingInstrument_110.insert(UnderlyingPriceUnitOfMeasureQty_110.getString());
    FIX::UnderlyingProduct UnderlyingProduct_110(1896020383);
    noUnderlyings_0_2.set(UnderlyingProduct_110);
    UnderlyingInstrument_110.insert(UnderlyingProduct_110.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_110(1729228418);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_110);
    UnderlyingInstrument_110.insert(UnderlyingPutOrCall_110.getString());
    FIX::UnderlyingPx UnderlyingPx_110;
    UnderlyingPx_110.setString("238741");
    noUnderlyings_0_2.set(UnderlyingPx_110);
    UnderlyingInstrument_110.insert(UnderlyingPx_110.getString());
    FIX::UnderlyingQty UnderlyingQty_110;
    UnderlyingQty_110.setString("19470376");
    noUnderlyings_0_2.set(UnderlyingQty_110);
    UnderlyingInstrument_110.insert(UnderlyingQty_110.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_110("LOCALMKTDATE_2023633522");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_110);
    UnderlyingInstrument_110.insert(UnderlyingRedemptionDate_110.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_110("STRING_1071324017");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_110);
    UnderlyingInstrument_110.insert(UnderlyingRepoCollateralSecurityType_110.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_110;
    UnderlyingRepurchaseRate_110.setString("60.370000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_110);
    UnderlyingInstrument_110.insert(UnderlyingRepurchaseRate_110.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_110(195169212);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_110);
    UnderlyingInstrument_110.insert(UnderlyingRepurchaseTerm_110.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_110("STRING_1411574691");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_110);
    UnderlyingInstrument_110.insert(UnderlyingRestructuringType_110.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_110("STRING_1841220598");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityDesc_110.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_110("EXCHANGE_490418899");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityExchange_110.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_110("STRING_829711360");
    noUnderlyings_0_2.set(UnderlyingSecurityID_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityID_110.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_110("STRING_743278671");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityIDSource_110.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_110("STRING_751964145");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_110);
    UnderlyingInstrument_110.insert(UnderlyingSecuritySubType_110.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_110("STRING_1778957635");
    noUnderlyings_0_2.set(UnderlyingSecurityType_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityType_110.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_110("STRING_36935920");
    noUnderlyings_0_2.set(UnderlyingSeniority_110);
    UnderlyingInstrument_110.insert(UnderlyingSeniority_110.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_110("STRING_1442773477");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_110);
    UnderlyingInstrument_110.insert(UnderlyingSettlMethod_110.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_110(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_110);
    UnderlyingInstrument_110.insert(UnderlyingSettlementType_110.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_110;
    UnderlyingStartValue_110.setString("15879213");
    noUnderlyings_0_2.set(UnderlyingStartValue_110);
    UnderlyingInstrument_110.insert(UnderlyingStartValue_110.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_110("STRING_2123875882");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_110);
    UnderlyingInstrument_110.insert(UnderlyingStateOrProvinceOfIssue_110.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_110("CHF");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_110);
    UnderlyingInstrument_110.insert(UnderlyingStrikeCurrency_110.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_110;
    UnderlyingStrikePrice_110.setString("3787013");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_110);
    UnderlyingInstrument_110.insert(UnderlyingStrikePrice_110.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_110("STRING_593258595");
    noUnderlyings_0_2.set(UnderlyingSymbol_110);
    UnderlyingInstrument_110.insert(UnderlyingSymbol_110.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_110("STRING_427957551");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_110);
    UnderlyingInstrument_110.insert(UnderlyingSymbolSfx_110.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_110("STRING_454479771");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_110);
    UnderlyingInstrument_110.insert(UnderlyingTimeUnit_110.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_110("STRING_619127266");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_110);
    UnderlyingInstrument_110.insert(UnderlyingUnitOfMeasure_110.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_110;
    UnderlyingUnitOfMeasureQty_110.setString("6275188");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_110);
    UnderlyingInstrument_110.insert(UnderlyingUnitOfMeasureQty_110.getString());
    all_values.push_back(UnderlyingInstrument_110);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_219;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_219("STRING_9314273");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_219);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_219.insert(UnderlyingSecurityAltID_219.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_219("STRING_347033727");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_219);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_219.insert(UnderlyingSecurityAltIDSource_219.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_219);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_213;
      FIX::UnderlyingStipType UnderlyingStipType_213("STRING_1738542691");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_213);
      UnderlyingStipulations_NoUnderlyingStips_213.insert(UnderlyingStipType_213.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_213("STRING_370907885");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_213);
      UnderlyingStipulations_NoUnderlyingStips_213.insert(UnderlyingStipValue_213.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_213);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_221;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_221("STRING_1614692566");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_221);
      UndlyInstrumentParties_NoUndlyInstrumentParties_221.insert(UnderlyingInstrumentPartyID_221.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_221('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_221);
      UndlyInstrumentParties_NoUndlyInstrumentParties_221.insert(UnderlyingInstrumentPartyIDSource_221.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_221(1279663763);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_221);
      UndlyInstrumentParties_NoUndlyInstrumentParties_221.insert(UnderlyingInstrumentPartyRole_221.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_221);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_433("STRING_706322945");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_433);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433.insert(UnderlyingInstrumentPartySubID_433.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_433(973400713);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_433);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433.insert(UnderlyingInstrumentPartySubIDType_433.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_434("STRING_152797029");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_434);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434.insert(UnderlyingInstrumentPartySubID_434.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_434(1536034306);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_434);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434.insert(UnderlyingInstrumentPartySubIDType_434.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
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
