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
  FIX::Currency Currency_58("GBP");
  msg.set(Currency_58);
  SecurityDefinitionRequest_0.insert(Currency_58.getString());
  FIX::EncodedText EncodedText_87("DATA_226765444");
  msg.set(EncodedText_87);
  SecurityDefinitionRequest_0.insert(EncodedText_87.getString());
  FIX::EncodedTextLen EncodedTextLen_87(2142559383);
  msg.set(EncodedTextLen_87);
  SecurityDefinitionRequest_0.insert(EncodedTextLen_87.getString());
  FIX::ExpirationCycle ExpirationCycle_8(2);
  msg.set(ExpirationCycle_8);
  SecurityDefinitionRequest_0.insert(ExpirationCycle_8.getString());
  FIX::MarketID MarketID_15("EXCHANGE_1059778772");
  msg.set(MarketID_15);
  SecurityDefinitionRequest_0.insert(MarketID_15.getString());
  FIX::MarketSegmentID MarketSegmentID_15("STRING_911888874");
  msg.set(MarketSegmentID_15);
  SecurityDefinitionRequest_0.insert(MarketSegmentID_15.getString());
  FIX::SecurityReqID SecurityReqID_4("STRING_918626708");
  msg.set(SecurityReqID_4);
  SecurityDefinitionRequest_0.insert(SecurityReqID_4.getString());
  FIX::SecurityRequestType SecurityRequestType_0(4);
  msg.set(SecurityRequestType_0);
  SecurityDefinitionRequest_0.insert(SecurityRequestType_0.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_9('0');
  msg.set(SubscriptionRequestType_9);
  SecurityDefinitionRequest_0.insert(SubscriptionRequestType_9.getString());
  FIX::Text Text_87("STRING_1188344493");
  msg.set(Text_87);
  SecurityDefinitionRequest_0.insert(Text_87.getString());
  FIX::TradingSessionID TradingSessionID_78("STRING_3");
  msg.set(TradingSessionID_78);
  SecurityDefinitionRequest_0.insert(TradingSessionID_78.getString());
  FIX::TradingSessionSubID TradingSessionSubID_78("STRING_6");
  msg.set(TradingSessionSubID_78);
  SecurityDefinitionRequest_0.insert(TradingSessionSubID_78.getString());
  all_values.push_back(SecurityDefinitionRequest_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinitionRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_119;
    FIX::EncodedLegIssuer EncodedLegIssuer_119("DATA_754855799");
    noLegs_0_0.set(EncodedLegIssuer_119);
    InstrumentLeg_119.insert(EncodedLegIssuer_119.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_119(1307506670);
    noLegs_0_0.set(EncodedLegIssuerLen_119);
    InstrumentLeg_119.insert(EncodedLegIssuerLen_119.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_119("DATA_420621670");
    noLegs_0_0.set(EncodedLegSecurityDesc_119);
    InstrumentLeg_119.insert(EncodedLegSecurityDesc_119.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_119(628885800);
    noLegs_0_0.set(EncodedLegSecurityDescLen_119);
    InstrumentLeg_119.insert(EncodedLegSecurityDescLen_119.getString());
    FIX::LegCFICode LegCFICode_119("STRING_1455162399");
    noLegs_0_0.set(LegCFICode_119);
    InstrumentLeg_119.insert(LegCFICode_119.getString());
    FIX::LegContractMultiplier LegContractMultiplier_119;
    LegContractMultiplier_119.setString("6219695");
    noLegs_0_0.set(LegContractMultiplier_119);
    InstrumentLeg_119.insert(LegContractMultiplier_119.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_119(1146477396);
    noLegs_0_0.set(LegContractMultiplierUnit_119);
    InstrumentLeg_119.insert(LegContractMultiplierUnit_119.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_119("MONTHYEAR_1742276769");
    noLegs_0_0.set(LegContractSettlMonth_119);
    InstrumentLeg_119.insert(LegContractSettlMonth_119.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_119("COUNTRY_739061146");
    noLegs_0_0.set(LegCountryOfIssue_119);
    InstrumentLeg_119.insert(LegCountryOfIssue_119.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_119("LOCALMKTDATE_1732701817");
    noLegs_0_0.set(LegCouponPaymentDate_119);
    InstrumentLeg_119.insert(LegCouponPaymentDate_119.getString());
    FIX::LegCouponRate LegCouponRate_119;
    LegCouponRate_119.setString("31.900000");
    noLegs_0_0.set(LegCouponRate_119);
    InstrumentLeg_119.insert(LegCouponRate_119.getString());
    FIX::LegCreditRating LegCreditRating_119("STRING_151446994");
    noLegs_0_0.set(LegCreditRating_119);
    InstrumentLeg_119.insert(LegCreditRating_119.getString());
    FIX::LegCurrency LegCurrency_119("USD");
    noLegs_0_0.set(LegCurrency_119);
    InstrumentLeg_119.insert(LegCurrency_119.getString());
    FIX::LegDatedDate LegDatedDate_119("LOCALMKTDATE_305820300");
    noLegs_0_0.set(LegDatedDate_119);
    InstrumentLeg_119.insert(LegDatedDate_119.getString());
    FIX::LegExerciseStyle LegExerciseStyle_119(1329395415);
    noLegs_0_0.set(LegExerciseStyle_119);
    InstrumentLeg_119.insert(LegExerciseStyle_119.getString());
    FIX::LegFactor LegFactor_119;
    LegFactor_119.setString("11054053");
    noLegs_0_0.set(LegFactor_119);
    InstrumentLeg_119.insert(LegFactor_119.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_119(1653072447);
    noLegs_0_0.set(LegFlowScheduleType_119);
    InstrumentLeg_119.insert(LegFlowScheduleType_119.getString());
    FIX::LegInstrRegistry LegInstrRegistry_119("STRING_1870035815");
    noLegs_0_0.set(LegInstrRegistry_119);
    InstrumentLeg_119.insert(LegInstrRegistry_119.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_119("LOCALMKTDATE_1332170798");
    noLegs_0_0.set(LegInterestAccrualDate_119);
    InstrumentLeg_119.insert(LegInterestAccrualDate_119.getString());
    FIX::LegIssueDate LegIssueDate_119("LOCALMKTDATE_1648148182");
    noLegs_0_0.set(LegIssueDate_119);
    InstrumentLeg_119.insert(LegIssueDate_119.getString());
    FIX::LegIssuer LegIssuer_119("STRING_1659806459");
    noLegs_0_0.set(LegIssuer_119);
    InstrumentLeg_119.insert(LegIssuer_119.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_119("STRING_244465923");
    noLegs_0_0.set(LegLocaleOfIssue_119);
    InstrumentLeg_119.insert(LegLocaleOfIssue_119.getString());
    FIX::LegMaturityDate LegMaturityDate_119("LOCALMKTDATE_412553408");
    noLegs_0_0.set(LegMaturityDate_119);
    InstrumentLeg_119.insert(LegMaturityDate_119.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_119("MONTHYEAR_430949519");
    noLegs_0_0.set(LegMaturityMonthYear_119);
    InstrumentLeg_119.insert(LegMaturityMonthYear_119.getString());
    FIX::LegMaturityTime LegMaturityTime_119("TZTIMEONLY_1222927297");
    noLegs_0_0.set(LegMaturityTime_119);
    InstrumentLeg_119.insert(LegMaturityTime_119.getString());
    FIX::LegOptAttribute LegOptAttribute_119('8');
    noLegs_0_0.set(LegOptAttribute_119);
    InstrumentLeg_119.insert(LegOptAttribute_119.getString());
    FIX::LegOptionRatio LegOptionRatio_119;
    LegOptionRatio_119.setString("16192940");
    noLegs_0_0.set(LegOptionRatio_119);
    InstrumentLeg_119.insert(LegOptionRatio_119.getString());
    FIX::LegPool LegPool_119("STRING_1476523");
    noLegs_0_0.set(LegPool_119);
    InstrumentLeg_119.insert(LegPool_119.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_119("STRING_243157642");
    noLegs_0_0.set(LegPriceUnitOfMeasure_119);
    InstrumentLeg_119.insert(LegPriceUnitOfMeasure_119.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_119;
    LegPriceUnitOfMeasureQty_119.setString("16113063");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_119);
    InstrumentLeg_119.insert(LegPriceUnitOfMeasureQty_119.getString());
    FIX::LegProduct LegProduct_119(756332322);
    noLegs_0_0.set(LegProduct_119);
    InstrumentLeg_119.insert(LegProduct_119.getString());
    FIX::LegPutOrCall LegPutOrCall_119(1550664313);
    noLegs_0_0.set(LegPutOrCall_119);
    InstrumentLeg_119.insert(LegPutOrCall_119.getString());
    FIX::LegRatioQty LegRatioQty_119;
    LegRatioQty_119.setString("20319280");
    noLegs_0_0.set(LegRatioQty_119);
    InstrumentLeg_119.insert(LegRatioQty_119.getString());
    FIX::LegRedemptionDate LegRedemptionDate_119("LOCALMKTDATE_1385218122");
    noLegs_0_0.set(LegRedemptionDate_119);
    InstrumentLeg_119.insert(LegRedemptionDate_119.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_119("STRING_858343064");
    noLegs_0_0.set(LegRepoCollateralSecurityType_119);
    InstrumentLeg_119.insert(LegRepoCollateralSecurityType_119.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_119;
    LegRepurchaseRate_119.setString("39.460000");
    noLegs_0_0.set(LegRepurchaseRate_119);
    InstrumentLeg_119.insert(LegRepurchaseRate_119.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_119(384211870);
    noLegs_0_0.set(LegRepurchaseTerm_119);
    InstrumentLeg_119.insert(LegRepurchaseTerm_119.getString());
    FIX::LegSecurityDesc LegSecurityDesc_119("STRING_453136185");
    noLegs_0_0.set(LegSecurityDesc_119);
    InstrumentLeg_119.insert(LegSecurityDesc_119.getString());
    FIX::LegSecurityExchange LegSecurityExchange_119("EXCHANGE_1245475092");
    noLegs_0_0.set(LegSecurityExchange_119);
    InstrumentLeg_119.insert(LegSecurityExchange_119.getString());
    FIX::LegSecurityID LegSecurityID_119("STRING_2116913688");
    noLegs_0_0.set(LegSecurityID_119);
    InstrumentLeg_119.insert(LegSecurityID_119.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_119("STRING_298465727");
    noLegs_0_0.set(LegSecurityIDSource_119);
    InstrumentLeg_119.insert(LegSecurityIDSource_119.getString());
    FIX::LegSecuritySubType LegSecuritySubType_119("STRING_1396922087");
    noLegs_0_0.set(LegSecuritySubType_119);
    InstrumentLeg_119.insert(LegSecuritySubType_119.getString());
    FIX::LegSecurityType LegSecurityType_119("STRING_1664343281");
    noLegs_0_0.set(LegSecurityType_119);
    InstrumentLeg_119.insert(LegSecurityType_119.getString());
    FIX::LegSide LegSide_119('1');
    noLegs_0_0.set(LegSide_119);
    InstrumentLeg_119.insert(LegSide_119.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_119("STRING_1702742387");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_119);
    InstrumentLeg_119.insert(LegStateOrProvinceOfIssue_119.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_119("EUR");
    noLegs_0_0.set(LegStrikeCurrency_119);
    InstrumentLeg_119.insert(LegStrikeCurrency_119.getString());
    FIX::LegStrikePrice LegStrikePrice_119;
    LegStrikePrice_119.setString("12083311");
    noLegs_0_0.set(LegStrikePrice_119);
    InstrumentLeg_119.insert(LegStrikePrice_119.getString());
    FIX::LegSymbol LegSymbol_119("STRING_568807216");
    noLegs_0_0.set(LegSymbol_119);
    InstrumentLeg_119.insert(LegSymbol_119.getString());
    FIX::LegSymbolSfx LegSymbolSfx_119("STRING_1647400546");
    noLegs_0_0.set(LegSymbolSfx_119);
    InstrumentLeg_119.insert(LegSymbolSfx_119.getString());
    FIX::LegTimeUnit LegTimeUnit_119("STRING_708995721");
    noLegs_0_0.set(LegTimeUnit_119);
    InstrumentLeg_119.insert(LegTimeUnit_119.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_119("STRING_81130028");
    noLegs_0_0.set(LegUnitOfMeasure_119);
    InstrumentLeg_119.insert(LegUnitOfMeasure_119.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_119;
    LegUnitOfMeasureQty_119.setString("18918664");
    noLegs_0_0.set(LegUnitOfMeasureQty_119);
    InstrumentLeg_119.insert(LegUnitOfMeasureQty_119.getString());
    all_values.push_back(InstrumentLeg_119);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_239;
      FIX::LegSecurityAltID LegSecurityAltID_239("STRING_512079547");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_239);
      LegSecAltIDGrp_NoLegSecurityAltID_239.insert(LegSecurityAltID_239.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_239("STRING_967310118");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_239);
      LegSecAltIDGrp_NoLegSecurityAltID_239.insert(LegSecurityAltIDSource_239.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_239);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_240;
      FIX::LegSecurityAltID LegSecurityAltID_240("STRING_1931030933");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_240);
      LegSecAltIDGrp_NoLegSecurityAltID_240.insert(LegSecurityAltID_240.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_240("STRING_2131373560");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_240);
      LegSecAltIDGrp_NoLegSecurityAltID_240.insert(LegSecurityAltIDSource_240.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_240);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_241;
      FIX::LegSecurityAltID LegSecurityAltID_241("STRING_968786641");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_241);
      LegSecAltIDGrp_NoLegSecurityAltID_241.insert(LegSecurityAltID_241.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_241("STRING_26704927");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_241);
      LegSecAltIDGrp_NoLegSecurityAltID_241.insert(LegSecurityAltIDSource_241.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_241);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_74;
  FIX::AttachmentPoint AttachmentPoint_74;
  AttachmentPoint_74.setString("62.430000");
  msg.set(AttachmentPoint_74);
  Instrument_74.insert(AttachmentPoint_74.getString());
  FIX::CFICode CFICode_74("STRING_1725118964");
  msg.set(CFICode_74);
  Instrument_74.insert(CFICode_74.getString());
  FIX::CPProgram CPProgram_74(99);
  msg.set(CPProgram_74);
  Instrument_74.insert(CPProgram_74.getString());
  FIX::CPRegType CPRegType_74("STRING_1479640597");
  msg.set(CPRegType_74);
  Instrument_74.insert(CPRegType_74.getString());
  FIX::CapPrice CapPrice_74;
  CapPrice_74.setString("9628534");
  msg.set(CapPrice_74);
  Instrument_74.insert(CapPrice_74.getString());
  FIX::ContractMultiplier ContractMultiplier_74;
  ContractMultiplier_74.setString("2882286");
  msg.set(ContractMultiplier_74);
  Instrument_74.insert(ContractMultiplier_74.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_74(0);
  msg.set(ContractMultiplierUnit_74);
  Instrument_74.insert(ContractMultiplierUnit_74.getString());
  FIX::ContractSettlMonth ContractSettlMonth_74("MONTHYEAR_1347065309");
  msg.set(ContractSettlMonth_74);
  Instrument_74.insert(ContractSettlMonth_74.getString());
  FIX::CountryOfIssue CountryOfIssue_74("COUNTRY_741364841");
  msg.set(CountryOfIssue_74);
  Instrument_74.insert(CountryOfIssue_74.getString());
  FIX::CouponPaymentDate CouponPaymentDate_74("LOCALMKTDATE_1084045987");
  msg.set(CouponPaymentDate_74);
  Instrument_74.insert(CouponPaymentDate_74.getString());
  FIX::CouponRate CouponRate_74;
  CouponRate_74.setString("53.490000");
  msg.set(CouponRate_74);
  Instrument_74.insert(CouponRate_74.getString());
  FIX::CreditRating CreditRating_74("STRING_1039830568");
  msg.set(CreditRating_74);
  Instrument_74.insert(CreditRating_74.getString());
  FIX::DatedDate DatedDate_74("LOCALMKTDATE_333484426");
  msg.set(DatedDate_74);
  Instrument_74.insert(DatedDate_74.getString());
  FIX::DetachmentPoint DetachmentPoint_74;
  DetachmentPoint_74.setString("49.820000");
  msg.set(DetachmentPoint_74);
  Instrument_74.insert(DetachmentPoint_74.getString());
  FIX::EncodedIssuer EncodedIssuer_74("DATA_249654961");
  msg.set(EncodedIssuer_74);
  Instrument_74.insert(EncodedIssuer_74.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_74(2036226813);
  msg.set(EncodedIssuerLen_74);
  Instrument_74.insert(EncodedIssuerLen_74.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_74("DATA_1679610031");
  msg.set(EncodedSecurityDesc_74);
  Instrument_74.insert(EncodedSecurityDesc_74.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_74(564884709);
  msg.set(EncodedSecurityDescLen_74);
  Instrument_74.insert(EncodedSecurityDescLen_74.getString());
  FIX::ExerciseStyle ExerciseStyle_74(2);
  msg.set(ExerciseStyle_74);
  Instrument_74.insert(ExerciseStyle_74.getString());
  FIX::Factor Factor_74;
  Factor_74.setString("1009336");
  msg.set(Factor_74);
  Instrument_74.insert(Factor_74.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_74(false);
  msg.set(FlexProductEligibilityIndicator_74);
  Instrument_74.insert(FlexProductEligibilityIndicator_74.getString());
  FIX::FlexibleIndicator FlexibleIndicator_74(false);
  msg.set(FlexibleIndicator_74);
  Instrument_74.insert(FlexibleIndicator_74.getString());
  FIX::FloorPrice FloorPrice_74;
  FloorPrice_74.setString("1820636");
  msg.set(FloorPrice_74);
  Instrument_74.insert(FloorPrice_74.getString());
  FIX::FlowScheduleType FlowScheduleType_74(1);
  msg.set(FlowScheduleType_74);
  Instrument_74.insert(FlowScheduleType_74.getString());
  FIX::InstrRegistry InstrRegistry_74("STRING_780135554");
  msg.set(InstrRegistry_74);
  Instrument_74.insert(InstrRegistry_74.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_74('6');
  msg.set(InstrmtAssignmentMethod_74);
  Instrument_74.insert(InstrmtAssignmentMethod_74.getString());
  FIX::InterestAccrualDate InterestAccrualDate_74("LOCALMKTDATE_776494546");
  msg.set(InterestAccrualDate_74);
  Instrument_74.insert(InterestAccrualDate_74.getString());
  FIX::IssueDate IssueDate_74("LOCALMKTDATE_563682839");
  msg.set(IssueDate_74);
  Instrument_74.insert(IssueDate_74.getString());
  FIX::Issuer Issuer_74("STRING_678033088");
  msg.set(Issuer_74);
  Instrument_74.insert(Issuer_74.getString());
  FIX::ListMethod ListMethod_74(1);
  msg.set(ListMethod_74);
  Instrument_74.insert(ListMethod_74.getString());
  FIX::LocaleOfIssue LocaleOfIssue_74("STRING_590387767");
  msg.set(LocaleOfIssue_74);
  Instrument_74.insert(LocaleOfIssue_74.getString());
  FIX::MaturityDate MaturityDate_74("LOCALMKTDATE_125745683");
  msg.set(MaturityDate_74);
  Instrument_74.insert(MaturityDate_74.getString());
  FIX::MaturityMonthYear MaturityMonthYear_74("MONTHYEAR_1322916503");
  msg.set(MaturityMonthYear_74);
  Instrument_74.insert(MaturityMonthYear_74.getString());
  FIX::MaturityTime MaturityTime_74("TZTIMEONLY_20273359");
  msg.set(MaturityTime_74);
  Instrument_74.insert(MaturityTime_74.getString());
  FIX::MinPriceIncrement MinPriceIncrement_74;
  MinPriceIncrement_74.setString("16053862");
  msg.set(MinPriceIncrement_74);
  Instrument_74.insert(MinPriceIncrement_74.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_74;
  MinPriceIncrementAmount_74.setString("1382862");
  msg.set(MinPriceIncrementAmount_74);
  Instrument_74.insert(MinPriceIncrementAmount_74.getString());
  FIX::NTPositionLimit NTPositionLimit_74(308502016);
  msg.set(NTPositionLimit_74);
  Instrument_74.insert(NTPositionLimit_74.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_74;
  NotionalPercentageOutstanding_74.setString("71.750000");
  msg.set(NotionalPercentageOutstanding_74);
  Instrument_74.insert(NotionalPercentageOutstanding_74.getString());
  FIX::OptAttribute OptAttribute_74('1');
  msg.set(OptAttribute_74);
  Instrument_74.insert(OptAttribute_74.getString());
  FIX::OptPayoutAmount OptPayoutAmount_74;
  OptPayoutAmount_74.setString("10498668");
  msg.set(OptPayoutAmount_74);
  Instrument_74.insert(OptPayoutAmount_74.getString());
  FIX::OptPayoutType OptPayoutType_74(2);
  msg.set(OptPayoutType_74);
  Instrument_74.insert(OptPayoutType_74.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_74;
  OriginalNotionalPercentageOutstanding_74.setString("33.040000");
  msg.set(OriginalNotionalPercentageOutstanding_74);
  Instrument_74.insert(OriginalNotionalPercentageOutstanding_74.getString());
  FIX::Pool Pool_74("STRING_2089697426");
  msg.set(Pool_74);
  Instrument_74.insert(Pool_74.getString());
  FIX::PositionLimit PositionLimit_74(714003941);
  msg.set(PositionLimit_74);
  Instrument_74.insert(PositionLimit_74.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_74("STRING_INT");
  msg.set(PriceQuoteMethod_74);
  Instrument_74.insert(PriceQuoteMethod_74.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_74("STRING_191868739");
  msg.set(PriceUnitOfMeasure_74);
  Instrument_74.insert(PriceUnitOfMeasure_74.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_74;
  PriceUnitOfMeasureQty_74.setString("6027471");
  msg.set(PriceUnitOfMeasureQty_74);
  Instrument_74.insert(PriceUnitOfMeasureQty_74.getString());
  FIX::Product Product_76(1);
  msg.set(Product_76);
  Instrument_74.insert(Product_76.getString());
  FIX::ProductComplex ProductComplex_74("STRING_756753448");
  msg.set(ProductComplex_74);
  Instrument_74.insert(ProductComplex_74.getString());
  FIX::PutOrCall PutOrCall_74(1);
  msg.set(PutOrCall_74);
  Instrument_74.insert(PutOrCall_74.getString());
  FIX::RedemptionDate RedemptionDate_74("LOCALMKTDATE_1120778270");
  msg.set(RedemptionDate_74);
  Instrument_74.insert(RedemptionDate_74.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_74("STRING_821555055");
  msg.set(RepoCollateralSecurityType_74);
  Instrument_74.insert(RepoCollateralSecurityType_74.getString());
  FIX::RepurchaseRate RepurchaseRate_74;
  RepurchaseRate_74.setString("78.840000");
  msg.set(RepurchaseRate_74);
  Instrument_74.insert(RepurchaseRate_74.getString());
  FIX::RepurchaseTerm RepurchaseTerm_74(1302841898);
  msg.set(RepurchaseTerm_74);
  Instrument_74.insert(RepurchaseTerm_74.getString());
  FIX::RestructuringType RestructuringType_74("STRING_XR");
  msg.set(RestructuringType_74);
  Instrument_74.insert(RestructuringType_74.getString());
  FIX::SecurityDesc SecurityDesc_74("STRING_2138543438");
  msg.set(SecurityDesc_74);
  Instrument_74.insert(SecurityDesc_74.getString());
  FIX::SecurityExchange SecurityExchange_74("EXCHANGE_1996985073");
  msg.set(SecurityExchange_74);
  Instrument_74.insert(SecurityExchange_74.getString());
  FIX::SecurityGroup SecurityGroup_74("STRING_1407234029");
  msg.set(SecurityGroup_74);
  Instrument_74.insert(SecurityGroup_74.getString());
  FIX::SecurityID SecurityID_74("STRING_554742630");
  msg.set(SecurityID_74);
  Instrument_74.insert(SecurityID_74.getString());
  FIX::SecurityIDSource SecurityIDSource_74("STRING_C");
  msg.set(SecurityIDSource_74);
  Instrument_74.insert(SecurityIDSource_74.getString());
  FIX::SecurityStatus SecurityStatus_74("STRING_2");
  msg.set(SecurityStatus_74);
  Instrument_74.insert(SecurityStatus_74.getString());
  FIX::SecuritySubType SecuritySubType_75("STRING_1145130397");
  msg.set(SecuritySubType_75);
  Instrument_74.insert(SecuritySubType_75.getString());
  FIX::SecurityType SecurityType_76("STRING_SPCLT");
  msg.set(SecurityType_76);
  Instrument_74.insert(SecurityType_76.getString());
  FIX::Seniority Seniority_74("STRING_SD");
  msg.set(Seniority_74);
  Instrument_74.insert(Seniority_74.getString());
  FIX::SettlMethod SettlMethod_74('C');
  msg.set(SettlMethod_74);
  Instrument_74.insert(SettlMethod_74.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_74("STRING_111182829");
  msg.set(SettleOnOpenFlag_74);
  Instrument_74.insert(SettleOnOpenFlag_74.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_74("STRING_318750718");
  msg.set(StateOrProvinceOfIssue_74);
  Instrument_74.insert(StateOrProvinceOfIssue_74.getString());
  FIX::StrikeCurrency StrikeCurrency_74("CAN");
  msg.set(StrikeCurrency_74);
  Instrument_74.insert(StrikeCurrency_74.getString());
  FIX::StrikeMultiplier StrikeMultiplier_74;
  StrikeMultiplier_74.setString("18041023");
  msg.set(StrikeMultiplier_74);
  Instrument_74.insert(StrikeMultiplier_74.getString());
  FIX::StrikePrice StrikePrice_74;
  StrikePrice_74.setString("3762889");
  msg.set(StrikePrice_74);
  Instrument_74.insert(StrikePrice_74.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_74(1);
  msg.set(StrikePriceBoundaryMethod_74);
  Instrument_74.insert(StrikePriceBoundaryMethod_74.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_74;
  StrikePriceBoundaryPrecision_74.setString("19.770000");
  msg.set(StrikePriceBoundaryPrecision_74);
  Instrument_74.insert(StrikePriceBoundaryPrecision_74.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_74(1);
  msg.set(StrikePriceDeterminationMethod_74);
  Instrument_74.insert(StrikePriceDeterminationMethod_74.getString());
  FIX::StrikeValue StrikeValue_74;
  StrikeValue_74.setString("5021798");
  msg.set(StrikeValue_74);
  Instrument_74.insert(StrikeValue_74.getString());
  FIX::Symbol Symbol_74("STRING_1798700264");
  msg.set(Symbol_74);
  Instrument_74.insert(Symbol_74.getString());
  FIX::SymbolSfx SymbolSfx_74("STRING_WI");
  msg.set(SymbolSfx_74);
  Instrument_74.insert(SymbolSfx_74.getString());
  FIX::TimeUnit TimeUnit_74("STRING_Yr");
  msg.set(TimeUnit_74);
  Instrument_74.insert(TimeUnit_74.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_74(3);
  msg.set(UnderlyingPriceDeterminationMethod_74);
  Instrument_74.insert(UnderlyingPriceDeterminationMethod_74.getString());
  FIX::UnitOfMeasure UnitOfMeasure_74("STRING_USD");
  msg.set(UnitOfMeasure_74);
  Instrument_74.insert(UnitOfMeasure_74.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_74;
  UnitOfMeasureQty_74.setString("6572647");
  msg.set(UnitOfMeasureQty_74);
  Instrument_74.insert(UnitOfMeasureQty_74.getString());
  FIX::ValuationMethod ValuationMethod_74("STRING_FUT");
  msg.set(ValuationMethod_74);
  Instrument_74.insert(ValuationMethod_74.getString());
  all_values.push_back(Instrument_74);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinitionRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_142;
    FIX::ComplexEventCondition ComplexEventCondition_142(2);
    noComplexEvents_0_0.set(ComplexEventCondition_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventCondition_142.getString());
    FIX::ComplexEventPrice ComplexEventPrice_142;
    ComplexEventPrice_142.setString("9471978");
    noComplexEvents_0_0.set(ComplexEventPrice_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventPrice_142.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_142(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventPriceBoundaryMethod_142.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_142;
    ComplexEventPriceBoundaryPrecision_142.setString("24.060000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventPriceBoundaryPrecision_142.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_142(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventPriceTimeType_142.getString());
    FIX::ComplexEventType ComplexEventType_142(2);
    noComplexEvents_0_0.set(ComplexEventType_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventType_142.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_142;
    ComplexOptPayoutAmount_142.setString("4139913");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexOptPayoutAmount_142.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_142);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_292;
      FIX::ComplexEventEndDate ComplexEventEndDate_292(FIX::UTCTIMESTAMP(17, 42, 54, 1, 4, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_292);
      ComplexEventDates_NoComplexEventDates_292.insert(ComplexEventEndDate_292.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_292(FIX::UTCTIMESTAMP(0, 46, 0, 20, 8, 2002));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_292);
      ComplexEventDates_NoComplexEventDates_292.insert(ComplexEventStartDate_292.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_292);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_592;
        FIX::ComplexEventEndTime ComplexEventEndTime_592(FIX::UTCTIMEONLY(11, 46, 5));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_592);
        ComplexEventTimes_NoComplexEventTimes_592.insert(ComplexEventEndTime_592.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_592(FIX::UTCTIMEONLY(10, 33, 15));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_592);
        ComplexEventTimes_NoComplexEventTimes_592.insert(ComplexEventStartTime_592.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_592);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_593;
        FIX::ComplexEventEndTime ComplexEventEndTime_593(FIX::UTCTIMEONLY(7, 14, 23));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_593);
        ComplexEventTimes_NoComplexEventTimes_593.insert(ComplexEventEndTime_593.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_593(FIX::UTCTIMEONLY(22, 51, 20));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_593);
        ComplexEventTimes_NoComplexEventTimes_593.insert(ComplexEventStartTime_593.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_593);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_594;
        FIX::ComplexEventEndTime ComplexEventEndTime_594(FIX::UTCTIMEONLY(12, 2, 50));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_594);
        ComplexEventTimes_NoComplexEventTimes_594.insert(ComplexEventEndTime_594.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_594(FIX::UTCTIMEONLY(9, 42, 40));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_594);
        ComplexEventTimes_NoComplexEventTimes_594.insert(ComplexEventStartTime_594.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_594);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_293;
      FIX::ComplexEventEndDate ComplexEventEndDate_293(FIX::UTCTIMESTAMP(20, 40, 58, 4, 5, 2004));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_293);
      ComplexEventDates_NoComplexEventDates_293.insert(ComplexEventEndDate_293.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_293(FIX::UTCTIMESTAMP(15, 51, 13, 15, 6, 2004));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_293);
      ComplexEventDates_NoComplexEventDates_293.insert(ComplexEventStartDate_293.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_293);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_595;
        FIX::ComplexEventEndTime ComplexEventEndTime_595(FIX::UTCTIMEONLY(18, 12, 22));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_595);
        ComplexEventTimes_NoComplexEventTimes_595.insert(ComplexEventEndTime_595.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_595(FIX::UTCTIMEONLY(10, 13, 33));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_595);
        ComplexEventTimes_NoComplexEventTimes_595.insert(ComplexEventStartTime_595.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_595);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_143;
    FIX::ComplexEventCondition ComplexEventCondition_143(1);
    noComplexEvents_0_1.set(ComplexEventCondition_143);
    ComplexEvents_NoComplexEvents_143.insert(ComplexEventCondition_143.getString());
    FIX::ComplexEventPrice ComplexEventPrice_143;
    ComplexEventPrice_143.setString("6861062");
    noComplexEvents_0_1.set(ComplexEventPrice_143);
    ComplexEvents_NoComplexEvents_143.insert(ComplexEventPrice_143.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_143(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_143);
    ComplexEvents_NoComplexEvents_143.insert(ComplexEventPriceBoundaryMethod_143.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_143;
    ComplexEventPriceBoundaryPrecision_143.setString("43.520000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_143);
    ComplexEvents_NoComplexEvents_143.insert(ComplexEventPriceBoundaryPrecision_143.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_143(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_143);
    ComplexEvents_NoComplexEvents_143.insert(ComplexEventPriceTimeType_143.getString());
    FIX::ComplexEventType ComplexEventType_143(7);
    noComplexEvents_0_1.set(ComplexEventType_143);
    ComplexEvents_NoComplexEvents_143.insert(ComplexEventType_143.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_143;
    ComplexOptPayoutAmount_143.setString("19961406");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_143);
    ComplexEvents_NoComplexEvents_143.insert(ComplexOptPayoutAmount_143.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_143);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_294;
      FIX::ComplexEventEndDate ComplexEventEndDate_294(FIX::UTCTIMESTAMP(3, 40, 29, 3, 9, 2009));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_294);
      ComplexEventDates_NoComplexEventDates_294.insert(ComplexEventEndDate_294.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_294(FIX::UTCTIMESTAMP(15, 16, 52, 22, 10, 2014));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_294);
      ComplexEventDates_NoComplexEventDates_294.insert(ComplexEventStartDate_294.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_294);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_596;
        FIX::ComplexEventEndTime ComplexEventEndTime_596(FIX::UTCTIMEONLY(0, 16, 26));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_596);
        ComplexEventTimes_NoComplexEventTimes_596.insert(ComplexEventEndTime_596.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_596(FIX::UTCTIMEONLY(7, 31, 34));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_596);
        ComplexEventTimes_NoComplexEventTimes_596.insert(ComplexEventStartTime_596.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_596);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_597;
        FIX::ComplexEventEndTime ComplexEventEndTime_597(FIX::UTCTIMEONLY(17, 1, 10));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_597);
        ComplexEventTimes_NoComplexEventTimes_597.insert(ComplexEventEndTime_597.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_597(FIX::UTCTIMEONLY(18, 17, 53));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_597);
        ComplexEventTimes_NoComplexEventTimes_597.insert(ComplexEventStartTime_597.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_597);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_295;
      FIX::ComplexEventEndDate ComplexEventEndDate_295(FIX::UTCTIMESTAMP(8, 25, 57, 12, 2, 2017));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_295);
      ComplexEventDates_NoComplexEventDates_295.insert(ComplexEventEndDate_295.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_295(FIX::UTCTIMESTAMP(17, 39, 39, 15, 6, 2009));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_295);
      ComplexEventDates_NoComplexEventDates_295.insert(ComplexEventStartDate_295.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_295);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_598;
        FIX::ComplexEventEndTime ComplexEventEndTime_598(FIX::UTCTIMEONLY(14, 16, 51));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_598);
        ComplexEventTimes_NoComplexEventTimes_598.insert(ComplexEventEndTime_598.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_598(FIX::UTCTIMEONLY(11, 14, 18));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_598);
        ComplexEventTimes_NoComplexEventTimes_598.insert(ComplexEventStartTime_598.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_598);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_599;
        FIX::ComplexEventEndTime ComplexEventEndTime_599(FIX::UTCTIMEONLY(20, 11, 51));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_599);
        ComplexEventTimes_NoComplexEventTimes_599.insert(ComplexEventEndTime_599.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_599(FIX::UTCTIMEONLY(5, 8, 55));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_599);
        ComplexEventTimes_NoComplexEventTimes_599.insert(ComplexEventStartTime_599.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_599);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_600;
        FIX::ComplexEventEndTime ComplexEventEndTime_600(FIX::UTCTIMEONLY(4, 20, 35));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_600);
        ComplexEventTimes_NoComplexEventTimes_600.insert(ComplexEventEndTime_600.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_600(FIX::UTCTIMEONLY(10, 50, 31));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_600);
        ComplexEventTimes_NoComplexEventTimes_600.insert(ComplexEventStartTime_600.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_600);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_296;
      FIX::ComplexEventEndDate ComplexEventEndDate_296(FIX::UTCTIMESTAMP(22, 10, 18, 7, 1, 2000));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_296);
      ComplexEventDates_NoComplexEventDates_296.insert(ComplexEventEndDate_296.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_296(FIX::UTCTIMESTAMP(18, 35, 7, 17, 3, 2013));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_296);
      ComplexEventDates_NoComplexEventDates_296.insert(ComplexEventStartDate_296.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_296);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_601;
        FIX::ComplexEventEndTime ComplexEventEndTime_601(FIX::UTCTIMEONLY(1, 7, 10));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_601);
        ComplexEventTimes_NoComplexEventTimes_601.insert(ComplexEventEndTime_601.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_601(FIX::UTCTIMEONLY(4, 10, 42));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_601);
        ComplexEventTimes_NoComplexEventTimes_601.insert(ComplexEventStartTime_601.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_601);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_602;
        FIX::ComplexEventEndTime ComplexEventEndTime_602(FIX::UTCTIMEONLY(19, 54, 30));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_602);
        ComplexEventTimes_NoComplexEventTimes_602.insert(ComplexEventEndTime_602.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_602(FIX::UTCTIMEONLY(4, 12, 19));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_602);
        ComplexEventTimes_NoComplexEventTimes_602.insert(ComplexEventStartTime_602.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_602);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_144;
    FIX::ComplexEventCondition ComplexEventCondition_144(2);
    noComplexEvents_0_2.set(ComplexEventCondition_144);
    ComplexEvents_NoComplexEvents_144.insert(ComplexEventCondition_144.getString());
    FIX::ComplexEventPrice ComplexEventPrice_144;
    ComplexEventPrice_144.setString("6952483");
    noComplexEvents_0_2.set(ComplexEventPrice_144);
    ComplexEvents_NoComplexEvents_144.insert(ComplexEventPrice_144.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_144(2);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_144);
    ComplexEvents_NoComplexEvents_144.insert(ComplexEventPriceBoundaryMethod_144.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_144;
    ComplexEventPriceBoundaryPrecision_144.setString("33.620000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_144);
    ComplexEvents_NoComplexEvents_144.insert(ComplexEventPriceBoundaryPrecision_144.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_144(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_144);
    ComplexEvents_NoComplexEvents_144.insert(ComplexEventPriceTimeType_144.getString());
    FIX::ComplexEventType ComplexEventType_144(2);
    noComplexEvents_0_2.set(ComplexEventType_144);
    ComplexEvents_NoComplexEvents_144.insert(ComplexEventType_144.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_144;
    ComplexOptPayoutAmount_144.setString("15784573");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_144);
    ComplexEvents_NoComplexEvents_144.insert(ComplexOptPayoutAmount_144.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_144);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_297;
      FIX::ComplexEventEndDate ComplexEventEndDate_297(FIX::UTCTIMESTAMP(19, 40, 57, 14, 11, 2010));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_297);
      ComplexEventDates_NoComplexEventDates_297.insert(ComplexEventEndDate_297.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_297(FIX::UTCTIMESTAMP(11, 51, 0, 22, 9, 2016));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_297);
      ComplexEventDates_NoComplexEventDates_297.insert(ComplexEventStartDate_297.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_297);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_603;
        FIX::ComplexEventEndTime ComplexEventEndTime_603(FIX::UTCTIMEONLY(5, 31, 24));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_603);
        ComplexEventTimes_NoComplexEventTimes_603.insert(ComplexEventEndTime_603.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_603(FIX::UTCTIMEONLY(15, 37, 4));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_603);
        ComplexEventTimes_NoComplexEventTimes_603.insert(ComplexEventStartTime_603.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_603);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_298;
      FIX::ComplexEventEndDate ComplexEventEndDate_298(FIX::UTCTIMESTAMP(3, 25, 53, 21, 8, 2007));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_298);
      ComplexEventDates_NoComplexEventDates_298.insert(ComplexEventEndDate_298.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_298(FIX::UTCTIMESTAMP(14, 33, 43, 7, 12, 2011));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_298);
      ComplexEventDates_NoComplexEventDates_298.insert(ComplexEventStartDate_298.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_298);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_604;
        FIX::ComplexEventEndTime ComplexEventEndTime_604(FIX::UTCTIMEONLY(8, 27, 0));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_604);
        ComplexEventTimes_NoComplexEventTimes_604.insert(ComplexEventEndTime_604.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_604(FIX::UTCTIMEONLY(15, 11, 15));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_604);
        ComplexEventTimes_NoComplexEventTimes_604.insert(ComplexEventStartTime_604.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_604);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_605;
        FIX::ComplexEventEndTime ComplexEventEndTime_605(FIX::UTCTIMEONLY(4, 46, 46));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_605);
        ComplexEventTimes_NoComplexEventTimes_605.insert(ComplexEventEndTime_605.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_605(FIX::UTCTIMEONLY(18, 15, 57));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_605);
        ComplexEventTimes_NoComplexEventTimes_605.insert(ComplexEventStartTime_605.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_605);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_606;
        FIX::ComplexEventEndTime ComplexEventEndTime_606(FIX::UTCTIMEONLY(19, 23, 30));
        noComplexEventTimes_2_1_2_2.set(ComplexEventEndTime_606);
        ComplexEventTimes_NoComplexEventTimes_606.insert(ComplexEventEndTime_606.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_606(FIX::UTCTIMEONLY(10, 55, 42));
        noComplexEventTimes_2_1_2_2.set(ComplexEventStartTime_606);
        ComplexEventTimes_NoComplexEventTimes_606.insert(ComplexEventStartTime_606.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_606);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_299;
      FIX::ComplexEventEndDate ComplexEventEndDate_299(FIX::UTCTIMESTAMP(8, 17, 44, 15, 3, 2014));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_299);
      ComplexEventDates_NoComplexEventDates_299.insert(ComplexEventEndDate_299.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_299(FIX::UTCTIMESTAMP(23, 47, 16, 18, 4, 2009));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_299);
      ComplexEventDates_NoComplexEventDates_299.insert(ComplexEventStartDate_299.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_299);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_607;
        FIX::ComplexEventEndTime ComplexEventEndTime_607(FIX::UTCTIMEONLY(0, 56, 15));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_607);
        ComplexEventTimes_NoComplexEventTimes_607.insert(ComplexEventEndTime_607.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_607(FIX::UTCTIMEONLY(2, 31, 27));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_607);
        ComplexEventTimes_NoComplexEventTimes_607.insert(ComplexEventStartTime_607.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_607);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_608;
        FIX::ComplexEventEndTime ComplexEventEndTime_608(FIX::UTCTIMEONLY(6, 42, 1));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_608);
        ComplexEventTimes_NoComplexEventTimes_608.insert(ComplexEventEndTime_608.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_608(FIX::UTCTIMEONLY(16, 48, 56));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_608);
        ComplexEventTimes_NoComplexEventTimes_608.insert(ComplexEventStartTime_608.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_608);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_609;
        FIX::ComplexEventEndTime ComplexEventEndTime_609(FIX::UTCTIMEONLY(13, 14, 8));
        noComplexEventTimes_2_2_2_2.set(ComplexEventEndTime_609);
        ComplexEventTimes_NoComplexEventTimes_609.insert(ComplexEventEndTime_609.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_609(FIX::UTCTIMEONLY(4, 28, 40));
        noComplexEventTimes_2_2_2_2.set(ComplexEventStartTime_609);
        ComplexEventTimes_NoComplexEventTimes_609.insert(ComplexEventStartTime_609.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_609);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityDefinitionRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_146;
    FIX::EventDate EventDate_146("LOCALMKTDATE_2044470256");
    noEvents_0_0.set(EventDate_146);
    EvntGrp_NoEvents_146.insert(EventDate_146.getString());
    FIX::EventPx EventPx_146;
    EventPx_146.setString("11896195");
    noEvents_0_0.set(EventPx_146);
    EvntGrp_NoEvents_146.insert(EventPx_146.getString());
    FIX::EventText EventText_146("STRING_921786609");
    noEvents_0_0.set(EventText_146);
    EvntGrp_NoEvents_146.insert(EventText_146.getString());
    FIX::EventTime EventTime_146(FIX::UTCTIMESTAMP(4, 27, 52, 8, 4, 2007));
    noEvents_0_0.set(EventTime_146);
    EvntGrp_NoEvents_146.insert(EventTime_146.getString());
    FIX::EventType EventType_146(15);
    noEvents_0_0.set(EventType_146);
    EvntGrp_NoEvents_146.insert(EventType_146.getString());
    all_values.push_back(EvntGrp_NoEvents_146);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_147;
    FIX::EventDate EventDate_147("LOCALMKTDATE_1527722657");
    noEvents_0_1.set(EventDate_147);
    EvntGrp_NoEvents_147.insert(EventDate_147.getString());
    FIX::EventPx EventPx_147;
    EventPx_147.setString("1782281");
    noEvents_0_1.set(EventPx_147);
    EvntGrp_NoEvents_147.insert(EventPx_147.getString());
    FIX::EventText EventText_147("STRING_1269463781");
    noEvents_0_1.set(EventText_147);
    EvntGrp_NoEvents_147.insert(EventText_147.getString());
    FIX::EventTime EventTime_147(FIX::UTCTIMESTAMP(12, 23, 41, 18, 8, 2005));
    noEvents_0_1.set(EventTime_147);
    EvntGrp_NoEvents_147.insert(EventTime_147.getString());
    FIX::EventType EventType_147(4);
    noEvents_0_1.set(EventType_147);
    EvntGrp_NoEvents_147.insert(EventType_147.getString());
    all_values.push_back(EvntGrp_NoEvents_147);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_144;
    FIX::InstrumentPartyID InstrumentPartyID_144("STRING_1383152610");
    noInstrumentParties_0_0.set(InstrumentPartyID_144);
    InstrumentParties_NoInstrumentParties_144.insert(InstrumentPartyID_144.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_144('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_144);
    InstrumentParties_NoInstrumentParties_144.insert(InstrumentPartyIDSource_144.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_144(739788208);
    noInstrumentParties_0_0.set(InstrumentPartyRole_144);
    InstrumentParties_NoInstrumentParties_144.insert(InstrumentPartyRole_144.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_144);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292;
      FIX::InstrumentPartySubID InstrumentPartySubID_292("STRING_1331419881");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_292);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292.insert(InstrumentPartySubID_292.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_292(1454933156);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_292);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292.insert(InstrumentPartySubIDType_292.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293;
      FIX::InstrumentPartySubID InstrumentPartySubID_293("STRING_943384827");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_293);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293.insert(InstrumentPartySubID_293.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_293(1500233189);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_293);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293.insert(InstrumentPartySubIDType_293.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294;
      FIX::InstrumentPartySubID InstrumentPartySubID_294("STRING_1351919764");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_294);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294.insert(InstrumentPartySubID_294.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_294(2133004404);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_294);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294.insert(InstrumentPartySubIDType_294.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_145;
    FIX::InstrumentPartyID InstrumentPartyID_145("STRING_274536150");
    noInstrumentParties_0_1.set(InstrumentPartyID_145);
    InstrumentParties_NoInstrumentParties_145.insert(InstrumentPartyID_145.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_145('5');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_145);
    InstrumentParties_NoInstrumentParties_145.insert(InstrumentPartyIDSource_145.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_145(786656313);
    noInstrumentParties_0_1.set(InstrumentPartyRole_145);
    InstrumentParties_NoInstrumentParties_145.insert(InstrumentPartyRole_145.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_145);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295;
      FIX::InstrumentPartySubID InstrumentPartySubID_295("STRING_1021564751");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_295);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295.insert(InstrumentPartySubID_295.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_295(847221917);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_295);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295.insert(InstrumentPartySubIDType_295.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296;
      FIX::InstrumentPartySubID InstrumentPartySubID_296("STRING_498272164");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_296);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296.insert(InstrumentPartySubID_296.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_296(1903970299);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_296);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296.insert(InstrumentPartySubIDType_296.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinitionRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_159;
    FIX::SecurityAltID SecurityAltID_159("STRING_2025994821");
    noSecurityAltID_0_0.set(SecurityAltID_159);
    SecAltIDGrp_NoSecurityAltID_159.insert(SecurityAltID_159.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_159("STRING_2082198409");
    noSecurityAltID_0_0.set(SecurityAltIDSource_159);
    SecAltIDGrp_NoSecurityAltID_159.insert(SecurityAltIDSource_159.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_159);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_160;
    FIX::SecurityAltID SecurityAltID_160("STRING_622925824");
    noSecurityAltID_0_1.set(SecurityAltID_160);
    SecAltIDGrp_NoSecurityAltID_160.insert(SecurityAltID_160.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_160("STRING_1132586761");
    noSecurityAltID_0_1.set(SecurityAltIDSource_160);
    SecAltIDGrp_NoSecurityAltID_160.insert(SecurityAltIDSource_160.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_160);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_148;
  FIX::SecurityXML SecurityXML_149("XMLDATA_856274694");
  msg.set(SecurityXML_149);
  FIX::SecurityXMLLen SecurityXMLLen_74(351511459);
  msg.set(SecurityXMLLen_74);
  FIX::SecurityXMLSchema SecurityXMLSchema_74("STRING_1522684242");
  msg.set(SecurityXMLSchema_74);
  SecurityXML_148.insert(SecurityXMLSchema_74.getString());
  all_values.push_back(SecurityXML_148);

  // InstrumentExtension
  multiset<string> InstrumentExtension_10;
  FIX::DeliveryForm DeliveryForm_10(1);
  msg.set(DeliveryForm_10);
  InstrumentExtension_10.insert(DeliveryForm_10.getString());
  FIX::PctAtRisk PctAtRisk_10;
  PctAtRisk_10.setString("32.540000");
  msg.set(PctAtRisk_10);
  InstrumentExtension_10.insert(PctAtRisk_10.getString());
  all_values.push_back(InstrumentExtension_10);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_20;
    FIX::InstrAttribType InstrAttribType_20(14);
    noInstrAttrib_0_0.set(InstrAttribType_20);
    AttrbGrp_NoInstrAttrib_20.insert(InstrAttribType_20.getString());
    FIX::InstrAttribValue InstrAttribValue_20("STRING_2026870354");
    noInstrAttrib_0_0.set(InstrAttribValue_20);
    AttrbGrp_NoInstrAttrib_20.insert(InstrAttribValue_20.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_20);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_21;
    FIX::InstrAttribType InstrAttribType_21(5);
    noInstrAttrib_0_1.set(InstrAttribType_21);
    AttrbGrp_NoInstrAttrib_21.insert(InstrAttribType_21.getString());
    FIX::InstrAttribValue InstrAttribValue_21("STRING_9442444");
    noInstrAttrib_0_1.set(InstrAttribValue_21);
    AttrbGrp_NoInstrAttrib_21.insert(InstrAttribValue_21.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_21);

    msg.addGroup(noInstrAttrib_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_28;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_28("EUR");
  msg.set(BenchmarkCurveCurrency_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkCurveCurrency_28.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_28("STRING_Euribor");
  msg.set(BenchmarkCurveName_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkCurveName_28.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_28("STRING_2074108070");
  msg.set(BenchmarkCurvePoint_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkCurvePoint_28.getString());
  FIX::BenchmarkPrice BenchmarkPrice_28;
  BenchmarkPrice_28.setString("11649671");
  msg.set(BenchmarkPrice_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkPrice_28.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_28(693611867);
  msg.set(BenchmarkPriceType_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkPriceType_28.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_28("STRING_1278544187");
  msg.set(BenchmarkSecurityID_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkSecurityID_28.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_28("STRING_1150487937");
  msg.set(BenchmarkSecurityIDSource_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkSecurityIDSource_28.getString());
  FIX::Spread Spread_28;
  Spread_28.setString("9681480");
  msg.set(Spread_28);
  SpreadOrBenchmarkCurveData_28.insert(Spread_28.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_28);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinitionRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_39;
    FIX::StipulationType StipulationType_39("STRING_ISSUE");
    noStipulations_0_0.set(StipulationType_39);
    Stipulations_NoStipulations_39.insert(StipulationType_39.getString());
    FIX::StipulationValue StipulationValue_39("STRING_1075442167");
    noStipulations_0_0.set(StipulationValue_39);
    Stipulations_NoStipulations_39.insert(StipulationValue_39.getString());
    all_values.push_back(Stipulations_NoStipulations_39);

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinitionRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_113;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_113("DATA_636882520");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_113);
    UnderlyingInstrument_113.insert(EncodedUnderlyingIssuer_113.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_113(1573714331);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_113);
    UnderlyingInstrument_113.insert(EncodedUnderlyingIssuerLen_113.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_113("DATA_464677941");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_113);
    UnderlyingInstrument_113.insert(EncodedUnderlyingSecurityDesc_113.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_113(2137828211);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_113);
    UnderlyingInstrument_113.insert(EncodedUnderlyingSecurityDescLen_113.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_113;
    UnderlyingAdjustedQuantity_113.setString("14522255");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_113);
    UnderlyingInstrument_113.insert(UnderlyingAdjustedQuantity_113.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_113;
    UnderlyingAllocationPercent_113.setString("27.020000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_113);
    UnderlyingInstrument_113.insert(UnderlyingAllocationPercent_113.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_113;
    UnderlyingAttachmentPoint_113.setString("3.880000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_113);
    UnderlyingInstrument_113.insert(UnderlyingAttachmentPoint_113.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_113("STRING_437328618");
    noUnderlyings_0_0.set(UnderlyingCFICode_113);
    UnderlyingInstrument_113.insert(UnderlyingCFICode_113.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_113("STRING_1255667396");
    noUnderlyings_0_0.set(UnderlyingCPProgram_113);
    UnderlyingInstrument_113.insert(UnderlyingCPProgram_113.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_113("STRING_964781847");
    noUnderlyings_0_0.set(UnderlyingCPRegType_113);
    UnderlyingInstrument_113.insert(UnderlyingCPRegType_113.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_113;
    UnderlyingCapValue_113.setString("19600128");
    noUnderlyings_0_0.set(UnderlyingCapValue_113);
    UnderlyingInstrument_113.insert(UnderlyingCapValue_113.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_113;
    UnderlyingCashAmount_113.setString("2674438");
    noUnderlyings_0_0.set(UnderlyingCashAmount_113);
    UnderlyingInstrument_113.insert(UnderlyingCashAmount_113.getString());
    FIX::UnderlyingCashType UnderlyingCashType_113("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_113);
    UnderlyingInstrument_113.insert(UnderlyingCashType_113.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_113;
    UnderlyingContractMultiplier_113.setString("5220361");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_113);
    UnderlyingInstrument_113.insert(UnderlyingContractMultiplier_113.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_113(238570964);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_113);
    UnderlyingInstrument_113.insert(UnderlyingContractMultiplierUnit_113.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_113("COUNTRY_132548160");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_113);
    UnderlyingInstrument_113.insert(UnderlyingCountryOfIssue_113.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_113("LOCALMKTDATE_467211983");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_113);
    UnderlyingInstrument_113.insert(UnderlyingCouponPaymentDate_113.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_113;
    UnderlyingCouponRate_113.setString("34.090000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_113);
    UnderlyingInstrument_113.insert(UnderlyingCouponRate_113.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_113("STRING_751723074");
    noUnderlyings_0_0.set(UnderlyingCreditRating_113);
    UnderlyingInstrument_113.insert(UnderlyingCreditRating_113.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_113("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_113);
    UnderlyingInstrument_113.insert(UnderlyingCurrency_113.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_113;
    UnderlyingCurrentValue_113.setString("6783474");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_113);
    UnderlyingInstrument_113.insert(UnderlyingCurrentValue_113.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_113;
    UnderlyingDetachmentPoint_113.setString("15.180000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_113);
    UnderlyingInstrument_113.insert(UnderlyingDetachmentPoint_113.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_113;
    UnderlyingDirtyPrice_113.setString("1350039");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_113);
    UnderlyingInstrument_113.insert(UnderlyingDirtyPrice_113.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_113;
    UnderlyingEndPrice_113.setString("19568916");
    noUnderlyings_0_0.set(UnderlyingEndPrice_113);
    UnderlyingInstrument_113.insert(UnderlyingEndPrice_113.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_113;
    UnderlyingEndValue_113.setString("8567658");
    noUnderlyings_0_0.set(UnderlyingEndValue_113);
    UnderlyingInstrument_113.insert(UnderlyingEndValue_113.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_113(1103151971);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_113);
    UnderlyingInstrument_113.insert(UnderlyingExerciseStyle_113.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_113;
    UnderlyingFXRate_113.setString("16435182");
    noUnderlyings_0_0.set(UnderlyingFXRate_113);
    UnderlyingInstrument_113.insert(UnderlyingFXRate_113.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_113('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_113);
    UnderlyingInstrument_113.insert(UnderlyingFXRateCalc_113.getString());
    FIX::UnderlyingFactor UnderlyingFactor_113;
    UnderlyingFactor_113.setString("311104");
    noUnderlyings_0_0.set(UnderlyingFactor_113);
    UnderlyingInstrument_113.insert(UnderlyingFactor_113.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_113(204225864);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_113);
    UnderlyingInstrument_113.insert(UnderlyingFlowScheduleType_113.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_113("STRING_1283308930");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_113);
    UnderlyingInstrument_113.insert(UnderlyingInstrRegistry_113.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_113("LOCALMKTDATE_1604824822");
    noUnderlyings_0_0.set(UnderlyingIssueDate_113);
    UnderlyingInstrument_113.insert(UnderlyingIssueDate_113.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_113("STRING_668903805");
    noUnderlyings_0_0.set(UnderlyingIssuer_113);
    UnderlyingInstrument_113.insert(UnderlyingIssuer_113.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_113("STRING_1273653493");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_113);
    UnderlyingInstrument_113.insert(UnderlyingLocaleOfIssue_113.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_113("LOCALMKTDATE_909566679");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_113);
    UnderlyingInstrument_113.insert(UnderlyingMaturityDate_113.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_113("MONTHYEAR_1068296507");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_113);
    UnderlyingInstrument_113.insert(UnderlyingMaturityMonthYear_113.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_113("TZTIMEONLY_1886923881");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_113);
    UnderlyingInstrument_113.insert(UnderlyingMaturityTime_113.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_113;
    UnderlyingNotionalPercentageOutstanding_113.setString("52.970000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_113);
    UnderlyingInstrument_113.insert(UnderlyingNotionalPercentageOutstanding_113.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_113('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_113);
    UnderlyingInstrument_113.insert(UnderlyingOptAttribute_113.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_113;
    UnderlyingOriginalNotionalPercentageOutstanding_113.setString("20.810000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_113);
    UnderlyingInstrument_113.insert(UnderlyingOriginalNotionalPercentageOutstanding_113.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_113("STRING_1159424510");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_113);
    UnderlyingInstrument_113.insert(UnderlyingPriceUnitOfMeasure_113.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_113;
    UnderlyingPriceUnitOfMeasureQty_113.setString("4439240");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_113);
    UnderlyingInstrument_113.insert(UnderlyingPriceUnitOfMeasureQty_113.getString());
    FIX::UnderlyingProduct UnderlyingProduct_113(957383535);
    noUnderlyings_0_0.set(UnderlyingProduct_113);
    UnderlyingInstrument_113.insert(UnderlyingProduct_113.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_113(1681460627);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_113);
    UnderlyingInstrument_113.insert(UnderlyingPutOrCall_113.getString());
    FIX::UnderlyingPx UnderlyingPx_113;
    UnderlyingPx_113.setString("6824950");
    noUnderlyings_0_0.set(UnderlyingPx_113);
    UnderlyingInstrument_113.insert(UnderlyingPx_113.getString());
    FIX::UnderlyingQty UnderlyingQty_113;
    UnderlyingQty_113.setString("10899316");
    noUnderlyings_0_0.set(UnderlyingQty_113);
    UnderlyingInstrument_113.insert(UnderlyingQty_113.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_113("LOCALMKTDATE_1188963");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_113);
    UnderlyingInstrument_113.insert(UnderlyingRedemptionDate_113.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_113("STRING_930508458");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_113);
    UnderlyingInstrument_113.insert(UnderlyingRepoCollateralSecurityType_113.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_113;
    UnderlyingRepurchaseRate_113.setString("47.690000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_113);
    UnderlyingInstrument_113.insert(UnderlyingRepurchaseRate_113.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_113(689983300);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_113);
    UnderlyingInstrument_113.insert(UnderlyingRepurchaseTerm_113.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_113("STRING_371900545");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_113);
    UnderlyingInstrument_113.insert(UnderlyingRestructuringType_113.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_113("STRING_372518617");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_113);
    UnderlyingInstrument_113.insert(UnderlyingSecurityDesc_113.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_113("EXCHANGE_396261170");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_113);
    UnderlyingInstrument_113.insert(UnderlyingSecurityExchange_113.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_113("STRING_506904499");
    noUnderlyings_0_0.set(UnderlyingSecurityID_113);
    UnderlyingInstrument_113.insert(UnderlyingSecurityID_113.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_113("STRING_181926653");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_113);
    UnderlyingInstrument_113.insert(UnderlyingSecurityIDSource_113.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_113("STRING_1253026977");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_113);
    UnderlyingInstrument_113.insert(UnderlyingSecuritySubType_113.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_113("STRING_1610056471");
    noUnderlyings_0_0.set(UnderlyingSecurityType_113);
    UnderlyingInstrument_113.insert(UnderlyingSecurityType_113.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_113("STRING_1825444875");
    noUnderlyings_0_0.set(UnderlyingSeniority_113);
    UnderlyingInstrument_113.insert(UnderlyingSeniority_113.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_113("STRING_1899453387");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_113);
    UnderlyingInstrument_113.insert(UnderlyingSettlMethod_113.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_113(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_113);
    UnderlyingInstrument_113.insert(UnderlyingSettlementType_113.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_113;
    UnderlyingStartValue_113.setString("20296707");
    noUnderlyings_0_0.set(UnderlyingStartValue_113);
    UnderlyingInstrument_113.insert(UnderlyingStartValue_113.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_113("STRING_1035278669");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_113);
    UnderlyingInstrument_113.insert(UnderlyingStateOrProvinceOfIssue_113.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_113("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_113);
    UnderlyingInstrument_113.insert(UnderlyingStrikeCurrency_113.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_113;
    UnderlyingStrikePrice_113.setString("1614485");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_113);
    UnderlyingInstrument_113.insert(UnderlyingStrikePrice_113.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_113("STRING_2008074814");
    noUnderlyings_0_0.set(UnderlyingSymbol_113);
    UnderlyingInstrument_113.insert(UnderlyingSymbol_113.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_113("STRING_1619387403");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_113);
    UnderlyingInstrument_113.insert(UnderlyingSymbolSfx_113.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_113("STRING_2048372396");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_113);
    UnderlyingInstrument_113.insert(UnderlyingTimeUnit_113.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_113("STRING_1207486464");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_113);
    UnderlyingInstrument_113.insert(UnderlyingUnitOfMeasure_113.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_113;
    UnderlyingUnitOfMeasureQty_113.setString("17958676");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_113);
    UnderlyingInstrument_113.insert(UnderlyingUnitOfMeasureQty_113.getString());
    all_values.push_back(UnderlyingInstrument_113);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_234;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_234("STRING_219427326");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_234);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_234.insert(UnderlyingSecurityAltID_234.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_234("STRING_92308096");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_234);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_234.insert(UnderlyingSecurityAltIDSource_234.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_234);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_235;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_235("STRING_1562494364");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_235);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_235.insert(UnderlyingSecurityAltID_235.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_235("STRING_1900887954");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_235);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_235.insert(UnderlyingSecurityAltIDSource_235.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_235);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_236;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_236("STRING_774803146");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_236);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_236.insert(UnderlyingSecurityAltID_236.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_236("STRING_504942411");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_236);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_236.insert(UnderlyingSecurityAltIDSource_236.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_236);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_226;
      FIX::UnderlyingStipType UnderlyingStipType_226("STRING_1705311604");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_226);
      UnderlyingStipulations_NoUnderlyingStips_226.insert(UnderlyingStipType_226.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_226("STRING_199113532");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_226);
      UnderlyingStipulations_NoUnderlyingStips_226.insert(UnderlyingStipValue_226.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_226);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_226;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_226("STRING_2077212150");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_226);
      UndlyInstrumentParties_NoUndlyInstrumentParties_226.insert(UnderlyingInstrumentPartyID_226.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_226('5');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_226);
      UndlyInstrumentParties_NoUndlyInstrumentParties_226.insert(UnderlyingInstrumentPartyIDSource_226.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_226(840837739);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_226);
      UndlyInstrumentParties_NoUndlyInstrumentParties_226.insert(UnderlyingInstrumentPartyRole_226.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_226);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_446("STRING_753558803");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_446);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446.insert(UnderlyingInstrumentPartySubID_446.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_446(2093864716);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_446);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446.insert(UnderlyingInstrumentPartySubIDType_446.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_447("STRING_2046689472");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_447);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447.insert(UnderlyingInstrumentPartySubID_447.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_447(431520030);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_447);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447.insert(UnderlyingInstrumentPartySubIDType_447.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_448("STRING_1845834456");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_448);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448.insert(UnderlyingInstrumentPartySubID_448.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_448(1540372786);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_448);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448.insert(UnderlyingInstrumentPartySubIDType_448.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_227;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_227("STRING_313707121");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_227);
      UndlyInstrumentParties_NoUndlyInstrumentParties_227.insert(UnderlyingInstrumentPartyID_227.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_227('7');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_227);
      UndlyInstrumentParties_NoUndlyInstrumentParties_227.insert(UnderlyingInstrumentPartyIDSource_227.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_227(491397273);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_227);
      UndlyInstrumentParties_NoUndlyInstrumentParties_227.insert(UnderlyingInstrumentPartyRole_227.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_227);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_449("STRING_895077992");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_449);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449.insert(UnderlyingInstrumentPartySubID_449.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_449(351988440);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_449);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449.insert(UnderlyingInstrumentPartySubIDType_449.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_450("STRING_336701772");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_450);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450.insert(UnderlyingInstrumentPartySubID_450.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_450(795966741);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_450);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450.insert(UnderlyingInstrumentPartySubIDType_450.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_451("STRING_1559474904");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_451);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451.insert(UnderlyingInstrumentPartySubID_451.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_451(2132569432);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_451);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451.insert(UnderlyingInstrumentPartySubIDType_451.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_228;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_228("STRING_1401077570");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_228);
      UndlyInstrumentParties_NoUndlyInstrumentParties_228.insert(UnderlyingInstrumentPartyID_228.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_228('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_228);
      UndlyInstrumentParties_NoUndlyInstrumentParties_228.insert(UnderlyingInstrumentPartyIDSource_228.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_228(77393880);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_228);
      UndlyInstrumentParties_NoUndlyInstrumentParties_228.insert(UnderlyingInstrumentPartyRole_228.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_228);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_452("STRING_1532306536");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_452);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452.insert(UnderlyingInstrumentPartySubID_452.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_452(852197026);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_452);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452.insert(UnderlyingInstrumentPartySubIDType_452.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_114;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_114("DATA_1321030698");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_114);
    UnderlyingInstrument_114.insert(EncodedUnderlyingIssuer_114.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_114(1286899805);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_114);
    UnderlyingInstrument_114.insert(EncodedUnderlyingIssuerLen_114.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_114("DATA_410024983");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_114);
    UnderlyingInstrument_114.insert(EncodedUnderlyingSecurityDesc_114.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_114(1520144231);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_114);
    UnderlyingInstrument_114.insert(EncodedUnderlyingSecurityDescLen_114.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_114;
    UnderlyingAdjustedQuantity_114.setString("17314763");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_114);
    UnderlyingInstrument_114.insert(UnderlyingAdjustedQuantity_114.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_114;
    UnderlyingAllocationPercent_114.setString("34.850000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_114);
    UnderlyingInstrument_114.insert(UnderlyingAllocationPercent_114.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_114;
    UnderlyingAttachmentPoint_114.setString("63.810000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_114);
    UnderlyingInstrument_114.insert(UnderlyingAttachmentPoint_114.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_114("STRING_424830465");
    noUnderlyings_0_1.set(UnderlyingCFICode_114);
    UnderlyingInstrument_114.insert(UnderlyingCFICode_114.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_114("STRING_776386486");
    noUnderlyings_0_1.set(UnderlyingCPProgram_114);
    UnderlyingInstrument_114.insert(UnderlyingCPProgram_114.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_114("STRING_697851536");
    noUnderlyings_0_1.set(UnderlyingCPRegType_114);
    UnderlyingInstrument_114.insert(UnderlyingCPRegType_114.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_114;
    UnderlyingCapValue_114.setString("3712115");
    noUnderlyings_0_1.set(UnderlyingCapValue_114);
    UnderlyingInstrument_114.insert(UnderlyingCapValue_114.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_114;
    UnderlyingCashAmount_114.setString("6755923");
    noUnderlyings_0_1.set(UnderlyingCashAmount_114);
    UnderlyingInstrument_114.insert(UnderlyingCashAmount_114.getString());
    FIX::UnderlyingCashType UnderlyingCashType_114("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_114);
    UnderlyingInstrument_114.insert(UnderlyingCashType_114.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_114;
    UnderlyingContractMultiplier_114.setString("695623");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_114);
    UnderlyingInstrument_114.insert(UnderlyingContractMultiplier_114.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_114(68481449);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_114);
    UnderlyingInstrument_114.insert(UnderlyingContractMultiplierUnit_114.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_114("COUNTRY_1443078687");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_114);
    UnderlyingInstrument_114.insert(UnderlyingCountryOfIssue_114.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_114("LOCALMKTDATE_803191819");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_114);
    UnderlyingInstrument_114.insert(UnderlyingCouponPaymentDate_114.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_114;
    UnderlyingCouponRate_114.setString("87.220000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_114);
    UnderlyingInstrument_114.insert(UnderlyingCouponRate_114.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_114("STRING_160393056");
    noUnderlyings_0_1.set(UnderlyingCreditRating_114);
    UnderlyingInstrument_114.insert(UnderlyingCreditRating_114.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_114("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_114);
    UnderlyingInstrument_114.insert(UnderlyingCurrency_114.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_114;
    UnderlyingCurrentValue_114.setString("4970948");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_114);
    UnderlyingInstrument_114.insert(UnderlyingCurrentValue_114.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_114;
    UnderlyingDetachmentPoint_114.setString("29.050000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_114);
    UnderlyingInstrument_114.insert(UnderlyingDetachmentPoint_114.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_114;
    UnderlyingDirtyPrice_114.setString("3238584");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_114);
    UnderlyingInstrument_114.insert(UnderlyingDirtyPrice_114.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_114;
    UnderlyingEndPrice_114.setString("4821806");
    noUnderlyings_0_1.set(UnderlyingEndPrice_114);
    UnderlyingInstrument_114.insert(UnderlyingEndPrice_114.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_114;
    UnderlyingEndValue_114.setString("17478304");
    noUnderlyings_0_1.set(UnderlyingEndValue_114);
    UnderlyingInstrument_114.insert(UnderlyingEndValue_114.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_114(2102760649);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_114);
    UnderlyingInstrument_114.insert(UnderlyingExerciseStyle_114.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_114;
    UnderlyingFXRate_114.setString("5595744");
    noUnderlyings_0_1.set(UnderlyingFXRate_114);
    UnderlyingInstrument_114.insert(UnderlyingFXRate_114.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_114('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_114);
    UnderlyingInstrument_114.insert(UnderlyingFXRateCalc_114.getString());
    FIX::UnderlyingFactor UnderlyingFactor_114;
    UnderlyingFactor_114.setString("14875835");
    noUnderlyings_0_1.set(UnderlyingFactor_114);
    UnderlyingInstrument_114.insert(UnderlyingFactor_114.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_114(1411771519);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_114);
    UnderlyingInstrument_114.insert(UnderlyingFlowScheduleType_114.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_114("STRING_1737465813");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_114);
    UnderlyingInstrument_114.insert(UnderlyingInstrRegistry_114.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_114("LOCALMKTDATE_626999695");
    noUnderlyings_0_1.set(UnderlyingIssueDate_114);
    UnderlyingInstrument_114.insert(UnderlyingIssueDate_114.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_114("STRING_1821796502");
    noUnderlyings_0_1.set(UnderlyingIssuer_114);
    UnderlyingInstrument_114.insert(UnderlyingIssuer_114.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_114("STRING_1110126396");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_114);
    UnderlyingInstrument_114.insert(UnderlyingLocaleOfIssue_114.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_114("LOCALMKTDATE_210992421");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_114);
    UnderlyingInstrument_114.insert(UnderlyingMaturityDate_114.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_114("MONTHYEAR_14066339");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_114);
    UnderlyingInstrument_114.insert(UnderlyingMaturityMonthYear_114.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_114("TZTIMEONLY_1054419129");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_114);
    UnderlyingInstrument_114.insert(UnderlyingMaturityTime_114.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_114;
    UnderlyingNotionalPercentageOutstanding_114.setString("28.870000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_114);
    UnderlyingInstrument_114.insert(UnderlyingNotionalPercentageOutstanding_114.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_114('7');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_114);
    UnderlyingInstrument_114.insert(UnderlyingOptAttribute_114.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_114;
    UnderlyingOriginalNotionalPercentageOutstanding_114.setString("6.650000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_114);
    UnderlyingInstrument_114.insert(UnderlyingOriginalNotionalPercentageOutstanding_114.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_114("STRING_1007034421");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_114);
    UnderlyingInstrument_114.insert(UnderlyingPriceUnitOfMeasure_114.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_114;
    UnderlyingPriceUnitOfMeasureQty_114.setString("14660451");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_114);
    UnderlyingInstrument_114.insert(UnderlyingPriceUnitOfMeasureQty_114.getString());
    FIX::UnderlyingProduct UnderlyingProduct_114(734158583);
    noUnderlyings_0_1.set(UnderlyingProduct_114);
    UnderlyingInstrument_114.insert(UnderlyingProduct_114.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_114(1076596763);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_114);
    UnderlyingInstrument_114.insert(UnderlyingPutOrCall_114.getString());
    FIX::UnderlyingPx UnderlyingPx_114;
    UnderlyingPx_114.setString("15345265");
    noUnderlyings_0_1.set(UnderlyingPx_114);
    UnderlyingInstrument_114.insert(UnderlyingPx_114.getString());
    FIX::UnderlyingQty UnderlyingQty_114;
    UnderlyingQty_114.setString("297536");
    noUnderlyings_0_1.set(UnderlyingQty_114);
    UnderlyingInstrument_114.insert(UnderlyingQty_114.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_114("LOCALMKTDATE_1879788582");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_114);
    UnderlyingInstrument_114.insert(UnderlyingRedemptionDate_114.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_114("STRING_2094405308");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_114);
    UnderlyingInstrument_114.insert(UnderlyingRepoCollateralSecurityType_114.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_114;
    UnderlyingRepurchaseRate_114.setString("66.780000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_114);
    UnderlyingInstrument_114.insert(UnderlyingRepurchaseRate_114.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_114(1430574746);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_114);
    UnderlyingInstrument_114.insert(UnderlyingRepurchaseTerm_114.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_114("STRING_858788823");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_114);
    UnderlyingInstrument_114.insert(UnderlyingRestructuringType_114.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_114("STRING_687241506");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_114);
    UnderlyingInstrument_114.insert(UnderlyingSecurityDesc_114.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_114("EXCHANGE_1777327651");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_114);
    UnderlyingInstrument_114.insert(UnderlyingSecurityExchange_114.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_114("STRING_1182647241");
    noUnderlyings_0_1.set(UnderlyingSecurityID_114);
    UnderlyingInstrument_114.insert(UnderlyingSecurityID_114.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_114("STRING_1169422119");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_114);
    UnderlyingInstrument_114.insert(UnderlyingSecurityIDSource_114.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_114("STRING_1377674479");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_114);
    UnderlyingInstrument_114.insert(UnderlyingSecuritySubType_114.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_114("STRING_1137924242");
    noUnderlyings_0_1.set(UnderlyingSecurityType_114);
    UnderlyingInstrument_114.insert(UnderlyingSecurityType_114.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_114("STRING_1728996612");
    noUnderlyings_0_1.set(UnderlyingSeniority_114);
    UnderlyingInstrument_114.insert(UnderlyingSeniority_114.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_114("STRING_1794109593");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_114);
    UnderlyingInstrument_114.insert(UnderlyingSettlMethod_114.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_114(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_114);
    UnderlyingInstrument_114.insert(UnderlyingSettlementType_114.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_114;
    UnderlyingStartValue_114.setString("9932844");
    noUnderlyings_0_1.set(UnderlyingStartValue_114);
    UnderlyingInstrument_114.insert(UnderlyingStartValue_114.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_114("STRING_1384091758");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_114);
    UnderlyingInstrument_114.insert(UnderlyingStateOrProvinceOfIssue_114.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_114("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_114);
    UnderlyingInstrument_114.insert(UnderlyingStrikeCurrency_114.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_114;
    UnderlyingStrikePrice_114.setString("3467345");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_114);
    UnderlyingInstrument_114.insert(UnderlyingStrikePrice_114.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_114("STRING_1316016248");
    noUnderlyings_0_1.set(UnderlyingSymbol_114);
    UnderlyingInstrument_114.insert(UnderlyingSymbol_114.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_114("STRING_681663677");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_114);
    UnderlyingInstrument_114.insert(UnderlyingSymbolSfx_114.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_114("STRING_1401153635");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_114);
    UnderlyingInstrument_114.insert(UnderlyingTimeUnit_114.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_114("STRING_1951839135");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_114);
    UnderlyingInstrument_114.insert(UnderlyingUnitOfMeasure_114.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_114;
    UnderlyingUnitOfMeasureQty_114.setString("14721165");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_114);
    UnderlyingInstrument_114.insert(UnderlyingUnitOfMeasureQty_114.getString());
    all_values.push_back(UnderlyingInstrument_114);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_237;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_237("STRING_811389908");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_237);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_237.insert(UnderlyingSecurityAltID_237.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_237("STRING_790677992");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_237);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_237.insert(UnderlyingSecurityAltIDSource_237.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_237);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_238;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_238("STRING_1740099235");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_238);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_238.insert(UnderlyingSecurityAltID_238.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_238("STRING_1887986671");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_238);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_238.insert(UnderlyingSecurityAltIDSource_238.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_238);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_239;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_239("STRING_177720930");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_239);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_239.insert(UnderlyingSecurityAltID_239.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_239("STRING_1769852857");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_239);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_239.insert(UnderlyingSecurityAltIDSource_239.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_239);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_227;
      FIX::UnderlyingStipType UnderlyingStipType_227("STRING_124642591");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_227);
      UnderlyingStipulations_NoUnderlyingStips_227.insert(UnderlyingStipType_227.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_227("STRING_1959999535");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_227);
      UnderlyingStipulations_NoUnderlyingStips_227.insert(UnderlyingStipValue_227.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_227);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_229;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_229("STRING_983431414");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_229);
      UndlyInstrumentParties_NoUndlyInstrumentParties_229.insert(UnderlyingInstrumentPartyID_229.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_229('4');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_229);
      UndlyInstrumentParties_NoUndlyInstrumentParties_229.insert(UnderlyingInstrumentPartyIDSource_229.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_229(533226708);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_229);
      UndlyInstrumentParties_NoUndlyInstrumentParties_229.insert(UnderlyingInstrumentPartyRole_229.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_229);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_453("STRING_1669179513");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_453);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453.insert(UnderlyingInstrumentPartySubID_453.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_453(1910901187);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_453);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453.insert(UnderlyingInstrumentPartySubIDType_453.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_454("STRING_1156519250");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_454);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454.insert(UnderlyingInstrumentPartySubID_454.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_454(1250692477);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_454);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454.insert(UnderlyingInstrumentPartySubIDType_454.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_455("STRING_1557527132");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_455);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455.insert(UnderlyingInstrumentPartySubID_455.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_455(1634543382);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_455);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455.insert(UnderlyingInstrumentPartySubIDType_455.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_23;
  FIX::Yield Yield_23;
  Yield_23.setString("33.120000");
  msg.set(Yield_23);
  YieldData_23.insert(Yield_23.getString());
  FIX::YieldCalcDate YieldCalcDate_23("LOCALMKTDATE_794135243");
  msg.set(YieldCalcDate_23);
  YieldData_23.insert(YieldCalcDate_23.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_23("LOCALMKTDATE_592083561");
  msg.set(YieldRedemptionDate_23);
  YieldData_23.insert(YieldRedemptionDate_23.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_23;
  YieldRedemptionPrice_23.setString("7640906");
  msg.set(YieldRedemptionPrice_23);
  YieldData_23.insert(YieldRedemptionPrice_23.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_23(1140869749);
  msg.set(YieldRedemptionPriceType_23);
  YieldData_23.insert(YieldRedemptionPriceType_23.getString());
  FIX::YieldType YieldType_23("STRING_NEXTREFUND");
  msg.set(YieldType_23);
  YieldData_23.insert(YieldType_23.getString());
  all_values.push_back(YieldData_23);


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
