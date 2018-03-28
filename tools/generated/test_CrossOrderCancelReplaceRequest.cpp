#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/CrossOrderCancelReplaceRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CrossOrderCancelReplaceRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CrossOrderCancelReplaceRequest msg;

  list<multiset<string>> all_values;
  multiset<string> CrossOrderCancelReplaceRequest_0;
  FIX::CancellationRights CancellationRights_0('O');
  msg.set(CancellationRights_0);
  CrossOrderCancelReplaceRequest_0.insert(CancellationRights_0.getString());
  FIX::ComplianceID ComplianceID_0("STRING_1867612520");
  msg.set(ComplianceID_0);
  CrossOrderCancelReplaceRequest_0.insert(ComplianceID_0.getString());
  FIX::CrossID CrossID_0("STRING_2070815723");
  msg.set(CrossID_0);
  CrossOrderCancelReplaceRequest_0.insert(CrossID_0.getString());
  FIX::CrossPrioritization CrossPrioritization_0(2);
  msg.set(CrossPrioritization_0);
  CrossOrderCancelReplaceRequest_0.insert(CrossPrioritization_0.getString());
  FIX::CrossType CrossType_0(3);
  msg.set(CrossType_0);
  CrossOrderCancelReplaceRequest_0.insert(CrossType_0.getString());
  FIX::Currency Currency_13("CAN");
  msg.set(Currency_13);
  CrossOrderCancelReplaceRequest_0.insert(Currency_13.getString());
  FIX::Designation Designation_0("STRING_1982011865");
  msg.set(Designation_0);
  CrossOrderCancelReplaceRequest_0.insert(Designation_0.getString());
  FIX::EffectiveTime EffectiveTime_0(FIX::UTCTIMESTAMP(1, 36, 24, 18, 4, 2014));
  msg.set(EffectiveTime_0);
  CrossOrderCancelReplaceRequest_0.insert(EffectiveTime_0.getString());
  FIX::ExDestination ExDestination_0("EXCHANGE_1495922867");
  msg.set(ExDestination_0);
  CrossOrderCancelReplaceRequest_0.insert(ExDestination_0.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_0('G');
  msg.set(ExDestinationIDSource_0);
  CrossOrderCancelReplaceRequest_0.insert(ExDestinationIDSource_0.getString());
  FIX::ExecInst ExecInst_0("MULTIPLECHARVALUE_k");
  msg.set(ExecInst_0);
  CrossOrderCancelReplaceRequest_0.insert(ExecInst_0.getString());
  FIX::ExpireDate ExpireDate_1("LOCALMKTDATE_705869410");
  msg.set(ExpireDate_1);
  CrossOrderCancelReplaceRequest_0.insert(ExpireDate_1.getString());
  FIX::ExpireTime ExpireTime_2(FIX::UTCTIMESTAMP(6, 24, 37, 25, 12, 2005));
  msg.set(ExpireTime_2);
  CrossOrderCancelReplaceRequest_0.insert(ExpireTime_2.getString());
  FIX::GTBookingInst GTBookingInst_0(1);
  msg.set(GTBookingInst_0);
  CrossOrderCancelReplaceRequest_0.insert(GTBookingInst_0.getString());
  FIX::HandlInst HandlInst_0('2');
  msg.set(HandlInst_0);
  CrossOrderCancelReplaceRequest_0.insert(HandlInst_0.getString());
  FIX::HostCrossID HostCrossID_0("STRING_564499713");
  msg.set(HostCrossID_0);
  CrossOrderCancelReplaceRequest_0.insert(HostCrossID_0.getString());
  FIX::IOIID IOIID_0("STRING_1856738186");
  msg.set(IOIID_0);
  CrossOrderCancelReplaceRequest_0.insert(IOIID_0.getString());
  FIX::LocateReqd LocateReqd_0(true);
  msg.set(LocateReqd_0);
  CrossOrderCancelReplaceRequest_0.insert(LocateReqd_0.getString());
  FIX::MatchIncrement MatchIncrement_0;
  MatchIncrement_0.setString("16514659");
  msg.set(MatchIncrement_0);
  CrossOrderCancelReplaceRequest_0.insert(MatchIncrement_0.getString());
  FIX::MaxFloor MaxFloor_0;
  MaxFloor_0.setString("15768670");
  msg.set(MaxFloor_0);
  CrossOrderCancelReplaceRequest_0.insert(MaxFloor_0.getString());
  FIX::MaxPriceLevels MaxPriceLevels_0(1104108237);
  msg.set(MaxPriceLevels_0);
  CrossOrderCancelReplaceRequest_0.insert(MaxPriceLevels_0.getString());
  FIX::MaxShow MaxShow_0;
  MaxShow_0.setString("4374059");
  msg.set(MaxShow_0);
  CrossOrderCancelReplaceRequest_0.insert(MaxShow_0.getString());
  FIX::MinQty MinQty_0;
  MinQty_0.setString("11834982");
  msg.set(MinQty_0);
  CrossOrderCancelReplaceRequest_0.insert(MinQty_0.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_0('3');
  msg.set(MoneyLaunderingStatus_0);
  CrossOrderCancelReplaceRequest_0.insert(MoneyLaunderingStatus_0.getString());
  FIX::OrdType OrdType_0('L');
  msg.set(OrdType_0);
  CrossOrderCancelReplaceRequest_0.insert(OrdType_0.getString());
  FIX::OrderID OrderID_17("STRING_1018026475");
  msg.set(OrderID_17);
  CrossOrderCancelReplaceRequest_0.insert(OrderID_17.getString());
  FIX::OrigCrossID OrigCrossID_0("STRING_1627319034");
  msg.set(OrigCrossID_0);
  CrossOrderCancelReplaceRequest_0.insert(OrigCrossID_0.getString());
  FIX::ParticipationRate ParticipationRate_0;
  ParticipationRate_0.setString("24.380000");
  msg.set(ParticipationRate_0);
  CrossOrderCancelReplaceRequest_0.insert(ParticipationRate_0.getString());
  FIX::PrevClosePx PrevClosePx_0;
  PrevClosePx_0.setString("19261247");
  msg.set(PrevClosePx_0);
  CrossOrderCancelReplaceRequest_0.insert(PrevClosePx_0.getString());
  FIX::Price Price_7;
  Price_7.setString("2842980");
  msg.set(Price_7);
  CrossOrderCancelReplaceRequest_0.insert(Price_7.getString());
  FIX::PriceProtectionScope PriceProtectionScope_0('0');
  msg.set(PriceProtectionScope_0);
  CrossOrderCancelReplaceRequest_0.insert(PriceProtectionScope_0.getString());
  FIX::PriceType PriceType_10(3);
  msg.set(PriceType_10);
  CrossOrderCancelReplaceRequest_0.insert(PriceType_10.getString());
  FIX::ProcessCode ProcessCode_7('5');
  msg.set(ProcessCode_7);
  CrossOrderCancelReplaceRequest_0.insert(ProcessCode_7.getString());
  FIX::QuoteID QuoteID_0("STRING_1557817527");
  msg.set(QuoteID_0);
  CrossOrderCancelReplaceRequest_0.insert(QuoteID_0.getString());
  FIX::RegistID RegistID_0("STRING_2079741045");
  msg.set(RegistID_0);
  CrossOrderCancelReplaceRequest_0.insert(RegistID_0.getString());
  FIX::SettlDate SettlDate_12("LOCALMKTDATE_286391967");
  msg.set(SettlDate_12);
  CrossOrderCancelReplaceRequest_0.insert(SettlDate_12.getString());
  FIX::SettlType SettlType_6("STRING_5");
  msg.set(SettlType_6);
  CrossOrderCancelReplaceRequest_0.insert(SettlType_6.getString());
  FIX::StopPx StopPx_0;
  StopPx_0.setString("20389991");
  msg.set(StopPx_0);
  CrossOrderCancelReplaceRequest_0.insert(StopPx_0.getString());
  FIX::TargetStrategy TargetStrategy_0(1);
  msg.set(TargetStrategy_0);
  CrossOrderCancelReplaceRequest_0.insert(TargetStrategy_0.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_0("STRING_24498226");
  msg.set(TargetStrategyParameters_0);
  CrossOrderCancelReplaceRequest_0.insert(TargetStrategyParameters_0.getString());
  FIX::TimeInForce TimeInForce_0('8');
  msg.set(TimeInForce_0);
  CrossOrderCancelReplaceRequest_0.insert(TimeInForce_0.getString());
  FIX::TransBkdTime TransBkdTime_0(FIX::UTCTIMESTAMP(21, 15, 4, 15, 1, 2017));
  msg.set(TransBkdTime_0);
  CrossOrderCancelReplaceRequest_0.insert(TransBkdTime_0.getString());
  FIX::TransactTime TransactTime_14(FIX::UTCTIMESTAMP(5, 2, 7, 2, 4, 2007));
  msg.set(TransactTime_14);
  CrossOrderCancelReplaceRequest_0.insert(TransactTime_14.getString());
  all_values.push_back(CrossOrderCancelReplaceRequest_0);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_0;
  FIX::DiscretionInst DiscretionInst_0('7');
  msg.set(DiscretionInst_0);
  DiscretionInstructions_0.insert(DiscretionInst_0.getString());
  FIX::DiscretionLimitType DiscretionLimitType_0(1);
  msg.set(DiscretionLimitType_0);
  DiscretionInstructions_0.insert(DiscretionLimitType_0.getString());
  FIX::DiscretionMoveType DiscretionMoveType_0(1);
  msg.set(DiscretionMoveType_0);
  DiscretionInstructions_0.insert(DiscretionMoveType_0.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_0(1);
  msg.set(DiscretionOffsetType_0);
  DiscretionInstructions_0.insert(DiscretionOffsetType_0.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_0;
  DiscretionOffsetValue_0.setString("17187051");
  msg.set(DiscretionOffsetValue_0);
  DiscretionInstructions_0.insert(DiscretionOffsetValue_0.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_0(2);
  msg.set(DiscretionRoundDirection_0);
  DiscretionInstructions_0.insert(DiscretionRoundDirection_0.getString());
  FIX::DiscretionScope DiscretionScope_0(2);
  msg.set(DiscretionScope_0);
  DiscretionInstructions_0.insert(DiscretionScope_0.getString());
  all_values.push_back(DiscretionInstructions_0);

  // DisplayInstruction
  multiset<string> DisplayInstruction_0;
  FIX::DisplayHighQty DisplayHighQty_0;
  DisplayHighQty_0.setString("9573844");
  msg.set(DisplayHighQty_0);
  DisplayInstruction_0.insert(DisplayHighQty_0.getString());
  FIX::DisplayLowQty DisplayLowQty_0;
  DisplayLowQty_0.setString("3248283");
  msg.set(DisplayLowQty_0);
  DisplayInstruction_0.insert(DisplayLowQty_0.getString());
  FIX::DisplayMethod DisplayMethod_0('1');
  msg.set(DisplayMethod_0);
  DisplayInstruction_0.insert(DisplayMethod_0.getString());
  FIX::DisplayMinIncr DisplayMinIncr_0;
  DisplayMinIncr_0.setString("8896418");
  msg.set(DisplayMinIncr_0);
  DisplayInstruction_0.insert(DisplayMinIncr_0.getString());
  FIX::DisplayQty DisplayQty_0;
  DisplayQty_0.setString("6112203");
  msg.set(DisplayQty_0);
  DisplayInstruction_0.insert(DisplayQty_0.getString());
  FIX::DisplayWhen DisplayWhen_0('2');
  msg.set(DisplayWhen_0);
  DisplayInstruction_0.insert(DisplayWhen_0.getString());
  FIX::RefreshQty RefreshQty_0;
  RefreshQty_0.setString("7811574");
  msg.set(RefreshQty_0);
  DisplayInstruction_0.insert(RefreshQty_0.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_0;
  SecondaryDisplayQty_0.setString("13072377");
  msg.set(SecondaryDisplayQty_0);
  DisplayInstruction_0.insert(SecondaryDisplayQty_0.getString());
  all_values.push_back(DisplayInstruction_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_22;
    FIX::EncodedLegIssuer EncodedLegIssuer_22("DATA_1332399768");
    noLegs_0_0.set(EncodedLegIssuer_22);
    InstrumentLeg_22.insert(EncodedLegIssuer_22.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_22(1134643478);
    noLegs_0_0.set(EncodedLegIssuerLen_22);
    InstrumentLeg_22.insert(EncodedLegIssuerLen_22.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_22("DATA_200538249");
    noLegs_0_0.set(EncodedLegSecurityDesc_22);
    InstrumentLeg_22.insert(EncodedLegSecurityDesc_22.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_22(557357335);
    noLegs_0_0.set(EncodedLegSecurityDescLen_22);
    InstrumentLeg_22.insert(EncodedLegSecurityDescLen_22.getString());
    FIX::LegCFICode LegCFICode_22("STRING_1734544843");
    noLegs_0_0.set(LegCFICode_22);
    InstrumentLeg_22.insert(LegCFICode_22.getString());
    FIX::LegContractMultiplier LegContractMultiplier_22;
    LegContractMultiplier_22.setString("21280444");
    noLegs_0_0.set(LegContractMultiplier_22);
    InstrumentLeg_22.insert(LegContractMultiplier_22.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_22(346814616);
    noLegs_0_0.set(LegContractMultiplierUnit_22);
    InstrumentLeg_22.insert(LegContractMultiplierUnit_22.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_22("MONTHYEAR_2043700746");
    noLegs_0_0.set(LegContractSettlMonth_22);
    InstrumentLeg_22.insert(LegContractSettlMonth_22.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_22("COUNTRY_941359425");
    noLegs_0_0.set(LegCountryOfIssue_22);
    InstrumentLeg_22.insert(LegCountryOfIssue_22.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_22("LOCALMKTDATE_1787737877");
    noLegs_0_0.set(LegCouponPaymentDate_22);
    InstrumentLeg_22.insert(LegCouponPaymentDate_22.getString());
    FIX::LegCouponRate LegCouponRate_22;
    LegCouponRate_22.setString("0.600000");
    noLegs_0_0.set(LegCouponRate_22);
    InstrumentLeg_22.insert(LegCouponRate_22.getString());
    FIX::LegCreditRating LegCreditRating_22("STRING_858782684");
    noLegs_0_0.set(LegCreditRating_22);
    InstrumentLeg_22.insert(LegCreditRating_22.getString());
    FIX::LegCurrency LegCurrency_22("EUR");
    noLegs_0_0.set(LegCurrency_22);
    InstrumentLeg_22.insert(LegCurrency_22.getString());
    FIX::LegDatedDate LegDatedDate_22("LOCALMKTDATE_645819739");
    noLegs_0_0.set(LegDatedDate_22);
    InstrumentLeg_22.insert(LegDatedDate_22.getString());
    FIX::LegExerciseStyle LegExerciseStyle_22(977464830);
    noLegs_0_0.set(LegExerciseStyle_22);
    InstrumentLeg_22.insert(LegExerciseStyle_22.getString());
    FIX::LegFactor LegFactor_22;
    LegFactor_22.setString("3493743");
    noLegs_0_0.set(LegFactor_22);
    InstrumentLeg_22.insert(LegFactor_22.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_22(2060175828);
    noLegs_0_0.set(LegFlowScheduleType_22);
    InstrumentLeg_22.insert(LegFlowScheduleType_22.getString());
    FIX::LegInstrRegistry LegInstrRegistry_22("STRING_1295698659");
    noLegs_0_0.set(LegInstrRegistry_22);
    InstrumentLeg_22.insert(LegInstrRegistry_22.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_22("LOCALMKTDATE_2068079492");
    noLegs_0_0.set(LegInterestAccrualDate_22);
    InstrumentLeg_22.insert(LegInterestAccrualDate_22.getString());
    FIX::LegIssueDate LegIssueDate_22("LOCALMKTDATE_1611346279");
    noLegs_0_0.set(LegIssueDate_22);
    InstrumentLeg_22.insert(LegIssueDate_22.getString());
    FIX::LegIssuer LegIssuer_22("STRING_1675827148");
    noLegs_0_0.set(LegIssuer_22);
    InstrumentLeg_22.insert(LegIssuer_22.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_22("STRING_877980316");
    noLegs_0_0.set(LegLocaleOfIssue_22);
    InstrumentLeg_22.insert(LegLocaleOfIssue_22.getString());
    FIX::LegMaturityDate LegMaturityDate_22("LOCALMKTDATE_1936174635");
    noLegs_0_0.set(LegMaturityDate_22);
    InstrumentLeg_22.insert(LegMaturityDate_22.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_22("MONTHYEAR_1466289516");
    noLegs_0_0.set(LegMaturityMonthYear_22);
    InstrumentLeg_22.insert(LegMaturityMonthYear_22.getString());
    FIX::LegMaturityTime LegMaturityTime_22("TZTIMEONLY_1767622186");
    noLegs_0_0.set(LegMaturityTime_22);
    InstrumentLeg_22.insert(LegMaturityTime_22.getString());
    FIX::LegOptAttribute LegOptAttribute_22('3');
    noLegs_0_0.set(LegOptAttribute_22);
    InstrumentLeg_22.insert(LegOptAttribute_22.getString());
    FIX::LegOptionRatio LegOptionRatio_22;
    LegOptionRatio_22.setString("13729551");
    noLegs_0_0.set(LegOptionRatio_22);
    InstrumentLeg_22.insert(LegOptionRatio_22.getString());
    FIX::LegPool LegPool_22("STRING_401295958");
    noLegs_0_0.set(LegPool_22);
    InstrumentLeg_22.insert(LegPool_22.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_22("STRING_1707149077");
    noLegs_0_0.set(LegPriceUnitOfMeasure_22);
    InstrumentLeg_22.insert(LegPriceUnitOfMeasure_22.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_22;
    LegPriceUnitOfMeasureQty_22.setString("13041190");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_22);
    InstrumentLeg_22.insert(LegPriceUnitOfMeasureQty_22.getString());
    FIX::LegProduct LegProduct_22(1733695726);
    noLegs_0_0.set(LegProduct_22);
    InstrumentLeg_22.insert(LegProduct_22.getString());
    FIX::LegPutOrCall LegPutOrCall_22(694308908);
    noLegs_0_0.set(LegPutOrCall_22);
    InstrumentLeg_22.insert(LegPutOrCall_22.getString());
    FIX::LegRatioQty LegRatioQty_22;
    LegRatioQty_22.setString("15046573");
    noLegs_0_0.set(LegRatioQty_22);
    InstrumentLeg_22.insert(LegRatioQty_22.getString());
    FIX::LegRedemptionDate LegRedemptionDate_22("LOCALMKTDATE_143569413");
    noLegs_0_0.set(LegRedemptionDate_22);
    InstrumentLeg_22.insert(LegRedemptionDate_22.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_22("STRING_281370103");
    noLegs_0_0.set(LegRepoCollateralSecurityType_22);
    InstrumentLeg_22.insert(LegRepoCollateralSecurityType_22.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_22;
    LegRepurchaseRate_22.setString("80.620000");
    noLegs_0_0.set(LegRepurchaseRate_22);
    InstrumentLeg_22.insert(LegRepurchaseRate_22.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_22(490384029);
    noLegs_0_0.set(LegRepurchaseTerm_22);
    InstrumentLeg_22.insert(LegRepurchaseTerm_22.getString());
    FIX::LegSecurityDesc LegSecurityDesc_22("STRING_177587201");
    noLegs_0_0.set(LegSecurityDesc_22);
    InstrumentLeg_22.insert(LegSecurityDesc_22.getString());
    FIX::LegSecurityExchange LegSecurityExchange_22("EXCHANGE_279093840");
    noLegs_0_0.set(LegSecurityExchange_22);
    InstrumentLeg_22.insert(LegSecurityExchange_22.getString());
    FIX::LegSecurityID LegSecurityID_22("STRING_130638258");
    noLegs_0_0.set(LegSecurityID_22);
    InstrumentLeg_22.insert(LegSecurityID_22.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_22("STRING_1959827261");
    noLegs_0_0.set(LegSecurityIDSource_22);
    InstrumentLeg_22.insert(LegSecurityIDSource_22.getString());
    FIX::LegSecuritySubType LegSecuritySubType_22("STRING_1137876524");
    noLegs_0_0.set(LegSecuritySubType_22);
    InstrumentLeg_22.insert(LegSecuritySubType_22.getString());
    FIX::LegSecurityType LegSecurityType_22("STRING_1649221698");
    noLegs_0_0.set(LegSecurityType_22);
    InstrumentLeg_22.insert(LegSecurityType_22.getString());
    FIX::LegSide LegSide_22('3');
    noLegs_0_0.set(LegSide_22);
    InstrumentLeg_22.insert(LegSide_22.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_22("STRING_1783696264");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_22);
    InstrumentLeg_22.insert(LegStateOrProvinceOfIssue_22.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_22("GBP");
    noLegs_0_0.set(LegStrikeCurrency_22);
    InstrumentLeg_22.insert(LegStrikeCurrency_22.getString());
    FIX::LegStrikePrice LegStrikePrice_22;
    LegStrikePrice_22.setString("16963884");
    noLegs_0_0.set(LegStrikePrice_22);
    InstrumentLeg_22.insert(LegStrikePrice_22.getString());
    FIX::LegSymbol LegSymbol_22("STRING_1774901540");
    noLegs_0_0.set(LegSymbol_22);
    InstrumentLeg_22.insert(LegSymbol_22.getString());
    FIX::LegSymbolSfx LegSymbolSfx_22("STRING_639107822");
    noLegs_0_0.set(LegSymbolSfx_22);
    InstrumentLeg_22.insert(LegSymbolSfx_22.getString());
    FIX::LegTimeUnit LegTimeUnit_22("STRING_1160251076");
    noLegs_0_0.set(LegTimeUnit_22);
    InstrumentLeg_22.insert(LegTimeUnit_22.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_22("STRING_1303245040");
    noLegs_0_0.set(LegUnitOfMeasure_22);
    InstrumentLeg_22.insert(LegUnitOfMeasure_22.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_22;
    LegUnitOfMeasureQty_22.setString("15170881");
    noLegs_0_0.set(LegUnitOfMeasureQty_22);
    InstrumentLeg_22.insert(LegUnitOfMeasureQty_22.getString());
    all_values.push_back(InstrumentLeg_22);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_41;
      FIX::LegSecurityAltID LegSecurityAltID_41("STRING_622050909");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_41);
      LegSecAltIDGrp_NoLegSecurityAltID_41.insert(LegSecurityAltID_41.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_41("STRING_1137226677");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_41);
      LegSecAltIDGrp_NoLegSecurityAltID_41.insert(LegSecurityAltIDSource_41.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_41);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_23;
    FIX::EncodedLegIssuer EncodedLegIssuer_23("DATA_1348853372");
    noLegs_0_1.set(EncodedLegIssuer_23);
    InstrumentLeg_23.insert(EncodedLegIssuer_23.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_23(1995006083);
    noLegs_0_1.set(EncodedLegIssuerLen_23);
    InstrumentLeg_23.insert(EncodedLegIssuerLen_23.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_23("DATA_1538522635");
    noLegs_0_1.set(EncodedLegSecurityDesc_23);
    InstrumentLeg_23.insert(EncodedLegSecurityDesc_23.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_23(908518802);
    noLegs_0_1.set(EncodedLegSecurityDescLen_23);
    InstrumentLeg_23.insert(EncodedLegSecurityDescLen_23.getString());
    FIX::LegCFICode LegCFICode_23("STRING_1151641492");
    noLegs_0_1.set(LegCFICode_23);
    InstrumentLeg_23.insert(LegCFICode_23.getString());
    FIX::LegContractMultiplier LegContractMultiplier_23;
    LegContractMultiplier_23.setString("11247347");
    noLegs_0_1.set(LegContractMultiplier_23);
    InstrumentLeg_23.insert(LegContractMultiplier_23.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_23(1602827710);
    noLegs_0_1.set(LegContractMultiplierUnit_23);
    InstrumentLeg_23.insert(LegContractMultiplierUnit_23.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_23("MONTHYEAR_508815151");
    noLegs_0_1.set(LegContractSettlMonth_23);
    InstrumentLeg_23.insert(LegContractSettlMonth_23.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_23("COUNTRY_1268304126");
    noLegs_0_1.set(LegCountryOfIssue_23);
    InstrumentLeg_23.insert(LegCountryOfIssue_23.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_23("LOCALMKTDATE_1884197813");
    noLegs_0_1.set(LegCouponPaymentDate_23);
    InstrumentLeg_23.insert(LegCouponPaymentDate_23.getString());
    FIX::LegCouponRate LegCouponRate_23;
    LegCouponRate_23.setString("32.130000");
    noLegs_0_1.set(LegCouponRate_23);
    InstrumentLeg_23.insert(LegCouponRate_23.getString());
    FIX::LegCreditRating LegCreditRating_23("STRING_1758688156");
    noLegs_0_1.set(LegCreditRating_23);
    InstrumentLeg_23.insert(LegCreditRating_23.getString());
    FIX::LegCurrency LegCurrency_23("CHF");
    noLegs_0_1.set(LegCurrency_23);
    InstrumentLeg_23.insert(LegCurrency_23.getString());
    FIX::LegDatedDate LegDatedDate_23("LOCALMKTDATE_1889326414");
    noLegs_0_1.set(LegDatedDate_23);
    InstrumentLeg_23.insert(LegDatedDate_23.getString());
    FIX::LegExerciseStyle LegExerciseStyle_23(1874128627);
    noLegs_0_1.set(LegExerciseStyle_23);
    InstrumentLeg_23.insert(LegExerciseStyle_23.getString());
    FIX::LegFactor LegFactor_23;
    LegFactor_23.setString("12635199");
    noLegs_0_1.set(LegFactor_23);
    InstrumentLeg_23.insert(LegFactor_23.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_23(1391064464);
    noLegs_0_1.set(LegFlowScheduleType_23);
    InstrumentLeg_23.insert(LegFlowScheduleType_23.getString());
    FIX::LegInstrRegistry LegInstrRegistry_23("STRING_95782575");
    noLegs_0_1.set(LegInstrRegistry_23);
    InstrumentLeg_23.insert(LegInstrRegistry_23.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_23("LOCALMKTDATE_899732546");
    noLegs_0_1.set(LegInterestAccrualDate_23);
    InstrumentLeg_23.insert(LegInterestAccrualDate_23.getString());
    FIX::LegIssueDate LegIssueDate_23("LOCALMKTDATE_1870267345");
    noLegs_0_1.set(LegIssueDate_23);
    InstrumentLeg_23.insert(LegIssueDate_23.getString());
    FIX::LegIssuer LegIssuer_23("STRING_814294554");
    noLegs_0_1.set(LegIssuer_23);
    InstrumentLeg_23.insert(LegIssuer_23.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_23("STRING_448637342");
    noLegs_0_1.set(LegLocaleOfIssue_23);
    InstrumentLeg_23.insert(LegLocaleOfIssue_23.getString());
    FIX::LegMaturityDate LegMaturityDate_23("LOCALMKTDATE_1497685237");
    noLegs_0_1.set(LegMaturityDate_23);
    InstrumentLeg_23.insert(LegMaturityDate_23.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_23("MONTHYEAR_1453402376");
    noLegs_0_1.set(LegMaturityMonthYear_23);
    InstrumentLeg_23.insert(LegMaturityMonthYear_23.getString());
    FIX::LegMaturityTime LegMaturityTime_23("TZTIMEONLY_1608888418");
    noLegs_0_1.set(LegMaturityTime_23);
    InstrumentLeg_23.insert(LegMaturityTime_23.getString());
    FIX::LegOptAttribute LegOptAttribute_23('6');
    noLegs_0_1.set(LegOptAttribute_23);
    InstrumentLeg_23.insert(LegOptAttribute_23.getString());
    FIX::LegOptionRatio LegOptionRatio_23;
    LegOptionRatio_23.setString("8230068");
    noLegs_0_1.set(LegOptionRatio_23);
    InstrumentLeg_23.insert(LegOptionRatio_23.getString());
    FIX::LegPool LegPool_23("STRING_410346833");
    noLegs_0_1.set(LegPool_23);
    InstrumentLeg_23.insert(LegPool_23.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_23("STRING_1275497538");
    noLegs_0_1.set(LegPriceUnitOfMeasure_23);
    InstrumentLeg_23.insert(LegPriceUnitOfMeasure_23.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_23;
    LegPriceUnitOfMeasureQty_23.setString("19602335");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_23);
    InstrumentLeg_23.insert(LegPriceUnitOfMeasureQty_23.getString());
    FIX::LegProduct LegProduct_23(1759200206);
    noLegs_0_1.set(LegProduct_23);
    InstrumentLeg_23.insert(LegProduct_23.getString());
    FIX::LegPutOrCall LegPutOrCall_23(1123019973);
    noLegs_0_1.set(LegPutOrCall_23);
    InstrumentLeg_23.insert(LegPutOrCall_23.getString());
    FIX::LegRatioQty LegRatioQty_23;
    LegRatioQty_23.setString("13512725");
    noLegs_0_1.set(LegRatioQty_23);
    InstrumentLeg_23.insert(LegRatioQty_23.getString());
    FIX::LegRedemptionDate LegRedemptionDate_23("LOCALMKTDATE_520235360");
    noLegs_0_1.set(LegRedemptionDate_23);
    InstrumentLeg_23.insert(LegRedemptionDate_23.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_23("STRING_127177818");
    noLegs_0_1.set(LegRepoCollateralSecurityType_23);
    InstrumentLeg_23.insert(LegRepoCollateralSecurityType_23.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_23;
    LegRepurchaseRate_23.setString("35.960000");
    noLegs_0_1.set(LegRepurchaseRate_23);
    InstrumentLeg_23.insert(LegRepurchaseRate_23.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_23(2123063070);
    noLegs_0_1.set(LegRepurchaseTerm_23);
    InstrumentLeg_23.insert(LegRepurchaseTerm_23.getString());
    FIX::LegSecurityDesc LegSecurityDesc_23("STRING_635992969");
    noLegs_0_1.set(LegSecurityDesc_23);
    InstrumentLeg_23.insert(LegSecurityDesc_23.getString());
    FIX::LegSecurityExchange LegSecurityExchange_23("EXCHANGE_1596827723");
    noLegs_0_1.set(LegSecurityExchange_23);
    InstrumentLeg_23.insert(LegSecurityExchange_23.getString());
    FIX::LegSecurityID LegSecurityID_23("STRING_1859777235");
    noLegs_0_1.set(LegSecurityID_23);
    InstrumentLeg_23.insert(LegSecurityID_23.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_23("STRING_482542534");
    noLegs_0_1.set(LegSecurityIDSource_23);
    InstrumentLeg_23.insert(LegSecurityIDSource_23.getString());
    FIX::LegSecuritySubType LegSecuritySubType_23("STRING_1208032231");
    noLegs_0_1.set(LegSecuritySubType_23);
    InstrumentLeg_23.insert(LegSecuritySubType_23.getString());
    FIX::LegSecurityType LegSecurityType_23("STRING_1774078601");
    noLegs_0_1.set(LegSecurityType_23);
    InstrumentLeg_23.insert(LegSecurityType_23.getString());
    FIX::LegSide LegSide_23('6');
    noLegs_0_1.set(LegSide_23);
    InstrumentLeg_23.insert(LegSide_23.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_23("STRING_949874997");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_23);
    InstrumentLeg_23.insert(LegStateOrProvinceOfIssue_23.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_23("GBP");
    noLegs_0_1.set(LegStrikeCurrency_23);
    InstrumentLeg_23.insert(LegStrikeCurrency_23.getString());
    FIX::LegStrikePrice LegStrikePrice_23;
    LegStrikePrice_23.setString("1934558");
    noLegs_0_1.set(LegStrikePrice_23);
    InstrumentLeg_23.insert(LegStrikePrice_23.getString());
    FIX::LegSymbol LegSymbol_23("STRING_1596506155");
    noLegs_0_1.set(LegSymbol_23);
    InstrumentLeg_23.insert(LegSymbol_23.getString());
    FIX::LegSymbolSfx LegSymbolSfx_23("STRING_623954768");
    noLegs_0_1.set(LegSymbolSfx_23);
    InstrumentLeg_23.insert(LegSymbolSfx_23.getString());
    FIX::LegTimeUnit LegTimeUnit_23("STRING_2063723159");
    noLegs_0_1.set(LegTimeUnit_23);
    InstrumentLeg_23.insert(LegTimeUnit_23.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_23("STRING_263317061");
    noLegs_0_1.set(LegUnitOfMeasure_23);
    InstrumentLeg_23.insert(LegUnitOfMeasure_23.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_23;
    LegUnitOfMeasureQty_23.setString("10725921");
    noLegs_0_1.set(LegUnitOfMeasureQty_23);
    InstrumentLeg_23.insert(LegUnitOfMeasureQty_23.getString());
    all_values.push_back(InstrumentLeg_23);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_42;
      FIX::LegSecurityAltID LegSecurityAltID_42("STRING_1716719438");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_42);
      LegSecAltIDGrp_NoLegSecurityAltID_42.insert(LegSecurityAltID_42.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_42("STRING_533996881");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_42);
      LegSecAltIDGrp_NoLegSecurityAltID_42.insert(LegSecurityAltIDSource_42.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_42);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_43;
      FIX::LegSecurityAltID LegSecurityAltID_43("STRING_2067371377");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_43);
      LegSecAltIDGrp_NoLegSecurityAltID_43.insert(LegSecurityAltID_43.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_43("STRING_392242657");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_43);
      LegSecAltIDGrp_NoLegSecurityAltID_43.insert(LegSecurityAltIDSource_43.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_43);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_16;
  FIX::AttachmentPoint AttachmentPoint_16;
  AttachmentPoint_16.setString("37.140000");
  msg.set(AttachmentPoint_16);
  Instrument_16.insert(AttachmentPoint_16.getString());
  FIX::CFICode CFICode_16("STRING_1195385268");
  msg.set(CFICode_16);
  Instrument_16.insert(CFICode_16.getString());
  FIX::CPProgram CPProgram_16(2);
  msg.set(CPProgram_16);
  Instrument_16.insert(CPProgram_16.getString());
  FIX::CPRegType CPRegType_16("STRING_556060272");
  msg.set(CPRegType_16);
  Instrument_16.insert(CPRegType_16.getString());
  FIX::CapPrice CapPrice_16;
  CapPrice_16.setString("1709215");
  msg.set(CapPrice_16);
  Instrument_16.insert(CapPrice_16.getString());
  FIX::ContractMultiplier ContractMultiplier_16;
  ContractMultiplier_16.setString("15562650");
  msg.set(ContractMultiplier_16);
  Instrument_16.insert(ContractMultiplier_16.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_16(2);
  msg.set(ContractMultiplierUnit_16);
  Instrument_16.insert(ContractMultiplierUnit_16.getString());
  FIX::ContractSettlMonth ContractSettlMonth_16("MONTHYEAR_298099411");
  msg.set(ContractSettlMonth_16);
  Instrument_16.insert(ContractSettlMonth_16.getString());
  FIX::CountryOfIssue CountryOfIssue_16("COUNTRY_1884788682");
  msg.set(CountryOfIssue_16);
  Instrument_16.insert(CountryOfIssue_16.getString());
  FIX::CouponPaymentDate CouponPaymentDate_16("LOCALMKTDATE_1051875054");
  msg.set(CouponPaymentDate_16);
  Instrument_16.insert(CouponPaymentDate_16.getString());
  FIX::CouponRate CouponRate_16;
  CouponRate_16.setString("23.800000");
  msg.set(CouponRate_16);
  Instrument_16.insert(CouponRate_16.getString());
  FIX::CreditRating CreditRating_16("STRING_1334132757");
  msg.set(CreditRating_16);
  Instrument_16.insert(CreditRating_16.getString());
  FIX::DatedDate DatedDate_16("LOCALMKTDATE_764168641");
  msg.set(DatedDate_16);
  Instrument_16.insert(DatedDate_16.getString());
  FIX::DetachmentPoint DetachmentPoint_16;
  DetachmentPoint_16.setString("49.150000");
  msg.set(DetachmentPoint_16);
  Instrument_16.insert(DetachmentPoint_16.getString());
  FIX::EncodedIssuer EncodedIssuer_16("DATA_394681340");
  msg.set(EncodedIssuer_16);
  Instrument_16.insert(EncodedIssuer_16.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_16(390763594);
  msg.set(EncodedIssuerLen_16);
  Instrument_16.insert(EncodedIssuerLen_16.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_16("DATA_2024820855");
  msg.set(EncodedSecurityDesc_16);
  Instrument_16.insert(EncodedSecurityDesc_16.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_16(1344556337);
  msg.set(EncodedSecurityDescLen_16);
  Instrument_16.insert(EncodedSecurityDescLen_16.getString());
  FIX::ExerciseStyle ExerciseStyle_16(2);
  msg.set(ExerciseStyle_16);
  Instrument_16.insert(ExerciseStyle_16.getString());
  FIX::Factor Factor_16;
  Factor_16.setString("17490430");
  msg.set(Factor_16);
  Instrument_16.insert(Factor_16.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_16(false);
  msg.set(FlexProductEligibilityIndicator_16);
  Instrument_16.insert(FlexProductEligibilityIndicator_16.getString());
  FIX::FlexibleIndicator FlexibleIndicator_16(true);
  msg.set(FlexibleIndicator_16);
  Instrument_16.insert(FlexibleIndicator_16.getString());
  FIX::FloorPrice FloorPrice_16;
  FloorPrice_16.setString("2255141");
  msg.set(FloorPrice_16);
  Instrument_16.insert(FloorPrice_16.getString());
  FIX::FlowScheduleType FlowScheduleType_16(2);
  msg.set(FlowScheduleType_16);
  Instrument_16.insert(FlowScheduleType_16.getString());
  FIX::InstrRegistry InstrRegistry_16("STRING_1603826743");
  msg.set(InstrRegistry_16);
  Instrument_16.insert(InstrRegistry_16.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_16('1');
  msg.set(InstrmtAssignmentMethod_16);
  Instrument_16.insert(InstrmtAssignmentMethod_16.getString());
  FIX::InterestAccrualDate InterestAccrualDate_16("LOCALMKTDATE_720692762");
  msg.set(InterestAccrualDate_16);
  Instrument_16.insert(InterestAccrualDate_16.getString());
  FIX::IssueDate IssueDate_16("LOCALMKTDATE_1173062533");
  msg.set(IssueDate_16);
  Instrument_16.insert(IssueDate_16.getString());
  FIX::Issuer Issuer_16("STRING_1832103188");
  msg.set(Issuer_16);
  Instrument_16.insert(Issuer_16.getString());
  FIX::ListMethod ListMethod_16(0);
  msg.set(ListMethod_16);
  Instrument_16.insert(ListMethod_16.getString());
  FIX::LocaleOfIssue LocaleOfIssue_16("STRING_1565305191");
  msg.set(LocaleOfIssue_16);
  Instrument_16.insert(LocaleOfIssue_16.getString());
  FIX::MaturityDate MaturityDate_16("LOCALMKTDATE_628963255");
  msg.set(MaturityDate_16);
  Instrument_16.insert(MaturityDate_16.getString());
  FIX::MaturityMonthYear MaturityMonthYear_16("MONTHYEAR_1835965760");
  msg.set(MaturityMonthYear_16);
  Instrument_16.insert(MaturityMonthYear_16.getString());
  FIX::MaturityTime MaturityTime_16("TZTIMEONLY_1770297745");
  msg.set(MaturityTime_16);
  Instrument_16.insert(MaturityTime_16.getString());
  FIX::MinPriceIncrement MinPriceIncrement_16;
  MinPriceIncrement_16.setString("11850235");
  msg.set(MinPriceIncrement_16);
  Instrument_16.insert(MinPriceIncrement_16.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_16;
  MinPriceIncrementAmount_16.setString("20068873");
  msg.set(MinPriceIncrementAmount_16);
  Instrument_16.insert(MinPriceIncrementAmount_16.getString());
  FIX::NTPositionLimit NTPositionLimit_16(1179079182);
  msg.set(NTPositionLimit_16);
  Instrument_16.insert(NTPositionLimit_16.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_16;
  NotionalPercentageOutstanding_16.setString("55.120000");
  msg.set(NotionalPercentageOutstanding_16);
  Instrument_16.insert(NotionalPercentageOutstanding_16.getString());
  FIX::OptAttribute OptAttribute_16('1');
  msg.set(OptAttribute_16);
  Instrument_16.insert(OptAttribute_16.getString());
  FIX::OptPayoutAmount OptPayoutAmount_16;
  OptPayoutAmount_16.setString("9163842");
  msg.set(OptPayoutAmount_16);
  Instrument_16.insert(OptPayoutAmount_16.getString());
  FIX::OptPayoutType OptPayoutType_16(3);
  msg.set(OptPayoutType_16);
  Instrument_16.insert(OptPayoutType_16.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_16;
  OriginalNotionalPercentageOutstanding_16.setString("54.970000");
  msg.set(OriginalNotionalPercentageOutstanding_16);
  Instrument_16.insert(OriginalNotionalPercentageOutstanding_16.getString());
  FIX::Pool Pool_16("STRING_103033325");
  msg.set(Pool_16);
  Instrument_16.insert(Pool_16.getString());
  FIX::PositionLimit PositionLimit_16(1929879208);
  msg.set(PositionLimit_16);
  Instrument_16.insert(PositionLimit_16.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_16("STRING_STD");
  msg.set(PriceQuoteMethod_16);
  Instrument_16.insert(PriceQuoteMethod_16.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_16("STRING_497714665");
  msg.set(PriceUnitOfMeasure_16);
  Instrument_16.insert(PriceUnitOfMeasure_16.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_16;
  PriceUnitOfMeasureQty_16.setString("1731591");
  msg.set(PriceUnitOfMeasureQty_16);
  Instrument_16.insert(PriceUnitOfMeasureQty_16.getString());
  FIX::Product Product_18(9);
  msg.set(Product_18);
  Instrument_16.insert(Product_18.getString());
  FIX::ProductComplex ProductComplex_16("STRING_1842271003");
  msg.set(ProductComplex_16);
  Instrument_16.insert(ProductComplex_16.getString());
  FIX::PutOrCall PutOrCall_16(1);
  msg.set(PutOrCall_16);
  Instrument_16.insert(PutOrCall_16.getString());
  FIX::RedemptionDate RedemptionDate_16("LOCALMKTDATE_1987127048");
  msg.set(RedemptionDate_16);
  Instrument_16.insert(RedemptionDate_16.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_16("STRING_1232799506");
  msg.set(RepoCollateralSecurityType_16);
  Instrument_16.insert(RepoCollateralSecurityType_16.getString());
  FIX::RepurchaseRate RepurchaseRate_16;
  RepurchaseRate_16.setString("23.630000");
  msg.set(RepurchaseRate_16);
  Instrument_16.insert(RepurchaseRate_16.getString());
  FIX::RepurchaseTerm RepurchaseTerm_16(65157597);
  msg.set(RepurchaseTerm_16);
  Instrument_16.insert(RepurchaseTerm_16.getString());
  FIX::RestructuringType RestructuringType_16("STRING_MR");
  msg.set(RestructuringType_16);
  Instrument_16.insert(RestructuringType_16.getString());
  FIX::SecurityDesc SecurityDesc_16("STRING_714015458");
  msg.set(SecurityDesc_16);
  Instrument_16.insert(SecurityDesc_16.getString());
  FIX::SecurityExchange SecurityExchange_16("EXCHANGE_1363263905");
  msg.set(SecurityExchange_16);
  Instrument_16.insert(SecurityExchange_16.getString());
  FIX::SecurityGroup SecurityGroup_16("STRING_1260260283");
  msg.set(SecurityGroup_16);
  Instrument_16.insert(SecurityGroup_16.getString());
  FIX::SecurityID SecurityID_16("STRING_1887077992");
  msg.set(SecurityID_16);
  Instrument_16.insert(SecurityID_16.getString());
  FIX::SecurityIDSource SecurityIDSource_16("STRING_G");
  msg.set(SecurityIDSource_16);
  Instrument_16.insert(SecurityIDSource_16.getString());
  FIX::SecurityStatus SecurityStatus_16("STRING_2");
  msg.set(SecurityStatus_16);
  Instrument_16.insert(SecurityStatus_16.getString());
  FIX::SecuritySubType SecuritySubType_16("STRING_1304899535");
  msg.set(SecuritySubType_16);
  Instrument_16.insert(SecuritySubType_16.getString());
  FIX::SecurityType SecurityType_18("STRING_SECLOAN");
  msg.set(SecurityType_18);
  Instrument_16.insert(SecurityType_18.getString());
  FIX::Seniority Seniority_16("STRING_SB");
  msg.set(Seniority_16);
  Instrument_16.insert(Seniority_16.getString());
  FIX::SettlMethod SettlMethod_16('C');
  msg.set(SettlMethod_16);
  Instrument_16.insert(SettlMethod_16.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_16("STRING_714386580");
  msg.set(SettleOnOpenFlag_16);
  Instrument_16.insert(SettleOnOpenFlag_16.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_16("STRING_1448726593");
  msg.set(StateOrProvinceOfIssue_16);
  Instrument_16.insert(StateOrProvinceOfIssue_16.getString());
  FIX::StrikeCurrency StrikeCurrency_16("GBP");
  msg.set(StrikeCurrency_16);
  Instrument_16.insert(StrikeCurrency_16.getString());
  FIX::StrikeMultiplier StrikeMultiplier_16;
  StrikeMultiplier_16.setString("16062297");
  msg.set(StrikeMultiplier_16);
  Instrument_16.insert(StrikeMultiplier_16.getString());
  FIX::StrikePrice StrikePrice_16;
  StrikePrice_16.setString("8756933");
  msg.set(StrikePrice_16);
  Instrument_16.insert(StrikePrice_16.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_16(4);
  msg.set(StrikePriceBoundaryMethod_16);
  Instrument_16.insert(StrikePriceBoundaryMethod_16.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_16;
  StrikePriceBoundaryPrecision_16.setString("15.590000");
  msg.set(StrikePriceBoundaryPrecision_16);
  Instrument_16.insert(StrikePriceBoundaryPrecision_16.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_16(1);
  msg.set(StrikePriceDeterminationMethod_16);
  Instrument_16.insert(StrikePriceDeterminationMethod_16.getString());
  FIX::StrikeValue StrikeValue_16;
  StrikeValue_16.setString("17763282");
  msg.set(StrikeValue_16);
  Instrument_16.insert(StrikeValue_16.getString());
  FIX::Symbol Symbol_16("STRING_911088324");
  msg.set(Symbol_16);
  Instrument_16.insert(Symbol_16.getString());
  FIX::SymbolSfx SymbolSfx_16("STRING_CD");
  msg.set(SymbolSfx_16);
  Instrument_16.insert(SymbolSfx_16.getString());
  FIX::TimeUnit TimeUnit_16("STRING_Min");
  msg.set(TimeUnit_16);
  Instrument_16.insert(TimeUnit_16.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_16(4);
  msg.set(UnderlyingPriceDeterminationMethod_16);
  Instrument_16.insert(UnderlyingPriceDeterminationMethod_16.getString());
  FIX::UnitOfMeasure UnitOfMeasure_16("STRING_oz_tr");
  msg.set(UnitOfMeasure_16);
  Instrument_16.insert(UnitOfMeasure_16.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_16;
  UnitOfMeasureQty_16.setString("18666500");
  msg.set(UnitOfMeasureQty_16);
  Instrument_16.insert(UnitOfMeasureQty_16.getString());
  FIX::ValuationMethod ValuationMethod_16("STRING_FUT");
  msg.set(ValuationMethod_16);
  Instrument_16.insert(ValuationMethod_16.getString());
  all_values.push_back(Instrument_16);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_27;
    FIX::ComplexEventCondition ComplexEventCondition_27(2);
    noComplexEvents_0_0.set(ComplexEventCondition_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventCondition_27.getString());
    FIX::ComplexEventPrice ComplexEventPrice_27;
    ComplexEventPrice_27.setString("10539732");
    noComplexEvents_0_0.set(ComplexEventPrice_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPrice_27.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_27(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPriceBoundaryMethod_27.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_27;
    ComplexEventPriceBoundaryPrecision_27.setString("42.270000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPriceBoundaryPrecision_27.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_27(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPriceTimeType_27.getString());
    FIX::ComplexEventType ComplexEventType_27(4);
    noComplexEvents_0_0.set(ComplexEventType_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventType_27.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_27;
    ComplexOptPayoutAmount_27.setString("14304485");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexOptPayoutAmount_27.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_27);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_51;
      FIX::ComplexEventEndDate ComplexEventEndDate_51(FIX::UTCTIMESTAMP(10, 28, 19, 26, 5, 2006));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_51);
      ComplexEventDates_NoComplexEventDates_51.insert(ComplexEventEndDate_51.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_51(FIX::UTCTIMESTAMP(16, 26, 52, 3, 10, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_51);
      ComplexEventDates_NoComplexEventDates_51.insert(ComplexEventStartDate_51.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_51);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_102;
        FIX::ComplexEventEndTime ComplexEventEndTime_102(FIX::UTCTIMEONLY(10, 6, 37));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_102);
        ComplexEventTimes_NoComplexEventTimes_102.insert(ComplexEventEndTime_102.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_102(FIX::UTCTIMEONLY(0, 13, 43));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_102);
        ComplexEventTimes_NoComplexEventTimes_102.insert(ComplexEventStartTime_102.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_102);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_103;
        FIX::ComplexEventEndTime ComplexEventEndTime_103(FIX::UTCTIMEONLY(14, 43, 1));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_103);
        ComplexEventTimes_NoComplexEventTimes_103.insert(ComplexEventEndTime_103.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_103(FIX::UTCTIMEONLY(11, 24, 45));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_103);
        ComplexEventTimes_NoComplexEventTimes_103.insert(ComplexEventStartTime_103.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_103);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_28;
    FIX::ComplexEventCondition ComplexEventCondition_28(2);
    noComplexEvents_0_1.set(ComplexEventCondition_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventCondition_28.getString());
    FIX::ComplexEventPrice ComplexEventPrice_28;
    ComplexEventPrice_28.setString("17771111");
    noComplexEvents_0_1.set(ComplexEventPrice_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPrice_28.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_28(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPriceBoundaryMethod_28.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_28;
    ComplexEventPriceBoundaryPrecision_28.setString("65.780000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPriceBoundaryPrecision_28.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_28(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPriceTimeType_28.getString());
    FIX::ComplexEventType ComplexEventType_28(6);
    noComplexEvents_0_1.set(ComplexEventType_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventType_28.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_28;
    ComplexOptPayoutAmount_28.setString("19626982");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexOptPayoutAmount_28.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_28);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_52;
      FIX::ComplexEventEndDate ComplexEventEndDate_52(FIX::UTCTIMESTAMP(16, 6, 1, 1, 12, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_52);
      ComplexEventDates_NoComplexEventDates_52.insert(ComplexEventEndDate_52.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_52(FIX::UTCTIMESTAMP(13, 1, 44, 9, 7, 2015));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_52);
      ComplexEventDates_NoComplexEventDates_52.insert(ComplexEventStartDate_52.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_52);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_104;
        FIX::ComplexEventEndTime ComplexEventEndTime_104(FIX::UTCTIMEONLY(23, 11, 12));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_104);
        ComplexEventTimes_NoComplexEventTimes_104.insert(ComplexEventEndTime_104.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_104(FIX::UTCTIMEONLY(23, 29, 13));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_104);
        ComplexEventTimes_NoComplexEventTimes_104.insert(ComplexEventStartTime_104.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_104);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_53;
      FIX::ComplexEventEndDate ComplexEventEndDate_53(FIX::UTCTIMESTAMP(4, 19, 48, 1, 10, 2008));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_53);
      ComplexEventDates_NoComplexEventDates_53.insert(ComplexEventEndDate_53.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_53(FIX::UTCTIMESTAMP(3, 10, 10, 9, 8, 2001));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_53);
      ComplexEventDates_NoComplexEventDates_53.insert(ComplexEventStartDate_53.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_53);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_105;
        FIX::ComplexEventEndTime ComplexEventEndTime_105(FIX::UTCTIMEONLY(15, 53, 6));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_105);
        ComplexEventTimes_NoComplexEventTimes_105.insert(ComplexEventEndTime_105.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_105(FIX::UTCTIMEONLY(15, 55, 36));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_105);
        ComplexEventTimes_NoComplexEventTimes_105.insert(ComplexEventStartTime_105.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_105);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_54;
      FIX::ComplexEventEndDate ComplexEventEndDate_54(FIX::UTCTIMESTAMP(11, 47, 15, 15, 11, 2008));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_54);
      ComplexEventDates_NoComplexEventDates_54.insert(ComplexEventEndDate_54.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_54(FIX::UTCTIMESTAMP(20, 28, 24, 0, 7, 2013));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_54);
      ComplexEventDates_NoComplexEventDates_54.insert(ComplexEventStartDate_54.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_54);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_106;
        FIX::ComplexEventEndTime ComplexEventEndTime_106(FIX::UTCTIMEONLY(4, 28, 24));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_106);
        ComplexEventTimes_NoComplexEventTimes_106.insert(ComplexEventEndTime_106.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_106(FIX::UTCTIMEONLY(0, 6, 53));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_106);
        ComplexEventTimes_NoComplexEventTimes_106.insert(ComplexEventStartTime_106.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_106);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_107;
        FIX::ComplexEventEndTime ComplexEventEndTime_107(FIX::UTCTIMEONLY(1, 39, 49));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_107);
        ComplexEventTimes_NoComplexEventTimes_107.insert(ComplexEventEndTime_107.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_107(FIX::UTCTIMEONLY(18, 44, 49));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_107);
        ComplexEventTimes_NoComplexEventTimes_107.insert(ComplexEventStartTime_107.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_107);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_108;
        FIX::ComplexEventEndTime ComplexEventEndTime_108(FIX::UTCTIMEONLY(11, 28, 49));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_108);
        ComplexEventTimes_NoComplexEventTimes_108.insert(ComplexEventEndTime_108.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_108(FIX::UTCTIMEONLY(7, 33, 56));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_108);
        ComplexEventTimes_NoComplexEventTimes_108.insert(ComplexEventStartTime_108.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_108);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_28;
    FIX::EventDate EventDate_28("LOCALMKTDATE_1306934222");
    noEvents_0_0.set(EventDate_28);
    EvntGrp_NoEvents_28.insert(EventDate_28.getString());
    FIX::EventPx EventPx_28;
    EventPx_28.setString("1869127");
    noEvents_0_0.set(EventPx_28);
    EvntGrp_NoEvents_28.insert(EventPx_28.getString());
    FIX::EventText EventText_28("STRING_189976420");
    noEvents_0_0.set(EventText_28);
    EvntGrp_NoEvents_28.insert(EventText_28.getString());
    FIX::EventTime EventTime_28(FIX::UTCTIMESTAMP(13, 6, 26, 25, 12, 2012));
    noEvents_0_0.set(EventTime_28);
    EvntGrp_NoEvents_28.insert(EventTime_28.getString());
    FIX::EventType EventType_28(12);
    noEvents_0_0.set(EventType_28);
    EvntGrp_NoEvents_28.insert(EventType_28.getString());
    all_values.push_back(EvntGrp_NoEvents_28);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_32;
    FIX::InstrumentPartyID InstrumentPartyID_32("STRING_1955537988");
    noInstrumentParties_0_0.set(InstrumentPartyID_32);
    InstrumentParties_NoInstrumentParties_32.insert(InstrumentPartyID_32.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_32('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_32);
    InstrumentParties_NoInstrumentParties_32.insert(InstrumentPartyIDSource_32.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_32(1288558441);
    noInstrumentParties_0_0.set(InstrumentPartyRole_32);
    InstrumentParties_NoInstrumentParties_32.insert(InstrumentPartyRole_32.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_32);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62;
      FIX::InstrumentPartySubID InstrumentPartySubID_62("STRING_1653404443");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_62);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62.insert(InstrumentPartySubID_62.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_62(1357345430);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_62);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62.insert(InstrumentPartySubIDType_62.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63;
      FIX::InstrumentPartySubID InstrumentPartySubID_63("STRING_2098862766");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_63);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63.insert(InstrumentPartySubID_63.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_63(93907086);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_63);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63.insert(InstrumentPartySubIDType_63.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64;
      FIX::InstrumentPartySubID InstrumentPartySubID_64("STRING_915080487");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_64);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64.insert(InstrumentPartySubID_64.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_64(2044121207);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_64);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64.insert(InstrumentPartySubIDType_64.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_33;
    FIX::InstrumentPartyID InstrumentPartyID_33("STRING_174956379");
    noInstrumentParties_0_1.set(InstrumentPartyID_33);
    InstrumentParties_NoInstrumentParties_33.insert(InstrumentPartyID_33.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_33('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_33);
    InstrumentParties_NoInstrumentParties_33.insert(InstrumentPartyIDSource_33.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_33(1171699388);
    noInstrumentParties_0_1.set(InstrumentPartyRole_33);
    InstrumentParties_NoInstrumentParties_33.insert(InstrumentPartyRole_33.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_33);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65;
      FIX::InstrumentPartySubID InstrumentPartySubID_65("STRING_783981669");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_65);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65.insert(InstrumentPartySubID_65.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_65(111277747);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_65);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65.insert(InstrumentPartySubIDType_65.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66;
      FIX::InstrumentPartySubID InstrumentPartySubID_66("STRING_1852526522");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_66);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66.insert(InstrumentPartySubID_66.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_66(1934190725);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_66);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66.insert(InstrumentPartySubIDType_66.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_34;
    FIX::InstrumentPartyID InstrumentPartyID_34("STRING_1798338190");
    noInstrumentParties_0_2.set(InstrumentPartyID_34);
    InstrumentParties_NoInstrumentParties_34.insert(InstrumentPartyID_34.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_34('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_34);
    InstrumentParties_NoInstrumentParties_34.insert(InstrumentPartyIDSource_34.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_34(2121103457);
    noInstrumentParties_0_2.set(InstrumentPartyRole_34);
    InstrumentParties_NoInstrumentParties_34.insert(InstrumentPartyRole_34.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_34);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67;
      FIX::InstrumentPartySubID InstrumentPartySubID_67("STRING_1188759968");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_67);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67.insert(InstrumentPartySubID_67.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_67(249382102);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_67);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67.insert(InstrumentPartySubIDType_67.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68;
      FIX::InstrumentPartySubID InstrumentPartySubID_68("STRING_546822829");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_68);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68.insert(InstrumentPartySubID_68.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_68(1523226754);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_68);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68.insert(InstrumentPartySubIDType_68.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69;
      FIX::InstrumentPartySubID InstrumentPartySubID_69("STRING_1979056480");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_69);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69.insert(InstrumentPartySubID_69.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_69(1461218364);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_69);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69.insert(InstrumentPartySubIDType_69.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_33;
    FIX::SecurityAltID SecurityAltID_33("STRING_486745243");
    noSecurityAltID_0_0.set(SecurityAltID_33);
    SecAltIDGrp_NoSecurityAltID_33.insert(SecurityAltID_33.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_33("STRING_517593867");
    noSecurityAltID_0_0.set(SecurityAltIDSource_33);
    SecAltIDGrp_NoSecurityAltID_33.insert(SecurityAltIDSource_33.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_33);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_34;
    FIX::SecurityAltID SecurityAltID_34("STRING_1639489617");
    noSecurityAltID_0_1.set(SecurityAltID_34);
    SecAltIDGrp_NoSecurityAltID_34.insert(SecurityAltID_34.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_34("STRING_1952878307");
    noSecurityAltID_0_1.set(SecurityAltIDSource_34);
    SecAltIDGrp_NoSecurityAltID_34.insert(SecurityAltIDSource_34.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_34);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_32;
  FIX::SecurityXML SecurityXML_33("XMLDATA_1806152308");
  msg.set(SecurityXML_33);
  FIX::SecurityXMLLen SecurityXMLLen_16(694321542);
  msg.set(SecurityXMLLen_16);
  FIX::SecurityXMLSchema SecurityXMLSchema_16("STRING_1458799103");
  msg.set(SecurityXMLSchema_16);
  SecurityXML_32.insert(SecurityXMLSchema_16.getString());
  all_values.push_back(SecurityXML_32);

  // PegInstructions
  multiset<string> PegInstructions_0;
  FIX::PegLimitType PegLimitType_0(2);
  msg.set(PegLimitType_0);
  PegInstructions_0.insert(PegLimitType_0.getString());
  FIX::PegMoveType PegMoveType_0(1);
  msg.set(PegMoveType_0);
  PegInstructions_0.insert(PegMoveType_0.getString());
  FIX::PegOffsetType PegOffsetType_0(1);
  msg.set(PegOffsetType_0);
  PegInstructions_0.insert(PegOffsetType_0.getString());
  FIX::PegOffsetValue PegOffsetValue_0;
  PegOffsetValue_0.setString("19310945");
  msg.set(PegOffsetValue_0);
  PegInstructions_0.insert(PegOffsetValue_0.getString());
  FIX::PegPriceType PegPriceType_0(5);
  msg.set(PegPriceType_0);
  PegInstructions_0.insert(PegPriceType_0.getString());
  FIX::PegRoundDirection PegRoundDirection_0(1);
  msg.set(PegRoundDirection_0);
  PegInstructions_0.insert(PegRoundDirection_0.getString());
  FIX::PegScope PegScope_0(1);
  msg.set(PegScope_0);
  PegInstructions_0.insert(PegScope_0.getString());
  FIX::PegSecurityDesc PegSecurityDesc_0("STRING_1714037608");
  msg.set(PegSecurityDesc_0);
  PegInstructions_0.insert(PegSecurityDesc_0.getString());
  FIX::PegSecurityID PegSecurityID_0("STRING_327877469");
  msg.set(PegSecurityID_0);
  PegInstructions_0.insert(PegSecurityID_0.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_0("STRING_404198218");
  msg.set(PegSecurityIDSource_0);
  PegInstructions_0.insert(PegSecurityIDSource_0.getString());
  FIX::PegSymbol PegSymbol_0("STRING_1825315355");
  msg.set(PegSymbol_0);
  PegInstructions_0.insert(PegSymbol_0.getString());
  all_values.push_back(PegInstructions_0);

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_0;
    FIX::RootPartyID RootPartyID_0("STRING_190905295");
    noRootPartyIDs_0_0.set(RootPartyID_0);
    RootParties_NoRootPartyIDs_0.insert(RootPartyID_0.getString());
    FIX::RootPartyIDSource RootPartyIDSource_0('1');
    noRootPartyIDs_0_0.set(RootPartyIDSource_0);
    RootParties_NoRootPartyIDs_0.insert(RootPartyIDSource_0.getString());
    FIX::RootPartyRole RootPartyRole_0(1044897439);
    noRootPartyIDs_0_0.set(RootPartyRole_0);
    RootParties_NoRootPartyIDs_0.insert(RootPartyRole_0.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_0);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_0;
      FIX::RootPartySubID RootPartySubID_0("STRING_1317000860");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_0);
      RootSubParties_NoRootPartySubIDs_0.insert(RootPartySubID_0.getString());
      FIX::RootPartySubIDType RootPartySubIDType_0(86173759);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_0);
      RootSubParties_NoRootPartySubIDs_0.insert(RootPartySubIDType_0.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_0);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_1;
      FIX::RootPartySubID RootPartySubID_1("STRING_413907207");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_1);
      RootSubParties_NoRootPartySubIDs_1.insert(RootPartySubID_1.getString());
      FIX::RootPartySubIDType RootPartySubIDType_1(1863823689);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_1);
      RootSubParties_NoRootPartySubIDs_1.insert(RootPartySubIDType_1.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_1);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_2;
      FIX::RootPartySubID RootPartySubID_2("STRING_1609400513");
      noRootPartySubIDs_0_1_2.set(RootPartySubID_2);
      RootSubParties_NoRootPartySubIDs_2.insert(RootPartySubID_2.getString());
      FIX::RootPartySubIDType RootPartySubIDType_2(245480039);
      noRootPartySubIDs_0_1_2.set(RootPartySubIDType_2);
      RootSubParties_NoRootPartySubIDs_2.insert(RootPartySubIDType_2.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_2);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_1;
    FIX::RootPartyID RootPartyID_1("STRING_1177558405");
    noRootPartyIDs_0_1.set(RootPartyID_1);
    RootParties_NoRootPartyIDs_1.insert(RootPartyID_1.getString());
    FIX::RootPartyIDSource RootPartyIDSource_1('1');
    noRootPartyIDs_0_1.set(RootPartyIDSource_1);
    RootParties_NoRootPartyIDs_1.insert(RootPartyIDSource_1.getString());
    FIX::RootPartyRole RootPartyRole_1(732225282);
    noRootPartyIDs_0_1.set(RootPartyRole_1);
    RootParties_NoRootPartyIDs_1.insert(RootPartyRole_1.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_1);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_3;
      FIX::RootPartySubID RootPartySubID_3("STRING_785358110");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_3);
      RootSubParties_NoRootPartySubIDs_3.insert(RootPartySubID_3.getString());
      FIX::RootPartySubIDType RootPartySubIDType_3(537619942);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_3);
      RootSubParties_NoRootPartySubIDs_3.insert(RootPartySubIDType_3.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_3);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_4;
      FIX::RootPartySubID RootPartySubID_4("STRING_1353820933");
      noRootPartySubIDs_1_1_1.set(RootPartySubID_4);
      RootSubParties_NoRootPartySubIDs_4.insert(RootPartySubID_4.getString());
      FIX::RootPartySubIDType RootPartySubIDType_4(1479679653);
      noRootPartySubIDs_1_1_1.set(RootPartySubIDType_4);
      RootSubParties_NoRootPartySubIDs_4.insert(RootPartySubIDType_4.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_4);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs noRootPartyIDs_0_2;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_2;
    FIX::RootPartyID RootPartyID_2("STRING_1996419045");
    noRootPartyIDs_0_2.set(RootPartyID_2);
    RootParties_NoRootPartyIDs_2.insert(RootPartyID_2.getString());
    FIX::RootPartyIDSource RootPartyIDSource_2('2');
    noRootPartyIDs_0_2.set(RootPartyIDSource_2);
    RootParties_NoRootPartyIDs_2.insert(RootPartyIDSource_2.getString());
    FIX::RootPartyRole RootPartyRole_2(2125380314);
    noRootPartyIDs_0_2.set(RootPartyRole_2);
    RootParties_NoRootPartyIDs_2.insert(RootPartyRole_2.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_2);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_5;
      FIX::RootPartySubID RootPartySubID_5("STRING_5962306");
      noRootPartySubIDs_2_1_0.set(RootPartySubID_5);
      RootSubParties_NoRootPartySubIDs_5.insert(RootPartySubID_5.getString());
      FIX::RootPartySubIDType RootPartySubIDType_5(520234886);
      noRootPartySubIDs_2_1_0.set(RootPartySubIDType_5);
      RootSubParties_NoRootPartySubIDs_5.insert(RootPartySubIDType_5.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_5);

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_2);
  }
  // SideCrossOrdModGrp
  // Group SideCrossOrdModGrp.NoSides
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSides noSides_0_0;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_0;
    FIX::Account Account_8("STRING_1773662502");
    noSides_0_0.set(Account_8);
    SideCrossOrdModGrp_NoSides_0.insert(Account_8.getString());
    FIX::AccountType AccountType_7(7);
    noSides_0_0.set(AccountType_7);
    SideCrossOrdModGrp_NoSides_0.insert(AccountType_7.getString());
    FIX::AcctIDSource AcctIDSource_1(99);
    noSides_0_0.set(AcctIDSource_1);
    SideCrossOrdModGrp_NoSides_0.insert(AcctIDSource_1.getString());
    FIX::AllocID AllocID_7("STRING_30377072");
    noSides_0_0.set(AllocID_7);
    SideCrossOrdModGrp_NoSides_0.insert(AllocID_7.getString());
    FIX::BookingType BookingType_3(1);
    noSides_0_0.set(BookingType_3);
    SideCrossOrdModGrp_NoSides_0.insert(BookingType_3.getString());
    FIX::BookingUnit BookingUnit_0('1');
    noSides_0_0.set(BookingUnit_0);
    SideCrossOrdModGrp_NoSides_0.insert(BookingUnit_0.getString());
    FIX::CashMargin CashMargin_0('2');
    noSides_0_0.set(CashMargin_0);
    SideCrossOrdModGrp_NoSides_0.insert(CashMargin_0.getString());
    FIX::ClOrdID ClOrdID_17("STRING_1240790452");
    noSides_0_0.set(ClOrdID_17);
    SideCrossOrdModGrp_NoSides_0.insert(ClOrdID_17.getString());
    FIX::ClOrdLinkID ClOrdLinkID_0("STRING_240032109");
    noSides_0_0.set(ClOrdLinkID_0);
    SideCrossOrdModGrp_NoSides_0.insert(ClOrdLinkID_0.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_6("STRING_F");
    noSides_0_0.set(ClearingFeeIndicator_6);
    SideCrossOrdModGrp_NoSides_0.insert(ClearingFeeIndicator_6.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_0(1);
    noSides_0_0.set(CoveredOrUncovered_0);
    SideCrossOrdModGrp_NoSides_0.insert(CoveredOrUncovered_0.getString());
    FIX::CustOrderCapacity CustOrderCapacity_3(1);
    noSides_0_0.set(CustOrderCapacity_3);
    SideCrossOrdModGrp_NoSides_0.insert(CustOrderCapacity_3.getString());
    FIX::DayBookingInst DayBookingInst_0('0');
    noSides_0_0.set(DayBookingInst_0);
    SideCrossOrdModGrp_NoSides_0.insert(DayBookingInst_0.getString());
    FIX::EncodedText EncodedText_23("DATA_126647706");
    noSides_0_0.set(EncodedText_23);
    SideCrossOrdModGrp_NoSides_0.insert(EncodedText_23.getString());
    FIX::EncodedTextLen EncodedTextLen_23(1935606381);
    noSides_0_0.set(EncodedTextLen_23);
    SideCrossOrdModGrp_NoSides_0.insert(EncodedTextLen_23.getString());
    FIX::ForexReq ForexReq_1(true);
    noSides_0_0.set(ForexReq_1);
    SideCrossOrdModGrp_NoSides_0.insert(ForexReq_1.getString());
    FIX::OrderCapacity OrderCapacity_3('I');
    noSides_0_0.set(OrderCapacity_3);
    SideCrossOrdModGrp_NoSides_0.insert(OrderCapacity_3.getString());
    FIX::OrderRestrictions OrderRestrictions_3("MULTIPLECHARVALUE_1");
    noSides_0_0.set(OrderRestrictions_3);
    SideCrossOrdModGrp_NoSides_0.insert(OrderRestrictions_3.getString());
    FIX::OrigClOrdID OrigClOrdID_0("STRING_1777420002");
    noSides_0_0.set(OrigClOrdID_0);
    SideCrossOrdModGrp_NoSides_0.insert(OrigClOrdID_0.getString());
    FIX::PositionEffect PositionEffect_3('N');
    noSides_0_0.set(PositionEffect_3);
    SideCrossOrdModGrp_NoSides_0.insert(PositionEffect_3.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_0(false);
    noSides_0_0.set(PreTradeAnonymity_0);
    SideCrossOrdModGrp_NoSides_0.insert(PreTradeAnonymity_0.getString());
    FIX::PreallocMethod PreallocMethod_0('0');
    noSides_0_0.set(PreallocMethod_0);
    SideCrossOrdModGrp_NoSides_0.insert(PreallocMethod_0.getString());
    FIX::QtyType QtyType_11(0);
    noSides_0_0.set(QtyType_11);
    SideCrossOrdModGrp_NoSides_0.insert(QtyType_11.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_17("STRING_1199028990");
    noSides_0_0.set(SecondaryClOrdID_17);
    SideCrossOrdModGrp_NoSides_0.insert(SecondaryClOrdID_17.getString());
    FIX::SettlCurrency SettlCurrency_7("EUR");
    noSides_0_0.set(SettlCurrency_7);
    SideCrossOrdModGrp_NoSides_0.insert(SettlCurrency_7.getString());
    FIX::Side Side_11('9');
    noSides_0_0.set(Side_11);
    SideCrossOrdModGrp_NoSides_0.insert(Side_11.getString());
    FIX::SideComplianceID SideComplianceID_0("STRING_1418133279");
    noSides_0_0.set(SideComplianceID_0);
    SideCrossOrdModGrp_NoSides_0.insert(SideComplianceID_0.getString());
    FIX::SideTimeInForce SideTimeInForce_0(FIX::UTCTIMESTAMP(15, 38, 6, 6, 2, 2008));
    noSides_0_0.set(SideTimeInForce_0);
    SideCrossOrdModGrp_NoSides_0.insert(SideTimeInForce_0.getString());
    FIX::SolicitedFlag SolicitedFlag_0(true);
    noSides_0_0.set(SolicitedFlag_0);
    SideCrossOrdModGrp_NoSides_0.insert(SolicitedFlag_0.getString());
    FIX::Text Text_23("STRING_757302784");
    noSides_0_0.set(Text_23);
    SideCrossOrdModGrp_NoSides_0.insert(Text_23.getString());
    FIX::TradeDate TradeDate_9("LOCALMKTDATE_164363998");
    noSides_0_0.set(TradeDate_9);
    SideCrossOrdModGrp_NoSides_0.insert(TradeDate_9.getString());
    FIX::TradeOriginationDate TradeOriginationDate_3("LOCALMKTDATE_641876749");
    noSides_0_0.set(TradeOriginationDate_3);
    SideCrossOrdModGrp_NoSides_0.insert(TradeOriginationDate_3.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_0);

    // CommissionData
    multiset<string> CommissionData_8;
    FIX::CommCurrency CommCurrency_8("EUR");
    noSides_0_0.set(CommCurrency_8);
    CommissionData_8.insert(CommCurrency_8.getString());
    FIX::CommType CommType_8('1');
    noSides_0_0.set(CommType_8);
    CommissionData_8.insert(CommType_8.getString());
    FIX::Commission Commission_8;
    Commission_8.setString("13235407");
    noSides_0_0.set(Commission_8);
    CommissionData_8.insert(Commission_8.getString());
    FIX::FundRenewWaiv FundRenewWaiv_8('N');
    noSides_0_0.set(FundRenewWaiv_8);
    CommissionData_8.insert(FundRenewWaiv_8.getString());
    all_values.push_back(CommissionData_8);

    // OrderQtyData
    multiset<string> OrderQtyData_0;
    FIX::CashOrderQty CashOrderQty_0;
    CashOrderQty_0.setString("11788321");
    noSides_0_0.set(CashOrderQty_0);
    OrderQtyData_0.insert(CashOrderQty_0.getString());
    FIX::OrderPercent OrderPercent_0;
    OrderPercent_0.setString("34.950000");
    noSides_0_0.set(OrderPercent_0);
    OrderQtyData_0.insert(OrderPercent_0.getString());
    FIX::OrderQty OrderQty_11;
    OrderQty_11.setString("2475972");
    noSides_0_0.set(OrderQty_11);
    OrderQtyData_0.insert(OrderQty_11.getString());
    FIX::RoundingDirection RoundingDirection_0('0');
    noSides_0_0.set(RoundingDirection_0);
    OrderQtyData_0.insert(RoundingDirection_0.getString());
    FIX::RoundingModulus RoundingModulus_0;
    RoundingModulus_0.setString("456547");
    noSides_0_0.set(RoundingModulus_0);
    OrderQtyData_0.insert(RoundingModulus_0.getString());
    all_values.push_back(OrderQtyData_0);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_34;
      FIX::PartyID PartyID_34("STRING_1187429321");
      noPartyIDs_0_1_0.set(PartyID_34);
      Parties_NoPartyIDs_34.insert(PartyID_34.getString());
      FIX::PartyIDSource PartyIDSource_34('8');
      noPartyIDs_0_1_0.set(PartyIDSource_34);
      Parties_NoPartyIDs_34.insert(PartyIDSource_34.getString());
      FIX::PartyRole PartyRole_34(20);
      noPartyIDs_0_1_0.set(PartyRole_34);
      Parties_NoPartyIDs_34.insert(PartyRole_34.getString());
      all_values.push_back(Parties_NoPartyIDs_34);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_67;
        FIX::PartySubID PartySubID_67("STRING_964033050");
        noPartySubIDs_0_0_2_0.set(PartySubID_67);
        PtysSubGrp_NoPartySubIDs_67.insert(PartySubID_67.getString());
        FIX::PartySubIDType PartySubIDType_67(5);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_67);
        PtysSubGrp_NoPartySubIDs_67.insert(PartySubIDType_67.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_67);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_68;
        FIX::PartySubID PartySubID_68("STRING_1526204740");
        noPartySubIDs_0_0_2_1.set(PartySubID_68);
        PtysSubGrp_NoPartySubIDs_68.insert(PartySubID_68.getString());
        FIX::PartySubIDType PartySubIDType_68(20);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_68);
        PtysSubGrp_NoPartySubIDs_68.insert(PartySubIDType_68.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_68);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_69;
        FIX::PartySubID PartySubID_69("STRING_1479714848");
        noPartySubIDs_0_0_2_2.set(PartySubID_69);
        PtysSubGrp_NoPartySubIDs_69.insert(PartySubID_69.getString());
        FIX::PartySubIDType PartySubIDType_69(19);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_69);
        PtysSubGrp_NoPartySubIDs_69.insert(PartySubIDType_69.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_69);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_0;
      FIX::AllocAccount AllocAccount_12("STRING_1732184986");
      noAllocs_0_1_0.set(AllocAccount_12);
      PreAllocGrp_NoAllocs_0.insert(AllocAccount_12.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_12(1725435001);
      noAllocs_0_1_0.set(AllocAcctIDSource_12);
      PreAllocGrp_NoAllocs_0.insert(AllocAcctIDSource_12.getString());
      FIX::AllocQty AllocQty_11;
      AllocQty_11.setString("13271013");
      noAllocs_0_1_0.set(AllocQty_11);
      PreAllocGrp_NoAllocs_0.insert(AllocQty_11.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_6("GBP");
      noAllocs_0_1_0.set(AllocSettlCurrency_6);
      PreAllocGrp_NoAllocs_0.insert(AllocSettlCurrency_6.getString());
      FIX::IndividualAllocID IndividualAllocID_12("STRING_728187640");
      noAllocs_0_1_0.set(IndividualAllocID_12);
      PreAllocGrp_NoAllocs_0.insert(IndividualAllocID_12.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_0);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_37;
        FIX::NestedPartyID NestedPartyID_37("STRING_1832880630");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_37);
        NestedParties_NoNestedPartyIDs_37.insert(NestedPartyID_37.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_37('1');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_37);
        NestedParties_NoNestedPartyIDs_37.insert(NestedPartyIDSource_37.getString());
        FIX::NestedPartyRole NestedPartyRole_37(754023481);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_37);
        NestedParties_NoNestedPartyIDs_37.insert(NestedPartyRole_37.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_37);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_74;
          FIX::NestedPartySubID NestedPartySubID_74("STRING_274765155");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_74);
          NstdPtysSubGrp_NoNestedPartySubIDs_74.insert(NestedPartySubID_74.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_74(2077564243);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_74);
          NstdPtysSubGrp_NoNestedPartySubIDs_74.insert(NestedPartySubIDType_74.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_74);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_38;
        FIX::NestedPartyID NestedPartyID_38("STRING_1585454606");
        noNestedPartyIDs_0_0_2_1.set(NestedPartyID_38);
        NestedParties_NoNestedPartyIDs_38.insert(NestedPartyID_38.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_38('1');
        noNestedPartyIDs_0_0_2_1.set(NestedPartyIDSource_38);
        NestedParties_NoNestedPartyIDs_38.insert(NestedPartyIDSource_38.getString());
        FIX::NestedPartyRole NestedPartyRole_38(1041744090);
        noNestedPartyIDs_0_0_2_1.set(NestedPartyRole_38);
        NestedParties_NoNestedPartyIDs_38.insert(NestedPartyRole_38.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_38);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_75;
          FIX::NestedPartySubID NestedPartySubID_75("STRING_1789151860");
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubID_75);
          NstdPtysSubGrp_NoNestedPartySubIDs_75.insert(NestedPartySubID_75.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_75(1087398813);
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubIDType_75);
          NstdPtysSubGrp_NoNestedPartySubIDs_75.insert(NestedPartySubIDType_75.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_75);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_76;
          FIX::NestedPartySubID NestedPartySubID_76("STRING_1710585408");
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubID_76);
          NstdPtysSubGrp_NoNestedPartySubIDs_76.insert(NestedPartySubID_76.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_76(829097533);
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubIDType_76);
          NstdPtysSubGrp_NoNestedPartySubIDs_76.insert(NestedPartySubIDType_76.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_76);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_77;
          FIX::NestedPartySubID NestedPartySubID_77("STRING_852402873");
          noNestedPartySubIDs_0_0_1_3_2.set(NestedPartySubID_77);
          NstdPtysSubGrp_NoNestedPartySubIDs_77.insert(NestedPartySubID_77.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_77(1755675283);
          noNestedPartySubIDs_0_0_1_3_2.set(NestedPartySubIDType_77);
          NstdPtysSubGrp_NoNestedPartySubIDs_77.insert(NestedPartySubIDType_77.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_77);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_2);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_0_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_1;
      FIX::AllocAccount AllocAccount_13("STRING_2074738876");
      noAllocs_0_1_1.set(AllocAccount_13);
      PreAllocGrp_NoAllocs_1.insert(AllocAccount_13.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_13(1816435923);
      noAllocs_0_1_1.set(AllocAcctIDSource_13);
      PreAllocGrp_NoAllocs_1.insert(AllocAcctIDSource_13.getString());
      FIX::AllocQty AllocQty_12;
      AllocQty_12.setString("18172568");
      noAllocs_0_1_1.set(AllocQty_12);
      PreAllocGrp_NoAllocs_1.insert(AllocQty_12.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_7("GBP");
      noAllocs_0_1_1.set(AllocSettlCurrency_7);
      PreAllocGrp_NoAllocs_1.insert(AllocSettlCurrency_7.getString());
      FIX::IndividualAllocID IndividualAllocID_13("STRING_1149488052");
      noAllocs_0_1_1.set(IndividualAllocID_13);
      PreAllocGrp_NoAllocs_1.insert(IndividualAllocID_13.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_1);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_39;
        FIX::NestedPartyID NestedPartyID_39("STRING_1353062936");
        noNestedPartyIDs_0_1_2_0.set(NestedPartyID_39);
        NestedParties_NoNestedPartyIDs_39.insert(NestedPartyID_39.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_39('7');
        noNestedPartyIDs_0_1_2_0.set(NestedPartyIDSource_39);
        NestedParties_NoNestedPartyIDs_39.insert(NestedPartyIDSource_39.getString());
        FIX::NestedPartyRole NestedPartyRole_39(696658117);
        noNestedPartyIDs_0_1_2_0.set(NestedPartyRole_39);
        NestedParties_NoNestedPartyIDs_39.insert(NestedPartyRole_39.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_39);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_78;
          FIX::NestedPartySubID NestedPartySubID_78("STRING_1881058841");
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubID_78);
          NstdPtysSubGrp_NoNestedPartySubIDs_78.insert(NestedPartySubID_78.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_78(217691101);
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubIDType_78);
          NstdPtysSubGrp_NoNestedPartySubIDs_78.insert(NestedPartySubIDType_78.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_78);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_79;
          FIX::NestedPartySubID NestedPartySubID_79("STRING_1260868273");
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubID_79);
          NstdPtysSubGrp_NoNestedPartySubIDs_79.insert(NestedPartySubID_79.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_79(1637747429);
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubIDType_79);
          NstdPtysSubGrp_NoNestedPartySubIDs_79.insert(NestedPartySubIDType_79.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_79);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_80;
          FIX::NestedPartySubID NestedPartySubID_80("STRING_2050571731");
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubID_80);
          NstdPtysSubGrp_NoNestedPartySubIDs_80.insert(NestedPartySubID_80.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_80(483449014);
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubIDType_80);
          NstdPtysSubGrp_NoNestedPartySubIDs_80.insert(NestedPartySubIDType_80.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_80);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_2);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_40;
        FIX::NestedPartyID NestedPartyID_40("STRING_244287262");
        noNestedPartyIDs_0_1_2_1.set(NestedPartyID_40);
        NestedParties_NoNestedPartyIDs_40.insert(NestedPartyID_40.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_40('1');
        noNestedPartyIDs_0_1_2_1.set(NestedPartyIDSource_40);
        NestedParties_NoNestedPartyIDs_40.insert(NestedPartyIDSource_40.getString());
        FIX::NestedPartyRole NestedPartyRole_40(758214170);
        noNestedPartyIDs_0_1_2_1.set(NestedPartyRole_40);
        NestedParties_NoNestedPartyIDs_40.insert(NestedPartyRole_40.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_40);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_81;
          FIX::NestedPartySubID NestedPartySubID_81("STRING_1724111143");
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubID_81);
          NstdPtysSubGrp_NoNestedPartySubIDs_81.insert(NestedPartySubID_81.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_81(64327798);
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubIDType_81);
          NstdPtysSubGrp_NoNestedPartySubIDs_81.insert(NestedPartySubIDType_81.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_81);

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_0);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_1);
      }
      noSides_0_0.addGroup(noAllocs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_0_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_2;
      FIX::AllocAccount AllocAccount_14("STRING_1216111947");
      noAllocs_0_1_2.set(AllocAccount_14);
      PreAllocGrp_NoAllocs_2.insert(AllocAccount_14.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_14(1409679325);
      noAllocs_0_1_2.set(AllocAcctIDSource_14);
      PreAllocGrp_NoAllocs_2.insert(AllocAcctIDSource_14.getString());
      FIX::AllocQty AllocQty_13;
      AllocQty_13.setString("18534796");
      noAllocs_0_1_2.set(AllocQty_13);
      PreAllocGrp_NoAllocs_2.insert(AllocQty_13.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_8("USD");
      noAllocs_0_1_2.set(AllocSettlCurrency_8);
      PreAllocGrp_NoAllocs_2.insert(AllocSettlCurrency_8.getString());
      FIX::IndividualAllocID IndividualAllocID_14("STRING_535093544");
      noAllocs_0_1_2.set(IndividualAllocID_14);
      PreAllocGrp_NoAllocs_2.insert(IndividualAllocID_14.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_2);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_41;
        FIX::NestedPartyID NestedPartyID_41("STRING_580972721");
        noNestedPartyIDs_0_2_2_0.set(NestedPartyID_41);
        NestedParties_NoNestedPartyIDs_41.insert(NestedPartyID_41.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_41('4');
        noNestedPartyIDs_0_2_2_0.set(NestedPartyIDSource_41);
        NestedParties_NoNestedPartyIDs_41.insert(NestedPartyIDSource_41.getString());
        FIX::NestedPartyRole NestedPartyRole_41(677382261);
        noNestedPartyIDs_0_2_2_0.set(NestedPartyRole_41);
        NestedParties_NoNestedPartyIDs_41.insert(NestedPartyRole_41.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_41);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_82;
          FIX::NestedPartySubID NestedPartySubID_82("STRING_1915808740");
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubID_82);
          NstdPtysSubGrp_NoNestedPartySubIDs_82.insert(NestedPartySubID_82.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_82(339809595);
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubIDType_82);
          NstdPtysSubGrp_NoNestedPartySubIDs_82.insert(NestedPartySubIDType_82.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_82);

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_0);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_42;
        FIX::NestedPartyID NestedPartyID_42("STRING_1400233977");
        noNestedPartyIDs_0_2_2_1.set(NestedPartyID_42);
        NestedParties_NoNestedPartyIDs_42.insert(NestedPartyID_42.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_42('8');
        noNestedPartyIDs_0_2_2_1.set(NestedPartyIDSource_42);
        NestedParties_NoNestedPartyIDs_42.insert(NestedPartyIDSource_42.getString());
        FIX::NestedPartyRole NestedPartyRole_42(1692872532);
        noNestedPartyIDs_0_2_2_1.set(NestedPartyRole_42);
        NestedParties_NoNestedPartyIDs_42.insert(NestedPartyRole_42.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_42);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_83;
          FIX::NestedPartySubID NestedPartySubID_83("STRING_1583689972");
          noNestedPartySubIDs_0_2_1_3_0.set(NestedPartySubID_83);
          NstdPtysSubGrp_NoNestedPartySubIDs_83.insert(NestedPartySubID_83.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_83(78069516);
          noNestedPartySubIDs_0_2_1_3_0.set(NestedPartySubIDType_83);
          NstdPtysSubGrp_NoNestedPartySubIDs_83.insert(NestedPartySubIDType_83.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_83);

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_84;
          FIX::NestedPartySubID NestedPartySubID_84("STRING_1867998561");
          noNestedPartySubIDs_0_2_1_3_1.set(NestedPartySubID_84);
          NstdPtysSubGrp_NoNestedPartySubIDs_84.insert(NestedPartySubID_84.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_84(1801381073);
          noNestedPartySubIDs_0_2_1_3_1.set(NestedPartySubIDType_84);
          NstdPtysSubGrp_NoNestedPartySubIDs_84.insert(NestedPartySubIDType_84.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_84);

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_85;
          FIX::NestedPartySubID NestedPartySubID_85("STRING_1338937789");
          noNestedPartySubIDs_0_2_1_3_2.set(NestedPartySubID_85);
          NstdPtysSubGrp_NoNestedPartySubIDs_85.insert(NestedPartySubID_85.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_85(1358262342);
          noNestedPartySubIDs_0_2_1_3_2.set(NestedPartySubIDType_85);
          NstdPtysSubGrp_NoNestedPartySubIDs_85.insert(NestedPartySubIDType_85.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_85);

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_2);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_1);
      }
      noSides_0_0.addGroup(noAllocs_0_1_2);
    }
    msg.addGroup(noSides_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_9;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_9("USD");
  msg.set(BenchmarkCurveCurrency_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkCurveCurrency_9.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_9("STRING_LIBID");
  msg.set(BenchmarkCurveName_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkCurveName_9.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_9("STRING_1843125694");
  msg.set(BenchmarkCurvePoint_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkCurvePoint_9.getString());
  FIX::BenchmarkPrice BenchmarkPrice_9;
  BenchmarkPrice_9.setString("4331173");
  msg.set(BenchmarkPrice_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkPrice_9.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_9(1776917461);
  msg.set(BenchmarkPriceType_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkPriceType_9.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_9("STRING_1419753190");
  msg.set(BenchmarkSecurityID_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkSecurityID_9.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_9("STRING_497445124");
  msg.set(BenchmarkSecurityIDSource_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkSecurityIDSource_9.getString());
  FIX::Spread Spread_9;
  Spread_9.setString("8455457");
  msg.set(Spread_9);
  SpreadOrBenchmarkCurveData_9.insert(Spread_9.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_9);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_16;
    FIX::StipulationType StipulationType_16("STRING_LOT");
    noStipulations_0_0.set(StipulationType_16);
    Stipulations_NoStipulations_16.insert(StipulationType_16.getString());
    FIX::StipulationValue StipulationValue_16("STRING_1001572873");
    noStipulations_0_0.set(StipulationValue_16);
    Stipulations_NoStipulations_16.insert(StipulationValue_16.getString());
    all_values.push_back(Stipulations_NoStipulations_16);

    msg.addGroup(noStipulations_0_0);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_0;
    FIX::StrategyParameterName StrategyParameterName_0("STRING_738534678");
    noStrategyParameters_0_0.set(StrategyParameterName_0);
    StrategyParametersGrp_NoStrategyParameters_0.insert(StrategyParameterName_0.getString());
    FIX::StrategyParameterType StrategyParameterType_0(12);
    noStrategyParameters_0_0.set(StrategyParameterType_0);
    StrategyParametersGrp_NoStrategyParameters_0.insert(StrategyParameterType_0.getString());
    FIX::StrategyParameterValue StrategyParameterValue_0("STRING_88219027");
    noStrategyParameters_0_0.set(StrategyParameterValue_0);
    StrategyParametersGrp_NoStrategyParameters_0.insert(StrategyParameterValue_0.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_0);

    msg.addGroup(noStrategyParameters_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_0;
    FIX::TradingSessionID TradingSessionID_11("STRING_4");
    noTradingSessions_0_0.set(TradingSessionID_11);
    TrdgSesGrp_NoTradingSessions_0.insert(TradingSessionID_11.getString());
    FIX::TradingSessionSubID TradingSessionSubID_11("STRING_5");
    noTradingSessions_0_0.set(TradingSessionSubID_11);
    TrdgSesGrp_NoTradingSessions_0.insert(TradingSessionSubID_11.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_0);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_1;
    FIX::TradingSessionID TradingSessionID_12("STRING_1");
    noTradingSessions_0_1.set(TradingSessionID_12);
    TrdgSesGrp_NoTradingSessions_1.insert(TradingSessionID_12.getString());
    FIX::TradingSessionSubID TradingSessionSubID_12("STRING_5");
    noTradingSessions_0_1.set(TradingSessionSubID_12);
    TrdgSesGrp_NoTradingSessions_1.insert(TradingSessionSubID_12.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_1);

    msg.addGroup(noTradingSessions_0_1);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_0;
  FIX::TriggerAction TriggerAction_0('3');
  msg.set(TriggerAction_0);
  TriggeringInstruction_0.insert(TriggerAction_0.getString());
  FIX::TriggerNewPrice TriggerNewPrice_0;
  TriggerNewPrice_0.setString("18562403");
  msg.set(TriggerNewPrice_0);
  TriggeringInstruction_0.insert(TriggerNewPrice_0.getString());
  FIX::TriggerNewQty TriggerNewQty_0;
  TriggerNewQty_0.setString("4250999");
  msg.set(TriggerNewQty_0);
  TriggeringInstruction_0.insert(TriggerNewQty_0.getString());
  FIX::TriggerOrderType TriggerOrderType_0('2');
  msg.set(TriggerOrderType_0);
  TriggeringInstruction_0.insert(TriggerOrderType_0.getString());
  FIX::TriggerPrice TriggerPrice_0;
  TriggerPrice_0.setString("12924467");
  msg.set(TriggerPrice_0);
  TriggeringInstruction_0.insert(TriggerPrice_0.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_0('D');
  msg.set(TriggerPriceDirection_0);
  TriggeringInstruction_0.insert(TriggerPriceDirection_0.getString());
  FIX::TriggerPriceType TriggerPriceType_0('1');
  msg.set(TriggerPriceType_0);
  TriggeringInstruction_0.insert(TriggerPriceType_0.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_0('0');
  msg.set(TriggerPriceTypeScope_0);
  TriggeringInstruction_0.insert(TriggerPriceTypeScope_0.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_0("STRING_1842107257");
  msg.set(TriggerSecurityDesc_0);
  TriggeringInstruction_0.insert(TriggerSecurityDesc_0.getString());
  FIX::TriggerSecurityID TriggerSecurityID_0("STRING_657432256");
  msg.set(TriggerSecurityID_0);
  TriggeringInstruction_0.insert(TriggerSecurityID_0.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_0("STRING_503329657");
  msg.set(TriggerSecurityIDSource_0);
  TriggeringInstruction_0.insert(TriggerSecurityIDSource_0.getString());
  FIX::TriggerSymbol TriggerSymbol_0("STRING_1517010413");
  msg.set(TriggerSymbol_0);
  TriggeringInstruction_0.insert(TriggerSymbol_0.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_0("STRING_112498212");
  msg.set(TriggerTradingSessionID_0);
  TriggeringInstruction_0.insert(TriggerTradingSessionID_0.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_0("STRING_198971703");
  msg.set(TriggerTradingSessionSubID_0);
  TriggeringInstruction_0.insert(TriggerTradingSessionSubID_0.getString());
  FIX::TriggerType TriggerType_0('4');
  msg.set(TriggerType_0);
  TriggeringInstruction_0.insert(TriggerType_0.getString());
  all_values.push_back(TriggeringInstruction_0);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_30;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_30("DATA_1618724893");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingIssuer_30.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_30(300089215);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingIssuerLen_30.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_30("DATA_587477786");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingSecurityDesc_30.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_30(153190113);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingSecurityDescLen_30.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_30;
    UnderlyingAdjustedQuantity_30.setString("5035303");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_30);
    UnderlyingInstrument_30.insert(UnderlyingAdjustedQuantity_30.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_30;
    UnderlyingAllocationPercent_30.setString("6.590000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_30);
    UnderlyingInstrument_30.insert(UnderlyingAllocationPercent_30.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_30;
    UnderlyingAttachmentPoint_30.setString("0.660000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_30);
    UnderlyingInstrument_30.insert(UnderlyingAttachmentPoint_30.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_30("STRING_1242065028");
    noUnderlyings_0_0.set(UnderlyingCFICode_30);
    UnderlyingInstrument_30.insert(UnderlyingCFICode_30.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_30("STRING_1451569869");
    noUnderlyings_0_0.set(UnderlyingCPProgram_30);
    UnderlyingInstrument_30.insert(UnderlyingCPProgram_30.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_30("STRING_1896139093");
    noUnderlyings_0_0.set(UnderlyingCPRegType_30);
    UnderlyingInstrument_30.insert(UnderlyingCPRegType_30.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_30;
    UnderlyingCapValue_30.setString("2954648");
    noUnderlyings_0_0.set(UnderlyingCapValue_30);
    UnderlyingInstrument_30.insert(UnderlyingCapValue_30.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_30;
    UnderlyingCashAmount_30.setString("19914713");
    noUnderlyings_0_0.set(UnderlyingCashAmount_30);
    UnderlyingInstrument_30.insert(UnderlyingCashAmount_30.getString());
    FIX::UnderlyingCashType UnderlyingCashType_30("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_30);
    UnderlyingInstrument_30.insert(UnderlyingCashType_30.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_30;
    UnderlyingContractMultiplier_30.setString("12646733");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_30);
    UnderlyingInstrument_30.insert(UnderlyingContractMultiplier_30.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_30(723698760);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_30);
    UnderlyingInstrument_30.insert(UnderlyingContractMultiplierUnit_30.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_30("COUNTRY_1826819328");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_30);
    UnderlyingInstrument_30.insert(UnderlyingCountryOfIssue_30.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_30("LOCALMKTDATE_973430123");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_30);
    UnderlyingInstrument_30.insert(UnderlyingCouponPaymentDate_30.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_30;
    UnderlyingCouponRate_30.setString("87.110000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_30);
    UnderlyingInstrument_30.insert(UnderlyingCouponRate_30.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_30("STRING_1405474329");
    noUnderlyings_0_0.set(UnderlyingCreditRating_30);
    UnderlyingInstrument_30.insert(UnderlyingCreditRating_30.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_30("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_30);
    UnderlyingInstrument_30.insert(UnderlyingCurrency_30.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_30;
    UnderlyingCurrentValue_30.setString("7046442");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_30);
    UnderlyingInstrument_30.insert(UnderlyingCurrentValue_30.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_30;
    UnderlyingDetachmentPoint_30.setString("73.450000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_30);
    UnderlyingInstrument_30.insert(UnderlyingDetachmentPoint_30.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_30;
    UnderlyingDirtyPrice_30.setString("13465917");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_30);
    UnderlyingInstrument_30.insert(UnderlyingDirtyPrice_30.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_30;
    UnderlyingEndPrice_30.setString("13620765");
    noUnderlyings_0_0.set(UnderlyingEndPrice_30);
    UnderlyingInstrument_30.insert(UnderlyingEndPrice_30.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_30;
    UnderlyingEndValue_30.setString("15680670");
    noUnderlyings_0_0.set(UnderlyingEndValue_30);
    UnderlyingInstrument_30.insert(UnderlyingEndValue_30.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_30(716118552);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_30);
    UnderlyingInstrument_30.insert(UnderlyingExerciseStyle_30.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_30;
    UnderlyingFXRate_30.setString("14745747");
    noUnderlyings_0_0.set(UnderlyingFXRate_30);
    UnderlyingInstrument_30.insert(UnderlyingFXRate_30.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_30('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_30);
    UnderlyingInstrument_30.insert(UnderlyingFXRateCalc_30.getString());
    FIX::UnderlyingFactor UnderlyingFactor_30;
    UnderlyingFactor_30.setString("5187626");
    noUnderlyings_0_0.set(UnderlyingFactor_30);
    UnderlyingInstrument_30.insert(UnderlyingFactor_30.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_30(1216506738);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_30);
    UnderlyingInstrument_30.insert(UnderlyingFlowScheduleType_30.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_30("STRING_1238279951");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_30);
    UnderlyingInstrument_30.insert(UnderlyingInstrRegistry_30.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_30("LOCALMKTDATE_818851858");
    noUnderlyings_0_0.set(UnderlyingIssueDate_30);
    UnderlyingInstrument_30.insert(UnderlyingIssueDate_30.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_30("STRING_1803984524");
    noUnderlyings_0_0.set(UnderlyingIssuer_30);
    UnderlyingInstrument_30.insert(UnderlyingIssuer_30.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_30("STRING_1391470064");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_30);
    UnderlyingInstrument_30.insert(UnderlyingLocaleOfIssue_30.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_30("LOCALMKTDATE_1322382208");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_30);
    UnderlyingInstrument_30.insert(UnderlyingMaturityDate_30.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_30("MONTHYEAR_1245551535");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_30);
    UnderlyingInstrument_30.insert(UnderlyingMaturityMonthYear_30.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_30("TZTIMEONLY_1051906483");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_30);
    UnderlyingInstrument_30.insert(UnderlyingMaturityTime_30.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_30;
    UnderlyingNotionalPercentageOutstanding_30.setString("35.880000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_30);
    UnderlyingInstrument_30.insert(UnderlyingNotionalPercentageOutstanding_30.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_30('5');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_30);
    UnderlyingInstrument_30.insert(UnderlyingOptAttribute_30.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_30;
    UnderlyingOriginalNotionalPercentageOutstanding_30.setString("19.280000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_30);
    UnderlyingInstrument_30.insert(UnderlyingOriginalNotionalPercentageOutstanding_30.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_30("STRING_712428418");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_30);
    UnderlyingInstrument_30.insert(UnderlyingPriceUnitOfMeasure_30.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_30;
    UnderlyingPriceUnitOfMeasureQty_30.setString("3936254");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_30);
    UnderlyingInstrument_30.insert(UnderlyingPriceUnitOfMeasureQty_30.getString());
    FIX::UnderlyingProduct UnderlyingProduct_30(888182326);
    noUnderlyings_0_0.set(UnderlyingProduct_30);
    UnderlyingInstrument_30.insert(UnderlyingProduct_30.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_30(1977101791);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_30);
    UnderlyingInstrument_30.insert(UnderlyingPutOrCall_30.getString());
    FIX::UnderlyingPx UnderlyingPx_30;
    UnderlyingPx_30.setString("11173242");
    noUnderlyings_0_0.set(UnderlyingPx_30);
    UnderlyingInstrument_30.insert(UnderlyingPx_30.getString());
    FIX::UnderlyingQty UnderlyingQty_30;
    UnderlyingQty_30.setString("5675180");
    noUnderlyings_0_0.set(UnderlyingQty_30);
    UnderlyingInstrument_30.insert(UnderlyingQty_30.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_30("LOCALMKTDATE_803048266");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_30);
    UnderlyingInstrument_30.insert(UnderlyingRedemptionDate_30.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_30("STRING_118639273");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_30);
    UnderlyingInstrument_30.insert(UnderlyingRepoCollateralSecurityType_30.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_30;
    UnderlyingRepurchaseRate_30.setString("23.360000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_30);
    UnderlyingInstrument_30.insert(UnderlyingRepurchaseRate_30.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_30(921441464);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_30);
    UnderlyingInstrument_30.insert(UnderlyingRepurchaseTerm_30.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_30("STRING_1770607451");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_30);
    UnderlyingInstrument_30.insert(UnderlyingRestructuringType_30.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_30("STRING_530152932");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityDesc_30.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_30("EXCHANGE_1986178809");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityExchange_30.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_30("STRING_969715591");
    noUnderlyings_0_0.set(UnderlyingSecurityID_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityID_30.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_30("STRING_1892229432");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityIDSource_30.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_30("STRING_1406762164");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_30);
    UnderlyingInstrument_30.insert(UnderlyingSecuritySubType_30.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_30("STRING_1685834143");
    noUnderlyings_0_0.set(UnderlyingSecurityType_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityType_30.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_30("STRING_1219320497");
    noUnderlyings_0_0.set(UnderlyingSeniority_30);
    UnderlyingInstrument_30.insert(UnderlyingSeniority_30.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_30("STRING_1026317222");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_30);
    UnderlyingInstrument_30.insert(UnderlyingSettlMethod_30.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_30(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_30);
    UnderlyingInstrument_30.insert(UnderlyingSettlementType_30.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_30;
    UnderlyingStartValue_30.setString("2883435");
    noUnderlyings_0_0.set(UnderlyingStartValue_30);
    UnderlyingInstrument_30.insert(UnderlyingStartValue_30.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_30("STRING_117113525");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_30);
    UnderlyingInstrument_30.insert(UnderlyingStateOrProvinceOfIssue_30.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_30("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_30);
    UnderlyingInstrument_30.insert(UnderlyingStrikeCurrency_30.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_30;
    UnderlyingStrikePrice_30.setString("15085835");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_30);
    UnderlyingInstrument_30.insert(UnderlyingStrikePrice_30.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_30("STRING_50863557");
    noUnderlyings_0_0.set(UnderlyingSymbol_30);
    UnderlyingInstrument_30.insert(UnderlyingSymbol_30.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_30("STRING_1190396000");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_30);
    UnderlyingInstrument_30.insert(UnderlyingSymbolSfx_30.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_30("STRING_413006425");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_30);
    UnderlyingInstrument_30.insert(UnderlyingTimeUnit_30.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_30("STRING_467827145");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_30);
    UnderlyingInstrument_30.insert(UnderlyingUnitOfMeasure_30.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_30;
    UnderlyingUnitOfMeasureQty_30.setString("17400337");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_30);
    UnderlyingInstrument_30.insert(UnderlyingUnitOfMeasureQty_30.getString());
    all_values.push_back(UnderlyingInstrument_30);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_60;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_60("STRING_1180255564");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_60);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_60.insert(UnderlyingSecurityAltID_60.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_60("STRING_2133659207");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_60);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_60.insert(UnderlyingSecurityAltIDSource_60.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_60);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_61;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_61("STRING_2101750680");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_61);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_61.insert(UnderlyingSecurityAltID_61.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_61("STRING_1009873707");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_61);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_61.insert(UnderlyingSecurityAltIDSource_61.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_61);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_55;
      FIX::UnderlyingStipType UnderlyingStipType_55("STRING_521785038");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_55);
      UnderlyingStipulations_NoUnderlyingStips_55.insert(UnderlyingStipType_55.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_55("STRING_1812921974");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_55);
      UnderlyingStipulations_NoUnderlyingStips_55.insert(UnderlyingStipValue_55.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_55);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_56;
      FIX::UnderlyingStipType UnderlyingStipType_56("STRING_1222139042");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_56);
      UnderlyingStipulations_NoUnderlyingStips_56.insert(UnderlyingStipType_56.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_56("STRING_347293726");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_56);
      UnderlyingStipulations_NoUnderlyingStips_56.insert(UnderlyingStipValue_56.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_56);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_62;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_62("STRING_845262845");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_62);
      UndlyInstrumentParties_NoUndlyInstrumentParties_62.insert(UnderlyingInstrumentPartyID_62.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_62('8');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_62);
      UndlyInstrumentParties_NoUndlyInstrumentParties_62.insert(UnderlyingInstrumentPartyIDSource_62.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_62(425574951);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_62);
      UndlyInstrumentParties_NoUndlyInstrumentParties_62.insert(UnderlyingInstrumentPartyRole_62.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_62);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_129("STRING_622192443");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_129);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129.insert(UnderlyingInstrumentPartySubID_129.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_129(1832337115);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_129);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129.insert(UnderlyingInstrumentPartySubIDType_129.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_63;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_63("STRING_1353328932");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_63);
      UndlyInstrumentParties_NoUndlyInstrumentParties_63.insert(UnderlyingInstrumentPartyID_63.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_63('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_63);
      UndlyInstrumentParties_NoUndlyInstrumentParties_63.insert(UnderlyingInstrumentPartyIDSource_63.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_63(711170689);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_63);
      UndlyInstrumentParties_NoUndlyInstrumentParties_63.insert(UnderlyingInstrumentPartyRole_63.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_63);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_130("STRING_2129856528");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_130);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130.insert(UnderlyingInstrumentPartySubID_130.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_130(828284215);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_130);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130.insert(UnderlyingInstrumentPartySubIDType_130.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_64;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_64("STRING_138923420");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_64);
      UndlyInstrumentParties_NoUndlyInstrumentParties_64.insert(UnderlyingInstrumentPartyID_64.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_64('2');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_64);
      UndlyInstrumentParties_NoUndlyInstrumentParties_64.insert(UnderlyingInstrumentPartyIDSource_64.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_64(189384157);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_64);
      UndlyInstrumentParties_NoUndlyInstrumentParties_64.insert(UnderlyingInstrumentPartyRole_64.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_64);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_131("STRING_1117613345");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_131);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131.insert(UnderlyingInstrumentPartySubID_131.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_131(602390582);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_131);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131.insert(UnderlyingInstrumentPartySubIDType_131.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_31;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_31("DATA_657614123");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingIssuer_31.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_31(710163454);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingIssuerLen_31.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_31("DATA_1815958935");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingSecurityDesc_31.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_31(1837869687);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingSecurityDescLen_31.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_31;
    UnderlyingAdjustedQuantity_31.setString("6963390");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_31);
    UnderlyingInstrument_31.insert(UnderlyingAdjustedQuantity_31.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_31;
    UnderlyingAllocationPercent_31.setString("59.670000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_31);
    UnderlyingInstrument_31.insert(UnderlyingAllocationPercent_31.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_31;
    UnderlyingAttachmentPoint_31.setString("97.470000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_31);
    UnderlyingInstrument_31.insert(UnderlyingAttachmentPoint_31.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_31("STRING_1799838782");
    noUnderlyings_0_1.set(UnderlyingCFICode_31);
    UnderlyingInstrument_31.insert(UnderlyingCFICode_31.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_31("STRING_144527358");
    noUnderlyings_0_1.set(UnderlyingCPProgram_31);
    UnderlyingInstrument_31.insert(UnderlyingCPProgram_31.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_31("STRING_365698073");
    noUnderlyings_0_1.set(UnderlyingCPRegType_31);
    UnderlyingInstrument_31.insert(UnderlyingCPRegType_31.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_31;
    UnderlyingCapValue_31.setString("8744941");
    noUnderlyings_0_1.set(UnderlyingCapValue_31);
    UnderlyingInstrument_31.insert(UnderlyingCapValue_31.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_31;
    UnderlyingCashAmount_31.setString("4918210");
    noUnderlyings_0_1.set(UnderlyingCashAmount_31);
    UnderlyingInstrument_31.insert(UnderlyingCashAmount_31.getString());
    FIX::UnderlyingCashType UnderlyingCashType_31("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_31);
    UnderlyingInstrument_31.insert(UnderlyingCashType_31.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_31;
    UnderlyingContractMultiplier_31.setString("17197570");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_31);
    UnderlyingInstrument_31.insert(UnderlyingContractMultiplier_31.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_31(1369267743);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_31);
    UnderlyingInstrument_31.insert(UnderlyingContractMultiplierUnit_31.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_31("COUNTRY_1378152814");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_31);
    UnderlyingInstrument_31.insert(UnderlyingCountryOfIssue_31.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_31("LOCALMKTDATE_1387251810");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_31);
    UnderlyingInstrument_31.insert(UnderlyingCouponPaymentDate_31.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_31;
    UnderlyingCouponRate_31.setString("1.860000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_31);
    UnderlyingInstrument_31.insert(UnderlyingCouponRate_31.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_31("STRING_1063006282");
    noUnderlyings_0_1.set(UnderlyingCreditRating_31);
    UnderlyingInstrument_31.insert(UnderlyingCreditRating_31.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_31("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_31);
    UnderlyingInstrument_31.insert(UnderlyingCurrency_31.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_31;
    UnderlyingCurrentValue_31.setString("17741769");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_31);
    UnderlyingInstrument_31.insert(UnderlyingCurrentValue_31.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_31;
    UnderlyingDetachmentPoint_31.setString("91.650000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_31);
    UnderlyingInstrument_31.insert(UnderlyingDetachmentPoint_31.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_31;
    UnderlyingDirtyPrice_31.setString("16678623");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_31);
    UnderlyingInstrument_31.insert(UnderlyingDirtyPrice_31.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_31;
    UnderlyingEndPrice_31.setString("4549775");
    noUnderlyings_0_1.set(UnderlyingEndPrice_31);
    UnderlyingInstrument_31.insert(UnderlyingEndPrice_31.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_31;
    UnderlyingEndValue_31.setString("21424625");
    noUnderlyings_0_1.set(UnderlyingEndValue_31);
    UnderlyingInstrument_31.insert(UnderlyingEndValue_31.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_31(1595079704);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_31);
    UnderlyingInstrument_31.insert(UnderlyingExerciseStyle_31.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_31;
    UnderlyingFXRate_31.setString("6443616");
    noUnderlyings_0_1.set(UnderlyingFXRate_31);
    UnderlyingInstrument_31.insert(UnderlyingFXRate_31.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_31('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_31);
    UnderlyingInstrument_31.insert(UnderlyingFXRateCalc_31.getString());
    FIX::UnderlyingFactor UnderlyingFactor_31;
    UnderlyingFactor_31.setString("5652094");
    noUnderlyings_0_1.set(UnderlyingFactor_31);
    UnderlyingInstrument_31.insert(UnderlyingFactor_31.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_31(1246752277);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_31);
    UnderlyingInstrument_31.insert(UnderlyingFlowScheduleType_31.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_31("STRING_842380039");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_31);
    UnderlyingInstrument_31.insert(UnderlyingInstrRegistry_31.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_31("LOCALMKTDATE_1275372855");
    noUnderlyings_0_1.set(UnderlyingIssueDate_31);
    UnderlyingInstrument_31.insert(UnderlyingIssueDate_31.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_31("STRING_915227565");
    noUnderlyings_0_1.set(UnderlyingIssuer_31);
    UnderlyingInstrument_31.insert(UnderlyingIssuer_31.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_31("STRING_532766078");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_31);
    UnderlyingInstrument_31.insert(UnderlyingLocaleOfIssue_31.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_31("LOCALMKTDATE_1971711868");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_31);
    UnderlyingInstrument_31.insert(UnderlyingMaturityDate_31.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_31("MONTHYEAR_537969884");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_31);
    UnderlyingInstrument_31.insert(UnderlyingMaturityMonthYear_31.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_31("TZTIMEONLY_1233025825");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_31);
    UnderlyingInstrument_31.insert(UnderlyingMaturityTime_31.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_31;
    UnderlyingNotionalPercentageOutstanding_31.setString("70.020000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_31);
    UnderlyingInstrument_31.insert(UnderlyingNotionalPercentageOutstanding_31.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_31('6');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_31);
    UnderlyingInstrument_31.insert(UnderlyingOptAttribute_31.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_31;
    UnderlyingOriginalNotionalPercentageOutstanding_31.setString("38.980000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_31);
    UnderlyingInstrument_31.insert(UnderlyingOriginalNotionalPercentageOutstanding_31.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_31("STRING_351077530");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_31);
    UnderlyingInstrument_31.insert(UnderlyingPriceUnitOfMeasure_31.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_31;
    UnderlyingPriceUnitOfMeasureQty_31.setString("11743183");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_31);
    UnderlyingInstrument_31.insert(UnderlyingPriceUnitOfMeasureQty_31.getString());
    FIX::UnderlyingProduct UnderlyingProduct_31(403818113);
    noUnderlyings_0_1.set(UnderlyingProduct_31);
    UnderlyingInstrument_31.insert(UnderlyingProduct_31.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_31(2070834551);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_31);
    UnderlyingInstrument_31.insert(UnderlyingPutOrCall_31.getString());
    FIX::UnderlyingPx UnderlyingPx_31;
    UnderlyingPx_31.setString("3961024");
    noUnderlyings_0_1.set(UnderlyingPx_31);
    UnderlyingInstrument_31.insert(UnderlyingPx_31.getString());
    FIX::UnderlyingQty UnderlyingQty_31;
    UnderlyingQty_31.setString("17819709");
    noUnderlyings_0_1.set(UnderlyingQty_31);
    UnderlyingInstrument_31.insert(UnderlyingQty_31.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_31("LOCALMKTDATE_1310602713");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_31);
    UnderlyingInstrument_31.insert(UnderlyingRedemptionDate_31.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_31("STRING_240078960");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_31);
    UnderlyingInstrument_31.insert(UnderlyingRepoCollateralSecurityType_31.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_31;
    UnderlyingRepurchaseRate_31.setString("35.620000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_31);
    UnderlyingInstrument_31.insert(UnderlyingRepurchaseRate_31.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_31(1903699807);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_31);
    UnderlyingInstrument_31.insert(UnderlyingRepurchaseTerm_31.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_31("STRING_1925568438");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_31);
    UnderlyingInstrument_31.insert(UnderlyingRestructuringType_31.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_31("STRING_324186885");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityDesc_31.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_31("EXCHANGE_1759755324");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityExchange_31.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_31("STRING_1445947149");
    noUnderlyings_0_1.set(UnderlyingSecurityID_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityID_31.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_31("STRING_779164424");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityIDSource_31.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_31("STRING_1754734262");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_31);
    UnderlyingInstrument_31.insert(UnderlyingSecuritySubType_31.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_31("STRING_893543205");
    noUnderlyings_0_1.set(UnderlyingSecurityType_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityType_31.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_31("STRING_1423526119");
    noUnderlyings_0_1.set(UnderlyingSeniority_31);
    UnderlyingInstrument_31.insert(UnderlyingSeniority_31.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_31("STRING_1939500177");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_31);
    UnderlyingInstrument_31.insert(UnderlyingSettlMethod_31.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_31(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_31);
    UnderlyingInstrument_31.insert(UnderlyingSettlementType_31.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_31;
    UnderlyingStartValue_31.setString("5227947");
    noUnderlyings_0_1.set(UnderlyingStartValue_31);
    UnderlyingInstrument_31.insert(UnderlyingStartValue_31.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_31("STRING_634396568");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_31);
    UnderlyingInstrument_31.insert(UnderlyingStateOrProvinceOfIssue_31.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_31("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_31);
    UnderlyingInstrument_31.insert(UnderlyingStrikeCurrency_31.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_31;
    UnderlyingStrikePrice_31.setString("11671626");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_31);
    UnderlyingInstrument_31.insert(UnderlyingStrikePrice_31.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_31("STRING_410870033");
    noUnderlyings_0_1.set(UnderlyingSymbol_31);
    UnderlyingInstrument_31.insert(UnderlyingSymbol_31.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_31("STRING_1975992198");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_31);
    UnderlyingInstrument_31.insert(UnderlyingSymbolSfx_31.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_31("STRING_252704824");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_31);
    UnderlyingInstrument_31.insert(UnderlyingTimeUnit_31.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_31("STRING_2034937035");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_31);
    UnderlyingInstrument_31.insert(UnderlyingUnitOfMeasure_31.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_31;
    UnderlyingUnitOfMeasureQty_31.setString("5110057");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_31);
    UnderlyingInstrument_31.insert(UnderlyingUnitOfMeasureQty_31.getString());
    all_values.push_back(UnderlyingInstrument_31);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_62;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_62("STRING_238530917");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_62);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_62.insert(UnderlyingSecurityAltID_62.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_62("STRING_1685324120");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_62);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_62.insert(UnderlyingSecurityAltIDSource_62.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_62);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_63;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_63("STRING_107763188");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_63);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_63.insert(UnderlyingSecurityAltID_63.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_63("STRING_161881821");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_63);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_63.insert(UnderlyingSecurityAltIDSource_63.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_63);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_64;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_64("STRING_2081426542");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_64);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_64.insert(UnderlyingSecurityAltID_64.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_64("STRING_1889734116");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_64);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_64.insert(UnderlyingSecurityAltIDSource_64.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_64);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_57;
      FIX::UnderlyingStipType UnderlyingStipType_57("STRING_174021854");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_57);
      UnderlyingStipulations_NoUnderlyingStips_57.insert(UnderlyingStipType_57.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_57("STRING_439744030");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_57);
      UnderlyingStipulations_NoUnderlyingStips_57.insert(UnderlyingStipValue_57.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_57);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_65;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_65("STRING_2099590292");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_65);
      UndlyInstrumentParties_NoUndlyInstrumentParties_65.insert(UnderlyingInstrumentPartyID_65.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_65('7');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_65);
      UndlyInstrumentParties_NoUndlyInstrumentParties_65.insert(UnderlyingInstrumentPartyIDSource_65.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_65(840972370);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_65);
      UndlyInstrumentParties_NoUndlyInstrumentParties_65.insert(UnderlyingInstrumentPartyRole_65.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_65);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_132("STRING_1543095340");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_132);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132.insert(UnderlyingInstrumentPartySubID_132.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_132(448222984);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_132);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132.insert(UnderlyingInstrumentPartySubIDType_132.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_133("STRING_144113351");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_133);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133.insert(UnderlyingInstrumentPartySubID_133.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_133(819137811);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_133);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133.insert(UnderlyingInstrumentPartySubIDType_133.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_4;
  FIX::Yield Yield_4;
  Yield_4.setString("95.140000");
  msg.set(Yield_4);
  YieldData_4.insert(Yield_4.getString());
  FIX::YieldCalcDate YieldCalcDate_4("LOCALMKTDATE_1602865958");
  msg.set(YieldCalcDate_4);
  YieldData_4.insert(YieldCalcDate_4.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_4("LOCALMKTDATE_1341932560");
  msg.set(YieldRedemptionDate_4);
  YieldData_4.insert(YieldRedemptionDate_4.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_4;
  YieldRedemptionPrice_4.setString("8746360");
  msg.set(YieldRedemptionPrice_4);
  YieldData_4.insert(YieldRedemptionPrice_4.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_4(42024123);
  msg.set(YieldRedemptionPriceType_4);
  YieldData_4.insert(YieldRedemptionPriceType_4.getString());
  FIX::YieldType YieldType_4("STRING_TENDER");
  msg.set(YieldType_4);
  YieldData_4.insert(YieldType_4.getString());
  all_values.push_back(YieldData_4);


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
