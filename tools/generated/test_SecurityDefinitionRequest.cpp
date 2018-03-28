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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityDefinitionRequest msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityDefinitionRequest_0;
  FIX::Currency Currency_60("JPY");
  msg.set(Currency_60);
  SecurityDefinitionRequest_0.insert(Currency_60.getString());
  FIX::EncodedText EncodedText_76("DATA_1518370445");
  msg.set(EncodedText_76);
  SecurityDefinitionRequest_0.insert(EncodedText_76.getString());
  FIX::EncodedTextLen EncodedTextLen_76(1543360183);
  msg.set(EncodedTextLen_76);
  SecurityDefinitionRequest_0.insert(EncodedTextLen_76.getString());
  FIX::ExpirationCycle ExpirationCycle_7(2);
  msg.set(ExpirationCycle_7);
  SecurityDefinitionRequest_0.insert(ExpirationCycle_7.getString());
  FIX::MarketID MarketID_14("EXCHANGE_585712723");
  msg.set(MarketID_14);
  SecurityDefinitionRequest_0.insert(MarketID_14.getString());
  FIX::MarketSegmentID MarketSegmentID_14("STRING_803740260");
  msg.set(MarketSegmentID_14);
  SecurityDefinitionRequest_0.insert(MarketSegmentID_14.getString());
  FIX::SecurityReqID SecurityReqID_4("STRING_266673523");
  msg.set(SecurityReqID_4);
  SecurityDefinitionRequest_0.insert(SecurityReqID_4.getString());
  FIX::SecurityRequestType SecurityRequestType_0(5);
  msg.set(SecurityRequestType_0);
  SecurityDefinitionRequest_0.insert(SecurityRequestType_0.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_9('0');
  msg.set(SubscriptionRequestType_9);
  SecurityDefinitionRequest_0.insert(SubscriptionRequestType_9.getString());
  FIX::Text Text_76("STRING_49193908");
  msg.set(Text_76);
  SecurityDefinitionRequest_0.insert(Text_76.getString());
  FIX::TradingSessionID TradingSessionID_76("STRING_4");
  msg.set(TradingSessionID_76);
  SecurityDefinitionRequest_0.insert(TradingSessionID_76.getString());
  FIX::TradingSessionSubID TradingSessionSubID_76("STRING_4");
  msg.set(TradingSessionSubID_76);
  SecurityDefinitionRequest_0.insert(TradingSessionSubID_76.getString());
  all_values.push_back(SecurityDefinitionRequest_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinitionRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_127;
    FIX::EncodedLegIssuer EncodedLegIssuer_127("DATA_1327150466");
    noLegs_0_0.set(EncodedLegIssuer_127);
    InstrumentLeg_127.insert(EncodedLegIssuer_127.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_127(828213976);
    noLegs_0_0.set(EncodedLegIssuerLen_127);
    InstrumentLeg_127.insert(EncodedLegIssuerLen_127.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_127("DATA_456847479");
    noLegs_0_0.set(EncodedLegSecurityDesc_127);
    InstrumentLeg_127.insert(EncodedLegSecurityDesc_127.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_127(1055801479);
    noLegs_0_0.set(EncodedLegSecurityDescLen_127);
    InstrumentLeg_127.insert(EncodedLegSecurityDescLen_127.getString());
    FIX::LegCFICode LegCFICode_127("STRING_1190014159");
    noLegs_0_0.set(LegCFICode_127);
    InstrumentLeg_127.insert(LegCFICode_127.getString());
    FIX::LegContractMultiplier LegContractMultiplier_127;
    LegContractMultiplier_127.setString("16316067");
    noLegs_0_0.set(LegContractMultiplier_127);
    InstrumentLeg_127.insert(LegContractMultiplier_127.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_127(1551748226);
    noLegs_0_0.set(LegContractMultiplierUnit_127);
    InstrumentLeg_127.insert(LegContractMultiplierUnit_127.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_127("MONTHYEAR_308434248");
    noLegs_0_0.set(LegContractSettlMonth_127);
    InstrumentLeg_127.insert(LegContractSettlMonth_127.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_127("COUNTRY_2039309272");
    noLegs_0_0.set(LegCountryOfIssue_127);
    InstrumentLeg_127.insert(LegCountryOfIssue_127.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_127("LOCALMKTDATE_637792315");
    noLegs_0_0.set(LegCouponPaymentDate_127);
    InstrumentLeg_127.insert(LegCouponPaymentDate_127.getString());
    FIX::LegCouponRate LegCouponRate_127;
    LegCouponRate_127.setString("13.490000");
    noLegs_0_0.set(LegCouponRate_127);
    InstrumentLeg_127.insert(LegCouponRate_127.getString());
    FIX::LegCreditRating LegCreditRating_127("STRING_603147488");
    noLegs_0_0.set(LegCreditRating_127);
    InstrumentLeg_127.insert(LegCreditRating_127.getString());
    FIX::LegCurrency LegCurrency_127("CAN");
    noLegs_0_0.set(LegCurrency_127);
    InstrumentLeg_127.insert(LegCurrency_127.getString());
    FIX::LegDatedDate LegDatedDate_127("LOCALMKTDATE_648401249");
    noLegs_0_0.set(LegDatedDate_127);
    InstrumentLeg_127.insert(LegDatedDate_127.getString());
    FIX::LegExerciseStyle LegExerciseStyle_127(1700513584);
    noLegs_0_0.set(LegExerciseStyle_127);
    InstrumentLeg_127.insert(LegExerciseStyle_127.getString());
    FIX::LegFactor LegFactor_127;
    LegFactor_127.setString("20955952");
    noLegs_0_0.set(LegFactor_127);
    InstrumentLeg_127.insert(LegFactor_127.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_127(961333017);
    noLegs_0_0.set(LegFlowScheduleType_127);
    InstrumentLeg_127.insert(LegFlowScheduleType_127.getString());
    FIX::LegInstrRegistry LegInstrRegistry_127("STRING_264499992");
    noLegs_0_0.set(LegInstrRegistry_127);
    InstrumentLeg_127.insert(LegInstrRegistry_127.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_127("LOCALMKTDATE_1466482016");
    noLegs_0_0.set(LegInterestAccrualDate_127);
    InstrumentLeg_127.insert(LegInterestAccrualDate_127.getString());
    FIX::LegIssueDate LegIssueDate_127("LOCALMKTDATE_357209553");
    noLegs_0_0.set(LegIssueDate_127);
    InstrumentLeg_127.insert(LegIssueDate_127.getString());
    FIX::LegIssuer LegIssuer_127("STRING_752831739");
    noLegs_0_0.set(LegIssuer_127);
    InstrumentLeg_127.insert(LegIssuer_127.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_127("STRING_2052194739");
    noLegs_0_0.set(LegLocaleOfIssue_127);
    InstrumentLeg_127.insert(LegLocaleOfIssue_127.getString());
    FIX::LegMaturityDate LegMaturityDate_127("LOCALMKTDATE_1160949813");
    noLegs_0_0.set(LegMaturityDate_127);
    InstrumentLeg_127.insert(LegMaturityDate_127.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_127("MONTHYEAR_1019505262");
    noLegs_0_0.set(LegMaturityMonthYear_127);
    InstrumentLeg_127.insert(LegMaturityMonthYear_127.getString());
    FIX::LegMaturityTime LegMaturityTime_127("TZTIMEONLY_1618772116");
    noLegs_0_0.set(LegMaturityTime_127);
    InstrumentLeg_127.insert(LegMaturityTime_127.getString());
    FIX::LegOptAttribute LegOptAttribute_127('1');
    noLegs_0_0.set(LegOptAttribute_127);
    InstrumentLeg_127.insert(LegOptAttribute_127.getString());
    FIX::LegOptionRatio LegOptionRatio_127;
    LegOptionRatio_127.setString("10686991");
    noLegs_0_0.set(LegOptionRatio_127);
    InstrumentLeg_127.insert(LegOptionRatio_127.getString());
    FIX::LegPool LegPool_127("STRING_2003975222");
    noLegs_0_0.set(LegPool_127);
    InstrumentLeg_127.insert(LegPool_127.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_127("STRING_2053969740");
    noLegs_0_0.set(LegPriceUnitOfMeasure_127);
    InstrumentLeg_127.insert(LegPriceUnitOfMeasure_127.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_127;
    LegPriceUnitOfMeasureQty_127.setString("10899316");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_127);
    InstrumentLeg_127.insert(LegPriceUnitOfMeasureQty_127.getString());
    FIX::LegProduct LegProduct_127(1183642040);
    noLegs_0_0.set(LegProduct_127);
    InstrumentLeg_127.insert(LegProduct_127.getString());
    FIX::LegPutOrCall LegPutOrCall_127(734700068);
    noLegs_0_0.set(LegPutOrCall_127);
    InstrumentLeg_127.insert(LegPutOrCall_127.getString());
    FIX::LegRatioQty LegRatioQty_127;
    LegRatioQty_127.setString("15467791");
    noLegs_0_0.set(LegRatioQty_127);
    InstrumentLeg_127.insert(LegRatioQty_127.getString());
    FIX::LegRedemptionDate LegRedemptionDate_127("LOCALMKTDATE_91959871");
    noLegs_0_0.set(LegRedemptionDate_127);
    InstrumentLeg_127.insert(LegRedemptionDate_127.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_127("STRING_1924714227");
    noLegs_0_0.set(LegRepoCollateralSecurityType_127);
    InstrumentLeg_127.insert(LegRepoCollateralSecurityType_127.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_127;
    LegRepurchaseRate_127.setString("23.060000");
    noLegs_0_0.set(LegRepurchaseRate_127);
    InstrumentLeg_127.insert(LegRepurchaseRate_127.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_127(1643708098);
    noLegs_0_0.set(LegRepurchaseTerm_127);
    InstrumentLeg_127.insert(LegRepurchaseTerm_127.getString());
    FIX::LegSecurityDesc LegSecurityDesc_127("STRING_85664827");
    noLegs_0_0.set(LegSecurityDesc_127);
    InstrumentLeg_127.insert(LegSecurityDesc_127.getString());
    FIX::LegSecurityExchange LegSecurityExchange_127("EXCHANGE_922727930");
    noLegs_0_0.set(LegSecurityExchange_127);
    InstrumentLeg_127.insert(LegSecurityExchange_127.getString());
    FIX::LegSecurityID LegSecurityID_127("STRING_134016765");
    noLegs_0_0.set(LegSecurityID_127);
    InstrumentLeg_127.insert(LegSecurityID_127.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_127("STRING_1315796177");
    noLegs_0_0.set(LegSecurityIDSource_127);
    InstrumentLeg_127.insert(LegSecurityIDSource_127.getString());
    FIX::LegSecuritySubType LegSecuritySubType_127("STRING_1525875419");
    noLegs_0_0.set(LegSecuritySubType_127);
    InstrumentLeg_127.insert(LegSecuritySubType_127.getString());
    FIX::LegSecurityType LegSecurityType_127("STRING_79783072");
    noLegs_0_0.set(LegSecurityType_127);
    InstrumentLeg_127.insert(LegSecurityType_127.getString());
    FIX::LegSide LegSide_127('1');
    noLegs_0_0.set(LegSide_127);
    InstrumentLeg_127.insert(LegSide_127.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_127("STRING_26793020");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_127);
    InstrumentLeg_127.insert(LegStateOrProvinceOfIssue_127.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_127("EUR");
    noLegs_0_0.set(LegStrikeCurrency_127);
    InstrumentLeg_127.insert(LegStrikeCurrency_127.getString());
    FIX::LegStrikePrice LegStrikePrice_127;
    LegStrikePrice_127.setString("9881260");
    noLegs_0_0.set(LegStrikePrice_127);
    InstrumentLeg_127.insert(LegStrikePrice_127.getString());
    FIX::LegSymbol LegSymbol_127("STRING_2044796649");
    noLegs_0_0.set(LegSymbol_127);
    InstrumentLeg_127.insert(LegSymbol_127.getString());
    FIX::LegSymbolSfx LegSymbolSfx_127("STRING_1041021937");
    noLegs_0_0.set(LegSymbolSfx_127);
    InstrumentLeg_127.insert(LegSymbolSfx_127.getString());
    FIX::LegTimeUnit LegTimeUnit_127("STRING_1345335590");
    noLegs_0_0.set(LegTimeUnit_127);
    InstrumentLeg_127.insert(LegTimeUnit_127.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_127("STRING_650144740");
    noLegs_0_0.set(LegUnitOfMeasure_127);
    InstrumentLeg_127.insert(LegUnitOfMeasure_127.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_127;
    LegUnitOfMeasureQty_127.setString("9457330");
    noLegs_0_0.set(LegUnitOfMeasureQty_127);
    InstrumentLeg_127.insert(LegUnitOfMeasureQty_127.getString());
    all_values.push_back(InstrumentLeg_127);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_244;
      FIX::LegSecurityAltID LegSecurityAltID_244("STRING_1669650002");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_244);
      LegSecAltIDGrp_NoLegSecurityAltID_244.insert(LegSecurityAltID_244.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_244("STRING_417021497");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_244);
      LegSecAltIDGrp_NoLegSecurityAltID_244.insert(LegSecurityAltIDSource_244.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_244);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_80;
  FIX::AttachmentPoint AttachmentPoint_80;
  AttachmentPoint_80.setString("30.640000");
  msg.set(AttachmentPoint_80);
  Instrument_80.insert(AttachmentPoint_80.getString());
  FIX::CFICode CFICode_80("STRING_590865524");
  msg.set(CFICode_80);
  Instrument_80.insert(CFICode_80.getString());
  FIX::CPProgram CPProgram_80(99);
  msg.set(CPProgram_80);
  Instrument_80.insert(CPProgram_80.getString());
  FIX::CPRegType CPRegType_80("STRING_89709156");
  msg.set(CPRegType_80);
  Instrument_80.insert(CPRegType_80.getString());
  FIX::CapPrice CapPrice_80;
  CapPrice_80.setString("16807972");
  msg.set(CapPrice_80);
  Instrument_80.insert(CapPrice_80.getString());
  FIX::ContractMultiplier ContractMultiplier_80;
  ContractMultiplier_80.setString("14571551");
  msg.set(ContractMultiplier_80);
  Instrument_80.insert(ContractMultiplier_80.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_80(2);
  msg.set(ContractMultiplierUnit_80);
  Instrument_80.insert(ContractMultiplierUnit_80.getString());
  FIX::ContractSettlMonth ContractSettlMonth_80("MONTHYEAR_1080092725");
  msg.set(ContractSettlMonth_80);
  Instrument_80.insert(ContractSettlMonth_80.getString());
  FIX::CountryOfIssue CountryOfIssue_80("COUNTRY_1549114983");
  msg.set(CountryOfIssue_80);
  Instrument_80.insert(CountryOfIssue_80.getString());
  FIX::CouponPaymentDate CouponPaymentDate_80("LOCALMKTDATE_601639803");
  msg.set(CouponPaymentDate_80);
  Instrument_80.insert(CouponPaymentDate_80.getString());
  FIX::CouponRate CouponRate_80;
  CouponRate_80.setString("50.310000");
  msg.set(CouponRate_80);
  Instrument_80.insert(CouponRate_80.getString());
  FIX::CreditRating CreditRating_80("STRING_1045339433");
  msg.set(CreditRating_80);
  Instrument_80.insert(CreditRating_80.getString());
  FIX::DatedDate DatedDate_80("LOCALMKTDATE_687304630");
  msg.set(DatedDate_80);
  Instrument_80.insert(DatedDate_80.getString());
  FIX::DetachmentPoint DetachmentPoint_80;
  DetachmentPoint_80.setString("93.140000");
  msg.set(DetachmentPoint_80);
  Instrument_80.insert(DetachmentPoint_80.getString());
  FIX::EncodedIssuer EncodedIssuer_80("DATA_1179356198");
  msg.set(EncodedIssuer_80);
  Instrument_80.insert(EncodedIssuer_80.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_80(2003100807);
  msg.set(EncodedIssuerLen_80);
  Instrument_80.insert(EncodedIssuerLen_80.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_80("DATA_264631085");
  msg.set(EncodedSecurityDesc_80);
  Instrument_80.insert(EncodedSecurityDesc_80.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_80(1259139270);
  msg.set(EncodedSecurityDescLen_80);
  Instrument_80.insert(EncodedSecurityDescLen_80.getString());
  FIX::ExerciseStyle ExerciseStyle_80(2);
  msg.set(ExerciseStyle_80);
  Instrument_80.insert(ExerciseStyle_80.getString());
  FIX::Factor Factor_80;
  Factor_80.setString("2914241");
  msg.set(Factor_80);
  Instrument_80.insert(Factor_80.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_80(false);
  msg.set(FlexProductEligibilityIndicator_80);
  Instrument_80.insert(FlexProductEligibilityIndicator_80.getString());
  FIX::FlexibleIndicator FlexibleIndicator_80(true);
  msg.set(FlexibleIndicator_80);
  Instrument_80.insert(FlexibleIndicator_80.getString());
  FIX::FloorPrice FloorPrice_80;
  FloorPrice_80.setString("12795501");
  msg.set(FloorPrice_80);
  Instrument_80.insert(FloorPrice_80.getString());
  FIX::FlowScheduleType FlowScheduleType_80(0);
  msg.set(FlowScheduleType_80);
  Instrument_80.insert(FlowScheduleType_80.getString());
  FIX::InstrRegistry InstrRegistry_80("STRING_97607367");
  msg.set(InstrRegistry_80);
  Instrument_80.insert(InstrRegistry_80.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_80('4');
  msg.set(InstrmtAssignmentMethod_80);
  Instrument_80.insert(InstrmtAssignmentMethod_80.getString());
  FIX::InterestAccrualDate InterestAccrualDate_80("LOCALMKTDATE_1439410020");
  msg.set(InterestAccrualDate_80);
  Instrument_80.insert(InterestAccrualDate_80.getString());
  FIX::IssueDate IssueDate_80("LOCALMKTDATE_1043340396");
  msg.set(IssueDate_80);
  Instrument_80.insert(IssueDate_80.getString());
  FIX::Issuer Issuer_80("STRING_836203840");
  msg.set(Issuer_80);
  Instrument_80.insert(Issuer_80.getString());
  FIX::ListMethod ListMethod_80(0);
  msg.set(ListMethod_80);
  Instrument_80.insert(ListMethod_80.getString());
  FIX::LocaleOfIssue LocaleOfIssue_80("STRING_1460361893");
  msg.set(LocaleOfIssue_80);
  Instrument_80.insert(LocaleOfIssue_80.getString());
  FIX::MaturityDate MaturityDate_80("LOCALMKTDATE_1019426904");
  msg.set(MaturityDate_80);
  Instrument_80.insert(MaturityDate_80.getString());
  FIX::MaturityMonthYear MaturityMonthYear_80("MONTHYEAR_1552441898");
  msg.set(MaturityMonthYear_80);
  Instrument_80.insert(MaturityMonthYear_80.getString());
  FIX::MaturityTime MaturityTime_80("TZTIMEONLY_1733874964");
  msg.set(MaturityTime_80);
  Instrument_80.insert(MaturityTime_80.getString());
  FIX::MinPriceIncrement MinPriceIncrement_80;
  MinPriceIncrement_80.setString("11091360");
  msg.set(MinPriceIncrement_80);
  Instrument_80.insert(MinPriceIncrement_80.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_80;
  MinPriceIncrementAmount_80.setString("10857554");
  msg.set(MinPriceIncrementAmount_80);
  Instrument_80.insert(MinPriceIncrementAmount_80.getString());
  FIX::NTPositionLimit NTPositionLimit_80(1043546427);
  msg.set(NTPositionLimit_80);
  Instrument_80.insert(NTPositionLimit_80.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_80;
  NotionalPercentageOutstanding_80.setString("52.840000");
  msg.set(NotionalPercentageOutstanding_80);
  Instrument_80.insert(NotionalPercentageOutstanding_80.getString());
  FIX::OptAttribute OptAttribute_80('1');
  msg.set(OptAttribute_80);
  Instrument_80.insert(OptAttribute_80.getString());
  FIX::OptPayoutAmount OptPayoutAmount_80;
  OptPayoutAmount_80.setString("4451777");
  msg.set(OptPayoutAmount_80);
  Instrument_80.insert(OptPayoutAmount_80.getString());
  FIX::OptPayoutType OptPayoutType_80(1);
  msg.set(OptPayoutType_80);
  Instrument_80.insert(OptPayoutType_80.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_80;
  OriginalNotionalPercentageOutstanding_80.setString("95.670000");
  msg.set(OriginalNotionalPercentageOutstanding_80);
  Instrument_80.insert(OriginalNotionalPercentageOutstanding_80.getString());
  FIX::Pool Pool_80("STRING_1490517195");
  msg.set(Pool_80);
  Instrument_80.insert(Pool_80.getString());
  FIX::PositionLimit PositionLimit_80(1075006070);
  msg.set(PositionLimit_80);
  Instrument_80.insert(PositionLimit_80.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_80("STRING_INX");
  msg.set(PriceQuoteMethod_80);
  Instrument_80.insert(PriceQuoteMethod_80.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_80("STRING_522389745");
  msg.set(PriceUnitOfMeasure_80);
  Instrument_80.insert(PriceUnitOfMeasure_80.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_80;
  PriceUnitOfMeasureQty_80.setString("9306232");
  msg.set(PriceUnitOfMeasureQty_80);
  Instrument_80.insert(PriceUnitOfMeasureQty_80.getString());
  FIX::Product Product_82(3);
  msg.set(Product_82);
  Instrument_80.insert(Product_82.getString());
  FIX::ProductComplex ProductComplex_80("STRING_1781529016");
  msg.set(ProductComplex_80);
  Instrument_80.insert(ProductComplex_80.getString());
  FIX::PutOrCall PutOrCall_80(1);
  msg.set(PutOrCall_80);
  Instrument_80.insert(PutOrCall_80.getString());
  FIX::RedemptionDate RedemptionDate_80("LOCALMKTDATE_1424170423");
  msg.set(RedemptionDate_80);
  Instrument_80.insert(RedemptionDate_80.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_80("STRING_525997647");
  msg.set(RepoCollateralSecurityType_80);
  Instrument_80.insert(RepoCollateralSecurityType_80.getString());
  FIX::RepurchaseRate RepurchaseRate_80;
  RepurchaseRate_80.setString("78.170000");
  msg.set(RepurchaseRate_80);
  Instrument_80.insert(RepurchaseRate_80.getString());
  FIX::RepurchaseTerm RepurchaseTerm_80(556236918);
  msg.set(RepurchaseTerm_80);
  Instrument_80.insert(RepurchaseTerm_80.getString());
  FIX::RestructuringType RestructuringType_80("STRING_XR");
  msg.set(RestructuringType_80);
  Instrument_80.insert(RestructuringType_80.getString());
  FIX::SecurityDesc SecurityDesc_80("STRING_1714345185");
  msg.set(SecurityDesc_80);
  Instrument_80.insert(SecurityDesc_80.getString());
  FIX::SecurityExchange SecurityExchange_80("EXCHANGE_1033639003");
  msg.set(SecurityExchange_80);
  Instrument_80.insert(SecurityExchange_80.getString());
  FIX::SecurityGroup SecurityGroup_80("STRING_607189299");
  msg.set(SecurityGroup_80);
  Instrument_80.insert(SecurityGroup_80.getString());
  FIX::SecurityID SecurityID_80("STRING_610201933");
  msg.set(SecurityID_80);
  Instrument_80.insert(SecurityID_80.getString());
  FIX::SecurityIDSource SecurityIDSource_80("STRING_C");
  msg.set(SecurityIDSource_80);
  Instrument_80.insert(SecurityIDSource_80.getString());
  FIX::SecurityStatus SecurityStatus_80("STRING_2");
  msg.set(SecurityStatus_80);
  Instrument_80.insert(SecurityStatus_80.getString());
  FIX::SecuritySubType SecuritySubType_81("STRING_2070563826");
  msg.set(SecuritySubType_81);
  Instrument_80.insert(SecuritySubType_81.getString());
  FIX::SecurityType SecurityType_82("STRING_TECP");
  msg.set(SecurityType_82);
  Instrument_80.insert(SecurityType_82.getString());
  FIX::Seniority Seniority_80("STRING_SD");
  msg.set(Seniority_80);
  Instrument_80.insert(Seniority_80.getString());
  FIX::SettlMethod SettlMethod_80('C');
  msg.set(SettlMethod_80);
  Instrument_80.insert(SettlMethod_80.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_80("STRING_1850922160");
  msg.set(SettleOnOpenFlag_80);
  Instrument_80.insert(SettleOnOpenFlag_80.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_80("STRING_2059479382");
  msg.set(StateOrProvinceOfIssue_80);
  Instrument_80.insert(StateOrProvinceOfIssue_80.getString());
  FIX::StrikeCurrency StrikeCurrency_80("CAN");
  msg.set(StrikeCurrency_80);
  Instrument_80.insert(StrikeCurrency_80.getString());
  FIX::StrikeMultiplier StrikeMultiplier_80;
  StrikeMultiplier_80.setString("20778439");
  msg.set(StrikeMultiplier_80);
  Instrument_80.insert(StrikeMultiplier_80.getString());
  FIX::StrikePrice StrikePrice_80;
  StrikePrice_80.setString("9981956");
  msg.set(StrikePrice_80);
  Instrument_80.insert(StrikePrice_80.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_80(2);
  msg.set(StrikePriceBoundaryMethod_80);
  Instrument_80.insert(StrikePriceBoundaryMethod_80.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_80;
  StrikePriceBoundaryPrecision_80.setString("98.370000");
  msg.set(StrikePriceBoundaryPrecision_80);
  Instrument_80.insert(StrikePriceBoundaryPrecision_80.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_80(4);
  msg.set(StrikePriceDeterminationMethod_80);
  Instrument_80.insert(StrikePriceDeterminationMethod_80.getString());
  FIX::StrikeValue StrikeValue_80;
  StrikeValue_80.setString("9522076");
  msg.set(StrikeValue_80);
  Instrument_80.insert(StrikeValue_80.getString());
  FIX::Symbol Symbol_80("STRING_780351423");
  msg.set(Symbol_80);
  Instrument_80.insert(Symbol_80.getString());
  FIX::SymbolSfx SymbolSfx_80("STRING_WI");
  msg.set(SymbolSfx_80);
  Instrument_80.insert(SymbolSfx_80.getString());
  FIX::TimeUnit TimeUnit_80("STRING_Min");
  msg.set(TimeUnit_80);
  Instrument_80.insert(TimeUnit_80.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_80(2);
  msg.set(UnderlyingPriceDeterminationMethod_80);
  Instrument_80.insert(UnderlyingPriceDeterminationMethod_80.getString());
  FIX::UnitOfMeasure UnitOfMeasure_80("STRING_t");
  msg.set(UnitOfMeasure_80);
  Instrument_80.insert(UnitOfMeasure_80.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_80;
  UnitOfMeasureQty_80.setString("1480159");
  msg.set(UnitOfMeasureQty_80);
  Instrument_80.insert(UnitOfMeasureQty_80.getString());
  FIX::ValuationMethod ValuationMethod_80("STRING_FUTDA");
  msg.set(ValuationMethod_80);
  Instrument_80.insert(ValuationMethod_80.getString());
  all_values.push_back(Instrument_80);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinitionRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_152;
    FIX::ComplexEventCondition ComplexEventCondition_152(1);
    noComplexEvents_0_0.set(ComplexEventCondition_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventCondition_152.getString());
    FIX::ComplexEventPrice ComplexEventPrice_152;
    ComplexEventPrice_152.setString("17460214");
    noComplexEvents_0_0.set(ComplexEventPrice_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventPrice_152.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_152(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventPriceBoundaryMethod_152.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_152;
    ComplexEventPriceBoundaryPrecision_152.setString("53.330000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventPriceBoundaryPrecision_152.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_152(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventPriceTimeType_152.getString());
    FIX::ComplexEventType ComplexEventType_152(1);
    noComplexEvents_0_0.set(ComplexEventType_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventType_152.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_152;
    ComplexOptPayoutAmount_152.setString("19418172");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexOptPayoutAmount_152.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_152);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_310;
      FIX::ComplexEventEndDate ComplexEventEndDate_310(FIX::UTCTIMESTAMP(4, 45, 58, 26, 7, 2000));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_310);
      ComplexEventDates_NoComplexEventDates_310.insert(ComplexEventEndDate_310.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_310(FIX::UTCTIMESTAMP(3, 2, 56, 11, 4, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_310);
      ComplexEventDates_NoComplexEventDates_310.insert(ComplexEventStartDate_310.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_310);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_622;
        FIX::ComplexEventEndTime ComplexEventEndTime_622(FIX::UTCTIMEONLY(0, 34, 8));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_622);
        ComplexEventTimes_NoComplexEventTimes_622.insert(ComplexEventEndTime_622.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_622(FIX::UTCTIMEONLY(21, 57, 13));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_622);
        ComplexEventTimes_NoComplexEventTimes_622.insert(ComplexEventStartTime_622.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_622);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_311;
      FIX::ComplexEventEndDate ComplexEventEndDate_311(FIX::UTCTIMESTAMP(4, 4, 35, 14, 3, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_311);
      ComplexEventDates_NoComplexEventDates_311.insert(ComplexEventEndDate_311.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_311(FIX::UTCTIMESTAMP(21, 30, 37, 7, 9, 2001));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_311);
      ComplexEventDates_NoComplexEventDates_311.insert(ComplexEventStartDate_311.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_311);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_623;
        FIX::ComplexEventEndTime ComplexEventEndTime_623(FIX::UTCTIMEONLY(10, 25, 28));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_623);
        ComplexEventTimes_NoComplexEventTimes_623.insert(ComplexEventEndTime_623.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_623(FIX::UTCTIMEONLY(9, 8, 23));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_623);
        ComplexEventTimes_NoComplexEventTimes_623.insert(ComplexEventStartTime_623.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_623);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_624;
        FIX::ComplexEventEndTime ComplexEventEndTime_624(FIX::UTCTIMEONLY(12, 57, 3));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_624);
        ComplexEventTimes_NoComplexEventTimes_624.insert(ComplexEventEndTime_624.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_624(FIX::UTCTIMEONLY(10, 0, 39));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_624);
        ComplexEventTimes_NoComplexEventTimes_624.insert(ComplexEventStartTime_624.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_624);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_625;
        FIX::ComplexEventEndTime ComplexEventEndTime_625(FIX::UTCTIMEONLY(8, 36, 31));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_625);
        ComplexEventTimes_NoComplexEventTimes_625.insert(ComplexEventEndTime_625.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_625(FIX::UTCTIMEONLY(2, 56, 50));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_625);
        ComplexEventTimes_NoComplexEventTimes_625.insert(ComplexEventStartTime_625.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_625);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_312;
      FIX::ComplexEventEndDate ComplexEventEndDate_312(FIX::UTCTIMESTAMP(2, 27, 35, 3, 3, 2011));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_312);
      ComplexEventDates_NoComplexEventDates_312.insert(ComplexEventEndDate_312.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_312(FIX::UTCTIMESTAMP(0, 16, 40, 9, 2, 2000));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_312);
      ComplexEventDates_NoComplexEventDates_312.insert(ComplexEventStartDate_312.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_312);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_626;
        FIX::ComplexEventEndTime ComplexEventEndTime_626(FIX::UTCTIMEONLY(12, 18, 16));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_626);
        ComplexEventTimes_NoComplexEventTimes_626.insert(ComplexEventEndTime_626.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_626(FIX::UTCTIMEONLY(5, 9, 10));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_626);
        ComplexEventTimes_NoComplexEventTimes_626.insert(ComplexEventStartTime_626.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_626);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_627;
        FIX::ComplexEventEndTime ComplexEventEndTime_627(FIX::UTCTIMEONLY(5, 38, 16));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_627);
        ComplexEventTimes_NoComplexEventTimes_627.insert(ComplexEventEndTime_627.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_627(FIX::UTCTIMEONLY(20, 12, 38));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_627);
        ComplexEventTimes_NoComplexEventTimes_627.insert(ComplexEventStartTime_627.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_627);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_628;
        FIX::ComplexEventEndTime ComplexEventEndTime_628(FIX::UTCTIMEONLY(19, 57, 24));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_628);
        ComplexEventTimes_NoComplexEventTimes_628.insert(ComplexEventEndTime_628.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_628(FIX::UTCTIMEONLY(11, 15, 21));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_628);
        ComplexEventTimes_NoComplexEventTimes_628.insert(ComplexEventStartTime_628.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_628);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
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
    multiset<string> EvntGrp_NoEvents_161;
    FIX::EventDate EventDate_161("LOCALMKTDATE_1962956791");
    noEvents_0_0.set(EventDate_161);
    EvntGrp_NoEvents_161.insert(EventDate_161.getString());
    FIX::EventPx EventPx_161;
    EventPx_161.setString("8882878");
    noEvents_0_0.set(EventPx_161);
    EvntGrp_NoEvents_161.insert(EventPx_161.getString());
    FIX::EventText EventText_161("STRING_485562276");
    noEvents_0_0.set(EventText_161);
    EvntGrp_NoEvents_161.insert(EventText_161.getString());
    FIX::EventTime EventTime_161(FIX::UTCTIMESTAMP(9, 5, 2, 10, 1, 2012));
    noEvents_0_0.set(EventTime_161);
    EvntGrp_NoEvents_161.insert(EventTime_161.getString());
    FIX::EventType EventType_161(9);
    noEvents_0_0.set(EventType_161);
    EvntGrp_NoEvents_161.insert(EventType_161.getString());
    all_values.push_back(EvntGrp_NoEvents_161);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_165;
    FIX::InstrumentPartyID InstrumentPartyID_165("STRING_703039519");
    noInstrumentParties_0_0.set(InstrumentPartyID_165);
    InstrumentParties_NoInstrumentParties_165.insert(InstrumentPartyID_165.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_165('7');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_165);
    InstrumentParties_NoInstrumentParties_165.insert(InstrumentPartyIDSource_165.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_165(1286177922);
    noInstrumentParties_0_0.set(InstrumentPartyRole_165);
    InstrumentParties_NoInstrumentParties_165.insert(InstrumentPartyRole_165.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_165);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347;
      FIX::InstrumentPartySubID InstrumentPartySubID_347("STRING_1711740228");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_347);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347.insert(InstrumentPartySubID_347.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_347(526979030);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_347);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347.insert(InstrumentPartySubIDType_347.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348;
      FIX::InstrumentPartySubID InstrumentPartySubID_348("STRING_1073725813");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_348);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348.insert(InstrumentPartySubID_348.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_348(1914817881);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_348);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348.insert(InstrumentPartySubIDType_348.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinitionRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_177;
    FIX::SecurityAltID SecurityAltID_177("STRING_321126163");
    noSecurityAltID_0_0.set(SecurityAltID_177);
    SecAltIDGrp_NoSecurityAltID_177.insert(SecurityAltID_177.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_177("STRING_1734606909");
    noSecurityAltID_0_0.set(SecurityAltIDSource_177);
    SecAltIDGrp_NoSecurityAltID_177.insert(SecurityAltIDSource_177.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_177);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_178;
    FIX::SecurityAltID SecurityAltID_178("STRING_550231345");
    noSecurityAltID_0_1.set(SecurityAltID_178);
    SecAltIDGrp_NoSecurityAltID_178.insert(SecurityAltID_178.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_178("STRING_1535214280");
    noSecurityAltID_0_1.set(SecurityAltIDSource_178);
    SecAltIDGrp_NoSecurityAltID_178.insert(SecurityAltIDSource_178.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_178);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_179;
    FIX::SecurityAltID SecurityAltID_179("STRING_636550765");
    noSecurityAltID_0_2.set(SecurityAltID_179);
    SecAltIDGrp_NoSecurityAltID_179.insert(SecurityAltID_179.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_179("STRING_1337416415");
    noSecurityAltID_0_2.set(SecurityAltIDSource_179);
    SecAltIDGrp_NoSecurityAltID_179.insert(SecurityAltIDSource_179.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_179);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_160;
  FIX::SecurityXML SecurityXML_161("XMLDATA_1291367563");
  msg.set(SecurityXML_161);
  FIX::SecurityXMLLen SecurityXMLLen_80(1339208800);
  msg.set(SecurityXMLLen_80);
  FIX::SecurityXMLSchema SecurityXMLSchema_80("STRING_477634309");
  msg.set(SecurityXMLSchema_80);
  SecurityXML_160.insert(SecurityXMLSchema_80.getString());
  all_values.push_back(SecurityXML_160);

  // InstrumentExtension
  multiset<string> InstrumentExtension_10;
  FIX::DeliveryForm DeliveryForm_10(1);
  msg.set(DeliveryForm_10);
  InstrumentExtension_10.insert(DeliveryForm_10.getString());
  FIX::PctAtRisk PctAtRisk_10;
  PctAtRisk_10.setString("19.440000");
  msg.set(PctAtRisk_10);
  InstrumentExtension_10.insert(PctAtRisk_10.getString());
  all_values.push_back(InstrumentExtension_10);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_23;
    FIX::InstrAttribType InstrAttribType_23(21);
    noInstrAttrib_0_0.set(InstrAttribType_23);
    AttrbGrp_NoInstrAttrib_23.insert(InstrAttribType_23.getString());
    FIX::InstrAttribValue InstrAttribValue_23("STRING_490783485");
    noInstrAttrib_0_0.set(InstrAttribValue_23);
    AttrbGrp_NoInstrAttrib_23.insert(InstrAttribValue_23.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_23);

    msg.addGroup(noInstrAttrib_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_27;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_27("USD");
  msg.set(BenchmarkCurveCurrency_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkCurveCurrency_27.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_27("STRING_Treasury");
  msg.set(BenchmarkCurveName_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkCurveName_27.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_27("STRING_509828686");
  msg.set(BenchmarkCurvePoint_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkCurvePoint_27.getString());
  FIX::BenchmarkPrice BenchmarkPrice_27;
  BenchmarkPrice_27.setString("8896762");
  msg.set(BenchmarkPrice_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkPrice_27.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_27(1322188737);
  msg.set(BenchmarkPriceType_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkPriceType_27.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_27("STRING_1355781654");
  msg.set(BenchmarkSecurityID_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkSecurityID_27.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_27("STRING_1216128721");
  msg.set(BenchmarkSecurityIDSource_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkSecurityIDSource_27.getString());
  FIX::Spread Spread_27;
  Spread_27.setString("20252282");
  msg.set(Spread_27);
  SpreadOrBenchmarkCurveData_27.insert(Spread_27.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_27);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinitionRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_42;
    FIX::StipulationType StipulationType_42("STRING_REDEMPTION");
    noStipulations_0_0.set(StipulationType_42);
    Stipulations_NoStipulations_42.insert(StipulationType_42.getString());
    FIX::StipulationValue StipulationValue_42("STRING_1452690094");
    noStipulations_0_0.set(StipulationValue_42);
    Stipulations_NoStipulations_42.insert(StipulationValue_42.getString());
    all_values.push_back(Stipulations_NoStipulations_42);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_43;
    FIX::StipulationType StipulationType_43("STRING_CURRENCY");
    noStipulations_0_1.set(StipulationType_43);
    Stipulations_NoStipulations_43.insert(StipulationType_43.getString());
    FIX::StipulationValue StipulationValue_43("STRING_881802025");
    noStipulations_0_1.set(StipulationValue_43);
    Stipulations_NoStipulations_43.insert(StipulationValue_43.getString());
    all_values.push_back(Stipulations_NoStipulations_43);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_44;
    FIX::StipulationType StipulationType_44("STRING_MINDNOM");
    noStipulations_0_2.set(StipulationType_44);
    Stipulations_NoStipulations_44.insert(StipulationType_44.getString());
    FIX::StipulationValue StipulationValue_44("STRING_1393455838");
    noStipulations_0_2.set(StipulationValue_44);
    Stipulations_NoStipulations_44.insert(StipulationValue_44.getString());
    all_values.push_back(Stipulations_NoStipulations_44);

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinitionRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_120;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_120("DATA_700058422");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingIssuer_120.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_120(980579100);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingIssuerLen_120.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_120("DATA_1226141505");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingSecurityDesc_120.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_120(87789054);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingSecurityDescLen_120.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_120;
    UnderlyingAdjustedQuantity_120.setString("16171298");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_120);
    UnderlyingInstrument_120.insert(UnderlyingAdjustedQuantity_120.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_120;
    UnderlyingAllocationPercent_120.setString("42.720000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_120);
    UnderlyingInstrument_120.insert(UnderlyingAllocationPercent_120.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_120;
    UnderlyingAttachmentPoint_120.setString("66.170000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_120);
    UnderlyingInstrument_120.insert(UnderlyingAttachmentPoint_120.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_120("STRING_808855018");
    noUnderlyings_0_0.set(UnderlyingCFICode_120);
    UnderlyingInstrument_120.insert(UnderlyingCFICode_120.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_120("STRING_893708581");
    noUnderlyings_0_0.set(UnderlyingCPProgram_120);
    UnderlyingInstrument_120.insert(UnderlyingCPProgram_120.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_120("STRING_2128348071");
    noUnderlyings_0_0.set(UnderlyingCPRegType_120);
    UnderlyingInstrument_120.insert(UnderlyingCPRegType_120.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_120;
    UnderlyingCapValue_120.setString("19635369");
    noUnderlyings_0_0.set(UnderlyingCapValue_120);
    UnderlyingInstrument_120.insert(UnderlyingCapValue_120.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_120;
    UnderlyingCashAmount_120.setString("1121471");
    noUnderlyings_0_0.set(UnderlyingCashAmount_120);
    UnderlyingInstrument_120.insert(UnderlyingCashAmount_120.getString());
    FIX::UnderlyingCashType UnderlyingCashType_120("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_120);
    UnderlyingInstrument_120.insert(UnderlyingCashType_120.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_120;
    UnderlyingContractMultiplier_120.setString("3068367");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_120);
    UnderlyingInstrument_120.insert(UnderlyingContractMultiplier_120.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_120(38857844);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_120);
    UnderlyingInstrument_120.insert(UnderlyingContractMultiplierUnit_120.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_120("COUNTRY_2113443021");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_120);
    UnderlyingInstrument_120.insert(UnderlyingCountryOfIssue_120.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_120("LOCALMKTDATE_1790743646");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_120);
    UnderlyingInstrument_120.insert(UnderlyingCouponPaymentDate_120.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_120;
    UnderlyingCouponRate_120.setString("65.300000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_120);
    UnderlyingInstrument_120.insert(UnderlyingCouponRate_120.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_120("STRING_855635597");
    noUnderlyings_0_0.set(UnderlyingCreditRating_120);
    UnderlyingInstrument_120.insert(UnderlyingCreditRating_120.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_120("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_120);
    UnderlyingInstrument_120.insert(UnderlyingCurrency_120.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_120;
    UnderlyingCurrentValue_120.setString("20717643");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_120);
    UnderlyingInstrument_120.insert(UnderlyingCurrentValue_120.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_120;
    UnderlyingDetachmentPoint_120.setString("33.440000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_120);
    UnderlyingInstrument_120.insert(UnderlyingDetachmentPoint_120.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_120;
    UnderlyingDirtyPrice_120.setString("18188495");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_120);
    UnderlyingInstrument_120.insert(UnderlyingDirtyPrice_120.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_120;
    UnderlyingEndPrice_120.setString("2791036");
    noUnderlyings_0_0.set(UnderlyingEndPrice_120);
    UnderlyingInstrument_120.insert(UnderlyingEndPrice_120.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_120;
    UnderlyingEndValue_120.setString("1483997");
    noUnderlyings_0_0.set(UnderlyingEndValue_120);
    UnderlyingInstrument_120.insert(UnderlyingEndValue_120.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_120(1297487519);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_120);
    UnderlyingInstrument_120.insert(UnderlyingExerciseStyle_120.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_120;
    UnderlyingFXRate_120.setString("11609056");
    noUnderlyings_0_0.set(UnderlyingFXRate_120);
    UnderlyingInstrument_120.insert(UnderlyingFXRate_120.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_120('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_120);
    UnderlyingInstrument_120.insert(UnderlyingFXRateCalc_120.getString());
    FIX::UnderlyingFactor UnderlyingFactor_120;
    UnderlyingFactor_120.setString("5434597");
    noUnderlyings_0_0.set(UnderlyingFactor_120);
    UnderlyingInstrument_120.insert(UnderlyingFactor_120.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_120(1836815850);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_120);
    UnderlyingInstrument_120.insert(UnderlyingFlowScheduleType_120.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_120("STRING_1227390471");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_120);
    UnderlyingInstrument_120.insert(UnderlyingInstrRegistry_120.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_120("LOCALMKTDATE_1524038809");
    noUnderlyings_0_0.set(UnderlyingIssueDate_120);
    UnderlyingInstrument_120.insert(UnderlyingIssueDate_120.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_120("STRING_915473707");
    noUnderlyings_0_0.set(UnderlyingIssuer_120);
    UnderlyingInstrument_120.insert(UnderlyingIssuer_120.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_120("STRING_1315179525");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_120);
    UnderlyingInstrument_120.insert(UnderlyingLocaleOfIssue_120.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_120("LOCALMKTDATE_993685027");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_120);
    UnderlyingInstrument_120.insert(UnderlyingMaturityDate_120.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_120("MONTHYEAR_1331547979");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_120);
    UnderlyingInstrument_120.insert(UnderlyingMaturityMonthYear_120.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_120("TZTIMEONLY_546852494");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_120);
    UnderlyingInstrument_120.insert(UnderlyingMaturityTime_120.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_120;
    UnderlyingNotionalPercentageOutstanding_120.setString("0.450000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_120);
    UnderlyingInstrument_120.insert(UnderlyingNotionalPercentageOutstanding_120.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_120('7');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_120);
    UnderlyingInstrument_120.insert(UnderlyingOptAttribute_120.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_120;
    UnderlyingOriginalNotionalPercentageOutstanding_120.setString("69.170000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_120);
    UnderlyingInstrument_120.insert(UnderlyingOriginalNotionalPercentageOutstanding_120.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_120("STRING_1618593359");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_120);
    UnderlyingInstrument_120.insert(UnderlyingPriceUnitOfMeasure_120.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_120;
    UnderlyingPriceUnitOfMeasureQty_120.setString("1899200");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_120);
    UnderlyingInstrument_120.insert(UnderlyingPriceUnitOfMeasureQty_120.getString());
    FIX::UnderlyingProduct UnderlyingProduct_120(1743335071);
    noUnderlyings_0_0.set(UnderlyingProduct_120);
    UnderlyingInstrument_120.insert(UnderlyingProduct_120.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_120(1925430158);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_120);
    UnderlyingInstrument_120.insert(UnderlyingPutOrCall_120.getString());
    FIX::UnderlyingPx UnderlyingPx_120;
    UnderlyingPx_120.setString("2287778");
    noUnderlyings_0_0.set(UnderlyingPx_120);
    UnderlyingInstrument_120.insert(UnderlyingPx_120.getString());
    FIX::UnderlyingQty UnderlyingQty_120;
    UnderlyingQty_120.setString("17092944");
    noUnderlyings_0_0.set(UnderlyingQty_120);
    UnderlyingInstrument_120.insert(UnderlyingQty_120.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_120("LOCALMKTDATE_1568690156");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_120);
    UnderlyingInstrument_120.insert(UnderlyingRedemptionDate_120.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_120("STRING_777464403");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_120);
    UnderlyingInstrument_120.insert(UnderlyingRepoCollateralSecurityType_120.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_120;
    UnderlyingRepurchaseRate_120.setString("63.940000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_120);
    UnderlyingInstrument_120.insert(UnderlyingRepurchaseRate_120.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_120(386655243);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_120);
    UnderlyingInstrument_120.insert(UnderlyingRepurchaseTerm_120.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_120("STRING_534448939");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_120);
    UnderlyingInstrument_120.insert(UnderlyingRestructuringType_120.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_120("STRING_341727064");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityDesc_120.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_120("EXCHANGE_1229848588");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityExchange_120.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_120("STRING_205814853");
    noUnderlyings_0_0.set(UnderlyingSecurityID_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityID_120.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_120("STRING_620830730");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityIDSource_120.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_120("STRING_1378248378");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_120);
    UnderlyingInstrument_120.insert(UnderlyingSecuritySubType_120.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_120("STRING_1503302372");
    noUnderlyings_0_0.set(UnderlyingSecurityType_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityType_120.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_120("STRING_1781736420");
    noUnderlyings_0_0.set(UnderlyingSeniority_120);
    UnderlyingInstrument_120.insert(UnderlyingSeniority_120.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_120("STRING_1905580428");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_120);
    UnderlyingInstrument_120.insert(UnderlyingSettlMethod_120.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_120(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_120);
    UnderlyingInstrument_120.insert(UnderlyingSettlementType_120.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_120;
    UnderlyingStartValue_120.setString("14710686");
    noUnderlyings_0_0.set(UnderlyingStartValue_120);
    UnderlyingInstrument_120.insert(UnderlyingStartValue_120.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_120("STRING_985487251");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_120);
    UnderlyingInstrument_120.insert(UnderlyingStateOrProvinceOfIssue_120.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_120("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_120);
    UnderlyingInstrument_120.insert(UnderlyingStrikeCurrency_120.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_120;
    UnderlyingStrikePrice_120.setString("1531831");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_120);
    UnderlyingInstrument_120.insert(UnderlyingStrikePrice_120.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_120("STRING_269518622");
    noUnderlyings_0_0.set(UnderlyingSymbol_120);
    UnderlyingInstrument_120.insert(UnderlyingSymbol_120.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_120("STRING_1570606661");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_120);
    UnderlyingInstrument_120.insert(UnderlyingSymbolSfx_120.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_120("STRING_700035623");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_120);
    UnderlyingInstrument_120.insert(UnderlyingTimeUnit_120.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_120("STRING_2072058667");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_120);
    UnderlyingInstrument_120.insert(UnderlyingUnitOfMeasure_120.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_120;
    UnderlyingUnitOfMeasureQty_120.setString("16483795");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_120);
    UnderlyingInstrument_120.insert(UnderlyingUnitOfMeasureQty_120.getString());
    all_values.push_back(UnderlyingInstrument_120);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_240;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_240("STRING_1543168378");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_240);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_240.insert(UnderlyingSecurityAltID_240.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_240("STRING_1838299603");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_240);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_240.insert(UnderlyingSecurityAltIDSource_240.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_240);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_224;
      FIX::UnderlyingStipType UnderlyingStipType_224("STRING_1321114888");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_224);
      UnderlyingStipulations_NoUnderlyingStips_224.insert(UnderlyingStipType_224.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_224("STRING_2067077476");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_224);
      UnderlyingStipulations_NoUnderlyingStips_224.insert(UnderlyingStipValue_224.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_224);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_225;
      FIX::UnderlyingStipType UnderlyingStipType_225("STRING_385414760");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_225);
      UnderlyingStipulations_NoUnderlyingStips_225.insert(UnderlyingStipType_225.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_225("STRING_742321396");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_225);
      UnderlyingStipulations_NoUnderlyingStips_225.insert(UnderlyingStipValue_225.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_225);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_226;
      FIX::UnderlyingStipType UnderlyingStipType_226("STRING_697058231");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_226);
      UnderlyingStipulations_NoUnderlyingStips_226.insert(UnderlyingStipType_226.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_226("STRING_802861154");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_226);
      UnderlyingStipulations_NoUnderlyingStips_226.insert(UnderlyingStipValue_226.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_226);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_244;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_244("STRING_1231507170");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_244);
      UndlyInstrumentParties_NoUndlyInstrumentParties_244.insert(UnderlyingInstrumentPartyID_244.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_244('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_244);
      UndlyInstrumentParties_NoUndlyInstrumentParties_244.insert(UnderlyingInstrumentPartyIDSource_244.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_244(211341579);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_244);
      UndlyInstrumentParties_NoUndlyInstrumentParties_244.insert(UnderlyingInstrumentPartyRole_244.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_244);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_458("STRING_1765418949");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_458);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458.insert(UnderlyingInstrumentPartySubID_458.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_458(1589589958);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_458);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458.insert(UnderlyingInstrumentPartySubIDType_458.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_245;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_245("STRING_793140747");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_245);
      UndlyInstrumentParties_NoUndlyInstrumentParties_245.insert(UnderlyingInstrumentPartyID_245.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_245('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_245);
      UndlyInstrumentParties_NoUndlyInstrumentParties_245.insert(UnderlyingInstrumentPartyIDSource_245.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_245(1347686738);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_245);
      UndlyInstrumentParties_NoUndlyInstrumentParties_245.insert(UnderlyingInstrumentPartyRole_245.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_245);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_459("STRING_723256696");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_459);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459.insert(UnderlyingInstrumentPartySubID_459.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_459(185690341);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_459);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459.insert(UnderlyingInstrumentPartySubIDType_459.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_460("STRING_2115736424");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_460);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460.insert(UnderlyingInstrumentPartySubID_460.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_460(962315377);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_460);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460.insert(UnderlyingInstrumentPartySubIDType_460.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_461("STRING_338873470");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_461);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461.insert(UnderlyingInstrumentPartySubID_461.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_461(237771398);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_461);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461.insert(UnderlyingInstrumentPartySubIDType_461.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_121;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_121("DATA_385438390");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingIssuer_121.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_121(1038909094);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingIssuerLen_121.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_121("DATA_162346417");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingSecurityDesc_121.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_121(2033817964);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingSecurityDescLen_121.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_121;
    UnderlyingAdjustedQuantity_121.setString("1191779");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_121);
    UnderlyingInstrument_121.insert(UnderlyingAdjustedQuantity_121.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_121;
    UnderlyingAllocationPercent_121.setString("47.950000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_121);
    UnderlyingInstrument_121.insert(UnderlyingAllocationPercent_121.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_121;
    UnderlyingAttachmentPoint_121.setString("39.190000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_121);
    UnderlyingInstrument_121.insert(UnderlyingAttachmentPoint_121.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_121("STRING_942781951");
    noUnderlyings_0_1.set(UnderlyingCFICode_121);
    UnderlyingInstrument_121.insert(UnderlyingCFICode_121.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_121("STRING_879146035");
    noUnderlyings_0_1.set(UnderlyingCPProgram_121);
    UnderlyingInstrument_121.insert(UnderlyingCPProgram_121.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_121("STRING_1644227747");
    noUnderlyings_0_1.set(UnderlyingCPRegType_121);
    UnderlyingInstrument_121.insert(UnderlyingCPRegType_121.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_121;
    UnderlyingCapValue_121.setString("13281967");
    noUnderlyings_0_1.set(UnderlyingCapValue_121);
    UnderlyingInstrument_121.insert(UnderlyingCapValue_121.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_121;
    UnderlyingCashAmount_121.setString("16214674");
    noUnderlyings_0_1.set(UnderlyingCashAmount_121);
    UnderlyingInstrument_121.insert(UnderlyingCashAmount_121.getString());
    FIX::UnderlyingCashType UnderlyingCashType_121("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_121);
    UnderlyingInstrument_121.insert(UnderlyingCashType_121.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_121;
    UnderlyingContractMultiplier_121.setString("21310578");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_121);
    UnderlyingInstrument_121.insert(UnderlyingContractMultiplier_121.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_121(602960422);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_121);
    UnderlyingInstrument_121.insert(UnderlyingContractMultiplierUnit_121.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_121("COUNTRY_1425309501");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_121);
    UnderlyingInstrument_121.insert(UnderlyingCountryOfIssue_121.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_121("LOCALMKTDATE_1128162437");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_121);
    UnderlyingInstrument_121.insert(UnderlyingCouponPaymentDate_121.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_121;
    UnderlyingCouponRate_121.setString("20.020000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_121);
    UnderlyingInstrument_121.insert(UnderlyingCouponRate_121.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_121("STRING_715147876");
    noUnderlyings_0_1.set(UnderlyingCreditRating_121);
    UnderlyingInstrument_121.insert(UnderlyingCreditRating_121.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_121("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_121);
    UnderlyingInstrument_121.insert(UnderlyingCurrency_121.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_121;
    UnderlyingCurrentValue_121.setString("15082886");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_121);
    UnderlyingInstrument_121.insert(UnderlyingCurrentValue_121.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_121;
    UnderlyingDetachmentPoint_121.setString("94.590000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_121);
    UnderlyingInstrument_121.insert(UnderlyingDetachmentPoint_121.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_121;
    UnderlyingDirtyPrice_121.setString("16040950");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_121);
    UnderlyingInstrument_121.insert(UnderlyingDirtyPrice_121.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_121;
    UnderlyingEndPrice_121.setString("532241");
    noUnderlyings_0_1.set(UnderlyingEndPrice_121);
    UnderlyingInstrument_121.insert(UnderlyingEndPrice_121.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_121;
    UnderlyingEndValue_121.setString("7215425");
    noUnderlyings_0_1.set(UnderlyingEndValue_121);
    UnderlyingInstrument_121.insert(UnderlyingEndValue_121.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_121(1789785391);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_121);
    UnderlyingInstrument_121.insert(UnderlyingExerciseStyle_121.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_121;
    UnderlyingFXRate_121.setString("214769");
    noUnderlyings_0_1.set(UnderlyingFXRate_121);
    UnderlyingInstrument_121.insert(UnderlyingFXRate_121.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_121('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_121);
    UnderlyingInstrument_121.insert(UnderlyingFXRateCalc_121.getString());
    FIX::UnderlyingFactor UnderlyingFactor_121;
    UnderlyingFactor_121.setString("21286588");
    noUnderlyings_0_1.set(UnderlyingFactor_121);
    UnderlyingInstrument_121.insert(UnderlyingFactor_121.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_121(259248331);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_121);
    UnderlyingInstrument_121.insert(UnderlyingFlowScheduleType_121.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_121("STRING_2069296275");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_121);
    UnderlyingInstrument_121.insert(UnderlyingInstrRegistry_121.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_121("LOCALMKTDATE_1020084308");
    noUnderlyings_0_1.set(UnderlyingIssueDate_121);
    UnderlyingInstrument_121.insert(UnderlyingIssueDate_121.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_121("STRING_421594748");
    noUnderlyings_0_1.set(UnderlyingIssuer_121);
    UnderlyingInstrument_121.insert(UnderlyingIssuer_121.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_121("STRING_1955630592");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_121);
    UnderlyingInstrument_121.insert(UnderlyingLocaleOfIssue_121.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_121("LOCALMKTDATE_1139262295");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_121);
    UnderlyingInstrument_121.insert(UnderlyingMaturityDate_121.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_121("MONTHYEAR_2127109543");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_121);
    UnderlyingInstrument_121.insert(UnderlyingMaturityMonthYear_121.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_121("TZTIMEONLY_1532780863");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_121);
    UnderlyingInstrument_121.insert(UnderlyingMaturityTime_121.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_121;
    UnderlyingNotionalPercentageOutstanding_121.setString("42.460000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_121);
    UnderlyingInstrument_121.insert(UnderlyingNotionalPercentageOutstanding_121.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_121('8');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_121);
    UnderlyingInstrument_121.insert(UnderlyingOptAttribute_121.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_121;
    UnderlyingOriginalNotionalPercentageOutstanding_121.setString("49.630000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_121);
    UnderlyingInstrument_121.insert(UnderlyingOriginalNotionalPercentageOutstanding_121.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_121("STRING_1262757309");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_121);
    UnderlyingInstrument_121.insert(UnderlyingPriceUnitOfMeasure_121.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_121;
    UnderlyingPriceUnitOfMeasureQty_121.setString("3327557");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_121);
    UnderlyingInstrument_121.insert(UnderlyingPriceUnitOfMeasureQty_121.getString());
    FIX::UnderlyingProduct UnderlyingProduct_121(1223327293);
    noUnderlyings_0_1.set(UnderlyingProduct_121);
    UnderlyingInstrument_121.insert(UnderlyingProduct_121.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_121(1246331527);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_121);
    UnderlyingInstrument_121.insert(UnderlyingPutOrCall_121.getString());
    FIX::UnderlyingPx UnderlyingPx_121;
    UnderlyingPx_121.setString("9357161");
    noUnderlyings_0_1.set(UnderlyingPx_121);
    UnderlyingInstrument_121.insert(UnderlyingPx_121.getString());
    FIX::UnderlyingQty UnderlyingQty_121;
    UnderlyingQty_121.setString("5011531");
    noUnderlyings_0_1.set(UnderlyingQty_121);
    UnderlyingInstrument_121.insert(UnderlyingQty_121.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_121("LOCALMKTDATE_227010316");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_121);
    UnderlyingInstrument_121.insert(UnderlyingRedemptionDate_121.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_121("STRING_1750018137");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_121);
    UnderlyingInstrument_121.insert(UnderlyingRepoCollateralSecurityType_121.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_121;
    UnderlyingRepurchaseRate_121.setString("10.230000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_121);
    UnderlyingInstrument_121.insert(UnderlyingRepurchaseRate_121.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_121(973108054);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_121);
    UnderlyingInstrument_121.insert(UnderlyingRepurchaseTerm_121.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_121("STRING_2006426449");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_121);
    UnderlyingInstrument_121.insert(UnderlyingRestructuringType_121.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_121("STRING_577105999");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityDesc_121.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_121("EXCHANGE_971393866");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityExchange_121.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_121("STRING_1463037851");
    noUnderlyings_0_1.set(UnderlyingSecurityID_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityID_121.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_121("STRING_630330156");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityIDSource_121.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_121("STRING_1692936373");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_121);
    UnderlyingInstrument_121.insert(UnderlyingSecuritySubType_121.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_121("STRING_1105339595");
    noUnderlyings_0_1.set(UnderlyingSecurityType_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityType_121.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_121("STRING_651807089");
    noUnderlyings_0_1.set(UnderlyingSeniority_121);
    UnderlyingInstrument_121.insert(UnderlyingSeniority_121.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_121("STRING_1229310610");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_121);
    UnderlyingInstrument_121.insert(UnderlyingSettlMethod_121.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_121(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_121);
    UnderlyingInstrument_121.insert(UnderlyingSettlementType_121.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_121;
    UnderlyingStartValue_121.setString("9110554");
    noUnderlyings_0_1.set(UnderlyingStartValue_121);
    UnderlyingInstrument_121.insert(UnderlyingStartValue_121.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_121("STRING_1151123238");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_121);
    UnderlyingInstrument_121.insert(UnderlyingStateOrProvinceOfIssue_121.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_121("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_121);
    UnderlyingInstrument_121.insert(UnderlyingStrikeCurrency_121.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_121;
    UnderlyingStrikePrice_121.setString("9592701");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_121);
    UnderlyingInstrument_121.insert(UnderlyingStrikePrice_121.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_121("STRING_1098377764");
    noUnderlyings_0_1.set(UnderlyingSymbol_121);
    UnderlyingInstrument_121.insert(UnderlyingSymbol_121.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_121("STRING_1312276063");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_121);
    UnderlyingInstrument_121.insert(UnderlyingSymbolSfx_121.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_121("STRING_344567397");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_121);
    UnderlyingInstrument_121.insert(UnderlyingTimeUnit_121.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_121("STRING_1032938362");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_121);
    UnderlyingInstrument_121.insert(UnderlyingUnitOfMeasure_121.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_121;
    UnderlyingUnitOfMeasureQty_121.setString("235643");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_121);
    UnderlyingInstrument_121.insert(UnderlyingUnitOfMeasureQty_121.getString());
    all_values.push_back(UnderlyingInstrument_121);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_241;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_241("STRING_148212023");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_241);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_241.insert(UnderlyingSecurityAltID_241.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_241("STRING_356320058");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_241);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_241.insert(UnderlyingSecurityAltIDSource_241.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_241);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_242;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_242("STRING_449936006");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_242);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_242.insert(UnderlyingSecurityAltID_242.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_242("STRING_1394543551");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_242);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_242.insert(UnderlyingSecurityAltIDSource_242.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_242);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_243;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_243("STRING_1292036193");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_243);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_243.insert(UnderlyingSecurityAltID_243.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_243("STRING_951089152");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_243);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_243.insert(UnderlyingSecurityAltIDSource_243.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_243);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_227;
      FIX::UnderlyingStipType UnderlyingStipType_227("STRING_894570683");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_227);
      UnderlyingStipulations_NoUnderlyingStips_227.insert(UnderlyingStipType_227.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_227("STRING_19906527");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_227);
      UnderlyingStipulations_NoUnderlyingStips_227.insert(UnderlyingStipValue_227.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_227);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_228;
      FIX::UnderlyingStipType UnderlyingStipType_228("STRING_447178274");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_228);
      UnderlyingStipulations_NoUnderlyingStips_228.insert(UnderlyingStipType_228.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_228("STRING_753513484");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_228);
      UnderlyingStipulations_NoUnderlyingStips_228.insert(UnderlyingStipValue_228.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_228);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_229;
      FIX::UnderlyingStipType UnderlyingStipType_229("STRING_597012526");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_229);
      UnderlyingStipulations_NoUnderlyingStips_229.insert(UnderlyingStipType_229.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_229("STRING_1418572140");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_229);
      UnderlyingStipulations_NoUnderlyingStips_229.insert(UnderlyingStipValue_229.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_229);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_246;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_246("STRING_1227342682");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_246);
      UndlyInstrumentParties_NoUndlyInstrumentParties_246.insert(UnderlyingInstrumentPartyID_246.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_246('9');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_246);
      UndlyInstrumentParties_NoUndlyInstrumentParties_246.insert(UnderlyingInstrumentPartyIDSource_246.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_246(1174407283);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_246);
      UndlyInstrumentParties_NoUndlyInstrumentParties_246.insert(UnderlyingInstrumentPartyRole_246.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_246);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_462("STRING_45851828");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_462);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462.insert(UnderlyingInstrumentPartySubID_462.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_462(113438444);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_462);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462.insert(UnderlyingInstrumentPartySubIDType_462.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_247;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_247("STRING_642721543");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_247);
      UndlyInstrumentParties_NoUndlyInstrumentParties_247.insert(UnderlyingInstrumentPartyID_247.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_247('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_247);
      UndlyInstrumentParties_NoUndlyInstrumentParties_247.insert(UnderlyingInstrumentPartyIDSource_247.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_247(72553913);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_247);
      UndlyInstrumentParties_NoUndlyInstrumentParties_247.insert(UnderlyingInstrumentPartyRole_247.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_247);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_463("STRING_8761600");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_463);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463.insert(UnderlyingInstrumentPartySubID_463.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_463(1170931677);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_463);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463.insert(UnderlyingInstrumentPartySubIDType_463.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_248;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_248("STRING_1140164126");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_248);
      UndlyInstrumentParties_NoUndlyInstrumentParties_248.insert(UnderlyingInstrumentPartyID_248.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_248('3');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_248);
      UndlyInstrumentParties_NoUndlyInstrumentParties_248.insert(UnderlyingInstrumentPartyIDSource_248.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_248(56386391);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_248);
      UndlyInstrumentParties_NoUndlyInstrumentParties_248.insert(UnderlyingInstrumentPartyRole_248.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_248);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_464("STRING_1727421358");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_464);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464.insert(UnderlyingInstrumentPartySubID_464.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_464(204598414);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_464);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464.insert(UnderlyingInstrumentPartySubIDType_464.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_465("STRING_1520048529");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_465);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465.insert(UnderlyingInstrumentPartySubID_465.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_465(29873716);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_465);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465.insert(UnderlyingInstrumentPartySubIDType_465.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_22;
  FIX::Yield Yield_22;
  Yield_22.setString("19.650000");
  msg.set(Yield_22);
  YieldData_22.insert(Yield_22.getString());
  FIX::YieldCalcDate YieldCalcDate_22("LOCALMKTDATE_664601075");
  msg.set(YieldCalcDate_22);
  YieldData_22.insert(YieldCalcDate_22.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_22("LOCALMKTDATE_980962868");
  msg.set(YieldRedemptionDate_22);
  YieldData_22.insert(YieldRedemptionDate_22.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_22;
  YieldRedemptionPrice_22.setString("10732121");
  msg.set(YieldRedemptionPrice_22);
  YieldData_22.insert(YieldRedemptionPrice_22.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_22(1559171758);
  msg.set(YieldRedemptionPriceType_22);
  YieldData_22.insert(YieldRedemptionPriceType_22.getString());
  FIX::YieldType YieldType_22("STRING_CHANGE");
  msg.set(YieldType_22);
  YieldData_22.insert(YieldType_22.getString());
  all_values.push_back(YieldData_22);


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
