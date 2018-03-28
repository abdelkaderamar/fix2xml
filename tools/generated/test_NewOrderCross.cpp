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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::NewOrderCross msg;

  list<multiset<string>> all_values;
  multiset<string> NewOrderCross_0;
  FIX::CancellationRights CancellationRights_3('Y');
  msg.set(CancellationRights_3);
  NewOrderCross_0.insert(CancellationRights_3.getString());
  FIX::ComplianceID ComplianceID_5("STRING_601021653");
  msg.set(ComplianceID_5);
  NewOrderCross_0.insert(ComplianceID_5.getString());
  FIX::CrossID CrossID_3("STRING_459269287");
  msg.set(CrossID_3);
  NewOrderCross_0.insert(CrossID_3.getString());
  FIX::CrossPrioritization CrossPrioritization_2(2);
  msg.set(CrossPrioritization_2);
  NewOrderCross_0.insert(CrossPrioritization_2.getString());
  FIX::CrossType CrossType_3(3);
  msg.set(CrossType_3);
  NewOrderCross_0.insert(CrossType_3.getString());
  FIX::Currency Currency_41("USD");
  msg.set(Currency_41);
  NewOrderCross_0.insert(Currency_41.getString());
  FIX::Designation Designation_3("STRING_1181166768");
  msg.set(Designation_3);
  NewOrderCross_0.insert(Designation_3.getString());
  FIX::EffectiveTime EffectiveTime_3(FIX::UTCTIMESTAMP(9, 8, 19, 14, 2, 2003));
  msg.set(EffectiveTime_3);
  NewOrderCross_0.insert(EffectiveTime_3.getString());
  FIX::ExDestination ExDestination_2("EXCHANGE_1952009318");
  msg.set(ExDestination_2);
  NewOrderCross_0.insert(ExDestination_2.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_2('B');
  msg.set(ExDestinationIDSource_2);
  NewOrderCross_0.insert(ExDestinationIDSource_2.getString());
  FIX::ExecInst ExecInst_5("MULTIPLECHARVALUE_n");
  msg.set(ExecInst_5);
  NewOrderCross_0.insert(ExecInst_5.getString());
  FIX::ExpireDate ExpireDate_6("LOCALMKTDATE_2053233918");
  msg.set(ExpireDate_6);
  NewOrderCross_0.insert(ExpireDate_6.getString());
  FIX::ExpireTime ExpireTime_7(FIX::UTCTIMESTAMP(12, 31, 34, 25, 11, 2000));
  msg.set(ExpireTime_7);
  NewOrderCross_0.insert(ExpireTime_7.getString());
  FIX::GTBookingInst GTBookingInst_3(2);
  msg.set(GTBookingInst_3);
  NewOrderCross_0.insert(GTBookingInst_3.getString());
  FIX::HandlInst HandlInst_3('1');
  msg.set(HandlInst_3);
  NewOrderCross_0.insert(HandlInst_3.getString());
  FIX::IOIID IOIID_3("STRING_1562746389");
  msg.set(IOIID_3);
  NewOrderCross_0.insert(IOIID_3.getString());
  FIX::LocateReqd LocateReqd_2(true);
  msg.set(LocateReqd_2);
  NewOrderCross_0.insert(LocateReqd_2.getString());
  FIX::MatchIncrement MatchIncrement_3;
  MatchIncrement_3.setString("3354117");
  msg.set(MatchIncrement_3);
  NewOrderCross_0.insert(MatchIncrement_3.getString());
  FIX::MaxFloor MaxFloor_3;
  MaxFloor_3.setString("2691452");
  msg.set(MaxFloor_3);
  NewOrderCross_0.insert(MaxFloor_3.getString());
  FIX::MaxPriceLevels MaxPriceLevels_3(1039066566);
  msg.set(MaxPriceLevels_3);
  NewOrderCross_0.insert(MaxPriceLevels_3.getString());
  FIX::MaxShow MaxShow_3;
  MaxShow_3.setString("7946810");
  msg.set(MaxShow_3);
  NewOrderCross_0.insert(MaxShow_3.getString());
  FIX::MinQty MinQty_5;
  MinQty_5.setString("2817934");
  msg.set(MinQty_5);
  NewOrderCross_0.insert(MinQty_5.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_3('1');
  msg.set(MoneyLaunderingStatus_3);
  NewOrderCross_0.insert(MoneyLaunderingStatus_3.getString());
  FIX::OrdType OrdType_32('C');
  msg.set(OrdType_32);
  NewOrderCross_0.insert(OrdType_32.getString());
  FIX::ParticipationRate ParticipationRate_3;
  ParticipationRate_3.setString("75.900000");
  msg.set(ParticipationRate_3);
  NewOrderCross_0.insert(ParticipationRate_3.getString());
  FIX::PrevClosePx PrevClosePx_3;
  PrevClosePx_3.setString("6236911");
  msg.set(PrevClosePx_3);
  NewOrderCross_0.insert(PrevClosePx_3.getString());
  FIX::Price Price_12;
  Price_12.setString("4695452");
  msg.set(Price_12);
  NewOrderCross_0.insert(Price_12.getString());
  FIX::PriceProtectionScope PriceProtectionScope_3('3');
  msg.set(PriceProtectionScope_3);
  NewOrderCross_0.insert(PriceProtectionScope_3.getString());
  FIX::PriceType PriceType_22(18);
  msg.set(PriceType_22);
  NewOrderCross_0.insert(PriceType_22.getString());
  FIX::ProcessCode ProcessCode_9('5');
  msg.set(ProcessCode_9);
  NewOrderCross_0.insert(ProcessCode_9.getString());
  FIX::QuoteID QuoteID_4("STRING_2145341909");
  msg.set(QuoteID_4);
  NewOrderCross_0.insert(QuoteID_4.getString());
  FIX::RegistID RegistID_3("STRING_2025740885");
  msg.set(RegistID_3);
  NewOrderCross_0.insert(RegistID_3.getString());
  FIX::SettlDate SettlDate_30("LOCALMKTDATE_1538186436");
  msg.set(SettlDate_30);
  NewOrderCross_0.insert(SettlDate_30.getString());
  FIX::SettlType SettlType_13("STRING_C");
  msg.set(SettlType_13);
  NewOrderCross_0.insert(SettlType_13.getString());
  FIX::StopPx StopPx_3;
  StopPx_3.setString("2529170");
  msg.set(StopPx_3);
  NewOrderCross_0.insert(StopPx_3.getString());
  FIX::TargetStrategy TargetStrategy_3(1);
  msg.set(TargetStrategy_3);
  NewOrderCross_0.insert(TargetStrategy_3.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_3("STRING_1855617850");
  msg.set(TargetStrategyParameters_3);
  NewOrderCross_0.insert(TargetStrategyParameters_3.getString());
  FIX::TimeInForce TimeInForce_17('9');
  msg.set(TimeInForce_17);
  NewOrderCross_0.insert(TimeInForce_17.getString());
  FIX::TransBkdTime TransBkdTime_3(FIX::UTCTIMESTAMP(5, 33, 2, 3, 9, 2005));
  msg.set(TransBkdTime_3);
  NewOrderCross_0.insert(TransBkdTime_3.getString());
  FIX::TransactTime TransactTime_38(FIX::UTCTIMESTAMP(17, 1, 6, 18, 12, 2000));
  msg.set(TransactTime_38);
  NewOrderCross_0.insert(TransactTime_38.getString());
  all_values.push_back(NewOrderCross_0);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_3;
  FIX::DiscretionInst DiscretionInst_3('4');
  msg.set(DiscretionInst_3);
  DiscretionInstructions_3.insert(DiscretionInst_3.getString());
  FIX::DiscretionLimitType DiscretionLimitType_3(2);
  msg.set(DiscretionLimitType_3);
  DiscretionInstructions_3.insert(DiscretionLimitType_3.getString());
  FIX::DiscretionMoveType DiscretionMoveType_3(1);
  msg.set(DiscretionMoveType_3);
  DiscretionInstructions_3.insert(DiscretionMoveType_3.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_3(2);
  msg.set(DiscretionOffsetType_3);
  DiscretionInstructions_3.insert(DiscretionOffsetType_3.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_3;
  DiscretionOffsetValue_3.setString("6230501");
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
  DisplayHighQty_3.setString("11936041");
  msg.set(DisplayHighQty_3);
  DisplayInstruction_3.insert(DisplayHighQty_3.getString());
  FIX::DisplayLowQty DisplayLowQty_3;
  DisplayLowQty_3.setString("4660214");
  msg.set(DisplayLowQty_3);
  DisplayInstruction_3.insert(DisplayLowQty_3.getString());
  FIX::DisplayMethod DisplayMethod_3('3');
  msg.set(DisplayMethod_3);
  DisplayInstruction_3.insert(DisplayMethod_3.getString());
  FIX::DisplayMinIncr DisplayMinIncr_3;
  DisplayMinIncr_3.setString("10718613");
  msg.set(DisplayMinIncr_3);
  DisplayInstruction_3.insert(DisplayMinIncr_3.getString());
  FIX::DisplayQty DisplayQty_3;
  DisplayQty_3.setString("20042079");
  msg.set(DisplayQty_3);
  DisplayInstruction_3.insert(DisplayQty_3.getString());
  FIX::DisplayWhen DisplayWhen_3('1');
  msg.set(DisplayWhen_3);
  DisplayInstruction_3.insert(DisplayWhen_3.getString());
  FIX::RefreshQty RefreshQty_3;
  RefreshQty_3.setString("13247784");
  msg.set(RefreshQty_3);
  DisplayInstruction_3.insert(RefreshQty_3.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_3;
  SecondaryDisplayQty_3.setString("6936663");
  msg.set(SecondaryDisplayQty_3);
  DisplayInstruction_3.insert(SecondaryDisplayQty_3.getString());
  all_values.push_back(DisplayInstruction_3);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::NewOrderCross::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_83;
    FIX::EncodedLegIssuer EncodedLegIssuer_83("DATA_754229944");
    noLegs_0_0.set(EncodedLegIssuer_83);
    InstrumentLeg_83.insert(EncodedLegIssuer_83.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_83(1743390304);
    noLegs_0_0.set(EncodedLegIssuerLen_83);
    InstrumentLeg_83.insert(EncodedLegIssuerLen_83.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_83("DATA_882348841");
    noLegs_0_0.set(EncodedLegSecurityDesc_83);
    InstrumentLeg_83.insert(EncodedLegSecurityDesc_83.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_83(234843509);
    noLegs_0_0.set(EncodedLegSecurityDescLen_83);
    InstrumentLeg_83.insert(EncodedLegSecurityDescLen_83.getString());
    FIX::LegCFICode LegCFICode_83("STRING_1901357166");
    noLegs_0_0.set(LegCFICode_83);
    InstrumentLeg_83.insert(LegCFICode_83.getString());
    FIX::LegContractMultiplier LegContractMultiplier_83;
    LegContractMultiplier_83.setString("18453883");
    noLegs_0_0.set(LegContractMultiplier_83);
    InstrumentLeg_83.insert(LegContractMultiplier_83.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_83(730355737);
    noLegs_0_0.set(LegContractMultiplierUnit_83);
    InstrumentLeg_83.insert(LegContractMultiplierUnit_83.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_83("MONTHYEAR_981080367");
    noLegs_0_0.set(LegContractSettlMonth_83);
    InstrumentLeg_83.insert(LegContractSettlMonth_83.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_83("COUNTRY_136171652");
    noLegs_0_0.set(LegCountryOfIssue_83);
    InstrumentLeg_83.insert(LegCountryOfIssue_83.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_83("LOCALMKTDATE_641130706");
    noLegs_0_0.set(LegCouponPaymentDate_83);
    InstrumentLeg_83.insert(LegCouponPaymentDate_83.getString());
    FIX::LegCouponRate LegCouponRate_83;
    LegCouponRate_83.setString("84.810000");
    noLegs_0_0.set(LegCouponRate_83);
    InstrumentLeg_83.insert(LegCouponRate_83.getString());
    FIX::LegCreditRating LegCreditRating_83("STRING_909850299");
    noLegs_0_0.set(LegCreditRating_83);
    InstrumentLeg_83.insert(LegCreditRating_83.getString());
    FIX::LegCurrency LegCurrency_83("GBP");
    noLegs_0_0.set(LegCurrency_83);
    InstrumentLeg_83.insert(LegCurrency_83.getString());
    FIX::LegDatedDate LegDatedDate_83("LOCALMKTDATE_330726307");
    noLegs_0_0.set(LegDatedDate_83);
    InstrumentLeg_83.insert(LegDatedDate_83.getString());
    FIX::LegExerciseStyle LegExerciseStyle_83(1282764528);
    noLegs_0_0.set(LegExerciseStyle_83);
    InstrumentLeg_83.insert(LegExerciseStyle_83.getString());
    FIX::LegFactor LegFactor_83;
    LegFactor_83.setString("10550421");
    noLegs_0_0.set(LegFactor_83);
    InstrumentLeg_83.insert(LegFactor_83.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_83(1222952614);
    noLegs_0_0.set(LegFlowScheduleType_83);
    InstrumentLeg_83.insert(LegFlowScheduleType_83.getString());
    FIX::LegInstrRegistry LegInstrRegistry_83("STRING_1218002114");
    noLegs_0_0.set(LegInstrRegistry_83);
    InstrumentLeg_83.insert(LegInstrRegistry_83.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_83("LOCALMKTDATE_1678092319");
    noLegs_0_0.set(LegInterestAccrualDate_83);
    InstrumentLeg_83.insert(LegInterestAccrualDate_83.getString());
    FIX::LegIssueDate LegIssueDate_83("LOCALMKTDATE_437240521");
    noLegs_0_0.set(LegIssueDate_83);
    InstrumentLeg_83.insert(LegIssueDate_83.getString());
    FIX::LegIssuer LegIssuer_83("STRING_551046859");
    noLegs_0_0.set(LegIssuer_83);
    InstrumentLeg_83.insert(LegIssuer_83.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_83("STRING_724212779");
    noLegs_0_0.set(LegLocaleOfIssue_83);
    InstrumentLeg_83.insert(LegLocaleOfIssue_83.getString());
    FIX::LegMaturityDate LegMaturityDate_83("LOCALMKTDATE_903262014");
    noLegs_0_0.set(LegMaturityDate_83);
    InstrumentLeg_83.insert(LegMaturityDate_83.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_83("MONTHYEAR_2029433514");
    noLegs_0_0.set(LegMaturityMonthYear_83);
    InstrumentLeg_83.insert(LegMaturityMonthYear_83.getString());
    FIX::LegMaturityTime LegMaturityTime_83("TZTIMEONLY_1796074125");
    noLegs_0_0.set(LegMaturityTime_83);
    InstrumentLeg_83.insert(LegMaturityTime_83.getString());
    FIX::LegOptAttribute LegOptAttribute_83('7');
    noLegs_0_0.set(LegOptAttribute_83);
    InstrumentLeg_83.insert(LegOptAttribute_83.getString());
    FIX::LegOptionRatio LegOptionRatio_83;
    LegOptionRatio_83.setString("11627204");
    noLegs_0_0.set(LegOptionRatio_83);
    InstrumentLeg_83.insert(LegOptionRatio_83.getString());
    FIX::LegPool LegPool_83("STRING_973368890");
    noLegs_0_0.set(LegPool_83);
    InstrumentLeg_83.insert(LegPool_83.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_83("STRING_1453652613");
    noLegs_0_0.set(LegPriceUnitOfMeasure_83);
    InstrumentLeg_83.insert(LegPriceUnitOfMeasure_83.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_83;
    LegPriceUnitOfMeasureQty_83.setString("41415");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_83);
    InstrumentLeg_83.insert(LegPriceUnitOfMeasureQty_83.getString());
    FIX::LegProduct LegProduct_83(1727598834);
    noLegs_0_0.set(LegProduct_83);
    InstrumentLeg_83.insert(LegProduct_83.getString());
    FIX::LegPutOrCall LegPutOrCall_83(1049559269);
    noLegs_0_0.set(LegPutOrCall_83);
    InstrumentLeg_83.insert(LegPutOrCall_83.getString());
    FIX::LegRatioQty LegRatioQty_83;
    LegRatioQty_83.setString("8864904");
    noLegs_0_0.set(LegRatioQty_83);
    InstrumentLeg_83.insert(LegRatioQty_83.getString());
    FIX::LegRedemptionDate LegRedemptionDate_83("LOCALMKTDATE_1962442343");
    noLegs_0_0.set(LegRedemptionDate_83);
    InstrumentLeg_83.insert(LegRedemptionDate_83.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_83("STRING_803432788");
    noLegs_0_0.set(LegRepoCollateralSecurityType_83);
    InstrumentLeg_83.insert(LegRepoCollateralSecurityType_83.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_83;
    LegRepurchaseRate_83.setString("51.610000");
    noLegs_0_0.set(LegRepurchaseRate_83);
    InstrumentLeg_83.insert(LegRepurchaseRate_83.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_83(545314433);
    noLegs_0_0.set(LegRepurchaseTerm_83);
    InstrumentLeg_83.insert(LegRepurchaseTerm_83.getString());
    FIX::LegSecurityDesc LegSecurityDesc_83("STRING_1784513155");
    noLegs_0_0.set(LegSecurityDesc_83);
    InstrumentLeg_83.insert(LegSecurityDesc_83.getString());
    FIX::LegSecurityExchange LegSecurityExchange_83("EXCHANGE_720566813");
    noLegs_0_0.set(LegSecurityExchange_83);
    InstrumentLeg_83.insert(LegSecurityExchange_83.getString());
    FIX::LegSecurityID LegSecurityID_83("STRING_1186445139");
    noLegs_0_0.set(LegSecurityID_83);
    InstrumentLeg_83.insert(LegSecurityID_83.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_83("STRING_135877988");
    noLegs_0_0.set(LegSecurityIDSource_83);
    InstrumentLeg_83.insert(LegSecurityIDSource_83.getString());
    FIX::LegSecuritySubType LegSecuritySubType_83("STRING_1630417112");
    noLegs_0_0.set(LegSecuritySubType_83);
    InstrumentLeg_83.insert(LegSecuritySubType_83.getString());
    FIX::LegSecurityType LegSecurityType_83("STRING_2007496024");
    noLegs_0_0.set(LegSecurityType_83);
    InstrumentLeg_83.insert(LegSecurityType_83.getString());
    FIX::LegSide LegSide_83('1');
    noLegs_0_0.set(LegSide_83);
    InstrumentLeg_83.insert(LegSide_83.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_83("STRING_1961143419");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_83);
    InstrumentLeg_83.insert(LegStateOrProvinceOfIssue_83.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_83("CHF");
    noLegs_0_0.set(LegStrikeCurrency_83);
    InstrumentLeg_83.insert(LegStrikeCurrency_83.getString());
    FIX::LegStrikePrice LegStrikePrice_83;
    LegStrikePrice_83.setString("10366123");
    noLegs_0_0.set(LegStrikePrice_83);
    InstrumentLeg_83.insert(LegStrikePrice_83.getString());
    FIX::LegSymbol LegSymbol_83("STRING_213295371");
    noLegs_0_0.set(LegSymbol_83);
    InstrumentLeg_83.insert(LegSymbol_83.getString());
    FIX::LegSymbolSfx LegSymbolSfx_83("STRING_1777212004");
    noLegs_0_0.set(LegSymbolSfx_83);
    InstrumentLeg_83.insert(LegSymbolSfx_83.getString());
    FIX::LegTimeUnit LegTimeUnit_83("STRING_1473852907");
    noLegs_0_0.set(LegTimeUnit_83);
    InstrumentLeg_83.insert(LegTimeUnit_83.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_83("STRING_764342230");
    noLegs_0_0.set(LegUnitOfMeasure_83);
    InstrumentLeg_83.insert(LegUnitOfMeasure_83.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_83;
    LegUnitOfMeasureQty_83.setString("3539411");
    noLegs_0_0.set(LegUnitOfMeasureQty_83);
    InstrumentLeg_83.insert(LegUnitOfMeasureQty_83.getString());
    all_values.push_back(InstrumentLeg_83);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_163;
      FIX::LegSecurityAltID LegSecurityAltID_163("STRING_646292096");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_163);
      LegSecAltIDGrp_NoLegSecurityAltID_163.insert(LegSecurityAltID_163.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_163("STRING_2531613");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_163);
      LegSecAltIDGrp_NoLegSecurityAltID_163.insert(LegSecurityAltIDSource_163.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_163);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_164;
      FIX::LegSecurityAltID LegSecurityAltID_164("STRING_989617568");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_164);
      LegSecAltIDGrp_NoLegSecurityAltID_164.insert(LegSecurityAltID_164.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_164("STRING_1809012548");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_164);
      LegSecAltIDGrp_NoLegSecurityAltID_164.insert(LegSecurityAltIDSource_164.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_164);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_165;
      FIX::LegSecurityAltID LegSecurityAltID_165("STRING_975900503");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_165);
      LegSecAltIDGrp_NoLegSecurityAltID_165.insert(LegSecurityAltID_165.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_165("STRING_295786533");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_165);
      LegSecAltIDGrp_NoLegSecurityAltID_165.insert(LegSecurityAltIDSource_165.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_165);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_84;
    FIX::EncodedLegIssuer EncodedLegIssuer_84("DATA_1813154140");
    noLegs_0_1.set(EncodedLegIssuer_84);
    InstrumentLeg_84.insert(EncodedLegIssuer_84.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_84(556015689);
    noLegs_0_1.set(EncodedLegIssuerLen_84);
    InstrumentLeg_84.insert(EncodedLegIssuerLen_84.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_84("DATA_1345345803");
    noLegs_0_1.set(EncodedLegSecurityDesc_84);
    InstrumentLeg_84.insert(EncodedLegSecurityDesc_84.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_84(552160925);
    noLegs_0_1.set(EncodedLegSecurityDescLen_84);
    InstrumentLeg_84.insert(EncodedLegSecurityDescLen_84.getString());
    FIX::LegCFICode LegCFICode_84("STRING_370974384");
    noLegs_0_1.set(LegCFICode_84);
    InstrumentLeg_84.insert(LegCFICode_84.getString());
    FIX::LegContractMultiplier LegContractMultiplier_84;
    LegContractMultiplier_84.setString("12949");
    noLegs_0_1.set(LegContractMultiplier_84);
    InstrumentLeg_84.insert(LegContractMultiplier_84.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_84(1136556086);
    noLegs_0_1.set(LegContractMultiplierUnit_84);
    InstrumentLeg_84.insert(LegContractMultiplierUnit_84.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_84("MONTHYEAR_916288817");
    noLegs_0_1.set(LegContractSettlMonth_84);
    InstrumentLeg_84.insert(LegContractSettlMonth_84.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_84("COUNTRY_1785808098");
    noLegs_0_1.set(LegCountryOfIssue_84);
    InstrumentLeg_84.insert(LegCountryOfIssue_84.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_84("LOCALMKTDATE_1857122900");
    noLegs_0_1.set(LegCouponPaymentDate_84);
    InstrumentLeg_84.insert(LegCouponPaymentDate_84.getString());
    FIX::LegCouponRate LegCouponRate_84;
    LegCouponRate_84.setString("39.570000");
    noLegs_0_1.set(LegCouponRate_84);
    InstrumentLeg_84.insert(LegCouponRate_84.getString());
    FIX::LegCreditRating LegCreditRating_84("STRING_1921686087");
    noLegs_0_1.set(LegCreditRating_84);
    InstrumentLeg_84.insert(LegCreditRating_84.getString());
    FIX::LegCurrency LegCurrency_84("CAN");
    noLegs_0_1.set(LegCurrency_84);
    InstrumentLeg_84.insert(LegCurrency_84.getString());
    FIX::LegDatedDate LegDatedDate_84("LOCALMKTDATE_965763588");
    noLegs_0_1.set(LegDatedDate_84);
    InstrumentLeg_84.insert(LegDatedDate_84.getString());
    FIX::LegExerciseStyle LegExerciseStyle_84(1153716136);
    noLegs_0_1.set(LegExerciseStyle_84);
    InstrumentLeg_84.insert(LegExerciseStyle_84.getString());
    FIX::LegFactor LegFactor_84;
    LegFactor_84.setString("9580395");
    noLegs_0_1.set(LegFactor_84);
    InstrumentLeg_84.insert(LegFactor_84.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_84(1064883273);
    noLegs_0_1.set(LegFlowScheduleType_84);
    InstrumentLeg_84.insert(LegFlowScheduleType_84.getString());
    FIX::LegInstrRegistry LegInstrRegistry_84("STRING_42844874");
    noLegs_0_1.set(LegInstrRegistry_84);
    InstrumentLeg_84.insert(LegInstrRegistry_84.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_84("LOCALMKTDATE_1171334960");
    noLegs_0_1.set(LegInterestAccrualDate_84);
    InstrumentLeg_84.insert(LegInterestAccrualDate_84.getString());
    FIX::LegIssueDate LegIssueDate_84("LOCALMKTDATE_694611629");
    noLegs_0_1.set(LegIssueDate_84);
    InstrumentLeg_84.insert(LegIssueDate_84.getString());
    FIX::LegIssuer LegIssuer_84("STRING_1516697781");
    noLegs_0_1.set(LegIssuer_84);
    InstrumentLeg_84.insert(LegIssuer_84.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_84("STRING_1935677191");
    noLegs_0_1.set(LegLocaleOfIssue_84);
    InstrumentLeg_84.insert(LegLocaleOfIssue_84.getString());
    FIX::LegMaturityDate LegMaturityDate_84("LOCALMKTDATE_1048552765");
    noLegs_0_1.set(LegMaturityDate_84);
    InstrumentLeg_84.insert(LegMaturityDate_84.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_84("MONTHYEAR_1746329054");
    noLegs_0_1.set(LegMaturityMonthYear_84);
    InstrumentLeg_84.insert(LegMaturityMonthYear_84.getString());
    FIX::LegMaturityTime LegMaturityTime_84("TZTIMEONLY_434485639");
    noLegs_0_1.set(LegMaturityTime_84);
    InstrumentLeg_84.insert(LegMaturityTime_84.getString());
    FIX::LegOptAttribute LegOptAttribute_84('1');
    noLegs_0_1.set(LegOptAttribute_84);
    InstrumentLeg_84.insert(LegOptAttribute_84.getString());
    FIX::LegOptionRatio LegOptionRatio_84;
    LegOptionRatio_84.setString("5884629");
    noLegs_0_1.set(LegOptionRatio_84);
    InstrumentLeg_84.insert(LegOptionRatio_84.getString());
    FIX::LegPool LegPool_84("STRING_96014540");
    noLegs_0_1.set(LegPool_84);
    InstrumentLeg_84.insert(LegPool_84.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_84("STRING_2026984881");
    noLegs_0_1.set(LegPriceUnitOfMeasure_84);
    InstrumentLeg_84.insert(LegPriceUnitOfMeasure_84.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_84;
    LegPriceUnitOfMeasureQty_84.setString("8842495");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_84);
    InstrumentLeg_84.insert(LegPriceUnitOfMeasureQty_84.getString());
    FIX::LegProduct LegProduct_84(1909168680);
    noLegs_0_1.set(LegProduct_84);
    InstrumentLeg_84.insert(LegProduct_84.getString());
    FIX::LegPutOrCall LegPutOrCall_84(435516922);
    noLegs_0_1.set(LegPutOrCall_84);
    InstrumentLeg_84.insert(LegPutOrCall_84.getString());
    FIX::LegRatioQty LegRatioQty_84;
    LegRatioQty_84.setString("821116");
    noLegs_0_1.set(LegRatioQty_84);
    InstrumentLeg_84.insert(LegRatioQty_84.getString());
    FIX::LegRedemptionDate LegRedemptionDate_84("LOCALMKTDATE_313845958");
    noLegs_0_1.set(LegRedemptionDate_84);
    InstrumentLeg_84.insert(LegRedemptionDate_84.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_84("STRING_806491307");
    noLegs_0_1.set(LegRepoCollateralSecurityType_84);
    InstrumentLeg_84.insert(LegRepoCollateralSecurityType_84.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_84;
    LegRepurchaseRate_84.setString("66.050000");
    noLegs_0_1.set(LegRepurchaseRate_84);
    InstrumentLeg_84.insert(LegRepurchaseRate_84.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_84(1450402044);
    noLegs_0_1.set(LegRepurchaseTerm_84);
    InstrumentLeg_84.insert(LegRepurchaseTerm_84.getString());
    FIX::LegSecurityDesc LegSecurityDesc_84("STRING_1722780124");
    noLegs_0_1.set(LegSecurityDesc_84);
    InstrumentLeg_84.insert(LegSecurityDesc_84.getString());
    FIX::LegSecurityExchange LegSecurityExchange_84("EXCHANGE_1869214704");
    noLegs_0_1.set(LegSecurityExchange_84);
    InstrumentLeg_84.insert(LegSecurityExchange_84.getString());
    FIX::LegSecurityID LegSecurityID_84("STRING_1160041296");
    noLegs_0_1.set(LegSecurityID_84);
    InstrumentLeg_84.insert(LegSecurityID_84.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_84("STRING_1678030433");
    noLegs_0_1.set(LegSecurityIDSource_84);
    InstrumentLeg_84.insert(LegSecurityIDSource_84.getString());
    FIX::LegSecuritySubType LegSecuritySubType_84("STRING_1643417143");
    noLegs_0_1.set(LegSecuritySubType_84);
    InstrumentLeg_84.insert(LegSecuritySubType_84.getString());
    FIX::LegSecurityType LegSecurityType_84("STRING_352614013");
    noLegs_0_1.set(LegSecurityType_84);
    InstrumentLeg_84.insert(LegSecurityType_84.getString());
    FIX::LegSide LegSide_84('1');
    noLegs_0_1.set(LegSide_84);
    InstrumentLeg_84.insert(LegSide_84.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_84("STRING_461697083");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_84);
    InstrumentLeg_84.insert(LegStateOrProvinceOfIssue_84.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_84("USD");
    noLegs_0_1.set(LegStrikeCurrency_84);
    InstrumentLeg_84.insert(LegStrikeCurrency_84.getString());
    FIX::LegStrikePrice LegStrikePrice_84;
    LegStrikePrice_84.setString("15265803");
    noLegs_0_1.set(LegStrikePrice_84);
    InstrumentLeg_84.insert(LegStrikePrice_84.getString());
    FIX::LegSymbol LegSymbol_84("STRING_1549175023");
    noLegs_0_1.set(LegSymbol_84);
    InstrumentLeg_84.insert(LegSymbol_84.getString());
    FIX::LegSymbolSfx LegSymbolSfx_84("STRING_1475184020");
    noLegs_0_1.set(LegSymbolSfx_84);
    InstrumentLeg_84.insert(LegSymbolSfx_84.getString());
    FIX::LegTimeUnit LegTimeUnit_84("STRING_73708337");
    noLegs_0_1.set(LegTimeUnit_84);
    InstrumentLeg_84.insert(LegTimeUnit_84.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_84("STRING_918389156");
    noLegs_0_1.set(LegUnitOfMeasure_84);
    InstrumentLeg_84.insert(LegUnitOfMeasure_84.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_84;
    LegUnitOfMeasureQty_84.setString("12633775");
    noLegs_0_1.set(LegUnitOfMeasureQty_84);
    InstrumentLeg_84.insert(LegUnitOfMeasureQty_84.getString());
    all_values.push_back(InstrumentLeg_84);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_166;
      FIX::LegSecurityAltID LegSecurityAltID_166("STRING_517234562");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_166);
      LegSecAltIDGrp_NoLegSecurityAltID_166.insert(LegSecurityAltID_166.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_166("STRING_1697863203");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_166);
      LegSecAltIDGrp_NoLegSecurityAltID_166.insert(LegSecurityAltIDSource_166.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_166);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_167;
      FIX::LegSecurityAltID LegSecurityAltID_167("STRING_25861833");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_167);
      LegSecAltIDGrp_NoLegSecurityAltID_167.insert(LegSecurityAltID_167.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_167("STRING_1105697536");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_167);
      LegSecAltIDGrp_NoLegSecurityAltID_167.insert(LegSecurityAltIDSource_167.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_167);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_46;
  FIX::AttachmentPoint AttachmentPoint_46;
  AttachmentPoint_46.setString("77.430000");
  msg.set(AttachmentPoint_46);
  Instrument_46.insert(AttachmentPoint_46.getString());
  FIX::CFICode CFICode_46("STRING_2052846715");
  msg.set(CFICode_46);
  Instrument_46.insert(CFICode_46.getString());
  FIX::CPProgram CPProgram_46(1);
  msg.set(CPProgram_46);
  Instrument_46.insert(CPProgram_46.getString());
  FIX::CPRegType CPRegType_46("STRING_1555562775");
  msg.set(CPRegType_46);
  Instrument_46.insert(CPRegType_46.getString());
  FIX::CapPrice CapPrice_46;
  CapPrice_46.setString("3408799");
  msg.set(CapPrice_46);
  Instrument_46.insert(CapPrice_46.getString());
  FIX::ContractMultiplier ContractMultiplier_46;
  ContractMultiplier_46.setString("20720587");
  msg.set(ContractMultiplier_46);
  Instrument_46.insert(ContractMultiplier_46.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_46(1);
  msg.set(ContractMultiplierUnit_46);
  Instrument_46.insert(ContractMultiplierUnit_46.getString());
  FIX::ContractSettlMonth ContractSettlMonth_46("MONTHYEAR_1147371296");
  msg.set(ContractSettlMonth_46);
  Instrument_46.insert(ContractSettlMonth_46.getString());
  FIX::CountryOfIssue CountryOfIssue_46("COUNTRY_7981663");
  msg.set(CountryOfIssue_46);
  Instrument_46.insert(CountryOfIssue_46.getString());
  FIX::CouponPaymentDate CouponPaymentDate_46("LOCALMKTDATE_1172327130");
  msg.set(CouponPaymentDate_46);
  Instrument_46.insert(CouponPaymentDate_46.getString());
  FIX::CouponRate CouponRate_46;
  CouponRate_46.setString("77.730000");
  msg.set(CouponRate_46);
  Instrument_46.insert(CouponRate_46.getString());
  FIX::CreditRating CreditRating_46("STRING_1877196367");
  msg.set(CreditRating_46);
  Instrument_46.insert(CreditRating_46.getString());
  FIX::DatedDate DatedDate_46("LOCALMKTDATE_184884778");
  msg.set(DatedDate_46);
  Instrument_46.insert(DatedDate_46.getString());
  FIX::DetachmentPoint DetachmentPoint_46;
  DetachmentPoint_46.setString("45.580000");
  msg.set(DetachmentPoint_46);
  Instrument_46.insert(DetachmentPoint_46.getString());
  FIX::EncodedIssuer EncodedIssuer_46("DATA_1373129862");
  msg.set(EncodedIssuer_46);
  Instrument_46.insert(EncodedIssuer_46.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_46(537498791);
  msg.set(EncodedIssuerLen_46);
  Instrument_46.insert(EncodedIssuerLen_46.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_46("DATA_1746507677");
  msg.set(EncodedSecurityDesc_46);
  Instrument_46.insert(EncodedSecurityDesc_46.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_46(1834826945);
  msg.set(EncodedSecurityDescLen_46);
  Instrument_46.insert(EncodedSecurityDescLen_46.getString());
  FIX::ExerciseStyle ExerciseStyle_46(1);
  msg.set(ExerciseStyle_46);
  Instrument_46.insert(ExerciseStyle_46.getString());
  FIX::Factor Factor_46;
  Factor_46.setString("20503567");
  msg.set(Factor_46);
  Instrument_46.insert(Factor_46.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_46(false);
  msg.set(FlexProductEligibilityIndicator_46);
  Instrument_46.insert(FlexProductEligibilityIndicator_46.getString());
  FIX::FlexibleIndicator FlexibleIndicator_46(false);
  msg.set(FlexibleIndicator_46);
  Instrument_46.insert(FlexibleIndicator_46.getString());
  FIX::FloorPrice FloorPrice_46;
  FloorPrice_46.setString("13780571");
  msg.set(FloorPrice_46);
  Instrument_46.insert(FloorPrice_46.getString());
  FIX::FlowScheduleType FlowScheduleType_46(1);
  msg.set(FlowScheduleType_46);
  Instrument_46.insert(FlowScheduleType_46.getString());
  FIX::InstrRegistry InstrRegistry_46("STRING_216425823");
  msg.set(InstrRegistry_46);
  Instrument_46.insert(InstrRegistry_46.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_46('4');
  msg.set(InstrmtAssignmentMethod_46);
  Instrument_46.insert(InstrmtAssignmentMethod_46.getString());
  FIX::InterestAccrualDate InterestAccrualDate_46("LOCALMKTDATE_262409446");
  msg.set(InterestAccrualDate_46);
  Instrument_46.insert(InterestAccrualDate_46.getString());
  FIX::IssueDate IssueDate_46("LOCALMKTDATE_733660385");
  msg.set(IssueDate_46);
  Instrument_46.insert(IssueDate_46.getString());
  FIX::Issuer Issuer_46("STRING_44330580");
  msg.set(Issuer_46);
  Instrument_46.insert(Issuer_46.getString());
  FIX::ListMethod ListMethod_46(1);
  msg.set(ListMethod_46);
  Instrument_46.insert(ListMethod_46.getString());
  FIX::LocaleOfIssue LocaleOfIssue_46("STRING_1839357921");
  msg.set(LocaleOfIssue_46);
  Instrument_46.insert(LocaleOfIssue_46.getString());
  FIX::MaturityDate MaturityDate_46("LOCALMKTDATE_1838208323");
  msg.set(MaturityDate_46);
  Instrument_46.insert(MaturityDate_46.getString());
  FIX::MaturityMonthYear MaturityMonthYear_46("MONTHYEAR_193634346");
  msg.set(MaturityMonthYear_46);
  Instrument_46.insert(MaturityMonthYear_46.getString());
  FIX::MaturityTime MaturityTime_46("TZTIMEONLY_1681821317");
  msg.set(MaturityTime_46);
  Instrument_46.insert(MaturityTime_46.getString());
  FIX::MinPriceIncrement MinPriceIncrement_46;
  MinPriceIncrement_46.setString("12462874");
  msg.set(MinPriceIncrement_46);
  Instrument_46.insert(MinPriceIncrement_46.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_46;
  MinPriceIncrementAmount_46.setString("5345143");
  msg.set(MinPriceIncrementAmount_46);
  Instrument_46.insert(MinPriceIncrementAmount_46.getString());
  FIX::NTPositionLimit NTPositionLimit_46(1606396375);
  msg.set(NTPositionLimit_46);
  Instrument_46.insert(NTPositionLimit_46.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_46;
  NotionalPercentageOutstanding_46.setString("25.360000");
  msg.set(NotionalPercentageOutstanding_46);
  Instrument_46.insert(NotionalPercentageOutstanding_46.getString());
  FIX::OptAttribute OptAttribute_46('1');
  msg.set(OptAttribute_46);
  Instrument_46.insert(OptAttribute_46.getString());
  FIX::OptPayoutAmount OptPayoutAmount_46;
  OptPayoutAmount_46.setString("16143780");
  msg.set(OptPayoutAmount_46);
  Instrument_46.insert(OptPayoutAmount_46.getString());
  FIX::OptPayoutType OptPayoutType_46(1);
  msg.set(OptPayoutType_46);
  Instrument_46.insert(OptPayoutType_46.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_46;
  OriginalNotionalPercentageOutstanding_46.setString("97.570000");
  msg.set(OriginalNotionalPercentageOutstanding_46);
  Instrument_46.insert(OriginalNotionalPercentageOutstanding_46.getString());
  FIX::Pool Pool_46("STRING_1344090758");
  msg.set(Pool_46);
  Instrument_46.insert(Pool_46.getString());
  FIX::PositionLimit PositionLimit_46(177940796);
  msg.set(PositionLimit_46);
  Instrument_46.insert(PositionLimit_46.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_46("STRING_STD");
  msg.set(PriceQuoteMethod_46);
  Instrument_46.insert(PriceQuoteMethod_46.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_46("STRING_569736972");
  msg.set(PriceUnitOfMeasure_46);
  Instrument_46.insert(PriceUnitOfMeasure_46.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_46;
  PriceUnitOfMeasureQty_46.setString("7154395");
  msg.set(PriceUnitOfMeasureQty_46);
  Instrument_46.insert(PriceUnitOfMeasureQty_46.getString());
  FIX::Product Product_48(4);
  msg.set(Product_48);
  Instrument_46.insert(Product_48.getString());
  FIX::ProductComplex ProductComplex_46("STRING_257080270");
  msg.set(ProductComplex_46);
  Instrument_46.insert(ProductComplex_46.getString());
  FIX::PutOrCall PutOrCall_46(0);
  msg.set(PutOrCall_46);
  Instrument_46.insert(PutOrCall_46.getString());
  FIX::RedemptionDate RedemptionDate_46("LOCALMKTDATE_12181434");
  msg.set(RedemptionDate_46);
  Instrument_46.insert(RedemptionDate_46.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_46("STRING_1471003923");
  msg.set(RepoCollateralSecurityType_46);
  Instrument_46.insert(RepoCollateralSecurityType_46.getString());
  FIX::RepurchaseRate RepurchaseRate_46;
  RepurchaseRate_46.setString("51.960000");
  msg.set(RepurchaseRate_46);
  Instrument_46.insert(RepurchaseRate_46.getString());
  FIX::RepurchaseTerm RepurchaseTerm_46(1390238543);
  msg.set(RepurchaseTerm_46);
  Instrument_46.insert(RepurchaseTerm_46.getString());
  FIX::RestructuringType RestructuringType_46("STRING_MM");
  msg.set(RestructuringType_46);
  Instrument_46.insert(RestructuringType_46.getString());
  FIX::SecurityDesc SecurityDesc_46("STRING_126247371");
  msg.set(SecurityDesc_46);
  Instrument_46.insert(SecurityDesc_46.getString());
  FIX::SecurityExchange SecurityExchange_46("EXCHANGE_1884189568");
  msg.set(SecurityExchange_46);
  Instrument_46.insert(SecurityExchange_46.getString());
  FIX::SecurityGroup SecurityGroup_46("STRING_873561712");
  msg.set(SecurityGroup_46);
  Instrument_46.insert(SecurityGroup_46.getString());
  FIX::SecurityID SecurityID_46("STRING_859907757");
  msg.set(SecurityID_46);
  Instrument_46.insert(SecurityID_46.getString());
  FIX::SecurityIDSource SecurityIDSource_46("STRING_H");
  msg.set(SecurityIDSource_46);
  Instrument_46.insert(SecurityIDSource_46.getString());
  FIX::SecurityStatus SecurityStatus_46("STRING_1");
  msg.set(SecurityStatus_46);
  Instrument_46.insert(SecurityStatus_46.getString());
  FIX::SecuritySubType SecuritySubType_47("STRING_551782030");
  msg.set(SecuritySubType_47);
  Instrument_46.insert(SecuritySubType_47.getString());
  FIX::SecurityType SecurityType_48("STRING_MPT");
  msg.set(SecurityType_48);
  Instrument_46.insert(SecurityType_48.getString());
  FIX::Seniority Seniority_46("STRING_SD");
  msg.set(Seniority_46);
  Instrument_46.insert(Seniority_46.getString());
  FIX::SettlMethod SettlMethod_46('P');
  msg.set(SettlMethod_46);
  Instrument_46.insert(SettlMethod_46.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_46("STRING_718048626");
  msg.set(SettleOnOpenFlag_46);
  Instrument_46.insert(SettleOnOpenFlag_46.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_46("STRING_1889981674");
  msg.set(StateOrProvinceOfIssue_46);
  Instrument_46.insert(StateOrProvinceOfIssue_46.getString());
  FIX::StrikeCurrency StrikeCurrency_46("USD");
  msg.set(StrikeCurrency_46);
  Instrument_46.insert(StrikeCurrency_46.getString());
  FIX::StrikeMultiplier StrikeMultiplier_46;
  StrikeMultiplier_46.setString("14243836");
  msg.set(StrikeMultiplier_46);
  Instrument_46.insert(StrikeMultiplier_46.getString());
  FIX::StrikePrice StrikePrice_46;
  StrikePrice_46.setString("11594104");
  msg.set(StrikePrice_46);
  Instrument_46.insert(StrikePrice_46.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_46(1);
  msg.set(StrikePriceBoundaryMethod_46);
  Instrument_46.insert(StrikePriceBoundaryMethod_46.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_46;
  StrikePriceBoundaryPrecision_46.setString("34.160000");
  msg.set(StrikePriceBoundaryPrecision_46);
  Instrument_46.insert(StrikePriceBoundaryPrecision_46.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_46(4);
  msg.set(StrikePriceDeterminationMethod_46);
  Instrument_46.insert(StrikePriceDeterminationMethod_46.getString());
  FIX::StrikeValue StrikeValue_46;
  StrikeValue_46.setString("18572579");
  msg.set(StrikeValue_46);
  Instrument_46.insert(StrikeValue_46.getString());
  FIX::Symbol Symbol_46("STRING_44254084");
  msg.set(Symbol_46);
  Instrument_46.insert(Symbol_46.getString());
  FIX::SymbolSfx SymbolSfx_46("STRING_WI");
  msg.set(SymbolSfx_46);
  Instrument_46.insert(SymbolSfx_46.getString());
  FIX::TimeUnit TimeUnit_46("STRING_Min");
  msg.set(TimeUnit_46);
  Instrument_46.insert(TimeUnit_46.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_46(2);
  msg.set(UnderlyingPriceDeterminationMethod_46);
  Instrument_46.insert(UnderlyingPriceDeterminationMethod_46.getString());
  FIX::UnitOfMeasure UnitOfMeasure_46("STRING_oz_tr");
  msg.set(UnitOfMeasure_46);
  Instrument_46.insert(UnitOfMeasure_46.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_46;
  UnitOfMeasureQty_46.setString("10369987");
  msg.set(UnitOfMeasureQty_46);
  Instrument_46.insert(UnitOfMeasureQty_46.getString());
  FIX::ValuationMethod ValuationMethod_46("STRING_CDS");
  msg.set(ValuationMethod_46);
  Instrument_46.insert(ValuationMethod_46.getString());
  all_values.push_back(Instrument_46);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderCross::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_88;
    FIX::ComplexEventCondition ComplexEventCondition_88(2);
    noComplexEvents_0_0.set(ComplexEventCondition_88);
    ComplexEvents_NoComplexEvents_88.insert(ComplexEventCondition_88.getString());
    FIX::ComplexEventPrice ComplexEventPrice_88;
    ComplexEventPrice_88.setString("15559824");
    noComplexEvents_0_0.set(ComplexEventPrice_88);
    ComplexEvents_NoComplexEvents_88.insert(ComplexEventPrice_88.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_88(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_88);
    ComplexEvents_NoComplexEvents_88.insert(ComplexEventPriceBoundaryMethod_88.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_88;
    ComplexEventPriceBoundaryPrecision_88.setString("77.160000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_88);
    ComplexEvents_NoComplexEvents_88.insert(ComplexEventPriceBoundaryPrecision_88.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_88(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_88);
    ComplexEvents_NoComplexEvents_88.insert(ComplexEventPriceTimeType_88.getString());
    FIX::ComplexEventType ComplexEventType_88(9);
    noComplexEvents_0_0.set(ComplexEventType_88);
    ComplexEvents_NoComplexEvents_88.insert(ComplexEventType_88.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_88;
    ComplexOptPayoutAmount_88.setString("19329754");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_88);
    ComplexEvents_NoComplexEvents_88.insert(ComplexOptPayoutAmount_88.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_88);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_178;
      FIX::ComplexEventEndDate ComplexEventEndDate_178(FIX::UTCTIMESTAMP(8, 23, 46, 11, 6, 2009));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_178);
      ComplexEventDates_NoComplexEventDates_178.insert(ComplexEventEndDate_178.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_178(FIX::UTCTIMESTAMP(15, 52, 7, 3, 9, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_178);
      ComplexEventDates_NoComplexEventDates_178.insert(ComplexEventStartDate_178.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_178);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_357;
        FIX::ComplexEventEndTime ComplexEventEndTime_357(FIX::UTCTIMEONLY(17, 40, 14));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_357);
        ComplexEventTimes_NoComplexEventTimes_357.insert(ComplexEventEndTime_357.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_357(FIX::UTCTIMEONLY(21, 58, 52));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_357);
        ComplexEventTimes_NoComplexEventTimes_357.insert(ComplexEventStartTime_357.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_357);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_358;
        FIX::ComplexEventEndTime ComplexEventEndTime_358(FIX::UTCTIMEONLY(9, 23, 51));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_358);
        ComplexEventTimes_NoComplexEventTimes_358.insert(ComplexEventEndTime_358.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_358(FIX::UTCTIMEONLY(23, 36, 4));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_358);
        ComplexEventTimes_NoComplexEventTimes_358.insert(ComplexEventStartTime_358.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_358);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::NewOrderCross::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_93;
    FIX::EventDate EventDate_93("LOCALMKTDATE_1501302812");
    noEvents_0_0.set(EventDate_93);
    EvntGrp_NoEvents_93.insert(EventDate_93.getString());
    FIX::EventPx EventPx_93;
    EventPx_93.setString("14507282");
    noEvents_0_0.set(EventPx_93);
    EvntGrp_NoEvents_93.insert(EventPx_93.getString());
    FIX::EventText EventText_93("STRING_1983744490");
    noEvents_0_0.set(EventText_93);
    EvntGrp_NoEvents_93.insert(EventText_93.getString());
    FIX::EventTime EventTime_93(FIX::UTCTIMESTAMP(13, 23, 10, 1, 8, 2003));
    noEvents_0_0.set(EventTime_93);
    EvntGrp_NoEvents_93.insert(EventTime_93.getString());
    FIX::EventType EventType_93(9);
    noEvents_0_0.set(EventType_93);
    EvntGrp_NoEvents_93.insert(EventType_93.getString());
    all_values.push_back(EvntGrp_NoEvents_93);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_94;
    FIX::EventDate EventDate_94("LOCALMKTDATE_2086698327");
    noEvents_0_1.set(EventDate_94);
    EvntGrp_NoEvents_94.insert(EventDate_94.getString());
    FIX::EventPx EventPx_94;
    EventPx_94.setString("2098455");
    noEvents_0_1.set(EventPx_94);
    EvntGrp_NoEvents_94.insert(EventPx_94.getString());
    FIX::EventText EventText_94("STRING_1747157012");
    noEvents_0_1.set(EventText_94);
    EvntGrp_NoEvents_94.insert(EventText_94.getString());
    FIX::EventTime EventTime_94(FIX::UTCTIMESTAMP(4, 5, 59, 7, 3, 2007));
    noEvents_0_1.set(EventTime_94);
    EvntGrp_NoEvents_94.insert(EventTime_94.getString());
    FIX::EventType EventType_94(8);
    noEvents_0_1.set(EventType_94);
    EvntGrp_NoEvents_94.insert(EventType_94.getString());
    all_values.push_back(EvntGrp_NoEvents_94);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::NewOrderCross::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_95;
    FIX::EventDate EventDate_95("LOCALMKTDATE_1880409417");
    noEvents_0_2.set(EventDate_95);
    EvntGrp_NoEvents_95.insert(EventDate_95.getString());
    FIX::EventPx EventPx_95;
    EventPx_95.setString("18264353");
    noEvents_0_2.set(EventPx_95);
    EvntGrp_NoEvents_95.insert(EventPx_95.getString());
    FIX::EventText EventText_95("STRING_494616263");
    noEvents_0_2.set(EventText_95);
    EvntGrp_NoEvents_95.insert(EventText_95.getString());
    FIX::EventTime EventTime_95(FIX::UTCTIMESTAMP(2, 10, 8, 23, 3, 2017));
    noEvents_0_2.set(EventTime_95);
    EvntGrp_NoEvents_95.insert(EventTime_95.getString());
    FIX::EventType EventType_95(8);
    noEvents_0_2.set(EventType_95);
    EvntGrp_NoEvents_95.insert(EventType_95.getString());
    all_values.push_back(EvntGrp_NoEvents_95);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderCross::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_99;
    FIX::InstrumentPartyID InstrumentPartyID_99("STRING_1406523741");
    noInstrumentParties_0_0.set(InstrumentPartyID_99);
    InstrumentParties_NoInstrumentParties_99.insert(InstrumentPartyID_99.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_99('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_99);
    InstrumentParties_NoInstrumentParties_99.insert(InstrumentPartyIDSource_99.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_99(510820783);
    noInstrumentParties_0_0.set(InstrumentPartyRole_99);
    InstrumentParties_NoInstrumentParties_99.insert(InstrumentPartyRole_99.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_99);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209;
      FIX::InstrumentPartySubID InstrumentPartySubID_209("STRING_1654826401");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_209);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209.insert(InstrumentPartySubID_209.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_209(1683265550);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_209);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209.insert(InstrumentPartySubIDType_209.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210;
      FIX::InstrumentPartySubID InstrumentPartySubID_210("STRING_2025637592");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_210);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210.insert(InstrumentPartySubID_210.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_210(1210579762);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_210);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210.insert(InstrumentPartySubIDType_210.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211;
      FIX::InstrumentPartySubID InstrumentPartySubID_211("STRING_1622480229");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_211);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211.insert(InstrumentPartySubID_211.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_211(87999467);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_211);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211.insert(InstrumentPartySubIDType_211.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_100;
    FIX::InstrumentPartyID InstrumentPartyID_100("STRING_810253126");
    noInstrumentParties_0_1.set(InstrumentPartyID_100);
    InstrumentParties_NoInstrumentParties_100.insert(InstrumentPartyID_100.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_100('3');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_100);
    InstrumentParties_NoInstrumentParties_100.insert(InstrumentPartyIDSource_100.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_100(559969911);
    noInstrumentParties_0_1.set(InstrumentPartyRole_100);
    InstrumentParties_NoInstrumentParties_100.insert(InstrumentPartyRole_100.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_100);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212;
      FIX::InstrumentPartySubID InstrumentPartySubID_212("STRING_235027657");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_212);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212.insert(InstrumentPartySubID_212.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_212(329416447);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_212);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212.insert(InstrumentPartySubIDType_212.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderCross::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_102;
    FIX::SecurityAltID SecurityAltID_102("STRING_1375150346");
    noSecurityAltID_0_0.set(SecurityAltID_102);
    SecAltIDGrp_NoSecurityAltID_102.insert(SecurityAltID_102.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_102("STRING_2050177814");
    noSecurityAltID_0_0.set(SecurityAltIDSource_102);
    SecAltIDGrp_NoSecurityAltID_102.insert(SecurityAltIDSource_102.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_102);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_103;
    FIX::SecurityAltID SecurityAltID_103("STRING_39442535");
    noSecurityAltID_0_1.set(SecurityAltID_103);
    SecAltIDGrp_NoSecurityAltID_103.insert(SecurityAltID_103.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_103("STRING_1054102084");
    noSecurityAltID_0_1.set(SecurityAltIDSource_103);
    SecAltIDGrp_NoSecurityAltID_103.insert(SecurityAltIDSource_103.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_103);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_92;
  FIX::SecurityXML SecurityXML_93("XMLDATA_397310429");
  msg.set(SecurityXML_93);
  FIX::SecurityXMLLen SecurityXMLLen_46(1150905435);
  msg.set(SecurityXMLLen_46);
  FIX::SecurityXMLSchema SecurityXMLSchema_46("STRING_564571198");
  msg.set(SecurityXMLSchema_46);
  SecurityXML_92.insert(SecurityXMLSchema_46.getString());
  all_values.push_back(SecurityXML_92);

  // PegInstructions
  multiset<string> PegInstructions_3;
  FIX::PegLimitType PegLimitType_3(1);
  msg.set(PegLimitType_3);
  PegInstructions_3.insert(PegLimitType_3.getString());
  FIX::PegMoveType PegMoveType_3(1);
  msg.set(PegMoveType_3);
  PegInstructions_3.insert(PegMoveType_3.getString());
  FIX::PegOffsetType PegOffsetType_3(1);
  msg.set(PegOffsetType_3);
  PegInstructions_3.insert(PegOffsetType_3.getString());
  FIX::PegOffsetValue PegOffsetValue_3;
  PegOffsetValue_3.setString("3917659");
  msg.set(PegOffsetValue_3);
  PegInstructions_3.insert(PegOffsetValue_3.getString());
  FIX::PegPriceType PegPriceType_3(1);
  msg.set(PegPriceType_3);
  PegInstructions_3.insert(PegPriceType_3.getString());
  FIX::PegRoundDirection PegRoundDirection_3(1);
  msg.set(PegRoundDirection_3);
  PegInstructions_3.insert(PegRoundDirection_3.getString());
  FIX::PegScope PegScope_3(3);
  msg.set(PegScope_3);
  PegInstructions_3.insert(PegScope_3.getString());
  FIX::PegSecurityDesc PegSecurityDesc_3("STRING_19781109");
  msg.set(PegSecurityDesc_3);
  PegInstructions_3.insert(PegSecurityDesc_3.getString());
  FIX::PegSecurityID PegSecurityID_3("STRING_984973465");
  msg.set(PegSecurityID_3);
  PegInstructions_3.insert(PegSecurityID_3.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_3("STRING_1621246569");
  msg.set(PegSecurityIDSource_3);
  PegInstructions_3.insert(PegSecurityIDSource_3.getString());
  FIX::PegSymbol PegSymbol_3("STRING_1171943552");
  msg.set(PegSymbol_3);
  PegInstructions_3.insert(PegSymbol_3.getString());
  all_values.push_back(PegInstructions_3);

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::NewOrderCross::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_4;
    FIX::RootPartyID RootPartyID_4("STRING_1157028471");
    noRootPartyIDs_0_0.set(RootPartyID_4);
    RootParties_NoRootPartyIDs_4.insert(RootPartyID_4.getString());
    FIX::RootPartyIDSource RootPartyIDSource_4('1');
    noRootPartyIDs_0_0.set(RootPartyIDSource_4);
    RootParties_NoRootPartyIDs_4.insert(RootPartyIDSource_4.getString());
    FIX::RootPartyRole RootPartyRole_4(1702895980);
    noRootPartyIDs_0_0.set(RootPartyRole_4);
    RootParties_NoRootPartyIDs_4.insert(RootPartyRole_4.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_4);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_8;
      FIX::RootPartySubID RootPartySubID_8("STRING_1138096963");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_8);
      RootSubParties_NoRootPartySubIDs_8.insert(RootPartySubID_8.getString());
      FIX::RootPartySubIDType RootPartySubIDType_8(365665459);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_8);
      RootSubParties_NoRootPartySubIDs_8.insert(RootPartySubIDType_8.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_8);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_9;
      FIX::RootPartySubID RootPartySubID_9("STRING_1004743958");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_9);
      RootSubParties_NoRootPartySubIDs_9.insert(RootPartySubID_9.getString());
      FIX::RootPartySubIDType RootPartySubIDType_9(1698066875);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_9);
      RootSubParties_NoRootPartySubIDs_9.insert(RootPartySubIDType_9.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_9);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  // SideCrossOrdModGrp
  // Group SideCrossOrdModGrp.NoSides
  {
    FIX50SP2::NewOrderCross::NoSides noSides_0_0;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_1;
    FIX::Account Account_13("STRING_1239771615");
    noSides_0_0.set(Account_13);
    SideCrossOrdModGrp_NoSides_1.insert(Account_13.getString());
    FIX::AccountType AccountType_12(6);
    noSides_0_0.set(AccountType_12);
    SideCrossOrdModGrp_NoSides_1.insert(AccountType_12.getString());
    FIX::AcctIDSource AcctIDSource_6(3);
    noSides_0_0.set(AcctIDSource_6);
    SideCrossOrdModGrp_NoSides_1.insert(AcctIDSource_6.getString());
    FIX::AllocID AllocID_10("STRING_467438313");
    noSides_0_0.set(AllocID_10);
    SideCrossOrdModGrp_NoSides_1.insert(AllocID_10.getString());
    FIX::BookingType BookingType_17(0);
    noSides_0_0.set(BookingType_17);
    SideCrossOrdModGrp_NoSides_1.insert(BookingType_17.getString());
    FIX::BookingUnit BookingUnit_3('1');
    noSides_0_0.set(BookingUnit_3);
    SideCrossOrdModGrp_NoSides_1.insert(BookingUnit_3.getString());
    FIX::CashMargin CashMargin_3('2');
    noSides_0_0.set(CashMargin_3);
    SideCrossOrdModGrp_NoSides_1.insert(CashMargin_3.getString());
    FIX::ClOrdID ClOrdID_27("STRING_180004270");
    noSides_0_0.set(ClOrdID_27);
    SideCrossOrdModGrp_NoSides_1.insert(ClOrdID_27.getString());
    FIX::ClOrdLinkID ClOrdLinkID_5("STRING_594106958");
    noSides_0_0.set(ClOrdLinkID_5);
    SideCrossOrdModGrp_NoSides_1.insert(ClOrdLinkID_5.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_9("STRING_3");
    noSides_0_0.set(ClearingFeeIndicator_9);
    SideCrossOrdModGrp_NoSides_1.insert(ClearingFeeIndicator_9.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_2(0);
    noSides_0_0.set(CoveredOrUncovered_2);
    SideCrossOrdModGrp_NoSides_1.insert(CoveredOrUncovered_2.getString());
    FIX::CustOrderCapacity CustOrderCapacity_6(3);
    noSides_0_0.set(CustOrderCapacity_6);
    SideCrossOrdModGrp_NoSides_1.insert(CustOrderCapacity_6.getString());
    FIX::DayBookingInst DayBookingInst_3('1');
    noSides_0_0.set(DayBookingInst_3);
    SideCrossOrdModGrp_NoSides_1.insert(DayBookingInst_3.getString());
    FIX::EncodedText EncodedText_51("DATA_81137260");
    noSides_0_0.set(EncodedText_51);
    SideCrossOrdModGrp_NoSides_1.insert(EncodedText_51.getString());
    FIX::EncodedTextLen EncodedTextLen_51(486277970);
    noSides_0_0.set(EncodedTextLen_51);
    SideCrossOrdModGrp_NoSides_1.insert(EncodedTextLen_51.getString());
    FIX::ForexReq ForexReq_3(true);
    noSides_0_0.set(ForexReq_3);
    SideCrossOrdModGrp_NoSides_1.insert(ForexReq_3.getString());
    FIX::OrderCapacity OrderCapacity_19('A');
    noSides_0_0.set(OrderCapacity_19);
    SideCrossOrdModGrp_NoSides_1.insert(OrderCapacity_19.getString());
    FIX::OrderRestrictions OrderRestrictions_17("MULTIPLECHARVALUE_1");
    noSides_0_0.set(OrderRestrictions_17);
    SideCrossOrdModGrp_NoSides_1.insert(OrderRestrictions_17.getString());
    FIX::OrigClOrdID OrigClOrdID_5("STRING_455638679");
    noSides_0_0.set(OrigClOrdID_5);
    SideCrossOrdModGrp_NoSides_1.insert(OrigClOrdID_5.getString());
    FIX::PositionEffect PositionEffect_6('F');
    noSides_0_0.set(PositionEffect_6);
    SideCrossOrdModGrp_NoSides_1.insert(PositionEffect_6.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_3(true);
    noSides_0_0.set(PreTradeAnonymity_3);
    SideCrossOrdModGrp_NoSides_1.insert(PreTradeAnonymity_3.getString());
    FIX::PreallocMethod PreallocMethod_3('1');
    noSides_0_0.set(PreallocMethod_3);
    SideCrossOrdModGrp_NoSides_1.insert(PreallocMethod_3.getString());
    FIX::QtyType QtyType_15(1);
    noSides_0_0.set(QtyType_15);
    SideCrossOrdModGrp_NoSides_1.insert(QtyType_15.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_25("STRING_580616481");
    noSides_0_0.set(SecondaryClOrdID_25);
    SideCrossOrdModGrp_NoSides_1.insert(SecondaryClOrdID_25.getString());
    FIX::SettlCurrency SettlCurrency_12("USD");
    noSides_0_0.set(SettlCurrency_12);
    SideCrossOrdModGrp_NoSides_1.insert(SettlCurrency_12.getString());
    FIX::Side Side_20('5');
    noSides_0_0.set(Side_20);
    SideCrossOrdModGrp_NoSides_1.insert(Side_20.getString());
    FIX::SideComplianceID SideComplianceID_1("STRING_869032689");
    noSides_0_0.set(SideComplianceID_1);
    SideCrossOrdModGrp_NoSides_1.insert(SideComplianceID_1.getString());
    FIX::SideTimeInForce SideTimeInForce_1(FIX::UTCTIMESTAMP(7, 19, 28, 1, 9, 2014));
    noSides_0_0.set(SideTimeInForce_1);
    SideCrossOrdModGrp_NoSides_1.insert(SideTimeInForce_1.getString());
    FIX::SolicitedFlag SolicitedFlag_3(true);
    noSides_0_0.set(SolicitedFlag_3);
    SideCrossOrdModGrp_NoSides_1.insert(SolicitedFlag_3.getString());
    FIX::Text Text_51("STRING_960719071");
    noSides_0_0.set(Text_51);
    SideCrossOrdModGrp_NoSides_1.insert(Text_51.getString());
    FIX::TradeDate TradeDate_17("LOCALMKTDATE_245422831");
    noSides_0_0.set(TradeDate_17);
    SideCrossOrdModGrp_NoSides_1.insert(TradeDate_17.getString());
    FIX::TradeOriginationDate TradeOriginationDate_9("LOCALMKTDATE_1111994456");
    noSides_0_0.set(TradeOriginationDate_9);
    SideCrossOrdModGrp_NoSides_1.insert(TradeOriginationDate_9.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_1);

    // CommissionData
    multiset<string> CommissionData_11;
    FIX::CommCurrency CommCurrency_11("CAN");
    noSides_0_0.set(CommCurrency_11);
    CommissionData_11.insert(CommCurrency_11.getString());
    FIX::CommType CommType_11('3');
    noSides_0_0.set(CommType_11);
    CommissionData_11.insert(CommType_11.getString());
    FIX::Commission Commission_11;
    Commission_11.setString("12803629");
    noSides_0_0.set(Commission_11);
    CommissionData_11.insert(Commission_11.getString());
    FIX::FundRenewWaiv FundRenewWaiv_11('Y');
    noSides_0_0.set(FundRenewWaiv_11);
    CommissionData_11.insert(FundRenewWaiv_11.getString());
    all_values.push_back(CommissionData_11);

    // OrderQtyData
    multiset<string> OrderQtyData_8;
    FIX::CashOrderQty CashOrderQty_8;
    CashOrderQty_8.setString("8825029");
    noSides_0_0.set(CashOrderQty_8);
    OrderQtyData_8.insert(CashOrderQty_8.getString());
    FIX::OrderPercent OrderPercent_8;
    OrderPercent_8.setString("9.540000");
    noSides_0_0.set(OrderPercent_8);
    OrderQtyData_8.insert(OrderPercent_8.getString());
    FIX::OrderQty OrderQty_19;
    OrderQty_19.setString("5736264");
    noSides_0_0.set(OrderQty_19);
    OrderQtyData_8.insert(OrderQty_19.getString());
    FIX::RoundingDirection RoundingDirection_8('0');
    noSides_0_0.set(RoundingDirection_8);
    OrderQtyData_8.insert(RoundingDirection_8.getString());
    FIX::RoundingModulus RoundingModulus_8;
    RoundingModulus_8.setString("1252163");
    noSides_0_0.set(RoundingModulus_8);
    OrderQtyData_8.insert(RoundingModulus_8.getString());
    all_values.push_back(OrderQtyData_8);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_59;
      FIX::PartyID PartyID_59("STRING_591908363");
      noPartyIDs_0_1_0.set(PartyID_59);
      Parties_NoPartyIDs_59.insert(PartyID_59.getString());
      FIX::PartyIDSource PartyIDSource_59('3');
      noPartyIDs_0_1_0.set(PartyIDSource_59);
      Parties_NoPartyIDs_59.insert(PartyIDSource_59.getString());
      FIX::PartyRole PartyRole_59(65);
      noPartyIDs_0_1_0.set(PartyRole_59);
      Parties_NoPartyIDs_59.insert(PartyRole_59.getString());
      all_values.push_back(Parties_NoPartyIDs_59);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_119;
        FIX::PartySubID PartySubID_119("STRING_236351852");
        noPartySubIDs_0_0_2_0.set(PartySubID_119);
        PtysSubGrp_NoPartySubIDs_119.insert(PartySubID_119.getString());
        FIX::PartySubIDType PartySubIDType_119(1);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_119);
        PtysSubGrp_NoPartySubIDs_119.insert(PartySubIDType_119.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_119);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_120;
        FIX::PartySubID PartySubID_120("STRING_573674995");
        noPartySubIDs_0_0_2_1.set(PartySubID_120);
        PtysSubGrp_NoPartySubIDs_120.insert(PartySubID_120.getString());
        FIX::PartySubIDType PartySubIDType_120(31);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_120);
        PtysSubGrp_NoPartySubIDs_120.insert(PartySubIDType_120.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_120);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_60;
      FIX::PartyID PartyID_60("STRING_1202136306");
      noPartyIDs_0_1_1.set(PartyID_60);
      Parties_NoPartyIDs_60.insert(PartyID_60.getString());
      FIX::PartyIDSource PartyIDSource_60('G');
      noPartyIDs_0_1_1.set(PartyIDSource_60);
      Parties_NoPartyIDs_60.insert(PartyIDSource_60.getString());
      FIX::PartyRole PartyRole_60(1);
      noPartyIDs_0_1_1.set(PartyRole_60);
      Parties_NoPartyIDs_60.insert(PartyRole_60.getString());
      all_values.push_back(Parties_NoPartyIDs_60);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_121;
        FIX::PartySubID PartySubID_121("STRING_141758917");
        noPartySubIDs_0_1_2_0.set(PartySubID_121);
        PtysSubGrp_NoPartySubIDs_121.insert(PartySubID_121.getString());
        FIX::PartySubIDType PartySubIDType_121(10);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_121);
        PtysSubGrp_NoPartySubIDs_121.insert(PartySubIDType_121.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_121);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_5;
      FIX::AllocAccount AllocAccount_18("STRING_1013124999");
      noAllocs_0_1_0.set(AllocAccount_18);
      PreAllocGrp_NoAllocs_5.insert(AllocAccount_18.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_18(1010681203);
      noAllocs_0_1_0.set(AllocAcctIDSource_18);
      PreAllocGrp_NoAllocs_5.insert(AllocAcctIDSource_18.getString());
      FIX::AllocQty AllocQty_17;
      AllocQty_17.setString("14991641");
      noAllocs_0_1_0.set(AllocQty_17);
      PreAllocGrp_NoAllocs_5.insert(AllocQty_17.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_12("CHF");
      noAllocs_0_1_0.set(AllocSettlCurrency_12);
      PreAllocGrp_NoAllocs_5.insert(AllocSettlCurrency_12.getString());
      FIX::IndividualAllocID IndividualAllocID_18("STRING_906506571");
      noAllocs_0_1_0.set(IndividualAllocID_18);
      PreAllocGrp_NoAllocs_5.insert(IndividualAllocID_18.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_5);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_56;
        FIX::NestedPartyID NestedPartyID_56("STRING_776557749");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_56);
        NestedParties_NoNestedPartyIDs_56.insert(NestedPartyID_56.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_56('3');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_56);
        NestedParties_NoNestedPartyIDs_56.insert(NestedPartyIDSource_56.getString());
        FIX::NestedPartyRole NestedPartyRole_56(398076207);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_56);
        NestedParties_NoNestedPartyIDs_56.insert(NestedPartyRole_56.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_56);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_107;
          FIX::NestedPartySubID NestedPartySubID_107("STRING_1806026862");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_107);
          NstdPtysSubGrp_NoNestedPartySubIDs_107.insert(NestedPartySubID_107.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_107(971702666);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_107);
          NstdPtysSubGrp_NoNestedPartySubIDs_107.insert(NestedPartySubIDType_107.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_107);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_57;
        FIX::NestedPartyID NestedPartyID_57("STRING_1585643143");
        noNestedPartyIDs_0_0_2_1.set(NestedPartyID_57);
        NestedParties_NoNestedPartyIDs_57.insert(NestedPartyID_57.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_57('1');
        noNestedPartyIDs_0_0_2_1.set(NestedPartyIDSource_57);
        NestedParties_NoNestedPartyIDs_57.insert(NestedPartyIDSource_57.getString());
        FIX::NestedPartyRole NestedPartyRole_57(2000967804);
        noNestedPartyIDs_0_0_2_1.set(NestedPartyRole_57);
        NestedParties_NoNestedPartyIDs_57.insert(NestedPartyRole_57.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_57);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_108;
          FIX::NestedPartySubID NestedPartySubID_108("STRING_1586978619");
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubID_108);
          NstdPtysSubGrp_NoNestedPartySubIDs_108.insert(NestedPartySubID_108.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_108(1830704191);
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubIDType_108);
          NstdPtysSubGrp_NoNestedPartySubIDs_108.insert(NestedPartySubIDType_108.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_108);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_109;
          FIX::NestedPartySubID NestedPartySubID_109("STRING_296847011");
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubID_109);
          NstdPtysSubGrp_NoNestedPartySubIDs_109.insert(NestedPartySubID_109.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_109(1823330471);
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubIDType_109);
          NstdPtysSubGrp_NoNestedPartySubIDs_109.insert(NestedPartySubIDType_109.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_109);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_1);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoSides noSides_0_1;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_2;
    FIX::Account Account_14("STRING_16324161");
    noSides_0_1.set(Account_14);
    SideCrossOrdModGrp_NoSides_2.insert(Account_14.getString());
    FIX::AccountType AccountType_13(7);
    noSides_0_1.set(AccountType_13);
    SideCrossOrdModGrp_NoSides_2.insert(AccountType_13.getString());
    FIX::AcctIDSource AcctIDSource_7(5);
    noSides_0_1.set(AcctIDSource_7);
    SideCrossOrdModGrp_NoSides_2.insert(AcctIDSource_7.getString());
    FIX::AllocID AllocID_11("STRING_1218460467");
    noSides_0_1.set(AllocID_11);
    SideCrossOrdModGrp_NoSides_2.insert(AllocID_11.getString());
    FIX::BookingType BookingType_18(0);
    noSides_0_1.set(BookingType_18);
    SideCrossOrdModGrp_NoSides_2.insert(BookingType_18.getString());
    FIX::BookingUnit BookingUnit_4('2');
    noSides_0_1.set(BookingUnit_4);
    SideCrossOrdModGrp_NoSides_2.insert(BookingUnit_4.getString());
    FIX::CashMargin CashMargin_4('2');
    noSides_0_1.set(CashMargin_4);
    SideCrossOrdModGrp_NoSides_2.insert(CashMargin_4.getString());
    FIX::ClOrdID ClOrdID_28("STRING_750112072");
    noSides_0_1.set(ClOrdID_28);
    SideCrossOrdModGrp_NoSides_2.insert(ClOrdID_28.getString());
    FIX::ClOrdLinkID ClOrdLinkID_6("STRING_638997809");
    noSides_0_1.set(ClOrdLinkID_6);
    SideCrossOrdModGrp_NoSides_2.insert(ClOrdLinkID_6.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_10("STRING_2");
    noSides_0_1.set(ClearingFeeIndicator_10);
    SideCrossOrdModGrp_NoSides_2.insert(ClearingFeeIndicator_10.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_3(1);
    noSides_0_1.set(CoveredOrUncovered_3);
    SideCrossOrdModGrp_NoSides_2.insert(CoveredOrUncovered_3.getString());
    FIX::CustOrderCapacity CustOrderCapacity_7(2);
    noSides_0_1.set(CustOrderCapacity_7);
    SideCrossOrdModGrp_NoSides_2.insert(CustOrderCapacity_7.getString());
    FIX::DayBookingInst DayBookingInst_4('1');
    noSides_0_1.set(DayBookingInst_4);
    SideCrossOrdModGrp_NoSides_2.insert(DayBookingInst_4.getString());
    FIX::EncodedText EncodedText_52("DATA_874301254");
    noSides_0_1.set(EncodedText_52);
    SideCrossOrdModGrp_NoSides_2.insert(EncodedText_52.getString());
    FIX::EncodedTextLen EncodedTextLen_52(1624871024);
    noSides_0_1.set(EncodedTextLen_52);
    SideCrossOrdModGrp_NoSides_2.insert(EncodedTextLen_52.getString());
    FIX::ForexReq ForexReq_4(true);
    noSides_0_1.set(ForexReq_4);
    SideCrossOrdModGrp_NoSides_2.insert(ForexReq_4.getString());
    FIX::OrderCapacity OrderCapacity_20('A');
    noSides_0_1.set(OrderCapacity_20);
    SideCrossOrdModGrp_NoSides_2.insert(OrderCapacity_20.getString());
    FIX::OrderRestrictions OrderRestrictions_18("MULTIPLECHARVALUE_2");
    noSides_0_1.set(OrderRestrictions_18);
    SideCrossOrdModGrp_NoSides_2.insert(OrderRestrictions_18.getString());
    FIX::OrigClOrdID OrigClOrdID_6("STRING_1075406176");
    noSides_0_1.set(OrigClOrdID_6);
    SideCrossOrdModGrp_NoSides_2.insert(OrigClOrdID_6.getString());
    FIX::PositionEffect PositionEffect_7('R');
    noSides_0_1.set(PositionEffect_7);
    SideCrossOrdModGrp_NoSides_2.insert(PositionEffect_7.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_4(false);
    noSides_0_1.set(PreTradeAnonymity_4);
    SideCrossOrdModGrp_NoSides_2.insert(PreTradeAnonymity_4.getString());
    FIX::PreallocMethod PreallocMethod_4('0');
    noSides_0_1.set(PreallocMethod_4);
    SideCrossOrdModGrp_NoSides_2.insert(PreallocMethod_4.getString());
    FIX::QtyType QtyType_16(2);
    noSides_0_1.set(QtyType_16);
    SideCrossOrdModGrp_NoSides_2.insert(QtyType_16.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_26("STRING_1351165369");
    noSides_0_1.set(SecondaryClOrdID_26);
    SideCrossOrdModGrp_NoSides_2.insert(SecondaryClOrdID_26.getString());
    FIX::SettlCurrency SettlCurrency_13("CHF");
    noSides_0_1.set(SettlCurrency_13);
    SideCrossOrdModGrp_NoSides_2.insert(SettlCurrency_13.getString());
    FIX::Side Side_21('C');
    noSides_0_1.set(Side_21);
    SideCrossOrdModGrp_NoSides_2.insert(Side_21.getString());
    FIX::SideComplianceID SideComplianceID_2("STRING_2104687610");
    noSides_0_1.set(SideComplianceID_2);
    SideCrossOrdModGrp_NoSides_2.insert(SideComplianceID_2.getString());
    FIX::SideTimeInForce SideTimeInForce_2(FIX::UTCTIMESTAMP(23, 53, 29, 6, 2, 2007));
    noSides_0_1.set(SideTimeInForce_2);
    SideCrossOrdModGrp_NoSides_2.insert(SideTimeInForce_2.getString());
    FIX::SolicitedFlag SolicitedFlag_4(false);
    noSides_0_1.set(SolicitedFlag_4);
    SideCrossOrdModGrp_NoSides_2.insert(SolicitedFlag_4.getString());
    FIX::Text Text_52("STRING_1824269697");
    noSides_0_1.set(Text_52);
    SideCrossOrdModGrp_NoSides_2.insert(Text_52.getString());
    FIX::TradeDate TradeDate_18("LOCALMKTDATE_402588806");
    noSides_0_1.set(TradeDate_18);
    SideCrossOrdModGrp_NoSides_2.insert(TradeDate_18.getString());
    FIX::TradeOriginationDate TradeOriginationDate_10("LOCALMKTDATE_1759583826");
    noSides_0_1.set(TradeOriginationDate_10);
    SideCrossOrdModGrp_NoSides_2.insert(TradeOriginationDate_10.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_2);

    // CommissionData
    multiset<string> CommissionData_12;
    FIX::CommCurrency CommCurrency_12("JPY");
    noSides_0_1.set(CommCurrency_12);
    CommissionData_12.insert(CommCurrency_12.getString());
    FIX::CommType CommType_12('6');
    noSides_0_1.set(CommType_12);
    CommissionData_12.insert(CommType_12.getString());
    FIX::Commission Commission_12;
    Commission_12.setString("19654628");
    noSides_0_1.set(Commission_12);
    CommissionData_12.insert(Commission_12.getString());
    FIX::FundRenewWaiv FundRenewWaiv_12('Y');
    noSides_0_1.set(FundRenewWaiv_12);
    CommissionData_12.insert(FundRenewWaiv_12.getString());
    all_values.push_back(CommissionData_12);

    // OrderQtyData
    multiset<string> OrderQtyData_9;
    FIX::CashOrderQty CashOrderQty_9;
    CashOrderQty_9.setString("1021548");
    noSides_0_1.set(CashOrderQty_9);
    OrderQtyData_9.insert(CashOrderQty_9.getString());
    FIX::OrderPercent OrderPercent_9;
    OrderPercent_9.setString("2.480000");
    noSides_0_1.set(OrderPercent_9);
    OrderQtyData_9.insert(OrderPercent_9.getString());
    FIX::OrderQty OrderQty_20;
    OrderQty_20.setString("1984722");
    noSides_0_1.set(OrderQty_20);
    OrderQtyData_9.insert(OrderQty_20.getString());
    FIX::RoundingDirection RoundingDirection_9('1');
    noSides_0_1.set(RoundingDirection_9);
    OrderQtyData_9.insert(RoundingDirection_9.getString());
    FIX::RoundingModulus RoundingModulus_9;
    RoundingModulus_9.setString("16967953");
    noSides_0_1.set(RoundingModulus_9);
    OrderQtyData_9.insert(RoundingModulus_9.getString());
    all_values.push_back(OrderQtyData_9);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_61;
      FIX::PartyID PartyID_61("STRING_839063494");
      noPartyIDs_1_1_0.set(PartyID_61);
      Parties_NoPartyIDs_61.insert(PartyID_61.getString());
      FIX::PartyIDSource PartyIDSource_61('C');
      noPartyIDs_1_1_0.set(PartyIDSource_61);
      Parties_NoPartyIDs_61.insert(PartyIDSource_61.getString());
      FIX::PartyRole PartyRole_61(39);
      noPartyIDs_1_1_0.set(PartyRole_61);
      Parties_NoPartyIDs_61.insert(PartyRole_61.getString());
      all_values.push_back(Parties_NoPartyIDs_61);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_122;
        FIX::PartySubID PartySubID_122("STRING_665999321");
        noPartySubIDs_1_0_2_0.set(PartySubID_122);
        PtysSubGrp_NoPartySubIDs_122.insert(PartySubID_122.getString());
        FIX::PartySubIDType PartySubIDType_122(8);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_122);
        PtysSubGrp_NoPartySubIDs_122.insert(PartySubIDType_122.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_122);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_123;
        FIX::PartySubID PartySubID_123("STRING_1623454180");
        noPartySubIDs_1_0_2_1.set(PartySubID_123);
        PtysSubGrp_NoPartySubIDs_123.insert(PartySubID_123.getString());
        FIX::PartySubIDType PartySubIDType_123(32);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_123);
        PtysSubGrp_NoPartySubIDs_123.insert(PartySubIDType_123.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_123);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_62;
      FIX::PartyID PartyID_62("STRING_335257150");
      noPartyIDs_1_1_1.set(PartyID_62);
      Parties_NoPartyIDs_62.insert(PartyID_62.getString());
      FIX::PartyIDSource PartyIDSource_62('1');
      noPartyIDs_1_1_1.set(PartyIDSource_62);
      Parties_NoPartyIDs_62.insert(PartyIDSource_62.getString());
      FIX::PartyRole PartyRole_62(20);
      noPartyIDs_1_1_1.set(PartyRole_62);
      Parties_NoPartyIDs_62.insert(PartyRole_62.getString());
      all_values.push_back(Parties_NoPartyIDs_62);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_124;
        FIX::PartySubID PartySubID_124("STRING_1644094270");
        noPartySubIDs_1_1_2_0.set(PartySubID_124);
        PtysSubGrp_NoPartySubIDs_124.insert(PartySubID_124.getString());
        FIX::PartySubIDType PartySubIDType_124(9);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_124);
        PtysSubGrp_NoPartySubIDs_124.insert(PartySubIDType_124.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_124);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_63;
      FIX::PartyID PartyID_63("STRING_1232270841");
      noPartyIDs_1_1_2.set(PartyID_63);
      Parties_NoPartyIDs_63.insert(PartyID_63.getString());
      FIX::PartyIDSource PartyIDSource_63('H');
      noPartyIDs_1_1_2.set(PartyIDSource_63);
      Parties_NoPartyIDs_63.insert(PartyIDSource_63.getString());
      FIX::PartyRole PartyRole_63(85);
      noPartyIDs_1_1_2.set(PartyRole_63);
      Parties_NoPartyIDs_63.insert(PartyRole_63.getString());
      all_values.push_back(Parties_NoPartyIDs_63);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_125;
        FIX::PartySubID PartySubID_125("STRING_62400198");
        noPartySubIDs_1_2_2_0.set(PartySubID_125);
        PtysSubGrp_NoPartySubIDs_125.insert(PartySubID_125.getString());
        FIX::PartySubIDType PartySubIDType_125(10);
        noPartySubIDs_1_2_2_0.set(PartySubIDType_125);
        PtysSubGrp_NoPartySubIDs_125.insert(PartySubIDType_125.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_125);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_126;
        FIX::PartySubID PartySubID_126("STRING_1224840749");
        noPartySubIDs_1_2_2_1.set(PartySubID_126);
        PtysSubGrp_NoPartySubIDs_126.insert(PartySubID_126.getString());
        FIX::PartySubIDType PartySubIDType_126(20);
        noPartySubIDs_1_2_2_1.set(PartySubIDType_126);
        PtysSubGrp_NoPartySubIDs_126.insert(PartySubIDType_126.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_126);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_1_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_6;
      FIX::AllocAccount AllocAccount_19("STRING_1042819973");
      noAllocs_1_1_0.set(AllocAccount_19);
      PreAllocGrp_NoAllocs_6.insert(AllocAccount_19.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_19(405274171);
      noAllocs_1_1_0.set(AllocAcctIDSource_19);
      PreAllocGrp_NoAllocs_6.insert(AllocAcctIDSource_19.getString());
      FIX::AllocQty AllocQty_18;
      AllocQty_18.setString("19305281");
      noAllocs_1_1_0.set(AllocQty_18);
      PreAllocGrp_NoAllocs_6.insert(AllocQty_18.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_13("GBP");
      noAllocs_1_1_0.set(AllocSettlCurrency_13);
      PreAllocGrp_NoAllocs_6.insert(AllocSettlCurrency_13.getString());
      FIX::IndividualAllocID IndividualAllocID_19("STRING_54615549");
      noAllocs_1_1_0.set(IndividualAllocID_19);
      PreAllocGrp_NoAllocs_6.insert(IndividualAllocID_19.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_6);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_58;
        FIX::NestedPartyID NestedPartyID_58("STRING_1877624906");
        noNestedPartyIDs_1_0_2_0.set(NestedPartyID_58);
        NestedParties_NoNestedPartyIDs_58.insert(NestedPartyID_58.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_58('8');
        noNestedPartyIDs_1_0_2_0.set(NestedPartyIDSource_58);
        NestedParties_NoNestedPartyIDs_58.insert(NestedPartyIDSource_58.getString());
        FIX::NestedPartyRole NestedPartyRole_58(1349815900);
        noNestedPartyIDs_1_0_2_0.set(NestedPartyRole_58);
        NestedParties_NoNestedPartyIDs_58.insert(NestedPartyRole_58.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_58);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_110;
          FIX::NestedPartySubID NestedPartySubID_110("STRING_1124453979");
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubID_110);
          NstdPtysSubGrp_NoNestedPartySubIDs_110.insert(NestedPartySubID_110.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_110(2015815221);
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubIDType_110);
          NstdPtysSubGrp_NoNestedPartySubIDs_110.insert(NestedPartySubIDType_110.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_110);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_111;
          FIX::NestedPartySubID NestedPartySubID_111("STRING_2116022291");
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubID_111);
          NstdPtysSubGrp_NoNestedPartySubIDs_111.insert(NestedPartySubID_111.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_111(600424512);
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubIDType_111);
          NstdPtysSubGrp_NoNestedPartySubIDs_111.insert(NestedPartySubIDType_111.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_111);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      noSides_0_1.addGroup(noAllocs_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_1_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_7;
      FIX::AllocAccount AllocAccount_20("STRING_1915564122");
      noAllocs_1_1_1.set(AllocAccount_20);
      PreAllocGrp_NoAllocs_7.insert(AllocAccount_20.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_20(303795793);
      noAllocs_1_1_1.set(AllocAcctIDSource_20);
      PreAllocGrp_NoAllocs_7.insert(AllocAcctIDSource_20.getString());
      FIX::AllocQty AllocQty_19;
      AllocQty_19.setString("11522948");
      noAllocs_1_1_1.set(AllocQty_19);
      PreAllocGrp_NoAllocs_7.insert(AllocQty_19.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_14("CHF");
      noAllocs_1_1_1.set(AllocSettlCurrency_14);
      PreAllocGrp_NoAllocs_7.insert(AllocSettlCurrency_14.getString());
      FIX::IndividualAllocID IndividualAllocID_20("STRING_648905455");
      noAllocs_1_1_1.set(IndividualAllocID_20);
      PreAllocGrp_NoAllocs_7.insert(IndividualAllocID_20.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_7);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_59;
        FIX::NestedPartyID NestedPartyID_59("STRING_1504374570");
        noNestedPartyIDs_1_1_2_0.set(NestedPartyID_59);
        NestedParties_NoNestedPartyIDs_59.insert(NestedPartyID_59.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_59('3');
        noNestedPartyIDs_1_1_2_0.set(NestedPartyIDSource_59);
        NestedParties_NoNestedPartyIDs_59.insert(NestedPartyIDSource_59.getString());
        FIX::NestedPartyRole NestedPartyRole_59(2018309546);
        noNestedPartyIDs_1_1_2_0.set(NestedPartyRole_59);
        NestedParties_NoNestedPartyIDs_59.insert(NestedPartyRole_59.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_59);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_112;
          FIX::NestedPartySubID NestedPartySubID_112("STRING_371117045");
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubID_112);
          NstdPtysSubGrp_NoNestedPartySubIDs_112.insert(NestedPartySubID_112.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_112(323861919);
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubIDType_112);
          NstdPtysSubGrp_NoNestedPartySubIDs_112.insert(NestedPartySubIDType_112.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_112);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_113;
          FIX::NestedPartySubID NestedPartySubID_113("STRING_1490788562");
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubID_113);
          NstdPtysSubGrp_NoNestedPartySubIDs_113.insert(NestedPartySubID_113.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_113(1613939205);
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubIDType_113);
          NstdPtysSubGrp_NoNestedPartySubIDs_113.insert(NestedPartySubIDType_113.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_113);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_114;
          FIX::NestedPartySubID NestedPartySubID_114("STRING_4751541");
          noNestedPartySubIDs_1_1_0_3_2.set(NestedPartySubID_114);
          NstdPtysSubGrp_NoNestedPartySubIDs_114.insert(NestedPartySubID_114.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_114(386124887);
          noNestedPartySubIDs_1_1_0_3_2.set(NestedPartySubIDType_114);
          NstdPtysSubGrp_NoNestedPartySubIDs_114.insert(NestedPartySubIDType_114.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_114);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_2);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_0);
      }
      noSides_0_1.addGroup(noAllocs_1_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_1_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_8;
      FIX::AllocAccount AllocAccount_21("STRING_2019213376");
      noAllocs_1_1_2.set(AllocAccount_21);
      PreAllocGrp_NoAllocs_8.insert(AllocAccount_21.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_21(1935279667);
      noAllocs_1_1_2.set(AllocAcctIDSource_21);
      PreAllocGrp_NoAllocs_8.insert(AllocAcctIDSource_21.getString());
      FIX::AllocQty AllocQty_20;
      AllocQty_20.setString("7243114");
      noAllocs_1_1_2.set(AllocQty_20);
      PreAllocGrp_NoAllocs_8.insert(AllocQty_20.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_15("CAN");
      noAllocs_1_1_2.set(AllocSettlCurrency_15);
      PreAllocGrp_NoAllocs_8.insert(AllocSettlCurrency_15.getString());
      FIX::IndividualAllocID IndividualAllocID_21("STRING_611809762");
      noAllocs_1_1_2.set(IndividualAllocID_21);
      PreAllocGrp_NoAllocs_8.insert(IndividualAllocID_21.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_8);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_60;
        FIX::NestedPartyID NestedPartyID_60("STRING_736090613");
        noNestedPartyIDs_1_2_2_0.set(NestedPartyID_60);
        NestedParties_NoNestedPartyIDs_60.insert(NestedPartyID_60.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_60('1');
        noNestedPartyIDs_1_2_2_0.set(NestedPartyIDSource_60);
        NestedParties_NoNestedPartyIDs_60.insert(NestedPartyIDSource_60.getString());
        FIX::NestedPartyRole NestedPartyRole_60(1943586540);
        noNestedPartyIDs_1_2_2_0.set(NestedPartyRole_60);
        NestedParties_NoNestedPartyIDs_60.insert(NestedPartyRole_60.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_60);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_115;
          FIX::NestedPartySubID NestedPartySubID_115("STRING_1829957236");
          noNestedPartySubIDs_1_2_0_3_0.set(NestedPartySubID_115);
          NstdPtysSubGrp_NoNestedPartySubIDs_115.insert(NestedPartySubID_115.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_115(1912125183);
          noNestedPartySubIDs_1_2_0_3_0.set(NestedPartySubIDType_115);
          NstdPtysSubGrp_NoNestedPartySubIDs_115.insert(NestedPartySubIDType_115.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_115);

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_116;
          FIX::NestedPartySubID NestedPartySubID_116("STRING_313485456");
          noNestedPartySubIDs_1_2_0_3_1.set(NestedPartySubID_116);
          NstdPtysSubGrp_NoNestedPartySubIDs_116.insert(NestedPartySubID_116.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_116(1598037710);
          noNestedPartySubIDs_1_2_0_3_1.set(NestedPartySubIDType_116);
          NstdPtysSubGrp_NoNestedPartySubIDs_116.insert(NestedPartySubIDType_116.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_116);

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_117;
          FIX::NestedPartySubID NestedPartySubID_117("STRING_68437329");
          noNestedPartySubIDs_1_2_0_3_2.set(NestedPartySubID_117);
          NstdPtysSubGrp_NoNestedPartySubIDs_117.insert(NestedPartySubID_117.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_117(1465780289);
          noNestedPartySubIDs_1_2_0_3_2.set(NestedPartySubIDType_117);
          NstdPtysSubGrp_NoNestedPartySubIDs_117.insert(NestedPartySubIDType_117.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_117);

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_2);
        }
        noAllocs_1_1_2.addGroup(noNestedPartyIDs_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_61;
        FIX::NestedPartyID NestedPartyID_61("STRING_796463675");
        noNestedPartyIDs_1_2_2_1.set(NestedPartyID_61);
        NestedParties_NoNestedPartyIDs_61.insert(NestedPartyID_61.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_61('3');
        noNestedPartyIDs_1_2_2_1.set(NestedPartyIDSource_61);
        NestedParties_NoNestedPartyIDs_61.insert(NestedPartyIDSource_61.getString());
        FIX::NestedPartyRole NestedPartyRole_61(2114685745);
        noNestedPartyIDs_1_2_2_1.set(NestedPartyRole_61);
        NestedParties_NoNestedPartyIDs_61.insert(NestedPartyRole_61.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_61);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_118;
          FIX::NestedPartySubID NestedPartySubID_118("STRING_1844915628");
          noNestedPartySubIDs_1_2_1_3_0.set(NestedPartySubID_118);
          NstdPtysSubGrp_NoNestedPartySubIDs_118.insert(NestedPartySubID_118.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_118(275918944);
          noNestedPartySubIDs_1_2_1_3_0.set(NestedPartySubIDType_118);
          NstdPtysSubGrp_NoNestedPartySubIDs_118.insert(NestedPartySubIDType_118.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_118);

          noNestedPartyIDs_1_2_2_1.addGroup(noNestedPartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_119;
          FIX::NestedPartySubID NestedPartySubID_119("STRING_1844663276");
          noNestedPartySubIDs_1_2_1_3_1.set(NestedPartySubID_119);
          NstdPtysSubGrp_NoNestedPartySubIDs_119.insert(NestedPartySubID_119.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_119(2110863440);
          noNestedPartySubIDs_1_2_1_3_1.set(NestedPartySubIDType_119);
          NstdPtysSubGrp_NoNestedPartySubIDs_119.insert(NestedPartySubIDType_119.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_119);

          noNestedPartyIDs_1_2_2_1.addGroup(noNestedPartySubIDs_1_2_1_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_120;
          FIX::NestedPartySubID NestedPartySubID_120("STRING_647035989");
          noNestedPartySubIDs_1_2_1_3_2.set(NestedPartySubID_120);
          NstdPtysSubGrp_NoNestedPartySubIDs_120.insert(NestedPartySubID_120.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_120(21041547);
          noNestedPartySubIDs_1_2_1_3_2.set(NestedPartySubIDType_120);
          NstdPtysSubGrp_NoNestedPartySubIDs_120.insert(NestedPartySubIDType_120.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_120);

          noNestedPartyIDs_1_2_2_1.addGroup(noNestedPartySubIDs_1_2_1_3_2);
        }
        noAllocs_1_1_2.addGroup(noNestedPartyIDs_1_2_2_1);
      }
      noSides_0_1.addGroup(noAllocs_1_1_2);
    }
    msg.addGroup(noSides_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_14;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_14("JPY");
  msg.set(BenchmarkCurveCurrency_14);
  SpreadOrBenchmarkCurveData_14.insert(BenchmarkCurveCurrency_14.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_14("STRING_EUREPO");
  msg.set(BenchmarkCurveName_14);
  SpreadOrBenchmarkCurveData_14.insert(BenchmarkCurveName_14.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_14("STRING_1840293242");
  msg.set(BenchmarkCurvePoint_14);
  SpreadOrBenchmarkCurveData_14.insert(BenchmarkCurvePoint_14.getString());
  FIX::BenchmarkPrice BenchmarkPrice_14;
  BenchmarkPrice_14.setString("21327049");
  msg.set(BenchmarkPrice_14);
  SpreadOrBenchmarkCurveData_14.insert(BenchmarkPrice_14.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_14(1961072756);
  msg.set(BenchmarkPriceType_14);
  SpreadOrBenchmarkCurveData_14.insert(BenchmarkPriceType_14.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_14("STRING_417121055");
  msg.set(BenchmarkSecurityID_14);
  SpreadOrBenchmarkCurveData_14.insert(BenchmarkSecurityID_14.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_14("STRING_460697452");
  msg.set(BenchmarkSecurityIDSource_14);
  SpreadOrBenchmarkCurveData_14.insert(BenchmarkSecurityIDSource_14.getString());
  FIX::Spread Spread_14;
  Spread_14.setString("18034843");
  msg.set(Spread_14);
  SpreadOrBenchmarkCurveData_14.insert(Spread_14.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_14);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::NewOrderCross::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_23;
    FIX::StipulationType StipulationType_23("STRING_INSURED");
    noStipulations_0_0.set(StipulationType_23);
    Stipulations_NoStipulations_23.insert(StipulationType_23.getString());
    FIX::StipulationValue StipulationValue_23("STRING_392091290");
    noStipulations_0_0.set(StipulationValue_23);
    Stipulations_NoStipulations_23.insert(StipulationValue_23.getString());
    all_values.push_back(Stipulations_NoStipulations_23);

    msg.addGroup(noStipulations_0_0);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderCross::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_4;
    FIX::StrategyParameterName StrategyParameterName_4("STRING_462417781");
    noStrategyParameters_0_0.set(StrategyParameterName_4);
    StrategyParametersGrp_NoStrategyParameters_4.insert(StrategyParameterName_4.getString());
    FIX::StrategyParameterType StrategyParameterType_4(5);
    noStrategyParameters_0_0.set(StrategyParameterType_4);
    StrategyParametersGrp_NoStrategyParameters_4.insert(StrategyParameterType_4.getString());
    FIX::StrategyParameterValue StrategyParameterValue_4("STRING_525546420");
    noStrategyParameters_0_0.set(StrategyParameterValue_4);
    StrategyParametersGrp_NoStrategyParameters_4.insert(StrategyParameterValue_4.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_4);

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_5;
    FIX::StrategyParameterName StrategyParameterName_5("STRING_227059316");
    noStrategyParameters_0_1.set(StrategyParameterName_5);
    StrategyParametersGrp_NoStrategyParameters_5.insert(StrategyParameterName_5.getString());
    FIX::StrategyParameterType StrategyParameterType_5(14);
    noStrategyParameters_0_1.set(StrategyParameterType_5);
    StrategyParametersGrp_NoStrategyParameters_5.insert(StrategyParameterType_5.getString());
    FIX::StrategyParameterValue StrategyParameterValue_5("STRING_2123584130");
    noStrategyParameters_0_1.set(StrategyParameterValue_5);
    StrategyParametersGrp_NoStrategyParameters_5.insert(StrategyParameterValue_5.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_5);

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderCross::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_6;
    FIX::TradingSessionID TradingSessionID_37("STRING_4");
    noTradingSessions_0_0.set(TradingSessionID_37);
    TrdgSesGrp_NoTradingSessions_6.insert(TradingSessionID_37.getString());
    FIX::TradingSessionSubID TradingSessionSubID_37("STRING_2");
    noTradingSessions_0_0.set(TradingSessionSubID_37);
    TrdgSesGrp_NoTradingSessions_6.insert(TradingSessionSubID_37.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_6);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_7;
    FIX::TradingSessionID TradingSessionID_38("STRING_6");
    noTradingSessions_0_1.set(TradingSessionID_38);
    TrdgSesGrp_NoTradingSessions_7.insert(TradingSessionID_38.getString());
    FIX::TradingSessionSubID TradingSessionSubID_38("STRING_1");
    noTradingSessions_0_1.set(TradingSessionSubID_38);
    TrdgSesGrp_NoTradingSessions_7.insert(TradingSessionSubID_38.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_7);

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::NewOrderCross::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_8;
    FIX::TradingSessionID TradingSessionID_39("STRING_1");
    noTradingSessions_0_2.set(TradingSessionID_39);
    TrdgSesGrp_NoTradingSessions_8.insert(TradingSessionID_39.getString());
    FIX::TradingSessionSubID TradingSessionSubID_39("STRING_2");
    noTradingSessions_0_2.set(TradingSessionSubID_39);
    TrdgSesGrp_NoTradingSessions_8.insert(TradingSessionSubID_39.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_8);

    msg.addGroup(noTradingSessions_0_2);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_3;
  FIX::TriggerAction TriggerAction_3('1');
  msg.set(TriggerAction_3);
  TriggeringInstruction_3.insert(TriggerAction_3.getString());
  FIX::TriggerNewPrice TriggerNewPrice_3;
  TriggerNewPrice_3.setString("2960975");
  msg.set(TriggerNewPrice_3);
  TriggeringInstruction_3.insert(TriggerNewPrice_3.getString());
  FIX::TriggerNewQty TriggerNewQty_3;
  TriggerNewQty_3.setString("2968494");
  msg.set(TriggerNewQty_3);
  TriggeringInstruction_3.insert(TriggerNewQty_3.getString());
  FIX::TriggerOrderType TriggerOrderType_3('2');
  msg.set(TriggerOrderType_3);
  TriggeringInstruction_3.insert(TriggerOrderType_3.getString());
  FIX::TriggerPrice TriggerPrice_3;
  TriggerPrice_3.setString("3171390");
  msg.set(TriggerPrice_3);
  TriggeringInstruction_3.insert(TriggerPrice_3.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_3('U');
  msg.set(TriggerPriceDirection_3);
  TriggeringInstruction_3.insert(TriggerPriceDirection_3.getString());
  FIX::TriggerPriceType TriggerPriceType_3('6');
  msg.set(TriggerPriceType_3);
  TriggeringInstruction_3.insert(TriggerPriceType_3.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_3('1');
  msg.set(TriggerPriceTypeScope_3);
  TriggeringInstruction_3.insert(TriggerPriceTypeScope_3.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_3("STRING_1443827424");
  msg.set(TriggerSecurityDesc_3);
  TriggeringInstruction_3.insert(TriggerSecurityDesc_3.getString());
  FIX::TriggerSecurityID TriggerSecurityID_3("STRING_725804183");
  msg.set(TriggerSecurityID_3);
  TriggeringInstruction_3.insert(TriggerSecurityID_3.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_3("STRING_156521261");
  msg.set(TriggerSecurityIDSource_3);
  TriggeringInstruction_3.insert(TriggerSecurityIDSource_3.getString());
  FIX::TriggerSymbol TriggerSymbol_3("STRING_1860948480");
  msg.set(TriggerSymbol_3);
  TriggeringInstruction_3.insert(TriggerSymbol_3.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_3("STRING_1186501635");
  msg.set(TriggerTradingSessionID_3);
  TriggeringInstruction_3.insert(TriggerTradingSessionID_3.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_3("STRING_1960005587");
  msg.set(TriggerTradingSessionSubID_3);
  TriggeringInstruction_3.insert(TriggerTradingSessionSubID_3.getString());
  FIX::TriggerType TriggerType_3('2');
  msg.set(TriggerType_3);
  TriggeringInstruction_3.insert(TriggerType_3.getString());
  all_values.push_back(TriggeringInstruction_3);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderCross::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_59;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_59("DATA_204613229");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingIssuer_59.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_59(1585468481);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingIssuerLen_59.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_59("DATA_167750657");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingSecurityDesc_59.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_59(309765464);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingSecurityDescLen_59.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_59;
    UnderlyingAdjustedQuantity_59.setString("21110149");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_59);
    UnderlyingInstrument_59.insert(UnderlyingAdjustedQuantity_59.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_59;
    UnderlyingAllocationPercent_59.setString("99.740000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_59);
    UnderlyingInstrument_59.insert(UnderlyingAllocationPercent_59.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_59;
    UnderlyingAttachmentPoint_59.setString("31.560000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_59);
    UnderlyingInstrument_59.insert(UnderlyingAttachmentPoint_59.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_59("STRING_2087115383");
    noUnderlyings_0_0.set(UnderlyingCFICode_59);
    UnderlyingInstrument_59.insert(UnderlyingCFICode_59.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_59("STRING_690306619");
    noUnderlyings_0_0.set(UnderlyingCPProgram_59);
    UnderlyingInstrument_59.insert(UnderlyingCPProgram_59.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_59("STRING_465337489");
    noUnderlyings_0_0.set(UnderlyingCPRegType_59);
    UnderlyingInstrument_59.insert(UnderlyingCPRegType_59.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_59;
    UnderlyingCapValue_59.setString("7121958");
    noUnderlyings_0_0.set(UnderlyingCapValue_59);
    UnderlyingInstrument_59.insert(UnderlyingCapValue_59.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_59;
    UnderlyingCashAmount_59.setString("13263443");
    noUnderlyings_0_0.set(UnderlyingCashAmount_59);
    UnderlyingInstrument_59.insert(UnderlyingCashAmount_59.getString());
    FIX::UnderlyingCashType UnderlyingCashType_59("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_59);
    UnderlyingInstrument_59.insert(UnderlyingCashType_59.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_59;
    UnderlyingContractMultiplier_59.setString("13111137");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_59);
    UnderlyingInstrument_59.insert(UnderlyingContractMultiplier_59.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_59(1659814006);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_59);
    UnderlyingInstrument_59.insert(UnderlyingContractMultiplierUnit_59.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_59("COUNTRY_149529293");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_59);
    UnderlyingInstrument_59.insert(UnderlyingCountryOfIssue_59.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_59("LOCALMKTDATE_1607211297");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_59);
    UnderlyingInstrument_59.insert(UnderlyingCouponPaymentDate_59.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_59;
    UnderlyingCouponRate_59.setString("34.820000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_59);
    UnderlyingInstrument_59.insert(UnderlyingCouponRate_59.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_59("STRING_776620656");
    noUnderlyings_0_0.set(UnderlyingCreditRating_59);
    UnderlyingInstrument_59.insert(UnderlyingCreditRating_59.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_59("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_59);
    UnderlyingInstrument_59.insert(UnderlyingCurrency_59.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_59;
    UnderlyingCurrentValue_59.setString("15172035");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_59);
    UnderlyingInstrument_59.insert(UnderlyingCurrentValue_59.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_59;
    UnderlyingDetachmentPoint_59.setString("88.660000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_59);
    UnderlyingInstrument_59.insert(UnderlyingDetachmentPoint_59.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_59;
    UnderlyingDirtyPrice_59.setString("8565414");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_59);
    UnderlyingInstrument_59.insert(UnderlyingDirtyPrice_59.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_59;
    UnderlyingEndPrice_59.setString("955241");
    noUnderlyings_0_0.set(UnderlyingEndPrice_59);
    UnderlyingInstrument_59.insert(UnderlyingEndPrice_59.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_59;
    UnderlyingEndValue_59.setString("2763201");
    noUnderlyings_0_0.set(UnderlyingEndValue_59);
    UnderlyingInstrument_59.insert(UnderlyingEndValue_59.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_59(570006273);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_59);
    UnderlyingInstrument_59.insert(UnderlyingExerciseStyle_59.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_59;
    UnderlyingFXRate_59.setString("12820257");
    noUnderlyings_0_0.set(UnderlyingFXRate_59);
    UnderlyingInstrument_59.insert(UnderlyingFXRate_59.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_59('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_59);
    UnderlyingInstrument_59.insert(UnderlyingFXRateCalc_59.getString());
    FIX::UnderlyingFactor UnderlyingFactor_59;
    UnderlyingFactor_59.setString("13124019");
    noUnderlyings_0_0.set(UnderlyingFactor_59);
    UnderlyingInstrument_59.insert(UnderlyingFactor_59.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_59(987358612);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_59);
    UnderlyingInstrument_59.insert(UnderlyingFlowScheduleType_59.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_59("STRING_293455296");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_59);
    UnderlyingInstrument_59.insert(UnderlyingInstrRegistry_59.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_59("LOCALMKTDATE_750386756");
    noUnderlyings_0_0.set(UnderlyingIssueDate_59);
    UnderlyingInstrument_59.insert(UnderlyingIssueDate_59.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_59("STRING_1155109269");
    noUnderlyings_0_0.set(UnderlyingIssuer_59);
    UnderlyingInstrument_59.insert(UnderlyingIssuer_59.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_59("STRING_603220761");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_59);
    UnderlyingInstrument_59.insert(UnderlyingLocaleOfIssue_59.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_59("LOCALMKTDATE_713918010");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_59);
    UnderlyingInstrument_59.insert(UnderlyingMaturityDate_59.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_59("MONTHYEAR_1549919243");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_59);
    UnderlyingInstrument_59.insert(UnderlyingMaturityMonthYear_59.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_59("TZTIMEONLY_1331623917");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_59);
    UnderlyingInstrument_59.insert(UnderlyingMaturityTime_59.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_59;
    UnderlyingNotionalPercentageOutstanding_59.setString("97.450000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_59);
    UnderlyingInstrument_59.insert(UnderlyingNotionalPercentageOutstanding_59.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_59('9');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_59);
    UnderlyingInstrument_59.insert(UnderlyingOptAttribute_59.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_59;
    UnderlyingOriginalNotionalPercentageOutstanding_59.setString("14.060000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_59);
    UnderlyingInstrument_59.insert(UnderlyingOriginalNotionalPercentageOutstanding_59.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_59("STRING_1365745638");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_59);
    UnderlyingInstrument_59.insert(UnderlyingPriceUnitOfMeasure_59.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_59;
    UnderlyingPriceUnitOfMeasureQty_59.setString("14190865");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_59);
    UnderlyingInstrument_59.insert(UnderlyingPriceUnitOfMeasureQty_59.getString());
    FIX::UnderlyingProduct UnderlyingProduct_59(1966435325);
    noUnderlyings_0_0.set(UnderlyingProduct_59);
    UnderlyingInstrument_59.insert(UnderlyingProduct_59.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_59(529375771);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_59);
    UnderlyingInstrument_59.insert(UnderlyingPutOrCall_59.getString());
    FIX::UnderlyingPx UnderlyingPx_59;
    UnderlyingPx_59.setString("9314168");
    noUnderlyings_0_0.set(UnderlyingPx_59);
    UnderlyingInstrument_59.insert(UnderlyingPx_59.getString());
    FIX::UnderlyingQty UnderlyingQty_59;
    UnderlyingQty_59.setString("21159646");
    noUnderlyings_0_0.set(UnderlyingQty_59);
    UnderlyingInstrument_59.insert(UnderlyingQty_59.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_59("LOCALMKTDATE_2136587069");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_59);
    UnderlyingInstrument_59.insert(UnderlyingRedemptionDate_59.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_59("STRING_740596731");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_59);
    UnderlyingInstrument_59.insert(UnderlyingRepoCollateralSecurityType_59.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_59;
    UnderlyingRepurchaseRate_59.setString("16.260000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_59);
    UnderlyingInstrument_59.insert(UnderlyingRepurchaseRate_59.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_59(1913453782);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_59);
    UnderlyingInstrument_59.insert(UnderlyingRepurchaseTerm_59.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_59("STRING_153310748");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_59);
    UnderlyingInstrument_59.insert(UnderlyingRestructuringType_59.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_59("STRING_114821543");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityDesc_59.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_59("EXCHANGE_2033252649");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityExchange_59.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_59("STRING_1009852189");
    noUnderlyings_0_0.set(UnderlyingSecurityID_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityID_59.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_59("STRING_210345643");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityIDSource_59.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_59("STRING_162089129");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_59);
    UnderlyingInstrument_59.insert(UnderlyingSecuritySubType_59.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_59("STRING_1579858463");
    noUnderlyings_0_0.set(UnderlyingSecurityType_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityType_59.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_59("STRING_1492371378");
    noUnderlyings_0_0.set(UnderlyingSeniority_59);
    UnderlyingInstrument_59.insert(UnderlyingSeniority_59.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_59("STRING_250931196");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_59);
    UnderlyingInstrument_59.insert(UnderlyingSettlMethod_59.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_59(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_59);
    UnderlyingInstrument_59.insert(UnderlyingSettlementType_59.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_59;
    UnderlyingStartValue_59.setString("3322463");
    noUnderlyings_0_0.set(UnderlyingStartValue_59);
    UnderlyingInstrument_59.insert(UnderlyingStartValue_59.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_59("STRING_544386492");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_59);
    UnderlyingInstrument_59.insert(UnderlyingStateOrProvinceOfIssue_59.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_59("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_59);
    UnderlyingInstrument_59.insert(UnderlyingStrikeCurrency_59.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_59;
    UnderlyingStrikePrice_59.setString("11476072");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_59);
    UnderlyingInstrument_59.insert(UnderlyingStrikePrice_59.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_59("STRING_61597856");
    noUnderlyings_0_0.set(UnderlyingSymbol_59);
    UnderlyingInstrument_59.insert(UnderlyingSymbol_59.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_59("STRING_889791207");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_59);
    UnderlyingInstrument_59.insert(UnderlyingSymbolSfx_59.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_59("STRING_331747522");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_59);
    UnderlyingInstrument_59.insert(UnderlyingTimeUnit_59.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_59("STRING_715147602");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_59);
    UnderlyingInstrument_59.insert(UnderlyingUnitOfMeasure_59.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_59;
    UnderlyingUnitOfMeasureQty_59.setString("9825334");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_59);
    UnderlyingInstrument_59.insert(UnderlyingUnitOfMeasureQty_59.getString());
    all_values.push_back(UnderlyingInstrument_59);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_120;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_120("STRING_2080893240");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_120);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_120.insert(UnderlyingSecurityAltID_120.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_120("STRING_254136312");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_120);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_120.insert(UnderlyingSecurityAltIDSource_120.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_120);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_121;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_121("STRING_1947660605");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_121);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_121.insert(UnderlyingSecurityAltID_121.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_121("STRING_462785364");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_121);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_121.insert(UnderlyingSecurityAltIDSource_121.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_121);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_122;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_122("STRING_1185553209");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_122);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_122.insert(UnderlyingSecurityAltID_122.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_122("STRING_1916141575");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_122);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_122.insert(UnderlyingSecurityAltIDSource_122.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_122);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_106;
      FIX::UnderlyingStipType UnderlyingStipType_106("STRING_1926149940");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_106);
      UnderlyingStipulations_NoUnderlyingStips_106.insert(UnderlyingStipType_106.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_106("STRING_513759553");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_106);
      UnderlyingStipulations_NoUnderlyingStips_106.insert(UnderlyingStipValue_106.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_106);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_125;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_125("STRING_2079460688");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_125);
      UndlyInstrumentParties_NoUndlyInstrumentParties_125.insert(UnderlyingInstrumentPartyID_125.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_125('6');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_125);
      UndlyInstrumentParties_NoUndlyInstrumentParties_125.insert(UnderlyingInstrumentPartyIDSource_125.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_125(103627920);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_125);
      UndlyInstrumentParties_NoUndlyInstrumentParties_125.insert(UnderlyingInstrumentPartyRole_125.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_125);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_251("STRING_838926739");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_251);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251.insert(UnderlyingInstrumentPartySubID_251.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_251(265717049);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_251);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251.insert(UnderlyingInstrumentPartySubIDType_251.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_252("STRING_374204044");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_252);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252.insert(UnderlyingInstrumentPartySubID_252.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_252(183814470);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_252);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252.insert(UnderlyingInstrumentPartySubIDType_252.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_126;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_126("STRING_516648245");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_126);
      UndlyInstrumentParties_NoUndlyInstrumentParties_126.insert(UnderlyingInstrumentPartyID_126.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_126('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_126);
      UndlyInstrumentParties_NoUndlyInstrumentParties_126.insert(UnderlyingInstrumentPartyIDSource_126.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_126(516060812);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_126);
      UndlyInstrumentParties_NoUndlyInstrumentParties_126.insert(UnderlyingInstrumentPartyRole_126.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_126);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_253("STRING_466660629");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_253);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253.insert(UnderlyingInstrumentPartySubID_253.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_253(2003416424);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_253);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253.insert(UnderlyingInstrumentPartySubIDType_253.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_127;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_127("STRING_61158343");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_127);
      UndlyInstrumentParties_NoUndlyInstrumentParties_127.insert(UnderlyingInstrumentPartyID_127.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_127('5');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_127);
      UndlyInstrumentParties_NoUndlyInstrumentParties_127.insert(UnderlyingInstrumentPartyIDSource_127.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_127(745723984);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_127);
      UndlyInstrumentParties_NoUndlyInstrumentParties_127.insert(UnderlyingInstrumentPartyRole_127.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_127);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_254("STRING_1243406087");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_254);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254.insert(UnderlyingInstrumentPartySubID_254.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_254(1728257406);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_254);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254.insert(UnderlyingInstrumentPartySubIDType_254.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_9;
  FIX::Yield Yield_9;
  Yield_9.setString("11.460000");
  msg.set(Yield_9);
  YieldData_9.insert(Yield_9.getString());
  FIX::YieldCalcDate YieldCalcDate_9("LOCALMKTDATE_1176815680");
  msg.set(YieldCalcDate_9);
  YieldData_9.insert(YieldCalcDate_9.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_9("LOCALMKTDATE_1982393719");
  msg.set(YieldRedemptionDate_9);
  YieldData_9.insert(YieldRedemptionDate_9.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_9;
  YieldRedemptionPrice_9.setString("1743081");
  msg.set(YieldRedemptionPrice_9);
  YieldData_9.insert(YieldRedemptionPrice_9.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_9(1639601044);
  msg.set(YieldRedemptionPriceType_9);
  YieldData_9.insert(YieldRedemptionPriceType_9.getString());
  FIX::YieldType YieldType_9("STRING_TENDER");
  msg.set(YieldType_9);
  YieldData_9.insert(YieldType_9.getString());
  all_values.push_back(YieldData_9);


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
