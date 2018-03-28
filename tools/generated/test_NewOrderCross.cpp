#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/NewOrderCross.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderCross, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::NewOrderCross msg;

  list<multiset<string>> all_values;
  multiset<string> NewOrderCross_0;
  FIX::CancellationRights CancellationRights_3('Y');
  msg.set(CancellationRights_3);
  NewOrderCross_0.insert(CancellationRights_3.getString());
  FIX::ComplianceID ComplianceID_6("STRING_234667059");
  msg.set(ComplianceID_6);
  NewOrderCross_0.insert(ComplianceID_6.getString());
  FIX::CrossID CrossID_3("STRING_1654689221");
  msg.set(CrossID_3);
  NewOrderCross_0.insert(CrossID_3.getString());
  FIX::CrossPrioritization CrossPrioritization_2(0);
  msg.set(CrossPrioritization_2);
  NewOrderCross_0.insert(CrossPrioritization_2.getString());
  FIX::CrossType CrossType_3(4);
  msg.set(CrossType_3);
  NewOrderCross_0.insert(CrossType_3.getString());
  FIX::Currency Currency_41("CAN");
  msg.set(Currency_41);
  NewOrderCross_0.insert(Currency_41.getString());
  FIX::Designation Designation_3("STRING_513266317");
  msg.set(Designation_3);
  NewOrderCross_0.insert(Designation_3.getString());
  FIX::EffectiveTime EffectiveTime_3(FIX::UTCTIMESTAMP(23, 4, 33, 1, 1, 2016));
  msg.set(EffectiveTime_3);
  NewOrderCross_0.insert(EffectiveTime_3.getString());
  FIX::ExDestination ExDestination_2("EXCHANGE_966831521");
  msg.set(ExDestination_2);
  NewOrderCross_0.insert(ExDestination_2.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_2('D');
  msg.set(ExDestinationIDSource_2);
  NewOrderCross_0.insert(ExDestinationIDSource_2.getString());
  FIX::ExecInst ExecInst_8("MULTIPLECHARVALUE_N");
  msg.set(ExecInst_8);
  NewOrderCross_0.insert(ExecInst_8.getString());
  FIX::ExpireDate ExpireDate_9("LOCALMKTDATE_782358772");
  msg.set(ExpireDate_9);
  NewOrderCross_0.insert(ExpireDate_9.getString());
  FIX::ExpireTime ExpireTime_10(FIX::UTCTIMESTAMP(11, 11, 6, 0, 9, 2012));
  msg.set(ExpireTime_10);
  NewOrderCross_0.insert(ExpireTime_10.getString());
  FIX::GTBookingInst GTBookingInst_3(1);
  msg.set(GTBookingInst_3);
  NewOrderCross_0.insert(GTBookingInst_3.getString());
  FIX::HandlInst HandlInst_3('1');
  msg.set(HandlInst_3);
  NewOrderCross_0.insert(HandlInst_3.getString());
  FIX::IOIID IOIID_3("STRING_741589797");
  msg.set(IOIID_3);
  NewOrderCross_0.insert(IOIID_3.getString());
  FIX::LocateReqd LocateReqd_2(false);
  msg.set(LocateReqd_2);
  NewOrderCross_0.insert(LocateReqd_2.getString());
  FIX::MatchIncrement MatchIncrement_3;
  MatchIncrement_3.setString("19130842");
  msg.set(MatchIncrement_3);
  NewOrderCross_0.insert(MatchIncrement_3.getString());
  FIX::MaxFloor MaxFloor_3;
  MaxFloor_3.setString("14831074");
  msg.set(MaxFloor_3);
  NewOrderCross_0.insert(MaxFloor_3.getString());
  FIX::MaxPriceLevels MaxPriceLevels_3(984679078);
  msg.set(MaxPriceLevels_3);
  NewOrderCross_0.insert(MaxPriceLevels_3.getString());
  FIX::MaxShow MaxShow_3;
  MaxShow_3.setString("14202897");
  msg.set(MaxShow_3);
  NewOrderCross_0.insert(MaxShow_3.getString());
  FIX::MinQty MinQty_8;
  MinQty_8.setString("14049484");
  msg.set(MinQty_8);
  NewOrderCross_0.insert(MinQty_8.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_3('N');
  msg.set(MoneyLaunderingStatus_3);
  NewOrderCross_0.insert(MoneyLaunderingStatus_3.getString());
  FIX::OrdType OrdType_41('K');
  msg.set(OrdType_41);
  NewOrderCross_0.insert(OrdType_41.getString());
  FIX::ParticipationRate ParticipationRate_3;
  ParticipationRate_3.setString("50.870000");
  msg.set(ParticipationRate_3);
  NewOrderCross_0.insert(ParticipationRate_3.getString());
  FIX::PrevClosePx PrevClosePx_4;
  PrevClosePx_4.setString("5829896");
  msg.set(PrevClosePx_4);
  NewOrderCross_0.insert(PrevClosePx_4.getString());
  FIX::Price Price_15;
  Price_15.setString("11778467");
  msg.set(Price_15);
  NewOrderCross_0.insert(Price_15.getString());
  FIX::PriceProtectionScope PriceProtectionScope_3('2');
  msg.set(PriceProtectionScope_3);
  NewOrderCross_0.insert(PriceProtectionScope_3.getString());
  FIX::PriceType PriceType_29(15);
  msg.set(PriceType_29);
  NewOrderCross_0.insert(PriceType_29.getString());
  FIX::ProcessCode ProcessCode_8('1');
  msg.set(ProcessCode_8);
  NewOrderCross_0.insert(ProcessCode_8.getString());
  FIX::QuoteID QuoteID_4("STRING_483014020");
  msg.set(QuoteID_4);
  NewOrderCross_0.insert(QuoteID_4.getString());
  FIX::RegistID RegistID_3("STRING_196865219");
  msg.set(RegistID_3);
  NewOrderCross_0.insert(RegistID_3.getString());
  FIX::SettlDate SettlDate_33("LOCALMKTDATE_951805112");
  msg.set(SettlDate_33);
  NewOrderCross_0.insert(SettlDate_33.getString());
  FIX::SettlType SettlType_20("STRING_9");
  msg.set(SettlType_20);
  NewOrderCross_0.insert(SettlType_20.getString());
  FIX::StopPx StopPx_3;
  StopPx_3.setString("6103881");
  msg.set(StopPx_3);
  NewOrderCross_0.insert(StopPx_3.getString());
  FIX::TargetStrategy TargetStrategy_3(3);
  msg.set(TargetStrategy_3);
  NewOrderCross_0.insert(TargetStrategy_3.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_3("STRING_84720665");
  msg.set(TargetStrategyParameters_3);
  NewOrderCross_0.insert(TargetStrategyParameters_3.getString());
  FIX::TimeInForce TimeInForce_31('8');
  msg.set(TimeInForce_31);
  NewOrderCross_0.insert(TimeInForce_31.getString());
  FIX::TransBkdTime TransBkdTime_4(FIX::UTCTIMESTAMP(5, 26, 31, 5, 4, 2003));
  msg.set(TransBkdTime_4);
  NewOrderCross_0.insert(TransBkdTime_4.getString());
  FIX::TransactTime TransactTime_35(FIX::UTCTIMESTAMP(4, 56, 15, 10, 8, 2004));
  msg.set(TransactTime_35);
  NewOrderCross_0.insert(TransactTime_35.getString());
  all_values.push_back(NewOrderCross_0);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_3;
  FIX::DiscretionInst DiscretionInst_3('4');
  msg.set(DiscretionInst_3);
  DiscretionInstructions_3.insert(DiscretionInst_3.getString());
  FIX::DiscretionLimitType DiscretionLimitType_3(1);
  msg.set(DiscretionLimitType_3);
  DiscretionInstructions_3.insert(DiscretionLimitType_3.getString());
  FIX::DiscretionMoveType DiscretionMoveType_3(1);
  msg.set(DiscretionMoveType_3);
  DiscretionInstructions_3.insert(DiscretionMoveType_3.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_3(3);
  msg.set(DiscretionOffsetType_3);
  DiscretionInstructions_3.insert(DiscretionOffsetType_3.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_3;
  DiscretionOffsetValue_3.setString("18455655");
  msg.set(DiscretionOffsetValue_3);
  DiscretionInstructions_3.insert(DiscretionOffsetValue_3.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_3(1);
  msg.set(DiscretionRoundDirection_3);
  DiscretionInstructions_3.insert(DiscretionRoundDirection_3.getString());
  FIX::DiscretionScope DiscretionScope_3(2);
  msg.set(DiscretionScope_3);
  DiscretionInstructions_3.insert(DiscretionScope_3.getString());
  all_values.push_back(DiscretionInstructions_3);

  // DisplayInstruction
  multiset<string> DisplayInstruction_3;
  FIX::DisplayHighQty DisplayHighQty_3;
  DisplayHighQty_3.setString("1143243");
  msg.set(DisplayHighQty_3);
  DisplayInstruction_3.insert(DisplayHighQty_3.getString());
  FIX::DisplayLowQty DisplayLowQty_3;
  DisplayLowQty_3.setString("8832260");
  msg.set(DisplayLowQty_3);
  DisplayInstruction_3.insert(DisplayLowQty_3.getString());
  FIX::DisplayMethod DisplayMethod_3('2');
  msg.set(DisplayMethod_3);
  DisplayInstruction_3.insert(DisplayMethod_3.getString());
  FIX::DisplayMinIncr DisplayMinIncr_3;
  DisplayMinIncr_3.setString("3111895");
  msg.set(DisplayMinIncr_3);
  DisplayInstruction_3.insert(DisplayMinIncr_3.getString());
  FIX::DisplayQty DisplayQty_3;
  DisplayQty_3.setString("18350311");
  msg.set(DisplayQty_3);
  DisplayInstruction_3.insert(DisplayQty_3.getString());
  FIX::DisplayWhen DisplayWhen_3('2');
  msg.set(DisplayWhen_3);
  DisplayInstruction_3.insert(DisplayWhen_3.getString());
  FIX::RefreshQty RefreshQty_3;
  RefreshQty_3.setString("9215776");
  msg.set(RefreshQty_3);
  DisplayInstruction_3.insert(RefreshQty_3.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_3;
  SecondaryDisplayQty_3.setString("21111766");
  msg.set(SecondaryDisplayQty_3);
  DisplayInstruction_3.insert(SecondaryDisplayQty_3.getString());
  all_values.push_back(DisplayInstruction_3);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::NewOrderCross::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_74;
    FIX::EncodedLegIssuer EncodedLegIssuer_74("DATA_118850974");
    noLegs_0_0.set(EncodedLegIssuer_74);
    InstrumentLeg_74.insert(EncodedLegIssuer_74.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_74(1564341558);
    noLegs_0_0.set(EncodedLegIssuerLen_74);
    InstrumentLeg_74.insert(EncodedLegIssuerLen_74.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_74("DATA_1116557169");
    noLegs_0_0.set(EncodedLegSecurityDesc_74);
    InstrumentLeg_74.insert(EncodedLegSecurityDesc_74.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_74(1405981501);
    noLegs_0_0.set(EncodedLegSecurityDescLen_74);
    InstrumentLeg_74.insert(EncodedLegSecurityDescLen_74.getString());
    FIX::LegCFICode LegCFICode_74("STRING_1503075281");
    noLegs_0_0.set(LegCFICode_74);
    InstrumentLeg_74.insert(LegCFICode_74.getString());
    FIX::LegContractMultiplier LegContractMultiplier_74;
    LegContractMultiplier_74.setString("8295078");
    noLegs_0_0.set(LegContractMultiplier_74);
    InstrumentLeg_74.insert(LegContractMultiplier_74.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_74(774774548);
    noLegs_0_0.set(LegContractMultiplierUnit_74);
    InstrumentLeg_74.insert(LegContractMultiplierUnit_74.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_74("MONTHYEAR_961236618");
    noLegs_0_0.set(LegContractSettlMonth_74);
    InstrumentLeg_74.insert(LegContractSettlMonth_74.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_74("COUNTRY_2066006174");
    noLegs_0_0.set(LegCountryOfIssue_74);
    InstrumentLeg_74.insert(LegCountryOfIssue_74.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_74("LOCALMKTDATE_885157392");
    noLegs_0_0.set(LegCouponPaymentDate_74);
    InstrumentLeg_74.insert(LegCouponPaymentDate_74.getString());
    FIX::LegCouponRate LegCouponRate_74;
    LegCouponRate_74.setString("99.740000");
    noLegs_0_0.set(LegCouponRate_74);
    InstrumentLeg_74.insert(LegCouponRate_74.getString());
    FIX::LegCreditRating LegCreditRating_74("STRING_920621421");
    noLegs_0_0.set(LegCreditRating_74);
    InstrumentLeg_74.insert(LegCreditRating_74.getString());
    FIX::LegCurrency LegCurrency_74("EUR");
    noLegs_0_0.set(LegCurrency_74);
    InstrumentLeg_74.insert(LegCurrency_74.getString());
    FIX::LegDatedDate LegDatedDate_74("LOCALMKTDATE_1195526462");
    noLegs_0_0.set(LegDatedDate_74);
    InstrumentLeg_74.insert(LegDatedDate_74.getString());
    FIX::LegExerciseStyle LegExerciseStyle_74(1182119227);
    noLegs_0_0.set(LegExerciseStyle_74);
    InstrumentLeg_74.insert(LegExerciseStyle_74.getString());
    FIX::LegFactor LegFactor_74;
    LegFactor_74.setString("14773545");
    noLegs_0_0.set(LegFactor_74);
    InstrumentLeg_74.insert(LegFactor_74.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_74(1751112793);
    noLegs_0_0.set(LegFlowScheduleType_74);
    InstrumentLeg_74.insert(LegFlowScheduleType_74.getString());
    FIX::LegInstrRegistry LegInstrRegistry_74("STRING_559545806");
    noLegs_0_0.set(LegInstrRegistry_74);
    InstrumentLeg_74.insert(LegInstrRegistry_74.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_74("LOCALMKTDATE_1175436445");
    noLegs_0_0.set(LegInterestAccrualDate_74);
    InstrumentLeg_74.insert(LegInterestAccrualDate_74.getString());
    FIX::LegIssueDate LegIssueDate_74("LOCALMKTDATE_1337062196");
    noLegs_0_0.set(LegIssueDate_74);
    InstrumentLeg_74.insert(LegIssueDate_74.getString());
    FIX::LegIssuer LegIssuer_74("STRING_1178764999");
    noLegs_0_0.set(LegIssuer_74);
    InstrumentLeg_74.insert(LegIssuer_74.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_74("STRING_1289760748");
    noLegs_0_0.set(LegLocaleOfIssue_74);
    InstrumentLeg_74.insert(LegLocaleOfIssue_74.getString());
    FIX::LegMaturityDate LegMaturityDate_74("LOCALMKTDATE_72804583");
    noLegs_0_0.set(LegMaturityDate_74);
    InstrumentLeg_74.insert(LegMaturityDate_74.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_74("MONTHYEAR_133514565");
    noLegs_0_0.set(LegMaturityMonthYear_74);
    InstrumentLeg_74.insert(LegMaturityMonthYear_74.getString());
    FIX::LegMaturityTime LegMaturityTime_74("TZTIMEONLY_1600950270");
    noLegs_0_0.set(LegMaturityTime_74);
    InstrumentLeg_74.insert(LegMaturityTime_74.getString());
    FIX::LegOptAttribute LegOptAttribute_74('1');
    noLegs_0_0.set(LegOptAttribute_74);
    InstrumentLeg_74.insert(LegOptAttribute_74.getString());
    FIX::LegOptionRatio LegOptionRatio_74;
    LegOptionRatio_74.setString("5381096");
    noLegs_0_0.set(LegOptionRatio_74);
    InstrumentLeg_74.insert(LegOptionRatio_74.getString());
    FIX::LegPool LegPool_74("STRING_375044316");
    noLegs_0_0.set(LegPool_74);
    InstrumentLeg_74.insert(LegPool_74.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_74("STRING_1871528693");
    noLegs_0_0.set(LegPriceUnitOfMeasure_74);
    InstrumentLeg_74.insert(LegPriceUnitOfMeasure_74.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_74;
    LegPriceUnitOfMeasureQty_74.setString("10274254");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_74);
    InstrumentLeg_74.insert(LegPriceUnitOfMeasureQty_74.getString());
    FIX::LegProduct LegProduct_74(493895290);
    noLegs_0_0.set(LegProduct_74);
    InstrumentLeg_74.insert(LegProduct_74.getString());
    FIX::LegPutOrCall LegPutOrCall_74(1288386603);
    noLegs_0_0.set(LegPutOrCall_74);
    InstrumentLeg_74.insert(LegPutOrCall_74.getString());
    FIX::LegRatioQty LegRatioQty_74;
    LegRatioQty_74.setString("21439826");
    noLegs_0_0.set(LegRatioQty_74);
    InstrumentLeg_74.insert(LegRatioQty_74.getString());
    FIX::LegRedemptionDate LegRedemptionDate_74("LOCALMKTDATE_1899876791");
    noLegs_0_0.set(LegRedemptionDate_74);
    InstrumentLeg_74.insert(LegRedemptionDate_74.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_74("STRING_643978236");
    noLegs_0_0.set(LegRepoCollateralSecurityType_74);
    InstrumentLeg_74.insert(LegRepoCollateralSecurityType_74.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_74;
    LegRepurchaseRate_74.setString("68.160000");
    noLegs_0_0.set(LegRepurchaseRate_74);
    InstrumentLeg_74.insert(LegRepurchaseRate_74.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_74(527167691);
    noLegs_0_0.set(LegRepurchaseTerm_74);
    InstrumentLeg_74.insert(LegRepurchaseTerm_74.getString());
    FIX::LegSecurityDesc LegSecurityDesc_74("STRING_1605214854");
    noLegs_0_0.set(LegSecurityDesc_74);
    InstrumentLeg_74.insert(LegSecurityDesc_74.getString());
    FIX::LegSecurityExchange LegSecurityExchange_74("EXCHANGE_744529342");
    noLegs_0_0.set(LegSecurityExchange_74);
    InstrumentLeg_74.insert(LegSecurityExchange_74.getString());
    FIX::LegSecurityID LegSecurityID_74("STRING_1412325084");
    noLegs_0_0.set(LegSecurityID_74);
    InstrumentLeg_74.insert(LegSecurityID_74.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_74("STRING_627141181");
    noLegs_0_0.set(LegSecurityIDSource_74);
    InstrumentLeg_74.insert(LegSecurityIDSource_74.getString());
    FIX::LegSecuritySubType LegSecuritySubType_74("STRING_1665150764");
    noLegs_0_0.set(LegSecuritySubType_74);
    InstrumentLeg_74.insert(LegSecuritySubType_74.getString());
    FIX::LegSecurityType LegSecurityType_74("STRING_1743489171");
    noLegs_0_0.set(LegSecurityType_74);
    InstrumentLeg_74.insert(LegSecurityType_74.getString());
    FIX::LegSide LegSide_74('8');
    noLegs_0_0.set(LegSide_74);
    InstrumentLeg_74.insert(LegSide_74.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_74("STRING_713193578");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_74);
    InstrumentLeg_74.insert(LegStateOrProvinceOfIssue_74.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_74("USD");
    noLegs_0_0.set(LegStrikeCurrency_74);
    InstrumentLeg_74.insert(LegStrikeCurrency_74.getString());
    FIX::LegStrikePrice LegStrikePrice_74;
    LegStrikePrice_74.setString("3168227");
    noLegs_0_0.set(LegStrikePrice_74);
    InstrumentLeg_74.insert(LegStrikePrice_74.getString());
    FIX::LegSymbol LegSymbol_74("STRING_1337670556");
    noLegs_0_0.set(LegSymbol_74);
    InstrumentLeg_74.insert(LegSymbol_74.getString());
    FIX::LegSymbolSfx LegSymbolSfx_74("STRING_1347227318");
    noLegs_0_0.set(LegSymbolSfx_74);
    InstrumentLeg_74.insert(LegSymbolSfx_74.getString());
    FIX::LegTimeUnit LegTimeUnit_74("STRING_1653884919");
    noLegs_0_0.set(LegTimeUnit_74);
    InstrumentLeg_74.insert(LegTimeUnit_74.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_74("STRING_368951907");
    noLegs_0_0.set(LegUnitOfMeasure_74);
    InstrumentLeg_74.insert(LegUnitOfMeasure_74.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_74;
    LegUnitOfMeasureQty_74.setString("4895044");
    noLegs_0_0.set(LegUnitOfMeasureQty_74);
    InstrumentLeg_74.insert(LegUnitOfMeasureQty_74.getString());
    all_values.push_back(InstrumentLeg_74);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_152;
      FIX::LegSecurityAltID LegSecurityAltID_152("STRING_502466472");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_152);
      LegSecAltIDGrp_NoLegSecurityAltID_152.insert(LegSecurityAltID_152.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_152("STRING_2090454688");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_152);
      LegSecAltIDGrp_NoLegSecurityAltID_152.insert(LegSecurityAltIDSource_152.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_152);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_153;
      FIX::LegSecurityAltID LegSecurityAltID_153("STRING_1487041585");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_153);
      LegSecAltIDGrp_NoLegSecurityAltID_153.insert(LegSecurityAltID_153.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_153("STRING_1040576144");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_153);
      LegSecAltIDGrp_NoLegSecurityAltID_153.insert(LegSecurityAltIDSource_153.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_153);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_75;
    FIX::EncodedLegIssuer EncodedLegIssuer_75("DATA_318015356");
    noLegs_0_1.set(EncodedLegIssuer_75);
    InstrumentLeg_75.insert(EncodedLegIssuer_75.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_75(1211086630);
    noLegs_0_1.set(EncodedLegIssuerLen_75);
    InstrumentLeg_75.insert(EncodedLegIssuerLen_75.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_75("DATA_2068001589");
    noLegs_0_1.set(EncodedLegSecurityDesc_75);
    InstrumentLeg_75.insert(EncodedLegSecurityDesc_75.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_75(811910646);
    noLegs_0_1.set(EncodedLegSecurityDescLen_75);
    InstrumentLeg_75.insert(EncodedLegSecurityDescLen_75.getString());
    FIX::LegCFICode LegCFICode_75("STRING_351989586");
    noLegs_0_1.set(LegCFICode_75);
    InstrumentLeg_75.insert(LegCFICode_75.getString());
    FIX::LegContractMultiplier LegContractMultiplier_75;
    LegContractMultiplier_75.setString("20645005");
    noLegs_0_1.set(LegContractMultiplier_75);
    InstrumentLeg_75.insert(LegContractMultiplier_75.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_75(564303790);
    noLegs_0_1.set(LegContractMultiplierUnit_75);
    InstrumentLeg_75.insert(LegContractMultiplierUnit_75.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_75("MONTHYEAR_995967822");
    noLegs_0_1.set(LegContractSettlMonth_75);
    InstrumentLeg_75.insert(LegContractSettlMonth_75.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_75("COUNTRY_743023723");
    noLegs_0_1.set(LegCountryOfIssue_75);
    InstrumentLeg_75.insert(LegCountryOfIssue_75.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_75("LOCALMKTDATE_1091471481");
    noLegs_0_1.set(LegCouponPaymentDate_75);
    InstrumentLeg_75.insert(LegCouponPaymentDate_75.getString());
    FIX::LegCouponRate LegCouponRate_75;
    LegCouponRate_75.setString("90.290000");
    noLegs_0_1.set(LegCouponRate_75);
    InstrumentLeg_75.insert(LegCouponRate_75.getString());
    FIX::LegCreditRating LegCreditRating_75("STRING_1487553066");
    noLegs_0_1.set(LegCreditRating_75);
    InstrumentLeg_75.insert(LegCreditRating_75.getString());
    FIX::LegCurrency LegCurrency_75("USD");
    noLegs_0_1.set(LegCurrency_75);
    InstrumentLeg_75.insert(LegCurrency_75.getString());
    FIX::LegDatedDate LegDatedDate_75("LOCALMKTDATE_1005220182");
    noLegs_0_1.set(LegDatedDate_75);
    InstrumentLeg_75.insert(LegDatedDate_75.getString());
    FIX::LegExerciseStyle LegExerciseStyle_75(2099802088);
    noLegs_0_1.set(LegExerciseStyle_75);
    InstrumentLeg_75.insert(LegExerciseStyle_75.getString());
    FIX::LegFactor LegFactor_75;
    LegFactor_75.setString("19227601");
    noLegs_0_1.set(LegFactor_75);
    InstrumentLeg_75.insert(LegFactor_75.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_75(1718413760);
    noLegs_0_1.set(LegFlowScheduleType_75);
    InstrumentLeg_75.insert(LegFlowScheduleType_75.getString());
    FIX::LegInstrRegistry LegInstrRegistry_75("STRING_730443190");
    noLegs_0_1.set(LegInstrRegistry_75);
    InstrumentLeg_75.insert(LegInstrRegistry_75.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_75("LOCALMKTDATE_2094551025");
    noLegs_0_1.set(LegInterestAccrualDate_75);
    InstrumentLeg_75.insert(LegInterestAccrualDate_75.getString());
    FIX::LegIssueDate LegIssueDate_75("LOCALMKTDATE_2035236483");
    noLegs_0_1.set(LegIssueDate_75);
    InstrumentLeg_75.insert(LegIssueDate_75.getString());
    FIX::LegIssuer LegIssuer_75("STRING_2068113746");
    noLegs_0_1.set(LegIssuer_75);
    InstrumentLeg_75.insert(LegIssuer_75.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_75("STRING_1294294695");
    noLegs_0_1.set(LegLocaleOfIssue_75);
    InstrumentLeg_75.insert(LegLocaleOfIssue_75.getString());
    FIX::LegMaturityDate LegMaturityDate_75("LOCALMKTDATE_1541637755");
    noLegs_0_1.set(LegMaturityDate_75);
    InstrumentLeg_75.insert(LegMaturityDate_75.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_75("MONTHYEAR_289582006");
    noLegs_0_1.set(LegMaturityMonthYear_75);
    InstrumentLeg_75.insert(LegMaturityMonthYear_75.getString());
    FIX::LegMaturityTime LegMaturityTime_75("TZTIMEONLY_1783799113");
    noLegs_0_1.set(LegMaturityTime_75);
    InstrumentLeg_75.insert(LegMaturityTime_75.getString());
    FIX::LegOptAttribute LegOptAttribute_75('1');
    noLegs_0_1.set(LegOptAttribute_75);
    InstrumentLeg_75.insert(LegOptAttribute_75.getString());
    FIX::LegOptionRatio LegOptionRatio_75;
    LegOptionRatio_75.setString("7920484");
    noLegs_0_1.set(LegOptionRatio_75);
    InstrumentLeg_75.insert(LegOptionRatio_75.getString());
    FIX::LegPool LegPool_75("STRING_1726770153");
    noLegs_0_1.set(LegPool_75);
    InstrumentLeg_75.insert(LegPool_75.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_75("STRING_460401546");
    noLegs_0_1.set(LegPriceUnitOfMeasure_75);
    InstrumentLeg_75.insert(LegPriceUnitOfMeasure_75.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_75;
    LegPriceUnitOfMeasureQty_75.setString("18326246");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_75);
    InstrumentLeg_75.insert(LegPriceUnitOfMeasureQty_75.getString());
    FIX::LegProduct LegProduct_75(2044785509);
    noLegs_0_1.set(LegProduct_75);
    InstrumentLeg_75.insert(LegProduct_75.getString());
    FIX::LegPutOrCall LegPutOrCall_75(1671488177);
    noLegs_0_1.set(LegPutOrCall_75);
    InstrumentLeg_75.insert(LegPutOrCall_75.getString());
    FIX::LegRatioQty LegRatioQty_75;
    LegRatioQty_75.setString("17531425");
    noLegs_0_1.set(LegRatioQty_75);
    InstrumentLeg_75.insert(LegRatioQty_75.getString());
    FIX::LegRedemptionDate LegRedemptionDate_75("LOCALMKTDATE_709212507");
    noLegs_0_1.set(LegRedemptionDate_75);
    InstrumentLeg_75.insert(LegRedemptionDate_75.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_75("STRING_2023477763");
    noLegs_0_1.set(LegRepoCollateralSecurityType_75);
    InstrumentLeg_75.insert(LegRepoCollateralSecurityType_75.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_75;
    LegRepurchaseRate_75.setString("94.710000");
    noLegs_0_1.set(LegRepurchaseRate_75);
    InstrumentLeg_75.insert(LegRepurchaseRate_75.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_75(1273516297);
    noLegs_0_1.set(LegRepurchaseTerm_75);
    InstrumentLeg_75.insert(LegRepurchaseTerm_75.getString());
    FIX::LegSecurityDesc LegSecurityDesc_75("STRING_871961937");
    noLegs_0_1.set(LegSecurityDesc_75);
    InstrumentLeg_75.insert(LegSecurityDesc_75.getString());
    FIX::LegSecurityExchange LegSecurityExchange_75("EXCHANGE_265699546");
    noLegs_0_1.set(LegSecurityExchange_75);
    InstrumentLeg_75.insert(LegSecurityExchange_75.getString());
    FIX::LegSecurityID LegSecurityID_75("STRING_217504131");
    noLegs_0_1.set(LegSecurityID_75);
    InstrumentLeg_75.insert(LegSecurityID_75.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_75("STRING_1325660966");
    noLegs_0_1.set(LegSecurityIDSource_75);
    InstrumentLeg_75.insert(LegSecurityIDSource_75.getString());
    FIX::LegSecuritySubType LegSecuritySubType_75("STRING_1753252612");
    noLegs_0_1.set(LegSecuritySubType_75);
    InstrumentLeg_75.insert(LegSecuritySubType_75.getString());
    FIX::LegSecurityType LegSecurityType_75("STRING_573817048");
    noLegs_0_1.set(LegSecurityType_75);
    InstrumentLeg_75.insert(LegSecurityType_75.getString());
    FIX::LegSide LegSide_75('2');
    noLegs_0_1.set(LegSide_75);
    InstrumentLeg_75.insert(LegSide_75.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_75("STRING_610989146");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_75);
    InstrumentLeg_75.insert(LegStateOrProvinceOfIssue_75.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_75("EUR");
    noLegs_0_1.set(LegStrikeCurrency_75);
    InstrumentLeg_75.insert(LegStrikeCurrency_75.getString());
    FIX::LegStrikePrice LegStrikePrice_75;
    LegStrikePrice_75.setString("1819192");
    noLegs_0_1.set(LegStrikePrice_75);
    InstrumentLeg_75.insert(LegStrikePrice_75.getString());
    FIX::LegSymbol LegSymbol_75("STRING_1256578679");
    noLegs_0_1.set(LegSymbol_75);
    InstrumentLeg_75.insert(LegSymbol_75.getString());
    FIX::LegSymbolSfx LegSymbolSfx_75("STRING_2128845058");
    noLegs_0_1.set(LegSymbolSfx_75);
    InstrumentLeg_75.insert(LegSymbolSfx_75.getString());
    FIX::LegTimeUnit LegTimeUnit_75("STRING_69672094");
    noLegs_0_1.set(LegTimeUnit_75);
    InstrumentLeg_75.insert(LegTimeUnit_75.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_75("STRING_1177208778");
    noLegs_0_1.set(LegUnitOfMeasure_75);
    InstrumentLeg_75.insert(LegUnitOfMeasure_75.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_75;
    LegUnitOfMeasureQty_75.setString("12756561");
    noLegs_0_1.set(LegUnitOfMeasureQty_75);
    InstrumentLeg_75.insert(LegUnitOfMeasureQty_75.getString());
    all_values.push_back(InstrumentLeg_75);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_154;
      FIX::LegSecurityAltID LegSecurityAltID_154("STRING_1466790784");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_154);
      LegSecAltIDGrp_NoLegSecurityAltID_154.insert(LegSecurityAltID_154.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_154("STRING_911971570");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_154);
      LegSecAltIDGrp_NoLegSecurityAltID_154.insert(LegSecurityAltIDSource_154.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_154);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_44;
  FIX::AttachmentPoint AttachmentPoint_44;
  AttachmentPoint_44.setString("98.100000");
  msg.set(AttachmentPoint_44);
  Instrument_44.insert(AttachmentPoint_44.getString());
  FIX::CFICode CFICode_44("STRING_111355614");
  msg.set(CFICode_44);
  Instrument_44.insert(CFICode_44.getString());
  FIX::CPProgram CPProgram_44(99);
  msg.set(CPProgram_44);
  Instrument_44.insert(CPProgram_44.getString());
  FIX::CPRegType CPRegType_44("STRING_1045071357");
  msg.set(CPRegType_44);
  Instrument_44.insert(CPRegType_44.getString());
  FIX::CapPrice CapPrice_44;
  CapPrice_44.setString("19439802");
  msg.set(CapPrice_44);
  Instrument_44.insert(CapPrice_44.getString());
  FIX::ContractMultiplier ContractMultiplier_44;
  ContractMultiplier_44.setString("3885599");
  msg.set(ContractMultiplier_44);
  Instrument_44.insert(ContractMultiplier_44.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_44(0);
  msg.set(ContractMultiplierUnit_44);
  Instrument_44.insert(ContractMultiplierUnit_44.getString());
  FIX::ContractSettlMonth ContractSettlMonth_44("MONTHYEAR_1549639153");
  msg.set(ContractSettlMonth_44);
  Instrument_44.insert(ContractSettlMonth_44.getString());
  FIX::CountryOfIssue CountryOfIssue_44("COUNTRY_1097772443");
  msg.set(CountryOfIssue_44);
  Instrument_44.insert(CountryOfIssue_44.getString());
  FIX::CouponPaymentDate CouponPaymentDate_44("LOCALMKTDATE_445070001");
  msg.set(CouponPaymentDate_44);
  Instrument_44.insert(CouponPaymentDate_44.getString());
  FIX::CouponRate CouponRate_44;
  CouponRate_44.setString("49.760000");
  msg.set(CouponRate_44);
  Instrument_44.insert(CouponRate_44.getString());
  FIX::CreditRating CreditRating_44("STRING_223805093");
  msg.set(CreditRating_44);
  Instrument_44.insert(CreditRating_44.getString());
  FIX::DatedDate DatedDate_44("LOCALMKTDATE_1317031938");
  msg.set(DatedDate_44);
  Instrument_44.insert(DatedDate_44.getString());
  FIX::DetachmentPoint DetachmentPoint_44;
  DetachmentPoint_44.setString("45.230000");
  msg.set(DetachmentPoint_44);
  Instrument_44.insert(DetachmentPoint_44.getString());
  FIX::EncodedIssuer EncodedIssuer_44("DATA_441309224");
  msg.set(EncodedIssuer_44);
  Instrument_44.insert(EncodedIssuer_44.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_44(495209257);
  msg.set(EncodedIssuerLen_44);
  Instrument_44.insert(EncodedIssuerLen_44.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_44("DATA_943783487");
  msg.set(EncodedSecurityDesc_44);
  Instrument_44.insert(EncodedSecurityDesc_44.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_44(1015126272);
  msg.set(EncodedSecurityDescLen_44);
  Instrument_44.insert(EncodedSecurityDescLen_44.getString());
  FIX::ExerciseStyle ExerciseStyle_44(1);
  msg.set(ExerciseStyle_44);
  Instrument_44.insert(ExerciseStyle_44.getString());
  FIX::Factor Factor_44;
  Factor_44.setString("15547726");
  msg.set(Factor_44);
  Instrument_44.insert(Factor_44.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_44(false);
  msg.set(FlexProductEligibilityIndicator_44);
  Instrument_44.insert(FlexProductEligibilityIndicator_44.getString());
  FIX::FlexibleIndicator FlexibleIndicator_44(true);
  msg.set(FlexibleIndicator_44);
  Instrument_44.insert(FlexibleIndicator_44.getString());
  FIX::FloorPrice FloorPrice_44;
  FloorPrice_44.setString("17366918");
  msg.set(FloorPrice_44);
  Instrument_44.insert(FloorPrice_44.getString());
  FIX::FlowScheduleType FlowScheduleType_44(3);
  msg.set(FlowScheduleType_44);
  Instrument_44.insert(FlowScheduleType_44.getString());
  FIX::InstrRegistry InstrRegistry_44("STRING_769882228");
  msg.set(InstrRegistry_44);
  Instrument_44.insert(InstrRegistry_44.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_44('1');
  msg.set(InstrmtAssignmentMethod_44);
  Instrument_44.insert(InstrmtAssignmentMethod_44.getString());
  FIX::InterestAccrualDate InterestAccrualDate_44("LOCALMKTDATE_1827565571");
  msg.set(InterestAccrualDate_44);
  Instrument_44.insert(InterestAccrualDate_44.getString());
  FIX::IssueDate IssueDate_44("LOCALMKTDATE_2045538333");
  msg.set(IssueDate_44);
  Instrument_44.insert(IssueDate_44.getString());
  FIX::Issuer Issuer_44("STRING_1270190187");
  msg.set(Issuer_44);
  Instrument_44.insert(Issuer_44.getString());
  FIX::ListMethod ListMethod_44(1);
  msg.set(ListMethod_44);
  Instrument_44.insert(ListMethod_44.getString());
  FIX::LocaleOfIssue LocaleOfIssue_44("STRING_810026255");
  msg.set(LocaleOfIssue_44);
  Instrument_44.insert(LocaleOfIssue_44.getString());
  FIX::MaturityDate MaturityDate_44("LOCALMKTDATE_1854859998");
  msg.set(MaturityDate_44);
  Instrument_44.insert(MaturityDate_44.getString());
  FIX::MaturityMonthYear MaturityMonthYear_44("MONTHYEAR_1258228321");
  msg.set(MaturityMonthYear_44);
  Instrument_44.insert(MaturityMonthYear_44.getString());
  FIX::MaturityTime MaturityTime_44("TZTIMEONLY_1301284330");
  msg.set(MaturityTime_44);
  Instrument_44.insert(MaturityTime_44.getString());
  FIX::MinPriceIncrement MinPriceIncrement_44;
  MinPriceIncrement_44.setString("7524477");
  msg.set(MinPriceIncrement_44);
  Instrument_44.insert(MinPriceIncrement_44.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_44;
  MinPriceIncrementAmount_44.setString("10547249");
  msg.set(MinPriceIncrementAmount_44);
  Instrument_44.insert(MinPriceIncrementAmount_44.getString());
  FIX::NTPositionLimit NTPositionLimit_44(1689844266);
  msg.set(NTPositionLimit_44);
  Instrument_44.insert(NTPositionLimit_44.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_44;
  NotionalPercentageOutstanding_44.setString("35.930000");
  msg.set(NotionalPercentageOutstanding_44);
  Instrument_44.insert(NotionalPercentageOutstanding_44.getString());
  FIX::OptAttribute OptAttribute_44('4');
  msg.set(OptAttribute_44);
  Instrument_44.insert(OptAttribute_44.getString());
  FIX::OptPayoutAmount OptPayoutAmount_44;
  OptPayoutAmount_44.setString("6401330");
  msg.set(OptPayoutAmount_44);
  Instrument_44.insert(OptPayoutAmount_44.getString());
  FIX::OptPayoutType OptPayoutType_44(2);
  msg.set(OptPayoutType_44);
  Instrument_44.insert(OptPayoutType_44.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_44;
  OriginalNotionalPercentageOutstanding_44.setString("53.930000");
  msg.set(OriginalNotionalPercentageOutstanding_44);
  Instrument_44.insert(OriginalNotionalPercentageOutstanding_44.getString());
  FIX::Pool Pool_44("STRING_863938155");
  msg.set(Pool_44);
  Instrument_44.insert(Pool_44.getString());
  FIX::PositionLimit PositionLimit_44(936141884);
  msg.set(PositionLimit_44);
  Instrument_44.insert(PositionLimit_44.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_44("STRING_STD");
  msg.set(PriceQuoteMethod_44);
  Instrument_44.insert(PriceQuoteMethod_44.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_44("STRING_1305247379");
  msg.set(PriceUnitOfMeasure_44);
  Instrument_44.insert(PriceUnitOfMeasure_44.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_44;
  PriceUnitOfMeasureQty_44.setString("14313511");
  msg.set(PriceUnitOfMeasureQty_44);
  Instrument_44.insert(PriceUnitOfMeasureQty_44.getString());
  FIX::Product Product_46(12);
  msg.set(Product_46);
  Instrument_44.insert(Product_46.getString());
  FIX::ProductComplex ProductComplex_44("STRING_172890003");
  msg.set(ProductComplex_44);
  Instrument_44.insert(ProductComplex_44.getString());
  FIX::PutOrCall PutOrCall_44(1);
  msg.set(PutOrCall_44);
  Instrument_44.insert(PutOrCall_44.getString());
  FIX::RedemptionDate RedemptionDate_44("LOCALMKTDATE_1070798741");
  msg.set(RedemptionDate_44);
  Instrument_44.insert(RedemptionDate_44.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_44("STRING_1714151765");
  msg.set(RepoCollateralSecurityType_44);
  Instrument_44.insert(RepoCollateralSecurityType_44.getString());
  FIX::RepurchaseRate RepurchaseRate_44;
  RepurchaseRate_44.setString("50.970000");
  msg.set(RepurchaseRate_44);
  Instrument_44.insert(RepurchaseRate_44.getString());
  FIX::RepurchaseTerm RepurchaseTerm_44(660006986);
  msg.set(RepurchaseTerm_44);
  Instrument_44.insert(RepurchaseTerm_44.getString());
  FIX::RestructuringType RestructuringType_44("STRING_MM");
  msg.set(RestructuringType_44);
  Instrument_44.insert(RestructuringType_44.getString());
  FIX::SecurityDesc SecurityDesc_44("STRING_1596497326");
  msg.set(SecurityDesc_44);
  Instrument_44.insert(SecurityDesc_44.getString());
  FIX::SecurityExchange SecurityExchange_44("EXCHANGE_318887324");
  msg.set(SecurityExchange_44);
  Instrument_44.insert(SecurityExchange_44.getString());
  FIX::SecurityGroup SecurityGroup_44("STRING_2044590481");
  msg.set(SecurityGroup_44);
  Instrument_44.insert(SecurityGroup_44.getString());
  FIX::SecurityID SecurityID_44("STRING_1494552011");
  msg.set(SecurityID_44);
  Instrument_44.insert(SecurityID_44.getString());
  FIX::SecurityIDSource SecurityIDSource_44("STRING_1");
  msg.set(SecurityIDSource_44);
  Instrument_44.insert(SecurityIDSource_44.getString());
  FIX::SecurityStatus SecurityStatus_44("STRING_1");
  msg.set(SecurityStatus_44);
  Instrument_44.insert(SecurityStatus_44.getString());
  FIX::SecuritySubType SecuritySubType_45("STRING_157094619");
  msg.set(SecuritySubType_45);
  Instrument_44.insert(SecuritySubType_45.getString());
  FIX::SecurityType SecurityType_46("STRING_YANK");
  msg.set(SecurityType_46);
  Instrument_44.insert(SecurityType_46.getString());
  FIX::Seniority Seniority_44("STRING_SB");
  msg.set(Seniority_44);
  Instrument_44.insert(Seniority_44.getString());
  FIX::SettlMethod SettlMethod_44('P');
  msg.set(SettlMethod_44);
  Instrument_44.insert(SettlMethod_44.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_44("STRING_2048901569");
  msg.set(SettleOnOpenFlag_44);
  Instrument_44.insert(SettleOnOpenFlag_44.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_44("STRING_1209449124");
  msg.set(StateOrProvinceOfIssue_44);
  Instrument_44.insert(StateOrProvinceOfIssue_44.getString());
  FIX::StrikeCurrency StrikeCurrency_44("JPY");
  msg.set(StrikeCurrency_44);
  Instrument_44.insert(StrikeCurrency_44.getString());
  FIX::StrikeMultiplier StrikeMultiplier_44;
  StrikeMultiplier_44.setString("16663295");
  msg.set(StrikeMultiplier_44);
  Instrument_44.insert(StrikeMultiplier_44.getString());
  FIX::StrikePrice StrikePrice_44;
  StrikePrice_44.setString("16408726");
  msg.set(StrikePrice_44);
  Instrument_44.insert(StrikePrice_44.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_44(1);
  msg.set(StrikePriceBoundaryMethod_44);
  Instrument_44.insert(StrikePriceBoundaryMethod_44.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_44;
  StrikePriceBoundaryPrecision_44.setString("12.860000");
  msg.set(StrikePriceBoundaryPrecision_44);
  Instrument_44.insert(StrikePriceBoundaryPrecision_44.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_44(2);
  msg.set(StrikePriceDeterminationMethod_44);
  Instrument_44.insert(StrikePriceDeterminationMethod_44.getString());
  FIX::StrikeValue StrikeValue_44;
  StrikeValue_44.setString("17781933");
  msg.set(StrikeValue_44);
  Instrument_44.insert(StrikeValue_44.getString());
  FIX::Symbol Symbol_44("STRING_1767767554");
  msg.set(Symbol_44);
  Instrument_44.insert(Symbol_44.getString());
  FIX::SymbolSfx SymbolSfx_44("STRING_CD");
  msg.set(SymbolSfx_44);
  Instrument_44.insert(SymbolSfx_44.getString());
  FIX::TimeUnit TimeUnit_44("STRING_Yr");
  msg.set(TimeUnit_44);
  Instrument_44.insert(TimeUnit_44.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_44(2);
  msg.set(UnderlyingPriceDeterminationMethod_44);
  Instrument_44.insert(UnderlyingPriceDeterminationMethod_44.getString());
  FIX::UnitOfMeasure UnitOfMeasure_44("STRING_Bu");
  msg.set(UnitOfMeasure_44);
  Instrument_44.insert(UnitOfMeasure_44.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_44;
  UnitOfMeasureQty_44.setString("11001551");
  msg.set(UnitOfMeasureQty_44);
  Instrument_44.insert(UnitOfMeasureQty_44.getString());
  FIX::ValuationMethod ValuationMethod_44("STRING_EQTY");
  msg.set(ValuationMethod_44);
  Instrument_44.insert(ValuationMethod_44.getString());
  all_values.push_back(Instrument_44);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderCross::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_87;
    FIX::ComplexEventCondition ComplexEventCondition_87(1);
    noComplexEvents_0_0.set(ComplexEventCondition_87);
    ComplexEvents_NoComplexEvents_87.insert(ComplexEventCondition_87.getString());
    FIX::ComplexEventPrice ComplexEventPrice_87;
    ComplexEventPrice_87.setString("8671157");
    noComplexEvents_0_0.set(ComplexEventPrice_87);
    ComplexEvents_NoComplexEvents_87.insert(ComplexEventPrice_87.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_87(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_87);
    ComplexEvents_NoComplexEvents_87.insert(ComplexEventPriceBoundaryMethod_87.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_87;
    ComplexEventPriceBoundaryPrecision_87.setString("38.920000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_87);
    ComplexEvents_NoComplexEvents_87.insert(ComplexEventPriceBoundaryPrecision_87.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_87(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_87);
    ComplexEvents_NoComplexEvents_87.insert(ComplexEventPriceTimeType_87.getString());
    FIX::ComplexEventType ComplexEventType_87(9);
    noComplexEvents_0_0.set(ComplexEventType_87);
    ComplexEvents_NoComplexEvents_87.insert(ComplexEventType_87.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_87;
    ComplexOptPayoutAmount_87.setString("7228522");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_87);
    ComplexEvents_NoComplexEvents_87.insert(ComplexOptPayoutAmount_87.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_87);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_179;
      FIX::ComplexEventEndDate ComplexEventEndDate_179(FIX::UTCTIMESTAMP(3, 11, 45, 0, 9, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_179);
      ComplexEventDates_NoComplexEventDates_179.insert(ComplexEventEndDate_179.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_179(FIX::UTCTIMESTAMP(10, 2, 46, 18, 5, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_179);
      ComplexEventDates_NoComplexEventDates_179.insert(ComplexEventStartDate_179.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_179);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_366;
        FIX::ComplexEventEndTime ComplexEventEndTime_366(FIX::UTCTIMEONLY(11, 25, 8));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_366);
        ComplexEventTimes_NoComplexEventTimes_366.insert(ComplexEventEndTime_366.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_366(FIX::UTCTIMEONLY(2, 43, 39));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_366);
        ComplexEventTimes_NoComplexEventTimes_366.insert(ComplexEventStartTime_366.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_366);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_367;
        FIX::ComplexEventEndTime ComplexEventEndTime_367(FIX::UTCTIMEONLY(12, 38, 13));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_367);
        ComplexEventTimes_NoComplexEventTimes_367.insert(ComplexEventEndTime_367.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_367(FIX::UTCTIMEONLY(5, 49, 11));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_367);
        ComplexEventTimes_NoComplexEventTimes_367.insert(ComplexEventStartTime_367.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_367);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_368;
        FIX::ComplexEventEndTime ComplexEventEndTime_368(FIX::UTCTIMEONLY(16, 14, 6));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_368);
        ComplexEventTimes_NoComplexEventTimes_368.insert(ComplexEventEndTime_368.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_368(FIX::UTCTIMEONLY(15, 7, 37));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_368);
        ComplexEventTimes_NoComplexEventTimes_368.insert(ComplexEventStartTime_368.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_368);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_180;
      FIX::ComplexEventEndDate ComplexEventEndDate_180(FIX::UTCTIMESTAMP(2, 23, 28, 26, 8, 2001));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_180);
      ComplexEventDates_NoComplexEventDates_180.insert(ComplexEventEndDate_180.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_180(FIX::UTCTIMESTAMP(18, 20, 57, 5, 3, 2014));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_180);
      ComplexEventDates_NoComplexEventDates_180.insert(ComplexEventStartDate_180.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_180);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_369;
        FIX::ComplexEventEndTime ComplexEventEndTime_369(FIX::UTCTIMEONLY(20, 55, 15));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_369);
        ComplexEventTimes_NoComplexEventTimes_369.insert(ComplexEventEndTime_369.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_369(FIX::UTCTIMEONLY(12, 56, 32));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_369);
        ComplexEventTimes_NoComplexEventTimes_369.insert(ComplexEventStartTime_369.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_369);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_370;
        FIX::ComplexEventEndTime ComplexEventEndTime_370(FIX::UTCTIMEONLY(16, 39, 43));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_370);
        ComplexEventTimes_NoComplexEventTimes_370.insert(ComplexEventEndTime_370.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_370(FIX::UTCTIMEONLY(22, 51, 14));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_370);
        ComplexEventTimes_NoComplexEventTimes_370.insert(ComplexEventStartTime_370.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_370);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_88;
    FIX::ComplexEventCondition ComplexEventCondition_88(2);
    noComplexEvents_0_1.set(ComplexEventCondition_88);
    ComplexEvents_NoComplexEvents_88.insert(ComplexEventCondition_88.getString());
    FIX::ComplexEventPrice ComplexEventPrice_88;
    ComplexEventPrice_88.setString("21409916");
    noComplexEvents_0_1.set(ComplexEventPrice_88);
    ComplexEvents_NoComplexEvents_88.insert(ComplexEventPrice_88.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_88(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_88);
    ComplexEvents_NoComplexEvents_88.insert(ComplexEventPriceBoundaryMethod_88.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_88;
    ComplexEventPriceBoundaryPrecision_88.setString("88.070000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_88);
    ComplexEvents_NoComplexEvents_88.insert(ComplexEventPriceBoundaryPrecision_88.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_88(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_88);
    ComplexEvents_NoComplexEvents_88.insert(ComplexEventPriceTimeType_88.getString());
    FIX::ComplexEventType ComplexEventType_88(1);
    noComplexEvents_0_1.set(ComplexEventType_88);
    ComplexEvents_NoComplexEvents_88.insert(ComplexEventType_88.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_88;
    ComplexOptPayoutAmount_88.setString("7815379");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_88);
    ComplexEvents_NoComplexEvents_88.insert(ComplexOptPayoutAmount_88.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_88);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_181;
      FIX::ComplexEventEndDate ComplexEventEndDate_181(FIX::UTCTIMESTAMP(2, 13, 4, 0, 2, 2003));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_181);
      ComplexEventDates_NoComplexEventDates_181.insert(ComplexEventEndDate_181.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_181(FIX::UTCTIMESTAMP(9, 16, 22, 11, 6, 2001));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_181);
      ComplexEventDates_NoComplexEventDates_181.insert(ComplexEventStartDate_181.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_181);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_371;
        FIX::ComplexEventEndTime ComplexEventEndTime_371(FIX::UTCTIMEONLY(11, 10, 2));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_371);
        ComplexEventTimes_NoComplexEventTimes_371.insert(ComplexEventEndTime_371.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_371(FIX::UTCTIMEONLY(8, 45, 2));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_371);
        ComplexEventTimes_NoComplexEventTimes_371.insert(ComplexEventStartTime_371.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_371);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_182;
      FIX::ComplexEventEndDate ComplexEventEndDate_182(FIX::UTCTIMESTAMP(6, 32, 59, 9, 9, 2000));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_182);
      ComplexEventDates_NoComplexEventDates_182.insert(ComplexEventEndDate_182.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_182(FIX::UTCTIMESTAMP(19, 0, 19, 8, 10, 2001));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_182);
      ComplexEventDates_NoComplexEventDates_182.insert(ComplexEventStartDate_182.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_182);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_372;
        FIX::ComplexEventEndTime ComplexEventEndTime_372(FIX::UTCTIMEONLY(22, 6, 58));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_372);
        ComplexEventTimes_NoComplexEventTimes_372.insert(ComplexEventEndTime_372.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_372(FIX::UTCTIMEONLY(15, 9, 13));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_372);
        ComplexEventTimes_NoComplexEventTimes_372.insert(ComplexEventStartTime_372.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_372);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_373;
        FIX::ComplexEventEndTime ComplexEventEndTime_373(FIX::UTCTIMEONLY(1, 15, 51));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_373);
        ComplexEventTimes_NoComplexEventTimes_373.insert(ComplexEventEndTime_373.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_373(FIX::UTCTIMEONLY(0, 36, 56));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_373);
        ComplexEventTimes_NoComplexEventTimes_373.insert(ComplexEventStartTime_373.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_373);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::NewOrderCross::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_81;
    FIX::EventDate EventDate_81("LOCALMKTDATE_2110575906");
    noEvents_0_0.set(EventDate_81);
    EvntGrp_NoEvents_81.insert(EventDate_81.getString());
    FIX::EventPx EventPx_81;
    EventPx_81.setString("12836624");
    noEvents_0_0.set(EventPx_81);
    EvntGrp_NoEvents_81.insert(EventPx_81.getString());
    FIX::EventText EventText_81("STRING_919994127");
    noEvents_0_0.set(EventText_81);
    EvntGrp_NoEvents_81.insert(EventText_81.getString());
    FIX::EventTime EventTime_81(FIX::UTCTIMESTAMP(4, 13, 2, 4, 3, 2007));
    noEvents_0_0.set(EventTime_81);
    EvntGrp_NoEvents_81.insert(EventTime_81.getString());
    FIX::EventType EventType_81(13);
    noEvents_0_0.set(EventType_81);
    EvntGrp_NoEvents_81.insert(EventType_81.getString());
    all_values.push_back(EvntGrp_NoEvents_81);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_82;
    FIX::EventDate EventDate_82("LOCALMKTDATE_1636802847");
    noEvents_0_1.set(EventDate_82);
    EvntGrp_NoEvents_82.insert(EventDate_82.getString());
    FIX::EventPx EventPx_82;
    EventPx_82.setString("15344611");
    noEvents_0_1.set(EventPx_82);
    EvntGrp_NoEvents_82.insert(EventPx_82.getString());
    FIX::EventText EventText_82("STRING_1348530381");
    noEvents_0_1.set(EventText_82);
    EvntGrp_NoEvents_82.insert(EventText_82.getString());
    FIX::EventTime EventTime_82(FIX::UTCTIMESTAMP(5, 19, 45, 14, 11, 2017));
    noEvents_0_1.set(EventTime_82);
    EvntGrp_NoEvents_82.insert(EventTime_82.getString());
    FIX::EventType EventType_82(16);
    noEvents_0_1.set(EventType_82);
    EvntGrp_NoEvents_82.insert(EventType_82.getString());
    all_values.push_back(EvntGrp_NoEvents_82);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderCross::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_82;
    FIX::InstrumentPartyID InstrumentPartyID_82("STRING_1162132800");
    noInstrumentParties_0_0.set(InstrumentPartyID_82);
    InstrumentParties_NoInstrumentParties_82.insert(InstrumentPartyID_82.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_82('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_82);
    InstrumentParties_NoInstrumentParties_82.insert(InstrumentPartyIDSource_82.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_82(411047499);
    noInstrumentParties_0_0.set(InstrumentPartyRole_82);
    InstrumentParties_NoInstrumentParties_82.insert(InstrumentPartyRole_82.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_82);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182;
      FIX::InstrumentPartySubID InstrumentPartySubID_182("STRING_1688524619");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_182);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182.insert(InstrumentPartySubID_182.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_182(1534725856);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_182);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182.insert(InstrumentPartySubIDType_182.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183;
      FIX::InstrumentPartySubID InstrumentPartySubID_183("STRING_1290822649");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_183);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183.insert(InstrumentPartySubID_183.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_183(1842094827);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_183);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183.insert(InstrumentPartySubIDType_183.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184;
      FIX::InstrumentPartySubID InstrumentPartySubID_184("STRING_1497818114");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_184);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184.insert(InstrumentPartySubID_184.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_184(427001469);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_184);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184.insert(InstrumentPartySubIDType_184.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderCross::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_94;
    FIX::SecurityAltID SecurityAltID_94("STRING_736116842");
    noSecurityAltID_0_0.set(SecurityAltID_94);
    SecAltIDGrp_NoSecurityAltID_94.insert(SecurityAltID_94.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_94("STRING_967197650");
    noSecurityAltID_0_0.set(SecurityAltIDSource_94);
    SecAltIDGrp_NoSecurityAltID_94.insert(SecurityAltIDSource_94.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_94);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_95;
    FIX::SecurityAltID SecurityAltID_95("STRING_935077680");
    noSecurityAltID_0_1.set(SecurityAltID_95);
    SecAltIDGrp_NoSecurityAltID_95.insert(SecurityAltID_95.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_95("STRING_2091803884");
    noSecurityAltID_0_1.set(SecurityAltIDSource_95);
    SecAltIDGrp_NoSecurityAltID_95.insert(SecurityAltIDSource_95.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_95);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_88;
  FIX::SecurityXML SecurityXML_89("XMLDATA_634100874");
  msg.set(SecurityXML_89);
  FIX::SecurityXMLLen SecurityXMLLen_44(596280366);
  msg.set(SecurityXMLLen_44);
  FIX::SecurityXMLSchema SecurityXMLSchema_44("STRING_1176446830");
  msg.set(SecurityXMLSchema_44);
  SecurityXML_88.insert(SecurityXMLSchema_44.getString());
  all_values.push_back(SecurityXML_88);

  // PegInstructions
  multiset<string> PegInstructions_3;
  FIX::PegLimitType PegLimitType_3(2);
  msg.set(PegLimitType_3);
  PegInstructions_3.insert(PegLimitType_3.getString());
  FIX::PegMoveType PegMoveType_3(1);
  msg.set(PegMoveType_3);
  PegInstructions_3.insert(PegMoveType_3.getString());
  FIX::PegOffsetType PegOffsetType_3(0);
  msg.set(PegOffsetType_3);
  PegInstructions_3.insert(PegOffsetType_3.getString());
  FIX::PegOffsetValue PegOffsetValue_3;
  PegOffsetValue_3.setString("1152207");
  msg.set(PegOffsetValue_3);
  PegInstructions_3.insert(PegOffsetValue_3.getString());
  FIX::PegPriceType PegPriceType_3(5);
  msg.set(PegPriceType_3);
  PegInstructions_3.insert(PegPriceType_3.getString());
  FIX::PegRoundDirection PegRoundDirection_3(2);
  msg.set(PegRoundDirection_3);
  PegInstructions_3.insert(PegRoundDirection_3.getString());
  FIX::PegScope PegScope_3(4);
  msg.set(PegScope_3);
  PegInstructions_3.insert(PegScope_3.getString());
  FIX::PegSecurityDesc PegSecurityDesc_3("STRING_878408277");
  msg.set(PegSecurityDesc_3);
  PegInstructions_3.insert(PegSecurityDesc_3.getString());
  FIX::PegSecurityID PegSecurityID_3("STRING_1598733216");
  msg.set(PegSecurityID_3);
  PegInstructions_3.insert(PegSecurityID_3.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_3("STRING_176827969");
  msg.set(PegSecurityIDSource_3);
  PegInstructions_3.insert(PegSecurityIDSource_3.getString());
  FIX::PegSymbol PegSymbol_3("STRING_1152851684");
  msg.set(PegSymbol_3);
  PegInstructions_3.insert(PegSymbol_3.getString());
  all_values.push_back(PegInstructions_3);

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::NewOrderCross::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_3;
    FIX::RootPartyID RootPartyID_3("STRING_457586677");
    noRootPartyIDs_0_0.set(RootPartyID_3);
    RootParties_NoRootPartyIDs_3.insert(RootPartyID_3.getString());
    FIX::RootPartyIDSource RootPartyIDSource_3('1');
    noRootPartyIDs_0_0.set(RootPartyIDSource_3);
    RootParties_NoRootPartyIDs_3.insert(RootPartyIDSource_3.getString());
    FIX::RootPartyRole RootPartyRole_3(1964535846);
    noRootPartyIDs_0_0.set(RootPartyRole_3);
    RootParties_NoRootPartyIDs_3.insert(RootPartyRole_3.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_3);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_6;
      FIX::RootPartySubID RootPartySubID_6("STRING_931941330");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_6);
      RootSubParties_NoRootPartySubIDs_6.insert(RootPartySubID_6.getString());
      FIX::RootPartySubIDType RootPartySubIDType_6(1505576817);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_6);
      RootSubParties_NoRootPartySubIDs_6.insert(RootPartySubIDType_6.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_6);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_7;
      FIX::RootPartySubID RootPartySubID_7("STRING_255876385");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_7);
      RootSubParties_NoRootPartySubIDs_7.insert(RootPartySubID_7.getString());
      FIX::RootPartySubIDType RootPartySubIDType_7(75280331);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_7);
      RootSubParties_NoRootPartySubIDs_7.insert(RootPartySubIDType_7.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_7);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_8;
      FIX::RootPartySubID RootPartySubID_8("STRING_1200187996");
      noRootPartySubIDs_0_1_2.set(RootPartySubID_8);
      RootSubParties_NoRootPartySubIDs_8.insert(RootPartySubID_8.getString());
      FIX::RootPartySubIDType RootPartySubIDType_8(1753694499);
      noRootPartySubIDs_0_1_2.set(RootPartySubIDType_8);
      RootSubParties_NoRootPartySubIDs_8.insert(RootPartySubIDType_8.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_8);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_4;
    FIX::RootPartyID RootPartyID_4("STRING_502281801");
    noRootPartyIDs_0_1.set(RootPartyID_4);
    RootParties_NoRootPartyIDs_4.insert(RootPartyID_4.getString());
    FIX::RootPartyIDSource RootPartyIDSource_4('1');
    noRootPartyIDs_0_1.set(RootPartyIDSource_4);
    RootParties_NoRootPartyIDs_4.insert(RootPartyIDSource_4.getString());
    FIX::RootPartyRole RootPartyRole_4(342327694);
    noRootPartyIDs_0_1.set(RootPartyRole_4);
    RootParties_NoRootPartyIDs_4.insert(RootPartyRole_4.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_4);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_9;
      FIX::RootPartySubID RootPartySubID_9("STRING_602387335");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_9);
      RootSubParties_NoRootPartySubIDs_9.insert(RootPartySubID_9.getString());
      FIX::RootPartySubIDType RootPartySubIDType_9(286647930);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_9);
      RootSubParties_NoRootPartySubIDs_9.insert(RootPartySubIDType_9.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_9);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_10;
      FIX::RootPartySubID RootPartySubID_10("STRING_2103580325");
      noRootPartySubIDs_1_1_1.set(RootPartySubID_10);
      RootSubParties_NoRootPartySubIDs_10.insert(RootPartySubID_10.getString());
      FIX::RootPartySubIDType RootPartySubIDType_10(1198667701);
      noRootPartySubIDs_1_1_1.set(RootPartySubIDType_10);
      RootSubParties_NoRootPartySubIDs_10.insert(RootPartySubIDType_10.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_10);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_11;
      FIX::RootPartySubID RootPartySubID_11("STRING_1463094760");
      noRootPartySubIDs_1_1_2.set(RootPartySubID_11);
      RootSubParties_NoRootPartySubIDs_11.insert(RootPartySubID_11.getString());
      FIX::RootPartySubIDType RootPartySubIDType_11(870270683);
      noRootPartySubIDs_1_1_2.set(RootPartySubIDType_11);
      RootSubParties_NoRootPartySubIDs_11.insert(RootPartySubIDType_11.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_11);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  // SideCrossOrdModGrp
  // Group SideCrossOrdModGrp.NoSides
  {
    FIX50SP2::NewOrderCross::NoSides noSides_0_0;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_2;
    FIX::Account Account_16("STRING_2026519125");
    noSides_0_0.set(Account_16);
    SideCrossOrdModGrp_NoSides_2.insert(Account_16.getString());
    FIX::AccountType AccountType_13(8);
    noSides_0_0.set(AccountType_13);
    SideCrossOrdModGrp_NoSides_2.insert(AccountType_13.getString());
    FIX::AcctIDSource AcctIDSource_9(3);
    noSides_0_0.set(AcctIDSource_9);
    SideCrossOrdModGrp_NoSides_2.insert(AcctIDSource_9.getString());
    FIX::AllocID AllocID_11("STRING_1104182710");
    noSides_0_0.set(AllocID_11);
    SideCrossOrdModGrp_NoSides_2.insert(AllocID_11.getString());
    FIX::BookingType BookingType_14(1);
    noSides_0_0.set(BookingType_14);
    SideCrossOrdModGrp_NoSides_2.insert(BookingType_14.getString());
    FIX::BookingUnit BookingUnit_4('2');
    noSides_0_0.set(BookingUnit_4);
    SideCrossOrdModGrp_NoSides_2.insert(BookingUnit_4.getString());
    FIX::CashMargin CashMargin_4('3');
    noSides_0_0.set(CashMargin_4);
    SideCrossOrdModGrp_NoSides_2.insert(CashMargin_4.getString());
    FIX::ClOrdID ClOrdID_28("STRING_2090332071");
    noSides_0_0.set(ClOrdID_28);
    SideCrossOrdModGrp_NoSides_2.insert(ClOrdID_28.getString());
    FIX::ClOrdLinkID ClOrdLinkID_7("STRING_625822152");
    noSides_0_0.set(ClOrdLinkID_7);
    SideCrossOrdModGrp_NoSides_2.insert(ClOrdLinkID_7.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_9("STRING_3");
    noSides_0_0.set(ClearingFeeIndicator_9);
    SideCrossOrdModGrp_NoSides_2.insert(ClearingFeeIndicator_9.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_3(0);
    noSides_0_0.set(CoveredOrUncovered_3);
    SideCrossOrdModGrp_NoSides_2.insert(CoveredOrUncovered_3.getString());
    FIX::CustOrderCapacity CustOrderCapacity_7(1);
    noSides_0_0.set(CustOrderCapacity_7);
    SideCrossOrdModGrp_NoSides_2.insert(CustOrderCapacity_7.getString());
    FIX::DayBookingInst DayBookingInst_4('2');
    noSides_0_0.set(DayBookingInst_4);
    SideCrossOrdModGrp_NoSides_2.insert(DayBookingInst_4.getString());
    FIX::EncodedText EncodedText_61("DATA_1269069277");
    noSides_0_0.set(EncodedText_61);
    SideCrossOrdModGrp_NoSides_2.insert(EncodedText_61.getString());
    FIX::EncodedTextLen EncodedTextLen_61(1725264318);
    noSides_0_0.set(EncodedTextLen_61);
    SideCrossOrdModGrp_NoSides_2.insert(EncodedTextLen_61.getString());
    FIX::ForexReq ForexReq_4(true);
    noSides_0_0.set(ForexReq_4);
    SideCrossOrdModGrp_NoSides_2.insert(ForexReq_4.getString());
    FIX::OrderCapacity OrderCapacity_17('I');
    noSides_0_0.set(OrderCapacity_17);
    SideCrossOrdModGrp_NoSides_2.insert(OrderCapacity_17.getString());
    FIX::OrderRestrictions OrderRestrictions_12("MULTIPLECHARVALUE_1");
    noSides_0_0.set(OrderRestrictions_12);
    SideCrossOrdModGrp_NoSides_2.insert(OrderRestrictions_12.getString());
    FIX::OrigClOrdID OrigClOrdID_7("STRING_357528318");
    noSides_0_0.set(OrigClOrdID_7);
    SideCrossOrdModGrp_NoSides_2.insert(OrigClOrdID_7.getString());
    FIX::PositionEffect PositionEffect_7('N');
    noSides_0_0.set(PositionEffect_7);
    SideCrossOrdModGrp_NoSides_2.insert(PositionEffect_7.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_4(false);
    noSides_0_0.set(PreTradeAnonymity_4);
    SideCrossOrdModGrp_NoSides_2.insert(PreTradeAnonymity_4.getString());
    FIX::PreallocMethod PreallocMethod_4('1');
    noSides_0_0.set(PreallocMethod_4);
    SideCrossOrdModGrp_NoSides_2.insert(PreallocMethod_4.getString());
    FIX::QtyType QtyType_16(2);
    noSides_0_0.set(QtyType_16);
    SideCrossOrdModGrp_NoSides_2.insert(QtyType_16.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_26("STRING_1624822254");
    noSides_0_0.set(SecondaryClOrdID_26);
    SideCrossOrdModGrp_NoSides_2.insert(SecondaryClOrdID_26.getString());
    FIX::SettlCurrency SettlCurrency_15("GBP");
    noSides_0_0.set(SettlCurrency_15);
    SideCrossOrdModGrp_NoSides_2.insert(SettlCurrency_15.getString());
    FIX::Side Side_27('4');
    noSides_0_0.set(Side_27);
    SideCrossOrdModGrp_NoSides_2.insert(Side_27.getString());
    FIX::SideComplianceID SideComplianceID_2("STRING_1825893009");
    noSides_0_0.set(SideComplianceID_2);
    SideCrossOrdModGrp_NoSides_2.insert(SideComplianceID_2.getString());
    FIX::SideTimeInForce SideTimeInForce_2(FIX::UTCTIMESTAMP(6, 27, 48, 24, 6, 2010));
    noSides_0_0.set(SideTimeInForce_2);
    SideCrossOrdModGrp_NoSides_2.insert(SideTimeInForce_2.getString());
    FIX::SolicitedFlag SolicitedFlag_4(true);
    noSides_0_0.set(SolicitedFlag_4);
    SideCrossOrdModGrp_NoSides_2.insert(SolicitedFlag_4.getString());
    FIX::Text Text_61("STRING_1177692933");
    noSides_0_0.set(Text_61);
    SideCrossOrdModGrp_NoSides_2.insert(Text_61.getString());
    FIX::TradeDate TradeDate_19("LOCALMKTDATE_466910069");
    noSides_0_0.set(TradeDate_19);
    SideCrossOrdModGrp_NoSides_2.insert(TradeDate_19.getString());
    FIX::TradeOriginationDate TradeOriginationDate_11("LOCALMKTDATE_998066265");
    noSides_0_0.set(TradeOriginationDate_11);
    SideCrossOrdModGrp_NoSides_2.insert(TradeOriginationDate_11.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_2);

    // CommissionData
    multiset<string> CommissionData_13;
    FIX::CommCurrency CommCurrency_13("EUR");
    noSides_0_0.set(CommCurrency_13);
    CommissionData_13.insert(CommCurrency_13.getString());
    FIX::CommType CommType_13('6');
    noSides_0_0.set(CommType_13);
    CommissionData_13.insert(CommType_13.getString());
    FIX::Commission Commission_13;
    Commission_13.setString("4493544");
    noSides_0_0.set(Commission_13);
    CommissionData_13.insert(Commission_13.getString());
    FIX::FundRenewWaiv FundRenewWaiv_13('Y');
    noSides_0_0.set(FundRenewWaiv_13);
    CommissionData_13.insert(FundRenewWaiv_13.getString());
    all_values.push_back(CommissionData_13);

    // OrderQtyData
    multiset<string> OrderQtyData_10;
    FIX::CashOrderQty CashOrderQty_10;
    CashOrderQty_10.setString("5200869");
    noSides_0_0.set(CashOrderQty_10);
    OrderQtyData_10.insert(CashOrderQty_10.getString());
    FIX::OrderPercent OrderPercent_10;
    OrderPercent_10.setString("50.960000");
    noSides_0_0.set(OrderPercent_10);
    OrderQtyData_10.insert(OrderPercent_10.getString());
    FIX::OrderQty OrderQty_18;
    OrderQty_18.setString("15531761");
    noSides_0_0.set(OrderQty_18);
    OrderQtyData_10.insert(OrderQty_18.getString());
    FIX::RoundingDirection RoundingDirection_10('1');
    noSides_0_0.set(RoundingDirection_10);
    OrderQtyData_10.insert(RoundingDirection_10.getString());
    FIX::RoundingModulus RoundingModulus_10;
    RoundingModulus_10.setString("18276797");
    noSides_0_0.set(RoundingModulus_10);
    OrderQtyData_10.insert(RoundingModulus_10.getString());
    all_values.push_back(OrderQtyData_10);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_73;
      FIX::PartyID PartyID_73("STRING_1028705523");
      noPartyIDs_0_1_0.set(PartyID_73);
      Parties_NoPartyIDs_73.insert(PartyID_73.getString());
      FIX::PartyIDSource PartyIDSource_73('3');
      noPartyIDs_0_1_0.set(PartyIDSource_73);
      Parties_NoPartyIDs_73.insert(PartyIDSource_73.getString());
      FIX::PartyRole PartyRole_73(75);
      noPartyIDs_0_1_0.set(PartyRole_73);
      Parties_NoPartyIDs_73.insert(PartyRole_73.getString());
      all_values.push_back(Parties_NoPartyIDs_73);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_153;
        FIX::PartySubID PartySubID_153("STRING_1460361155");
        noPartySubIDs_0_0_2_0.set(PartySubID_153);
        PtysSubGrp_NoPartySubIDs_153.insert(PartySubID_153.getString());
        FIX::PartySubIDType PartySubIDType_153(21);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_153);
        PtysSubGrp_NoPartySubIDs_153.insert(PartySubIDType_153.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_153);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_8;
      FIX::AllocAccount AllocAccount_20("STRING_893796438");
      noAllocs_0_1_0.set(AllocAccount_20);
      PreAllocGrp_NoAllocs_8.insert(AllocAccount_20.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_20(93693459);
      noAllocs_0_1_0.set(AllocAcctIDSource_20);
      PreAllocGrp_NoAllocs_8.insert(AllocAcctIDSource_20.getString());
      FIX::AllocQty AllocQty_19;
      AllocQty_19.setString("10430978");
      noAllocs_0_1_0.set(AllocQty_19);
      PreAllocGrp_NoAllocs_8.insert(AllocQty_19.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_15("EUR");
      noAllocs_0_1_0.set(AllocSettlCurrency_15);
      PreAllocGrp_NoAllocs_8.insert(AllocSettlCurrency_15.getString());
      FIX::IndividualAllocID IndividualAllocID_20("STRING_1997876553");
      noAllocs_0_1_0.set(IndividualAllocID_20);
      PreAllocGrp_NoAllocs_8.insert(IndividualAllocID_20.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_8);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_58;
        FIX::NestedPartyID NestedPartyID_58("STRING_613608904");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_58);
        NestedParties_NoNestedPartyIDs_58.insert(NestedPartyID_58.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_58('1');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_58);
        NestedParties_NoNestedPartyIDs_58.insert(NestedPartyIDSource_58.getString());
        FIX::NestedPartyRole NestedPartyRole_58(1394433986);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_58);
        NestedParties_NoNestedPartyIDs_58.insert(NestedPartyRole_58.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_58);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_119;
          FIX::NestedPartySubID NestedPartySubID_119("STRING_228780764");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_119);
          NstdPtysSubGrp_NoNestedPartySubIDs_119.insert(NestedPartySubID_119.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_119(245016603);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_119);
          NstdPtysSubGrp_NoNestedPartySubIDs_119.insert(NestedPartySubIDType_119.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_119);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_120;
          FIX::NestedPartySubID NestedPartySubID_120("STRING_1447333274");
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubID_120);
          NstdPtysSubGrp_NoNestedPartySubIDs_120.insert(NestedPartySubID_120.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_120(677885787);
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubIDType_120);
          NstdPtysSubGrp_NoNestedPartySubIDs_120.insert(NestedPartySubIDType_120.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_120);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoSides noSides_0_1;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_3;
    FIX::Account Account_17("STRING_1643517969");
    noSides_0_1.set(Account_17);
    SideCrossOrdModGrp_NoSides_3.insert(Account_17.getString());
    FIX::AccountType AccountType_14(7);
    noSides_0_1.set(AccountType_14);
    SideCrossOrdModGrp_NoSides_3.insert(AccountType_14.getString());
    FIX::AcctIDSource AcctIDSource_10(99);
    noSides_0_1.set(AcctIDSource_10);
    SideCrossOrdModGrp_NoSides_3.insert(AcctIDSource_10.getString());
    FIX::AllocID AllocID_12("STRING_16121316");
    noSides_0_1.set(AllocID_12);
    SideCrossOrdModGrp_NoSides_3.insert(AllocID_12.getString());
    FIX::BookingType BookingType_15(1);
    noSides_0_1.set(BookingType_15);
    SideCrossOrdModGrp_NoSides_3.insert(BookingType_15.getString());
    FIX::BookingUnit BookingUnit_5('2');
    noSides_0_1.set(BookingUnit_5);
    SideCrossOrdModGrp_NoSides_3.insert(BookingUnit_5.getString());
    FIX::CashMargin CashMargin_5('2');
    noSides_0_1.set(CashMargin_5);
    SideCrossOrdModGrp_NoSides_3.insert(CashMargin_5.getString());
    FIX::ClOrdID ClOrdID_29("STRING_1604018894");
    noSides_0_1.set(ClOrdID_29);
    SideCrossOrdModGrp_NoSides_3.insert(ClOrdID_29.getString());
    FIX::ClOrdLinkID ClOrdLinkID_8("STRING_95151276");
    noSides_0_1.set(ClOrdLinkID_8);
    SideCrossOrdModGrp_NoSides_3.insert(ClOrdLinkID_8.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_10("STRING_F");
    noSides_0_1.set(ClearingFeeIndicator_10);
    SideCrossOrdModGrp_NoSides_3.insert(ClearingFeeIndicator_10.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_4(1);
    noSides_0_1.set(CoveredOrUncovered_4);
    SideCrossOrdModGrp_NoSides_3.insert(CoveredOrUncovered_4.getString());
    FIX::CustOrderCapacity CustOrderCapacity_8(3);
    noSides_0_1.set(CustOrderCapacity_8);
    SideCrossOrdModGrp_NoSides_3.insert(CustOrderCapacity_8.getString());
    FIX::DayBookingInst DayBookingInst_5('0');
    noSides_0_1.set(DayBookingInst_5);
    SideCrossOrdModGrp_NoSides_3.insert(DayBookingInst_5.getString());
    FIX::EncodedText EncodedText_62("DATA_752435302");
    noSides_0_1.set(EncodedText_62);
    SideCrossOrdModGrp_NoSides_3.insert(EncodedText_62.getString());
    FIX::EncodedTextLen EncodedTextLen_62(298494164);
    noSides_0_1.set(EncodedTextLen_62);
    SideCrossOrdModGrp_NoSides_3.insert(EncodedTextLen_62.getString());
    FIX::ForexReq ForexReq_5(true);
    noSides_0_1.set(ForexReq_5);
    SideCrossOrdModGrp_NoSides_3.insert(ForexReq_5.getString());
    FIX::OrderCapacity OrderCapacity_18('R');
    noSides_0_1.set(OrderCapacity_18);
    SideCrossOrdModGrp_NoSides_3.insert(OrderCapacity_18.getString());
    FIX::OrderRestrictions OrderRestrictions_13("MULTIPLECHARVALUE_9");
    noSides_0_1.set(OrderRestrictions_13);
    SideCrossOrdModGrp_NoSides_3.insert(OrderRestrictions_13.getString());
    FIX::OrigClOrdID OrigClOrdID_8("STRING_160050683");
    noSides_0_1.set(OrigClOrdID_8);
    SideCrossOrdModGrp_NoSides_3.insert(OrigClOrdID_8.getString());
    FIX::PositionEffect PositionEffect_8('O');
    noSides_0_1.set(PositionEffect_8);
    SideCrossOrdModGrp_NoSides_3.insert(PositionEffect_8.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_5(true);
    noSides_0_1.set(PreTradeAnonymity_5);
    SideCrossOrdModGrp_NoSides_3.insert(PreTradeAnonymity_5.getString());
    FIX::PreallocMethod PreallocMethod_5('0');
    noSides_0_1.set(PreallocMethod_5);
    SideCrossOrdModGrp_NoSides_3.insert(PreallocMethod_5.getString());
    FIX::QtyType QtyType_17(2);
    noSides_0_1.set(QtyType_17);
    SideCrossOrdModGrp_NoSides_3.insert(QtyType_17.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_27("STRING_2062166615");
    noSides_0_1.set(SecondaryClOrdID_27);
    SideCrossOrdModGrp_NoSides_3.insert(SecondaryClOrdID_27.getString());
    FIX::SettlCurrency SettlCurrency_16("CHF");
    noSides_0_1.set(SettlCurrency_16);
    SideCrossOrdModGrp_NoSides_3.insert(SettlCurrency_16.getString());
    FIX::Side Side_28('5');
    noSides_0_1.set(Side_28);
    SideCrossOrdModGrp_NoSides_3.insert(Side_28.getString());
    FIX::SideComplianceID SideComplianceID_3("STRING_1095048");
    noSides_0_1.set(SideComplianceID_3);
    SideCrossOrdModGrp_NoSides_3.insert(SideComplianceID_3.getString());
    FIX::SideTimeInForce SideTimeInForce_3(FIX::UTCTIMESTAMP(23, 16, 43, 3, 4, 2001));
    noSides_0_1.set(SideTimeInForce_3);
    SideCrossOrdModGrp_NoSides_3.insert(SideTimeInForce_3.getString());
    FIX::SolicitedFlag SolicitedFlag_5(false);
    noSides_0_1.set(SolicitedFlag_5);
    SideCrossOrdModGrp_NoSides_3.insert(SolicitedFlag_5.getString());
    FIX::Text Text_62("STRING_1937149259");
    noSides_0_1.set(Text_62);
    SideCrossOrdModGrp_NoSides_3.insert(Text_62.getString());
    FIX::TradeDate TradeDate_20("LOCALMKTDATE_2100743193");
    noSides_0_1.set(TradeDate_20);
    SideCrossOrdModGrp_NoSides_3.insert(TradeDate_20.getString());
    FIX::TradeOriginationDate TradeOriginationDate_12("LOCALMKTDATE_2135396525");
    noSides_0_1.set(TradeOriginationDate_12);
    SideCrossOrdModGrp_NoSides_3.insert(TradeOriginationDate_12.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_3);

    // CommissionData
    multiset<string> CommissionData_14;
    FIX::CommCurrency CommCurrency_14("JPY");
    noSides_0_1.set(CommCurrency_14);
    CommissionData_14.insert(CommCurrency_14.getString());
    FIX::CommType CommType_14('5');
    noSides_0_1.set(CommType_14);
    CommissionData_14.insert(CommType_14.getString());
    FIX::Commission Commission_14;
    Commission_14.setString("19155106");
    noSides_0_1.set(Commission_14);
    CommissionData_14.insert(Commission_14.getString());
    FIX::FundRenewWaiv FundRenewWaiv_14('N');
    noSides_0_1.set(FundRenewWaiv_14);
    CommissionData_14.insert(FundRenewWaiv_14.getString());
    all_values.push_back(CommissionData_14);

    // OrderQtyData
    multiset<string> OrderQtyData_11;
    FIX::CashOrderQty CashOrderQty_11;
    CashOrderQty_11.setString("324223");
    noSides_0_1.set(CashOrderQty_11);
    OrderQtyData_11.insert(CashOrderQty_11.getString());
    FIX::OrderPercent OrderPercent_11;
    OrderPercent_11.setString("11.180000");
    noSides_0_1.set(OrderPercent_11);
    OrderQtyData_11.insert(OrderPercent_11.getString());
    FIX::OrderQty OrderQty_19;
    OrderQty_19.setString("13096701");
    noSides_0_1.set(OrderQty_19);
    OrderQtyData_11.insert(OrderQty_19.getString());
    FIX::RoundingDirection RoundingDirection_11('1');
    noSides_0_1.set(RoundingDirection_11);
    OrderQtyData_11.insert(RoundingDirection_11.getString());
    FIX::RoundingModulus RoundingModulus_11;
    RoundingModulus_11.setString("4587087");
    noSides_0_1.set(RoundingModulus_11);
    OrderQtyData_11.insert(RoundingModulus_11.getString());
    all_values.push_back(OrderQtyData_11);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_74;
      FIX::PartyID PartyID_74("STRING_227420914");
      noPartyIDs_1_1_0.set(PartyID_74);
      Parties_NoPartyIDs_74.insert(PartyID_74.getString());
      FIX::PartyIDSource PartyIDSource_74('2');
      noPartyIDs_1_1_0.set(PartyIDSource_74);
      Parties_NoPartyIDs_74.insert(PartyIDSource_74.getString());
      FIX::PartyRole PartyRole_74(39);
      noPartyIDs_1_1_0.set(PartyRole_74);
      Parties_NoPartyIDs_74.insert(PartyRole_74.getString());
      all_values.push_back(Parties_NoPartyIDs_74);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_154;
        FIX::PartySubID PartySubID_154("STRING_1821949419");
        noPartySubIDs_1_0_2_0.set(PartySubID_154);
        PtysSubGrp_NoPartySubIDs_154.insert(PartySubID_154.getString());
        FIX::PartySubIDType PartySubIDType_154(9);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_154);
        PtysSubGrp_NoPartySubIDs_154.insert(PartySubIDType_154.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_154);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_1_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_9;
      FIX::AllocAccount AllocAccount_21("STRING_1380450575");
      noAllocs_1_1_0.set(AllocAccount_21);
      PreAllocGrp_NoAllocs_9.insert(AllocAccount_21.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_21(1253573789);
      noAllocs_1_1_0.set(AllocAcctIDSource_21);
      PreAllocGrp_NoAllocs_9.insert(AllocAcctIDSource_21.getString());
      FIX::AllocQty AllocQty_20;
      AllocQty_20.setString("20727381");
      noAllocs_1_1_0.set(AllocQty_20);
      PreAllocGrp_NoAllocs_9.insert(AllocQty_20.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_16("CHF");
      noAllocs_1_1_0.set(AllocSettlCurrency_16);
      PreAllocGrp_NoAllocs_9.insert(AllocSettlCurrency_16.getString());
      FIX::IndividualAllocID IndividualAllocID_21("STRING_2096206019");
      noAllocs_1_1_0.set(IndividualAllocID_21);
      PreAllocGrp_NoAllocs_9.insert(IndividualAllocID_21.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_9);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_59;
        FIX::NestedPartyID NestedPartyID_59("STRING_1390289776");
        noNestedPartyIDs_1_0_2_0.set(NestedPartyID_59);
        NestedParties_NoNestedPartyIDs_59.insert(NestedPartyID_59.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_59('2');
        noNestedPartyIDs_1_0_2_0.set(NestedPartyIDSource_59);
        NestedParties_NoNestedPartyIDs_59.insert(NestedPartyIDSource_59.getString());
        FIX::NestedPartyRole NestedPartyRole_59(1525217472);
        noNestedPartyIDs_1_0_2_0.set(NestedPartyRole_59);
        NestedParties_NoNestedPartyIDs_59.insert(NestedPartyRole_59.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_59);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_121;
          FIX::NestedPartySubID NestedPartySubID_121("STRING_2089054784");
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubID_121);
          NstdPtysSubGrp_NoNestedPartySubIDs_121.insert(NestedPartySubID_121.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_121(1513130349);
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubIDType_121);
          NstdPtysSubGrp_NoNestedPartySubIDs_121.insert(NestedPartySubIDType_121.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_121);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_122;
          FIX::NestedPartySubID NestedPartySubID_122("STRING_1064772276");
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubID_122);
          NstdPtysSubGrp_NoNestedPartySubIDs_122.insert(NestedPartySubID_122.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_122(837206530);
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubIDType_122);
          NstdPtysSubGrp_NoNestedPartySubIDs_122.insert(NestedPartySubIDType_122.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_122);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_123;
          FIX::NestedPartySubID NestedPartySubID_123("STRING_793117373");
          noNestedPartySubIDs_1_0_0_3_2.set(NestedPartySubID_123);
          NstdPtysSubGrp_NoNestedPartySubIDs_123.insert(NestedPartySubID_123.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_123(832799230);
          noNestedPartySubIDs_1_0_0_3_2.set(NestedPartySubIDType_123);
          NstdPtysSubGrp_NoNestedPartySubIDs_123.insert(NestedPartySubIDType_123.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_123);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_2);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      noSides_0_1.addGroup(noAllocs_1_1_0);
    }
    msg.addGroup(noSides_0_1);
  }
  {
    FIX50SP2::NewOrderCross::NoSides noSides_0_2;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_4;
    FIX::Account Account_18("STRING_882440208");
    noSides_0_2.set(Account_18);
    SideCrossOrdModGrp_NoSides_4.insert(Account_18.getString());
    FIX::AccountType AccountType_15(7);
    noSides_0_2.set(AccountType_15);
    SideCrossOrdModGrp_NoSides_4.insert(AccountType_15.getString());
    FIX::AcctIDSource AcctIDSource_11(5);
    noSides_0_2.set(AcctIDSource_11);
    SideCrossOrdModGrp_NoSides_4.insert(AcctIDSource_11.getString());
    FIX::AllocID AllocID_13("STRING_44626745");
    noSides_0_2.set(AllocID_13);
    SideCrossOrdModGrp_NoSides_4.insert(AllocID_13.getString());
    FIX::BookingType BookingType_16(1);
    noSides_0_2.set(BookingType_16);
    SideCrossOrdModGrp_NoSides_4.insert(BookingType_16.getString());
    FIX::BookingUnit BookingUnit_6('0');
    noSides_0_2.set(BookingUnit_6);
    SideCrossOrdModGrp_NoSides_4.insert(BookingUnit_6.getString());
    FIX::CashMargin CashMargin_6('1');
    noSides_0_2.set(CashMargin_6);
    SideCrossOrdModGrp_NoSides_4.insert(CashMargin_6.getString());
    FIX::ClOrdID ClOrdID_30("STRING_584131031");
    noSides_0_2.set(ClOrdID_30);
    SideCrossOrdModGrp_NoSides_4.insert(ClOrdID_30.getString());
    FIX::ClOrdLinkID ClOrdLinkID_9("STRING_1117811893");
    noSides_0_2.set(ClOrdLinkID_9);
    SideCrossOrdModGrp_NoSides_4.insert(ClOrdLinkID_9.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_11("STRING_4");
    noSides_0_2.set(ClearingFeeIndicator_11);
    SideCrossOrdModGrp_NoSides_4.insert(ClearingFeeIndicator_11.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_5(0);
    noSides_0_2.set(CoveredOrUncovered_5);
    SideCrossOrdModGrp_NoSides_4.insert(CoveredOrUncovered_5.getString());
    FIX::CustOrderCapacity CustOrderCapacity_9(1);
    noSides_0_2.set(CustOrderCapacity_9);
    SideCrossOrdModGrp_NoSides_4.insert(CustOrderCapacity_9.getString());
    FIX::DayBookingInst DayBookingInst_6('1');
    noSides_0_2.set(DayBookingInst_6);
    SideCrossOrdModGrp_NoSides_4.insert(DayBookingInst_6.getString());
    FIX::EncodedText EncodedText_63("DATA_1244839471");
    noSides_0_2.set(EncodedText_63);
    SideCrossOrdModGrp_NoSides_4.insert(EncodedText_63.getString());
    FIX::EncodedTextLen EncodedTextLen_63(25244592);
    noSides_0_2.set(EncodedTextLen_63);
    SideCrossOrdModGrp_NoSides_4.insert(EncodedTextLen_63.getString());
    FIX::ForexReq ForexReq_6(false);
    noSides_0_2.set(ForexReq_6);
    SideCrossOrdModGrp_NoSides_4.insert(ForexReq_6.getString());
    FIX::OrderCapacity OrderCapacity_19('P');
    noSides_0_2.set(OrderCapacity_19);
    SideCrossOrdModGrp_NoSides_4.insert(OrderCapacity_19.getString());
    FIX::OrderRestrictions OrderRestrictions_14("MULTIPLECHARVALUE_6");
    noSides_0_2.set(OrderRestrictions_14);
    SideCrossOrdModGrp_NoSides_4.insert(OrderRestrictions_14.getString());
    FIX::OrigClOrdID OrigClOrdID_9("STRING_990668283");
    noSides_0_2.set(OrigClOrdID_9);
    SideCrossOrdModGrp_NoSides_4.insert(OrigClOrdID_9.getString());
    FIX::PositionEffect PositionEffect_9('F');
    noSides_0_2.set(PositionEffect_9);
    SideCrossOrdModGrp_NoSides_4.insert(PositionEffect_9.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_6(true);
    noSides_0_2.set(PreTradeAnonymity_6);
    SideCrossOrdModGrp_NoSides_4.insert(PreTradeAnonymity_6.getString());
    FIX::PreallocMethod PreallocMethod_6('1');
    noSides_0_2.set(PreallocMethod_6);
    SideCrossOrdModGrp_NoSides_4.insert(PreallocMethod_6.getString());
    FIX::QtyType QtyType_18(0);
    noSides_0_2.set(QtyType_18);
    SideCrossOrdModGrp_NoSides_4.insert(QtyType_18.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_28("STRING_635619616");
    noSides_0_2.set(SecondaryClOrdID_28);
    SideCrossOrdModGrp_NoSides_4.insert(SecondaryClOrdID_28.getString());
    FIX::SettlCurrency SettlCurrency_17("USD");
    noSides_0_2.set(SettlCurrency_17);
    SideCrossOrdModGrp_NoSides_4.insert(SettlCurrency_17.getString());
    FIX::Side Side_29('F');
    noSides_0_2.set(Side_29);
    SideCrossOrdModGrp_NoSides_4.insert(Side_29.getString());
    FIX::SideComplianceID SideComplianceID_4("STRING_330718427");
    noSides_0_2.set(SideComplianceID_4);
    SideCrossOrdModGrp_NoSides_4.insert(SideComplianceID_4.getString());
    FIX::SideTimeInForce SideTimeInForce_4(FIX::UTCTIMESTAMP(11, 57, 8, 23, 2, 2002));
    noSides_0_2.set(SideTimeInForce_4);
    SideCrossOrdModGrp_NoSides_4.insert(SideTimeInForce_4.getString());
    FIX::SolicitedFlag SolicitedFlag_6(true);
    noSides_0_2.set(SolicitedFlag_6);
    SideCrossOrdModGrp_NoSides_4.insert(SolicitedFlag_6.getString());
    FIX::Text Text_63("STRING_1273383447");
    noSides_0_2.set(Text_63);
    SideCrossOrdModGrp_NoSides_4.insert(Text_63.getString());
    FIX::TradeDate TradeDate_21("LOCALMKTDATE_32352840");
    noSides_0_2.set(TradeDate_21);
    SideCrossOrdModGrp_NoSides_4.insert(TradeDate_21.getString());
    FIX::TradeOriginationDate TradeOriginationDate_13("LOCALMKTDATE_413280892");
    noSides_0_2.set(TradeOriginationDate_13);
    SideCrossOrdModGrp_NoSides_4.insert(TradeOriginationDate_13.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_4);

    // CommissionData
    multiset<string> CommissionData_15;
    FIX::CommCurrency CommCurrency_15("CAN");
    noSides_0_2.set(CommCurrency_15);
    CommissionData_15.insert(CommCurrency_15.getString());
    FIX::CommType CommType_15('3');
    noSides_0_2.set(CommType_15);
    CommissionData_15.insert(CommType_15.getString());
    FIX::Commission Commission_15;
    Commission_15.setString("10359893");
    noSides_0_2.set(Commission_15);
    CommissionData_15.insert(Commission_15.getString());
    FIX::FundRenewWaiv FundRenewWaiv_15('Y');
    noSides_0_2.set(FundRenewWaiv_15);
    CommissionData_15.insert(FundRenewWaiv_15.getString());
    all_values.push_back(CommissionData_15);

    // OrderQtyData
    multiset<string> OrderQtyData_12;
    FIX::CashOrderQty CashOrderQty_12;
    CashOrderQty_12.setString("13576553");
    noSides_0_2.set(CashOrderQty_12);
    OrderQtyData_12.insert(CashOrderQty_12.getString());
    FIX::OrderPercent OrderPercent_12;
    OrderPercent_12.setString("39.490000");
    noSides_0_2.set(OrderPercent_12);
    OrderQtyData_12.insert(OrderPercent_12.getString());
    FIX::OrderQty OrderQty_20;
    OrderQty_20.setString("20370020");
    noSides_0_2.set(OrderQty_20);
    OrderQtyData_12.insert(OrderQty_20.getString());
    FIX::RoundingDirection RoundingDirection_12('2');
    noSides_0_2.set(RoundingDirection_12);
    OrderQtyData_12.insert(RoundingDirection_12.getString());
    FIX::RoundingModulus RoundingModulus_12;
    RoundingModulus_12.setString("13252798");
    noSides_0_2.set(RoundingModulus_12);
    OrderQtyData_12.insert(RoundingModulus_12.getString());
    all_values.push_back(OrderQtyData_12);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_75;
      FIX::PartyID PartyID_75("STRING_1499081904");
      noPartyIDs_2_1_0.set(PartyID_75);
      Parties_NoPartyIDs_75.insert(PartyID_75.getString());
      FIX::PartyIDSource PartyIDSource_75('H');
      noPartyIDs_2_1_0.set(PartyIDSource_75);
      Parties_NoPartyIDs_75.insert(PartyIDSource_75.getString());
      FIX::PartyRole PartyRole_75(53);
      noPartyIDs_2_1_0.set(PartyRole_75);
      Parties_NoPartyIDs_75.insert(PartyRole_75.getString());
      all_values.push_back(Parties_NoPartyIDs_75);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_155;
        FIX::PartySubID PartySubID_155("STRING_1071301660");
        noPartySubIDs_2_0_2_0.set(PartySubID_155);
        PtysSubGrp_NoPartySubIDs_155.insert(PartySubID_155.getString());
        FIX::PartySubIDType PartySubIDType_155(33);
        noPartySubIDs_2_0_2_0.set(PartySubIDType_155);
        PtysSubGrp_NoPartySubIDs_155.insert(PartySubIDType_155.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_155);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_156;
        FIX::PartySubID PartySubID_156("STRING_1507425196");
        noPartySubIDs_2_0_2_1.set(PartySubID_156);
        PtysSubGrp_NoPartySubIDs_156.insert(PartySubID_156.getString());
        FIX::PartySubIDType PartySubIDType_156(32);
        noPartySubIDs_2_0_2_1.set(PartySubIDType_156);
        PtysSubGrp_NoPartySubIDs_156.insert(PartySubIDType_156.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_156);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_1);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_0);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_2_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_10;
      FIX::AllocAccount AllocAccount_22("STRING_1245847116");
      noAllocs_2_1_0.set(AllocAccount_22);
      PreAllocGrp_NoAllocs_10.insert(AllocAccount_22.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_22(1866951669);
      noAllocs_2_1_0.set(AllocAcctIDSource_22);
      PreAllocGrp_NoAllocs_10.insert(AllocAcctIDSource_22.getString());
      FIX::AllocQty AllocQty_21;
      AllocQty_21.setString("18738433");
      noAllocs_2_1_0.set(AllocQty_21);
      PreAllocGrp_NoAllocs_10.insert(AllocQty_21.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_17("USD");
      noAllocs_2_1_0.set(AllocSettlCurrency_17);
      PreAllocGrp_NoAllocs_10.insert(AllocSettlCurrency_17.getString());
      FIX::IndividualAllocID IndividualAllocID_22("STRING_1789197725");
      noAllocs_2_1_0.set(IndividualAllocID_22);
      PreAllocGrp_NoAllocs_10.insert(IndividualAllocID_22.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_10);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_60;
        FIX::NestedPartyID NestedPartyID_60("STRING_1168541273");
        noNestedPartyIDs_2_0_2_0.set(NestedPartyID_60);
        NestedParties_NoNestedPartyIDs_60.insert(NestedPartyID_60.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_60('9');
        noNestedPartyIDs_2_0_2_0.set(NestedPartyIDSource_60);
        NestedParties_NoNestedPartyIDs_60.insert(NestedPartyIDSource_60.getString());
        FIX::NestedPartyRole NestedPartyRole_60(417067310);
        noNestedPartyIDs_2_0_2_0.set(NestedPartyRole_60);
        NestedParties_NoNestedPartyIDs_60.insert(NestedPartyRole_60.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_60);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_124;
          FIX::NestedPartySubID NestedPartySubID_124("STRING_1158809216");
          noNestedPartySubIDs_2_0_0_3_0.set(NestedPartySubID_124);
          NstdPtysSubGrp_NoNestedPartySubIDs_124.insert(NestedPartySubID_124.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_124(1296448573);
          noNestedPartySubIDs_2_0_0_3_0.set(NestedPartySubIDType_124);
          NstdPtysSubGrp_NoNestedPartySubIDs_124.insert(NestedPartySubIDType_124.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_124);

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_0);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_61;
        FIX::NestedPartyID NestedPartyID_61("STRING_1694637995");
        noNestedPartyIDs_2_0_2_1.set(NestedPartyID_61);
        NestedParties_NoNestedPartyIDs_61.insert(NestedPartyID_61.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_61('4');
        noNestedPartyIDs_2_0_2_1.set(NestedPartyIDSource_61);
        NestedParties_NoNestedPartyIDs_61.insert(NestedPartyIDSource_61.getString());
        FIX::NestedPartyRole NestedPartyRole_61(2127853352);
        noNestedPartyIDs_2_0_2_1.set(NestedPartyRole_61);
        NestedParties_NoNestedPartyIDs_61.insert(NestedPartyRole_61.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_61);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_125;
          FIX::NestedPartySubID NestedPartySubID_125("STRING_1108548874");
          noNestedPartySubIDs_2_0_1_3_0.set(NestedPartySubID_125);
          NstdPtysSubGrp_NoNestedPartySubIDs_125.insert(NestedPartySubID_125.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_125(2017371789);
          noNestedPartySubIDs_2_0_1_3_0.set(NestedPartySubIDType_125);
          NstdPtysSubGrp_NoNestedPartySubIDs_125.insert(NestedPartySubIDType_125.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_125);

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_0);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_62;
        FIX::NestedPartyID NestedPartyID_62("STRING_1285075241");
        noNestedPartyIDs_2_0_2_2.set(NestedPartyID_62);
        NestedParties_NoNestedPartyIDs_62.insert(NestedPartyID_62.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_62('2');
        noNestedPartyIDs_2_0_2_2.set(NestedPartyIDSource_62);
        NestedParties_NoNestedPartyIDs_62.insert(NestedPartyIDSource_62.getString());
        FIX::NestedPartyRole NestedPartyRole_62(750074860);
        noNestedPartyIDs_2_0_2_2.set(NestedPartyRole_62);
        NestedParties_NoNestedPartyIDs_62.insert(NestedPartyRole_62.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_62);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_126;
          FIX::NestedPartySubID NestedPartySubID_126("STRING_722027169");
          noNestedPartySubIDs_2_0_2_3_0.set(NestedPartySubID_126);
          NstdPtysSubGrp_NoNestedPartySubIDs_126.insert(NestedPartySubID_126.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_126(1863735991);
          noNestedPartySubIDs_2_0_2_3_0.set(NestedPartySubIDType_126);
          NstdPtysSubGrp_NoNestedPartySubIDs_126.insert(NestedPartySubIDType_126.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_126);

          noNestedPartyIDs_2_0_2_2.addGroup(noNestedPartySubIDs_2_0_2_3_0);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_2);
      }
      noSides_0_2.addGroup(noAllocs_2_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_2_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_11;
      FIX::AllocAccount AllocAccount_23("STRING_1095399655");
      noAllocs_2_1_1.set(AllocAccount_23);
      PreAllocGrp_NoAllocs_11.insert(AllocAccount_23.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_23(1793328829);
      noAllocs_2_1_1.set(AllocAcctIDSource_23);
      PreAllocGrp_NoAllocs_11.insert(AllocAcctIDSource_23.getString());
      FIX::AllocQty AllocQty_22;
      AllocQty_22.setString("958596");
      noAllocs_2_1_1.set(AllocQty_22);
      PreAllocGrp_NoAllocs_11.insert(AllocQty_22.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_18("CHF");
      noAllocs_2_1_1.set(AllocSettlCurrency_18);
      PreAllocGrp_NoAllocs_11.insert(AllocSettlCurrency_18.getString());
      FIX::IndividualAllocID IndividualAllocID_23("STRING_806185336");
      noAllocs_2_1_1.set(IndividualAllocID_23);
      PreAllocGrp_NoAllocs_11.insert(IndividualAllocID_23.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_11);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_63;
        FIX::NestedPartyID NestedPartyID_63("STRING_437881181");
        noNestedPartyIDs_2_1_2_0.set(NestedPartyID_63);
        NestedParties_NoNestedPartyIDs_63.insert(NestedPartyID_63.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_63('5');
        noNestedPartyIDs_2_1_2_0.set(NestedPartyIDSource_63);
        NestedParties_NoNestedPartyIDs_63.insert(NestedPartyIDSource_63.getString());
        FIX::NestedPartyRole NestedPartyRole_63(1420413916);
        noNestedPartyIDs_2_1_2_0.set(NestedPartyRole_63);
        NestedParties_NoNestedPartyIDs_63.insert(NestedPartyRole_63.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_63);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_127;
          FIX::NestedPartySubID NestedPartySubID_127("STRING_174259132");
          noNestedPartySubIDs_2_1_0_3_0.set(NestedPartySubID_127);
          NstdPtysSubGrp_NoNestedPartySubIDs_127.insert(NestedPartySubID_127.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_127(1805128386);
          noNestedPartySubIDs_2_1_0_3_0.set(NestedPartySubIDType_127);
          NstdPtysSubGrp_NoNestedPartySubIDs_127.insert(NestedPartySubIDType_127.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_127);

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_128;
          FIX::NestedPartySubID NestedPartySubID_128("STRING_798330218");
          noNestedPartySubIDs_2_1_0_3_1.set(NestedPartySubID_128);
          NstdPtysSubGrp_NoNestedPartySubIDs_128.insert(NestedPartySubID_128.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_128(1089356656);
          noNestedPartySubIDs_2_1_0_3_1.set(NestedPartySubIDType_128);
          NstdPtysSubGrp_NoNestedPartySubIDs_128.insert(NestedPartySubIDType_128.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_128);

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_129;
          FIX::NestedPartySubID NestedPartySubID_129("STRING_74712049");
          noNestedPartySubIDs_2_1_0_3_2.set(NestedPartySubID_129);
          NstdPtysSubGrp_NoNestedPartySubIDs_129.insert(NestedPartySubID_129.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_129(232668735);
          noNestedPartySubIDs_2_1_0_3_2.set(NestedPartySubIDType_129);
          NstdPtysSubGrp_NoNestedPartySubIDs_129.insert(NestedPartySubIDType_129.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_129);

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_2);
        }
        noAllocs_2_1_1.addGroup(noNestedPartyIDs_2_1_2_0);
      }
      noSides_0_2.addGroup(noAllocs_2_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_2_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_12;
      FIX::AllocAccount AllocAccount_24("STRING_100682225");
      noAllocs_2_1_2.set(AllocAccount_24);
      PreAllocGrp_NoAllocs_12.insert(AllocAccount_24.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_24(1371160622);
      noAllocs_2_1_2.set(AllocAcctIDSource_24);
      PreAllocGrp_NoAllocs_12.insert(AllocAcctIDSource_24.getString());
      FIX::AllocQty AllocQty_23;
      AllocQty_23.setString("19273067");
      noAllocs_2_1_2.set(AllocQty_23);
      PreAllocGrp_NoAllocs_12.insert(AllocQty_23.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_19("CHF");
      noAllocs_2_1_2.set(AllocSettlCurrency_19);
      PreAllocGrp_NoAllocs_12.insert(AllocSettlCurrency_19.getString());
      FIX::IndividualAllocID IndividualAllocID_24("STRING_684632731");
      noAllocs_2_1_2.set(IndividualAllocID_24);
      PreAllocGrp_NoAllocs_12.insert(IndividualAllocID_24.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_12);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_64;
        FIX::NestedPartyID NestedPartyID_64("STRING_1221418468");
        noNestedPartyIDs_2_2_2_0.set(NestedPartyID_64);
        NestedParties_NoNestedPartyIDs_64.insert(NestedPartyID_64.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_64('1');
        noNestedPartyIDs_2_2_2_0.set(NestedPartyIDSource_64);
        NestedParties_NoNestedPartyIDs_64.insert(NestedPartyIDSource_64.getString());
        FIX::NestedPartyRole NestedPartyRole_64(1542891151);
        noNestedPartyIDs_2_2_2_0.set(NestedPartyRole_64);
        NestedParties_NoNestedPartyIDs_64.insert(NestedPartyRole_64.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_64);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_130;
          FIX::NestedPartySubID NestedPartySubID_130("STRING_458897822");
          noNestedPartySubIDs_2_2_0_3_0.set(NestedPartySubID_130);
          NstdPtysSubGrp_NoNestedPartySubIDs_130.insert(NestedPartySubID_130.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_130(117434672);
          noNestedPartySubIDs_2_2_0_3_0.set(NestedPartySubIDType_130);
          NstdPtysSubGrp_NoNestedPartySubIDs_130.insert(NestedPartySubIDType_130.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_130);

          noNestedPartyIDs_2_2_2_0.addGroup(noNestedPartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_131;
          FIX::NestedPartySubID NestedPartySubID_131("STRING_1687745672");
          noNestedPartySubIDs_2_2_0_3_1.set(NestedPartySubID_131);
          NstdPtysSubGrp_NoNestedPartySubIDs_131.insert(NestedPartySubID_131.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_131(1554297477);
          noNestedPartySubIDs_2_2_0_3_1.set(NestedPartySubIDType_131);
          NstdPtysSubGrp_NoNestedPartySubIDs_131.insert(NestedPartySubIDType_131.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_131);

          noNestedPartyIDs_2_2_2_0.addGroup(noNestedPartySubIDs_2_2_0_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_132;
          FIX::NestedPartySubID NestedPartySubID_132("STRING_1910763502");
          noNestedPartySubIDs_2_2_0_3_2.set(NestedPartySubID_132);
          NstdPtysSubGrp_NoNestedPartySubIDs_132.insert(NestedPartySubID_132.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_132(1783605298);
          noNestedPartySubIDs_2_2_0_3_2.set(NestedPartySubIDType_132);
          NstdPtysSubGrp_NoNestedPartySubIDs_132.insert(NestedPartySubIDType_132.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_132);

          noNestedPartyIDs_2_2_2_0.addGroup(noNestedPartySubIDs_2_2_0_3_2);
        }
        noAllocs_2_1_2.addGroup(noNestedPartyIDs_2_2_2_0);
      }
      noSides_0_2.addGroup(noAllocs_2_1_2);
    }
    msg.addGroup(noSides_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_17;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_17("CAN");
  msg.set(BenchmarkCurveCurrency_17);
  SpreadOrBenchmarkCurveData_17.insert(BenchmarkCurveCurrency_17.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_17("STRING_MuniAAA");
  msg.set(BenchmarkCurveName_17);
  SpreadOrBenchmarkCurveData_17.insert(BenchmarkCurveName_17.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_17("STRING_1563343352");
  msg.set(BenchmarkCurvePoint_17);
  SpreadOrBenchmarkCurveData_17.insert(BenchmarkCurvePoint_17.getString());
  FIX::BenchmarkPrice BenchmarkPrice_17;
  BenchmarkPrice_17.setString("9195741");
  msg.set(BenchmarkPrice_17);
  SpreadOrBenchmarkCurveData_17.insert(BenchmarkPrice_17.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_17(974852041);
  msg.set(BenchmarkPriceType_17);
  SpreadOrBenchmarkCurveData_17.insert(BenchmarkPriceType_17.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_17("STRING_836273620");
  msg.set(BenchmarkSecurityID_17);
  SpreadOrBenchmarkCurveData_17.insert(BenchmarkSecurityID_17.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_17("STRING_549363140");
  msg.set(BenchmarkSecurityIDSource_17);
  SpreadOrBenchmarkCurveData_17.insert(BenchmarkSecurityIDSource_17.getString());
  FIX::Spread Spread_17;
  Spread_17.setString("11491111");
  msg.set(Spread_17);
  SpreadOrBenchmarkCurveData_17.insert(Spread_17.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_17);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::NewOrderCross::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_22;
    FIX::StipulationType StipulationType_22("STRING_PSA");
    noStipulations_0_0.set(StipulationType_22);
    Stipulations_NoStipulations_22.insert(StipulationType_22.getString());
    FIX::StipulationValue StipulationValue_22("STRING_90984182");
    noStipulations_0_0.set(StipulationValue_22);
    Stipulations_NoStipulations_22.insert(StipulationValue_22.getString());
    all_values.push_back(Stipulations_NoStipulations_22);

    msg.addGroup(noStipulations_0_0);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderCross::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_8;
    FIX::StrategyParameterName StrategyParameterName_8("STRING_1580362094");
    noStrategyParameters_0_0.set(StrategyParameterName_8);
    StrategyParametersGrp_NoStrategyParameters_8.insert(StrategyParameterName_8.getString());
    FIX::StrategyParameterType StrategyParameterType_8(14);
    noStrategyParameters_0_0.set(StrategyParameterType_8);
    StrategyParametersGrp_NoStrategyParameters_8.insert(StrategyParameterType_8.getString());
    FIX::StrategyParameterValue StrategyParameterValue_8("STRING_1939791030");
    noStrategyParameters_0_0.set(StrategyParameterValue_8);
    StrategyParametersGrp_NoStrategyParameters_8.insert(StrategyParameterValue_8.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_8);

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_9;
    FIX::StrategyParameterName StrategyParameterName_9("STRING_1360185176");
    noStrategyParameters_0_1.set(StrategyParameterName_9);
    StrategyParametersGrp_NoStrategyParameters_9.insert(StrategyParameterName_9.getString());
    FIX::StrategyParameterType StrategyParameterType_9(15);
    noStrategyParameters_0_1.set(StrategyParameterType_9);
    StrategyParametersGrp_NoStrategyParameters_9.insert(StrategyParameterType_9.getString());
    FIX::StrategyParameterValue StrategyParameterValue_9("STRING_1143837709");
    noStrategyParameters_0_1.set(StrategyParameterValue_9);
    StrategyParametersGrp_NoStrategyParameters_9.insert(StrategyParameterValue_9.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_9);

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderCross::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_8;
    FIX::TradingSessionID TradingSessionID_46("STRING_4");
    noTradingSessions_0_0.set(TradingSessionID_46);
    TrdgSesGrp_NoTradingSessions_8.insert(TradingSessionID_46.getString());
    FIX::TradingSessionSubID TradingSessionSubID_46("STRING_3");
    noTradingSessions_0_0.set(TradingSessionSubID_46);
    TrdgSesGrp_NoTradingSessions_8.insert(TradingSessionSubID_46.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_8);

    msg.addGroup(noTradingSessions_0_0);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_3;
  FIX::TriggerAction TriggerAction_3('3');
  msg.set(TriggerAction_3);
  TriggeringInstruction_3.insert(TriggerAction_3.getString());
  FIX::TriggerNewPrice TriggerNewPrice_3;
  TriggerNewPrice_3.setString("9916170");
  msg.set(TriggerNewPrice_3);
  TriggeringInstruction_3.insert(TriggerNewPrice_3.getString());
  FIX::TriggerNewQty TriggerNewQty_3;
  TriggerNewQty_3.setString("417822");
  msg.set(TriggerNewQty_3);
  TriggeringInstruction_3.insert(TriggerNewQty_3.getString());
  FIX::TriggerOrderType TriggerOrderType_3('1');
  msg.set(TriggerOrderType_3);
  TriggeringInstruction_3.insert(TriggerOrderType_3.getString());
  FIX::TriggerPrice TriggerPrice_3;
  TriggerPrice_3.setString("11090517");
  msg.set(TriggerPrice_3);
  TriggeringInstruction_3.insert(TriggerPrice_3.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_3('U');
  msg.set(TriggerPriceDirection_3);
  TriggeringInstruction_3.insert(TriggerPriceDirection_3.getString());
  FIX::TriggerPriceType TriggerPriceType_3('6');
  msg.set(TriggerPriceType_3);
  TriggeringInstruction_3.insert(TriggerPriceType_3.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_3('0');
  msg.set(TriggerPriceTypeScope_3);
  TriggeringInstruction_3.insert(TriggerPriceTypeScope_3.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_3("STRING_1365649532");
  msg.set(TriggerSecurityDesc_3);
  TriggeringInstruction_3.insert(TriggerSecurityDesc_3.getString());
  FIX::TriggerSecurityID TriggerSecurityID_3("STRING_1594908916");
  msg.set(TriggerSecurityID_3);
  TriggeringInstruction_3.insert(TriggerSecurityID_3.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_3("STRING_1354024626");
  msg.set(TriggerSecurityIDSource_3);
  TriggeringInstruction_3.insert(TriggerSecurityIDSource_3.getString());
  FIX::TriggerSymbol TriggerSymbol_3("STRING_1807956518");
  msg.set(TriggerSymbol_3);
  TriggeringInstruction_3.insert(TriggerSymbol_3.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_3("STRING_1010768621");
  msg.set(TriggerTradingSessionID_3);
  TriggeringInstruction_3.insert(TriggerTradingSessionID_3.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_3("STRING_126115172");
  msg.set(TriggerTradingSessionSubID_3);
  TriggeringInstruction_3.insert(TriggerTradingSessionSubID_3.getString());
  FIX::TriggerType TriggerType_3('4');
  msg.set(TriggerType_3);
  TriggeringInstruction_3.insert(TriggerType_3.getString());
  all_values.push_back(TriggeringInstruction_3);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderCross::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_60;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_60("DATA_675478312");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_60);
    UnderlyingInstrument_60.insert(EncodedUnderlyingIssuer_60.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_60(1784436085);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_60);
    UnderlyingInstrument_60.insert(EncodedUnderlyingIssuerLen_60.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_60("DATA_193476952");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_60);
    UnderlyingInstrument_60.insert(EncodedUnderlyingSecurityDesc_60.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_60(2023171671);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_60);
    UnderlyingInstrument_60.insert(EncodedUnderlyingSecurityDescLen_60.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_60;
    UnderlyingAdjustedQuantity_60.setString("18754202");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_60);
    UnderlyingInstrument_60.insert(UnderlyingAdjustedQuantity_60.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_60;
    UnderlyingAllocationPercent_60.setString("73.600000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_60);
    UnderlyingInstrument_60.insert(UnderlyingAllocationPercent_60.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_60;
    UnderlyingAttachmentPoint_60.setString("1.170000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_60);
    UnderlyingInstrument_60.insert(UnderlyingAttachmentPoint_60.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_60("STRING_2067086675");
    noUnderlyings_0_0.set(UnderlyingCFICode_60);
    UnderlyingInstrument_60.insert(UnderlyingCFICode_60.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_60("STRING_554414743");
    noUnderlyings_0_0.set(UnderlyingCPProgram_60);
    UnderlyingInstrument_60.insert(UnderlyingCPProgram_60.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_60("STRING_668751645");
    noUnderlyings_0_0.set(UnderlyingCPRegType_60);
    UnderlyingInstrument_60.insert(UnderlyingCPRegType_60.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_60;
    UnderlyingCapValue_60.setString("2592665");
    noUnderlyings_0_0.set(UnderlyingCapValue_60);
    UnderlyingInstrument_60.insert(UnderlyingCapValue_60.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_60;
    UnderlyingCashAmount_60.setString("16982524");
    noUnderlyings_0_0.set(UnderlyingCashAmount_60);
    UnderlyingInstrument_60.insert(UnderlyingCashAmount_60.getString());
    FIX::UnderlyingCashType UnderlyingCashType_60("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_60);
    UnderlyingInstrument_60.insert(UnderlyingCashType_60.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_60;
    UnderlyingContractMultiplier_60.setString("18554761");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_60);
    UnderlyingInstrument_60.insert(UnderlyingContractMultiplier_60.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_60(1916024982);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_60);
    UnderlyingInstrument_60.insert(UnderlyingContractMultiplierUnit_60.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_60("COUNTRY_285644489");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_60);
    UnderlyingInstrument_60.insert(UnderlyingCountryOfIssue_60.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_60("LOCALMKTDATE_699609606");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_60);
    UnderlyingInstrument_60.insert(UnderlyingCouponPaymentDate_60.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_60;
    UnderlyingCouponRate_60.setString("71.920000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_60);
    UnderlyingInstrument_60.insert(UnderlyingCouponRate_60.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_60("STRING_464100895");
    noUnderlyings_0_0.set(UnderlyingCreditRating_60);
    UnderlyingInstrument_60.insert(UnderlyingCreditRating_60.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_60("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_60);
    UnderlyingInstrument_60.insert(UnderlyingCurrency_60.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_60;
    UnderlyingCurrentValue_60.setString("493711");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_60);
    UnderlyingInstrument_60.insert(UnderlyingCurrentValue_60.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_60;
    UnderlyingDetachmentPoint_60.setString("93.290000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_60);
    UnderlyingInstrument_60.insert(UnderlyingDetachmentPoint_60.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_60;
    UnderlyingDirtyPrice_60.setString("7580173");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_60);
    UnderlyingInstrument_60.insert(UnderlyingDirtyPrice_60.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_60;
    UnderlyingEndPrice_60.setString("16442800");
    noUnderlyings_0_0.set(UnderlyingEndPrice_60);
    UnderlyingInstrument_60.insert(UnderlyingEndPrice_60.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_60;
    UnderlyingEndValue_60.setString("18875339");
    noUnderlyings_0_0.set(UnderlyingEndValue_60);
    UnderlyingInstrument_60.insert(UnderlyingEndValue_60.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_60(418490180);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_60);
    UnderlyingInstrument_60.insert(UnderlyingExerciseStyle_60.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_60;
    UnderlyingFXRate_60.setString("5075650");
    noUnderlyings_0_0.set(UnderlyingFXRate_60);
    UnderlyingInstrument_60.insert(UnderlyingFXRate_60.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_60('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_60);
    UnderlyingInstrument_60.insert(UnderlyingFXRateCalc_60.getString());
    FIX::UnderlyingFactor UnderlyingFactor_60;
    UnderlyingFactor_60.setString("10538150");
    noUnderlyings_0_0.set(UnderlyingFactor_60);
    UnderlyingInstrument_60.insert(UnderlyingFactor_60.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_60(207123613);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_60);
    UnderlyingInstrument_60.insert(UnderlyingFlowScheduleType_60.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_60("STRING_541643792");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_60);
    UnderlyingInstrument_60.insert(UnderlyingInstrRegistry_60.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_60("LOCALMKTDATE_690767529");
    noUnderlyings_0_0.set(UnderlyingIssueDate_60);
    UnderlyingInstrument_60.insert(UnderlyingIssueDate_60.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_60("STRING_400600566");
    noUnderlyings_0_0.set(UnderlyingIssuer_60);
    UnderlyingInstrument_60.insert(UnderlyingIssuer_60.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_60("STRING_417331815");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_60);
    UnderlyingInstrument_60.insert(UnderlyingLocaleOfIssue_60.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_60("LOCALMKTDATE_418704149");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_60);
    UnderlyingInstrument_60.insert(UnderlyingMaturityDate_60.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_60("MONTHYEAR_1162707926");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_60);
    UnderlyingInstrument_60.insert(UnderlyingMaturityMonthYear_60.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_60("TZTIMEONLY_1873381932");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_60);
    UnderlyingInstrument_60.insert(UnderlyingMaturityTime_60.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_60;
    UnderlyingNotionalPercentageOutstanding_60.setString("71.760000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_60);
    UnderlyingInstrument_60.insert(UnderlyingNotionalPercentageOutstanding_60.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_60('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_60);
    UnderlyingInstrument_60.insert(UnderlyingOptAttribute_60.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_60;
    UnderlyingOriginalNotionalPercentageOutstanding_60.setString("99.300000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_60);
    UnderlyingInstrument_60.insert(UnderlyingOriginalNotionalPercentageOutstanding_60.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_60("STRING_597573762");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_60);
    UnderlyingInstrument_60.insert(UnderlyingPriceUnitOfMeasure_60.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_60;
    UnderlyingPriceUnitOfMeasureQty_60.setString("12678914");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_60);
    UnderlyingInstrument_60.insert(UnderlyingPriceUnitOfMeasureQty_60.getString());
    FIX::UnderlyingProduct UnderlyingProduct_60(960735835);
    noUnderlyings_0_0.set(UnderlyingProduct_60);
    UnderlyingInstrument_60.insert(UnderlyingProduct_60.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_60(305566282);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_60);
    UnderlyingInstrument_60.insert(UnderlyingPutOrCall_60.getString());
    FIX::UnderlyingPx UnderlyingPx_60;
    UnderlyingPx_60.setString("10364328");
    noUnderlyings_0_0.set(UnderlyingPx_60);
    UnderlyingInstrument_60.insert(UnderlyingPx_60.getString());
    FIX::UnderlyingQty UnderlyingQty_60;
    UnderlyingQty_60.setString("12463803");
    noUnderlyings_0_0.set(UnderlyingQty_60);
    UnderlyingInstrument_60.insert(UnderlyingQty_60.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_60("LOCALMKTDATE_1005175889");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_60);
    UnderlyingInstrument_60.insert(UnderlyingRedemptionDate_60.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_60("STRING_846756352");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_60);
    UnderlyingInstrument_60.insert(UnderlyingRepoCollateralSecurityType_60.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_60;
    UnderlyingRepurchaseRate_60.setString("12.190000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_60);
    UnderlyingInstrument_60.insert(UnderlyingRepurchaseRate_60.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_60(666353606);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_60);
    UnderlyingInstrument_60.insert(UnderlyingRepurchaseTerm_60.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_60("STRING_239124130");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_60);
    UnderlyingInstrument_60.insert(UnderlyingRestructuringType_60.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_60("STRING_1759852349");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_60);
    UnderlyingInstrument_60.insert(UnderlyingSecurityDesc_60.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_60("EXCHANGE_1199862935");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_60);
    UnderlyingInstrument_60.insert(UnderlyingSecurityExchange_60.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_60("STRING_997141440");
    noUnderlyings_0_0.set(UnderlyingSecurityID_60);
    UnderlyingInstrument_60.insert(UnderlyingSecurityID_60.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_60("STRING_1256648748");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_60);
    UnderlyingInstrument_60.insert(UnderlyingSecurityIDSource_60.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_60("STRING_939913243");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_60);
    UnderlyingInstrument_60.insert(UnderlyingSecuritySubType_60.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_60("STRING_1415631620");
    noUnderlyings_0_0.set(UnderlyingSecurityType_60);
    UnderlyingInstrument_60.insert(UnderlyingSecurityType_60.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_60("STRING_1764213768");
    noUnderlyings_0_0.set(UnderlyingSeniority_60);
    UnderlyingInstrument_60.insert(UnderlyingSeniority_60.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_60("STRING_806078723");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_60);
    UnderlyingInstrument_60.insert(UnderlyingSettlMethod_60.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_60(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_60);
    UnderlyingInstrument_60.insert(UnderlyingSettlementType_60.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_60;
    UnderlyingStartValue_60.setString("19713373");
    noUnderlyings_0_0.set(UnderlyingStartValue_60);
    UnderlyingInstrument_60.insert(UnderlyingStartValue_60.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_60("STRING_1347722515");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_60);
    UnderlyingInstrument_60.insert(UnderlyingStateOrProvinceOfIssue_60.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_60("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_60);
    UnderlyingInstrument_60.insert(UnderlyingStrikeCurrency_60.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_60;
    UnderlyingStrikePrice_60.setString("17650543");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_60);
    UnderlyingInstrument_60.insert(UnderlyingStrikePrice_60.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_60("STRING_1431434741");
    noUnderlyings_0_0.set(UnderlyingSymbol_60);
    UnderlyingInstrument_60.insert(UnderlyingSymbol_60.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_60("STRING_1387162226");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_60);
    UnderlyingInstrument_60.insert(UnderlyingSymbolSfx_60.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_60("STRING_1490952615");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_60);
    UnderlyingInstrument_60.insert(UnderlyingTimeUnit_60.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_60("STRING_1769741918");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_60);
    UnderlyingInstrument_60.insert(UnderlyingUnitOfMeasure_60.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_60;
    UnderlyingUnitOfMeasureQty_60.setString("9568012");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_60);
    UnderlyingInstrument_60.insert(UnderlyingUnitOfMeasureQty_60.getString());
    all_values.push_back(UnderlyingInstrument_60);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_124;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_124("STRING_219832032");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_124);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_124.insert(UnderlyingSecurityAltID_124.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_124("STRING_77209074");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_124);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_124.insert(UnderlyingSecurityAltIDSource_124.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_124);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_125;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_125("STRING_698854732");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_125);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_125.insert(UnderlyingSecurityAltID_125.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_125("STRING_525398314");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_125);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_125.insert(UnderlyingSecurityAltIDSource_125.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_125);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_126;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_126("STRING_1113641882");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_126);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_126.insert(UnderlyingSecurityAltID_126.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_126("STRING_1945235056");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_126);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_126.insert(UnderlyingSecurityAltIDSource_126.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_126);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_115;
      FIX::UnderlyingStipType UnderlyingStipType_115("STRING_1960398234");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_115);
      UnderlyingStipulations_NoUnderlyingStips_115.insert(UnderlyingStipType_115.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_115("STRING_1508232627");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_115);
      UnderlyingStipulations_NoUnderlyingStips_115.insert(UnderlyingStipValue_115.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_115);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_130;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_130("STRING_52038716");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_130);
      UndlyInstrumentParties_NoUndlyInstrumentParties_130.insert(UnderlyingInstrumentPartyID_130.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_130('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_130);
      UndlyInstrumentParties_NoUndlyInstrumentParties_130.insert(UnderlyingInstrumentPartyIDSource_130.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_130(1249307097);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_130);
      UndlyInstrumentParties_NoUndlyInstrumentParties_130.insert(UnderlyingInstrumentPartyRole_130.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_130);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_263("STRING_229766429");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_263);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263.insert(UnderlyingInstrumentPartySubID_263.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_263(41736692);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_263);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263.insert(UnderlyingInstrumentPartySubIDType_263.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_264("STRING_317328128");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_264);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264.insert(UnderlyingInstrumentPartySubID_264.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_264(1993980198);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_264);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264.insert(UnderlyingInstrumentPartySubIDType_264.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_265("STRING_847815415");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_265);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265.insert(UnderlyingInstrumentPartySubID_265.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_265(639291191);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_265);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265.insert(UnderlyingInstrumentPartySubIDType_265.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_12;
  FIX::Yield Yield_12;
  Yield_12.setString("39.320000");
  msg.set(Yield_12);
  YieldData_12.insert(Yield_12.getString());
  FIX::YieldCalcDate YieldCalcDate_12("LOCALMKTDATE_48054282");
  msg.set(YieldCalcDate_12);
  YieldData_12.insert(YieldCalcDate_12.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_12("LOCALMKTDATE_1652021784");
  msg.set(YieldRedemptionDate_12);
  YieldData_12.insert(YieldRedemptionDate_12.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_12;
  YieldRedemptionPrice_12.setString("20422882");
  msg.set(YieldRedemptionPrice_12);
  YieldData_12.insert(YieldRedemptionPrice_12.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_12(1813108613);
  msg.set(YieldRedemptionPriceType_12);
  YieldData_12.insert(YieldRedemptionPriceType_12.getString());
  FIX::YieldType YieldType_12("STRING_ANNUAL");
  msg.set(YieldType_12);
  YieldData_12.insert(YieldType_12.getString());
  all_values.push_back(YieldData_12);


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
