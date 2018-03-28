#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityListRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityListRequest msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityListRequest_0;
  FIX::Currency Currency_61("USD");
  msg.set(Currency_61);
  SecurityListRequest_0.insert(Currency_61.getString());
  FIX::EncodedText EncodedText_90("DATA_105899089");
  msg.set(EncodedText_90);
  SecurityListRequest_0.insert(EncodedText_90.getString());
  FIX::EncodedTextLen EncodedTextLen_90(1772441697);
  msg.set(EncodedTextLen_90);
  SecurityListRequest_0.insert(EncodedTextLen_90.getString());
  FIX::MarketID MarketID_18("EXCHANGE_555001177");
  msg.set(MarketID_18);
  SecurityListRequest_0.insert(MarketID_18.getString());
  FIX::MarketSegmentID MarketSegmentID_18("STRING_414043507");
  msg.set(MarketSegmentID_18);
  SecurityListRequest_0.insert(MarketSegmentID_18.getString());
  FIX::SecurityListID SecurityListID_1("STRING_2031512586");
  msg.set(SecurityListID_1);
  SecurityListRequest_0.insert(SecurityListID_1.getString());
  FIX::SecurityListRequestType SecurityListRequestType_1(5);
  msg.set(SecurityListRequestType_1);
  SecurityListRequest_0.insert(SecurityListRequestType_1.getString());
  FIX::SecurityListType SecurityListType_1(2);
  msg.set(SecurityListType_1);
  SecurityListRequest_0.insert(SecurityListType_1.getString());
  FIX::SecurityListTypeSource SecurityListTypeSource_1(1);
  msg.set(SecurityListTypeSource_1);
  SecurityListRequest_0.insert(SecurityListTypeSource_1.getString());
  FIX::SecurityReqID SecurityReqID_7("STRING_832398503");
  msg.set(SecurityReqID_7);
  SecurityListRequest_0.insert(SecurityReqID_7.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_10('1');
  msg.set(SubscriptionRequestType_10);
  SecurityListRequest_0.insert(SubscriptionRequestType_10.getString());
  FIX::Text Text_90("STRING_644438345");
  msg.set(Text_90);
  SecurityListRequest_0.insert(Text_90.getString());
  FIX::TradingSessionID TradingSessionID_84("STRING_1");
  msg.set(TradingSessionID_84);
  SecurityListRequest_0.insert(TradingSessionID_84.getString());
  FIX::TradingSessionSubID TradingSessionSubID_84("STRING_3");
  msg.set(TradingSessionSubID_84);
  SecurityListRequest_0.insert(TradingSessionSubID_84.getString());
  all_values.push_back(SecurityListRequest_0);

  // FinancingDetails
  multiset<string> FinancingDetails_25;
  FIX::AgreementCurrency AgreementCurrency_25("JPY");
  msg.set(AgreementCurrency_25);
  FinancingDetails_25.insert(AgreementCurrency_25.getString());
  FIX::AgreementDate AgreementDate_25("LOCALMKTDATE_1331798003");
  msg.set(AgreementDate_25);
  FinancingDetails_25.insert(AgreementDate_25.getString());
  FIX::AgreementDesc AgreementDesc_25("STRING_55085056");
  msg.set(AgreementDesc_25);
  FinancingDetails_25.insert(AgreementDesc_25.getString());
  FIX::AgreementID AgreementID_25("STRING_1204262405");
  msg.set(AgreementID_25);
  FinancingDetails_25.insert(AgreementID_25.getString());
  FIX::DeliveryType DeliveryType_25(2);
  msg.set(DeliveryType_25);
  FinancingDetails_25.insert(DeliveryType_25.getString());
  FIX::EndDate EndDate_25("LOCALMKTDATE_1156368568");
  msg.set(EndDate_25);
  FinancingDetails_25.insert(EndDate_25.getString());
  FIX::MarginRatio MarginRatio_25;
  MarginRatio_25.setString("73.240000");
  msg.set(MarginRatio_25);
  FinancingDetails_25.insert(MarginRatio_25.getString());
  FIX::StartDate StartDate_25("LOCALMKTDATE_1930640640");
  msg.set(StartDate_25);
  FinancingDetails_25.insert(StartDate_25.getString());
  FIX::TerminationType TerminationType_25(1);
  msg.set(TerminationType_25);
  FinancingDetails_25.insert(TerminationType_25.getString());
  all_values.push_back(FinancingDetails_25);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityListRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_125;
    FIX::EncodedLegIssuer EncodedLegIssuer_125("DATA_2141171315");
    noLegs_0_0.set(EncodedLegIssuer_125);
    InstrumentLeg_125.insert(EncodedLegIssuer_125.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_125(588229111);
    noLegs_0_0.set(EncodedLegIssuerLen_125);
    InstrumentLeg_125.insert(EncodedLegIssuerLen_125.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_125("DATA_1905959673");
    noLegs_0_0.set(EncodedLegSecurityDesc_125);
    InstrumentLeg_125.insert(EncodedLegSecurityDesc_125.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_125(326068874);
    noLegs_0_0.set(EncodedLegSecurityDescLen_125);
    InstrumentLeg_125.insert(EncodedLegSecurityDescLen_125.getString());
    FIX::LegCFICode LegCFICode_125("STRING_324878695");
    noLegs_0_0.set(LegCFICode_125);
    InstrumentLeg_125.insert(LegCFICode_125.getString());
    FIX::LegContractMultiplier LegContractMultiplier_125;
    LegContractMultiplier_125.setString("5470315");
    noLegs_0_0.set(LegContractMultiplier_125);
    InstrumentLeg_125.insert(LegContractMultiplier_125.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_125(1420315202);
    noLegs_0_0.set(LegContractMultiplierUnit_125);
    InstrumentLeg_125.insert(LegContractMultiplierUnit_125.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_125("MONTHYEAR_430777784");
    noLegs_0_0.set(LegContractSettlMonth_125);
    InstrumentLeg_125.insert(LegContractSettlMonth_125.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_125("COUNTRY_171989643");
    noLegs_0_0.set(LegCountryOfIssue_125);
    InstrumentLeg_125.insert(LegCountryOfIssue_125.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_125("LOCALMKTDATE_1975316379");
    noLegs_0_0.set(LegCouponPaymentDate_125);
    InstrumentLeg_125.insert(LegCouponPaymentDate_125.getString());
    FIX::LegCouponRate LegCouponRate_125;
    LegCouponRate_125.setString("12.910000");
    noLegs_0_0.set(LegCouponRate_125);
    InstrumentLeg_125.insert(LegCouponRate_125.getString());
    FIX::LegCreditRating LegCreditRating_125("STRING_56018581");
    noLegs_0_0.set(LegCreditRating_125);
    InstrumentLeg_125.insert(LegCreditRating_125.getString());
    FIX::LegCurrency LegCurrency_125("GBP");
    noLegs_0_0.set(LegCurrency_125);
    InstrumentLeg_125.insert(LegCurrency_125.getString());
    FIX::LegDatedDate LegDatedDate_125("LOCALMKTDATE_2120383231");
    noLegs_0_0.set(LegDatedDate_125);
    InstrumentLeg_125.insert(LegDatedDate_125.getString());
    FIX::LegExerciseStyle LegExerciseStyle_125(1472487011);
    noLegs_0_0.set(LegExerciseStyle_125);
    InstrumentLeg_125.insert(LegExerciseStyle_125.getString());
    FIX::LegFactor LegFactor_125;
    LegFactor_125.setString("17028025");
    noLegs_0_0.set(LegFactor_125);
    InstrumentLeg_125.insert(LegFactor_125.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_125(617337929);
    noLegs_0_0.set(LegFlowScheduleType_125);
    InstrumentLeg_125.insert(LegFlowScheduleType_125.getString());
    FIX::LegInstrRegistry LegInstrRegistry_125("STRING_2097346296");
    noLegs_0_0.set(LegInstrRegistry_125);
    InstrumentLeg_125.insert(LegInstrRegistry_125.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_125("LOCALMKTDATE_812491744");
    noLegs_0_0.set(LegInterestAccrualDate_125);
    InstrumentLeg_125.insert(LegInterestAccrualDate_125.getString());
    FIX::LegIssueDate LegIssueDate_125("LOCALMKTDATE_589411063");
    noLegs_0_0.set(LegIssueDate_125);
    InstrumentLeg_125.insert(LegIssueDate_125.getString());
    FIX::LegIssuer LegIssuer_125("STRING_383358908");
    noLegs_0_0.set(LegIssuer_125);
    InstrumentLeg_125.insert(LegIssuer_125.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_125("STRING_2144289747");
    noLegs_0_0.set(LegLocaleOfIssue_125);
    InstrumentLeg_125.insert(LegLocaleOfIssue_125.getString());
    FIX::LegMaturityDate LegMaturityDate_125("LOCALMKTDATE_644496119");
    noLegs_0_0.set(LegMaturityDate_125);
    InstrumentLeg_125.insert(LegMaturityDate_125.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_125("MONTHYEAR_1587621313");
    noLegs_0_0.set(LegMaturityMonthYear_125);
    InstrumentLeg_125.insert(LegMaturityMonthYear_125.getString());
    FIX::LegMaturityTime LegMaturityTime_125("TZTIMEONLY_136590029");
    noLegs_0_0.set(LegMaturityTime_125);
    InstrumentLeg_125.insert(LegMaturityTime_125.getString());
    FIX::LegOptAttribute LegOptAttribute_125('1');
    noLegs_0_0.set(LegOptAttribute_125);
    InstrumentLeg_125.insert(LegOptAttribute_125.getString());
    FIX::LegOptionRatio LegOptionRatio_125;
    LegOptionRatio_125.setString("11399349");
    noLegs_0_0.set(LegOptionRatio_125);
    InstrumentLeg_125.insert(LegOptionRatio_125.getString());
    FIX::LegPool LegPool_125("STRING_2067230669");
    noLegs_0_0.set(LegPool_125);
    InstrumentLeg_125.insert(LegPool_125.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_125("STRING_229216687");
    noLegs_0_0.set(LegPriceUnitOfMeasure_125);
    InstrumentLeg_125.insert(LegPriceUnitOfMeasure_125.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_125;
    LegPriceUnitOfMeasureQty_125.setString("12786575");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_125);
    InstrumentLeg_125.insert(LegPriceUnitOfMeasureQty_125.getString());
    FIX::LegProduct LegProduct_125(2060918336);
    noLegs_0_0.set(LegProduct_125);
    InstrumentLeg_125.insert(LegProduct_125.getString());
    FIX::LegPutOrCall LegPutOrCall_125(817445798);
    noLegs_0_0.set(LegPutOrCall_125);
    InstrumentLeg_125.insert(LegPutOrCall_125.getString());
    FIX::LegRatioQty LegRatioQty_125;
    LegRatioQty_125.setString("10371335");
    noLegs_0_0.set(LegRatioQty_125);
    InstrumentLeg_125.insert(LegRatioQty_125.getString());
    FIX::LegRedemptionDate LegRedemptionDate_125("LOCALMKTDATE_239503562");
    noLegs_0_0.set(LegRedemptionDate_125);
    InstrumentLeg_125.insert(LegRedemptionDate_125.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_125("STRING_1142324493");
    noLegs_0_0.set(LegRepoCollateralSecurityType_125);
    InstrumentLeg_125.insert(LegRepoCollateralSecurityType_125.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_125;
    LegRepurchaseRate_125.setString("51.850000");
    noLegs_0_0.set(LegRepurchaseRate_125);
    InstrumentLeg_125.insert(LegRepurchaseRate_125.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_125(1659818765);
    noLegs_0_0.set(LegRepurchaseTerm_125);
    InstrumentLeg_125.insert(LegRepurchaseTerm_125.getString());
    FIX::LegSecurityDesc LegSecurityDesc_125("STRING_1573102277");
    noLegs_0_0.set(LegSecurityDesc_125);
    InstrumentLeg_125.insert(LegSecurityDesc_125.getString());
    FIX::LegSecurityExchange LegSecurityExchange_125("EXCHANGE_1756154828");
    noLegs_0_0.set(LegSecurityExchange_125);
    InstrumentLeg_125.insert(LegSecurityExchange_125.getString());
    FIX::LegSecurityID LegSecurityID_125("STRING_1487651496");
    noLegs_0_0.set(LegSecurityID_125);
    InstrumentLeg_125.insert(LegSecurityID_125.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_125("STRING_270439921");
    noLegs_0_0.set(LegSecurityIDSource_125);
    InstrumentLeg_125.insert(LegSecurityIDSource_125.getString());
    FIX::LegSecuritySubType LegSecuritySubType_125("STRING_1812173409");
    noLegs_0_0.set(LegSecuritySubType_125);
    InstrumentLeg_125.insert(LegSecuritySubType_125.getString());
    FIX::LegSecurityType LegSecurityType_125("STRING_2127740005");
    noLegs_0_0.set(LegSecurityType_125);
    InstrumentLeg_125.insert(LegSecurityType_125.getString());
    FIX::LegSide LegSide_125('1');
    noLegs_0_0.set(LegSide_125);
    InstrumentLeg_125.insert(LegSide_125.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_125("STRING_1785072993");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_125);
    InstrumentLeg_125.insert(LegStateOrProvinceOfIssue_125.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_125("GBP");
    noLegs_0_0.set(LegStrikeCurrency_125);
    InstrumentLeg_125.insert(LegStrikeCurrency_125.getString());
    FIX::LegStrikePrice LegStrikePrice_125;
    LegStrikePrice_125.setString("2549272");
    noLegs_0_0.set(LegStrikePrice_125);
    InstrumentLeg_125.insert(LegStrikePrice_125.getString());
    FIX::LegSymbol LegSymbol_125("STRING_1402606016");
    noLegs_0_0.set(LegSymbol_125);
    InstrumentLeg_125.insert(LegSymbol_125.getString());
    FIX::LegSymbolSfx LegSymbolSfx_125("STRING_1837354056");
    noLegs_0_0.set(LegSymbolSfx_125);
    InstrumentLeg_125.insert(LegSymbolSfx_125.getString());
    FIX::LegTimeUnit LegTimeUnit_125("STRING_844338337");
    noLegs_0_0.set(LegTimeUnit_125);
    InstrumentLeg_125.insert(LegTimeUnit_125.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_125("STRING_1785964925");
    noLegs_0_0.set(LegUnitOfMeasure_125);
    InstrumentLeg_125.insert(LegUnitOfMeasure_125.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_125;
    LegUnitOfMeasureQty_125.setString("18341601");
    noLegs_0_0.set(LegUnitOfMeasureQty_125);
    InstrumentLeg_125.insert(LegUnitOfMeasureQty_125.getString());
    all_values.push_back(InstrumentLeg_125);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_252;
      FIX::LegSecurityAltID LegSecurityAltID_252("STRING_1226102590");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_252);
      LegSecAltIDGrp_NoLegSecurityAltID_252.insert(LegSecurityAltID_252.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_252("STRING_1970750184");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_252);
      LegSecAltIDGrp_NoLegSecurityAltID_252.insert(LegSecurityAltIDSource_252.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_252);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_77;
  FIX::AttachmentPoint AttachmentPoint_77;
  AttachmentPoint_77.setString("54.950000");
  msg.set(AttachmentPoint_77);
  Instrument_77.insert(AttachmentPoint_77.getString());
  FIX::CFICode CFICode_77("STRING_218553932");
  msg.set(CFICode_77);
  Instrument_77.insert(CFICode_77.getString());
  FIX::CPProgram CPProgram_77(2);
  msg.set(CPProgram_77);
  Instrument_77.insert(CPProgram_77.getString());
  FIX::CPRegType CPRegType_77("STRING_1371432182");
  msg.set(CPRegType_77);
  Instrument_77.insert(CPRegType_77.getString());
  FIX::CapPrice CapPrice_77;
  CapPrice_77.setString("14972114");
  msg.set(CapPrice_77);
  Instrument_77.insert(CapPrice_77.getString());
  FIX::ContractMultiplier ContractMultiplier_77;
  ContractMultiplier_77.setString("18039318");
  msg.set(ContractMultiplier_77);
  Instrument_77.insert(ContractMultiplier_77.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_77(0);
  msg.set(ContractMultiplierUnit_77);
  Instrument_77.insert(ContractMultiplierUnit_77.getString());
  FIX::ContractSettlMonth ContractSettlMonth_77("MONTHYEAR_386861442");
  msg.set(ContractSettlMonth_77);
  Instrument_77.insert(ContractSettlMonth_77.getString());
  FIX::CountryOfIssue CountryOfIssue_77("COUNTRY_2043435457");
  msg.set(CountryOfIssue_77);
  Instrument_77.insert(CountryOfIssue_77.getString());
  FIX::CouponPaymentDate CouponPaymentDate_77("LOCALMKTDATE_1183718826");
  msg.set(CouponPaymentDate_77);
  Instrument_77.insert(CouponPaymentDate_77.getString());
  FIX::CouponRate CouponRate_77;
  CouponRate_77.setString("66.270000");
  msg.set(CouponRate_77);
  Instrument_77.insert(CouponRate_77.getString());
  FIX::CreditRating CreditRating_77("STRING_1555770574");
  msg.set(CreditRating_77);
  Instrument_77.insert(CreditRating_77.getString());
  FIX::DatedDate DatedDate_77("LOCALMKTDATE_609337456");
  msg.set(DatedDate_77);
  Instrument_77.insert(DatedDate_77.getString());
  FIX::DetachmentPoint DetachmentPoint_77;
  DetachmentPoint_77.setString("78.070000");
  msg.set(DetachmentPoint_77);
  Instrument_77.insert(DetachmentPoint_77.getString());
  FIX::EncodedIssuer EncodedIssuer_77("DATA_895938422");
  msg.set(EncodedIssuer_77);
  Instrument_77.insert(EncodedIssuer_77.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_77(879777377);
  msg.set(EncodedIssuerLen_77);
  Instrument_77.insert(EncodedIssuerLen_77.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_77("DATA_1244387568");
  msg.set(EncodedSecurityDesc_77);
  Instrument_77.insert(EncodedSecurityDesc_77.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_77(876194779);
  msg.set(EncodedSecurityDescLen_77);
  Instrument_77.insert(EncodedSecurityDescLen_77.getString());
  FIX::ExerciseStyle ExerciseStyle_77(0);
  msg.set(ExerciseStyle_77);
  Instrument_77.insert(ExerciseStyle_77.getString());
  FIX::Factor Factor_77;
  Factor_77.setString("8819769");
  msg.set(Factor_77);
  Instrument_77.insert(Factor_77.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_77(true);
  msg.set(FlexProductEligibilityIndicator_77);
  Instrument_77.insert(FlexProductEligibilityIndicator_77.getString());
  FIX::FlexibleIndicator FlexibleIndicator_77(false);
  msg.set(FlexibleIndicator_77);
  Instrument_77.insert(FlexibleIndicator_77.getString());
  FIX::FloorPrice FloorPrice_77;
  FloorPrice_77.setString("11369041");
  msg.set(FloorPrice_77);
  Instrument_77.insert(FloorPrice_77.getString());
  FIX::FlowScheduleType FlowScheduleType_77(1);
  msg.set(FlowScheduleType_77);
  Instrument_77.insert(FlowScheduleType_77.getString());
  FIX::InstrRegistry InstrRegistry_77("STRING_916569811");
  msg.set(InstrRegistry_77);
  Instrument_77.insert(InstrRegistry_77.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_77('1');
  msg.set(InstrmtAssignmentMethod_77);
  Instrument_77.insert(InstrmtAssignmentMethod_77.getString());
  FIX::InterestAccrualDate InterestAccrualDate_77("LOCALMKTDATE_1222541793");
  msg.set(InterestAccrualDate_77);
  Instrument_77.insert(InterestAccrualDate_77.getString());
  FIX::IssueDate IssueDate_77("LOCALMKTDATE_603246319");
  msg.set(IssueDate_77);
  Instrument_77.insert(IssueDate_77.getString());
  FIX::Issuer Issuer_77("STRING_1322593332");
  msg.set(Issuer_77);
  Instrument_77.insert(Issuer_77.getString());
  FIX::ListMethod ListMethod_77(0);
  msg.set(ListMethod_77);
  Instrument_77.insert(ListMethod_77.getString());
  FIX::LocaleOfIssue LocaleOfIssue_77("STRING_426512855");
  msg.set(LocaleOfIssue_77);
  Instrument_77.insert(LocaleOfIssue_77.getString());
  FIX::MaturityDate MaturityDate_77("LOCALMKTDATE_317325179");
  msg.set(MaturityDate_77);
  Instrument_77.insert(MaturityDate_77.getString());
  FIX::MaturityMonthYear MaturityMonthYear_77("MONTHYEAR_519714668");
  msg.set(MaturityMonthYear_77);
  Instrument_77.insert(MaturityMonthYear_77.getString());
  FIX::MaturityTime MaturityTime_77("TZTIMEONLY_169526413");
  msg.set(MaturityTime_77);
  Instrument_77.insert(MaturityTime_77.getString());
  FIX::MinPriceIncrement MinPriceIncrement_77;
  MinPriceIncrement_77.setString("16887573");
  msg.set(MinPriceIncrement_77);
  Instrument_77.insert(MinPriceIncrement_77.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_77;
  MinPriceIncrementAmount_77.setString("20169261");
  msg.set(MinPriceIncrementAmount_77);
  Instrument_77.insert(MinPriceIncrementAmount_77.getString());
  FIX::NTPositionLimit NTPositionLimit_77(1973458308);
  msg.set(NTPositionLimit_77);
  Instrument_77.insert(NTPositionLimit_77.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_77;
  NotionalPercentageOutstanding_77.setString("16.950000");
  msg.set(NotionalPercentageOutstanding_77);
  Instrument_77.insert(NotionalPercentageOutstanding_77.getString());
  FIX::OptAttribute OptAttribute_77('2');
  msg.set(OptAttribute_77);
  Instrument_77.insert(OptAttribute_77.getString());
  FIX::OptPayoutAmount OptPayoutAmount_77;
  OptPayoutAmount_77.setString("18694101");
  msg.set(OptPayoutAmount_77);
  Instrument_77.insert(OptPayoutAmount_77.getString());
  FIX::OptPayoutType OptPayoutType_77(1);
  msg.set(OptPayoutType_77);
  Instrument_77.insert(OptPayoutType_77.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_77;
  OriginalNotionalPercentageOutstanding_77.setString("69.390000");
  msg.set(OriginalNotionalPercentageOutstanding_77);
  Instrument_77.insert(OriginalNotionalPercentageOutstanding_77.getString());
  FIX::Pool Pool_77("STRING_1277697043");
  msg.set(Pool_77);
  Instrument_77.insert(Pool_77.getString());
  FIX::PositionLimit PositionLimit_77(1375724329);
  msg.set(PositionLimit_77);
  Instrument_77.insert(PositionLimit_77.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_77("STRING_INT");
  msg.set(PriceQuoteMethod_77);
  Instrument_77.insert(PriceQuoteMethod_77.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_77("STRING_26151817");
  msg.set(PriceUnitOfMeasure_77);
  Instrument_77.insert(PriceUnitOfMeasure_77.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_77;
  PriceUnitOfMeasureQty_77.setString("1080180");
  msg.set(PriceUnitOfMeasureQty_77);
  Instrument_77.insert(PriceUnitOfMeasureQty_77.getString());
  FIX::Product Product_79(1);
  msg.set(Product_79);
  Instrument_77.insert(Product_79.getString());
  FIX::ProductComplex ProductComplex_77("STRING_902346597");
  msg.set(ProductComplex_77);
  Instrument_77.insert(ProductComplex_77.getString());
  FIX::PutOrCall PutOrCall_77(1);
  msg.set(PutOrCall_77);
  Instrument_77.insert(PutOrCall_77.getString());
  FIX::RedemptionDate RedemptionDate_77("LOCALMKTDATE_1638425580");
  msg.set(RedemptionDate_77);
  Instrument_77.insert(RedemptionDate_77.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_77("STRING_1083801097");
  msg.set(RepoCollateralSecurityType_77);
  Instrument_77.insert(RepoCollateralSecurityType_77.getString());
  FIX::RepurchaseRate RepurchaseRate_77;
  RepurchaseRate_77.setString("45.520000");
  msg.set(RepurchaseRate_77);
  Instrument_77.insert(RepurchaseRate_77.getString());
  FIX::RepurchaseTerm RepurchaseTerm_77(627846120);
  msg.set(RepurchaseTerm_77);
  Instrument_77.insert(RepurchaseTerm_77.getString());
  FIX::RestructuringType RestructuringType_77("STRING_MR");
  msg.set(RestructuringType_77);
  Instrument_77.insert(RestructuringType_77.getString());
  FIX::SecurityDesc SecurityDesc_77("STRING_305640715");
  msg.set(SecurityDesc_77);
  Instrument_77.insert(SecurityDesc_77.getString());
  FIX::SecurityExchange SecurityExchange_77("EXCHANGE_461604996");
  msg.set(SecurityExchange_77);
  Instrument_77.insert(SecurityExchange_77.getString());
  FIX::SecurityGroup SecurityGroup_77("STRING_1742919759");
  msg.set(SecurityGroup_77);
  Instrument_77.insert(SecurityGroup_77.getString());
  FIX::SecurityID SecurityID_77("STRING_908887034");
  msg.set(SecurityID_77);
  Instrument_77.insert(SecurityID_77.getString());
  FIX::SecurityIDSource SecurityIDSource_77("STRING_2");
  msg.set(SecurityIDSource_77);
  Instrument_77.insert(SecurityIDSource_77.getString());
  FIX::SecurityStatus SecurityStatus_77("STRING_2");
  msg.set(SecurityStatus_77);
  Instrument_77.insert(SecurityStatus_77.getString());
  FIX::SecuritySubType SecuritySubType_78("STRING_1335399890");
  msg.set(SecuritySubType_78);
  Instrument_77.insert(SecuritySubType_78.getString());
  FIX::SecurityType SecurityType_79("STRING_SECLOAN");
  msg.set(SecurityType_79);
  Instrument_77.insert(SecurityType_79.getString());
  FIX::Seniority Seniority_77("STRING_SD");
  msg.set(Seniority_77);
  Instrument_77.insert(Seniority_77.getString());
  FIX::SettlMethod SettlMethod_77('P');
  msg.set(SettlMethod_77);
  Instrument_77.insert(SettlMethod_77.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_77("STRING_1642797222");
  msg.set(SettleOnOpenFlag_77);
  Instrument_77.insert(SettleOnOpenFlag_77.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_77("STRING_285754033");
  msg.set(StateOrProvinceOfIssue_77);
  Instrument_77.insert(StateOrProvinceOfIssue_77.getString());
  FIX::StrikeCurrency StrikeCurrency_77("CHF");
  msg.set(StrikeCurrency_77);
  Instrument_77.insert(StrikeCurrency_77.getString());
  FIX::StrikeMultiplier StrikeMultiplier_77;
  StrikeMultiplier_77.setString("5420579");
  msg.set(StrikeMultiplier_77);
  Instrument_77.insert(StrikeMultiplier_77.getString());
  FIX::StrikePrice StrikePrice_77;
  StrikePrice_77.setString("10528274");
  msg.set(StrikePrice_77);
  Instrument_77.insert(StrikePrice_77.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_77(4);
  msg.set(StrikePriceBoundaryMethod_77);
  Instrument_77.insert(StrikePriceBoundaryMethod_77.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_77;
  StrikePriceBoundaryPrecision_77.setString("49.330000");
  msg.set(StrikePriceBoundaryPrecision_77);
  Instrument_77.insert(StrikePriceBoundaryPrecision_77.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_77(4);
  msg.set(StrikePriceDeterminationMethod_77);
  Instrument_77.insert(StrikePriceDeterminationMethod_77.getString());
  FIX::StrikeValue StrikeValue_77;
  StrikeValue_77.setString("12200928");
  msg.set(StrikeValue_77);
  Instrument_77.insert(StrikeValue_77.getString());
  FIX::Symbol Symbol_77("STRING_133966032");
  msg.set(Symbol_77);
  Instrument_77.insert(Symbol_77.getString());
  FIX::SymbolSfx SymbolSfx_77("STRING_WI");
  msg.set(SymbolSfx_77);
  Instrument_77.insert(SymbolSfx_77.getString());
  FIX::TimeUnit TimeUnit_77("STRING_Min");
  msg.set(TimeUnit_77);
  Instrument_77.insert(TimeUnit_77.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_77(4);
  msg.set(UnderlyingPriceDeterminationMethod_77);
  Instrument_77.insert(UnderlyingPriceDeterminationMethod_77.getString());
  FIX::UnitOfMeasure UnitOfMeasure_77("STRING_oz_tr");
  msg.set(UnitOfMeasure_77);
  Instrument_77.insert(UnitOfMeasure_77.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_77;
  UnitOfMeasureQty_77.setString("16379660");
  msg.set(UnitOfMeasureQty_77);
  Instrument_77.insert(UnitOfMeasureQty_77.getString());
  FIX::ValuationMethod ValuationMethod_77("STRING_FUT");
  msg.set(ValuationMethod_77);
  Instrument_77.insert(ValuationMethod_77.getString());
  all_values.push_back(Instrument_77);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityListRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_147;
    FIX::ComplexEventCondition ComplexEventCondition_147(1);
    noComplexEvents_0_0.set(ComplexEventCondition_147);
    ComplexEvents_NoComplexEvents_147.insert(ComplexEventCondition_147.getString());
    FIX::ComplexEventPrice ComplexEventPrice_147;
    ComplexEventPrice_147.setString("10092027");
    noComplexEvents_0_0.set(ComplexEventPrice_147);
    ComplexEvents_NoComplexEvents_147.insert(ComplexEventPrice_147.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_147(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_147);
    ComplexEvents_NoComplexEvents_147.insert(ComplexEventPriceBoundaryMethod_147.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_147;
    ComplexEventPriceBoundaryPrecision_147.setString("76.510000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_147);
    ComplexEvents_NoComplexEvents_147.insert(ComplexEventPriceBoundaryPrecision_147.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_147(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_147);
    ComplexEvents_NoComplexEvents_147.insert(ComplexEventPriceTimeType_147.getString());
    FIX::ComplexEventType ComplexEventType_147(8);
    noComplexEvents_0_0.set(ComplexEventType_147);
    ComplexEvents_NoComplexEvents_147.insert(ComplexEventType_147.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_147;
    ComplexOptPayoutAmount_147.setString("940810");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_147);
    ComplexEvents_NoComplexEvents_147.insert(ComplexOptPayoutAmount_147.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_147);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_305;
      FIX::ComplexEventEndDate ComplexEventEndDate_305(FIX::UTCTIMESTAMP(8, 49, 29, 19, 1, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_305);
      ComplexEventDates_NoComplexEventDates_305.insert(ComplexEventEndDate_305.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_305(FIX::UTCTIMESTAMP(21, 37, 31, 12, 3, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_305);
      ComplexEventDates_NoComplexEventDates_305.insert(ComplexEventStartDate_305.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_305);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_621;
        FIX::ComplexEventEndTime ComplexEventEndTime_621(FIX::UTCTIMEONLY(4, 48, 53));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_621);
        ComplexEventTimes_NoComplexEventTimes_621.insert(ComplexEventEndTime_621.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_621(FIX::UTCTIMEONLY(8, 45, 29));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_621);
        ComplexEventTimes_NoComplexEventTimes_621.insert(ComplexEventStartTime_621.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_621);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_622;
        FIX::ComplexEventEndTime ComplexEventEndTime_622(FIX::UTCTIMEONLY(4, 5, 51));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_622);
        ComplexEventTimes_NoComplexEventTimes_622.insert(ComplexEventEndTime_622.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_622(FIX::UTCTIMEONLY(1, 9, 57));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_622);
        ComplexEventTimes_NoComplexEventTimes_622.insert(ComplexEventStartTime_622.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_622);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_148;
    FIX::ComplexEventCondition ComplexEventCondition_148(2);
    noComplexEvents_0_1.set(ComplexEventCondition_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventCondition_148.getString());
    FIX::ComplexEventPrice ComplexEventPrice_148;
    ComplexEventPrice_148.setString("11062213");
    noComplexEvents_0_1.set(ComplexEventPrice_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventPrice_148.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_148(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventPriceBoundaryMethod_148.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_148;
    ComplexEventPriceBoundaryPrecision_148.setString("62.570000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventPriceBoundaryPrecision_148.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_148(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventPriceTimeType_148.getString());
    FIX::ComplexEventType ComplexEventType_148(9);
    noComplexEvents_0_1.set(ComplexEventType_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventType_148.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_148;
    ComplexOptPayoutAmount_148.setString("3109157");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexOptPayoutAmount_148.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_148);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_306;
      FIX::ComplexEventEndDate ComplexEventEndDate_306(FIX::UTCTIMESTAMP(9, 15, 37, 15, 3, 2008));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_306);
      ComplexEventDates_NoComplexEventDates_306.insert(ComplexEventEndDate_306.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_306(FIX::UTCTIMESTAMP(10, 42, 39, 16, 7, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_306);
      ComplexEventDates_NoComplexEventDates_306.insert(ComplexEventStartDate_306.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_306);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_623;
        FIX::ComplexEventEndTime ComplexEventEndTime_623(FIX::UTCTIMEONLY(21, 35, 29));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_623);
        ComplexEventTimes_NoComplexEventTimes_623.insert(ComplexEventEndTime_623.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_623(FIX::UTCTIMEONLY(12, 31, 31));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_623);
        ComplexEventTimes_NoComplexEventTimes_623.insert(ComplexEventStartTime_623.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_623);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_624;
        FIX::ComplexEventEndTime ComplexEventEndTime_624(FIX::UTCTIMEONLY(4, 10, 56));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_624);
        ComplexEventTimes_NoComplexEventTimes_624.insert(ComplexEventEndTime_624.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_624(FIX::UTCTIMEONLY(1, 28, 29));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_624);
        ComplexEventTimes_NoComplexEventTimes_624.insert(ComplexEventStartTime_624.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_624);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_307;
      FIX::ComplexEventEndDate ComplexEventEndDate_307(FIX::UTCTIMESTAMP(17, 45, 18, 1, 4, 2000));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_307);
      ComplexEventDates_NoComplexEventDates_307.insert(ComplexEventEndDate_307.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_307(FIX::UTCTIMESTAMP(18, 46, 30, 18, 5, 2011));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_307);
      ComplexEventDates_NoComplexEventDates_307.insert(ComplexEventStartDate_307.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_307);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_625;
        FIX::ComplexEventEndTime ComplexEventEndTime_625(FIX::UTCTIMEONLY(12, 59, 52));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_625);
        ComplexEventTimes_NoComplexEventTimes_625.insert(ComplexEventEndTime_625.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_625(FIX::UTCTIMEONLY(3, 23, 20));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_625);
        ComplexEventTimes_NoComplexEventTimes_625.insert(ComplexEventStartTime_625.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_625);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityListRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_151;
    FIX::EventDate EventDate_151("LOCALMKTDATE_726595855");
    noEvents_0_0.set(EventDate_151);
    EvntGrp_NoEvents_151.insert(EventDate_151.getString());
    FIX::EventPx EventPx_151;
    EventPx_151.setString("10229181");
    noEvents_0_0.set(EventPx_151);
    EvntGrp_NoEvents_151.insert(EventPx_151.getString());
    FIX::EventText EventText_151("STRING_652636475");
    noEvents_0_0.set(EventText_151);
    EvntGrp_NoEvents_151.insert(EventText_151.getString());
    FIX::EventTime EventTime_151(FIX::UTCTIMESTAMP(7, 3, 2, 5, 10, 2003));
    noEvents_0_0.set(EventTime_151);
    EvntGrp_NoEvents_151.insert(EventTime_151.getString());
    FIX::EventType EventType_151(16);
    noEvents_0_0.set(EventType_151);
    EvntGrp_NoEvents_151.insert(EventType_151.getString());
    all_values.push_back(EvntGrp_NoEvents_151);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_152;
    FIX::EventDate EventDate_152("LOCALMKTDATE_1711486066");
    noEvents_0_1.set(EventDate_152);
    EvntGrp_NoEvents_152.insert(EventDate_152.getString());
    FIX::EventPx EventPx_152;
    EventPx_152.setString("13807005");
    noEvents_0_1.set(EventPx_152);
    EvntGrp_NoEvents_152.insert(EventPx_152.getString());
    FIX::EventText EventText_152("STRING_1322557368");
    noEvents_0_1.set(EventText_152);
    EvntGrp_NoEvents_152.insert(EventText_152.getString());
    FIX::EventTime EventTime_152(FIX::UTCTIMESTAMP(9, 34, 7, 23, 8, 2010));
    noEvents_0_1.set(EventTime_152);
    EvntGrp_NoEvents_152.insert(EventTime_152.getString());
    FIX::EventType EventType_152(8);
    noEvents_0_1.set(EventType_152);
    EvntGrp_NoEvents_152.insert(EventType_152.getString());
    all_values.push_back(EvntGrp_NoEvents_152);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::SecurityListRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_153;
    FIX::EventDate EventDate_153("LOCALMKTDATE_480123281");
    noEvents_0_2.set(EventDate_153);
    EvntGrp_NoEvents_153.insert(EventDate_153.getString());
    FIX::EventPx EventPx_153;
    EventPx_153.setString("4179645");
    noEvents_0_2.set(EventPx_153);
    EvntGrp_NoEvents_153.insert(EventPx_153.getString());
    FIX::EventText EventText_153("STRING_2130180806");
    noEvents_0_2.set(EventText_153);
    EvntGrp_NoEvents_153.insert(EventText_153.getString());
    FIX::EventTime EventTime_153(FIX::UTCTIMESTAMP(0, 57, 56, 12, 1, 2014));
    noEvents_0_2.set(EventTime_153);
    EvntGrp_NoEvents_153.insert(EventTime_153.getString());
    FIX::EventType EventType_153(4);
    noEvents_0_2.set(EventType_153);
    EvntGrp_NoEvents_153.insert(EventType_153.getString());
    all_values.push_back(EvntGrp_NoEvents_153);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityListRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_148;
    FIX::InstrumentPartyID InstrumentPartyID_148("STRING_393555737");
    noInstrumentParties_0_0.set(InstrumentPartyID_148);
    InstrumentParties_NoInstrumentParties_148.insert(InstrumentPartyID_148.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_148('8');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_148);
    InstrumentParties_NoInstrumentParties_148.insert(InstrumentPartyIDSource_148.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_148(1156861446);
    noInstrumentParties_0_0.set(InstrumentPartyRole_148);
    InstrumentParties_NoInstrumentParties_148.insert(InstrumentPartyRole_148.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_148);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301;
      FIX::InstrumentPartySubID InstrumentPartySubID_301("STRING_55919495");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_301);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301.insert(InstrumentPartySubID_301.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_301(1047549091);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_301);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301.insert(InstrumentPartySubIDType_301.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302;
      FIX::InstrumentPartySubID InstrumentPartySubID_302("STRING_1484380071");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_302);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302.insert(InstrumentPartySubID_302.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_302(445041611);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_302);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302.insert(InstrumentPartySubIDType_302.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_149;
    FIX::InstrumentPartyID InstrumentPartyID_149("STRING_611551509");
    noInstrumentParties_0_1.set(InstrumentPartyID_149);
    InstrumentParties_NoInstrumentParties_149.insert(InstrumentPartyID_149.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_149('7');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_149);
    InstrumentParties_NoInstrumentParties_149.insert(InstrumentPartyIDSource_149.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_149(1767598979);
    noInstrumentParties_0_1.set(InstrumentPartyRole_149);
    InstrumentParties_NoInstrumentParties_149.insert(InstrumentPartyRole_149.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_149);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303;
      FIX::InstrumentPartySubID InstrumentPartySubID_303("STRING_937774815");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_303);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303.insert(InstrumentPartySubID_303.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_303(1517526205);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_303);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303.insert(InstrumentPartySubIDType_303.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304;
      FIX::InstrumentPartySubID InstrumentPartySubID_304("STRING_495317926");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_304);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304.insert(InstrumentPartySubID_304.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_304(1590185058);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_304);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304.insert(InstrumentPartySubIDType_304.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::SecurityListRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_150;
    FIX::InstrumentPartyID InstrumentPartyID_150("STRING_854153616");
    noInstrumentParties_0_2.set(InstrumentPartyID_150);
    InstrumentParties_NoInstrumentParties_150.insert(InstrumentPartyID_150.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_150('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_150);
    InstrumentParties_NoInstrumentParties_150.insert(InstrumentPartyIDSource_150.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_150(399929738);
    noInstrumentParties_0_2.set(InstrumentPartyRole_150);
    InstrumentParties_NoInstrumentParties_150.insert(InstrumentPartyRole_150.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_150);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305;
      FIX::InstrumentPartySubID InstrumentPartySubID_305("STRING_195327327");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_305);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305.insert(InstrumentPartySubID_305.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_305(382626896);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_305);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305.insert(InstrumentPartySubIDType_305.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityListRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_166;
    FIX::SecurityAltID SecurityAltID_166("STRING_164746879");
    noSecurityAltID_0_0.set(SecurityAltID_166);
    SecAltIDGrp_NoSecurityAltID_166.insert(SecurityAltID_166.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_166("STRING_1418146794");
    noSecurityAltID_0_0.set(SecurityAltIDSource_166);
    SecAltIDGrp_NoSecurityAltID_166.insert(SecurityAltIDSource_166.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_166);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_154;
  FIX::SecurityXML SecurityXML_155("XMLDATA_1369637080");
  msg.set(SecurityXML_155);
  FIX::SecurityXMLLen SecurityXMLLen_77(725756011);
  msg.set(SecurityXMLLen_77);
  FIX::SecurityXMLSchema SecurityXMLSchema_77("STRING_310879522");
  msg.set(SecurityXMLSchema_77);
  SecurityXML_154.insert(SecurityXMLSchema_77.getString());
  all_values.push_back(SecurityXML_154);

  // InstrumentExtension
  multiset<string> InstrumentExtension_13;
  FIX::DeliveryForm DeliveryForm_13(1);
  msg.set(DeliveryForm_13);
  InstrumentExtension_13.insert(DeliveryForm_13.getString());
  FIX::PctAtRisk PctAtRisk_13;
  PctAtRisk_13.setString("96.860000");
  msg.set(PctAtRisk_13);
  InstrumentExtension_13.insert(PctAtRisk_13.getString());
  all_values.push_back(InstrumentExtension_13);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityListRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_28;
    FIX::InstrAttribType InstrAttribType_28(12);
    noInstrAttrib_0_0.set(InstrAttribType_28);
    AttrbGrp_NoInstrAttrib_28.insert(InstrAttribType_28.getString());
    FIX::InstrAttribValue InstrAttribValue_28("STRING_1000960105");
    noInstrAttrib_0_0.set(InstrAttribValue_28);
    AttrbGrp_NoInstrAttrib_28.insert(InstrAttribValue_28.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_28);

    msg.addGroup(noInstrAttrib_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityListRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_120;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_120("DATA_1786900852");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingIssuer_120.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_120(1056879600);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingIssuerLen_120.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_120("DATA_2060659263");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingSecurityDesc_120.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_120(1123797275);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingSecurityDescLen_120.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_120;
    UnderlyingAdjustedQuantity_120.setString("15019212");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_120);
    UnderlyingInstrument_120.insert(UnderlyingAdjustedQuantity_120.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_120;
    UnderlyingAllocationPercent_120.setString("71.240000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_120);
    UnderlyingInstrument_120.insert(UnderlyingAllocationPercent_120.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_120;
    UnderlyingAttachmentPoint_120.setString("42.810000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_120);
    UnderlyingInstrument_120.insert(UnderlyingAttachmentPoint_120.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_120("STRING_1122036542");
    noUnderlyings_0_0.set(UnderlyingCFICode_120);
    UnderlyingInstrument_120.insert(UnderlyingCFICode_120.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_120("STRING_1680493671");
    noUnderlyings_0_0.set(UnderlyingCPProgram_120);
    UnderlyingInstrument_120.insert(UnderlyingCPProgram_120.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_120("STRING_631685448");
    noUnderlyings_0_0.set(UnderlyingCPRegType_120);
    UnderlyingInstrument_120.insert(UnderlyingCPRegType_120.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_120;
    UnderlyingCapValue_120.setString("4920791");
    noUnderlyings_0_0.set(UnderlyingCapValue_120);
    UnderlyingInstrument_120.insert(UnderlyingCapValue_120.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_120;
    UnderlyingCashAmount_120.setString("283279");
    noUnderlyings_0_0.set(UnderlyingCashAmount_120);
    UnderlyingInstrument_120.insert(UnderlyingCashAmount_120.getString());
    FIX::UnderlyingCashType UnderlyingCashType_120("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_120);
    UnderlyingInstrument_120.insert(UnderlyingCashType_120.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_120;
    UnderlyingContractMultiplier_120.setString("13462327");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_120);
    UnderlyingInstrument_120.insert(UnderlyingContractMultiplier_120.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_120(1953174421);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_120);
    UnderlyingInstrument_120.insert(UnderlyingContractMultiplierUnit_120.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_120("COUNTRY_474316597");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_120);
    UnderlyingInstrument_120.insert(UnderlyingCountryOfIssue_120.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_120("LOCALMKTDATE_533025966");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_120);
    UnderlyingInstrument_120.insert(UnderlyingCouponPaymentDate_120.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_120;
    UnderlyingCouponRate_120.setString("81.000000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_120);
    UnderlyingInstrument_120.insert(UnderlyingCouponRate_120.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_120("STRING_856943493");
    noUnderlyings_0_0.set(UnderlyingCreditRating_120);
    UnderlyingInstrument_120.insert(UnderlyingCreditRating_120.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_120("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_120);
    UnderlyingInstrument_120.insert(UnderlyingCurrency_120.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_120;
    UnderlyingCurrentValue_120.setString("1276066");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_120);
    UnderlyingInstrument_120.insert(UnderlyingCurrentValue_120.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_120;
    UnderlyingDetachmentPoint_120.setString("68.500000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_120);
    UnderlyingInstrument_120.insert(UnderlyingDetachmentPoint_120.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_120;
    UnderlyingDirtyPrice_120.setString("8915209");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_120);
    UnderlyingInstrument_120.insert(UnderlyingDirtyPrice_120.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_120;
    UnderlyingEndPrice_120.setString("4384861");
    noUnderlyings_0_0.set(UnderlyingEndPrice_120);
    UnderlyingInstrument_120.insert(UnderlyingEndPrice_120.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_120;
    UnderlyingEndValue_120.setString("10735657");
    noUnderlyings_0_0.set(UnderlyingEndValue_120);
    UnderlyingInstrument_120.insert(UnderlyingEndValue_120.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_120(1053720677);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_120);
    UnderlyingInstrument_120.insert(UnderlyingExerciseStyle_120.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_120;
    UnderlyingFXRate_120.setString("2947348");
    noUnderlyings_0_0.set(UnderlyingFXRate_120);
    UnderlyingInstrument_120.insert(UnderlyingFXRate_120.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_120('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_120);
    UnderlyingInstrument_120.insert(UnderlyingFXRateCalc_120.getString());
    FIX::UnderlyingFactor UnderlyingFactor_120;
    UnderlyingFactor_120.setString("20546807");
    noUnderlyings_0_0.set(UnderlyingFactor_120);
    UnderlyingInstrument_120.insert(UnderlyingFactor_120.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_120(1307845058);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_120);
    UnderlyingInstrument_120.insert(UnderlyingFlowScheduleType_120.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_120("STRING_475057623");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_120);
    UnderlyingInstrument_120.insert(UnderlyingInstrRegistry_120.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_120("LOCALMKTDATE_964076735");
    noUnderlyings_0_0.set(UnderlyingIssueDate_120);
    UnderlyingInstrument_120.insert(UnderlyingIssueDate_120.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_120("STRING_1221020673");
    noUnderlyings_0_0.set(UnderlyingIssuer_120);
    UnderlyingInstrument_120.insert(UnderlyingIssuer_120.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_120("STRING_1598854899");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_120);
    UnderlyingInstrument_120.insert(UnderlyingLocaleOfIssue_120.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_120("LOCALMKTDATE_318514298");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_120);
    UnderlyingInstrument_120.insert(UnderlyingMaturityDate_120.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_120("MONTHYEAR_1745747797");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_120);
    UnderlyingInstrument_120.insert(UnderlyingMaturityMonthYear_120.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_120("TZTIMEONLY_1292765532");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_120);
    UnderlyingInstrument_120.insert(UnderlyingMaturityTime_120.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_120;
    UnderlyingNotionalPercentageOutstanding_120.setString("8.410000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_120);
    UnderlyingInstrument_120.insert(UnderlyingNotionalPercentageOutstanding_120.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_120('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_120);
    UnderlyingInstrument_120.insert(UnderlyingOptAttribute_120.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_120;
    UnderlyingOriginalNotionalPercentageOutstanding_120.setString("9.810000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_120);
    UnderlyingInstrument_120.insert(UnderlyingOriginalNotionalPercentageOutstanding_120.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_120("STRING_1932629941");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_120);
    UnderlyingInstrument_120.insert(UnderlyingPriceUnitOfMeasure_120.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_120;
    UnderlyingPriceUnitOfMeasureQty_120.setString("13070857");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_120);
    UnderlyingInstrument_120.insert(UnderlyingPriceUnitOfMeasureQty_120.getString());
    FIX::UnderlyingProduct UnderlyingProduct_120(1998837840);
    noUnderlyings_0_0.set(UnderlyingProduct_120);
    UnderlyingInstrument_120.insert(UnderlyingProduct_120.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_120(1131379009);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_120);
    UnderlyingInstrument_120.insert(UnderlyingPutOrCall_120.getString());
    FIX::UnderlyingPx UnderlyingPx_120;
    UnderlyingPx_120.setString("11127765");
    noUnderlyings_0_0.set(UnderlyingPx_120);
    UnderlyingInstrument_120.insert(UnderlyingPx_120.getString());
    FIX::UnderlyingQty UnderlyingQty_120;
    UnderlyingQty_120.setString("3256707");
    noUnderlyings_0_0.set(UnderlyingQty_120);
    UnderlyingInstrument_120.insert(UnderlyingQty_120.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_120("LOCALMKTDATE_1664404976");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_120);
    UnderlyingInstrument_120.insert(UnderlyingRedemptionDate_120.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_120("STRING_1113794643");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_120);
    UnderlyingInstrument_120.insert(UnderlyingRepoCollateralSecurityType_120.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_120;
    UnderlyingRepurchaseRate_120.setString("42.820000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_120);
    UnderlyingInstrument_120.insert(UnderlyingRepurchaseRate_120.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_120(1999814746);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_120);
    UnderlyingInstrument_120.insert(UnderlyingRepurchaseTerm_120.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_120("STRING_1279559623");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_120);
    UnderlyingInstrument_120.insert(UnderlyingRestructuringType_120.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_120("STRING_1310220922");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityDesc_120.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_120("EXCHANGE_1557377948");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityExchange_120.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_120("STRING_23596966");
    noUnderlyings_0_0.set(UnderlyingSecurityID_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityID_120.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_120("STRING_1748707083");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityIDSource_120.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_120("STRING_483460066");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_120);
    UnderlyingInstrument_120.insert(UnderlyingSecuritySubType_120.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_120("STRING_1077317643");
    noUnderlyings_0_0.set(UnderlyingSecurityType_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityType_120.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_120("STRING_2043441970");
    noUnderlyings_0_0.set(UnderlyingSeniority_120);
    UnderlyingInstrument_120.insert(UnderlyingSeniority_120.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_120("STRING_1319100485");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_120);
    UnderlyingInstrument_120.insert(UnderlyingSettlMethod_120.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_120(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_120);
    UnderlyingInstrument_120.insert(UnderlyingSettlementType_120.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_120;
    UnderlyingStartValue_120.setString("12038033");
    noUnderlyings_0_0.set(UnderlyingStartValue_120);
    UnderlyingInstrument_120.insert(UnderlyingStartValue_120.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_120("STRING_1794158108");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_120);
    UnderlyingInstrument_120.insert(UnderlyingStateOrProvinceOfIssue_120.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_120("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_120);
    UnderlyingInstrument_120.insert(UnderlyingStrikeCurrency_120.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_120;
    UnderlyingStrikePrice_120.setString("12455293");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_120);
    UnderlyingInstrument_120.insert(UnderlyingStrikePrice_120.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_120("STRING_119622163");
    noUnderlyings_0_0.set(UnderlyingSymbol_120);
    UnderlyingInstrument_120.insert(UnderlyingSymbol_120.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_120("STRING_2023088202");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_120);
    UnderlyingInstrument_120.insert(UnderlyingSymbolSfx_120.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_120("STRING_390811244");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_120);
    UnderlyingInstrument_120.insert(UnderlyingTimeUnit_120.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_120("STRING_1560173004");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_120);
    UnderlyingInstrument_120.insert(UnderlyingUnitOfMeasure_120.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_120;
    UnderlyingUnitOfMeasureQty_120.setString("11543623");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_120);
    UnderlyingInstrument_120.insert(UnderlyingUnitOfMeasureQty_120.getString());
    all_values.push_back(UnderlyingInstrument_120);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_251;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_251("STRING_1345319297");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_251);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_251.insert(UnderlyingSecurityAltID_251.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_251("STRING_313964496");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_251);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_251.insert(UnderlyingSecurityAltIDSource_251.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_251);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_252;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_252("STRING_19132769");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_252);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_252.insert(UnderlyingSecurityAltID_252.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_252("STRING_329214659");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_252);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_252.insert(UnderlyingSecurityAltIDSource_252.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_252);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_239;
      FIX::UnderlyingStipType UnderlyingStipType_239("STRING_344803558");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_239);
      UnderlyingStipulations_NoUnderlyingStips_239.insert(UnderlyingStipType_239.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_239("STRING_1993619635");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_239);
      UnderlyingStipulations_NoUnderlyingStips_239.insert(UnderlyingStipValue_239.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_239);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_240;
      FIX::UnderlyingStipType UnderlyingStipType_240("STRING_393052035");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_240);
      UnderlyingStipulations_NoUnderlyingStips_240.insert(UnderlyingStipType_240.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_240("STRING_1527417840");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_240);
      UnderlyingStipulations_NoUnderlyingStips_240.insert(UnderlyingStipValue_240.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_240);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_237;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_237("STRING_1672611658");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_237);
      UndlyInstrumentParties_NoUndlyInstrumentParties_237.insert(UnderlyingInstrumentPartyID_237.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_237('6');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_237);
      UndlyInstrumentParties_NoUndlyInstrumentParties_237.insert(UnderlyingInstrumentPartyIDSource_237.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_237(1255845033);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_237);
      UndlyInstrumentParties_NoUndlyInstrumentParties_237.insert(UnderlyingInstrumentPartyRole_237.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_237);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_474("STRING_291378550");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_474);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474.insert(UnderlyingInstrumentPartySubID_474.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_474(1739305099);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_474);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474.insert(UnderlyingInstrumentPartySubIDType_474.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_475("STRING_626042619");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_475);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475.insert(UnderlyingInstrumentPartySubID_475.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_475(187336872);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_475);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475.insert(UnderlyingInstrumentPartySubIDType_475.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_476("STRING_910921936");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_476);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476.insert(UnderlyingInstrumentPartySubID_476.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_476(1610557397);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_476);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476.insert(UnderlyingInstrumentPartySubIDType_476.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_121;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_121("DATA_1391140252");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingIssuer_121.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_121(557596396);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingIssuerLen_121.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_121("DATA_1411665262");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingSecurityDesc_121.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_121(1668480657);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingSecurityDescLen_121.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_121;
    UnderlyingAdjustedQuantity_121.setString("18031257");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_121);
    UnderlyingInstrument_121.insert(UnderlyingAdjustedQuantity_121.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_121;
    UnderlyingAllocationPercent_121.setString("74.260000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_121);
    UnderlyingInstrument_121.insert(UnderlyingAllocationPercent_121.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_121;
    UnderlyingAttachmentPoint_121.setString("52.110000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_121);
    UnderlyingInstrument_121.insert(UnderlyingAttachmentPoint_121.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_121("STRING_46453352");
    noUnderlyings_0_1.set(UnderlyingCFICode_121);
    UnderlyingInstrument_121.insert(UnderlyingCFICode_121.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_121("STRING_943976782");
    noUnderlyings_0_1.set(UnderlyingCPProgram_121);
    UnderlyingInstrument_121.insert(UnderlyingCPProgram_121.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_121("STRING_550963938");
    noUnderlyings_0_1.set(UnderlyingCPRegType_121);
    UnderlyingInstrument_121.insert(UnderlyingCPRegType_121.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_121;
    UnderlyingCapValue_121.setString("2142319");
    noUnderlyings_0_1.set(UnderlyingCapValue_121);
    UnderlyingInstrument_121.insert(UnderlyingCapValue_121.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_121;
    UnderlyingCashAmount_121.setString("1418124");
    noUnderlyings_0_1.set(UnderlyingCashAmount_121);
    UnderlyingInstrument_121.insert(UnderlyingCashAmount_121.getString());
    FIX::UnderlyingCashType UnderlyingCashType_121("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_121);
    UnderlyingInstrument_121.insert(UnderlyingCashType_121.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_121;
    UnderlyingContractMultiplier_121.setString("2333646");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_121);
    UnderlyingInstrument_121.insert(UnderlyingContractMultiplier_121.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_121(471027091);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_121);
    UnderlyingInstrument_121.insert(UnderlyingContractMultiplierUnit_121.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_121("COUNTRY_144185826");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_121);
    UnderlyingInstrument_121.insert(UnderlyingCountryOfIssue_121.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_121("LOCALMKTDATE_578168256");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_121);
    UnderlyingInstrument_121.insert(UnderlyingCouponPaymentDate_121.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_121;
    UnderlyingCouponRate_121.setString("30.780000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_121);
    UnderlyingInstrument_121.insert(UnderlyingCouponRate_121.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_121("STRING_537237861");
    noUnderlyings_0_1.set(UnderlyingCreditRating_121);
    UnderlyingInstrument_121.insert(UnderlyingCreditRating_121.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_121("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_121);
    UnderlyingInstrument_121.insert(UnderlyingCurrency_121.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_121;
    UnderlyingCurrentValue_121.setString("623658");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_121);
    UnderlyingInstrument_121.insert(UnderlyingCurrentValue_121.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_121;
    UnderlyingDetachmentPoint_121.setString("75.630000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_121);
    UnderlyingInstrument_121.insert(UnderlyingDetachmentPoint_121.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_121;
    UnderlyingDirtyPrice_121.setString("12714751");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_121);
    UnderlyingInstrument_121.insert(UnderlyingDirtyPrice_121.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_121;
    UnderlyingEndPrice_121.setString("17585744");
    noUnderlyings_0_1.set(UnderlyingEndPrice_121);
    UnderlyingInstrument_121.insert(UnderlyingEndPrice_121.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_121;
    UnderlyingEndValue_121.setString("9396361");
    noUnderlyings_0_1.set(UnderlyingEndValue_121);
    UnderlyingInstrument_121.insert(UnderlyingEndValue_121.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_121(863296647);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_121);
    UnderlyingInstrument_121.insert(UnderlyingExerciseStyle_121.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_121;
    UnderlyingFXRate_121.setString("2371334");
    noUnderlyings_0_1.set(UnderlyingFXRate_121);
    UnderlyingInstrument_121.insert(UnderlyingFXRate_121.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_121('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_121);
    UnderlyingInstrument_121.insert(UnderlyingFXRateCalc_121.getString());
    FIX::UnderlyingFactor UnderlyingFactor_121;
    UnderlyingFactor_121.setString("17742185");
    noUnderlyings_0_1.set(UnderlyingFactor_121);
    UnderlyingInstrument_121.insert(UnderlyingFactor_121.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_121(1847690864);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_121);
    UnderlyingInstrument_121.insert(UnderlyingFlowScheduleType_121.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_121("STRING_370629589");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_121);
    UnderlyingInstrument_121.insert(UnderlyingInstrRegistry_121.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_121("LOCALMKTDATE_184331331");
    noUnderlyings_0_1.set(UnderlyingIssueDate_121);
    UnderlyingInstrument_121.insert(UnderlyingIssueDate_121.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_121("STRING_1111872479");
    noUnderlyings_0_1.set(UnderlyingIssuer_121);
    UnderlyingInstrument_121.insert(UnderlyingIssuer_121.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_121("STRING_2039110246");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_121);
    UnderlyingInstrument_121.insert(UnderlyingLocaleOfIssue_121.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_121("LOCALMKTDATE_1987457087");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_121);
    UnderlyingInstrument_121.insert(UnderlyingMaturityDate_121.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_121("MONTHYEAR_495676257");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_121);
    UnderlyingInstrument_121.insert(UnderlyingMaturityMonthYear_121.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_121("TZTIMEONLY_1435711809");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_121);
    UnderlyingInstrument_121.insert(UnderlyingMaturityTime_121.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_121;
    UnderlyingNotionalPercentageOutstanding_121.setString("4.390000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_121);
    UnderlyingInstrument_121.insert(UnderlyingNotionalPercentageOutstanding_121.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_121('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_121);
    UnderlyingInstrument_121.insert(UnderlyingOptAttribute_121.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_121;
    UnderlyingOriginalNotionalPercentageOutstanding_121.setString("57.480000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_121);
    UnderlyingInstrument_121.insert(UnderlyingOriginalNotionalPercentageOutstanding_121.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_121("STRING_100658720");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_121);
    UnderlyingInstrument_121.insert(UnderlyingPriceUnitOfMeasure_121.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_121;
    UnderlyingPriceUnitOfMeasureQty_121.setString("15814654");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_121);
    UnderlyingInstrument_121.insert(UnderlyingPriceUnitOfMeasureQty_121.getString());
    FIX::UnderlyingProduct UnderlyingProduct_121(704120535);
    noUnderlyings_0_1.set(UnderlyingProduct_121);
    UnderlyingInstrument_121.insert(UnderlyingProduct_121.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_121(334023418);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_121);
    UnderlyingInstrument_121.insert(UnderlyingPutOrCall_121.getString());
    FIX::UnderlyingPx UnderlyingPx_121;
    UnderlyingPx_121.setString("20524925");
    noUnderlyings_0_1.set(UnderlyingPx_121);
    UnderlyingInstrument_121.insert(UnderlyingPx_121.getString());
    FIX::UnderlyingQty UnderlyingQty_121;
    UnderlyingQty_121.setString("8483063");
    noUnderlyings_0_1.set(UnderlyingQty_121);
    UnderlyingInstrument_121.insert(UnderlyingQty_121.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_121("LOCALMKTDATE_912191674");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_121);
    UnderlyingInstrument_121.insert(UnderlyingRedemptionDate_121.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_121("STRING_222171992");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_121);
    UnderlyingInstrument_121.insert(UnderlyingRepoCollateralSecurityType_121.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_121;
    UnderlyingRepurchaseRate_121.setString("42.230000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_121);
    UnderlyingInstrument_121.insert(UnderlyingRepurchaseRate_121.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_121(870294123);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_121);
    UnderlyingInstrument_121.insert(UnderlyingRepurchaseTerm_121.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_121("STRING_237802155");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_121);
    UnderlyingInstrument_121.insert(UnderlyingRestructuringType_121.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_121("STRING_1447910094");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityDesc_121.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_121("EXCHANGE_1518551686");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityExchange_121.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_121("STRING_1509277351");
    noUnderlyings_0_1.set(UnderlyingSecurityID_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityID_121.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_121("STRING_1059000942");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityIDSource_121.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_121("STRING_310704151");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_121);
    UnderlyingInstrument_121.insert(UnderlyingSecuritySubType_121.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_121("STRING_225090350");
    noUnderlyings_0_1.set(UnderlyingSecurityType_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityType_121.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_121("STRING_1296134409");
    noUnderlyings_0_1.set(UnderlyingSeniority_121);
    UnderlyingInstrument_121.insert(UnderlyingSeniority_121.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_121("STRING_1437677136");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_121);
    UnderlyingInstrument_121.insert(UnderlyingSettlMethod_121.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_121(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_121);
    UnderlyingInstrument_121.insert(UnderlyingSettlementType_121.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_121;
    UnderlyingStartValue_121.setString("9963416");
    noUnderlyings_0_1.set(UnderlyingStartValue_121);
    UnderlyingInstrument_121.insert(UnderlyingStartValue_121.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_121("STRING_1808306725");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_121);
    UnderlyingInstrument_121.insert(UnderlyingStateOrProvinceOfIssue_121.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_121("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_121);
    UnderlyingInstrument_121.insert(UnderlyingStrikeCurrency_121.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_121;
    UnderlyingStrikePrice_121.setString("16999333");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_121);
    UnderlyingInstrument_121.insert(UnderlyingStrikePrice_121.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_121("STRING_2023613704");
    noUnderlyings_0_1.set(UnderlyingSymbol_121);
    UnderlyingInstrument_121.insert(UnderlyingSymbol_121.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_121("STRING_456406713");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_121);
    UnderlyingInstrument_121.insert(UnderlyingSymbolSfx_121.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_121("STRING_988161484");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_121);
    UnderlyingInstrument_121.insert(UnderlyingTimeUnit_121.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_121("STRING_1910040496");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_121);
    UnderlyingInstrument_121.insert(UnderlyingUnitOfMeasure_121.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_121;
    UnderlyingUnitOfMeasureQty_121.setString("18960597");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_121);
    UnderlyingInstrument_121.insert(UnderlyingUnitOfMeasureQty_121.getString());
    all_values.push_back(UnderlyingInstrument_121);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_253;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_253("STRING_2010699216");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_253);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_253.insert(UnderlyingSecurityAltID_253.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_253("STRING_1330041576");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_253);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_253.insert(UnderlyingSecurityAltIDSource_253.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_253);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_241;
      FIX::UnderlyingStipType UnderlyingStipType_241("STRING_197238987");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_241);
      UnderlyingStipulations_NoUnderlyingStips_241.insert(UnderlyingStipType_241.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_241("STRING_1235050491");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_241);
      UnderlyingStipulations_NoUnderlyingStips_241.insert(UnderlyingStipValue_241.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_241);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_238;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_238("STRING_1109430661");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_238);
      UndlyInstrumentParties_NoUndlyInstrumentParties_238.insert(UnderlyingInstrumentPartyID_238.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_238('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_238);
      UndlyInstrumentParties_NoUndlyInstrumentParties_238.insert(UnderlyingInstrumentPartyIDSource_238.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_238(1617841056);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_238);
      UndlyInstrumentParties_NoUndlyInstrumentParties_238.insert(UnderlyingInstrumentPartyRole_238.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_238);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_477("STRING_1695024639");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_477);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477.insert(UnderlyingInstrumentPartySubID_477.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_477(918267502);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_477);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477.insert(UnderlyingInstrumentPartySubIDType_477.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_478("STRING_1350792822");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_478);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478.insert(UnderlyingInstrumentPartySubID_478.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_478(1056818342);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_478);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478.insert(UnderlyingInstrumentPartySubIDType_478.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_239;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_239("STRING_1977268444");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_239);
      UndlyInstrumentParties_NoUndlyInstrumentParties_239.insert(UnderlyingInstrumentPartyID_239.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_239('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_239);
      UndlyInstrumentParties_NoUndlyInstrumentParties_239.insert(UnderlyingInstrumentPartyIDSource_239.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_239(1281908693);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_239);
      UndlyInstrumentParties_NoUndlyInstrumentParties_239.insert(UnderlyingInstrumentPartyRole_239.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_239);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_479("STRING_951690461");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_479);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479.insert(UnderlyingInstrumentPartySubID_479.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_479(1133733978);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_479);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479.insert(UnderlyingInstrumentPartySubIDType_479.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_480("STRING_2122260831");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_480);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480.insert(UnderlyingInstrumentPartySubID_480.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_480(612513538);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_480);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480.insert(UnderlyingInstrumentPartySubIDType_480.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_481("STRING_1169890595");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_481);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481.insert(UnderlyingInstrumentPartySubID_481.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_481(2082991287);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_481);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481.insert(UnderlyingInstrumentPartySubIDType_481.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_240;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_240("STRING_164963213");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_240);
      UndlyInstrumentParties_NoUndlyInstrumentParties_240.insert(UnderlyingInstrumentPartyID_240.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_240('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_240);
      UndlyInstrumentParties_NoUndlyInstrumentParties_240.insert(UnderlyingInstrumentPartyIDSource_240.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_240(391914353);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_240);
      UndlyInstrumentParties_NoUndlyInstrumentParties_240.insert(UnderlyingInstrumentPartyRole_240.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_240);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_482("STRING_808577500");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_482);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482.insert(UnderlyingInstrumentPartySubID_482.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_482(140490458);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_482);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482.insert(UnderlyingInstrumentPartySubIDType_482.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_483("STRING_1980478282");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_483);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483.insert(UnderlyingInstrumentPartySubID_483.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_483(671793068);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_483);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483.insert(UnderlyingInstrumentPartySubIDType_483.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
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
