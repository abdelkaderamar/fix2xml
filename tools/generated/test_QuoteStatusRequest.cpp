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
  FIX::Account Account_37("STRING_1667778434");
  msg.set(Account_37);
  QuoteStatusRequest_0.insert(Account_37.getString());
  FIX::AccountType AccountType_32(8);
  msg.set(AccountType_32);
  QuoteStatusRequest_0.insert(AccountType_32.getString());
  FIX::AcctIDSource AcctIDSource_30(99);
  msg.set(AcctIDSource_30);
  QuoteStatusRequest_0.insert(AcctIDSource_30.getString());
  FIX::QuoteID QuoteID_12("STRING_1444776115");
  msg.set(QuoteID_12);
  QuoteStatusRequest_0.insert(QuoteID_12.getString());
  FIX::QuoteStatusReqID QuoteStatusReqID_1("STRING_116767326");
  msg.set(QuoteStatusReqID_1);
  QuoteStatusRequest_0.insert(QuoteStatusReqID_1.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_5('0');
  msg.set(SubscriptionRequestType_5);
  QuoteStatusRequest_0.insert(SubscriptionRequestType_5.getString());
  FIX::TradingSessionID TradingSessionID_71("STRING_5");
  msg.set(TradingSessionID_71);
  QuoteStatusRequest_0.insert(TradingSessionID_71.getString());
  FIX::TradingSessionSubID TradingSessionSubID_71("STRING_5");
  msg.set(TradingSessionSubID_71);
  QuoteStatusRequest_0.insert(TradingSessionSubID_71.getString());
  all_values.push_back(QuoteStatusRequest_0);

  // FinancingDetails
  multiset<string> FinancingDetails_23;
  FIX::AgreementCurrency AgreementCurrency_23("USD");
  msg.set(AgreementCurrency_23);
  FinancingDetails_23.insert(AgreementCurrency_23.getString());
  FIX::AgreementDate AgreementDate_23("LOCALMKTDATE_1421776968");
  msg.set(AgreementDate_23);
  FinancingDetails_23.insert(AgreementDate_23.getString());
  FIX::AgreementDesc AgreementDesc_23("STRING_1663147636");
  msg.set(AgreementDesc_23);
  FinancingDetails_23.insert(AgreementDesc_23.getString());
  FIX::AgreementID AgreementID_23("STRING_1971466966");
  msg.set(AgreementID_23);
  FinancingDetails_23.insert(AgreementID_23.getString());
  FIX::DeliveryType DeliveryType_23(2);
  msg.set(DeliveryType_23);
  FinancingDetails_23.insert(DeliveryType_23.getString());
  FIX::EndDate EndDate_23("LOCALMKTDATE_168639465");
  msg.set(EndDate_23);
  FinancingDetails_23.insert(EndDate_23.getString());
  FIX::MarginRatio MarginRatio_23;
  MarginRatio_23.setString("50.370000");
  msg.set(MarginRatio_23);
  FinancingDetails_23.insert(MarginRatio_23.getString());
  FIX::StartDate StartDate_23("LOCALMKTDATE_1734970280");
  msg.set(StartDate_23);
  FinancingDetails_23.insert(StartDate_23.getString());
  FIX::TerminationType TerminationType_23(2);
  msg.set(TerminationType_23);
  FinancingDetails_23.insert(TerminationType_23.getString());
  all_values.push_back(FinancingDetails_23);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::QuoteStatusRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_106;
    FIX::EncodedLegIssuer EncodedLegIssuer_106("DATA_1898666079");
    noLegs_0_0.set(EncodedLegIssuer_106);
    InstrumentLeg_106.insert(EncodedLegIssuer_106.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_106(839094437);
    noLegs_0_0.set(EncodedLegIssuerLen_106);
    InstrumentLeg_106.insert(EncodedLegIssuerLen_106.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_106("DATA_1813918720");
    noLegs_0_0.set(EncodedLegSecurityDesc_106);
    InstrumentLeg_106.insert(EncodedLegSecurityDesc_106.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_106(1264472855);
    noLegs_0_0.set(EncodedLegSecurityDescLen_106);
    InstrumentLeg_106.insert(EncodedLegSecurityDescLen_106.getString());
    FIX::LegCFICode LegCFICode_106("STRING_1181670404");
    noLegs_0_0.set(LegCFICode_106);
    InstrumentLeg_106.insert(LegCFICode_106.getString());
    FIX::LegContractMultiplier LegContractMultiplier_106;
    LegContractMultiplier_106.setString("20534194");
    noLegs_0_0.set(LegContractMultiplier_106);
    InstrumentLeg_106.insert(LegContractMultiplier_106.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_106(982905982);
    noLegs_0_0.set(LegContractMultiplierUnit_106);
    InstrumentLeg_106.insert(LegContractMultiplierUnit_106.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_106("MONTHYEAR_504094511");
    noLegs_0_0.set(LegContractSettlMonth_106);
    InstrumentLeg_106.insert(LegContractSettlMonth_106.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_106("COUNTRY_904142615");
    noLegs_0_0.set(LegCountryOfIssue_106);
    InstrumentLeg_106.insert(LegCountryOfIssue_106.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_106("LOCALMKTDATE_733619938");
    noLegs_0_0.set(LegCouponPaymentDate_106);
    InstrumentLeg_106.insert(LegCouponPaymentDate_106.getString());
    FIX::LegCouponRate LegCouponRate_106;
    LegCouponRate_106.setString("81.920000");
    noLegs_0_0.set(LegCouponRate_106);
    InstrumentLeg_106.insert(LegCouponRate_106.getString());
    FIX::LegCreditRating LegCreditRating_106("STRING_1510158037");
    noLegs_0_0.set(LegCreditRating_106);
    InstrumentLeg_106.insert(LegCreditRating_106.getString());
    FIX::LegCurrency LegCurrency_106("USD");
    noLegs_0_0.set(LegCurrency_106);
    InstrumentLeg_106.insert(LegCurrency_106.getString());
    FIX::LegDatedDate LegDatedDate_106("LOCALMKTDATE_1598682552");
    noLegs_0_0.set(LegDatedDate_106);
    InstrumentLeg_106.insert(LegDatedDate_106.getString());
    FIX::LegExerciseStyle LegExerciseStyle_106(1698690839);
    noLegs_0_0.set(LegExerciseStyle_106);
    InstrumentLeg_106.insert(LegExerciseStyle_106.getString());
    FIX::LegFactor LegFactor_106;
    LegFactor_106.setString("17259086");
    noLegs_0_0.set(LegFactor_106);
    InstrumentLeg_106.insert(LegFactor_106.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_106(1709182716);
    noLegs_0_0.set(LegFlowScheduleType_106);
    InstrumentLeg_106.insert(LegFlowScheduleType_106.getString());
    FIX::LegInstrRegistry LegInstrRegistry_106("STRING_1508659195");
    noLegs_0_0.set(LegInstrRegistry_106);
    InstrumentLeg_106.insert(LegInstrRegistry_106.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_106("LOCALMKTDATE_835811244");
    noLegs_0_0.set(LegInterestAccrualDate_106);
    InstrumentLeg_106.insert(LegInterestAccrualDate_106.getString());
    FIX::LegIssueDate LegIssueDate_106("LOCALMKTDATE_2068809093");
    noLegs_0_0.set(LegIssueDate_106);
    InstrumentLeg_106.insert(LegIssueDate_106.getString());
    FIX::LegIssuer LegIssuer_106("STRING_1623186319");
    noLegs_0_0.set(LegIssuer_106);
    InstrumentLeg_106.insert(LegIssuer_106.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_106("STRING_110104564");
    noLegs_0_0.set(LegLocaleOfIssue_106);
    InstrumentLeg_106.insert(LegLocaleOfIssue_106.getString());
    FIX::LegMaturityDate LegMaturityDate_106("LOCALMKTDATE_1584473081");
    noLegs_0_0.set(LegMaturityDate_106);
    InstrumentLeg_106.insert(LegMaturityDate_106.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_106("MONTHYEAR_1447169637");
    noLegs_0_0.set(LegMaturityMonthYear_106);
    InstrumentLeg_106.insert(LegMaturityMonthYear_106.getString());
    FIX::LegMaturityTime LegMaturityTime_106("TZTIMEONLY_1546365222");
    noLegs_0_0.set(LegMaturityTime_106);
    InstrumentLeg_106.insert(LegMaturityTime_106.getString());
    FIX::LegOptAttribute LegOptAttribute_106('1');
    noLegs_0_0.set(LegOptAttribute_106);
    InstrumentLeg_106.insert(LegOptAttribute_106.getString());
    FIX::LegOptionRatio LegOptionRatio_106;
    LegOptionRatio_106.setString("4717510");
    noLegs_0_0.set(LegOptionRatio_106);
    InstrumentLeg_106.insert(LegOptionRatio_106.getString());
    FIX::LegPool LegPool_106("STRING_1133851855");
    noLegs_0_0.set(LegPool_106);
    InstrumentLeg_106.insert(LegPool_106.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_106("STRING_185997664");
    noLegs_0_0.set(LegPriceUnitOfMeasure_106);
    InstrumentLeg_106.insert(LegPriceUnitOfMeasure_106.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_106;
    LegPriceUnitOfMeasureQty_106.setString("18867940");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_106);
    InstrumentLeg_106.insert(LegPriceUnitOfMeasureQty_106.getString());
    FIX::LegProduct LegProduct_106(885034286);
    noLegs_0_0.set(LegProduct_106);
    InstrumentLeg_106.insert(LegProduct_106.getString());
    FIX::LegPutOrCall LegPutOrCall_106(1025092101);
    noLegs_0_0.set(LegPutOrCall_106);
    InstrumentLeg_106.insert(LegPutOrCall_106.getString());
    FIX::LegRatioQty LegRatioQty_106;
    LegRatioQty_106.setString("15532291");
    noLegs_0_0.set(LegRatioQty_106);
    InstrumentLeg_106.insert(LegRatioQty_106.getString());
    FIX::LegRedemptionDate LegRedemptionDate_106("LOCALMKTDATE_2023493");
    noLegs_0_0.set(LegRedemptionDate_106);
    InstrumentLeg_106.insert(LegRedemptionDate_106.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_106("STRING_59278857");
    noLegs_0_0.set(LegRepoCollateralSecurityType_106);
    InstrumentLeg_106.insert(LegRepoCollateralSecurityType_106.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_106;
    LegRepurchaseRate_106.setString("48.750000");
    noLegs_0_0.set(LegRepurchaseRate_106);
    InstrumentLeg_106.insert(LegRepurchaseRate_106.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_106(984929475);
    noLegs_0_0.set(LegRepurchaseTerm_106);
    InstrumentLeg_106.insert(LegRepurchaseTerm_106.getString());
    FIX::LegSecurityDesc LegSecurityDesc_106("STRING_563373368");
    noLegs_0_0.set(LegSecurityDesc_106);
    InstrumentLeg_106.insert(LegSecurityDesc_106.getString());
    FIX::LegSecurityExchange LegSecurityExchange_106("EXCHANGE_215823842");
    noLegs_0_0.set(LegSecurityExchange_106);
    InstrumentLeg_106.insert(LegSecurityExchange_106.getString());
    FIX::LegSecurityID LegSecurityID_106("STRING_1718549414");
    noLegs_0_0.set(LegSecurityID_106);
    InstrumentLeg_106.insert(LegSecurityID_106.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_106("STRING_196337912");
    noLegs_0_0.set(LegSecurityIDSource_106);
    InstrumentLeg_106.insert(LegSecurityIDSource_106.getString());
    FIX::LegSecuritySubType LegSecuritySubType_106("STRING_1725981879");
    noLegs_0_0.set(LegSecuritySubType_106);
    InstrumentLeg_106.insert(LegSecuritySubType_106.getString());
    FIX::LegSecurityType LegSecurityType_106("STRING_1972464138");
    noLegs_0_0.set(LegSecurityType_106);
    InstrumentLeg_106.insert(LegSecurityType_106.getString());
    FIX::LegSide LegSide_106('1');
    noLegs_0_0.set(LegSide_106);
    InstrumentLeg_106.insert(LegSide_106.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_106("STRING_1177180784");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_106);
    InstrumentLeg_106.insert(LegStateOrProvinceOfIssue_106.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_106("USD");
    noLegs_0_0.set(LegStrikeCurrency_106);
    InstrumentLeg_106.insert(LegStrikeCurrency_106.getString());
    FIX::LegStrikePrice LegStrikePrice_106;
    LegStrikePrice_106.setString("7388798");
    noLegs_0_0.set(LegStrikePrice_106);
    InstrumentLeg_106.insert(LegStrikePrice_106.getString());
    FIX::LegSymbol LegSymbol_106("STRING_884846877");
    noLegs_0_0.set(LegSymbol_106);
    InstrumentLeg_106.insert(LegSymbol_106.getString());
    FIX::LegSymbolSfx LegSymbolSfx_106("STRING_72231838");
    noLegs_0_0.set(LegSymbolSfx_106);
    InstrumentLeg_106.insert(LegSymbolSfx_106.getString());
    FIX::LegTimeUnit LegTimeUnit_106("STRING_660205297");
    noLegs_0_0.set(LegTimeUnit_106);
    InstrumentLeg_106.insert(LegTimeUnit_106.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_106("STRING_360549549");
    noLegs_0_0.set(LegUnitOfMeasure_106);
    InstrumentLeg_106.insert(LegUnitOfMeasure_106.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_106;
    LegUnitOfMeasureQty_106.setString("1823364");
    noLegs_0_0.set(LegUnitOfMeasureQty_106);
    InstrumentLeg_106.insert(LegUnitOfMeasureQty_106.getString());
    all_values.push_back(InstrumentLeg_106);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_212;
      FIX::LegSecurityAltID LegSecurityAltID_212("STRING_1807719186");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_212);
      LegSecAltIDGrp_NoLegSecurityAltID_212.insert(LegSecurityAltID_212.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_212("STRING_1728701625");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_212);
      LegSecAltIDGrp_NoLegSecurityAltID_212.insert(LegSecurityAltIDSource_212.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_212);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_213;
      FIX::LegSecurityAltID LegSecurityAltID_213("STRING_1850307277");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_213);
      LegSecAltIDGrp_NoLegSecurityAltID_213.insert(LegSecurityAltID_213.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_213("STRING_131986565");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_213);
      LegSecAltIDGrp_NoLegSecurityAltID_213.insert(LegSecurityAltIDSource_213.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_213);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_67;
  FIX::AttachmentPoint AttachmentPoint_67;
  AttachmentPoint_67.setString("98.320000");
  msg.set(AttachmentPoint_67);
  Instrument_67.insert(AttachmentPoint_67.getString());
  FIX::CFICode CFICode_67("STRING_2036304941");
  msg.set(CFICode_67);
  Instrument_67.insert(CFICode_67.getString());
  FIX::CPProgram CPProgram_67(99);
  msg.set(CPProgram_67);
  Instrument_67.insert(CPProgram_67.getString());
  FIX::CPRegType CPRegType_67("STRING_1600104119");
  msg.set(CPRegType_67);
  Instrument_67.insert(CPRegType_67.getString());
  FIX::CapPrice CapPrice_67;
  CapPrice_67.setString("9139133");
  msg.set(CapPrice_67);
  Instrument_67.insert(CapPrice_67.getString());
  FIX::ContractMultiplier ContractMultiplier_67;
  ContractMultiplier_67.setString("14245260");
  msg.set(ContractMultiplier_67);
  Instrument_67.insert(ContractMultiplier_67.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_67(1);
  msg.set(ContractMultiplierUnit_67);
  Instrument_67.insert(ContractMultiplierUnit_67.getString());
  FIX::ContractSettlMonth ContractSettlMonth_67("MONTHYEAR_973192251");
  msg.set(ContractSettlMonth_67);
  Instrument_67.insert(ContractSettlMonth_67.getString());
  FIX::CountryOfIssue CountryOfIssue_67("COUNTRY_736207282");
  msg.set(CountryOfIssue_67);
  Instrument_67.insert(CountryOfIssue_67.getString());
  FIX::CouponPaymentDate CouponPaymentDate_67("LOCALMKTDATE_439573440");
  msg.set(CouponPaymentDate_67);
  Instrument_67.insert(CouponPaymentDate_67.getString());
  FIX::CouponRate CouponRate_67;
  CouponRate_67.setString("56.190000");
  msg.set(CouponRate_67);
  Instrument_67.insert(CouponRate_67.getString());
  FIX::CreditRating CreditRating_67("STRING_952031124");
  msg.set(CreditRating_67);
  Instrument_67.insert(CreditRating_67.getString());
  FIX::DatedDate DatedDate_67("LOCALMKTDATE_10639206");
  msg.set(DatedDate_67);
  Instrument_67.insert(DatedDate_67.getString());
  FIX::DetachmentPoint DetachmentPoint_67;
  DetachmentPoint_67.setString("35.310000");
  msg.set(DetachmentPoint_67);
  Instrument_67.insert(DetachmentPoint_67.getString());
  FIX::EncodedIssuer EncodedIssuer_67("DATA_530529356");
  msg.set(EncodedIssuer_67);
  Instrument_67.insert(EncodedIssuer_67.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_67(1983103344);
  msg.set(EncodedIssuerLen_67);
  Instrument_67.insert(EncodedIssuerLen_67.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_67("DATA_1390899121");
  msg.set(EncodedSecurityDesc_67);
  Instrument_67.insert(EncodedSecurityDesc_67.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_67(1707710140);
  msg.set(EncodedSecurityDescLen_67);
  Instrument_67.insert(EncodedSecurityDescLen_67.getString());
  FIX::ExerciseStyle ExerciseStyle_67(2);
  msg.set(ExerciseStyle_67);
  Instrument_67.insert(ExerciseStyle_67.getString());
  FIX::Factor Factor_67;
  Factor_67.setString("6273197");
  msg.set(Factor_67);
  Instrument_67.insert(Factor_67.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_67(true);
  msg.set(FlexProductEligibilityIndicator_67);
  Instrument_67.insert(FlexProductEligibilityIndicator_67.getString());
  FIX::FlexibleIndicator FlexibleIndicator_67(true);
  msg.set(FlexibleIndicator_67);
  Instrument_67.insert(FlexibleIndicator_67.getString());
  FIX::FloorPrice FloorPrice_67;
  FloorPrice_67.setString("6995515");
  msg.set(FloorPrice_67);
  Instrument_67.insert(FloorPrice_67.getString());
  FIX::FlowScheduleType FlowScheduleType_67(2);
  msg.set(FlowScheduleType_67);
  Instrument_67.insert(FlowScheduleType_67.getString());
  FIX::InstrRegistry InstrRegistry_67("STRING_457203805");
  msg.set(InstrRegistry_67);
  Instrument_67.insert(InstrRegistry_67.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_67('8');
  msg.set(InstrmtAssignmentMethod_67);
  Instrument_67.insert(InstrmtAssignmentMethod_67.getString());
  FIX::InterestAccrualDate InterestAccrualDate_67("LOCALMKTDATE_1056506372");
  msg.set(InterestAccrualDate_67);
  Instrument_67.insert(InterestAccrualDate_67.getString());
  FIX::IssueDate IssueDate_67("LOCALMKTDATE_117439343");
  msg.set(IssueDate_67);
  Instrument_67.insert(IssueDate_67.getString());
  FIX::Issuer Issuer_67("STRING_463105934");
  msg.set(Issuer_67);
  Instrument_67.insert(Issuer_67.getString());
  FIX::ListMethod ListMethod_67(1);
  msg.set(ListMethod_67);
  Instrument_67.insert(ListMethod_67.getString());
  FIX::LocaleOfIssue LocaleOfIssue_67("STRING_249425908");
  msg.set(LocaleOfIssue_67);
  Instrument_67.insert(LocaleOfIssue_67.getString());
  FIX::MaturityDate MaturityDate_67("LOCALMKTDATE_1178175767");
  msg.set(MaturityDate_67);
  Instrument_67.insert(MaturityDate_67.getString());
  FIX::MaturityMonthYear MaturityMonthYear_67("MONTHYEAR_648151294");
  msg.set(MaturityMonthYear_67);
  Instrument_67.insert(MaturityMonthYear_67.getString());
  FIX::MaturityTime MaturityTime_67("TZTIMEONLY_120722858");
  msg.set(MaturityTime_67);
  Instrument_67.insert(MaturityTime_67.getString());
  FIX::MinPriceIncrement MinPriceIncrement_67;
  MinPriceIncrement_67.setString("6307962");
  msg.set(MinPriceIncrement_67);
  Instrument_67.insert(MinPriceIncrement_67.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_67;
  MinPriceIncrementAmount_67.setString("15620646");
  msg.set(MinPriceIncrementAmount_67);
  Instrument_67.insert(MinPriceIncrementAmount_67.getString());
  FIX::NTPositionLimit NTPositionLimit_67(1545248912);
  msg.set(NTPositionLimit_67);
  Instrument_67.insert(NTPositionLimit_67.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_67;
  NotionalPercentageOutstanding_67.setString("2.020000");
  msg.set(NotionalPercentageOutstanding_67);
  Instrument_67.insert(NotionalPercentageOutstanding_67.getString());
  FIX::OptAttribute OptAttribute_67('3');
  msg.set(OptAttribute_67);
  Instrument_67.insert(OptAttribute_67.getString());
  FIX::OptPayoutAmount OptPayoutAmount_67;
  OptPayoutAmount_67.setString("1339725");
  msg.set(OptPayoutAmount_67);
  Instrument_67.insert(OptPayoutAmount_67.getString());
  FIX::OptPayoutType OptPayoutType_67(2);
  msg.set(OptPayoutType_67);
  Instrument_67.insert(OptPayoutType_67.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_67;
  OriginalNotionalPercentageOutstanding_67.setString("89.100000");
  msg.set(OriginalNotionalPercentageOutstanding_67);
  Instrument_67.insert(OriginalNotionalPercentageOutstanding_67.getString());
  FIX::Pool Pool_67("STRING_1086003671");
  msg.set(Pool_67);
  Instrument_67.insert(Pool_67.getString());
  FIX::PositionLimit PositionLimit_67(535652848);
  msg.set(PositionLimit_67);
  Instrument_67.insert(PositionLimit_67.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_67("STRING_INX");
  msg.set(PriceQuoteMethod_67);
  Instrument_67.insert(PriceQuoteMethod_67.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_67("STRING_1616533027");
  msg.set(PriceUnitOfMeasure_67);
  Instrument_67.insert(PriceUnitOfMeasure_67.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_67;
  PriceUnitOfMeasureQty_67.setString("3712725");
  msg.set(PriceUnitOfMeasureQty_67);
  Instrument_67.insert(PriceUnitOfMeasureQty_67.getString());
  FIX::Product Product_69(1);
  msg.set(Product_69);
  Instrument_67.insert(Product_69.getString());
  FIX::ProductComplex ProductComplex_67("STRING_1176759519");
  msg.set(ProductComplex_67);
  Instrument_67.insert(ProductComplex_67.getString());
  FIX::PutOrCall PutOrCall_67(1);
  msg.set(PutOrCall_67);
  Instrument_67.insert(PutOrCall_67.getString());
  FIX::RedemptionDate RedemptionDate_67("LOCALMKTDATE_1380493982");
  msg.set(RedemptionDate_67);
  Instrument_67.insert(RedemptionDate_67.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_67("STRING_1475865863");
  msg.set(RepoCollateralSecurityType_67);
  Instrument_67.insert(RepoCollateralSecurityType_67.getString());
  FIX::RepurchaseRate RepurchaseRate_67;
  RepurchaseRate_67.setString("78.270000");
  msg.set(RepurchaseRate_67);
  Instrument_67.insert(RepurchaseRate_67.getString());
  FIX::RepurchaseTerm RepurchaseTerm_67(2080045536);
  msg.set(RepurchaseTerm_67);
  Instrument_67.insert(RepurchaseTerm_67.getString());
  FIX::RestructuringType RestructuringType_67("STRING_MR");
  msg.set(RestructuringType_67);
  Instrument_67.insert(RestructuringType_67.getString());
  FIX::SecurityDesc SecurityDesc_67("STRING_136937984");
  msg.set(SecurityDesc_67);
  Instrument_67.insert(SecurityDesc_67.getString());
  FIX::SecurityExchange SecurityExchange_67("EXCHANGE_814449845");
  msg.set(SecurityExchange_67);
  Instrument_67.insert(SecurityExchange_67.getString());
  FIX::SecurityGroup SecurityGroup_67("STRING_1344200230");
  msg.set(SecurityGroup_67);
  Instrument_67.insert(SecurityGroup_67.getString());
  FIX::SecurityID SecurityID_67("STRING_254377328");
  msg.set(SecurityID_67);
  Instrument_67.insert(SecurityID_67.getString());
  FIX::SecurityIDSource SecurityIDSource_67("STRING_6");
  msg.set(SecurityIDSource_67);
  Instrument_67.insert(SecurityIDSource_67.getString());
  FIX::SecurityStatus SecurityStatus_67("STRING_2");
  msg.set(SecurityStatus_67);
  Instrument_67.insert(SecurityStatus_67.getString());
  FIX::SecuritySubType SecuritySubType_68("STRING_503803236");
  msg.set(SecuritySubType_68);
  Instrument_67.insert(SecuritySubType_68.getString());
  FIX::SecurityType SecurityType_69("STRING_TBOND");
  msg.set(SecurityType_69);
  Instrument_67.insert(SecurityType_69.getString());
  FIX::Seniority Seniority_67("STRING_SB");
  msg.set(Seniority_67);
  Instrument_67.insert(Seniority_67.getString());
  FIX::SettlMethod SettlMethod_67('C');
  msg.set(SettlMethod_67);
  Instrument_67.insert(SettlMethod_67.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_67("STRING_939044136");
  msg.set(SettleOnOpenFlag_67);
  Instrument_67.insert(SettleOnOpenFlag_67.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_67("STRING_18778918");
  msg.set(StateOrProvinceOfIssue_67);
  Instrument_67.insert(StateOrProvinceOfIssue_67.getString());
  FIX::StrikeCurrency StrikeCurrency_67("CAN");
  msg.set(StrikeCurrency_67);
  Instrument_67.insert(StrikeCurrency_67.getString());
  FIX::StrikeMultiplier StrikeMultiplier_67;
  StrikeMultiplier_67.setString("4065522");
  msg.set(StrikeMultiplier_67);
  Instrument_67.insert(StrikeMultiplier_67.getString());
  FIX::StrikePrice StrikePrice_67;
  StrikePrice_67.setString("1562639");
  msg.set(StrikePrice_67);
  Instrument_67.insert(StrikePrice_67.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_67(2);
  msg.set(StrikePriceBoundaryMethod_67);
  Instrument_67.insert(StrikePriceBoundaryMethod_67.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_67;
  StrikePriceBoundaryPrecision_67.setString("74.720000");
  msg.set(StrikePriceBoundaryPrecision_67);
  Instrument_67.insert(StrikePriceBoundaryPrecision_67.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_67(1);
  msg.set(StrikePriceDeterminationMethod_67);
  Instrument_67.insert(StrikePriceDeterminationMethod_67.getString());
  FIX::StrikeValue StrikeValue_67;
  StrikeValue_67.setString("20851508");
  msg.set(StrikeValue_67);
  Instrument_67.insert(StrikeValue_67.getString());
  FIX::Symbol Symbol_67("STRING_1693166266");
  msg.set(Symbol_67);
  Instrument_67.insert(Symbol_67.getString());
  FIX::SymbolSfx SymbolSfx_67("STRING_WI");
  msg.set(SymbolSfx_67);
  Instrument_67.insert(SymbolSfx_67.getString());
  FIX::TimeUnit TimeUnit_67("STRING_Mo");
  msg.set(TimeUnit_67);
  Instrument_67.insert(TimeUnit_67.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_67(1);
  msg.set(UnderlyingPriceDeterminationMethod_67);
  Instrument_67.insert(UnderlyingPriceDeterminationMethod_67.getString());
  FIX::UnitOfMeasure UnitOfMeasure_67("STRING_USD");
  msg.set(UnitOfMeasure_67);
  Instrument_67.insert(UnitOfMeasure_67.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_67;
  UnitOfMeasureQty_67.setString("20395032");
  msg.set(UnitOfMeasureQty_67);
  Instrument_67.insert(UnitOfMeasureQty_67.getString());
  FIX::ValuationMethod ValuationMethod_67("STRING_FUT");
  msg.set(ValuationMethod_67);
  Instrument_67.insert(ValuationMethod_67.getString());
  all_values.push_back(Instrument_67);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_131;
    FIX::ComplexEventCondition ComplexEventCondition_131(1);
    noComplexEvents_0_0.set(ComplexEventCondition_131);
    ComplexEvents_NoComplexEvents_131.insert(ComplexEventCondition_131.getString());
    FIX::ComplexEventPrice ComplexEventPrice_131;
    ComplexEventPrice_131.setString("16119127");
    noComplexEvents_0_0.set(ComplexEventPrice_131);
    ComplexEvents_NoComplexEvents_131.insert(ComplexEventPrice_131.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_131(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_131);
    ComplexEvents_NoComplexEvents_131.insert(ComplexEventPriceBoundaryMethod_131.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_131;
    ComplexEventPriceBoundaryPrecision_131.setString("54.620000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_131);
    ComplexEvents_NoComplexEvents_131.insert(ComplexEventPriceBoundaryPrecision_131.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_131(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_131);
    ComplexEvents_NoComplexEvents_131.insert(ComplexEventPriceTimeType_131.getString());
    FIX::ComplexEventType ComplexEventType_131(7);
    noComplexEvents_0_0.set(ComplexEventType_131);
    ComplexEvents_NoComplexEvents_131.insert(ComplexEventType_131.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_131;
    ComplexOptPayoutAmount_131.setString("21105527");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_131);
    ComplexEvents_NoComplexEvents_131.insert(ComplexOptPayoutAmount_131.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_131);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_270;
      FIX::ComplexEventEndDate ComplexEventEndDate_270(FIX::UTCTIMESTAMP(19, 49, 51, 25, 7, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_270);
      ComplexEventDates_NoComplexEventDates_270.insert(ComplexEventEndDate_270.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_270(FIX::UTCTIMESTAMP(17, 59, 38, 18, 1, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_270);
      ComplexEventDates_NoComplexEventDates_270.insert(ComplexEventStartDate_270.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_270);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_549;
        FIX::ComplexEventEndTime ComplexEventEndTime_549(FIX::UTCTIMEONLY(6, 39, 54));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_549);
        ComplexEventTimes_NoComplexEventTimes_549.insert(ComplexEventEndTime_549.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_549(FIX::UTCTIMEONLY(22, 53, 18));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_549);
        ComplexEventTimes_NoComplexEventTimes_549.insert(ComplexEventStartTime_549.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_549);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::QuoteStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_131;
    FIX::EventDate EventDate_131("LOCALMKTDATE_710688019");
    noEvents_0_0.set(EventDate_131);
    EvntGrp_NoEvents_131.insert(EventDate_131.getString());
    FIX::EventPx EventPx_131;
    EventPx_131.setString("13897750");
    noEvents_0_0.set(EventPx_131);
    EvntGrp_NoEvents_131.insert(EventPx_131.getString());
    FIX::EventText EventText_131("STRING_501813994");
    noEvents_0_0.set(EventText_131);
    EvntGrp_NoEvents_131.insert(EventText_131.getString());
    FIX::EventTime EventTime_131(FIX::UTCTIMESTAMP(15, 17, 34, 0, 1, 2003));
    noEvents_0_0.set(EventTime_131);
    EvntGrp_NoEvents_131.insert(EventTime_131.getString());
    FIX::EventType EventType_131(4);
    noEvents_0_0.set(EventType_131);
    EvntGrp_NoEvents_131.insert(EventType_131.getString());
    all_values.push_back(EvntGrp_NoEvents_131);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_131;
    FIX::InstrumentPartyID InstrumentPartyID_131("STRING_771960153");
    noInstrumentParties_0_0.set(InstrumentPartyID_131);
    InstrumentParties_NoInstrumentParties_131.insert(InstrumentPartyID_131.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_131('9');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_131);
    InstrumentParties_NoInstrumentParties_131.insert(InstrumentPartyIDSource_131.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_131(989360174);
    noInstrumentParties_0_0.set(InstrumentPartyRole_131);
    InstrumentParties_NoInstrumentParties_131.insert(InstrumentPartyRole_131.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_131);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270;
      FIX::InstrumentPartySubID InstrumentPartySubID_270("STRING_532559756");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_270);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270.insert(InstrumentPartySubID_270.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_270(111830264);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_270);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270.insert(InstrumentPartySubIDType_270.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_143;
    FIX::SecurityAltID SecurityAltID_143("STRING_254928300");
    noSecurityAltID_0_0.set(SecurityAltID_143);
    SecAltIDGrp_NoSecurityAltID_143.insert(SecurityAltID_143.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_143("STRING_476567930");
    noSecurityAltID_0_0.set(SecurityAltIDSource_143);
    SecAltIDGrp_NoSecurityAltID_143.insert(SecurityAltIDSource_143.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_143);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_144;
    FIX::SecurityAltID SecurityAltID_144("STRING_260871077");
    noSecurityAltID_0_1.set(SecurityAltID_144);
    SecAltIDGrp_NoSecurityAltID_144.insert(SecurityAltID_144.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_144("STRING_1670463110");
    noSecurityAltID_0_1.set(SecurityAltIDSource_144);
    SecAltIDGrp_NoSecurityAltID_144.insert(SecurityAltIDSource_144.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_144);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_134;
  FIX::SecurityXML SecurityXML_135("XMLDATA_1552622552");
  msg.set(SecurityXML_135);
  FIX::SecurityXMLLen SecurityXMLLen_67(1590219777);
  msg.set(SecurityXMLLen_67);
  FIX::SecurityXMLSchema SecurityXMLSchema_67("STRING_1237371157");
  msg.set(SecurityXMLSchema_67);
  SecurityXML_134.insert(SecurityXMLSchema_67.getString());
  all_values.push_back(SecurityXML_134);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_118;
    FIX::PartyID PartyID_118("STRING_664104479");
    noPartyIDs_0_0.set(PartyID_118);
    Parties_NoPartyIDs_118.insert(PartyID_118.getString());
    FIX::PartyIDSource PartyIDSource_118('A');
    noPartyIDs_0_0.set(PartyIDSource_118);
    Parties_NoPartyIDs_118.insert(PartyIDSource_118.getString());
    FIX::PartyRole PartyRole_118(61);
    noPartyIDs_0_0.set(PartyRole_118);
    Parties_NoPartyIDs_118.insert(PartyRole_118.getString());
    all_values.push_back(Parties_NoPartyIDs_118);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_235;
      FIX::PartySubID PartySubID_235("STRING_1046834441");
      noPartySubIDs_0_1_0.set(PartySubID_235);
      PtysSubGrp_NoPartySubIDs_235.insert(PartySubID_235.getString());
      FIX::PartySubIDType PartySubIDType_235(18);
      noPartySubIDs_0_1_0.set(PartySubIDType_235);
      PtysSubGrp_NoPartySubIDs_235.insert(PartySubIDType_235.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_235);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_236;
      FIX::PartySubID PartySubID_236("STRING_1959040653");
      noPartySubIDs_0_1_1.set(PartySubID_236);
      PtysSubGrp_NoPartySubIDs_236.insert(PartySubID_236.getString());
      FIX::PartySubIDType PartySubIDType_236(24);
      noPartySubIDs_0_1_1.set(PartySubIDType_236);
      PtysSubGrp_NoPartySubIDs_236.insert(PartySubIDType_236.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_236);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_237;
      FIX::PartySubID PartySubID_237("STRING_1440344401");
      noPartySubIDs_0_1_2.set(PartySubID_237);
      PtysSubGrp_NoPartySubIDs_237.insert(PartySubID_237.getString());
      FIX::PartySubIDType PartySubIDType_237(1);
      noPartySubIDs_0_1_2.set(PartySubIDType_237);
      PtysSubGrp_NoPartySubIDs_237.insert(PartySubIDType_237.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_237);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_119;
    FIX::PartyID PartyID_119("STRING_287435818");
    noPartyIDs_0_1.set(PartyID_119);
    Parties_NoPartyIDs_119.insert(PartyID_119.getString());
    FIX::PartyIDSource PartyIDSource_119('F');
    noPartyIDs_0_1.set(PartyIDSource_119);
    Parties_NoPartyIDs_119.insert(PartyIDSource_119.getString());
    FIX::PartyRole PartyRole_119(56);
    noPartyIDs_0_1.set(PartyRole_119);
    Parties_NoPartyIDs_119.insert(PartyRole_119.getString());
    all_values.push_back(Parties_NoPartyIDs_119);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_238;
      FIX::PartySubID PartySubID_238("STRING_1754126809");
      noPartySubIDs_1_1_0.set(PartySubID_238);
      PtysSubGrp_NoPartySubIDs_238.insert(PartySubID_238.getString());
      FIX::PartySubIDType PartySubIDType_238(9);
      noPartySubIDs_1_1_0.set(PartySubIDType_238);
      PtysSubGrp_NoPartySubIDs_238.insert(PartySubIDType_238.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_238);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_239;
      FIX::PartySubID PartySubID_239("STRING_1175113007");
      noPartySubIDs_1_1_1.set(PartySubID_239);
      PtysSubGrp_NoPartySubIDs_239.insert(PartySubID_239.getString());
      FIX::PartySubIDType PartySubIDType_239(29);
      noPartySubIDs_1_1_1.set(PartySubIDType_239);
      PtysSubGrp_NoPartySubIDs_239.insert(PartySubIDType_239.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_239);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_240;
      FIX::PartySubID PartySubID_240("STRING_2073226174");
      noPartySubIDs_1_1_2.set(PartySubID_240);
      PtysSubGrp_NoPartySubIDs_240.insert(PartySubID_240.getString());
      FIX::PartySubIDType PartySubIDType_240(1);
      noPartySubIDs_1_1_2.set(PartySubIDType_240);
      PtysSubGrp_NoPartySubIDs_240.insert(PartySubIDType_240.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_240);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_16;
    FIX::TargetPartyID TargetPartyID_16("STRING_37572790");
    noTargetPartyIDs_0_0.set(TargetPartyID_16);
    TargetParties_NoTargetPartyIDs_16.insert(TargetPartyID_16.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_16('7');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_16);
    TargetParties_NoTargetPartyIDs_16.insert(TargetPartyIDSource_16.getString());
    FIX::TargetPartyRole TargetPartyRole_16(1387729903);
    noTargetPartyIDs_0_0.set(TargetPartyRole_16);
    TargetParties_NoTargetPartyIDs_16.insert(TargetPartyRole_16.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_16);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_101;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_101("DATA_981650152");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_101);
    UnderlyingInstrument_101.insert(EncodedUnderlyingIssuer_101.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_101(910709365);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_101);
    UnderlyingInstrument_101.insert(EncodedUnderlyingIssuerLen_101.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_101("DATA_2066763273");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_101);
    UnderlyingInstrument_101.insert(EncodedUnderlyingSecurityDesc_101.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_101(424386281);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_101);
    UnderlyingInstrument_101.insert(EncodedUnderlyingSecurityDescLen_101.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_101;
    UnderlyingAdjustedQuantity_101.setString("5968");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_101);
    UnderlyingInstrument_101.insert(UnderlyingAdjustedQuantity_101.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_101;
    UnderlyingAllocationPercent_101.setString("59.780000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_101);
    UnderlyingInstrument_101.insert(UnderlyingAllocationPercent_101.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_101;
    UnderlyingAttachmentPoint_101.setString("7.600000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_101);
    UnderlyingInstrument_101.insert(UnderlyingAttachmentPoint_101.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_101("STRING_336743296");
    noUnderlyings_0_0.set(UnderlyingCFICode_101);
    UnderlyingInstrument_101.insert(UnderlyingCFICode_101.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_101("STRING_248474821");
    noUnderlyings_0_0.set(UnderlyingCPProgram_101);
    UnderlyingInstrument_101.insert(UnderlyingCPProgram_101.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_101("STRING_398233771");
    noUnderlyings_0_0.set(UnderlyingCPRegType_101);
    UnderlyingInstrument_101.insert(UnderlyingCPRegType_101.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_101;
    UnderlyingCapValue_101.setString("13835777");
    noUnderlyings_0_0.set(UnderlyingCapValue_101);
    UnderlyingInstrument_101.insert(UnderlyingCapValue_101.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_101;
    UnderlyingCashAmount_101.setString("17456587");
    noUnderlyings_0_0.set(UnderlyingCashAmount_101);
    UnderlyingInstrument_101.insert(UnderlyingCashAmount_101.getString());
    FIX::UnderlyingCashType UnderlyingCashType_101("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_101);
    UnderlyingInstrument_101.insert(UnderlyingCashType_101.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_101;
    UnderlyingContractMultiplier_101.setString("12724955");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_101);
    UnderlyingInstrument_101.insert(UnderlyingContractMultiplier_101.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_101(1038519456);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_101);
    UnderlyingInstrument_101.insert(UnderlyingContractMultiplierUnit_101.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_101("COUNTRY_486230919");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_101);
    UnderlyingInstrument_101.insert(UnderlyingCountryOfIssue_101.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_101("LOCALMKTDATE_1559931321");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_101);
    UnderlyingInstrument_101.insert(UnderlyingCouponPaymentDate_101.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_101;
    UnderlyingCouponRate_101.setString("64.410000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_101);
    UnderlyingInstrument_101.insert(UnderlyingCouponRate_101.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_101("STRING_1694426578");
    noUnderlyings_0_0.set(UnderlyingCreditRating_101);
    UnderlyingInstrument_101.insert(UnderlyingCreditRating_101.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_101("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_101);
    UnderlyingInstrument_101.insert(UnderlyingCurrency_101.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_101;
    UnderlyingCurrentValue_101.setString("6308089");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_101);
    UnderlyingInstrument_101.insert(UnderlyingCurrentValue_101.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_101;
    UnderlyingDetachmentPoint_101.setString("35.340000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_101);
    UnderlyingInstrument_101.insert(UnderlyingDetachmentPoint_101.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_101;
    UnderlyingDirtyPrice_101.setString("11383414");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_101);
    UnderlyingInstrument_101.insert(UnderlyingDirtyPrice_101.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_101;
    UnderlyingEndPrice_101.setString("5565514");
    noUnderlyings_0_0.set(UnderlyingEndPrice_101);
    UnderlyingInstrument_101.insert(UnderlyingEndPrice_101.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_101;
    UnderlyingEndValue_101.setString("3235468");
    noUnderlyings_0_0.set(UnderlyingEndValue_101);
    UnderlyingInstrument_101.insert(UnderlyingEndValue_101.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_101(123659403);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_101);
    UnderlyingInstrument_101.insert(UnderlyingExerciseStyle_101.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_101;
    UnderlyingFXRate_101.setString("5941242");
    noUnderlyings_0_0.set(UnderlyingFXRate_101);
    UnderlyingInstrument_101.insert(UnderlyingFXRate_101.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_101('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_101);
    UnderlyingInstrument_101.insert(UnderlyingFXRateCalc_101.getString());
    FIX::UnderlyingFactor UnderlyingFactor_101;
    UnderlyingFactor_101.setString("15113893");
    noUnderlyings_0_0.set(UnderlyingFactor_101);
    UnderlyingInstrument_101.insert(UnderlyingFactor_101.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_101(1108264966);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_101);
    UnderlyingInstrument_101.insert(UnderlyingFlowScheduleType_101.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_101("STRING_2025976084");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_101);
    UnderlyingInstrument_101.insert(UnderlyingInstrRegistry_101.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_101("LOCALMKTDATE_274615023");
    noUnderlyings_0_0.set(UnderlyingIssueDate_101);
    UnderlyingInstrument_101.insert(UnderlyingIssueDate_101.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_101("STRING_1027544591");
    noUnderlyings_0_0.set(UnderlyingIssuer_101);
    UnderlyingInstrument_101.insert(UnderlyingIssuer_101.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_101("STRING_302878717");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_101);
    UnderlyingInstrument_101.insert(UnderlyingLocaleOfIssue_101.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_101("LOCALMKTDATE_275211898");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_101);
    UnderlyingInstrument_101.insert(UnderlyingMaturityDate_101.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_101("MONTHYEAR_1168610569");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_101);
    UnderlyingInstrument_101.insert(UnderlyingMaturityMonthYear_101.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_101("TZTIMEONLY_1391369478");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_101);
    UnderlyingInstrument_101.insert(UnderlyingMaturityTime_101.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_101;
    UnderlyingNotionalPercentageOutstanding_101.setString("51.940000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_101);
    UnderlyingInstrument_101.insert(UnderlyingNotionalPercentageOutstanding_101.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_101('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_101);
    UnderlyingInstrument_101.insert(UnderlyingOptAttribute_101.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_101;
    UnderlyingOriginalNotionalPercentageOutstanding_101.setString("32.490000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_101);
    UnderlyingInstrument_101.insert(UnderlyingOriginalNotionalPercentageOutstanding_101.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_101("STRING_1995532932");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_101);
    UnderlyingInstrument_101.insert(UnderlyingPriceUnitOfMeasure_101.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_101;
    UnderlyingPriceUnitOfMeasureQty_101.setString("10152604");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_101);
    UnderlyingInstrument_101.insert(UnderlyingPriceUnitOfMeasureQty_101.getString());
    FIX::UnderlyingProduct UnderlyingProduct_101(1999394026);
    noUnderlyings_0_0.set(UnderlyingProduct_101);
    UnderlyingInstrument_101.insert(UnderlyingProduct_101.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_101(1120544787);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_101);
    UnderlyingInstrument_101.insert(UnderlyingPutOrCall_101.getString());
    FIX::UnderlyingPx UnderlyingPx_101;
    UnderlyingPx_101.setString("20537799");
    noUnderlyings_0_0.set(UnderlyingPx_101);
    UnderlyingInstrument_101.insert(UnderlyingPx_101.getString());
    FIX::UnderlyingQty UnderlyingQty_101;
    UnderlyingQty_101.setString("3381412");
    noUnderlyings_0_0.set(UnderlyingQty_101);
    UnderlyingInstrument_101.insert(UnderlyingQty_101.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_101("LOCALMKTDATE_532992460");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_101);
    UnderlyingInstrument_101.insert(UnderlyingRedemptionDate_101.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_101("STRING_837752695");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_101);
    UnderlyingInstrument_101.insert(UnderlyingRepoCollateralSecurityType_101.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_101;
    UnderlyingRepurchaseRate_101.setString("78.760000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_101);
    UnderlyingInstrument_101.insert(UnderlyingRepurchaseRate_101.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_101(348592987);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_101);
    UnderlyingInstrument_101.insert(UnderlyingRepurchaseTerm_101.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_101("STRING_1375852298");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_101);
    UnderlyingInstrument_101.insert(UnderlyingRestructuringType_101.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_101("STRING_515893158");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_101);
    UnderlyingInstrument_101.insert(UnderlyingSecurityDesc_101.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_101("EXCHANGE_1339306521");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_101);
    UnderlyingInstrument_101.insert(UnderlyingSecurityExchange_101.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_101("STRING_366710098");
    noUnderlyings_0_0.set(UnderlyingSecurityID_101);
    UnderlyingInstrument_101.insert(UnderlyingSecurityID_101.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_101("STRING_1072444614");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_101);
    UnderlyingInstrument_101.insert(UnderlyingSecurityIDSource_101.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_101("STRING_1662853378");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_101);
    UnderlyingInstrument_101.insert(UnderlyingSecuritySubType_101.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_101("STRING_490369501");
    noUnderlyings_0_0.set(UnderlyingSecurityType_101);
    UnderlyingInstrument_101.insert(UnderlyingSecurityType_101.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_101("STRING_1666568860");
    noUnderlyings_0_0.set(UnderlyingSeniority_101);
    UnderlyingInstrument_101.insert(UnderlyingSeniority_101.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_101("STRING_559695661");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_101);
    UnderlyingInstrument_101.insert(UnderlyingSettlMethod_101.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_101(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_101);
    UnderlyingInstrument_101.insert(UnderlyingSettlementType_101.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_101;
    UnderlyingStartValue_101.setString("6273501");
    noUnderlyings_0_0.set(UnderlyingStartValue_101);
    UnderlyingInstrument_101.insert(UnderlyingStartValue_101.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_101("STRING_438188097");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_101);
    UnderlyingInstrument_101.insert(UnderlyingStateOrProvinceOfIssue_101.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_101("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_101);
    UnderlyingInstrument_101.insert(UnderlyingStrikeCurrency_101.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_101;
    UnderlyingStrikePrice_101.setString("7410668");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_101);
    UnderlyingInstrument_101.insert(UnderlyingStrikePrice_101.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_101("STRING_404102081");
    noUnderlyings_0_0.set(UnderlyingSymbol_101);
    UnderlyingInstrument_101.insert(UnderlyingSymbol_101.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_101("STRING_676021691");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_101);
    UnderlyingInstrument_101.insert(UnderlyingSymbolSfx_101.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_101("STRING_2132436293");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_101);
    UnderlyingInstrument_101.insert(UnderlyingTimeUnit_101.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_101("STRING_1016057275");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_101);
    UnderlyingInstrument_101.insert(UnderlyingUnitOfMeasure_101.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_101;
    UnderlyingUnitOfMeasureQty_101.setString("20931070");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_101);
    UnderlyingInstrument_101.insert(UnderlyingUnitOfMeasureQty_101.getString());
    all_values.push_back(UnderlyingInstrument_101);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_207;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_207("STRING_864106560");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_207);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_207.insert(UnderlyingSecurityAltID_207.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_207("STRING_960883880");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_207);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_207.insert(UnderlyingSecurityAltIDSource_207.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_207);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_208;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_208("STRING_1626466273");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_208);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_208.insert(UnderlyingSecurityAltID_208.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_208("STRING_1984651347");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_208);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_208.insert(UnderlyingSecurityAltIDSource_208.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_208);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_197;
      FIX::UnderlyingStipType UnderlyingStipType_197("STRING_1964607571");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_197);
      UnderlyingStipulations_NoUnderlyingStips_197.insert(UnderlyingStipType_197.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_197("STRING_370160159");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_197);
      UnderlyingStipulations_NoUnderlyingStips_197.insert(UnderlyingStipValue_197.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_197);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_198;
      FIX::UnderlyingStipType UnderlyingStipType_198("STRING_1704932830");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_198);
      UnderlyingStipulations_NoUnderlyingStips_198.insert(UnderlyingStipType_198.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_198("STRING_1849691799");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_198);
      UnderlyingStipulations_NoUnderlyingStips_198.insert(UnderlyingStipValue_198.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_198);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_199;
      FIX::UnderlyingStipType UnderlyingStipType_199("STRING_718753146");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_199);
      UnderlyingStipulations_NoUnderlyingStips_199.insert(UnderlyingStipType_199.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_199("STRING_933301480");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_199);
      UnderlyingStipulations_NoUnderlyingStips_199.insert(UnderlyingStipValue_199.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_199);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_200;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_200("STRING_2058059667");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_200);
      UndlyInstrumentParties_NoUndlyInstrumentParties_200.insert(UnderlyingInstrumentPartyID_200.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_200('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_200);
      UndlyInstrumentParties_NoUndlyInstrumentParties_200.insert(UnderlyingInstrumentPartyIDSource_200.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_200(1290545923);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_200);
      UndlyInstrumentParties_NoUndlyInstrumentParties_200.insert(UnderlyingInstrumentPartyRole_200.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_200);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_398("STRING_1790381080");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_398);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398.insert(UnderlyingInstrumentPartySubID_398.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_398(809631135);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_398);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398.insert(UnderlyingInstrumentPartySubIDType_398.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_399("STRING_2133125059");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_399);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399.insert(UnderlyingInstrumentPartySubID_399.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_399(1644656239);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_399);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399.insert(UnderlyingInstrumentPartySubIDType_399.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_400("STRING_1436981313");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_400);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400.insert(UnderlyingInstrumentPartySubID_400.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_400(423829508);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_400);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400.insert(UnderlyingInstrumentPartySubIDType_400.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_201;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_201("STRING_1773546422");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_201);
      UndlyInstrumentParties_NoUndlyInstrumentParties_201.insert(UnderlyingInstrumentPartyID_201.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_201('9');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_201);
      UndlyInstrumentParties_NoUndlyInstrumentParties_201.insert(UnderlyingInstrumentPartyIDSource_201.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_201(1164896323);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_201);
      UndlyInstrumentParties_NoUndlyInstrumentParties_201.insert(UnderlyingInstrumentPartyRole_201.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_201);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_401("STRING_1620414127");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_401);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401.insert(UnderlyingInstrumentPartySubID_401.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_401(1149848968);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_401);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401.insert(UnderlyingInstrumentPartySubIDType_401.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_402("STRING_1046222131");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_402);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402.insert(UnderlyingInstrumentPartySubID_402.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_402(1566037561);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_402);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402.insert(UnderlyingInstrumentPartySubIDType_402.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_403("STRING_776921215");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_403);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403.insert(UnderlyingInstrumentPartySubID_403.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_403(1910328691);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_403);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403.insert(UnderlyingInstrumentPartySubIDType_403.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
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
