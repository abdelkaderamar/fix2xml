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
  multiset<string> all_compo_names;
  multiset<string> NewOrderCross_0;
  FIX::CancellationRights CancellationRights_3('Y');
  msg.set(CancellationRights_3);
  NewOrderCross_0.insert(CancellationRights_3.getString());
  FIX::ComplianceID ComplianceID_4("STRING_2099583122");
  msg.set(ComplianceID_4);
  NewOrderCross_0.insert(ComplianceID_4.getString());
  FIX::CrossID CrossID_3("STRING_138070035");
  msg.set(CrossID_3);
  NewOrderCross_0.insert(CrossID_3.getString());
  FIX::CrossPrioritization CrossPrioritization_2(0);
  msg.set(CrossPrioritization_2);
  NewOrderCross_0.insert(CrossPrioritization_2.getString());
  FIX::CrossType CrossType_3(4);
  msg.set(CrossType_3);
  NewOrderCross_0.insert(CrossType_3.getString());
  FIX::Currency Currency_45("EUR");
  msg.set(Currency_45);
  NewOrderCross_0.insert(Currency_45.getString());
  FIX::Designation Designation_3("STRING_2087207945");
  msg.set(Designation_3);
  NewOrderCross_0.insert(Designation_3.getString());
  FIX::EffectiveTime EffectiveTime_3(FIX::UTCTIMESTAMP(1, 41, 27, 27, 11, 2016));
  msg.set(EffectiveTime_3);
  NewOrderCross_0.insert(EffectiveTime_3.getString());
  FIX::ExDestination ExDestination_2("EXCHANGE_569200392");
  msg.set(ExDestination_2);
  NewOrderCross_0.insert(ExDestination_2.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_2('C');
  msg.set(ExDestinationIDSource_2);
  NewOrderCross_0.insert(ExDestinationIDSource_2.getString());
  FIX::ExecInst ExecInst_6("MULTIPLECHARVALUE_W");
  msg.set(ExecInst_6);
  NewOrderCross_0.insert(ExecInst_6.getString());
  FIX::ExpireDate ExpireDate_7("LOCALMKTDATE_1127188749");
  msg.set(ExpireDate_7);
  NewOrderCross_0.insert(ExpireDate_7.getString());
  FIX::ExpireTime ExpireTime_8(FIX::UTCTIMESTAMP(20, 43, 16, 20, 9, 2004));
  msg.set(ExpireTime_8);
  NewOrderCross_0.insert(ExpireTime_8.getString());
  FIX::GTBookingInst GTBookingInst_3(0);
  msg.set(GTBookingInst_3);
  NewOrderCross_0.insert(GTBookingInst_3.getString());
  FIX::HandlInst HandlInst_3('3');
  msg.set(HandlInst_3);
  NewOrderCross_0.insert(HandlInst_3.getString());
  FIX::IOIID IOIID_3("STRING_995592585");
  msg.set(IOIID_3);
  NewOrderCross_0.insert(IOIID_3.getString());
  FIX::LocateReqd LocateReqd_2(false);
  msg.set(LocateReqd_2);
  NewOrderCross_0.insert(LocateReqd_2.getString());
  FIX::MatchIncrement MatchIncrement_3;
  MatchIncrement_3.setString("13542818");
  msg.set(MatchIncrement_3);
  NewOrderCross_0.insert(MatchIncrement_3.getString());
  FIX::MaxFloor MaxFloor_3;
  MaxFloor_3.setString("4054796");
  msg.set(MaxFloor_3);
  NewOrderCross_0.insert(MaxFloor_3.getString());
  FIX::MaxPriceLevels MaxPriceLevels_3(220995139);
  msg.set(MaxPriceLevels_3);
  NewOrderCross_0.insert(MaxPriceLevels_3.getString());
  FIX::MaxShow MaxShow_3;
  MaxShow_3.setString("14923519");
  msg.set(MaxShow_3);
  NewOrderCross_0.insert(MaxShow_3.getString());
  FIX::MinQty MinQty_6;
  MinQty_6.setString("2859368");
  msg.set(MinQty_6);
  NewOrderCross_0.insert(MinQty_6.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_3('N');
  msg.set(MoneyLaunderingStatus_3);
  NewOrderCross_0.insert(MoneyLaunderingStatus_3.getString());
  FIX::OrdType OrdType_48('K');
  msg.set(OrdType_48);
  NewOrderCross_0.insert(OrdType_48.getString());
  FIX::ParticipationRate ParticipationRate_3;
  ParticipationRate_3.setString("99.590000");
  msg.set(ParticipationRate_3);
  NewOrderCross_0.insert(ParticipationRate_3.getString());
  FIX::PrevClosePx PrevClosePx_3;
  PrevClosePx_3.setString("20447352");
  msg.set(PrevClosePx_3);
  NewOrderCross_0.insert(PrevClosePx_3.getString());
  FIX::Price Price_14;
  Price_14.setString("10951419");
  msg.set(Price_14);
  NewOrderCross_0.insert(Price_14.getString());
  FIX::PriceProtectionScope PriceProtectionScope_3('0');
  msg.set(PriceProtectionScope_3);
  NewOrderCross_0.insert(PriceProtectionScope_3.getString());
  FIX::PriceType PriceType_28(10);
  msg.set(PriceType_28);
  NewOrderCross_0.insert(PriceType_28.getString());
  FIX::ProcessCode ProcessCode_7('0');
  msg.set(ProcessCode_7);
  NewOrderCross_0.insert(ProcessCode_7.getString());
  FIX::QuoteID QuoteID_4("STRING_1842326083");
  msg.set(QuoteID_4);
  NewOrderCross_0.insert(QuoteID_4.getString());
  FIX::RegistID RegistID_3("STRING_1554305771");
  msg.set(RegistID_3);
  NewOrderCross_0.insert(RegistID_3.getString());
  FIX::SettlDate SettlDate_38("LOCALMKTDATE_2029564572");
  msg.set(SettlDate_38);
  NewOrderCross_0.insert(SettlDate_38.getString());
  FIX::SettlType SettlType_18("STRING_0");
  msg.set(SettlType_18);
  NewOrderCross_0.insert(SettlType_18.getString());
  FIX::StopPx StopPx_3;
  StopPx_3.setString("4229136");
  msg.set(StopPx_3);
  NewOrderCross_0.insert(StopPx_3.getString());
  FIX::TargetStrategy TargetStrategy_3(3);
  msg.set(TargetStrategy_3);
  NewOrderCross_0.insert(TargetStrategy_3.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_3("STRING_1391231577");
  msg.set(TargetStrategyParameters_3);
  NewOrderCross_0.insert(TargetStrategyParameters_3.getString());
  FIX::TimeInForce TimeInForce_32('7');
  msg.set(TimeInForce_32);
  NewOrderCross_0.insert(TimeInForce_32.getString());
  FIX::TransBkdTime TransBkdTime_3(FIX::UTCTIMESTAMP(8, 53, 57, 20, 2, 2016));
  msg.set(TransBkdTime_3);
  NewOrderCross_0.insert(TransBkdTime_3.getString());
  FIX::TransactTime TransactTime_41(FIX::UTCTIMESTAMP(11, 47, 44, 4, 7, 2003));
  msg.set(TransactTime_41);
  NewOrderCross_0.insert(TransactTime_41.getString());
  all_values.push_back(NewOrderCross_0);

  all_compo_names.insert("NewOrderCross");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_3;
  FIX::DiscretionInst DiscretionInst_3('0');
  msg.set(DiscretionInst_3);
  DiscretionInstructions_3.insert(DiscretionInst_3.getString());
  FIX::DiscretionLimitType DiscretionLimitType_3(1);
  msg.set(DiscretionLimitType_3);
  DiscretionInstructions_3.insert(DiscretionLimitType_3.getString());
  FIX::DiscretionMoveType DiscretionMoveType_3(0);
  msg.set(DiscretionMoveType_3);
  DiscretionInstructions_3.insert(DiscretionMoveType_3.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_3(0);
  msg.set(DiscretionOffsetType_3);
  DiscretionInstructions_3.insert(DiscretionOffsetType_3.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_3;
  DiscretionOffsetValue_3.setString("7321428");
  msg.set(DiscretionOffsetValue_3);
  DiscretionInstructions_3.insert(DiscretionOffsetValue_3.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_3(2);
  msg.set(DiscretionRoundDirection_3);
  DiscretionInstructions_3.insert(DiscretionRoundDirection_3.getString());
  FIX::DiscretionScope DiscretionScope_3(1);
  msg.set(DiscretionScope_3);
  DiscretionInstructions_3.insert(DiscretionScope_3.getString());
  all_values.push_back(DiscretionInstructions_3);
  all_compo_names.insert("DiscretionInstructions");

  // DisplayInstruction
  multiset<string> DisplayInstruction_3;
  FIX::DisplayHighQty DisplayHighQty_3;
  DisplayHighQty_3.setString("2009847");
  msg.set(DisplayHighQty_3);
  DisplayInstruction_3.insert(DisplayHighQty_3.getString());
  FIX::DisplayLowQty DisplayLowQty_3;
  DisplayLowQty_3.setString("19639981");
  msg.set(DisplayLowQty_3);
  DisplayInstruction_3.insert(DisplayLowQty_3.getString());
  FIX::DisplayMethod DisplayMethod_3('1');
  msg.set(DisplayMethod_3);
  DisplayInstruction_3.insert(DisplayMethod_3.getString());
  FIX::DisplayMinIncr DisplayMinIncr_3;
  DisplayMinIncr_3.setString("17552905");
  msg.set(DisplayMinIncr_3);
  DisplayInstruction_3.insert(DisplayMinIncr_3.getString());
  FIX::DisplayQty DisplayQty_3;
  DisplayQty_3.setString("18460790");
  msg.set(DisplayQty_3);
  DisplayInstruction_3.insert(DisplayQty_3.getString());
  FIX::DisplayWhen DisplayWhen_3('1');
  msg.set(DisplayWhen_3);
  DisplayInstruction_3.insert(DisplayWhen_3.getString());
  FIX::RefreshQty RefreshQty_3;
  RefreshQty_3.setString("307206");
  msg.set(RefreshQty_3);
  DisplayInstruction_3.insert(RefreshQty_3.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_3;
  SecondaryDisplayQty_3.setString("10103856");
  msg.set(SecondaryDisplayQty_3);
  DisplayInstruction_3.insert(SecondaryDisplayQty_3.getString());
  all_values.push_back(DisplayInstruction_3);
  all_compo_names.insert("DisplayInstruction");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::NewOrderCross::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_89;
    FIX::EncodedLegIssuer EncodedLegIssuer_89("DATA_1994783559");
    noLegs_0_0.set(EncodedLegIssuer_89);
    InstrumentLeg_89.insert(EncodedLegIssuer_89.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_89(1736334627);
    noLegs_0_0.set(EncodedLegIssuerLen_89);
    InstrumentLeg_89.insert(EncodedLegIssuerLen_89.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_89("DATA_1215917665");
    noLegs_0_0.set(EncodedLegSecurityDesc_89);
    InstrumentLeg_89.insert(EncodedLegSecurityDesc_89.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_89(1899378924);
    noLegs_0_0.set(EncodedLegSecurityDescLen_89);
    InstrumentLeg_89.insert(EncodedLegSecurityDescLen_89.getString());
    FIX::LegCFICode LegCFICode_89("STRING_439981996");
    noLegs_0_0.set(LegCFICode_89);
    InstrumentLeg_89.insert(LegCFICode_89.getString());
    FIX::LegContractMultiplier LegContractMultiplier_89;
    LegContractMultiplier_89.setString("8007713");
    noLegs_0_0.set(LegContractMultiplier_89);
    InstrumentLeg_89.insert(LegContractMultiplier_89.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_89(1922733182);
    noLegs_0_0.set(LegContractMultiplierUnit_89);
    InstrumentLeg_89.insert(LegContractMultiplierUnit_89.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_89("MONTHYEAR_827455179");
    noLegs_0_0.set(LegContractSettlMonth_89);
    InstrumentLeg_89.insert(LegContractSettlMonth_89.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_89("COUNTRY_167965842");
    noLegs_0_0.set(LegCountryOfIssue_89);
    InstrumentLeg_89.insert(LegCountryOfIssue_89.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_89("LOCALMKTDATE_794196377");
    noLegs_0_0.set(LegCouponPaymentDate_89);
    InstrumentLeg_89.insert(LegCouponPaymentDate_89.getString());
    FIX::LegCouponRate LegCouponRate_89;
    LegCouponRate_89.setString("40.260000");
    noLegs_0_0.set(LegCouponRate_89);
    InstrumentLeg_89.insert(LegCouponRate_89.getString());
    FIX::LegCreditRating LegCreditRating_89("STRING_889442187");
    noLegs_0_0.set(LegCreditRating_89);
    InstrumentLeg_89.insert(LegCreditRating_89.getString());
    FIX::LegCurrency LegCurrency_89("EUR");
    noLegs_0_0.set(LegCurrency_89);
    InstrumentLeg_89.insert(LegCurrency_89.getString());
    FIX::LegDatedDate LegDatedDate_89("LOCALMKTDATE_955786806");
    noLegs_0_0.set(LegDatedDate_89);
    InstrumentLeg_89.insert(LegDatedDate_89.getString());
    FIX::LegExerciseStyle LegExerciseStyle_89(1781502466);
    noLegs_0_0.set(LegExerciseStyle_89);
    InstrumentLeg_89.insert(LegExerciseStyle_89.getString());
    FIX::LegFactor LegFactor_89;
    LegFactor_89.setString("10485956");
    noLegs_0_0.set(LegFactor_89);
    InstrumentLeg_89.insert(LegFactor_89.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_89(2094405028);
    noLegs_0_0.set(LegFlowScheduleType_89);
    InstrumentLeg_89.insert(LegFlowScheduleType_89.getString());
    FIX::LegInstrRegistry LegInstrRegistry_89("STRING_1471922066");
    noLegs_0_0.set(LegInstrRegistry_89);
    InstrumentLeg_89.insert(LegInstrRegistry_89.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_89("LOCALMKTDATE_1780738470");
    noLegs_0_0.set(LegInterestAccrualDate_89);
    InstrumentLeg_89.insert(LegInterestAccrualDate_89.getString());
    FIX::LegIssueDate LegIssueDate_89("LOCALMKTDATE_33197877");
    noLegs_0_0.set(LegIssueDate_89);
    InstrumentLeg_89.insert(LegIssueDate_89.getString());
    FIX::LegIssuer LegIssuer_89("STRING_55832698");
    noLegs_0_0.set(LegIssuer_89);
    InstrumentLeg_89.insert(LegIssuer_89.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_89("STRING_1981723260");
    noLegs_0_0.set(LegLocaleOfIssue_89);
    InstrumentLeg_89.insert(LegLocaleOfIssue_89.getString());
    FIX::LegMaturityDate LegMaturityDate_89("LOCALMKTDATE_1997196024");
    noLegs_0_0.set(LegMaturityDate_89);
    InstrumentLeg_89.insert(LegMaturityDate_89.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_89("MONTHYEAR_482069414");
    noLegs_0_0.set(LegMaturityMonthYear_89);
    InstrumentLeg_89.insert(LegMaturityMonthYear_89.getString());
    FIX::LegMaturityTime LegMaturityTime_89("TZTIMEONLY_1589530172");
    noLegs_0_0.set(LegMaturityTime_89);
    InstrumentLeg_89.insert(LegMaturityTime_89.getString());
    FIX::LegOptAttribute LegOptAttribute_89('1');
    noLegs_0_0.set(LegOptAttribute_89);
    InstrumentLeg_89.insert(LegOptAttribute_89.getString());
    FIX::LegOptionRatio LegOptionRatio_89;
    LegOptionRatio_89.setString("11723489");
    noLegs_0_0.set(LegOptionRatio_89);
    InstrumentLeg_89.insert(LegOptionRatio_89.getString());
    FIX::LegPool LegPool_89("STRING_1620250774");
    noLegs_0_0.set(LegPool_89);
    InstrumentLeg_89.insert(LegPool_89.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_89("STRING_558693466");
    noLegs_0_0.set(LegPriceUnitOfMeasure_89);
    InstrumentLeg_89.insert(LegPriceUnitOfMeasure_89.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_89;
    LegPriceUnitOfMeasureQty_89.setString("11063764");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_89);
    InstrumentLeg_89.insert(LegPriceUnitOfMeasureQty_89.getString());
    FIX::LegProduct LegProduct_89(1467550685);
    noLegs_0_0.set(LegProduct_89);
    InstrumentLeg_89.insert(LegProduct_89.getString());
    FIX::LegPutOrCall LegPutOrCall_89(147544445);
    noLegs_0_0.set(LegPutOrCall_89);
    InstrumentLeg_89.insert(LegPutOrCall_89.getString());
    FIX::LegRatioQty LegRatioQty_89;
    LegRatioQty_89.setString("1748104");
    noLegs_0_0.set(LegRatioQty_89);
    InstrumentLeg_89.insert(LegRatioQty_89.getString());
    FIX::LegRedemptionDate LegRedemptionDate_89("LOCALMKTDATE_1219445962");
    noLegs_0_0.set(LegRedemptionDate_89);
    InstrumentLeg_89.insert(LegRedemptionDate_89.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_89("STRING_587526442");
    noLegs_0_0.set(LegRepoCollateralSecurityType_89);
    InstrumentLeg_89.insert(LegRepoCollateralSecurityType_89.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_89;
    LegRepurchaseRate_89.setString("18.340000");
    noLegs_0_0.set(LegRepurchaseRate_89);
    InstrumentLeg_89.insert(LegRepurchaseRate_89.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_89(994695496);
    noLegs_0_0.set(LegRepurchaseTerm_89);
    InstrumentLeg_89.insert(LegRepurchaseTerm_89.getString());
    FIX::LegSecurityDesc LegSecurityDesc_89("STRING_1414981621");
    noLegs_0_0.set(LegSecurityDesc_89);
    InstrumentLeg_89.insert(LegSecurityDesc_89.getString());
    FIX::LegSecurityExchange LegSecurityExchange_89("EXCHANGE_1143547676");
    noLegs_0_0.set(LegSecurityExchange_89);
    InstrumentLeg_89.insert(LegSecurityExchange_89.getString());
    FIX::LegSecurityID LegSecurityID_89("STRING_1788891873");
    noLegs_0_0.set(LegSecurityID_89);
    InstrumentLeg_89.insert(LegSecurityID_89.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_89("STRING_751321999");
    noLegs_0_0.set(LegSecurityIDSource_89);
    InstrumentLeg_89.insert(LegSecurityIDSource_89.getString());
    FIX::LegSecuritySubType LegSecuritySubType_89("STRING_2032989863");
    noLegs_0_0.set(LegSecuritySubType_89);
    InstrumentLeg_89.insert(LegSecuritySubType_89.getString());
    FIX::LegSecurityType LegSecurityType_89("STRING_1860031050");
    noLegs_0_0.set(LegSecurityType_89);
    InstrumentLeg_89.insert(LegSecurityType_89.getString());
    FIX::LegSide LegSide_89('9');
    noLegs_0_0.set(LegSide_89);
    InstrumentLeg_89.insert(LegSide_89.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_89("STRING_841293021");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_89);
    InstrumentLeg_89.insert(LegStateOrProvinceOfIssue_89.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_89("JPY");
    noLegs_0_0.set(LegStrikeCurrency_89);
    InstrumentLeg_89.insert(LegStrikeCurrency_89.getString());
    FIX::LegStrikePrice LegStrikePrice_89;
    LegStrikePrice_89.setString("7882144");
    noLegs_0_0.set(LegStrikePrice_89);
    InstrumentLeg_89.insert(LegStrikePrice_89.getString());
    FIX::LegSymbol LegSymbol_89("STRING_818488286");
    noLegs_0_0.set(LegSymbol_89);
    InstrumentLeg_89.insert(LegSymbol_89.getString());
    FIX::LegSymbolSfx LegSymbolSfx_89("STRING_1646876817");
    noLegs_0_0.set(LegSymbolSfx_89);
    InstrumentLeg_89.insert(LegSymbolSfx_89.getString());
    FIX::LegTimeUnit LegTimeUnit_89("STRING_821412278");
    noLegs_0_0.set(LegTimeUnit_89);
    InstrumentLeg_89.insert(LegTimeUnit_89.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_89("STRING_874320985");
    noLegs_0_0.set(LegUnitOfMeasure_89);
    InstrumentLeg_89.insert(LegUnitOfMeasure_89.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_89;
    LegUnitOfMeasureQty_89.setString("14811164");
    noLegs_0_0.set(LegUnitOfMeasureQty_89);
    InstrumentLeg_89.insert(LegUnitOfMeasureQty_89.getString());
    all_values.push_back(InstrumentLeg_89);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_180;
      FIX::LegSecurityAltID LegSecurityAltID_180("STRING_1356390399");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_180);
      LegSecAltIDGrp_NoLegSecurityAltID_180.insert(LegSecurityAltID_180.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_180("STRING_923162953");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_180);
      LegSecAltIDGrp_NoLegSecurityAltID_180.insert(LegSecurityAltIDSource_180.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_180);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_90;
    FIX::EncodedLegIssuer EncodedLegIssuer_90("DATA_219432453");
    noLegs_0_1.set(EncodedLegIssuer_90);
    InstrumentLeg_90.insert(EncodedLegIssuer_90.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_90(381255710);
    noLegs_0_1.set(EncodedLegIssuerLen_90);
    InstrumentLeg_90.insert(EncodedLegIssuerLen_90.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_90("DATA_395930080");
    noLegs_0_1.set(EncodedLegSecurityDesc_90);
    InstrumentLeg_90.insert(EncodedLegSecurityDesc_90.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_90(778125919);
    noLegs_0_1.set(EncodedLegSecurityDescLen_90);
    InstrumentLeg_90.insert(EncodedLegSecurityDescLen_90.getString());
    FIX::LegCFICode LegCFICode_90("STRING_1487632141");
    noLegs_0_1.set(LegCFICode_90);
    InstrumentLeg_90.insert(LegCFICode_90.getString());
    FIX::LegContractMultiplier LegContractMultiplier_90;
    LegContractMultiplier_90.setString("18634807");
    noLegs_0_1.set(LegContractMultiplier_90);
    InstrumentLeg_90.insert(LegContractMultiplier_90.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_90(925670365);
    noLegs_0_1.set(LegContractMultiplierUnit_90);
    InstrumentLeg_90.insert(LegContractMultiplierUnit_90.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_90("MONTHYEAR_1662442590");
    noLegs_0_1.set(LegContractSettlMonth_90);
    InstrumentLeg_90.insert(LegContractSettlMonth_90.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_90("COUNTRY_935443079");
    noLegs_0_1.set(LegCountryOfIssue_90);
    InstrumentLeg_90.insert(LegCountryOfIssue_90.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_90("LOCALMKTDATE_1513196807");
    noLegs_0_1.set(LegCouponPaymentDate_90);
    InstrumentLeg_90.insert(LegCouponPaymentDate_90.getString());
    FIX::LegCouponRate LegCouponRate_90;
    LegCouponRate_90.setString("7.760000");
    noLegs_0_1.set(LegCouponRate_90);
    InstrumentLeg_90.insert(LegCouponRate_90.getString());
    FIX::LegCreditRating LegCreditRating_90("STRING_1930138575");
    noLegs_0_1.set(LegCreditRating_90);
    InstrumentLeg_90.insert(LegCreditRating_90.getString());
    FIX::LegCurrency LegCurrency_90("GBP");
    noLegs_0_1.set(LegCurrency_90);
    InstrumentLeg_90.insert(LegCurrency_90.getString());
    FIX::LegDatedDate LegDatedDate_90("LOCALMKTDATE_1571546800");
    noLegs_0_1.set(LegDatedDate_90);
    InstrumentLeg_90.insert(LegDatedDate_90.getString());
    FIX::LegExerciseStyle LegExerciseStyle_90(1532016779);
    noLegs_0_1.set(LegExerciseStyle_90);
    InstrumentLeg_90.insert(LegExerciseStyle_90.getString());
    FIX::LegFactor LegFactor_90;
    LegFactor_90.setString("15195946");
    noLegs_0_1.set(LegFactor_90);
    InstrumentLeg_90.insert(LegFactor_90.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_90(1284094203);
    noLegs_0_1.set(LegFlowScheduleType_90);
    InstrumentLeg_90.insert(LegFlowScheduleType_90.getString());
    FIX::LegInstrRegistry LegInstrRegistry_90("STRING_349559496");
    noLegs_0_1.set(LegInstrRegistry_90);
    InstrumentLeg_90.insert(LegInstrRegistry_90.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_90("LOCALMKTDATE_213404041");
    noLegs_0_1.set(LegInterestAccrualDate_90);
    InstrumentLeg_90.insert(LegInterestAccrualDate_90.getString());
    FIX::LegIssueDate LegIssueDate_90("LOCALMKTDATE_630660423");
    noLegs_0_1.set(LegIssueDate_90);
    InstrumentLeg_90.insert(LegIssueDate_90.getString());
    FIX::LegIssuer LegIssuer_90("STRING_215697842");
    noLegs_0_1.set(LegIssuer_90);
    InstrumentLeg_90.insert(LegIssuer_90.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_90("STRING_1001618443");
    noLegs_0_1.set(LegLocaleOfIssue_90);
    InstrumentLeg_90.insert(LegLocaleOfIssue_90.getString());
    FIX::LegMaturityDate LegMaturityDate_90("LOCALMKTDATE_1449148710");
    noLegs_0_1.set(LegMaturityDate_90);
    InstrumentLeg_90.insert(LegMaturityDate_90.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_90("MONTHYEAR_1862574659");
    noLegs_0_1.set(LegMaturityMonthYear_90);
    InstrumentLeg_90.insert(LegMaturityMonthYear_90.getString());
    FIX::LegMaturityTime LegMaturityTime_90("TZTIMEONLY_1823030721");
    noLegs_0_1.set(LegMaturityTime_90);
    InstrumentLeg_90.insert(LegMaturityTime_90.getString());
    FIX::LegOptAttribute LegOptAttribute_90('1');
    noLegs_0_1.set(LegOptAttribute_90);
    InstrumentLeg_90.insert(LegOptAttribute_90.getString());
    FIX::LegOptionRatio LegOptionRatio_90;
    LegOptionRatio_90.setString("11962074");
    noLegs_0_1.set(LegOptionRatio_90);
    InstrumentLeg_90.insert(LegOptionRatio_90.getString());
    FIX::LegPool LegPool_90("STRING_346671728");
    noLegs_0_1.set(LegPool_90);
    InstrumentLeg_90.insert(LegPool_90.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_90("STRING_1532376446");
    noLegs_0_1.set(LegPriceUnitOfMeasure_90);
    InstrumentLeg_90.insert(LegPriceUnitOfMeasure_90.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_90;
    LegPriceUnitOfMeasureQty_90.setString("21193703");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_90);
    InstrumentLeg_90.insert(LegPriceUnitOfMeasureQty_90.getString());
    FIX::LegProduct LegProduct_90(566104181);
    noLegs_0_1.set(LegProduct_90);
    InstrumentLeg_90.insert(LegProduct_90.getString());
    FIX::LegPutOrCall LegPutOrCall_90(1913632156);
    noLegs_0_1.set(LegPutOrCall_90);
    InstrumentLeg_90.insert(LegPutOrCall_90.getString());
    FIX::LegRatioQty LegRatioQty_90;
    LegRatioQty_90.setString("3678168");
    noLegs_0_1.set(LegRatioQty_90);
    InstrumentLeg_90.insert(LegRatioQty_90.getString());
    FIX::LegRedemptionDate LegRedemptionDate_90("LOCALMKTDATE_1344230101");
    noLegs_0_1.set(LegRedemptionDate_90);
    InstrumentLeg_90.insert(LegRedemptionDate_90.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_90("STRING_1253780650");
    noLegs_0_1.set(LegRepoCollateralSecurityType_90);
    InstrumentLeg_90.insert(LegRepoCollateralSecurityType_90.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_90;
    LegRepurchaseRate_90.setString("39.430000");
    noLegs_0_1.set(LegRepurchaseRate_90);
    InstrumentLeg_90.insert(LegRepurchaseRate_90.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_90(122416818);
    noLegs_0_1.set(LegRepurchaseTerm_90);
    InstrumentLeg_90.insert(LegRepurchaseTerm_90.getString());
    FIX::LegSecurityDesc LegSecurityDesc_90("STRING_768739592");
    noLegs_0_1.set(LegSecurityDesc_90);
    InstrumentLeg_90.insert(LegSecurityDesc_90.getString());
    FIX::LegSecurityExchange LegSecurityExchange_90("EXCHANGE_1019257023");
    noLegs_0_1.set(LegSecurityExchange_90);
    InstrumentLeg_90.insert(LegSecurityExchange_90.getString());
    FIX::LegSecurityID LegSecurityID_90("STRING_1635613625");
    noLegs_0_1.set(LegSecurityID_90);
    InstrumentLeg_90.insert(LegSecurityID_90.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_90("STRING_1259280368");
    noLegs_0_1.set(LegSecurityIDSource_90);
    InstrumentLeg_90.insert(LegSecurityIDSource_90.getString());
    FIX::LegSecuritySubType LegSecuritySubType_90("STRING_801911950");
    noLegs_0_1.set(LegSecuritySubType_90);
    InstrumentLeg_90.insert(LegSecuritySubType_90.getString());
    FIX::LegSecurityType LegSecurityType_90("STRING_268824757");
    noLegs_0_1.set(LegSecurityType_90);
    InstrumentLeg_90.insert(LegSecurityType_90.getString());
    FIX::LegSide LegSide_90('7');
    noLegs_0_1.set(LegSide_90);
    InstrumentLeg_90.insert(LegSide_90.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_90("STRING_225975103");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_90);
    InstrumentLeg_90.insert(LegStateOrProvinceOfIssue_90.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_90("USD");
    noLegs_0_1.set(LegStrikeCurrency_90);
    InstrumentLeg_90.insert(LegStrikeCurrency_90.getString());
    FIX::LegStrikePrice LegStrikePrice_90;
    LegStrikePrice_90.setString("15100693");
    noLegs_0_1.set(LegStrikePrice_90);
    InstrumentLeg_90.insert(LegStrikePrice_90.getString());
    FIX::LegSymbol LegSymbol_90("STRING_2917384");
    noLegs_0_1.set(LegSymbol_90);
    InstrumentLeg_90.insert(LegSymbol_90.getString());
    FIX::LegSymbolSfx LegSymbolSfx_90("STRING_331400234");
    noLegs_0_1.set(LegSymbolSfx_90);
    InstrumentLeg_90.insert(LegSymbolSfx_90.getString());
    FIX::LegTimeUnit LegTimeUnit_90("STRING_2140729729");
    noLegs_0_1.set(LegTimeUnit_90);
    InstrumentLeg_90.insert(LegTimeUnit_90.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_90("STRING_218615227");
    noLegs_0_1.set(LegUnitOfMeasure_90);
    InstrumentLeg_90.insert(LegUnitOfMeasure_90.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_90;
    LegUnitOfMeasureQty_90.setString("13330186");
    noLegs_0_1.set(LegUnitOfMeasureQty_90);
    InstrumentLeg_90.insert(LegUnitOfMeasureQty_90.getString());
    all_values.push_back(InstrumentLeg_90);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_181;
      FIX::LegSecurityAltID LegSecurityAltID_181("STRING_2081189886");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_181);
      LegSecAltIDGrp_NoLegSecurityAltID_181.insert(LegSecurityAltID_181.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_181("STRING_1008565750");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_181);
      LegSecAltIDGrp_NoLegSecurityAltID_181.insert(LegSecurityAltIDSource_181.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_181);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_182;
      FIX::LegSecurityAltID LegSecurityAltID_182("STRING_1618380838");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_182);
      LegSecAltIDGrp_NoLegSecurityAltID_182.insert(LegSecurityAltID_182.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_182("STRING_1129913679");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_182);
      LegSecAltIDGrp_NoLegSecurityAltID_182.insert(LegSecurityAltIDSource_182.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_182);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_183;
      FIX::LegSecurityAltID LegSecurityAltID_183("STRING_1355237478");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_183);
      LegSecAltIDGrp_NoLegSecurityAltID_183.insert(LegSecurityAltID_183.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_183("STRING_1003273637");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_183);
      LegSecAltIDGrp_NoLegSecurityAltID_183.insert(LegSecurityAltIDSource_183.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_183);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_47;
  FIX::AttachmentPoint AttachmentPoint_47;
  AttachmentPoint_47.setString("4.250000");
  msg.set(AttachmentPoint_47);
  Instrument_47.insert(AttachmentPoint_47.getString());
  FIX::CFICode CFICode_47("STRING_1921341660");
  msg.set(CFICode_47);
  Instrument_47.insert(CFICode_47.getString());
  FIX::CPProgram CPProgram_47(2);
  msg.set(CPProgram_47);
  Instrument_47.insert(CPProgram_47.getString());
  FIX::CPRegType CPRegType_47("STRING_1469617251");
  msg.set(CPRegType_47);
  Instrument_47.insert(CPRegType_47.getString());
  FIX::CapPrice CapPrice_47;
  CapPrice_47.setString("11180881");
  msg.set(CapPrice_47);
  Instrument_47.insert(CapPrice_47.getString());
  FIX::ContractMultiplier ContractMultiplier_47;
  ContractMultiplier_47.setString("20232027");
  msg.set(ContractMultiplier_47);
  Instrument_47.insert(ContractMultiplier_47.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_47(0);
  msg.set(ContractMultiplierUnit_47);
  Instrument_47.insert(ContractMultiplierUnit_47.getString());
  FIX::ContractSettlMonth ContractSettlMonth_47("MONTHYEAR_1240504931");
  msg.set(ContractSettlMonth_47);
  Instrument_47.insert(ContractSettlMonth_47.getString());
  FIX::CountryOfIssue CountryOfIssue_47("COUNTRY_644458739");
  msg.set(CountryOfIssue_47);
  Instrument_47.insert(CountryOfIssue_47.getString());
  FIX::CouponPaymentDate CouponPaymentDate_47("LOCALMKTDATE_425204569");
  msg.set(CouponPaymentDate_47);
  Instrument_47.insert(CouponPaymentDate_47.getString());
  FIX::CouponRate CouponRate_47;
  CouponRate_47.setString("49.080000");
  msg.set(CouponRate_47);
  Instrument_47.insert(CouponRate_47.getString());
  FIX::CreditRating CreditRating_47("STRING_1903739107");
  msg.set(CreditRating_47);
  Instrument_47.insert(CreditRating_47.getString());
  FIX::DatedDate DatedDate_47("LOCALMKTDATE_1227116520");
  msg.set(DatedDate_47);
  Instrument_47.insert(DatedDate_47.getString());
  FIX::DetachmentPoint DetachmentPoint_47;
  DetachmentPoint_47.setString("96.650000");
  msg.set(DetachmentPoint_47);
  Instrument_47.insert(DetachmentPoint_47.getString());
  FIX::EncodedIssuer EncodedIssuer_47("DATA_502140632");
  msg.set(EncodedIssuer_47);
  Instrument_47.insert(EncodedIssuer_47.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_47(1453091623);
  msg.set(EncodedIssuerLen_47);
  Instrument_47.insert(EncodedIssuerLen_47.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_47("DATA_650817553");
  msg.set(EncodedSecurityDesc_47);
  Instrument_47.insert(EncodedSecurityDesc_47.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_47(620136824);
  msg.set(EncodedSecurityDescLen_47);
  Instrument_47.insert(EncodedSecurityDescLen_47.getString());
  FIX::ExerciseStyle ExerciseStyle_47(0);
  msg.set(ExerciseStyle_47);
  Instrument_47.insert(ExerciseStyle_47.getString());
  FIX::Factor Factor_47;
  Factor_47.setString("6537349");
  msg.set(Factor_47);
  Instrument_47.insert(Factor_47.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_47(true);
  msg.set(FlexProductEligibilityIndicator_47);
  Instrument_47.insert(FlexProductEligibilityIndicator_47.getString());
  FIX::FlexibleIndicator FlexibleIndicator_47(true);
  msg.set(FlexibleIndicator_47);
  Instrument_47.insert(FlexibleIndicator_47.getString());
  FIX::FloorPrice FloorPrice_47;
  FloorPrice_47.setString("8723501");
  msg.set(FloorPrice_47);
  Instrument_47.insert(FloorPrice_47.getString());
  FIX::FlowScheduleType FlowScheduleType_47(2);
  msg.set(FlowScheduleType_47);
  Instrument_47.insert(FlowScheduleType_47.getString());
  FIX::InstrRegistry InstrRegistry_47("STRING_103834506");
  msg.set(InstrRegistry_47);
  Instrument_47.insert(InstrRegistry_47.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_47('8');
  msg.set(InstrmtAssignmentMethod_47);
  Instrument_47.insert(InstrmtAssignmentMethod_47.getString());
  FIX::InterestAccrualDate InterestAccrualDate_47("LOCALMKTDATE_1145637838");
  msg.set(InterestAccrualDate_47);
  Instrument_47.insert(InterestAccrualDate_47.getString());
  FIX::IssueDate IssueDate_47("LOCALMKTDATE_1722215344");
  msg.set(IssueDate_47);
  Instrument_47.insert(IssueDate_47.getString());
  FIX::Issuer Issuer_47("STRING_1935970082");
  msg.set(Issuer_47);
  Instrument_47.insert(Issuer_47.getString());
  FIX::ListMethod ListMethod_47(0);
  msg.set(ListMethod_47);
  Instrument_47.insert(ListMethod_47.getString());
  FIX::LocaleOfIssue LocaleOfIssue_47("STRING_578005333");
  msg.set(LocaleOfIssue_47);
  Instrument_47.insert(LocaleOfIssue_47.getString());
  FIX::MaturityDate MaturityDate_47("LOCALMKTDATE_890286859");
  msg.set(MaturityDate_47);
  Instrument_47.insert(MaturityDate_47.getString());
  FIX::MaturityMonthYear MaturityMonthYear_47("MONTHYEAR_127249680");
  msg.set(MaturityMonthYear_47);
  Instrument_47.insert(MaturityMonthYear_47.getString());
  FIX::MaturityTime MaturityTime_47("TZTIMEONLY_1347427479");
  msg.set(MaturityTime_47);
  Instrument_47.insert(MaturityTime_47.getString());
  FIX::MinPriceIncrement MinPriceIncrement_47;
  MinPriceIncrement_47.setString("2124204");
  msg.set(MinPriceIncrement_47);
  Instrument_47.insert(MinPriceIncrement_47.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_47;
  MinPriceIncrementAmount_47.setString("12453377");
  msg.set(MinPriceIncrementAmount_47);
  Instrument_47.insert(MinPriceIncrementAmount_47.getString());
  FIX::NTPositionLimit NTPositionLimit_47(1223146626);
  msg.set(NTPositionLimit_47);
  Instrument_47.insert(NTPositionLimit_47.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_47;
  NotionalPercentageOutstanding_47.setString("16.570000");
  msg.set(NotionalPercentageOutstanding_47);
  Instrument_47.insert(NotionalPercentageOutstanding_47.getString());
  FIX::OptAttribute OptAttribute_47('3');
  msg.set(OptAttribute_47);
  Instrument_47.insert(OptAttribute_47.getString());
  FIX::OptPayoutAmount OptPayoutAmount_47;
  OptPayoutAmount_47.setString("18676053");
  msg.set(OptPayoutAmount_47);
  Instrument_47.insert(OptPayoutAmount_47.getString());
  FIX::OptPayoutType OptPayoutType_47(3);
  msg.set(OptPayoutType_47);
  Instrument_47.insert(OptPayoutType_47.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_47;
  OriginalNotionalPercentageOutstanding_47.setString("39.840000");
  msg.set(OriginalNotionalPercentageOutstanding_47);
  Instrument_47.insert(OriginalNotionalPercentageOutstanding_47.getString());
  FIX::Pool Pool_47("STRING_1623860825");
  msg.set(Pool_47);
  Instrument_47.insert(Pool_47.getString());
  FIX::PositionLimit PositionLimit_47(1270689098);
  msg.set(PositionLimit_47);
  Instrument_47.insert(PositionLimit_47.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_47("STRING_INX");
  msg.set(PriceQuoteMethod_47);
  Instrument_47.insert(PriceQuoteMethod_47.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_47("STRING_2126001457");
  msg.set(PriceUnitOfMeasure_47);
  Instrument_47.insert(PriceUnitOfMeasure_47.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_47;
  PriceUnitOfMeasureQty_47.setString("5762970");
  msg.set(PriceUnitOfMeasureQty_47);
  Instrument_47.insert(PriceUnitOfMeasureQty_47.getString());
  FIX::Product Product_49(11);
  msg.set(Product_49);
  Instrument_47.insert(Product_49.getString());
  FIX::ProductComplex ProductComplex_47("STRING_598654634");
  msg.set(ProductComplex_47);
  Instrument_47.insert(ProductComplex_47.getString());
  FIX::PutOrCall PutOrCall_47(0);
  msg.set(PutOrCall_47);
  Instrument_47.insert(PutOrCall_47.getString());
  FIX::RedemptionDate RedemptionDate_47("LOCALMKTDATE_1221522493");
  msg.set(RedemptionDate_47);
  Instrument_47.insert(RedemptionDate_47.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_47("STRING_1550191692");
  msg.set(RepoCollateralSecurityType_47);
  Instrument_47.insert(RepoCollateralSecurityType_47.getString());
  FIX::RepurchaseRate RepurchaseRate_47;
  RepurchaseRate_47.setString("40.690000");
  msg.set(RepurchaseRate_47);
  Instrument_47.insert(RepurchaseRate_47.getString());
  FIX::RepurchaseTerm RepurchaseTerm_47(2093872658);
  msg.set(RepurchaseTerm_47);
  Instrument_47.insert(RepurchaseTerm_47.getString());
  FIX::RestructuringType RestructuringType_47("STRING_FR");
  msg.set(RestructuringType_47);
  Instrument_47.insert(RestructuringType_47.getString());
  FIX::SecurityDesc SecurityDesc_47("STRING_157248575");
  msg.set(SecurityDesc_47);
  Instrument_47.insert(SecurityDesc_47.getString());
  FIX::SecurityExchange SecurityExchange_47("EXCHANGE_752445413");
  msg.set(SecurityExchange_47);
  Instrument_47.insert(SecurityExchange_47.getString());
  FIX::SecurityGroup SecurityGroup_47("STRING_685417970");
  msg.set(SecurityGroup_47);
  Instrument_47.insert(SecurityGroup_47.getString());
  FIX::SecurityID SecurityID_47("STRING_1879463919");
  msg.set(SecurityID_47);
  Instrument_47.insert(SecurityID_47.getString());
  FIX::SecurityIDSource SecurityIDSource_47("STRING_7");
  msg.set(SecurityIDSource_47);
  Instrument_47.insert(SecurityIDSource_47.getString());
  FIX::SecurityStatus SecurityStatus_47("STRING_1");
  msg.set(SecurityStatus_47);
  Instrument_47.insert(SecurityStatus_47.getString());
  FIX::SecuritySubType SecuritySubType_48("STRING_309985605");
  msg.set(SecuritySubType_48);
  Instrument_47.insert(SecuritySubType_48.getString());
  FIX::SecurityType SecurityType_49("STRING_EUCORP");
  msg.set(SecurityType_49);
  Instrument_47.insert(SecurityType_49.getString());
  FIX::Seniority Seniority_47("STRING_SB");
  msg.set(Seniority_47);
  Instrument_47.insert(Seniority_47.getString());
  FIX::SettlMethod SettlMethod_47('C');
  msg.set(SettlMethod_47);
  Instrument_47.insert(SettlMethod_47.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_47("STRING_1643639170");
  msg.set(SettleOnOpenFlag_47);
  Instrument_47.insert(SettleOnOpenFlag_47.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_47("STRING_263913464");
  msg.set(StateOrProvinceOfIssue_47);
  Instrument_47.insert(StateOrProvinceOfIssue_47.getString());
  FIX::StrikeCurrency StrikeCurrency_47("CAN");
  msg.set(StrikeCurrency_47);
  Instrument_47.insert(StrikeCurrency_47.getString());
  FIX::StrikeMultiplier StrikeMultiplier_47;
  StrikeMultiplier_47.setString("6022725");
  msg.set(StrikeMultiplier_47);
  Instrument_47.insert(StrikeMultiplier_47.getString());
  FIX::StrikePrice StrikePrice_47;
  StrikePrice_47.setString("4531977");
  msg.set(StrikePrice_47);
  Instrument_47.insert(StrikePrice_47.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_47(3);
  msg.set(StrikePriceBoundaryMethod_47);
  Instrument_47.insert(StrikePriceBoundaryMethod_47.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_47;
  StrikePriceBoundaryPrecision_47.setString("65.250000");
  msg.set(StrikePriceBoundaryPrecision_47);
  Instrument_47.insert(StrikePriceBoundaryPrecision_47.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_47(3);
  msg.set(StrikePriceDeterminationMethod_47);
  Instrument_47.insert(StrikePriceDeterminationMethod_47.getString());
  FIX::StrikeValue StrikeValue_47;
  StrikeValue_47.setString("4287852");
  msg.set(StrikeValue_47);
  Instrument_47.insert(StrikeValue_47.getString());
  FIX::Symbol Symbol_47("STRING_1586236527");
  msg.set(Symbol_47);
  Instrument_47.insert(Symbol_47.getString());
  FIX::SymbolSfx SymbolSfx_47("STRING_WI");
  msg.set(SymbolSfx_47);
  Instrument_47.insert(SymbolSfx_47.getString());
  FIX::TimeUnit TimeUnit_47("STRING_H");
  msg.set(TimeUnit_47);
  Instrument_47.insert(TimeUnit_47.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_47(3);
  msg.set(UnderlyingPriceDeterminationMethod_47);
  Instrument_47.insert(UnderlyingPriceDeterminationMethod_47.getString());
  FIX::UnitOfMeasure UnitOfMeasure_47("STRING_Bbl");
  msg.set(UnitOfMeasure_47);
  Instrument_47.insert(UnitOfMeasure_47.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_47;
  UnitOfMeasureQty_47.setString("2495729");
  msg.set(UnitOfMeasureQty_47);
  Instrument_47.insert(UnitOfMeasureQty_47.getString());
  FIX::ValuationMethod ValuationMethod_47("STRING_FUTDA");
  msg.set(ValuationMethod_47);
  Instrument_47.insert(ValuationMethod_47.getString());
  all_values.push_back(Instrument_47);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderCross::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_94;
    FIX::ComplexEventCondition ComplexEventCondition_94(2);
    noComplexEvents_0_0.set(ComplexEventCondition_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventCondition_94.getString());
    FIX::ComplexEventPrice ComplexEventPrice_94;
    ComplexEventPrice_94.setString("11744519");
    noComplexEvents_0_0.set(ComplexEventPrice_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventPrice_94.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_94(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventPriceBoundaryMethod_94.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_94;
    ComplexEventPriceBoundaryPrecision_94.setString("56.320000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventPriceBoundaryPrecision_94.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_94(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventPriceTimeType_94.getString());
    FIX::ComplexEventType ComplexEventType_94(4);
    noComplexEvents_0_0.set(ComplexEventType_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventType_94.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_94;
    ComplexOptPayoutAmount_94.setString("1922159");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexOptPayoutAmount_94.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_94);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_194;
      FIX::ComplexEventEndDate ComplexEventEndDate_194(FIX::UTCTIMESTAMP(20, 38, 37, 0, 5, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_194);
      ComplexEventDates_NoComplexEventDates_194.insert(ComplexEventEndDate_194.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_194(FIX::UTCTIMESTAMP(7, 3, 7, 16, 5, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_194);
      ComplexEventDates_NoComplexEventDates_194.insert(ComplexEventStartDate_194.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_194);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_392;
        FIX::ComplexEventEndTime ComplexEventEndTime_392(FIX::UTCTIMEONLY(1, 30, 13));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_392);
        ComplexEventTimes_NoComplexEventTimes_392.insert(ComplexEventEndTime_392.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_392(FIX::UTCTIMEONLY(18, 40, 20));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_392);
        ComplexEventTimes_NoComplexEventTimes_392.insert(ComplexEventStartTime_392.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_392);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_393;
        FIX::ComplexEventEndTime ComplexEventEndTime_393(FIX::UTCTIMEONLY(5, 18, 27));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_393);
        ComplexEventTimes_NoComplexEventTimes_393.insert(ComplexEventEndTime_393.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_393(FIX::UTCTIMEONLY(6, 42, 42));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_393);
        ComplexEventTimes_NoComplexEventTimes_393.insert(ComplexEventStartTime_393.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_393);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_95;
    FIX::ComplexEventCondition ComplexEventCondition_95(2);
    noComplexEvents_0_1.set(ComplexEventCondition_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventCondition_95.getString());
    FIX::ComplexEventPrice ComplexEventPrice_95;
    ComplexEventPrice_95.setString("5139363");
    noComplexEvents_0_1.set(ComplexEventPrice_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventPrice_95.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_95(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventPriceBoundaryMethod_95.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_95;
    ComplexEventPriceBoundaryPrecision_95.setString("28.820000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventPriceBoundaryPrecision_95.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_95(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventPriceTimeType_95.getString());
    FIX::ComplexEventType ComplexEventType_95(2);
    noComplexEvents_0_1.set(ComplexEventType_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventType_95.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_95;
    ComplexOptPayoutAmount_95.setString("7101352");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexOptPayoutAmount_95.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_95);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_195;
      FIX::ComplexEventEndDate ComplexEventEndDate_195(FIX::UTCTIMESTAMP(11, 2, 24, 8, 4, 2008));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_195);
      ComplexEventDates_NoComplexEventDates_195.insert(ComplexEventEndDate_195.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_195(FIX::UTCTIMESTAMP(20, 2, 33, 11, 1, 2001));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_195);
      ComplexEventDates_NoComplexEventDates_195.insert(ComplexEventStartDate_195.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_195);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_394;
        FIX::ComplexEventEndTime ComplexEventEndTime_394(FIX::UTCTIMEONLY(19, 18, 58));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_394);
        ComplexEventTimes_NoComplexEventTimes_394.insert(ComplexEventEndTime_394.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_394(FIX::UTCTIMEONLY(16, 41, 29));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_394);
        ComplexEventTimes_NoComplexEventTimes_394.insert(ComplexEventStartTime_394.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_394);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_395;
        FIX::ComplexEventEndTime ComplexEventEndTime_395(FIX::UTCTIMEONLY(8, 42, 24));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_395);
        ComplexEventTimes_NoComplexEventTimes_395.insert(ComplexEventEndTime_395.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_395(FIX::UTCTIMEONLY(22, 8, 42));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_395);
        ComplexEventTimes_NoComplexEventTimes_395.insert(ComplexEventStartTime_395.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_395);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_396;
        FIX::ComplexEventEndTime ComplexEventEndTime_396(FIX::UTCTIMEONLY(12, 44, 14));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_396);
        ComplexEventTimes_NoComplexEventTimes_396.insert(ComplexEventEndTime_396.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_396(FIX::UTCTIMEONLY(3, 38, 27));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_396);
        ComplexEventTimes_NoComplexEventTimes_396.insert(ComplexEventStartTime_396.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_396);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_196;
      FIX::ComplexEventEndDate ComplexEventEndDate_196(FIX::UTCTIMESTAMP(9, 52, 15, 17, 7, 2008));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_196);
      ComplexEventDates_NoComplexEventDates_196.insert(ComplexEventEndDate_196.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_196(FIX::UTCTIMESTAMP(17, 24, 15, 12, 10, 2014));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_196);
      ComplexEventDates_NoComplexEventDates_196.insert(ComplexEventStartDate_196.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_196);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_397;
        FIX::ComplexEventEndTime ComplexEventEndTime_397(FIX::UTCTIMEONLY(4, 39, 50));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_397);
        ComplexEventTimes_NoComplexEventTimes_397.insert(ComplexEventEndTime_397.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_397(FIX::UTCTIMEONLY(6, 51, 50));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_397);
        ComplexEventTimes_NoComplexEventTimes_397.insert(ComplexEventStartTime_397.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_397);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_197;
      FIX::ComplexEventEndDate ComplexEventEndDate_197(FIX::UTCTIMESTAMP(3, 34, 2, 19, 2, 2010));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_197);
      ComplexEventDates_NoComplexEventDates_197.insert(ComplexEventEndDate_197.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_197(FIX::UTCTIMESTAMP(13, 13, 51, 20, 4, 2013));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_197);
      ComplexEventDates_NoComplexEventDates_197.insert(ComplexEventStartDate_197.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_197);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_398;
        FIX::ComplexEventEndTime ComplexEventEndTime_398(FIX::UTCTIMEONLY(22, 51, 23));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_398);
        ComplexEventTimes_NoComplexEventTimes_398.insert(ComplexEventEndTime_398.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_398(FIX::UTCTIMEONLY(12, 12, 47));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_398);
        ComplexEventTimes_NoComplexEventTimes_398.insert(ComplexEventStartTime_398.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_398);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_399;
        FIX::ComplexEventEndTime ComplexEventEndTime_399(FIX::UTCTIMEONLY(4, 19, 49));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_399);
        ComplexEventTimes_NoComplexEventTimes_399.insert(ComplexEventEndTime_399.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_399(FIX::UTCTIMEONLY(13, 40, 30));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_399);
        ComplexEventTimes_NoComplexEventTimes_399.insert(ComplexEventStartTime_399.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_399);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_400;
        FIX::ComplexEventEndTime ComplexEventEndTime_400(FIX::UTCTIMEONLY(23, 56, 15));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_400);
        ComplexEventTimes_NoComplexEventTimes_400.insert(ComplexEventEndTime_400.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_400(FIX::UTCTIMEONLY(10, 55, 33));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_400);
        ComplexEventTimes_NoComplexEventTimes_400.insert(ComplexEventStartTime_400.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_400);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::NewOrderCross::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_96;
    FIX::ComplexEventCondition ComplexEventCondition_96(2);
    noComplexEvents_0_2.set(ComplexEventCondition_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventCondition_96.getString());
    FIX::ComplexEventPrice ComplexEventPrice_96;
    ComplexEventPrice_96.setString("20601321");
    noComplexEvents_0_2.set(ComplexEventPrice_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPrice_96.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_96(5);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPriceBoundaryMethod_96.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_96;
    ComplexEventPriceBoundaryPrecision_96.setString("39.800000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPriceBoundaryPrecision_96.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_96(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPriceTimeType_96.getString());
    FIX::ComplexEventType ComplexEventType_96(9);
    noComplexEvents_0_2.set(ComplexEventType_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventType_96.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_96;
    ComplexOptPayoutAmount_96.setString("10488699");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexOptPayoutAmount_96.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_96);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_198;
      FIX::ComplexEventEndDate ComplexEventEndDate_198(FIX::UTCTIMESTAMP(18, 59, 17, 27, 12, 2008));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_198);
      ComplexEventDates_NoComplexEventDates_198.insert(ComplexEventEndDate_198.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_198(FIX::UTCTIMESTAMP(20, 7, 15, 24, 9, 2012));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_198);
      ComplexEventDates_NoComplexEventDates_198.insert(ComplexEventStartDate_198.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_198);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_401;
        FIX::ComplexEventEndTime ComplexEventEndTime_401(FIX::UTCTIMEONLY(15, 51, 52));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_401);
        ComplexEventTimes_NoComplexEventTimes_401.insert(ComplexEventEndTime_401.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_401(FIX::UTCTIMEONLY(5, 40, 7));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_401);
        ComplexEventTimes_NoComplexEventTimes_401.insert(ComplexEventStartTime_401.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_401);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_402;
        FIX::ComplexEventEndTime ComplexEventEndTime_402(FIX::UTCTIMEONLY(9, 23, 41));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_402);
        ComplexEventTimes_NoComplexEventTimes_402.insert(ComplexEventEndTime_402.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_402(FIX::UTCTIMEONLY(16, 8, 53));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_402);
        ComplexEventTimes_NoComplexEventTimes_402.insert(ComplexEventStartTime_402.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_402);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_199;
      FIX::ComplexEventEndDate ComplexEventEndDate_199(FIX::UTCTIMESTAMP(18, 52, 4, 17, 5, 2004));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_199);
      ComplexEventDates_NoComplexEventDates_199.insert(ComplexEventEndDate_199.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_199(FIX::UTCTIMESTAMP(4, 0, 35, 12, 1, 2003));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_199);
      ComplexEventDates_NoComplexEventDates_199.insert(ComplexEventStartDate_199.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_199);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_403;
        FIX::ComplexEventEndTime ComplexEventEndTime_403(FIX::UTCTIMEONLY(18, 43, 2));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_403);
        ComplexEventTimes_NoComplexEventTimes_403.insert(ComplexEventEndTime_403.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_403(FIX::UTCTIMEONLY(0, 34, 31));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_403);
        ComplexEventTimes_NoComplexEventTimes_403.insert(ComplexEventStartTime_403.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_403);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_404;
        FIX::ComplexEventEndTime ComplexEventEndTime_404(FIX::UTCTIMEONLY(7, 54, 30));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_404);
        ComplexEventTimes_NoComplexEventTimes_404.insert(ComplexEventEndTime_404.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_404(FIX::UTCTIMEONLY(2, 30, 9));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_404);
        ComplexEventTimes_NoComplexEventTimes_404.insert(ComplexEventStartTime_404.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_404);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_405;
        FIX::ComplexEventEndTime ComplexEventEndTime_405(FIX::UTCTIMEONLY(1, 2, 57));
        noComplexEventTimes_2_1_2_2.set(ComplexEventEndTime_405);
        ComplexEventTimes_NoComplexEventTimes_405.insert(ComplexEventEndTime_405.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_405(FIX::UTCTIMEONLY(22, 50, 2));
        noComplexEventTimes_2_1_2_2.set(ComplexEventStartTime_405);
        ComplexEventTimes_NoComplexEventTimes_405.insert(ComplexEventStartTime_405.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_405);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_200;
      FIX::ComplexEventEndDate ComplexEventEndDate_200(FIX::UTCTIMESTAMP(18, 29, 42, 18, 9, 2004));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_200);
      ComplexEventDates_NoComplexEventDates_200.insert(ComplexEventEndDate_200.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_200(FIX::UTCTIMESTAMP(2, 17, 3, 23, 10, 2013));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_200);
      ComplexEventDates_NoComplexEventDates_200.insert(ComplexEventStartDate_200.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_200);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_406;
        FIX::ComplexEventEndTime ComplexEventEndTime_406(FIX::UTCTIMEONLY(9, 33, 21));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_406);
        ComplexEventTimes_NoComplexEventTimes_406.insert(ComplexEventEndTime_406.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_406(FIX::UTCTIMEONLY(11, 52, 11));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_406);
        ComplexEventTimes_NoComplexEventTimes_406.insert(ComplexEventStartTime_406.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_406);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_407;
        FIX::ComplexEventEndTime ComplexEventEndTime_407(FIX::UTCTIMEONLY(17, 13, 38));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_407);
        ComplexEventTimes_NoComplexEventTimes_407.insert(ComplexEventEndTime_407.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_407(FIX::UTCTIMEONLY(15, 28, 17));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_407);
        ComplexEventTimes_NoComplexEventTimes_407.insert(ComplexEventStartTime_407.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_407);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::NewOrderCross::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_85;
    FIX::EventDate EventDate_85("LOCALMKTDATE_4848602");
    noEvents_0_0.set(EventDate_85);
    EvntGrp_NoEvents_85.insert(EventDate_85.getString());
    FIX::EventPx EventPx_85;
    EventPx_85.setString("14969132");
    noEvents_0_0.set(EventPx_85);
    EvntGrp_NoEvents_85.insert(EventPx_85.getString());
    FIX::EventText EventText_85("STRING_267932587");
    noEvents_0_0.set(EventText_85);
    EvntGrp_NoEvents_85.insert(EventText_85.getString());
    FIX::EventTime EventTime_85(FIX::UTCTIMESTAMP(18, 41, 17, 21, 3, 2008));
    noEvents_0_0.set(EventTime_85);
    EvntGrp_NoEvents_85.insert(EventTime_85.getString());
    FIX::EventType EventType_85(9);
    noEvents_0_0.set(EventType_85);
    EvntGrp_NoEvents_85.insert(EventType_85.getString());
    all_values.push_back(EvntGrp_NoEvents_85);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderCross::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_94;
    FIX::InstrumentPartyID InstrumentPartyID_94("STRING_1227546778");
    noInstrumentParties_0_0.set(InstrumentPartyID_94);
    InstrumentParties_NoInstrumentParties_94.insert(InstrumentPartyID_94.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_94('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_94);
    InstrumentParties_NoInstrumentParties_94.insert(InstrumentPartyIDSource_94.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_94(209451171);
    noInstrumentParties_0_0.set(InstrumentPartyRole_94);
    InstrumentParties_NoInstrumentParties_94.insert(InstrumentPartyRole_94.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_94);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181;
      FIX::InstrumentPartySubID InstrumentPartySubID_181("STRING_201683079");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_181);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181.insert(InstrumentPartySubID_181.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_181(796230972);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_181);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181.insert(InstrumentPartySubIDType_181.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182;
      FIX::InstrumentPartySubID InstrumentPartySubID_182("STRING_2036007824");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_182);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182.insert(InstrumentPartySubID_182.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_182(1657967427);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_182);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182.insert(InstrumentPartySubIDType_182.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderCross::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_87;
    FIX::SecurityAltID SecurityAltID_87("STRING_261490547");
    noSecurityAltID_0_0.set(SecurityAltID_87);
    SecAltIDGrp_NoSecurityAltID_87.insert(SecurityAltID_87.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_87("STRING_2138913968");
    noSecurityAltID_0_0.set(SecurityAltIDSource_87);
    SecAltIDGrp_NoSecurityAltID_87.insert(SecurityAltIDSource_87.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_87);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_88;
    FIX::SecurityAltID SecurityAltID_88("STRING_1061532037");
    noSecurityAltID_0_1.set(SecurityAltID_88);
    SecAltIDGrp_NoSecurityAltID_88.insert(SecurityAltID_88.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_88("STRING_1954068900");
    noSecurityAltID_0_1.set(SecurityAltIDSource_88);
    SecAltIDGrp_NoSecurityAltID_88.insert(SecurityAltIDSource_88.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_88);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_94;
  FIX::SecurityXML SecurityXML_95("XMLDATA_936997418");
  msg.set(SecurityXML_95);
  FIX::SecurityXMLLen SecurityXMLLen_47(1594636313);
  msg.set(SecurityXMLLen_47);
  FIX::SecurityXMLSchema SecurityXMLSchema_47("STRING_661410955");
  msg.set(SecurityXMLSchema_47);
  SecurityXML_94.insert(SecurityXMLSchema_47.getString());
  all_values.push_back(SecurityXML_94);
  all_compo_names.insert("SecurityXML");

  // PegInstructions
  multiset<string> PegInstructions_3;
  FIX::PegLimitType PegLimitType_3(2);
  msg.set(PegLimitType_3);
  PegInstructions_3.insert(PegLimitType_3.getString());
  FIX::PegMoveType PegMoveType_3(0);
  msg.set(PegMoveType_3);
  PegInstructions_3.insert(PegMoveType_3.getString());
  FIX::PegOffsetType PegOffsetType_3(0);
  msg.set(PegOffsetType_3);
  PegInstructions_3.insert(PegOffsetType_3.getString());
  FIX::PegOffsetValue PegOffsetValue_3;
  PegOffsetValue_3.setString("9170747");
  msg.set(PegOffsetValue_3);
  PegInstructions_3.insert(PegOffsetValue_3.getString());
  FIX::PegPriceType PegPriceType_3(2);
  msg.set(PegPriceType_3);
  PegInstructions_3.insert(PegPriceType_3.getString());
  FIX::PegRoundDirection PegRoundDirection_3(1);
  msg.set(PegRoundDirection_3);
  PegInstructions_3.insert(PegRoundDirection_3.getString());
  FIX::PegScope PegScope_3(3);
  msg.set(PegScope_3);
  PegInstructions_3.insert(PegScope_3.getString());
  FIX::PegSecurityDesc PegSecurityDesc_3("STRING_10439763");
  msg.set(PegSecurityDesc_3);
  PegInstructions_3.insert(PegSecurityDesc_3.getString());
  FIX::PegSecurityID PegSecurityID_3("STRING_619270749");
  msg.set(PegSecurityID_3);
  PegInstructions_3.insert(PegSecurityID_3.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_3("STRING_1986715828");
  msg.set(PegSecurityIDSource_3);
  PegInstructions_3.insert(PegSecurityIDSource_3.getString());
  FIX::PegSymbol PegSymbol_3("STRING_1304203696");
  msg.set(PegSymbol_3);
  PegInstructions_3.insert(PegSymbol_3.getString());
  all_values.push_back(PegInstructions_3);
  all_compo_names.insert("PegInstructions");

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::NewOrderCross::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_3;
    FIX::RootPartyID RootPartyID_3("STRING_708962380");
    noRootPartyIDs_0_0.set(RootPartyID_3);
    RootParties_NoRootPartyIDs_3.insert(RootPartyID_3.getString());
    FIX::RootPartyIDSource RootPartyIDSource_3('6');
    noRootPartyIDs_0_0.set(RootPartyIDSource_3);
    RootParties_NoRootPartyIDs_3.insert(RootPartyIDSource_3.getString());
    FIX::RootPartyRole RootPartyRole_3(172287712);
    noRootPartyIDs_0_0.set(RootPartyRole_3);
    RootParties_NoRootPartyIDs_3.insert(RootPartyRole_3.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_3);
    all_compo_names.insert("RootParties.NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_4;
      FIX::RootPartySubID RootPartySubID_4("STRING_601072663");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_4);
      RootSubParties_NoRootPartySubIDs_4.insert(RootPartySubID_4.getString());
      FIX::RootPartySubIDType RootPartySubIDType_4(381738883);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_4);
      RootSubParties_NoRootPartySubIDs_4.insert(RootPartySubIDType_4.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_4);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_5;
      FIX::RootPartySubID RootPartySubID_5("STRING_1585774633");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_5);
      RootSubParties_NoRootPartySubIDs_5.insert(RootPartySubID_5.getString());
      FIX::RootPartySubIDType RootPartySubIDType_5(802755742);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_5);
      RootSubParties_NoRootPartySubIDs_5.insert(RootPartySubIDType_5.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_5);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_6;
      FIX::RootPartySubID RootPartySubID_6("STRING_1177969855");
      noRootPartySubIDs_0_1_2.set(RootPartySubID_6);
      RootSubParties_NoRootPartySubIDs_6.insert(RootPartySubID_6.getString());
      FIX::RootPartySubIDType RootPartySubIDType_6(1474298810);
      noRootPartySubIDs_0_1_2.set(RootPartySubIDType_6);
      RootSubParties_NoRootPartySubIDs_6.insert(RootPartySubIDType_6.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_6);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  // SideCrossOrdModGrp
  // Group SideCrossOrdModGrp.NoSides
  {
    FIX50SP2::NewOrderCross::NoSides noSides_0_0;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_3;
    FIX::Account Account_17("STRING_671087092");
    noSides_0_0.set(Account_17);
    SideCrossOrdModGrp_NoSides_3.insert(Account_17.getString());
    FIX::AccountType AccountType_14(2);
    noSides_0_0.set(AccountType_14);
    SideCrossOrdModGrp_NoSides_3.insert(AccountType_14.getString());
    FIX::AcctIDSource AcctIDSource_10(99);
    noSides_0_0.set(AcctIDSource_10);
    SideCrossOrdModGrp_NoSides_3.insert(AcctIDSource_10.getString());
    FIX::AllocID AllocID_12("STRING_1732619129");
    noSides_0_0.set(AllocID_12);
    SideCrossOrdModGrp_NoSides_3.insert(AllocID_12.getString());
    FIX::BookingType BookingType_22(0);
    noSides_0_0.set(BookingType_22);
    SideCrossOrdModGrp_NoSides_3.insert(BookingType_22.getString());
    FIX::BookingUnit BookingUnit_5('2');
    noSides_0_0.set(BookingUnit_5);
    SideCrossOrdModGrp_NoSides_3.insert(BookingUnit_5.getString());
    FIX::CashMargin CashMargin_5('3');
    noSides_0_0.set(CashMargin_5);
    SideCrossOrdModGrp_NoSides_3.insert(CashMargin_5.getString());
    FIX::ClOrdID ClOrdID_26("STRING_56301917");
    noSides_0_0.set(ClOrdID_26);
    SideCrossOrdModGrp_NoSides_3.insert(ClOrdID_26.getString());
    FIX::ClOrdLinkID ClOrdLinkID_6("STRING_6409751");
    noSides_0_0.set(ClOrdLinkID_6);
    SideCrossOrdModGrp_NoSides_3.insert(ClOrdLinkID_6.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_9("STRING_9");
    noSides_0_0.set(ClearingFeeIndicator_9);
    SideCrossOrdModGrp_NoSides_3.insert(ClearingFeeIndicator_9.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_4(0);
    noSides_0_0.set(CoveredOrUncovered_4);
    SideCrossOrdModGrp_NoSides_3.insert(CoveredOrUncovered_4.getString());
    FIX::CustOrderCapacity CustOrderCapacity_8(1);
    noSides_0_0.set(CustOrderCapacity_8);
    SideCrossOrdModGrp_NoSides_3.insert(CustOrderCapacity_8.getString());
    FIX::DayBookingInst DayBookingInst_5('2');
    noSides_0_0.set(DayBookingInst_5);
    SideCrossOrdModGrp_NoSides_3.insert(DayBookingInst_5.getString());
    FIX::EncodedText EncodedText_54("DATA_162774914");
    noSides_0_0.set(EncodedText_54);
    SideCrossOrdModGrp_NoSides_3.insert(EncodedText_54.getString());
    FIX::EncodedTextLen EncodedTextLen_54(110329515);
    noSides_0_0.set(EncodedTextLen_54);
    SideCrossOrdModGrp_NoSides_3.insert(EncodedTextLen_54.getString());
    FIX::ForexReq ForexReq_5(false);
    noSides_0_0.set(ForexReq_5);
    SideCrossOrdModGrp_NoSides_3.insert(ForexReq_5.getString());
    FIX::OrderCapacity OrderCapacity_23('W');
    noSides_0_0.set(OrderCapacity_23);
    SideCrossOrdModGrp_NoSides_3.insert(OrderCapacity_23.getString());
    FIX::OrderRestrictions OrderRestrictions_20("MULTIPLECHARVALUE_E");
    noSides_0_0.set(OrderRestrictions_20);
    SideCrossOrdModGrp_NoSides_3.insert(OrderRestrictions_20.getString());
    FIX::OrigClOrdID OrigClOrdID_6("STRING_1549710430");
    noSides_0_0.set(OrigClOrdID_6);
    SideCrossOrdModGrp_NoSides_3.insert(OrigClOrdID_6.getString());
    FIX::PositionEffect PositionEffect_8('R');
    noSides_0_0.set(PositionEffect_8);
    SideCrossOrdModGrp_NoSides_3.insert(PositionEffect_8.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_5(false);
    noSides_0_0.set(PreTradeAnonymity_5);
    SideCrossOrdModGrp_NoSides_3.insert(PreTradeAnonymity_5.getString());
    FIX::PreallocMethod PreallocMethod_5('0');
    noSides_0_0.set(PreallocMethod_5);
    SideCrossOrdModGrp_NoSides_3.insert(PreallocMethod_5.getString());
    FIX::QtyType QtyType_17(1);
    noSides_0_0.set(QtyType_17);
    SideCrossOrdModGrp_NoSides_3.insert(QtyType_17.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_24("STRING_447549586");
    noSides_0_0.set(SecondaryClOrdID_24);
    SideCrossOrdModGrp_NoSides_3.insert(SecondaryClOrdID_24.getString());
    FIX::SettlCurrency SettlCurrency_13("GBP");
    noSides_0_0.set(SettlCurrency_13);
    SideCrossOrdModGrp_NoSides_3.insert(SettlCurrency_13.getString());
    FIX::Side Side_25('C');
    noSides_0_0.set(Side_25);
    SideCrossOrdModGrp_NoSides_3.insert(Side_25.getString());
    FIX::SideComplianceID SideComplianceID_3("STRING_1435925084");
    noSides_0_0.set(SideComplianceID_3);
    SideCrossOrdModGrp_NoSides_3.insert(SideComplianceID_3.getString());
    FIX::SideTimeInForce SideTimeInForce_3(FIX::UTCTIMESTAMP(5, 25, 30, 27, 8, 2011));
    noSides_0_0.set(SideTimeInForce_3);
    SideCrossOrdModGrp_NoSides_3.insert(SideTimeInForce_3.getString());
    FIX::SolicitedFlag SolicitedFlag_5(false);
    noSides_0_0.set(SolicitedFlag_5);
    SideCrossOrdModGrp_NoSides_3.insert(SolicitedFlag_5.getString());
    FIX::Text Text_54("STRING_1148018059");
    noSides_0_0.set(Text_54);
    SideCrossOrdModGrp_NoSides_3.insert(Text_54.getString());
    FIX::TradeDate TradeDate_18("LOCALMKTDATE_1043044146");
    noSides_0_0.set(TradeDate_18);
    SideCrossOrdModGrp_NoSides_3.insert(TradeDate_18.getString());
    FIX::TradeOriginationDate TradeOriginationDate_10("LOCALMKTDATE_399637970");
    noSides_0_0.set(TradeOriginationDate_10);
    SideCrossOrdModGrp_NoSides_3.insert(TradeOriginationDate_10.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_3);
    all_compo_names.insert("SideCrossOrdModGrp.NoSides");

    // CommissionData
    multiset<string> CommissionData_13;
    FIX::CommCurrency CommCurrency_13("CHF");
    noSides_0_0.set(CommCurrency_13);
    CommissionData_13.insert(CommCurrency_13.getString());
    FIX::CommType CommType_13('1');
    noSides_0_0.set(CommType_13);
    CommissionData_13.insert(CommType_13.getString());
    FIX::Commission Commission_13;
    Commission_13.setString("20779123");
    noSides_0_0.set(Commission_13);
    CommissionData_13.insert(Commission_13.getString());
    FIX::FundRenewWaiv FundRenewWaiv_13('Y');
    noSides_0_0.set(FundRenewWaiv_13);
    CommissionData_13.insert(FundRenewWaiv_13.getString());
    all_values.push_back(CommissionData_13);
    all_compo_names.insert("CommissionData");

    // OrderQtyData
    multiset<string> OrderQtyData_9;
    FIX::CashOrderQty CashOrderQty_9;
    CashOrderQty_9.setString("16117268");
    noSides_0_0.set(CashOrderQty_9);
    OrderQtyData_9.insert(CashOrderQty_9.getString());
    FIX::OrderPercent OrderPercent_9;
    OrderPercent_9.setString("81.690000");
    noSides_0_0.set(OrderPercent_9);
    OrderQtyData_9.insert(OrderPercent_9.getString());
    FIX::OrderQty OrderQty_19;
    OrderQty_19.setString("14825806");
    noSides_0_0.set(OrderQty_19);
    OrderQtyData_9.insert(OrderQty_19.getString());
    FIX::RoundingDirection RoundingDirection_9('0');
    noSides_0_0.set(RoundingDirection_9);
    OrderQtyData_9.insert(RoundingDirection_9.getString());
    FIX::RoundingModulus RoundingModulus_9;
    RoundingModulus_9.setString("21378035");
    noSides_0_0.set(RoundingModulus_9);
    OrderQtyData_9.insert(RoundingModulus_9.getString());
    all_values.push_back(OrderQtyData_9);
    all_compo_names.insert("OrderQtyData");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_59;
      FIX::PartyID PartyID_59("STRING_268825821");
      noPartyIDs_0_1_0.set(PartyID_59);
      Parties_NoPartyIDs_59.insert(PartyID_59.getString());
      FIX::PartyIDSource PartyIDSource_59('I');
      noPartyIDs_0_1_0.set(PartyIDSource_59);
      Parties_NoPartyIDs_59.insert(PartyIDSource_59.getString());
      FIX::PartyRole PartyRole_59(65);
      noPartyIDs_0_1_0.set(PartyRole_59);
      Parties_NoPartyIDs_59.insert(PartyRole_59.getString());
      all_values.push_back(Parties_NoPartyIDs_59);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_129;
        FIX::PartySubID PartySubID_129("STRING_1096393526");
        noPartySubIDs_0_0_2_0.set(PartySubID_129);
        PtysSubGrp_NoPartySubIDs_129.insert(PartySubID_129.getString());
        FIX::PartySubIDType PartySubIDType_129(28);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_129);
        PtysSubGrp_NoPartySubIDs_129.insert(PartySubIDType_129.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_129);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_130;
        FIX::PartySubID PartySubID_130("STRING_1040214079");
        noPartySubIDs_0_0_2_1.set(PartySubID_130);
        PtysSubGrp_NoPartySubIDs_130.insert(PartySubID_130.getString());
        FIX::PartySubIDType PartySubIDType_130(21);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_130);
        PtysSubGrp_NoPartySubIDs_130.insert(PartySubIDType_130.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_130);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_131;
        FIX::PartySubID PartySubID_131("STRING_838514856");
        noPartySubIDs_0_0_2_2.set(PartySubID_131);
        PtysSubGrp_NoPartySubIDs_131.insert(PartySubID_131.getString());
        FIX::PartySubIDType PartySubIDType_131(10);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_131);
        PtysSubGrp_NoPartySubIDs_131.insert(PartySubIDType_131.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_131);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_8;
      FIX::AllocAccount AllocAccount_18("STRING_440195814");
      noAllocs_0_1_0.set(AllocAccount_18);
      PreAllocGrp_NoAllocs_8.insert(AllocAccount_18.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_18(925400727);
      noAllocs_0_1_0.set(AllocAcctIDSource_18);
      PreAllocGrp_NoAllocs_8.insert(AllocAcctIDSource_18.getString());
      FIX::AllocQty AllocQty_17;
      AllocQty_17.setString("11433349");
      noAllocs_0_1_0.set(AllocQty_17);
      PreAllocGrp_NoAllocs_8.insert(AllocQty_17.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_13("EUR");
      noAllocs_0_1_0.set(AllocSettlCurrency_13);
      PreAllocGrp_NoAllocs_8.insert(AllocSettlCurrency_13.getString());
      FIX::IndividualAllocID IndividualAllocID_18("STRING_1486670975");
      noAllocs_0_1_0.set(IndividualAllocID_18);
      PreAllocGrp_NoAllocs_8.insert(IndividualAllocID_18.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_8);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_47;
        FIX::NestedPartyID NestedPartyID_47("STRING_1831717225");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_47);
        NestedParties_NoNestedPartyIDs_47.insert(NestedPartyID_47.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_47('1');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_47);
        NestedParties_NoNestedPartyIDs_47.insert(NestedPartyIDSource_47.getString());
        FIX::NestedPartyRole NestedPartyRole_47(501508834);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_47);
        NestedParties_NoNestedPartyIDs_47.insert(NestedPartyRole_47.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_47);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_101;
          FIX::NestedPartySubID NestedPartySubID_101("STRING_1187777214");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_101);
          NstdPtysSubGrp_NoNestedPartySubIDs_101.insert(NestedPartySubID_101.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_101(431937488);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_101);
          NstdPtysSubGrp_NoNestedPartySubIDs_101.insert(NestedPartySubIDType_101.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_101);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_102;
          FIX::NestedPartySubID NestedPartySubID_102("STRING_1923314377");
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubID_102);
          NstdPtysSubGrp_NoNestedPartySubIDs_102.insert(NestedPartySubID_102.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_102(652020396);
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubIDType_102);
          NstdPtysSubGrp_NoNestedPartySubIDs_102.insert(NestedPartySubIDType_102.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_102);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_103;
          FIX::NestedPartySubID NestedPartySubID_103("STRING_472695658");
          noNestedPartySubIDs_0_0_0_3_2.set(NestedPartySubID_103);
          NstdPtysSubGrp_NoNestedPartySubIDs_103.insert(NestedPartySubID_103.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_103(1258411347);
          noNestedPartySubIDs_0_0_0_3_2.set(NestedPartySubIDType_103);
          NstdPtysSubGrp_NoNestedPartySubIDs_103.insert(NestedPartySubIDType_103.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_103);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_2);
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
    multiset<string> SideCrossOrdModGrp_NoSides_4;
    FIX::Account Account_18("STRING_898309242");
    noSides_0_1.set(Account_18);
    SideCrossOrdModGrp_NoSides_4.insert(Account_18.getString());
    FIX::AccountType AccountType_15(6);
    noSides_0_1.set(AccountType_15);
    SideCrossOrdModGrp_NoSides_4.insert(AccountType_15.getString());
    FIX::AcctIDSource AcctIDSource_11(5);
    noSides_0_1.set(AcctIDSource_11);
    SideCrossOrdModGrp_NoSides_4.insert(AcctIDSource_11.getString());
    FIX::AllocID AllocID_13("STRING_1167135064");
    noSides_0_1.set(AllocID_13);
    SideCrossOrdModGrp_NoSides_4.insert(AllocID_13.getString());
    FIX::BookingType BookingType_23(2);
    noSides_0_1.set(BookingType_23);
    SideCrossOrdModGrp_NoSides_4.insert(BookingType_23.getString());
    FIX::BookingUnit BookingUnit_6('2');
    noSides_0_1.set(BookingUnit_6);
    SideCrossOrdModGrp_NoSides_4.insert(BookingUnit_6.getString());
    FIX::CashMargin CashMargin_6('1');
    noSides_0_1.set(CashMargin_6);
    SideCrossOrdModGrp_NoSides_4.insert(CashMargin_6.getString());
    FIX::ClOrdID ClOrdID_27("STRING_60769340");
    noSides_0_1.set(ClOrdID_27);
    SideCrossOrdModGrp_NoSides_4.insert(ClOrdID_27.getString());
    FIX::ClOrdLinkID ClOrdLinkID_7("STRING_315228951");
    noSides_0_1.set(ClOrdLinkID_7);
    SideCrossOrdModGrp_NoSides_4.insert(ClOrdLinkID_7.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_10("STRING_5");
    noSides_0_1.set(ClearingFeeIndicator_10);
    SideCrossOrdModGrp_NoSides_4.insert(ClearingFeeIndicator_10.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_5(0);
    noSides_0_1.set(CoveredOrUncovered_5);
    SideCrossOrdModGrp_NoSides_4.insert(CoveredOrUncovered_5.getString());
    FIX::CustOrderCapacity CustOrderCapacity_9(1);
    noSides_0_1.set(CustOrderCapacity_9);
    SideCrossOrdModGrp_NoSides_4.insert(CustOrderCapacity_9.getString());
    FIX::DayBookingInst DayBookingInst_6('0');
    noSides_0_1.set(DayBookingInst_6);
    SideCrossOrdModGrp_NoSides_4.insert(DayBookingInst_6.getString());
    FIX::EncodedText EncodedText_55("DATA_1237893269");
    noSides_0_1.set(EncodedText_55);
    SideCrossOrdModGrp_NoSides_4.insert(EncodedText_55.getString());
    FIX::EncodedTextLen EncodedTextLen_55(1593939622);
    noSides_0_1.set(EncodedTextLen_55);
    SideCrossOrdModGrp_NoSides_4.insert(EncodedTextLen_55.getString());
    FIX::ForexReq ForexReq_6(false);
    noSides_0_1.set(ForexReq_6);
    SideCrossOrdModGrp_NoSides_4.insert(ForexReq_6.getString());
    FIX::OrderCapacity OrderCapacity_24('W');
    noSides_0_1.set(OrderCapacity_24);
    SideCrossOrdModGrp_NoSides_4.insert(OrderCapacity_24.getString());
    FIX::OrderRestrictions OrderRestrictions_21("MULTIPLECHARVALUE_1");
    noSides_0_1.set(OrderRestrictions_21);
    SideCrossOrdModGrp_NoSides_4.insert(OrderRestrictions_21.getString());
    FIX::OrigClOrdID OrigClOrdID_7("STRING_737370020");
    noSides_0_1.set(OrigClOrdID_7);
    SideCrossOrdModGrp_NoSides_4.insert(OrigClOrdID_7.getString());
    FIX::PositionEffect PositionEffect_9('N');
    noSides_0_1.set(PositionEffect_9);
    SideCrossOrdModGrp_NoSides_4.insert(PositionEffect_9.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_6(false);
    noSides_0_1.set(PreTradeAnonymity_6);
    SideCrossOrdModGrp_NoSides_4.insert(PreTradeAnonymity_6.getString());
    FIX::PreallocMethod PreallocMethod_6('1');
    noSides_0_1.set(PreallocMethod_6);
    SideCrossOrdModGrp_NoSides_4.insert(PreallocMethod_6.getString());
    FIX::QtyType QtyType_18(0);
    noSides_0_1.set(QtyType_18);
    SideCrossOrdModGrp_NoSides_4.insert(QtyType_18.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_25("STRING_1789076093");
    noSides_0_1.set(SecondaryClOrdID_25);
    SideCrossOrdModGrp_NoSides_4.insert(SecondaryClOrdID_25.getString());
    FIX::SettlCurrency SettlCurrency_14("EUR");
    noSides_0_1.set(SettlCurrency_14);
    SideCrossOrdModGrp_NoSides_4.insert(SettlCurrency_14.getString());
    FIX::Side Side_26('E');
    noSides_0_1.set(Side_26);
    SideCrossOrdModGrp_NoSides_4.insert(Side_26.getString());
    FIX::SideComplianceID SideComplianceID_4("STRING_883674818");
    noSides_0_1.set(SideComplianceID_4);
    SideCrossOrdModGrp_NoSides_4.insert(SideComplianceID_4.getString());
    FIX::SideTimeInForce SideTimeInForce_4(FIX::UTCTIMESTAMP(15, 6, 20, 14, 3, 2004));
    noSides_0_1.set(SideTimeInForce_4);
    SideCrossOrdModGrp_NoSides_4.insert(SideTimeInForce_4.getString());
    FIX::SolicitedFlag SolicitedFlag_6(true);
    noSides_0_1.set(SolicitedFlag_6);
    SideCrossOrdModGrp_NoSides_4.insert(SolicitedFlag_6.getString());
    FIX::Text Text_55("STRING_902976797");
    noSides_0_1.set(Text_55);
    SideCrossOrdModGrp_NoSides_4.insert(Text_55.getString());
    FIX::TradeDate TradeDate_19("LOCALMKTDATE_552817361");
    noSides_0_1.set(TradeDate_19);
    SideCrossOrdModGrp_NoSides_4.insert(TradeDate_19.getString());
    FIX::TradeOriginationDate TradeOriginationDate_11("LOCALMKTDATE_34386269");
    noSides_0_1.set(TradeOriginationDate_11);
    SideCrossOrdModGrp_NoSides_4.insert(TradeOriginationDate_11.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_4);
    all_compo_names.insert("SideCrossOrdModGrp.NoSides");

    // CommissionData
    multiset<string> CommissionData_14;
    FIX::CommCurrency CommCurrency_14("GBP");
    noSides_0_1.set(CommCurrency_14);
    CommissionData_14.insert(CommCurrency_14.getString());
    FIX::CommType CommType_14('2');
    noSides_0_1.set(CommType_14);
    CommissionData_14.insert(CommType_14.getString());
    FIX::Commission Commission_14;
    Commission_14.setString("2244659");
    noSides_0_1.set(Commission_14);
    CommissionData_14.insert(Commission_14.getString());
    FIX::FundRenewWaiv FundRenewWaiv_14('N');
    noSides_0_1.set(FundRenewWaiv_14);
    CommissionData_14.insert(FundRenewWaiv_14.getString());
    all_values.push_back(CommissionData_14);
    all_compo_names.insert("CommissionData");

    // OrderQtyData
    multiset<string> OrderQtyData_10;
    FIX::CashOrderQty CashOrderQty_10;
    CashOrderQty_10.setString("1677993");
    noSides_0_1.set(CashOrderQty_10);
    OrderQtyData_10.insert(CashOrderQty_10.getString());
    FIX::OrderPercent OrderPercent_10;
    OrderPercent_10.setString("55.300000");
    noSides_0_1.set(OrderPercent_10);
    OrderQtyData_10.insert(OrderPercent_10.getString());
    FIX::OrderQty OrderQty_20;
    OrderQty_20.setString("483265");
    noSides_0_1.set(OrderQty_20);
    OrderQtyData_10.insert(OrderQty_20.getString());
    FIX::RoundingDirection RoundingDirection_10('0');
    noSides_0_1.set(RoundingDirection_10);
    OrderQtyData_10.insert(RoundingDirection_10.getString());
    FIX::RoundingModulus RoundingModulus_10;
    RoundingModulus_10.setString("16114081");
    noSides_0_1.set(RoundingModulus_10);
    OrderQtyData_10.insert(RoundingModulus_10.getString());
    all_values.push_back(OrderQtyData_10);
    all_compo_names.insert("OrderQtyData");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_60;
      FIX::PartyID PartyID_60("STRING_2121959389");
      noPartyIDs_1_1_0.set(PartyID_60);
      Parties_NoPartyIDs_60.insert(PartyID_60.getString());
      FIX::PartyIDSource PartyIDSource_60('4');
      noPartyIDs_1_1_0.set(PartyIDSource_60);
      Parties_NoPartyIDs_60.insert(PartyIDSource_60.getString());
      FIX::PartyRole PartyRole_60(61);
      noPartyIDs_1_1_0.set(PartyRole_60);
      Parties_NoPartyIDs_60.insert(PartyRole_60.getString());
      all_values.push_back(Parties_NoPartyIDs_60);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_132;
        FIX::PartySubID PartySubID_132("STRING_393084173");
        noPartySubIDs_1_0_2_0.set(PartySubID_132);
        PtysSubGrp_NoPartySubIDs_132.insert(PartySubID_132.getString());
        FIX::PartySubIDType PartySubIDType_132(23);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_132);
        PtysSubGrp_NoPartySubIDs_132.insert(PartySubIDType_132.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_132);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_133;
        FIX::PartySubID PartySubID_133("STRING_1933250938");
        noPartySubIDs_1_0_2_1.set(PartySubID_133);
        PtysSubGrp_NoPartySubIDs_133.insert(PartySubID_133.getString());
        FIX::PartySubIDType PartySubIDType_133(15);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_133);
        PtysSubGrp_NoPartySubIDs_133.insert(PartySubIDType_133.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_133);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_134;
        FIX::PartySubID PartySubID_134("STRING_1051335399");
        noPartySubIDs_1_0_2_2.set(PartySubID_134);
        PtysSubGrp_NoPartySubIDs_134.insert(PartySubID_134.getString());
        FIX::PartySubIDType PartySubIDType_134(2);
        noPartySubIDs_1_0_2_2.set(PartySubIDType_134);
        PtysSubGrp_NoPartySubIDs_134.insert(PartySubIDType_134.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_134);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_61;
      FIX::PartyID PartyID_61("STRING_1012839698");
      noPartyIDs_1_1_1.set(PartyID_61);
      Parties_NoPartyIDs_61.insert(PartyID_61.getString());
      FIX::PartyIDSource PartyIDSource_61('7');
      noPartyIDs_1_1_1.set(PartyIDSource_61);
      Parties_NoPartyIDs_61.insert(PartyIDSource_61.getString());
      FIX::PartyRole PartyRole_61(54);
      noPartyIDs_1_1_1.set(PartyRole_61);
      Parties_NoPartyIDs_61.insert(PartyRole_61.getString());
      all_values.push_back(Parties_NoPartyIDs_61);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_135;
        FIX::PartySubID PartySubID_135("STRING_1036275535");
        noPartySubIDs_1_1_2_0.set(PartySubID_135);
        PtysSubGrp_NoPartySubIDs_135.insert(PartySubID_135.getString());
        FIX::PartySubIDType PartySubIDType_135(7);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_135);
        PtysSubGrp_NoPartySubIDs_135.insert(PartySubIDType_135.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_135);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_136;
        FIX::PartySubID PartySubID_136("STRING_1995697741");
        noPartySubIDs_1_1_2_1.set(PartySubID_136);
        PtysSubGrp_NoPartySubIDs_136.insert(PartySubID_136.getString());
        FIX::PartySubIDType PartySubIDType_136(7);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_136);
        PtysSubGrp_NoPartySubIDs_136.insert(PartySubIDType_136.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_136);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_1_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_9;
      FIX::AllocAccount AllocAccount_19("STRING_2030084010");
      noAllocs_1_1_0.set(AllocAccount_19);
      PreAllocGrp_NoAllocs_9.insert(AllocAccount_19.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_19(1009974433);
      noAllocs_1_1_0.set(AllocAcctIDSource_19);
      PreAllocGrp_NoAllocs_9.insert(AllocAcctIDSource_19.getString());
      FIX::AllocQty AllocQty_18;
      AllocQty_18.setString("13908849");
      noAllocs_1_1_0.set(AllocQty_18);
      PreAllocGrp_NoAllocs_9.insert(AllocQty_18.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_14("CAN");
      noAllocs_1_1_0.set(AllocSettlCurrency_14);
      PreAllocGrp_NoAllocs_9.insert(AllocSettlCurrency_14.getString());
      FIX::IndividualAllocID IndividualAllocID_19("STRING_1490514536");
      noAllocs_1_1_0.set(IndividualAllocID_19);
      PreAllocGrp_NoAllocs_9.insert(IndividualAllocID_19.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_9);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_48;
        FIX::NestedPartyID NestedPartyID_48("STRING_905362224");
        noNestedPartyIDs_1_0_2_0.set(NestedPartyID_48);
        NestedParties_NoNestedPartyIDs_48.insert(NestedPartyID_48.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_48('1');
        noNestedPartyIDs_1_0_2_0.set(NestedPartyIDSource_48);
        NestedParties_NoNestedPartyIDs_48.insert(NestedPartyIDSource_48.getString());
        FIX::NestedPartyRole NestedPartyRole_48(1529333268);
        noNestedPartyIDs_1_0_2_0.set(NestedPartyRole_48);
        NestedParties_NoNestedPartyIDs_48.insert(NestedPartyRole_48.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_48);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_104;
          FIX::NestedPartySubID NestedPartySubID_104("STRING_177053952");
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubID_104);
          NstdPtysSubGrp_NoNestedPartySubIDs_104.insert(NestedPartySubID_104.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_104(1503809009);
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubIDType_104);
          NstdPtysSubGrp_NoNestedPartySubIDs_104.insert(NestedPartySubIDType_104.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_104);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_105;
          FIX::NestedPartySubID NestedPartySubID_105("STRING_1120778422");
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubID_105);
          NstdPtysSubGrp_NoNestedPartySubIDs_105.insert(NestedPartySubID_105.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_105(1384354091);
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubIDType_105);
          NstdPtysSubGrp_NoNestedPartySubIDs_105.insert(NestedPartySubIDType_105.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_105);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
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
    multiset<string> SideCrossOrdModGrp_NoSides_5;
    FIX::Account Account_19("STRING_790041917");
    noSides_0_2.set(Account_19);
    SideCrossOrdModGrp_NoSides_5.insert(Account_19.getString());
    FIX::AccountType AccountType_16(1);
    noSides_0_2.set(AccountType_16);
    SideCrossOrdModGrp_NoSides_5.insert(AccountType_16.getString());
    FIX::AcctIDSource AcctIDSource_12(1);
    noSides_0_2.set(AcctIDSource_12);
    SideCrossOrdModGrp_NoSides_5.insert(AcctIDSource_12.getString());
    FIX::AllocID AllocID_14("STRING_575809207");
    noSides_0_2.set(AllocID_14);
    SideCrossOrdModGrp_NoSides_5.insert(AllocID_14.getString());
    FIX::BookingType BookingType_24(2);
    noSides_0_2.set(BookingType_24);
    SideCrossOrdModGrp_NoSides_5.insert(BookingType_24.getString());
    FIX::BookingUnit BookingUnit_7('2');
    noSides_0_2.set(BookingUnit_7);
    SideCrossOrdModGrp_NoSides_5.insert(BookingUnit_7.getString());
    FIX::CashMargin CashMargin_7('3');
    noSides_0_2.set(CashMargin_7);
    SideCrossOrdModGrp_NoSides_5.insert(CashMargin_7.getString());
    FIX::ClOrdID ClOrdID_28("STRING_845832753");
    noSides_0_2.set(ClOrdID_28);
    SideCrossOrdModGrp_NoSides_5.insert(ClOrdID_28.getString());
    FIX::ClOrdLinkID ClOrdLinkID_8("STRING_1501804341");
    noSides_0_2.set(ClOrdLinkID_8);
    SideCrossOrdModGrp_NoSides_5.insert(ClOrdLinkID_8.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_11("STRING_1");
    noSides_0_2.set(ClearingFeeIndicator_11);
    SideCrossOrdModGrp_NoSides_5.insert(ClearingFeeIndicator_11.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_6(1);
    noSides_0_2.set(CoveredOrUncovered_6);
    SideCrossOrdModGrp_NoSides_5.insert(CoveredOrUncovered_6.getString());
    FIX::CustOrderCapacity CustOrderCapacity_10(2);
    noSides_0_2.set(CustOrderCapacity_10);
    SideCrossOrdModGrp_NoSides_5.insert(CustOrderCapacity_10.getString());
    FIX::DayBookingInst DayBookingInst_7('2');
    noSides_0_2.set(DayBookingInst_7);
    SideCrossOrdModGrp_NoSides_5.insert(DayBookingInst_7.getString());
    FIX::EncodedText EncodedText_56("DATA_568644010");
    noSides_0_2.set(EncodedText_56);
    SideCrossOrdModGrp_NoSides_5.insert(EncodedText_56.getString());
    FIX::EncodedTextLen EncodedTextLen_56(182364913);
    noSides_0_2.set(EncodedTextLen_56);
    SideCrossOrdModGrp_NoSides_5.insert(EncodedTextLen_56.getString());
    FIX::ForexReq ForexReq_7(false);
    noSides_0_2.set(ForexReq_7);
    SideCrossOrdModGrp_NoSides_5.insert(ForexReq_7.getString());
    FIX::OrderCapacity OrderCapacity_25('I');
    noSides_0_2.set(OrderCapacity_25);
    SideCrossOrdModGrp_NoSides_5.insert(OrderCapacity_25.getString());
    FIX::OrderRestrictions OrderRestrictions_22("MULTIPLECHARVALUE_C");
    noSides_0_2.set(OrderRestrictions_22);
    SideCrossOrdModGrp_NoSides_5.insert(OrderRestrictions_22.getString());
    FIX::OrigClOrdID OrigClOrdID_8("STRING_1672520844");
    noSides_0_2.set(OrigClOrdID_8);
    SideCrossOrdModGrp_NoSides_5.insert(OrigClOrdID_8.getString());
    FIX::PositionEffect PositionEffect_10('F');
    noSides_0_2.set(PositionEffect_10);
    SideCrossOrdModGrp_NoSides_5.insert(PositionEffect_10.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_7(true);
    noSides_0_2.set(PreTradeAnonymity_7);
    SideCrossOrdModGrp_NoSides_5.insert(PreTradeAnonymity_7.getString());
    FIX::PreallocMethod PreallocMethod_7('0');
    noSides_0_2.set(PreallocMethod_7);
    SideCrossOrdModGrp_NoSides_5.insert(PreallocMethod_7.getString());
    FIX::QtyType QtyType_19(2);
    noSides_0_2.set(QtyType_19);
    SideCrossOrdModGrp_NoSides_5.insert(QtyType_19.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_26("STRING_1184658264");
    noSides_0_2.set(SecondaryClOrdID_26);
    SideCrossOrdModGrp_NoSides_5.insert(SecondaryClOrdID_26.getString());
    FIX::SettlCurrency SettlCurrency_15("GBP");
    noSides_0_2.set(SettlCurrency_15);
    SideCrossOrdModGrp_NoSides_5.insert(SettlCurrency_15.getString());
    FIX::Side Side_27('E');
    noSides_0_2.set(Side_27);
    SideCrossOrdModGrp_NoSides_5.insert(Side_27.getString());
    FIX::SideComplianceID SideComplianceID_5("STRING_583963094");
    noSides_0_2.set(SideComplianceID_5);
    SideCrossOrdModGrp_NoSides_5.insert(SideComplianceID_5.getString());
    FIX::SideTimeInForce SideTimeInForce_5(FIX::UTCTIMESTAMP(3, 26, 17, 19, 7, 2016));
    noSides_0_2.set(SideTimeInForce_5);
    SideCrossOrdModGrp_NoSides_5.insert(SideTimeInForce_5.getString());
    FIX::SolicitedFlag SolicitedFlag_7(false);
    noSides_0_2.set(SolicitedFlag_7);
    SideCrossOrdModGrp_NoSides_5.insert(SolicitedFlag_7.getString());
    FIX::Text Text_56("STRING_1828714634");
    noSides_0_2.set(Text_56);
    SideCrossOrdModGrp_NoSides_5.insert(Text_56.getString());
    FIX::TradeDate TradeDate_20("LOCALMKTDATE_2008697572");
    noSides_0_2.set(TradeDate_20);
    SideCrossOrdModGrp_NoSides_5.insert(TradeDate_20.getString());
    FIX::TradeOriginationDate TradeOriginationDate_12("LOCALMKTDATE_572444486");
    noSides_0_2.set(TradeOriginationDate_12);
    SideCrossOrdModGrp_NoSides_5.insert(TradeOriginationDate_12.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_5);
    all_compo_names.insert("SideCrossOrdModGrp.NoSides");

    // CommissionData
    multiset<string> CommissionData_15;
    FIX::CommCurrency CommCurrency_15("JPY");
    noSides_0_2.set(CommCurrency_15);
    CommissionData_15.insert(CommCurrency_15.getString());
    FIX::CommType CommType_15('3');
    noSides_0_2.set(CommType_15);
    CommissionData_15.insert(CommType_15.getString());
    FIX::Commission Commission_15;
    Commission_15.setString("15736315");
    noSides_0_2.set(Commission_15);
    CommissionData_15.insert(Commission_15.getString());
    FIX::FundRenewWaiv FundRenewWaiv_15('Y');
    noSides_0_2.set(FundRenewWaiv_15);
    CommissionData_15.insert(FundRenewWaiv_15.getString());
    all_values.push_back(CommissionData_15);
    all_compo_names.insert("CommissionData");

    // OrderQtyData
    multiset<string> OrderQtyData_11;
    FIX::CashOrderQty CashOrderQty_11;
    CashOrderQty_11.setString("18615184");
    noSides_0_2.set(CashOrderQty_11);
    OrderQtyData_11.insert(CashOrderQty_11.getString());
    FIX::OrderPercent OrderPercent_11;
    OrderPercent_11.setString("64.700000");
    noSides_0_2.set(OrderPercent_11);
    OrderQtyData_11.insert(OrderPercent_11.getString());
    FIX::OrderQty OrderQty_21;
    OrderQty_21.setString("3152841");
    noSides_0_2.set(OrderQty_21);
    OrderQtyData_11.insert(OrderQty_21.getString());
    FIX::RoundingDirection RoundingDirection_11('1');
    noSides_0_2.set(RoundingDirection_11);
    OrderQtyData_11.insert(RoundingDirection_11.getString());
    FIX::RoundingModulus RoundingModulus_11;
    RoundingModulus_11.setString("8008521");
    noSides_0_2.set(RoundingModulus_11);
    OrderQtyData_11.insert(RoundingModulus_11.getString());
    all_values.push_back(OrderQtyData_11);
    all_compo_names.insert("OrderQtyData");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_62;
      FIX::PartyID PartyID_62("STRING_1576513580");
      noPartyIDs_2_1_0.set(PartyID_62);
      Parties_NoPartyIDs_62.insert(PartyID_62.getString());
      FIX::PartyIDSource PartyIDSource_62('F');
      noPartyIDs_2_1_0.set(PartyIDSource_62);
      Parties_NoPartyIDs_62.insert(PartyIDSource_62.getString());
      FIX::PartyRole PartyRole_62(47);
      noPartyIDs_2_1_0.set(PartyRole_62);
      Parties_NoPartyIDs_62.insert(PartyRole_62.getString());
      all_values.push_back(Parties_NoPartyIDs_62);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_137;
        FIX::PartySubID PartySubID_137("STRING_117322825");
        noPartySubIDs_2_0_2_0.set(PartySubID_137);
        PtysSubGrp_NoPartySubIDs_137.insert(PartySubID_137.getString());
        FIX::PartySubIDType PartySubIDType_137(24);
        noPartySubIDs_2_0_2_0.set(PartySubIDType_137);
        PtysSubGrp_NoPartySubIDs_137.insert(PartySubIDType_137.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_137);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_138;
        FIX::PartySubID PartySubID_138("STRING_1741443581");
        noPartySubIDs_2_0_2_1.set(PartySubID_138);
        PtysSubGrp_NoPartySubIDs_138.insert(PartySubID_138.getString());
        FIX::PartySubIDType PartySubIDType_138(9);
        noPartySubIDs_2_0_2_1.set(PartySubIDType_138);
        PtysSubGrp_NoPartySubIDs_138.insert(PartySubIDType_138.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_138);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_139;
        FIX::PartySubID PartySubID_139("STRING_1846745342");
        noPartySubIDs_2_0_2_2.set(PartySubID_139);
        PtysSubGrp_NoPartySubIDs_139.insert(PartySubID_139.getString());
        FIX::PartySubIDType PartySubIDType_139(4);
        noPartySubIDs_2_0_2_2.set(PartySubIDType_139);
        PtysSubGrp_NoPartySubIDs_139.insert(PartySubIDType_139.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_139);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_2);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_2_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_63;
      FIX::PartyID PartyID_63("STRING_51023866");
      noPartyIDs_2_1_1.set(PartyID_63);
      Parties_NoPartyIDs_63.insert(PartyID_63.getString());
      FIX::PartyIDSource PartyIDSource_63('8');
      noPartyIDs_2_1_1.set(PartyIDSource_63);
      Parties_NoPartyIDs_63.insert(PartyIDSource_63.getString());
      FIX::PartyRole PartyRole_63(68);
      noPartyIDs_2_1_1.set(PartyRole_63);
      Parties_NoPartyIDs_63.insert(PartyRole_63.getString());
      all_values.push_back(Parties_NoPartyIDs_63);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_140;
        FIX::PartySubID PartySubID_140("STRING_892943442");
        noPartySubIDs_2_1_2_0.set(PartySubID_140);
        PtysSubGrp_NoPartySubIDs_140.insert(PartySubID_140.getString());
        FIX::PartySubIDType PartySubIDType_140(8);
        noPartySubIDs_2_1_2_0.set(PartySubIDType_140);
        PtysSubGrp_NoPartySubIDs_140.insert(PartySubIDType_140.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_140);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_141;
        FIX::PartySubID PartySubID_141("STRING_1818737926");
        noPartySubIDs_2_1_2_1.set(PartySubID_141);
        PtysSubGrp_NoPartySubIDs_141.insert(PartySubID_141.getString());
        FIX::PartySubIDType PartySubIDType_141(5);
        noPartySubIDs_2_1_2_1.set(PartySubIDType_141);
        PtysSubGrp_NoPartySubIDs_141.insert(PartySubIDType_141.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_141);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_142;
        FIX::PartySubID PartySubID_142("STRING_1147696062");
        noPartySubIDs_2_1_2_2.set(PartySubID_142);
        PtysSubGrp_NoPartySubIDs_142.insert(PartySubID_142.getString());
        FIX::PartySubIDType PartySubIDType_142(3);
        noPartySubIDs_2_1_2_2.set(PartySubIDType_142);
        PtysSubGrp_NoPartySubIDs_142.insert(PartySubIDType_142.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_142);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_2);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_1);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_2_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_10;
      FIX::AllocAccount AllocAccount_20("STRING_1214260054");
      noAllocs_2_1_0.set(AllocAccount_20);
      PreAllocGrp_NoAllocs_10.insert(AllocAccount_20.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_20(1536573169);
      noAllocs_2_1_0.set(AllocAcctIDSource_20);
      PreAllocGrp_NoAllocs_10.insert(AllocAcctIDSource_20.getString());
      FIX::AllocQty AllocQty_19;
      AllocQty_19.setString("11833576");
      noAllocs_2_1_0.set(AllocQty_19);
      PreAllocGrp_NoAllocs_10.insert(AllocQty_19.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_15("CAN");
      noAllocs_2_1_0.set(AllocSettlCurrency_15);
      PreAllocGrp_NoAllocs_10.insert(AllocSettlCurrency_15.getString());
      FIX::IndividualAllocID IndividualAllocID_20("STRING_791870488");
      noAllocs_2_1_0.set(IndividualAllocID_20);
      PreAllocGrp_NoAllocs_10.insert(IndividualAllocID_20.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_10);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_49;
        FIX::NestedPartyID NestedPartyID_49("STRING_1415887074");
        noNestedPartyIDs_2_0_2_0.set(NestedPartyID_49);
        NestedParties_NoNestedPartyIDs_49.insert(NestedPartyID_49.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_49('1');
        noNestedPartyIDs_2_0_2_0.set(NestedPartyIDSource_49);
        NestedParties_NoNestedPartyIDs_49.insert(NestedPartyIDSource_49.getString());
        FIX::NestedPartyRole NestedPartyRole_49(1403513892);
        noNestedPartyIDs_2_0_2_0.set(NestedPartyRole_49);
        NestedParties_NoNestedPartyIDs_49.insert(NestedPartyRole_49.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_49);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_106;
          FIX::NestedPartySubID NestedPartySubID_106("STRING_525387218");
          noNestedPartySubIDs_2_0_0_3_0.set(NestedPartySubID_106);
          NstdPtysSubGrp_NoNestedPartySubIDs_106.insert(NestedPartySubID_106.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_106(111903349);
          noNestedPartySubIDs_2_0_0_3_0.set(NestedPartySubIDType_106);
          NstdPtysSubGrp_NoNestedPartySubIDs_106.insert(NestedPartySubIDType_106.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_106);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_107;
          FIX::NestedPartySubID NestedPartySubID_107("STRING_665487130");
          noNestedPartySubIDs_2_0_0_3_1.set(NestedPartySubID_107);
          NstdPtysSubGrp_NoNestedPartySubIDs_107.insert(NestedPartySubID_107.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_107(642710043);
          noNestedPartySubIDs_2_0_0_3_1.set(NestedPartySubIDType_107);
          NstdPtysSubGrp_NoNestedPartySubIDs_107.insert(NestedPartySubIDType_107.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_107);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_1);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_50;
        FIX::NestedPartyID NestedPartyID_50("STRING_1374685597");
        noNestedPartyIDs_2_0_2_1.set(NestedPartyID_50);
        NestedParties_NoNestedPartyIDs_50.insert(NestedPartyID_50.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_50('2');
        noNestedPartyIDs_2_0_2_1.set(NestedPartyIDSource_50);
        NestedParties_NoNestedPartyIDs_50.insert(NestedPartyIDSource_50.getString());
        FIX::NestedPartyRole NestedPartyRole_50(166494178);
        noNestedPartyIDs_2_0_2_1.set(NestedPartyRole_50);
        NestedParties_NoNestedPartyIDs_50.insert(NestedPartyRole_50.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_50);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_108;
          FIX::NestedPartySubID NestedPartySubID_108("STRING_1130605816");
          noNestedPartySubIDs_2_0_1_3_0.set(NestedPartySubID_108);
          NstdPtysSubGrp_NoNestedPartySubIDs_108.insert(NestedPartySubID_108.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_108(217518044);
          noNestedPartySubIDs_2_0_1_3_0.set(NestedPartySubIDType_108);
          NstdPtysSubGrp_NoNestedPartySubIDs_108.insert(NestedPartySubIDType_108.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_108);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_109;
          FIX::NestedPartySubID NestedPartySubID_109("STRING_594042523");
          noNestedPartySubIDs_2_0_1_3_1.set(NestedPartySubID_109);
          NstdPtysSubGrp_NoNestedPartySubIDs_109.insert(NestedPartySubID_109.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_109(1921521658);
          noNestedPartySubIDs_2_0_1_3_1.set(NestedPartySubIDType_109);
          NstdPtysSubGrp_NoNestedPartySubIDs_109.insert(NestedPartySubIDType_109.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_109);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_1);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_1);
      }
      noSides_0_2.addGroup(noAllocs_2_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_2_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_11;
      FIX::AllocAccount AllocAccount_21("STRING_162160589");
      noAllocs_2_1_1.set(AllocAccount_21);
      PreAllocGrp_NoAllocs_11.insert(AllocAccount_21.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_21(1486985965);
      noAllocs_2_1_1.set(AllocAcctIDSource_21);
      PreAllocGrp_NoAllocs_11.insert(AllocAcctIDSource_21.getString());
      FIX::AllocQty AllocQty_20;
      AllocQty_20.setString("10605201");
      noAllocs_2_1_1.set(AllocQty_20);
      PreAllocGrp_NoAllocs_11.insert(AllocQty_20.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_16("GBP");
      noAllocs_2_1_1.set(AllocSettlCurrency_16);
      PreAllocGrp_NoAllocs_11.insert(AllocSettlCurrency_16.getString());
      FIX::IndividualAllocID IndividualAllocID_21("STRING_60732563");
      noAllocs_2_1_1.set(IndividualAllocID_21);
      PreAllocGrp_NoAllocs_11.insert(IndividualAllocID_21.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_11);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_51;
        FIX::NestedPartyID NestedPartyID_51("STRING_1670886503");
        noNestedPartyIDs_2_1_2_0.set(NestedPartyID_51);
        NestedParties_NoNestedPartyIDs_51.insert(NestedPartyID_51.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_51('1');
        noNestedPartyIDs_2_1_2_0.set(NestedPartyIDSource_51);
        NestedParties_NoNestedPartyIDs_51.insert(NestedPartyIDSource_51.getString());
        FIX::NestedPartyRole NestedPartyRole_51(1613686801);
        noNestedPartyIDs_2_1_2_0.set(NestedPartyRole_51);
        NestedParties_NoNestedPartyIDs_51.insert(NestedPartyRole_51.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_51);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_110;
          FIX::NestedPartySubID NestedPartySubID_110("STRING_375417313");
          noNestedPartySubIDs_2_1_0_3_0.set(NestedPartySubID_110);
          NstdPtysSubGrp_NoNestedPartySubIDs_110.insert(NestedPartySubID_110.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_110(716811089);
          noNestedPartySubIDs_2_1_0_3_0.set(NestedPartySubIDType_110);
          NstdPtysSubGrp_NoNestedPartySubIDs_110.insert(NestedPartySubIDType_110.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_110);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_111;
          FIX::NestedPartySubID NestedPartySubID_111("STRING_1498631010");
          noNestedPartySubIDs_2_1_0_3_1.set(NestedPartySubID_111);
          NstdPtysSubGrp_NoNestedPartySubIDs_111.insert(NestedPartySubID_111.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_111(1938609833);
          noNestedPartySubIDs_2_1_0_3_1.set(NestedPartySubIDType_111);
          NstdPtysSubGrp_NoNestedPartySubIDs_111.insert(NestedPartySubIDType_111.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_111);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_1);
        }
        noAllocs_2_1_1.addGroup(noNestedPartyIDs_2_1_2_0);
      }
      noSides_0_2.addGroup(noAllocs_2_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_2_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_12;
      FIX::AllocAccount AllocAccount_22("STRING_2132698163");
      noAllocs_2_1_2.set(AllocAccount_22);
      PreAllocGrp_NoAllocs_12.insert(AllocAccount_22.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_22(943870019);
      noAllocs_2_1_2.set(AllocAcctIDSource_22);
      PreAllocGrp_NoAllocs_12.insert(AllocAcctIDSource_22.getString());
      FIX::AllocQty AllocQty_21;
      AllocQty_21.setString("11946400");
      noAllocs_2_1_2.set(AllocQty_21);
      PreAllocGrp_NoAllocs_12.insert(AllocQty_21.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_17("GBP");
      noAllocs_2_1_2.set(AllocSettlCurrency_17);
      PreAllocGrp_NoAllocs_12.insert(AllocSettlCurrency_17.getString());
      FIX::IndividualAllocID IndividualAllocID_22("STRING_1306543427");
      noAllocs_2_1_2.set(IndividualAllocID_22);
      PreAllocGrp_NoAllocs_12.insert(IndividualAllocID_22.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_12);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_52;
        FIX::NestedPartyID NestedPartyID_52("STRING_2111967281");
        noNestedPartyIDs_2_2_2_0.set(NestedPartyID_52);
        NestedParties_NoNestedPartyIDs_52.insert(NestedPartyID_52.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_52('5');
        noNestedPartyIDs_2_2_2_0.set(NestedPartyIDSource_52);
        NestedParties_NoNestedPartyIDs_52.insert(NestedPartyIDSource_52.getString());
        FIX::NestedPartyRole NestedPartyRole_52(1755065716);
        noNestedPartyIDs_2_2_2_0.set(NestedPartyRole_52);
        NestedParties_NoNestedPartyIDs_52.insert(NestedPartyRole_52.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_52);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_112;
          FIX::NestedPartySubID NestedPartySubID_112("STRING_1607692667");
          noNestedPartySubIDs_2_2_0_3_0.set(NestedPartySubID_112);
          NstdPtysSubGrp_NoNestedPartySubIDs_112.insert(NestedPartySubID_112.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_112(738187884);
          noNestedPartySubIDs_2_2_0_3_0.set(NestedPartySubIDType_112);
          NstdPtysSubGrp_NoNestedPartySubIDs_112.insert(NestedPartySubIDType_112.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_112);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_0.addGroup(noNestedPartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_113;
          FIX::NestedPartySubID NestedPartySubID_113("STRING_348495855");
          noNestedPartySubIDs_2_2_0_3_1.set(NestedPartySubID_113);
          NstdPtysSubGrp_NoNestedPartySubIDs_113.insert(NestedPartySubID_113.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_113(54251542);
          noNestedPartySubIDs_2_2_0_3_1.set(NestedPartySubIDType_113);
          NstdPtysSubGrp_NoNestedPartySubIDs_113.insert(NestedPartySubIDType_113.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_113);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_0.addGroup(noNestedPartySubIDs_2_2_0_3_1);
        }
        noAllocs_2_1_2.addGroup(noNestedPartyIDs_2_2_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_53;
        FIX::NestedPartyID NestedPartyID_53("STRING_512225895");
        noNestedPartyIDs_2_2_2_1.set(NestedPartyID_53);
        NestedParties_NoNestedPartyIDs_53.insert(NestedPartyID_53.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_53('5');
        noNestedPartyIDs_2_2_2_1.set(NestedPartyIDSource_53);
        NestedParties_NoNestedPartyIDs_53.insert(NestedPartyIDSource_53.getString());
        FIX::NestedPartyRole NestedPartyRole_53(1541237508);
        noNestedPartyIDs_2_2_2_1.set(NestedPartyRole_53);
        NestedParties_NoNestedPartyIDs_53.insert(NestedPartyRole_53.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_53);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_114;
          FIX::NestedPartySubID NestedPartySubID_114("STRING_344071312");
          noNestedPartySubIDs_2_2_1_3_0.set(NestedPartySubID_114);
          NstdPtysSubGrp_NoNestedPartySubIDs_114.insert(NestedPartySubID_114.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_114(1454914254);
          noNestedPartySubIDs_2_2_1_3_0.set(NestedPartySubIDType_114);
          NstdPtysSubGrp_NoNestedPartySubIDs_114.insert(NestedPartySubIDType_114.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_114);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_1.addGroup(noNestedPartySubIDs_2_2_1_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_115;
          FIX::NestedPartySubID NestedPartySubID_115("STRING_1633478607");
          noNestedPartySubIDs_2_2_1_3_1.set(NestedPartySubID_115);
          NstdPtysSubGrp_NoNestedPartySubIDs_115.insert(NestedPartySubID_115.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_115(421184944);
          noNestedPartySubIDs_2_2_1_3_1.set(NestedPartySubIDType_115);
          NstdPtysSubGrp_NoNestedPartySubIDs_115.insert(NestedPartySubIDType_115.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_115);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_1.addGroup(noNestedPartySubIDs_2_2_1_3_1);
        }
        noAllocs_2_1_2.addGroup(noNestedPartyIDs_2_2_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_2_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_54;
        FIX::NestedPartyID NestedPartyID_54("STRING_978317110");
        noNestedPartyIDs_2_2_2_2.set(NestedPartyID_54);
        NestedParties_NoNestedPartyIDs_54.insert(NestedPartyID_54.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_54('7');
        noNestedPartyIDs_2_2_2_2.set(NestedPartyIDSource_54);
        NestedParties_NoNestedPartyIDs_54.insert(NestedPartyIDSource_54.getString());
        FIX::NestedPartyRole NestedPartyRole_54(2034871746);
        noNestedPartyIDs_2_2_2_2.set(NestedPartyRole_54);
        NestedParties_NoNestedPartyIDs_54.insert(NestedPartyRole_54.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_54);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_116;
          FIX::NestedPartySubID NestedPartySubID_116("STRING_1136404891");
          noNestedPartySubIDs_2_2_2_3_0.set(NestedPartySubID_116);
          NstdPtysSubGrp_NoNestedPartySubIDs_116.insert(NestedPartySubID_116.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_116(604199187);
          noNestedPartySubIDs_2_2_2_3_0.set(NestedPartySubIDType_116);
          NstdPtysSubGrp_NoNestedPartySubIDs_116.insert(NestedPartySubIDType_116.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_116);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_2.addGroup(noNestedPartySubIDs_2_2_2_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_117;
          FIX::NestedPartySubID NestedPartySubID_117("STRING_1036224993");
          noNestedPartySubIDs_2_2_2_3_1.set(NestedPartySubID_117);
          NstdPtysSubGrp_NoNestedPartySubIDs_117.insert(NestedPartySubID_117.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_117(927531076);
          noNestedPartySubIDs_2_2_2_3_1.set(NestedPartySubIDType_117);
          NstdPtysSubGrp_NoNestedPartySubIDs_117.insert(NestedPartySubIDType_117.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_117);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_2.addGroup(noNestedPartySubIDs_2_2_2_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_118;
          FIX::NestedPartySubID NestedPartySubID_118("STRING_589413702");
          noNestedPartySubIDs_2_2_2_3_2.set(NestedPartySubID_118);
          NstdPtysSubGrp_NoNestedPartySubIDs_118.insert(NestedPartySubID_118.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_118(1980095013);
          noNestedPartySubIDs_2_2_2_3_2.set(NestedPartySubIDType_118);
          NstdPtysSubGrp_NoNestedPartySubIDs_118.insert(NestedPartySubIDType_118.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_118);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_2.addGroup(noNestedPartySubIDs_2_2_2_3_2);
        }
        noAllocs_2_1_2.addGroup(noNestedPartyIDs_2_2_2_2);
      }
      noSides_0_2.addGroup(noAllocs_2_1_2);
    }
    msg.addGroup(noSides_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_15;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_15("CAN");
  msg.set(BenchmarkCurveCurrency_15);
  SpreadOrBenchmarkCurveData_15.insert(BenchmarkCurveCurrency_15.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_15("STRING_FutureSWAP");
  msg.set(BenchmarkCurveName_15);
  SpreadOrBenchmarkCurveData_15.insert(BenchmarkCurveName_15.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_15("STRING_1281230934");
  msg.set(BenchmarkCurvePoint_15);
  SpreadOrBenchmarkCurveData_15.insert(BenchmarkCurvePoint_15.getString());
  FIX::BenchmarkPrice BenchmarkPrice_15;
  BenchmarkPrice_15.setString("7676802");
  msg.set(BenchmarkPrice_15);
  SpreadOrBenchmarkCurveData_15.insert(BenchmarkPrice_15.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_15(1266352236);
  msg.set(BenchmarkPriceType_15);
  SpreadOrBenchmarkCurveData_15.insert(BenchmarkPriceType_15.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_15("STRING_1814976310");
  msg.set(BenchmarkSecurityID_15);
  SpreadOrBenchmarkCurveData_15.insert(BenchmarkSecurityID_15.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_15("STRING_375262297");
  msg.set(BenchmarkSecurityIDSource_15);
  SpreadOrBenchmarkCurveData_15.insert(BenchmarkSecurityIDSource_15.getString());
  FIX::Spread Spread_15;
  Spread_15.setString("13973300");
  msg.set(Spread_15);
  SpreadOrBenchmarkCurveData_15.insert(Spread_15.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_15);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::NewOrderCross::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_23;
    FIX::StipulationType StipulationType_23("STRING_PAYFREQ");
    noStipulations_0_0.set(StipulationType_23);
    Stipulations_NoStipulations_23.insert(StipulationType_23.getString());
    FIX::StipulationValue StipulationValue_23("STRING_1745825903");
    noStipulations_0_0.set(StipulationValue_23);
    Stipulations_NoStipulations_23.insert(StipulationValue_23.getString());
    all_values.push_back(Stipulations_NoStipulations_23);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_24;
    FIX::StipulationType StipulationType_24("STRING_CPR");
    noStipulations_0_1.set(StipulationType_24);
    Stipulations_NoStipulations_24.insert(StipulationType_24.getString());
    FIX::StipulationValue StipulationValue_24("STRING_1625676077");
    noStipulations_0_1.set(StipulationValue_24);
    Stipulations_NoStipulations_24.insert(StipulationValue_24.getString());
    all_values.push_back(Stipulations_NoStipulations_24);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::NewOrderCross::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_25;
    FIX::StipulationType StipulationType_25("STRING_INTERNALPX");
    noStipulations_0_2.set(StipulationType_25);
    Stipulations_NoStipulations_25.insert(StipulationType_25.getString());
    FIX::StipulationValue StipulationValue_25("STRING_723190732");
    noStipulations_0_2.set(StipulationValue_25);
    Stipulations_NoStipulations_25.insert(StipulationValue_25.getString());
    all_values.push_back(Stipulations_NoStipulations_25);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderCross::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_5;
    FIX::StrategyParameterName StrategyParameterName_5("STRING_453070012");
    noStrategyParameters_0_0.set(StrategyParameterName_5);
    StrategyParametersGrp_NoStrategyParameters_5.insert(StrategyParameterName_5.getString());
    FIX::StrategyParameterType StrategyParameterType_5(8);
    noStrategyParameters_0_0.set(StrategyParameterType_5);
    StrategyParametersGrp_NoStrategyParameters_5.insert(StrategyParameterType_5.getString());
    FIX::StrategyParameterValue StrategyParameterValue_5("STRING_536933432");
    noStrategyParameters_0_0.set(StrategyParameterValue_5);
    StrategyParametersGrp_NoStrategyParameters_5.insert(StrategyParameterValue_5.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_5);
    all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_6;
    FIX::StrategyParameterName StrategyParameterName_6("STRING_874254956");
    noStrategyParameters_0_1.set(StrategyParameterName_6);
    StrategyParametersGrp_NoStrategyParameters_6.insert(StrategyParameterName_6.getString());
    FIX::StrategyParameterType StrategyParameterType_6(1);
    noStrategyParameters_0_1.set(StrategyParameterType_6);
    StrategyParametersGrp_NoStrategyParameters_6.insert(StrategyParameterType_6.getString());
    FIX::StrategyParameterValue StrategyParameterValue_6("STRING_1297921010");
    noStrategyParameters_0_1.set(StrategyParameterValue_6);
    StrategyParametersGrp_NoStrategyParameters_6.insert(StrategyParameterValue_6.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_6);
    all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderCross::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_6;
    FIX::TradingSessionID TradingSessionID_53("STRING_5");
    noTradingSessions_0_0.set(TradingSessionID_53);
    TrdgSesGrp_NoTradingSessions_6.insert(TradingSessionID_53.getString());
    FIX::TradingSessionSubID TradingSessionSubID_53("STRING_6");
    noTradingSessions_0_0.set(TradingSessionSubID_53);
    TrdgSesGrp_NoTradingSessions_6.insert(TradingSessionSubID_53.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_6);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_3;
  FIX::TriggerAction TriggerAction_3('1');
  msg.set(TriggerAction_3);
  TriggeringInstruction_3.insert(TriggerAction_3.getString());
  FIX::TriggerNewPrice TriggerNewPrice_3;
  TriggerNewPrice_3.setString("15827574");
  msg.set(TriggerNewPrice_3);
  TriggeringInstruction_3.insert(TriggerNewPrice_3.getString());
  FIX::TriggerNewQty TriggerNewQty_3;
  TriggerNewQty_3.setString("12143733");
  msg.set(TriggerNewQty_3);
  TriggeringInstruction_3.insert(TriggerNewQty_3.getString());
  FIX::TriggerOrderType TriggerOrderType_3('1');
  msg.set(TriggerOrderType_3);
  TriggeringInstruction_3.insert(TriggerOrderType_3.getString());
  FIX::TriggerPrice TriggerPrice_3;
  TriggerPrice_3.setString("14153687");
  msg.set(TriggerPrice_3);
  TriggeringInstruction_3.insert(TriggerPrice_3.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_3('U');
  msg.set(TriggerPriceDirection_3);
  TriggeringInstruction_3.insert(TriggerPriceDirection_3.getString());
  FIX::TriggerPriceType TriggerPriceType_3('2');
  msg.set(TriggerPriceType_3);
  TriggeringInstruction_3.insert(TriggerPriceType_3.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_3('2');
  msg.set(TriggerPriceTypeScope_3);
  TriggeringInstruction_3.insert(TriggerPriceTypeScope_3.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_3("STRING_322808122");
  msg.set(TriggerSecurityDesc_3);
  TriggeringInstruction_3.insert(TriggerSecurityDesc_3.getString());
  FIX::TriggerSecurityID TriggerSecurityID_3("STRING_1994997750");
  msg.set(TriggerSecurityID_3);
  TriggeringInstruction_3.insert(TriggerSecurityID_3.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_3("STRING_1836105982");
  msg.set(TriggerSecurityIDSource_3);
  TriggeringInstruction_3.insert(TriggerSecurityIDSource_3.getString());
  FIX::TriggerSymbol TriggerSymbol_3("STRING_2137784432");
  msg.set(TriggerSymbol_3);
  TriggeringInstruction_3.insert(TriggerSymbol_3.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_3("STRING_222776400");
  msg.set(TriggerTradingSessionID_3);
  TriggeringInstruction_3.insert(TriggerTradingSessionID_3.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_3("STRING_1085952382");
  msg.set(TriggerTradingSessionSubID_3);
  TriggeringInstruction_3.insert(TriggerTradingSessionSubID_3.getString());
  FIX::TriggerType TriggerType_3('3');
  msg.set(TriggerType_3);
  TriggeringInstruction_3.insert(TriggerType_3.getString());
  all_values.push_back(TriggeringInstruction_3);
  all_compo_names.insert("TriggeringInstruction");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderCross::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_62;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_62("DATA_684294638");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_62);
    UnderlyingInstrument_62.insert(EncodedUnderlyingIssuer_62.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_62(447439339);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_62);
    UnderlyingInstrument_62.insert(EncodedUnderlyingIssuerLen_62.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_62("DATA_814419011");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_62);
    UnderlyingInstrument_62.insert(EncodedUnderlyingSecurityDesc_62.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_62(793293338);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_62);
    UnderlyingInstrument_62.insert(EncodedUnderlyingSecurityDescLen_62.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_62;
    UnderlyingAdjustedQuantity_62.setString("11706300");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_62);
    UnderlyingInstrument_62.insert(UnderlyingAdjustedQuantity_62.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_62;
    UnderlyingAllocationPercent_62.setString("74.840000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_62);
    UnderlyingInstrument_62.insert(UnderlyingAllocationPercent_62.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_62;
    UnderlyingAttachmentPoint_62.setString("33.500000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_62);
    UnderlyingInstrument_62.insert(UnderlyingAttachmentPoint_62.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_62("STRING_1201251410");
    noUnderlyings_0_0.set(UnderlyingCFICode_62);
    UnderlyingInstrument_62.insert(UnderlyingCFICode_62.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_62("STRING_254807268");
    noUnderlyings_0_0.set(UnderlyingCPProgram_62);
    UnderlyingInstrument_62.insert(UnderlyingCPProgram_62.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_62("STRING_2120618306");
    noUnderlyings_0_0.set(UnderlyingCPRegType_62);
    UnderlyingInstrument_62.insert(UnderlyingCPRegType_62.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_62;
    UnderlyingCapValue_62.setString("627062");
    noUnderlyings_0_0.set(UnderlyingCapValue_62);
    UnderlyingInstrument_62.insert(UnderlyingCapValue_62.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_62;
    UnderlyingCashAmount_62.setString("15527282");
    noUnderlyings_0_0.set(UnderlyingCashAmount_62);
    UnderlyingInstrument_62.insert(UnderlyingCashAmount_62.getString());
    FIX::UnderlyingCashType UnderlyingCashType_62("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_62);
    UnderlyingInstrument_62.insert(UnderlyingCashType_62.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_62;
    UnderlyingContractMultiplier_62.setString("6092386");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_62);
    UnderlyingInstrument_62.insert(UnderlyingContractMultiplier_62.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_62(1839570531);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_62);
    UnderlyingInstrument_62.insert(UnderlyingContractMultiplierUnit_62.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_62("COUNTRY_2100619954");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_62);
    UnderlyingInstrument_62.insert(UnderlyingCountryOfIssue_62.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_62("LOCALMKTDATE_44512422");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_62);
    UnderlyingInstrument_62.insert(UnderlyingCouponPaymentDate_62.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_62;
    UnderlyingCouponRate_62.setString("2.130000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_62);
    UnderlyingInstrument_62.insert(UnderlyingCouponRate_62.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_62("STRING_1908392250");
    noUnderlyings_0_0.set(UnderlyingCreditRating_62);
    UnderlyingInstrument_62.insert(UnderlyingCreditRating_62.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_62("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_62);
    UnderlyingInstrument_62.insert(UnderlyingCurrency_62.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_62;
    UnderlyingCurrentValue_62.setString("9882261");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_62);
    UnderlyingInstrument_62.insert(UnderlyingCurrentValue_62.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_62;
    UnderlyingDetachmentPoint_62.setString("49.590000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_62);
    UnderlyingInstrument_62.insert(UnderlyingDetachmentPoint_62.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_62;
    UnderlyingDirtyPrice_62.setString("2708455");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_62);
    UnderlyingInstrument_62.insert(UnderlyingDirtyPrice_62.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_62;
    UnderlyingEndPrice_62.setString("8357402");
    noUnderlyings_0_0.set(UnderlyingEndPrice_62);
    UnderlyingInstrument_62.insert(UnderlyingEndPrice_62.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_62;
    UnderlyingEndValue_62.setString("17182572");
    noUnderlyings_0_0.set(UnderlyingEndValue_62);
    UnderlyingInstrument_62.insert(UnderlyingEndValue_62.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_62(261146307);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_62);
    UnderlyingInstrument_62.insert(UnderlyingExerciseStyle_62.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_62;
    UnderlyingFXRate_62.setString("10585166");
    noUnderlyings_0_0.set(UnderlyingFXRate_62);
    UnderlyingInstrument_62.insert(UnderlyingFXRate_62.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_62('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_62);
    UnderlyingInstrument_62.insert(UnderlyingFXRateCalc_62.getString());
    FIX::UnderlyingFactor UnderlyingFactor_62;
    UnderlyingFactor_62.setString("15266324");
    noUnderlyings_0_0.set(UnderlyingFactor_62);
    UnderlyingInstrument_62.insert(UnderlyingFactor_62.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_62(247259560);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_62);
    UnderlyingInstrument_62.insert(UnderlyingFlowScheduleType_62.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_62("STRING_1341020666");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_62);
    UnderlyingInstrument_62.insert(UnderlyingInstrRegistry_62.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_62("LOCALMKTDATE_1974071761");
    noUnderlyings_0_0.set(UnderlyingIssueDate_62);
    UnderlyingInstrument_62.insert(UnderlyingIssueDate_62.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_62("STRING_1061678571");
    noUnderlyings_0_0.set(UnderlyingIssuer_62);
    UnderlyingInstrument_62.insert(UnderlyingIssuer_62.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_62("STRING_2134314004");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_62);
    UnderlyingInstrument_62.insert(UnderlyingLocaleOfIssue_62.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_62("LOCALMKTDATE_997218184");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_62);
    UnderlyingInstrument_62.insert(UnderlyingMaturityDate_62.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_62("MONTHYEAR_779552407");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_62);
    UnderlyingInstrument_62.insert(UnderlyingMaturityMonthYear_62.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_62("TZTIMEONLY_1233193706");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_62);
    UnderlyingInstrument_62.insert(UnderlyingMaturityTime_62.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_62;
    UnderlyingNotionalPercentageOutstanding_62.setString("59.470000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_62);
    UnderlyingInstrument_62.insert(UnderlyingNotionalPercentageOutstanding_62.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_62('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_62);
    UnderlyingInstrument_62.insert(UnderlyingOptAttribute_62.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_62;
    UnderlyingOriginalNotionalPercentageOutstanding_62.setString("83.640000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_62);
    UnderlyingInstrument_62.insert(UnderlyingOriginalNotionalPercentageOutstanding_62.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_62("STRING_113692158");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_62);
    UnderlyingInstrument_62.insert(UnderlyingPriceUnitOfMeasure_62.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_62;
    UnderlyingPriceUnitOfMeasureQty_62.setString("4396043");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_62);
    UnderlyingInstrument_62.insert(UnderlyingPriceUnitOfMeasureQty_62.getString());
    FIX::UnderlyingProduct UnderlyingProduct_62(1941106077);
    noUnderlyings_0_0.set(UnderlyingProduct_62);
    UnderlyingInstrument_62.insert(UnderlyingProduct_62.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_62(722930802);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_62);
    UnderlyingInstrument_62.insert(UnderlyingPutOrCall_62.getString());
    FIX::UnderlyingPx UnderlyingPx_62;
    UnderlyingPx_62.setString("1316911");
    noUnderlyings_0_0.set(UnderlyingPx_62);
    UnderlyingInstrument_62.insert(UnderlyingPx_62.getString());
    FIX::UnderlyingQty UnderlyingQty_62;
    UnderlyingQty_62.setString("18942423");
    noUnderlyings_0_0.set(UnderlyingQty_62);
    UnderlyingInstrument_62.insert(UnderlyingQty_62.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_62("LOCALMKTDATE_767443224");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_62);
    UnderlyingInstrument_62.insert(UnderlyingRedemptionDate_62.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_62("STRING_1038151402");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_62);
    UnderlyingInstrument_62.insert(UnderlyingRepoCollateralSecurityType_62.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_62;
    UnderlyingRepurchaseRate_62.setString("9.860000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_62);
    UnderlyingInstrument_62.insert(UnderlyingRepurchaseRate_62.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_62(79840789);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_62);
    UnderlyingInstrument_62.insert(UnderlyingRepurchaseTerm_62.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_62("STRING_986188803");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_62);
    UnderlyingInstrument_62.insert(UnderlyingRestructuringType_62.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_62("STRING_495893462");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_62);
    UnderlyingInstrument_62.insert(UnderlyingSecurityDesc_62.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_62("EXCHANGE_2109475748");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_62);
    UnderlyingInstrument_62.insert(UnderlyingSecurityExchange_62.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_62("STRING_1257034326");
    noUnderlyings_0_0.set(UnderlyingSecurityID_62);
    UnderlyingInstrument_62.insert(UnderlyingSecurityID_62.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_62("STRING_1331633688");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_62);
    UnderlyingInstrument_62.insert(UnderlyingSecurityIDSource_62.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_62("STRING_1680249394");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_62);
    UnderlyingInstrument_62.insert(UnderlyingSecuritySubType_62.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_62("STRING_1518180634");
    noUnderlyings_0_0.set(UnderlyingSecurityType_62);
    UnderlyingInstrument_62.insert(UnderlyingSecurityType_62.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_62("STRING_242666666");
    noUnderlyings_0_0.set(UnderlyingSeniority_62);
    UnderlyingInstrument_62.insert(UnderlyingSeniority_62.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_62("STRING_189491774");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_62);
    UnderlyingInstrument_62.insert(UnderlyingSettlMethod_62.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_62(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_62);
    UnderlyingInstrument_62.insert(UnderlyingSettlementType_62.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_62;
    UnderlyingStartValue_62.setString("4899262");
    noUnderlyings_0_0.set(UnderlyingStartValue_62);
    UnderlyingInstrument_62.insert(UnderlyingStartValue_62.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_62("STRING_1530512440");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_62);
    UnderlyingInstrument_62.insert(UnderlyingStateOrProvinceOfIssue_62.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_62("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_62);
    UnderlyingInstrument_62.insert(UnderlyingStrikeCurrency_62.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_62;
    UnderlyingStrikePrice_62.setString("15173427");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_62);
    UnderlyingInstrument_62.insert(UnderlyingStrikePrice_62.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_62("STRING_1721135705");
    noUnderlyings_0_0.set(UnderlyingSymbol_62);
    UnderlyingInstrument_62.insert(UnderlyingSymbol_62.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_62("STRING_183673556");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_62);
    UnderlyingInstrument_62.insert(UnderlyingSymbolSfx_62.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_62("STRING_603052854");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_62);
    UnderlyingInstrument_62.insert(UnderlyingTimeUnit_62.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_62("STRING_1772121652");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_62);
    UnderlyingInstrument_62.insert(UnderlyingUnitOfMeasure_62.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_62;
    UnderlyingUnitOfMeasureQty_62.setString("12180332");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_62);
    UnderlyingInstrument_62.insert(UnderlyingUnitOfMeasureQty_62.getString());
    all_values.push_back(UnderlyingInstrument_62);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_127;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_127("STRING_1885813811");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_127);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_127.insert(UnderlyingSecurityAltID_127.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_127("STRING_1657637537");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_127);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_127.insert(UnderlyingSecurityAltIDSource_127.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_127);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_128;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_128("STRING_1603003648");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_128);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_128.insert(UnderlyingSecurityAltID_128.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_128("STRING_461260965");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_128);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_128.insert(UnderlyingSecurityAltIDSource_128.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_128);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_129;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_129("STRING_1789328727");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_129);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_129.insert(UnderlyingSecurityAltID_129.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_129("STRING_1349762384");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_129);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_129.insert(UnderlyingSecurityAltIDSource_129.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_129);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_124;
      FIX::UnderlyingStipType UnderlyingStipType_124("STRING_679996481");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_124);
      UnderlyingStipulations_NoUnderlyingStips_124.insert(UnderlyingStipType_124.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_124("STRING_857429722");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_124);
      UnderlyingStipulations_NoUnderlyingStips_124.insert(UnderlyingStipValue_124.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_124);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_125;
      FIX::UnderlyingStipType UnderlyingStipType_125("STRING_1308544979");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_125);
      UnderlyingStipulations_NoUnderlyingStips_125.insert(UnderlyingStipType_125.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_125("STRING_1666185285");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_125);
      UnderlyingStipulations_NoUnderlyingStips_125.insert(UnderlyingStipValue_125.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_125);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_119;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_119("STRING_1270537080");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_119);
      UndlyInstrumentParties_NoUndlyInstrumentParties_119.insert(UnderlyingInstrumentPartyID_119.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_119('7');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_119);
      UndlyInstrumentParties_NoUndlyInstrumentParties_119.insert(UnderlyingInstrumentPartyIDSource_119.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_119(537473224);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_119);
      UndlyInstrumentParties_NoUndlyInstrumentParties_119.insert(UnderlyingInstrumentPartyRole_119.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_119);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_235("STRING_146432949");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_235);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235.insert(UnderlyingInstrumentPartySubID_235.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_235(780139890);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_235);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235.insert(UnderlyingInstrumentPartySubIDType_235.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_236("STRING_992794600");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_236);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236.insert(UnderlyingInstrumentPartySubID_236.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_236(1043762357);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_236);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236.insert(UnderlyingInstrumentPartySubIDType_236.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_237("STRING_1270066116");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_237);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237.insert(UnderlyingInstrumentPartySubID_237.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_237(375823392);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_237);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237.insert(UnderlyingInstrumentPartySubIDType_237.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_63;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_63("DATA_1767679878");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_63);
    UnderlyingInstrument_63.insert(EncodedUnderlyingIssuer_63.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_63(674187265);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_63);
    UnderlyingInstrument_63.insert(EncodedUnderlyingIssuerLen_63.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_63("DATA_1893166188");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_63);
    UnderlyingInstrument_63.insert(EncodedUnderlyingSecurityDesc_63.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_63(1341331936);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_63);
    UnderlyingInstrument_63.insert(EncodedUnderlyingSecurityDescLen_63.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_63;
    UnderlyingAdjustedQuantity_63.setString("8578608");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_63);
    UnderlyingInstrument_63.insert(UnderlyingAdjustedQuantity_63.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_63;
    UnderlyingAllocationPercent_63.setString("53.940000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_63);
    UnderlyingInstrument_63.insert(UnderlyingAllocationPercent_63.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_63;
    UnderlyingAttachmentPoint_63.setString("99.400000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_63);
    UnderlyingInstrument_63.insert(UnderlyingAttachmentPoint_63.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_63("STRING_2075894053");
    noUnderlyings_0_1.set(UnderlyingCFICode_63);
    UnderlyingInstrument_63.insert(UnderlyingCFICode_63.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_63("STRING_10632964");
    noUnderlyings_0_1.set(UnderlyingCPProgram_63);
    UnderlyingInstrument_63.insert(UnderlyingCPProgram_63.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_63("STRING_704300103");
    noUnderlyings_0_1.set(UnderlyingCPRegType_63);
    UnderlyingInstrument_63.insert(UnderlyingCPRegType_63.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_63;
    UnderlyingCapValue_63.setString("15860479");
    noUnderlyings_0_1.set(UnderlyingCapValue_63);
    UnderlyingInstrument_63.insert(UnderlyingCapValue_63.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_63;
    UnderlyingCashAmount_63.setString("16136366");
    noUnderlyings_0_1.set(UnderlyingCashAmount_63);
    UnderlyingInstrument_63.insert(UnderlyingCashAmount_63.getString());
    FIX::UnderlyingCashType UnderlyingCashType_63("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_63);
    UnderlyingInstrument_63.insert(UnderlyingCashType_63.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_63;
    UnderlyingContractMultiplier_63.setString("12278930");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_63);
    UnderlyingInstrument_63.insert(UnderlyingContractMultiplier_63.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_63(815915348);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_63);
    UnderlyingInstrument_63.insert(UnderlyingContractMultiplierUnit_63.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_63("COUNTRY_246781611");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_63);
    UnderlyingInstrument_63.insert(UnderlyingCountryOfIssue_63.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_63("LOCALMKTDATE_1907889503");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_63);
    UnderlyingInstrument_63.insert(UnderlyingCouponPaymentDate_63.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_63;
    UnderlyingCouponRate_63.setString("50.710000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_63);
    UnderlyingInstrument_63.insert(UnderlyingCouponRate_63.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_63("STRING_1555326590");
    noUnderlyings_0_1.set(UnderlyingCreditRating_63);
    UnderlyingInstrument_63.insert(UnderlyingCreditRating_63.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_63("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_63);
    UnderlyingInstrument_63.insert(UnderlyingCurrency_63.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_63;
    UnderlyingCurrentValue_63.setString("6783800");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_63);
    UnderlyingInstrument_63.insert(UnderlyingCurrentValue_63.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_63;
    UnderlyingDetachmentPoint_63.setString("34.550000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_63);
    UnderlyingInstrument_63.insert(UnderlyingDetachmentPoint_63.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_63;
    UnderlyingDirtyPrice_63.setString("14166578");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_63);
    UnderlyingInstrument_63.insert(UnderlyingDirtyPrice_63.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_63;
    UnderlyingEndPrice_63.setString("14816828");
    noUnderlyings_0_1.set(UnderlyingEndPrice_63);
    UnderlyingInstrument_63.insert(UnderlyingEndPrice_63.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_63;
    UnderlyingEndValue_63.setString("2012764");
    noUnderlyings_0_1.set(UnderlyingEndValue_63);
    UnderlyingInstrument_63.insert(UnderlyingEndValue_63.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_63(49314074);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_63);
    UnderlyingInstrument_63.insert(UnderlyingExerciseStyle_63.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_63;
    UnderlyingFXRate_63.setString("3269938");
    noUnderlyings_0_1.set(UnderlyingFXRate_63);
    UnderlyingInstrument_63.insert(UnderlyingFXRate_63.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_63('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_63);
    UnderlyingInstrument_63.insert(UnderlyingFXRateCalc_63.getString());
    FIX::UnderlyingFactor UnderlyingFactor_63;
    UnderlyingFactor_63.setString("13193801");
    noUnderlyings_0_1.set(UnderlyingFactor_63);
    UnderlyingInstrument_63.insert(UnderlyingFactor_63.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_63(702817192);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_63);
    UnderlyingInstrument_63.insert(UnderlyingFlowScheduleType_63.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_63("STRING_865234993");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_63);
    UnderlyingInstrument_63.insert(UnderlyingInstrRegistry_63.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_63("LOCALMKTDATE_1993567456");
    noUnderlyings_0_1.set(UnderlyingIssueDate_63);
    UnderlyingInstrument_63.insert(UnderlyingIssueDate_63.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_63("STRING_448499732");
    noUnderlyings_0_1.set(UnderlyingIssuer_63);
    UnderlyingInstrument_63.insert(UnderlyingIssuer_63.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_63("STRING_59083281");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_63);
    UnderlyingInstrument_63.insert(UnderlyingLocaleOfIssue_63.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_63("LOCALMKTDATE_703944630");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_63);
    UnderlyingInstrument_63.insert(UnderlyingMaturityDate_63.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_63("MONTHYEAR_797235126");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_63);
    UnderlyingInstrument_63.insert(UnderlyingMaturityMonthYear_63.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_63("TZTIMEONLY_1025053221");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_63);
    UnderlyingInstrument_63.insert(UnderlyingMaturityTime_63.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_63;
    UnderlyingNotionalPercentageOutstanding_63.setString("50.350000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_63);
    UnderlyingInstrument_63.insert(UnderlyingNotionalPercentageOutstanding_63.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_63('8');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_63);
    UnderlyingInstrument_63.insert(UnderlyingOptAttribute_63.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_63;
    UnderlyingOriginalNotionalPercentageOutstanding_63.setString("33.250000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_63);
    UnderlyingInstrument_63.insert(UnderlyingOriginalNotionalPercentageOutstanding_63.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_63("STRING_70919329");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_63);
    UnderlyingInstrument_63.insert(UnderlyingPriceUnitOfMeasure_63.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_63;
    UnderlyingPriceUnitOfMeasureQty_63.setString("2740210");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_63);
    UnderlyingInstrument_63.insert(UnderlyingPriceUnitOfMeasureQty_63.getString());
    FIX::UnderlyingProduct UnderlyingProduct_63(747430746);
    noUnderlyings_0_1.set(UnderlyingProduct_63);
    UnderlyingInstrument_63.insert(UnderlyingProduct_63.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_63(1298812351);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_63);
    UnderlyingInstrument_63.insert(UnderlyingPutOrCall_63.getString());
    FIX::UnderlyingPx UnderlyingPx_63;
    UnderlyingPx_63.setString("10899364");
    noUnderlyings_0_1.set(UnderlyingPx_63);
    UnderlyingInstrument_63.insert(UnderlyingPx_63.getString());
    FIX::UnderlyingQty UnderlyingQty_63;
    UnderlyingQty_63.setString("9942123");
    noUnderlyings_0_1.set(UnderlyingQty_63);
    UnderlyingInstrument_63.insert(UnderlyingQty_63.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_63("LOCALMKTDATE_1059218206");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_63);
    UnderlyingInstrument_63.insert(UnderlyingRedemptionDate_63.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_63("STRING_615797827");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_63);
    UnderlyingInstrument_63.insert(UnderlyingRepoCollateralSecurityType_63.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_63;
    UnderlyingRepurchaseRate_63.setString("52.990000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_63);
    UnderlyingInstrument_63.insert(UnderlyingRepurchaseRate_63.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_63(338325698);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_63);
    UnderlyingInstrument_63.insert(UnderlyingRepurchaseTerm_63.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_63("STRING_1494982434");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_63);
    UnderlyingInstrument_63.insert(UnderlyingRestructuringType_63.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_63("STRING_1080435322");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_63);
    UnderlyingInstrument_63.insert(UnderlyingSecurityDesc_63.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_63("EXCHANGE_393169153");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_63);
    UnderlyingInstrument_63.insert(UnderlyingSecurityExchange_63.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_63("STRING_764156618");
    noUnderlyings_0_1.set(UnderlyingSecurityID_63);
    UnderlyingInstrument_63.insert(UnderlyingSecurityID_63.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_63("STRING_414634522");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_63);
    UnderlyingInstrument_63.insert(UnderlyingSecurityIDSource_63.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_63("STRING_594445558");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_63);
    UnderlyingInstrument_63.insert(UnderlyingSecuritySubType_63.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_63("STRING_813470693");
    noUnderlyings_0_1.set(UnderlyingSecurityType_63);
    UnderlyingInstrument_63.insert(UnderlyingSecurityType_63.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_63("STRING_741628323");
    noUnderlyings_0_1.set(UnderlyingSeniority_63);
    UnderlyingInstrument_63.insert(UnderlyingSeniority_63.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_63("STRING_1839484321");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_63);
    UnderlyingInstrument_63.insert(UnderlyingSettlMethod_63.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_63(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_63);
    UnderlyingInstrument_63.insert(UnderlyingSettlementType_63.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_63;
    UnderlyingStartValue_63.setString("14444455");
    noUnderlyings_0_1.set(UnderlyingStartValue_63);
    UnderlyingInstrument_63.insert(UnderlyingStartValue_63.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_63("STRING_557235666");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_63);
    UnderlyingInstrument_63.insert(UnderlyingStateOrProvinceOfIssue_63.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_63("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_63);
    UnderlyingInstrument_63.insert(UnderlyingStrikeCurrency_63.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_63;
    UnderlyingStrikePrice_63.setString("6163189");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_63);
    UnderlyingInstrument_63.insert(UnderlyingStrikePrice_63.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_63("STRING_535395674");
    noUnderlyings_0_1.set(UnderlyingSymbol_63);
    UnderlyingInstrument_63.insert(UnderlyingSymbol_63.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_63("STRING_542696726");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_63);
    UnderlyingInstrument_63.insert(UnderlyingSymbolSfx_63.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_63("STRING_1641372168");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_63);
    UnderlyingInstrument_63.insert(UnderlyingTimeUnit_63.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_63("STRING_1167750709");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_63);
    UnderlyingInstrument_63.insert(UnderlyingUnitOfMeasure_63.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_63;
    UnderlyingUnitOfMeasureQty_63.setString("13505648");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_63);
    UnderlyingInstrument_63.insert(UnderlyingUnitOfMeasureQty_63.getString());
    all_values.push_back(UnderlyingInstrument_63);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_130;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_130("STRING_1238670039");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_130);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_130.insert(UnderlyingSecurityAltID_130.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_130("STRING_1624585873");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_130);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_130.insert(UnderlyingSecurityAltIDSource_130.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_130);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_131;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_131("STRING_1970672591");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_131);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_131.insert(UnderlyingSecurityAltID_131.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_131("STRING_389998742");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_131);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_131.insert(UnderlyingSecurityAltIDSource_131.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_131);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_132;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_132("STRING_567038629");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_132);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_132.insert(UnderlyingSecurityAltID_132.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_132("STRING_817401300");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_132);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_132.insert(UnderlyingSecurityAltIDSource_132.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_132);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_126;
      FIX::UnderlyingStipType UnderlyingStipType_126("STRING_1182836456");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_126);
      UnderlyingStipulations_NoUnderlyingStips_126.insert(UnderlyingStipType_126.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_126("STRING_1219456600");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_126);
      UnderlyingStipulations_NoUnderlyingStips_126.insert(UnderlyingStipValue_126.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_126);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_120;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_120("STRING_530335242");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_120);
      UndlyInstrumentParties_NoUndlyInstrumentParties_120.insert(UnderlyingInstrumentPartyID_120.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_120('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_120);
      UndlyInstrumentParties_NoUndlyInstrumentParties_120.insert(UnderlyingInstrumentPartyIDSource_120.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_120(33228151);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_120);
      UndlyInstrumentParties_NoUndlyInstrumentParties_120.insert(UnderlyingInstrumentPartyRole_120.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_120);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_238("STRING_567042796");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_238);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238.insert(UnderlyingInstrumentPartySubID_238.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_238(627673710);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_238);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238.insert(UnderlyingInstrumentPartySubIDType_238.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_121;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_121("STRING_2107962554");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_121);
      UndlyInstrumentParties_NoUndlyInstrumentParties_121.insert(UnderlyingInstrumentPartyID_121.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_121('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_121);
      UndlyInstrumentParties_NoUndlyInstrumentParties_121.insert(UnderlyingInstrumentPartyIDSource_121.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_121(319674383);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_121);
      UndlyInstrumentParties_NoUndlyInstrumentParties_121.insert(UnderlyingInstrumentPartyRole_121.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_121);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_239("STRING_605632987");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_239);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239.insert(UnderlyingInstrumentPartySubID_239.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_239(876910049);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_239);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239.insert(UnderlyingInstrumentPartySubIDType_239.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_240("STRING_1924780834");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_240);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240.insert(UnderlyingInstrumentPartySubID_240.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_240(351094587);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_240);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240.insert(UnderlyingInstrumentPartySubIDType_240.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_241("STRING_1493228996");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_241);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241.insert(UnderlyingInstrumentPartySubID_241.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_241(312692861);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_241);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241.insert(UnderlyingInstrumentPartySubIDType_241.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_122;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_122("STRING_893791313");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_122);
      UndlyInstrumentParties_NoUndlyInstrumentParties_122.insert(UnderlyingInstrumentPartyID_122.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_122('9');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_122);
      UndlyInstrumentParties_NoUndlyInstrumentParties_122.insert(UnderlyingInstrumentPartyIDSource_122.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_122(1480443570);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_122);
      UndlyInstrumentParties_NoUndlyInstrumentParties_122.insert(UnderlyingInstrumentPartyRole_122.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_122);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_242("STRING_62875714");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_242);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242.insert(UnderlyingInstrumentPartySubID_242.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_242(571629961);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_242);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242.insert(UnderlyingInstrumentPartySubIDType_242.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_243("STRING_1721458356");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_243);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243.insert(UnderlyingInstrumentPartySubID_243.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_243(2033548305);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_243);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243.insert(UnderlyingInstrumentPartySubIDType_243.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_244("STRING_961628703");
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubID_244);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244.insert(UnderlyingInstrumentPartySubID_244.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_244(141013337);
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubIDType_244);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244.insert(UnderlyingInstrumentPartySubIDType_244.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::NewOrderCross::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_64;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_64("DATA_703465958");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_64);
    UnderlyingInstrument_64.insert(EncodedUnderlyingIssuer_64.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_64(263362003);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_64);
    UnderlyingInstrument_64.insert(EncodedUnderlyingIssuerLen_64.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_64("DATA_1323849793");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_64);
    UnderlyingInstrument_64.insert(EncodedUnderlyingSecurityDesc_64.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_64(1922922558);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_64);
    UnderlyingInstrument_64.insert(EncodedUnderlyingSecurityDescLen_64.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_64;
    UnderlyingAdjustedQuantity_64.setString("20509046");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_64);
    UnderlyingInstrument_64.insert(UnderlyingAdjustedQuantity_64.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_64;
    UnderlyingAllocationPercent_64.setString("50.350000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_64);
    UnderlyingInstrument_64.insert(UnderlyingAllocationPercent_64.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_64;
    UnderlyingAttachmentPoint_64.setString("8.320000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_64);
    UnderlyingInstrument_64.insert(UnderlyingAttachmentPoint_64.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_64("STRING_2084132801");
    noUnderlyings_0_2.set(UnderlyingCFICode_64);
    UnderlyingInstrument_64.insert(UnderlyingCFICode_64.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_64("STRING_1001193248");
    noUnderlyings_0_2.set(UnderlyingCPProgram_64);
    UnderlyingInstrument_64.insert(UnderlyingCPProgram_64.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_64("STRING_494889980");
    noUnderlyings_0_2.set(UnderlyingCPRegType_64);
    UnderlyingInstrument_64.insert(UnderlyingCPRegType_64.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_64;
    UnderlyingCapValue_64.setString("5643228");
    noUnderlyings_0_2.set(UnderlyingCapValue_64);
    UnderlyingInstrument_64.insert(UnderlyingCapValue_64.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_64;
    UnderlyingCashAmount_64.setString("9616721");
    noUnderlyings_0_2.set(UnderlyingCashAmount_64);
    UnderlyingInstrument_64.insert(UnderlyingCashAmount_64.getString());
    FIX::UnderlyingCashType UnderlyingCashType_64("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_64);
    UnderlyingInstrument_64.insert(UnderlyingCashType_64.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_64;
    UnderlyingContractMultiplier_64.setString("8839972");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_64);
    UnderlyingInstrument_64.insert(UnderlyingContractMultiplier_64.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_64(907518296);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_64);
    UnderlyingInstrument_64.insert(UnderlyingContractMultiplierUnit_64.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_64("COUNTRY_261710439");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_64);
    UnderlyingInstrument_64.insert(UnderlyingCountryOfIssue_64.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_64("LOCALMKTDATE_1760907295");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_64);
    UnderlyingInstrument_64.insert(UnderlyingCouponPaymentDate_64.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_64;
    UnderlyingCouponRate_64.setString("54.830000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_64);
    UnderlyingInstrument_64.insert(UnderlyingCouponRate_64.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_64("STRING_612805026");
    noUnderlyings_0_2.set(UnderlyingCreditRating_64);
    UnderlyingInstrument_64.insert(UnderlyingCreditRating_64.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_64("JPY");
    noUnderlyings_0_2.set(UnderlyingCurrency_64);
    UnderlyingInstrument_64.insert(UnderlyingCurrency_64.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_64;
    UnderlyingCurrentValue_64.setString("15065963");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_64);
    UnderlyingInstrument_64.insert(UnderlyingCurrentValue_64.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_64;
    UnderlyingDetachmentPoint_64.setString("1.590000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_64);
    UnderlyingInstrument_64.insert(UnderlyingDetachmentPoint_64.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_64;
    UnderlyingDirtyPrice_64.setString("3304682");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_64);
    UnderlyingInstrument_64.insert(UnderlyingDirtyPrice_64.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_64;
    UnderlyingEndPrice_64.setString("16034688");
    noUnderlyings_0_2.set(UnderlyingEndPrice_64);
    UnderlyingInstrument_64.insert(UnderlyingEndPrice_64.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_64;
    UnderlyingEndValue_64.setString("91622");
    noUnderlyings_0_2.set(UnderlyingEndValue_64);
    UnderlyingInstrument_64.insert(UnderlyingEndValue_64.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_64(902098228);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_64);
    UnderlyingInstrument_64.insert(UnderlyingExerciseStyle_64.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_64;
    UnderlyingFXRate_64.setString("11774435");
    noUnderlyings_0_2.set(UnderlyingFXRate_64);
    UnderlyingInstrument_64.insert(UnderlyingFXRate_64.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_64('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_64);
    UnderlyingInstrument_64.insert(UnderlyingFXRateCalc_64.getString());
    FIX::UnderlyingFactor UnderlyingFactor_64;
    UnderlyingFactor_64.setString("18637269");
    noUnderlyings_0_2.set(UnderlyingFactor_64);
    UnderlyingInstrument_64.insert(UnderlyingFactor_64.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_64(1318456867);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_64);
    UnderlyingInstrument_64.insert(UnderlyingFlowScheduleType_64.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_64("STRING_598692841");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_64);
    UnderlyingInstrument_64.insert(UnderlyingInstrRegistry_64.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_64("LOCALMKTDATE_2127088935");
    noUnderlyings_0_2.set(UnderlyingIssueDate_64);
    UnderlyingInstrument_64.insert(UnderlyingIssueDate_64.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_64("STRING_494823012");
    noUnderlyings_0_2.set(UnderlyingIssuer_64);
    UnderlyingInstrument_64.insert(UnderlyingIssuer_64.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_64("STRING_374131751");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_64);
    UnderlyingInstrument_64.insert(UnderlyingLocaleOfIssue_64.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_64("LOCALMKTDATE_2030509936");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_64);
    UnderlyingInstrument_64.insert(UnderlyingMaturityDate_64.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_64("MONTHYEAR_201524400");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_64);
    UnderlyingInstrument_64.insert(UnderlyingMaturityMonthYear_64.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_64("TZTIMEONLY_301978935");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_64);
    UnderlyingInstrument_64.insert(UnderlyingMaturityTime_64.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_64;
    UnderlyingNotionalPercentageOutstanding_64.setString("90.890000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_64);
    UnderlyingInstrument_64.insert(UnderlyingNotionalPercentageOutstanding_64.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_64('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_64);
    UnderlyingInstrument_64.insert(UnderlyingOptAttribute_64.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_64;
    UnderlyingOriginalNotionalPercentageOutstanding_64.setString("89.150000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_64);
    UnderlyingInstrument_64.insert(UnderlyingOriginalNotionalPercentageOutstanding_64.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_64("STRING_383998304");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_64);
    UnderlyingInstrument_64.insert(UnderlyingPriceUnitOfMeasure_64.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_64;
    UnderlyingPriceUnitOfMeasureQty_64.setString("169061");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_64);
    UnderlyingInstrument_64.insert(UnderlyingPriceUnitOfMeasureQty_64.getString());
    FIX::UnderlyingProduct UnderlyingProduct_64(452946367);
    noUnderlyings_0_2.set(UnderlyingProduct_64);
    UnderlyingInstrument_64.insert(UnderlyingProduct_64.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_64(1267995550);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_64);
    UnderlyingInstrument_64.insert(UnderlyingPutOrCall_64.getString());
    FIX::UnderlyingPx UnderlyingPx_64;
    UnderlyingPx_64.setString("9244244");
    noUnderlyings_0_2.set(UnderlyingPx_64);
    UnderlyingInstrument_64.insert(UnderlyingPx_64.getString());
    FIX::UnderlyingQty UnderlyingQty_64;
    UnderlyingQty_64.setString("7146568");
    noUnderlyings_0_2.set(UnderlyingQty_64);
    UnderlyingInstrument_64.insert(UnderlyingQty_64.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_64("LOCALMKTDATE_881419197");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_64);
    UnderlyingInstrument_64.insert(UnderlyingRedemptionDate_64.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_64("STRING_1609239934");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_64);
    UnderlyingInstrument_64.insert(UnderlyingRepoCollateralSecurityType_64.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_64;
    UnderlyingRepurchaseRate_64.setString("18.320000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_64);
    UnderlyingInstrument_64.insert(UnderlyingRepurchaseRate_64.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_64(1988071840);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_64);
    UnderlyingInstrument_64.insert(UnderlyingRepurchaseTerm_64.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_64("STRING_459264630");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_64);
    UnderlyingInstrument_64.insert(UnderlyingRestructuringType_64.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_64("STRING_686574524");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_64);
    UnderlyingInstrument_64.insert(UnderlyingSecurityDesc_64.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_64("EXCHANGE_1934358352");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_64);
    UnderlyingInstrument_64.insert(UnderlyingSecurityExchange_64.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_64("STRING_789732897");
    noUnderlyings_0_2.set(UnderlyingSecurityID_64);
    UnderlyingInstrument_64.insert(UnderlyingSecurityID_64.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_64("STRING_142559698");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_64);
    UnderlyingInstrument_64.insert(UnderlyingSecurityIDSource_64.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_64("STRING_1943520577");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_64);
    UnderlyingInstrument_64.insert(UnderlyingSecuritySubType_64.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_64("STRING_1691831125");
    noUnderlyings_0_2.set(UnderlyingSecurityType_64);
    UnderlyingInstrument_64.insert(UnderlyingSecurityType_64.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_64("STRING_1320003229");
    noUnderlyings_0_2.set(UnderlyingSeniority_64);
    UnderlyingInstrument_64.insert(UnderlyingSeniority_64.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_64("STRING_1838747460");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_64);
    UnderlyingInstrument_64.insert(UnderlyingSettlMethod_64.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_64(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_64);
    UnderlyingInstrument_64.insert(UnderlyingSettlementType_64.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_64;
    UnderlyingStartValue_64.setString("4909764");
    noUnderlyings_0_2.set(UnderlyingStartValue_64);
    UnderlyingInstrument_64.insert(UnderlyingStartValue_64.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_64("STRING_289956653");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_64);
    UnderlyingInstrument_64.insert(UnderlyingStateOrProvinceOfIssue_64.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_64("EUR");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_64);
    UnderlyingInstrument_64.insert(UnderlyingStrikeCurrency_64.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_64;
    UnderlyingStrikePrice_64.setString("6640884");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_64);
    UnderlyingInstrument_64.insert(UnderlyingStrikePrice_64.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_64("STRING_1270705984");
    noUnderlyings_0_2.set(UnderlyingSymbol_64);
    UnderlyingInstrument_64.insert(UnderlyingSymbol_64.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_64("STRING_1187323861");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_64);
    UnderlyingInstrument_64.insert(UnderlyingSymbolSfx_64.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_64("STRING_966067339");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_64);
    UnderlyingInstrument_64.insert(UnderlyingTimeUnit_64.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_64("STRING_1090381425");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_64);
    UnderlyingInstrument_64.insert(UnderlyingUnitOfMeasure_64.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_64;
    UnderlyingUnitOfMeasureQty_64.setString("2425578");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_64);
    UnderlyingInstrument_64.insert(UnderlyingUnitOfMeasureQty_64.getString());
    all_values.push_back(UnderlyingInstrument_64);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_133;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_133("STRING_1474379730");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_133);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_133.insert(UnderlyingSecurityAltID_133.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_133("STRING_259464016");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_133);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_133.insert(UnderlyingSecurityAltIDSource_133.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_133);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_134;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_134("STRING_68398974");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_134);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_134.insert(UnderlyingSecurityAltID_134.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_134("STRING_594891632");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_134);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_134.insert(UnderlyingSecurityAltIDSource_134.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_134);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_127;
      FIX::UnderlyingStipType UnderlyingStipType_127("STRING_783055781");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_127);
      UnderlyingStipulations_NoUnderlyingStips_127.insert(UnderlyingStipType_127.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_127("STRING_1476310830");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_127);
      UnderlyingStipulations_NoUnderlyingStips_127.insert(UnderlyingStipValue_127.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_127);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_128;
      FIX::UnderlyingStipType UnderlyingStipType_128("STRING_645644754");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_128);
      UnderlyingStipulations_NoUnderlyingStips_128.insert(UnderlyingStipType_128.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_128("STRING_2110517613");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_128);
      UnderlyingStipulations_NoUnderlyingStips_128.insert(UnderlyingStipValue_128.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_128);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_123;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_123("STRING_1104909385");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_123);
      UndlyInstrumentParties_NoUndlyInstrumentParties_123.insert(UnderlyingInstrumentPartyID_123.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_123('6');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_123);
      UndlyInstrumentParties_NoUndlyInstrumentParties_123.insert(UnderlyingInstrumentPartyIDSource_123.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_123(1103773726);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_123);
      UndlyInstrumentParties_NoUndlyInstrumentParties_123.insert(UnderlyingInstrumentPartyRole_123.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_123);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_245("STRING_792168188");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_245);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245.insert(UnderlyingInstrumentPartySubID_245.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_245(899810656);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_245);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245.insert(UnderlyingInstrumentPartySubIDType_245.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_246("STRING_1438989759");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_246);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246.insert(UnderlyingInstrumentPartySubID_246.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_246(2112171417);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_246);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246.insert(UnderlyingInstrumentPartySubIDType_246.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_124;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_124("STRING_591074468");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_124);
      UndlyInstrumentParties_NoUndlyInstrumentParties_124.insert(UnderlyingInstrumentPartyID_124.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_124('6');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_124);
      UndlyInstrumentParties_NoUndlyInstrumentParties_124.insert(UnderlyingInstrumentPartyIDSource_124.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_124(455664217);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_124);
      UndlyInstrumentParties_NoUndlyInstrumentParties_124.insert(UnderlyingInstrumentPartyRole_124.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_124);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_247("STRING_2087260215");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_247);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247.insert(UnderlyingInstrumentPartySubID_247.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_247(1441463678);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_247);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247.insert(UnderlyingInstrumentPartySubIDType_247.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_248("STRING_1545119526");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_248);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248.insert(UnderlyingInstrumentPartySubID_248.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_248(1210482551);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_248);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248.insert(UnderlyingInstrumentPartySubIDType_248.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_249("STRING_481303891");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_249);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249.insert(UnderlyingInstrumentPartySubID_249.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_249(363703218);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_249);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249.insert(UnderlyingInstrumentPartySubIDType_249.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_125;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_125("STRING_153380328");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_125);
      UndlyInstrumentParties_NoUndlyInstrumentParties_125.insert(UnderlyingInstrumentPartyID_125.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_125('7');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_125);
      UndlyInstrumentParties_NoUndlyInstrumentParties_125.insert(UnderlyingInstrumentPartyIDSource_125.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_125(2126639473);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_125);
      UndlyInstrumentParties_NoUndlyInstrumentParties_125.insert(UnderlyingInstrumentPartyRole_125.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_125);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_250("STRING_983325769");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_250);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250.insert(UnderlyingInstrumentPartySubID_250.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_250(47554799);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_250);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250.insert(UnderlyingInstrumentPartySubIDType_250.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_10;
  FIX::Yield Yield_10;
  Yield_10.setString("80.430000");
  msg.set(Yield_10);
  YieldData_10.insert(Yield_10.getString());
  FIX::YieldCalcDate YieldCalcDate_10("LOCALMKTDATE_19730589");
  msg.set(YieldCalcDate_10);
  YieldData_10.insert(YieldCalcDate_10.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_10("LOCALMKTDATE_830610580");
  msg.set(YieldRedemptionDate_10);
  YieldData_10.insert(YieldRedemptionDate_10.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_10;
  YieldRedemptionPrice_10.setString("15514788");
  msg.set(YieldRedemptionPrice_10);
  YieldData_10.insert(YieldRedemptionPrice_10.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_10(665375344);
  msg.set(YieldRedemptionPriceType_10);
  YieldData_10.insert(YieldRedemptionPriceType_10.getString());
  FIX::YieldType YieldType_10("STRING_OPENAVG");
  msg.set(YieldType_10);
  YieldData_10.insert(YieldType_10.getString());
  all_values.push_back(YieldData_10);
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
