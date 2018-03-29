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
  multiset<string> all_compo_names;
  multiset<string> CrossOrderCancelReplaceRequest_0;
  FIX::CancellationRights CancellationRights_0('Y');
  msg.set(CancellationRights_0);
  CrossOrderCancelReplaceRequest_0.insert(CancellationRights_0.getString());
  FIX::ComplianceID ComplianceID_0("STRING_2045024534");
  msg.set(ComplianceID_0);
  CrossOrderCancelReplaceRequest_0.insert(ComplianceID_0.getString());
  FIX::CrossID CrossID_0("STRING_1661194130");
  msg.set(CrossID_0);
  CrossOrderCancelReplaceRequest_0.insert(CrossID_0.getString());
  FIX::CrossPrioritization CrossPrioritization_0(0);
  msg.set(CrossPrioritization_0);
  CrossOrderCancelReplaceRequest_0.insert(CrossPrioritization_0.getString());
  FIX::CrossType CrossType_0(4);
  msg.set(CrossType_0);
  CrossOrderCancelReplaceRequest_0.insert(CrossType_0.getString());
  FIX::Currency Currency_13("CAN");
  msg.set(Currency_13);
  CrossOrderCancelReplaceRequest_0.insert(Currency_13.getString());
  FIX::Designation Designation_0("STRING_2123987553");
  msg.set(Designation_0);
  CrossOrderCancelReplaceRequest_0.insert(Designation_0.getString());
  FIX::EffectiveTime EffectiveTime_0(FIX::UTCTIMESTAMP(2, 44, 6, 6, 8, 2006));
  msg.set(EffectiveTime_0);
  CrossOrderCancelReplaceRequest_0.insert(EffectiveTime_0.getString());
  FIX::ExDestination ExDestination_0("EXCHANGE_1929634976");
  msg.set(ExDestination_0);
  CrossOrderCancelReplaceRequest_0.insert(ExDestination_0.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_0('G');
  msg.set(ExDestinationIDSource_0);
  CrossOrderCancelReplaceRequest_0.insert(ExDestinationIDSource_0.getString());
  FIX::ExecInst ExecInst_0("MULTIPLECHARVALUE_o");
  msg.set(ExecInst_0);
  CrossOrderCancelReplaceRequest_0.insert(ExecInst_0.getString());
  FIX::ExpireDate ExpireDate_1("LOCALMKTDATE_1817562109");
  msg.set(ExpireDate_1);
  CrossOrderCancelReplaceRequest_0.insert(ExpireDate_1.getString());
  FIX::ExpireTime ExpireTime_2(FIX::UTCTIMESTAMP(1, 23, 26, 15, 7, 2017));
  msg.set(ExpireTime_2);
  CrossOrderCancelReplaceRequest_0.insert(ExpireTime_2.getString());
  FIX::GTBookingInst GTBookingInst_0(1);
  msg.set(GTBookingInst_0);
  CrossOrderCancelReplaceRequest_0.insert(GTBookingInst_0.getString());
  FIX::HandlInst HandlInst_0('1');
  msg.set(HandlInst_0);
  CrossOrderCancelReplaceRequest_0.insert(HandlInst_0.getString());
  FIX::HostCrossID HostCrossID_0("STRING_779731810");
  msg.set(HostCrossID_0);
  CrossOrderCancelReplaceRequest_0.insert(HostCrossID_0.getString());
  FIX::IOIID IOIID_0("STRING_307425734");
  msg.set(IOIID_0);
  CrossOrderCancelReplaceRequest_0.insert(IOIID_0.getString());
  FIX::LocateReqd LocateReqd_0(false);
  msg.set(LocateReqd_0);
  CrossOrderCancelReplaceRequest_0.insert(LocateReqd_0.getString());
  FIX::MatchIncrement MatchIncrement_0;
  MatchIncrement_0.setString("17868752");
  msg.set(MatchIncrement_0);
  CrossOrderCancelReplaceRequest_0.insert(MatchIncrement_0.getString());
  FIX::MaxFloor MaxFloor_0;
  MaxFloor_0.setString("2049666");
  msg.set(MaxFloor_0);
  CrossOrderCancelReplaceRequest_0.insert(MaxFloor_0.getString());
  FIX::MaxPriceLevels MaxPriceLevels_0(674066335);
  msg.set(MaxPriceLevels_0);
  CrossOrderCancelReplaceRequest_0.insert(MaxPriceLevels_0.getString());
  FIX::MaxShow MaxShow_0;
  MaxShow_0.setString("9957185");
  msg.set(MaxShow_0);
  CrossOrderCancelReplaceRequest_0.insert(MaxShow_0.getString());
  FIX::MinQty MinQty_0;
  MinQty_0.setString("10442091");
  msg.set(MinQty_0);
  CrossOrderCancelReplaceRequest_0.insert(MinQty_0.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_0('1');
  msg.set(MoneyLaunderingStatus_0);
  CrossOrderCancelReplaceRequest_0.insert(MoneyLaunderingStatus_0.getString());
  FIX::OrdType OrdType_0('E');
  msg.set(OrdType_0);
  CrossOrderCancelReplaceRequest_0.insert(OrdType_0.getString());
  FIX::OrderID OrderID_16("STRING_1020713037");
  msg.set(OrderID_16);
  CrossOrderCancelReplaceRequest_0.insert(OrderID_16.getString());
  FIX::OrigCrossID OrigCrossID_0("STRING_886608809");
  msg.set(OrigCrossID_0);
  CrossOrderCancelReplaceRequest_0.insert(OrigCrossID_0.getString());
  FIX::ParticipationRate ParticipationRate_0;
  ParticipationRate_0.setString("14.960000");
  msg.set(ParticipationRate_0);
  CrossOrderCancelReplaceRequest_0.insert(ParticipationRate_0.getString());
  FIX::PrevClosePx PrevClosePx_0;
  PrevClosePx_0.setString("14180941");
  msg.set(PrevClosePx_0);
  CrossOrderCancelReplaceRequest_0.insert(PrevClosePx_0.getString());
  FIX::Price Price_9;
  Price_9.setString("20379263");
  msg.set(Price_9);
  CrossOrderCancelReplaceRequest_0.insert(Price_9.getString());
  FIX::PriceProtectionScope PriceProtectionScope_0('2');
  msg.set(PriceProtectionScope_0);
  CrossOrderCancelReplaceRequest_0.insert(PriceProtectionScope_0.getString());
  FIX::PriceType PriceType_12(6);
  msg.set(PriceType_12);
  CrossOrderCancelReplaceRequest_0.insert(PriceType_12.getString());
  FIX::ProcessCode ProcessCode_5('5');
  msg.set(ProcessCode_5);
  CrossOrderCancelReplaceRequest_0.insert(ProcessCode_5.getString());
  FIX::QuoteID QuoteID_0("STRING_714599986");
  msg.set(QuoteID_0);
  CrossOrderCancelReplaceRequest_0.insert(QuoteID_0.getString());
  FIX::RegistID RegistID_0("STRING_103240274");
  msg.set(RegistID_0);
  CrossOrderCancelReplaceRequest_0.insert(RegistID_0.getString());
  FIX::SettlDate SettlDate_16("LOCALMKTDATE_653639384");
  msg.set(SettlDate_16);
  CrossOrderCancelReplaceRequest_0.insert(SettlDate_16.getString());
  FIX::SettlType SettlType_10("STRING_4");
  msg.set(SettlType_10);
  CrossOrderCancelReplaceRequest_0.insert(SettlType_10.getString());
  FIX::StopPx StopPx_0;
  StopPx_0.setString("14705773");
  msg.set(StopPx_0);
  CrossOrderCancelReplaceRequest_0.insert(StopPx_0.getString());
  FIX::TargetStrategy TargetStrategy_0(1);
  msg.set(TargetStrategy_0);
  CrossOrderCancelReplaceRequest_0.insert(TargetStrategy_0.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_0("STRING_1569660351");
  msg.set(TargetStrategyParameters_0);
  CrossOrderCancelReplaceRequest_0.insert(TargetStrategyParameters_0.getString());
  FIX::TimeInForce TimeInForce_0('8');
  msg.set(TimeInForce_0);
  CrossOrderCancelReplaceRequest_0.insert(TimeInForce_0.getString());
  FIX::TransBkdTime TransBkdTime_0(FIX::UTCTIMESTAMP(13, 33, 7, 26, 9, 2016));
  msg.set(TransBkdTime_0);
  CrossOrderCancelReplaceRequest_0.insert(TransBkdTime_0.getString());
  FIX::TransactTime TransactTime_14(FIX::UTCTIMESTAMP(15, 42, 10, 1, 7, 2002));
  msg.set(TransactTime_14);
  CrossOrderCancelReplaceRequest_0.insert(TransactTime_14.getString());
  all_values.push_back(CrossOrderCancelReplaceRequest_0);

  all_compo_names.insert("CrossOrderCancelReplaceRequest");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_0;
  FIX::DiscretionInst DiscretionInst_0('6');
  msg.set(DiscretionInst_0);
  DiscretionInstructions_0.insert(DiscretionInst_0.getString());
  FIX::DiscretionLimitType DiscretionLimitType_0(0);
  msg.set(DiscretionLimitType_0);
  DiscretionInstructions_0.insert(DiscretionLimitType_0.getString());
  FIX::DiscretionMoveType DiscretionMoveType_0(1);
  msg.set(DiscretionMoveType_0);
  DiscretionInstructions_0.insert(DiscretionMoveType_0.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_0(2);
  msg.set(DiscretionOffsetType_0);
  DiscretionInstructions_0.insert(DiscretionOffsetType_0.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_0;
  DiscretionOffsetValue_0.setString("8850519");
  msg.set(DiscretionOffsetValue_0);
  DiscretionInstructions_0.insert(DiscretionOffsetValue_0.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_0(2);
  msg.set(DiscretionRoundDirection_0);
  DiscretionInstructions_0.insert(DiscretionRoundDirection_0.getString());
  FIX::DiscretionScope DiscretionScope_0(1);
  msg.set(DiscretionScope_0);
  DiscretionInstructions_0.insert(DiscretionScope_0.getString());
  all_values.push_back(DiscretionInstructions_0);
  all_compo_names.insert("DiscretionInstructions");

  // DisplayInstruction
  multiset<string> DisplayInstruction_0;
  FIX::DisplayHighQty DisplayHighQty_0;
  DisplayHighQty_0.setString("10842656");
  msg.set(DisplayHighQty_0);
  DisplayInstruction_0.insert(DisplayHighQty_0.getString());
  FIX::DisplayLowQty DisplayLowQty_0;
  DisplayLowQty_0.setString("2145367");
  msg.set(DisplayLowQty_0);
  DisplayInstruction_0.insert(DisplayLowQty_0.getString());
  FIX::DisplayMethod DisplayMethod_0('4');
  msg.set(DisplayMethod_0);
  DisplayInstruction_0.insert(DisplayMethod_0.getString());
  FIX::DisplayMinIncr DisplayMinIncr_0;
  DisplayMinIncr_0.setString("11875058");
  msg.set(DisplayMinIncr_0);
  DisplayInstruction_0.insert(DisplayMinIncr_0.getString());
  FIX::DisplayQty DisplayQty_0;
  DisplayQty_0.setString("8681761");
  msg.set(DisplayQty_0);
  DisplayInstruction_0.insert(DisplayQty_0.getString());
  FIX::DisplayWhen DisplayWhen_0('2');
  msg.set(DisplayWhen_0);
  DisplayInstruction_0.insert(DisplayWhen_0.getString());
  FIX::RefreshQty RefreshQty_0;
  RefreshQty_0.setString("5105996");
  msg.set(RefreshQty_0);
  DisplayInstruction_0.insert(RefreshQty_0.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_0;
  SecondaryDisplayQty_0.setString("15387457");
  msg.set(SecondaryDisplayQty_0);
  DisplayInstruction_0.insert(SecondaryDisplayQty_0.getString());
  all_values.push_back(DisplayInstruction_0);
  all_compo_names.insert("DisplayInstruction");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_27;
    FIX::EncodedLegIssuer EncodedLegIssuer_27("DATA_1256966834");
    noLegs_0_0.set(EncodedLegIssuer_27);
    InstrumentLeg_27.insert(EncodedLegIssuer_27.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_27(208674115);
    noLegs_0_0.set(EncodedLegIssuerLen_27);
    InstrumentLeg_27.insert(EncodedLegIssuerLen_27.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_27("DATA_439501624");
    noLegs_0_0.set(EncodedLegSecurityDesc_27);
    InstrumentLeg_27.insert(EncodedLegSecurityDesc_27.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_27(330707799);
    noLegs_0_0.set(EncodedLegSecurityDescLen_27);
    InstrumentLeg_27.insert(EncodedLegSecurityDescLen_27.getString());
    FIX::LegCFICode LegCFICode_27("STRING_1393284723");
    noLegs_0_0.set(LegCFICode_27);
    InstrumentLeg_27.insert(LegCFICode_27.getString());
    FIX::LegContractMultiplier LegContractMultiplier_27;
    LegContractMultiplier_27.setString("4575216");
    noLegs_0_0.set(LegContractMultiplier_27);
    InstrumentLeg_27.insert(LegContractMultiplier_27.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_27(184180575);
    noLegs_0_0.set(LegContractMultiplierUnit_27);
    InstrumentLeg_27.insert(LegContractMultiplierUnit_27.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_27("MONTHYEAR_737837417");
    noLegs_0_0.set(LegContractSettlMonth_27);
    InstrumentLeg_27.insert(LegContractSettlMonth_27.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_27("COUNTRY_1635897562");
    noLegs_0_0.set(LegCountryOfIssue_27);
    InstrumentLeg_27.insert(LegCountryOfIssue_27.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_27("LOCALMKTDATE_1824528606");
    noLegs_0_0.set(LegCouponPaymentDate_27);
    InstrumentLeg_27.insert(LegCouponPaymentDate_27.getString());
    FIX::LegCouponRate LegCouponRate_27;
    LegCouponRate_27.setString("67.310000");
    noLegs_0_0.set(LegCouponRate_27);
    InstrumentLeg_27.insert(LegCouponRate_27.getString());
    FIX::LegCreditRating LegCreditRating_27("STRING_1340856144");
    noLegs_0_0.set(LegCreditRating_27);
    InstrumentLeg_27.insert(LegCreditRating_27.getString());
    FIX::LegCurrency LegCurrency_27("CHF");
    noLegs_0_0.set(LegCurrency_27);
    InstrumentLeg_27.insert(LegCurrency_27.getString());
    FIX::LegDatedDate LegDatedDate_27("LOCALMKTDATE_366261211");
    noLegs_0_0.set(LegDatedDate_27);
    InstrumentLeg_27.insert(LegDatedDate_27.getString());
    FIX::LegExerciseStyle LegExerciseStyle_27(765351310);
    noLegs_0_0.set(LegExerciseStyle_27);
    InstrumentLeg_27.insert(LegExerciseStyle_27.getString());
    FIX::LegFactor LegFactor_27;
    LegFactor_27.setString("3480430");
    noLegs_0_0.set(LegFactor_27);
    InstrumentLeg_27.insert(LegFactor_27.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_27(278275086);
    noLegs_0_0.set(LegFlowScheduleType_27);
    InstrumentLeg_27.insert(LegFlowScheduleType_27.getString());
    FIX::LegInstrRegistry LegInstrRegistry_27("STRING_1448176236");
    noLegs_0_0.set(LegInstrRegistry_27);
    InstrumentLeg_27.insert(LegInstrRegistry_27.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_27("LOCALMKTDATE_1233094949");
    noLegs_0_0.set(LegInterestAccrualDate_27);
    InstrumentLeg_27.insert(LegInterestAccrualDate_27.getString());
    FIX::LegIssueDate LegIssueDate_27("LOCALMKTDATE_80731689");
    noLegs_0_0.set(LegIssueDate_27);
    InstrumentLeg_27.insert(LegIssueDate_27.getString());
    FIX::LegIssuer LegIssuer_27("STRING_915966173");
    noLegs_0_0.set(LegIssuer_27);
    InstrumentLeg_27.insert(LegIssuer_27.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_27("STRING_169876910");
    noLegs_0_0.set(LegLocaleOfIssue_27);
    InstrumentLeg_27.insert(LegLocaleOfIssue_27.getString());
    FIX::LegMaturityDate LegMaturityDate_27("LOCALMKTDATE_295268434");
    noLegs_0_0.set(LegMaturityDate_27);
    InstrumentLeg_27.insert(LegMaturityDate_27.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_27("MONTHYEAR_1098356096");
    noLegs_0_0.set(LegMaturityMonthYear_27);
    InstrumentLeg_27.insert(LegMaturityMonthYear_27.getString());
    FIX::LegMaturityTime LegMaturityTime_27("TZTIMEONLY_1357382794");
    noLegs_0_0.set(LegMaturityTime_27);
    InstrumentLeg_27.insert(LegMaturityTime_27.getString());
    FIX::LegOptAttribute LegOptAttribute_27('1');
    noLegs_0_0.set(LegOptAttribute_27);
    InstrumentLeg_27.insert(LegOptAttribute_27.getString());
    FIX::LegOptionRatio LegOptionRatio_27;
    LegOptionRatio_27.setString("16654244");
    noLegs_0_0.set(LegOptionRatio_27);
    InstrumentLeg_27.insert(LegOptionRatio_27.getString());
    FIX::LegPool LegPool_27("STRING_1867982420");
    noLegs_0_0.set(LegPool_27);
    InstrumentLeg_27.insert(LegPool_27.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_27("STRING_554706702");
    noLegs_0_0.set(LegPriceUnitOfMeasure_27);
    InstrumentLeg_27.insert(LegPriceUnitOfMeasure_27.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_27;
    LegPriceUnitOfMeasureQty_27.setString("16546695");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_27);
    InstrumentLeg_27.insert(LegPriceUnitOfMeasureQty_27.getString());
    FIX::LegProduct LegProduct_27(977465606);
    noLegs_0_0.set(LegProduct_27);
    InstrumentLeg_27.insert(LegProduct_27.getString());
    FIX::LegPutOrCall LegPutOrCall_27(763380817);
    noLegs_0_0.set(LegPutOrCall_27);
    InstrumentLeg_27.insert(LegPutOrCall_27.getString());
    FIX::LegRatioQty LegRatioQty_27;
    LegRatioQty_27.setString("20941711");
    noLegs_0_0.set(LegRatioQty_27);
    InstrumentLeg_27.insert(LegRatioQty_27.getString());
    FIX::LegRedemptionDate LegRedemptionDate_27("LOCALMKTDATE_1308173406");
    noLegs_0_0.set(LegRedemptionDate_27);
    InstrumentLeg_27.insert(LegRedemptionDate_27.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_27("STRING_9181892");
    noLegs_0_0.set(LegRepoCollateralSecurityType_27);
    InstrumentLeg_27.insert(LegRepoCollateralSecurityType_27.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_27;
    LegRepurchaseRate_27.setString("91.840000");
    noLegs_0_0.set(LegRepurchaseRate_27);
    InstrumentLeg_27.insert(LegRepurchaseRate_27.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_27(1492353981);
    noLegs_0_0.set(LegRepurchaseTerm_27);
    InstrumentLeg_27.insert(LegRepurchaseTerm_27.getString());
    FIX::LegSecurityDesc LegSecurityDesc_27("STRING_747019309");
    noLegs_0_0.set(LegSecurityDesc_27);
    InstrumentLeg_27.insert(LegSecurityDesc_27.getString());
    FIX::LegSecurityExchange LegSecurityExchange_27("EXCHANGE_2040106746");
    noLegs_0_0.set(LegSecurityExchange_27);
    InstrumentLeg_27.insert(LegSecurityExchange_27.getString());
    FIX::LegSecurityID LegSecurityID_27("STRING_1169398940");
    noLegs_0_0.set(LegSecurityID_27);
    InstrumentLeg_27.insert(LegSecurityID_27.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_27("STRING_1034376041");
    noLegs_0_0.set(LegSecurityIDSource_27);
    InstrumentLeg_27.insert(LegSecurityIDSource_27.getString());
    FIX::LegSecuritySubType LegSecuritySubType_27("STRING_1233479242");
    noLegs_0_0.set(LegSecuritySubType_27);
    InstrumentLeg_27.insert(LegSecuritySubType_27.getString());
    FIX::LegSecurityType LegSecurityType_27("STRING_1335026819");
    noLegs_0_0.set(LegSecurityType_27);
    InstrumentLeg_27.insert(LegSecurityType_27.getString());
    FIX::LegSide LegSide_27('1');
    noLegs_0_0.set(LegSide_27);
    InstrumentLeg_27.insert(LegSide_27.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_27("STRING_1599740453");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_27);
    InstrumentLeg_27.insert(LegStateOrProvinceOfIssue_27.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_27("CAN");
    noLegs_0_0.set(LegStrikeCurrency_27);
    InstrumentLeg_27.insert(LegStrikeCurrency_27.getString());
    FIX::LegStrikePrice LegStrikePrice_27;
    LegStrikePrice_27.setString("18780155");
    noLegs_0_0.set(LegStrikePrice_27);
    InstrumentLeg_27.insert(LegStrikePrice_27.getString());
    FIX::LegSymbol LegSymbol_27("STRING_1401070718");
    noLegs_0_0.set(LegSymbol_27);
    InstrumentLeg_27.insert(LegSymbol_27.getString());
    FIX::LegSymbolSfx LegSymbolSfx_27("STRING_1349115532");
    noLegs_0_0.set(LegSymbolSfx_27);
    InstrumentLeg_27.insert(LegSymbolSfx_27.getString());
    FIX::LegTimeUnit LegTimeUnit_27("STRING_1958747229");
    noLegs_0_0.set(LegTimeUnit_27);
    InstrumentLeg_27.insert(LegTimeUnit_27.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_27("STRING_169553243");
    noLegs_0_0.set(LegUnitOfMeasure_27);
    InstrumentLeg_27.insert(LegUnitOfMeasure_27.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_27;
    LegUnitOfMeasureQty_27.setString("15189924");
    noLegs_0_0.set(LegUnitOfMeasureQty_27);
    InstrumentLeg_27.insert(LegUnitOfMeasureQty_27.getString());
    all_values.push_back(InstrumentLeg_27);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_53;
      FIX::LegSecurityAltID LegSecurityAltID_53("STRING_1267909339");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_53);
      LegSecAltIDGrp_NoLegSecurityAltID_53.insert(LegSecurityAltID_53.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_53("STRING_728891589");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_53);
      LegSecAltIDGrp_NoLegSecurityAltID_53.insert(LegSecurityAltIDSource_53.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_53);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_28;
    FIX::EncodedLegIssuer EncodedLegIssuer_28("DATA_1269976579");
    noLegs_0_1.set(EncodedLegIssuer_28);
    InstrumentLeg_28.insert(EncodedLegIssuer_28.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_28(785850158);
    noLegs_0_1.set(EncodedLegIssuerLen_28);
    InstrumentLeg_28.insert(EncodedLegIssuerLen_28.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_28("DATA_449390361");
    noLegs_0_1.set(EncodedLegSecurityDesc_28);
    InstrumentLeg_28.insert(EncodedLegSecurityDesc_28.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_28(1824683281);
    noLegs_0_1.set(EncodedLegSecurityDescLen_28);
    InstrumentLeg_28.insert(EncodedLegSecurityDescLen_28.getString());
    FIX::LegCFICode LegCFICode_28("STRING_293036051");
    noLegs_0_1.set(LegCFICode_28);
    InstrumentLeg_28.insert(LegCFICode_28.getString());
    FIX::LegContractMultiplier LegContractMultiplier_28;
    LegContractMultiplier_28.setString("14268559");
    noLegs_0_1.set(LegContractMultiplier_28);
    InstrumentLeg_28.insert(LegContractMultiplier_28.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_28(440580451);
    noLegs_0_1.set(LegContractMultiplierUnit_28);
    InstrumentLeg_28.insert(LegContractMultiplierUnit_28.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_28("MONTHYEAR_239723569");
    noLegs_0_1.set(LegContractSettlMonth_28);
    InstrumentLeg_28.insert(LegContractSettlMonth_28.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_28("COUNTRY_587545726");
    noLegs_0_1.set(LegCountryOfIssue_28);
    InstrumentLeg_28.insert(LegCountryOfIssue_28.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_28("LOCALMKTDATE_449762343");
    noLegs_0_1.set(LegCouponPaymentDate_28);
    InstrumentLeg_28.insert(LegCouponPaymentDate_28.getString());
    FIX::LegCouponRate LegCouponRate_28;
    LegCouponRate_28.setString("27.530000");
    noLegs_0_1.set(LegCouponRate_28);
    InstrumentLeg_28.insert(LegCouponRate_28.getString());
    FIX::LegCreditRating LegCreditRating_28("STRING_2079899707");
    noLegs_0_1.set(LegCreditRating_28);
    InstrumentLeg_28.insert(LegCreditRating_28.getString());
    FIX::LegCurrency LegCurrency_28("EUR");
    noLegs_0_1.set(LegCurrency_28);
    InstrumentLeg_28.insert(LegCurrency_28.getString());
    FIX::LegDatedDate LegDatedDate_28("LOCALMKTDATE_1101814999");
    noLegs_0_1.set(LegDatedDate_28);
    InstrumentLeg_28.insert(LegDatedDate_28.getString());
    FIX::LegExerciseStyle LegExerciseStyle_28(83674046);
    noLegs_0_1.set(LegExerciseStyle_28);
    InstrumentLeg_28.insert(LegExerciseStyle_28.getString());
    FIX::LegFactor LegFactor_28;
    LegFactor_28.setString("17700350");
    noLegs_0_1.set(LegFactor_28);
    InstrumentLeg_28.insert(LegFactor_28.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_28(289358171);
    noLegs_0_1.set(LegFlowScheduleType_28);
    InstrumentLeg_28.insert(LegFlowScheduleType_28.getString());
    FIX::LegInstrRegistry LegInstrRegistry_28("STRING_1999135264");
    noLegs_0_1.set(LegInstrRegistry_28);
    InstrumentLeg_28.insert(LegInstrRegistry_28.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_28("LOCALMKTDATE_1222291899");
    noLegs_0_1.set(LegInterestAccrualDate_28);
    InstrumentLeg_28.insert(LegInterestAccrualDate_28.getString());
    FIX::LegIssueDate LegIssueDate_28("LOCALMKTDATE_242252652");
    noLegs_0_1.set(LegIssueDate_28);
    InstrumentLeg_28.insert(LegIssueDate_28.getString());
    FIX::LegIssuer LegIssuer_28("STRING_2115155847");
    noLegs_0_1.set(LegIssuer_28);
    InstrumentLeg_28.insert(LegIssuer_28.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_28("STRING_952823791");
    noLegs_0_1.set(LegLocaleOfIssue_28);
    InstrumentLeg_28.insert(LegLocaleOfIssue_28.getString());
    FIX::LegMaturityDate LegMaturityDate_28("LOCALMKTDATE_1643323370");
    noLegs_0_1.set(LegMaturityDate_28);
    InstrumentLeg_28.insert(LegMaturityDate_28.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_28("MONTHYEAR_1316787731");
    noLegs_0_1.set(LegMaturityMonthYear_28);
    InstrumentLeg_28.insert(LegMaturityMonthYear_28.getString());
    FIX::LegMaturityTime LegMaturityTime_28("TZTIMEONLY_764087372");
    noLegs_0_1.set(LegMaturityTime_28);
    InstrumentLeg_28.insert(LegMaturityTime_28.getString());
    FIX::LegOptAttribute LegOptAttribute_28('1');
    noLegs_0_1.set(LegOptAttribute_28);
    InstrumentLeg_28.insert(LegOptAttribute_28.getString());
    FIX::LegOptionRatio LegOptionRatio_28;
    LegOptionRatio_28.setString("6882965");
    noLegs_0_1.set(LegOptionRatio_28);
    InstrumentLeg_28.insert(LegOptionRatio_28.getString());
    FIX::LegPool LegPool_28("STRING_870619388");
    noLegs_0_1.set(LegPool_28);
    InstrumentLeg_28.insert(LegPool_28.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_28("STRING_933302304");
    noLegs_0_1.set(LegPriceUnitOfMeasure_28);
    InstrumentLeg_28.insert(LegPriceUnitOfMeasure_28.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_28;
    LegPriceUnitOfMeasureQty_28.setString("14171881");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_28);
    InstrumentLeg_28.insert(LegPriceUnitOfMeasureQty_28.getString());
    FIX::LegProduct LegProduct_28(2140595968);
    noLegs_0_1.set(LegProduct_28);
    InstrumentLeg_28.insert(LegProduct_28.getString());
    FIX::LegPutOrCall LegPutOrCall_28(1719152462);
    noLegs_0_1.set(LegPutOrCall_28);
    InstrumentLeg_28.insert(LegPutOrCall_28.getString());
    FIX::LegRatioQty LegRatioQty_28;
    LegRatioQty_28.setString("18665784");
    noLegs_0_1.set(LegRatioQty_28);
    InstrumentLeg_28.insert(LegRatioQty_28.getString());
    FIX::LegRedemptionDate LegRedemptionDate_28("LOCALMKTDATE_1817795601");
    noLegs_0_1.set(LegRedemptionDate_28);
    InstrumentLeg_28.insert(LegRedemptionDate_28.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_28("STRING_2012188514");
    noLegs_0_1.set(LegRepoCollateralSecurityType_28);
    InstrumentLeg_28.insert(LegRepoCollateralSecurityType_28.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_28;
    LegRepurchaseRate_28.setString("7.960000");
    noLegs_0_1.set(LegRepurchaseRate_28);
    InstrumentLeg_28.insert(LegRepurchaseRate_28.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_28(110892404);
    noLegs_0_1.set(LegRepurchaseTerm_28);
    InstrumentLeg_28.insert(LegRepurchaseTerm_28.getString());
    FIX::LegSecurityDesc LegSecurityDesc_28("STRING_104428435");
    noLegs_0_1.set(LegSecurityDesc_28);
    InstrumentLeg_28.insert(LegSecurityDesc_28.getString());
    FIX::LegSecurityExchange LegSecurityExchange_28("EXCHANGE_1733496522");
    noLegs_0_1.set(LegSecurityExchange_28);
    InstrumentLeg_28.insert(LegSecurityExchange_28.getString());
    FIX::LegSecurityID LegSecurityID_28("STRING_560654748");
    noLegs_0_1.set(LegSecurityID_28);
    InstrumentLeg_28.insert(LegSecurityID_28.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_28("STRING_748361188");
    noLegs_0_1.set(LegSecurityIDSource_28);
    InstrumentLeg_28.insert(LegSecurityIDSource_28.getString());
    FIX::LegSecuritySubType LegSecuritySubType_28("STRING_1665912582");
    noLegs_0_1.set(LegSecuritySubType_28);
    InstrumentLeg_28.insert(LegSecuritySubType_28.getString());
    FIX::LegSecurityType LegSecurityType_28("STRING_1757436401");
    noLegs_0_1.set(LegSecurityType_28);
    InstrumentLeg_28.insert(LegSecurityType_28.getString());
    FIX::LegSide LegSide_28('1');
    noLegs_0_1.set(LegSide_28);
    InstrumentLeg_28.insert(LegSide_28.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_28("STRING_620243933");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_28);
    InstrumentLeg_28.insert(LegStateOrProvinceOfIssue_28.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_28("GBP");
    noLegs_0_1.set(LegStrikeCurrency_28);
    InstrumentLeg_28.insert(LegStrikeCurrency_28.getString());
    FIX::LegStrikePrice LegStrikePrice_28;
    LegStrikePrice_28.setString("9096021");
    noLegs_0_1.set(LegStrikePrice_28);
    InstrumentLeg_28.insert(LegStrikePrice_28.getString());
    FIX::LegSymbol LegSymbol_28("STRING_1692762063");
    noLegs_0_1.set(LegSymbol_28);
    InstrumentLeg_28.insert(LegSymbol_28.getString());
    FIX::LegSymbolSfx LegSymbolSfx_28("STRING_2129760383");
    noLegs_0_1.set(LegSymbolSfx_28);
    InstrumentLeg_28.insert(LegSymbolSfx_28.getString());
    FIX::LegTimeUnit LegTimeUnit_28("STRING_1151854757");
    noLegs_0_1.set(LegTimeUnit_28);
    InstrumentLeg_28.insert(LegTimeUnit_28.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_28("STRING_1660434263");
    noLegs_0_1.set(LegUnitOfMeasure_28);
    InstrumentLeg_28.insert(LegUnitOfMeasure_28.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_28;
    LegUnitOfMeasureQty_28.setString("9351005");
    noLegs_0_1.set(LegUnitOfMeasureQty_28);
    InstrumentLeg_28.insert(LegUnitOfMeasureQty_28.getString());
    all_values.push_back(InstrumentLeg_28);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_54;
      FIX::LegSecurityAltID LegSecurityAltID_54("STRING_829738346");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_54);
      LegSecAltIDGrp_NoLegSecurityAltID_54.insert(LegSecurityAltID_54.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_54("STRING_1699187899");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_54);
      LegSecAltIDGrp_NoLegSecurityAltID_54.insert(LegSecurityAltIDSource_54.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_54);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_55;
      FIX::LegSecurityAltID LegSecurityAltID_55("STRING_313087445");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_55);
      LegSecAltIDGrp_NoLegSecurityAltID_55.insert(LegSecurityAltID_55.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_55("STRING_1518034872");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_55);
      LegSecAltIDGrp_NoLegSecurityAltID_55.insert(LegSecurityAltIDSource_55.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_55);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_56;
      FIX::LegSecurityAltID LegSecurityAltID_56("STRING_422323639");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_56);
      LegSecAltIDGrp_NoLegSecurityAltID_56.insert(LegSecurityAltID_56.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_56("STRING_1246389749");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_56);
      LegSecAltIDGrp_NoLegSecurityAltID_56.insert(LegSecurityAltIDSource_56.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_56);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_14;
  FIX::AttachmentPoint AttachmentPoint_14;
  AttachmentPoint_14.setString("93.390000");
  msg.set(AttachmentPoint_14);
  Instrument_14.insert(AttachmentPoint_14.getString());
  FIX::CFICode CFICode_14("STRING_415435959");
  msg.set(CFICode_14);
  Instrument_14.insert(CFICode_14.getString());
  FIX::CPProgram CPProgram_14(1);
  msg.set(CPProgram_14);
  Instrument_14.insert(CPProgram_14.getString());
  FIX::CPRegType CPRegType_14("STRING_506834168");
  msg.set(CPRegType_14);
  Instrument_14.insert(CPRegType_14.getString());
  FIX::CapPrice CapPrice_14;
  CapPrice_14.setString("857479");
  msg.set(CapPrice_14);
  Instrument_14.insert(CapPrice_14.getString());
  FIX::ContractMultiplier ContractMultiplier_14;
  ContractMultiplier_14.setString("6827634");
  msg.set(ContractMultiplier_14);
  Instrument_14.insert(ContractMultiplier_14.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_14(1);
  msg.set(ContractMultiplierUnit_14);
  Instrument_14.insert(ContractMultiplierUnit_14.getString());
  FIX::ContractSettlMonth ContractSettlMonth_14("MONTHYEAR_196640317");
  msg.set(ContractSettlMonth_14);
  Instrument_14.insert(ContractSettlMonth_14.getString());
  FIX::CountryOfIssue CountryOfIssue_14("COUNTRY_787191865");
  msg.set(CountryOfIssue_14);
  Instrument_14.insert(CountryOfIssue_14.getString());
  FIX::CouponPaymentDate CouponPaymentDate_14("LOCALMKTDATE_1238797839");
  msg.set(CouponPaymentDate_14);
  Instrument_14.insert(CouponPaymentDate_14.getString());
  FIX::CouponRate CouponRate_14;
  CouponRate_14.setString("50.650000");
  msg.set(CouponRate_14);
  Instrument_14.insert(CouponRate_14.getString());
  FIX::CreditRating CreditRating_14("STRING_1535553053");
  msg.set(CreditRating_14);
  Instrument_14.insert(CreditRating_14.getString());
  FIX::DatedDate DatedDate_14("LOCALMKTDATE_757226773");
  msg.set(DatedDate_14);
  Instrument_14.insert(DatedDate_14.getString());
  FIX::DetachmentPoint DetachmentPoint_14;
  DetachmentPoint_14.setString("78.180000");
  msg.set(DetachmentPoint_14);
  Instrument_14.insert(DetachmentPoint_14.getString());
  FIX::EncodedIssuer EncodedIssuer_14("DATA_672986444");
  msg.set(EncodedIssuer_14);
  Instrument_14.insert(EncodedIssuer_14.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_14(1377470706);
  msg.set(EncodedIssuerLen_14);
  Instrument_14.insert(EncodedIssuerLen_14.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_14("DATA_60874617");
  msg.set(EncodedSecurityDesc_14);
  Instrument_14.insert(EncodedSecurityDesc_14.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_14(1580454928);
  msg.set(EncodedSecurityDescLen_14);
  Instrument_14.insert(EncodedSecurityDescLen_14.getString());
  FIX::ExerciseStyle ExerciseStyle_14(0);
  msg.set(ExerciseStyle_14);
  Instrument_14.insert(ExerciseStyle_14.getString());
  FIX::Factor Factor_14;
  Factor_14.setString("17536366");
  msg.set(Factor_14);
  Instrument_14.insert(Factor_14.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_14(true);
  msg.set(FlexProductEligibilityIndicator_14);
  Instrument_14.insert(FlexProductEligibilityIndicator_14.getString());
  FIX::FlexibleIndicator FlexibleIndicator_14(true);
  msg.set(FlexibleIndicator_14);
  Instrument_14.insert(FlexibleIndicator_14.getString());
  FIX::FloorPrice FloorPrice_14;
  FloorPrice_14.setString("12665872");
  msg.set(FloorPrice_14);
  Instrument_14.insert(FloorPrice_14.getString());
  FIX::FlowScheduleType FlowScheduleType_14(2);
  msg.set(FlowScheduleType_14);
  Instrument_14.insert(FlowScheduleType_14.getString());
  FIX::InstrRegistry InstrRegistry_14("STRING_1939138399");
  msg.set(InstrRegistry_14);
  Instrument_14.insert(InstrRegistry_14.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_14('2');
  msg.set(InstrmtAssignmentMethod_14);
  Instrument_14.insert(InstrmtAssignmentMethod_14.getString());
  FIX::InterestAccrualDate InterestAccrualDate_14("LOCALMKTDATE_2049536441");
  msg.set(InterestAccrualDate_14);
  Instrument_14.insert(InterestAccrualDate_14.getString());
  FIX::IssueDate IssueDate_14("LOCALMKTDATE_104742196");
  msg.set(IssueDate_14);
  Instrument_14.insert(IssueDate_14.getString());
  FIX::Issuer Issuer_14("STRING_1466876867");
  msg.set(Issuer_14);
  Instrument_14.insert(Issuer_14.getString());
  FIX::ListMethod ListMethod_14(1);
  msg.set(ListMethod_14);
  Instrument_14.insert(ListMethod_14.getString());
  FIX::LocaleOfIssue LocaleOfIssue_14("STRING_1351131946");
  msg.set(LocaleOfIssue_14);
  Instrument_14.insert(LocaleOfIssue_14.getString());
  FIX::MaturityDate MaturityDate_14("LOCALMKTDATE_107132558");
  msg.set(MaturityDate_14);
  Instrument_14.insert(MaturityDate_14.getString());
  FIX::MaturityMonthYear MaturityMonthYear_14("MONTHYEAR_739812392");
  msg.set(MaturityMonthYear_14);
  Instrument_14.insert(MaturityMonthYear_14.getString());
  FIX::MaturityTime MaturityTime_14("TZTIMEONLY_21706862");
  msg.set(MaturityTime_14);
  Instrument_14.insert(MaturityTime_14.getString());
  FIX::MinPriceIncrement MinPriceIncrement_14;
  MinPriceIncrement_14.setString("6139667");
  msg.set(MinPriceIncrement_14);
  Instrument_14.insert(MinPriceIncrement_14.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_14;
  MinPriceIncrementAmount_14.setString("8255603");
  msg.set(MinPriceIncrementAmount_14);
  Instrument_14.insert(MinPriceIncrementAmount_14.getString());
  FIX::NTPositionLimit NTPositionLimit_14(704470292);
  msg.set(NTPositionLimit_14);
  Instrument_14.insert(NTPositionLimit_14.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_14;
  NotionalPercentageOutstanding_14.setString("80.430000");
  msg.set(NotionalPercentageOutstanding_14);
  Instrument_14.insert(NotionalPercentageOutstanding_14.getString());
  FIX::OptAttribute OptAttribute_14('1');
  msg.set(OptAttribute_14);
  Instrument_14.insert(OptAttribute_14.getString());
  FIX::OptPayoutAmount OptPayoutAmount_14;
  OptPayoutAmount_14.setString("14916621");
  msg.set(OptPayoutAmount_14);
  Instrument_14.insert(OptPayoutAmount_14.getString());
  FIX::OptPayoutType OptPayoutType_14(2);
  msg.set(OptPayoutType_14);
  Instrument_14.insert(OptPayoutType_14.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_14;
  OriginalNotionalPercentageOutstanding_14.setString("56.880000");
  msg.set(OriginalNotionalPercentageOutstanding_14);
  Instrument_14.insert(OriginalNotionalPercentageOutstanding_14.getString());
  FIX::Pool Pool_14("STRING_879731562");
  msg.set(Pool_14);
  Instrument_14.insert(Pool_14.getString());
  FIX::PositionLimit PositionLimit_14(2115292655);
  msg.set(PositionLimit_14);
  Instrument_14.insert(PositionLimit_14.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_14("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_14);
  Instrument_14.insert(PriceQuoteMethod_14.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_14("STRING_1552718006");
  msg.set(PriceUnitOfMeasure_14);
  Instrument_14.insert(PriceUnitOfMeasure_14.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_14;
  PriceUnitOfMeasureQty_14.setString("13452797");
  msg.set(PriceUnitOfMeasureQty_14);
  Instrument_14.insert(PriceUnitOfMeasureQty_14.getString());
  FIX::Product Product_16(13);
  msg.set(Product_16);
  Instrument_14.insert(Product_16.getString());
  FIX::ProductComplex ProductComplex_14("STRING_985689286");
  msg.set(ProductComplex_14);
  Instrument_14.insert(ProductComplex_14.getString());
  FIX::PutOrCall PutOrCall_14(0);
  msg.set(PutOrCall_14);
  Instrument_14.insert(PutOrCall_14.getString());
  FIX::RedemptionDate RedemptionDate_14("LOCALMKTDATE_1813771157");
  msg.set(RedemptionDate_14);
  Instrument_14.insert(RedemptionDate_14.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_14("STRING_400937302");
  msg.set(RepoCollateralSecurityType_14);
  Instrument_14.insert(RepoCollateralSecurityType_14.getString());
  FIX::RepurchaseRate RepurchaseRate_14;
  RepurchaseRate_14.setString("91.480000");
  msg.set(RepurchaseRate_14);
  Instrument_14.insert(RepurchaseRate_14.getString());
  FIX::RepurchaseTerm RepurchaseTerm_14(932874805);
  msg.set(RepurchaseTerm_14);
  Instrument_14.insert(RepurchaseTerm_14.getString());
  FIX::RestructuringType RestructuringType_14("STRING_MR");
  msg.set(RestructuringType_14);
  Instrument_14.insert(RestructuringType_14.getString());
  FIX::SecurityDesc SecurityDesc_14("STRING_420483900");
  msg.set(SecurityDesc_14);
  Instrument_14.insert(SecurityDesc_14.getString());
  FIX::SecurityExchange SecurityExchange_14("EXCHANGE_881716800");
  msg.set(SecurityExchange_14);
  Instrument_14.insert(SecurityExchange_14.getString());
  FIX::SecurityGroup SecurityGroup_14("STRING_653338638");
  msg.set(SecurityGroup_14);
  Instrument_14.insert(SecurityGroup_14.getString());
  FIX::SecurityID SecurityID_14("STRING_525226096");
  msg.set(SecurityID_14);
  Instrument_14.insert(SecurityID_14.getString());
  FIX::SecurityIDSource SecurityIDSource_14("STRING_C");
  msg.set(SecurityIDSource_14);
  Instrument_14.insert(SecurityIDSource_14.getString());
  FIX::SecurityStatus SecurityStatus_14("STRING_2");
  msg.set(SecurityStatus_14);
  Instrument_14.insert(SecurityStatus_14.getString());
  FIX::SecuritySubType SecuritySubType_14("STRING_1876358042");
  msg.set(SecuritySubType_14);
  Instrument_14.insert(SecuritySubType_14.getString());
  FIX::SecurityType SecurityType_16("STRING_REPO");
  msg.set(SecurityType_16);
  Instrument_14.insert(SecurityType_16.getString());
  FIX::Seniority Seniority_14("STRING_SB");
  msg.set(Seniority_14);
  Instrument_14.insert(Seniority_14.getString());
  FIX::SettlMethod SettlMethod_14('C');
  msg.set(SettlMethod_14);
  Instrument_14.insert(SettlMethod_14.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_14("STRING_922209304");
  msg.set(SettleOnOpenFlag_14);
  Instrument_14.insert(SettleOnOpenFlag_14.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_14("STRING_395604121");
  msg.set(StateOrProvinceOfIssue_14);
  Instrument_14.insert(StateOrProvinceOfIssue_14.getString());
  FIX::StrikeCurrency StrikeCurrency_14("CAN");
  msg.set(StrikeCurrency_14);
  Instrument_14.insert(StrikeCurrency_14.getString());
  FIX::StrikeMultiplier StrikeMultiplier_14;
  StrikeMultiplier_14.setString("14178047");
  msg.set(StrikeMultiplier_14);
  Instrument_14.insert(StrikeMultiplier_14.getString());
  FIX::StrikePrice StrikePrice_14;
  StrikePrice_14.setString("19467137");
  msg.set(StrikePrice_14);
  Instrument_14.insert(StrikePrice_14.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_14(2);
  msg.set(StrikePriceBoundaryMethod_14);
  Instrument_14.insert(StrikePriceBoundaryMethod_14.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_14;
  StrikePriceBoundaryPrecision_14.setString("67.850000");
  msg.set(StrikePriceBoundaryPrecision_14);
  Instrument_14.insert(StrikePriceBoundaryPrecision_14.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_14(4);
  msg.set(StrikePriceDeterminationMethod_14);
  Instrument_14.insert(StrikePriceDeterminationMethod_14.getString());
  FIX::StrikeValue StrikeValue_14;
  StrikeValue_14.setString("2198685");
  msg.set(StrikeValue_14);
  Instrument_14.insert(StrikeValue_14.getString());
  FIX::Symbol Symbol_14("STRING_1049076644");
  msg.set(Symbol_14);
  Instrument_14.insert(Symbol_14.getString());
  FIX::SymbolSfx SymbolSfx_14("STRING_WI");
  msg.set(SymbolSfx_14);
  Instrument_14.insert(SymbolSfx_14.getString());
  FIX::TimeUnit TimeUnit_14("STRING_D");
  msg.set(TimeUnit_14);
  Instrument_14.insert(TimeUnit_14.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_14(1);
  msg.set(UnderlyingPriceDeterminationMethod_14);
  Instrument_14.insert(UnderlyingPriceDeterminationMethod_14.getString());
  FIX::UnitOfMeasure UnitOfMeasure_14("STRING_lbs");
  msg.set(UnitOfMeasure_14);
  Instrument_14.insert(UnitOfMeasure_14.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_14;
  UnitOfMeasureQty_14.setString("9025335");
  msg.set(UnitOfMeasureQty_14);
  Instrument_14.insert(UnitOfMeasureQty_14.getString());
  FIX::ValuationMethod ValuationMethod_14("STRING_EQTY");
  msg.set(ValuationMethod_14);
  Instrument_14.insert(ValuationMethod_14.getString());
  all_values.push_back(Instrument_14);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_29;
    FIX::ComplexEventCondition ComplexEventCondition_29(1);
    noComplexEvents_0_0.set(ComplexEventCondition_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventCondition_29.getString());
    FIX::ComplexEventPrice ComplexEventPrice_29;
    ComplexEventPrice_29.setString("17083734");
    noComplexEvents_0_0.set(ComplexEventPrice_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPrice_29.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_29(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPriceBoundaryMethod_29.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_29;
    ComplexEventPriceBoundaryPrecision_29.setString("65.780000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPriceBoundaryPrecision_29.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_29(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPriceTimeType_29.getString());
    FIX::ComplexEventType ComplexEventType_29(5);
    noComplexEvents_0_0.set(ComplexEventType_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventType_29.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_29;
    ComplexOptPayoutAmount_29.setString("3295890");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexOptPayoutAmount_29.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_29);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_65;
      FIX::ComplexEventEndDate ComplexEventEndDate_65(FIX::UTCTIMESTAMP(21, 24, 9, 18, 5, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_65);
      ComplexEventDates_NoComplexEventDates_65.insert(ComplexEventEndDate_65.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_65(FIX::UTCTIMESTAMP(19, 7, 4, 20, 9, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_65);
      ComplexEventDates_NoComplexEventDates_65.insert(ComplexEventStartDate_65.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_65);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_131;
        FIX::ComplexEventEndTime ComplexEventEndTime_131(FIX::UTCTIMEONLY(9, 29, 9));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_131);
        ComplexEventTimes_NoComplexEventTimes_131.insert(ComplexEventEndTime_131.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_131(FIX::UTCTIMEONLY(11, 11, 43));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_131);
        ComplexEventTimes_NoComplexEventTimes_131.insert(ComplexEventStartTime_131.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_131);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_30;
    FIX::ComplexEventCondition ComplexEventCondition_30(1);
    noComplexEvents_0_1.set(ComplexEventCondition_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventCondition_30.getString());
    FIX::ComplexEventPrice ComplexEventPrice_30;
    ComplexEventPrice_30.setString("1911731");
    noComplexEvents_0_1.set(ComplexEventPrice_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPrice_30.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_30(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPriceBoundaryMethod_30.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_30;
    ComplexEventPriceBoundaryPrecision_30.setString("5.000000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPriceBoundaryPrecision_30.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_30(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPriceTimeType_30.getString());
    FIX::ComplexEventType ComplexEventType_30(1);
    noComplexEvents_0_1.set(ComplexEventType_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventType_30.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_30;
    ComplexOptPayoutAmount_30.setString("10781195");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexOptPayoutAmount_30.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_30);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_66;
      FIX::ComplexEventEndDate ComplexEventEndDate_66(FIX::UTCTIMESTAMP(21, 28, 36, 7, 9, 2003));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_66);
      ComplexEventDates_NoComplexEventDates_66.insert(ComplexEventEndDate_66.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_66(FIX::UTCTIMESTAMP(7, 46, 17, 27, 12, 2009));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_66);
      ComplexEventDates_NoComplexEventDates_66.insert(ComplexEventStartDate_66.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_66);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_132;
        FIX::ComplexEventEndTime ComplexEventEndTime_132(FIX::UTCTIMEONLY(10, 1, 20));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_132);
        ComplexEventTimes_NoComplexEventTimes_132.insert(ComplexEventEndTime_132.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_132(FIX::UTCTIMEONLY(16, 23, 34));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_132);
        ComplexEventTimes_NoComplexEventTimes_132.insert(ComplexEventStartTime_132.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_132);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_133;
        FIX::ComplexEventEndTime ComplexEventEndTime_133(FIX::UTCTIMEONLY(14, 13, 15));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_133);
        ComplexEventTimes_NoComplexEventTimes_133.insert(ComplexEventEndTime_133.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_133(FIX::UTCTIMEONLY(2, 2, 12));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_133);
        ComplexEventTimes_NoComplexEventTimes_133.insert(ComplexEventStartTime_133.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_133);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_31;
    FIX::ComplexEventCondition ComplexEventCondition_31(2);
    noComplexEvents_0_2.set(ComplexEventCondition_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventCondition_31.getString());
    FIX::ComplexEventPrice ComplexEventPrice_31;
    ComplexEventPrice_31.setString("3726405");
    noComplexEvents_0_2.set(ComplexEventPrice_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventPrice_31.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_31(2);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventPriceBoundaryMethod_31.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_31;
    ComplexEventPriceBoundaryPrecision_31.setString("6.970000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventPriceBoundaryPrecision_31.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_31(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventPriceTimeType_31.getString());
    FIX::ComplexEventType ComplexEventType_31(9);
    noComplexEvents_0_2.set(ComplexEventType_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventType_31.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_31;
    ComplexOptPayoutAmount_31.setString("10589031");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexOptPayoutAmount_31.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_31);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_67;
      FIX::ComplexEventEndDate ComplexEventEndDate_67(FIX::UTCTIMESTAMP(10, 53, 20, 5, 7, 2016));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_67);
      ComplexEventDates_NoComplexEventDates_67.insert(ComplexEventEndDate_67.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_67(FIX::UTCTIMESTAMP(8, 45, 9, 7, 2, 2009));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_67);
      ComplexEventDates_NoComplexEventDates_67.insert(ComplexEventStartDate_67.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_67);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_134;
        FIX::ComplexEventEndTime ComplexEventEndTime_134(FIX::UTCTIMEONLY(23, 3, 47));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_134);
        ComplexEventTimes_NoComplexEventTimes_134.insert(ComplexEventEndTime_134.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_134(FIX::UTCTIMEONLY(6, 49, 47));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_134);
        ComplexEventTimes_NoComplexEventTimes_134.insert(ComplexEventStartTime_134.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_134);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_135;
        FIX::ComplexEventEndTime ComplexEventEndTime_135(FIX::UTCTIMEONLY(21, 28, 8));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_135);
        ComplexEventTimes_NoComplexEventTimes_135.insert(ComplexEventEndTime_135.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_135(FIX::UTCTIMEONLY(10, 4, 51));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_135);
        ComplexEventTimes_NoComplexEventTimes_135.insert(ComplexEventStartTime_135.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_135);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_136;
        FIX::ComplexEventEndTime ComplexEventEndTime_136(FIX::UTCTIMEONLY(14, 37, 43));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_136);
        ComplexEventTimes_NoComplexEventTimes_136.insert(ComplexEventEndTime_136.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_136(FIX::UTCTIMEONLY(11, 27, 13));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_136);
        ComplexEventTimes_NoComplexEventTimes_136.insert(ComplexEventStartTime_136.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_136);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_27;
    FIX::EventDate EventDate_27("LOCALMKTDATE_150791592");
    noEvents_0_0.set(EventDate_27);
    EvntGrp_NoEvents_27.insert(EventDate_27.getString());
    FIX::EventPx EventPx_27;
    EventPx_27.setString("17724489");
    noEvents_0_0.set(EventPx_27);
    EvntGrp_NoEvents_27.insert(EventPx_27.getString());
    FIX::EventText EventText_27("STRING_1400136991");
    noEvents_0_0.set(EventText_27);
    EvntGrp_NoEvents_27.insert(EventText_27.getString());
    FIX::EventTime EventTime_27(FIX::UTCTIMESTAMP(11, 21, 22, 2, 6, 2015));
    noEvents_0_0.set(EventTime_27);
    EvntGrp_NoEvents_27.insert(EventTime_27.getString());
    FIX::EventType EventType_27(18);
    noEvents_0_0.set(EventType_27);
    EvntGrp_NoEvents_27.insert(EventType_27.getString());
    all_values.push_back(EvntGrp_NoEvents_27);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_28;
    FIX::EventDate EventDate_28("LOCALMKTDATE_1637627495");
    noEvents_0_1.set(EventDate_28);
    EvntGrp_NoEvents_28.insert(EventDate_28.getString());
    FIX::EventPx EventPx_28;
    EventPx_28.setString("17507112");
    noEvents_0_1.set(EventPx_28);
    EvntGrp_NoEvents_28.insert(EventPx_28.getString());
    FIX::EventText EventText_28("STRING_1941506505");
    noEvents_0_1.set(EventText_28);
    EvntGrp_NoEvents_28.insert(EventText_28.getString());
    FIX::EventTime EventTime_28(FIX::UTCTIMESTAMP(23, 5, 34, 19, 4, 2012));
    noEvents_0_1.set(EventTime_28);
    EvntGrp_NoEvents_28.insert(EventTime_28.getString());
    FIX::EventType EventType_28(7);
    noEvents_0_1.set(EventType_28);
    EvntGrp_NoEvents_28.insert(EventType_28.getString());
    all_values.push_back(EvntGrp_NoEvents_28);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_29;
    FIX::EventDate EventDate_29("LOCALMKTDATE_279461598");
    noEvents_0_2.set(EventDate_29);
    EvntGrp_NoEvents_29.insert(EventDate_29.getString());
    FIX::EventPx EventPx_29;
    EventPx_29.setString("21383076");
    noEvents_0_2.set(EventPx_29);
    EvntGrp_NoEvents_29.insert(EventPx_29.getString());
    FIX::EventText EventText_29("STRING_496546015");
    noEvents_0_2.set(EventText_29);
    EvntGrp_NoEvents_29.insert(EventText_29.getString());
    FIX::EventTime EventTime_29(FIX::UTCTIMESTAMP(4, 31, 29, 17, 8, 2000));
    noEvents_0_2.set(EventTime_29);
    EvntGrp_NoEvents_29.insert(EventTime_29.getString());
    FIX::EventType EventType_29(5);
    noEvents_0_2.set(EventType_29);
    EvntGrp_NoEvents_29.insert(EventType_29.getString());
    all_values.push_back(EvntGrp_NoEvents_29);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_27;
    FIX::InstrumentPartyID InstrumentPartyID_27("STRING_821996244");
    noInstrumentParties_0_0.set(InstrumentPartyID_27);
    InstrumentParties_NoInstrumentParties_27.insert(InstrumentPartyID_27.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_27('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_27);
    InstrumentParties_NoInstrumentParties_27.insert(InstrumentPartyIDSource_27.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_27(737815996);
    noInstrumentParties_0_0.set(InstrumentPartyRole_27);
    InstrumentParties_NoInstrumentParties_27.insert(InstrumentPartyRole_27.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_27);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51;
      FIX::InstrumentPartySubID InstrumentPartySubID_51("STRING_1068235786");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_51);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51.insert(InstrumentPartySubID_51.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_51(854129373);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_51);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51.insert(InstrumentPartySubIDType_51.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52;
      FIX::InstrumentPartySubID InstrumentPartySubID_52("STRING_1805122307");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_52);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52.insert(InstrumentPartySubID_52.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_52(557107535);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_52);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52.insert(InstrumentPartySubIDType_52.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_28;
    FIX::InstrumentPartyID InstrumentPartyID_28("STRING_344273220");
    noInstrumentParties_0_1.set(InstrumentPartyID_28);
    InstrumentParties_NoInstrumentParties_28.insert(InstrumentPartyID_28.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_28('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_28);
    InstrumentParties_NoInstrumentParties_28.insert(InstrumentPartyIDSource_28.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_28(351130392);
    noInstrumentParties_0_1.set(InstrumentPartyRole_28);
    InstrumentParties_NoInstrumentParties_28.insert(InstrumentPartyRole_28.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_28);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53;
      FIX::InstrumentPartySubID InstrumentPartySubID_53("STRING_1253174877");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_53);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53.insert(InstrumentPartySubID_53.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_53(736084338);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_53);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53.insert(InstrumentPartySubIDType_53.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54;
      FIX::InstrumentPartySubID InstrumentPartySubID_54("STRING_772669672");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_54);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54.insert(InstrumentPartySubID_54.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_54(510381752);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_54);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54.insert(InstrumentPartySubIDType_54.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55;
      FIX::InstrumentPartySubID InstrumentPartySubID_55("STRING_1806406101");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_55);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55.insert(InstrumentPartySubID_55.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_55(1448672482);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_55);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55.insert(InstrumentPartySubIDType_55.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_29;
    FIX::InstrumentPartyID InstrumentPartyID_29("STRING_1707962578");
    noInstrumentParties_0_2.set(InstrumentPartyID_29);
    InstrumentParties_NoInstrumentParties_29.insert(InstrumentPartyID_29.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_29('2');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_29);
    InstrumentParties_NoInstrumentParties_29.insert(InstrumentPartyIDSource_29.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_29(1439496442);
    noInstrumentParties_0_2.set(InstrumentPartyRole_29);
    InstrumentParties_NoInstrumentParties_29.insert(InstrumentPartyRole_29.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_29);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56;
      FIX::InstrumentPartySubID InstrumentPartySubID_56("STRING_1695281854");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_56);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56.insert(InstrumentPartySubID_56.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_56(1848981639);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_56);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56.insert(InstrumentPartySubIDType_56.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57;
      FIX::InstrumentPartySubID InstrumentPartySubID_57("STRING_1373949077");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_57);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57.insert(InstrumentPartySubID_57.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_57(1445108695);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_57);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57.insert(InstrumentPartySubIDType_57.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_26;
    FIX::SecurityAltID SecurityAltID_26("STRING_1432035228");
    noSecurityAltID_0_0.set(SecurityAltID_26);
    SecAltIDGrp_NoSecurityAltID_26.insert(SecurityAltID_26.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_26("STRING_1345727129");
    noSecurityAltID_0_0.set(SecurityAltIDSource_26);
    SecAltIDGrp_NoSecurityAltID_26.insert(SecurityAltIDSource_26.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_26);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_28;
  FIX::SecurityXML SecurityXML_29("XMLDATA_570501156");
  msg.set(SecurityXML_29);
  FIX::SecurityXMLLen SecurityXMLLen_14(742774722);
  msg.set(SecurityXMLLen_14);
  FIX::SecurityXMLSchema SecurityXMLSchema_14("STRING_20239725");
  msg.set(SecurityXMLSchema_14);
  SecurityXML_28.insert(SecurityXMLSchema_14.getString());
  all_values.push_back(SecurityXML_28);
  all_compo_names.insert("SecurityXML");

  // PegInstructions
  multiset<string> PegInstructions_0;
  FIX::PegLimitType PegLimitType_0(0);
  msg.set(PegLimitType_0);
  PegInstructions_0.insert(PegLimitType_0.getString());
  FIX::PegMoveType PegMoveType_0(0);
  msg.set(PegMoveType_0);
  PegInstructions_0.insert(PegMoveType_0.getString());
  FIX::PegOffsetType PegOffsetType_0(3);
  msg.set(PegOffsetType_0);
  PegInstructions_0.insert(PegOffsetType_0.getString());
  FIX::PegOffsetValue PegOffsetValue_0;
  PegOffsetValue_0.setString("11719603");
  msg.set(PegOffsetValue_0);
  PegInstructions_0.insert(PegOffsetValue_0.getString());
  FIX::PegPriceType PegPriceType_0(4);
  msg.set(PegPriceType_0);
  PegInstructions_0.insert(PegPriceType_0.getString());
  FIX::PegRoundDirection PegRoundDirection_0(1);
  msg.set(PegRoundDirection_0);
  PegInstructions_0.insert(PegRoundDirection_0.getString());
  FIX::PegScope PegScope_0(2);
  msg.set(PegScope_0);
  PegInstructions_0.insert(PegScope_0.getString());
  FIX::PegSecurityDesc PegSecurityDesc_0("STRING_531509663");
  msg.set(PegSecurityDesc_0);
  PegInstructions_0.insert(PegSecurityDesc_0.getString());
  FIX::PegSecurityID PegSecurityID_0("STRING_1009596152");
  msg.set(PegSecurityID_0);
  PegInstructions_0.insert(PegSecurityID_0.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_0("STRING_2080198294");
  msg.set(PegSecurityIDSource_0);
  PegInstructions_0.insert(PegSecurityIDSource_0.getString());
  FIX::PegSymbol PegSymbol_0("STRING_2004841849");
  msg.set(PegSymbol_0);
  PegInstructions_0.insert(PegSymbol_0.getString());
  all_values.push_back(PegInstructions_0);
  all_compo_names.insert("PegInstructions");

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_0;
    FIX::RootPartyID RootPartyID_0("STRING_668798984");
    noRootPartyIDs_0_0.set(RootPartyID_0);
    RootParties_NoRootPartyIDs_0.insert(RootPartyID_0.getString());
    FIX::RootPartyIDSource RootPartyIDSource_0('6');
    noRootPartyIDs_0_0.set(RootPartyIDSource_0);
    RootParties_NoRootPartyIDs_0.insert(RootPartyIDSource_0.getString());
    FIX::RootPartyRole RootPartyRole_0(625669133);
    noRootPartyIDs_0_0.set(RootPartyRole_0);
    RootParties_NoRootPartyIDs_0.insert(RootPartyRole_0.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_0);
    all_compo_names.insert("RootParties.NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_0;
      FIX::RootPartySubID RootPartySubID_0("STRING_2078700355");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_0);
      RootSubParties_NoRootPartySubIDs_0.insert(RootPartySubID_0.getString());
      FIX::RootPartySubIDType RootPartySubIDType_0(186148063);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_0);
      RootSubParties_NoRootPartySubIDs_0.insert(RootPartySubIDType_0.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_0);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  // SideCrossOrdModGrp
  // Group SideCrossOrdModGrp.NoSides
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSides noSides_0_0;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_0;
    FIX::Account Account_10("STRING_1370713150");
    noSides_0_0.set(Account_10);
    SideCrossOrdModGrp_NoSides_0.insert(Account_10.getString());
    FIX::AccountType AccountType_7(3);
    noSides_0_0.set(AccountType_7);
    SideCrossOrdModGrp_NoSides_0.insert(AccountType_7.getString());
    FIX::AcctIDSource AcctIDSource_3(4);
    noSides_0_0.set(AcctIDSource_3);
    SideCrossOrdModGrp_NoSides_0.insert(AcctIDSource_3.getString());
    FIX::AllocID AllocID_7("STRING_1072211141");
    noSides_0_0.set(AllocID_7);
    SideCrossOrdModGrp_NoSides_0.insert(AllocID_7.getString());
    FIX::BookingType BookingType_3(1);
    noSides_0_0.set(BookingType_3);
    SideCrossOrdModGrp_NoSides_0.insert(BookingType_3.getString());
    FIX::BookingUnit BookingUnit_0('0');
    noSides_0_0.set(BookingUnit_0);
    SideCrossOrdModGrp_NoSides_0.insert(BookingUnit_0.getString());
    FIX::CashMargin CashMargin_0('1');
    noSides_0_0.set(CashMargin_0);
    SideCrossOrdModGrp_NoSides_0.insert(CashMargin_0.getString());
    FIX::ClOrdID ClOrdID_16("STRING_901673666");
    noSides_0_0.set(ClOrdID_16);
    SideCrossOrdModGrp_NoSides_0.insert(ClOrdID_16.getString());
    FIX::ClOrdLinkID ClOrdLinkID_0("STRING_457255872");
    noSides_0_0.set(ClOrdLinkID_0);
    SideCrossOrdModGrp_NoSides_0.insert(ClOrdLinkID_0.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_4("STRING_H");
    noSides_0_0.set(ClearingFeeIndicator_4);
    SideCrossOrdModGrp_NoSides_0.insert(ClearingFeeIndicator_4.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_0(1);
    noSides_0_0.set(CoveredOrUncovered_0);
    SideCrossOrdModGrp_NoSides_0.insert(CoveredOrUncovered_0.getString());
    FIX::CustOrderCapacity CustOrderCapacity_3(3);
    noSides_0_0.set(CustOrderCapacity_3);
    SideCrossOrdModGrp_NoSides_0.insert(CustOrderCapacity_3.getString());
    FIX::DayBookingInst DayBookingInst_0('1');
    noSides_0_0.set(DayBookingInst_0);
    SideCrossOrdModGrp_NoSides_0.insert(DayBookingInst_0.getString());
    FIX::EncodedText EncodedText_25("DATA_977555459");
    noSides_0_0.set(EncodedText_25);
    SideCrossOrdModGrp_NoSides_0.insert(EncodedText_25.getString());
    FIX::EncodedTextLen EncodedTextLen_25(421103181);
    noSides_0_0.set(EncodedTextLen_25);
    SideCrossOrdModGrp_NoSides_0.insert(EncodedTextLen_25.getString());
    FIX::ForexReq ForexReq_1(true);
    noSides_0_0.set(ForexReq_1);
    SideCrossOrdModGrp_NoSides_0.insert(ForexReq_1.getString());
    FIX::OrderCapacity OrderCapacity_1('W');
    noSides_0_0.set(OrderCapacity_1);
    SideCrossOrdModGrp_NoSides_0.insert(OrderCapacity_1.getString());
    FIX::OrderRestrictions OrderRestrictions_1("MULTIPLECHARVALUE_A");
    noSides_0_0.set(OrderRestrictions_1);
    SideCrossOrdModGrp_NoSides_0.insert(OrderRestrictions_1.getString());
    FIX::OrigClOrdID OrigClOrdID_0("STRING_1749756609");
    noSides_0_0.set(OrigClOrdID_0);
    SideCrossOrdModGrp_NoSides_0.insert(OrigClOrdID_0.getString());
    FIX::PositionEffect PositionEffect_3('N');
    noSides_0_0.set(PositionEffect_3);
    SideCrossOrdModGrp_NoSides_0.insert(PositionEffect_3.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_0(true);
    noSides_0_0.set(PreTradeAnonymity_0);
    SideCrossOrdModGrp_NoSides_0.insert(PreTradeAnonymity_0.getString());
    FIX::PreallocMethod PreallocMethod_0('1');
    noSides_0_0.set(PreallocMethod_0);
    SideCrossOrdModGrp_NoSides_0.insert(PreallocMethod_0.getString());
    FIX::QtyType QtyType_11(1);
    noSides_0_0.set(QtyType_11);
    SideCrossOrdModGrp_NoSides_0.insert(QtyType_11.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_16("STRING_1147232957");
    noSides_0_0.set(SecondaryClOrdID_16);
    SideCrossOrdModGrp_NoSides_0.insert(SecondaryClOrdID_16.getString());
    FIX::SettlCurrency SettlCurrency_5("CAN");
    noSides_0_0.set(SettlCurrency_5);
    SideCrossOrdModGrp_NoSides_0.insert(SettlCurrency_5.getString());
    FIX::Side Side_15('B');
    noSides_0_0.set(Side_15);
    SideCrossOrdModGrp_NoSides_0.insert(Side_15.getString());
    FIX::SideComplianceID SideComplianceID_0("STRING_531508029");
    noSides_0_0.set(SideComplianceID_0);
    SideCrossOrdModGrp_NoSides_0.insert(SideComplianceID_0.getString());
    FIX::SideTimeInForce SideTimeInForce_0(FIX::UTCTIMESTAMP(17, 38, 51, 19, 11, 2000));
    noSides_0_0.set(SideTimeInForce_0);
    SideCrossOrdModGrp_NoSides_0.insert(SideTimeInForce_0.getString());
    FIX::SolicitedFlag SolicitedFlag_0(false);
    noSides_0_0.set(SolicitedFlag_0);
    SideCrossOrdModGrp_NoSides_0.insert(SolicitedFlag_0.getString());
    FIX::Text Text_25("STRING_1870529605");
    noSides_0_0.set(Text_25);
    SideCrossOrdModGrp_NoSides_0.insert(Text_25.getString());
    FIX::TradeDate TradeDate_9("LOCALMKTDATE_584847597");
    noSides_0_0.set(TradeDate_9);
    SideCrossOrdModGrp_NoSides_0.insert(TradeDate_9.getString());
    FIX::TradeOriginationDate TradeOriginationDate_3("LOCALMKTDATE_426051620");
    noSides_0_0.set(TradeOriginationDate_3);
    SideCrossOrdModGrp_NoSides_0.insert(TradeOriginationDate_3.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_0);
    all_compo_names.insert("SideCrossOrdModGrp.NoSides");

    // CommissionData
    multiset<string> CommissionData_8;
    FIX::CommCurrency CommCurrency_8("EUR");
    noSides_0_0.set(CommCurrency_8);
    CommissionData_8.insert(CommCurrency_8.getString());
    FIX::CommType CommType_8('6');
    noSides_0_0.set(CommType_8);
    CommissionData_8.insert(CommType_8.getString());
    FIX::Commission Commission_8;
    Commission_8.setString("6577974");
    noSides_0_0.set(Commission_8);
    CommissionData_8.insert(Commission_8.getString());
    FIX::FundRenewWaiv FundRenewWaiv_8('Y');
    noSides_0_0.set(FundRenewWaiv_8);
    CommissionData_8.insert(FundRenewWaiv_8.getString());
    all_values.push_back(CommissionData_8);
    all_compo_names.insert("CommissionData");

    // OrderQtyData
    multiset<string> OrderQtyData_0;
    FIX::CashOrderQty CashOrderQty_0;
    CashOrderQty_0.setString("9005718");
    noSides_0_0.set(CashOrderQty_0);
    OrderQtyData_0.insert(CashOrderQty_0.getString());
    FIX::OrderPercent OrderPercent_0;
    OrderPercent_0.setString("6.090000");
    noSides_0_0.set(OrderPercent_0);
    OrderQtyData_0.insert(OrderPercent_0.getString());
    FIX::OrderQty OrderQty_10;
    OrderQty_10.setString("3467520");
    noSides_0_0.set(OrderQty_10);
    OrderQtyData_0.insert(OrderQty_10.getString());
    FIX::RoundingDirection RoundingDirection_0('1');
    noSides_0_0.set(RoundingDirection_0);
    OrderQtyData_0.insert(RoundingDirection_0.getString());
    FIX::RoundingModulus RoundingModulus_0;
    RoundingModulus_0.setString("11012500");
    noSides_0_0.set(RoundingModulus_0);
    OrderQtyData_0.insert(RoundingModulus_0.getString());
    all_values.push_back(OrderQtyData_0);
    all_compo_names.insert("OrderQtyData");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_33;
      FIX::PartyID PartyID_33("STRING_1614181642");
      noPartyIDs_0_1_0.set(PartyID_33);
      Parties_NoPartyIDs_33.insert(PartyID_33.getString());
      FIX::PartyIDSource PartyIDSource_33('9');
      noPartyIDs_0_1_0.set(PartyIDSource_33);
      Parties_NoPartyIDs_33.insert(PartyIDSource_33.getString());
      FIX::PartyRole PartyRole_33(60);
      noPartyIDs_0_1_0.set(PartyRole_33);
      Parties_NoPartyIDs_33.insert(PartyRole_33.getString());
      all_values.push_back(Parties_NoPartyIDs_33);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_74;
        FIX::PartySubID PartySubID_74("STRING_1132944918");
        noPartySubIDs_0_0_2_0.set(PartySubID_74);
        PtysSubGrp_NoPartySubIDs_74.insert(PartySubID_74.getString());
        FIX::PartySubIDType PartySubIDType_74(11);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_74);
        PtysSubGrp_NoPartySubIDs_74.insert(PartySubIDType_74.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_74);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_34;
      FIX::PartyID PartyID_34("STRING_1056561755");
      noPartyIDs_0_1_1.set(PartyID_34);
      Parties_NoPartyIDs_34.insert(PartyID_34.getString());
      FIX::PartyIDSource PartyIDSource_34('E');
      noPartyIDs_0_1_1.set(PartyIDSource_34);
      Parties_NoPartyIDs_34.insert(PartyIDSource_34.getString());
      FIX::PartyRole PartyRole_34(49);
      noPartyIDs_0_1_1.set(PartyRole_34);
      Parties_NoPartyIDs_34.insert(PartyRole_34.getString());
      all_values.push_back(Parties_NoPartyIDs_34);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_75;
        FIX::PartySubID PartySubID_75("STRING_569929865");
        noPartySubIDs_0_1_2_0.set(PartySubID_75);
        PtysSubGrp_NoPartySubIDs_75.insert(PartySubID_75.getString());
        FIX::PartySubIDType PartySubIDType_75(26);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_75);
        PtysSubGrp_NoPartySubIDs_75.insert(PartySubIDType_75.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_75);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_76;
        FIX::PartySubID PartySubID_76("STRING_214632659");
        noPartySubIDs_0_1_2_1.set(PartySubID_76);
        PtysSubGrp_NoPartySubIDs_76.insert(PartySubID_76.getString());
        FIX::PartySubIDType PartySubIDType_76(6);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_76);
        PtysSubGrp_NoPartySubIDs_76.insert(PartySubIDType_76.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_76);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_0;
      FIX::AllocAccount AllocAccount_9("STRING_477494003");
      noAllocs_0_1_0.set(AllocAccount_9);
      PreAllocGrp_NoAllocs_0.insert(AllocAccount_9.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_9(149047334);
      noAllocs_0_1_0.set(AllocAcctIDSource_9);
      PreAllocGrp_NoAllocs_0.insert(AllocAcctIDSource_9.getString());
      FIX::AllocQty AllocQty_8;
      AllocQty_8.setString("13514839");
      noAllocs_0_1_0.set(AllocQty_8);
      PreAllocGrp_NoAllocs_0.insert(AllocQty_8.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_4("JPY");
      noAllocs_0_1_0.set(AllocSettlCurrency_4);
      PreAllocGrp_NoAllocs_0.insert(AllocSettlCurrency_4.getString());
      FIX::IndividualAllocID IndividualAllocID_9("STRING_1531785766");
      noAllocs_0_1_0.set(IndividualAllocID_9);
      PreAllocGrp_NoAllocs_0.insert(IndividualAllocID_9.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_0);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_28;
        FIX::NestedPartyID NestedPartyID_28("STRING_498115315");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_28);
        NestedParties_NoNestedPartyIDs_28.insert(NestedPartyID_28.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_28('4');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_28);
        NestedParties_NoNestedPartyIDs_28.insert(NestedPartyIDSource_28.getString());
        FIX::NestedPartyRole NestedPartyRole_28(718256310);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_28);
        NestedParties_NoNestedPartyIDs_28.insert(NestedPartyRole_28.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_28);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_57;
          FIX::NestedPartySubID NestedPartySubID_57("STRING_1121000154");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_57);
          NstdPtysSubGrp_NoNestedPartySubIDs_57.insert(NestedPartySubID_57.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_57(1065008367);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_57);
          NstdPtysSubGrp_NoNestedPartySubIDs_57.insert(NestedPartySubIDType_57.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_57);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_29;
        FIX::NestedPartyID NestedPartyID_29("STRING_1316567211");
        noNestedPartyIDs_0_0_2_1.set(NestedPartyID_29);
        NestedParties_NoNestedPartyIDs_29.insert(NestedPartyID_29.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_29('7');
        noNestedPartyIDs_0_0_2_1.set(NestedPartyIDSource_29);
        NestedParties_NoNestedPartyIDs_29.insert(NestedPartyIDSource_29.getString());
        FIX::NestedPartyRole NestedPartyRole_29(1014033386);
        noNestedPartyIDs_0_0_2_1.set(NestedPartyRole_29);
        NestedParties_NoNestedPartyIDs_29.insert(NestedPartyRole_29.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_29);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_58;
          FIX::NestedPartySubID NestedPartySubID_58("STRING_60478500");
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubID_58);
          NstdPtysSubGrp_NoNestedPartySubIDs_58.insert(NestedPartySubID_58.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_58(498046013);
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubIDType_58);
          NstdPtysSubGrp_NoNestedPartySubIDs_58.insert(NestedPartySubIDType_58.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_58);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_59;
          FIX::NestedPartySubID NestedPartySubID_59("STRING_1803622967");
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubID_59);
          NstdPtysSubGrp_NoNestedPartySubIDs_59.insert(NestedPartySubID_59.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_59(1193423418);
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubIDType_59);
          NstdPtysSubGrp_NoNestedPartySubIDs_59.insert(NestedPartySubIDType_59.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_59);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_60;
          FIX::NestedPartySubID NestedPartySubID_60("STRING_185845231");
          noNestedPartySubIDs_0_0_1_3_2.set(NestedPartySubID_60);
          NstdPtysSubGrp_NoNestedPartySubIDs_60.insert(NestedPartySubID_60.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_60(712701074);
          noNestedPartySubIDs_0_0_1_3_2.set(NestedPartySubIDType_60);
          NstdPtysSubGrp_NoNestedPartySubIDs_60.insert(NestedPartySubIDType_60.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_60);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_2);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_30;
        FIX::NestedPartyID NestedPartyID_30("STRING_1951786778");
        noNestedPartyIDs_0_0_2_2.set(NestedPartyID_30);
        NestedParties_NoNestedPartyIDs_30.insert(NestedPartyID_30.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_30('4');
        noNestedPartyIDs_0_0_2_2.set(NestedPartyIDSource_30);
        NestedParties_NoNestedPartyIDs_30.insert(NestedPartyIDSource_30.getString());
        FIX::NestedPartyRole NestedPartyRole_30(1736683531);
        noNestedPartyIDs_0_0_2_2.set(NestedPartyRole_30);
        NestedParties_NoNestedPartyIDs_30.insert(NestedPartyRole_30.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_30);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_61;
          FIX::NestedPartySubID NestedPartySubID_61("STRING_1422073243");
          noNestedPartySubIDs_0_0_2_3_0.set(NestedPartySubID_61);
          NstdPtysSubGrp_NoNestedPartySubIDs_61.insert(NestedPartySubID_61.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_61(1951316190);
          noNestedPartySubIDs_0_0_2_3_0.set(NestedPartySubIDType_61);
          NstdPtysSubGrp_NoNestedPartySubIDs_61.insert(NestedPartySubIDType_61.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_61);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_2.addGroup(noNestedPartySubIDs_0_0_2_3_0);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_0_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_1;
      FIX::AllocAccount AllocAccount_10("STRING_998902376");
      noAllocs_0_1_1.set(AllocAccount_10);
      PreAllocGrp_NoAllocs_1.insert(AllocAccount_10.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_10(903027575);
      noAllocs_0_1_1.set(AllocAcctIDSource_10);
      PreAllocGrp_NoAllocs_1.insert(AllocAcctIDSource_10.getString());
      FIX::AllocQty AllocQty_9;
      AllocQty_9.setString("2813265");
      noAllocs_0_1_1.set(AllocQty_9);
      PreAllocGrp_NoAllocs_1.insert(AllocQty_9.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_5("EUR");
      noAllocs_0_1_1.set(AllocSettlCurrency_5);
      PreAllocGrp_NoAllocs_1.insert(AllocSettlCurrency_5.getString());
      FIX::IndividualAllocID IndividualAllocID_10("STRING_1343668147");
      noAllocs_0_1_1.set(IndividualAllocID_10);
      PreAllocGrp_NoAllocs_1.insert(IndividualAllocID_10.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_1);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_31;
        FIX::NestedPartyID NestedPartyID_31("STRING_1638813629");
        noNestedPartyIDs_0_1_2_0.set(NestedPartyID_31);
        NestedParties_NoNestedPartyIDs_31.insert(NestedPartyID_31.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_31('1');
        noNestedPartyIDs_0_1_2_0.set(NestedPartyIDSource_31);
        NestedParties_NoNestedPartyIDs_31.insert(NestedPartyIDSource_31.getString());
        FIX::NestedPartyRole NestedPartyRole_31(73680331);
        noNestedPartyIDs_0_1_2_0.set(NestedPartyRole_31);
        NestedParties_NoNestedPartyIDs_31.insert(NestedPartyRole_31.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_31);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_62;
          FIX::NestedPartySubID NestedPartySubID_62("STRING_306633769");
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubID_62);
          NstdPtysSubGrp_NoNestedPartySubIDs_62.insert(NestedPartySubID_62.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_62(1472367467);
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubIDType_62);
          NstdPtysSubGrp_NoNestedPartySubIDs_62.insert(NestedPartySubIDType_62.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_62);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_63;
          FIX::NestedPartySubID NestedPartySubID_63("STRING_654429681");
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubID_63);
          NstdPtysSubGrp_NoNestedPartySubIDs_63.insert(NestedPartySubID_63.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_63(1371642137);
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubIDType_63);
          NstdPtysSubGrp_NoNestedPartySubIDs_63.insert(NestedPartySubIDType_63.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_63);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_64;
          FIX::NestedPartySubID NestedPartySubID_64("STRING_641451030");
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubID_64);
          NstdPtysSubGrp_NoNestedPartySubIDs_64.insert(NestedPartySubID_64.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_64(729196221);
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubIDType_64);
          NstdPtysSubGrp_NoNestedPartySubIDs_64.insert(NestedPartySubIDType_64.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_64);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_2);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_32;
        FIX::NestedPartyID NestedPartyID_32("STRING_238191875");
        noNestedPartyIDs_0_1_2_1.set(NestedPartyID_32);
        NestedParties_NoNestedPartyIDs_32.insert(NestedPartyID_32.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_32('1');
        noNestedPartyIDs_0_1_2_1.set(NestedPartyIDSource_32);
        NestedParties_NoNestedPartyIDs_32.insert(NestedPartyIDSource_32.getString());
        FIX::NestedPartyRole NestedPartyRole_32(789674721);
        noNestedPartyIDs_0_1_2_1.set(NestedPartyRole_32);
        NestedParties_NoNestedPartyIDs_32.insert(NestedPartyRole_32.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_32);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_65;
          FIX::NestedPartySubID NestedPartySubID_65("STRING_1080855554");
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubID_65);
          NstdPtysSubGrp_NoNestedPartySubIDs_65.insert(NestedPartySubID_65.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_65(1983098140);
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubIDType_65);
          NstdPtysSubGrp_NoNestedPartySubIDs_65.insert(NestedPartySubIDType_65.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_65);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_66;
          FIX::NestedPartySubID NestedPartySubID_66("STRING_922083119");
          noNestedPartySubIDs_0_1_1_3_1.set(NestedPartySubID_66);
          NstdPtysSubGrp_NoNestedPartySubIDs_66.insert(NestedPartySubID_66.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_66(1793556628);
          noNestedPartySubIDs_0_1_1_3_1.set(NestedPartySubIDType_66);
          NstdPtysSubGrp_NoNestedPartySubIDs_66.insert(NestedPartySubIDType_66.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_66);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_1);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_33;
        FIX::NestedPartyID NestedPartyID_33("STRING_1787401270");
        noNestedPartyIDs_0_1_2_2.set(NestedPartyID_33);
        NestedParties_NoNestedPartyIDs_33.insert(NestedPartyID_33.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_33('1');
        noNestedPartyIDs_0_1_2_2.set(NestedPartyIDSource_33);
        NestedParties_NoNestedPartyIDs_33.insert(NestedPartyIDSource_33.getString());
        FIX::NestedPartyRole NestedPartyRole_33(1382756511);
        noNestedPartyIDs_0_1_2_2.set(NestedPartyRole_33);
        NestedParties_NoNestedPartyIDs_33.insert(NestedPartyRole_33.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_33);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_67;
          FIX::NestedPartySubID NestedPartySubID_67("STRING_601825193");
          noNestedPartySubIDs_0_1_2_3_0.set(NestedPartySubID_67);
          NstdPtysSubGrp_NoNestedPartySubIDs_67.insert(NestedPartySubID_67.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_67(1186589054);
          noNestedPartySubIDs_0_1_2_3_0.set(NestedPartySubIDType_67);
          NstdPtysSubGrp_NoNestedPartySubIDs_67.insert(NestedPartySubIDType_67.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_67);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_2.addGroup(noNestedPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_68;
          FIX::NestedPartySubID NestedPartySubID_68("STRING_1013052995");
          noNestedPartySubIDs_0_1_2_3_1.set(NestedPartySubID_68);
          NstdPtysSubGrp_NoNestedPartySubIDs_68.insert(NestedPartySubID_68.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_68(1504852768);
          noNestedPartySubIDs_0_1_2_3_1.set(NestedPartySubIDType_68);
          NstdPtysSubGrp_NoNestedPartySubIDs_68.insert(NestedPartySubIDType_68.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_68);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_2.addGroup(noNestedPartySubIDs_0_1_2_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_69;
          FIX::NestedPartySubID NestedPartySubID_69("STRING_1467915600");
          noNestedPartySubIDs_0_1_2_3_2.set(NestedPartySubID_69);
          NstdPtysSubGrp_NoNestedPartySubIDs_69.insert(NestedPartySubID_69.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_69(13519057);
          noNestedPartySubIDs_0_1_2_3_2.set(NestedPartySubIDType_69);
          NstdPtysSubGrp_NoNestedPartySubIDs_69.insert(NestedPartySubIDType_69.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_69);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_2.addGroup(noNestedPartySubIDs_0_1_2_3_2);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_2);
      }
      noSides_0_0.addGroup(noAllocs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_0_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_2;
      FIX::AllocAccount AllocAccount_11("STRING_1611880631");
      noAllocs_0_1_2.set(AllocAccount_11);
      PreAllocGrp_NoAllocs_2.insert(AllocAccount_11.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_11(664100099);
      noAllocs_0_1_2.set(AllocAcctIDSource_11);
      PreAllocGrp_NoAllocs_2.insert(AllocAcctIDSource_11.getString());
      FIX::AllocQty AllocQty_10;
      AllocQty_10.setString("17365677");
      noAllocs_0_1_2.set(AllocQty_10);
      PreAllocGrp_NoAllocs_2.insert(AllocQty_10.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_6("USD");
      noAllocs_0_1_2.set(AllocSettlCurrency_6);
      PreAllocGrp_NoAllocs_2.insert(AllocSettlCurrency_6.getString());
      FIX::IndividualAllocID IndividualAllocID_11("STRING_1810248053");
      noAllocs_0_1_2.set(IndividualAllocID_11);
      PreAllocGrp_NoAllocs_2.insert(IndividualAllocID_11.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_2);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_34;
        FIX::NestedPartyID NestedPartyID_34("STRING_559111328");
        noNestedPartyIDs_0_2_2_0.set(NestedPartyID_34);
        NestedParties_NoNestedPartyIDs_34.insert(NestedPartyID_34.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_34('1');
        noNestedPartyIDs_0_2_2_0.set(NestedPartyIDSource_34);
        NestedParties_NoNestedPartyIDs_34.insert(NestedPartyIDSource_34.getString());
        FIX::NestedPartyRole NestedPartyRole_34(1291069821);
        noNestedPartyIDs_0_2_2_0.set(NestedPartyRole_34);
        NestedParties_NoNestedPartyIDs_34.insert(NestedPartyRole_34.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_34);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_70;
          FIX::NestedPartySubID NestedPartySubID_70("STRING_1776582902");
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubID_70);
          NstdPtysSubGrp_NoNestedPartySubIDs_70.insert(NestedPartySubID_70.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_70(2020266042);
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubIDType_70);
          NstdPtysSubGrp_NoNestedPartySubIDs_70.insert(NestedPartySubIDType_70.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_70);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_71;
          FIX::NestedPartySubID NestedPartySubID_71("STRING_21461692");
          noNestedPartySubIDs_0_2_0_3_1.set(NestedPartySubID_71);
          NstdPtysSubGrp_NoNestedPartySubIDs_71.insert(NestedPartySubID_71.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_71(1053815489);
          noNestedPartySubIDs_0_2_0_3_1.set(NestedPartySubIDType_71);
          NstdPtysSubGrp_NoNestedPartySubIDs_71.insert(NestedPartySubIDType_71.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_71);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_1);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_0);
      }
      noSides_0_0.addGroup(noAllocs_0_1_2);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSides noSides_0_1;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_1;
    FIX::Account Account_11("STRING_662457116");
    noSides_0_1.set(Account_11);
    SideCrossOrdModGrp_NoSides_1.insert(Account_11.getString());
    FIX::AccountType AccountType_8(3);
    noSides_0_1.set(AccountType_8);
    SideCrossOrdModGrp_NoSides_1.insert(AccountType_8.getString());
    FIX::AcctIDSource AcctIDSource_4(2);
    noSides_0_1.set(AcctIDSource_4);
    SideCrossOrdModGrp_NoSides_1.insert(AcctIDSource_4.getString());
    FIX::AllocID AllocID_8("STRING_498071608");
    noSides_0_1.set(AllocID_8);
    SideCrossOrdModGrp_NoSides_1.insert(AllocID_8.getString());
    FIX::BookingType BookingType_4(2);
    noSides_0_1.set(BookingType_4);
    SideCrossOrdModGrp_NoSides_1.insert(BookingType_4.getString());
    FIX::BookingUnit BookingUnit_1('1');
    noSides_0_1.set(BookingUnit_1);
    SideCrossOrdModGrp_NoSides_1.insert(BookingUnit_1.getString());
    FIX::CashMargin CashMargin_1('1');
    noSides_0_1.set(CashMargin_1);
    SideCrossOrdModGrp_NoSides_1.insert(CashMargin_1.getString());
    FIX::ClOrdID ClOrdID_17("STRING_859534650");
    noSides_0_1.set(ClOrdID_17);
    SideCrossOrdModGrp_NoSides_1.insert(ClOrdID_17.getString());
    FIX::ClOrdLinkID ClOrdLinkID_1("STRING_1016016887");
    noSides_0_1.set(ClOrdLinkID_1);
    SideCrossOrdModGrp_NoSides_1.insert(ClOrdLinkID_1.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_5("STRING_2");
    noSides_0_1.set(ClearingFeeIndicator_5);
    SideCrossOrdModGrp_NoSides_1.insert(ClearingFeeIndicator_5.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_1(1);
    noSides_0_1.set(CoveredOrUncovered_1);
    SideCrossOrdModGrp_NoSides_1.insert(CoveredOrUncovered_1.getString());
    FIX::CustOrderCapacity CustOrderCapacity_4(2);
    noSides_0_1.set(CustOrderCapacity_4);
    SideCrossOrdModGrp_NoSides_1.insert(CustOrderCapacity_4.getString());
    FIX::DayBookingInst DayBookingInst_1('2');
    noSides_0_1.set(DayBookingInst_1);
    SideCrossOrdModGrp_NoSides_1.insert(DayBookingInst_1.getString());
    FIX::EncodedText EncodedText_26("DATA_818728963");
    noSides_0_1.set(EncodedText_26);
    SideCrossOrdModGrp_NoSides_1.insert(EncodedText_26.getString());
    FIX::EncodedTextLen EncodedTextLen_26(1523037893);
    noSides_0_1.set(EncodedTextLen_26);
    SideCrossOrdModGrp_NoSides_1.insert(EncodedTextLen_26.getString());
    FIX::ForexReq ForexReq_2(false);
    noSides_0_1.set(ForexReq_2);
    SideCrossOrdModGrp_NoSides_1.insert(ForexReq_2.getString());
    FIX::OrderCapacity OrderCapacity_2('R');
    noSides_0_1.set(OrderCapacity_2);
    SideCrossOrdModGrp_NoSides_1.insert(OrderCapacity_2.getString());
    FIX::OrderRestrictions OrderRestrictions_2("MULTIPLECHARVALUE_F");
    noSides_0_1.set(OrderRestrictions_2);
    SideCrossOrdModGrp_NoSides_1.insert(OrderRestrictions_2.getString());
    FIX::OrigClOrdID OrigClOrdID_1("STRING_767795975");
    noSides_0_1.set(OrigClOrdID_1);
    SideCrossOrdModGrp_NoSides_1.insert(OrigClOrdID_1.getString());
    FIX::PositionEffect PositionEffect_4('F');
    noSides_0_1.set(PositionEffect_4);
    SideCrossOrdModGrp_NoSides_1.insert(PositionEffect_4.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_1(false);
    noSides_0_1.set(PreTradeAnonymity_1);
    SideCrossOrdModGrp_NoSides_1.insert(PreTradeAnonymity_1.getString());
    FIX::PreallocMethod PreallocMethod_1('1');
    noSides_0_1.set(PreallocMethod_1);
    SideCrossOrdModGrp_NoSides_1.insert(PreallocMethod_1.getString());
    FIX::QtyType QtyType_12(1);
    noSides_0_1.set(QtyType_12);
    SideCrossOrdModGrp_NoSides_1.insert(QtyType_12.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_17("STRING_851243231");
    noSides_0_1.set(SecondaryClOrdID_17);
    SideCrossOrdModGrp_NoSides_1.insert(SecondaryClOrdID_17.getString());
    FIX::SettlCurrency SettlCurrency_6("CHF");
    noSides_0_1.set(SettlCurrency_6);
    SideCrossOrdModGrp_NoSides_1.insert(SettlCurrency_6.getString());
    FIX::Side Side_16('9');
    noSides_0_1.set(Side_16);
    SideCrossOrdModGrp_NoSides_1.insert(Side_16.getString());
    FIX::SideComplianceID SideComplianceID_1("STRING_1194791508");
    noSides_0_1.set(SideComplianceID_1);
    SideCrossOrdModGrp_NoSides_1.insert(SideComplianceID_1.getString());
    FIX::SideTimeInForce SideTimeInForce_1(FIX::UTCTIMESTAMP(20, 9, 3, 17, 10, 2011));
    noSides_0_1.set(SideTimeInForce_1);
    SideCrossOrdModGrp_NoSides_1.insert(SideTimeInForce_1.getString());
    FIX::SolicitedFlag SolicitedFlag_1(true);
    noSides_0_1.set(SolicitedFlag_1);
    SideCrossOrdModGrp_NoSides_1.insert(SolicitedFlag_1.getString());
    FIX::Text Text_26("STRING_1869054769");
    noSides_0_1.set(Text_26);
    SideCrossOrdModGrp_NoSides_1.insert(Text_26.getString());
    FIX::TradeDate TradeDate_10("LOCALMKTDATE_190379574");
    noSides_0_1.set(TradeDate_10);
    SideCrossOrdModGrp_NoSides_1.insert(TradeDate_10.getString());
    FIX::TradeOriginationDate TradeOriginationDate_4("LOCALMKTDATE_1805508024");
    noSides_0_1.set(TradeOriginationDate_4);
    SideCrossOrdModGrp_NoSides_1.insert(TradeOriginationDate_4.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_1);
    all_compo_names.insert("SideCrossOrdModGrp.NoSides");

    // CommissionData
    multiset<string> CommissionData_9;
    FIX::CommCurrency CommCurrency_9("CHF");
    noSides_0_1.set(CommCurrency_9);
    CommissionData_9.insert(CommCurrency_9.getString());
    FIX::CommType CommType_9('4');
    noSides_0_1.set(CommType_9);
    CommissionData_9.insert(CommType_9.getString());
    FIX::Commission Commission_9;
    Commission_9.setString("7927103");
    noSides_0_1.set(Commission_9);
    CommissionData_9.insert(Commission_9.getString());
    FIX::FundRenewWaiv FundRenewWaiv_9('Y');
    noSides_0_1.set(FundRenewWaiv_9);
    CommissionData_9.insert(FundRenewWaiv_9.getString());
    all_values.push_back(CommissionData_9);
    all_compo_names.insert("CommissionData");

    // OrderQtyData
    multiset<string> OrderQtyData_1;
    FIX::CashOrderQty CashOrderQty_1;
    CashOrderQty_1.setString("19381131");
    noSides_0_1.set(CashOrderQty_1);
    OrderQtyData_1.insert(CashOrderQty_1.getString());
    FIX::OrderPercent OrderPercent_1;
    OrderPercent_1.setString("45.470000");
    noSides_0_1.set(OrderPercent_1);
    OrderQtyData_1.insert(OrderPercent_1.getString());
    FIX::OrderQty OrderQty_11;
    OrderQty_11.setString("5389405");
    noSides_0_1.set(OrderQty_11);
    OrderQtyData_1.insert(OrderQty_11.getString());
    FIX::RoundingDirection RoundingDirection_1('0');
    noSides_0_1.set(RoundingDirection_1);
    OrderQtyData_1.insert(RoundingDirection_1.getString());
    FIX::RoundingModulus RoundingModulus_1;
    RoundingModulus_1.setString("2079188");
    noSides_0_1.set(RoundingModulus_1);
    OrderQtyData_1.insert(RoundingModulus_1.getString());
    all_values.push_back(OrderQtyData_1);
    all_compo_names.insert("OrderQtyData");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_35;
      FIX::PartyID PartyID_35("STRING_1460092040");
      noPartyIDs_1_1_0.set(PartyID_35);
      Parties_NoPartyIDs_35.insert(PartyID_35.getString());
      FIX::PartyIDSource PartyIDSource_35('D');
      noPartyIDs_1_1_0.set(PartyIDSource_35);
      Parties_NoPartyIDs_35.insert(PartyIDSource_35.getString());
      FIX::PartyRole PartyRole_35(59);
      noPartyIDs_1_1_0.set(PartyRole_35);
      Parties_NoPartyIDs_35.insert(PartyRole_35.getString());
      all_values.push_back(Parties_NoPartyIDs_35);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_77;
        FIX::PartySubID PartySubID_77("STRING_1351294026");
        noPartySubIDs_1_0_2_0.set(PartySubID_77);
        PtysSubGrp_NoPartySubIDs_77.insert(PartySubID_77.getString());
        FIX::PartySubIDType PartySubIDType_77(22);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_77);
        PtysSubGrp_NoPartySubIDs_77.insert(PartySubIDType_77.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_77);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_78;
        FIX::PartySubID PartySubID_78("STRING_354664316");
        noPartySubIDs_1_0_2_1.set(PartySubID_78);
        PtysSubGrp_NoPartySubIDs_78.insert(PartySubID_78.getString());
        FIX::PartySubIDType PartySubIDType_78(32);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_78);
        PtysSubGrp_NoPartySubIDs_78.insert(PartySubIDType_78.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_78);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_1_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_3;
      FIX::AllocAccount AllocAccount_12("STRING_1394009584");
      noAllocs_1_1_0.set(AllocAccount_12);
      PreAllocGrp_NoAllocs_3.insert(AllocAccount_12.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_12(494298166);
      noAllocs_1_1_0.set(AllocAcctIDSource_12);
      PreAllocGrp_NoAllocs_3.insert(AllocAcctIDSource_12.getString());
      FIX::AllocQty AllocQty_11;
      AllocQty_11.setString("3039366");
      noAllocs_1_1_0.set(AllocQty_11);
      PreAllocGrp_NoAllocs_3.insert(AllocQty_11.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_7("JPY");
      noAllocs_1_1_0.set(AllocSettlCurrency_7);
      PreAllocGrp_NoAllocs_3.insert(AllocSettlCurrency_7.getString());
      FIX::IndividualAllocID IndividualAllocID_12("STRING_392247437");
      noAllocs_1_1_0.set(IndividualAllocID_12);
      PreAllocGrp_NoAllocs_3.insert(IndividualAllocID_12.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_3);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_35;
        FIX::NestedPartyID NestedPartyID_35("STRING_706462214");
        noNestedPartyIDs_1_0_2_0.set(NestedPartyID_35);
        NestedParties_NoNestedPartyIDs_35.insert(NestedPartyID_35.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_35('1');
        noNestedPartyIDs_1_0_2_0.set(NestedPartyIDSource_35);
        NestedParties_NoNestedPartyIDs_35.insert(NestedPartyIDSource_35.getString());
        FIX::NestedPartyRole NestedPartyRole_35(1191098237);
        noNestedPartyIDs_1_0_2_0.set(NestedPartyRole_35);
        NestedParties_NoNestedPartyIDs_35.insert(NestedPartyRole_35.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_35);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_72;
          FIX::NestedPartySubID NestedPartySubID_72("STRING_851406566");
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubID_72);
          NstdPtysSubGrp_NoNestedPartySubIDs_72.insert(NestedPartySubID_72.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_72(1533617660);
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubIDType_72);
          NstdPtysSubGrp_NoNestedPartySubIDs_72.insert(NestedPartySubIDType_72.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_72);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_36;
        FIX::NestedPartyID NestedPartyID_36("STRING_1483870809");
        noNestedPartyIDs_1_0_2_1.set(NestedPartyID_36);
        NestedParties_NoNestedPartyIDs_36.insert(NestedPartyID_36.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_36('1');
        noNestedPartyIDs_1_0_2_1.set(NestedPartyIDSource_36);
        NestedParties_NoNestedPartyIDs_36.insert(NestedPartyIDSource_36.getString());
        FIX::NestedPartyRole NestedPartyRole_36(893846279);
        noNestedPartyIDs_1_0_2_1.set(NestedPartyRole_36);
        NestedParties_NoNestedPartyIDs_36.insert(NestedPartyRole_36.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_36);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_73;
          FIX::NestedPartySubID NestedPartySubID_73("STRING_1812381416");
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubID_73);
          NstdPtysSubGrp_NoNestedPartySubIDs_73.insert(NestedPartySubID_73.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_73(1432786799);
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubIDType_73);
          NstdPtysSubGrp_NoNestedPartySubIDs_73.insert(NestedPartySubIDType_73.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_73);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_74;
          FIX::NestedPartySubID NestedPartySubID_74("STRING_1348255823");
          noNestedPartySubIDs_1_0_1_3_1.set(NestedPartySubID_74);
          NstdPtysSubGrp_NoNestedPartySubIDs_74.insert(NestedPartySubID_74.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_74(2020300308);
          noNestedPartySubIDs_1_0_1_3_1.set(NestedPartySubIDType_74);
          NstdPtysSubGrp_NoNestedPartySubIDs_74.insert(NestedPartySubIDType_74.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_74);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_75;
          FIX::NestedPartySubID NestedPartySubID_75("STRING_592039647");
          noNestedPartySubIDs_1_0_1_3_2.set(NestedPartySubID_75);
          NstdPtysSubGrp_NoNestedPartySubIDs_75.insert(NestedPartySubID_75.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_75(660864215);
          noNestedPartySubIDs_1_0_1_3_2.set(NestedPartySubIDType_75);
          NstdPtysSubGrp_NoNestedPartySubIDs_75.insert(NestedPartySubIDType_75.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_75);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_2);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_37;
        FIX::NestedPartyID NestedPartyID_37("STRING_372867455");
        noNestedPartyIDs_1_0_2_2.set(NestedPartyID_37);
        NestedParties_NoNestedPartyIDs_37.insert(NestedPartyID_37.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_37('1');
        noNestedPartyIDs_1_0_2_2.set(NestedPartyIDSource_37);
        NestedParties_NoNestedPartyIDs_37.insert(NestedPartyIDSource_37.getString());
        FIX::NestedPartyRole NestedPartyRole_37(1996449307);
        noNestedPartyIDs_1_0_2_2.set(NestedPartyRole_37);
        NestedParties_NoNestedPartyIDs_37.insert(NestedPartyRole_37.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_37);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_76;
          FIX::NestedPartySubID NestedPartySubID_76("STRING_1337358359");
          noNestedPartySubIDs_1_0_2_3_0.set(NestedPartySubID_76);
          NstdPtysSubGrp_NoNestedPartySubIDs_76.insert(NestedPartySubID_76.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_76(203629975);
          noNestedPartySubIDs_1_0_2_3_0.set(NestedPartySubIDType_76);
          NstdPtysSubGrp_NoNestedPartySubIDs_76.insert(NestedPartySubIDType_76.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_76);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_77;
          FIX::NestedPartySubID NestedPartySubID_77("STRING_1562484907");
          noNestedPartySubIDs_1_0_2_3_1.set(NestedPartySubID_77);
          NstdPtysSubGrp_NoNestedPartySubIDs_77.insert(NestedPartySubID_77.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_77(1540171701);
          noNestedPartySubIDs_1_0_2_3_1.set(NestedPartySubIDType_77);
          NstdPtysSubGrp_NoNestedPartySubIDs_77.insert(NestedPartySubIDType_77.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_77);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_78;
          FIX::NestedPartySubID NestedPartySubID_78("STRING_1597639559");
          noNestedPartySubIDs_1_0_2_3_2.set(NestedPartySubID_78);
          NstdPtysSubGrp_NoNestedPartySubIDs_78.insert(NestedPartySubID_78.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_78(2056783073);
          noNestedPartySubIDs_1_0_2_3_2.set(NestedPartySubIDType_78);
          NstdPtysSubGrp_NoNestedPartySubIDs_78.insert(NestedPartySubIDType_78.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_78);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_2);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noAllocs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_1_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_4;
      FIX::AllocAccount AllocAccount_13("STRING_1844108393");
      noAllocs_1_1_1.set(AllocAccount_13);
      PreAllocGrp_NoAllocs_4.insert(AllocAccount_13.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_13(398484231);
      noAllocs_1_1_1.set(AllocAcctIDSource_13);
      PreAllocGrp_NoAllocs_4.insert(AllocAcctIDSource_13.getString());
      FIX::AllocQty AllocQty_12;
      AllocQty_12.setString("18172719");
      noAllocs_1_1_1.set(AllocQty_12);
      PreAllocGrp_NoAllocs_4.insert(AllocQty_12.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_8("GBP");
      noAllocs_1_1_1.set(AllocSettlCurrency_8);
      PreAllocGrp_NoAllocs_4.insert(AllocSettlCurrency_8.getString());
      FIX::IndividualAllocID IndividualAllocID_13("STRING_376250479");
      noAllocs_1_1_1.set(IndividualAllocID_13);
      PreAllocGrp_NoAllocs_4.insert(IndividualAllocID_13.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_4);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_38;
        FIX::NestedPartyID NestedPartyID_38("STRING_442817483");
        noNestedPartyIDs_1_1_2_0.set(NestedPartyID_38);
        NestedParties_NoNestedPartyIDs_38.insert(NestedPartyID_38.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_38('7');
        noNestedPartyIDs_1_1_2_0.set(NestedPartyIDSource_38);
        NestedParties_NoNestedPartyIDs_38.insert(NestedPartyIDSource_38.getString());
        FIX::NestedPartyRole NestedPartyRole_38(1054097307);
        noNestedPartyIDs_1_1_2_0.set(NestedPartyRole_38);
        NestedParties_NoNestedPartyIDs_38.insert(NestedPartyRole_38.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_38);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_79;
          FIX::NestedPartySubID NestedPartySubID_79("STRING_77124230");
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubID_79);
          NstdPtysSubGrp_NoNestedPartySubIDs_79.insert(NestedPartySubID_79.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_79(550730527);
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubIDType_79);
          NstdPtysSubGrp_NoNestedPartySubIDs_79.insert(NestedPartySubIDType_79.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_79);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_80;
          FIX::NestedPartySubID NestedPartySubID_80("STRING_722797774");
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubID_80);
          NstdPtysSubGrp_NoNestedPartySubIDs_80.insert(NestedPartySubID_80.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_80(1351624573);
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubIDType_80);
          NstdPtysSubGrp_NoNestedPartySubIDs_80.insert(NestedPartySubIDType_80.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_80);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_1);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_0);
      }
      noSides_0_1.addGroup(noAllocs_1_1_1);
    }
    msg.addGroup(noSides_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSides noSides_0_2;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_2;
    FIX::Account Account_12("STRING_215628295");
    noSides_0_2.set(Account_12);
    SideCrossOrdModGrp_NoSides_2.insert(Account_12.getString());
    FIX::AccountType AccountType_9(1);
    noSides_0_2.set(AccountType_9);
    SideCrossOrdModGrp_NoSides_2.insert(AccountType_9.getString());
    FIX::AcctIDSource AcctIDSource_5(99);
    noSides_0_2.set(AcctIDSource_5);
    SideCrossOrdModGrp_NoSides_2.insert(AcctIDSource_5.getString());
    FIX::AllocID AllocID_9("STRING_88444955");
    noSides_0_2.set(AllocID_9);
    SideCrossOrdModGrp_NoSides_2.insert(AllocID_9.getString());
    FIX::BookingType BookingType_5(2);
    noSides_0_2.set(BookingType_5);
    SideCrossOrdModGrp_NoSides_2.insert(BookingType_5.getString());
    FIX::BookingUnit BookingUnit_2('1');
    noSides_0_2.set(BookingUnit_2);
    SideCrossOrdModGrp_NoSides_2.insert(BookingUnit_2.getString());
    FIX::CashMargin CashMargin_2('2');
    noSides_0_2.set(CashMargin_2);
    SideCrossOrdModGrp_NoSides_2.insert(CashMargin_2.getString());
    FIX::ClOrdID ClOrdID_18("STRING_781993449");
    noSides_0_2.set(ClOrdID_18);
    SideCrossOrdModGrp_NoSides_2.insert(ClOrdID_18.getString());
    FIX::ClOrdLinkID ClOrdLinkID_2("STRING_1062226623");
    noSides_0_2.set(ClOrdLinkID_2);
    SideCrossOrdModGrp_NoSides_2.insert(ClOrdLinkID_2.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_6("STRING_I");
    noSides_0_2.set(ClearingFeeIndicator_6);
    SideCrossOrdModGrp_NoSides_2.insert(ClearingFeeIndicator_6.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_2(0);
    noSides_0_2.set(CoveredOrUncovered_2);
    SideCrossOrdModGrp_NoSides_2.insert(CoveredOrUncovered_2.getString());
    FIX::CustOrderCapacity CustOrderCapacity_5(4);
    noSides_0_2.set(CustOrderCapacity_5);
    SideCrossOrdModGrp_NoSides_2.insert(CustOrderCapacity_5.getString());
    FIX::DayBookingInst DayBookingInst_2('2');
    noSides_0_2.set(DayBookingInst_2);
    SideCrossOrdModGrp_NoSides_2.insert(DayBookingInst_2.getString());
    FIX::EncodedText EncodedText_27("DATA_1512039862");
    noSides_0_2.set(EncodedText_27);
    SideCrossOrdModGrp_NoSides_2.insert(EncodedText_27.getString());
    FIX::EncodedTextLen EncodedTextLen_27(716012510);
    noSides_0_2.set(EncodedTextLen_27);
    SideCrossOrdModGrp_NoSides_2.insert(EncodedTextLen_27.getString());
    FIX::ForexReq ForexReq_3(true);
    noSides_0_2.set(ForexReq_3);
    SideCrossOrdModGrp_NoSides_2.insert(ForexReq_3.getString());
    FIX::OrderCapacity OrderCapacity_3('G');
    noSides_0_2.set(OrderCapacity_3);
    SideCrossOrdModGrp_NoSides_2.insert(OrderCapacity_3.getString());
    FIX::OrderRestrictions OrderRestrictions_3("MULTIPLECHARVALUE_C");
    noSides_0_2.set(OrderRestrictions_3);
    SideCrossOrdModGrp_NoSides_2.insert(OrderRestrictions_3.getString());
    FIX::OrigClOrdID OrigClOrdID_2("STRING_1179562841");
    noSides_0_2.set(OrigClOrdID_2);
    SideCrossOrdModGrp_NoSides_2.insert(OrigClOrdID_2.getString());
    FIX::PositionEffect PositionEffect_5('N');
    noSides_0_2.set(PositionEffect_5);
    SideCrossOrdModGrp_NoSides_2.insert(PositionEffect_5.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_2(false);
    noSides_0_2.set(PreTradeAnonymity_2);
    SideCrossOrdModGrp_NoSides_2.insert(PreTradeAnonymity_2.getString());
    FIX::PreallocMethod PreallocMethod_2('1');
    noSides_0_2.set(PreallocMethod_2);
    SideCrossOrdModGrp_NoSides_2.insert(PreallocMethod_2.getString());
    FIX::QtyType QtyType_13(1);
    noSides_0_2.set(QtyType_13);
    SideCrossOrdModGrp_NoSides_2.insert(QtyType_13.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_18("STRING_809033470");
    noSides_0_2.set(SecondaryClOrdID_18);
    SideCrossOrdModGrp_NoSides_2.insert(SecondaryClOrdID_18.getString());
    FIX::SettlCurrency SettlCurrency_7("CAN");
    noSides_0_2.set(SettlCurrency_7);
    SideCrossOrdModGrp_NoSides_2.insert(SettlCurrency_7.getString());
    FIX::Side Side_17('6');
    noSides_0_2.set(Side_17);
    SideCrossOrdModGrp_NoSides_2.insert(Side_17.getString());
    FIX::SideComplianceID SideComplianceID_2("STRING_226190973");
    noSides_0_2.set(SideComplianceID_2);
    SideCrossOrdModGrp_NoSides_2.insert(SideComplianceID_2.getString());
    FIX::SideTimeInForce SideTimeInForce_2(FIX::UTCTIMESTAMP(19, 46, 32, 9, 4, 2002));
    noSides_0_2.set(SideTimeInForce_2);
    SideCrossOrdModGrp_NoSides_2.insert(SideTimeInForce_2.getString());
    FIX::SolicitedFlag SolicitedFlag_2(true);
    noSides_0_2.set(SolicitedFlag_2);
    SideCrossOrdModGrp_NoSides_2.insert(SolicitedFlag_2.getString());
    FIX::Text Text_27("STRING_1195989612");
    noSides_0_2.set(Text_27);
    SideCrossOrdModGrp_NoSides_2.insert(Text_27.getString());
    FIX::TradeDate TradeDate_11("LOCALMKTDATE_1722957378");
    noSides_0_2.set(TradeDate_11);
    SideCrossOrdModGrp_NoSides_2.insert(TradeDate_11.getString());
    FIX::TradeOriginationDate TradeOriginationDate_5("LOCALMKTDATE_603534039");
    noSides_0_2.set(TradeOriginationDate_5);
    SideCrossOrdModGrp_NoSides_2.insert(TradeOriginationDate_5.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_2);
    all_compo_names.insert("SideCrossOrdModGrp.NoSides");

    // CommissionData
    multiset<string> CommissionData_10;
    FIX::CommCurrency CommCurrency_10("GBP");
    noSides_0_2.set(CommCurrency_10);
    CommissionData_10.insert(CommCurrency_10.getString());
    FIX::CommType CommType_10('5');
    noSides_0_2.set(CommType_10);
    CommissionData_10.insert(CommType_10.getString());
    FIX::Commission Commission_10;
    Commission_10.setString("13765891");
    noSides_0_2.set(Commission_10);
    CommissionData_10.insert(Commission_10.getString());
    FIX::FundRenewWaiv FundRenewWaiv_10('N');
    noSides_0_2.set(FundRenewWaiv_10);
    CommissionData_10.insert(FundRenewWaiv_10.getString());
    all_values.push_back(CommissionData_10);
    all_compo_names.insert("CommissionData");

    // OrderQtyData
    multiset<string> OrderQtyData_2;
    FIX::CashOrderQty CashOrderQty_2;
    CashOrderQty_2.setString("20874420");
    noSides_0_2.set(CashOrderQty_2);
    OrderQtyData_2.insert(CashOrderQty_2.getString());
    FIX::OrderPercent OrderPercent_2;
    OrderPercent_2.setString("16.970000");
    noSides_0_2.set(OrderPercent_2);
    OrderQtyData_2.insert(OrderPercent_2.getString());
    FIX::OrderQty OrderQty_12;
    OrderQty_12.setString("5762300");
    noSides_0_2.set(OrderQty_12);
    OrderQtyData_2.insert(OrderQty_12.getString());
    FIX::RoundingDirection RoundingDirection_2('1');
    noSides_0_2.set(RoundingDirection_2);
    OrderQtyData_2.insert(RoundingDirection_2.getString());
    FIX::RoundingModulus RoundingModulus_2;
    RoundingModulus_2.setString("10596147");
    noSides_0_2.set(RoundingModulus_2);
    OrderQtyData_2.insert(RoundingModulus_2.getString());
    all_values.push_back(OrderQtyData_2);
    all_compo_names.insert("OrderQtyData");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_36;
      FIX::PartyID PartyID_36("STRING_298676163");
      noPartyIDs_2_1_0.set(PartyID_36);
      Parties_NoPartyIDs_36.insert(PartyID_36.getString());
      FIX::PartyIDSource PartyIDSource_36('6');
      noPartyIDs_2_1_0.set(PartyIDSource_36);
      Parties_NoPartyIDs_36.insert(PartyIDSource_36.getString());
      FIX::PartyRole PartyRole_36(85);
      noPartyIDs_2_1_0.set(PartyRole_36);
      Parties_NoPartyIDs_36.insert(PartyRole_36.getString());
      all_values.push_back(Parties_NoPartyIDs_36);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_79;
        FIX::PartySubID PartySubID_79("STRING_87380600");
        noPartySubIDs_2_0_2_0.set(PartySubID_79);
        PtysSubGrp_NoPartySubIDs_79.insert(PartySubID_79.getString());
        FIX::PartySubIDType PartySubIDType_79(15);
        noPartySubIDs_2_0_2_0.set(PartySubIDType_79);
        PtysSubGrp_NoPartySubIDs_79.insert(PartySubIDType_79.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_79);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_80;
        FIX::PartySubID PartySubID_80("STRING_58261235");
        noPartySubIDs_2_0_2_1.set(PartySubID_80);
        PtysSubGrp_NoPartySubIDs_80.insert(PartySubID_80.getString());
        FIX::PartySubIDType PartySubIDType_80(25);
        noPartySubIDs_2_0_2_1.set(PartySubIDType_80);
        PtysSubGrp_NoPartySubIDs_80.insert(PartySubIDType_80.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_80);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_81;
        FIX::PartySubID PartySubID_81("STRING_1539380282");
        noPartySubIDs_2_0_2_2.set(PartySubID_81);
        PtysSubGrp_NoPartySubIDs_81.insert(PartySubID_81.getString());
        FIX::PartySubIDType PartySubIDType_81(25);
        noPartySubIDs_2_0_2_2.set(PartySubIDType_81);
        PtysSubGrp_NoPartySubIDs_81.insert(PartySubIDType_81.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_81);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_2);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_0);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_2_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_5;
      FIX::AllocAccount AllocAccount_14("STRING_969712181");
      noAllocs_2_1_0.set(AllocAccount_14);
      PreAllocGrp_NoAllocs_5.insert(AllocAccount_14.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_14(41549317);
      noAllocs_2_1_0.set(AllocAcctIDSource_14);
      PreAllocGrp_NoAllocs_5.insert(AllocAcctIDSource_14.getString());
      FIX::AllocQty AllocQty_13;
      AllocQty_13.setString("13075483");
      noAllocs_2_1_0.set(AllocQty_13);
      PreAllocGrp_NoAllocs_5.insert(AllocQty_13.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_9("CHF");
      noAllocs_2_1_0.set(AllocSettlCurrency_9);
      PreAllocGrp_NoAllocs_5.insert(AllocSettlCurrency_9.getString());
      FIX::IndividualAllocID IndividualAllocID_14("STRING_1129088912");
      noAllocs_2_1_0.set(IndividualAllocID_14);
      PreAllocGrp_NoAllocs_5.insert(IndividualAllocID_14.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_5);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_39;
        FIX::NestedPartyID NestedPartyID_39("STRING_878668015");
        noNestedPartyIDs_2_0_2_0.set(NestedPartyID_39);
        NestedParties_NoNestedPartyIDs_39.insert(NestedPartyID_39.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_39('1');
        noNestedPartyIDs_2_0_2_0.set(NestedPartyIDSource_39);
        NestedParties_NoNestedPartyIDs_39.insert(NestedPartyIDSource_39.getString());
        FIX::NestedPartyRole NestedPartyRole_39(111679380);
        noNestedPartyIDs_2_0_2_0.set(NestedPartyRole_39);
        NestedParties_NoNestedPartyIDs_39.insert(NestedPartyRole_39.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_39);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_81;
          FIX::NestedPartySubID NestedPartySubID_81("STRING_160541504");
          noNestedPartySubIDs_2_0_0_3_0.set(NestedPartySubID_81);
          NstdPtysSubGrp_NoNestedPartySubIDs_81.insert(NestedPartySubID_81.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_81(1488268566);
          noNestedPartySubIDs_2_0_0_3_0.set(NestedPartySubIDType_81);
          NstdPtysSubGrp_NoNestedPartySubIDs_81.insert(NestedPartySubIDType_81.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_81);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_82;
          FIX::NestedPartySubID NestedPartySubID_82("STRING_1706071114");
          noNestedPartySubIDs_2_0_0_3_1.set(NestedPartySubID_82);
          NstdPtysSubGrp_NoNestedPartySubIDs_82.insert(NestedPartySubID_82.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_82(100499918);
          noNestedPartySubIDs_2_0_0_3_1.set(NestedPartySubIDType_82);
          NstdPtysSubGrp_NoNestedPartySubIDs_82.insert(NestedPartySubIDType_82.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_82);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_1);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_40;
        FIX::NestedPartyID NestedPartyID_40("STRING_1433386615");
        noNestedPartyIDs_2_0_2_1.set(NestedPartyID_40);
        NestedParties_NoNestedPartyIDs_40.insert(NestedPartyID_40.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_40('1');
        noNestedPartyIDs_2_0_2_1.set(NestedPartyIDSource_40);
        NestedParties_NoNestedPartyIDs_40.insert(NestedPartyIDSource_40.getString());
        FIX::NestedPartyRole NestedPartyRole_40(1249122939);
        noNestedPartyIDs_2_0_2_1.set(NestedPartyRole_40);
        NestedParties_NoNestedPartyIDs_40.insert(NestedPartyRole_40.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_40);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_83;
          FIX::NestedPartySubID NestedPartySubID_83("STRING_1890610412");
          noNestedPartySubIDs_2_0_1_3_0.set(NestedPartySubID_83);
          NstdPtysSubGrp_NoNestedPartySubIDs_83.insert(NestedPartySubID_83.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_83(1547799103);
          noNestedPartySubIDs_2_0_1_3_0.set(NestedPartySubIDType_83);
          NstdPtysSubGrp_NoNestedPartySubIDs_83.insert(NestedPartySubIDType_83.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_83);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_0);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_1);
      }
      noSides_0_2.addGroup(noAllocs_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_2_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_6;
      FIX::AllocAccount AllocAccount_15("STRING_1771348536");
      noAllocs_2_1_1.set(AllocAccount_15);
      PreAllocGrp_NoAllocs_6.insert(AllocAccount_15.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_15(907249331);
      noAllocs_2_1_1.set(AllocAcctIDSource_15);
      PreAllocGrp_NoAllocs_6.insert(AllocAcctIDSource_15.getString());
      FIX::AllocQty AllocQty_14;
      AllocQty_14.setString("11992191");
      noAllocs_2_1_1.set(AllocQty_14);
      PreAllocGrp_NoAllocs_6.insert(AllocQty_14.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_10("CHF");
      noAllocs_2_1_1.set(AllocSettlCurrency_10);
      PreAllocGrp_NoAllocs_6.insert(AllocSettlCurrency_10.getString());
      FIX::IndividualAllocID IndividualAllocID_15("STRING_1257480384");
      noAllocs_2_1_1.set(IndividualAllocID_15);
      PreAllocGrp_NoAllocs_6.insert(IndividualAllocID_15.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_6);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_41;
        FIX::NestedPartyID NestedPartyID_41("STRING_1612335275");
        noNestedPartyIDs_2_1_2_0.set(NestedPartyID_41);
        NestedParties_NoNestedPartyIDs_41.insert(NestedPartyID_41.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_41('1');
        noNestedPartyIDs_2_1_2_0.set(NestedPartyIDSource_41);
        NestedParties_NoNestedPartyIDs_41.insert(NestedPartyIDSource_41.getString());
        FIX::NestedPartyRole NestedPartyRole_41(375275712);
        noNestedPartyIDs_2_1_2_0.set(NestedPartyRole_41);
        NestedParties_NoNestedPartyIDs_41.insert(NestedPartyRole_41.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_41);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_84;
          FIX::NestedPartySubID NestedPartySubID_84("STRING_167379006");
          noNestedPartySubIDs_2_1_0_3_0.set(NestedPartySubID_84);
          NstdPtysSubGrp_NoNestedPartySubIDs_84.insert(NestedPartySubID_84.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_84(1682824034);
          noNestedPartySubIDs_2_1_0_3_0.set(NestedPartySubIDType_84);
          NstdPtysSubGrp_NoNestedPartySubIDs_84.insert(NestedPartySubIDType_84.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_84);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_85;
          FIX::NestedPartySubID NestedPartySubID_85("STRING_1387004637");
          noNestedPartySubIDs_2_1_0_3_1.set(NestedPartySubID_85);
          NstdPtysSubGrp_NoNestedPartySubIDs_85.insert(NestedPartySubID_85.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_85(1470573291);
          noNestedPartySubIDs_2_1_0_3_1.set(NestedPartySubIDType_85);
          NstdPtysSubGrp_NoNestedPartySubIDs_85.insert(NestedPartySubIDType_85.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_85);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_86;
          FIX::NestedPartySubID NestedPartySubID_86("STRING_664429299");
          noNestedPartySubIDs_2_1_0_3_2.set(NestedPartySubID_86);
          NstdPtysSubGrp_NoNestedPartySubIDs_86.insert(NestedPartySubID_86.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_86(1387951429);
          noNestedPartySubIDs_2_1_0_3_2.set(NestedPartySubIDType_86);
          NstdPtysSubGrp_NoNestedPartySubIDs_86.insert(NestedPartySubIDType_86.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_86);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_2);
        }
        noAllocs_2_1_1.addGroup(noNestedPartyIDs_2_1_2_0);
      }
      noSides_0_2.addGroup(noAllocs_2_1_1);
    }
    msg.addGroup(noSides_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_9;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_9("EUR");
  msg.set(BenchmarkCurveCurrency_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkCurveCurrency_9.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_9("STRING_EUREPO");
  msg.set(BenchmarkCurveName_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkCurveName_9.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_9("STRING_693889648");
  msg.set(BenchmarkCurvePoint_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkCurvePoint_9.getString());
  FIX::BenchmarkPrice BenchmarkPrice_9;
  BenchmarkPrice_9.setString("4101101");
  msg.set(BenchmarkPrice_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkPrice_9.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_9(840415728);
  msg.set(BenchmarkPriceType_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkPriceType_9.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_9("STRING_252477114");
  msg.set(BenchmarkSecurityID_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkSecurityID_9.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_9("STRING_510610025");
  msg.set(BenchmarkSecurityIDSource_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkSecurityIDSource_9.getString());
  FIX::Spread Spread_9;
  Spread_9.setString("1263186");
  msg.set(Spread_9);
  SpreadOrBenchmarkCurveData_9.insert(Spread_9.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_9);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_17;
    FIX::StipulationType StipulationType_17("STRING_COUPON");
    noStipulations_0_0.set(StipulationType_17);
    Stipulations_NoStipulations_17.insert(StipulationType_17.getString());
    FIX::StipulationValue StipulationValue_17("STRING_471836453");
    noStipulations_0_0.set(StipulationValue_17);
    Stipulations_NoStipulations_17.insert(StipulationValue_17.getString());
    all_values.push_back(Stipulations_NoStipulations_17);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_18;
    FIX::StipulationType StipulationType_18("STRING_SECTOR");
    noStipulations_0_1.set(StipulationType_18);
    Stipulations_NoStipulations_18.insert(StipulationType_18.getString());
    FIX::StipulationValue StipulationValue_18("STRING_1160048419");
    noStipulations_0_1.set(StipulationValue_18);
    Stipulations_NoStipulations_18.insert(StipulationValue_18.getString());
    all_values.push_back(Stipulations_NoStipulations_18);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_19;
    FIX::StipulationType StipulationType_19("STRING_INTERNALQTY");
    noStipulations_0_2.set(StipulationType_19);
    Stipulations_NoStipulations_19.insert(StipulationType_19.getString());
    FIX::StipulationValue StipulationValue_19("STRING_1037670728");
    noStipulations_0_2.set(StipulationValue_19);
    Stipulations_NoStipulations_19.insert(StipulationValue_19.getString());
    all_values.push_back(Stipulations_NoStipulations_19);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_0;
    FIX::StrategyParameterName StrategyParameterName_0("STRING_1954430478");
    noStrategyParameters_0_0.set(StrategyParameterName_0);
    StrategyParametersGrp_NoStrategyParameters_0.insert(StrategyParameterName_0.getString());
    FIX::StrategyParameterType StrategyParameterType_0(20);
    noStrategyParameters_0_0.set(StrategyParameterType_0);
    StrategyParametersGrp_NoStrategyParameters_0.insert(StrategyParameterType_0.getString());
    FIX::StrategyParameterValue StrategyParameterValue_0("STRING_1469264305");
    noStrategyParameters_0_0.set(StrategyParameterValue_0);
    StrategyParametersGrp_NoStrategyParameters_0.insert(StrategyParameterValue_0.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_0);
    all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_0;
    FIX::TradingSessionID TradingSessionID_15("STRING_4");
    noTradingSessions_0_0.set(TradingSessionID_15);
    TrdgSesGrp_NoTradingSessions_0.insert(TradingSessionID_15.getString());
    FIX::TradingSessionSubID TradingSessionSubID_15("STRING_5");
    noTradingSessions_0_0.set(TradingSessionSubID_15);
    TrdgSesGrp_NoTradingSessions_0.insert(TradingSessionSubID_15.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_0);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_1;
    FIX::TradingSessionID TradingSessionID_16("STRING_5");
    noTradingSessions_0_1.set(TradingSessionID_16);
    TrdgSesGrp_NoTradingSessions_1.insert(TradingSessionID_16.getString());
    FIX::TradingSessionSubID TradingSessionSubID_16("STRING_7");
    noTradingSessions_0_1.set(TradingSessionSubID_16);
    TrdgSesGrp_NoTradingSessions_1.insert(TradingSessionSubID_16.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_1);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_0;
  FIX::TriggerAction TriggerAction_0('1');
  msg.set(TriggerAction_0);
  TriggeringInstruction_0.insert(TriggerAction_0.getString());
  FIX::TriggerNewPrice TriggerNewPrice_0;
  TriggerNewPrice_0.setString("1541739");
  msg.set(TriggerNewPrice_0);
  TriggeringInstruction_0.insert(TriggerNewPrice_0.getString());
  FIX::TriggerNewQty TriggerNewQty_0;
  TriggerNewQty_0.setString("2495621");
  msg.set(TriggerNewQty_0);
  TriggeringInstruction_0.insert(TriggerNewQty_0.getString());
  FIX::TriggerOrderType TriggerOrderType_0('2');
  msg.set(TriggerOrderType_0);
  TriggeringInstruction_0.insert(TriggerOrderType_0.getString());
  FIX::TriggerPrice TriggerPrice_0;
  TriggerPrice_0.setString("8186032");
  msg.set(TriggerPrice_0);
  TriggeringInstruction_0.insert(TriggerPrice_0.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_0('U');
  msg.set(TriggerPriceDirection_0);
  TriggeringInstruction_0.insert(TriggerPriceDirection_0.getString());
  FIX::TriggerPriceType TriggerPriceType_0('4');
  msg.set(TriggerPriceType_0);
  TriggeringInstruction_0.insert(TriggerPriceType_0.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_0('1');
  msg.set(TriggerPriceTypeScope_0);
  TriggeringInstruction_0.insert(TriggerPriceTypeScope_0.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_0("STRING_989660737");
  msg.set(TriggerSecurityDesc_0);
  TriggeringInstruction_0.insert(TriggerSecurityDesc_0.getString());
  FIX::TriggerSecurityID TriggerSecurityID_0("STRING_1981209949");
  msg.set(TriggerSecurityID_0);
  TriggeringInstruction_0.insert(TriggerSecurityID_0.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_0("STRING_1478281992");
  msg.set(TriggerSecurityIDSource_0);
  TriggeringInstruction_0.insert(TriggerSecurityIDSource_0.getString());
  FIX::TriggerSymbol TriggerSymbol_0("STRING_1830076465");
  msg.set(TriggerSymbol_0);
  TriggeringInstruction_0.insert(TriggerSymbol_0.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_0("STRING_86203415");
  msg.set(TriggerTradingSessionID_0);
  TriggeringInstruction_0.insert(TriggerTradingSessionID_0.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_0("STRING_1988892017");
  msg.set(TriggerTradingSessionSubID_0);
  TriggeringInstruction_0.insert(TriggerTradingSessionSubID_0.getString());
  FIX::TriggerType TriggerType_0('2');
  msg.set(TriggerType_0);
  TriggeringInstruction_0.insert(TriggerType_0.getString());
  all_values.push_back(TriggeringInstruction_0);
  all_compo_names.insert("TriggeringInstruction");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_27;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_27("DATA_1601141333");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingIssuer_27.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_27(280747966);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingIssuerLen_27.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_27("DATA_603919445");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingSecurityDesc_27.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_27(613706105);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingSecurityDescLen_27.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_27;
    UnderlyingAdjustedQuantity_27.setString("3764493");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_27);
    UnderlyingInstrument_27.insert(UnderlyingAdjustedQuantity_27.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_27;
    UnderlyingAllocationPercent_27.setString("1.730000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_27);
    UnderlyingInstrument_27.insert(UnderlyingAllocationPercent_27.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_27;
    UnderlyingAttachmentPoint_27.setString("0.250000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_27);
    UnderlyingInstrument_27.insert(UnderlyingAttachmentPoint_27.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_27("STRING_183396138");
    noUnderlyings_0_0.set(UnderlyingCFICode_27);
    UnderlyingInstrument_27.insert(UnderlyingCFICode_27.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_27("STRING_604732247");
    noUnderlyings_0_0.set(UnderlyingCPProgram_27);
    UnderlyingInstrument_27.insert(UnderlyingCPProgram_27.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_27("STRING_147270682");
    noUnderlyings_0_0.set(UnderlyingCPRegType_27);
    UnderlyingInstrument_27.insert(UnderlyingCPRegType_27.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_27;
    UnderlyingCapValue_27.setString("4269540");
    noUnderlyings_0_0.set(UnderlyingCapValue_27);
    UnderlyingInstrument_27.insert(UnderlyingCapValue_27.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_27;
    UnderlyingCashAmount_27.setString("11802095");
    noUnderlyings_0_0.set(UnderlyingCashAmount_27);
    UnderlyingInstrument_27.insert(UnderlyingCashAmount_27.getString());
    FIX::UnderlyingCashType UnderlyingCashType_27("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_27);
    UnderlyingInstrument_27.insert(UnderlyingCashType_27.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_27;
    UnderlyingContractMultiplier_27.setString("10457876");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_27);
    UnderlyingInstrument_27.insert(UnderlyingContractMultiplier_27.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_27(42767105);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_27);
    UnderlyingInstrument_27.insert(UnderlyingContractMultiplierUnit_27.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_27("COUNTRY_1357354028");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_27);
    UnderlyingInstrument_27.insert(UnderlyingCountryOfIssue_27.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_27("LOCALMKTDATE_1199961602");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_27);
    UnderlyingInstrument_27.insert(UnderlyingCouponPaymentDate_27.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_27;
    UnderlyingCouponRate_27.setString("92.520000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_27);
    UnderlyingInstrument_27.insert(UnderlyingCouponRate_27.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_27("STRING_295433023");
    noUnderlyings_0_0.set(UnderlyingCreditRating_27);
    UnderlyingInstrument_27.insert(UnderlyingCreditRating_27.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_27("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_27);
    UnderlyingInstrument_27.insert(UnderlyingCurrency_27.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_27;
    UnderlyingCurrentValue_27.setString("15827533");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_27);
    UnderlyingInstrument_27.insert(UnderlyingCurrentValue_27.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_27;
    UnderlyingDetachmentPoint_27.setString("31.210000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_27);
    UnderlyingInstrument_27.insert(UnderlyingDetachmentPoint_27.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_27;
    UnderlyingDirtyPrice_27.setString("7720199");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_27);
    UnderlyingInstrument_27.insert(UnderlyingDirtyPrice_27.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_27;
    UnderlyingEndPrice_27.setString("14164796");
    noUnderlyings_0_0.set(UnderlyingEndPrice_27);
    UnderlyingInstrument_27.insert(UnderlyingEndPrice_27.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_27;
    UnderlyingEndValue_27.setString("2700514");
    noUnderlyings_0_0.set(UnderlyingEndValue_27);
    UnderlyingInstrument_27.insert(UnderlyingEndValue_27.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_27(454612735);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_27);
    UnderlyingInstrument_27.insert(UnderlyingExerciseStyle_27.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_27;
    UnderlyingFXRate_27.setString("15026830");
    noUnderlyings_0_0.set(UnderlyingFXRate_27);
    UnderlyingInstrument_27.insert(UnderlyingFXRate_27.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_27('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_27);
    UnderlyingInstrument_27.insert(UnderlyingFXRateCalc_27.getString());
    FIX::UnderlyingFactor UnderlyingFactor_27;
    UnderlyingFactor_27.setString("2635242");
    noUnderlyings_0_0.set(UnderlyingFactor_27);
    UnderlyingInstrument_27.insert(UnderlyingFactor_27.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_27(1976181090);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_27);
    UnderlyingInstrument_27.insert(UnderlyingFlowScheduleType_27.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_27("STRING_1712601167");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_27);
    UnderlyingInstrument_27.insert(UnderlyingInstrRegistry_27.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_27("LOCALMKTDATE_544272214");
    noUnderlyings_0_0.set(UnderlyingIssueDate_27);
    UnderlyingInstrument_27.insert(UnderlyingIssueDate_27.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_27("STRING_432616887");
    noUnderlyings_0_0.set(UnderlyingIssuer_27);
    UnderlyingInstrument_27.insert(UnderlyingIssuer_27.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_27("STRING_178823624");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_27);
    UnderlyingInstrument_27.insert(UnderlyingLocaleOfIssue_27.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_27("LOCALMKTDATE_920721522");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_27);
    UnderlyingInstrument_27.insert(UnderlyingMaturityDate_27.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_27("MONTHYEAR_2074207060");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_27);
    UnderlyingInstrument_27.insert(UnderlyingMaturityMonthYear_27.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_27("TZTIMEONLY_1004313650");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_27);
    UnderlyingInstrument_27.insert(UnderlyingMaturityTime_27.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_27;
    UnderlyingNotionalPercentageOutstanding_27.setString("76.600000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_27);
    UnderlyingInstrument_27.insert(UnderlyingNotionalPercentageOutstanding_27.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_27('5');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_27);
    UnderlyingInstrument_27.insert(UnderlyingOptAttribute_27.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_27;
    UnderlyingOriginalNotionalPercentageOutstanding_27.setString("43.320000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_27);
    UnderlyingInstrument_27.insert(UnderlyingOriginalNotionalPercentageOutstanding_27.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_27("STRING_1531071683");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_27);
    UnderlyingInstrument_27.insert(UnderlyingPriceUnitOfMeasure_27.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_27;
    UnderlyingPriceUnitOfMeasureQty_27.setString("17116652");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_27);
    UnderlyingInstrument_27.insert(UnderlyingPriceUnitOfMeasureQty_27.getString());
    FIX::UnderlyingProduct UnderlyingProduct_27(746465361);
    noUnderlyings_0_0.set(UnderlyingProduct_27);
    UnderlyingInstrument_27.insert(UnderlyingProduct_27.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_27(429375654);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_27);
    UnderlyingInstrument_27.insert(UnderlyingPutOrCall_27.getString());
    FIX::UnderlyingPx UnderlyingPx_27;
    UnderlyingPx_27.setString("17544323");
    noUnderlyings_0_0.set(UnderlyingPx_27);
    UnderlyingInstrument_27.insert(UnderlyingPx_27.getString());
    FIX::UnderlyingQty UnderlyingQty_27;
    UnderlyingQty_27.setString("21038193");
    noUnderlyings_0_0.set(UnderlyingQty_27);
    UnderlyingInstrument_27.insert(UnderlyingQty_27.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_27("LOCALMKTDATE_1629337256");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_27);
    UnderlyingInstrument_27.insert(UnderlyingRedemptionDate_27.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_27("STRING_2046761613");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_27);
    UnderlyingInstrument_27.insert(UnderlyingRepoCollateralSecurityType_27.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_27;
    UnderlyingRepurchaseRate_27.setString("87.650000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_27);
    UnderlyingInstrument_27.insert(UnderlyingRepurchaseRate_27.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_27(1500418492);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_27);
    UnderlyingInstrument_27.insert(UnderlyingRepurchaseTerm_27.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_27("STRING_1829120793");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_27);
    UnderlyingInstrument_27.insert(UnderlyingRestructuringType_27.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_27("STRING_1834522090");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityDesc_27.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_27("EXCHANGE_292187965");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityExchange_27.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_27("STRING_453657062");
    noUnderlyings_0_0.set(UnderlyingSecurityID_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityID_27.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_27("STRING_1103518068");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityIDSource_27.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_27("STRING_562239430");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_27);
    UnderlyingInstrument_27.insert(UnderlyingSecuritySubType_27.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_27("STRING_908269797");
    noUnderlyings_0_0.set(UnderlyingSecurityType_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityType_27.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_27("STRING_458717462");
    noUnderlyings_0_0.set(UnderlyingSeniority_27);
    UnderlyingInstrument_27.insert(UnderlyingSeniority_27.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_27("STRING_673699264");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_27);
    UnderlyingInstrument_27.insert(UnderlyingSettlMethod_27.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_27(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_27);
    UnderlyingInstrument_27.insert(UnderlyingSettlementType_27.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_27;
    UnderlyingStartValue_27.setString("2874149");
    noUnderlyings_0_0.set(UnderlyingStartValue_27);
    UnderlyingInstrument_27.insert(UnderlyingStartValue_27.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_27("STRING_238816783");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_27);
    UnderlyingInstrument_27.insert(UnderlyingStateOrProvinceOfIssue_27.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_27("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_27);
    UnderlyingInstrument_27.insert(UnderlyingStrikeCurrency_27.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_27;
    UnderlyingStrikePrice_27.setString("4176404");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_27);
    UnderlyingInstrument_27.insert(UnderlyingStrikePrice_27.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_27("STRING_489304134");
    noUnderlyings_0_0.set(UnderlyingSymbol_27);
    UnderlyingInstrument_27.insert(UnderlyingSymbol_27.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_27("STRING_646755204");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_27);
    UnderlyingInstrument_27.insert(UnderlyingSymbolSfx_27.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_27("STRING_1421954058");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_27);
    UnderlyingInstrument_27.insert(UnderlyingTimeUnit_27.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_27("STRING_1593421795");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_27);
    UnderlyingInstrument_27.insert(UnderlyingUnitOfMeasure_27.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_27;
    UnderlyingUnitOfMeasureQty_27.setString("11782108");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_27);
    UnderlyingInstrument_27.insert(UnderlyingUnitOfMeasureQty_27.getString());
    all_values.push_back(UnderlyingInstrument_27);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_62;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_62("STRING_977009830");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_62);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_62.insert(UnderlyingSecurityAltID_62.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_62("STRING_742392471");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_62);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_62.insert(UnderlyingSecurityAltIDSource_62.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_62);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_63;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_63("STRING_1172520103");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_63);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_63.insert(UnderlyingSecurityAltID_63.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_63("STRING_1406385484");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_63);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_63.insert(UnderlyingSecurityAltIDSource_63.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_63);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_52;
      FIX::UnderlyingStipType UnderlyingStipType_52("STRING_1128855845");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_52);
      UnderlyingStipulations_NoUnderlyingStips_52.insert(UnderlyingStipType_52.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_52("STRING_888239092");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_52);
      UnderlyingStipulations_NoUnderlyingStips_52.insert(UnderlyingStipValue_52.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_52);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_53;
      FIX::UnderlyingStipType UnderlyingStipType_53("STRING_248619149");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_53);
      UnderlyingStipulations_NoUnderlyingStips_53.insert(UnderlyingStipType_53.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_53("STRING_1380624610");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_53);
      UnderlyingStipulations_NoUnderlyingStips_53.insert(UnderlyingStipValue_53.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_53);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_55;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_55("STRING_2077739942");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_55);
      UndlyInstrumentParties_NoUndlyInstrumentParties_55.insert(UnderlyingInstrumentPartyID_55.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_55('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_55);
      UndlyInstrumentParties_NoUndlyInstrumentParties_55.insert(UnderlyingInstrumentPartyIDSource_55.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_55(533361901);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_55);
      UndlyInstrumentParties_NoUndlyInstrumentParties_55.insert(UnderlyingInstrumentPartyRole_55.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_55);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_109("STRING_23697472");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_109);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109.insert(UnderlyingInstrumentPartySubID_109.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_109(1095601331);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_109);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109.insert(UnderlyingInstrumentPartySubIDType_109.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_110("STRING_1292183154");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_110);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110.insert(UnderlyingInstrumentPartySubID_110.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_110(482414935);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_110);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110.insert(UnderlyingInstrumentPartySubIDType_110.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_111("STRING_1769300595");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_111);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111.insert(UnderlyingInstrumentPartySubID_111.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_111(316493551);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_111);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111.insert(UnderlyingInstrumentPartySubIDType_111.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_28;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_28("DATA_769829839");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingIssuer_28.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_28(2008117378);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingIssuerLen_28.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_28("DATA_2032559811");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingSecurityDesc_28.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_28(1489861631);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingSecurityDescLen_28.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_28;
    UnderlyingAdjustedQuantity_28.setString("2782741");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_28);
    UnderlyingInstrument_28.insert(UnderlyingAdjustedQuantity_28.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_28;
    UnderlyingAllocationPercent_28.setString("2.980000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_28);
    UnderlyingInstrument_28.insert(UnderlyingAllocationPercent_28.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_28;
    UnderlyingAttachmentPoint_28.setString("68.350000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_28);
    UnderlyingInstrument_28.insert(UnderlyingAttachmentPoint_28.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_28("STRING_1700228196");
    noUnderlyings_0_1.set(UnderlyingCFICode_28);
    UnderlyingInstrument_28.insert(UnderlyingCFICode_28.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_28("STRING_1967802093");
    noUnderlyings_0_1.set(UnderlyingCPProgram_28);
    UnderlyingInstrument_28.insert(UnderlyingCPProgram_28.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_28("STRING_1167344050");
    noUnderlyings_0_1.set(UnderlyingCPRegType_28);
    UnderlyingInstrument_28.insert(UnderlyingCPRegType_28.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_28;
    UnderlyingCapValue_28.setString("21262829");
    noUnderlyings_0_1.set(UnderlyingCapValue_28);
    UnderlyingInstrument_28.insert(UnderlyingCapValue_28.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_28;
    UnderlyingCashAmount_28.setString("7973282");
    noUnderlyings_0_1.set(UnderlyingCashAmount_28);
    UnderlyingInstrument_28.insert(UnderlyingCashAmount_28.getString());
    FIX::UnderlyingCashType UnderlyingCashType_28("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_28);
    UnderlyingInstrument_28.insert(UnderlyingCashType_28.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_28;
    UnderlyingContractMultiplier_28.setString("11513193");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_28);
    UnderlyingInstrument_28.insert(UnderlyingContractMultiplier_28.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_28(56230111);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_28);
    UnderlyingInstrument_28.insert(UnderlyingContractMultiplierUnit_28.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_28("COUNTRY_111594057");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_28);
    UnderlyingInstrument_28.insert(UnderlyingCountryOfIssue_28.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_28("LOCALMKTDATE_132691591");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_28);
    UnderlyingInstrument_28.insert(UnderlyingCouponPaymentDate_28.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_28;
    UnderlyingCouponRate_28.setString("92.030000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_28);
    UnderlyingInstrument_28.insert(UnderlyingCouponRate_28.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_28("STRING_360213206");
    noUnderlyings_0_1.set(UnderlyingCreditRating_28);
    UnderlyingInstrument_28.insert(UnderlyingCreditRating_28.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_28("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_28);
    UnderlyingInstrument_28.insert(UnderlyingCurrency_28.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_28;
    UnderlyingCurrentValue_28.setString("2904695");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_28);
    UnderlyingInstrument_28.insert(UnderlyingCurrentValue_28.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_28;
    UnderlyingDetachmentPoint_28.setString("56.050000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_28);
    UnderlyingInstrument_28.insert(UnderlyingDetachmentPoint_28.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_28;
    UnderlyingDirtyPrice_28.setString("17190050");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_28);
    UnderlyingInstrument_28.insert(UnderlyingDirtyPrice_28.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_28;
    UnderlyingEndPrice_28.setString("6743828");
    noUnderlyings_0_1.set(UnderlyingEndPrice_28);
    UnderlyingInstrument_28.insert(UnderlyingEndPrice_28.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_28;
    UnderlyingEndValue_28.setString("4571930");
    noUnderlyings_0_1.set(UnderlyingEndValue_28);
    UnderlyingInstrument_28.insert(UnderlyingEndValue_28.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_28(667122723);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_28);
    UnderlyingInstrument_28.insert(UnderlyingExerciseStyle_28.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_28;
    UnderlyingFXRate_28.setString("19665660");
    noUnderlyings_0_1.set(UnderlyingFXRate_28);
    UnderlyingInstrument_28.insert(UnderlyingFXRate_28.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_28('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_28);
    UnderlyingInstrument_28.insert(UnderlyingFXRateCalc_28.getString());
    FIX::UnderlyingFactor UnderlyingFactor_28;
    UnderlyingFactor_28.setString("2889396");
    noUnderlyings_0_1.set(UnderlyingFactor_28);
    UnderlyingInstrument_28.insert(UnderlyingFactor_28.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_28(135575914);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_28);
    UnderlyingInstrument_28.insert(UnderlyingFlowScheduleType_28.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_28("STRING_1709437852");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_28);
    UnderlyingInstrument_28.insert(UnderlyingInstrRegistry_28.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_28("LOCALMKTDATE_149573400");
    noUnderlyings_0_1.set(UnderlyingIssueDate_28);
    UnderlyingInstrument_28.insert(UnderlyingIssueDate_28.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_28("STRING_20652078");
    noUnderlyings_0_1.set(UnderlyingIssuer_28);
    UnderlyingInstrument_28.insert(UnderlyingIssuer_28.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_28("STRING_1051815835");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_28);
    UnderlyingInstrument_28.insert(UnderlyingLocaleOfIssue_28.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_28("LOCALMKTDATE_427847539");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_28);
    UnderlyingInstrument_28.insert(UnderlyingMaturityDate_28.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_28("MONTHYEAR_395032376");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_28);
    UnderlyingInstrument_28.insert(UnderlyingMaturityMonthYear_28.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_28("TZTIMEONLY_1040949022");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_28);
    UnderlyingInstrument_28.insert(UnderlyingMaturityTime_28.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_28;
    UnderlyingNotionalPercentageOutstanding_28.setString("57.350000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_28);
    UnderlyingInstrument_28.insert(UnderlyingNotionalPercentageOutstanding_28.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_28('2');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_28);
    UnderlyingInstrument_28.insert(UnderlyingOptAttribute_28.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_28;
    UnderlyingOriginalNotionalPercentageOutstanding_28.setString("94.250000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_28);
    UnderlyingInstrument_28.insert(UnderlyingOriginalNotionalPercentageOutstanding_28.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_28("STRING_2106875026");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_28);
    UnderlyingInstrument_28.insert(UnderlyingPriceUnitOfMeasure_28.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_28;
    UnderlyingPriceUnitOfMeasureQty_28.setString("10126790");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_28);
    UnderlyingInstrument_28.insert(UnderlyingPriceUnitOfMeasureQty_28.getString());
    FIX::UnderlyingProduct UnderlyingProduct_28(1970545946);
    noUnderlyings_0_1.set(UnderlyingProduct_28);
    UnderlyingInstrument_28.insert(UnderlyingProduct_28.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_28(1110710773);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_28);
    UnderlyingInstrument_28.insert(UnderlyingPutOrCall_28.getString());
    FIX::UnderlyingPx UnderlyingPx_28;
    UnderlyingPx_28.setString("10689092");
    noUnderlyings_0_1.set(UnderlyingPx_28);
    UnderlyingInstrument_28.insert(UnderlyingPx_28.getString());
    FIX::UnderlyingQty UnderlyingQty_28;
    UnderlyingQty_28.setString("20821400");
    noUnderlyings_0_1.set(UnderlyingQty_28);
    UnderlyingInstrument_28.insert(UnderlyingQty_28.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_28("LOCALMKTDATE_1243402364");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_28);
    UnderlyingInstrument_28.insert(UnderlyingRedemptionDate_28.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_28("STRING_2013378410");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_28);
    UnderlyingInstrument_28.insert(UnderlyingRepoCollateralSecurityType_28.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_28;
    UnderlyingRepurchaseRate_28.setString("95.620000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_28);
    UnderlyingInstrument_28.insert(UnderlyingRepurchaseRate_28.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_28(609234918);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_28);
    UnderlyingInstrument_28.insert(UnderlyingRepurchaseTerm_28.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_28("STRING_1051537901");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_28);
    UnderlyingInstrument_28.insert(UnderlyingRestructuringType_28.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_28("STRING_585339063");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityDesc_28.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_28("EXCHANGE_1042730523");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityExchange_28.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_28("STRING_623059293");
    noUnderlyings_0_1.set(UnderlyingSecurityID_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityID_28.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_28("STRING_1259721920");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityIDSource_28.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_28("STRING_1499923601");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_28);
    UnderlyingInstrument_28.insert(UnderlyingSecuritySubType_28.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_28("STRING_1290182016");
    noUnderlyings_0_1.set(UnderlyingSecurityType_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityType_28.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_28("STRING_1078804283");
    noUnderlyings_0_1.set(UnderlyingSeniority_28);
    UnderlyingInstrument_28.insert(UnderlyingSeniority_28.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_28("STRING_292047966");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_28);
    UnderlyingInstrument_28.insert(UnderlyingSettlMethod_28.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_28(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_28);
    UnderlyingInstrument_28.insert(UnderlyingSettlementType_28.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_28;
    UnderlyingStartValue_28.setString("12143801");
    noUnderlyings_0_1.set(UnderlyingStartValue_28);
    UnderlyingInstrument_28.insert(UnderlyingStartValue_28.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_28("STRING_2001485819");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_28);
    UnderlyingInstrument_28.insert(UnderlyingStateOrProvinceOfIssue_28.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_28("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_28);
    UnderlyingInstrument_28.insert(UnderlyingStrikeCurrency_28.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_28;
    UnderlyingStrikePrice_28.setString("9058180");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_28);
    UnderlyingInstrument_28.insert(UnderlyingStrikePrice_28.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_28("STRING_9058977");
    noUnderlyings_0_1.set(UnderlyingSymbol_28);
    UnderlyingInstrument_28.insert(UnderlyingSymbol_28.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_28("STRING_1630064651");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_28);
    UnderlyingInstrument_28.insert(UnderlyingSymbolSfx_28.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_28("STRING_1946767029");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_28);
    UnderlyingInstrument_28.insert(UnderlyingTimeUnit_28.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_28("STRING_2137134713");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_28);
    UnderlyingInstrument_28.insert(UnderlyingUnitOfMeasure_28.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_28;
    UnderlyingUnitOfMeasureQty_28.setString("18454154");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_28);
    UnderlyingInstrument_28.insert(UnderlyingUnitOfMeasureQty_28.getString());
    all_values.push_back(UnderlyingInstrument_28);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_64;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_64("STRING_2096526091");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_64);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_64.insert(UnderlyingSecurityAltID_64.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_64("STRING_710610920");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_64);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_64.insert(UnderlyingSecurityAltIDSource_64.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_64);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_65;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_65("STRING_1830638752");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_65);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_65.insert(UnderlyingSecurityAltID_65.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_65("STRING_1059753216");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_65);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_65.insert(UnderlyingSecurityAltIDSource_65.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_65);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_54;
      FIX::UnderlyingStipType UnderlyingStipType_54("STRING_1765295108");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_54);
      UnderlyingStipulations_NoUnderlyingStips_54.insert(UnderlyingStipType_54.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_54("STRING_155671933");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_54);
      UnderlyingStipulations_NoUnderlyingStips_54.insert(UnderlyingStipValue_54.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_54);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_55;
      FIX::UnderlyingStipType UnderlyingStipType_55("STRING_1645414889");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_55);
      UnderlyingStipulations_NoUnderlyingStips_55.insert(UnderlyingStipType_55.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_55("STRING_2060164671");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_55);
      UnderlyingStipulations_NoUnderlyingStips_55.insert(UnderlyingStipValue_55.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_55);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_56;
      FIX::UnderlyingStipType UnderlyingStipType_56("STRING_764906851");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_56);
      UnderlyingStipulations_NoUnderlyingStips_56.insert(UnderlyingStipType_56.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_56("STRING_549469142");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_56);
      UnderlyingStipulations_NoUnderlyingStips_56.insert(UnderlyingStipValue_56.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_56);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_56;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_56("STRING_1807637374");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_56);
      UndlyInstrumentParties_NoUndlyInstrumentParties_56.insert(UnderlyingInstrumentPartyID_56.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_56('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_56);
      UndlyInstrumentParties_NoUndlyInstrumentParties_56.insert(UnderlyingInstrumentPartyIDSource_56.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_56(1757742006);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_56);
      UndlyInstrumentParties_NoUndlyInstrumentParties_56.insert(UnderlyingInstrumentPartyRole_56.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_56);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_112("STRING_315226803");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_112);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112.insert(UnderlyingInstrumentPartySubID_112.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_112(689062641);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_112);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112.insert(UnderlyingInstrumentPartySubIDType_112.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_113("STRING_1452125294");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_113);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113.insert(UnderlyingInstrumentPartySubID_113.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_113(1894348489);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_113);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113.insert(UnderlyingInstrumentPartySubIDType_113.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_114("STRING_1903442838");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_114);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114.insert(UnderlyingInstrumentPartySubID_114.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_114(1306127465);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_114);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114.insert(UnderlyingInstrumentPartySubIDType_114.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_57;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_57("STRING_1475559928");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_57);
      UndlyInstrumentParties_NoUndlyInstrumentParties_57.insert(UnderlyingInstrumentPartyID_57.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_57('9');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_57);
      UndlyInstrumentParties_NoUndlyInstrumentParties_57.insert(UnderlyingInstrumentPartyIDSource_57.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_57(64461824);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_57);
      UndlyInstrumentParties_NoUndlyInstrumentParties_57.insert(UnderlyingInstrumentPartyRole_57.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_57);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_115("STRING_473572469");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_115);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115.insert(UnderlyingInstrumentPartySubID_115.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_115(2011228853);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_115);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115.insert(UnderlyingInstrumentPartySubIDType_115.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_116("STRING_1474269970");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_116);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116.insert(UnderlyingInstrumentPartySubID_116.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_116(171504294);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_116);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116.insert(UnderlyingInstrumentPartySubIDType_116.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_29;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_29("DATA_1871321659");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingIssuer_29.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_29(1423312414);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingIssuerLen_29.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_29("DATA_882115214");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingSecurityDesc_29.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_29(1554476763);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingSecurityDescLen_29.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_29;
    UnderlyingAdjustedQuantity_29.setString("3355819");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_29);
    UnderlyingInstrument_29.insert(UnderlyingAdjustedQuantity_29.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_29;
    UnderlyingAllocationPercent_29.setString("16.940000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_29);
    UnderlyingInstrument_29.insert(UnderlyingAllocationPercent_29.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_29;
    UnderlyingAttachmentPoint_29.setString("82.240000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_29);
    UnderlyingInstrument_29.insert(UnderlyingAttachmentPoint_29.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_29("STRING_491253915");
    noUnderlyings_0_2.set(UnderlyingCFICode_29);
    UnderlyingInstrument_29.insert(UnderlyingCFICode_29.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_29("STRING_12082935");
    noUnderlyings_0_2.set(UnderlyingCPProgram_29);
    UnderlyingInstrument_29.insert(UnderlyingCPProgram_29.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_29("STRING_1084969247");
    noUnderlyings_0_2.set(UnderlyingCPRegType_29);
    UnderlyingInstrument_29.insert(UnderlyingCPRegType_29.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_29;
    UnderlyingCapValue_29.setString("12561607");
    noUnderlyings_0_2.set(UnderlyingCapValue_29);
    UnderlyingInstrument_29.insert(UnderlyingCapValue_29.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_29;
    UnderlyingCashAmount_29.setString("5615520");
    noUnderlyings_0_2.set(UnderlyingCashAmount_29);
    UnderlyingInstrument_29.insert(UnderlyingCashAmount_29.getString());
    FIX::UnderlyingCashType UnderlyingCashType_29("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_29);
    UnderlyingInstrument_29.insert(UnderlyingCashType_29.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_29;
    UnderlyingContractMultiplier_29.setString("9163144");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_29);
    UnderlyingInstrument_29.insert(UnderlyingContractMultiplier_29.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_29(1734080513);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_29);
    UnderlyingInstrument_29.insert(UnderlyingContractMultiplierUnit_29.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_29("COUNTRY_1193247691");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_29);
    UnderlyingInstrument_29.insert(UnderlyingCountryOfIssue_29.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_29("LOCALMKTDATE_2076391821");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_29);
    UnderlyingInstrument_29.insert(UnderlyingCouponPaymentDate_29.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_29;
    UnderlyingCouponRate_29.setString("73.170000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_29);
    UnderlyingInstrument_29.insert(UnderlyingCouponRate_29.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_29("STRING_1882310332");
    noUnderlyings_0_2.set(UnderlyingCreditRating_29);
    UnderlyingInstrument_29.insert(UnderlyingCreditRating_29.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_29("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_29);
    UnderlyingInstrument_29.insert(UnderlyingCurrency_29.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_29;
    UnderlyingCurrentValue_29.setString("16382695");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_29);
    UnderlyingInstrument_29.insert(UnderlyingCurrentValue_29.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_29;
    UnderlyingDetachmentPoint_29.setString("72.850000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_29);
    UnderlyingInstrument_29.insert(UnderlyingDetachmentPoint_29.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_29;
    UnderlyingDirtyPrice_29.setString("11242484");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_29);
    UnderlyingInstrument_29.insert(UnderlyingDirtyPrice_29.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_29;
    UnderlyingEndPrice_29.setString("4817773");
    noUnderlyings_0_2.set(UnderlyingEndPrice_29);
    UnderlyingInstrument_29.insert(UnderlyingEndPrice_29.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_29;
    UnderlyingEndValue_29.setString("6041391");
    noUnderlyings_0_2.set(UnderlyingEndValue_29);
    UnderlyingInstrument_29.insert(UnderlyingEndValue_29.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_29(461383696);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_29);
    UnderlyingInstrument_29.insert(UnderlyingExerciseStyle_29.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_29;
    UnderlyingFXRate_29.setString("9553498");
    noUnderlyings_0_2.set(UnderlyingFXRate_29);
    UnderlyingInstrument_29.insert(UnderlyingFXRate_29.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_29('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_29);
    UnderlyingInstrument_29.insert(UnderlyingFXRateCalc_29.getString());
    FIX::UnderlyingFactor UnderlyingFactor_29;
    UnderlyingFactor_29.setString("19356536");
    noUnderlyings_0_2.set(UnderlyingFactor_29);
    UnderlyingInstrument_29.insert(UnderlyingFactor_29.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_29(1126854104);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_29);
    UnderlyingInstrument_29.insert(UnderlyingFlowScheduleType_29.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_29("STRING_191722325");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_29);
    UnderlyingInstrument_29.insert(UnderlyingInstrRegistry_29.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_29("LOCALMKTDATE_1211482432");
    noUnderlyings_0_2.set(UnderlyingIssueDate_29);
    UnderlyingInstrument_29.insert(UnderlyingIssueDate_29.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_29("STRING_2008969318");
    noUnderlyings_0_2.set(UnderlyingIssuer_29);
    UnderlyingInstrument_29.insert(UnderlyingIssuer_29.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_29("STRING_1746199088");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_29);
    UnderlyingInstrument_29.insert(UnderlyingLocaleOfIssue_29.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_29("LOCALMKTDATE_1547064415");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_29);
    UnderlyingInstrument_29.insert(UnderlyingMaturityDate_29.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_29("MONTHYEAR_375637364");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_29);
    UnderlyingInstrument_29.insert(UnderlyingMaturityMonthYear_29.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_29("TZTIMEONLY_771003664");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_29);
    UnderlyingInstrument_29.insert(UnderlyingMaturityTime_29.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_29;
    UnderlyingNotionalPercentageOutstanding_29.setString("83.300000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_29);
    UnderlyingInstrument_29.insert(UnderlyingNotionalPercentageOutstanding_29.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_29('3');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_29);
    UnderlyingInstrument_29.insert(UnderlyingOptAttribute_29.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_29;
    UnderlyingOriginalNotionalPercentageOutstanding_29.setString("29.110000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_29);
    UnderlyingInstrument_29.insert(UnderlyingOriginalNotionalPercentageOutstanding_29.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_29("STRING_1146995449");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_29);
    UnderlyingInstrument_29.insert(UnderlyingPriceUnitOfMeasure_29.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_29;
    UnderlyingPriceUnitOfMeasureQty_29.setString("9492723");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_29);
    UnderlyingInstrument_29.insert(UnderlyingPriceUnitOfMeasureQty_29.getString());
    FIX::UnderlyingProduct UnderlyingProduct_29(1291478596);
    noUnderlyings_0_2.set(UnderlyingProduct_29);
    UnderlyingInstrument_29.insert(UnderlyingProduct_29.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_29(2063309942);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_29);
    UnderlyingInstrument_29.insert(UnderlyingPutOrCall_29.getString());
    FIX::UnderlyingPx UnderlyingPx_29;
    UnderlyingPx_29.setString("5358692");
    noUnderlyings_0_2.set(UnderlyingPx_29);
    UnderlyingInstrument_29.insert(UnderlyingPx_29.getString());
    FIX::UnderlyingQty UnderlyingQty_29;
    UnderlyingQty_29.setString("3372426");
    noUnderlyings_0_2.set(UnderlyingQty_29);
    UnderlyingInstrument_29.insert(UnderlyingQty_29.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_29("LOCALMKTDATE_1992218115");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_29);
    UnderlyingInstrument_29.insert(UnderlyingRedemptionDate_29.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_29("STRING_437692912");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_29);
    UnderlyingInstrument_29.insert(UnderlyingRepoCollateralSecurityType_29.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_29;
    UnderlyingRepurchaseRate_29.setString("93.230000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_29);
    UnderlyingInstrument_29.insert(UnderlyingRepurchaseRate_29.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_29(1225767934);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_29);
    UnderlyingInstrument_29.insert(UnderlyingRepurchaseTerm_29.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_29("STRING_86381423");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_29);
    UnderlyingInstrument_29.insert(UnderlyingRestructuringType_29.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_29("STRING_1710338846");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityDesc_29.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_29("EXCHANGE_1765445219");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityExchange_29.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_29("STRING_1210629861");
    noUnderlyings_0_2.set(UnderlyingSecurityID_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityID_29.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_29("STRING_44632538");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityIDSource_29.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_29("STRING_222100680");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_29);
    UnderlyingInstrument_29.insert(UnderlyingSecuritySubType_29.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_29("STRING_1672013557");
    noUnderlyings_0_2.set(UnderlyingSecurityType_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityType_29.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_29("STRING_999982348");
    noUnderlyings_0_2.set(UnderlyingSeniority_29);
    UnderlyingInstrument_29.insert(UnderlyingSeniority_29.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_29("STRING_689984994");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_29);
    UnderlyingInstrument_29.insert(UnderlyingSettlMethod_29.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_29(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_29);
    UnderlyingInstrument_29.insert(UnderlyingSettlementType_29.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_29;
    UnderlyingStartValue_29.setString("21268364");
    noUnderlyings_0_2.set(UnderlyingStartValue_29);
    UnderlyingInstrument_29.insert(UnderlyingStartValue_29.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_29("STRING_881707319");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_29);
    UnderlyingInstrument_29.insert(UnderlyingStateOrProvinceOfIssue_29.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_29("CHF");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_29);
    UnderlyingInstrument_29.insert(UnderlyingStrikeCurrency_29.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_29;
    UnderlyingStrikePrice_29.setString("4804227");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_29);
    UnderlyingInstrument_29.insert(UnderlyingStrikePrice_29.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_29("STRING_2071246775");
    noUnderlyings_0_2.set(UnderlyingSymbol_29);
    UnderlyingInstrument_29.insert(UnderlyingSymbol_29.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_29("STRING_216475839");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_29);
    UnderlyingInstrument_29.insert(UnderlyingSymbolSfx_29.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_29("STRING_1251426424");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_29);
    UnderlyingInstrument_29.insert(UnderlyingTimeUnit_29.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_29("STRING_1962081458");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_29);
    UnderlyingInstrument_29.insert(UnderlyingUnitOfMeasure_29.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_29;
    UnderlyingUnitOfMeasureQty_29.setString("6041961");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_29);
    UnderlyingInstrument_29.insert(UnderlyingUnitOfMeasureQty_29.getString());
    all_values.push_back(UnderlyingInstrument_29);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_66;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_66("STRING_961593259");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_66);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_66.insert(UnderlyingSecurityAltID_66.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_66("STRING_1553468517");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_66);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_66.insert(UnderlyingSecurityAltIDSource_66.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_66);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_57;
      FIX::UnderlyingStipType UnderlyingStipType_57("STRING_877419553");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_57);
      UnderlyingStipulations_NoUnderlyingStips_57.insert(UnderlyingStipType_57.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_57("STRING_2089337761");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_57);
      UnderlyingStipulations_NoUnderlyingStips_57.insert(UnderlyingStipValue_57.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_57);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_58;
      FIX::UnderlyingStipType UnderlyingStipType_58("STRING_441153276");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_58);
      UnderlyingStipulations_NoUnderlyingStips_58.insert(UnderlyingStipType_58.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_58("STRING_722154020");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_58);
      UnderlyingStipulations_NoUnderlyingStips_58.insert(UnderlyingStipValue_58.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_58);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_59;
      FIX::UnderlyingStipType UnderlyingStipType_59("STRING_379547025");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_59);
      UnderlyingStipulations_NoUnderlyingStips_59.insert(UnderlyingStipType_59.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_59("STRING_513222599");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_59);
      UnderlyingStipulations_NoUnderlyingStips_59.insert(UnderlyingStipValue_59.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_59);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_58;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_58("STRING_465928448");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_58);
      UndlyInstrumentParties_NoUndlyInstrumentParties_58.insert(UnderlyingInstrumentPartyID_58.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_58('7');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_58);
      UndlyInstrumentParties_NoUndlyInstrumentParties_58.insert(UnderlyingInstrumentPartyIDSource_58.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_58(1565883526);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_58);
      UndlyInstrumentParties_NoUndlyInstrumentParties_58.insert(UnderlyingInstrumentPartyRole_58.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_58);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_117("STRING_120710336");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_117);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117.insert(UnderlyingInstrumentPartySubID_117.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_117(1787984206);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_117);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117.insert(UnderlyingInstrumentPartySubIDType_117.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_4;
  FIX::Yield Yield_4;
  Yield_4.setString("82.190000");
  msg.set(Yield_4);
  YieldData_4.insert(Yield_4.getString());
  FIX::YieldCalcDate YieldCalcDate_4("LOCALMKTDATE_1120692684");
  msg.set(YieldCalcDate_4);
  YieldData_4.insert(YieldCalcDate_4.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_4("LOCALMKTDATE_330485553");
  msg.set(YieldRedemptionDate_4);
  YieldData_4.insert(YieldRedemptionDate_4.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_4;
  YieldRedemptionPrice_4.setString("5137881");
  msg.set(YieldRedemptionPrice_4);
  YieldData_4.insert(YieldRedemptionPrice_4.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_4(1100045489);
  msg.set(YieldRedemptionPriceType_4);
  YieldData_4.insert(YieldRedemptionPriceType_4.getString());
  FIX::YieldType YieldType_4("STRING_LONGAVGLIFE");
  msg.set(YieldType_4);
  YieldData_4.insert(YieldType_4.getString());
  all_values.push_back(YieldData_4);
  all_compo_names.insert("YieldData");


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
