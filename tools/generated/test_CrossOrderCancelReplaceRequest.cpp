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
  FIX::ComplianceID ComplianceID_0("STRING_115192711");
  msg.set(ComplianceID_0);
  CrossOrderCancelReplaceRequest_0.insert(ComplianceID_0.getString());
  FIX::CrossID CrossID_0("STRING_1158817108");
  msg.set(CrossID_0);
  CrossOrderCancelReplaceRequest_0.insert(CrossID_0.getString());
  FIX::CrossPrioritization CrossPrioritization_0(2);
  msg.set(CrossPrioritization_0);
  CrossOrderCancelReplaceRequest_0.insert(CrossPrioritization_0.getString());
  FIX::CrossType CrossType_0(2);
  msg.set(CrossType_0);
  CrossOrderCancelReplaceRequest_0.insert(CrossType_0.getString());
  FIX::Currency Currency_13("JPY");
  msg.set(Currency_13);
  CrossOrderCancelReplaceRequest_0.insert(Currency_13.getString());
  FIX::Designation Designation_0("STRING_1378766760");
  msg.set(Designation_0);
  CrossOrderCancelReplaceRequest_0.insert(Designation_0.getString());
  FIX::EffectiveTime EffectiveTime_0(FIX::UTCTIMESTAMP(1, 48, 39, 21, 10, 2007));
  msg.set(EffectiveTime_0);
  CrossOrderCancelReplaceRequest_0.insert(EffectiveTime_0.getString());
  FIX::ExDestination ExDestination_0("EXCHANGE_384277919");
  msg.set(ExDestination_0);
  CrossOrderCancelReplaceRequest_0.insert(ExDestination_0.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_0('B');
  msg.set(ExDestinationIDSource_0);
  CrossOrderCancelReplaceRequest_0.insert(ExDestinationIDSource_0.getString());
  FIX::ExecInst ExecInst_0("MULTIPLECHARVALUE_t");
  msg.set(ExecInst_0);
  CrossOrderCancelReplaceRequest_0.insert(ExecInst_0.getString());
  FIX::ExpireDate ExpireDate_1("LOCALMKTDATE_1542406328");
  msg.set(ExpireDate_1);
  CrossOrderCancelReplaceRequest_0.insert(ExpireDate_1.getString());
  FIX::ExpireTime ExpireTime_2(FIX::UTCTIMESTAMP(19, 32, 2, 18, 9, 2017));
  msg.set(ExpireTime_2);
  CrossOrderCancelReplaceRequest_0.insert(ExpireTime_2.getString());
  FIX::GTBookingInst GTBookingInst_0(1);
  msg.set(GTBookingInst_0);
  CrossOrderCancelReplaceRequest_0.insert(GTBookingInst_0.getString());
  FIX::HandlInst HandlInst_0('1');
  msg.set(HandlInst_0);
  CrossOrderCancelReplaceRequest_0.insert(HandlInst_0.getString());
  FIX::HostCrossID HostCrossID_0("STRING_53132035");
  msg.set(HostCrossID_0);
  CrossOrderCancelReplaceRequest_0.insert(HostCrossID_0.getString());
  FIX::IOIID IOIID_0("STRING_2138994820");
  msg.set(IOIID_0);
  CrossOrderCancelReplaceRequest_0.insert(IOIID_0.getString());
  FIX::LocateReqd LocateReqd_0(true);
  msg.set(LocateReqd_0);
  CrossOrderCancelReplaceRequest_0.insert(LocateReqd_0.getString());
  FIX::MatchIncrement MatchIncrement_0;
  MatchIncrement_0.setString("11079485");
  msg.set(MatchIncrement_0);
  CrossOrderCancelReplaceRequest_0.insert(MatchIncrement_0.getString());
  FIX::MaxFloor MaxFloor_0;
  MaxFloor_0.setString("1067038");
  msg.set(MaxFloor_0);
  CrossOrderCancelReplaceRequest_0.insert(MaxFloor_0.getString());
  FIX::MaxPriceLevels MaxPriceLevels_0(615182204);
  msg.set(MaxPriceLevels_0);
  CrossOrderCancelReplaceRequest_0.insert(MaxPriceLevels_0.getString());
  FIX::MaxShow MaxShow_0;
  MaxShow_0.setString("19384124");
  msg.set(MaxShow_0);
  CrossOrderCancelReplaceRequest_0.insert(MaxShow_0.getString());
  FIX::MinQty MinQty_0;
  MinQty_0.setString("229065");
  msg.set(MinQty_0);
  CrossOrderCancelReplaceRequest_0.insert(MinQty_0.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_0('3');
  msg.set(MoneyLaunderingStatus_0);
  CrossOrderCancelReplaceRequest_0.insert(MoneyLaunderingStatus_0.getString());
  FIX::OrdType OrdType_0('L');
  msg.set(OrdType_0);
  CrossOrderCancelReplaceRequest_0.insert(OrdType_0.getString());
  FIX::OrderID OrderID_14("STRING_1401673273");
  msg.set(OrderID_14);
  CrossOrderCancelReplaceRequest_0.insert(OrderID_14.getString());
  FIX::OrigCrossID OrigCrossID_0("STRING_1796238173");
  msg.set(OrigCrossID_0);
  CrossOrderCancelReplaceRequest_0.insert(OrigCrossID_0.getString());
  FIX::ParticipationRate ParticipationRate_0;
  ParticipationRate_0.setString("4.690000");
  msg.set(ParticipationRate_0);
  CrossOrderCancelReplaceRequest_0.insert(ParticipationRate_0.getString());
  FIX::PrevClosePx PrevClosePx_0;
  PrevClosePx_0.setString("17944723");
  msg.set(PrevClosePx_0);
  CrossOrderCancelReplaceRequest_0.insert(PrevClosePx_0.getString());
  FIX::Price Price_9;
  Price_9.setString("4897100");
  msg.set(Price_9);
  CrossOrderCancelReplaceRequest_0.insert(Price_9.getString());
  FIX::PriceProtectionScope PriceProtectionScope_0('2');
  msg.set(PriceProtectionScope_0);
  CrossOrderCancelReplaceRequest_0.insert(PriceProtectionScope_0.getString());
  FIX::PriceType PriceType_12(10);
  msg.set(PriceType_12);
  CrossOrderCancelReplaceRequest_0.insert(PriceType_12.getString());
  FIX::ProcessCode ProcessCode_6('6');
  msg.set(ProcessCode_6);
  CrossOrderCancelReplaceRequest_0.insert(ProcessCode_6.getString());
  FIX::QuoteID QuoteID_0("STRING_1867751349");
  msg.set(QuoteID_0);
  CrossOrderCancelReplaceRequest_0.insert(QuoteID_0.getString());
  FIX::RegistID RegistID_0("STRING_1619133307");
  msg.set(RegistID_0);
  CrossOrderCancelReplaceRequest_0.insert(RegistID_0.getString());
  FIX::SettlDate SettlDate_16("LOCALMKTDATE_1249575297");
  msg.set(SettlDate_16);
  CrossOrderCancelReplaceRequest_0.insert(SettlDate_16.getString());
  FIX::SettlType SettlType_10("STRING_B");
  msg.set(SettlType_10);
  CrossOrderCancelReplaceRequest_0.insert(SettlType_10.getString());
  FIX::StopPx StopPx_0;
  StopPx_0.setString("2031516");
  msg.set(StopPx_0);
  CrossOrderCancelReplaceRequest_0.insert(StopPx_0.getString());
  FIX::TargetStrategy TargetStrategy_0(2);
  msg.set(TargetStrategy_0);
  CrossOrderCancelReplaceRequest_0.insert(TargetStrategy_0.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_0("STRING_1683510522");
  msg.set(TargetStrategyParameters_0);
  CrossOrderCancelReplaceRequest_0.insert(TargetStrategyParameters_0.getString());
  FIX::TimeInForce TimeInForce_0('4');
  msg.set(TimeInForce_0);
  CrossOrderCancelReplaceRequest_0.insert(TimeInForce_0.getString());
  FIX::TransBkdTime TransBkdTime_0(FIX::UTCTIMESTAMP(6, 41, 50, 27, 1, 2004));
  msg.set(TransBkdTime_0);
  CrossOrderCancelReplaceRequest_0.insert(TransBkdTime_0.getString());
  FIX::TransactTime TransactTime_14(FIX::UTCTIMESTAMP(18, 25, 35, 18, 3, 2007));
  msg.set(TransactTime_14);
  CrossOrderCancelReplaceRequest_0.insert(TransactTime_14.getString());
  all_values.push_back(CrossOrderCancelReplaceRequest_0);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_0;
  FIX::DiscretionInst DiscretionInst_0('7');
  msg.set(DiscretionInst_0);
  DiscretionInstructions_0.insert(DiscretionInst_0.getString());
  FIX::DiscretionLimitType DiscretionLimitType_0(2);
  msg.set(DiscretionLimitType_0);
  DiscretionInstructions_0.insert(DiscretionLimitType_0.getString());
  FIX::DiscretionMoveType DiscretionMoveType_0(1);
  msg.set(DiscretionMoveType_0);
  DiscretionInstructions_0.insert(DiscretionMoveType_0.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_0(0);
  msg.set(DiscretionOffsetType_0);
  DiscretionInstructions_0.insert(DiscretionOffsetType_0.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_0;
  DiscretionOffsetValue_0.setString("8144805");
  msg.set(DiscretionOffsetValue_0);
  DiscretionInstructions_0.insert(DiscretionOffsetValue_0.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_0(1);
  msg.set(DiscretionRoundDirection_0);
  DiscretionInstructions_0.insert(DiscretionRoundDirection_0.getString());
  FIX::DiscretionScope DiscretionScope_0(4);
  msg.set(DiscretionScope_0);
  DiscretionInstructions_0.insert(DiscretionScope_0.getString());
  all_values.push_back(DiscretionInstructions_0);

  // DisplayInstruction
  multiset<string> DisplayInstruction_0;
  FIX::DisplayHighQty DisplayHighQty_0;
  DisplayHighQty_0.setString("20389468");
  msg.set(DisplayHighQty_0);
  DisplayInstruction_0.insert(DisplayHighQty_0.getString());
  FIX::DisplayLowQty DisplayLowQty_0;
  DisplayLowQty_0.setString("5195762");
  msg.set(DisplayLowQty_0);
  DisplayInstruction_0.insert(DisplayLowQty_0.getString());
  FIX::DisplayMethod DisplayMethod_0('1');
  msg.set(DisplayMethod_0);
  DisplayInstruction_0.insert(DisplayMethod_0.getString());
  FIX::DisplayMinIncr DisplayMinIncr_0;
  DisplayMinIncr_0.setString("15105964");
  msg.set(DisplayMinIncr_0);
  DisplayInstruction_0.insert(DisplayMinIncr_0.getString());
  FIX::DisplayQty DisplayQty_0;
  DisplayQty_0.setString("17691515");
  msg.set(DisplayQty_0);
  DisplayInstruction_0.insert(DisplayQty_0.getString());
  FIX::DisplayWhen DisplayWhen_0('1');
  msg.set(DisplayWhen_0);
  DisplayInstruction_0.insert(DisplayWhen_0.getString());
  FIX::RefreshQty RefreshQty_0;
  RefreshQty_0.setString("17137481");
  msg.set(RefreshQty_0);
  DisplayInstruction_0.insert(RefreshQty_0.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_0;
  SecondaryDisplayQty_0.setString("15611610");
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
    FIX::EncodedLegIssuer EncodedLegIssuer_21("DATA_1832870518");
    noLegs_0_0.set(EncodedLegIssuer_21);
    InstrumentLeg_21.insert(EncodedLegIssuer_21.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_21(334557881);
    noLegs_0_0.set(EncodedLegIssuerLen_21);
    InstrumentLeg_21.insert(EncodedLegIssuerLen_21.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_21("DATA_1820697495");
    noLegs_0_0.set(EncodedLegSecurityDesc_21);
    InstrumentLeg_21.insert(EncodedLegSecurityDesc_21.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_21(1521199291);
    noLegs_0_0.set(EncodedLegSecurityDescLen_21);
    InstrumentLeg_21.insert(EncodedLegSecurityDescLen_21.getString());
    FIX::LegCFICode LegCFICode_21("STRING_2126738551");
    noLegs_0_0.set(LegCFICode_21);
    InstrumentLeg_21.insert(LegCFICode_21.getString());
    FIX::LegContractMultiplier LegContractMultiplier_21;
    LegContractMultiplier_21.setString("19777240");
    noLegs_0_0.set(LegContractMultiplier_21);
    InstrumentLeg_21.insert(LegContractMultiplier_21.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_21(1262660100);
    noLegs_0_0.set(LegContractMultiplierUnit_21);
    InstrumentLeg_21.insert(LegContractMultiplierUnit_21.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_21("MONTHYEAR_1762946745");
    noLegs_0_0.set(LegContractSettlMonth_21);
    InstrumentLeg_21.insert(LegContractSettlMonth_21.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_21("COUNTRY_1591115741");
    noLegs_0_0.set(LegCountryOfIssue_21);
    InstrumentLeg_21.insert(LegCountryOfIssue_21.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_21("LOCALMKTDATE_2112069462");
    noLegs_0_0.set(LegCouponPaymentDate_21);
    InstrumentLeg_21.insert(LegCouponPaymentDate_21.getString());
    FIX::LegCouponRate LegCouponRate_21;
    LegCouponRate_21.setString("88.230000");
    noLegs_0_0.set(LegCouponRate_21);
    InstrumentLeg_21.insert(LegCouponRate_21.getString());
    FIX::LegCreditRating LegCreditRating_21("STRING_1819689616");
    noLegs_0_0.set(LegCreditRating_21);
    InstrumentLeg_21.insert(LegCreditRating_21.getString());
    FIX::LegCurrency LegCurrency_21("CHF");
    noLegs_0_0.set(LegCurrency_21);
    InstrumentLeg_21.insert(LegCurrency_21.getString());
    FIX::LegDatedDate LegDatedDate_21("LOCALMKTDATE_2130770375");
    noLegs_0_0.set(LegDatedDate_21);
    InstrumentLeg_21.insert(LegDatedDate_21.getString());
    FIX::LegExerciseStyle LegExerciseStyle_21(1344168591);
    noLegs_0_0.set(LegExerciseStyle_21);
    InstrumentLeg_21.insert(LegExerciseStyle_21.getString());
    FIX::LegFactor LegFactor_21;
    LegFactor_21.setString("2916856");
    noLegs_0_0.set(LegFactor_21);
    InstrumentLeg_21.insert(LegFactor_21.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_21(2090605660);
    noLegs_0_0.set(LegFlowScheduleType_21);
    InstrumentLeg_21.insert(LegFlowScheduleType_21.getString());
    FIX::LegInstrRegistry LegInstrRegistry_21("STRING_1919310012");
    noLegs_0_0.set(LegInstrRegistry_21);
    InstrumentLeg_21.insert(LegInstrRegistry_21.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_21("LOCALMKTDATE_1106166227");
    noLegs_0_0.set(LegInterestAccrualDate_21);
    InstrumentLeg_21.insert(LegInterestAccrualDate_21.getString());
    FIX::LegIssueDate LegIssueDate_21("LOCALMKTDATE_392667362");
    noLegs_0_0.set(LegIssueDate_21);
    InstrumentLeg_21.insert(LegIssueDate_21.getString());
    FIX::LegIssuer LegIssuer_21("STRING_1830441215");
    noLegs_0_0.set(LegIssuer_21);
    InstrumentLeg_21.insert(LegIssuer_21.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_21("STRING_997629404");
    noLegs_0_0.set(LegLocaleOfIssue_21);
    InstrumentLeg_21.insert(LegLocaleOfIssue_21.getString());
    FIX::LegMaturityDate LegMaturityDate_21("LOCALMKTDATE_912243603");
    noLegs_0_0.set(LegMaturityDate_21);
    InstrumentLeg_21.insert(LegMaturityDate_21.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_21("MONTHYEAR_1461840119");
    noLegs_0_0.set(LegMaturityMonthYear_21);
    InstrumentLeg_21.insert(LegMaturityMonthYear_21.getString());
    FIX::LegMaturityTime LegMaturityTime_21("TZTIMEONLY_360742241");
    noLegs_0_0.set(LegMaturityTime_21);
    InstrumentLeg_21.insert(LegMaturityTime_21.getString());
    FIX::LegOptAttribute LegOptAttribute_21('5');
    noLegs_0_0.set(LegOptAttribute_21);
    InstrumentLeg_21.insert(LegOptAttribute_21.getString());
    FIX::LegOptionRatio LegOptionRatio_21;
    LegOptionRatio_21.setString("2084294");
    noLegs_0_0.set(LegOptionRatio_21);
    InstrumentLeg_21.insert(LegOptionRatio_21.getString());
    FIX::LegPool LegPool_21("STRING_2074490415");
    noLegs_0_0.set(LegPool_21);
    InstrumentLeg_21.insert(LegPool_21.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_21("STRING_2095072523");
    noLegs_0_0.set(LegPriceUnitOfMeasure_21);
    InstrumentLeg_21.insert(LegPriceUnitOfMeasure_21.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_21;
    LegPriceUnitOfMeasureQty_21.setString("6385292");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_21);
    InstrumentLeg_21.insert(LegPriceUnitOfMeasureQty_21.getString());
    FIX::LegProduct LegProduct_21(1759877285);
    noLegs_0_0.set(LegProduct_21);
    InstrumentLeg_21.insert(LegProduct_21.getString());
    FIX::LegPutOrCall LegPutOrCall_21(282146757);
    noLegs_0_0.set(LegPutOrCall_21);
    InstrumentLeg_21.insert(LegPutOrCall_21.getString());
    FIX::LegRatioQty LegRatioQty_21;
    LegRatioQty_21.setString("3117430");
    noLegs_0_0.set(LegRatioQty_21);
    InstrumentLeg_21.insert(LegRatioQty_21.getString());
    FIX::LegRedemptionDate LegRedemptionDate_21("LOCALMKTDATE_1133592928");
    noLegs_0_0.set(LegRedemptionDate_21);
    InstrumentLeg_21.insert(LegRedemptionDate_21.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_21("STRING_261401660");
    noLegs_0_0.set(LegRepoCollateralSecurityType_21);
    InstrumentLeg_21.insert(LegRepoCollateralSecurityType_21.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_21;
    LegRepurchaseRate_21.setString("34.830000");
    noLegs_0_0.set(LegRepurchaseRate_21);
    InstrumentLeg_21.insert(LegRepurchaseRate_21.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_21(248769380);
    noLegs_0_0.set(LegRepurchaseTerm_21);
    InstrumentLeg_21.insert(LegRepurchaseTerm_21.getString());
    FIX::LegSecurityDesc LegSecurityDesc_21("STRING_2024348406");
    noLegs_0_0.set(LegSecurityDesc_21);
    InstrumentLeg_21.insert(LegSecurityDesc_21.getString());
    FIX::LegSecurityExchange LegSecurityExchange_21("EXCHANGE_1733099224");
    noLegs_0_0.set(LegSecurityExchange_21);
    InstrumentLeg_21.insert(LegSecurityExchange_21.getString());
    FIX::LegSecurityID LegSecurityID_21("STRING_213355194");
    noLegs_0_0.set(LegSecurityID_21);
    InstrumentLeg_21.insert(LegSecurityID_21.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_21("STRING_1382723581");
    noLegs_0_0.set(LegSecurityIDSource_21);
    InstrumentLeg_21.insert(LegSecurityIDSource_21.getString());
    FIX::LegSecuritySubType LegSecuritySubType_21("STRING_1405305192");
    noLegs_0_0.set(LegSecuritySubType_21);
    InstrumentLeg_21.insert(LegSecuritySubType_21.getString());
    FIX::LegSecurityType LegSecurityType_21("STRING_818279187");
    noLegs_0_0.set(LegSecurityType_21);
    InstrumentLeg_21.insert(LegSecurityType_21.getString());
    FIX::LegSide LegSide_21('5');
    noLegs_0_0.set(LegSide_21);
    InstrumentLeg_21.insert(LegSide_21.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_21("STRING_1388591920");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_21);
    InstrumentLeg_21.insert(LegStateOrProvinceOfIssue_21.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_21("USD");
    noLegs_0_0.set(LegStrikeCurrency_21);
    InstrumentLeg_21.insert(LegStrikeCurrency_21.getString());
    FIX::LegStrikePrice LegStrikePrice_21;
    LegStrikePrice_21.setString("13317139");
    noLegs_0_0.set(LegStrikePrice_21);
    InstrumentLeg_21.insert(LegStrikePrice_21.getString());
    FIX::LegSymbol LegSymbol_21("STRING_1934274142");
    noLegs_0_0.set(LegSymbol_21);
    InstrumentLeg_21.insert(LegSymbol_21.getString());
    FIX::LegSymbolSfx LegSymbolSfx_21("STRING_1904769203");
    noLegs_0_0.set(LegSymbolSfx_21);
    InstrumentLeg_21.insert(LegSymbolSfx_21.getString());
    FIX::LegTimeUnit LegTimeUnit_21("STRING_1724381295");
    noLegs_0_0.set(LegTimeUnit_21);
    InstrumentLeg_21.insert(LegTimeUnit_21.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_21("STRING_1617231709");
    noLegs_0_0.set(LegUnitOfMeasure_21);
    InstrumentLeg_21.insert(LegUnitOfMeasure_21.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_21;
    LegUnitOfMeasureQty_21.setString("7549149");
    noLegs_0_0.set(LegUnitOfMeasureQty_21);
    InstrumentLeg_21.insert(LegUnitOfMeasureQty_21.getString());
    all_values.push_back(InstrumentLeg_21);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_48;
      FIX::LegSecurityAltID LegSecurityAltID_48("STRING_931588181");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_48);
      LegSecAltIDGrp_NoLegSecurityAltID_48.insert(LegSecurityAltID_48.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_48("STRING_1115657201");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_48);
      LegSecAltIDGrp_NoLegSecurityAltID_48.insert(LegSecurityAltIDSource_48.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_48);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_49;
      FIX::LegSecurityAltID LegSecurityAltID_49("STRING_1023052743");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_49);
      LegSecAltIDGrp_NoLegSecurityAltID_49.insert(LegSecurityAltID_49.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_49("STRING_1140017587");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_49);
      LegSecAltIDGrp_NoLegSecurityAltID_49.insert(LegSecurityAltIDSource_49.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_49);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_22;
    FIX::EncodedLegIssuer EncodedLegIssuer_22("DATA_1042663968");
    noLegs_0_1.set(EncodedLegIssuer_22);
    InstrumentLeg_22.insert(EncodedLegIssuer_22.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_22(970641618);
    noLegs_0_1.set(EncodedLegIssuerLen_22);
    InstrumentLeg_22.insert(EncodedLegIssuerLen_22.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_22("DATA_1778546801");
    noLegs_0_1.set(EncodedLegSecurityDesc_22);
    InstrumentLeg_22.insert(EncodedLegSecurityDesc_22.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_22(655057605);
    noLegs_0_1.set(EncodedLegSecurityDescLen_22);
    InstrumentLeg_22.insert(EncodedLegSecurityDescLen_22.getString());
    FIX::LegCFICode LegCFICode_22("STRING_1252788375");
    noLegs_0_1.set(LegCFICode_22);
    InstrumentLeg_22.insert(LegCFICode_22.getString());
    FIX::LegContractMultiplier LegContractMultiplier_22;
    LegContractMultiplier_22.setString("20902898");
    noLegs_0_1.set(LegContractMultiplier_22);
    InstrumentLeg_22.insert(LegContractMultiplier_22.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_22(1788650533);
    noLegs_0_1.set(LegContractMultiplierUnit_22);
    InstrumentLeg_22.insert(LegContractMultiplierUnit_22.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_22("MONTHYEAR_1514190036");
    noLegs_0_1.set(LegContractSettlMonth_22);
    InstrumentLeg_22.insert(LegContractSettlMonth_22.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_22("COUNTRY_84789698");
    noLegs_0_1.set(LegCountryOfIssue_22);
    InstrumentLeg_22.insert(LegCountryOfIssue_22.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_22("LOCALMKTDATE_2037419914");
    noLegs_0_1.set(LegCouponPaymentDate_22);
    InstrumentLeg_22.insert(LegCouponPaymentDate_22.getString());
    FIX::LegCouponRate LegCouponRate_22;
    LegCouponRate_22.setString("47.940000");
    noLegs_0_1.set(LegCouponRate_22);
    InstrumentLeg_22.insert(LegCouponRate_22.getString());
    FIX::LegCreditRating LegCreditRating_22("STRING_1817888923");
    noLegs_0_1.set(LegCreditRating_22);
    InstrumentLeg_22.insert(LegCreditRating_22.getString());
    FIX::LegCurrency LegCurrency_22("CHF");
    noLegs_0_1.set(LegCurrency_22);
    InstrumentLeg_22.insert(LegCurrency_22.getString());
    FIX::LegDatedDate LegDatedDate_22("LOCALMKTDATE_1075710467");
    noLegs_0_1.set(LegDatedDate_22);
    InstrumentLeg_22.insert(LegDatedDate_22.getString());
    FIX::LegExerciseStyle LegExerciseStyle_22(921570647);
    noLegs_0_1.set(LegExerciseStyle_22);
    InstrumentLeg_22.insert(LegExerciseStyle_22.getString());
    FIX::LegFactor LegFactor_22;
    LegFactor_22.setString("11332120");
    noLegs_0_1.set(LegFactor_22);
    InstrumentLeg_22.insert(LegFactor_22.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_22(316818739);
    noLegs_0_1.set(LegFlowScheduleType_22);
    InstrumentLeg_22.insert(LegFlowScheduleType_22.getString());
    FIX::LegInstrRegistry LegInstrRegistry_22("STRING_936534778");
    noLegs_0_1.set(LegInstrRegistry_22);
    InstrumentLeg_22.insert(LegInstrRegistry_22.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_22("LOCALMKTDATE_1931815049");
    noLegs_0_1.set(LegInterestAccrualDate_22);
    InstrumentLeg_22.insert(LegInterestAccrualDate_22.getString());
    FIX::LegIssueDate LegIssueDate_22("LOCALMKTDATE_1648532672");
    noLegs_0_1.set(LegIssueDate_22);
    InstrumentLeg_22.insert(LegIssueDate_22.getString());
    FIX::LegIssuer LegIssuer_22("STRING_723325272");
    noLegs_0_1.set(LegIssuer_22);
    InstrumentLeg_22.insert(LegIssuer_22.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_22("STRING_1689100605");
    noLegs_0_1.set(LegLocaleOfIssue_22);
    InstrumentLeg_22.insert(LegLocaleOfIssue_22.getString());
    FIX::LegMaturityDate LegMaturityDate_22("LOCALMKTDATE_1225430319");
    noLegs_0_1.set(LegMaturityDate_22);
    InstrumentLeg_22.insert(LegMaturityDate_22.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_22("MONTHYEAR_193073334");
    noLegs_0_1.set(LegMaturityMonthYear_22);
    InstrumentLeg_22.insert(LegMaturityMonthYear_22.getString());
    FIX::LegMaturityTime LegMaturityTime_22("TZTIMEONLY_296531917");
    noLegs_0_1.set(LegMaturityTime_22);
    InstrumentLeg_22.insert(LegMaturityTime_22.getString());
    FIX::LegOptAttribute LegOptAttribute_22('1');
    noLegs_0_1.set(LegOptAttribute_22);
    InstrumentLeg_22.insert(LegOptAttribute_22.getString());
    FIX::LegOptionRatio LegOptionRatio_22;
    LegOptionRatio_22.setString("11246615");
    noLegs_0_1.set(LegOptionRatio_22);
    InstrumentLeg_22.insert(LegOptionRatio_22.getString());
    FIX::LegPool LegPool_22("STRING_1412189118");
    noLegs_0_1.set(LegPool_22);
    InstrumentLeg_22.insert(LegPool_22.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_22("STRING_590140664");
    noLegs_0_1.set(LegPriceUnitOfMeasure_22);
    InstrumentLeg_22.insert(LegPriceUnitOfMeasure_22.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_22;
    LegPriceUnitOfMeasureQty_22.setString("1171954");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_22);
    InstrumentLeg_22.insert(LegPriceUnitOfMeasureQty_22.getString());
    FIX::LegProduct LegProduct_22(307369438);
    noLegs_0_1.set(LegProduct_22);
    InstrumentLeg_22.insert(LegProduct_22.getString());
    FIX::LegPutOrCall LegPutOrCall_22(1560782282);
    noLegs_0_1.set(LegPutOrCall_22);
    InstrumentLeg_22.insert(LegPutOrCall_22.getString());
    FIX::LegRatioQty LegRatioQty_22;
    LegRatioQty_22.setString("18957422");
    noLegs_0_1.set(LegRatioQty_22);
    InstrumentLeg_22.insert(LegRatioQty_22.getString());
    FIX::LegRedemptionDate LegRedemptionDate_22("LOCALMKTDATE_962427043");
    noLegs_0_1.set(LegRedemptionDate_22);
    InstrumentLeg_22.insert(LegRedemptionDate_22.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_22("STRING_666087010");
    noLegs_0_1.set(LegRepoCollateralSecurityType_22);
    InstrumentLeg_22.insert(LegRepoCollateralSecurityType_22.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_22;
    LegRepurchaseRate_22.setString("84.700000");
    noLegs_0_1.set(LegRepurchaseRate_22);
    InstrumentLeg_22.insert(LegRepurchaseRate_22.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_22(603593928);
    noLegs_0_1.set(LegRepurchaseTerm_22);
    InstrumentLeg_22.insert(LegRepurchaseTerm_22.getString());
    FIX::LegSecurityDesc LegSecurityDesc_22("STRING_32793398");
    noLegs_0_1.set(LegSecurityDesc_22);
    InstrumentLeg_22.insert(LegSecurityDesc_22.getString());
    FIX::LegSecurityExchange LegSecurityExchange_22("EXCHANGE_1923338169");
    noLegs_0_1.set(LegSecurityExchange_22);
    InstrumentLeg_22.insert(LegSecurityExchange_22.getString());
    FIX::LegSecurityID LegSecurityID_22("STRING_493530194");
    noLegs_0_1.set(LegSecurityID_22);
    InstrumentLeg_22.insert(LegSecurityID_22.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_22("STRING_1423848192");
    noLegs_0_1.set(LegSecurityIDSource_22);
    InstrumentLeg_22.insert(LegSecurityIDSource_22.getString());
    FIX::LegSecuritySubType LegSecuritySubType_22("STRING_1593743444");
    noLegs_0_1.set(LegSecuritySubType_22);
    InstrumentLeg_22.insert(LegSecuritySubType_22.getString());
    FIX::LegSecurityType LegSecurityType_22("STRING_596821655");
    noLegs_0_1.set(LegSecurityType_22);
    InstrumentLeg_22.insert(LegSecurityType_22.getString());
    FIX::LegSide LegSide_22('2');
    noLegs_0_1.set(LegSide_22);
    InstrumentLeg_22.insert(LegSide_22.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_22("STRING_521970263");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_22);
    InstrumentLeg_22.insert(LegStateOrProvinceOfIssue_22.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_22("USD");
    noLegs_0_1.set(LegStrikeCurrency_22);
    InstrumentLeg_22.insert(LegStrikeCurrency_22.getString());
    FIX::LegStrikePrice LegStrikePrice_22;
    LegStrikePrice_22.setString("8387890");
    noLegs_0_1.set(LegStrikePrice_22);
    InstrumentLeg_22.insert(LegStrikePrice_22.getString());
    FIX::LegSymbol LegSymbol_22("STRING_307443432");
    noLegs_0_1.set(LegSymbol_22);
    InstrumentLeg_22.insert(LegSymbol_22.getString());
    FIX::LegSymbolSfx LegSymbolSfx_22("STRING_820202746");
    noLegs_0_1.set(LegSymbolSfx_22);
    InstrumentLeg_22.insert(LegSymbolSfx_22.getString());
    FIX::LegTimeUnit LegTimeUnit_22("STRING_339838027");
    noLegs_0_1.set(LegTimeUnit_22);
    InstrumentLeg_22.insert(LegTimeUnit_22.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_22("STRING_1030768705");
    noLegs_0_1.set(LegUnitOfMeasure_22);
    InstrumentLeg_22.insert(LegUnitOfMeasure_22.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_22;
    LegUnitOfMeasureQty_22.setString("3618197");
    noLegs_0_1.set(LegUnitOfMeasureQty_22);
    InstrumentLeg_22.insert(LegUnitOfMeasureQty_22.getString());
    all_values.push_back(InstrumentLeg_22);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_50;
      FIX::LegSecurityAltID LegSecurityAltID_50("STRING_1223842039");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_50);
      LegSecAltIDGrp_NoLegSecurityAltID_50.insert(LegSecurityAltID_50.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_50("STRING_658351620");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_50);
      LegSecAltIDGrp_NoLegSecurityAltID_50.insert(LegSecurityAltIDSource_50.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_50);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_51;
      FIX::LegSecurityAltID LegSecurityAltID_51("STRING_1132356267");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_51);
      LegSecAltIDGrp_NoLegSecurityAltID_51.insert(LegSecurityAltID_51.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_51("STRING_201019906");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_51);
      LegSecAltIDGrp_NoLegSecurityAltID_51.insert(LegSecurityAltIDSource_51.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_51);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_23;
    FIX::EncodedLegIssuer EncodedLegIssuer_23("DATA_2070540738");
    noLegs_0_2.set(EncodedLegIssuer_23);
    InstrumentLeg_23.insert(EncodedLegIssuer_23.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_23(1722496931);
    noLegs_0_2.set(EncodedLegIssuerLen_23);
    InstrumentLeg_23.insert(EncodedLegIssuerLen_23.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_23("DATA_318215360");
    noLegs_0_2.set(EncodedLegSecurityDesc_23);
    InstrumentLeg_23.insert(EncodedLegSecurityDesc_23.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_23(230426528);
    noLegs_0_2.set(EncodedLegSecurityDescLen_23);
    InstrumentLeg_23.insert(EncodedLegSecurityDescLen_23.getString());
    FIX::LegCFICode LegCFICode_23("STRING_1135795565");
    noLegs_0_2.set(LegCFICode_23);
    InstrumentLeg_23.insert(LegCFICode_23.getString());
    FIX::LegContractMultiplier LegContractMultiplier_23;
    LegContractMultiplier_23.setString("664739");
    noLegs_0_2.set(LegContractMultiplier_23);
    InstrumentLeg_23.insert(LegContractMultiplier_23.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_23(1192853571);
    noLegs_0_2.set(LegContractMultiplierUnit_23);
    InstrumentLeg_23.insert(LegContractMultiplierUnit_23.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_23("MONTHYEAR_1801882575");
    noLegs_0_2.set(LegContractSettlMonth_23);
    InstrumentLeg_23.insert(LegContractSettlMonth_23.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_23("COUNTRY_1905022438");
    noLegs_0_2.set(LegCountryOfIssue_23);
    InstrumentLeg_23.insert(LegCountryOfIssue_23.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_23("LOCALMKTDATE_1796447499");
    noLegs_0_2.set(LegCouponPaymentDate_23);
    InstrumentLeg_23.insert(LegCouponPaymentDate_23.getString());
    FIX::LegCouponRate LegCouponRate_23;
    LegCouponRate_23.setString("59.730000");
    noLegs_0_2.set(LegCouponRate_23);
    InstrumentLeg_23.insert(LegCouponRate_23.getString());
    FIX::LegCreditRating LegCreditRating_23("STRING_1680876959");
    noLegs_0_2.set(LegCreditRating_23);
    InstrumentLeg_23.insert(LegCreditRating_23.getString());
    FIX::LegCurrency LegCurrency_23("CHF");
    noLegs_0_2.set(LegCurrency_23);
    InstrumentLeg_23.insert(LegCurrency_23.getString());
    FIX::LegDatedDate LegDatedDate_23("LOCALMKTDATE_1127136755");
    noLegs_0_2.set(LegDatedDate_23);
    InstrumentLeg_23.insert(LegDatedDate_23.getString());
    FIX::LegExerciseStyle LegExerciseStyle_23(739315701);
    noLegs_0_2.set(LegExerciseStyle_23);
    InstrumentLeg_23.insert(LegExerciseStyle_23.getString());
    FIX::LegFactor LegFactor_23;
    LegFactor_23.setString("10136997");
    noLegs_0_2.set(LegFactor_23);
    InstrumentLeg_23.insert(LegFactor_23.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_23(1649107018);
    noLegs_0_2.set(LegFlowScheduleType_23);
    InstrumentLeg_23.insert(LegFlowScheduleType_23.getString());
    FIX::LegInstrRegistry LegInstrRegistry_23("STRING_110224355");
    noLegs_0_2.set(LegInstrRegistry_23);
    InstrumentLeg_23.insert(LegInstrRegistry_23.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_23("LOCALMKTDATE_2049571133");
    noLegs_0_2.set(LegInterestAccrualDate_23);
    InstrumentLeg_23.insert(LegInterestAccrualDate_23.getString());
    FIX::LegIssueDate LegIssueDate_23("LOCALMKTDATE_340412373");
    noLegs_0_2.set(LegIssueDate_23);
    InstrumentLeg_23.insert(LegIssueDate_23.getString());
    FIX::LegIssuer LegIssuer_23("STRING_417667788");
    noLegs_0_2.set(LegIssuer_23);
    InstrumentLeg_23.insert(LegIssuer_23.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_23("STRING_722290231");
    noLegs_0_2.set(LegLocaleOfIssue_23);
    InstrumentLeg_23.insert(LegLocaleOfIssue_23.getString());
    FIX::LegMaturityDate LegMaturityDate_23("LOCALMKTDATE_680250400");
    noLegs_0_2.set(LegMaturityDate_23);
    InstrumentLeg_23.insert(LegMaturityDate_23.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_23("MONTHYEAR_1448436493");
    noLegs_0_2.set(LegMaturityMonthYear_23);
    InstrumentLeg_23.insert(LegMaturityMonthYear_23.getString());
    FIX::LegMaturityTime LegMaturityTime_23("TZTIMEONLY_1084109934");
    noLegs_0_2.set(LegMaturityTime_23);
    InstrumentLeg_23.insert(LegMaturityTime_23.getString());
    FIX::LegOptAttribute LegOptAttribute_23('9');
    noLegs_0_2.set(LegOptAttribute_23);
    InstrumentLeg_23.insert(LegOptAttribute_23.getString());
    FIX::LegOptionRatio LegOptionRatio_23;
    LegOptionRatio_23.setString("5247948");
    noLegs_0_2.set(LegOptionRatio_23);
    InstrumentLeg_23.insert(LegOptionRatio_23.getString());
    FIX::LegPool LegPool_23("STRING_1742461554");
    noLegs_0_2.set(LegPool_23);
    InstrumentLeg_23.insert(LegPool_23.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_23("STRING_1230391365");
    noLegs_0_2.set(LegPriceUnitOfMeasure_23);
    InstrumentLeg_23.insert(LegPriceUnitOfMeasure_23.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_23;
    LegPriceUnitOfMeasureQty_23.setString("7258147");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_23);
    InstrumentLeg_23.insert(LegPriceUnitOfMeasureQty_23.getString());
    FIX::LegProduct LegProduct_23(1665518644);
    noLegs_0_2.set(LegProduct_23);
    InstrumentLeg_23.insert(LegProduct_23.getString());
    FIX::LegPutOrCall LegPutOrCall_23(805404648);
    noLegs_0_2.set(LegPutOrCall_23);
    InstrumentLeg_23.insert(LegPutOrCall_23.getString());
    FIX::LegRatioQty LegRatioQty_23;
    LegRatioQty_23.setString("10440301");
    noLegs_0_2.set(LegRatioQty_23);
    InstrumentLeg_23.insert(LegRatioQty_23.getString());
    FIX::LegRedemptionDate LegRedemptionDate_23("LOCALMKTDATE_1895945172");
    noLegs_0_2.set(LegRedemptionDate_23);
    InstrumentLeg_23.insert(LegRedemptionDate_23.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_23("STRING_1941200214");
    noLegs_0_2.set(LegRepoCollateralSecurityType_23);
    InstrumentLeg_23.insert(LegRepoCollateralSecurityType_23.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_23;
    LegRepurchaseRate_23.setString("41.170000");
    noLegs_0_2.set(LegRepurchaseRate_23);
    InstrumentLeg_23.insert(LegRepurchaseRate_23.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_23(941315095);
    noLegs_0_2.set(LegRepurchaseTerm_23);
    InstrumentLeg_23.insert(LegRepurchaseTerm_23.getString());
    FIX::LegSecurityDesc LegSecurityDesc_23("STRING_1595599141");
    noLegs_0_2.set(LegSecurityDesc_23);
    InstrumentLeg_23.insert(LegSecurityDesc_23.getString());
    FIX::LegSecurityExchange LegSecurityExchange_23("EXCHANGE_868042907");
    noLegs_0_2.set(LegSecurityExchange_23);
    InstrumentLeg_23.insert(LegSecurityExchange_23.getString());
    FIX::LegSecurityID LegSecurityID_23("STRING_590278946");
    noLegs_0_2.set(LegSecurityID_23);
    InstrumentLeg_23.insert(LegSecurityID_23.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_23("STRING_1282791467");
    noLegs_0_2.set(LegSecurityIDSource_23);
    InstrumentLeg_23.insert(LegSecurityIDSource_23.getString());
    FIX::LegSecuritySubType LegSecuritySubType_23("STRING_401436218");
    noLegs_0_2.set(LegSecuritySubType_23);
    InstrumentLeg_23.insert(LegSecuritySubType_23.getString());
    FIX::LegSecurityType LegSecurityType_23("STRING_732772992");
    noLegs_0_2.set(LegSecurityType_23);
    InstrumentLeg_23.insert(LegSecurityType_23.getString());
    FIX::LegSide LegSide_23('2');
    noLegs_0_2.set(LegSide_23);
    InstrumentLeg_23.insert(LegSide_23.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_23("STRING_1528572973");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_23);
    InstrumentLeg_23.insert(LegStateOrProvinceOfIssue_23.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_23("CAN");
    noLegs_0_2.set(LegStrikeCurrency_23);
    InstrumentLeg_23.insert(LegStrikeCurrency_23.getString());
    FIX::LegStrikePrice LegStrikePrice_23;
    LegStrikePrice_23.setString("10301963");
    noLegs_0_2.set(LegStrikePrice_23);
    InstrumentLeg_23.insert(LegStrikePrice_23.getString());
    FIX::LegSymbol LegSymbol_23("STRING_1582313049");
    noLegs_0_2.set(LegSymbol_23);
    InstrumentLeg_23.insert(LegSymbol_23.getString());
    FIX::LegSymbolSfx LegSymbolSfx_23("STRING_1162135610");
    noLegs_0_2.set(LegSymbolSfx_23);
    InstrumentLeg_23.insert(LegSymbolSfx_23.getString());
    FIX::LegTimeUnit LegTimeUnit_23("STRING_1370608717");
    noLegs_0_2.set(LegTimeUnit_23);
    InstrumentLeg_23.insert(LegTimeUnit_23.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_23("STRING_1999980837");
    noLegs_0_2.set(LegUnitOfMeasure_23);
    InstrumentLeg_23.insert(LegUnitOfMeasure_23.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_23;
    LegUnitOfMeasureQty_23.setString("18844258");
    noLegs_0_2.set(LegUnitOfMeasureQty_23);
    InstrumentLeg_23.insert(LegUnitOfMeasureQty_23.getString());
    all_values.push_back(InstrumentLeg_23);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_52;
      FIX::LegSecurityAltID LegSecurityAltID_52("STRING_1300933682");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_52);
      LegSecAltIDGrp_NoLegSecurityAltID_52.insert(LegSecurityAltID_52.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_52("STRING_821052127");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_52);
      LegSecAltIDGrp_NoLegSecurityAltID_52.insert(LegSecurityAltIDSource_52.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_52);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_15;
  FIX::AttachmentPoint AttachmentPoint_15;
  AttachmentPoint_15.setString("5.680000");
  msg.set(AttachmentPoint_15);
  Instrument_15.insert(AttachmentPoint_15.getString());
  FIX::CFICode CFICode_15("STRING_1825728566");
  msg.set(CFICode_15);
  Instrument_15.insert(CFICode_15.getString());
  FIX::CPProgram CPProgram_15(99);
  msg.set(CPProgram_15);
  Instrument_15.insert(CPProgram_15.getString());
  FIX::CPRegType CPRegType_15("STRING_1231801934");
  msg.set(CPRegType_15);
  Instrument_15.insert(CPRegType_15.getString());
  FIX::CapPrice CapPrice_15;
  CapPrice_15.setString("4040597");
  msg.set(CapPrice_15);
  Instrument_15.insert(CapPrice_15.getString());
  FIX::ContractMultiplier ContractMultiplier_15;
  ContractMultiplier_15.setString("20815486");
  msg.set(ContractMultiplier_15);
  Instrument_15.insert(ContractMultiplier_15.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_15(2);
  msg.set(ContractMultiplierUnit_15);
  Instrument_15.insert(ContractMultiplierUnit_15.getString());
  FIX::ContractSettlMonth ContractSettlMonth_15("MONTHYEAR_1448089858");
  msg.set(ContractSettlMonth_15);
  Instrument_15.insert(ContractSettlMonth_15.getString());
  FIX::CountryOfIssue CountryOfIssue_15("COUNTRY_1830010201");
  msg.set(CountryOfIssue_15);
  Instrument_15.insert(CountryOfIssue_15.getString());
  FIX::CouponPaymentDate CouponPaymentDate_15("LOCALMKTDATE_1830923148");
  msg.set(CouponPaymentDate_15);
  Instrument_15.insert(CouponPaymentDate_15.getString());
  FIX::CouponRate CouponRate_15;
  CouponRate_15.setString("3.270000");
  msg.set(CouponRate_15);
  Instrument_15.insert(CouponRate_15.getString());
  FIX::CreditRating CreditRating_15("STRING_623841648");
  msg.set(CreditRating_15);
  Instrument_15.insert(CreditRating_15.getString());
  FIX::DatedDate DatedDate_15("LOCALMKTDATE_1279038642");
  msg.set(DatedDate_15);
  Instrument_15.insert(DatedDate_15.getString());
  FIX::DetachmentPoint DetachmentPoint_15;
  DetachmentPoint_15.setString("32.350000");
  msg.set(DetachmentPoint_15);
  Instrument_15.insert(DetachmentPoint_15.getString());
  FIX::EncodedIssuer EncodedIssuer_15("DATA_1214120594");
  msg.set(EncodedIssuer_15);
  Instrument_15.insert(EncodedIssuer_15.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_15(414346461);
  msg.set(EncodedIssuerLen_15);
  Instrument_15.insert(EncodedIssuerLen_15.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_15("DATA_1680589453");
  msg.set(EncodedSecurityDesc_15);
  Instrument_15.insert(EncodedSecurityDesc_15.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_15(1946893587);
  msg.set(EncodedSecurityDescLen_15);
  Instrument_15.insert(EncodedSecurityDescLen_15.getString());
  FIX::ExerciseStyle ExerciseStyle_15(0);
  msg.set(ExerciseStyle_15);
  Instrument_15.insert(ExerciseStyle_15.getString());
  FIX::Factor Factor_15;
  Factor_15.setString("10616787");
  msg.set(Factor_15);
  Instrument_15.insert(Factor_15.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_15(true);
  msg.set(FlexProductEligibilityIndicator_15);
  Instrument_15.insert(FlexProductEligibilityIndicator_15.getString());
  FIX::FlexibleIndicator FlexibleIndicator_15(true);
  msg.set(FlexibleIndicator_15);
  Instrument_15.insert(FlexibleIndicator_15.getString());
  FIX::FloorPrice FloorPrice_15;
  FloorPrice_15.setString("20918751");
  msg.set(FloorPrice_15);
  Instrument_15.insert(FloorPrice_15.getString());
  FIX::FlowScheduleType FlowScheduleType_15(3);
  msg.set(FlowScheduleType_15);
  Instrument_15.insert(FlowScheduleType_15.getString());
  FIX::InstrRegistry InstrRegistry_15("STRING_935394884");
  msg.set(InstrRegistry_15);
  Instrument_15.insert(InstrRegistry_15.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_15('1');
  msg.set(InstrmtAssignmentMethod_15);
  Instrument_15.insert(InstrmtAssignmentMethod_15.getString());
  FIX::InterestAccrualDate InterestAccrualDate_15("LOCALMKTDATE_558825222");
  msg.set(InterestAccrualDate_15);
  Instrument_15.insert(InterestAccrualDate_15.getString());
  FIX::IssueDate IssueDate_15("LOCALMKTDATE_672337077");
  msg.set(IssueDate_15);
  Instrument_15.insert(IssueDate_15.getString());
  FIX::Issuer Issuer_15("STRING_1218375662");
  msg.set(Issuer_15);
  Instrument_15.insert(Issuer_15.getString());
  FIX::ListMethod ListMethod_15(0);
  msg.set(ListMethod_15);
  Instrument_15.insert(ListMethod_15.getString());
  FIX::LocaleOfIssue LocaleOfIssue_15("STRING_1493389204");
  msg.set(LocaleOfIssue_15);
  Instrument_15.insert(LocaleOfIssue_15.getString());
  FIX::MaturityDate MaturityDate_15("LOCALMKTDATE_1219786231");
  msg.set(MaturityDate_15);
  Instrument_15.insert(MaturityDate_15.getString());
  FIX::MaturityMonthYear MaturityMonthYear_15("MONTHYEAR_1538003822");
  msg.set(MaturityMonthYear_15);
  Instrument_15.insert(MaturityMonthYear_15.getString());
  FIX::MaturityTime MaturityTime_15("TZTIMEONLY_1909419237");
  msg.set(MaturityTime_15);
  Instrument_15.insert(MaturityTime_15.getString());
  FIX::MinPriceIncrement MinPriceIncrement_15;
  MinPriceIncrement_15.setString("3041045");
  msg.set(MinPriceIncrement_15);
  Instrument_15.insert(MinPriceIncrement_15.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_15;
  MinPriceIncrementAmount_15.setString("19420635");
  msg.set(MinPriceIncrementAmount_15);
  Instrument_15.insert(MinPriceIncrementAmount_15.getString());
  FIX::NTPositionLimit NTPositionLimit_15(1843484266);
  msg.set(NTPositionLimit_15);
  Instrument_15.insert(NTPositionLimit_15.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_15;
  NotionalPercentageOutstanding_15.setString("74.510000");
  msg.set(NotionalPercentageOutstanding_15);
  Instrument_15.insert(NotionalPercentageOutstanding_15.getString());
  FIX::OptAttribute OptAttribute_15('1');
  msg.set(OptAttribute_15);
  Instrument_15.insert(OptAttribute_15.getString());
  FIX::OptPayoutAmount OptPayoutAmount_15;
  OptPayoutAmount_15.setString("15260108");
  msg.set(OptPayoutAmount_15);
  Instrument_15.insert(OptPayoutAmount_15.getString());
  FIX::OptPayoutType OptPayoutType_15(3);
  msg.set(OptPayoutType_15);
  Instrument_15.insert(OptPayoutType_15.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_15;
  OriginalNotionalPercentageOutstanding_15.setString("0.680000");
  msg.set(OriginalNotionalPercentageOutstanding_15);
  Instrument_15.insert(OriginalNotionalPercentageOutstanding_15.getString());
  FIX::Pool Pool_15("STRING_2368819");
  msg.set(Pool_15);
  Instrument_15.insert(Pool_15.getString());
  FIX::PositionLimit PositionLimit_15(1156305594);
  msg.set(PositionLimit_15);
  Instrument_15.insert(PositionLimit_15.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_15("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_15);
  Instrument_15.insert(PriceQuoteMethod_15.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_15("STRING_1216489414");
  msg.set(PriceUnitOfMeasure_15);
  Instrument_15.insert(PriceUnitOfMeasure_15.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_15;
  PriceUnitOfMeasureQty_15.setString("15706520");
  msg.set(PriceUnitOfMeasureQty_15);
  Instrument_15.insert(PriceUnitOfMeasureQty_15.getString());
  FIX::Product Product_17(3);
  msg.set(Product_17);
  Instrument_15.insert(Product_17.getString());
  FIX::ProductComplex ProductComplex_15("STRING_1015899353");
  msg.set(ProductComplex_15);
  Instrument_15.insert(ProductComplex_15.getString());
  FIX::PutOrCall PutOrCall_15(0);
  msg.set(PutOrCall_15);
  Instrument_15.insert(PutOrCall_15.getString());
  FIX::RedemptionDate RedemptionDate_15("LOCALMKTDATE_1380234239");
  msg.set(RedemptionDate_15);
  Instrument_15.insert(RedemptionDate_15.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_15("STRING_139914337");
  msg.set(RepoCollateralSecurityType_15);
  Instrument_15.insert(RepoCollateralSecurityType_15.getString());
  FIX::RepurchaseRate RepurchaseRate_15;
  RepurchaseRate_15.setString("61.270000");
  msg.set(RepurchaseRate_15);
  Instrument_15.insert(RepurchaseRate_15.getString());
  FIX::RepurchaseTerm RepurchaseTerm_15(1324625714);
  msg.set(RepurchaseTerm_15);
  Instrument_15.insert(RepurchaseTerm_15.getString());
  FIX::RestructuringType RestructuringType_15("STRING_XR");
  msg.set(RestructuringType_15);
  Instrument_15.insert(RestructuringType_15.getString());
  FIX::SecurityDesc SecurityDesc_15("STRING_792517363");
  msg.set(SecurityDesc_15);
  Instrument_15.insert(SecurityDesc_15.getString());
  FIX::SecurityExchange SecurityExchange_15("EXCHANGE_492142259");
  msg.set(SecurityExchange_15);
  Instrument_15.insert(SecurityExchange_15.getString());
  FIX::SecurityGroup SecurityGroup_15("STRING_1405067593");
  msg.set(SecurityGroup_15);
  Instrument_15.insert(SecurityGroup_15.getString());
  FIX::SecurityID SecurityID_15("STRING_1464854441");
  msg.set(SecurityID_15);
  Instrument_15.insert(SecurityID_15.getString());
  FIX::SecurityIDSource SecurityIDSource_15("STRING_E");
  msg.set(SecurityIDSource_15);
  Instrument_15.insert(SecurityIDSource_15.getString());
  FIX::SecurityStatus SecurityStatus_15("STRING_1");
  msg.set(SecurityStatus_15);
  Instrument_15.insert(SecurityStatus_15.getString());
  FIX::SecuritySubType SecuritySubType_15("STRING_810759997");
  msg.set(SecuritySubType_15);
  Instrument_15.insert(SecuritySubType_15.getString());
  FIX::SecurityType SecurityType_17("STRING_CPP");
  msg.set(SecurityType_17);
  Instrument_15.insert(SecurityType_17.getString());
  FIX::Seniority Seniority_15("STRING_SB");
  msg.set(Seniority_15);
  Instrument_15.insert(Seniority_15.getString());
  FIX::SettlMethod SettlMethod_15('P');
  msg.set(SettlMethod_15);
  Instrument_15.insert(SettlMethod_15.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_15("STRING_1086925021");
  msg.set(SettleOnOpenFlag_15);
  Instrument_15.insert(SettleOnOpenFlag_15.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_15("STRING_302442907");
  msg.set(StateOrProvinceOfIssue_15);
  Instrument_15.insert(StateOrProvinceOfIssue_15.getString());
  FIX::StrikeCurrency StrikeCurrency_15("CHF");
  msg.set(StrikeCurrency_15);
  Instrument_15.insert(StrikeCurrency_15.getString());
  FIX::StrikeMultiplier StrikeMultiplier_15;
  StrikeMultiplier_15.setString("15451126");
  msg.set(StrikeMultiplier_15);
  Instrument_15.insert(StrikeMultiplier_15.getString());
  FIX::StrikePrice StrikePrice_15;
  StrikePrice_15.setString("17947070");
  msg.set(StrikePrice_15);
  Instrument_15.insert(StrikePrice_15.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_15(1);
  msg.set(StrikePriceBoundaryMethod_15);
  Instrument_15.insert(StrikePriceBoundaryMethod_15.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_15;
  StrikePriceBoundaryPrecision_15.setString("90.670000");
  msg.set(StrikePriceBoundaryPrecision_15);
  Instrument_15.insert(StrikePriceBoundaryPrecision_15.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_15(1);
  msg.set(StrikePriceDeterminationMethod_15);
  Instrument_15.insert(StrikePriceDeterminationMethod_15.getString());
  FIX::StrikeValue StrikeValue_15;
  StrikeValue_15.setString("1668413");
  msg.set(StrikeValue_15);
  Instrument_15.insert(StrikeValue_15.getString());
  FIX::Symbol Symbol_15("STRING_1836858722");
  msg.set(Symbol_15);
  Instrument_15.insert(Symbol_15.getString());
  FIX::SymbolSfx SymbolSfx_15("STRING_CD");
  msg.set(SymbolSfx_15);
  Instrument_15.insert(SymbolSfx_15.getString());
  FIX::TimeUnit TimeUnit_15("STRING_Wk");
  msg.set(TimeUnit_15);
  Instrument_15.insert(TimeUnit_15.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_15(4);
  msg.set(UnderlyingPriceDeterminationMethod_15);
  Instrument_15.insert(UnderlyingPriceDeterminationMethod_15.getString());
  FIX::UnitOfMeasure UnitOfMeasure_15("STRING_Bu");
  msg.set(UnitOfMeasure_15);
  Instrument_15.insert(UnitOfMeasure_15.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_15;
  UnitOfMeasureQty_15.setString("18213566");
  msg.set(UnitOfMeasureQty_15);
  Instrument_15.insert(UnitOfMeasureQty_15.getString());
  FIX::ValuationMethod ValuationMethod_15("STRING_CDSD");
  msg.set(ValuationMethod_15);
  Instrument_15.insert(ValuationMethod_15.getString());
  all_values.push_back(Instrument_15);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_35;
    FIX::ComplexEventCondition ComplexEventCondition_35(2);
    noComplexEvents_0_0.set(ComplexEventCondition_35);
    ComplexEvents_NoComplexEvents_35.insert(ComplexEventCondition_35.getString());
    FIX::ComplexEventPrice ComplexEventPrice_35;
    ComplexEventPrice_35.setString("5653068");
    noComplexEvents_0_0.set(ComplexEventPrice_35);
    ComplexEvents_NoComplexEvents_35.insert(ComplexEventPrice_35.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_35(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_35);
    ComplexEvents_NoComplexEvents_35.insert(ComplexEventPriceBoundaryMethod_35.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_35;
    ComplexEventPriceBoundaryPrecision_35.setString("28.250000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_35);
    ComplexEvents_NoComplexEvents_35.insert(ComplexEventPriceBoundaryPrecision_35.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_35(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_35);
    ComplexEvents_NoComplexEvents_35.insert(ComplexEventPriceTimeType_35.getString());
    FIX::ComplexEventType ComplexEventType_35(8);
    noComplexEvents_0_0.set(ComplexEventType_35);
    ComplexEvents_NoComplexEvents_35.insert(ComplexEventType_35.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_35;
    ComplexOptPayoutAmount_35.setString("17883672");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_35);
    ComplexEvents_NoComplexEvents_35.insert(ComplexOptPayoutAmount_35.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_35);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_72;
      FIX::ComplexEventEndDate ComplexEventEndDate_72(FIX::UTCTIMESTAMP(23, 58, 4, 26, 4, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_72);
      ComplexEventDates_NoComplexEventDates_72.insert(ComplexEventEndDate_72.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_72(FIX::UTCTIMESTAMP(12, 30, 45, 17, 3, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_72);
      ComplexEventDates_NoComplexEventDates_72.insert(ComplexEventStartDate_72.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_72);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_154;
        FIX::ComplexEventEndTime ComplexEventEndTime_154(FIX::UTCTIMEONLY(0, 10, 27));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_154);
        ComplexEventTimes_NoComplexEventTimes_154.insert(ComplexEventEndTime_154.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_154(FIX::UTCTIMEONLY(17, 54, 20));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_154);
        ComplexEventTimes_NoComplexEventTimes_154.insert(ComplexEventStartTime_154.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_154);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_155;
        FIX::ComplexEventEndTime ComplexEventEndTime_155(FIX::UTCTIMEONLY(11, 44, 7));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_155);
        ComplexEventTimes_NoComplexEventTimes_155.insert(ComplexEventEndTime_155.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_155(FIX::UTCTIMEONLY(2, 5, 40));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_155);
        ComplexEventTimes_NoComplexEventTimes_155.insert(ComplexEventStartTime_155.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_155);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_156;
        FIX::ComplexEventEndTime ComplexEventEndTime_156(FIX::UTCTIMEONLY(9, 30, 21));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_156);
        ComplexEventTimes_NoComplexEventTimes_156.insert(ComplexEventEndTime_156.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_156(FIX::UTCTIMEONLY(22, 32, 35));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_156);
        ComplexEventTimes_NoComplexEventTimes_156.insert(ComplexEventStartTime_156.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_156);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_36;
    FIX::ComplexEventCondition ComplexEventCondition_36(1);
    noComplexEvents_0_1.set(ComplexEventCondition_36);
    ComplexEvents_NoComplexEvents_36.insert(ComplexEventCondition_36.getString());
    FIX::ComplexEventPrice ComplexEventPrice_36;
    ComplexEventPrice_36.setString("12297097");
    noComplexEvents_0_1.set(ComplexEventPrice_36);
    ComplexEvents_NoComplexEvents_36.insert(ComplexEventPrice_36.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_36(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_36);
    ComplexEvents_NoComplexEvents_36.insert(ComplexEventPriceBoundaryMethod_36.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_36;
    ComplexEventPriceBoundaryPrecision_36.setString("2.800000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_36);
    ComplexEvents_NoComplexEvents_36.insert(ComplexEventPriceBoundaryPrecision_36.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_36(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_36);
    ComplexEvents_NoComplexEvents_36.insert(ComplexEventPriceTimeType_36.getString());
    FIX::ComplexEventType ComplexEventType_36(3);
    noComplexEvents_0_1.set(ComplexEventType_36);
    ComplexEvents_NoComplexEvents_36.insert(ComplexEventType_36.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_36;
    ComplexOptPayoutAmount_36.setString("18981551");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_36);
    ComplexEvents_NoComplexEvents_36.insert(ComplexOptPayoutAmount_36.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_36);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_73;
      FIX::ComplexEventEndDate ComplexEventEndDate_73(FIX::UTCTIMESTAMP(3, 49, 25, 16, 12, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_73);
      ComplexEventDates_NoComplexEventDates_73.insert(ComplexEventEndDate_73.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_73(FIX::UTCTIMESTAMP(14, 22, 50, 5, 5, 2005));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_73);
      ComplexEventDates_NoComplexEventDates_73.insert(ComplexEventStartDate_73.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_73);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_157;
        FIX::ComplexEventEndTime ComplexEventEndTime_157(FIX::UTCTIMEONLY(20, 12, 15));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_157);
        ComplexEventTimes_NoComplexEventTimes_157.insert(ComplexEventEndTime_157.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_157(FIX::UTCTIMEONLY(10, 40, 23));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_157);
        ComplexEventTimes_NoComplexEventTimes_157.insert(ComplexEventStartTime_157.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_157);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_158;
        FIX::ComplexEventEndTime ComplexEventEndTime_158(FIX::UTCTIMEONLY(15, 44, 44));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_158);
        ComplexEventTimes_NoComplexEventTimes_158.insert(ComplexEventEndTime_158.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_158(FIX::UTCTIMEONLY(2, 49, 33));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_158);
        ComplexEventTimes_NoComplexEventTimes_158.insert(ComplexEventStartTime_158.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_158);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_159;
        FIX::ComplexEventEndTime ComplexEventEndTime_159(FIX::UTCTIMEONLY(16, 22, 1));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_159);
        ComplexEventTimes_NoComplexEventTimes_159.insert(ComplexEventEndTime_159.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_159(FIX::UTCTIMEONLY(1, 47, 54));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_159);
        ComplexEventTimes_NoComplexEventTimes_159.insert(ComplexEventStartTime_159.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_159);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_74;
      FIX::ComplexEventEndDate ComplexEventEndDate_74(FIX::UTCTIMESTAMP(22, 36, 0, 6, 5, 2012));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_74);
      ComplexEventDates_NoComplexEventDates_74.insert(ComplexEventEndDate_74.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_74(FIX::UTCTIMESTAMP(0, 46, 32, 0, 9, 2006));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_74);
      ComplexEventDates_NoComplexEventDates_74.insert(ComplexEventStartDate_74.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_74);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_160;
        FIX::ComplexEventEndTime ComplexEventEndTime_160(FIX::UTCTIMEONLY(3, 24, 1));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_160);
        ComplexEventTimes_NoComplexEventTimes_160.insert(ComplexEventEndTime_160.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_160(FIX::UTCTIMEONLY(6, 50, 8));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_160);
        ComplexEventTimes_NoComplexEventTimes_160.insert(ComplexEventStartTime_160.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_160);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_161;
        FIX::ComplexEventEndTime ComplexEventEndTime_161(FIX::UTCTIMEONLY(10, 23, 31));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_161);
        ComplexEventTimes_NoComplexEventTimes_161.insert(ComplexEventEndTime_161.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_161(FIX::UTCTIMEONLY(0, 11, 44));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_161);
        ComplexEventTimes_NoComplexEventTimes_161.insert(ComplexEventStartTime_161.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_161);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_75;
      FIX::ComplexEventEndDate ComplexEventEndDate_75(FIX::UTCTIMESTAMP(1, 21, 56, 27, 2, 2002));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_75);
      ComplexEventDates_NoComplexEventDates_75.insert(ComplexEventEndDate_75.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_75(FIX::UTCTIMESTAMP(17, 24, 32, 26, 1, 2014));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_75);
      ComplexEventDates_NoComplexEventDates_75.insert(ComplexEventStartDate_75.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_75);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_162;
        FIX::ComplexEventEndTime ComplexEventEndTime_162(FIX::UTCTIMEONLY(15, 18, 54));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_162);
        ComplexEventTimes_NoComplexEventTimes_162.insert(ComplexEventEndTime_162.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_162(FIX::UTCTIMEONLY(0, 36, 58));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_162);
        ComplexEventTimes_NoComplexEventTimes_162.insert(ComplexEventStartTime_162.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_162);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_163;
        FIX::ComplexEventEndTime ComplexEventEndTime_163(FIX::UTCTIMEONLY(10, 21, 5));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_163);
        ComplexEventTimes_NoComplexEventTimes_163.insert(ComplexEventEndTime_163.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_163(FIX::UTCTIMEONLY(10, 16, 48));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_163);
        ComplexEventTimes_NoComplexEventTimes_163.insert(ComplexEventStartTime_163.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_163);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_164;
        FIX::ComplexEventEndTime ComplexEventEndTime_164(FIX::UTCTIMEONLY(17, 9, 26));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_164);
        ComplexEventTimes_NoComplexEventTimes_164.insert(ComplexEventEndTime_164.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_164(FIX::UTCTIMEONLY(2, 57, 13));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_164);
        ComplexEventTimes_NoComplexEventTimes_164.insert(ComplexEventStartTime_164.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_164);

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
    multiset<string> EvntGrp_NoEvents_27;
    FIX::EventDate EventDate_27("LOCALMKTDATE_47282173");
    noEvents_0_0.set(EventDate_27);
    EvntGrp_NoEvents_27.insert(EventDate_27.getString());
    FIX::EventPx EventPx_27;
    EventPx_27.setString("13267092");
    noEvents_0_0.set(EventPx_27);
    EvntGrp_NoEvents_27.insert(EventPx_27.getString());
    FIX::EventText EventText_27("STRING_710446918");
    noEvents_0_0.set(EventText_27);
    EvntGrp_NoEvents_27.insert(EventText_27.getString());
    FIX::EventTime EventTime_27(FIX::UTCTIMESTAMP(9, 0, 35, 4, 7, 2017));
    noEvents_0_0.set(EventTime_27);
    EvntGrp_NoEvents_27.insert(EventTime_27.getString());
    FIX::EventType EventType_27(19);
    noEvents_0_0.set(EventType_27);
    EvntGrp_NoEvents_27.insert(EventType_27.getString());
    all_values.push_back(EvntGrp_NoEvents_27);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_28;
    FIX::InstrumentPartyID InstrumentPartyID_28("STRING_1268411637");
    noInstrumentParties_0_0.set(InstrumentPartyID_28);
    InstrumentParties_NoInstrumentParties_28.insert(InstrumentPartyID_28.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_28('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_28);
    InstrumentParties_NoInstrumentParties_28.insert(InstrumentPartyIDSource_28.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_28(1290183416);
    noInstrumentParties_0_0.set(InstrumentPartyRole_28);
    InstrumentParties_NoInstrumentParties_28.insert(InstrumentPartyRole_28.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_28);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66;
      FIX::InstrumentPartySubID InstrumentPartySubID_66("STRING_1062154950");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_66);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66.insert(InstrumentPartySubID_66.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_66(343288373);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_66);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66.insert(InstrumentPartySubIDType_66.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67;
      FIX::InstrumentPartySubID InstrumentPartySubID_67("STRING_697552215");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_67);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67.insert(InstrumentPartySubID_67.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_67(751543256);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_67);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67.insert(InstrumentPartySubIDType_67.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68;
      FIX::InstrumentPartySubID InstrumentPartySubID_68("STRING_1730217670");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_68);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68.insert(InstrumentPartySubID_68.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_68(1034960763);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_68);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68.insert(InstrumentPartySubIDType_68.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_29;
    FIX::InstrumentPartyID InstrumentPartyID_29("STRING_1495347506");
    noInstrumentParties_0_1.set(InstrumentPartyID_29);
    InstrumentParties_NoInstrumentParties_29.insert(InstrumentPartyID_29.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_29('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_29);
    InstrumentParties_NoInstrumentParties_29.insert(InstrumentPartyIDSource_29.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_29(760931885);
    noInstrumentParties_0_1.set(InstrumentPartyRole_29);
    InstrumentParties_NoInstrumentParties_29.insert(InstrumentPartyRole_29.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_29);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69;
      FIX::InstrumentPartySubID InstrumentPartySubID_69("STRING_669955296");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_69);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69.insert(InstrumentPartySubID_69.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_69(2075380303);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_69);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69.insert(InstrumentPartySubIDType_69.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70;
      FIX::InstrumentPartySubID InstrumentPartySubID_70("STRING_822141881");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_70);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70.insert(InstrumentPartySubID_70.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_70(1988721349);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_70);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70.insert(InstrumentPartySubIDType_70.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71;
      FIX::InstrumentPartySubID InstrumentPartySubID_71("STRING_29045291");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_71);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71.insert(InstrumentPartySubID_71.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_71(869424055);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_71);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71.insert(InstrumentPartySubIDType_71.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_31;
    FIX::SecurityAltID SecurityAltID_31("STRING_739492209");
    noSecurityAltID_0_0.set(SecurityAltID_31);
    SecAltIDGrp_NoSecurityAltID_31.insert(SecurityAltID_31.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_31("STRING_88975477");
    noSecurityAltID_0_0.set(SecurityAltIDSource_31);
    SecAltIDGrp_NoSecurityAltID_31.insert(SecurityAltIDSource_31.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_31);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_32;
    FIX::SecurityAltID SecurityAltID_32("STRING_2013953027");
    noSecurityAltID_0_1.set(SecurityAltID_32);
    SecAltIDGrp_NoSecurityAltID_32.insert(SecurityAltID_32.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_32("STRING_97960141");
    noSecurityAltID_0_1.set(SecurityAltIDSource_32);
    SecAltIDGrp_NoSecurityAltID_32.insert(SecurityAltIDSource_32.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_32);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_33;
    FIX::SecurityAltID SecurityAltID_33("STRING_301257612");
    noSecurityAltID_0_2.set(SecurityAltID_33);
    SecAltIDGrp_NoSecurityAltID_33.insert(SecurityAltID_33.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_33("STRING_13460227");
    noSecurityAltID_0_2.set(SecurityAltIDSource_33);
    SecAltIDGrp_NoSecurityAltID_33.insert(SecurityAltIDSource_33.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_33);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_30;
  FIX::SecurityXML SecurityXML_31("XMLDATA_2071173979");
  msg.set(SecurityXML_31);
  FIX::SecurityXMLLen SecurityXMLLen_15(180772233);
  msg.set(SecurityXMLLen_15);
  FIX::SecurityXMLSchema SecurityXMLSchema_15("STRING_950609005");
  msg.set(SecurityXMLSchema_15);
  SecurityXML_30.insert(SecurityXMLSchema_15.getString());
  all_values.push_back(SecurityXML_30);

  // PegInstructions
  multiset<string> PegInstructions_0;
  FIX::PegLimitType PegLimitType_0(0);
  msg.set(PegLimitType_0);
  PegInstructions_0.insert(PegLimitType_0.getString());
  FIX::PegMoveType PegMoveType_0(0);
  msg.set(PegMoveType_0);
  PegInstructions_0.insert(PegMoveType_0.getString());
  FIX::PegOffsetType PegOffsetType_0(2);
  msg.set(PegOffsetType_0);
  PegInstructions_0.insert(PegOffsetType_0.getString());
  FIX::PegOffsetValue PegOffsetValue_0;
  PegOffsetValue_0.setString("2284852");
  msg.set(PegOffsetValue_0);
  PegInstructions_0.insert(PegOffsetValue_0.getString());
  FIX::PegPriceType PegPriceType_0(7);
  msg.set(PegPriceType_0);
  PegInstructions_0.insert(PegPriceType_0.getString());
  FIX::PegRoundDirection PegRoundDirection_0(1);
  msg.set(PegRoundDirection_0);
  PegInstructions_0.insert(PegRoundDirection_0.getString());
  FIX::PegScope PegScope_0(4);
  msg.set(PegScope_0);
  PegInstructions_0.insert(PegScope_0.getString());
  FIX::PegSecurityDesc PegSecurityDesc_0("STRING_1124493588");
  msg.set(PegSecurityDesc_0);
  PegInstructions_0.insert(PegSecurityDesc_0.getString());
  FIX::PegSecurityID PegSecurityID_0("STRING_432304912");
  msg.set(PegSecurityID_0);
  PegInstructions_0.insert(PegSecurityID_0.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_0("STRING_154507637");
  msg.set(PegSecurityIDSource_0);
  PegInstructions_0.insert(PegSecurityIDSource_0.getString());
  FIX::PegSymbol PegSymbol_0("STRING_11970703");
  msg.set(PegSymbol_0);
  PegInstructions_0.insert(PegSymbol_0.getString());
  all_values.push_back(PegInstructions_0);

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_0;
    FIX::RootPartyID RootPartyID_0("STRING_1190394588");
    noRootPartyIDs_0_0.set(RootPartyID_0);
    RootParties_NoRootPartyIDs_0.insert(RootPartyID_0.getString());
    FIX::RootPartyIDSource RootPartyIDSource_0('7');
    noRootPartyIDs_0_0.set(RootPartyIDSource_0);
    RootParties_NoRootPartyIDs_0.insert(RootPartyIDSource_0.getString());
    FIX::RootPartyRole RootPartyRole_0(106047234);
    noRootPartyIDs_0_0.set(RootPartyRole_0);
    RootParties_NoRootPartyIDs_0.insert(RootPartyRole_0.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_0);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_0;
      FIX::RootPartySubID RootPartySubID_0("STRING_700799244");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_0);
      RootSubParties_NoRootPartySubIDs_0.insert(RootPartySubID_0.getString());
      FIX::RootPartySubIDType RootPartySubIDType_0(928189116);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_0);
      RootSubParties_NoRootPartySubIDs_0.insert(RootPartySubIDType_0.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_0);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_1;
      FIX::RootPartySubID RootPartySubID_1("STRING_1701587586");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_1);
      RootSubParties_NoRootPartySubIDs_1.insert(RootPartySubID_1.getString());
      FIX::RootPartySubIDType RootPartySubIDType_1(729844535);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_1);
      RootSubParties_NoRootPartySubIDs_1.insert(RootPartySubIDType_1.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_1);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  // SideCrossOrdModGrp
  // Group SideCrossOrdModGrp.NoSides
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSides noSides_0_0;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_0;
    FIX::Account Account_10("STRING_722050885");
    noSides_0_0.set(Account_10);
    SideCrossOrdModGrp_NoSides_0.insert(Account_10.getString());
    FIX::AccountType AccountType_7(3);
    noSides_0_0.set(AccountType_7);
    SideCrossOrdModGrp_NoSides_0.insert(AccountType_7.getString());
    FIX::AcctIDSource AcctIDSource_3(3);
    noSides_0_0.set(AcctIDSource_3);
    SideCrossOrdModGrp_NoSides_0.insert(AcctIDSource_3.getString());
    FIX::AllocID AllocID_7("STRING_588520264");
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
    FIX::ClOrdID ClOrdID_14("STRING_1490987218");
    noSides_0_0.set(ClOrdID_14);
    SideCrossOrdModGrp_NoSides_0.insert(ClOrdID_14.getString());
    FIX::ClOrdLinkID ClOrdLinkID_0("STRING_221134845");
    noSides_0_0.set(ClOrdLinkID_0);
    SideCrossOrdModGrp_NoSides_0.insert(ClOrdLinkID_0.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_5("STRING_I");
    noSides_0_0.set(ClearingFeeIndicator_5);
    SideCrossOrdModGrp_NoSides_0.insert(ClearingFeeIndicator_5.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_0(1);
    noSides_0_0.set(CoveredOrUncovered_0);
    SideCrossOrdModGrp_NoSides_0.insert(CoveredOrUncovered_0.getString());
    FIX::CustOrderCapacity CustOrderCapacity_3(4);
    noSides_0_0.set(CustOrderCapacity_3);
    SideCrossOrdModGrp_NoSides_0.insert(CustOrderCapacity_3.getString());
    FIX::DayBookingInst DayBookingInst_0('0');
    noSides_0_0.set(DayBookingInst_0);
    SideCrossOrdModGrp_NoSides_0.insert(DayBookingInst_0.getString());
    FIX::EncodedText EncodedText_25("DATA_657774285");
    noSides_0_0.set(EncodedText_25);
    SideCrossOrdModGrp_NoSides_0.insert(EncodedText_25.getString());
    FIX::EncodedTextLen EncodedTextLen_25(2097260088);
    noSides_0_0.set(EncodedTextLen_25);
    SideCrossOrdModGrp_NoSides_0.insert(EncodedTextLen_25.getString());
    FIX::ForexReq ForexReq_1(false);
    noSides_0_0.set(ForexReq_1);
    SideCrossOrdModGrp_NoSides_0.insert(ForexReq_1.getString());
    FIX::OrderCapacity OrderCapacity_1('A');
    noSides_0_0.set(OrderCapacity_1);
    SideCrossOrdModGrp_NoSides_0.insert(OrderCapacity_1.getString());
    FIX::OrderRestrictions OrderRestrictions_1("MULTIPLECHARVALUE_E");
    noSides_0_0.set(OrderRestrictions_1);
    SideCrossOrdModGrp_NoSides_0.insert(OrderRestrictions_1.getString());
    FIX::OrigClOrdID OrigClOrdID_0("STRING_284262771");
    noSides_0_0.set(OrigClOrdID_0);
    SideCrossOrdModGrp_NoSides_0.insert(OrigClOrdID_0.getString());
    FIX::PositionEffect PositionEffect_3('D');
    noSides_0_0.set(PositionEffect_3);
    SideCrossOrdModGrp_NoSides_0.insert(PositionEffect_3.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_0(false);
    noSides_0_0.set(PreTradeAnonymity_0);
    SideCrossOrdModGrp_NoSides_0.insert(PreTradeAnonymity_0.getString());
    FIX::PreallocMethod PreallocMethod_0('1');
    noSides_0_0.set(PreallocMethod_0);
    SideCrossOrdModGrp_NoSides_0.insert(PreallocMethod_0.getString());
    FIX::QtyType QtyType_11(0);
    noSides_0_0.set(QtyType_11);
    SideCrossOrdModGrp_NoSides_0.insert(QtyType_11.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_14("STRING_1859143320");
    noSides_0_0.set(SecondaryClOrdID_14);
    SideCrossOrdModGrp_NoSides_0.insert(SecondaryClOrdID_14.getString());
    FIX::SettlCurrency SettlCurrency_6("GBP");
    noSides_0_0.set(SettlCurrency_6);
    SideCrossOrdModGrp_NoSides_0.insert(SettlCurrency_6.getString());
    FIX::Side Side_15('5');
    noSides_0_0.set(Side_15);
    SideCrossOrdModGrp_NoSides_0.insert(Side_15.getString());
    FIX::SideComplianceID SideComplianceID_0("STRING_1098667892");
    noSides_0_0.set(SideComplianceID_0);
    SideCrossOrdModGrp_NoSides_0.insert(SideComplianceID_0.getString());
    FIX::SideTimeInForce SideTimeInForce_0(FIX::UTCTIMESTAMP(3, 55, 38, 16, 8, 2000));
    noSides_0_0.set(SideTimeInForce_0);
    SideCrossOrdModGrp_NoSides_0.insert(SideTimeInForce_0.getString());
    FIX::SolicitedFlag SolicitedFlag_0(false);
    noSides_0_0.set(SolicitedFlag_0);
    SideCrossOrdModGrp_NoSides_0.insert(SolicitedFlag_0.getString());
    FIX::Text Text_25("STRING_528265027");
    noSides_0_0.set(Text_25);
    SideCrossOrdModGrp_NoSides_0.insert(Text_25.getString());
    FIX::TradeDate TradeDate_9("LOCALMKTDATE_1606488294");
    noSides_0_0.set(TradeDate_9);
    SideCrossOrdModGrp_NoSides_0.insert(TradeDate_9.getString());
    FIX::TradeOriginationDate TradeOriginationDate_3("LOCALMKTDATE_1374957005");
    noSides_0_0.set(TradeOriginationDate_3);
    SideCrossOrdModGrp_NoSides_0.insert(TradeOriginationDate_3.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_0);

    // CommissionData
    multiset<string> CommissionData_9;
    FIX::CommCurrency CommCurrency_9("USD");
    noSides_0_0.set(CommCurrency_9);
    CommissionData_9.insert(CommCurrency_9.getString());
    FIX::CommType CommType_9('5');
    noSides_0_0.set(CommType_9);
    CommissionData_9.insert(CommType_9.getString());
    FIX::Commission Commission_9;
    Commission_9.setString("2722349");
    noSides_0_0.set(Commission_9);
    CommissionData_9.insert(Commission_9.getString());
    FIX::FundRenewWaiv FundRenewWaiv_9('Y');
    noSides_0_0.set(FundRenewWaiv_9);
    CommissionData_9.insert(FundRenewWaiv_9.getString());
    all_values.push_back(CommissionData_9);

    // OrderQtyData
    multiset<string> OrderQtyData_0;
    FIX::CashOrderQty CashOrderQty_0;
    CashOrderQty_0.setString("3145366");
    noSides_0_0.set(CashOrderQty_0);
    OrderQtyData_0.insert(CashOrderQty_0.getString());
    FIX::OrderPercent OrderPercent_0;
    OrderPercent_0.setString("13.790000");
    noSides_0_0.set(OrderPercent_0);
    OrderQtyData_0.insert(OrderPercent_0.getString());
    FIX::OrderQty OrderQty_8;
    OrderQty_8.setString("10347482");
    noSides_0_0.set(OrderQty_8);
    OrderQtyData_0.insert(OrderQty_8.getString());
    FIX::RoundingDirection RoundingDirection_0('2');
    noSides_0_0.set(RoundingDirection_0);
    OrderQtyData_0.insert(RoundingDirection_0.getString());
    FIX::RoundingModulus RoundingModulus_0;
    RoundingModulus_0.setString("12962814");
    noSides_0_0.set(RoundingModulus_0);
    OrderQtyData_0.insert(RoundingModulus_0.getString());
    all_values.push_back(OrderQtyData_0);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_38;
      FIX::PartyID PartyID_38("STRING_780656474");
      noPartyIDs_0_1_0.set(PartyID_38);
      Parties_NoPartyIDs_38.insert(PartyID_38.getString());
      FIX::PartyIDSource PartyIDSource_38('G');
      noPartyIDs_0_1_0.set(PartyIDSource_38);
      Parties_NoPartyIDs_38.insert(PartyIDSource_38.getString());
      FIX::PartyRole PartyRole_38(70);
      noPartyIDs_0_1_0.set(PartyRole_38);
      Parties_NoPartyIDs_38.insert(PartyRole_38.getString());
      all_values.push_back(Parties_NoPartyIDs_38);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_78;
        FIX::PartySubID PartySubID_78("STRING_2094181810");
        noPartySubIDs_0_0_2_0.set(PartySubID_78);
        PtysSubGrp_NoPartySubIDs_78.insert(PartySubID_78.getString());
        FIX::PartySubIDType PartySubIDType_78(5);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_78);
        PtysSubGrp_NoPartySubIDs_78.insert(PartySubIDType_78.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_78);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_0;
      FIX::AllocAccount AllocAccount_10("STRING_359157078");
      noAllocs_0_1_0.set(AllocAccount_10);
      PreAllocGrp_NoAllocs_0.insert(AllocAccount_10.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_10(505105540);
      noAllocs_0_1_0.set(AllocAcctIDSource_10);
      PreAllocGrp_NoAllocs_0.insert(AllocAcctIDSource_10.getString());
      FIX::AllocQty AllocQty_9;
      AllocQty_9.setString("10413923");
      noAllocs_0_1_0.set(AllocQty_9);
      PreAllocGrp_NoAllocs_0.insert(AllocQty_9.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_5("CAN");
      noAllocs_0_1_0.set(AllocSettlCurrency_5);
      PreAllocGrp_NoAllocs_0.insert(AllocSettlCurrency_5.getString());
      FIX::IndividualAllocID IndividualAllocID_10("STRING_1457379857");
      noAllocs_0_1_0.set(IndividualAllocID_10);
      PreAllocGrp_NoAllocs_0.insert(IndividualAllocID_10.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_0);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_33;
        FIX::NestedPartyID NestedPartyID_33("STRING_1741805370");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_33);
        NestedParties_NoNestedPartyIDs_33.insert(NestedPartyID_33.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_33('3');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_33);
        NestedParties_NoNestedPartyIDs_33.insert(NestedPartyIDSource_33.getString());
        FIX::NestedPartyRole NestedPartyRole_33(1849586865);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_33);
        NestedParties_NoNestedPartyIDs_33.insert(NestedPartyRole_33.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_33);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_65;
          FIX::NestedPartySubID NestedPartySubID_65("STRING_1920892306");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_65);
          NstdPtysSubGrp_NoNestedPartySubIDs_65.insert(NestedPartySubID_65.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_65(1077060222);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_65);
          NstdPtysSubGrp_NoNestedPartySubIDs_65.insert(NestedPartySubIDType_65.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_65);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_66;
          FIX::NestedPartySubID NestedPartySubID_66("STRING_871986621");
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubID_66);
          NstdPtysSubGrp_NoNestedPartySubIDs_66.insert(NestedPartySubID_66.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_66(785002802);
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubIDType_66);
          NstdPtysSubGrp_NoNestedPartySubIDs_66.insert(NestedPartySubIDType_66.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_66);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_67;
          FIX::NestedPartySubID NestedPartySubID_67("STRING_733822623");
          noNestedPartySubIDs_0_0_0_3_2.set(NestedPartySubID_67);
          NstdPtysSubGrp_NoNestedPartySubIDs_67.insert(NestedPartySubID_67.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_67(1144221560);
          noNestedPartySubIDs_0_0_0_3_2.set(NestedPartySubIDType_67);
          NstdPtysSubGrp_NoNestedPartySubIDs_67.insert(NestedPartySubIDType_67.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_67);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_2);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_34;
        FIX::NestedPartyID NestedPartyID_34("STRING_1967793150");
        noNestedPartyIDs_0_0_2_1.set(NestedPartyID_34);
        NestedParties_NoNestedPartyIDs_34.insert(NestedPartyID_34.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_34('1');
        noNestedPartyIDs_0_0_2_1.set(NestedPartyIDSource_34);
        NestedParties_NoNestedPartyIDs_34.insert(NestedPartyIDSource_34.getString());
        FIX::NestedPartyRole NestedPartyRole_34(1366232939);
        noNestedPartyIDs_0_0_2_1.set(NestedPartyRole_34);
        NestedParties_NoNestedPartyIDs_34.insert(NestedPartyRole_34.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_34);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_68;
          FIX::NestedPartySubID NestedPartySubID_68("STRING_444960246");
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubID_68);
          NstdPtysSubGrp_NoNestedPartySubIDs_68.insert(NestedPartySubID_68.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_68(515030698);
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubIDType_68);
          NstdPtysSubGrp_NoNestedPartySubIDs_68.insert(NestedPartySubIDType_68.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_68);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_69;
          FIX::NestedPartySubID NestedPartySubID_69("STRING_26585039");
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubID_69);
          NstdPtysSubGrp_NoNestedPartySubIDs_69.insert(NestedPartySubID_69.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_69(1225616720);
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubIDType_69);
          NstdPtysSubGrp_NoNestedPartySubIDs_69.insert(NestedPartySubIDType_69.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_69);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_1);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_35;
        FIX::NestedPartyID NestedPartyID_35("STRING_750069188");
        noNestedPartyIDs_0_0_2_2.set(NestedPartyID_35);
        NestedParties_NoNestedPartyIDs_35.insert(NestedPartyID_35.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_35('1');
        noNestedPartyIDs_0_0_2_2.set(NestedPartyIDSource_35);
        NestedParties_NoNestedPartyIDs_35.insert(NestedPartyIDSource_35.getString());
        FIX::NestedPartyRole NestedPartyRole_35(285756024);
        noNestedPartyIDs_0_0_2_2.set(NestedPartyRole_35);
        NestedParties_NoNestedPartyIDs_35.insert(NestedPartyRole_35.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_35);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_70;
          FIX::NestedPartySubID NestedPartySubID_70("STRING_816465207");
          noNestedPartySubIDs_0_0_2_3_0.set(NestedPartySubID_70);
          NstdPtysSubGrp_NoNestedPartySubIDs_70.insert(NestedPartySubID_70.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_70(1633211691);
          noNestedPartySubIDs_0_0_2_3_0.set(NestedPartySubIDType_70);
          NstdPtysSubGrp_NoNestedPartySubIDs_70.insert(NestedPartySubIDType_70.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_70);

          noNestedPartyIDs_0_0_2_2.addGroup(noNestedPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_71;
          FIX::NestedPartySubID NestedPartySubID_71("STRING_1055924429");
          noNestedPartySubIDs_0_0_2_3_1.set(NestedPartySubID_71);
          NstdPtysSubGrp_NoNestedPartySubIDs_71.insert(NestedPartySubID_71.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_71(1321570747);
          noNestedPartySubIDs_0_0_2_3_1.set(NestedPartySubIDType_71);
          NstdPtysSubGrp_NoNestedPartySubIDs_71.insert(NestedPartySubIDType_71.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_71);

          noNestedPartyIDs_0_0_2_2.addGroup(noNestedPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_72;
          FIX::NestedPartySubID NestedPartySubID_72("STRING_527120362");
          noNestedPartySubIDs_0_0_2_3_2.set(NestedPartySubID_72);
          NstdPtysSubGrp_NoNestedPartySubIDs_72.insert(NestedPartySubID_72.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_72(409901311);
          noNestedPartySubIDs_0_0_2_3_2.set(NestedPartySubIDType_72);
          NstdPtysSubGrp_NoNestedPartySubIDs_72.insert(NestedPartySubIDType_72.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_72);

          noNestedPartyIDs_0_0_2_2.addGroup(noNestedPartySubIDs_0_0_2_3_2);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_0_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_1;
      FIX::AllocAccount AllocAccount_11("STRING_427990054");
      noAllocs_0_1_1.set(AllocAccount_11);
      PreAllocGrp_NoAllocs_1.insert(AllocAccount_11.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_11(1984500220);
      noAllocs_0_1_1.set(AllocAcctIDSource_11);
      PreAllocGrp_NoAllocs_1.insert(AllocAcctIDSource_11.getString());
      FIX::AllocQty AllocQty_10;
      AllocQty_10.setString("2280347");
      noAllocs_0_1_1.set(AllocQty_10);
      PreAllocGrp_NoAllocs_1.insert(AllocQty_10.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_6("USD");
      noAllocs_0_1_1.set(AllocSettlCurrency_6);
      PreAllocGrp_NoAllocs_1.insert(AllocSettlCurrency_6.getString());
      FIX::IndividualAllocID IndividualAllocID_11("STRING_2077621607");
      noAllocs_0_1_1.set(IndividualAllocID_11);
      PreAllocGrp_NoAllocs_1.insert(IndividualAllocID_11.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_1);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_36;
        FIX::NestedPartyID NestedPartyID_36("STRING_2072312890");
        noNestedPartyIDs_0_1_2_0.set(NestedPartyID_36);
        NestedParties_NoNestedPartyIDs_36.insert(NestedPartyID_36.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_36('1');
        noNestedPartyIDs_0_1_2_0.set(NestedPartyIDSource_36);
        NestedParties_NoNestedPartyIDs_36.insert(NestedPartyIDSource_36.getString());
        FIX::NestedPartyRole NestedPartyRole_36(1016885146);
        noNestedPartyIDs_0_1_2_0.set(NestedPartyRole_36);
        NestedParties_NoNestedPartyIDs_36.insert(NestedPartyRole_36.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_36);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_73;
          FIX::NestedPartySubID NestedPartySubID_73("STRING_1741020805");
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubID_73);
          NstdPtysSubGrp_NoNestedPartySubIDs_73.insert(NestedPartySubID_73.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_73(13623058);
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubIDType_73);
          NstdPtysSubGrp_NoNestedPartySubIDs_73.insert(NestedPartySubIDType_73.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_73);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_74;
          FIX::NestedPartySubID NestedPartySubID_74("STRING_530141547");
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubID_74);
          NstdPtysSubGrp_NoNestedPartySubIDs_74.insert(NestedPartySubID_74.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_74(641896465);
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubIDType_74);
          NstdPtysSubGrp_NoNestedPartySubIDs_74.insert(NestedPartySubIDType_74.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_74);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_75;
          FIX::NestedPartySubID NestedPartySubID_75("STRING_1379855997");
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubID_75);
          NstdPtysSubGrp_NoNestedPartySubIDs_75.insert(NestedPartySubID_75.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_75(1385199256);
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubIDType_75);
          NstdPtysSubGrp_NoNestedPartySubIDs_75.insert(NestedPartySubIDType_75.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_75);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_2);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_37;
        FIX::NestedPartyID NestedPartyID_37("STRING_1086856711");
        noNestedPartyIDs_0_1_2_1.set(NestedPartyID_37);
        NestedParties_NoNestedPartyIDs_37.insert(NestedPartyID_37.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_37('1');
        noNestedPartyIDs_0_1_2_1.set(NestedPartyIDSource_37);
        NestedParties_NoNestedPartyIDs_37.insert(NestedPartyIDSource_37.getString());
        FIX::NestedPartyRole NestedPartyRole_37(1411784295);
        noNestedPartyIDs_0_1_2_1.set(NestedPartyRole_37);
        NestedParties_NoNestedPartyIDs_37.insert(NestedPartyRole_37.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_37);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_76;
          FIX::NestedPartySubID NestedPartySubID_76("STRING_497472236");
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubID_76);
          NstdPtysSubGrp_NoNestedPartySubIDs_76.insert(NestedPartySubID_76.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_76(674328207);
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubIDType_76);
          NstdPtysSubGrp_NoNestedPartySubIDs_76.insert(NestedPartySubIDType_76.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_76);

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_77;
          FIX::NestedPartySubID NestedPartySubID_77("STRING_450745808");
          noNestedPartySubIDs_0_1_1_3_1.set(NestedPartySubID_77);
          NstdPtysSubGrp_NoNestedPartySubIDs_77.insert(NestedPartySubID_77.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_77(1194239587);
          noNestedPartySubIDs_0_1_1_3_1.set(NestedPartySubIDType_77);
          NstdPtysSubGrp_NoNestedPartySubIDs_77.insert(NestedPartySubIDType_77.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_77);

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_78;
          FIX::NestedPartySubID NestedPartySubID_78("STRING_1490793414");
          noNestedPartySubIDs_0_1_1_3_2.set(NestedPartySubID_78);
          NstdPtysSubGrp_NoNestedPartySubIDs_78.insert(NestedPartySubID_78.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_78(2083957499);
          noNestedPartySubIDs_0_1_1_3_2.set(NestedPartySubIDType_78);
          NstdPtysSubGrp_NoNestedPartySubIDs_78.insert(NestedPartySubIDType_78.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_78);

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_2);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_1);
      }
      noSides_0_0.addGroup(noAllocs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_0_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_2;
      FIX::AllocAccount AllocAccount_12("STRING_102680368");
      noAllocs_0_1_2.set(AllocAccount_12);
      PreAllocGrp_NoAllocs_2.insert(AllocAccount_12.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_12(664880514);
      noAllocs_0_1_2.set(AllocAcctIDSource_12);
      PreAllocGrp_NoAllocs_2.insert(AllocAcctIDSource_12.getString());
      FIX::AllocQty AllocQty_11;
      AllocQty_11.setString("4635942");
      noAllocs_0_1_2.set(AllocQty_11);
      PreAllocGrp_NoAllocs_2.insert(AllocQty_11.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_7("JPY");
      noAllocs_0_1_2.set(AllocSettlCurrency_7);
      PreAllocGrp_NoAllocs_2.insert(AllocSettlCurrency_7.getString());
      FIX::IndividualAllocID IndividualAllocID_12("STRING_300610786");
      noAllocs_0_1_2.set(IndividualAllocID_12);
      PreAllocGrp_NoAllocs_2.insert(IndividualAllocID_12.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_2);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_38;
        FIX::NestedPartyID NestedPartyID_38("STRING_1115182345");
        noNestedPartyIDs_0_2_2_0.set(NestedPartyID_38);
        NestedParties_NoNestedPartyIDs_38.insert(NestedPartyID_38.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_38('4');
        noNestedPartyIDs_0_2_2_0.set(NestedPartyIDSource_38);
        NestedParties_NoNestedPartyIDs_38.insert(NestedPartyIDSource_38.getString());
        FIX::NestedPartyRole NestedPartyRole_38(670754381);
        noNestedPartyIDs_0_2_2_0.set(NestedPartyRole_38);
        NestedParties_NoNestedPartyIDs_38.insert(NestedPartyRole_38.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_38);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_79;
          FIX::NestedPartySubID NestedPartySubID_79("STRING_376860612");
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubID_79);
          NstdPtysSubGrp_NoNestedPartySubIDs_79.insert(NestedPartySubID_79.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_79(1677952563);
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubIDType_79);
          NstdPtysSubGrp_NoNestedPartySubIDs_79.insert(NestedPartySubIDType_79.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_79);

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_80;
          FIX::NestedPartySubID NestedPartySubID_80("STRING_129482369");
          noNestedPartySubIDs_0_2_0_3_1.set(NestedPartySubID_80);
          NstdPtysSubGrp_NoNestedPartySubIDs_80.insert(NestedPartySubID_80.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_80(1086692657);
          noNestedPartySubIDs_0_2_0_3_1.set(NestedPartySubIDType_80);
          NstdPtysSubGrp_NoNestedPartySubIDs_80.insert(NestedPartySubIDType_80.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_80);

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_81;
          FIX::NestedPartySubID NestedPartySubID_81("STRING_1271489720");
          noNestedPartySubIDs_0_2_0_3_2.set(NestedPartySubID_81);
          NstdPtysSubGrp_NoNestedPartySubIDs_81.insert(NestedPartySubID_81.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_81(143105427);
          noNestedPartySubIDs_0_2_0_3_2.set(NestedPartySubIDType_81);
          NstdPtysSubGrp_NoNestedPartySubIDs_81.insert(NestedPartySubIDType_81.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_81);

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_2);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_39;
        FIX::NestedPartyID NestedPartyID_39("STRING_1616834204");
        noNestedPartyIDs_0_2_2_1.set(NestedPartyID_39);
        NestedParties_NoNestedPartyIDs_39.insert(NestedPartyID_39.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_39('1');
        noNestedPartyIDs_0_2_2_1.set(NestedPartyIDSource_39);
        NestedParties_NoNestedPartyIDs_39.insert(NestedPartyIDSource_39.getString());
        FIX::NestedPartyRole NestedPartyRole_39(1522961425);
        noNestedPartyIDs_0_2_2_1.set(NestedPartyRole_39);
        NestedParties_NoNestedPartyIDs_39.insert(NestedPartyRole_39.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_39);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_82;
          FIX::NestedPartySubID NestedPartySubID_82("STRING_852759249");
          noNestedPartySubIDs_0_2_1_3_0.set(NestedPartySubID_82);
          NstdPtysSubGrp_NoNestedPartySubIDs_82.insert(NestedPartySubID_82.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_82(1270364472);
          noNestedPartySubIDs_0_2_1_3_0.set(NestedPartySubIDType_82);
          NstdPtysSubGrp_NoNestedPartySubIDs_82.insert(NestedPartySubIDType_82.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_82);

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_83;
          FIX::NestedPartySubID NestedPartySubID_83("STRING_118850460");
          noNestedPartySubIDs_0_2_1_3_1.set(NestedPartySubID_83);
          NstdPtysSubGrp_NoNestedPartySubIDs_83.insert(NestedPartySubID_83.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_83(1017749033);
          noNestedPartySubIDs_0_2_1_3_1.set(NestedPartySubIDType_83);
          NstdPtysSubGrp_NoNestedPartySubIDs_83.insert(NestedPartySubIDType_83.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_83);

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_1);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_40;
        FIX::NestedPartyID NestedPartyID_40("STRING_1767836708");
        noNestedPartyIDs_0_2_2_2.set(NestedPartyID_40);
        NestedParties_NoNestedPartyIDs_40.insert(NestedPartyID_40.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_40('7');
        noNestedPartyIDs_0_2_2_2.set(NestedPartyIDSource_40);
        NestedParties_NoNestedPartyIDs_40.insert(NestedPartyIDSource_40.getString());
        FIX::NestedPartyRole NestedPartyRole_40(1468494842);
        noNestedPartyIDs_0_2_2_2.set(NestedPartyRole_40);
        NestedParties_NoNestedPartyIDs_40.insert(NestedPartyRole_40.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_40);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_84;
          FIX::NestedPartySubID NestedPartySubID_84("STRING_136488433");
          noNestedPartySubIDs_0_2_2_3_0.set(NestedPartySubID_84);
          NstdPtysSubGrp_NoNestedPartySubIDs_84.insert(NestedPartySubID_84.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_84(1404968693);
          noNestedPartySubIDs_0_2_2_3_0.set(NestedPartySubIDType_84);
          NstdPtysSubGrp_NoNestedPartySubIDs_84.insert(NestedPartySubIDType_84.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_84);

          noNestedPartyIDs_0_2_2_2.addGroup(noNestedPartySubIDs_0_2_2_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_85;
          FIX::NestedPartySubID NestedPartySubID_85("STRING_917273016");
          noNestedPartySubIDs_0_2_2_3_1.set(NestedPartySubID_85);
          NstdPtysSubGrp_NoNestedPartySubIDs_85.insert(NestedPartySubID_85.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_85(801368947);
          noNestedPartySubIDs_0_2_2_3_1.set(NestedPartySubIDType_85);
          NstdPtysSubGrp_NoNestedPartySubIDs_85.insert(NestedPartySubIDType_85.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_85);

          noNestedPartyIDs_0_2_2_2.addGroup(noNestedPartySubIDs_0_2_2_3_1);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_2);
      }
      noSides_0_0.addGroup(noAllocs_0_1_2);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSides noSides_0_1;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_1;
    FIX::Account Account_11("STRING_1868562907");
    noSides_0_1.set(Account_11);
    SideCrossOrdModGrp_NoSides_1.insert(Account_11.getString());
    FIX::AccountType AccountType_8(6);
    noSides_0_1.set(AccountType_8);
    SideCrossOrdModGrp_NoSides_1.insert(AccountType_8.getString());
    FIX::AcctIDSource AcctIDSource_4(1);
    noSides_0_1.set(AcctIDSource_4);
    SideCrossOrdModGrp_NoSides_1.insert(AcctIDSource_4.getString());
    FIX::AllocID AllocID_8("STRING_21690045");
    noSides_0_1.set(AllocID_8);
    SideCrossOrdModGrp_NoSides_1.insert(AllocID_8.getString());
    FIX::BookingType BookingType_4(0);
    noSides_0_1.set(BookingType_4);
    SideCrossOrdModGrp_NoSides_1.insert(BookingType_4.getString());
    FIX::BookingUnit BookingUnit_1('2');
    noSides_0_1.set(BookingUnit_1);
    SideCrossOrdModGrp_NoSides_1.insert(BookingUnit_1.getString());
    FIX::CashMargin CashMargin_1('2');
    noSides_0_1.set(CashMargin_1);
    SideCrossOrdModGrp_NoSides_1.insert(CashMargin_1.getString());
    FIX::ClOrdID ClOrdID_15("STRING_693741851");
    noSides_0_1.set(ClOrdID_15);
    SideCrossOrdModGrp_NoSides_1.insert(ClOrdID_15.getString());
    FIX::ClOrdLinkID ClOrdLinkID_1("STRING_2122019083");
    noSides_0_1.set(ClOrdLinkID_1);
    SideCrossOrdModGrp_NoSides_1.insert(ClOrdLinkID_1.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_6("STRING_3");
    noSides_0_1.set(ClearingFeeIndicator_6);
    SideCrossOrdModGrp_NoSides_1.insert(ClearingFeeIndicator_6.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_1(1);
    noSides_0_1.set(CoveredOrUncovered_1);
    SideCrossOrdModGrp_NoSides_1.insert(CoveredOrUncovered_1.getString());
    FIX::CustOrderCapacity CustOrderCapacity_4(1);
    noSides_0_1.set(CustOrderCapacity_4);
    SideCrossOrdModGrp_NoSides_1.insert(CustOrderCapacity_4.getString());
    FIX::DayBookingInst DayBookingInst_1('1');
    noSides_0_1.set(DayBookingInst_1);
    SideCrossOrdModGrp_NoSides_1.insert(DayBookingInst_1.getString());
    FIX::EncodedText EncodedText_26("DATA_1495700487");
    noSides_0_1.set(EncodedText_26);
    SideCrossOrdModGrp_NoSides_1.insert(EncodedText_26.getString());
    FIX::EncodedTextLen EncodedTextLen_26(247123232);
    noSides_0_1.set(EncodedTextLen_26);
    SideCrossOrdModGrp_NoSides_1.insert(EncodedTextLen_26.getString());
    FIX::ForexReq ForexReq_2(true);
    noSides_0_1.set(ForexReq_2);
    SideCrossOrdModGrp_NoSides_1.insert(ForexReq_2.getString());
    FIX::OrderCapacity OrderCapacity_2('W');
    noSides_0_1.set(OrderCapacity_2);
    SideCrossOrdModGrp_NoSides_1.insert(OrderCapacity_2.getString());
    FIX::OrderRestrictions OrderRestrictions_2("MULTIPLECHARVALUE_D");
    noSides_0_1.set(OrderRestrictions_2);
    SideCrossOrdModGrp_NoSides_1.insert(OrderRestrictions_2.getString());
    FIX::OrigClOrdID OrigClOrdID_1("STRING_113691406");
    noSides_0_1.set(OrigClOrdID_1);
    SideCrossOrdModGrp_NoSides_1.insert(OrigClOrdID_1.getString());
    FIX::PositionEffect PositionEffect_4('R');
    noSides_0_1.set(PositionEffect_4);
    SideCrossOrdModGrp_NoSides_1.insert(PositionEffect_4.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_1(false);
    noSides_0_1.set(PreTradeAnonymity_1);
    SideCrossOrdModGrp_NoSides_1.insert(PreTradeAnonymity_1.getString());
    FIX::PreallocMethod PreallocMethod_1('0');
    noSides_0_1.set(PreallocMethod_1);
    SideCrossOrdModGrp_NoSides_1.insert(PreallocMethod_1.getString());
    FIX::QtyType QtyType_12(0);
    noSides_0_1.set(QtyType_12);
    SideCrossOrdModGrp_NoSides_1.insert(QtyType_12.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_15("STRING_513318542");
    noSides_0_1.set(SecondaryClOrdID_15);
    SideCrossOrdModGrp_NoSides_1.insert(SecondaryClOrdID_15.getString());
    FIX::SettlCurrency SettlCurrency_7("USD");
    noSides_0_1.set(SettlCurrency_7);
    SideCrossOrdModGrp_NoSides_1.insert(SettlCurrency_7.getString());
    FIX::Side Side_16('6');
    noSides_0_1.set(Side_16);
    SideCrossOrdModGrp_NoSides_1.insert(Side_16.getString());
    FIX::SideComplianceID SideComplianceID_1("STRING_1162208967");
    noSides_0_1.set(SideComplianceID_1);
    SideCrossOrdModGrp_NoSides_1.insert(SideComplianceID_1.getString());
    FIX::SideTimeInForce SideTimeInForce_1(FIX::UTCTIMESTAMP(13, 34, 47, 21, 3, 2009));
    noSides_0_1.set(SideTimeInForce_1);
    SideCrossOrdModGrp_NoSides_1.insert(SideTimeInForce_1.getString());
    FIX::SolicitedFlag SolicitedFlag_1(false);
    noSides_0_1.set(SolicitedFlag_1);
    SideCrossOrdModGrp_NoSides_1.insert(SolicitedFlag_1.getString());
    FIX::Text Text_26("STRING_424788347");
    noSides_0_1.set(Text_26);
    SideCrossOrdModGrp_NoSides_1.insert(Text_26.getString());
    FIX::TradeDate TradeDate_10("LOCALMKTDATE_1927098268");
    noSides_0_1.set(TradeDate_10);
    SideCrossOrdModGrp_NoSides_1.insert(TradeDate_10.getString());
    FIX::TradeOriginationDate TradeOriginationDate_4("LOCALMKTDATE_96800927");
    noSides_0_1.set(TradeOriginationDate_4);
    SideCrossOrdModGrp_NoSides_1.insert(TradeOriginationDate_4.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_1);

    // CommissionData
    multiset<string> CommissionData_10;
    FIX::CommCurrency CommCurrency_10("JPY");
    noSides_0_1.set(CommCurrency_10);
    CommissionData_10.insert(CommCurrency_10.getString());
    FIX::CommType CommType_10('1');
    noSides_0_1.set(CommType_10);
    CommissionData_10.insert(CommType_10.getString());
    FIX::Commission Commission_10;
    Commission_10.setString("5033415");
    noSides_0_1.set(Commission_10);
    CommissionData_10.insert(Commission_10.getString());
    FIX::FundRenewWaiv FundRenewWaiv_10('N');
    noSides_0_1.set(FundRenewWaiv_10);
    CommissionData_10.insert(FundRenewWaiv_10.getString());
    all_values.push_back(CommissionData_10);

    // OrderQtyData
    multiset<string> OrderQtyData_1;
    FIX::CashOrderQty CashOrderQty_1;
    CashOrderQty_1.setString("18167121");
    noSides_0_1.set(CashOrderQty_1);
    OrderQtyData_1.insert(CashOrderQty_1.getString());
    FIX::OrderPercent OrderPercent_1;
    OrderPercent_1.setString("48.190000");
    noSides_0_1.set(OrderPercent_1);
    OrderQtyData_1.insert(OrderPercent_1.getString());
    FIX::OrderQty OrderQty_9;
    OrderQty_9.setString("18266129");
    noSides_0_1.set(OrderQty_9);
    OrderQtyData_1.insert(OrderQty_9.getString());
    FIX::RoundingDirection RoundingDirection_1('1');
    noSides_0_1.set(RoundingDirection_1);
    OrderQtyData_1.insert(RoundingDirection_1.getString());
    FIX::RoundingModulus RoundingModulus_1;
    RoundingModulus_1.setString("3730658");
    noSides_0_1.set(RoundingModulus_1);
    OrderQtyData_1.insert(RoundingModulus_1.getString());
    all_values.push_back(OrderQtyData_1);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_39;
      FIX::PartyID PartyID_39("STRING_897710186");
      noPartyIDs_1_1_0.set(PartyID_39);
      Parties_NoPartyIDs_39.insert(PartyID_39.getString());
      FIX::PartyIDSource PartyIDSource_39('E');
      noPartyIDs_1_1_0.set(PartyIDSource_39);
      Parties_NoPartyIDs_39.insert(PartyIDSource_39.getString());
      FIX::PartyRole PartyRole_39(14);
      noPartyIDs_1_1_0.set(PartyRole_39);
      Parties_NoPartyIDs_39.insert(PartyRole_39.getString());
      all_values.push_back(Parties_NoPartyIDs_39);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_79;
        FIX::PartySubID PartySubID_79("STRING_1779349852");
        noPartySubIDs_1_0_2_0.set(PartySubID_79);
        PtysSubGrp_NoPartySubIDs_79.insert(PartySubID_79.getString());
        FIX::PartySubIDType PartySubIDType_79(21);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_79);
        PtysSubGrp_NoPartySubIDs_79.insert(PartySubIDType_79.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_79);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_80;
        FIX::PartySubID PartySubID_80("STRING_40493053");
        noPartySubIDs_1_0_2_1.set(PartySubID_80);
        PtysSubGrp_NoPartySubIDs_80.insert(PartySubID_80.getString());
        FIX::PartySubIDType PartySubIDType_80(15);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_80);
        PtysSubGrp_NoPartySubIDs_80.insert(PartySubIDType_80.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_80);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_81;
        FIX::PartySubID PartySubID_81("STRING_65808405");
        noPartySubIDs_1_0_2_2.set(PartySubID_81);
        PtysSubGrp_NoPartySubIDs_81.insert(PartySubID_81.getString());
        FIX::PartySubIDType PartySubIDType_81(20);
        noPartySubIDs_1_0_2_2.set(PartySubIDType_81);
        PtysSubGrp_NoPartySubIDs_81.insert(PartySubIDType_81.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_81);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_40;
      FIX::PartyID PartyID_40("STRING_1057477951");
      noPartyIDs_1_1_1.set(PartyID_40);
      Parties_NoPartyIDs_40.insert(PartyID_40.getString());
      FIX::PartyIDSource PartyIDSource_40('4');
      noPartyIDs_1_1_1.set(PartyIDSource_40);
      Parties_NoPartyIDs_40.insert(PartyIDSource_40.getString());
      FIX::PartyRole PartyRole_40(66);
      noPartyIDs_1_1_1.set(PartyRole_40);
      Parties_NoPartyIDs_40.insert(PartyRole_40.getString());
      all_values.push_back(Parties_NoPartyIDs_40);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_82;
        FIX::PartySubID PartySubID_82("STRING_1592236454");
        noPartySubIDs_1_1_2_0.set(PartySubID_82);
        PtysSubGrp_NoPartySubIDs_82.insert(PartySubID_82.getString());
        FIX::PartySubIDType PartySubIDType_82(33);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_82);
        PtysSubGrp_NoPartySubIDs_82.insert(PartySubIDType_82.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_82);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_1_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_3;
      FIX::AllocAccount AllocAccount_13("STRING_2017024802");
      noAllocs_1_1_0.set(AllocAccount_13);
      PreAllocGrp_NoAllocs_3.insert(AllocAccount_13.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_13(120811586);
      noAllocs_1_1_0.set(AllocAcctIDSource_13);
      PreAllocGrp_NoAllocs_3.insert(AllocAcctIDSource_13.getString());
      FIX::AllocQty AllocQty_12;
      AllocQty_12.setString("20848932");
      noAllocs_1_1_0.set(AllocQty_12);
      PreAllocGrp_NoAllocs_3.insert(AllocQty_12.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_8("USD");
      noAllocs_1_1_0.set(AllocSettlCurrency_8);
      PreAllocGrp_NoAllocs_3.insert(AllocSettlCurrency_8.getString());
      FIX::IndividualAllocID IndividualAllocID_13("STRING_258421253");
      noAllocs_1_1_0.set(IndividualAllocID_13);
      PreAllocGrp_NoAllocs_3.insert(IndividualAllocID_13.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_3);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_41;
        FIX::NestedPartyID NestedPartyID_41("STRING_1170995920");
        noNestedPartyIDs_1_0_2_0.set(NestedPartyID_41);
        NestedParties_NoNestedPartyIDs_41.insert(NestedPartyID_41.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_41('2');
        noNestedPartyIDs_1_0_2_0.set(NestedPartyIDSource_41);
        NestedParties_NoNestedPartyIDs_41.insert(NestedPartyIDSource_41.getString());
        FIX::NestedPartyRole NestedPartyRole_41(1522671344);
        noNestedPartyIDs_1_0_2_0.set(NestedPartyRole_41);
        NestedParties_NoNestedPartyIDs_41.insert(NestedPartyRole_41.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_41);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_86;
          FIX::NestedPartySubID NestedPartySubID_86("STRING_858481345");
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubID_86);
          NstdPtysSubGrp_NoNestedPartySubIDs_86.insert(NestedPartySubID_86.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_86(1895737172);
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubIDType_86);
          NstdPtysSubGrp_NoNestedPartySubIDs_86.insert(NestedPartySubIDType_86.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_86);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_87;
          FIX::NestedPartySubID NestedPartySubID_87("STRING_642945887");
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubID_87);
          NstdPtysSubGrp_NoNestedPartySubIDs_87.insert(NestedPartySubID_87.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_87(1756191531);
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubIDType_87);
          NstdPtysSubGrp_NoNestedPartySubIDs_87.insert(NestedPartySubIDType_87.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_87);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_88;
          FIX::NestedPartySubID NestedPartySubID_88("STRING_1014284834");
          noNestedPartySubIDs_1_0_0_3_2.set(NestedPartySubID_88);
          NstdPtysSubGrp_NoNestedPartySubIDs_88.insert(NestedPartySubID_88.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_88(668308440);
          noNestedPartySubIDs_1_0_0_3_2.set(NestedPartySubIDType_88);
          NstdPtysSubGrp_NoNestedPartySubIDs_88.insert(NestedPartySubIDType_88.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_88);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_2);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_42;
        FIX::NestedPartyID NestedPartyID_42("STRING_1491045730");
        noNestedPartyIDs_1_0_2_1.set(NestedPartyID_42);
        NestedParties_NoNestedPartyIDs_42.insert(NestedPartyID_42.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_42('6');
        noNestedPartyIDs_1_0_2_1.set(NestedPartyIDSource_42);
        NestedParties_NoNestedPartyIDs_42.insert(NestedPartyIDSource_42.getString());
        FIX::NestedPartyRole NestedPartyRole_42(1719391526);
        noNestedPartyIDs_1_0_2_1.set(NestedPartyRole_42);
        NestedParties_NoNestedPartyIDs_42.insert(NestedPartyRole_42.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_42);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_89;
          FIX::NestedPartySubID NestedPartySubID_89("STRING_1605928432");
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubID_89);
          NstdPtysSubGrp_NoNestedPartySubIDs_89.insert(NestedPartySubID_89.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_89(1785199932);
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubIDType_89);
          NstdPtysSubGrp_NoNestedPartySubIDs_89.insert(NestedPartySubIDType_89.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_89);

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_90;
          FIX::NestedPartySubID NestedPartySubID_90("STRING_1135155736");
          noNestedPartySubIDs_1_0_1_3_1.set(NestedPartySubID_90);
          NstdPtysSubGrp_NoNestedPartySubIDs_90.insert(NestedPartySubID_90.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_90(515922735);
          noNestedPartySubIDs_1_0_1_3_1.set(NestedPartySubIDType_90);
          NstdPtysSubGrp_NoNestedPartySubIDs_90.insert(NestedPartySubIDType_90.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_90);

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_91;
          FIX::NestedPartySubID NestedPartySubID_91("STRING_1667102604");
          noNestedPartySubIDs_1_0_1_3_2.set(NestedPartySubID_91);
          NstdPtysSubGrp_NoNestedPartySubIDs_91.insert(NestedPartySubID_91.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_91(22975848);
          noNestedPartySubIDs_1_0_1_3_2.set(NestedPartySubIDType_91);
          NstdPtysSubGrp_NoNestedPartySubIDs_91.insert(NestedPartySubIDType_91.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_91);

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_2);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_43;
        FIX::NestedPartyID NestedPartyID_43("STRING_953472291");
        noNestedPartyIDs_1_0_2_2.set(NestedPartyID_43);
        NestedParties_NoNestedPartyIDs_43.insert(NestedPartyID_43.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_43('1');
        noNestedPartyIDs_1_0_2_2.set(NestedPartyIDSource_43);
        NestedParties_NoNestedPartyIDs_43.insert(NestedPartyIDSource_43.getString());
        FIX::NestedPartyRole NestedPartyRole_43(364172814);
        noNestedPartyIDs_1_0_2_2.set(NestedPartyRole_43);
        NestedParties_NoNestedPartyIDs_43.insert(NestedPartyRole_43.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_43);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_92;
          FIX::NestedPartySubID NestedPartySubID_92("STRING_981396564");
          noNestedPartySubIDs_1_0_2_3_0.set(NestedPartySubID_92);
          NstdPtysSubGrp_NoNestedPartySubIDs_92.insert(NestedPartySubID_92.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_92(484984400);
          noNestedPartySubIDs_1_0_2_3_0.set(NestedPartySubIDType_92);
          NstdPtysSubGrp_NoNestedPartySubIDs_92.insert(NestedPartySubIDType_92.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_92);

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_0);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noAllocs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_1_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_4;
      FIX::AllocAccount AllocAccount_14("STRING_731490482");
      noAllocs_1_1_1.set(AllocAccount_14);
      PreAllocGrp_NoAllocs_4.insert(AllocAccount_14.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_14(1250261501);
      noAllocs_1_1_1.set(AllocAcctIDSource_14);
      PreAllocGrp_NoAllocs_4.insert(AllocAcctIDSource_14.getString());
      FIX::AllocQty AllocQty_13;
      AllocQty_13.setString("12359926");
      noAllocs_1_1_1.set(AllocQty_13);
      PreAllocGrp_NoAllocs_4.insert(AllocQty_13.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_9("GBP");
      noAllocs_1_1_1.set(AllocSettlCurrency_9);
      PreAllocGrp_NoAllocs_4.insert(AllocSettlCurrency_9.getString());
      FIX::IndividualAllocID IndividualAllocID_14("STRING_259504907");
      noAllocs_1_1_1.set(IndividualAllocID_14);
      PreAllocGrp_NoAllocs_4.insert(IndividualAllocID_14.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_4);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_44;
        FIX::NestedPartyID NestedPartyID_44("STRING_1397655722");
        noNestedPartyIDs_1_1_2_0.set(NestedPartyID_44);
        NestedParties_NoNestedPartyIDs_44.insert(NestedPartyID_44.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_44('1');
        noNestedPartyIDs_1_1_2_0.set(NestedPartyIDSource_44);
        NestedParties_NoNestedPartyIDs_44.insert(NestedPartyIDSource_44.getString());
        FIX::NestedPartyRole NestedPartyRole_44(1776042867);
        noNestedPartyIDs_1_1_2_0.set(NestedPartyRole_44);
        NestedParties_NoNestedPartyIDs_44.insert(NestedPartyRole_44.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_44);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_93;
          FIX::NestedPartySubID NestedPartySubID_93("STRING_1752575994");
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubID_93);
          NstdPtysSubGrp_NoNestedPartySubIDs_93.insert(NestedPartySubID_93.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_93(1384750751);
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubIDType_93);
          NstdPtysSubGrp_NoNestedPartySubIDs_93.insert(NestedPartySubIDType_93.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_93);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_94;
          FIX::NestedPartySubID NestedPartySubID_94("STRING_12710433");
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubID_94);
          NstdPtysSubGrp_NoNestedPartySubIDs_94.insert(NestedPartySubID_94.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_94(273400786);
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubIDType_94);
          NstdPtysSubGrp_NoNestedPartySubIDs_94.insert(NestedPartySubIDType_94.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_94);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_95;
          FIX::NestedPartySubID NestedPartySubID_95("STRING_728312833");
          noNestedPartySubIDs_1_1_0_3_2.set(NestedPartySubID_95);
          NstdPtysSubGrp_NoNestedPartySubIDs_95.insert(NestedPartySubID_95.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_95(658861471);
          noNestedPartySubIDs_1_1_0_3_2.set(NestedPartySubIDType_95);
          NstdPtysSubGrp_NoNestedPartySubIDs_95.insert(NestedPartySubIDType_95.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_95);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_2);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_45;
        FIX::NestedPartyID NestedPartyID_45("STRING_1992792313");
        noNestedPartyIDs_1_1_2_1.set(NestedPartyID_45);
        NestedParties_NoNestedPartyIDs_45.insert(NestedPartyID_45.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_45('1');
        noNestedPartyIDs_1_1_2_1.set(NestedPartyIDSource_45);
        NestedParties_NoNestedPartyIDs_45.insert(NestedPartyIDSource_45.getString());
        FIX::NestedPartyRole NestedPartyRole_45(117306255);
        noNestedPartyIDs_1_1_2_1.set(NestedPartyRole_45);
        NestedParties_NoNestedPartyIDs_45.insert(NestedPartyRole_45.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_45);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_96;
          FIX::NestedPartySubID NestedPartySubID_96("STRING_1247523704");
          noNestedPartySubIDs_1_1_1_3_0.set(NestedPartySubID_96);
          NstdPtysSubGrp_NoNestedPartySubIDs_96.insert(NestedPartySubID_96.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_96(633228990);
          noNestedPartySubIDs_1_1_1_3_0.set(NestedPartySubIDType_96);
          NstdPtysSubGrp_NoNestedPartySubIDs_96.insert(NestedPartySubIDType_96.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_96);

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_97;
          FIX::NestedPartySubID NestedPartySubID_97("STRING_1150127553");
          noNestedPartySubIDs_1_1_1_3_1.set(NestedPartySubID_97);
          NstdPtysSubGrp_NoNestedPartySubIDs_97.insert(NestedPartySubID_97.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_97(1270499552);
          noNestedPartySubIDs_1_1_1_3_1.set(NestedPartySubIDType_97);
          NstdPtysSubGrp_NoNestedPartySubIDs_97.insert(NestedPartySubIDType_97.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_97);

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_98;
          FIX::NestedPartySubID NestedPartySubID_98("STRING_1586701282");
          noNestedPartySubIDs_1_1_1_3_2.set(NestedPartySubID_98);
          NstdPtysSubGrp_NoNestedPartySubIDs_98.insert(NestedPartySubID_98.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_98(114499315);
          noNestedPartySubIDs_1_1_1_3_2.set(NestedPartySubIDType_98);
          NstdPtysSubGrp_NoNestedPartySubIDs_98.insert(NestedPartySubIDType_98.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_98);

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_2);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_46;
        FIX::NestedPartyID NestedPartyID_46("STRING_1634672366");
        noNestedPartyIDs_1_1_2_2.set(NestedPartyID_46);
        NestedParties_NoNestedPartyIDs_46.insert(NestedPartyID_46.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_46('2');
        noNestedPartyIDs_1_1_2_2.set(NestedPartyIDSource_46);
        NestedParties_NoNestedPartyIDs_46.insert(NestedPartyIDSource_46.getString());
        FIX::NestedPartyRole NestedPartyRole_46(1095895880);
        noNestedPartyIDs_1_1_2_2.set(NestedPartyRole_46);
        NestedParties_NoNestedPartyIDs_46.insert(NestedPartyRole_46.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_46);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_99;
          FIX::NestedPartySubID NestedPartySubID_99("STRING_964789040");
          noNestedPartySubIDs_1_1_2_3_0.set(NestedPartySubID_99);
          NstdPtysSubGrp_NoNestedPartySubIDs_99.insert(NestedPartySubID_99.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_99(198673733);
          noNestedPartySubIDs_1_1_2_3_0.set(NestedPartySubIDType_99);
          NstdPtysSubGrp_NoNestedPartySubIDs_99.insert(NestedPartySubIDType_99.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_99);

          noNestedPartyIDs_1_1_2_2.addGroup(noNestedPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_100;
          FIX::NestedPartySubID NestedPartySubID_100("STRING_1208165753");
          noNestedPartySubIDs_1_1_2_3_1.set(NestedPartySubID_100);
          NstdPtysSubGrp_NoNestedPartySubIDs_100.insert(NestedPartySubID_100.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_100(1954700775);
          noNestedPartySubIDs_1_1_2_3_1.set(NestedPartySubIDType_100);
          NstdPtysSubGrp_NoNestedPartySubIDs_100.insert(NestedPartySubIDType_100.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_100);

          noNestedPartyIDs_1_1_2_2.addGroup(noNestedPartySubIDs_1_1_2_3_1);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_2);
      }
      noSides_0_1.addGroup(noAllocs_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_1_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_5;
      FIX::AllocAccount AllocAccount_15("STRING_73658111");
      noAllocs_1_1_2.set(AllocAccount_15);
      PreAllocGrp_NoAllocs_5.insert(AllocAccount_15.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_15(1467670660);
      noAllocs_1_1_2.set(AllocAcctIDSource_15);
      PreAllocGrp_NoAllocs_5.insert(AllocAcctIDSource_15.getString());
      FIX::AllocQty AllocQty_14;
      AllocQty_14.setString("7247786");
      noAllocs_1_1_2.set(AllocQty_14);
      PreAllocGrp_NoAllocs_5.insert(AllocQty_14.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_10("CHF");
      noAllocs_1_1_2.set(AllocSettlCurrency_10);
      PreAllocGrp_NoAllocs_5.insert(AllocSettlCurrency_10.getString());
      FIX::IndividualAllocID IndividualAllocID_15("STRING_353337869");
      noAllocs_1_1_2.set(IndividualAllocID_15);
      PreAllocGrp_NoAllocs_5.insert(IndividualAllocID_15.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_5);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_47;
        FIX::NestedPartyID NestedPartyID_47("STRING_34909466");
        noNestedPartyIDs_1_2_2_0.set(NestedPartyID_47);
        NestedParties_NoNestedPartyIDs_47.insert(NestedPartyID_47.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_47('1');
        noNestedPartyIDs_1_2_2_0.set(NestedPartyIDSource_47);
        NestedParties_NoNestedPartyIDs_47.insert(NestedPartyIDSource_47.getString());
        FIX::NestedPartyRole NestedPartyRole_47(482449865);
        noNestedPartyIDs_1_2_2_0.set(NestedPartyRole_47);
        NestedParties_NoNestedPartyIDs_47.insert(NestedPartyRole_47.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_47);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_101;
          FIX::NestedPartySubID NestedPartySubID_101("STRING_318917805");
          noNestedPartySubIDs_1_2_0_3_0.set(NestedPartySubID_101);
          NstdPtysSubGrp_NoNestedPartySubIDs_101.insert(NestedPartySubID_101.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_101(1141311336);
          noNestedPartySubIDs_1_2_0_3_0.set(NestedPartySubIDType_101);
          NstdPtysSubGrp_NoNestedPartySubIDs_101.insert(NestedPartySubIDType_101.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_101);

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_0);
        }
        noAllocs_1_1_2.addGroup(noNestedPartyIDs_1_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_48;
        FIX::NestedPartyID NestedPartyID_48("STRING_153618917");
        noNestedPartyIDs_1_2_2_1.set(NestedPartyID_48);
        NestedParties_NoNestedPartyIDs_48.insert(NestedPartyID_48.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_48('4');
        noNestedPartyIDs_1_2_2_1.set(NestedPartyIDSource_48);
        NestedParties_NoNestedPartyIDs_48.insert(NestedPartyIDSource_48.getString());
        FIX::NestedPartyRole NestedPartyRole_48(1258617592);
        noNestedPartyIDs_1_2_2_1.set(NestedPartyRole_48);
        NestedParties_NoNestedPartyIDs_48.insert(NestedPartyRole_48.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_48);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_102;
          FIX::NestedPartySubID NestedPartySubID_102("STRING_1678809477");
          noNestedPartySubIDs_1_2_1_3_0.set(NestedPartySubID_102);
          NstdPtysSubGrp_NoNestedPartySubIDs_102.insert(NestedPartySubID_102.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_102(1891846582);
          noNestedPartySubIDs_1_2_1_3_0.set(NestedPartySubIDType_102);
          NstdPtysSubGrp_NoNestedPartySubIDs_102.insert(NestedPartySubIDType_102.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_102);

          noNestedPartyIDs_1_2_2_1.addGroup(noNestedPartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_103;
          FIX::NestedPartySubID NestedPartySubID_103("STRING_786771419");
          noNestedPartySubIDs_1_2_1_3_1.set(NestedPartySubID_103);
          NstdPtysSubGrp_NoNestedPartySubIDs_103.insert(NestedPartySubID_103.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_103(801825381);
          noNestedPartySubIDs_1_2_1_3_1.set(NestedPartySubIDType_103);
          NstdPtysSubGrp_NoNestedPartySubIDs_103.insert(NestedPartySubIDType_103.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_103);

          noNestedPartyIDs_1_2_2_1.addGroup(noNestedPartySubIDs_1_2_1_3_1);
        }
        noAllocs_1_1_2.addGroup(noNestedPartyIDs_1_2_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_49;
        FIX::NestedPartyID NestedPartyID_49("STRING_1331064216");
        noNestedPartyIDs_1_2_2_2.set(NestedPartyID_49);
        NestedParties_NoNestedPartyIDs_49.insert(NestedPartyID_49.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_49('9');
        noNestedPartyIDs_1_2_2_2.set(NestedPartyIDSource_49);
        NestedParties_NoNestedPartyIDs_49.insert(NestedPartyIDSource_49.getString());
        FIX::NestedPartyRole NestedPartyRole_49(289014100);
        noNestedPartyIDs_1_2_2_2.set(NestedPartyRole_49);
        NestedParties_NoNestedPartyIDs_49.insert(NestedPartyRole_49.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_49);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_104;
          FIX::NestedPartySubID NestedPartySubID_104("STRING_1997166615");
          noNestedPartySubIDs_1_2_2_3_0.set(NestedPartySubID_104);
          NstdPtysSubGrp_NoNestedPartySubIDs_104.insert(NestedPartySubID_104.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_104(261187218);
          noNestedPartySubIDs_1_2_2_3_0.set(NestedPartySubIDType_104);
          NstdPtysSubGrp_NoNestedPartySubIDs_104.insert(NestedPartySubIDType_104.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_104);

          noNestedPartyIDs_1_2_2_2.addGroup(noNestedPartySubIDs_1_2_2_3_0);
        }
        noAllocs_1_1_2.addGroup(noNestedPartyIDs_1_2_2_2);
      }
      noSides_0_1.addGroup(noAllocs_1_1_2);
    }
    msg.addGroup(noSides_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_9;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_9("USD");
  msg.set(BenchmarkCurveCurrency_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkCurveCurrency_9.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_9("STRING_Treasury");
  msg.set(BenchmarkCurveName_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkCurveName_9.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_9("STRING_188885293");
  msg.set(BenchmarkCurvePoint_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkCurvePoint_9.getString());
  FIX::BenchmarkPrice BenchmarkPrice_9;
  BenchmarkPrice_9.setString("1220148");
  msg.set(BenchmarkPrice_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkPrice_9.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_9(789539983);
  msg.set(BenchmarkPriceType_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkPriceType_9.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_9("STRING_913663943");
  msg.set(BenchmarkSecurityID_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkSecurityID_9.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_9("STRING_1593328645");
  msg.set(BenchmarkSecurityIDSource_9);
  SpreadOrBenchmarkCurveData_9.insert(BenchmarkSecurityIDSource_9.getString());
  FIX::Spread Spread_9;
  Spread_9.setString("12193571");
  msg.set(Spread_9);
  SpreadOrBenchmarkCurveData_9.insert(Spread_9.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_9);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_17;
    FIX::StipulationType StipulationType_17("STRING_PPC");
    noStipulations_0_0.set(StipulationType_17);
    Stipulations_NoStipulations_17.insert(StipulationType_17.getString());
    FIX::StipulationValue StipulationValue_17("STRING_1254266569");
    noStipulations_0_0.set(StipulationValue_17);
    Stipulations_NoStipulations_17.insert(StipulationValue_17.getString());
    all_values.push_back(Stipulations_NoStipulations_17);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_18;
    FIX::StipulationType StipulationType_18("STRING_ORDRINCR");
    noStipulations_0_1.set(StipulationType_18);
    Stipulations_NoStipulations_18.insert(StipulationType_18.getString());
    FIX::StipulationValue StipulationValue_18("STRING_398034294");
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
    FIX::StrategyParameterName StrategyParameterName_0("STRING_1176524589");
    noStrategyParameters_0_0.set(StrategyParameterName_0);
    StrategyParametersGrp_NoStrategyParameters_0.insert(StrategyParameterName_0.getString());
    FIX::StrategyParameterType StrategyParameterType_0(25);
    noStrategyParameters_0_0.set(StrategyParameterType_0);
    StrategyParametersGrp_NoStrategyParameters_0.insert(StrategyParameterType_0.getString());
    FIX::StrategyParameterValue StrategyParameterValue_0("STRING_1716195739");
    noStrategyParameters_0_0.set(StrategyParameterValue_0);
    StrategyParametersGrp_NoStrategyParameters_0.insert(StrategyParameterValue_0.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_0);

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_1;
    FIX::StrategyParameterName StrategyParameterName_1("STRING_1607810362");
    noStrategyParameters_0_1.set(StrategyParameterName_1);
    StrategyParametersGrp_NoStrategyParameters_1.insert(StrategyParameterName_1.getString());
    FIX::StrategyParameterType StrategyParameterType_1(6);
    noStrategyParameters_0_1.set(StrategyParameterType_1);
    StrategyParametersGrp_NoStrategyParameters_1.insert(StrategyParameterType_1.getString());
    FIX::StrategyParameterValue StrategyParameterValue_1("STRING_1352839605");
    noStrategyParameters_0_1.set(StrategyParameterValue_1);
    StrategyParametersGrp_NoStrategyParameters_1.insert(StrategyParameterValue_1.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_1);

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_0;
    FIX::TradingSessionID TradingSessionID_15("STRING_6");
    noTradingSessions_0_0.set(TradingSessionID_15);
    TrdgSesGrp_NoTradingSessions_0.insert(TradingSessionID_15.getString());
    FIX::TradingSessionSubID TradingSessionSubID_15("STRING_7");
    noTradingSessions_0_0.set(TradingSessionSubID_15);
    TrdgSesGrp_NoTradingSessions_0.insert(TradingSessionSubID_15.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_0);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_1;
    FIX::TradingSessionID TradingSessionID_16("STRING_3");
    noTradingSessions_0_1.set(TradingSessionID_16);
    TrdgSesGrp_NoTradingSessions_1.insert(TradingSessionID_16.getString());
    FIX::TradingSessionSubID TradingSessionSubID_16("STRING_6");
    noTradingSessions_0_1.set(TradingSessionSubID_16);
    TrdgSesGrp_NoTradingSessions_1.insert(TradingSessionSubID_16.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_1);

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_2;
    FIX::TradingSessionID TradingSessionID_17("STRING_3");
    noTradingSessions_0_2.set(TradingSessionID_17);
    TrdgSesGrp_NoTradingSessions_2.insert(TradingSessionID_17.getString());
    FIX::TradingSessionSubID TradingSessionSubID_17("STRING_7");
    noTradingSessions_0_2.set(TradingSessionSubID_17);
    TrdgSesGrp_NoTradingSessions_2.insert(TradingSessionSubID_17.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_2);

    msg.addGroup(noTradingSessions_0_2);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_0;
  FIX::TriggerAction TriggerAction_0('2');
  msg.set(TriggerAction_0);
  TriggeringInstruction_0.insert(TriggerAction_0.getString());
  FIX::TriggerNewPrice TriggerNewPrice_0;
  TriggerNewPrice_0.setString("7430810");
  msg.set(TriggerNewPrice_0);
  TriggeringInstruction_0.insert(TriggerNewPrice_0.getString());
  FIX::TriggerNewQty TriggerNewQty_0;
  TriggerNewQty_0.setString("3436792");
  msg.set(TriggerNewQty_0);
  TriggeringInstruction_0.insert(TriggerNewQty_0.getString());
  FIX::TriggerOrderType TriggerOrderType_0('1');
  msg.set(TriggerOrderType_0);
  TriggeringInstruction_0.insert(TriggerOrderType_0.getString());
  FIX::TriggerPrice TriggerPrice_0;
  TriggerPrice_0.setString("7914377");
  msg.set(TriggerPrice_0);
  TriggeringInstruction_0.insert(TriggerPrice_0.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_0('U');
  msg.set(TriggerPriceDirection_0);
  TriggeringInstruction_0.insert(TriggerPriceDirection_0.getString());
  FIX::TriggerPriceType TriggerPriceType_0('6');
  msg.set(TriggerPriceType_0);
  TriggeringInstruction_0.insert(TriggerPriceType_0.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_0('3');
  msg.set(TriggerPriceTypeScope_0);
  TriggeringInstruction_0.insert(TriggerPriceTypeScope_0.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_0("STRING_455088550");
  msg.set(TriggerSecurityDesc_0);
  TriggeringInstruction_0.insert(TriggerSecurityDesc_0.getString());
  FIX::TriggerSecurityID TriggerSecurityID_0("STRING_479519606");
  msg.set(TriggerSecurityID_0);
  TriggeringInstruction_0.insert(TriggerSecurityID_0.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_0("STRING_359297589");
  msg.set(TriggerSecurityIDSource_0);
  TriggeringInstruction_0.insert(TriggerSecurityIDSource_0.getString());
  FIX::TriggerSymbol TriggerSymbol_0("STRING_1674445653");
  msg.set(TriggerSymbol_0);
  TriggeringInstruction_0.insert(TriggerSymbol_0.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_0("STRING_1746521418");
  msg.set(TriggerTradingSessionID_0);
  TriggeringInstruction_0.insert(TriggerTradingSessionID_0.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_0("STRING_274882018");
  msg.set(TriggerTradingSessionSubID_0);
  TriggeringInstruction_0.insert(TriggerTradingSessionSubID_0.getString());
  FIX::TriggerType TriggerType_0('3');
  msg.set(TriggerType_0);
  TriggeringInstruction_0.insert(TriggerType_0.getString());
  all_values.push_back(TriggeringInstruction_0);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_28;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_28("DATA_672916313");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingIssuer_28.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_28(196321747);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingIssuerLen_28.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_28("DATA_1633169143");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingSecurityDesc_28.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_28(64778296);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingSecurityDescLen_28.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_28;
    UnderlyingAdjustedQuantity_28.setString("19125174");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_28);
    UnderlyingInstrument_28.insert(UnderlyingAdjustedQuantity_28.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_28;
    UnderlyingAllocationPercent_28.setString("58.570000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_28);
    UnderlyingInstrument_28.insert(UnderlyingAllocationPercent_28.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_28;
    UnderlyingAttachmentPoint_28.setString("78.710000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_28);
    UnderlyingInstrument_28.insert(UnderlyingAttachmentPoint_28.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_28("STRING_1117873444");
    noUnderlyings_0_0.set(UnderlyingCFICode_28);
    UnderlyingInstrument_28.insert(UnderlyingCFICode_28.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_28("STRING_85148400");
    noUnderlyings_0_0.set(UnderlyingCPProgram_28);
    UnderlyingInstrument_28.insert(UnderlyingCPProgram_28.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_28("STRING_1110100380");
    noUnderlyings_0_0.set(UnderlyingCPRegType_28);
    UnderlyingInstrument_28.insert(UnderlyingCPRegType_28.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_28;
    UnderlyingCapValue_28.setString("11100008");
    noUnderlyings_0_0.set(UnderlyingCapValue_28);
    UnderlyingInstrument_28.insert(UnderlyingCapValue_28.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_28;
    UnderlyingCashAmount_28.setString("20261099");
    noUnderlyings_0_0.set(UnderlyingCashAmount_28);
    UnderlyingInstrument_28.insert(UnderlyingCashAmount_28.getString());
    FIX::UnderlyingCashType UnderlyingCashType_28("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_28);
    UnderlyingInstrument_28.insert(UnderlyingCashType_28.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_28;
    UnderlyingContractMultiplier_28.setString("20033989");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_28);
    UnderlyingInstrument_28.insert(UnderlyingContractMultiplier_28.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_28(2108601997);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_28);
    UnderlyingInstrument_28.insert(UnderlyingContractMultiplierUnit_28.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_28("COUNTRY_1831309310");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_28);
    UnderlyingInstrument_28.insert(UnderlyingCountryOfIssue_28.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_28("LOCALMKTDATE_598996364");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_28);
    UnderlyingInstrument_28.insert(UnderlyingCouponPaymentDate_28.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_28;
    UnderlyingCouponRate_28.setString("75.920000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_28);
    UnderlyingInstrument_28.insert(UnderlyingCouponRate_28.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_28("STRING_1208279680");
    noUnderlyings_0_0.set(UnderlyingCreditRating_28);
    UnderlyingInstrument_28.insert(UnderlyingCreditRating_28.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_28("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_28);
    UnderlyingInstrument_28.insert(UnderlyingCurrency_28.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_28;
    UnderlyingCurrentValue_28.setString("7741353");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_28);
    UnderlyingInstrument_28.insert(UnderlyingCurrentValue_28.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_28;
    UnderlyingDetachmentPoint_28.setString("30.870000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_28);
    UnderlyingInstrument_28.insert(UnderlyingDetachmentPoint_28.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_28;
    UnderlyingDirtyPrice_28.setString("4254347");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_28);
    UnderlyingInstrument_28.insert(UnderlyingDirtyPrice_28.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_28;
    UnderlyingEndPrice_28.setString("12536549");
    noUnderlyings_0_0.set(UnderlyingEndPrice_28);
    UnderlyingInstrument_28.insert(UnderlyingEndPrice_28.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_28;
    UnderlyingEndValue_28.setString("5157006");
    noUnderlyings_0_0.set(UnderlyingEndValue_28);
    UnderlyingInstrument_28.insert(UnderlyingEndValue_28.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_28(2099880362);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_28);
    UnderlyingInstrument_28.insert(UnderlyingExerciseStyle_28.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_28;
    UnderlyingFXRate_28.setString("8526927");
    noUnderlyings_0_0.set(UnderlyingFXRate_28);
    UnderlyingInstrument_28.insert(UnderlyingFXRate_28.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_28('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_28);
    UnderlyingInstrument_28.insert(UnderlyingFXRateCalc_28.getString());
    FIX::UnderlyingFactor UnderlyingFactor_28;
    UnderlyingFactor_28.setString("7336252");
    noUnderlyings_0_0.set(UnderlyingFactor_28);
    UnderlyingInstrument_28.insert(UnderlyingFactor_28.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_28(1309337275);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_28);
    UnderlyingInstrument_28.insert(UnderlyingFlowScheduleType_28.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_28("STRING_1463499007");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_28);
    UnderlyingInstrument_28.insert(UnderlyingInstrRegistry_28.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_28("LOCALMKTDATE_929947035");
    noUnderlyings_0_0.set(UnderlyingIssueDate_28);
    UnderlyingInstrument_28.insert(UnderlyingIssueDate_28.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_28("STRING_795022771");
    noUnderlyings_0_0.set(UnderlyingIssuer_28);
    UnderlyingInstrument_28.insert(UnderlyingIssuer_28.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_28("STRING_1528277303");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_28);
    UnderlyingInstrument_28.insert(UnderlyingLocaleOfIssue_28.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_28("LOCALMKTDATE_694980874");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_28);
    UnderlyingInstrument_28.insert(UnderlyingMaturityDate_28.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_28("MONTHYEAR_1888518628");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_28);
    UnderlyingInstrument_28.insert(UnderlyingMaturityMonthYear_28.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_28("TZTIMEONLY_96051526");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_28);
    UnderlyingInstrument_28.insert(UnderlyingMaturityTime_28.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_28;
    UnderlyingNotionalPercentageOutstanding_28.setString("43.180000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_28);
    UnderlyingInstrument_28.insert(UnderlyingNotionalPercentageOutstanding_28.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_28('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_28);
    UnderlyingInstrument_28.insert(UnderlyingOptAttribute_28.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_28;
    UnderlyingOriginalNotionalPercentageOutstanding_28.setString("19.070000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_28);
    UnderlyingInstrument_28.insert(UnderlyingOriginalNotionalPercentageOutstanding_28.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_28("STRING_775371491");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_28);
    UnderlyingInstrument_28.insert(UnderlyingPriceUnitOfMeasure_28.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_28;
    UnderlyingPriceUnitOfMeasureQty_28.setString("18522933");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_28);
    UnderlyingInstrument_28.insert(UnderlyingPriceUnitOfMeasureQty_28.getString());
    FIX::UnderlyingProduct UnderlyingProduct_28(1894675365);
    noUnderlyings_0_0.set(UnderlyingProduct_28);
    UnderlyingInstrument_28.insert(UnderlyingProduct_28.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_28(631286776);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_28);
    UnderlyingInstrument_28.insert(UnderlyingPutOrCall_28.getString());
    FIX::UnderlyingPx UnderlyingPx_28;
    UnderlyingPx_28.setString("18134117");
    noUnderlyings_0_0.set(UnderlyingPx_28);
    UnderlyingInstrument_28.insert(UnderlyingPx_28.getString());
    FIX::UnderlyingQty UnderlyingQty_28;
    UnderlyingQty_28.setString("15785010");
    noUnderlyings_0_0.set(UnderlyingQty_28);
    UnderlyingInstrument_28.insert(UnderlyingQty_28.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_28("LOCALMKTDATE_1230283140");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_28);
    UnderlyingInstrument_28.insert(UnderlyingRedemptionDate_28.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_28("STRING_2118209296");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_28);
    UnderlyingInstrument_28.insert(UnderlyingRepoCollateralSecurityType_28.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_28;
    UnderlyingRepurchaseRate_28.setString("70.600000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_28);
    UnderlyingInstrument_28.insert(UnderlyingRepurchaseRate_28.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_28(473233635);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_28);
    UnderlyingInstrument_28.insert(UnderlyingRepurchaseTerm_28.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_28("STRING_2088555455");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_28);
    UnderlyingInstrument_28.insert(UnderlyingRestructuringType_28.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_28("STRING_1413432404");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityDesc_28.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_28("EXCHANGE_629636722");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityExchange_28.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_28("STRING_366506516");
    noUnderlyings_0_0.set(UnderlyingSecurityID_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityID_28.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_28("STRING_519603707");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityIDSource_28.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_28("STRING_1145337398");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_28);
    UnderlyingInstrument_28.insert(UnderlyingSecuritySubType_28.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_28("STRING_318903230");
    noUnderlyings_0_0.set(UnderlyingSecurityType_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityType_28.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_28("STRING_1372296428");
    noUnderlyings_0_0.set(UnderlyingSeniority_28);
    UnderlyingInstrument_28.insert(UnderlyingSeniority_28.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_28("STRING_1935920093");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_28);
    UnderlyingInstrument_28.insert(UnderlyingSettlMethod_28.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_28(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_28);
    UnderlyingInstrument_28.insert(UnderlyingSettlementType_28.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_28;
    UnderlyingStartValue_28.setString("5341500");
    noUnderlyings_0_0.set(UnderlyingStartValue_28);
    UnderlyingInstrument_28.insert(UnderlyingStartValue_28.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_28("STRING_1251935452");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_28);
    UnderlyingInstrument_28.insert(UnderlyingStateOrProvinceOfIssue_28.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_28("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_28);
    UnderlyingInstrument_28.insert(UnderlyingStrikeCurrency_28.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_28;
    UnderlyingStrikePrice_28.setString("6327291");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_28);
    UnderlyingInstrument_28.insert(UnderlyingStrikePrice_28.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_28("STRING_529972779");
    noUnderlyings_0_0.set(UnderlyingSymbol_28);
    UnderlyingInstrument_28.insert(UnderlyingSymbol_28.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_28("STRING_1070207807");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_28);
    UnderlyingInstrument_28.insert(UnderlyingSymbolSfx_28.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_28("STRING_728780634");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_28);
    UnderlyingInstrument_28.insert(UnderlyingTimeUnit_28.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_28("STRING_195343449");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_28);
    UnderlyingInstrument_28.insert(UnderlyingUnitOfMeasure_28.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_28;
    UnderlyingUnitOfMeasureQty_28.setString("8963911");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_28);
    UnderlyingInstrument_28.insert(UnderlyingUnitOfMeasureQty_28.getString());
    all_values.push_back(UnderlyingInstrument_28);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_58;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_58("STRING_970714940");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_58);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_58.insert(UnderlyingSecurityAltID_58.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_58("STRING_601200894");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_58);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_58.insert(UnderlyingSecurityAltIDSource_58.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_58);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_59;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_59("STRING_1682124259");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_59);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_59.insert(UnderlyingSecurityAltID_59.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_59("STRING_1602001716");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_59);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_59.insert(UnderlyingSecurityAltIDSource_59.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_59);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_60;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_60("STRING_267128949");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_60);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_60.insert(UnderlyingSecurityAltID_60.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_60("STRING_1113141639");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_60);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_60.insert(UnderlyingSecurityAltIDSource_60.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_60);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_51;
      FIX::UnderlyingStipType UnderlyingStipType_51("STRING_237854597");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_51);
      UnderlyingStipulations_NoUnderlyingStips_51.insert(UnderlyingStipType_51.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_51("STRING_1752438699");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_51);
      UnderlyingStipulations_NoUnderlyingStips_51.insert(UnderlyingStipValue_51.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_51);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_52;
      FIX::UnderlyingStipType UnderlyingStipType_52("STRING_1158034844");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_52);
      UnderlyingStipulations_NoUnderlyingStips_52.insert(UnderlyingStipType_52.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_52("STRING_178926404");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_52);
      UnderlyingStipulations_NoUnderlyingStips_52.insert(UnderlyingStipValue_52.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_52);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_57;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_57("STRING_1787671566");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_57);
      UndlyInstrumentParties_NoUndlyInstrumentParties_57.insert(UnderlyingInstrumentPartyID_57.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_57('5');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_57);
      UndlyInstrumentParties_NoUndlyInstrumentParties_57.insert(UnderlyingInstrumentPartyIDSource_57.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_57(1537991163);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_57);
      UndlyInstrumentParties_NoUndlyInstrumentParties_57.insert(UnderlyingInstrumentPartyRole_57.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_57);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_124("STRING_864336150");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_124);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124.insert(UnderlyingInstrumentPartySubID_124.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_124(762803943);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_124);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124.insert(UnderlyingInstrumentPartySubIDType_124.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_125("STRING_573961762");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_125);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125.insert(UnderlyingInstrumentPartySubID_125.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_125(1916864668);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_125);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125.insert(UnderlyingInstrumentPartySubIDType_125.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_58;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_58("STRING_1296953998");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_58);
      UndlyInstrumentParties_NoUndlyInstrumentParties_58.insert(UnderlyingInstrumentPartyID_58.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_58('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_58);
      UndlyInstrumentParties_NoUndlyInstrumentParties_58.insert(UnderlyingInstrumentPartyIDSource_58.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_58(1751856574);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_58);
      UndlyInstrumentParties_NoUndlyInstrumentParties_58.insert(UnderlyingInstrumentPartyRole_58.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_58);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_126("STRING_311142674");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_126);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126.insert(UnderlyingInstrumentPartySubID_126.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_126(134345705);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_126);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126.insert(UnderlyingInstrumentPartySubIDType_126.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_127("STRING_1548850984");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_127);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127.insert(UnderlyingInstrumentPartySubID_127.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_127(1039923309);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_127);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127.insert(UnderlyingInstrumentPartySubIDType_127.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_128("STRING_329689155");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_128);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128.insert(UnderlyingInstrumentPartySubID_128.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_128(297758524);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_128);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128.insert(UnderlyingInstrumentPartySubIDType_128.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_29;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_29("DATA_827372202");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingIssuer_29.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_29(1300404095);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingIssuerLen_29.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_29("DATA_898959418");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingSecurityDesc_29.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_29(362012813);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingSecurityDescLen_29.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_29;
    UnderlyingAdjustedQuantity_29.setString("7549221");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_29);
    UnderlyingInstrument_29.insert(UnderlyingAdjustedQuantity_29.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_29;
    UnderlyingAllocationPercent_29.setString("83.670000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_29);
    UnderlyingInstrument_29.insert(UnderlyingAllocationPercent_29.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_29;
    UnderlyingAttachmentPoint_29.setString("44.520000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_29);
    UnderlyingInstrument_29.insert(UnderlyingAttachmentPoint_29.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_29("STRING_1439723372");
    noUnderlyings_0_1.set(UnderlyingCFICode_29);
    UnderlyingInstrument_29.insert(UnderlyingCFICode_29.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_29("STRING_1403942965");
    noUnderlyings_0_1.set(UnderlyingCPProgram_29);
    UnderlyingInstrument_29.insert(UnderlyingCPProgram_29.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_29("STRING_1080109504");
    noUnderlyings_0_1.set(UnderlyingCPRegType_29);
    UnderlyingInstrument_29.insert(UnderlyingCPRegType_29.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_29;
    UnderlyingCapValue_29.setString("4502745");
    noUnderlyings_0_1.set(UnderlyingCapValue_29);
    UnderlyingInstrument_29.insert(UnderlyingCapValue_29.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_29;
    UnderlyingCashAmount_29.setString("15828693");
    noUnderlyings_0_1.set(UnderlyingCashAmount_29);
    UnderlyingInstrument_29.insert(UnderlyingCashAmount_29.getString());
    FIX::UnderlyingCashType UnderlyingCashType_29("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_29);
    UnderlyingInstrument_29.insert(UnderlyingCashType_29.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_29;
    UnderlyingContractMultiplier_29.setString("904624");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_29);
    UnderlyingInstrument_29.insert(UnderlyingContractMultiplier_29.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_29(2128302290);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_29);
    UnderlyingInstrument_29.insert(UnderlyingContractMultiplierUnit_29.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_29("COUNTRY_1489004475");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_29);
    UnderlyingInstrument_29.insert(UnderlyingCountryOfIssue_29.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_29("LOCALMKTDATE_875987804");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_29);
    UnderlyingInstrument_29.insert(UnderlyingCouponPaymentDate_29.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_29;
    UnderlyingCouponRate_29.setString("47.920000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_29);
    UnderlyingInstrument_29.insert(UnderlyingCouponRate_29.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_29("STRING_104324770");
    noUnderlyings_0_1.set(UnderlyingCreditRating_29);
    UnderlyingInstrument_29.insert(UnderlyingCreditRating_29.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_29("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_29);
    UnderlyingInstrument_29.insert(UnderlyingCurrency_29.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_29;
    UnderlyingCurrentValue_29.setString("14012787");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_29);
    UnderlyingInstrument_29.insert(UnderlyingCurrentValue_29.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_29;
    UnderlyingDetachmentPoint_29.setString("31.320000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_29);
    UnderlyingInstrument_29.insert(UnderlyingDetachmentPoint_29.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_29;
    UnderlyingDirtyPrice_29.setString("2189087");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_29);
    UnderlyingInstrument_29.insert(UnderlyingDirtyPrice_29.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_29;
    UnderlyingEndPrice_29.setString("18799219");
    noUnderlyings_0_1.set(UnderlyingEndPrice_29);
    UnderlyingInstrument_29.insert(UnderlyingEndPrice_29.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_29;
    UnderlyingEndValue_29.setString("14395058");
    noUnderlyings_0_1.set(UnderlyingEndValue_29);
    UnderlyingInstrument_29.insert(UnderlyingEndValue_29.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_29(353254444);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_29);
    UnderlyingInstrument_29.insert(UnderlyingExerciseStyle_29.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_29;
    UnderlyingFXRate_29.setString("12812892");
    noUnderlyings_0_1.set(UnderlyingFXRate_29);
    UnderlyingInstrument_29.insert(UnderlyingFXRate_29.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_29('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_29);
    UnderlyingInstrument_29.insert(UnderlyingFXRateCalc_29.getString());
    FIX::UnderlyingFactor UnderlyingFactor_29;
    UnderlyingFactor_29.setString("6829435");
    noUnderlyings_0_1.set(UnderlyingFactor_29);
    UnderlyingInstrument_29.insert(UnderlyingFactor_29.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_29(1579047805);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_29);
    UnderlyingInstrument_29.insert(UnderlyingFlowScheduleType_29.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_29("STRING_1159317670");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_29);
    UnderlyingInstrument_29.insert(UnderlyingInstrRegistry_29.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_29("LOCALMKTDATE_1983347695");
    noUnderlyings_0_1.set(UnderlyingIssueDate_29);
    UnderlyingInstrument_29.insert(UnderlyingIssueDate_29.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_29("STRING_330523575");
    noUnderlyings_0_1.set(UnderlyingIssuer_29);
    UnderlyingInstrument_29.insert(UnderlyingIssuer_29.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_29("STRING_1521330484");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_29);
    UnderlyingInstrument_29.insert(UnderlyingLocaleOfIssue_29.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_29("LOCALMKTDATE_590786211");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_29);
    UnderlyingInstrument_29.insert(UnderlyingMaturityDate_29.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_29("MONTHYEAR_1496611943");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_29);
    UnderlyingInstrument_29.insert(UnderlyingMaturityMonthYear_29.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_29("TZTIMEONLY_849001288");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_29);
    UnderlyingInstrument_29.insert(UnderlyingMaturityTime_29.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_29;
    UnderlyingNotionalPercentageOutstanding_29.setString("95.830000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_29);
    UnderlyingInstrument_29.insert(UnderlyingNotionalPercentageOutstanding_29.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_29('7');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_29);
    UnderlyingInstrument_29.insert(UnderlyingOptAttribute_29.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_29;
    UnderlyingOriginalNotionalPercentageOutstanding_29.setString("7.920000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_29);
    UnderlyingInstrument_29.insert(UnderlyingOriginalNotionalPercentageOutstanding_29.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_29("STRING_333300504");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_29);
    UnderlyingInstrument_29.insert(UnderlyingPriceUnitOfMeasure_29.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_29;
    UnderlyingPriceUnitOfMeasureQty_29.setString("1884569");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_29);
    UnderlyingInstrument_29.insert(UnderlyingPriceUnitOfMeasureQty_29.getString());
    FIX::UnderlyingProduct UnderlyingProduct_29(1880124104);
    noUnderlyings_0_1.set(UnderlyingProduct_29);
    UnderlyingInstrument_29.insert(UnderlyingProduct_29.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_29(423762991);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_29);
    UnderlyingInstrument_29.insert(UnderlyingPutOrCall_29.getString());
    FIX::UnderlyingPx UnderlyingPx_29;
    UnderlyingPx_29.setString("1692756");
    noUnderlyings_0_1.set(UnderlyingPx_29);
    UnderlyingInstrument_29.insert(UnderlyingPx_29.getString());
    FIX::UnderlyingQty UnderlyingQty_29;
    UnderlyingQty_29.setString("12216449");
    noUnderlyings_0_1.set(UnderlyingQty_29);
    UnderlyingInstrument_29.insert(UnderlyingQty_29.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_29("LOCALMKTDATE_1299750795");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_29);
    UnderlyingInstrument_29.insert(UnderlyingRedemptionDate_29.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_29("STRING_1014430416");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_29);
    UnderlyingInstrument_29.insert(UnderlyingRepoCollateralSecurityType_29.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_29;
    UnderlyingRepurchaseRate_29.setString("97.010000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_29);
    UnderlyingInstrument_29.insert(UnderlyingRepurchaseRate_29.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_29(602216713);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_29);
    UnderlyingInstrument_29.insert(UnderlyingRepurchaseTerm_29.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_29("STRING_1628966229");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_29);
    UnderlyingInstrument_29.insert(UnderlyingRestructuringType_29.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_29("STRING_579764822");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityDesc_29.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_29("EXCHANGE_1730579845");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityExchange_29.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_29("STRING_1847874968");
    noUnderlyings_0_1.set(UnderlyingSecurityID_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityID_29.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_29("STRING_312203119");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityIDSource_29.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_29("STRING_1022602004");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_29);
    UnderlyingInstrument_29.insert(UnderlyingSecuritySubType_29.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_29("STRING_53645764");
    noUnderlyings_0_1.set(UnderlyingSecurityType_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityType_29.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_29("STRING_1593492401");
    noUnderlyings_0_1.set(UnderlyingSeniority_29);
    UnderlyingInstrument_29.insert(UnderlyingSeniority_29.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_29("STRING_1354547472");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_29);
    UnderlyingInstrument_29.insert(UnderlyingSettlMethod_29.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_29(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_29);
    UnderlyingInstrument_29.insert(UnderlyingSettlementType_29.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_29;
    UnderlyingStartValue_29.setString("10250565");
    noUnderlyings_0_1.set(UnderlyingStartValue_29);
    UnderlyingInstrument_29.insert(UnderlyingStartValue_29.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_29("STRING_366381495");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_29);
    UnderlyingInstrument_29.insert(UnderlyingStateOrProvinceOfIssue_29.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_29("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_29);
    UnderlyingInstrument_29.insert(UnderlyingStrikeCurrency_29.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_29;
    UnderlyingStrikePrice_29.setString("18877119");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_29);
    UnderlyingInstrument_29.insert(UnderlyingStrikePrice_29.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_29("STRING_1163239622");
    noUnderlyings_0_1.set(UnderlyingSymbol_29);
    UnderlyingInstrument_29.insert(UnderlyingSymbol_29.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_29("STRING_704708429");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_29);
    UnderlyingInstrument_29.insert(UnderlyingSymbolSfx_29.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_29("STRING_589229619");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_29);
    UnderlyingInstrument_29.insert(UnderlyingTimeUnit_29.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_29("STRING_1046265557");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_29);
    UnderlyingInstrument_29.insert(UnderlyingUnitOfMeasure_29.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_29;
    UnderlyingUnitOfMeasureQty_29.setString("14577796");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_29);
    UnderlyingInstrument_29.insert(UnderlyingUnitOfMeasureQty_29.getString());
    all_values.push_back(UnderlyingInstrument_29);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_61;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_61("STRING_1379566061");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_61);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_61.insert(UnderlyingSecurityAltID_61.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_61("STRING_1646236670");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_61);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_61.insert(UnderlyingSecurityAltIDSource_61.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_61);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_62;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_62("STRING_103497220");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_62);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_62.insert(UnderlyingSecurityAltID_62.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_62("STRING_1803329052");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_62);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_62.insert(UnderlyingSecurityAltIDSource_62.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_62);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_53;
      FIX::UnderlyingStipType UnderlyingStipType_53("STRING_1325142152");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_53);
      UnderlyingStipulations_NoUnderlyingStips_53.insert(UnderlyingStipType_53.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_53("STRING_955596199");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_53);
      UnderlyingStipulations_NoUnderlyingStips_53.insert(UnderlyingStipValue_53.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_53);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_54;
      FIX::UnderlyingStipType UnderlyingStipType_54("STRING_682459062");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_54);
      UnderlyingStipulations_NoUnderlyingStips_54.insert(UnderlyingStipType_54.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_54("STRING_503628205");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_54);
      UnderlyingStipulations_NoUnderlyingStips_54.insert(UnderlyingStipValue_54.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_54);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_55;
      FIX::UnderlyingStipType UnderlyingStipType_55("STRING_1557812912");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_55);
      UnderlyingStipulations_NoUnderlyingStips_55.insert(UnderlyingStipType_55.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_55("STRING_163941643");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_55);
      UnderlyingStipulations_NoUnderlyingStips_55.insert(UnderlyingStipValue_55.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_55);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_59;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_59("STRING_1140909110");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_59);
      UndlyInstrumentParties_NoUndlyInstrumentParties_59.insert(UnderlyingInstrumentPartyID_59.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_59('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_59);
      UndlyInstrumentParties_NoUndlyInstrumentParties_59.insert(UnderlyingInstrumentPartyIDSource_59.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_59(1395596147);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_59);
      UndlyInstrumentParties_NoUndlyInstrumentParties_59.insert(UnderlyingInstrumentPartyRole_59.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_59);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_129("STRING_2065462375");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_129);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129.insert(UnderlyingInstrumentPartySubID_129.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_129(841604900);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_129);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129.insert(UnderlyingInstrumentPartySubIDType_129.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_130("STRING_1370574939");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_130);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130.insert(UnderlyingInstrumentPartySubID_130.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_130(654568091);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_130);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130.insert(UnderlyingInstrumentPartySubIDType_130.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_131("STRING_1866661458");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_131);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131.insert(UnderlyingInstrumentPartySubID_131.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_131(1736956434);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_131);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131.insert(UnderlyingInstrumentPartySubIDType_131.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_4;
  FIX::Yield Yield_4;
  Yield_4.setString("15.020000");
  msg.set(Yield_4);
  YieldData_4.insert(Yield_4.getString());
  FIX::YieldCalcDate YieldCalcDate_4("LOCALMKTDATE_1074757944");
  msg.set(YieldCalcDate_4);
  YieldData_4.insert(YieldCalcDate_4.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_4("LOCALMKTDATE_1477184765");
  msg.set(YieldRedemptionDate_4);
  YieldData_4.insert(YieldRedemptionDate_4.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_4;
  YieldRedemptionPrice_4.setString("2427774");
  msg.set(YieldRedemptionPrice_4);
  YieldData_4.insert(YieldRedemptionPrice_4.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_4(1779466373);
  msg.set(YieldRedemptionPriceType_4);
  YieldData_4.insert(YieldRedemptionPriceType_4.getString());
  FIX::YieldType YieldType_4("STRING_OPENAVG");
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
