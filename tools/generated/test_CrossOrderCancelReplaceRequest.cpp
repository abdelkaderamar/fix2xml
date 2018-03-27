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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CrossOrderCancelReplaceRequest msg;

  list<multiset<string>> all_values;
  multiset<string> CrossOrderCancelReplaceRequest_0;
  FIX::CancellationRights CancellationRights_0('M');
  msg.set(CancellationRights_0);
  CrossOrderCancelReplaceRequest_0.insert(CancellationRights_0.getString());
  FIX::ComplianceID ComplianceID_0("STRING_925582821");
  msg.set(ComplianceID_0);
  CrossOrderCancelReplaceRequest_0.insert(ComplianceID_0.getString());
  FIX::CrossID CrossID_0("STRING_1039519322");
  msg.set(CrossID_0);
  CrossOrderCancelReplaceRequest_0.insert(CrossID_0.getString());
  FIX::CrossPrioritization CrossPrioritization_0(1);
  msg.set(CrossPrioritization_0);
  CrossOrderCancelReplaceRequest_0.insert(CrossPrioritization_0.getString());
  FIX::CrossType CrossType_0(3);
  msg.set(CrossType_0);
  CrossOrderCancelReplaceRequest_0.insert(CrossType_0.getString());
  FIX::Currency Currency_13("USD");
  msg.set(Currency_13);
  CrossOrderCancelReplaceRequest_0.insert(Currency_13.getString());
  FIX::Designation Designation_0("STRING_54637530");
  msg.set(Designation_0);
  CrossOrderCancelReplaceRequest_0.insert(Designation_0.getString());
  FIX::EffectiveTime EffectiveTime_0(FIX::UTCTIMESTAMP(3, 34, 15, 4, 92011));
  msg.set(EffectiveTime_0);
  CrossOrderCancelReplaceRequest_0.insert(EffectiveTime_0.getString());
  FIX::ExDestination ExDestination_0("EXCHANGE_1715490041");
  msg.set(ExDestination_0);
  CrossOrderCancelReplaceRequest_0.insert(ExDestination_0.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_0('D');
  msg.set(ExDestinationIDSource_0);
  CrossOrderCancelReplaceRequest_0.insert(ExDestinationIDSource_0.getString());
  FIX::ExecInst ExecInst_0("MULTIPLECHARVALUE_B");
  msg.set(ExecInst_0);
  CrossOrderCancelReplaceRequest_0.insert(ExecInst_0.getString());
  FIX::ExpireDate ExpireDate_1("LOCALMKTDATE_1276677585");
  msg.set(ExpireDate_1);
  CrossOrderCancelReplaceRequest_0.insert(ExpireDate_1.getString());
  FIX::ExpireTime ExpireTime_2(FIX::UTCTIMESTAMP(10, 55, 13, 5, 32008));
  msg.set(ExpireTime_2);
  CrossOrderCancelReplaceRequest_0.insert(ExpireTime_2.getString());
  FIX::GTBookingInst GTBookingInst_0(1);
  msg.set(GTBookingInst_0);
  CrossOrderCancelReplaceRequest_0.insert(GTBookingInst_0.getString());
  FIX::HandlInst HandlInst_0('1');
  msg.set(HandlInst_0);
  CrossOrderCancelReplaceRequest_0.insert(HandlInst_0.getString());
  FIX::HostCrossID HostCrossID_0("STRING_1911562853");
  msg.set(HostCrossID_0);
  CrossOrderCancelReplaceRequest_0.insert(HostCrossID_0.getString());
  FIX::IOIID IOIID_0("STRING_1114481839");
  msg.set(IOIID_0);
  CrossOrderCancelReplaceRequest_0.insert(IOIID_0.getString());
  FIX::LocateReqd LocateReqd_0(true);
  msg.set(LocateReqd_0);
  CrossOrderCancelReplaceRequest_0.insert(LocateReqd_0.getString());
  FIX::MatchIncrement MatchIncrement_0;
  MatchIncrement_0.setString("18909716");
  msg.set(MatchIncrement_0);
  CrossOrderCancelReplaceRequest_0.insert(MatchIncrement_0.getString());
  FIX::MaxFloor MaxFloor_0;
  MaxFloor_0.setString("20400646");
  msg.set(MaxFloor_0);
  CrossOrderCancelReplaceRequest_0.insert(MaxFloor_0.getString());
  FIX::MaxPriceLevels MaxPriceLevels_0(1729880032);
  msg.set(MaxPriceLevels_0);
  CrossOrderCancelReplaceRequest_0.insert(MaxPriceLevels_0.getString());
  FIX::MaxShow MaxShow_0;
  MaxShow_0.setString("4325170");
  msg.set(MaxShow_0);
  CrossOrderCancelReplaceRequest_0.insert(MaxShow_0.getString());
  FIX::MinQty MinQty_0;
  MinQty_0.setString("10314839");
  msg.set(MinQty_0);
  CrossOrderCancelReplaceRequest_0.insert(MinQty_0.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_0('2');
  msg.set(MoneyLaunderingStatus_0);
  CrossOrderCancelReplaceRequest_0.insert(MoneyLaunderingStatus_0.getString());
  FIX::OrdType OrdType_0('B');
  msg.set(OrdType_0);
  CrossOrderCancelReplaceRequest_0.insert(OrdType_0.getString());
  FIX::OrderID OrderID_15("STRING_1086121481");
  msg.set(OrderID_15);
  CrossOrderCancelReplaceRequest_0.insert(OrderID_15.getString());
  FIX::OrigCrossID OrigCrossID_0("STRING_437846407");
  msg.set(OrigCrossID_0);
  CrossOrderCancelReplaceRequest_0.insert(OrigCrossID_0.getString());
  FIX::ParticipationRate ParticipationRate_0;
  ParticipationRate_0.setString("12.290000");
  msg.set(ParticipationRate_0);
  CrossOrderCancelReplaceRequest_0.insert(ParticipationRate_0.getString());
  FIX::PrevClosePx PrevClosePx_0;
  PrevClosePx_0.setString("7878106");
  msg.set(PrevClosePx_0);
  CrossOrderCancelReplaceRequest_0.insert(PrevClosePx_0.getString());
  FIX::Price Price_7;
  Price_7.setString("7458180");
  msg.set(Price_7);
  CrossOrderCancelReplaceRequest_0.insert(Price_7.getString());
  FIX::PriceProtectionScope PriceProtectionScope_0('1');
  msg.set(PriceProtectionScope_0);
  CrossOrderCancelReplaceRequest_0.insert(PriceProtectionScope_0.getString());
  FIX::PriceType PriceType_10(17);
  msg.set(PriceType_10);
  CrossOrderCancelReplaceRequest_0.insert(PriceType_10.getString());
  FIX::ProcessCode ProcessCode_6('0');
  msg.set(ProcessCode_6);
  CrossOrderCancelReplaceRequest_0.insert(ProcessCode_6.getString());
  FIX::QuoteID QuoteID_0("STRING_187940363");
  msg.set(QuoteID_0);
  CrossOrderCancelReplaceRequest_0.insert(QuoteID_0.getString());
  FIX::RegistID RegistID_0("STRING_1609306759");
  msg.set(RegistID_0);
  CrossOrderCancelReplaceRequest_0.insert(RegistID_0.getString());
  FIX::SettlDate SettlDate_13("LOCALMKTDATE_999294298");
  msg.set(SettlDate_13);
  CrossOrderCancelReplaceRequest_0.insert(SettlDate_13.getString());
  FIX::SettlType SettlType_7("STRING_8");
  msg.set(SettlType_7);
  CrossOrderCancelReplaceRequest_0.insert(SettlType_7.getString());
  FIX::StopPx StopPx_0;
  StopPx_0.setString("3731756");
  msg.set(StopPx_0);
  CrossOrderCancelReplaceRequest_0.insert(StopPx_0.getString());
  FIX::TargetStrategy TargetStrategy_0(1);
  msg.set(TargetStrategy_0);
  CrossOrderCancelReplaceRequest_0.insert(TargetStrategy_0.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_0("STRING_432312896");
  msg.set(TargetStrategyParameters_0);
  CrossOrderCancelReplaceRequest_0.insert(TargetStrategyParameters_0.getString());
  FIX::TimeInForce TimeInForce_0('6');
  msg.set(TimeInForce_0);
  CrossOrderCancelReplaceRequest_0.insert(TimeInForce_0.getString());
  FIX::TransBkdTime TransBkdTime_0(FIX::UTCTIMESTAMP(10, 45, 13, 25, 72002));
  msg.set(TransBkdTime_0);
  CrossOrderCancelReplaceRequest_0.insert(TransBkdTime_0.getString());
  FIX::TransactTime TransactTime_14(FIX::UTCTIMESTAMP(18, 5, 19, 22, 92009));
  msg.set(TransactTime_14);
  CrossOrderCancelReplaceRequest_0.insert(TransactTime_14.getString());
  all_values.push_back(CrossOrderCancelReplaceRequest_0);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_0;
  FIX::DiscretionInst DiscretionInst_0('1');
  msg.set(DiscretionInst_0);
  DiscretionInstructions_0.insert(DiscretionInst_0.getString());
  FIX::DiscretionLimitType DiscretionLimitType_0(1);
  msg.set(DiscretionLimitType_0);
  DiscretionInstructions_0.insert(DiscretionLimitType_0.getString());
  FIX::DiscretionMoveType DiscretionMoveType_0(0);
  msg.set(DiscretionMoveType_0);
  DiscretionInstructions_0.insert(DiscretionMoveType_0.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_0(2);
  msg.set(DiscretionOffsetType_0);
  DiscretionInstructions_0.insert(DiscretionOffsetType_0.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_0;
  DiscretionOffsetValue_0.setString("3601208");
  msg.set(DiscretionOffsetValue_0);
  DiscretionInstructions_0.insert(DiscretionOffsetValue_0.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_0(1);
  msg.set(DiscretionRoundDirection_0);
  DiscretionInstructions_0.insert(DiscretionRoundDirection_0.getString());
  FIX::DiscretionScope DiscretionScope_0(1);
  msg.set(DiscretionScope_0);
  DiscretionInstructions_0.insert(DiscretionScope_0.getString());
  all_values.push_back(DiscretionInstructions_0);

  // DisplayInstruction
  multiset<string> DisplayInstruction_0;
  FIX::DisplayHighQty DisplayHighQty_0;
  DisplayHighQty_0.setString("11541848");
  msg.set(DisplayHighQty_0);
  DisplayInstruction_0.insert(DisplayHighQty_0.getString());
  FIX::DisplayLowQty DisplayLowQty_0;
  DisplayLowQty_0.setString("10410036");
  msg.set(DisplayLowQty_0);
  DisplayInstruction_0.insert(DisplayLowQty_0.getString());
  FIX::DisplayMethod DisplayMethod_0('4');
  msg.set(DisplayMethod_0);
  DisplayInstruction_0.insert(DisplayMethod_0.getString());
  FIX::DisplayMinIncr DisplayMinIncr_0;
  DisplayMinIncr_0.setString("6160079");
  msg.set(DisplayMinIncr_0);
  DisplayInstruction_0.insert(DisplayMinIncr_0.getString());
  FIX::DisplayQty DisplayQty_0;
  DisplayQty_0.setString("20402979");
  msg.set(DisplayQty_0);
  DisplayInstruction_0.insert(DisplayQty_0.getString());
  FIX::DisplayWhen DisplayWhen_0('2');
  msg.set(DisplayWhen_0);
  DisplayInstruction_0.insert(DisplayWhen_0.getString());
  FIX::RefreshQty RefreshQty_0;
  RefreshQty_0.setString("9891835");
  msg.set(RefreshQty_0);
  DisplayInstruction_0.insert(RefreshQty_0.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_0;
  SecondaryDisplayQty_0.setString("5721607");
  msg.set(SecondaryDisplayQty_0);
  DisplayInstruction_0.insert(SecondaryDisplayQty_0.getString());
  all_values.push_back(DisplayInstruction_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_21;
    FIX::EncodedLegIssuer EncodedLegIssuer_21("DATA_693433318");
    noLegs_0_0.set(EncodedLegIssuer_21);
    InstrumentLeg_21.insert(EncodedLegIssuer_21.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_21(1721555839);
    noLegs_0_0.set(EncodedLegIssuerLen_21);
    InstrumentLeg_21.insert(EncodedLegIssuerLen_21.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_21("DATA_656221434");
    noLegs_0_0.set(EncodedLegSecurityDesc_21);
    InstrumentLeg_21.insert(EncodedLegSecurityDesc_21.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_21(1283861323);
    noLegs_0_0.set(EncodedLegSecurityDescLen_21);
    InstrumentLeg_21.insert(EncodedLegSecurityDescLen_21.getString());
    FIX::LegCFICode LegCFICode_21("STRING_316681404");
    noLegs_0_0.set(LegCFICode_21);
    InstrumentLeg_21.insert(LegCFICode_21.getString());
    FIX::LegContractMultiplier LegContractMultiplier_21;
    LegContractMultiplier_21.setString("11707236");
    noLegs_0_0.set(LegContractMultiplier_21);
    InstrumentLeg_21.insert(LegContractMultiplier_21.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_21(1638368533);
    noLegs_0_0.set(LegContractMultiplierUnit_21);
    InstrumentLeg_21.insert(LegContractMultiplierUnit_21.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_21("MONTHYEAR_26288809");
    noLegs_0_0.set(LegContractSettlMonth_21);
    InstrumentLeg_21.insert(LegContractSettlMonth_21.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_21("COUNTRY_228103026");
    noLegs_0_0.set(LegCountryOfIssue_21);
    InstrumentLeg_21.insert(LegCountryOfIssue_21.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_21("LOCALMKTDATE_1736363767");
    noLegs_0_0.set(LegCouponPaymentDate_21);
    InstrumentLeg_21.insert(LegCouponPaymentDate_21.getString());
    FIX::LegCouponRate LegCouponRate_21;
    LegCouponRate_21.setString("8.740000");
    noLegs_0_0.set(LegCouponRate_21);
    InstrumentLeg_21.insert(LegCouponRate_21.getString());
    FIX::LegCreditRating LegCreditRating_21("STRING_1015362385");
    noLegs_0_0.set(LegCreditRating_21);
    InstrumentLeg_21.insert(LegCreditRating_21.getString());
    FIX::LegCurrency LegCurrency_21("USD");
    noLegs_0_0.set(LegCurrency_21);
    InstrumentLeg_21.insert(LegCurrency_21.getString());
    FIX::LegDatedDate LegDatedDate_21("LOCALMKTDATE_1199635000");
    noLegs_0_0.set(LegDatedDate_21);
    InstrumentLeg_21.insert(LegDatedDate_21.getString());
    FIX::LegExerciseStyle LegExerciseStyle_21(892288439);
    noLegs_0_0.set(LegExerciseStyle_21);
    InstrumentLeg_21.insert(LegExerciseStyle_21.getString());
    FIX::LegFactor LegFactor_21;
    LegFactor_21.setString("19819434");
    noLegs_0_0.set(LegFactor_21);
    InstrumentLeg_21.insert(LegFactor_21.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_21(1821754022);
    noLegs_0_0.set(LegFlowScheduleType_21);
    InstrumentLeg_21.insert(LegFlowScheduleType_21.getString());
    FIX::LegInstrRegistry LegInstrRegistry_21("STRING_107372013");
    noLegs_0_0.set(LegInstrRegistry_21);
    InstrumentLeg_21.insert(LegInstrRegistry_21.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_21("LOCALMKTDATE_194580683");
    noLegs_0_0.set(LegInterestAccrualDate_21);
    InstrumentLeg_21.insert(LegInterestAccrualDate_21.getString());
    FIX::LegIssueDate LegIssueDate_21("LOCALMKTDATE_1042207418");
    noLegs_0_0.set(LegIssueDate_21);
    InstrumentLeg_21.insert(LegIssueDate_21.getString());
    FIX::LegIssuer LegIssuer_21("STRING_2089873205");
    noLegs_0_0.set(LegIssuer_21);
    InstrumentLeg_21.insert(LegIssuer_21.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_21("STRING_1348765538");
    noLegs_0_0.set(LegLocaleOfIssue_21);
    InstrumentLeg_21.insert(LegLocaleOfIssue_21.getString());
    FIX::LegMaturityDate LegMaturityDate_21("LOCALMKTDATE_2083211021");
    noLegs_0_0.set(LegMaturityDate_21);
    InstrumentLeg_21.insert(LegMaturityDate_21.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_21("MONTHYEAR_2112831112");
    noLegs_0_0.set(LegMaturityMonthYear_21);
    InstrumentLeg_21.insert(LegMaturityMonthYear_21.getString());
    FIX::LegMaturityTime LegMaturityTime_21("TZTIMEONLY_1964773504");
    noLegs_0_0.set(LegMaturityTime_21);
    InstrumentLeg_21.insert(LegMaturityTime_21.getString());
    FIX::LegOptAttribute LegOptAttribute_21('1');
    noLegs_0_0.set(LegOptAttribute_21);
    InstrumentLeg_21.insert(LegOptAttribute_21.getString());
    FIX::LegOptionRatio LegOptionRatio_21;
    LegOptionRatio_21.setString("14529233");
    noLegs_0_0.set(LegOptionRatio_21);
    InstrumentLeg_21.insert(LegOptionRatio_21.getString());
    FIX::LegPool LegPool_21("STRING_806473445");
    noLegs_0_0.set(LegPool_21);
    InstrumentLeg_21.insert(LegPool_21.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_21("STRING_400702412");
    noLegs_0_0.set(LegPriceUnitOfMeasure_21);
    InstrumentLeg_21.insert(LegPriceUnitOfMeasure_21.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_21;
    LegPriceUnitOfMeasureQty_21.setString("12253284");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_21);
    InstrumentLeg_21.insert(LegPriceUnitOfMeasureQty_21.getString());
    FIX::LegProduct LegProduct_21(1499906763);
    noLegs_0_0.set(LegProduct_21);
    InstrumentLeg_21.insert(LegProduct_21.getString());
    FIX::LegPutOrCall LegPutOrCall_21(2122258251);
    noLegs_0_0.set(LegPutOrCall_21);
    InstrumentLeg_21.insert(LegPutOrCall_21.getString());
    FIX::LegRatioQty LegRatioQty_21;
    LegRatioQty_21.setString("18815498");
    noLegs_0_0.set(LegRatioQty_21);
    InstrumentLeg_21.insert(LegRatioQty_21.getString());
    FIX::LegRedemptionDate LegRedemptionDate_21("LOCALMKTDATE_636284438");
    noLegs_0_0.set(LegRedemptionDate_21);
    InstrumentLeg_21.insert(LegRedemptionDate_21.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_21("STRING_291456008");
    noLegs_0_0.set(LegRepoCollateralSecurityType_21);
    InstrumentLeg_21.insert(LegRepoCollateralSecurityType_21.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_21;
    LegRepurchaseRate_21.setString("99.080000");
    noLegs_0_0.set(LegRepurchaseRate_21);
    InstrumentLeg_21.insert(LegRepurchaseRate_21.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_21(127169324);
    noLegs_0_0.set(LegRepurchaseTerm_21);
    InstrumentLeg_21.insert(LegRepurchaseTerm_21.getString());
    FIX::LegSecurityDesc LegSecurityDesc_21("STRING_317744817");
    noLegs_0_0.set(LegSecurityDesc_21);
    InstrumentLeg_21.insert(LegSecurityDesc_21.getString());
    FIX::LegSecurityExchange LegSecurityExchange_21("EXCHANGE_1132892934");
    noLegs_0_0.set(LegSecurityExchange_21);
    InstrumentLeg_21.insert(LegSecurityExchange_21.getString());
    FIX::LegSecurityID LegSecurityID_21("STRING_1863533091");
    noLegs_0_0.set(LegSecurityID_21);
    InstrumentLeg_21.insert(LegSecurityID_21.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_21("STRING_2093705691");
    noLegs_0_0.set(LegSecurityIDSource_21);
    InstrumentLeg_21.insert(LegSecurityIDSource_21.getString());
    FIX::LegSecuritySubType LegSecuritySubType_21("STRING_771672");
    noLegs_0_0.set(LegSecuritySubType_21);
    InstrumentLeg_21.insert(LegSecuritySubType_21.getString());
    FIX::LegSecurityType LegSecurityType_21("STRING_1982925537");
    noLegs_0_0.set(LegSecurityType_21);
    InstrumentLeg_21.insert(LegSecurityType_21.getString());
    FIX::LegSide LegSide_21('2');
    noLegs_0_0.set(LegSide_21);
    InstrumentLeg_21.insert(LegSide_21.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_21("STRING_1200406672");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_21);
    InstrumentLeg_21.insert(LegStateOrProvinceOfIssue_21.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_21("USD");
    noLegs_0_0.set(LegStrikeCurrency_21);
    InstrumentLeg_21.insert(LegStrikeCurrency_21.getString());
    FIX::LegStrikePrice LegStrikePrice_21;
    LegStrikePrice_21.setString("8746770");
    noLegs_0_0.set(LegStrikePrice_21);
    InstrumentLeg_21.insert(LegStrikePrice_21.getString());
    FIX::LegSymbol LegSymbol_21("STRING_835102342");
    noLegs_0_0.set(LegSymbol_21);
    InstrumentLeg_21.insert(LegSymbol_21.getString());
    FIX::LegSymbolSfx LegSymbolSfx_21("STRING_237412115");
    noLegs_0_0.set(LegSymbolSfx_21);
    InstrumentLeg_21.insert(LegSymbolSfx_21.getString());
    FIX::LegTimeUnit LegTimeUnit_21("STRING_1916884465");
    noLegs_0_0.set(LegTimeUnit_21);
    InstrumentLeg_21.insert(LegTimeUnit_21.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_21("STRING_777491899");
    noLegs_0_0.set(LegUnitOfMeasure_21);
    InstrumentLeg_21.insert(LegUnitOfMeasure_21.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_21;
    LegUnitOfMeasureQty_21.setString("15861776");
    noLegs_0_0.set(LegUnitOfMeasureQty_21);
    InstrumentLeg_21.insert(LegUnitOfMeasureQty_21.getString());
    all_values.push_back(InstrumentLeg_21);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_34;
      FIX::LegSecurityAltID LegSecurityAltID_34("STRING_742839364");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_34);
      LegSecAltIDGrp_NoLegSecurityAltID_34.insert(LegSecurityAltID_34.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_34("STRING_1403467509");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_34);
      LegSecAltIDGrp_NoLegSecurityAltID_34.insert(LegSecurityAltIDSource_34.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_34);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_35;
      FIX::LegSecurityAltID LegSecurityAltID_35("STRING_1681153465");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_35);
      LegSecAltIDGrp_NoLegSecurityAltID_35.insert(LegSecurityAltID_35.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_35("STRING_48279036");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_35);
      LegSecAltIDGrp_NoLegSecurityAltID_35.insert(LegSecurityAltIDSource_35.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_35);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_36;
      FIX::LegSecurityAltID LegSecurityAltID_36("STRING_62457306");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_36);
      LegSecAltIDGrp_NoLegSecurityAltID_36.insert(LegSecurityAltID_36.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_36("STRING_2081855877");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_36);
      LegSecAltIDGrp_NoLegSecurityAltID_36.insert(LegSecurityAltIDSource_36.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_36);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_15;
  FIX::AttachmentPoint AttachmentPoint_15;
  AttachmentPoint_15.setString("74.590000");
  msg.set(AttachmentPoint_15);
  Instrument_15.insert(AttachmentPoint_15.getString());
  FIX::CFICode CFICode_15("STRING_1562364070");
  msg.set(CFICode_15);
  Instrument_15.insert(CFICode_15.getString());
  FIX::CPProgram CPProgram_15(99);
  msg.set(CPProgram_15);
  Instrument_15.insert(CPProgram_15.getString());
  FIX::CPRegType CPRegType_15("STRING_1007673669");
  msg.set(CPRegType_15);
  Instrument_15.insert(CPRegType_15.getString());
  FIX::CapPrice CapPrice_15;
  CapPrice_15.setString("511648");
  msg.set(CapPrice_15);
  Instrument_15.insert(CapPrice_15.getString());
  FIX::ContractMultiplier ContractMultiplier_15;
  ContractMultiplier_15.setString("2006028");
  msg.set(ContractMultiplier_15);
  Instrument_15.insert(ContractMultiplier_15.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_15(0);
  msg.set(ContractMultiplierUnit_15);
  Instrument_15.insert(ContractMultiplierUnit_15.getString());
  FIX::ContractSettlMonth ContractSettlMonth_15("MONTHYEAR_178334184");
  msg.set(ContractSettlMonth_15);
  Instrument_15.insert(ContractSettlMonth_15.getString());
  FIX::CountryOfIssue CountryOfIssue_15("COUNTRY_518347658");
  msg.set(CountryOfIssue_15);
  Instrument_15.insert(CountryOfIssue_15.getString());
  FIX::CouponPaymentDate CouponPaymentDate_15("LOCALMKTDATE_897872864");
  msg.set(CouponPaymentDate_15);
  Instrument_15.insert(CouponPaymentDate_15.getString());
  FIX::CouponRate CouponRate_15;
  CouponRate_15.setString("72.760000");
  msg.set(CouponRate_15);
  Instrument_15.insert(CouponRate_15.getString());
  FIX::CreditRating CreditRating_15("STRING_464569701");
  msg.set(CreditRating_15);
  Instrument_15.insert(CreditRating_15.getString());
  FIX::DatedDate DatedDate_15("LOCALMKTDATE_898644536");
  msg.set(DatedDate_15);
  Instrument_15.insert(DatedDate_15.getString());
  FIX::DetachmentPoint DetachmentPoint_15;
  DetachmentPoint_15.setString("91.650000");
  msg.set(DetachmentPoint_15);
  Instrument_15.insert(DetachmentPoint_15.getString());
  FIX::EncodedIssuer EncodedIssuer_15("DATA_672941338");
  msg.set(EncodedIssuer_15);
  Instrument_15.insert(EncodedIssuer_15.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_15(2099051208);
  msg.set(EncodedIssuerLen_15);
  Instrument_15.insert(EncodedIssuerLen_15.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_15("DATA_457555846");
  msg.set(EncodedSecurityDesc_15);
  Instrument_15.insert(EncodedSecurityDesc_15.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_15(715772770);
  msg.set(EncodedSecurityDescLen_15);
  Instrument_15.insert(EncodedSecurityDescLen_15.getString());
  FIX::ExerciseStyle ExerciseStyle_15(0);
  msg.set(ExerciseStyle_15);
  Instrument_15.insert(ExerciseStyle_15.getString());
  FIX::Factor Factor_15;
  Factor_15.setString("12926581");
  msg.set(Factor_15);
  Instrument_15.insert(Factor_15.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_15(false);
  msg.set(FlexProductEligibilityIndicator_15);
  Instrument_15.insert(FlexProductEligibilityIndicator_15.getString());
  FIX::FlexibleIndicator FlexibleIndicator_15(false);
  msg.set(FlexibleIndicator_15);
  Instrument_15.insert(FlexibleIndicator_15.getString());
  FIX::FloorPrice FloorPrice_15;
  FloorPrice_15.setString("20701500");
  msg.set(FloorPrice_15);
  Instrument_15.insert(FloorPrice_15.getString());
  FIX::FlowScheduleType FlowScheduleType_15(0);
  msg.set(FlowScheduleType_15);
  Instrument_15.insert(FlowScheduleType_15.getString());
  FIX::InstrRegistry InstrRegistry_15("STRING_300773616");
  msg.set(InstrRegistry_15);
  Instrument_15.insert(InstrRegistry_15.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_15('6');
  msg.set(InstrmtAssignmentMethod_15);
  Instrument_15.insert(InstrmtAssignmentMethod_15.getString());
  FIX::InterestAccrualDate InterestAccrualDate_15("LOCALMKTDATE_1795346399");
  msg.set(InterestAccrualDate_15);
  Instrument_15.insert(InterestAccrualDate_15.getString());
  FIX::IssueDate IssueDate_15("LOCALMKTDATE_1981927081");
  msg.set(IssueDate_15);
  Instrument_15.insert(IssueDate_15.getString());
  FIX::Issuer Issuer_15("STRING_713784839");
  msg.set(Issuer_15);
  Instrument_15.insert(Issuer_15.getString());
  FIX::ListMethod ListMethod_15(1);
  msg.set(ListMethod_15);
  Instrument_15.insert(ListMethod_15.getString());
  FIX::LocaleOfIssue LocaleOfIssue_15("STRING_1916299311");
  msg.set(LocaleOfIssue_15);
  Instrument_15.insert(LocaleOfIssue_15.getString());
  FIX::MaturityDate MaturityDate_15("LOCALMKTDATE_1987392299");
  msg.set(MaturityDate_15);
  Instrument_15.insert(MaturityDate_15.getString());
  FIX::MaturityMonthYear MaturityMonthYear_15("MONTHYEAR_1272684127");
  msg.set(MaturityMonthYear_15);
  Instrument_15.insert(MaturityMonthYear_15.getString());
  FIX::MaturityTime MaturityTime_15("TZTIMEONLY_1825446144");
  msg.set(MaturityTime_15);
  Instrument_15.insert(MaturityTime_15.getString());
  FIX::MinPriceIncrement MinPriceIncrement_15;
  MinPriceIncrement_15.setString("8475823");
  msg.set(MinPriceIncrement_15);
  Instrument_15.insert(MinPriceIncrement_15.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_15;
  MinPriceIncrementAmount_15.setString("13238489");
  msg.set(MinPriceIncrementAmount_15);
  Instrument_15.insert(MinPriceIncrementAmount_15.getString());
  FIX::NTPositionLimit NTPositionLimit_15(2026048985);
  msg.set(NTPositionLimit_15);
  Instrument_15.insert(NTPositionLimit_15.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_15;
  NotionalPercentageOutstanding_15.setString("22.490000");
  msg.set(NotionalPercentageOutstanding_15);
  Instrument_15.insert(NotionalPercentageOutstanding_15.getString());
  FIX::OptAttribute OptAttribute_15('1');
  msg.set(OptAttribute_15);
  Instrument_15.insert(OptAttribute_15.getString());
  FIX::OptPayoutAmount OptPayoutAmount_15;
  OptPayoutAmount_15.setString("3969129");
  msg.set(OptPayoutAmount_15);
  Instrument_15.insert(OptPayoutAmount_15.getString());
  FIX::OptPayoutType OptPayoutType_15(1);
  msg.set(OptPayoutType_15);
  Instrument_15.insert(OptPayoutType_15.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_15;
  OriginalNotionalPercentageOutstanding_15.setString("68.000000");
  msg.set(OriginalNotionalPercentageOutstanding_15);
  Instrument_15.insert(OriginalNotionalPercentageOutstanding_15.getString());
  FIX::Pool Pool_15("STRING_861482696");
  msg.set(Pool_15);
  Instrument_15.insert(Pool_15.getString());
  FIX::PositionLimit PositionLimit_15(261596001);
  msg.set(PositionLimit_15);
  Instrument_15.insert(PositionLimit_15.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_15("STRING_INT");
  msg.set(PriceQuoteMethod_15);
  Instrument_15.insert(PriceQuoteMethod_15.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_15("STRING_1534424034");
  msg.set(PriceUnitOfMeasure_15);
  Instrument_15.insert(PriceUnitOfMeasure_15.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_15;
  PriceUnitOfMeasureQty_15.setString("2131635");
  msg.set(PriceUnitOfMeasureQty_15);
  Instrument_15.insert(PriceUnitOfMeasureQty_15.getString());
  FIX::Product Product_17(7);
  msg.set(Product_17);
  Instrument_15.insert(Product_17.getString());
  FIX::ProductComplex ProductComplex_15("STRING_102713156");
  msg.set(ProductComplex_15);
  Instrument_15.insert(ProductComplex_15.getString());
  FIX::PutOrCall PutOrCall_15(1);
  msg.set(PutOrCall_15);
  Instrument_15.insert(PutOrCall_15.getString());
  FIX::RedemptionDate RedemptionDate_15("LOCALMKTDATE_729122704");
  msg.set(RedemptionDate_15);
  Instrument_15.insert(RedemptionDate_15.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_15("STRING_1055898041");
  msg.set(RepoCollateralSecurityType_15);
  Instrument_15.insert(RepoCollateralSecurityType_15.getString());
  FIX::RepurchaseRate RepurchaseRate_15;
  RepurchaseRate_15.setString("35.940000");
  msg.set(RepurchaseRate_15);
  Instrument_15.insert(RepurchaseRate_15.getString());
  FIX::RepurchaseTerm RepurchaseTerm_15(651789143);
  msg.set(RepurchaseTerm_15);
  Instrument_15.insert(RepurchaseTerm_15.getString());
  FIX::RestructuringType RestructuringType_15("STRING_XR");
  msg.set(RestructuringType_15);
  Instrument_15.insert(RestructuringType_15.getString());
  FIX::SecurityDesc SecurityDesc_15("STRING_1935827210");
  msg.set(SecurityDesc_15);
  Instrument_15.insert(SecurityDesc_15.getString());
  FIX::SecurityExchange SecurityExchange_15("EXCHANGE_1317294947");
  msg.set(SecurityExchange_15);
  Instrument_15.insert(SecurityExchange_15.getString());
  FIX::SecurityGroup SecurityGroup_15("STRING_1095639682");
  msg.set(SecurityGroup_15);
  Instrument_15.insert(SecurityGroup_15.getString());
  FIX::SecurityID SecurityID_15("STRING_1770270644");
  msg.set(SecurityID_15);
  Instrument_15.insert(SecurityID_15.getString());
  FIX::SecurityIDSource SecurityIDSource_15("STRING_B");
  msg.set(SecurityIDSource_15);
  Instrument_15.insert(SecurityIDSource_15.getString());
  FIX::SecurityStatus SecurityStatus_15("STRING_2");
  msg.set(SecurityStatus_15);
  Instrument_15.insert(SecurityStatus_15.getString());
  FIX::SecuritySubType SecuritySubType_15("STRING_1539086307");
  msg.set(SecuritySubType_15);
  Instrument_15.insert(SecuritySubType_15.getString());
  FIX::SecurityType SecurityType_17("STRING_CS");
  msg.set(SecurityType_17);
  Instrument_15.insert(SecurityType_17.getString());
  FIX::Seniority Seniority_15("STRING_SD");
  msg.set(Seniority_15);
  Instrument_15.insert(Seniority_15.getString());
  FIX::SettlMethod SettlMethod_15('P');
  msg.set(SettlMethod_15);
  Instrument_15.insert(SettlMethod_15.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_15("STRING_571087109");
  msg.set(SettleOnOpenFlag_15);
  Instrument_15.insert(SettleOnOpenFlag_15.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_15("STRING_1255009207");
  msg.set(StateOrProvinceOfIssue_15);
  Instrument_15.insert(StateOrProvinceOfIssue_15.getString());
  FIX::StrikeCurrency StrikeCurrency_15("EUR");
  msg.set(StrikeCurrency_15);
  Instrument_15.insert(StrikeCurrency_15.getString());
  FIX::StrikeMultiplier StrikeMultiplier_15;
  StrikeMultiplier_15.setString("6097087");
  msg.set(StrikeMultiplier_15);
  Instrument_15.insert(StrikeMultiplier_15.getString());
  FIX::StrikePrice StrikePrice_15;
  StrikePrice_15.setString("14925271");
  msg.set(StrikePrice_15);
  Instrument_15.insert(StrikePrice_15.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_15(5);
  msg.set(StrikePriceBoundaryMethod_15);
  Instrument_15.insert(StrikePriceBoundaryMethod_15.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_15;
  StrikePriceBoundaryPrecision_15.setString("55.320000");
  msg.set(StrikePriceBoundaryPrecision_15);
  Instrument_15.insert(StrikePriceBoundaryPrecision_15.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_15(4);
  msg.set(StrikePriceDeterminationMethod_15);
  Instrument_15.insert(StrikePriceDeterminationMethod_15.getString());
  FIX::StrikeValue StrikeValue_15;
  StrikeValue_15.setString("8081968");
  msg.set(StrikeValue_15);
  Instrument_15.insert(StrikeValue_15.getString());
  FIX::Symbol Symbol_15("STRING_985184202");
  msg.set(Symbol_15);
  Instrument_15.insert(Symbol_15.getString());
  FIX::SymbolSfx SymbolSfx_15("STRING_WI");
  msg.set(SymbolSfx_15);
  Instrument_15.insert(SymbolSfx_15.getString());
  FIX::TimeUnit TimeUnit_15("STRING_Yr");
  msg.set(TimeUnit_15);
  Instrument_15.insert(TimeUnit_15.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_15(3);
  msg.set(UnderlyingPriceDeterminationMethod_15);
  Instrument_15.insert(UnderlyingPriceDeterminationMethod_15.getString());
  FIX::UnitOfMeasure UnitOfMeasure_15("STRING_lbs");
  msg.set(UnitOfMeasure_15);
  Instrument_15.insert(UnitOfMeasure_15.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_15;
  UnitOfMeasureQty_15.setString("20607685");
  msg.set(UnitOfMeasureQty_15);
  Instrument_15.insert(UnitOfMeasureQty_15.getString());
  FIX::ValuationMethod ValuationMethod_15("STRING_FUTDA");
  msg.set(ValuationMethod_15);
  Instrument_15.insert(ValuationMethod_15.getString());
  all_values.push_back(Instrument_15);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_32;
    FIX::ComplexEventCondition ComplexEventCondition_32(1);
    noComplexEvents_0_0.set(ComplexEventCondition_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventCondition_32.getString());
    FIX::ComplexEventPrice ComplexEventPrice_32;
    ComplexEventPrice_32.setString("18025605");
    noComplexEvents_0_0.set(ComplexEventPrice_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventPrice_32.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_32(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventPriceBoundaryMethod_32.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_32;
    ComplexEventPriceBoundaryPrecision_32.setString("20.660000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventPriceBoundaryPrecision_32.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_32(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventPriceTimeType_32.getString());
    FIX::ComplexEventType ComplexEventType_32(9);
    noComplexEvents_0_0.set(ComplexEventType_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventType_32.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_32;
    ComplexOptPayoutAmount_32.setString("9594690");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexOptPayoutAmount_32.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_32);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_66;
      FIX::ComplexEventEndDate ComplexEventEndDate_66(FIX::UTCTIMESTAMP(9, 52, 49, 12, 112006));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_66);
      ComplexEventDates_NoComplexEventDates_66.insert(ComplexEventEndDate_66.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_66(FIX::UTCTIMESTAMP(21, 0, 51, 25, 12016));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_66);
      ComplexEventDates_NoComplexEventDates_66.insert(ComplexEventStartDate_66.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_66);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_130;
        FIX::ComplexEventEndTime ComplexEventEndTime_130(FIX::UTCTIMEONLY(7, 23, 36));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_130);
        ComplexEventTimes_NoComplexEventTimes_130.insert(ComplexEventEndTime_130.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_130(FIX::UTCTIMEONLY(17, 18, 46));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_130);
        ComplexEventTimes_NoComplexEventTimes_130.insert(ComplexEventStartTime_130.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_130);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_131;
        FIX::ComplexEventEndTime ComplexEventEndTime_131(FIX::UTCTIMEONLY(3, 35, 55));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_131);
        ComplexEventTimes_NoComplexEventTimes_131.insert(ComplexEventEndTime_131.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_131(FIX::UTCTIMEONLY(22, 58, 15));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_131);
        ComplexEventTimes_NoComplexEventTimes_131.insert(ComplexEventStartTime_131.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_131);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_132;
        FIX::ComplexEventEndTime ComplexEventEndTime_132(FIX::UTCTIMEONLY(11, 7, 50));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_132);
        ComplexEventTimes_NoComplexEventTimes_132.insert(ComplexEventEndTime_132.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_132(FIX::UTCTIMEONLY(21, 39, 44));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_132);
        ComplexEventTimes_NoComplexEventTimes_132.insert(ComplexEventStartTime_132.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_132);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_67;
      FIX::ComplexEventEndDate ComplexEventEndDate_67(FIX::UTCTIMESTAMP(19, 28, 12, 27, 32003));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_67);
      ComplexEventDates_NoComplexEventDates_67.insert(ComplexEventEndDate_67.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_67(FIX::UTCTIMESTAMP(22, 51, 21, 14, 92007));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_67);
      ComplexEventDates_NoComplexEventDates_67.insert(ComplexEventStartDate_67.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_67);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_133;
        FIX::ComplexEventEndTime ComplexEventEndTime_133(FIX::UTCTIMEONLY(14, 40, 0));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_133);
        ComplexEventTimes_NoComplexEventTimes_133.insert(ComplexEventEndTime_133.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_133(FIX::UTCTIMEONLY(7, 50, 37));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_133);
        ComplexEventTimes_NoComplexEventTimes_133.insert(ComplexEventStartTime_133.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_133);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_134;
        FIX::ComplexEventEndTime ComplexEventEndTime_134(FIX::UTCTIMEONLY(14, 45, 10));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_134);
        ComplexEventTimes_NoComplexEventTimes_134.insert(ComplexEventEndTime_134.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_134(FIX::UTCTIMEONLY(22, 41, 54));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_134);
        ComplexEventTimes_NoComplexEventTimes_134.insert(ComplexEventStartTime_134.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_134);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_135;
        FIX::ComplexEventEndTime ComplexEventEndTime_135(FIX::UTCTIMEONLY(12, 22, 57));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_135);
        ComplexEventTimes_NoComplexEventTimes_135.insert(ComplexEventEndTime_135.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_135(FIX::UTCTIMEONLY(13, 16, 36));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_135);
        ComplexEventTimes_NoComplexEventTimes_135.insert(ComplexEventStartTime_135.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_135);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_68;
      FIX::ComplexEventEndDate ComplexEventEndDate_68(FIX::UTCTIMESTAMP(19, 49, 45, 19, 92012));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_68);
      ComplexEventDates_NoComplexEventDates_68.insert(ComplexEventEndDate_68.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_68(FIX::UTCTIMESTAMP(3, 15, 49, 25, 112015));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_68);
      ComplexEventDates_NoComplexEventDates_68.insert(ComplexEventStartDate_68.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_68);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_136;
        FIX::ComplexEventEndTime ComplexEventEndTime_136(FIX::UTCTIMEONLY(21, 36, 4));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_136);
        ComplexEventTimes_NoComplexEventTimes_136.insert(ComplexEventEndTime_136.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_136(FIX::UTCTIMEONLY(22, 46, 38));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_136);
        ComplexEventTimes_NoComplexEventTimes_136.insert(ComplexEventStartTime_136.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_136);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_137;
        FIX::ComplexEventEndTime ComplexEventEndTime_137(FIX::UTCTIMEONLY(14, 0, 8));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_137);
        ComplexEventTimes_NoComplexEventTimes_137.insert(ComplexEventEndTime_137.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_137(FIX::UTCTIMEONLY(13, 25, 18));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_137);
        ComplexEventTimes_NoComplexEventTimes_137.insert(ComplexEventStartTime_137.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_137);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_138;
        FIX::ComplexEventEndTime ComplexEventEndTime_138(FIX::UTCTIMEONLY(20, 8, 42));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_138);
        ComplexEventTimes_NoComplexEventTimes_138.insert(ComplexEventEndTime_138.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_138(FIX::UTCTIMEONLY(8, 16, 56));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_138);
        ComplexEventTimes_NoComplexEventTimes_138.insert(ComplexEventStartTime_138.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_138);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_33;
    FIX::ComplexEventCondition ComplexEventCondition_33(2);
    noComplexEvents_0_1.set(ComplexEventCondition_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventCondition_33.getString());
    FIX::ComplexEventPrice ComplexEventPrice_33;
    ComplexEventPrice_33.setString("2307652");
    noComplexEvents_0_1.set(ComplexEventPrice_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventPrice_33.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_33(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventPriceBoundaryMethod_33.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_33;
    ComplexEventPriceBoundaryPrecision_33.setString("24.250000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventPriceBoundaryPrecision_33.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_33(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventPriceTimeType_33.getString());
    FIX::ComplexEventType ComplexEventType_33(4);
    noComplexEvents_0_1.set(ComplexEventType_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventType_33.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_33;
    ComplexOptPayoutAmount_33.setString("5531062");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexOptPayoutAmount_33.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_33);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_69;
      FIX::ComplexEventEndDate ComplexEventEndDate_69(FIX::UTCTIMESTAMP(16, 56, 26, 14, 72016));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_69);
      ComplexEventDates_NoComplexEventDates_69.insert(ComplexEventEndDate_69.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_69(FIX::UTCTIMESTAMP(12, 56, 38, 10, 32009));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_69);
      ComplexEventDates_NoComplexEventDates_69.insert(ComplexEventStartDate_69.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_69);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_139;
        FIX::ComplexEventEndTime ComplexEventEndTime_139(FIX::UTCTIMEONLY(4, 17, 4));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_139);
        ComplexEventTimes_NoComplexEventTimes_139.insert(ComplexEventEndTime_139.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_139(FIX::UTCTIMEONLY(1, 21, 16));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_139);
        ComplexEventTimes_NoComplexEventTimes_139.insert(ComplexEventStartTime_139.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_139);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_140;
        FIX::ComplexEventEndTime ComplexEventEndTime_140(FIX::UTCTIMEONLY(16, 54, 58));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_140);
        ComplexEventTimes_NoComplexEventTimes_140.insert(ComplexEventEndTime_140.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_140(FIX::UTCTIMEONLY(3, 14, 41));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_140);
        ComplexEventTimes_NoComplexEventTimes_140.insert(ComplexEventStartTime_140.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_140);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_141;
        FIX::ComplexEventEndTime ComplexEventEndTime_141(FIX::UTCTIMEONLY(22, 37, 3));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_141);
        ComplexEventTimes_NoComplexEventTimes_141.insert(ComplexEventEndTime_141.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_141(FIX::UTCTIMEONLY(11, 7, 38));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_141);
        ComplexEventTimes_NoComplexEventTimes_141.insert(ComplexEventStartTime_141.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_141);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_70;
      FIX::ComplexEventEndDate ComplexEventEndDate_70(FIX::UTCTIMESTAMP(20, 9, 42, 18, 12011));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_70);
      ComplexEventDates_NoComplexEventDates_70.insert(ComplexEventEndDate_70.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_70(FIX::UTCTIMESTAMP(20, 16, 49, 16, 112002));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_70);
      ComplexEventDates_NoComplexEventDates_70.insert(ComplexEventStartDate_70.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_70);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_142;
        FIX::ComplexEventEndTime ComplexEventEndTime_142(FIX::UTCTIMEONLY(18, 3, 17));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_142);
        ComplexEventTimes_NoComplexEventTimes_142.insert(ComplexEventEndTime_142.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_142(FIX::UTCTIMEONLY(6, 31, 18));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_142);
        ComplexEventTimes_NoComplexEventTimes_142.insert(ComplexEventStartTime_142.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_142);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_143;
        FIX::ComplexEventEndTime ComplexEventEndTime_143(FIX::UTCTIMEONLY(17, 55, 47));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_143);
        ComplexEventTimes_NoComplexEventTimes_143.insert(ComplexEventEndTime_143.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_143(FIX::UTCTIMEONLY(19, 46, 8));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_143);
        ComplexEventTimes_NoComplexEventTimes_143.insert(ComplexEventStartTime_143.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_143);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_144;
        FIX::ComplexEventEndTime ComplexEventEndTime_144(FIX::UTCTIMEONLY(6, 17, 17));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_144);
        ComplexEventTimes_NoComplexEventTimes_144.insert(ComplexEventEndTime_144.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_144(FIX::UTCTIMEONLY(9, 9, 49));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_144);
        ComplexEventTimes_NoComplexEventTimes_144.insert(ComplexEventStartTime_144.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_144);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_71;
      FIX::ComplexEventEndDate ComplexEventEndDate_71(FIX::UTCTIMESTAMP(5, 30, 46, 11, 92001));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_71);
      ComplexEventDates_NoComplexEventDates_71.insert(ComplexEventEndDate_71.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_71(FIX::UTCTIMESTAMP(18, 58, 39, 3, 52008));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_71);
      ComplexEventDates_NoComplexEventDates_71.insert(ComplexEventStartDate_71.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_71);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_145;
        FIX::ComplexEventEndTime ComplexEventEndTime_145(FIX::UTCTIMEONLY(23, 0, 19));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_145);
        ComplexEventTimes_NoComplexEventTimes_145.insert(ComplexEventEndTime_145.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_145(FIX::UTCTIMEONLY(23, 5, 1));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_145);
        ComplexEventTimes_NoComplexEventTimes_145.insert(ComplexEventStartTime_145.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_145);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_146;
        FIX::ComplexEventEndTime ComplexEventEndTime_146(FIX::UTCTIMEONLY(4, 10, 52));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_146);
        ComplexEventTimes_NoComplexEventTimes_146.insert(ComplexEventEndTime_146.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_146(FIX::UTCTIMEONLY(7, 1, 17));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_146);
        ComplexEventTimes_NoComplexEventTimes_146.insert(ComplexEventStartTime_146.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_146);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_147;
        FIX::ComplexEventEndTime ComplexEventEndTime_147(FIX::UTCTIMEONLY(18, 47, 4));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_147);
        ComplexEventTimes_NoComplexEventTimes_147.insert(ComplexEventEndTime_147.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_147(FIX::UTCTIMEONLY(19, 59, 28));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_147);
        ComplexEventTimes_NoComplexEventTimes_147.insert(ComplexEventStartTime_147.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_147);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_34;
    FIX::ComplexEventCondition ComplexEventCondition_34(1);
    noComplexEvents_0_2.set(ComplexEventCondition_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventCondition_34.getString());
    FIX::ComplexEventPrice ComplexEventPrice_34;
    ComplexEventPrice_34.setString("11048262");
    noComplexEvents_0_2.set(ComplexEventPrice_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventPrice_34.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_34(4);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventPriceBoundaryMethod_34.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_34;
    ComplexEventPriceBoundaryPrecision_34.setString("43.370000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventPriceBoundaryPrecision_34.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_34(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventPriceTimeType_34.getString());
    FIX::ComplexEventType ComplexEventType_34(3);
    noComplexEvents_0_2.set(ComplexEventType_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventType_34.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_34;
    ComplexOptPayoutAmount_34.setString("6373410");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexOptPayoutAmount_34.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_34);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_72;
      FIX::ComplexEventEndDate ComplexEventEndDate_72(FIX::UTCTIMESTAMP(10, 45, 11, 18, 82012));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_72);
      ComplexEventDates_NoComplexEventDates_72.insert(ComplexEventEndDate_72.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_72(FIX::UTCTIMESTAMP(3, 22, 40, 19, 102009));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_72);
      ComplexEventDates_NoComplexEventDates_72.insert(ComplexEventStartDate_72.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_72);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_148;
        FIX::ComplexEventEndTime ComplexEventEndTime_148(FIX::UTCTIMEONLY(4, 56, 7));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_148);
        ComplexEventTimes_NoComplexEventTimes_148.insert(ComplexEventEndTime_148.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_148(FIX::UTCTIMEONLY(20, 58, 26));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_148);
        ComplexEventTimes_NoComplexEventTimes_148.insert(ComplexEventStartTime_148.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_148);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_73;
      FIX::ComplexEventEndDate ComplexEventEndDate_73(FIX::UTCTIMESTAMP(8, 26, 47, 3, 62015));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_73);
      ComplexEventDates_NoComplexEventDates_73.insert(ComplexEventEndDate_73.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_73(FIX::UTCTIMESTAMP(23, 23, 55, 6, 22002));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_73);
      ComplexEventDates_NoComplexEventDates_73.insert(ComplexEventStartDate_73.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_73);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_149;
        FIX::ComplexEventEndTime ComplexEventEndTime_149(FIX::UTCTIMEONLY(21, 16, 58));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_149);
        ComplexEventTimes_NoComplexEventTimes_149.insert(ComplexEventEndTime_149.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_149(FIX::UTCTIMEONLY(13, 32, 45));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_149);
        ComplexEventTimes_NoComplexEventTimes_149.insert(ComplexEventStartTime_149.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_149);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_150;
        FIX::ComplexEventEndTime ComplexEventEndTime_150(FIX::UTCTIMEONLY(4, 34, 3));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_150);
        ComplexEventTimes_NoComplexEventTimes_150.insert(ComplexEventEndTime_150.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_150(FIX::UTCTIMEONLY(22, 54, 40));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_150);
        ComplexEventTimes_NoComplexEventTimes_150.insert(ComplexEventStartTime_150.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_150);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_151;
        FIX::ComplexEventEndTime ComplexEventEndTime_151(FIX::UTCTIMEONLY(2, 59, 43));
        noComplexEventTimes_2_1_2_2.set(ComplexEventEndTime_151);
        ComplexEventTimes_NoComplexEventTimes_151.insert(ComplexEventEndTime_151.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_151(FIX::UTCTIMEONLY(16, 52, 43));
        noComplexEventTimes_2_1_2_2.set(ComplexEventStartTime_151);
        ComplexEventTimes_NoComplexEventTimes_151.insert(ComplexEventStartTime_151.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_151);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_74;
      FIX::ComplexEventEndDate ComplexEventEndDate_74(FIX::UTCTIMESTAMP(7, 30, 5, 17, 12011));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_74);
      ComplexEventDates_NoComplexEventDates_74.insert(ComplexEventEndDate_74.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_74(FIX::UTCTIMESTAMP(9, 15, 53, 1, 92001));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_74);
      ComplexEventDates_NoComplexEventDates_74.insert(ComplexEventStartDate_74.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_74);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_152;
        FIX::ComplexEventEndTime ComplexEventEndTime_152(FIX::UTCTIMEONLY(17, 25, 0));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_152);
        ComplexEventTimes_NoComplexEventTimes_152.insert(ComplexEventEndTime_152.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_152(FIX::UTCTIMEONLY(23, 54, 28));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_152);
        ComplexEventTimes_NoComplexEventTimes_152.insert(ComplexEventStartTime_152.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_152);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_153;
        FIX::ComplexEventEndTime ComplexEventEndTime_153(FIX::UTCTIMEONLY(13, 27, 38));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_153);
        ComplexEventTimes_NoComplexEventTimes_153.insert(ComplexEventEndTime_153.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_153(FIX::UTCTIMEONLY(23, 22, 45));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_153);
        ComplexEventTimes_NoComplexEventTimes_153.insert(ComplexEventStartTime_153.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_153);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_154;
        FIX::ComplexEventEndTime ComplexEventEndTime_154(FIX::UTCTIMEONLY(21, 7, 51));
        noComplexEventTimes_2_2_2_2.set(ComplexEventEndTime_154);
        ComplexEventTimes_NoComplexEventTimes_154.insert(ComplexEventEndTime_154.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_154(FIX::UTCTIMEONLY(7, 50, 53));
        noComplexEventTimes_2_2_2_2.set(ComplexEventStartTime_154);
        ComplexEventTimes_NoComplexEventTimes_154.insert(ComplexEventStartTime_154.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_154);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_31;
    FIX::EventDate EventDate_31("LOCALMKTDATE_1678605837");
    noEvents_0_0.set(EventDate_31);
    EvntGrp_NoEvents_31.insert(EventDate_31.getString());
    FIX::EventPx EventPx_31;
    EventPx_31.setString("17432959");
    noEvents_0_0.set(EventPx_31);
    EvntGrp_NoEvents_31.insert(EventPx_31.getString());
    FIX::EventText EventText_31("STRING_1996314606");
    noEvents_0_0.set(EventText_31);
    EvntGrp_NoEvents_31.insert(EventText_31.getString());
    FIX::EventTime EventTime_31(FIX::UTCTIMESTAMP(4, 57, 54, 6, 32001));
    noEvents_0_0.set(EventTime_31);
    EvntGrp_NoEvents_31.insert(EventTime_31.getString());
    FIX::EventType EventType_31(14);
    noEvents_0_0.set(EventType_31);
    EvntGrp_NoEvents_31.insert(EventType_31.getString());
    all_values.push_back(EvntGrp_NoEvents_31);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_32;
    FIX::EventDate EventDate_32("LOCALMKTDATE_242117045");
    noEvents_0_1.set(EventDate_32);
    EvntGrp_NoEvents_32.insert(EventDate_32.getString());
    FIX::EventPx EventPx_32;
    EventPx_32.setString("16892690");
    noEvents_0_1.set(EventPx_32);
    EvntGrp_NoEvents_32.insert(EventPx_32.getString());
    FIX::EventText EventText_32("STRING_1787076413");
    noEvents_0_1.set(EventText_32);
    EvntGrp_NoEvents_32.insert(EventText_32.getString());
    FIX::EventTime EventTime_32(FIX::UTCTIMESTAMP(10, 12, 30, 21, 42014));
    noEvents_0_1.set(EventTime_32);
    EvntGrp_NoEvents_32.insert(EventTime_32.getString());
    FIX::EventType EventType_32(11);
    noEvents_0_1.set(EventType_32);
    EvntGrp_NoEvents_32.insert(EventType_32.getString());
    all_values.push_back(EvntGrp_NoEvents_32);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_33;
    FIX::EventDate EventDate_33("LOCALMKTDATE_313713457");
    noEvents_0_2.set(EventDate_33);
    EvntGrp_NoEvents_33.insert(EventDate_33.getString());
    FIX::EventPx EventPx_33;
    EventPx_33.setString("4899352");
    noEvents_0_2.set(EventPx_33);
    EvntGrp_NoEvents_33.insert(EventPx_33.getString());
    FIX::EventText EventText_33("STRING_1433872978");
    noEvents_0_2.set(EventText_33);
    EvntGrp_NoEvents_33.insert(EventText_33.getString());
    FIX::EventTime EventTime_33(FIX::UTCTIMESTAMP(12, 57, 10, 25, 72017));
    noEvents_0_2.set(EventTime_33);
    EvntGrp_NoEvents_33.insert(EventTime_33.getString());
    FIX::EventType EventType_33(1);
    noEvents_0_2.set(EventType_33);
    EvntGrp_NoEvents_33.insert(EventType_33.getString());
    all_values.push_back(EvntGrp_NoEvents_33);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_26;
    FIX::InstrumentPartyID InstrumentPartyID_26("STRING_2022965937");
    noInstrumentParties_0_0.set(InstrumentPartyID_26);
    InstrumentParties_NoInstrumentParties_26.insert(InstrumentPartyID_26.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_26('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_26);
    InstrumentParties_NoInstrumentParties_26.insert(InstrumentPartyIDSource_26.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_26(184124309);
    noInstrumentParties_0_0.set(InstrumentPartyRole_26);
    InstrumentParties_NoInstrumentParties_26.insert(InstrumentPartyRole_26.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_26);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47;
      FIX::InstrumentPartySubID InstrumentPartySubID_47("STRING_1261921983");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_47);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47.insert(InstrumentPartySubID_47.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_47(467014843);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_47);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47.insert(InstrumentPartySubIDType_47.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48;
      FIX::InstrumentPartySubID InstrumentPartySubID_48("STRING_381204990");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_48);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48.insert(InstrumentPartySubID_48.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_48(1086803968);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_48);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48.insert(InstrumentPartySubIDType_48.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_27;
    FIX::InstrumentPartyID InstrumentPartyID_27("STRING_709131888");
    noInstrumentParties_0_1.set(InstrumentPartyID_27);
    InstrumentParties_NoInstrumentParties_27.insert(InstrumentPartyID_27.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_27('2');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_27);
    InstrumentParties_NoInstrumentParties_27.insert(InstrumentPartyIDSource_27.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_27(726396734);
    noInstrumentParties_0_1.set(InstrumentPartyRole_27);
    InstrumentParties_NoInstrumentParties_27.insert(InstrumentPartyRole_27.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_27);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49;
      FIX::InstrumentPartySubID InstrumentPartySubID_49("STRING_367883774");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_49);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49.insert(InstrumentPartySubID_49.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_49(197183898);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_49);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49.insert(InstrumentPartySubIDType_49.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50;
      FIX::InstrumentPartySubID InstrumentPartySubID_50("STRING_1970635570");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_50);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50.insert(InstrumentPartySubID_50.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_50(1091128947);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_50);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50.insert(InstrumentPartySubIDType_50.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_32;
    FIX::SecurityAltID SecurityAltID_32("STRING_1287067006");
    noSecurityAltID_0_0.set(SecurityAltID_32);
    SecAltIDGrp_NoSecurityAltID_32.insert(SecurityAltID_32.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_32("STRING_1747117698");
    noSecurityAltID_0_0.set(SecurityAltIDSource_32);
    SecAltIDGrp_NoSecurityAltID_32.insert(SecurityAltIDSource_32.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_32);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_33;
    FIX::SecurityAltID SecurityAltID_33("STRING_1272693167");
    noSecurityAltID_0_1.set(SecurityAltID_33);
    SecAltIDGrp_NoSecurityAltID_33.insert(SecurityAltID_33.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_33("STRING_1777002223");
    noSecurityAltID_0_1.set(SecurityAltIDSource_33);
    SecAltIDGrp_NoSecurityAltID_33.insert(SecurityAltIDSource_33.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_33);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_30;
  FIX::SecurityXML SecurityXML_31("XMLDATA_1033507028");
  msg.set(SecurityXML_31);
  FIX::SecurityXMLLen SecurityXMLLen_15(800007308);
  msg.set(SecurityXMLLen_15);
  FIX::SecurityXMLSchema SecurityXMLSchema_15("STRING_1880033731");
  msg.set(SecurityXMLSchema_15);
  SecurityXML_30.insert(SecurityXMLSchema_15.getString());
  all_values.push_back(SecurityXML_30);

  // PegInstructions
  multiset<string> PegInstructions_0;
  FIX::PegLimitType PegLimitType_0(2);
  msg.set(PegLimitType_0);
  PegInstructions_0.insert(PegLimitType_0.getString());
  FIX::PegMoveType PegMoveType_0(0);
  msg.set(PegMoveType_0);
  PegInstructions_0.insert(PegMoveType_0.getString());
  FIX::PegOffsetType PegOffsetType_0(1);
  msg.set(PegOffsetType_0);
  PegInstructions_0.insert(PegOffsetType_0.getString());
  FIX::PegOffsetValue PegOffsetValue_0;
  PegOffsetValue_0.setString("7941422");
  msg.set(PegOffsetValue_0);
  PegInstructions_0.insert(PegOffsetValue_0.getString());
  FIX::PegPriceType PegPriceType_0(8);
  msg.set(PegPriceType_0);
  PegInstructions_0.insert(PegPriceType_0.getString());
  FIX::PegRoundDirection PegRoundDirection_0(2);
  msg.set(PegRoundDirection_0);
  PegInstructions_0.insert(PegRoundDirection_0.getString());
  FIX::PegScope PegScope_0(4);
  msg.set(PegScope_0);
  PegInstructions_0.insert(PegScope_0.getString());
  FIX::PegSecurityDesc PegSecurityDesc_0("STRING_1282155479");
  msg.set(PegSecurityDesc_0);
  PegInstructions_0.insert(PegSecurityDesc_0.getString());
  FIX::PegSecurityID PegSecurityID_0("STRING_168068494");
  msg.set(PegSecurityID_0);
  PegInstructions_0.insert(PegSecurityID_0.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_0("STRING_1896974868");
  msg.set(PegSecurityIDSource_0);
  PegInstructions_0.insert(PegSecurityIDSource_0.getString());
  FIX::PegSymbol PegSymbol_0("STRING_1666396962");
  msg.set(PegSymbol_0);
  PegInstructions_0.insert(PegSymbol_0.getString());
  all_values.push_back(PegInstructions_0);

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_0;
    FIX::RootPartyID RootPartyID_0("STRING_216506063");
    noRootPartyIDs_0_0.set(RootPartyID_0);
    RootParties_NoRootPartyIDs_0.insert(RootPartyID_0.getString());
    FIX::RootPartyIDSource RootPartyIDSource_0('2');
    noRootPartyIDs_0_0.set(RootPartyIDSource_0);
    RootParties_NoRootPartyIDs_0.insert(RootPartyIDSource_0.getString());
    FIX::RootPartyRole RootPartyRole_0(369310798);
    noRootPartyIDs_0_0.set(RootPartyRole_0);
    RootParties_NoRootPartyIDs_0.insert(RootPartyRole_0.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_0);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_0;
      FIX::RootPartySubID RootPartySubID_0("STRING_1970592317");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_0);
      RootSubParties_NoRootPartySubIDs_0.insert(RootPartySubID_0.getString());
      FIX::RootPartySubIDType RootPartySubIDType_0(1095707532);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_0);
      RootSubParties_NoRootPartySubIDs_0.insert(RootPartySubIDType_0.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_0);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_1;
      FIX::RootPartySubID RootPartySubID_1("STRING_1266278211");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_1);
      RootSubParties_NoRootPartySubIDs_1.insert(RootPartySubID_1.getString());
      FIX::RootPartySubIDType RootPartySubIDType_1(190992443);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_1);
      RootSubParties_NoRootPartySubIDs_1.insert(RootPartySubIDType_1.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_1);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_2;
      FIX::RootPartySubID RootPartySubID_2("STRING_1292891430");
      noRootPartySubIDs_0_1_2.set(RootPartySubID_2);
      RootSubParties_NoRootPartySubIDs_2.insert(RootPartySubID_2.getString());
      FIX::RootPartySubIDType RootPartySubIDType_2(1089430133);
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
    FIX::RootPartyID RootPartyID_1("STRING_1282121391");
    noRootPartyIDs_0_1.set(RootPartyID_1);
    RootParties_NoRootPartyIDs_1.insert(RootPartyID_1.getString());
    FIX::RootPartyIDSource RootPartyIDSource_1('1');
    noRootPartyIDs_0_1.set(RootPartyIDSource_1);
    RootParties_NoRootPartyIDs_1.insert(RootPartyIDSource_1.getString());
    FIX::RootPartyRole RootPartyRole_1(229013491);
    noRootPartyIDs_0_1.set(RootPartyRole_1);
    RootParties_NoRootPartyIDs_1.insert(RootPartyRole_1.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_1);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_3;
      FIX::RootPartySubID RootPartySubID_3("STRING_1377080660");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_3);
      RootSubParties_NoRootPartySubIDs_3.insert(RootPartySubID_3.getString());
      FIX::RootPartySubIDType RootPartySubIDType_3(2006015715);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_3);
      RootSubParties_NoRootPartySubIDs_3.insert(RootPartySubIDType_3.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_3);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_4;
      FIX::RootPartySubID RootPartySubID_4("STRING_1915262469");
      noRootPartySubIDs_1_1_1.set(RootPartySubID_4);
      RootSubParties_NoRootPartySubIDs_4.insert(RootPartySubID_4.getString());
      FIX::RootPartySubIDType RootPartySubIDType_4(29604320);
      noRootPartySubIDs_1_1_1.set(RootPartySubIDType_4);
      RootSubParties_NoRootPartySubIDs_4.insert(RootPartySubIDType_4.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_4);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  // SideCrossOrdModGrp
  // Group SideCrossOrdModGrp.NoSides
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSides noSides_0_0;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_0;
    FIX::Account Account_9("STRING_1639527426");
    noSides_0_0.set(Account_9);
    SideCrossOrdModGrp_NoSides_0.insert(Account_9.getString());
    FIX::AccountType AccountType_7(2);
    noSides_0_0.set(AccountType_7);
    SideCrossOrdModGrp_NoSides_0.insert(AccountType_7.getString());
    FIX::AcctIDSource AcctIDSource_2(99);
    noSides_0_0.set(AcctIDSource_2);
    SideCrossOrdModGrp_NoSides_0.insert(AcctIDSource_2.getString());
    FIX::AllocID AllocID_7("STRING_286186058");
    noSides_0_0.set(AllocID_7);
    SideCrossOrdModGrp_NoSides_0.insert(AllocID_7.getString());
    FIX::BookingType BookingType_3(1);
    noSides_0_0.set(BookingType_3);
    SideCrossOrdModGrp_NoSides_0.insert(BookingType_3.getString());
    FIX::BookingUnit BookingUnit_0('2');
    noSides_0_0.set(BookingUnit_0);
    SideCrossOrdModGrp_NoSides_0.insert(BookingUnit_0.getString());
    FIX::CashMargin CashMargin_0('1');
    noSides_0_0.set(CashMargin_0);
    SideCrossOrdModGrp_NoSides_0.insert(CashMargin_0.getString());
    FIX::ClOrdID ClOrdID_15("STRING_834986671");
    noSides_0_0.set(ClOrdID_15);
    SideCrossOrdModGrp_NoSides_0.insert(ClOrdID_15.getString());
    FIX::ClOrdLinkID ClOrdLinkID_0("STRING_1822346307");
    noSides_0_0.set(ClOrdLinkID_0);
    SideCrossOrdModGrp_NoSides_0.insert(ClOrdLinkID_0.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_5("STRING_E");
    noSides_0_0.set(ClearingFeeIndicator_5);
    SideCrossOrdModGrp_NoSides_0.insert(ClearingFeeIndicator_5.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_0(0);
    noSides_0_0.set(CoveredOrUncovered_0);
    SideCrossOrdModGrp_NoSides_0.insert(CoveredOrUncovered_0.getString());
    FIX::CustOrderCapacity CustOrderCapacity_3(2);
    noSides_0_0.set(CustOrderCapacity_3);
    SideCrossOrdModGrp_NoSides_0.insert(CustOrderCapacity_3.getString());
    FIX::DayBookingInst DayBookingInst_0('1');
    noSides_0_0.set(DayBookingInst_0);
    SideCrossOrdModGrp_NoSides_0.insert(DayBookingInst_0.getString());
    FIX::EncodedText EncodedText_23("DATA_254018291");
    noSides_0_0.set(EncodedText_23);
    SideCrossOrdModGrp_NoSides_0.insert(EncodedText_23.getString());
    FIX::EncodedTextLen EncodedTextLen_23(1474163935);
    noSides_0_0.set(EncodedTextLen_23);
    SideCrossOrdModGrp_NoSides_0.insert(EncodedTextLen_23.getString());
    FIX::ForexReq ForexReq_1(false);
    noSides_0_0.set(ForexReq_1);
    SideCrossOrdModGrp_NoSides_0.insert(ForexReq_1.getString());
    FIX::OrderCapacity OrderCapacity_3('I');
    noSides_0_0.set(OrderCapacity_3);
    SideCrossOrdModGrp_NoSides_0.insert(OrderCapacity_3.getString());
    FIX::OrderRestrictions OrderRestrictions_3("MULTIPLECHARVALUE_F");
    noSides_0_0.set(OrderRestrictions_3);
    SideCrossOrdModGrp_NoSides_0.insert(OrderRestrictions_3.getString());
    FIX::OrigClOrdID OrigClOrdID_0("STRING_2009466416");
    noSides_0_0.set(OrigClOrdID_0);
    SideCrossOrdModGrp_NoSides_0.insert(OrigClOrdID_0.getString());
    FIX::PositionEffect PositionEffect_3('F');
    noSides_0_0.set(PositionEffect_3);
    SideCrossOrdModGrp_NoSides_0.insert(PositionEffect_3.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_0(false);
    noSides_0_0.set(PreTradeAnonymity_0);
    SideCrossOrdModGrp_NoSides_0.insert(PreTradeAnonymity_0.getString());
    FIX::PreallocMethod PreallocMethod_0('0');
    noSides_0_0.set(PreallocMethod_0);
    SideCrossOrdModGrp_NoSides_0.insert(PreallocMethod_0.getString());
    FIX::QtyType QtyType_11(1);
    noSides_0_0.set(QtyType_11);
    SideCrossOrdModGrp_NoSides_0.insert(QtyType_11.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_15("STRING_1819666742");
    noSides_0_0.set(SecondaryClOrdID_15);
    SideCrossOrdModGrp_NoSides_0.insert(SecondaryClOrdID_15.getString());
    FIX::SettlCurrency SettlCurrency_6("CHF");
    noSides_0_0.set(SettlCurrency_6);
    SideCrossOrdModGrp_NoSides_0.insert(SettlCurrency_6.getString());
    FIX::Side Side_12('B');
    noSides_0_0.set(Side_12);
    SideCrossOrdModGrp_NoSides_0.insert(Side_12.getString());
    FIX::SideComplianceID SideComplianceID_0("STRING_1038958460");
    noSides_0_0.set(SideComplianceID_0);
    SideCrossOrdModGrp_NoSides_0.insert(SideComplianceID_0.getString());
    FIX::SideTimeInForce SideTimeInForce_0(FIX::UTCTIMESTAMP(10, 51, 35, 12, 32013));
    noSides_0_0.set(SideTimeInForce_0);
    SideCrossOrdModGrp_NoSides_0.insert(SideTimeInForce_0.getString());
    FIX::SolicitedFlag SolicitedFlag_0(false);
    noSides_0_0.set(SolicitedFlag_0);
    SideCrossOrdModGrp_NoSides_0.insert(SolicitedFlag_0.getString());
    FIX::Text Text_23("STRING_1177055951");
    noSides_0_0.set(Text_23);
    SideCrossOrdModGrp_NoSides_0.insert(Text_23.getString());
    FIX::TradeDate TradeDate_9("LOCALMKTDATE_1829557862");
    noSides_0_0.set(TradeDate_9);
    SideCrossOrdModGrp_NoSides_0.insert(TradeDate_9.getString());
    FIX::TradeOriginationDate TradeOriginationDate_3("LOCALMKTDATE_1760327588");
    noSides_0_0.set(TradeOriginationDate_3);
    SideCrossOrdModGrp_NoSides_0.insert(TradeOriginationDate_3.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_0);

    // CommissionData
    multiset<string> CommissionData_7;
    FIX::CommCurrency CommCurrency_7("GBP");
    noSides_0_0.set(CommCurrency_7);
    CommissionData_7.insert(CommCurrency_7.getString());
    FIX::CommType CommType_7('3');
    noSides_0_0.set(CommType_7);
    CommissionData_7.insert(CommType_7.getString());
    FIX::Commission Commission_7;
    Commission_7.setString("19567717");
    noSides_0_0.set(Commission_7);
    CommissionData_7.insert(Commission_7.getString());
    FIX::FundRenewWaiv FundRenewWaiv_7('N');
    noSides_0_0.set(FundRenewWaiv_7);
    CommissionData_7.insert(FundRenewWaiv_7.getString());
    all_values.push_back(CommissionData_7);

    // OrderQtyData
    multiset<string> OrderQtyData_0;
    FIX::CashOrderQty CashOrderQty_0;
    CashOrderQty_0.setString("2207622");
    noSides_0_0.set(CashOrderQty_0);
    OrderQtyData_0.insert(CashOrderQty_0.getString());
    FIX::OrderPercent OrderPercent_0;
    OrderPercent_0.setString("20.350000");
    noSides_0_0.set(OrderPercent_0);
    OrderQtyData_0.insert(OrderPercent_0.getString());
    FIX::OrderQty OrderQty_9;
    OrderQty_9.setString("19913405");
    noSides_0_0.set(OrderQty_9);
    OrderQtyData_0.insert(OrderQty_9.getString());
    FIX::RoundingDirection RoundingDirection_0('1');
    noSides_0_0.set(RoundingDirection_0);
    OrderQtyData_0.insert(RoundingDirection_0.getString());
    FIX::RoundingModulus RoundingModulus_0;
    RoundingModulus_0.setString("17058398");
    noSides_0_0.set(RoundingModulus_0);
    OrderQtyData_0.insert(RoundingModulus_0.getString());
    all_values.push_back(OrderQtyData_0);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_34;
      FIX::PartyID PartyID_34("STRING_566008581");
      noPartyIDs_0_1_0.set(PartyID_34);
      Parties_NoPartyIDs_34.insert(PartyID_34.getString());
      FIX::PartyIDSource PartyIDSource_34('1');
      noPartyIDs_0_1_0.set(PartyIDSource_34);
      Parties_NoPartyIDs_34.insert(PartyIDSource_34.getString());
      FIX::PartyRole PartyRole_34(79);
      noPartyIDs_0_1_0.set(PartyRole_34);
      Parties_NoPartyIDs_34.insert(PartyRole_34.getString());
      all_values.push_back(Parties_NoPartyIDs_34);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_71;
        FIX::PartySubID PartySubID_71("STRING_945818549");
        noPartySubIDs_0_0_2_0.set(PartySubID_71);
        PtysSubGrp_NoPartySubIDs_71.insert(PartySubID_71.getString());
        FIX::PartySubIDType PartySubIDType_71(8);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_71);
        PtysSubGrp_NoPartySubIDs_71.insert(PartySubIDType_71.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_71);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_72;
        FIX::PartySubID PartySubID_72("STRING_253278315");
        noPartySubIDs_0_0_2_1.set(PartySubID_72);
        PtysSubGrp_NoPartySubIDs_72.insert(PartySubID_72.getString());
        FIX::PartySubIDType PartySubIDType_72(17);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_72);
        PtysSubGrp_NoPartySubIDs_72.insert(PartySubIDType_72.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_72);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_35;
      FIX::PartyID PartyID_35("STRING_729153739");
      noPartyIDs_0_1_1.set(PartyID_35);
      Parties_NoPartyIDs_35.insert(PartyID_35.getString());
      FIX::PartyIDSource PartyIDSource_35('D');
      noPartyIDs_0_1_1.set(PartyIDSource_35);
      Parties_NoPartyIDs_35.insert(PartyIDSource_35.getString());
      FIX::PartyRole PartyRole_35(71);
      noPartyIDs_0_1_1.set(PartyRole_35);
      Parties_NoPartyIDs_35.insert(PartyRole_35.getString());
      all_values.push_back(Parties_NoPartyIDs_35);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_73;
        FIX::PartySubID PartySubID_73("STRING_1997388558");
        noPartySubIDs_0_1_2_0.set(PartySubID_73);
        PtysSubGrp_NoPartySubIDs_73.insert(PartySubID_73.getString());
        FIX::PartySubIDType PartySubIDType_73(4);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_73);
        PtysSubGrp_NoPartySubIDs_73.insert(PartySubIDType_73.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_73);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_74;
        FIX::PartySubID PartySubID_74("STRING_881972489");
        noPartySubIDs_0_1_2_1.set(PartySubID_74);
        PtysSubGrp_NoPartySubIDs_74.insert(PartySubID_74.getString());
        FIX::PartySubIDType PartySubIDType_74(6);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_74);
        PtysSubGrp_NoPartySubIDs_74.insert(PartySubIDType_74.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_74);

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
      FIX::AllocAccount AllocAccount_10("STRING_2059028440");
      noAllocs_0_1_0.set(AllocAccount_10);
      PreAllocGrp_NoAllocs_0.insert(AllocAccount_10.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_10(1509984018);
      noAllocs_0_1_0.set(AllocAcctIDSource_10);
      PreAllocGrp_NoAllocs_0.insert(AllocAcctIDSource_10.getString());
      FIX::AllocQty AllocQty_9;
      AllocQty_9.setString("6896776");
      noAllocs_0_1_0.set(AllocQty_9);
      PreAllocGrp_NoAllocs_0.insert(AllocQty_9.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_5("USD");
      noAllocs_0_1_0.set(AllocSettlCurrency_5);
      PreAllocGrp_NoAllocs_0.insert(AllocSettlCurrency_5.getString());
      FIX::IndividualAllocID IndividualAllocID_10("STRING_656421590");
      noAllocs_0_1_0.set(IndividualAllocID_10);
      PreAllocGrp_NoAllocs_0.insert(IndividualAllocID_10.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_0);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_38;
        FIX::NestedPartyID NestedPartyID_38("STRING_2041254728");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_38);
        NestedParties_NoNestedPartyIDs_38.insert(NestedPartyID_38.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_38('8');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_38);
        NestedParties_NoNestedPartyIDs_38.insert(NestedPartyIDSource_38.getString());
        FIX::NestedPartyRole NestedPartyRole_38(1856203538);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_38);
        NestedParties_NoNestedPartyIDs_38.insert(NestedPartyRole_38.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_38);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_72;
          FIX::NestedPartySubID NestedPartySubID_72("STRING_1175072985");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_72);
          NstdPtysSubGrp_NoNestedPartySubIDs_72.insert(NestedPartySubID_72.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_72(1414559744);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_72);
          NstdPtysSubGrp_NoNestedPartySubIDs_72.insert(NestedPartySubIDType_72.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_72);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_73;
          FIX::NestedPartySubID NestedPartySubID_73("STRING_1590951223");
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubID_73);
          NstdPtysSubGrp_NoNestedPartySubIDs_73.insert(NestedPartySubID_73.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_73(1741081566);
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubIDType_73);
          NstdPtysSubGrp_NoNestedPartySubIDs_73.insert(NestedPartySubIDType_73.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_73);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_39;
        FIX::NestedPartyID NestedPartyID_39("STRING_540711552");
        noNestedPartyIDs_0_0_2_1.set(NestedPartyID_39);
        NestedParties_NoNestedPartyIDs_39.insert(NestedPartyID_39.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_39('1');
        noNestedPartyIDs_0_0_2_1.set(NestedPartyIDSource_39);
        NestedParties_NoNestedPartyIDs_39.insert(NestedPartyIDSource_39.getString());
        FIX::NestedPartyRole NestedPartyRole_39(1709847293);
        noNestedPartyIDs_0_0_2_1.set(NestedPartyRole_39);
        NestedParties_NoNestedPartyIDs_39.insert(NestedPartyRole_39.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_39);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_74;
          FIX::NestedPartySubID NestedPartySubID_74("STRING_1938399035");
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubID_74);
          NstdPtysSubGrp_NoNestedPartySubIDs_74.insert(NestedPartySubID_74.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_74(1963125608);
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubIDType_74);
          NstdPtysSubGrp_NoNestedPartySubIDs_74.insert(NestedPartySubIDType_74.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_74);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_75;
          FIX::NestedPartySubID NestedPartySubID_75("STRING_1334128757");
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubID_75);
          NstdPtysSubGrp_NoNestedPartySubIDs_75.insert(NestedPartySubID_75.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_75(520069127);
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubIDType_75);
          NstdPtysSubGrp_NoNestedPartySubIDs_75.insert(NestedPartySubIDType_75.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_75);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_76;
          FIX::NestedPartySubID NestedPartySubID_76("STRING_121211684");
          noNestedPartySubIDs_0_0_1_3_2.set(NestedPartySubID_76);
          NstdPtysSubGrp_NoNestedPartySubIDs_76.insert(NestedPartySubID_76.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_76(113111838);
          noNestedPartySubIDs_0_0_1_3_2.set(NestedPartySubIDType_76);
          NstdPtysSubGrp_NoNestedPartySubIDs_76.insert(NestedPartySubIDType_76.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_76);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_2);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_40;
        FIX::NestedPartyID NestedPartyID_40("STRING_1879263477");
        noNestedPartyIDs_0_0_2_2.set(NestedPartyID_40);
        NestedParties_NoNestedPartyIDs_40.insert(NestedPartyID_40.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_40('2');
        noNestedPartyIDs_0_0_2_2.set(NestedPartyIDSource_40);
        NestedParties_NoNestedPartyIDs_40.insert(NestedPartyIDSource_40.getString());
        FIX::NestedPartyRole NestedPartyRole_40(264604644);
        noNestedPartyIDs_0_0_2_2.set(NestedPartyRole_40);
        NestedParties_NoNestedPartyIDs_40.insert(NestedPartyRole_40.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_40);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_77;
          FIX::NestedPartySubID NestedPartySubID_77("STRING_1799026398");
          noNestedPartySubIDs_0_0_2_3_0.set(NestedPartySubID_77);
          NstdPtysSubGrp_NoNestedPartySubIDs_77.insert(NestedPartySubID_77.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_77(1341438367);
          noNestedPartySubIDs_0_0_2_3_0.set(NestedPartySubIDType_77);
          NstdPtysSubGrp_NoNestedPartySubIDs_77.insert(NestedPartySubIDType_77.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_77);

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
      FIX::AllocAccount AllocAccount_11("STRING_525297111");
      noAllocs_0_1_1.set(AllocAccount_11);
      PreAllocGrp_NoAllocs_1.insert(AllocAccount_11.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_11(1161526768);
      noAllocs_0_1_1.set(AllocAcctIDSource_11);
      PreAllocGrp_NoAllocs_1.insert(AllocAcctIDSource_11.getString());
      FIX::AllocQty AllocQty_10;
      AllocQty_10.setString("20311160");
      noAllocs_0_1_1.set(AllocQty_10);
      PreAllocGrp_NoAllocs_1.insert(AllocQty_10.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_6("JPY");
      noAllocs_0_1_1.set(AllocSettlCurrency_6);
      PreAllocGrp_NoAllocs_1.insert(AllocSettlCurrency_6.getString());
      FIX::IndividualAllocID IndividualAllocID_11("STRING_540053973");
      noAllocs_0_1_1.set(IndividualAllocID_11);
      PreAllocGrp_NoAllocs_1.insert(IndividualAllocID_11.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_1);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_41;
        FIX::NestedPartyID NestedPartyID_41("STRING_1848400271");
        noNestedPartyIDs_0_1_2_0.set(NestedPartyID_41);
        NestedParties_NoNestedPartyIDs_41.insert(NestedPartyID_41.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_41('1');
        noNestedPartyIDs_0_1_2_0.set(NestedPartyIDSource_41);
        NestedParties_NoNestedPartyIDs_41.insert(NestedPartyIDSource_41.getString());
        FIX::NestedPartyRole NestedPartyRole_41(1570231908);
        noNestedPartyIDs_0_1_2_0.set(NestedPartyRole_41);
        NestedParties_NoNestedPartyIDs_41.insert(NestedPartyRole_41.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_41);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_78;
          FIX::NestedPartySubID NestedPartySubID_78("STRING_444827117");
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubID_78);
          NstdPtysSubGrp_NoNestedPartySubIDs_78.insert(NestedPartySubID_78.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_78(837308005);
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubIDType_78);
          NstdPtysSubGrp_NoNestedPartySubIDs_78.insert(NestedPartySubIDType_78.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_78);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_79;
          FIX::NestedPartySubID NestedPartySubID_79("STRING_1029495789");
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubID_79);
          NstdPtysSubGrp_NoNestedPartySubIDs_79.insert(NestedPartySubID_79.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_79(38425035);
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubIDType_79);
          NstdPtysSubGrp_NoNestedPartySubIDs_79.insert(NestedPartySubIDType_79.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_79);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      noSides_0_0.addGroup(noAllocs_0_1_1);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSides noSides_0_1;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_1;
    FIX::Account Account_10("STRING_1378019557");
    noSides_0_1.set(Account_10);
    SideCrossOrdModGrp_NoSides_1.insert(Account_10.getString());
    FIX::AccountType AccountType_8(1);
    noSides_0_1.set(AccountType_8);
    SideCrossOrdModGrp_NoSides_1.insert(AccountType_8.getString());
    FIX::AcctIDSource AcctIDSource_3(4);
    noSides_0_1.set(AcctIDSource_3);
    SideCrossOrdModGrp_NoSides_1.insert(AcctIDSource_3.getString());
    FIX::AllocID AllocID_8("STRING_717066010");
    noSides_0_1.set(AllocID_8);
    SideCrossOrdModGrp_NoSides_1.insert(AllocID_8.getString());
    FIX::BookingType BookingType_4(2);
    noSides_0_1.set(BookingType_4);
    SideCrossOrdModGrp_NoSides_1.insert(BookingType_4.getString());
    FIX::BookingUnit BookingUnit_1('0');
    noSides_0_1.set(BookingUnit_1);
    SideCrossOrdModGrp_NoSides_1.insert(BookingUnit_1.getString());
    FIX::CashMargin CashMargin_1('1');
    noSides_0_1.set(CashMargin_1);
    SideCrossOrdModGrp_NoSides_1.insert(CashMargin_1.getString());
    FIX::ClOrdID ClOrdID_16("STRING_1441200412");
    noSides_0_1.set(ClOrdID_16);
    SideCrossOrdModGrp_NoSides_1.insert(ClOrdID_16.getString());
    FIX::ClOrdLinkID ClOrdLinkID_1("STRING_1685125973");
    noSides_0_1.set(ClOrdLinkID_1);
    SideCrossOrdModGrp_NoSides_1.insert(ClOrdLinkID_1.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_6("STRING_L");
    noSides_0_1.set(ClearingFeeIndicator_6);
    SideCrossOrdModGrp_NoSides_1.insert(ClearingFeeIndicator_6.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_1(0);
    noSides_0_1.set(CoveredOrUncovered_1);
    SideCrossOrdModGrp_NoSides_1.insert(CoveredOrUncovered_1.getString());
    FIX::CustOrderCapacity CustOrderCapacity_4(1);
    noSides_0_1.set(CustOrderCapacity_4);
    SideCrossOrdModGrp_NoSides_1.insert(CustOrderCapacity_4.getString());
    FIX::DayBookingInst DayBookingInst_1('2');
    noSides_0_1.set(DayBookingInst_1);
    SideCrossOrdModGrp_NoSides_1.insert(DayBookingInst_1.getString());
    FIX::EncodedText EncodedText_24("DATA_1786732560");
    noSides_0_1.set(EncodedText_24);
    SideCrossOrdModGrp_NoSides_1.insert(EncodedText_24.getString());
    FIX::EncodedTextLen EncodedTextLen_24(1307785318);
    noSides_0_1.set(EncodedTextLen_24);
    SideCrossOrdModGrp_NoSides_1.insert(EncodedTextLen_24.getString());
    FIX::ForexReq ForexReq_2(true);
    noSides_0_1.set(ForexReq_2);
    SideCrossOrdModGrp_NoSides_1.insert(ForexReq_2.getString());
    FIX::OrderCapacity OrderCapacity_4('G');
    noSides_0_1.set(OrderCapacity_4);
    SideCrossOrdModGrp_NoSides_1.insert(OrderCapacity_4.getString());
    FIX::OrderRestrictions OrderRestrictions_4("MULTIPLECHARVALUE_4");
    noSides_0_1.set(OrderRestrictions_4);
    SideCrossOrdModGrp_NoSides_1.insert(OrderRestrictions_4.getString());
    FIX::OrigClOrdID OrigClOrdID_1("STRING_1506498353");
    noSides_0_1.set(OrigClOrdID_1);
    SideCrossOrdModGrp_NoSides_1.insert(OrigClOrdID_1.getString());
    FIX::PositionEffect PositionEffect_4('O');
    noSides_0_1.set(PositionEffect_4);
    SideCrossOrdModGrp_NoSides_1.insert(PositionEffect_4.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_1(true);
    noSides_0_1.set(PreTradeAnonymity_1);
    SideCrossOrdModGrp_NoSides_1.insert(PreTradeAnonymity_1.getString());
    FIX::PreallocMethod PreallocMethod_1('0');
    noSides_0_1.set(PreallocMethod_1);
    SideCrossOrdModGrp_NoSides_1.insert(PreallocMethod_1.getString());
    FIX::QtyType QtyType_12(0);
    noSides_0_1.set(QtyType_12);
    SideCrossOrdModGrp_NoSides_1.insert(QtyType_12.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_16("STRING_1977374251");
    noSides_0_1.set(SecondaryClOrdID_16);
    SideCrossOrdModGrp_NoSides_1.insert(SecondaryClOrdID_16.getString());
    FIX::SettlCurrency SettlCurrency_7("JPY");
    noSides_0_1.set(SettlCurrency_7);
    SideCrossOrdModGrp_NoSides_1.insert(SettlCurrency_7.getString());
    FIX::Side Side_13('3');
    noSides_0_1.set(Side_13);
    SideCrossOrdModGrp_NoSides_1.insert(Side_13.getString());
    FIX::SideComplianceID SideComplianceID_1("STRING_1761133576");
    noSides_0_1.set(SideComplianceID_1);
    SideCrossOrdModGrp_NoSides_1.insert(SideComplianceID_1.getString());
    FIX::SideTimeInForce SideTimeInForce_1(FIX::UTCTIMESTAMP(23, 31, 22, 25, 92003));
    noSides_0_1.set(SideTimeInForce_1);
    SideCrossOrdModGrp_NoSides_1.insert(SideTimeInForce_1.getString());
    FIX::SolicitedFlag SolicitedFlag_1(false);
    noSides_0_1.set(SolicitedFlag_1);
    SideCrossOrdModGrp_NoSides_1.insert(SolicitedFlag_1.getString());
    FIX::Text Text_24("STRING_816777934");
    noSides_0_1.set(Text_24);
    SideCrossOrdModGrp_NoSides_1.insert(Text_24.getString());
    FIX::TradeDate TradeDate_10("LOCALMKTDATE_1278704212");
    noSides_0_1.set(TradeDate_10);
    SideCrossOrdModGrp_NoSides_1.insert(TradeDate_10.getString());
    FIX::TradeOriginationDate TradeOriginationDate_4("LOCALMKTDATE_1642994907");
    noSides_0_1.set(TradeOriginationDate_4);
    SideCrossOrdModGrp_NoSides_1.insert(TradeOriginationDate_4.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_1);

    // CommissionData
    multiset<string> CommissionData_8;
    FIX::CommCurrency CommCurrency_8("USD");
    noSides_0_1.set(CommCurrency_8);
    CommissionData_8.insert(CommCurrency_8.getString());
    FIX::CommType CommType_8('2');
    noSides_0_1.set(CommType_8);
    CommissionData_8.insert(CommType_8.getString());
    FIX::Commission Commission_8;
    Commission_8.setString("20106628");
    noSides_0_1.set(Commission_8);
    CommissionData_8.insert(Commission_8.getString());
    FIX::FundRenewWaiv FundRenewWaiv_8('Y');
    noSides_0_1.set(FundRenewWaiv_8);
    CommissionData_8.insert(FundRenewWaiv_8.getString());
    all_values.push_back(CommissionData_8);

    // OrderQtyData
    multiset<string> OrderQtyData_1;
    FIX::CashOrderQty CashOrderQty_1;
    CashOrderQty_1.setString("3077404");
    noSides_0_1.set(CashOrderQty_1);
    OrderQtyData_1.insert(CashOrderQty_1.getString());
    FIX::OrderPercent OrderPercent_1;
    OrderPercent_1.setString("44.970000");
    noSides_0_1.set(OrderPercent_1);
    OrderQtyData_1.insert(OrderPercent_1.getString());
    FIX::OrderQty OrderQty_10;
    OrderQty_10.setString("10523370");
    noSides_0_1.set(OrderQty_10);
    OrderQtyData_1.insert(OrderQty_10.getString());
    FIX::RoundingDirection RoundingDirection_1('1');
    noSides_0_1.set(RoundingDirection_1);
    OrderQtyData_1.insert(RoundingDirection_1.getString());
    FIX::RoundingModulus RoundingModulus_1;
    RoundingModulus_1.setString("14927929");
    noSides_0_1.set(RoundingModulus_1);
    OrderQtyData_1.insert(RoundingModulus_1.getString());
    all_values.push_back(OrderQtyData_1);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_36;
      FIX::PartyID PartyID_36("STRING_1925592975");
      noPartyIDs_1_1_0.set(PartyID_36);
      Parties_NoPartyIDs_36.insert(PartyID_36.getString());
      FIX::PartyIDSource PartyIDSource_36('6');
      noPartyIDs_1_1_0.set(PartyIDSource_36);
      Parties_NoPartyIDs_36.insert(PartyIDSource_36.getString());
      FIX::PartyRole PartyRole_36(76);
      noPartyIDs_1_1_0.set(PartyRole_36);
      Parties_NoPartyIDs_36.insert(PartyRole_36.getString());
      all_values.push_back(Parties_NoPartyIDs_36);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_75;
        FIX::PartySubID PartySubID_75("STRING_1451657519");
        noPartySubIDs_1_0_2_0.set(PartySubID_75);
        PtysSubGrp_NoPartySubIDs_75.insert(PartySubID_75.getString());
        FIX::PartySubIDType PartySubIDType_75(22);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_75);
        PtysSubGrp_NoPartySubIDs_75.insert(PartySubIDType_75.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_75);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_76;
        FIX::PartySubID PartySubID_76("STRING_1535527404");
        noPartySubIDs_1_0_2_1.set(PartySubID_76);
        PtysSubGrp_NoPartySubIDs_76.insert(PartySubID_76.getString());
        FIX::PartySubIDType PartySubIDType_76(20);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_76);
        PtysSubGrp_NoPartySubIDs_76.insert(PartySubIDType_76.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_76);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_37;
      FIX::PartyID PartyID_37("STRING_1240376864");
      noPartyIDs_1_1_1.set(PartyID_37);
      Parties_NoPartyIDs_37.insert(PartyID_37.getString());
      FIX::PartyIDSource PartyIDSource_37('5');
      noPartyIDs_1_1_1.set(PartyIDSource_37);
      Parties_NoPartyIDs_37.insert(PartyIDSource_37.getString());
      FIX::PartyRole PartyRole_37(14);
      noPartyIDs_1_1_1.set(PartyRole_37);
      Parties_NoPartyIDs_37.insert(PartyRole_37.getString());
      all_values.push_back(Parties_NoPartyIDs_37);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_77;
        FIX::PartySubID PartySubID_77("STRING_1473362012");
        noPartySubIDs_1_1_2_0.set(PartySubID_77);
        PtysSubGrp_NoPartySubIDs_77.insert(PartySubID_77.getString());
        FIX::PartySubIDType PartySubIDType_77(31);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_77);
        PtysSubGrp_NoPartySubIDs_77.insert(PartySubIDType_77.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_77);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_78;
        FIX::PartySubID PartySubID_78("STRING_145315472");
        noPartySubIDs_1_1_2_1.set(PartySubID_78);
        PtysSubGrp_NoPartySubIDs_78.insert(PartySubID_78.getString());
        FIX::PartySubIDType PartySubIDType_78(1);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_78);
        PtysSubGrp_NoPartySubIDs_78.insert(PartySubIDType_78.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_78);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_79;
        FIX::PartySubID PartySubID_79("STRING_500481353");
        noPartySubIDs_1_1_2_2.set(PartySubID_79);
        PtysSubGrp_NoPartySubIDs_79.insert(PartySubID_79.getString());
        FIX::PartySubIDType PartySubIDType_79(22);
        noPartySubIDs_1_1_2_2.set(PartySubIDType_79);
        PtysSubGrp_NoPartySubIDs_79.insert(PartySubIDType_79.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_79);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_38;
      FIX::PartyID PartyID_38("STRING_1979575669");
      noPartyIDs_1_1_2.set(PartyID_38);
      Parties_NoPartyIDs_38.insert(PartyID_38.getString());
      FIX::PartyIDSource PartyIDSource_38('5');
      noPartyIDs_1_1_2.set(PartyIDSource_38);
      Parties_NoPartyIDs_38.insert(PartyIDSource_38.getString());
      FIX::PartyRole PartyRole_38(64);
      noPartyIDs_1_1_2.set(PartyRole_38);
      Parties_NoPartyIDs_38.insert(PartyRole_38.getString());
      all_values.push_back(Parties_NoPartyIDs_38);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_80;
        FIX::PartySubID PartySubID_80("STRING_664484114");
        noPartySubIDs_1_2_2_0.set(PartySubID_80);
        PtysSubGrp_NoPartySubIDs_80.insert(PartySubID_80.getString());
        FIX::PartySubIDType PartySubIDType_80(2);
        noPartySubIDs_1_2_2_0.set(PartySubIDType_80);
        PtysSubGrp_NoPartySubIDs_80.insert(PartySubIDType_80.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_80);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_1_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_2;
      FIX::AllocAccount AllocAccount_12("STRING_972224528");
      noAllocs_1_1_0.set(AllocAccount_12);
      PreAllocGrp_NoAllocs_2.insert(AllocAccount_12.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_12(203173695);
      noAllocs_1_1_0.set(AllocAcctIDSource_12);
      PreAllocGrp_NoAllocs_2.insert(AllocAcctIDSource_12.getString());
      FIX::AllocQty AllocQty_11;
      AllocQty_11.setString("16094274");
      noAllocs_1_1_0.set(AllocQty_11);
      PreAllocGrp_NoAllocs_2.insert(AllocQty_11.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_7("USD");
      noAllocs_1_1_0.set(AllocSettlCurrency_7);
      PreAllocGrp_NoAllocs_2.insert(AllocSettlCurrency_7.getString());
      FIX::IndividualAllocID IndividualAllocID_12("STRING_2020779212");
      noAllocs_1_1_0.set(IndividualAllocID_12);
      PreAllocGrp_NoAllocs_2.insert(IndividualAllocID_12.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_2);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_42;
        FIX::NestedPartyID NestedPartyID_42("STRING_1170249898");
        noNestedPartyIDs_1_0_2_0.set(NestedPartyID_42);
        NestedParties_NoNestedPartyIDs_42.insert(NestedPartyID_42.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_42('1');
        noNestedPartyIDs_1_0_2_0.set(NestedPartyIDSource_42);
        NestedParties_NoNestedPartyIDs_42.insert(NestedPartyIDSource_42.getString());
        FIX::NestedPartyRole NestedPartyRole_42(20580881);
        noNestedPartyIDs_1_0_2_0.set(NestedPartyRole_42);
        NestedParties_NoNestedPartyIDs_42.insert(NestedPartyRole_42.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_42);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_80;
          FIX::NestedPartySubID NestedPartySubID_80("STRING_1810442978");
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubID_80);
          NstdPtysSubGrp_NoNestedPartySubIDs_80.insert(NestedPartySubID_80.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_80(1556108285);
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubIDType_80);
          NstdPtysSubGrp_NoNestedPartySubIDs_80.insert(NestedPartySubIDType_80.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_80);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_81;
          FIX::NestedPartySubID NestedPartySubID_81("STRING_1194516459");
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubID_81);
          NstdPtysSubGrp_NoNestedPartySubIDs_81.insert(NestedPartySubID_81.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_81(903336195);
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubIDType_81);
          NstdPtysSubGrp_NoNestedPartySubIDs_81.insert(NestedPartySubIDType_81.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_81);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_82;
          FIX::NestedPartySubID NestedPartySubID_82("STRING_224059566");
          noNestedPartySubIDs_1_0_0_3_2.set(NestedPartySubID_82);
          NstdPtysSubGrp_NoNestedPartySubIDs_82.insert(NestedPartySubID_82.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_82(65056460);
          noNestedPartySubIDs_1_0_0_3_2.set(NestedPartySubIDType_82);
          NstdPtysSubGrp_NoNestedPartySubIDs_82.insert(NestedPartySubIDType_82.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_82);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_2);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_43;
        FIX::NestedPartyID NestedPartyID_43("STRING_1795788023");
        noNestedPartyIDs_1_0_2_1.set(NestedPartyID_43);
        NestedParties_NoNestedPartyIDs_43.insert(NestedPartyID_43.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_43('1');
        noNestedPartyIDs_1_0_2_1.set(NestedPartyIDSource_43);
        NestedParties_NoNestedPartyIDs_43.insert(NestedPartyIDSource_43.getString());
        FIX::NestedPartyRole NestedPartyRole_43(363743319);
        noNestedPartyIDs_1_0_2_1.set(NestedPartyRole_43);
        NestedParties_NoNestedPartyIDs_43.insert(NestedPartyRole_43.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_43);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_83;
          FIX::NestedPartySubID NestedPartySubID_83("STRING_250809387");
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubID_83);
          NstdPtysSubGrp_NoNestedPartySubIDs_83.insert(NestedPartySubID_83.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_83(864224672);
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubIDType_83);
          NstdPtysSubGrp_NoNestedPartySubIDs_83.insert(NestedPartySubIDType_83.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_83);

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_84;
          FIX::NestedPartySubID NestedPartySubID_84("STRING_755713254");
          noNestedPartySubIDs_1_0_1_3_1.set(NestedPartySubID_84);
          NstdPtysSubGrp_NoNestedPartySubIDs_84.insert(NestedPartySubID_84.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_84(82901409);
          noNestedPartySubIDs_1_0_1_3_1.set(NestedPartySubIDType_84);
          NstdPtysSubGrp_NoNestedPartySubIDs_84.insert(NestedPartySubIDType_84.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_84);

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_1);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_44;
        FIX::NestedPartyID NestedPartyID_44("STRING_860217285");
        noNestedPartyIDs_1_0_2_2.set(NestedPartyID_44);
        NestedParties_NoNestedPartyIDs_44.insert(NestedPartyID_44.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_44('2');
        noNestedPartyIDs_1_0_2_2.set(NestedPartyIDSource_44);
        NestedParties_NoNestedPartyIDs_44.insert(NestedPartyIDSource_44.getString());
        FIX::NestedPartyRole NestedPartyRole_44(1210520601);
        noNestedPartyIDs_1_0_2_2.set(NestedPartyRole_44);
        NestedParties_NoNestedPartyIDs_44.insert(NestedPartyRole_44.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_44);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_85;
          FIX::NestedPartySubID NestedPartySubID_85("STRING_1104436117");
          noNestedPartySubIDs_1_0_2_3_0.set(NestedPartySubID_85);
          NstdPtysSubGrp_NoNestedPartySubIDs_85.insert(NestedPartySubID_85.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_85(1767610918);
          noNestedPartySubIDs_1_0_2_3_0.set(NestedPartySubIDType_85);
          NstdPtysSubGrp_NoNestedPartySubIDs_85.insert(NestedPartySubIDType_85.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_85);

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_0);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noAllocs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_1_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_3;
      FIX::AllocAccount AllocAccount_13("STRING_349442280");
      noAllocs_1_1_1.set(AllocAccount_13);
      PreAllocGrp_NoAllocs_3.insert(AllocAccount_13.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_13(1307609812);
      noAllocs_1_1_1.set(AllocAcctIDSource_13);
      PreAllocGrp_NoAllocs_3.insert(AllocAcctIDSource_13.getString());
      FIX::AllocQty AllocQty_12;
      AllocQty_12.setString("12295546");
      noAllocs_1_1_1.set(AllocQty_12);
      PreAllocGrp_NoAllocs_3.insert(AllocQty_12.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_8("CHF");
      noAllocs_1_1_1.set(AllocSettlCurrency_8);
      PreAllocGrp_NoAllocs_3.insert(AllocSettlCurrency_8.getString());
      FIX::IndividualAllocID IndividualAllocID_13("STRING_1102850246");
      noAllocs_1_1_1.set(IndividualAllocID_13);
      PreAllocGrp_NoAllocs_3.insert(IndividualAllocID_13.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_3);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_45;
        FIX::NestedPartyID NestedPartyID_45("STRING_2026342693");
        noNestedPartyIDs_1_1_2_0.set(NestedPartyID_45);
        NestedParties_NoNestedPartyIDs_45.insert(NestedPartyID_45.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_45('1');
        noNestedPartyIDs_1_1_2_0.set(NestedPartyIDSource_45);
        NestedParties_NoNestedPartyIDs_45.insert(NestedPartyIDSource_45.getString());
        FIX::NestedPartyRole NestedPartyRole_45(889670773);
        noNestedPartyIDs_1_1_2_0.set(NestedPartyRole_45);
        NestedParties_NoNestedPartyIDs_45.insert(NestedPartyRole_45.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_45);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_86;
          FIX::NestedPartySubID NestedPartySubID_86("STRING_949525618");
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubID_86);
          NstdPtysSubGrp_NoNestedPartySubIDs_86.insert(NestedPartySubID_86.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_86(298295410);
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubIDType_86);
          NstdPtysSubGrp_NoNestedPartySubIDs_86.insert(NestedPartySubIDType_86.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_86);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_87;
          FIX::NestedPartySubID NestedPartySubID_87("STRING_1547799275");
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubID_87);
          NstdPtysSubGrp_NoNestedPartySubIDs_87.insert(NestedPartySubID_87.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_87(1852861813);
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubIDType_87);
          NstdPtysSubGrp_NoNestedPartySubIDs_87.insert(NestedPartySubIDType_87.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_87);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_1);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_46;
        FIX::NestedPartyID NestedPartyID_46("STRING_522354976");
        noNestedPartyIDs_1_1_2_1.set(NestedPartyID_46);
        NestedParties_NoNestedPartyIDs_46.insert(NestedPartyID_46.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_46('1');
        noNestedPartyIDs_1_1_2_1.set(NestedPartyIDSource_46);
        NestedParties_NoNestedPartyIDs_46.insert(NestedPartyIDSource_46.getString());
        FIX::NestedPartyRole NestedPartyRole_46(1501166188);
        noNestedPartyIDs_1_1_2_1.set(NestedPartyRole_46);
        NestedParties_NoNestedPartyIDs_46.insert(NestedPartyRole_46.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_46);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_88;
          FIX::NestedPartySubID NestedPartySubID_88("STRING_1976599054");
          noNestedPartySubIDs_1_1_1_3_0.set(NestedPartySubID_88);
          NstdPtysSubGrp_NoNestedPartySubIDs_88.insert(NestedPartySubID_88.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_88(1294786036);
          noNestedPartySubIDs_1_1_1_3_0.set(NestedPartySubIDType_88);
          NstdPtysSubGrp_NoNestedPartySubIDs_88.insert(NestedPartySubIDType_88.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_88);

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_89;
          FIX::NestedPartySubID NestedPartySubID_89("STRING_323102294");
          noNestedPartySubIDs_1_1_1_3_1.set(NestedPartySubID_89);
          NstdPtysSubGrp_NoNestedPartySubIDs_89.insert(NestedPartySubID_89.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_89(693340079);
          noNestedPartySubIDs_1_1_1_3_1.set(NestedPartySubIDType_89);
          NstdPtysSubGrp_NoNestedPartySubIDs_89.insert(NestedPartySubIDType_89.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_89);

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_90;
          FIX::NestedPartySubID NestedPartySubID_90("STRING_2050499290");
          noNestedPartySubIDs_1_1_1_3_2.set(NestedPartySubID_90);
          NstdPtysSubGrp_NoNestedPartySubIDs_90.insert(NestedPartySubID_90.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_90(406003703);
          noNestedPartySubIDs_1_1_1_3_2.set(NestedPartySubIDType_90);
          NstdPtysSubGrp_NoNestedPartySubIDs_90.insert(NestedPartySubIDType_90.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_90);

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_2);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_47;
        FIX::NestedPartyID NestedPartyID_47("STRING_1553557364");
        noNestedPartyIDs_1_1_2_2.set(NestedPartyID_47);
        NestedParties_NoNestedPartyIDs_47.insert(NestedPartyID_47.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_47('1');
        noNestedPartyIDs_1_1_2_2.set(NestedPartyIDSource_47);
        NestedParties_NoNestedPartyIDs_47.insert(NestedPartyIDSource_47.getString());
        FIX::NestedPartyRole NestedPartyRole_47(1616524304);
        noNestedPartyIDs_1_1_2_2.set(NestedPartyRole_47);
        NestedParties_NoNestedPartyIDs_47.insert(NestedPartyRole_47.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_47);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_91;
          FIX::NestedPartySubID NestedPartySubID_91("STRING_932195031");
          noNestedPartySubIDs_1_1_2_3_0.set(NestedPartySubID_91);
          NstdPtysSubGrp_NoNestedPartySubIDs_91.insert(NestedPartySubID_91.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_91(1236651574);
          noNestedPartySubIDs_1_1_2_3_0.set(NestedPartySubIDType_91);
          NstdPtysSubGrp_NoNestedPartySubIDs_91.insert(NestedPartySubIDType_91.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_91);

          noNestedPartyIDs_1_1_2_2.addGroup(noNestedPartySubIDs_1_1_2_3_0);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_2);
      }
      noSides_0_1.addGroup(noAllocs_1_1_1);
    }
    msg.addGroup(noSides_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSides noSides_0_2;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_2;
    FIX::Account Account_11("STRING_1280217397");
    noSides_0_2.set(Account_11);
    SideCrossOrdModGrp_NoSides_2.insert(Account_11.getString());
    FIX::AccountType AccountType_9(3);
    noSides_0_2.set(AccountType_9);
    SideCrossOrdModGrp_NoSides_2.insert(AccountType_9.getString());
    FIX::AcctIDSource AcctIDSource_4(5);
    noSides_0_2.set(AcctIDSource_4);
    SideCrossOrdModGrp_NoSides_2.insert(AcctIDSource_4.getString());
    FIX::AllocID AllocID_9("STRING_926686995");
    noSides_0_2.set(AllocID_9);
    SideCrossOrdModGrp_NoSides_2.insert(AllocID_9.getString());
    FIX::BookingType BookingType_5(0);
    noSides_0_2.set(BookingType_5);
    SideCrossOrdModGrp_NoSides_2.insert(BookingType_5.getString());
    FIX::BookingUnit BookingUnit_2('0');
    noSides_0_2.set(BookingUnit_2);
    SideCrossOrdModGrp_NoSides_2.insert(BookingUnit_2.getString());
    FIX::CashMargin CashMargin_2('3');
    noSides_0_2.set(CashMargin_2);
    SideCrossOrdModGrp_NoSides_2.insert(CashMargin_2.getString());
    FIX::ClOrdID ClOrdID_17("STRING_827273036");
    noSides_0_2.set(ClOrdID_17);
    SideCrossOrdModGrp_NoSides_2.insert(ClOrdID_17.getString());
    FIX::ClOrdLinkID ClOrdLinkID_2("STRING_560655494");
    noSides_0_2.set(ClOrdLinkID_2);
    SideCrossOrdModGrp_NoSides_2.insert(ClOrdLinkID_2.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_7("STRING_L");
    noSides_0_2.set(ClearingFeeIndicator_7);
    SideCrossOrdModGrp_NoSides_2.insert(ClearingFeeIndicator_7.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_2(0);
    noSides_0_2.set(CoveredOrUncovered_2);
    SideCrossOrdModGrp_NoSides_2.insert(CoveredOrUncovered_2.getString());
    FIX::CustOrderCapacity CustOrderCapacity_5(2);
    noSides_0_2.set(CustOrderCapacity_5);
    SideCrossOrdModGrp_NoSides_2.insert(CustOrderCapacity_5.getString());
    FIX::DayBookingInst DayBookingInst_2('2');
    noSides_0_2.set(DayBookingInst_2);
    SideCrossOrdModGrp_NoSides_2.insert(DayBookingInst_2.getString());
    FIX::EncodedText EncodedText_25("DATA_580871479");
    noSides_0_2.set(EncodedText_25);
    SideCrossOrdModGrp_NoSides_2.insert(EncodedText_25.getString());
    FIX::EncodedTextLen EncodedTextLen_25(1215559278);
    noSides_0_2.set(EncodedTextLen_25);
    SideCrossOrdModGrp_NoSides_2.insert(EncodedTextLen_25.getString());
    FIX::ForexReq ForexReq_3(false);
    noSides_0_2.set(ForexReq_3);
    SideCrossOrdModGrp_NoSides_2.insert(ForexReq_3.getString());
    FIX::OrderCapacity OrderCapacity_5('A');
    noSides_0_2.set(OrderCapacity_5);
    SideCrossOrdModGrp_NoSides_2.insert(OrderCapacity_5.getString());
    FIX::OrderRestrictions OrderRestrictions_5("MULTIPLECHARVALUE_A");
    noSides_0_2.set(OrderRestrictions_5);
    SideCrossOrdModGrp_NoSides_2.insert(OrderRestrictions_5.getString());
    FIX::OrigClOrdID OrigClOrdID_2("STRING_1430907306");
    noSides_0_2.set(OrigClOrdID_2);
    SideCrossOrdModGrp_NoSides_2.insert(OrigClOrdID_2.getString());
    FIX::PositionEffect PositionEffect_5('D');
    noSides_0_2.set(PositionEffect_5);
    SideCrossOrdModGrp_NoSides_2.insert(PositionEffect_5.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_2(false);
    noSides_0_2.set(PreTradeAnonymity_2);
    SideCrossOrdModGrp_NoSides_2.insert(PreTradeAnonymity_2.getString());
    FIX::PreallocMethod PreallocMethod_2('0');
    noSides_0_2.set(PreallocMethod_2);
    SideCrossOrdModGrp_NoSides_2.insert(PreallocMethod_2.getString());
    FIX::QtyType QtyType_13(2);
    noSides_0_2.set(QtyType_13);
    SideCrossOrdModGrp_NoSides_2.insert(QtyType_13.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_17("STRING_1767043497");
    noSides_0_2.set(SecondaryClOrdID_17);
    SideCrossOrdModGrp_NoSides_2.insert(SecondaryClOrdID_17.getString());
    FIX::SettlCurrency SettlCurrency_8("JPY");
    noSides_0_2.set(SettlCurrency_8);
    SideCrossOrdModGrp_NoSides_2.insert(SettlCurrency_8.getString());
    FIX::Side Side_14('C');
    noSides_0_2.set(Side_14);
    SideCrossOrdModGrp_NoSides_2.insert(Side_14.getString());
    FIX::SideComplianceID SideComplianceID_2("STRING_1629053960");
    noSides_0_2.set(SideComplianceID_2);
    SideCrossOrdModGrp_NoSides_2.insert(SideComplianceID_2.getString());
    FIX::SideTimeInForce SideTimeInForce_2(FIX::UTCTIMESTAMP(18, 47, 14, 18, 42005));
    noSides_0_2.set(SideTimeInForce_2);
    SideCrossOrdModGrp_NoSides_2.insert(SideTimeInForce_2.getString());
    FIX::SolicitedFlag SolicitedFlag_2(false);
    noSides_0_2.set(SolicitedFlag_2);
    SideCrossOrdModGrp_NoSides_2.insert(SolicitedFlag_2.getString());
    FIX::Text Text_25("STRING_311033702");
    noSides_0_2.set(Text_25);
    SideCrossOrdModGrp_NoSides_2.insert(Text_25.getString());
    FIX::TradeDate TradeDate_11("LOCALMKTDATE_613261869");
    noSides_0_2.set(TradeDate_11);
    SideCrossOrdModGrp_NoSides_2.insert(TradeDate_11.getString());
    FIX::TradeOriginationDate TradeOriginationDate_5("LOCALMKTDATE_100038370");
    noSides_0_2.set(TradeOriginationDate_5);
    SideCrossOrdModGrp_NoSides_2.insert(TradeOriginationDate_5.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_2);

    // CommissionData
    multiset<string> CommissionData_9;
    FIX::CommCurrency CommCurrency_9("EUR");
    noSides_0_2.set(CommCurrency_9);
    CommissionData_9.insert(CommCurrency_9.getString());
    FIX::CommType CommType_9('3');
    noSides_0_2.set(CommType_9);
    CommissionData_9.insert(CommType_9.getString());
    FIX::Commission Commission_9;
    Commission_9.setString("2343866");
    noSides_0_2.set(Commission_9);
    CommissionData_9.insert(Commission_9.getString());
    FIX::FundRenewWaiv FundRenewWaiv_9('N');
    noSides_0_2.set(FundRenewWaiv_9);
    CommissionData_9.insert(FundRenewWaiv_9.getString());
    all_values.push_back(CommissionData_9);

    // OrderQtyData
    multiset<string> OrderQtyData_2;
    FIX::CashOrderQty CashOrderQty_2;
    CashOrderQty_2.setString("18614657");
    noSides_0_2.set(CashOrderQty_2);
    OrderQtyData_2.insert(CashOrderQty_2.getString());
    FIX::OrderPercent OrderPercent_2;
    OrderPercent_2.setString("59.400000");
    noSides_0_2.set(OrderPercent_2);
    OrderQtyData_2.insert(OrderPercent_2.getString());
    FIX::OrderQty OrderQty_11;
    OrderQty_11.setString("11986160");
    noSides_0_2.set(OrderQty_11);
    OrderQtyData_2.insert(OrderQty_11.getString());
    FIX::RoundingDirection RoundingDirection_2('0');
    noSides_0_2.set(RoundingDirection_2);
    OrderQtyData_2.insert(RoundingDirection_2.getString());
    FIX::RoundingModulus RoundingModulus_2;
    RoundingModulus_2.setString("20191877");
    noSides_0_2.set(RoundingModulus_2);
    OrderQtyData_2.insert(RoundingModulus_2.getString());
    all_values.push_back(OrderQtyData_2);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_39;
      FIX::PartyID PartyID_39("STRING_1783068240");
      noPartyIDs_2_1_0.set(PartyID_39);
      Parties_NoPartyIDs_39.insert(PartyID_39.getString());
      FIX::PartyIDSource PartyIDSource_39('C');
      noPartyIDs_2_1_0.set(PartyIDSource_39);
      Parties_NoPartyIDs_39.insert(PartyIDSource_39.getString());
      FIX::PartyRole PartyRole_39(14);
      noPartyIDs_2_1_0.set(PartyRole_39);
      Parties_NoPartyIDs_39.insert(PartyRole_39.getString());
      all_values.push_back(Parties_NoPartyIDs_39);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_81;
        FIX::PartySubID PartySubID_81("STRING_1355291815");
        noPartySubIDs_2_0_2_0.set(PartySubID_81);
        PtysSubGrp_NoPartySubIDs_81.insert(PartySubID_81.getString());
        FIX::PartySubIDType PartySubIDType_81(20);
        noPartySubIDs_2_0_2_0.set(PartySubIDType_81);
        PtysSubGrp_NoPartySubIDs_81.insert(PartySubIDType_81.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_81);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_2_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_40;
      FIX::PartyID PartyID_40("STRING_179056413");
      noPartyIDs_2_1_1.set(PartyID_40);
      Parties_NoPartyIDs_40.insert(PartyID_40.getString());
      FIX::PartyIDSource PartyIDSource_40('I');
      noPartyIDs_2_1_1.set(PartyIDSource_40);
      Parties_NoPartyIDs_40.insert(PartyIDSource_40.getString());
      FIX::PartyRole PartyRole_40(24);
      noPartyIDs_2_1_1.set(PartyRole_40);
      Parties_NoPartyIDs_40.insert(PartyRole_40.getString());
      all_values.push_back(Parties_NoPartyIDs_40);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_82;
        FIX::PartySubID PartySubID_82("STRING_1182124372");
        noPartySubIDs_2_1_2_0.set(PartySubID_82);
        PtysSubGrp_NoPartySubIDs_82.insert(PartySubID_82.getString());
        FIX::PartySubIDType PartySubIDType_82(23);
        noPartySubIDs_2_1_2_0.set(PartySubIDType_82);
        PtysSubGrp_NoPartySubIDs_82.insert(PartySubIDType_82.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_82);

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_0);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_1);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_2_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_4;
      FIX::AllocAccount AllocAccount_14("STRING_1653959363");
      noAllocs_2_1_0.set(AllocAccount_14);
      PreAllocGrp_NoAllocs_4.insert(AllocAccount_14.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_14(1337832016);
      noAllocs_2_1_0.set(AllocAcctIDSource_14);
      PreAllocGrp_NoAllocs_4.insert(AllocAcctIDSource_14.getString());
      FIX::AllocQty AllocQty_13;
      AllocQty_13.setString("20878545");
      noAllocs_2_1_0.set(AllocQty_13);
      PreAllocGrp_NoAllocs_4.insert(AllocQty_13.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_9("USD");
      noAllocs_2_1_0.set(AllocSettlCurrency_9);
      PreAllocGrp_NoAllocs_4.insert(AllocSettlCurrency_9.getString());
      FIX::IndividualAllocID IndividualAllocID_14("STRING_553632782");
      noAllocs_2_1_0.set(IndividualAllocID_14);
      PreAllocGrp_NoAllocs_4.insert(IndividualAllocID_14.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_4);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_48;
        FIX::NestedPartyID NestedPartyID_48("STRING_373071267");
        noNestedPartyIDs_2_0_2_0.set(NestedPartyID_48);
        NestedParties_NoNestedPartyIDs_48.insert(NestedPartyID_48.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_48('1');
        noNestedPartyIDs_2_0_2_0.set(NestedPartyIDSource_48);
        NestedParties_NoNestedPartyIDs_48.insert(NestedPartyIDSource_48.getString());
        FIX::NestedPartyRole NestedPartyRole_48(159873640);
        noNestedPartyIDs_2_0_2_0.set(NestedPartyRole_48);
        NestedParties_NoNestedPartyIDs_48.insert(NestedPartyRole_48.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_48);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_92;
          FIX::NestedPartySubID NestedPartySubID_92("STRING_1544860320");
          noNestedPartySubIDs_2_0_0_3_0.set(NestedPartySubID_92);
          NstdPtysSubGrp_NoNestedPartySubIDs_92.insert(NestedPartySubID_92.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_92(2021339341);
          noNestedPartySubIDs_2_0_0_3_0.set(NestedPartySubIDType_92);
          NstdPtysSubGrp_NoNestedPartySubIDs_92.insert(NestedPartySubIDType_92.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_92);

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_0);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_49;
        FIX::NestedPartyID NestedPartyID_49("STRING_2057403868");
        noNestedPartyIDs_2_0_2_1.set(NestedPartyID_49);
        NestedParties_NoNestedPartyIDs_49.insert(NestedPartyID_49.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_49('5');
        noNestedPartyIDs_2_0_2_1.set(NestedPartyIDSource_49);
        NestedParties_NoNestedPartyIDs_49.insert(NestedPartyIDSource_49.getString());
        FIX::NestedPartyRole NestedPartyRole_49(1781564961);
        noNestedPartyIDs_2_0_2_1.set(NestedPartyRole_49);
        NestedParties_NoNestedPartyIDs_49.insert(NestedPartyRole_49.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_49);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_93;
          FIX::NestedPartySubID NestedPartySubID_93("STRING_1078032440");
          noNestedPartySubIDs_2_0_1_3_0.set(NestedPartySubID_93);
          NstdPtysSubGrp_NoNestedPartySubIDs_93.insert(NestedPartySubID_93.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_93(1417149553);
          noNestedPartySubIDs_2_0_1_3_0.set(NestedPartySubIDType_93);
          NstdPtysSubGrp_NoNestedPartySubIDs_93.insert(NestedPartySubIDType_93.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_93);

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_0);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_1);
      }
      noSides_0_2.addGroup(noAllocs_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_2_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_5;
      FIX::AllocAccount AllocAccount_15("STRING_1517356297");
      noAllocs_2_1_1.set(AllocAccount_15);
      PreAllocGrp_NoAllocs_5.insert(AllocAccount_15.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_15(1166598105);
      noAllocs_2_1_1.set(AllocAcctIDSource_15);
      PreAllocGrp_NoAllocs_5.insert(AllocAcctIDSource_15.getString());
      FIX::AllocQty AllocQty_14;
      AllocQty_14.setString("16214331");
      noAllocs_2_1_1.set(AllocQty_14);
      PreAllocGrp_NoAllocs_5.insert(AllocQty_14.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_10("CAN");
      noAllocs_2_1_1.set(AllocSettlCurrency_10);
      PreAllocGrp_NoAllocs_5.insert(AllocSettlCurrency_10.getString());
      FIX::IndividualAllocID IndividualAllocID_15("STRING_1800489611");
      noAllocs_2_1_1.set(IndividualAllocID_15);
      PreAllocGrp_NoAllocs_5.insert(IndividualAllocID_15.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_5);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_50;
        FIX::NestedPartyID NestedPartyID_50("STRING_850359061");
        noNestedPartyIDs_2_1_2_0.set(NestedPartyID_50);
        NestedParties_NoNestedPartyIDs_50.insert(NestedPartyID_50.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_50('7');
        noNestedPartyIDs_2_1_2_0.set(NestedPartyIDSource_50);
        NestedParties_NoNestedPartyIDs_50.insert(NestedPartyIDSource_50.getString());
        FIX::NestedPartyRole NestedPartyRole_50(562415767);
        noNestedPartyIDs_2_1_2_0.set(NestedPartyRole_50);
        NestedParties_NoNestedPartyIDs_50.insert(NestedPartyRole_50.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_50);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_94;
          FIX::NestedPartySubID NestedPartySubID_94("STRING_1860496193");
          noNestedPartySubIDs_2_1_0_3_0.set(NestedPartySubID_94);
          NstdPtysSubGrp_NoNestedPartySubIDs_94.insert(NestedPartySubID_94.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_94(68891482);
          noNestedPartySubIDs_2_1_0_3_0.set(NestedPartySubIDType_94);
          NstdPtysSubGrp_NoNestedPartySubIDs_94.insert(NestedPartySubIDType_94.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_94);

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_95;
          FIX::NestedPartySubID NestedPartySubID_95("STRING_341594950");
          noNestedPartySubIDs_2_1_0_3_1.set(NestedPartySubID_95);
          NstdPtysSubGrp_NoNestedPartySubIDs_95.insert(NestedPartySubID_95.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_95(1800867106);
          noNestedPartySubIDs_2_1_0_3_1.set(NestedPartySubIDType_95);
          NstdPtysSubGrp_NoNestedPartySubIDs_95.insert(NestedPartySubIDType_95.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_95);

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_96;
          FIX::NestedPartySubID NestedPartySubID_96("STRING_995616178");
          noNestedPartySubIDs_2_1_0_3_2.set(NestedPartySubID_96);
          NstdPtysSubGrp_NoNestedPartySubIDs_96.insert(NestedPartySubID_96.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_96(1990460669);
          noNestedPartySubIDs_2_1_0_3_2.set(NestedPartySubIDType_96);
          NstdPtysSubGrp_NoNestedPartySubIDs_96.insert(NestedPartySubIDType_96.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_96);

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_2);
        }
        noAllocs_2_1_1.addGroup(noNestedPartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_51;
        FIX::NestedPartyID NestedPartyID_51("STRING_207016241");
        noNestedPartyIDs_2_1_2_1.set(NestedPartyID_51);
        NestedParties_NoNestedPartyIDs_51.insert(NestedPartyID_51.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_51('2');
        noNestedPartyIDs_2_1_2_1.set(NestedPartyIDSource_51);
        NestedParties_NoNestedPartyIDs_51.insert(NestedPartyIDSource_51.getString());
        FIX::NestedPartyRole NestedPartyRole_51(216048288);
        noNestedPartyIDs_2_1_2_1.set(NestedPartyRole_51);
        NestedParties_NoNestedPartyIDs_51.insert(NestedPartyRole_51.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_51);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_97;
          FIX::NestedPartySubID NestedPartySubID_97("STRING_34769237");
          noNestedPartySubIDs_2_1_1_3_0.set(NestedPartySubID_97);
          NstdPtysSubGrp_NoNestedPartySubIDs_97.insert(NestedPartySubID_97.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_97(823506216);
          noNestedPartySubIDs_2_1_1_3_0.set(NestedPartySubIDType_97);
          NstdPtysSubGrp_NoNestedPartySubIDs_97.insert(NestedPartySubIDType_97.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_97);

          noNestedPartyIDs_2_1_2_1.addGroup(noNestedPartySubIDs_2_1_1_3_0);
        }
        noAllocs_2_1_1.addGroup(noNestedPartyIDs_2_1_2_1);
      }
      noSides_0_2.addGroup(noAllocs_2_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_2_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_6;
      FIX::AllocAccount AllocAccount_16("STRING_1309251577");
      noAllocs_2_1_2.set(AllocAccount_16);
      PreAllocGrp_NoAllocs_6.insert(AllocAccount_16.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_16(2056108579);
      noAllocs_2_1_2.set(AllocAcctIDSource_16);
      PreAllocGrp_NoAllocs_6.insert(AllocAcctIDSource_16.getString());
      FIX::AllocQty AllocQty_15;
      AllocQty_15.setString("7334264");
      noAllocs_2_1_2.set(AllocQty_15);
      PreAllocGrp_NoAllocs_6.insert(AllocQty_15.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_11("GBP");
      noAllocs_2_1_2.set(AllocSettlCurrency_11);
      PreAllocGrp_NoAllocs_6.insert(AllocSettlCurrency_11.getString());
      FIX::IndividualAllocID IndividualAllocID_16("STRING_515050768");
      noAllocs_2_1_2.set(IndividualAllocID_16);
      PreAllocGrp_NoAllocs_6.insert(IndividualAllocID_16.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_6);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_52;
        FIX::NestedPartyID NestedPartyID_52("STRING_959855797");
        noNestedPartyIDs_2_2_2_0.set(NestedPartyID_52);
        NestedParties_NoNestedPartyIDs_52.insert(NestedPartyID_52.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_52('2');
        noNestedPartyIDs_2_2_2_0.set(NestedPartyIDSource_52);
        NestedParties_NoNestedPartyIDs_52.insert(NestedPartyIDSource_52.getString());
        FIX::NestedPartyRole NestedPartyRole_52(2002391201);
        noNestedPartyIDs_2_2_2_0.set(NestedPartyRole_52);
        NestedParties_NoNestedPartyIDs_52.insert(NestedPartyRole_52.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_52);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_98;
          FIX::NestedPartySubID NestedPartySubID_98("STRING_610087882");
          noNestedPartySubIDs_2_2_0_3_0.set(NestedPartySubID_98);
          NstdPtysSubGrp_NoNestedPartySubIDs_98.insert(NestedPartySubID_98.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_98(1122600980);
          noNestedPartySubIDs_2_2_0_3_0.set(NestedPartySubIDType_98);
          NstdPtysSubGrp_NoNestedPartySubIDs_98.insert(NestedPartySubIDType_98.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_98);

          noNestedPartyIDs_2_2_2_0.addGroup(noNestedPartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_99;
          FIX::NestedPartySubID NestedPartySubID_99("STRING_86811310");
          noNestedPartySubIDs_2_2_0_3_1.set(NestedPartySubID_99);
          NstdPtysSubGrp_NoNestedPartySubIDs_99.insert(NestedPartySubID_99.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_99(2137862925);
          noNestedPartySubIDs_2_2_0_3_1.set(NestedPartySubIDType_99);
          NstdPtysSubGrp_NoNestedPartySubIDs_99.insert(NestedPartySubIDType_99.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_99);

          noNestedPartyIDs_2_2_2_0.addGroup(noNestedPartySubIDs_2_2_0_3_1);
        }
        noAllocs_2_1_2.addGroup(noNestedPartyIDs_2_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_53;
        FIX::NestedPartyID NestedPartyID_53("STRING_1972960041");
        noNestedPartyIDs_2_2_2_1.set(NestedPartyID_53);
        NestedParties_NoNestedPartyIDs_53.insert(NestedPartyID_53.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_53('8');
        noNestedPartyIDs_2_2_2_1.set(NestedPartyIDSource_53);
        NestedParties_NoNestedPartyIDs_53.insert(NestedPartyIDSource_53.getString());
        FIX::NestedPartyRole NestedPartyRole_53(552795044);
        noNestedPartyIDs_2_2_2_1.set(NestedPartyRole_53);
        NestedParties_NoNestedPartyIDs_53.insert(NestedPartyRole_53.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_53);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_100;
          FIX::NestedPartySubID NestedPartySubID_100("STRING_537434116");
          noNestedPartySubIDs_2_2_1_3_0.set(NestedPartySubID_100);
          NstdPtysSubGrp_NoNestedPartySubIDs_100.insert(NestedPartySubID_100.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_100(621686526);
          noNestedPartySubIDs_2_2_1_3_0.set(NestedPartySubIDType_100);
          NstdPtysSubGrp_NoNestedPartySubIDs_100.insert(NestedPartySubIDType_100.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_100);

          noNestedPartyIDs_2_2_2_1.addGroup(noNestedPartySubIDs_2_2_1_3_0);
        }
        noAllocs_2_1_2.addGroup(noNestedPartyIDs_2_2_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_2_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_54;
        FIX::NestedPartyID NestedPartyID_54("STRING_1318317926");
        noNestedPartyIDs_2_2_2_2.set(NestedPartyID_54);
        NestedParties_NoNestedPartyIDs_54.insert(NestedPartyID_54.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_54('1');
        noNestedPartyIDs_2_2_2_2.set(NestedPartyIDSource_54);
        NestedParties_NoNestedPartyIDs_54.insert(NestedPartyIDSource_54.getString());
        FIX::NestedPartyRole NestedPartyRole_54(1617302704);
        noNestedPartyIDs_2_2_2_2.set(NestedPartyRole_54);
        NestedParties_NoNestedPartyIDs_54.insert(NestedPartyRole_54.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_54);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_101;
          FIX::NestedPartySubID NestedPartySubID_101("STRING_397833816");
          noNestedPartySubIDs_2_2_2_3_0.set(NestedPartySubID_101);
          NstdPtysSubGrp_NoNestedPartySubIDs_101.insert(NestedPartySubID_101.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_101(1492198301);
          noNestedPartySubIDs_2_2_2_3_0.set(NestedPartySubIDType_101);
          NstdPtysSubGrp_NoNestedPartySubIDs_101.insert(NestedPartySubIDType_101.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_101);

          noNestedPartyIDs_2_2_2_2.addGroup(noNestedPartySubIDs_2_2_2_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_102;
          FIX::NestedPartySubID NestedPartySubID_102("STRING_1377343235");
          noNestedPartySubIDs_2_2_2_3_1.set(NestedPartySubID_102);
          NstdPtysSubGrp_NoNestedPartySubIDs_102.insert(NestedPartySubID_102.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_102(162225073);
          noNestedPartySubIDs_2_2_2_3_1.set(NestedPartySubIDType_102);
          NstdPtysSubGrp_NoNestedPartySubIDs_102.insert(NestedPartySubIDType_102.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_102);

          noNestedPartyIDs_2_2_2_2.addGroup(noNestedPartySubIDs_2_2_2_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_103;
          FIX::NestedPartySubID NestedPartySubID_103("STRING_1526967539");
          noNestedPartySubIDs_2_2_2_3_2.set(NestedPartySubID_103);
          NstdPtysSubGrp_NoNestedPartySubIDs_103.insert(NestedPartySubID_103.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_103(53365803);
          noNestedPartySubIDs_2_2_2_3_2.set(NestedPartySubIDType_103);
          NstdPtysSubGrp_NoNestedPartySubIDs_103.insert(NestedPartySubIDType_103.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_103);

          noNestedPartyIDs_2_2_2_2.addGroup(noNestedPartySubIDs_2_2_2_3_2);
        }
        noAllocs_2_1_2.addGroup(noNestedPartyIDs_2_2_2_2);
      }
      noSides_0_2.addGroup(noAllocs_2_1_2);
    }
    msg.addGroup(noSides_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_9;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_9("JPY");
  msg.set(BenchmarkCurveCurrency_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkCurveCurrency_9.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_9("STRING_EONIA");
  msg.set(BenchmarkCurveName_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkCurveName_9.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_9("STRING_1229237306");
  msg.set(BenchmarkCurvePoint_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkCurvePoint_9.getString());
  FIX::BenchmarkPrice BenchmarkPrice_9;
  BenchmarkPrice_9.setString("9782987");
  msg.set(BenchmarkPrice_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkPrice_9.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_9(1301843009);
  msg.set(BenchmarkPriceType_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkPriceType_9.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_9("STRING_2065030402");
  msg.set(BenchmarkSecurityID_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkSecurityID_9.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_9("STRING_1938154511");
  msg.set(BenchmarkSecurityIDSource_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkSecurityIDSource_9.getString());
  FIX::Spread Spread_9;
  Spread_9.setString("11867664");
  msg.set(Spread_9);
  SpreadOrBenchmarkCurveData_9.insert(Spread_9.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_9);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_17;
    FIX::StipulationType StipulationType_17("STRING_AVSIZE");
    noStipulations_0_0.set(StipulationType_17);
    Stipulations_NoStipulations_17.insert(StipulationType_17.getString());
    FIX::StipulationValue StipulationValue_17("STRING_1796854309");
    noStipulations_0_0.set(StipulationValue_17);
    Stipulations_NoStipulations_17.insert(StipulationValue_17.getString());
    all_values.push_back(Stipulations_NoStipulations_17);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_18;
    FIX::StipulationType StipulationType_18("STRING_HAIRCUT");
    noStipulations_0_1.set(StipulationType_18);
    Stipulations_NoStipulations_18.insert(StipulationType_18.getString());
    FIX::StipulationValue StipulationValue_18("STRING_311287521");
    noStipulations_0_1.set(StipulationValue_18);
    Stipulations_NoStipulations_18.insert(StipulationValue_18.getString());
    all_values.push_back(Stipulations_NoStipulations_18);

    msg.addGroup(noStipulations_0_1);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_0;
    FIX::StrategyParameterName StrategyParameterName_0("STRING_720531681");
    noStrategyParameters_0_0.set(StrategyParameterName_0);
    StrategyParametersGrp_NoStrategyParameters_0.insert(StrategyParameterName_0.getString());
    FIX::StrategyParameterType StrategyParameterType_0(16);
    noStrategyParameters_0_0.set(StrategyParameterType_0);
    StrategyParametersGrp_NoStrategyParameters_0.insert(StrategyParameterType_0.getString());
    FIX::StrategyParameterValue StrategyParameterValue_0("STRING_192544982");
    noStrategyParameters_0_0.set(StrategyParameterValue_0);
    StrategyParametersGrp_NoStrategyParameters_0.insert(StrategyParameterValue_0.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_0);

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_1;
    FIX::StrategyParameterName StrategyParameterName_1("STRING_1697254657");
    noStrategyParameters_0_1.set(StrategyParameterName_1);
    StrategyParametersGrp_NoStrategyParameters_1.insert(StrategyParameterName_1.getString());
    FIX::StrategyParameterType StrategyParameterType_1(13);
    noStrategyParameters_0_1.set(StrategyParameterType_1);
    StrategyParametersGrp_NoStrategyParameters_1.insert(StrategyParameterType_1.getString());
    FIX::StrategyParameterValue StrategyParameterValue_1("STRING_814231508");
    noStrategyParameters_0_1.set(StrategyParameterValue_1);
    StrategyParametersGrp_NoStrategyParameters_1.insert(StrategyParameterValue_1.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_1);

    msg.addGroup(noStrategyParameters_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_2;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_2;
    FIX::StrategyParameterName StrategyParameterName_2("STRING_868088935");
    noStrategyParameters_0_2.set(StrategyParameterName_2);
    StrategyParametersGrp_NoStrategyParameters_2.insert(StrategyParameterName_2.getString());
    FIX::StrategyParameterType StrategyParameterType_2(24);
    noStrategyParameters_0_2.set(StrategyParameterType_2);
    StrategyParametersGrp_NoStrategyParameters_2.insert(StrategyParameterType_2.getString());
    FIX::StrategyParameterValue StrategyParameterValue_2("STRING_284050565");
    noStrategyParameters_0_2.set(StrategyParameterValue_2);
    StrategyParametersGrp_NoStrategyParameters_2.insert(StrategyParameterValue_2.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_2);

    msg.addGroup(noStrategyParameters_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_0;
    FIX::TradingSessionID TradingSessionID_12("STRING_3");
    noTradingSessions_0_0.set(TradingSessionID_12);
    TrdgSesGrp_NoTradingSessions_0.insert(TradingSessionID_12.getString());
    FIX::TradingSessionSubID TradingSessionSubID_12("STRING_1");
    noTradingSessions_0_0.set(TradingSessionSubID_12);
    TrdgSesGrp_NoTradingSessions_0.insert(TradingSessionSubID_12.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_0);

    msg.addGroup(noTradingSessions_0_0);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_0;
  FIX::TriggerAction TriggerAction_0('1');
  msg.set(TriggerAction_0);
  TriggeringInstruction_0.insert(TriggerAction_0.getString());
  FIX::TriggerNewPrice TriggerNewPrice_0;
  TriggerNewPrice_0.setString("2765360");
  msg.set(TriggerNewPrice_0);
  TriggeringInstruction_0.insert(TriggerNewPrice_0.getString());
  FIX::TriggerNewQty TriggerNewQty_0;
  TriggerNewQty_0.setString("11557327");
  msg.set(TriggerNewQty_0);
  TriggeringInstruction_0.insert(TriggerNewQty_0.getString());
  FIX::TriggerOrderType TriggerOrderType_0('1');
  msg.set(TriggerOrderType_0);
  TriggeringInstruction_0.insert(TriggerOrderType_0.getString());
  FIX::TriggerPrice TriggerPrice_0;
  TriggerPrice_0.setString("17480126");
  msg.set(TriggerPrice_0);
  TriggeringInstruction_0.insert(TriggerPrice_0.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_0('D');
  msg.set(TriggerPriceDirection_0);
  TriggeringInstruction_0.insert(TriggerPriceDirection_0.getString());
  FIX::TriggerPriceType TriggerPriceType_0('2');
  msg.set(TriggerPriceType_0);
  TriggeringInstruction_0.insert(TriggerPriceType_0.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_0('1');
  msg.set(TriggerPriceTypeScope_0);
  TriggeringInstruction_0.insert(TriggerPriceTypeScope_0.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_0("STRING_1422140293");
  msg.set(TriggerSecurityDesc_0);
  TriggeringInstruction_0.insert(TriggerSecurityDesc_0.getString());
  FIX::TriggerSecurityID TriggerSecurityID_0("STRING_1253760874");
  msg.set(TriggerSecurityID_0);
  TriggeringInstruction_0.insert(TriggerSecurityID_0.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_0("STRING_747313087");
  msg.set(TriggerSecurityIDSource_0);
  TriggeringInstruction_0.insert(TriggerSecurityIDSource_0.getString());
  FIX::TriggerSymbol TriggerSymbol_0("STRING_1212811157");
  msg.set(TriggerSymbol_0);
  TriggeringInstruction_0.insert(TriggerSymbol_0.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_0("STRING_293043653");
  msg.set(TriggerTradingSessionID_0);
  TriggeringInstruction_0.insert(TriggerTradingSessionID_0.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_0("STRING_519767395");
  msg.set(TriggerTradingSessionSubID_0);
  TriggeringInstruction_0.insert(TriggerTradingSessionSubID_0.getString());
  FIX::TriggerType TriggerType_0('1');
  msg.set(TriggerType_0);
  TriggeringInstruction_0.insert(TriggerType_0.getString());
  all_values.push_back(TriggeringInstruction_0);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_22;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_22("DATA_1414822683");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingIssuer_22.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_22(1748574889);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingIssuerLen_22.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_22("DATA_1729647901");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingSecurityDesc_22.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_22(2135354364);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingSecurityDescLen_22.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_22;
    UnderlyingAdjustedQuantity_22.setString("7368003");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_22);
    UnderlyingInstrument_22.insert(UnderlyingAdjustedQuantity_22.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_22;
    UnderlyingAllocationPercent_22.setString("28.830000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_22);
    UnderlyingInstrument_22.insert(UnderlyingAllocationPercent_22.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_22;
    UnderlyingAttachmentPoint_22.setString("53.730000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_22);
    UnderlyingInstrument_22.insert(UnderlyingAttachmentPoint_22.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_22("STRING_262459896");
    noUnderlyings_0_0.set(UnderlyingCFICode_22);
    UnderlyingInstrument_22.insert(UnderlyingCFICode_22.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_22("STRING_588940744");
    noUnderlyings_0_0.set(UnderlyingCPProgram_22);
    UnderlyingInstrument_22.insert(UnderlyingCPProgram_22.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_22("STRING_405730660");
    noUnderlyings_0_0.set(UnderlyingCPRegType_22);
    UnderlyingInstrument_22.insert(UnderlyingCPRegType_22.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_22;
    UnderlyingCapValue_22.setString("21264206");
    noUnderlyings_0_0.set(UnderlyingCapValue_22);
    UnderlyingInstrument_22.insert(UnderlyingCapValue_22.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_22;
    UnderlyingCashAmount_22.setString("8729913");
    noUnderlyings_0_0.set(UnderlyingCashAmount_22);
    UnderlyingInstrument_22.insert(UnderlyingCashAmount_22.getString());
    FIX::UnderlyingCashType UnderlyingCashType_22("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_22);
    UnderlyingInstrument_22.insert(UnderlyingCashType_22.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_22;
    UnderlyingContractMultiplier_22.setString("932479");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_22);
    UnderlyingInstrument_22.insert(UnderlyingContractMultiplier_22.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_22(501756527);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_22);
    UnderlyingInstrument_22.insert(UnderlyingContractMultiplierUnit_22.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_22("COUNTRY_1546874363");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_22);
    UnderlyingInstrument_22.insert(UnderlyingCountryOfIssue_22.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_22("LOCALMKTDATE_369784010");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_22);
    UnderlyingInstrument_22.insert(UnderlyingCouponPaymentDate_22.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_22;
    UnderlyingCouponRate_22.setString("92.850000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_22);
    UnderlyingInstrument_22.insert(UnderlyingCouponRate_22.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_22("STRING_711999988");
    noUnderlyings_0_0.set(UnderlyingCreditRating_22);
    UnderlyingInstrument_22.insert(UnderlyingCreditRating_22.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_22("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_22);
    UnderlyingInstrument_22.insert(UnderlyingCurrency_22.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_22;
    UnderlyingCurrentValue_22.setString("6639178");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_22);
    UnderlyingInstrument_22.insert(UnderlyingCurrentValue_22.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_22;
    UnderlyingDetachmentPoint_22.setString("93.710000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_22);
    UnderlyingInstrument_22.insert(UnderlyingDetachmentPoint_22.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_22;
    UnderlyingDirtyPrice_22.setString("13759875");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_22);
    UnderlyingInstrument_22.insert(UnderlyingDirtyPrice_22.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_22;
    UnderlyingEndPrice_22.setString("19176787");
    noUnderlyings_0_0.set(UnderlyingEndPrice_22);
    UnderlyingInstrument_22.insert(UnderlyingEndPrice_22.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_22;
    UnderlyingEndValue_22.setString("15473924");
    noUnderlyings_0_0.set(UnderlyingEndValue_22);
    UnderlyingInstrument_22.insert(UnderlyingEndValue_22.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_22(441315019);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_22);
    UnderlyingInstrument_22.insert(UnderlyingExerciseStyle_22.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_22;
    UnderlyingFXRate_22.setString("632387");
    noUnderlyings_0_0.set(UnderlyingFXRate_22);
    UnderlyingInstrument_22.insert(UnderlyingFXRate_22.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_22('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_22);
    UnderlyingInstrument_22.insert(UnderlyingFXRateCalc_22.getString());
    FIX::UnderlyingFactor UnderlyingFactor_22;
    UnderlyingFactor_22.setString("18786023");
    noUnderlyings_0_0.set(UnderlyingFactor_22);
    UnderlyingInstrument_22.insert(UnderlyingFactor_22.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_22(5653046);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_22);
    UnderlyingInstrument_22.insert(UnderlyingFlowScheduleType_22.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_22("STRING_1334498889");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_22);
    UnderlyingInstrument_22.insert(UnderlyingInstrRegistry_22.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_22("LOCALMKTDATE_1479693628");
    noUnderlyings_0_0.set(UnderlyingIssueDate_22);
    UnderlyingInstrument_22.insert(UnderlyingIssueDate_22.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_22("STRING_1735300947");
    noUnderlyings_0_0.set(UnderlyingIssuer_22);
    UnderlyingInstrument_22.insert(UnderlyingIssuer_22.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_22("STRING_1322369605");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_22);
    UnderlyingInstrument_22.insert(UnderlyingLocaleOfIssue_22.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_22("LOCALMKTDATE_69010315");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_22);
    UnderlyingInstrument_22.insert(UnderlyingMaturityDate_22.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_22("MONTHYEAR_1510010183");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_22);
    UnderlyingInstrument_22.insert(UnderlyingMaturityMonthYear_22.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_22("TZTIMEONLY_860011331");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_22);
    UnderlyingInstrument_22.insert(UnderlyingMaturityTime_22.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_22;
    UnderlyingNotionalPercentageOutstanding_22.setString("2.110000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_22);
    UnderlyingInstrument_22.insert(UnderlyingNotionalPercentageOutstanding_22.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_22('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_22);
    UnderlyingInstrument_22.insert(UnderlyingOptAttribute_22.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_22;
    UnderlyingOriginalNotionalPercentageOutstanding_22.setString("19.910000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_22);
    UnderlyingInstrument_22.insert(UnderlyingOriginalNotionalPercentageOutstanding_22.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_22("STRING_310407243");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_22);
    UnderlyingInstrument_22.insert(UnderlyingPriceUnitOfMeasure_22.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_22;
    UnderlyingPriceUnitOfMeasureQty_22.setString("8244585");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_22);
    UnderlyingInstrument_22.insert(UnderlyingPriceUnitOfMeasureQty_22.getString());
    FIX::UnderlyingProduct UnderlyingProduct_22(1553372886);
    noUnderlyings_0_0.set(UnderlyingProduct_22);
    UnderlyingInstrument_22.insert(UnderlyingProduct_22.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_22(403655228);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_22);
    UnderlyingInstrument_22.insert(UnderlyingPutOrCall_22.getString());
    FIX::UnderlyingPx UnderlyingPx_22;
    UnderlyingPx_22.setString("13262151");
    noUnderlyings_0_0.set(UnderlyingPx_22);
    UnderlyingInstrument_22.insert(UnderlyingPx_22.getString());
    FIX::UnderlyingQty UnderlyingQty_22;
    UnderlyingQty_22.setString("9527636");
    noUnderlyings_0_0.set(UnderlyingQty_22);
    UnderlyingInstrument_22.insert(UnderlyingQty_22.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_22("LOCALMKTDATE_773439239");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_22);
    UnderlyingInstrument_22.insert(UnderlyingRedemptionDate_22.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_22("STRING_836220752");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_22);
    UnderlyingInstrument_22.insert(UnderlyingRepoCollateralSecurityType_22.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_22;
    UnderlyingRepurchaseRate_22.setString("35.890000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_22);
    UnderlyingInstrument_22.insert(UnderlyingRepurchaseRate_22.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_22(743752277);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_22);
    UnderlyingInstrument_22.insert(UnderlyingRepurchaseTerm_22.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_22("STRING_790067969");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_22);
    UnderlyingInstrument_22.insert(UnderlyingRestructuringType_22.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_22("STRING_181197794");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityDesc_22.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_22("EXCHANGE_1543831648");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityExchange_22.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_22("STRING_18571831");
    noUnderlyings_0_0.set(UnderlyingSecurityID_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityID_22.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_22("STRING_2098876521");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityIDSource_22.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_22("STRING_943740459");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_22);
    UnderlyingInstrument_22.insert(UnderlyingSecuritySubType_22.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_22("STRING_459886850");
    noUnderlyings_0_0.set(UnderlyingSecurityType_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityType_22.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_22("STRING_14631605");
    noUnderlyings_0_0.set(UnderlyingSeniority_22);
    UnderlyingInstrument_22.insert(UnderlyingSeniority_22.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_22("STRING_863416665");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_22);
    UnderlyingInstrument_22.insert(UnderlyingSettlMethod_22.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_22(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_22);
    UnderlyingInstrument_22.insert(UnderlyingSettlementType_22.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_22;
    UnderlyingStartValue_22.setString("202846");
    noUnderlyings_0_0.set(UnderlyingStartValue_22);
    UnderlyingInstrument_22.insert(UnderlyingStartValue_22.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_22("STRING_50431906");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_22);
    UnderlyingInstrument_22.insert(UnderlyingStateOrProvinceOfIssue_22.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_22("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_22);
    UnderlyingInstrument_22.insert(UnderlyingStrikeCurrency_22.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_22;
    UnderlyingStrikePrice_22.setString("13728015");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_22);
    UnderlyingInstrument_22.insert(UnderlyingStrikePrice_22.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_22("STRING_1739709532");
    noUnderlyings_0_0.set(UnderlyingSymbol_22);
    UnderlyingInstrument_22.insert(UnderlyingSymbol_22.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_22("STRING_1118112134");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_22);
    UnderlyingInstrument_22.insert(UnderlyingSymbolSfx_22.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_22("STRING_85329195");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_22);
    UnderlyingInstrument_22.insert(UnderlyingTimeUnit_22.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_22("STRING_2071179743");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_22);
    UnderlyingInstrument_22.insert(UnderlyingUnitOfMeasure_22.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_22;
    UnderlyingUnitOfMeasureQty_22.setString("10695794");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_22);
    UnderlyingInstrument_22.insert(UnderlyingUnitOfMeasureQty_22.getString());
    all_values.push_back(UnderlyingInstrument_22);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_41;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_41("STRING_234103339");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_41);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_41.insert(UnderlyingSecurityAltID_41.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_41("STRING_1894038001");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_41);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_41.insert(UnderlyingSecurityAltIDSource_41.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_41);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_38;
      FIX::UnderlyingStipType UnderlyingStipType_38("STRING_637758567");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_38);
      UnderlyingStipulations_NoUnderlyingStips_38.insert(UnderlyingStipType_38.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_38("STRING_1072769469");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_38);
      UnderlyingStipulations_NoUnderlyingStips_38.insert(UnderlyingStipValue_38.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_38);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_39;
      FIX::UnderlyingStipType UnderlyingStipType_39("STRING_1709724026");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_39);
      UnderlyingStipulations_NoUnderlyingStips_39.insert(UnderlyingStipType_39.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_39("STRING_1411197806");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_39);
      UnderlyingStipulations_NoUnderlyingStips_39.insert(UnderlyingStipValue_39.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_39);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_39;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_39("STRING_1227003967");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_39);
      UndlyInstrumentParties_NoUndlyInstrumentParties_39.insert(UnderlyingInstrumentPartyID_39.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_39('7');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_39);
      UndlyInstrumentParties_NoUndlyInstrumentParties_39.insert(UnderlyingInstrumentPartyIDSource_39.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_39(551574542);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_39);
      UndlyInstrumentParties_NoUndlyInstrumentParties_39.insert(UnderlyingInstrumentPartyRole_39.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_39);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_73("STRING_1551298084");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_73);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73.insert(UnderlyingInstrumentPartySubID_73.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_73(570146373);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_73);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73.insert(UnderlyingInstrumentPartySubIDType_73.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_74("STRING_1359594635");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_74);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74.insert(UnderlyingInstrumentPartySubID_74.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_74(347554895);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_74);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74.insert(UnderlyingInstrumentPartySubIDType_74.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_40;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_40("STRING_1030033223");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_40);
      UndlyInstrumentParties_NoUndlyInstrumentParties_40.insert(UnderlyingInstrumentPartyID_40.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_40('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_40);
      UndlyInstrumentParties_NoUndlyInstrumentParties_40.insert(UnderlyingInstrumentPartyIDSource_40.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_40(1210971561);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_40);
      UndlyInstrumentParties_NoUndlyInstrumentParties_40.insert(UnderlyingInstrumentPartyRole_40.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_40);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_75("STRING_1394510893");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_75);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75.insert(UnderlyingInstrumentPartySubID_75.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_75(1261403467);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_75);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75.insert(UnderlyingInstrumentPartySubIDType_75.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_76("STRING_744254382");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_76);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76.insert(UnderlyingInstrumentPartySubID_76.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_76(1002612844);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_76);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76.insert(UnderlyingInstrumentPartySubIDType_76.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_41;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_41("STRING_486721331");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_41);
      UndlyInstrumentParties_NoUndlyInstrumentParties_41.insert(UnderlyingInstrumentPartyID_41.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_41('3');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_41);
      UndlyInstrumentParties_NoUndlyInstrumentParties_41.insert(UnderlyingInstrumentPartyIDSource_41.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_41(2120724979);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_41);
      UndlyInstrumentParties_NoUndlyInstrumentParties_41.insert(UnderlyingInstrumentPartyRole_41.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_41);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_77("STRING_260176362");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_77);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77.insert(UnderlyingInstrumentPartySubID_77.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_77(1042820744);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_77);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77.insert(UnderlyingInstrumentPartySubIDType_77.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_78("STRING_1923121713");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_78);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78.insert(UnderlyingInstrumentPartySubID_78.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_78(494279701);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_78);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78.insert(UnderlyingInstrumentPartySubIDType_78.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_79("STRING_789375098");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_79);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79.insert(UnderlyingInstrumentPartySubID_79.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_79(532598489);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_79);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79.insert(UnderlyingInstrumentPartySubIDType_79.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_4;
  FIX::Yield Yield_4;
  Yield_4.setString("82.680000");
  msg.set(Yield_4);
  YieldData_4.insert(Yield_4.getString());
  FIX::YieldCalcDate YieldCalcDate_4("LOCALMKTDATE_1862144567");
  msg.set(YieldCalcDate_4);
  YieldData_4.insert(YieldCalcDate_4.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_4("LOCALMKTDATE_94838867");
  msg.set(YieldRedemptionDate_4);
  YieldData_4.insert(YieldRedemptionDate_4.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_4;
  YieldRedemptionPrice_4.setString("3957524");
  msg.set(YieldRedemptionPrice_4);
  YieldData_4.insert(YieldRedemptionPrice_4.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_4(1623651140);
  msg.set(YieldRedemptionPriceType_4);
  YieldData_4.insert(YieldRedemptionPriceType_4.getString());
  FIX::YieldType YieldType_4("STRING_LASTMONTH");
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
