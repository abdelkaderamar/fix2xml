#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityDefinitionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinitionRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityDefinitionRequest msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityDefinitionRequest_0;
  FIX::Currency Currency_54("GBP");
  msg.set(Currency_54);
  SecurityDefinitionRequest_0.insert(Currency_54.getString());
  FIX::EncodedText EncodedText_78("DATA_385276016");
  msg.set(EncodedText_78);
  SecurityDefinitionRequest_0.insert(EncodedText_78.getString());
  FIX::EncodedTextLen EncodedTextLen_78(569472937);
  msg.set(EncodedTextLen_78);
  SecurityDefinitionRequest_0.insert(EncodedTextLen_78.getString());
  FIX::ExpirationCycle ExpirationCycle_10(0);
  msg.set(ExpirationCycle_10);
  SecurityDefinitionRequest_0.insert(ExpirationCycle_10.getString());
  FIX::MarketID MarketID_17("EXCHANGE_395447950");
  msg.set(MarketID_17);
  SecurityDefinitionRequest_0.insert(MarketID_17.getString());
  FIX::MarketSegmentID MarketSegmentID_17("STRING_1013309302");
  msg.set(MarketSegmentID_17);
  SecurityDefinitionRequest_0.insert(MarketSegmentID_17.getString());
  FIX::SecurityReqID SecurityReqID_4("STRING_1875898182");
  msg.set(SecurityReqID_4);
  SecurityDefinitionRequest_0.insert(SecurityReqID_4.getString());
  FIX::SecurityRequestType SecurityRequestType_0(1);
  msg.set(SecurityRequestType_0);
  SecurityDefinitionRequest_0.insert(SecurityRequestType_0.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_9('1');
  msg.set(SubscriptionRequestType_9);
  SecurityDefinitionRequest_0.insert(SubscriptionRequestType_9.getString());
  FIX::Text Text_78("STRING_1830266195");
  msg.set(Text_78);
  SecurityDefinitionRequest_0.insert(Text_78.getString());
  FIX::TradingSessionID TradingSessionID_77("STRING_1");
  msg.set(TradingSessionID_77);
  SecurityDefinitionRequest_0.insert(TradingSessionID_77.getString());
  FIX::TradingSessionSubID TradingSessionSubID_77("STRING_2");
  msg.set(TradingSessionSubID_77);
  SecurityDefinitionRequest_0.insert(TradingSessionSubID_77.getString());
  all_values.push_back(SecurityDefinitionRequest_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinitionRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_101;
    FIX::EncodedLegIssuer EncodedLegIssuer_101("DATA_1234739850");
    noLegs_0_0.set(EncodedLegIssuer_101);
    InstrumentLeg_101.insert(EncodedLegIssuer_101.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_101(964488622);
    noLegs_0_0.set(EncodedLegIssuerLen_101);
    InstrumentLeg_101.insert(EncodedLegIssuerLen_101.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_101("DATA_389256766");
    noLegs_0_0.set(EncodedLegSecurityDesc_101);
    InstrumentLeg_101.insert(EncodedLegSecurityDesc_101.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_101(2045102979);
    noLegs_0_0.set(EncodedLegSecurityDescLen_101);
    InstrumentLeg_101.insert(EncodedLegSecurityDescLen_101.getString());
    FIX::LegCFICode LegCFICode_101("STRING_2061808729");
    noLegs_0_0.set(LegCFICode_101);
    InstrumentLeg_101.insert(LegCFICode_101.getString());
    FIX::LegContractMultiplier LegContractMultiplier_101;
    LegContractMultiplier_101.setString("6030890");
    noLegs_0_0.set(LegContractMultiplier_101);
    InstrumentLeg_101.insert(LegContractMultiplier_101.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_101(1794851362);
    noLegs_0_0.set(LegContractMultiplierUnit_101);
    InstrumentLeg_101.insert(LegContractMultiplierUnit_101.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_101("MONTHYEAR_26359587");
    noLegs_0_0.set(LegContractSettlMonth_101);
    InstrumentLeg_101.insert(LegContractSettlMonth_101.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_101("COUNTRY_1191201512");
    noLegs_0_0.set(LegCountryOfIssue_101);
    InstrumentLeg_101.insert(LegCountryOfIssue_101.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_101("LOCALMKTDATE_1638212676");
    noLegs_0_0.set(LegCouponPaymentDate_101);
    InstrumentLeg_101.insert(LegCouponPaymentDate_101.getString());
    FIX::LegCouponRate LegCouponRate_101;
    LegCouponRate_101.setString("2.530000");
    noLegs_0_0.set(LegCouponRate_101);
    InstrumentLeg_101.insert(LegCouponRate_101.getString());
    FIX::LegCreditRating LegCreditRating_101("STRING_395026207");
    noLegs_0_0.set(LegCreditRating_101);
    InstrumentLeg_101.insert(LegCreditRating_101.getString());
    FIX::LegCurrency LegCurrency_101("CAN");
    noLegs_0_0.set(LegCurrency_101);
    InstrumentLeg_101.insert(LegCurrency_101.getString());
    FIX::LegDatedDate LegDatedDate_101("LOCALMKTDATE_824167495");
    noLegs_0_0.set(LegDatedDate_101);
    InstrumentLeg_101.insert(LegDatedDate_101.getString());
    FIX::LegExerciseStyle LegExerciseStyle_101(219361519);
    noLegs_0_0.set(LegExerciseStyle_101);
    InstrumentLeg_101.insert(LegExerciseStyle_101.getString());
    FIX::LegFactor LegFactor_101;
    LegFactor_101.setString("12628254");
    noLegs_0_0.set(LegFactor_101);
    InstrumentLeg_101.insert(LegFactor_101.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_101(531555569);
    noLegs_0_0.set(LegFlowScheduleType_101);
    InstrumentLeg_101.insert(LegFlowScheduleType_101.getString());
    FIX::LegInstrRegistry LegInstrRegistry_101("STRING_399200062");
    noLegs_0_0.set(LegInstrRegistry_101);
    InstrumentLeg_101.insert(LegInstrRegistry_101.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_101("LOCALMKTDATE_1648101489");
    noLegs_0_0.set(LegInterestAccrualDate_101);
    InstrumentLeg_101.insert(LegInterestAccrualDate_101.getString());
    FIX::LegIssueDate LegIssueDate_101("LOCALMKTDATE_1101028506");
    noLegs_0_0.set(LegIssueDate_101);
    InstrumentLeg_101.insert(LegIssueDate_101.getString());
    FIX::LegIssuer LegIssuer_101("STRING_397527803");
    noLegs_0_0.set(LegIssuer_101);
    InstrumentLeg_101.insert(LegIssuer_101.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_101("STRING_2043549440");
    noLegs_0_0.set(LegLocaleOfIssue_101);
    InstrumentLeg_101.insert(LegLocaleOfIssue_101.getString());
    FIX::LegMaturityDate LegMaturityDate_101("LOCALMKTDATE_2114337808");
    noLegs_0_0.set(LegMaturityDate_101);
    InstrumentLeg_101.insert(LegMaturityDate_101.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_101("MONTHYEAR_125942337");
    noLegs_0_0.set(LegMaturityMonthYear_101);
    InstrumentLeg_101.insert(LegMaturityMonthYear_101.getString());
    FIX::LegMaturityTime LegMaturityTime_101("TZTIMEONLY_987833063");
    noLegs_0_0.set(LegMaturityTime_101);
    InstrumentLeg_101.insert(LegMaturityTime_101.getString());
    FIX::LegOptAttribute LegOptAttribute_101('1');
    noLegs_0_0.set(LegOptAttribute_101);
    InstrumentLeg_101.insert(LegOptAttribute_101.getString());
    FIX::LegOptionRatio LegOptionRatio_101;
    LegOptionRatio_101.setString("19562085");
    noLegs_0_0.set(LegOptionRatio_101);
    InstrumentLeg_101.insert(LegOptionRatio_101.getString());
    FIX::LegPool LegPool_101("STRING_2068457783");
    noLegs_0_0.set(LegPool_101);
    InstrumentLeg_101.insert(LegPool_101.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_101("STRING_1769606911");
    noLegs_0_0.set(LegPriceUnitOfMeasure_101);
    InstrumentLeg_101.insert(LegPriceUnitOfMeasure_101.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_101;
    LegPriceUnitOfMeasureQty_101.setString("20578894");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_101);
    InstrumentLeg_101.insert(LegPriceUnitOfMeasureQty_101.getString());
    FIX::LegProduct LegProduct_101(1155713986);
    noLegs_0_0.set(LegProduct_101);
    InstrumentLeg_101.insert(LegProduct_101.getString());
    FIX::LegPutOrCall LegPutOrCall_101(586611886);
    noLegs_0_0.set(LegPutOrCall_101);
    InstrumentLeg_101.insert(LegPutOrCall_101.getString());
    FIX::LegRatioQty LegRatioQty_101;
    LegRatioQty_101.setString("2996625");
    noLegs_0_0.set(LegRatioQty_101);
    InstrumentLeg_101.insert(LegRatioQty_101.getString());
    FIX::LegRedemptionDate LegRedemptionDate_101("LOCALMKTDATE_1053333317");
    noLegs_0_0.set(LegRedemptionDate_101);
    InstrumentLeg_101.insert(LegRedemptionDate_101.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_101("STRING_500936967");
    noLegs_0_0.set(LegRepoCollateralSecurityType_101);
    InstrumentLeg_101.insert(LegRepoCollateralSecurityType_101.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_101;
    LegRepurchaseRate_101.setString("15.570000");
    noLegs_0_0.set(LegRepurchaseRate_101);
    InstrumentLeg_101.insert(LegRepurchaseRate_101.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_101(700701031);
    noLegs_0_0.set(LegRepurchaseTerm_101);
    InstrumentLeg_101.insert(LegRepurchaseTerm_101.getString());
    FIX::LegSecurityDesc LegSecurityDesc_101("STRING_527296554");
    noLegs_0_0.set(LegSecurityDesc_101);
    InstrumentLeg_101.insert(LegSecurityDesc_101.getString());
    FIX::LegSecurityExchange LegSecurityExchange_101("EXCHANGE_2093953069");
    noLegs_0_0.set(LegSecurityExchange_101);
    InstrumentLeg_101.insert(LegSecurityExchange_101.getString());
    FIX::LegSecurityID LegSecurityID_101("STRING_191430060");
    noLegs_0_0.set(LegSecurityID_101);
    InstrumentLeg_101.insert(LegSecurityID_101.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_101("STRING_1932556807");
    noLegs_0_0.set(LegSecurityIDSource_101);
    InstrumentLeg_101.insert(LegSecurityIDSource_101.getString());
    FIX::LegSecuritySubType LegSecuritySubType_101("STRING_341495628");
    noLegs_0_0.set(LegSecuritySubType_101);
    InstrumentLeg_101.insert(LegSecuritySubType_101.getString());
    FIX::LegSecurityType LegSecurityType_101("STRING_818525849");
    noLegs_0_0.set(LegSecurityType_101);
    InstrumentLeg_101.insert(LegSecurityType_101.getString());
    FIX::LegSide LegSide_101('1');
    noLegs_0_0.set(LegSide_101);
    InstrumentLeg_101.insert(LegSide_101.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_101("STRING_1165663124");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_101);
    InstrumentLeg_101.insert(LegStateOrProvinceOfIssue_101.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_101("CHF");
    noLegs_0_0.set(LegStrikeCurrency_101);
    InstrumentLeg_101.insert(LegStrikeCurrency_101.getString());
    FIX::LegStrikePrice LegStrikePrice_101;
    LegStrikePrice_101.setString("16972186");
    noLegs_0_0.set(LegStrikePrice_101);
    InstrumentLeg_101.insert(LegStrikePrice_101.getString());
    FIX::LegSymbol LegSymbol_101("STRING_1437087430");
    noLegs_0_0.set(LegSymbol_101);
    InstrumentLeg_101.insert(LegSymbol_101.getString());
    FIX::LegSymbolSfx LegSymbolSfx_101("STRING_2048023573");
    noLegs_0_0.set(LegSymbolSfx_101);
    InstrumentLeg_101.insert(LegSymbolSfx_101.getString());
    FIX::LegTimeUnit LegTimeUnit_101("STRING_650763551");
    noLegs_0_0.set(LegTimeUnit_101);
    InstrumentLeg_101.insert(LegTimeUnit_101.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_101("STRING_1834615233");
    noLegs_0_0.set(LegUnitOfMeasure_101);
    InstrumentLeg_101.insert(LegUnitOfMeasure_101.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_101;
    LegUnitOfMeasureQty_101.setString("19440893");
    noLegs_0_0.set(LegUnitOfMeasureQty_101);
    InstrumentLeg_101.insert(LegUnitOfMeasureQty_101.getString());
    all_values.push_back(InstrumentLeg_101);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_177;
      FIX::LegSecurityAltID LegSecurityAltID_177("STRING_1960557570");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_177);
      LegSecAltIDGrp_NoLegSecurityAltID_177.insert(LegSecurityAltID_177.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_177("STRING_784438780");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_177);
      LegSecAltIDGrp_NoLegSecurityAltID_177.insert(LegSecurityAltIDSource_177.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_177);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_178;
      FIX::LegSecurityAltID LegSecurityAltID_178("STRING_1847220332");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_178);
      LegSecAltIDGrp_NoLegSecurityAltID_178.insert(LegSecurityAltID_178.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_178("STRING_1769282454");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_178);
      LegSecAltIDGrp_NoLegSecurityAltID_178.insert(LegSecurityAltIDSource_178.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_178);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_179;
      FIX::LegSecurityAltID LegSecurityAltID_179("STRING_705412915");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_179);
      LegSecAltIDGrp_NoLegSecurityAltID_179.insert(LegSecurityAltID_179.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_179("STRING_1469343596");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_179);
      LegSecAltIDGrp_NoLegSecurityAltID_179.insert(LegSecurityAltIDSource_179.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_179);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_72;
  FIX::AttachmentPoint AttachmentPoint_72;
  AttachmentPoint_72.setString("82.250000");
  msg.set(AttachmentPoint_72);
  Instrument_72.insert(AttachmentPoint_72.getString());
  FIX::CFICode CFICode_72("STRING_1861126901");
  msg.set(CFICode_72);
  Instrument_72.insert(CFICode_72.getString());
  FIX::CPProgram CPProgram_72(1);
  msg.set(CPProgram_72);
  Instrument_72.insert(CPProgram_72.getString());
  FIX::CPRegType CPRegType_72("STRING_1979350762");
  msg.set(CPRegType_72);
  Instrument_72.insert(CPRegType_72.getString());
  FIX::CapPrice CapPrice_72;
  CapPrice_72.setString("7669765");
  msg.set(CapPrice_72);
  Instrument_72.insert(CapPrice_72.getString());
  FIX::ContractMultiplier ContractMultiplier_72;
  ContractMultiplier_72.setString("4094088");
  msg.set(ContractMultiplier_72);
  Instrument_72.insert(ContractMultiplier_72.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_72(2);
  msg.set(ContractMultiplierUnit_72);
  Instrument_72.insert(ContractMultiplierUnit_72.getString());
  FIX::ContractSettlMonth ContractSettlMonth_72("MONTHYEAR_1467677602");
  msg.set(ContractSettlMonth_72);
  Instrument_72.insert(ContractSettlMonth_72.getString());
  FIX::CountryOfIssue CountryOfIssue_72("COUNTRY_936705355");
  msg.set(CountryOfIssue_72);
  Instrument_72.insert(CountryOfIssue_72.getString());
  FIX::CouponPaymentDate CouponPaymentDate_72("LOCALMKTDATE_681088093");
  msg.set(CouponPaymentDate_72);
  Instrument_72.insert(CouponPaymentDate_72.getString());
  FIX::CouponRate CouponRate_72;
  CouponRate_72.setString("76.620000");
  msg.set(CouponRate_72);
  Instrument_72.insert(CouponRate_72.getString());
  FIX::CreditRating CreditRating_72("STRING_721778515");
  msg.set(CreditRating_72);
  Instrument_72.insert(CreditRating_72.getString());
  FIX::DatedDate DatedDate_72("LOCALMKTDATE_1022583722");
  msg.set(DatedDate_72);
  Instrument_72.insert(DatedDate_72.getString());
  FIX::DetachmentPoint DetachmentPoint_72;
  DetachmentPoint_72.setString("98.630000");
  msg.set(DetachmentPoint_72);
  Instrument_72.insert(DetachmentPoint_72.getString());
  FIX::EncodedIssuer EncodedIssuer_72("DATA_2006358773");
  msg.set(EncodedIssuer_72);
  Instrument_72.insert(EncodedIssuer_72.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_72(40763198);
  msg.set(EncodedIssuerLen_72);
  Instrument_72.insert(EncodedIssuerLen_72.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_72("DATA_1368037232");
  msg.set(EncodedSecurityDesc_72);
  Instrument_72.insert(EncodedSecurityDesc_72.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_72(258797209);
  msg.set(EncodedSecurityDescLen_72);
  Instrument_72.insert(EncodedSecurityDescLen_72.getString());
  FIX::ExerciseStyle ExerciseStyle_72(0);
  msg.set(ExerciseStyle_72);
  Instrument_72.insert(ExerciseStyle_72.getString());
  FIX::Factor Factor_72;
  Factor_72.setString("6576410");
  msg.set(Factor_72);
  Instrument_72.insert(Factor_72.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_72(true);
  msg.set(FlexProductEligibilityIndicator_72);
  Instrument_72.insert(FlexProductEligibilityIndicator_72.getString());
  FIX::FlexibleIndicator FlexibleIndicator_72(true);
  msg.set(FlexibleIndicator_72);
  Instrument_72.insert(FlexibleIndicator_72.getString());
  FIX::FloorPrice FloorPrice_72;
  FloorPrice_72.setString("3447726");
  msg.set(FloorPrice_72);
  Instrument_72.insert(FloorPrice_72.getString());
  FIX::FlowScheduleType FlowScheduleType_72(4);
  msg.set(FlowScheduleType_72);
  Instrument_72.insert(FlowScheduleType_72.getString());
  FIX::InstrRegistry InstrRegistry_72("STRING_858879506");
  msg.set(InstrRegistry_72);
  Instrument_72.insert(InstrRegistry_72.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_72('1');
  msg.set(InstrmtAssignmentMethod_72);
  Instrument_72.insert(InstrmtAssignmentMethod_72.getString());
  FIX::InterestAccrualDate InterestAccrualDate_72("LOCALMKTDATE_740381631");
  msg.set(InterestAccrualDate_72);
  Instrument_72.insert(InterestAccrualDate_72.getString());
  FIX::IssueDate IssueDate_72("LOCALMKTDATE_558616191");
  msg.set(IssueDate_72);
  Instrument_72.insert(IssueDate_72.getString());
  FIX::Issuer Issuer_72("STRING_1927128977");
  msg.set(Issuer_72);
  Instrument_72.insert(Issuer_72.getString());
  FIX::ListMethod ListMethod_72(0);
  msg.set(ListMethod_72);
  Instrument_72.insert(ListMethod_72.getString());
  FIX::LocaleOfIssue LocaleOfIssue_72("STRING_2027959787");
  msg.set(LocaleOfIssue_72);
  Instrument_72.insert(LocaleOfIssue_72.getString());
  FIX::MaturityDate MaturityDate_72("LOCALMKTDATE_1459333554");
  msg.set(MaturityDate_72);
  Instrument_72.insert(MaturityDate_72.getString());
  FIX::MaturityMonthYear MaturityMonthYear_72("MONTHYEAR_1159437800");
  msg.set(MaturityMonthYear_72);
  Instrument_72.insert(MaturityMonthYear_72.getString());
  FIX::MaturityTime MaturityTime_72("TZTIMEONLY_1936431621");
  msg.set(MaturityTime_72);
  Instrument_72.insert(MaturityTime_72.getString());
  FIX::MinPriceIncrement MinPriceIncrement_72;
  MinPriceIncrement_72.setString("12912006");
  msg.set(MinPriceIncrement_72);
  Instrument_72.insert(MinPriceIncrement_72.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_72;
  MinPriceIncrementAmount_72.setString("19264143");
  msg.set(MinPriceIncrementAmount_72);
  Instrument_72.insert(MinPriceIncrementAmount_72.getString());
  FIX::NTPositionLimit NTPositionLimit_72(198356774);
  msg.set(NTPositionLimit_72);
  Instrument_72.insert(NTPositionLimit_72.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_72;
  NotionalPercentageOutstanding_72.setString("93.410000");
  msg.set(NotionalPercentageOutstanding_72);
  Instrument_72.insert(NotionalPercentageOutstanding_72.getString());
  FIX::OptAttribute OptAttribute_72('1');
  msg.set(OptAttribute_72);
  Instrument_72.insert(OptAttribute_72.getString());
  FIX::OptPayoutAmount OptPayoutAmount_72;
  OptPayoutAmount_72.setString("11350621");
  msg.set(OptPayoutAmount_72);
  Instrument_72.insert(OptPayoutAmount_72.getString());
  FIX::OptPayoutType OptPayoutType_72(2);
  msg.set(OptPayoutType_72);
  Instrument_72.insert(OptPayoutType_72.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_72;
  OriginalNotionalPercentageOutstanding_72.setString("23.400000");
  msg.set(OriginalNotionalPercentageOutstanding_72);
  Instrument_72.insert(OriginalNotionalPercentageOutstanding_72.getString());
  FIX::Pool Pool_72("STRING_1856840644");
  msg.set(Pool_72);
  Instrument_72.insert(Pool_72.getString());
  FIX::PositionLimit PositionLimit_72(1582007508);
  msg.set(PositionLimit_72);
  Instrument_72.insert(PositionLimit_72.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_72("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_72);
  Instrument_72.insert(PriceQuoteMethod_72.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_72("STRING_1715715770");
  msg.set(PriceUnitOfMeasure_72);
  Instrument_72.insert(PriceUnitOfMeasure_72.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_72;
  PriceUnitOfMeasureQty_72.setString("16227707");
  msg.set(PriceUnitOfMeasureQty_72);
  Instrument_72.insert(PriceUnitOfMeasureQty_72.getString());
  FIX::Product Product_74(5);
  msg.set(Product_74);
  Instrument_72.insert(Product_74.getString());
  FIX::ProductComplex ProductComplex_72("STRING_1974512979");
  msg.set(ProductComplex_72);
  Instrument_72.insert(ProductComplex_72.getString());
  FIX::PutOrCall PutOrCall_72(1);
  msg.set(PutOrCall_72);
  Instrument_72.insert(PutOrCall_72.getString());
  FIX::RedemptionDate RedemptionDate_72("LOCALMKTDATE_966576802");
  msg.set(RedemptionDate_72);
  Instrument_72.insert(RedemptionDate_72.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_72("STRING_2133850113");
  msg.set(RepoCollateralSecurityType_72);
  Instrument_72.insert(RepoCollateralSecurityType_72.getString());
  FIX::RepurchaseRate RepurchaseRate_72;
  RepurchaseRate_72.setString("7.440000");
  msg.set(RepurchaseRate_72);
  Instrument_72.insert(RepurchaseRate_72.getString());
  FIX::RepurchaseTerm RepurchaseTerm_72(1311349402);
  msg.set(RepurchaseTerm_72);
  Instrument_72.insert(RepurchaseTerm_72.getString());
  FIX::RestructuringType RestructuringType_72("STRING_FR");
  msg.set(RestructuringType_72);
  Instrument_72.insert(RestructuringType_72.getString());
  FIX::SecurityDesc SecurityDesc_72("STRING_165926602");
  msg.set(SecurityDesc_72);
  Instrument_72.insert(SecurityDesc_72.getString());
  FIX::SecurityExchange SecurityExchange_72("EXCHANGE_1469195924");
  msg.set(SecurityExchange_72);
  Instrument_72.insert(SecurityExchange_72.getString());
  FIX::SecurityGroup SecurityGroup_72("STRING_682690947");
  msg.set(SecurityGroup_72);
  Instrument_72.insert(SecurityGroup_72.getString());
  FIX::SecurityID SecurityID_72("STRING_724542793");
  msg.set(SecurityID_72);
  Instrument_72.insert(SecurityID_72.getString());
  FIX::SecurityIDSource SecurityIDSource_72("STRING_C");
  msg.set(SecurityIDSource_72);
  Instrument_72.insert(SecurityIDSource_72.getString());
  FIX::SecurityStatus SecurityStatus_72("STRING_2");
  msg.set(SecurityStatus_72);
  Instrument_72.insert(SecurityStatus_72.getString());
  FIX::SecuritySubType SecuritySubType_73("STRING_605018932");
  msg.set(SecuritySubType_73);
  Instrument_72.insert(SecuritySubType_73.getString());
  FIX::SecurityType SecurityType_74("STRING_UST");
  msg.set(SecurityType_74);
  Instrument_72.insert(SecurityType_74.getString());
  FIX::Seniority Seniority_72("STRING_SR");
  msg.set(Seniority_72);
  Instrument_72.insert(Seniority_72.getString());
  FIX::SettlMethod SettlMethod_72('P');
  msg.set(SettlMethod_72);
  Instrument_72.insert(SettlMethod_72.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_72("STRING_1851891829");
  msg.set(SettleOnOpenFlag_72);
  Instrument_72.insert(SettleOnOpenFlag_72.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_72("STRING_919370368");
  msg.set(StateOrProvinceOfIssue_72);
  Instrument_72.insert(StateOrProvinceOfIssue_72.getString());
  FIX::StrikeCurrency StrikeCurrency_72("JPY");
  msg.set(StrikeCurrency_72);
  Instrument_72.insert(StrikeCurrency_72.getString());
  FIX::StrikeMultiplier StrikeMultiplier_72;
  StrikeMultiplier_72.setString("184950");
  msg.set(StrikeMultiplier_72);
  Instrument_72.insert(StrikeMultiplier_72.getString());
  FIX::StrikePrice StrikePrice_72;
  StrikePrice_72.setString("17273858");
  msg.set(StrikePrice_72);
  Instrument_72.insert(StrikePrice_72.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_72(1);
  msg.set(StrikePriceBoundaryMethod_72);
  Instrument_72.insert(StrikePriceBoundaryMethod_72.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_72;
  StrikePriceBoundaryPrecision_72.setString("73.860000");
  msg.set(StrikePriceBoundaryPrecision_72);
  Instrument_72.insert(StrikePriceBoundaryPrecision_72.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_72(2);
  msg.set(StrikePriceDeterminationMethod_72);
  Instrument_72.insert(StrikePriceDeterminationMethod_72.getString());
  FIX::StrikeValue StrikeValue_72;
  StrikeValue_72.setString("17241751");
  msg.set(StrikeValue_72);
  Instrument_72.insert(StrikeValue_72.getString());
  FIX::Symbol Symbol_72("STRING_1865109589");
  msg.set(Symbol_72);
  Instrument_72.insert(Symbol_72.getString());
  FIX::SymbolSfx SymbolSfx_72("STRING_WI");
  msg.set(SymbolSfx_72);
  Instrument_72.insert(SymbolSfx_72.getString());
  FIX::TimeUnit TimeUnit_72("STRING_Mo");
  msg.set(TimeUnit_72);
  Instrument_72.insert(TimeUnit_72.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_72(2);
  msg.set(UnderlyingPriceDeterminationMethod_72);
  Instrument_72.insert(UnderlyingPriceDeterminationMethod_72.getString());
  FIX::UnitOfMeasure UnitOfMeasure_72("STRING_Gal");
  msg.set(UnitOfMeasure_72);
  Instrument_72.insert(UnitOfMeasure_72.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_72;
  UnitOfMeasureQty_72.setString("2652475");
  msg.set(UnitOfMeasureQty_72);
  Instrument_72.insert(UnitOfMeasureQty_72.getString());
  FIX::ValuationMethod ValuationMethod_72("STRING_FUT");
  msg.set(ValuationMethod_72);
  Instrument_72.insert(ValuationMethod_72.getString());
  all_values.push_back(Instrument_72);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinitionRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_136;
    FIX::ComplexEventCondition ComplexEventCondition_136(2);
    noComplexEvents_0_0.set(ComplexEventCondition_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventCondition_136.getString());
    FIX::ComplexEventPrice ComplexEventPrice_136;
    ComplexEventPrice_136.setString("1570042");
    noComplexEvents_0_0.set(ComplexEventPrice_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventPrice_136.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_136(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventPriceBoundaryMethod_136.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_136;
    ComplexEventPriceBoundaryPrecision_136.setString("48.750000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventPriceBoundaryPrecision_136.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_136(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventPriceTimeType_136.getString());
    FIX::ComplexEventType ComplexEventType_136(1);
    noComplexEvents_0_0.set(ComplexEventType_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventType_136.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_136;
    ComplexOptPayoutAmount_136.setString("4627640");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexOptPayoutAmount_136.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_136);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_282;
      FIX::ComplexEventEndDate ComplexEventEndDate_282(FIX::UTCTIMESTAMP(9, 15, 29, 3, 92010));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_282);
      ComplexEventDates_NoComplexEventDates_282.insert(ComplexEventEndDate_282.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_282(FIX::UTCTIMESTAMP(22, 44, 19, 6, 112007));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_282);
      ComplexEventDates_NoComplexEventDates_282.insert(ComplexEventStartDate_282.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_282);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_561;
        FIX::ComplexEventEndTime ComplexEventEndTime_561(FIX::UTCTIMEONLY(8, 59, 20));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_561);
        ComplexEventTimes_NoComplexEventTimes_561.insert(ComplexEventEndTime_561.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_561(FIX::UTCTIMEONLY(8, 3, 18));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_561);
        ComplexEventTimes_NoComplexEventTimes_561.insert(ComplexEventStartTime_561.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_561);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_283;
      FIX::ComplexEventEndDate ComplexEventEndDate_283(FIX::UTCTIMESTAMP(20, 50, 40, 14, 92003));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_283);
      ComplexEventDates_NoComplexEventDates_283.insert(ComplexEventEndDate_283.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_283(FIX::UTCTIMESTAMP(0, 47, 32, 14, 32004));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_283);
      ComplexEventDates_NoComplexEventDates_283.insert(ComplexEventStartDate_283.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_283);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_562;
        FIX::ComplexEventEndTime ComplexEventEndTime_562(FIX::UTCTIMEONLY(14, 4, 28));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_562);
        ComplexEventTimes_NoComplexEventTimes_562.insert(ComplexEventEndTime_562.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_562(FIX::UTCTIMEONLY(6, 57, 32));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_562);
        ComplexEventTimes_NoComplexEventTimes_562.insert(ComplexEventStartTime_562.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_562);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_563;
        FIX::ComplexEventEndTime ComplexEventEndTime_563(FIX::UTCTIMEONLY(5, 23, 2));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_563);
        ComplexEventTimes_NoComplexEventTimes_563.insert(ComplexEventEndTime_563.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_563(FIX::UTCTIMEONLY(19, 5, 7));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_563);
        ComplexEventTimes_NoComplexEventTimes_563.insert(ComplexEventStartTime_563.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_563);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_564;
        FIX::ComplexEventEndTime ComplexEventEndTime_564(FIX::UTCTIMEONLY(18, 57, 16));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_564);
        ComplexEventTimes_NoComplexEventTimes_564.insert(ComplexEventEndTime_564.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_564(FIX::UTCTIMEONLY(21, 30, 21));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_564);
        ComplexEventTimes_NoComplexEventTimes_564.insert(ComplexEventStartTime_564.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_564);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_284;
      FIX::ComplexEventEndDate ComplexEventEndDate_284(FIX::UTCTIMESTAMP(5, 45, 8, 7, 22016));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_284);
      ComplexEventDates_NoComplexEventDates_284.insert(ComplexEventEndDate_284.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_284(FIX::UTCTIMESTAMP(7, 24, 3, 19, 112006));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_284);
      ComplexEventDates_NoComplexEventDates_284.insert(ComplexEventStartDate_284.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_284);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_565;
        FIX::ComplexEventEndTime ComplexEventEndTime_565(FIX::UTCTIMEONLY(10, 18, 5));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_565);
        ComplexEventTimes_NoComplexEventTimes_565.insert(ComplexEventEndTime_565.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_565(FIX::UTCTIMEONLY(17, 3, 21));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_565);
        ComplexEventTimes_NoComplexEventTimes_565.insert(ComplexEventStartTime_565.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_565);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_566;
        FIX::ComplexEventEndTime ComplexEventEndTime_566(FIX::UTCTIMEONLY(21, 10, 18));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_566);
        ComplexEventTimes_NoComplexEventTimes_566.insert(ComplexEventEndTime_566.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_566(FIX::UTCTIMEONLY(20, 48, 10));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_566);
        ComplexEventTimes_NoComplexEventTimes_566.insert(ComplexEventStartTime_566.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_566);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityDefinitionRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_139;
    FIX::EventDate EventDate_139("LOCALMKTDATE_1399616757");
    noEvents_0_0.set(EventDate_139);
    EvntGrp_NoEvents_139.insert(EventDate_139.getString());
    FIX::EventPx EventPx_139;
    EventPx_139.setString("1305303");
    noEvents_0_0.set(EventPx_139);
    EvntGrp_NoEvents_139.insert(EventPx_139.getString());
    FIX::EventText EventText_139("STRING_587476774");
    noEvents_0_0.set(EventText_139);
    EvntGrp_NoEvents_139.insert(EventText_139.getString());
    FIX::EventTime EventTime_139(FIX::UTCTIMESTAMP(20, 2, 59, 15, 72003));
    noEvents_0_0.set(EventTime_139);
    EvntGrp_NoEvents_139.insert(EventTime_139.getString());
    FIX::EventType EventType_139(7);
    noEvents_0_0.set(EventType_139);
    EvntGrp_NoEvents_139.insert(EventType_139.getString());
    all_values.push_back(EvntGrp_NoEvents_139);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_140;
    FIX::EventDate EventDate_140("LOCALMKTDATE_1547573380");
    noEvents_0_1.set(EventDate_140);
    EvntGrp_NoEvents_140.insert(EventDate_140.getString());
    FIX::EventPx EventPx_140;
    EventPx_140.setString("10110633");
    noEvents_0_1.set(EventPx_140);
    EvntGrp_NoEvents_140.insert(EventPx_140.getString());
    FIX::EventText EventText_140("STRING_1495987974");
    noEvents_0_1.set(EventText_140);
    EvntGrp_NoEvents_140.insert(EventText_140.getString());
    FIX::EventTime EventTime_140(FIX::UTCTIMESTAMP(1, 4, 41, 16, 32014));
    noEvents_0_1.set(EventTime_140);
    EvntGrp_NoEvents_140.insert(EventTime_140.getString());
    FIX::EventType EventType_140(14);
    noEvents_0_1.set(EventType_140);
    EvntGrp_NoEvents_140.insert(EventType_140.getString());
    all_values.push_back(EvntGrp_NoEvents_140);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_136;
    FIX::InstrumentPartyID InstrumentPartyID_136("STRING_181209825");
    noInstrumentParties_0_0.set(InstrumentPartyID_136);
    InstrumentParties_NoInstrumentParties_136.insert(InstrumentPartyID_136.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_136('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_136);
    InstrumentParties_NoInstrumentParties_136.insert(InstrumentPartyIDSource_136.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_136(1544616545);
    noInstrumentParties_0_0.set(InstrumentPartyRole_136);
    InstrumentParties_NoInstrumentParties_136.insert(InstrumentPartyRole_136.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_136);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271;
      FIX::InstrumentPartySubID InstrumentPartySubID_271("STRING_809802912");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_271);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271.insert(InstrumentPartySubID_271.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_271(1090230825);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_271);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271.insert(InstrumentPartySubIDType_271.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_137;
    FIX::InstrumentPartyID InstrumentPartyID_137("STRING_322102912");
    noInstrumentParties_0_1.set(InstrumentPartyID_137);
    InstrumentParties_NoInstrumentParties_137.insert(InstrumentPartyID_137.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_137('3');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_137);
    InstrumentParties_NoInstrumentParties_137.insert(InstrumentPartyIDSource_137.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_137(342363934);
    noInstrumentParties_0_1.set(InstrumentPartyRole_137);
    InstrumentParties_NoInstrumentParties_137.insert(InstrumentPartyRole_137.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_137);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272;
      FIX::InstrumentPartySubID InstrumentPartySubID_272("STRING_893623752");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_272);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272.insert(InstrumentPartySubID_272.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_272(1215314878);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_272);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272.insert(InstrumentPartySubIDType_272.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273;
      FIX::InstrumentPartySubID InstrumentPartySubID_273("STRING_1916954215");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_273);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273.insert(InstrumentPartySubID_273.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_273(795851646);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_273);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273.insert(InstrumentPartySubIDType_273.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274;
      FIX::InstrumentPartySubID InstrumentPartySubID_274("STRING_1235005258");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_274);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274.insert(InstrumentPartySubID_274.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_274(66481170);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_274);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274.insert(InstrumentPartySubIDType_274.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_138;
    FIX::InstrumentPartyID InstrumentPartyID_138("STRING_1739126964");
    noInstrumentParties_0_2.set(InstrumentPartyID_138);
    InstrumentParties_NoInstrumentParties_138.insert(InstrumentPartyID_138.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_138('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_138);
    InstrumentParties_NoInstrumentParties_138.insert(InstrumentPartyIDSource_138.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_138(1707616476);
    noInstrumentParties_0_2.set(InstrumentPartyRole_138);
    InstrumentParties_NoInstrumentParties_138.insert(InstrumentPartyRole_138.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_138);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275;
      FIX::InstrumentPartySubID InstrumentPartySubID_275("STRING_572395676");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_275);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275.insert(InstrumentPartySubID_275.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_275(1056120802);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_275);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275.insert(InstrumentPartySubIDType_275.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276;
      FIX::InstrumentPartySubID InstrumentPartySubID_276("STRING_408919051");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_276);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276.insert(InstrumentPartySubID_276.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_276(1984569814);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_276);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276.insert(InstrumentPartySubIDType_276.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277;
      FIX::InstrumentPartySubID InstrumentPartySubID_277("STRING_263928199");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_277);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277.insert(InstrumentPartySubID_277.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_277(689657892);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_277);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277.insert(InstrumentPartySubIDType_277.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinitionRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_150;
    FIX::SecurityAltID SecurityAltID_150("STRING_1094459037");
    noSecurityAltID_0_0.set(SecurityAltID_150);
    SecAltIDGrp_NoSecurityAltID_150.insert(SecurityAltID_150.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_150("STRING_1697137616");
    noSecurityAltID_0_0.set(SecurityAltIDSource_150);
    SecAltIDGrp_NoSecurityAltID_150.insert(SecurityAltIDSource_150.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_150);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_151;
    FIX::SecurityAltID SecurityAltID_151("STRING_759771871");
    noSecurityAltID_0_1.set(SecurityAltID_151);
    SecAltIDGrp_NoSecurityAltID_151.insert(SecurityAltID_151.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_151("STRING_199947336");
    noSecurityAltID_0_1.set(SecurityAltIDSource_151);
    SecAltIDGrp_NoSecurityAltID_151.insert(SecurityAltIDSource_151.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_151);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_152;
    FIX::SecurityAltID SecurityAltID_152("STRING_1878347441");
    noSecurityAltID_0_2.set(SecurityAltID_152);
    SecAltIDGrp_NoSecurityAltID_152.insert(SecurityAltID_152.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_152("STRING_1982476915");
    noSecurityAltID_0_2.set(SecurityAltIDSource_152);
    SecAltIDGrp_NoSecurityAltID_152.insert(SecurityAltIDSource_152.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_152);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_144;
  FIX::SecurityXML SecurityXML_145("XMLDATA_1744563882");
  msg.set(SecurityXML_145);
  FIX::SecurityXMLLen SecurityXMLLen_72(37761615);
  msg.set(SecurityXMLLen_72);
  FIX::SecurityXMLSchema SecurityXMLSchema_72("STRING_644796179");
  msg.set(SecurityXMLSchema_72);
  SecurityXML_144.insert(SecurityXMLSchema_72.getString());
  all_values.push_back(SecurityXML_144);

  // InstrumentExtension
  multiset<string> InstrumentExtension_9;
  FIX::DeliveryForm DeliveryForm_9(2);
  msg.set(DeliveryForm_9);
  InstrumentExtension_9.insert(DeliveryForm_9.getString());
  FIX::PctAtRisk PctAtRisk_9;
  PctAtRisk_9.setString("45.270000");
  msg.set(PctAtRisk_9);
  InstrumentExtension_9.insert(PctAtRisk_9.getString());
  all_values.push_back(InstrumentExtension_9);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_18;
    FIX::InstrAttribType InstrAttribType_18(25);
    noInstrAttrib_0_0.set(InstrAttribType_18);
    AttrbGrp_NoInstrAttrib_18.insert(InstrAttribType_18.getString());
    FIX::InstrAttribValue InstrAttribValue_18("STRING_812497794");
    noInstrAttrib_0_0.set(InstrAttribValue_18);
    AttrbGrp_NoInstrAttrib_18.insert(InstrAttribValue_18.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_18);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_19;
    FIX::InstrAttribType InstrAttribType_19(20);
    noInstrAttrib_0_1.set(InstrAttribType_19);
    AttrbGrp_NoInstrAttrib_19.insert(InstrAttribType_19.getString());
    FIX::InstrAttribValue InstrAttribValue_19("STRING_97506224");
    noInstrAttrib_0_1.set(InstrAttribValue_19);
    AttrbGrp_NoInstrAttrib_19.insert(InstrAttribValue_19.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_19);

    msg.addGroup(noInstrAttrib_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_29;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_29("CAN");
  msg.set(BenchmarkCurveCurrency_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkCurveCurrency_29.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_29("STRING_MuniAAA");
  msg.set(BenchmarkCurveName_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkCurveName_29.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_29("STRING_648449531");
  msg.set(BenchmarkCurvePoint_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkCurvePoint_29.getString());
  FIX::BenchmarkPrice BenchmarkPrice_29;
  BenchmarkPrice_29.setString("845782");
  msg.set(BenchmarkPrice_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkPrice_29.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_29(893843855);
  msg.set(BenchmarkPriceType_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkPriceType_29.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_29("STRING_208582360");
  msg.set(BenchmarkSecurityID_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkSecurityID_29.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_29("STRING_1223794919");
  msg.set(BenchmarkSecurityIDSource_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkSecurityIDSource_29.getString());
  FIX::Spread Spread_29;
  Spread_29.setString("14662395");
  msg.set(Spread_29);
  SpreadOrBenchmarkCurveData_29.insert(Spread_29.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_29);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinitionRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_52;
    FIX::StipulationType StipulationType_52("STRING_AVSIZE");
    noStipulations_0_0.set(StipulationType_52);
    Stipulations_NoStipulations_52.insert(StipulationType_52.getString());
    FIX::StipulationValue StipulationValue_52("STRING_1303325698");
    noStipulations_0_0.set(StipulationValue_52);
    Stipulations_NoStipulations_52.insert(StipulationValue_52.getString());
    all_values.push_back(Stipulations_NoStipulations_52);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_53;
    FIX::StipulationType StipulationType_53("STRING_AUTOREINV");
    noStipulations_0_1.set(StipulationType_53);
    Stipulations_NoStipulations_53.insert(StipulationType_53.getString());
    FIX::StipulationValue StipulationValue_53("STRING_174888215");
    noStipulations_0_1.set(StipulationValue_53);
    Stipulations_NoStipulations_53.insert(StipulationValue_53.getString());
    all_values.push_back(Stipulations_NoStipulations_53);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_54;
    FIX::StipulationType StipulationType_54("STRING_RESTRICTED");
    noStipulations_0_2.set(StipulationType_54);
    Stipulations_NoStipulations_54.insert(StipulationType_54.getString());
    FIX::StipulationValue StipulationValue_54("STRING_475606750");
    noStipulations_0_2.set(StipulationValue_54);
    Stipulations_NoStipulations_54.insert(StipulationValue_54.getString());
    all_values.push_back(Stipulations_NoStipulations_54);

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinitionRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_124;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_124("DATA_2042573747");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingIssuer_124.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_124(675554087);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingIssuerLen_124.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_124("DATA_1602889625");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingSecurityDesc_124.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_124(1877567015);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingSecurityDescLen_124.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_124;
    UnderlyingAdjustedQuantity_124.setString("2726343");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_124);
    UnderlyingInstrument_124.insert(UnderlyingAdjustedQuantity_124.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_124;
    UnderlyingAllocationPercent_124.setString("12.410000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_124);
    UnderlyingInstrument_124.insert(UnderlyingAllocationPercent_124.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_124;
    UnderlyingAttachmentPoint_124.setString("95.460000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_124);
    UnderlyingInstrument_124.insert(UnderlyingAttachmentPoint_124.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_124("STRING_959945380");
    noUnderlyings_0_0.set(UnderlyingCFICode_124);
    UnderlyingInstrument_124.insert(UnderlyingCFICode_124.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_124("STRING_2000515768");
    noUnderlyings_0_0.set(UnderlyingCPProgram_124);
    UnderlyingInstrument_124.insert(UnderlyingCPProgram_124.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_124("STRING_1325822704");
    noUnderlyings_0_0.set(UnderlyingCPRegType_124);
    UnderlyingInstrument_124.insert(UnderlyingCPRegType_124.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_124;
    UnderlyingCapValue_124.setString("19896203");
    noUnderlyings_0_0.set(UnderlyingCapValue_124);
    UnderlyingInstrument_124.insert(UnderlyingCapValue_124.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_124;
    UnderlyingCashAmount_124.setString("6655299");
    noUnderlyings_0_0.set(UnderlyingCashAmount_124);
    UnderlyingInstrument_124.insert(UnderlyingCashAmount_124.getString());
    FIX::UnderlyingCashType UnderlyingCashType_124("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_124);
    UnderlyingInstrument_124.insert(UnderlyingCashType_124.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_124;
    UnderlyingContractMultiplier_124.setString("20871265");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_124);
    UnderlyingInstrument_124.insert(UnderlyingContractMultiplier_124.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_124(1247498276);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_124);
    UnderlyingInstrument_124.insert(UnderlyingContractMultiplierUnit_124.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_124("COUNTRY_1515840873");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_124);
    UnderlyingInstrument_124.insert(UnderlyingCountryOfIssue_124.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_124("LOCALMKTDATE_1272154433");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_124);
    UnderlyingInstrument_124.insert(UnderlyingCouponPaymentDate_124.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_124;
    UnderlyingCouponRate_124.setString("78.080000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_124);
    UnderlyingInstrument_124.insert(UnderlyingCouponRate_124.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_124("STRING_1600419096");
    noUnderlyings_0_0.set(UnderlyingCreditRating_124);
    UnderlyingInstrument_124.insert(UnderlyingCreditRating_124.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_124("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_124);
    UnderlyingInstrument_124.insert(UnderlyingCurrency_124.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_124;
    UnderlyingCurrentValue_124.setString("6767303");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_124);
    UnderlyingInstrument_124.insert(UnderlyingCurrentValue_124.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_124;
    UnderlyingDetachmentPoint_124.setString("41.730000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_124);
    UnderlyingInstrument_124.insert(UnderlyingDetachmentPoint_124.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_124;
    UnderlyingDirtyPrice_124.setString("12217496");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_124);
    UnderlyingInstrument_124.insert(UnderlyingDirtyPrice_124.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_124;
    UnderlyingEndPrice_124.setString("1619606");
    noUnderlyings_0_0.set(UnderlyingEndPrice_124);
    UnderlyingInstrument_124.insert(UnderlyingEndPrice_124.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_124;
    UnderlyingEndValue_124.setString("6405962");
    noUnderlyings_0_0.set(UnderlyingEndValue_124);
    UnderlyingInstrument_124.insert(UnderlyingEndValue_124.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_124(602897396);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_124);
    UnderlyingInstrument_124.insert(UnderlyingExerciseStyle_124.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_124;
    UnderlyingFXRate_124.setString("3368489");
    noUnderlyings_0_0.set(UnderlyingFXRate_124);
    UnderlyingInstrument_124.insert(UnderlyingFXRate_124.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_124('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_124);
    UnderlyingInstrument_124.insert(UnderlyingFXRateCalc_124.getString());
    FIX::UnderlyingFactor UnderlyingFactor_124;
    UnderlyingFactor_124.setString("10785041");
    noUnderlyings_0_0.set(UnderlyingFactor_124);
    UnderlyingInstrument_124.insert(UnderlyingFactor_124.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_124(61391090);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_124);
    UnderlyingInstrument_124.insert(UnderlyingFlowScheduleType_124.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_124("STRING_1818488198");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_124);
    UnderlyingInstrument_124.insert(UnderlyingInstrRegistry_124.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_124("LOCALMKTDATE_1754058233");
    noUnderlyings_0_0.set(UnderlyingIssueDate_124);
    UnderlyingInstrument_124.insert(UnderlyingIssueDate_124.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_124("STRING_1664280716");
    noUnderlyings_0_0.set(UnderlyingIssuer_124);
    UnderlyingInstrument_124.insert(UnderlyingIssuer_124.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_124("STRING_1548571565");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_124);
    UnderlyingInstrument_124.insert(UnderlyingLocaleOfIssue_124.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_124("LOCALMKTDATE_2026692554");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_124);
    UnderlyingInstrument_124.insert(UnderlyingMaturityDate_124.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_124("MONTHYEAR_1157448309");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_124);
    UnderlyingInstrument_124.insert(UnderlyingMaturityMonthYear_124.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_124("TZTIMEONLY_1923451112");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_124);
    UnderlyingInstrument_124.insert(UnderlyingMaturityTime_124.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_124;
    UnderlyingNotionalPercentageOutstanding_124.setString("42.870000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_124);
    UnderlyingInstrument_124.insert(UnderlyingNotionalPercentageOutstanding_124.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_124('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_124);
    UnderlyingInstrument_124.insert(UnderlyingOptAttribute_124.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_124;
    UnderlyingOriginalNotionalPercentageOutstanding_124.setString("1.680000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_124);
    UnderlyingInstrument_124.insert(UnderlyingOriginalNotionalPercentageOutstanding_124.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_124("STRING_681291013");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_124);
    UnderlyingInstrument_124.insert(UnderlyingPriceUnitOfMeasure_124.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_124;
    UnderlyingPriceUnitOfMeasureQty_124.setString("16760103");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_124);
    UnderlyingInstrument_124.insert(UnderlyingPriceUnitOfMeasureQty_124.getString());
    FIX::UnderlyingProduct UnderlyingProduct_124(2124696133);
    noUnderlyings_0_0.set(UnderlyingProduct_124);
    UnderlyingInstrument_124.insert(UnderlyingProduct_124.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_124(620933964);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_124);
    UnderlyingInstrument_124.insert(UnderlyingPutOrCall_124.getString());
    FIX::UnderlyingPx UnderlyingPx_124;
    UnderlyingPx_124.setString("7760249");
    noUnderlyings_0_0.set(UnderlyingPx_124);
    UnderlyingInstrument_124.insert(UnderlyingPx_124.getString());
    FIX::UnderlyingQty UnderlyingQty_124;
    UnderlyingQty_124.setString("14930533");
    noUnderlyings_0_0.set(UnderlyingQty_124);
    UnderlyingInstrument_124.insert(UnderlyingQty_124.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_124("LOCALMKTDATE_1893088398");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_124);
    UnderlyingInstrument_124.insert(UnderlyingRedemptionDate_124.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_124("STRING_524489133");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_124);
    UnderlyingInstrument_124.insert(UnderlyingRepoCollateralSecurityType_124.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_124;
    UnderlyingRepurchaseRate_124.setString("88.070000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_124);
    UnderlyingInstrument_124.insert(UnderlyingRepurchaseRate_124.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_124(1911603039);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_124);
    UnderlyingInstrument_124.insert(UnderlyingRepurchaseTerm_124.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_124("STRING_481535653");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_124);
    UnderlyingInstrument_124.insert(UnderlyingRestructuringType_124.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_124("STRING_1622719175");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityDesc_124.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_124("EXCHANGE_1248873564");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityExchange_124.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_124("STRING_1703285335");
    noUnderlyings_0_0.set(UnderlyingSecurityID_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityID_124.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_124("STRING_1784679866");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityIDSource_124.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_124("STRING_1889469787");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_124);
    UnderlyingInstrument_124.insert(UnderlyingSecuritySubType_124.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_124("STRING_158699083");
    noUnderlyings_0_0.set(UnderlyingSecurityType_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityType_124.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_124("STRING_2121528772");
    noUnderlyings_0_0.set(UnderlyingSeniority_124);
    UnderlyingInstrument_124.insert(UnderlyingSeniority_124.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_124("STRING_1665384238");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_124);
    UnderlyingInstrument_124.insert(UnderlyingSettlMethod_124.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_124(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_124);
    UnderlyingInstrument_124.insert(UnderlyingSettlementType_124.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_124;
    UnderlyingStartValue_124.setString("354362");
    noUnderlyings_0_0.set(UnderlyingStartValue_124);
    UnderlyingInstrument_124.insert(UnderlyingStartValue_124.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_124("STRING_1336388788");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_124);
    UnderlyingInstrument_124.insert(UnderlyingStateOrProvinceOfIssue_124.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_124("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_124);
    UnderlyingInstrument_124.insert(UnderlyingStrikeCurrency_124.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_124;
    UnderlyingStrikePrice_124.setString("7374767");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_124);
    UnderlyingInstrument_124.insert(UnderlyingStrikePrice_124.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_124("STRING_722986722");
    noUnderlyings_0_0.set(UnderlyingSymbol_124);
    UnderlyingInstrument_124.insert(UnderlyingSymbol_124.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_124("STRING_709681592");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_124);
    UnderlyingInstrument_124.insert(UnderlyingSymbolSfx_124.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_124("STRING_513444170");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_124);
    UnderlyingInstrument_124.insert(UnderlyingTimeUnit_124.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_124("STRING_1562141009");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_124);
    UnderlyingInstrument_124.insert(UnderlyingUnitOfMeasure_124.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_124;
    UnderlyingUnitOfMeasureQty_124.setString("17201620");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_124);
    UnderlyingInstrument_124.insert(UnderlyingUnitOfMeasureQty_124.getString());
    all_values.push_back(UnderlyingInstrument_124);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_246;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_246("STRING_95948374");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_246);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_246.insert(UnderlyingSecurityAltID_246.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_246("STRING_1248688718");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_246);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_246.insert(UnderlyingSecurityAltIDSource_246.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_246);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_238;
      FIX::UnderlyingStipType UnderlyingStipType_238("STRING_716882339");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_238);
      UnderlyingStipulations_NoUnderlyingStips_238.insert(UnderlyingStipType_238.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_238("STRING_2024713691");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_238);
      UnderlyingStipulations_NoUnderlyingStips_238.insert(UnderlyingStipValue_238.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_238);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_239;
      FIX::UnderlyingStipType UnderlyingStipType_239("STRING_938016534");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_239);
      UnderlyingStipulations_NoUnderlyingStips_239.insert(UnderlyingStipType_239.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_239("STRING_462487089");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_239);
      UnderlyingStipulations_NoUnderlyingStips_239.insert(UnderlyingStipValue_239.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_239);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_240;
      FIX::UnderlyingStipType UnderlyingStipType_240("STRING_401719176");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_240);
      UnderlyingStipulations_NoUnderlyingStips_240.insert(UnderlyingStipType_240.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_240("STRING_1884005341");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_240);
      UnderlyingStipulations_NoUnderlyingStips_240.insert(UnderlyingStipValue_240.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_240);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_250;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_250("STRING_883254829");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_250);
      UndlyInstrumentParties_NoUndlyInstrumentParties_250.insert(UnderlyingInstrumentPartyID_250.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_250('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_250);
      UndlyInstrumentParties_NoUndlyInstrumentParties_250.insert(UnderlyingInstrumentPartyIDSource_250.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_250(1475480044);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_250);
      UndlyInstrumentParties_NoUndlyInstrumentParties_250.insert(UnderlyingInstrumentPartyRole_250.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_250);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_494("STRING_996437086");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_494);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494.insert(UnderlyingInstrumentPartySubID_494.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_494(1217466183);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_494);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494.insert(UnderlyingInstrumentPartySubIDType_494.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_251;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_251("STRING_597755600");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_251);
      UndlyInstrumentParties_NoUndlyInstrumentParties_251.insert(UnderlyingInstrumentPartyID_251.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_251('9');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_251);
      UndlyInstrumentParties_NoUndlyInstrumentParties_251.insert(UnderlyingInstrumentPartyIDSource_251.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_251(735366773);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_251);
      UndlyInstrumentParties_NoUndlyInstrumentParties_251.insert(UnderlyingInstrumentPartyRole_251.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_251);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_495("STRING_1005918425");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_495);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495.insert(UnderlyingInstrumentPartySubID_495.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_495(2071755561);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_495);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495.insert(UnderlyingInstrumentPartySubIDType_495.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_496("STRING_531252997");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_496);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496.insert(UnderlyingInstrumentPartySubID_496.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_496(558151708);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_496);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496.insert(UnderlyingInstrumentPartySubIDType_496.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_125;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_125("DATA_661748619");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_125);
    UnderlyingInstrument_125.insert(EncodedUnderlyingIssuer_125.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_125(1254239719);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_125);
    UnderlyingInstrument_125.insert(EncodedUnderlyingIssuerLen_125.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_125("DATA_1267833300");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_125);
    UnderlyingInstrument_125.insert(EncodedUnderlyingSecurityDesc_125.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_125(1175192789);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_125);
    UnderlyingInstrument_125.insert(EncodedUnderlyingSecurityDescLen_125.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_125;
    UnderlyingAdjustedQuantity_125.setString("6688970");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_125);
    UnderlyingInstrument_125.insert(UnderlyingAdjustedQuantity_125.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_125;
    UnderlyingAllocationPercent_125.setString("16.740000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_125);
    UnderlyingInstrument_125.insert(UnderlyingAllocationPercent_125.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_125;
    UnderlyingAttachmentPoint_125.setString("34.790000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_125);
    UnderlyingInstrument_125.insert(UnderlyingAttachmentPoint_125.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_125("STRING_764845455");
    noUnderlyings_0_1.set(UnderlyingCFICode_125);
    UnderlyingInstrument_125.insert(UnderlyingCFICode_125.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_125("STRING_2089200392");
    noUnderlyings_0_1.set(UnderlyingCPProgram_125);
    UnderlyingInstrument_125.insert(UnderlyingCPProgram_125.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_125("STRING_87906655");
    noUnderlyings_0_1.set(UnderlyingCPRegType_125);
    UnderlyingInstrument_125.insert(UnderlyingCPRegType_125.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_125;
    UnderlyingCapValue_125.setString("14817277");
    noUnderlyings_0_1.set(UnderlyingCapValue_125);
    UnderlyingInstrument_125.insert(UnderlyingCapValue_125.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_125;
    UnderlyingCashAmount_125.setString("19664304");
    noUnderlyings_0_1.set(UnderlyingCashAmount_125);
    UnderlyingInstrument_125.insert(UnderlyingCashAmount_125.getString());
    FIX::UnderlyingCashType UnderlyingCashType_125("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_125);
    UnderlyingInstrument_125.insert(UnderlyingCashType_125.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_125;
    UnderlyingContractMultiplier_125.setString("19442148");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_125);
    UnderlyingInstrument_125.insert(UnderlyingContractMultiplier_125.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_125(220665963);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_125);
    UnderlyingInstrument_125.insert(UnderlyingContractMultiplierUnit_125.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_125("COUNTRY_762444882");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_125);
    UnderlyingInstrument_125.insert(UnderlyingCountryOfIssue_125.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_125("LOCALMKTDATE_23337715");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_125);
    UnderlyingInstrument_125.insert(UnderlyingCouponPaymentDate_125.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_125;
    UnderlyingCouponRate_125.setString("7.920000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_125);
    UnderlyingInstrument_125.insert(UnderlyingCouponRate_125.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_125("STRING_2121685750");
    noUnderlyings_0_1.set(UnderlyingCreditRating_125);
    UnderlyingInstrument_125.insert(UnderlyingCreditRating_125.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_125("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_125);
    UnderlyingInstrument_125.insert(UnderlyingCurrency_125.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_125;
    UnderlyingCurrentValue_125.setString("9706391");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_125);
    UnderlyingInstrument_125.insert(UnderlyingCurrentValue_125.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_125;
    UnderlyingDetachmentPoint_125.setString("2.940000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_125);
    UnderlyingInstrument_125.insert(UnderlyingDetachmentPoint_125.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_125;
    UnderlyingDirtyPrice_125.setString("21407329");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_125);
    UnderlyingInstrument_125.insert(UnderlyingDirtyPrice_125.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_125;
    UnderlyingEndPrice_125.setString("19411213");
    noUnderlyings_0_1.set(UnderlyingEndPrice_125);
    UnderlyingInstrument_125.insert(UnderlyingEndPrice_125.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_125;
    UnderlyingEndValue_125.setString("13041670");
    noUnderlyings_0_1.set(UnderlyingEndValue_125);
    UnderlyingInstrument_125.insert(UnderlyingEndValue_125.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_125(1828208090);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_125);
    UnderlyingInstrument_125.insert(UnderlyingExerciseStyle_125.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_125;
    UnderlyingFXRate_125.setString("7995561");
    noUnderlyings_0_1.set(UnderlyingFXRate_125);
    UnderlyingInstrument_125.insert(UnderlyingFXRate_125.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_125('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_125);
    UnderlyingInstrument_125.insert(UnderlyingFXRateCalc_125.getString());
    FIX::UnderlyingFactor UnderlyingFactor_125;
    UnderlyingFactor_125.setString("2119774");
    noUnderlyings_0_1.set(UnderlyingFactor_125);
    UnderlyingInstrument_125.insert(UnderlyingFactor_125.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_125(1357707884);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_125);
    UnderlyingInstrument_125.insert(UnderlyingFlowScheduleType_125.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_125("STRING_1890187600");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_125);
    UnderlyingInstrument_125.insert(UnderlyingInstrRegistry_125.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_125("LOCALMKTDATE_1466217159");
    noUnderlyings_0_1.set(UnderlyingIssueDate_125);
    UnderlyingInstrument_125.insert(UnderlyingIssueDate_125.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_125("STRING_478057537");
    noUnderlyings_0_1.set(UnderlyingIssuer_125);
    UnderlyingInstrument_125.insert(UnderlyingIssuer_125.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_125("STRING_917896741");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_125);
    UnderlyingInstrument_125.insert(UnderlyingLocaleOfIssue_125.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_125("LOCALMKTDATE_2135114240");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_125);
    UnderlyingInstrument_125.insert(UnderlyingMaturityDate_125.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_125("MONTHYEAR_1318569211");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_125);
    UnderlyingInstrument_125.insert(UnderlyingMaturityMonthYear_125.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_125("TZTIMEONLY_1560840221");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_125);
    UnderlyingInstrument_125.insert(UnderlyingMaturityTime_125.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_125;
    UnderlyingNotionalPercentageOutstanding_125.setString("60.470000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_125);
    UnderlyingInstrument_125.insert(UnderlyingNotionalPercentageOutstanding_125.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_125('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_125);
    UnderlyingInstrument_125.insert(UnderlyingOptAttribute_125.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_125;
    UnderlyingOriginalNotionalPercentageOutstanding_125.setString("68.760000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_125);
    UnderlyingInstrument_125.insert(UnderlyingOriginalNotionalPercentageOutstanding_125.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_125("STRING_86720193");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_125);
    UnderlyingInstrument_125.insert(UnderlyingPriceUnitOfMeasure_125.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_125;
    UnderlyingPriceUnitOfMeasureQty_125.setString("10792327");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_125);
    UnderlyingInstrument_125.insert(UnderlyingPriceUnitOfMeasureQty_125.getString());
    FIX::UnderlyingProduct UnderlyingProduct_125(527186417);
    noUnderlyings_0_1.set(UnderlyingProduct_125);
    UnderlyingInstrument_125.insert(UnderlyingProduct_125.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_125(2030935076);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_125);
    UnderlyingInstrument_125.insert(UnderlyingPutOrCall_125.getString());
    FIX::UnderlyingPx UnderlyingPx_125;
    UnderlyingPx_125.setString("12998987");
    noUnderlyings_0_1.set(UnderlyingPx_125);
    UnderlyingInstrument_125.insert(UnderlyingPx_125.getString());
    FIX::UnderlyingQty UnderlyingQty_125;
    UnderlyingQty_125.setString("12896312");
    noUnderlyings_0_1.set(UnderlyingQty_125);
    UnderlyingInstrument_125.insert(UnderlyingQty_125.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_125("LOCALMKTDATE_2054272791");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_125);
    UnderlyingInstrument_125.insert(UnderlyingRedemptionDate_125.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_125("STRING_256335849");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_125);
    UnderlyingInstrument_125.insert(UnderlyingRepoCollateralSecurityType_125.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_125;
    UnderlyingRepurchaseRate_125.setString("34.010000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_125);
    UnderlyingInstrument_125.insert(UnderlyingRepurchaseRate_125.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_125(1405606902);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_125);
    UnderlyingInstrument_125.insert(UnderlyingRepurchaseTerm_125.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_125("STRING_1799313157");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_125);
    UnderlyingInstrument_125.insert(UnderlyingRestructuringType_125.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_125("STRING_86988941");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_125);
    UnderlyingInstrument_125.insert(UnderlyingSecurityDesc_125.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_125("EXCHANGE_1974407196");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_125);
    UnderlyingInstrument_125.insert(UnderlyingSecurityExchange_125.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_125("STRING_1792562418");
    noUnderlyings_0_1.set(UnderlyingSecurityID_125);
    UnderlyingInstrument_125.insert(UnderlyingSecurityID_125.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_125("STRING_2028110339");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_125);
    UnderlyingInstrument_125.insert(UnderlyingSecurityIDSource_125.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_125("STRING_1131090615");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_125);
    UnderlyingInstrument_125.insert(UnderlyingSecuritySubType_125.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_125("STRING_1473286860");
    noUnderlyings_0_1.set(UnderlyingSecurityType_125);
    UnderlyingInstrument_125.insert(UnderlyingSecurityType_125.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_125("STRING_680182867");
    noUnderlyings_0_1.set(UnderlyingSeniority_125);
    UnderlyingInstrument_125.insert(UnderlyingSeniority_125.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_125("STRING_212045947");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_125);
    UnderlyingInstrument_125.insert(UnderlyingSettlMethod_125.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_125(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_125);
    UnderlyingInstrument_125.insert(UnderlyingSettlementType_125.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_125;
    UnderlyingStartValue_125.setString("20378907");
    noUnderlyings_0_1.set(UnderlyingStartValue_125);
    UnderlyingInstrument_125.insert(UnderlyingStartValue_125.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_125("STRING_2102233547");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_125);
    UnderlyingInstrument_125.insert(UnderlyingStateOrProvinceOfIssue_125.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_125("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_125);
    UnderlyingInstrument_125.insert(UnderlyingStrikeCurrency_125.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_125;
    UnderlyingStrikePrice_125.setString("8726466");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_125);
    UnderlyingInstrument_125.insert(UnderlyingStrikePrice_125.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_125("STRING_991628404");
    noUnderlyings_0_1.set(UnderlyingSymbol_125);
    UnderlyingInstrument_125.insert(UnderlyingSymbol_125.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_125("STRING_1687033852");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_125);
    UnderlyingInstrument_125.insert(UnderlyingSymbolSfx_125.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_125("STRING_286003214");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_125);
    UnderlyingInstrument_125.insert(UnderlyingTimeUnit_125.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_125("STRING_1744104451");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_125);
    UnderlyingInstrument_125.insert(UnderlyingUnitOfMeasure_125.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_125;
    UnderlyingUnitOfMeasureQty_125.setString("7998361");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_125);
    UnderlyingInstrument_125.insert(UnderlyingUnitOfMeasureQty_125.getString());
    all_values.push_back(UnderlyingInstrument_125);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_247;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_247("STRING_1830824644");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_247);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_247.insert(UnderlyingSecurityAltID_247.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_247("STRING_1879068901");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_247);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_247.insert(UnderlyingSecurityAltIDSource_247.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_247);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_248;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_248("STRING_314452859");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_248);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_248.insert(UnderlyingSecurityAltID_248.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_248("STRING_1714276072");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_248);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_248.insert(UnderlyingSecurityAltIDSource_248.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_248);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_249;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_249("STRING_1031483958");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_249);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_249.insert(UnderlyingSecurityAltID_249.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_249("STRING_1604084158");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_249);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_249.insert(UnderlyingSecurityAltIDSource_249.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_249);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_241;
      FIX::UnderlyingStipType UnderlyingStipType_241("STRING_1287819807");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_241);
      UnderlyingStipulations_NoUnderlyingStips_241.insert(UnderlyingStipType_241.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_241("STRING_720433911");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_241);
      UnderlyingStipulations_NoUnderlyingStips_241.insert(UnderlyingStipValue_241.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_241);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_242;
      FIX::UnderlyingStipType UnderlyingStipType_242("STRING_879188469");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_242);
      UnderlyingStipulations_NoUnderlyingStips_242.insert(UnderlyingStipType_242.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_242("STRING_939649316");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_242);
      UnderlyingStipulations_NoUnderlyingStips_242.insert(UnderlyingStipValue_242.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_242);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_243;
      FIX::UnderlyingStipType UnderlyingStipType_243("STRING_807422852");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_243);
      UnderlyingStipulations_NoUnderlyingStips_243.insert(UnderlyingStipType_243.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_243("STRING_706112017");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_243);
      UnderlyingStipulations_NoUnderlyingStips_243.insert(UnderlyingStipValue_243.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_243);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_252;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_252("STRING_688049543");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_252);
      UndlyInstrumentParties_NoUndlyInstrumentParties_252.insert(UnderlyingInstrumentPartyID_252.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_252('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_252);
      UndlyInstrumentParties_NoUndlyInstrumentParties_252.insert(UnderlyingInstrumentPartyIDSource_252.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_252(2058014947);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_252);
      UndlyInstrumentParties_NoUndlyInstrumentParties_252.insert(UnderlyingInstrumentPartyRole_252.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_252);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_497("STRING_2049248579");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_497);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497.insert(UnderlyingInstrumentPartySubID_497.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_497(1595795599);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_497);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497.insert(UnderlyingInstrumentPartySubIDType_497.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_498("STRING_1258639515");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_498);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498.insert(UnderlyingInstrumentPartySubID_498.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_498(2003998479);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_498);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498.insert(UnderlyingInstrumentPartySubIDType_498.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_126;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_126("DATA_452309763");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_126);
    UnderlyingInstrument_126.insert(EncodedUnderlyingIssuer_126.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_126(1627104156);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_126);
    UnderlyingInstrument_126.insert(EncodedUnderlyingIssuerLen_126.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_126("DATA_729161472");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_126);
    UnderlyingInstrument_126.insert(EncodedUnderlyingSecurityDesc_126.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_126(1443938167);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_126);
    UnderlyingInstrument_126.insert(EncodedUnderlyingSecurityDescLen_126.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_126;
    UnderlyingAdjustedQuantity_126.setString("11666543");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_126);
    UnderlyingInstrument_126.insert(UnderlyingAdjustedQuantity_126.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_126;
    UnderlyingAllocationPercent_126.setString("46.860000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_126);
    UnderlyingInstrument_126.insert(UnderlyingAllocationPercent_126.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_126;
    UnderlyingAttachmentPoint_126.setString("89.700000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_126);
    UnderlyingInstrument_126.insert(UnderlyingAttachmentPoint_126.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_126("STRING_1966490519");
    noUnderlyings_0_2.set(UnderlyingCFICode_126);
    UnderlyingInstrument_126.insert(UnderlyingCFICode_126.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_126("STRING_802431128");
    noUnderlyings_0_2.set(UnderlyingCPProgram_126);
    UnderlyingInstrument_126.insert(UnderlyingCPProgram_126.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_126("STRING_723899966");
    noUnderlyings_0_2.set(UnderlyingCPRegType_126);
    UnderlyingInstrument_126.insert(UnderlyingCPRegType_126.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_126;
    UnderlyingCapValue_126.setString("16980757");
    noUnderlyings_0_2.set(UnderlyingCapValue_126);
    UnderlyingInstrument_126.insert(UnderlyingCapValue_126.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_126;
    UnderlyingCashAmount_126.setString("11168839");
    noUnderlyings_0_2.set(UnderlyingCashAmount_126);
    UnderlyingInstrument_126.insert(UnderlyingCashAmount_126.getString());
    FIX::UnderlyingCashType UnderlyingCashType_126("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_126);
    UnderlyingInstrument_126.insert(UnderlyingCashType_126.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_126;
    UnderlyingContractMultiplier_126.setString("5820760");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_126);
    UnderlyingInstrument_126.insert(UnderlyingContractMultiplier_126.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_126(573484497);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_126);
    UnderlyingInstrument_126.insert(UnderlyingContractMultiplierUnit_126.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_126("COUNTRY_1911757605");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_126);
    UnderlyingInstrument_126.insert(UnderlyingCountryOfIssue_126.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_126("LOCALMKTDATE_1869895889");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_126);
    UnderlyingInstrument_126.insert(UnderlyingCouponPaymentDate_126.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_126;
    UnderlyingCouponRate_126.setString("84.080000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_126);
    UnderlyingInstrument_126.insert(UnderlyingCouponRate_126.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_126("STRING_643462426");
    noUnderlyings_0_2.set(UnderlyingCreditRating_126);
    UnderlyingInstrument_126.insert(UnderlyingCreditRating_126.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_126("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_126);
    UnderlyingInstrument_126.insert(UnderlyingCurrency_126.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_126;
    UnderlyingCurrentValue_126.setString("13495744");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_126);
    UnderlyingInstrument_126.insert(UnderlyingCurrentValue_126.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_126;
    UnderlyingDetachmentPoint_126.setString("96.440000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_126);
    UnderlyingInstrument_126.insert(UnderlyingDetachmentPoint_126.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_126;
    UnderlyingDirtyPrice_126.setString("6419071");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_126);
    UnderlyingInstrument_126.insert(UnderlyingDirtyPrice_126.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_126;
    UnderlyingEndPrice_126.setString("10392934");
    noUnderlyings_0_2.set(UnderlyingEndPrice_126);
    UnderlyingInstrument_126.insert(UnderlyingEndPrice_126.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_126;
    UnderlyingEndValue_126.setString("11573209");
    noUnderlyings_0_2.set(UnderlyingEndValue_126);
    UnderlyingInstrument_126.insert(UnderlyingEndValue_126.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_126(2010139566);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_126);
    UnderlyingInstrument_126.insert(UnderlyingExerciseStyle_126.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_126;
    UnderlyingFXRate_126.setString("9410583");
    noUnderlyings_0_2.set(UnderlyingFXRate_126);
    UnderlyingInstrument_126.insert(UnderlyingFXRate_126.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_126('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_126);
    UnderlyingInstrument_126.insert(UnderlyingFXRateCalc_126.getString());
    FIX::UnderlyingFactor UnderlyingFactor_126;
    UnderlyingFactor_126.setString("11212954");
    noUnderlyings_0_2.set(UnderlyingFactor_126);
    UnderlyingInstrument_126.insert(UnderlyingFactor_126.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_126(797573190);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_126);
    UnderlyingInstrument_126.insert(UnderlyingFlowScheduleType_126.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_126("STRING_1057942658");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_126);
    UnderlyingInstrument_126.insert(UnderlyingInstrRegistry_126.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_126("LOCALMKTDATE_600915941");
    noUnderlyings_0_2.set(UnderlyingIssueDate_126);
    UnderlyingInstrument_126.insert(UnderlyingIssueDate_126.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_126("STRING_1526734662");
    noUnderlyings_0_2.set(UnderlyingIssuer_126);
    UnderlyingInstrument_126.insert(UnderlyingIssuer_126.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_126("STRING_354397177");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_126);
    UnderlyingInstrument_126.insert(UnderlyingLocaleOfIssue_126.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_126("LOCALMKTDATE_1767570301");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_126);
    UnderlyingInstrument_126.insert(UnderlyingMaturityDate_126.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_126("MONTHYEAR_394415700");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_126);
    UnderlyingInstrument_126.insert(UnderlyingMaturityMonthYear_126.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_126("TZTIMEONLY_1394956148");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_126);
    UnderlyingInstrument_126.insert(UnderlyingMaturityTime_126.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_126;
    UnderlyingNotionalPercentageOutstanding_126.setString("71.720000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_126);
    UnderlyingInstrument_126.insert(UnderlyingNotionalPercentageOutstanding_126.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_126('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_126);
    UnderlyingInstrument_126.insert(UnderlyingOptAttribute_126.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_126;
    UnderlyingOriginalNotionalPercentageOutstanding_126.setString("61.140000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_126);
    UnderlyingInstrument_126.insert(UnderlyingOriginalNotionalPercentageOutstanding_126.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_126("STRING_1137169296");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_126);
    UnderlyingInstrument_126.insert(UnderlyingPriceUnitOfMeasure_126.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_126;
    UnderlyingPriceUnitOfMeasureQty_126.setString("1662471");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_126);
    UnderlyingInstrument_126.insert(UnderlyingPriceUnitOfMeasureQty_126.getString());
    FIX::UnderlyingProduct UnderlyingProduct_126(262064857);
    noUnderlyings_0_2.set(UnderlyingProduct_126);
    UnderlyingInstrument_126.insert(UnderlyingProduct_126.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_126(1719245378);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_126);
    UnderlyingInstrument_126.insert(UnderlyingPutOrCall_126.getString());
    FIX::UnderlyingPx UnderlyingPx_126;
    UnderlyingPx_126.setString("7397316");
    noUnderlyings_0_2.set(UnderlyingPx_126);
    UnderlyingInstrument_126.insert(UnderlyingPx_126.getString());
    FIX::UnderlyingQty UnderlyingQty_126;
    UnderlyingQty_126.setString("263388");
    noUnderlyings_0_2.set(UnderlyingQty_126);
    UnderlyingInstrument_126.insert(UnderlyingQty_126.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_126("LOCALMKTDATE_1441657619");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_126);
    UnderlyingInstrument_126.insert(UnderlyingRedemptionDate_126.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_126("STRING_2033650072");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_126);
    UnderlyingInstrument_126.insert(UnderlyingRepoCollateralSecurityType_126.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_126;
    UnderlyingRepurchaseRate_126.setString("12.410000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_126);
    UnderlyingInstrument_126.insert(UnderlyingRepurchaseRate_126.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_126(2103719177);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_126);
    UnderlyingInstrument_126.insert(UnderlyingRepurchaseTerm_126.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_126("STRING_1987507684");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_126);
    UnderlyingInstrument_126.insert(UnderlyingRestructuringType_126.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_126("STRING_2019375684");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_126);
    UnderlyingInstrument_126.insert(UnderlyingSecurityDesc_126.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_126("EXCHANGE_1203025173");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_126);
    UnderlyingInstrument_126.insert(UnderlyingSecurityExchange_126.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_126("STRING_481931191");
    noUnderlyings_0_2.set(UnderlyingSecurityID_126);
    UnderlyingInstrument_126.insert(UnderlyingSecurityID_126.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_126("STRING_911185464");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_126);
    UnderlyingInstrument_126.insert(UnderlyingSecurityIDSource_126.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_126("STRING_212862468");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_126);
    UnderlyingInstrument_126.insert(UnderlyingSecuritySubType_126.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_126("STRING_344587110");
    noUnderlyings_0_2.set(UnderlyingSecurityType_126);
    UnderlyingInstrument_126.insert(UnderlyingSecurityType_126.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_126("STRING_1852243823");
    noUnderlyings_0_2.set(UnderlyingSeniority_126);
    UnderlyingInstrument_126.insert(UnderlyingSeniority_126.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_126("STRING_818495362");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_126);
    UnderlyingInstrument_126.insert(UnderlyingSettlMethod_126.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_126(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_126);
    UnderlyingInstrument_126.insert(UnderlyingSettlementType_126.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_126;
    UnderlyingStartValue_126.setString("5023333");
    noUnderlyings_0_2.set(UnderlyingStartValue_126);
    UnderlyingInstrument_126.insert(UnderlyingStartValue_126.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_126("STRING_1876438020");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_126);
    UnderlyingInstrument_126.insert(UnderlyingStateOrProvinceOfIssue_126.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_126("CHF");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_126);
    UnderlyingInstrument_126.insert(UnderlyingStrikeCurrency_126.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_126;
    UnderlyingStrikePrice_126.setString("833515");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_126);
    UnderlyingInstrument_126.insert(UnderlyingStrikePrice_126.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_126("STRING_1686885138");
    noUnderlyings_0_2.set(UnderlyingSymbol_126);
    UnderlyingInstrument_126.insert(UnderlyingSymbol_126.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_126("STRING_276000079");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_126);
    UnderlyingInstrument_126.insert(UnderlyingSymbolSfx_126.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_126("STRING_1478307698");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_126);
    UnderlyingInstrument_126.insert(UnderlyingTimeUnit_126.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_126("STRING_1125978663");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_126);
    UnderlyingInstrument_126.insert(UnderlyingUnitOfMeasure_126.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_126;
    UnderlyingUnitOfMeasureQty_126.setString("14728469");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_126);
    UnderlyingInstrument_126.insert(UnderlyingUnitOfMeasureQty_126.getString());
    all_values.push_back(UnderlyingInstrument_126);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_250;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_250("STRING_115664311");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_250);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_250.insert(UnderlyingSecurityAltID_250.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_250("STRING_1639094074");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_250);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_250.insert(UnderlyingSecurityAltIDSource_250.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_250);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_251;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_251("STRING_1711745021");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_251);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_251.insert(UnderlyingSecurityAltID_251.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_251("STRING_1834909690");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_251);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_251.insert(UnderlyingSecurityAltIDSource_251.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_251);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_244;
      FIX::UnderlyingStipType UnderlyingStipType_244("STRING_1738083836");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_244);
      UnderlyingStipulations_NoUnderlyingStips_244.insert(UnderlyingStipType_244.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_244("STRING_1129083661");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_244);
      UnderlyingStipulations_NoUnderlyingStips_244.insert(UnderlyingStipValue_244.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_244);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_253;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_253("STRING_260401429");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_253);
      UndlyInstrumentParties_NoUndlyInstrumentParties_253.insert(UnderlyingInstrumentPartyID_253.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_253('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_253);
      UndlyInstrumentParties_NoUndlyInstrumentParties_253.insert(UnderlyingInstrumentPartyIDSource_253.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_253(2105016198);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_253);
      UndlyInstrumentParties_NoUndlyInstrumentParties_253.insert(UnderlyingInstrumentPartyRole_253.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_253);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_499("STRING_140860715");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_499);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499.insert(UnderlyingInstrumentPartySubID_499.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_499(439463741);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_499);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499.insert(UnderlyingInstrumentPartySubIDType_499.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_500("STRING_1043478929");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_500);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500.insert(UnderlyingInstrumentPartySubID_500.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_500(353723183);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_500);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500.insert(UnderlyingInstrumentPartySubIDType_500.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_501("STRING_784050851");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_501);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501.insert(UnderlyingInstrumentPartySubID_501.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_501(748239104);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_501);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501.insert(UnderlyingInstrumentPartySubIDType_501.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_254;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_254("STRING_1172218546");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_254);
      UndlyInstrumentParties_NoUndlyInstrumentParties_254.insert(UnderlyingInstrumentPartyID_254.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_254('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_254);
      UndlyInstrumentParties_NoUndlyInstrumentParties_254.insert(UnderlyingInstrumentPartyIDSource_254.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_254(1250572469);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_254);
      UndlyInstrumentParties_NoUndlyInstrumentParties_254.insert(UnderlyingInstrumentPartyRole_254.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_254);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_502("STRING_21764584");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_502);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502.insert(UnderlyingInstrumentPartySubID_502.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_502(1132156848);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_502);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502.insert(UnderlyingInstrumentPartySubIDType_502.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_503("STRING_984524468");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_503);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503.insert(UnderlyingInstrumentPartySubID_503.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_503(1708649722);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_503);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503.insert(UnderlyingInstrumentPartySubIDType_503.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_504("STRING_1408156927");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_504);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504.insert(UnderlyingInstrumentPartySubID_504.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_504(315348518);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_504);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504.insert(UnderlyingInstrumentPartySubIDType_504.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_255;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_255("STRING_687144737");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_255);
      UndlyInstrumentParties_NoUndlyInstrumentParties_255.insert(UnderlyingInstrumentPartyID_255.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_255('7');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_255);
      UndlyInstrumentParties_NoUndlyInstrumentParties_255.insert(UnderlyingInstrumentPartyIDSource_255.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_255(1765028683);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_255);
      UndlyInstrumentParties_NoUndlyInstrumentParties_255.insert(UnderlyingInstrumentPartyRole_255.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_255);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_505("STRING_225130612");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_505);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505.insert(UnderlyingInstrumentPartySubID_505.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_505(1329290056);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_505);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505.insert(UnderlyingInstrumentPartySubIDType_505.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_506("STRING_490235091");
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubID_506);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506.insert(UnderlyingInstrumentPartySubID_506.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_506(456472702);
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubIDType_506);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506.insert(UnderlyingInstrumentPartySubIDType_506.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_24;
  FIX::Yield Yield_24;
  Yield_24.setString("2.440000");
  msg.set(Yield_24);
  YieldData_24.insert(Yield_24.getString());
  FIX::YieldCalcDate YieldCalcDate_24("LOCALMKTDATE_1619318752");
  msg.set(YieldCalcDate_24);
  YieldData_24.insert(YieldCalcDate_24.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_24("LOCALMKTDATE_573981216");
  msg.set(YieldRedemptionDate_24);
  YieldData_24.insert(YieldRedemptionDate_24.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_24;
  YieldRedemptionPrice_24.setString("11802916");
  msg.set(YieldRedemptionPrice_24);
  YieldData_24.insert(YieldRedemptionPrice_24.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_24(557154295);
  msg.set(YieldRedemptionPriceType_24);
  YieldData_24.insert(YieldRedemptionPriceType_24.getString());
  FIX::YieldType YieldType_24("STRING_SIMPLE");
  msg.set(YieldType_24);
  YieldData_24.insert(YieldType_24.getString());
  all_values.push_back(YieldData_24);


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
