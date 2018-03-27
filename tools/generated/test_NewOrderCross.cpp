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
  FIX::ComplianceID ComplianceID_5("STRING_1983687657");
  msg.set(ComplianceID_5);
  NewOrderCross_0.insert(ComplianceID_5.getString());
  FIX::CrossID CrossID_3("STRING_1761428653");
  msg.set(CrossID_3);
  NewOrderCross_0.insert(CrossID_3.getString());
  FIX::CrossPrioritization CrossPrioritization_2(2);
  msg.set(CrossPrioritization_2);
  NewOrderCross_0.insert(CrossPrioritization_2.getString());
  FIX::CrossType CrossType_3(2);
  msg.set(CrossType_3);
  NewOrderCross_0.insert(CrossType_3.getString());
  FIX::Currency Currency_34("GBP");
  msg.set(Currency_34);
  NewOrderCross_0.insert(Currency_34.getString());
  FIX::Designation Designation_3("STRING_879634652");
  msg.set(Designation_3);
  NewOrderCross_0.insert(Designation_3.getString());
  FIX::EffectiveTime EffectiveTime_3(FIX::UTCTIMESTAMP(2, 14, 29, 8, 82010));
  msg.set(EffectiveTime_3);
  NewOrderCross_0.insert(EffectiveTime_3.getString());
  FIX::ExDestination ExDestination_2("EXCHANGE_1805566462");
  msg.set(ExDestination_2);
  NewOrderCross_0.insert(ExDestination_2.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_2('D');
  msg.set(ExDestinationIDSource_2);
  NewOrderCross_0.insert(ExDestinationIDSource_2.getString());
  FIX::ExecInst ExecInst_6("MULTIPLECHARVALUE_e");
  msg.set(ExecInst_6);
  NewOrderCross_0.insert(ExecInst_6.getString());
  FIX::ExpireDate ExpireDate_7("LOCALMKTDATE_1868964416");
  msg.set(ExpireDate_7);
  NewOrderCross_0.insert(ExpireDate_7.getString());
  FIX::ExpireTime ExpireTime_8(FIX::UTCTIMESTAMP(15, 6, 5, 24, 12016));
  msg.set(ExpireTime_8);
  NewOrderCross_0.insert(ExpireTime_8.getString());
  FIX::GTBookingInst GTBookingInst_3(1);
  msg.set(GTBookingInst_3);
  NewOrderCross_0.insert(GTBookingInst_3.getString());
  FIX::HandlInst HandlInst_3('3');
  msg.set(HandlInst_3);
  NewOrderCross_0.insert(HandlInst_3.getString());
  FIX::IOIID IOIID_3("STRING_429937405");
  msg.set(IOIID_3);
  NewOrderCross_0.insert(IOIID_3.getString());
  FIX::LocateReqd LocateReqd_2(false);
  msg.set(LocateReqd_2);
  NewOrderCross_0.insert(LocateReqd_2.getString());
  FIX::MatchIncrement MatchIncrement_3;
  MatchIncrement_3.setString("14641727");
  msg.set(MatchIncrement_3);
  NewOrderCross_0.insert(MatchIncrement_3.getString());
  FIX::MaxFloor MaxFloor_3;
  MaxFloor_3.setString("4341051");
  msg.set(MaxFloor_3);
  NewOrderCross_0.insert(MaxFloor_3.getString());
  FIX::MaxPriceLevels MaxPriceLevels_3(444173886);
  msg.set(MaxPriceLevels_3);
  NewOrderCross_0.insert(MaxPriceLevels_3.getString());
  FIX::MaxShow MaxShow_3;
  MaxShow_3.setString("10781177");
  msg.set(MaxShow_3);
  NewOrderCross_0.insert(MaxShow_3.getString());
  FIX::MinQty MinQty_6;
  MinQty_6.setString("20051639");
  msg.set(MinQty_6);
  NewOrderCross_0.insert(MinQty_6.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_3('N');
  msg.set(MoneyLaunderingStatus_3);
  NewOrderCross_0.insert(MoneyLaunderingStatus_3.getString());
  FIX::OrdType OrdType_39('D');
  msg.set(OrdType_39);
  NewOrderCross_0.insert(OrdType_39.getString());
  FIX::ParticipationRate ParticipationRate_3;
  ParticipationRate_3.setString("56.570000");
  msg.set(ParticipationRate_3);
  NewOrderCross_0.insert(ParticipationRate_3.getString());
  FIX::PrevClosePx PrevClosePx_4;
  PrevClosePx_4.setString("7300717");
  msg.set(PrevClosePx_4);
  NewOrderCross_0.insert(PrevClosePx_4.getString());
  FIX::Price Price_13;
  Price_13.setString("10847132");
  msg.set(Price_13);
  NewOrderCross_0.insert(Price_13.getString());
  FIX::PriceProtectionScope PriceProtectionScope_3('3');
  msg.set(PriceProtectionScope_3);
  NewOrderCross_0.insert(PriceProtectionScope_3.getString());
  FIX::PriceType PriceType_25(10);
  msg.set(PriceType_25);
  NewOrderCross_0.insert(PriceType_25.getString());
  FIX::ProcessCode ProcessCode_8('0');
  msg.set(ProcessCode_8);
  NewOrderCross_0.insert(ProcessCode_8.getString());
  FIX::QuoteID QuoteID_4("STRING_190431128");
  msg.set(QuoteID_4);
  NewOrderCross_0.insert(QuoteID_4.getString());
  FIX::RegistID RegistID_3("STRING_1265504516");
  msg.set(RegistID_3);
  NewOrderCross_0.insert(RegistID_3.getString());
  FIX::SettlDate SettlDate_24("LOCALMKTDATE_1832134122");
  msg.set(SettlDate_24);
  NewOrderCross_0.insert(SettlDate_24.getString());
  FIX::SettlType SettlType_15("STRING_6");
  msg.set(SettlType_15);
  NewOrderCross_0.insert(SettlType_15.getString());
  FIX::StopPx StopPx_3;
  StopPx_3.setString("21363589");
  msg.set(StopPx_3);
  NewOrderCross_0.insert(StopPx_3.getString());
  FIX::TargetStrategy TargetStrategy_3(2);
  msg.set(TargetStrategy_3);
  NewOrderCross_0.insert(TargetStrategy_3.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_3("STRING_1717478358");
  msg.set(TargetStrategyParameters_3);
  NewOrderCross_0.insert(TargetStrategyParameters_3.getString());
  FIX::TimeInForce TimeInForce_35('1');
  msg.set(TimeInForce_35);
  NewOrderCross_0.insert(TimeInForce_35.getString());
  FIX::TransBkdTime TransBkdTime_3(FIX::UTCTIMESTAMP(16, 17, 26, 8, 22009));
  msg.set(TransBkdTime_3);
  NewOrderCross_0.insert(TransBkdTime_3.getString());
  FIX::TransactTime TransactTime_30(FIX::UTCTIMESTAMP(2, 27, 30, 7, 22011));
  msg.set(TransactTime_30);
  NewOrderCross_0.insert(TransactTime_30.getString());
  all_values.push_back(NewOrderCross_0);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_3;
  FIX::DiscretionInst DiscretionInst_3('5');
  msg.set(DiscretionInst_3);
  DiscretionInstructions_3.insert(DiscretionInst_3.getString());
  FIX::DiscretionLimitType DiscretionLimitType_3(0);
  msg.set(DiscretionLimitType_3);
  DiscretionInstructions_3.insert(DiscretionLimitType_3.getString());
  FIX::DiscretionMoveType DiscretionMoveType_3(1);
  msg.set(DiscretionMoveType_3);
  DiscretionInstructions_3.insert(DiscretionMoveType_3.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_3(2);
  msg.set(DiscretionOffsetType_3);
  DiscretionInstructions_3.insert(DiscretionOffsetType_3.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_3;
  DiscretionOffsetValue_3.setString("6798157");
  msg.set(DiscretionOffsetValue_3);
  DiscretionInstructions_3.insert(DiscretionOffsetValue_3.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_3(2);
  msg.set(DiscretionRoundDirection_3);
  DiscretionInstructions_3.insert(DiscretionRoundDirection_3.getString());
  FIX::DiscretionScope DiscretionScope_3(3);
  msg.set(DiscretionScope_3);
  DiscretionInstructions_3.insert(DiscretionScope_3.getString());
  all_values.push_back(DiscretionInstructions_3);

  // DisplayInstruction
  multiset<string> DisplayInstruction_3;
  FIX::DisplayHighQty DisplayHighQty_3;
  DisplayHighQty_3.setString("21434909");
  msg.set(DisplayHighQty_3);
  DisplayInstruction_3.insert(DisplayHighQty_3.getString());
  FIX::DisplayLowQty DisplayLowQty_3;
  DisplayLowQty_3.setString("13149538");
  msg.set(DisplayLowQty_3);
  DisplayInstruction_3.insert(DisplayLowQty_3.getString());
  FIX::DisplayMethod DisplayMethod_3('3');
  msg.set(DisplayMethod_3);
  DisplayInstruction_3.insert(DisplayMethod_3.getString());
  FIX::DisplayMinIncr DisplayMinIncr_3;
  DisplayMinIncr_3.setString("12615118");
  msg.set(DisplayMinIncr_3);
  DisplayInstruction_3.insert(DisplayMinIncr_3.getString());
  FIX::DisplayQty DisplayQty_3;
  DisplayQty_3.setString("9996043");
  msg.set(DisplayQty_3);
  DisplayInstruction_3.insert(DisplayQty_3.getString());
  FIX::DisplayWhen DisplayWhen_3('1');
  msg.set(DisplayWhen_3);
  DisplayInstruction_3.insert(DisplayWhen_3.getString());
  FIX::RefreshQty RefreshQty_3;
  RefreshQty_3.setString("12503871");
  msg.set(RefreshQty_3);
  DisplayInstruction_3.insert(RefreshQty_3.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_3;
  SecondaryDisplayQty_3.setString("7048930");
  msg.set(SecondaryDisplayQty_3);
  DisplayInstruction_3.insert(SecondaryDisplayQty_3.getString());
  all_values.push_back(DisplayInstruction_3);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::NewOrderCross::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_61;
    FIX::EncodedLegIssuer EncodedLegIssuer_61("DATA_1320129220");
    noLegs_0_0.set(EncodedLegIssuer_61);
    InstrumentLeg_61.insert(EncodedLegIssuer_61.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_61(225036039);
    noLegs_0_0.set(EncodedLegIssuerLen_61);
    InstrumentLeg_61.insert(EncodedLegIssuerLen_61.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_61("DATA_1512063910");
    noLegs_0_0.set(EncodedLegSecurityDesc_61);
    InstrumentLeg_61.insert(EncodedLegSecurityDesc_61.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_61(378290269);
    noLegs_0_0.set(EncodedLegSecurityDescLen_61);
    InstrumentLeg_61.insert(EncodedLegSecurityDescLen_61.getString());
    FIX::LegCFICode LegCFICode_61("STRING_827512745");
    noLegs_0_0.set(LegCFICode_61);
    InstrumentLeg_61.insert(LegCFICode_61.getString());
    FIX::LegContractMultiplier LegContractMultiplier_61;
    LegContractMultiplier_61.setString("2504461");
    noLegs_0_0.set(LegContractMultiplier_61);
    InstrumentLeg_61.insert(LegContractMultiplier_61.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_61(1011079850);
    noLegs_0_0.set(LegContractMultiplierUnit_61);
    InstrumentLeg_61.insert(LegContractMultiplierUnit_61.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_61("MONTHYEAR_2022159615");
    noLegs_0_0.set(LegContractSettlMonth_61);
    InstrumentLeg_61.insert(LegContractSettlMonth_61.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_61("COUNTRY_647694364");
    noLegs_0_0.set(LegCountryOfIssue_61);
    InstrumentLeg_61.insert(LegCountryOfIssue_61.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_61("LOCALMKTDATE_2073806836");
    noLegs_0_0.set(LegCouponPaymentDate_61);
    InstrumentLeg_61.insert(LegCouponPaymentDate_61.getString());
    FIX::LegCouponRate LegCouponRate_61;
    LegCouponRate_61.setString("27.140000");
    noLegs_0_0.set(LegCouponRate_61);
    InstrumentLeg_61.insert(LegCouponRate_61.getString());
    FIX::LegCreditRating LegCreditRating_61("STRING_361631606");
    noLegs_0_0.set(LegCreditRating_61);
    InstrumentLeg_61.insert(LegCreditRating_61.getString());
    FIX::LegCurrency LegCurrency_61("CAN");
    noLegs_0_0.set(LegCurrency_61);
    InstrumentLeg_61.insert(LegCurrency_61.getString());
    FIX::LegDatedDate LegDatedDate_61("LOCALMKTDATE_1153686553");
    noLegs_0_0.set(LegDatedDate_61);
    InstrumentLeg_61.insert(LegDatedDate_61.getString());
    FIX::LegExerciseStyle LegExerciseStyle_61(630184036);
    noLegs_0_0.set(LegExerciseStyle_61);
    InstrumentLeg_61.insert(LegExerciseStyle_61.getString());
    FIX::LegFactor LegFactor_61;
    LegFactor_61.setString("17263437");
    noLegs_0_0.set(LegFactor_61);
    InstrumentLeg_61.insert(LegFactor_61.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_61(456571433);
    noLegs_0_0.set(LegFlowScheduleType_61);
    InstrumentLeg_61.insert(LegFlowScheduleType_61.getString());
    FIX::LegInstrRegistry LegInstrRegistry_61("STRING_1819908443");
    noLegs_0_0.set(LegInstrRegistry_61);
    InstrumentLeg_61.insert(LegInstrRegistry_61.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_61("LOCALMKTDATE_258675865");
    noLegs_0_0.set(LegInterestAccrualDate_61);
    InstrumentLeg_61.insert(LegInterestAccrualDate_61.getString());
    FIX::LegIssueDate LegIssueDate_61("LOCALMKTDATE_844169600");
    noLegs_0_0.set(LegIssueDate_61);
    InstrumentLeg_61.insert(LegIssueDate_61.getString());
    FIX::LegIssuer LegIssuer_61("STRING_1112023469");
    noLegs_0_0.set(LegIssuer_61);
    InstrumentLeg_61.insert(LegIssuer_61.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_61("STRING_254683211");
    noLegs_0_0.set(LegLocaleOfIssue_61);
    InstrumentLeg_61.insert(LegLocaleOfIssue_61.getString());
    FIX::LegMaturityDate LegMaturityDate_61("LOCALMKTDATE_11639807");
    noLegs_0_0.set(LegMaturityDate_61);
    InstrumentLeg_61.insert(LegMaturityDate_61.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_61("MONTHYEAR_594569623");
    noLegs_0_0.set(LegMaturityMonthYear_61);
    InstrumentLeg_61.insert(LegMaturityMonthYear_61.getString());
    FIX::LegMaturityTime LegMaturityTime_61("TZTIMEONLY_1516195073");
    noLegs_0_0.set(LegMaturityTime_61);
    InstrumentLeg_61.insert(LegMaturityTime_61.getString());
    FIX::LegOptAttribute LegOptAttribute_61('1');
    noLegs_0_0.set(LegOptAttribute_61);
    InstrumentLeg_61.insert(LegOptAttribute_61.getString());
    FIX::LegOptionRatio LegOptionRatio_61;
    LegOptionRatio_61.setString("20731133");
    noLegs_0_0.set(LegOptionRatio_61);
    InstrumentLeg_61.insert(LegOptionRatio_61.getString());
    FIX::LegPool LegPool_61("STRING_619098614");
    noLegs_0_0.set(LegPool_61);
    InstrumentLeg_61.insert(LegPool_61.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_61("STRING_1716137166");
    noLegs_0_0.set(LegPriceUnitOfMeasure_61);
    InstrumentLeg_61.insert(LegPriceUnitOfMeasure_61.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_61;
    LegPriceUnitOfMeasureQty_61.setString("9741681");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_61);
    InstrumentLeg_61.insert(LegPriceUnitOfMeasureQty_61.getString());
    FIX::LegProduct LegProduct_61(1939227834);
    noLegs_0_0.set(LegProduct_61);
    InstrumentLeg_61.insert(LegProduct_61.getString());
    FIX::LegPutOrCall LegPutOrCall_61(1941173205);
    noLegs_0_0.set(LegPutOrCall_61);
    InstrumentLeg_61.insert(LegPutOrCall_61.getString());
    FIX::LegRatioQty LegRatioQty_61;
    LegRatioQty_61.setString("3387484");
    noLegs_0_0.set(LegRatioQty_61);
    InstrumentLeg_61.insert(LegRatioQty_61.getString());
    FIX::LegRedemptionDate LegRedemptionDate_61("LOCALMKTDATE_170034455");
    noLegs_0_0.set(LegRedemptionDate_61);
    InstrumentLeg_61.insert(LegRedemptionDate_61.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_61("STRING_621202303");
    noLegs_0_0.set(LegRepoCollateralSecurityType_61);
    InstrumentLeg_61.insert(LegRepoCollateralSecurityType_61.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_61;
    LegRepurchaseRate_61.setString("46.090000");
    noLegs_0_0.set(LegRepurchaseRate_61);
    InstrumentLeg_61.insert(LegRepurchaseRate_61.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_61(1181114305);
    noLegs_0_0.set(LegRepurchaseTerm_61);
    InstrumentLeg_61.insert(LegRepurchaseTerm_61.getString());
    FIX::LegSecurityDesc LegSecurityDesc_61("STRING_495878270");
    noLegs_0_0.set(LegSecurityDesc_61);
    InstrumentLeg_61.insert(LegSecurityDesc_61.getString());
    FIX::LegSecurityExchange LegSecurityExchange_61("EXCHANGE_1236888973");
    noLegs_0_0.set(LegSecurityExchange_61);
    InstrumentLeg_61.insert(LegSecurityExchange_61.getString());
    FIX::LegSecurityID LegSecurityID_61("STRING_1107437493");
    noLegs_0_0.set(LegSecurityID_61);
    InstrumentLeg_61.insert(LegSecurityID_61.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_61("STRING_25687336");
    noLegs_0_0.set(LegSecurityIDSource_61);
    InstrumentLeg_61.insert(LegSecurityIDSource_61.getString());
    FIX::LegSecuritySubType LegSecuritySubType_61("STRING_1598520579");
    noLegs_0_0.set(LegSecuritySubType_61);
    InstrumentLeg_61.insert(LegSecuritySubType_61.getString());
    FIX::LegSecurityType LegSecurityType_61("STRING_383109132");
    noLegs_0_0.set(LegSecurityType_61);
    InstrumentLeg_61.insert(LegSecurityType_61.getString());
    FIX::LegSide LegSide_61('1');
    noLegs_0_0.set(LegSide_61);
    InstrumentLeg_61.insert(LegSide_61.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_61("STRING_604723484");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_61);
    InstrumentLeg_61.insert(LegStateOrProvinceOfIssue_61.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_61("GBP");
    noLegs_0_0.set(LegStrikeCurrency_61);
    InstrumentLeg_61.insert(LegStrikeCurrency_61.getString());
    FIX::LegStrikePrice LegStrikePrice_61;
    LegStrikePrice_61.setString("10612949");
    noLegs_0_0.set(LegStrikePrice_61);
    InstrumentLeg_61.insert(LegStrikePrice_61.getString());
    FIX::LegSymbol LegSymbol_61("STRING_685717963");
    noLegs_0_0.set(LegSymbol_61);
    InstrumentLeg_61.insert(LegSymbol_61.getString());
    FIX::LegSymbolSfx LegSymbolSfx_61("STRING_1639823001");
    noLegs_0_0.set(LegSymbolSfx_61);
    InstrumentLeg_61.insert(LegSymbolSfx_61.getString());
    FIX::LegTimeUnit LegTimeUnit_61("STRING_1905464517");
    noLegs_0_0.set(LegTimeUnit_61);
    InstrumentLeg_61.insert(LegTimeUnit_61.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_61("STRING_1797741432");
    noLegs_0_0.set(LegUnitOfMeasure_61);
    InstrumentLeg_61.insert(LegUnitOfMeasure_61.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_61;
    LegUnitOfMeasureQty_61.setString("18945062");
    noLegs_0_0.set(LegUnitOfMeasureQty_61);
    InstrumentLeg_61.insert(LegUnitOfMeasureQty_61.getString());
    all_values.push_back(InstrumentLeg_61);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_109;
      FIX::LegSecurityAltID LegSecurityAltID_109("STRING_244827407");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_109);
      LegSecAltIDGrp_NoLegSecurityAltID_109.insert(LegSecurityAltID_109.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_109("STRING_1263217637");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_109);
      LegSecAltIDGrp_NoLegSecurityAltID_109.insert(LegSecurityAltIDSource_109.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_109);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_36;
  FIX::AttachmentPoint AttachmentPoint_36;
  AttachmentPoint_36.setString("48.140000");
  msg.set(AttachmentPoint_36);
  Instrument_36.insert(AttachmentPoint_36.getString());
  FIX::CFICode CFICode_36("STRING_170457126");
  msg.set(CFICode_36);
  Instrument_36.insert(CFICode_36.getString());
  FIX::CPProgram CPProgram_36(2);
  msg.set(CPProgram_36);
  Instrument_36.insert(CPProgram_36.getString());
  FIX::CPRegType CPRegType_36("STRING_349518333");
  msg.set(CPRegType_36);
  Instrument_36.insert(CPRegType_36.getString());
  FIX::CapPrice CapPrice_36;
  CapPrice_36.setString("11446252");
  msg.set(CapPrice_36);
  Instrument_36.insert(CapPrice_36.getString());
  FIX::ContractMultiplier ContractMultiplier_36;
  ContractMultiplier_36.setString("16740604");
  msg.set(ContractMultiplier_36);
  Instrument_36.insert(ContractMultiplier_36.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_36(1);
  msg.set(ContractMultiplierUnit_36);
  Instrument_36.insert(ContractMultiplierUnit_36.getString());
  FIX::ContractSettlMonth ContractSettlMonth_36("MONTHYEAR_1483373734");
  msg.set(ContractSettlMonth_36);
  Instrument_36.insert(ContractSettlMonth_36.getString());
  FIX::CountryOfIssue CountryOfIssue_36("COUNTRY_1844094892");
  msg.set(CountryOfIssue_36);
  Instrument_36.insert(CountryOfIssue_36.getString());
  FIX::CouponPaymentDate CouponPaymentDate_36("LOCALMKTDATE_764410193");
  msg.set(CouponPaymentDate_36);
  Instrument_36.insert(CouponPaymentDate_36.getString());
  FIX::CouponRate CouponRate_36;
  CouponRate_36.setString("83.430000");
  msg.set(CouponRate_36);
  Instrument_36.insert(CouponRate_36.getString());
  FIX::CreditRating CreditRating_36("STRING_877725549");
  msg.set(CreditRating_36);
  Instrument_36.insert(CreditRating_36.getString());
  FIX::DatedDate DatedDate_36("LOCALMKTDATE_1260288463");
  msg.set(DatedDate_36);
  Instrument_36.insert(DatedDate_36.getString());
  FIX::DetachmentPoint DetachmentPoint_36;
  DetachmentPoint_36.setString("36.680000");
  msg.set(DetachmentPoint_36);
  Instrument_36.insert(DetachmentPoint_36.getString());
  FIX::EncodedIssuer EncodedIssuer_36("DATA_1985163042");
  msg.set(EncodedIssuer_36);
  Instrument_36.insert(EncodedIssuer_36.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_36(1285975799);
  msg.set(EncodedIssuerLen_36);
  Instrument_36.insert(EncodedIssuerLen_36.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_36("DATA_613010599");
  msg.set(EncodedSecurityDesc_36);
  Instrument_36.insert(EncodedSecurityDesc_36.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_36(220788526);
  msg.set(EncodedSecurityDescLen_36);
  Instrument_36.insert(EncodedSecurityDescLen_36.getString());
  FIX::ExerciseStyle ExerciseStyle_36(1);
  msg.set(ExerciseStyle_36);
  Instrument_36.insert(ExerciseStyle_36.getString());
  FIX::Factor Factor_36;
  Factor_36.setString("12177340");
  msg.set(Factor_36);
  Instrument_36.insert(Factor_36.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_36(false);
  msg.set(FlexProductEligibilityIndicator_36);
  Instrument_36.insert(FlexProductEligibilityIndicator_36.getString());
  FIX::FlexibleIndicator FlexibleIndicator_36(false);
  msg.set(FlexibleIndicator_36);
  Instrument_36.insert(FlexibleIndicator_36.getString());
  FIX::FloorPrice FloorPrice_36;
  FloorPrice_36.setString("1315453");
  msg.set(FloorPrice_36);
  Instrument_36.insert(FloorPrice_36.getString());
  FIX::FlowScheduleType FlowScheduleType_36(3);
  msg.set(FlowScheduleType_36);
  Instrument_36.insert(FlowScheduleType_36.getString());
  FIX::InstrRegistry InstrRegistry_36("STRING_1814265676");
  msg.set(InstrRegistry_36);
  Instrument_36.insert(InstrRegistry_36.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_36('2');
  msg.set(InstrmtAssignmentMethod_36);
  Instrument_36.insert(InstrmtAssignmentMethod_36.getString());
  FIX::InterestAccrualDate InterestAccrualDate_36("LOCALMKTDATE_1570057443");
  msg.set(InterestAccrualDate_36);
  Instrument_36.insert(InterestAccrualDate_36.getString());
  FIX::IssueDate IssueDate_36("LOCALMKTDATE_1561288240");
  msg.set(IssueDate_36);
  Instrument_36.insert(IssueDate_36.getString());
  FIX::Issuer Issuer_36("STRING_1806630548");
  msg.set(Issuer_36);
  Instrument_36.insert(Issuer_36.getString());
  FIX::ListMethod ListMethod_36(0);
  msg.set(ListMethod_36);
  Instrument_36.insert(ListMethod_36.getString());
  FIX::LocaleOfIssue LocaleOfIssue_36("STRING_677022229");
  msg.set(LocaleOfIssue_36);
  Instrument_36.insert(LocaleOfIssue_36.getString());
  FIX::MaturityDate MaturityDate_36("LOCALMKTDATE_440011714");
  msg.set(MaturityDate_36);
  Instrument_36.insert(MaturityDate_36.getString());
  FIX::MaturityMonthYear MaturityMonthYear_36("MONTHYEAR_1985341977");
  msg.set(MaturityMonthYear_36);
  Instrument_36.insert(MaturityMonthYear_36.getString());
  FIX::MaturityTime MaturityTime_36("TZTIMEONLY_411854833");
  msg.set(MaturityTime_36);
  Instrument_36.insert(MaturityTime_36.getString());
  FIX::MinPriceIncrement MinPriceIncrement_36;
  MinPriceIncrement_36.setString("7895300");
  msg.set(MinPriceIncrement_36);
  Instrument_36.insert(MinPriceIncrement_36.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_36;
  MinPriceIncrementAmount_36.setString("9824836");
  msg.set(MinPriceIncrementAmount_36);
  Instrument_36.insert(MinPriceIncrementAmount_36.getString());
  FIX::NTPositionLimit NTPositionLimit_36(2085915270);
  msg.set(NTPositionLimit_36);
  Instrument_36.insert(NTPositionLimit_36.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_36;
  NotionalPercentageOutstanding_36.setString("79.380000");
  msg.set(NotionalPercentageOutstanding_36);
  Instrument_36.insert(NotionalPercentageOutstanding_36.getString());
  FIX::OptAttribute OptAttribute_36('3');
  msg.set(OptAttribute_36);
  Instrument_36.insert(OptAttribute_36.getString());
  FIX::OptPayoutAmount OptPayoutAmount_36;
  OptPayoutAmount_36.setString("17825265");
  msg.set(OptPayoutAmount_36);
  Instrument_36.insert(OptPayoutAmount_36.getString());
  FIX::OptPayoutType OptPayoutType_36(3);
  msg.set(OptPayoutType_36);
  Instrument_36.insert(OptPayoutType_36.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_36;
  OriginalNotionalPercentageOutstanding_36.setString("84.100000");
  msg.set(OriginalNotionalPercentageOutstanding_36);
  Instrument_36.insert(OriginalNotionalPercentageOutstanding_36.getString());
  FIX::Pool Pool_36("STRING_512768416");
  msg.set(Pool_36);
  Instrument_36.insert(Pool_36.getString());
  FIX::PositionLimit PositionLimit_36(809952947);
  msg.set(PositionLimit_36);
  Instrument_36.insert(PositionLimit_36.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_36("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_36);
  Instrument_36.insert(PriceQuoteMethod_36.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_36("STRING_350447811");
  msg.set(PriceUnitOfMeasure_36);
  Instrument_36.insert(PriceUnitOfMeasure_36.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_36;
  PriceUnitOfMeasureQty_36.setString("20959287");
  msg.set(PriceUnitOfMeasureQty_36);
  Instrument_36.insert(PriceUnitOfMeasureQty_36.getString());
  FIX::Product Product_38(6);
  msg.set(Product_38);
  Instrument_36.insert(Product_38.getString());
  FIX::ProductComplex ProductComplex_36("STRING_571236337");
  msg.set(ProductComplex_36);
  Instrument_36.insert(ProductComplex_36.getString());
  FIX::PutOrCall PutOrCall_36(1);
  msg.set(PutOrCall_36);
  Instrument_36.insert(PutOrCall_36.getString());
  FIX::RedemptionDate RedemptionDate_36("LOCALMKTDATE_1088693114");
  msg.set(RedemptionDate_36);
  Instrument_36.insert(RedemptionDate_36.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_36("STRING_1805318032");
  msg.set(RepoCollateralSecurityType_36);
  Instrument_36.insert(RepoCollateralSecurityType_36.getString());
  FIX::RepurchaseRate RepurchaseRate_36;
  RepurchaseRate_36.setString("69.600000");
  msg.set(RepurchaseRate_36);
  Instrument_36.insert(RepurchaseRate_36.getString());
  FIX::RepurchaseTerm RepurchaseTerm_36(1220238468);
  msg.set(RepurchaseTerm_36);
  Instrument_36.insert(RepurchaseTerm_36.getString());
  FIX::RestructuringType RestructuringType_36("STRING_XR");
  msg.set(RestructuringType_36);
  Instrument_36.insert(RestructuringType_36.getString());
  FIX::SecurityDesc SecurityDesc_36("STRING_730448988");
  msg.set(SecurityDesc_36);
  Instrument_36.insert(SecurityDesc_36.getString());
  FIX::SecurityExchange SecurityExchange_36("EXCHANGE_1109764691");
  msg.set(SecurityExchange_36);
  Instrument_36.insert(SecurityExchange_36.getString());
  FIX::SecurityGroup SecurityGroup_36("STRING_1000207838");
  msg.set(SecurityGroup_36);
  Instrument_36.insert(SecurityGroup_36.getString());
  FIX::SecurityID SecurityID_36("STRING_144253580");
  msg.set(SecurityID_36);
  Instrument_36.insert(SecurityID_36.getString());
  FIX::SecurityIDSource SecurityIDSource_36("STRING_K");
  msg.set(SecurityIDSource_36);
  Instrument_36.insert(SecurityIDSource_36.getString());
  FIX::SecurityStatus SecurityStatus_36("STRING_1");
  msg.set(SecurityStatus_36);
  Instrument_36.insert(SecurityStatus_36.getString());
  FIX::SecuritySubType SecuritySubType_37("STRING_821275810");
  msg.set(SecuritySubType_37);
  Instrument_36.insert(SecuritySubType_37.getString());
  FIX::SecurityType SecurityType_38("STRING_MPT");
  msg.set(SecurityType_38);
  Instrument_36.insert(SecurityType_38.getString());
  FIX::Seniority Seniority_36("STRING_SD");
  msg.set(Seniority_36);
  Instrument_36.insert(Seniority_36.getString());
  FIX::SettlMethod SettlMethod_36('P');
  msg.set(SettlMethod_36);
  Instrument_36.insert(SettlMethod_36.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_36("STRING_1998453353");
  msg.set(SettleOnOpenFlag_36);
  Instrument_36.insert(SettleOnOpenFlag_36.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_36("STRING_1487950998");
  msg.set(StateOrProvinceOfIssue_36);
  Instrument_36.insert(StateOrProvinceOfIssue_36.getString());
  FIX::StrikeCurrency StrikeCurrency_36("CHF");
  msg.set(StrikeCurrency_36);
  Instrument_36.insert(StrikeCurrency_36.getString());
  FIX::StrikeMultiplier StrikeMultiplier_36;
  StrikeMultiplier_36.setString("18063247");
  msg.set(StrikeMultiplier_36);
  Instrument_36.insert(StrikeMultiplier_36.getString());
  FIX::StrikePrice StrikePrice_36;
  StrikePrice_36.setString("8066051");
  msg.set(StrikePrice_36);
  Instrument_36.insert(StrikePrice_36.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_36(2);
  msg.set(StrikePriceBoundaryMethod_36);
  Instrument_36.insert(StrikePriceBoundaryMethod_36.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_36;
  StrikePriceBoundaryPrecision_36.setString("31.230000");
  msg.set(StrikePriceBoundaryPrecision_36);
  Instrument_36.insert(StrikePriceBoundaryPrecision_36.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_36(2);
  msg.set(StrikePriceDeterminationMethod_36);
  Instrument_36.insert(StrikePriceDeterminationMethod_36.getString());
  FIX::StrikeValue StrikeValue_36;
  StrikeValue_36.setString("11433250");
  msg.set(StrikeValue_36);
  Instrument_36.insert(StrikeValue_36.getString());
  FIX::Symbol Symbol_36("STRING_1307731554");
  msg.set(Symbol_36);
  Instrument_36.insert(Symbol_36.getString());
  FIX::SymbolSfx SymbolSfx_36("STRING_CD");
  msg.set(SymbolSfx_36);
  Instrument_36.insert(SymbolSfx_36.getString());
  FIX::TimeUnit TimeUnit_36("STRING_D");
  msg.set(TimeUnit_36);
  Instrument_36.insert(TimeUnit_36.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_36(2);
  msg.set(UnderlyingPriceDeterminationMethod_36);
  Instrument_36.insert(UnderlyingPriceDeterminationMethod_36.getString());
  FIX::UnitOfMeasure UnitOfMeasure_36("STRING_tn");
  msg.set(UnitOfMeasure_36);
  Instrument_36.insert(UnitOfMeasure_36.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_36;
  UnitOfMeasureQty_36.setString("19809944");
  msg.set(UnitOfMeasureQty_36);
  Instrument_36.insert(UnitOfMeasureQty_36.getString());
  FIX::ValuationMethod ValuationMethod_36("STRING_FUT");
  msg.set(ValuationMethod_36);
  Instrument_36.insert(ValuationMethod_36.getString());
  all_values.push_back(Instrument_36);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderCross::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_73;
    FIX::ComplexEventCondition ComplexEventCondition_73(1);
    noComplexEvents_0_0.set(ComplexEventCondition_73);
    ComplexEvents_NoComplexEvents_73.insert(ComplexEventCondition_73.getString());
    FIX::ComplexEventPrice ComplexEventPrice_73;
    ComplexEventPrice_73.setString("13401385");
    noComplexEvents_0_0.set(ComplexEventPrice_73);
    ComplexEvents_NoComplexEvents_73.insert(ComplexEventPrice_73.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_73(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_73);
    ComplexEvents_NoComplexEvents_73.insert(ComplexEventPriceBoundaryMethod_73.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_73;
    ComplexEventPriceBoundaryPrecision_73.setString("67.580000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_73);
    ComplexEvents_NoComplexEvents_73.insert(ComplexEventPriceBoundaryPrecision_73.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_73(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_73);
    ComplexEvents_NoComplexEvents_73.insert(ComplexEventPriceTimeType_73.getString());
    FIX::ComplexEventType ComplexEventType_73(4);
    noComplexEvents_0_0.set(ComplexEventType_73);
    ComplexEvents_NoComplexEvents_73.insert(ComplexEventType_73.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_73;
    ComplexOptPayoutAmount_73.setString("17718803");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_73);
    ComplexEvents_NoComplexEvents_73.insert(ComplexOptPayoutAmount_73.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_73);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_158;
      FIX::ComplexEventEndDate ComplexEventEndDate_158(FIX::UTCTIMESTAMP(13, 51, 57, 4, 92001));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_158);
      ComplexEventDates_NoComplexEventDates_158.insert(ComplexEventEndDate_158.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_158(FIX::UTCTIMESTAMP(15, 52, 54, 5, 122007));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_158);
      ComplexEventDates_NoComplexEventDates_158.insert(ComplexEventStartDate_158.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_158);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_316;
        FIX::ComplexEventEndTime ComplexEventEndTime_316(FIX::UTCTIMEONLY(11, 3, 39));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_316);
        ComplexEventTimes_NoComplexEventTimes_316.insert(ComplexEventEndTime_316.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_316(FIX::UTCTIMEONLY(12, 50, 30));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_316);
        ComplexEventTimes_NoComplexEventTimes_316.insert(ComplexEventStartTime_316.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_316);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_317;
        FIX::ComplexEventEndTime ComplexEventEndTime_317(FIX::UTCTIMEONLY(14, 27, 33));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_317);
        ComplexEventTimes_NoComplexEventTimes_317.insert(ComplexEventEndTime_317.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_317(FIX::UTCTIMEONLY(6, 24, 58));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_317);
        ComplexEventTimes_NoComplexEventTimes_317.insert(ComplexEventStartTime_317.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_317);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_159;
      FIX::ComplexEventEndDate ComplexEventEndDate_159(FIX::UTCTIMESTAMP(13, 49, 31, 21, 22012));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_159);
      ComplexEventDates_NoComplexEventDates_159.insert(ComplexEventEndDate_159.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_159(FIX::UTCTIMESTAMP(8, 22, 28, 5, 102005));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_159);
      ComplexEventDates_NoComplexEventDates_159.insert(ComplexEventStartDate_159.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_159);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_318;
        FIX::ComplexEventEndTime ComplexEventEndTime_318(FIX::UTCTIMEONLY(10, 7, 22));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_318);
        ComplexEventTimes_NoComplexEventTimes_318.insert(ComplexEventEndTime_318.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_318(FIX::UTCTIMEONLY(20, 13, 49));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_318);
        ComplexEventTimes_NoComplexEventTimes_318.insert(ComplexEventStartTime_318.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_318);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_74;
    FIX::ComplexEventCondition ComplexEventCondition_74(1);
    noComplexEvents_0_1.set(ComplexEventCondition_74);
    ComplexEvents_NoComplexEvents_74.insert(ComplexEventCondition_74.getString());
    FIX::ComplexEventPrice ComplexEventPrice_74;
    ComplexEventPrice_74.setString("14099927");
    noComplexEvents_0_1.set(ComplexEventPrice_74);
    ComplexEvents_NoComplexEvents_74.insert(ComplexEventPrice_74.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_74(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_74);
    ComplexEvents_NoComplexEvents_74.insert(ComplexEventPriceBoundaryMethod_74.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_74;
    ComplexEventPriceBoundaryPrecision_74.setString("5.990000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_74);
    ComplexEvents_NoComplexEvents_74.insert(ComplexEventPriceBoundaryPrecision_74.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_74(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_74);
    ComplexEvents_NoComplexEvents_74.insert(ComplexEventPriceTimeType_74.getString());
    FIX::ComplexEventType ComplexEventType_74(4);
    noComplexEvents_0_1.set(ComplexEventType_74);
    ComplexEvents_NoComplexEvents_74.insert(ComplexEventType_74.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_74;
    ComplexOptPayoutAmount_74.setString("13256208");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_74);
    ComplexEvents_NoComplexEvents_74.insert(ComplexOptPayoutAmount_74.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_74);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_160;
      FIX::ComplexEventEndDate ComplexEventEndDate_160(FIX::UTCTIMESTAMP(20, 10, 0, 17, 122006));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_160);
      ComplexEventDates_NoComplexEventDates_160.insert(ComplexEventEndDate_160.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_160(FIX::UTCTIMESTAMP(7, 52, 56, 5, 32014));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_160);
      ComplexEventDates_NoComplexEventDates_160.insert(ComplexEventStartDate_160.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_160);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_319;
        FIX::ComplexEventEndTime ComplexEventEndTime_319(FIX::UTCTIMEONLY(22, 25, 0));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_319);
        ComplexEventTimes_NoComplexEventTimes_319.insert(ComplexEventEndTime_319.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_319(FIX::UTCTIMEONLY(13, 5, 31));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_319);
        ComplexEventTimes_NoComplexEventTimes_319.insert(ComplexEventStartTime_319.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_319);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_320;
        FIX::ComplexEventEndTime ComplexEventEndTime_320(FIX::UTCTIMEONLY(0, 40, 23));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_320);
        ComplexEventTimes_NoComplexEventTimes_320.insert(ComplexEventEndTime_320.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_320(FIX::UTCTIMEONLY(11, 26, 1));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_320);
        ComplexEventTimes_NoComplexEventTimes_320.insert(ComplexEventStartTime_320.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_320);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_321;
        FIX::ComplexEventEndTime ComplexEventEndTime_321(FIX::UTCTIMEONLY(3, 11, 13));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_321);
        ComplexEventTimes_NoComplexEventTimes_321.insert(ComplexEventEndTime_321.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_321(FIX::UTCTIMEONLY(15, 36, 8));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_321);
        ComplexEventTimes_NoComplexEventTimes_321.insert(ComplexEventStartTime_321.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_321);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_161;
      FIX::ComplexEventEndDate ComplexEventEndDate_161(FIX::UTCTIMESTAMP(16, 5, 7, 22, 62017));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_161);
      ComplexEventDates_NoComplexEventDates_161.insert(ComplexEventEndDate_161.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_161(FIX::UTCTIMESTAMP(19, 34, 52, 9, 122003));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_161);
      ComplexEventDates_NoComplexEventDates_161.insert(ComplexEventStartDate_161.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_161);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_322;
        FIX::ComplexEventEndTime ComplexEventEndTime_322(FIX::UTCTIMEONLY(13, 8, 17));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_322);
        ComplexEventTimes_NoComplexEventTimes_322.insert(ComplexEventEndTime_322.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_322(FIX::UTCTIMEONLY(19, 36, 13));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_322);
        ComplexEventTimes_NoComplexEventTimes_322.insert(ComplexEventStartTime_322.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_322);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_162;
      FIX::ComplexEventEndDate ComplexEventEndDate_162(FIX::UTCTIMESTAMP(3, 17, 2, 23, 12000));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_162);
      ComplexEventDates_NoComplexEventDates_162.insert(ComplexEventEndDate_162.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_162(FIX::UTCTIMESTAMP(2, 50, 1, 22, 62004));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_162);
      ComplexEventDates_NoComplexEventDates_162.insert(ComplexEventStartDate_162.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_162);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_323;
        FIX::ComplexEventEndTime ComplexEventEndTime_323(FIX::UTCTIMEONLY(5, 41, 49));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_323);
        ComplexEventTimes_NoComplexEventTimes_323.insert(ComplexEventEndTime_323.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_323(FIX::UTCTIMEONLY(4, 38, 22));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_323);
        ComplexEventTimes_NoComplexEventTimes_323.insert(ComplexEventStartTime_323.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_323);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_324;
        FIX::ComplexEventEndTime ComplexEventEndTime_324(FIX::UTCTIMEONLY(15, 22, 56));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_324);
        ComplexEventTimes_NoComplexEventTimes_324.insert(ComplexEventEndTime_324.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_324(FIX::UTCTIMEONLY(6, 24, 45));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_324);
        ComplexEventTimes_NoComplexEventTimes_324.insert(ComplexEventStartTime_324.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_324);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::NewOrderCross::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_78;
    FIX::EventDate EventDate_78("LOCALMKTDATE_1344040179");
    noEvents_0_0.set(EventDate_78);
    EvntGrp_NoEvents_78.insert(EventDate_78.getString());
    FIX::EventPx EventPx_78;
    EventPx_78.setString("2064342");
    noEvents_0_0.set(EventPx_78);
    EvntGrp_NoEvents_78.insert(EventPx_78.getString());
    FIX::EventText EventText_78("STRING_1371166188");
    noEvents_0_0.set(EventText_78);
    EvntGrp_NoEvents_78.insert(EventText_78.getString());
    FIX::EventTime EventTime_78(FIX::UTCTIMESTAMP(18, 18, 14, 4, 22007));
    noEvents_0_0.set(EventTime_78);
    EvntGrp_NoEvents_78.insert(EventTime_78.getString());
    FIX::EventType EventType_78(15);
    noEvents_0_0.set(EventType_78);
    EvntGrp_NoEvents_78.insert(EventType_78.getString());
    all_values.push_back(EvntGrp_NoEvents_78);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderCross::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_67;
    FIX::InstrumentPartyID InstrumentPartyID_67("STRING_604792397");
    noInstrumentParties_0_0.set(InstrumentPartyID_67);
    InstrumentParties_NoInstrumentParties_67.insert(InstrumentPartyID_67.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_67('6');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_67);
    InstrumentParties_NoInstrumentParties_67.insert(InstrumentPartyIDSource_67.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_67(508177383);
    noInstrumentParties_0_0.set(InstrumentPartyRole_67);
    InstrumentParties_NoInstrumentParties_67.insert(InstrumentPartyRole_67.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_67);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131;
      FIX::InstrumentPartySubID InstrumentPartySubID_131("STRING_1341437582");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_131);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131.insert(InstrumentPartySubID_131.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_131(1663609012);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_131);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131.insert(InstrumentPartySubIDType_131.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132;
      FIX::InstrumentPartySubID InstrumentPartySubID_132("STRING_1267719705");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_132);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132.insert(InstrumentPartySubID_132.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_132(1017199426);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_132);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132.insert(InstrumentPartySubIDType_132.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133;
      FIX::InstrumentPartySubID InstrumentPartySubID_133("STRING_1939306230");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_133);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133.insert(InstrumentPartySubID_133.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_133(986166660);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_133);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133.insert(InstrumentPartySubIDType_133.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderCross::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_70;
    FIX::SecurityAltID SecurityAltID_70("STRING_908993749");
    noSecurityAltID_0_0.set(SecurityAltID_70);
    SecAltIDGrp_NoSecurityAltID_70.insert(SecurityAltID_70.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_70("STRING_1521959782");
    noSecurityAltID_0_0.set(SecurityAltIDSource_70);
    SecAltIDGrp_NoSecurityAltID_70.insert(SecurityAltIDSource_70.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_70);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_71;
    FIX::SecurityAltID SecurityAltID_71("STRING_1685724313");
    noSecurityAltID_0_1.set(SecurityAltID_71);
    SecAltIDGrp_NoSecurityAltID_71.insert(SecurityAltID_71.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_71("STRING_1914236608");
    noSecurityAltID_0_1.set(SecurityAltIDSource_71);
    SecAltIDGrp_NoSecurityAltID_71.insert(SecurityAltIDSource_71.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_71);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_72;
  FIX::SecurityXML SecurityXML_73("XMLDATA_820259660");
  msg.set(SecurityXML_73);
  FIX::SecurityXMLLen SecurityXMLLen_36(143955449);
  msg.set(SecurityXMLLen_36);
  FIX::SecurityXMLSchema SecurityXMLSchema_36("STRING_461233385");
  msg.set(SecurityXMLSchema_36);
  SecurityXML_72.insert(SecurityXMLSchema_36.getString());
  all_values.push_back(SecurityXML_72);

  // PegInstructions
  multiset<string> PegInstructions_3;
  FIX::PegLimitType PegLimitType_3(1);
  msg.set(PegLimitType_3);
  PegInstructions_3.insert(PegLimitType_3.getString());
  FIX::PegMoveType PegMoveType_3(0);
  msg.set(PegMoveType_3);
  PegInstructions_3.insert(PegMoveType_3.getString());
  FIX::PegOffsetType PegOffsetType_3(3);
  msg.set(PegOffsetType_3);
  PegInstructions_3.insert(PegOffsetType_3.getString());
  FIX::PegOffsetValue PegOffsetValue_3;
  PegOffsetValue_3.setString("15451673");
  msg.set(PegOffsetValue_3);
  PegInstructions_3.insert(PegOffsetValue_3.getString());
  FIX::PegPriceType PegPriceType_3(8);
  msg.set(PegPriceType_3);
  PegInstructions_3.insert(PegPriceType_3.getString());
  FIX::PegRoundDirection PegRoundDirection_3(2);
  msg.set(PegRoundDirection_3);
  PegInstructions_3.insert(PegRoundDirection_3.getString());
  FIX::PegScope PegScope_3(3);
  msg.set(PegScope_3);
  PegInstructions_3.insert(PegScope_3.getString());
  FIX::PegSecurityDesc PegSecurityDesc_3("STRING_1474869701");
  msg.set(PegSecurityDesc_3);
  PegInstructions_3.insert(PegSecurityDesc_3.getString());
  FIX::PegSecurityID PegSecurityID_3("STRING_1729250406");
  msg.set(PegSecurityID_3);
  PegInstructions_3.insert(PegSecurityID_3.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_3("STRING_1396670707");
  msg.set(PegSecurityIDSource_3);
  PegInstructions_3.insert(PegSecurityIDSource_3.getString());
  FIX::PegSymbol PegSymbol_3("STRING_1735581168");
  msg.set(PegSymbol_3);
  PegInstructions_3.insert(PegSymbol_3.getString());
  all_values.push_back(PegInstructions_3);

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::NewOrderCross::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_3;
    FIX::RootPartyID RootPartyID_3("STRING_1705950073");
    noRootPartyIDs_0_0.set(RootPartyID_3);
    RootParties_NoRootPartyIDs_3.insert(RootPartyID_3.getString());
    FIX::RootPartyIDSource RootPartyIDSource_3('1');
    noRootPartyIDs_0_0.set(RootPartyIDSource_3);
    RootParties_NoRootPartyIDs_3.insert(RootPartyIDSource_3.getString());
    FIX::RootPartyRole RootPartyRole_3(449805934);
    noRootPartyIDs_0_0.set(RootPartyRole_3);
    RootParties_NoRootPartyIDs_3.insert(RootPartyRole_3.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_3);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_7;
      FIX::RootPartySubID RootPartySubID_7("STRING_1258273377");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_7);
      RootSubParties_NoRootPartySubIDs_7.insert(RootPartySubID_7.getString());
      FIX::RootPartySubIDType RootPartySubIDType_7(1791243516);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_7);
      RootSubParties_NoRootPartySubIDs_7.insert(RootPartySubIDType_7.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_7);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_8;
      FIX::RootPartySubID RootPartySubID_8("STRING_1730252820");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_8);
      RootSubParties_NoRootPartySubIDs_8.insert(RootPartySubID_8.getString());
      FIX::RootPartySubIDType RootPartySubIDType_8(378509434);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_8);
      RootSubParties_NoRootPartySubIDs_8.insert(RootPartySubIDType_8.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_8);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_9;
      FIX::RootPartySubID RootPartySubID_9("STRING_660959295");
      noRootPartySubIDs_0_1_2.set(RootPartySubID_9);
      RootSubParties_NoRootPartySubIDs_9.insert(RootPartySubID_9.getString());
      FIX::RootPartySubIDType RootPartySubIDType_9(1522075402);
      noRootPartySubIDs_0_1_2.set(RootPartySubIDType_9);
      RootSubParties_NoRootPartySubIDs_9.insert(RootPartySubIDType_9.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_9);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_4;
    FIX::RootPartyID RootPartyID_4("STRING_1364676094");
    noRootPartyIDs_0_1.set(RootPartyID_4);
    RootParties_NoRootPartyIDs_4.insert(RootPartyID_4.getString());
    FIX::RootPartyIDSource RootPartyIDSource_4('2');
    noRootPartyIDs_0_1.set(RootPartyIDSource_4);
    RootParties_NoRootPartyIDs_4.insert(RootPartyIDSource_4.getString());
    FIX::RootPartyRole RootPartyRole_4(283585503);
    noRootPartyIDs_0_1.set(RootPartyRole_4);
    RootParties_NoRootPartyIDs_4.insert(RootPartyRole_4.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_4);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_10;
      FIX::RootPartySubID RootPartySubID_10("STRING_1974520425");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_10);
      RootSubParties_NoRootPartySubIDs_10.insert(RootPartySubID_10.getString());
      FIX::RootPartySubIDType RootPartySubIDType_10(50338463);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_10);
      RootSubParties_NoRootPartySubIDs_10.insert(RootPartySubIDType_10.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_10);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_11;
      FIX::RootPartySubID RootPartySubID_11("STRING_1559411889");
      noRootPartySubIDs_1_1_1.set(RootPartySubID_11);
      RootSubParties_NoRootPartySubIDs_11.insert(RootPartySubID_11.getString());
      FIX::RootPartySubIDType RootPartySubIDType_11(2118475874);
      noRootPartySubIDs_1_1_1.set(RootPartySubIDType_11);
      RootSubParties_NoRootPartySubIDs_11.insert(RootPartySubIDType_11.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_11);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  {
    FIX50SP2::NewOrderCross::NoRootPartyIDs noRootPartyIDs_0_2;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_5;
    FIX::RootPartyID RootPartyID_5("STRING_511571849");
    noRootPartyIDs_0_2.set(RootPartyID_5);
    RootParties_NoRootPartyIDs_5.insert(RootPartyID_5.getString());
    FIX::RootPartyIDSource RootPartyIDSource_5('1');
    noRootPartyIDs_0_2.set(RootPartyIDSource_5);
    RootParties_NoRootPartyIDs_5.insert(RootPartyIDSource_5.getString());
    FIX::RootPartyRole RootPartyRole_5(1458987854);
    noRootPartyIDs_0_2.set(RootPartyRole_5);
    RootParties_NoRootPartyIDs_5.insert(RootPartyRole_5.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_5);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_12;
      FIX::RootPartySubID RootPartySubID_12("STRING_1131096724");
      noRootPartySubIDs_2_1_0.set(RootPartySubID_12);
      RootSubParties_NoRootPartySubIDs_12.insert(RootPartySubID_12.getString());
      FIX::RootPartySubIDType RootPartySubIDType_12(278034812);
      noRootPartySubIDs_2_1_0.set(RootPartySubIDType_12);
      RootSubParties_NoRootPartySubIDs_12.insert(RootPartySubIDType_12.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_12);

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_13;
      FIX::RootPartySubID RootPartySubID_13("STRING_660284642");
      noRootPartySubIDs_2_1_1.set(RootPartySubID_13);
      RootSubParties_NoRootPartySubIDs_13.insert(RootPartySubID_13.getString());
      FIX::RootPartySubIDType RootPartySubIDType_13(270019742);
      noRootPartySubIDs_2_1_1.set(RootPartySubIDType_13);
      RootSubParties_NoRootPartySubIDs_13.insert(RootPartySubIDType_13.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_13);

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_2);
  }
  // SideCrossOrdModGrp
  // Group SideCrossOrdModGrp.NoSides
  {
    FIX50SP2::NewOrderCross::NoSides noSides_0_0;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_3;
    FIX::Account Account_16("STRING_242051400");
    noSides_0_0.set(Account_16);
    SideCrossOrdModGrp_NoSides_3.insert(Account_16.getString());
    FIX::AccountType AccountType_14(6);
    noSides_0_0.set(AccountType_14);
    SideCrossOrdModGrp_NoSides_3.insert(AccountType_14.getString());
    FIX::AcctIDSource AcctIDSource_9(1);
    noSides_0_0.set(AcctIDSource_9);
    SideCrossOrdModGrp_NoSides_3.insert(AcctIDSource_9.getString());
    FIX::AllocID AllocID_12("STRING_6752712");
    noSides_0_0.set(AllocID_12);
    SideCrossOrdModGrp_NoSides_3.insert(AllocID_12.getString());
    FIX::BookingType BookingType_11(2);
    noSides_0_0.set(BookingType_11);
    SideCrossOrdModGrp_NoSides_3.insert(BookingType_11.getString());
    FIX::BookingUnit BookingUnit_5('1');
    noSides_0_0.set(BookingUnit_5);
    SideCrossOrdModGrp_NoSides_3.insert(BookingUnit_5.getString());
    FIX::CashMargin CashMargin_5('2');
    noSides_0_0.set(CashMargin_5);
    SideCrossOrdModGrp_NoSides_3.insert(CashMargin_5.getString());
    FIX::ClOrdID ClOrdID_27("STRING_1291800682");
    noSides_0_0.set(ClOrdID_27);
    SideCrossOrdModGrp_NoSides_3.insert(ClOrdID_27.getString());
    FIX::ClOrdLinkID ClOrdLinkID_7("STRING_644681681");
    noSides_0_0.set(ClOrdLinkID_7);
    SideCrossOrdModGrp_NoSides_3.insert(ClOrdLinkID_7.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_10("STRING_4");
    noSides_0_0.set(ClearingFeeIndicator_10);
    SideCrossOrdModGrp_NoSides_3.insert(ClearingFeeIndicator_10.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_4(0);
    noSides_0_0.set(CoveredOrUncovered_4);
    SideCrossOrdModGrp_NoSides_3.insert(CoveredOrUncovered_4.getString());
    FIX::CustOrderCapacity CustOrderCapacity_8(4);
    noSides_0_0.set(CustOrderCapacity_8);
    SideCrossOrdModGrp_NoSides_3.insert(CustOrderCapacity_8.getString());
    FIX::DayBookingInst DayBookingInst_5('0');
    noSides_0_0.set(DayBookingInst_5);
    SideCrossOrdModGrp_NoSides_3.insert(DayBookingInst_5.getString());
    FIX::EncodedText EncodedText_52("DATA_249161608");
    noSides_0_0.set(EncodedText_52);
    SideCrossOrdModGrp_NoSides_3.insert(EncodedText_52.getString());
    FIX::EncodedTextLen EncodedTextLen_52(240383562);
    noSides_0_0.set(EncodedTextLen_52);
    SideCrossOrdModGrp_NoSides_3.insert(EncodedTextLen_52.getString());
    FIX::ForexReq ForexReq_5(true);
    noSides_0_0.set(ForexReq_5);
    SideCrossOrdModGrp_NoSides_3.insert(ForexReq_5.getString());
    FIX::OrderCapacity OrderCapacity_14('G');
    noSides_0_0.set(OrderCapacity_14);
    SideCrossOrdModGrp_NoSides_3.insert(OrderCapacity_14.getString());
    FIX::OrderRestrictions OrderRestrictions_11("MULTIPLECHARVALUE_2");
    noSides_0_0.set(OrderRestrictions_11);
    SideCrossOrdModGrp_NoSides_3.insert(OrderRestrictions_11.getString());
    FIX::OrigClOrdID OrigClOrdID_7("STRING_877110699");
    noSides_0_0.set(OrigClOrdID_7);
    SideCrossOrdModGrp_NoSides_3.insert(OrigClOrdID_7.getString());
    FIX::PositionEffect PositionEffect_8('C');
    noSides_0_0.set(PositionEffect_8);
    SideCrossOrdModGrp_NoSides_3.insert(PositionEffect_8.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_5(true);
    noSides_0_0.set(PreTradeAnonymity_5);
    SideCrossOrdModGrp_NoSides_3.insert(PreTradeAnonymity_5.getString());
    FIX::PreallocMethod PreallocMethod_5('1');
    noSides_0_0.set(PreallocMethod_5);
    SideCrossOrdModGrp_NoSides_3.insert(PreallocMethod_5.getString());
    FIX::QtyType QtyType_17(2);
    noSides_0_0.set(QtyType_17);
    SideCrossOrdModGrp_NoSides_3.insert(QtyType_17.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_25("STRING_2124877069");
    noSides_0_0.set(SecondaryClOrdID_25);
    SideCrossOrdModGrp_NoSides_3.insert(SecondaryClOrdID_25.getString());
    FIX::SettlCurrency SettlCurrency_14("GBP");
    noSides_0_0.set(SettlCurrency_14);
    SideCrossOrdModGrp_NoSides_3.insert(SettlCurrency_14.getString());
    FIX::Side Side_24('2');
    noSides_0_0.set(Side_24);
    SideCrossOrdModGrp_NoSides_3.insert(Side_24.getString());
    FIX::SideComplianceID SideComplianceID_3("STRING_437641943");
    noSides_0_0.set(SideComplianceID_3);
    SideCrossOrdModGrp_NoSides_3.insert(SideComplianceID_3.getString());
    FIX::SideTimeInForce SideTimeInForce_3(FIX::UTCTIMESTAMP(23, 29, 46, 8, 122016));
    noSides_0_0.set(SideTimeInForce_3);
    SideCrossOrdModGrp_NoSides_3.insert(SideTimeInForce_3.getString());
    FIX::SolicitedFlag SolicitedFlag_5(true);
    noSides_0_0.set(SolicitedFlag_5);
    SideCrossOrdModGrp_NoSides_3.insert(SolicitedFlag_5.getString());
    FIX::Text Text_52("STRING_770473147");
    noSides_0_0.set(Text_52);
    SideCrossOrdModGrp_NoSides_3.insert(Text_52.getString());
    FIX::TradeDate TradeDate_19("LOCALMKTDATE_1492060665");
    noSides_0_0.set(TradeDate_19);
    SideCrossOrdModGrp_NoSides_3.insert(TradeDate_19.getString());
    FIX::TradeOriginationDate TradeOriginationDate_11("LOCALMKTDATE_1267190596");
    noSides_0_0.set(TradeOriginationDate_11);
    SideCrossOrdModGrp_NoSides_3.insert(TradeOriginationDate_11.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_3);

    // CommissionData
    multiset<string> CommissionData_12;
    FIX::CommCurrency CommCurrency_12("USD");
    noSides_0_0.set(CommCurrency_12);
    CommissionData_12.insert(CommCurrency_12.getString());
    FIX::CommType CommType_12('1');
    noSides_0_0.set(CommType_12);
    CommissionData_12.insert(CommType_12.getString());
    FIX::Commission Commission_12;
    Commission_12.setString("2908622");
    noSides_0_0.set(Commission_12);
    CommissionData_12.insert(Commission_12.getString());
    FIX::FundRenewWaiv FundRenewWaiv_12('N');
    noSides_0_0.set(FundRenewWaiv_12);
    CommissionData_12.insert(FundRenewWaiv_12.getString());
    all_values.push_back(CommissionData_12);

    // OrderQtyData
    multiset<string> OrderQtyData_10;
    FIX::CashOrderQty CashOrderQty_10;
    CashOrderQty_10.setString("2434384");
    noSides_0_0.set(CashOrderQty_10);
    OrderQtyData_10.insert(CashOrderQty_10.getString());
    FIX::OrderPercent OrderPercent_10;
    OrderPercent_10.setString("58.570000");
    noSides_0_0.set(OrderPercent_10);
    OrderQtyData_10.insert(OrderPercent_10.getString());
    FIX::OrderQty OrderQty_19;
    OrderQty_19.setString("12562472");
    noSides_0_0.set(OrderQty_19);
    OrderQtyData_10.insert(OrderQty_19.getString());
    FIX::RoundingDirection RoundingDirection_10('0');
    noSides_0_0.set(RoundingDirection_10);
    OrderQtyData_10.insert(RoundingDirection_10.getString());
    FIX::RoundingModulus RoundingModulus_10;
    RoundingModulus_10.setString("15107816");
    noSides_0_0.set(RoundingModulus_10);
    OrderQtyData_10.insert(RoundingModulus_10.getString());
    all_values.push_back(OrderQtyData_10);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_69;
      FIX::PartyID PartyID_69("STRING_1359271095");
      noPartyIDs_0_1_0.set(PartyID_69);
      Parties_NoPartyIDs_69.insert(PartyID_69.getString());
      FIX::PartyIDSource PartyIDSource_69('B');
      noPartyIDs_0_1_0.set(PartyIDSource_69);
      Parties_NoPartyIDs_69.insert(PartyIDSource_69.getString());
      FIX::PartyRole PartyRole_69(42);
      noPartyIDs_0_1_0.set(PartyRole_69);
      Parties_NoPartyIDs_69.insert(PartyRole_69.getString());
      all_values.push_back(Parties_NoPartyIDs_69);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_136;
        FIX::PartySubID PartySubID_136("STRING_1879639102");
        noPartySubIDs_0_0_2_0.set(PartySubID_136);
        PtysSubGrp_NoPartySubIDs_136.insert(PartySubID_136.getString());
        FIX::PartySubIDType PartySubIDType_136(11);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_136);
        PtysSubGrp_NoPartySubIDs_136.insert(PartySubIDType_136.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_136);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_137;
        FIX::PartySubID PartySubID_137("STRING_432858135");
        noPartySubIDs_0_0_2_1.set(PartySubID_137);
        PtysSubGrp_NoPartySubIDs_137.insert(PartySubID_137.getString());
        FIX::PartySubIDType PartySubIDType_137(3);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_137);
        PtysSubGrp_NoPartySubIDs_137.insert(PartySubIDType_137.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_137);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_8;
      FIX::AllocAccount AllocAccount_20("STRING_1219556041");
      noAllocs_0_1_0.set(AllocAccount_20);
      PreAllocGrp_NoAllocs_8.insert(AllocAccount_20.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_20(71671838);
      noAllocs_0_1_0.set(AllocAcctIDSource_20);
      PreAllocGrp_NoAllocs_8.insert(AllocAcctIDSource_20.getString());
      FIX::AllocQty AllocQty_19;
      AllocQty_19.setString("14742891");
      noAllocs_0_1_0.set(AllocQty_19);
      PreAllocGrp_NoAllocs_8.insert(AllocQty_19.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_15("GBP");
      noAllocs_0_1_0.set(AllocSettlCurrency_15);
      PreAllocGrp_NoAllocs_8.insert(AllocSettlCurrency_15.getString());
      FIX::IndividualAllocID IndividualAllocID_20("STRING_710870318");
      noAllocs_0_1_0.set(IndividualAllocID_20);
      PreAllocGrp_NoAllocs_8.insert(IndividualAllocID_20.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_8);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_60;
        FIX::NestedPartyID NestedPartyID_60("STRING_944778440");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_60);
        NestedParties_NoNestedPartyIDs_60.insert(NestedPartyID_60.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_60('1');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_60);
        NestedParties_NoNestedPartyIDs_60.insert(NestedPartyIDSource_60.getString());
        FIX::NestedPartyRole NestedPartyRole_60(480900734);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_60);
        NestedParties_NoNestedPartyIDs_60.insert(NestedPartyRole_60.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_60);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_115;
          FIX::NestedPartySubID NestedPartySubID_115("STRING_749014645");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_115);
          NstdPtysSubGrp_NoNestedPartySubIDs_115.insert(NestedPartySubID_115.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_115(2073279914);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_115);
          NstdPtysSubGrp_NoNestedPartySubIDs_115.insert(NestedPartySubIDType_115.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_115);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_116;
          FIX::NestedPartySubID NestedPartySubID_116("STRING_58762190");
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubID_116);
          NstdPtysSubGrp_NoNestedPartySubIDs_116.insert(NestedPartySubID_116.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_116(1039876941);
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubIDType_116);
          NstdPtysSubGrp_NoNestedPartySubIDs_116.insert(NestedPartySubIDType_116.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_116);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_61;
        FIX::NestedPartyID NestedPartyID_61("STRING_131969608");
        noNestedPartyIDs_0_0_2_1.set(NestedPartyID_61);
        NestedParties_NoNestedPartyIDs_61.insert(NestedPartyID_61.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_61('3');
        noNestedPartyIDs_0_0_2_1.set(NestedPartyIDSource_61);
        NestedParties_NoNestedPartyIDs_61.insert(NestedPartyIDSource_61.getString());
        FIX::NestedPartyRole NestedPartyRole_61(1571122798);
        noNestedPartyIDs_0_0_2_1.set(NestedPartyRole_61);
        NestedParties_NoNestedPartyIDs_61.insert(NestedPartyRole_61.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_61);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_117;
          FIX::NestedPartySubID NestedPartySubID_117("STRING_1078386121");
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubID_117);
          NstdPtysSubGrp_NoNestedPartySubIDs_117.insert(NestedPartySubID_117.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_117(934420799);
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubIDType_117);
          NstdPtysSubGrp_NoNestedPartySubIDs_117.insert(NestedPartySubIDType_117.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_117);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_118;
          FIX::NestedPartySubID NestedPartySubID_118("STRING_1374091187");
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubID_118);
          NstdPtysSubGrp_NoNestedPartySubIDs_118.insert(NestedPartySubID_118.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_118(290173568);
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubIDType_118);
          NstdPtysSubGrp_NoNestedPartySubIDs_118.insert(NestedPartySubIDType_118.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_118);

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
    multiset<string> SideCrossOrdModGrp_NoSides_4;
    FIX::Account Account_17("STRING_689182832");
    noSides_0_1.set(Account_17);
    SideCrossOrdModGrp_NoSides_4.insert(Account_17.getString());
    FIX::AccountType AccountType_15(4);
    noSides_0_1.set(AccountType_15);
    SideCrossOrdModGrp_NoSides_4.insert(AccountType_15.getString());
    FIX::AcctIDSource AcctIDSource_10(4);
    noSides_0_1.set(AcctIDSource_10);
    SideCrossOrdModGrp_NoSides_4.insert(AcctIDSource_10.getString());
    FIX::AllocID AllocID_13("STRING_421338286");
    noSides_0_1.set(AllocID_13);
    SideCrossOrdModGrp_NoSides_4.insert(AllocID_13.getString());
    FIX::BookingType BookingType_12(2);
    noSides_0_1.set(BookingType_12);
    SideCrossOrdModGrp_NoSides_4.insert(BookingType_12.getString());
    FIX::BookingUnit BookingUnit_6('0');
    noSides_0_1.set(BookingUnit_6);
    SideCrossOrdModGrp_NoSides_4.insert(BookingUnit_6.getString());
    FIX::CashMargin CashMargin_6('1');
    noSides_0_1.set(CashMargin_6);
    SideCrossOrdModGrp_NoSides_4.insert(CashMargin_6.getString());
    FIX::ClOrdID ClOrdID_28("STRING_337911817");
    noSides_0_1.set(ClOrdID_28);
    SideCrossOrdModGrp_NoSides_4.insert(ClOrdID_28.getString());
    FIX::ClOrdLinkID ClOrdLinkID_8("STRING_101548967");
    noSides_0_1.set(ClOrdLinkID_8);
    SideCrossOrdModGrp_NoSides_4.insert(ClOrdLinkID_8.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_11("STRING_2");
    noSides_0_1.set(ClearingFeeIndicator_11);
    SideCrossOrdModGrp_NoSides_4.insert(ClearingFeeIndicator_11.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_5(0);
    noSides_0_1.set(CoveredOrUncovered_5);
    SideCrossOrdModGrp_NoSides_4.insert(CoveredOrUncovered_5.getString());
    FIX::CustOrderCapacity CustOrderCapacity_9(3);
    noSides_0_1.set(CustOrderCapacity_9);
    SideCrossOrdModGrp_NoSides_4.insert(CustOrderCapacity_9.getString());
    FIX::DayBookingInst DayBookingInst_6('2');
    noSides_0_1.set(DayBookingInst_6);
    SideCrossOrdModGrp_NoSides_4.insert(DayBookingInst_6.getString());
    FIX::EncodedText EncodedText_53("DATA_375587611");
    noSides_0_1.set(EncodedText_53);
    SideCrossOrdModGrp_NoSides_4.insert(EncodedText_53.getString());
    FIX::EncodedTextLen EncodedTextLen_53(1338694384);
    noSides_0_1.set(EncodedTextLen_53);
    SideCrossOrdModGrp_NoSides_4.insert(EncodedTextLen_53.getString());
    FIX::ForexReq ForexReq_6(false);
    noSides_0_1.set(ForexReq_6);
    SideCrossOrdModGrp_NoSides_4.insert(ForexReq_6.getString());
    FIX::OrderCapacity OrderCapacity_15('R');
    noSides_0_1.set(OrderCapacity_15);
    SideCrossOrdModGrp_NoSides_4.insert(OrderCapacity_15.getString());
    FIX::OrderRestrictions OrderRestrictions_12("MULTIPLECHARVALUE_4");
    noSides_0_1.set(OrderRestrictions_12);
    SideCrossOrdModGrp_NoSides_4.insert(OrderRestrictions_12.getString());
    FIX::OrigClOrdID OrigClOrdID_8("STRING_1164824429");
    noSides_0_1.set(OrigClOrdID_8);
    SideCrossOrdModGrp_NoSides_4.insert(OrigClOrdID_8.getString());
    FIX::PositionEffect PositionEffect_9('N');
    noSides_0_1.set(PositionEffect_9);
    SideCrossOrdModGrp_NoSides_4.insert(PositionEffect_9.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_6(false);
    noSides_0_1.set(PreTradeAnonymity_6);
    SideCrossOrdModGrp_NoSides_4.insert(PreTradeAnonymity_6.getString());
    FIX::PreallocMethod PreallocMethod_6('1');
    noSides_0_1.set(PreallocMethod_6);
    SideCrossOrdModGrp_NoSides_4.insert(PreallocMethod_6.getString());
    FIX::QtyType QtyType_18(1);
    noSides_0_1.set(QtyType_18);
    SideCrossOrdModGrp_NoSides_4.insert(QtyType_18.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_26("STRING_1877360993");
    noSides_0_1.set(SecondaryClOrdID_26);
    SideCrossOrdModGrp_NoSides_4.insert(SecondaryClOrdID_26.getString());
    FIX::SettlCurrency SettlCurrency_15("CHF");
    noSides_0_1.set(SettlCurrency_15);
    SideCrossOrdModGrp_NoSides_4.insert(SettlCurrency_15.getString());
    FIX::Side Side_25('B');
    noSides_0_1.set(Side_25);
    SideCrossOrdModGrp_NoSides_4.insert(Side_25.getString());
    FIX::SideComplianceID SideComplianceID_4("STRING_456689692");
    noSides_0_1.set(SideComplianceID_4);
    SideCrossOrdModGrp_NoSides_4.insert(SideComplianceID_4.getString());
    FIX::SideTimeInForce SideTimeInForce_4(FIX::UTCTIMESTAMP(5, 0, 8, 5, 52006));
    noSides_0_1.set(SideTimeInForce_4);
    SideCrossOrdModGrp_NoSides_4.insert(SideTimeInForce_4.getString());
    FIX::SolicitedFlag SolicitedFlag_6(false);
    noSides_0_1.set(SolicitedFlag_6);
    SideCrossOrdModGrp_NoSides_4.insert(SolicitedFlag_6.getString());
    FIX::Text Text_53("STRING_225474626");
    noSides_0_1.set(Text_53);
    SideCrossOrdModGrp_NoSides_4.insert(Text_53.getString());
    FIX::TradeDate TradeDate_20("LOCALMKTDATE_2081420319");
    noSides_0_1.set(TradeDate_20);
    SideCrossOrdModGrp_NoSides_4.insert(TradeDate_20.getString());
    FIX::TradeOriginationDate TradeOriginationDate_12("LOCALMKTDATE_1797367504");
    noSides_0_1.set(TradeOriginationDate_12);
    SideCrossOrdModGrp_NoSides_4.insert(TradeOriginationDate_12.getString());
    all_values.push_back(SideCrossOrdModGrp_NoSides_4);

    // CommissionData
    multiset<string> CommissionData_13;
    FIX::CommCurrency CommCurrency_13("USD");
    noSides_0_1.set(CommCurrency_13);
    CommissionData_13.insert(CommCurrency_13.getString());
    FIX::CommType CommType_13('4');
    noSides_0_1.set(CommType_13);
    CommissionData_13.insert(CommType_13.getString());
    FIX::Commission Commission_13;
    Commission_13.setString("5293942");
    noSides_0_1.set(Commission_13);
    CommissionData_13.insert(Commission_13.getString());
    FIX::FundRenewWaiv FundRenewWaiv_13('Y');
    noSides_0_1.set(FundRenewWaiv_13);
    CommissionData_13.insert(FundRenewWaiv_13.getString());
    all_values.push_back(CommissionData_13);

    // OrderQtyData
    multiset<string> OrderQtyData_11;
    FIX::CashOrderQty CashOrderQty_11;
    CashOrderQty_11.setString("18376724");
    noSides_0_1.set(CashOrderQty_11);
    OrderQtyData_11.insert(CashOrderQty_11.getString());
    FIX::OrderPercent OrderPercent_11;
    OrderPercent_11.setString("86.440000");
    noSides_0_1.set(OrderPercent_11);
    OrderQtyData_11.insert(OrderPercent_11.getString());
    FIX::OrderQty OrderQty_20;
    OrderQty_20.setString("3760083");
    noSides_0_1.set(OrderQty_20);
    OrderQtyData_11.insert(OrderQty_20.getString());
    FIX::RoundingDirection RoundingDirection_11('0');
    noSides_0_1.set(RoundingDirection_11);
    OrderQtyData_11.insert(RoundingDirection_11.getString());
    FIX::RoundingModulus RoundingModulus_11;
    RoundingModulus_11.setString("15402001");
    noSides_0_1.set(RoundingModulus_11);
    OrderQtyData_11.insert(RoundingModulus_11.getString());
    all_values.push_back(OrderQtyData_11);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_70;
      FIX::PartyID PartyID_70("STRING_2005581910");
      noPartyIDs_1_1_0.set(PartyID_70);
      Parties_NoPartyIDs_70.insert(PartyID_70.getString());
      FIX::PartyIDSource PartyIDSource_70('6');
      noPartyIDs_1_1_0.set(PartyIDSource_70);
      Parties_NoPartyIDs_70.insert(PartyIDSource_70.getString());
      FIX::PartyRole PartyRole_70(58);
      noPartyIDs_1_1_0.set(PartyRole_70);
      Parties_NoPartyIDs_70.insert(PartyRole_70.getString());
      all_values.push_back(Parties_NoPartyIDs_70);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_138;
        FIX::PartySubID PartySubID_138("STRING_867985197");
        noPartySubIDs_1_0_2_0.set(PartySubID_138);
        PtysSubGrp_NoPartySubIDs_138.insert(PartySubID_138.getString());
        FIX::PartySubIDType PartySubIDType_138(8);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_138);
        PtysSubGrp_NoPartySubIDs_138.insert(PartySubIDType_138.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_138);

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
      FIX::AllocAccount AllocAccount_21("STRING_1986079415");
      noAllocs_1_1_0.set(AllocAccount_21);
      PreAllocGrp_NoAllocs_9.insert(AllocAccount_21.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_21(451929051);
      noAllocs_1_1_0.set(AllocAcctIDSource_21);
      PreAllocGrp_NoAllocs_9.insert(AllocAcctIDSource_21.getString());
      FIX::AllocQty AllocQty_20;
      AllocQty_20.setString("19873307");
      noAllocs_1_1_0.set(AllocQty_20);
      PreAllocGrp_NoAllocs_9.insert(AllocQty_20.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_16("JPY");
      noAllocs_1_1_0.set(AllocSettlCurrency_16);
      PreAllocGrp_NoAllocs_9.insert(AllocSettlCurrency_16.getString());
      FIX::IndividualAllocID IndividualAllocID_21("STRING_237945260");
      noAllocs_1_1_0.set(IndividualAllocID_21);
      PreAllocGrp_NoAllocs_9.insert(IndividualAllocID_21.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_9);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_62;
        FIX::NestedPartyID NestedPartyID_62("STRING_394790364");
        noNestedPartyIDs_1_0_2_0.set(NestedPartyID_62);
        NestedParties_NoNestedPartyIDs_62.insert(NestedPartyID_62.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_62('1');
        noNestedPartyIDs_1_0_2_0.set(NestedPartyIDSource_62);
        NestedParties_NoNestedPartyIDs_62.insert(NestedPartyIDSource_62.getString());
        FIX::NestedPartyRole NestedPartyRole_62(2048039749);
        noNestedPartyIDs_1_0_2_0.set(NestedPartyRole_62);
        NestedParties_NoNestedPartyIDs_62.insert(NestedPartyRole_62.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_62);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_119;
          FIX::NestedPartySubID NestedPartySubID_119("STRING_991318366");
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubID_119);
          NstdPtysSubGrp_NoNestedPartySubIDs_119.insert(NestedPartySubID_119.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_119(1697923606);
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubIDType_119);
          NstdPtysSubGrp_NoNestedPartySubIDs_119.insert(NestedPartySubIDType_119.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_119);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_120;
          FIX::NestedPartySubID NestedPartySubID_120("STRING_947288584");
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubID_120);
          NstdPtysSubGrp_NoNestedPartySubIDs_120.insert(NestedPartySubID_120.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_120(111427112);
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubIDType_120);
          NstdPtysSubGrp_NoNestedPartySubIDs_120.insert(NestedPartySubIDType_120.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_120);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_121;
          FIX::NestedPartySubID NestedPartySubID_121("STRING_1012524755");
          noNestedPartySubIDs_1_0_0_3_2.set(NestedPartySubID_121);
          NstdPtysSubGrp_NoNestedPartySubIDs_121.insert(NestedPartySubID_121.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_121(1476682845);
          noNestedPartySubIDs_1_0_0_3_2.set(NestedPartySubIDType_121);
          NstdPtysSubGrp_NoNestedPartySubIDs_121.insert(NestedPartySubIDType_121.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_121);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_2);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_63;
        FIX::NestedPartyID NestedPartyID_63("STRING_1534580108");
        noNestedPartyIDs_1_0_2_1.set(NestedPartyID_63);
        NestedParties_NoNestedPartyIDs_63.insert(NestedPartyID_63.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_63('7');
        noNestedPartyIDs_1_0_2_1.set(NestedPartyIDSource_63);
        NestedParties_NoNestedPartyIDs_63.insert(NestedPartyIDSource_63.getString());
        FIX::NestedPartyRole NestedPartyRole_63(1197287841);
        noNestedPartyIDs_1_0_2_1.set(NestedPartyRole_63);
        NestedParties_NoNestedPartyIDs_63.insert(NestedPartyRole_63.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_63);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_122;
          FIX::NestedPartySubID NestedPartySubID_122("STRING_102349703");
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubID_122);
          NstdPtysSubGrp_NoNestedPartySubIDs_122.insert(NestedPartySubID_122.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_122(590004308);
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubIDType_122);
          NstdPtysSubGrp_NoNestedPartySubIDs_122.insert(NestedPartySubIDType_122.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_122);

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_0);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_1);
      }
      noSides_0_1.addGroup(noAllocs_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_1_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_10;
      FIX::AllocAccount AllocAccount_22("STRING_1303937666");
      noAllocs_1_1_1.set(AllocAccount_22);
      PreAllocGrp_NoAllocs_10.insert(AllocAccount_22.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_22(2107931614);
      noAllocs_1_1_1.set(AllocAcctIDSource_22);
      PreAllocGrp_NoAllocs_10.insert(AllocAcctIDSource_22.getString());
      FIX::AllocQty AllocQty_21;
      AllocQty_21.setString("17281121");
      noAllocs_1_1_1.set(AllocQty_21);
      PreAllocGrp_NoAllocs_10.insert(AllocQty_21.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_17("CAN");
      noAllocs_1_1_1.set(AllocSettlCurrency_17);
      PreAllocGrp_NoAllocs_10.insert(AllocSettlCurrency_17.getString());
      FIX::IndividualAllocID IndividualAllocID_22("STRING_448613710");
      noAllocs_1_1_1.set(IndividualAllocID_22);
      PreAllocGrp_NoAllocs_10.insert(IndividualAllocID_22.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_10);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_64;
        FIX::NestedPartyID NestedPartyID_64("STRING_1447817038");
        noNestedPartyIDs_1_1_2_0.set(NestedPartyID_64);
        NestedParties_NoNestedPartyIDs_64.insert(NestedPartyID_64.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_64('2');
        noNestedPartyIDs_1_1_2_0.set(NestedPartyIDSource_64);
        NestedParties_NoNestedPartyIDs_64.insert(NestedPartyIDSource_64.getString());
        FIX::NestedPartyRole NestedPartyRole_64(220558217);
        noNestedPartyIDs_1_1_2_0.set(NestedPartyRole_64);
        NestedParties_NoNestedPartyIDs_64.insert(NestedPartyRole_64.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_64);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_123;
          FIX::NestedPartySubID NestedPartySubID_123("STRING_470507002");
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubID_123);
          NstdPtysSubGrp_NoNestedPartySubIDs_123.insert(NestedPartySubID_123.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_123(1419350529);
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubIDType_123);
          NstdPtysSubGrp_NoNestedPartySubIDs_123.insert(NestedPartySubIDType_123.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_123);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_124;
          FIX::NestedPartySubID NestedPartySubID_124("STRING_1525609410");
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubID_124);
          NstdPtysSubGrp_NoNestedPartySubIDs_124.insert(NestedPartySubID_124.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_124(1059091064);
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubIDType_124);
          NstdPtysSubGrp_NoNestedPartySubIDs_124.insert(NestedPartySubIDType_124.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_124);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_1);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_65;
        FIX::NestedPartyID NestedPartyID_65("STRING_1814140893");
        noNestedPartyIDs_1_1_2_1.set(NestedPartyID_65);
        NestedParties_NoNestedPartyIDs_65.insert(NestedPartyID_65.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_65('4');
        noNestedPartyIDs_1_1_2_1.set(NestedPartyIDSource_65);
        NestedParties_NoNestedPartyIDs_65.insert(NestedPartyIDSource_65.getString());
        FIX::NestedPartyRole NestedPartyRole_65(959647166);
        noNestedPartyIDs_1_1_2_1.set(NestedPartyRole_65);
        NestedParties_NoNestedPartyIDs_65.insert(NestedPartyRole_65.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_65);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_125;
          FIX::NestedPartySubID NestedPartySubID_125("STRING_1426825822");
          noNestedPartySubIDs_1_1_1_3_0.set(NestedPartySubID_125);
          NstdPtysSubGrp_NoNestedPartySubIDs_125.insert(NestedPartySubID_125.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_125(510087124);
          noNestedPartySubIDs_1_1_1_3_0.set(NestedPartySubIDType_125);
          NstdPtysSubGrp_NoNestedPartySubIDs_125.insert(NestedPartySubIDType_125.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_125);

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_126;
          FIX::NestedPartySubID NestedPartySubID_126("STRING_1234210820");
          noNestedPartySubIDs_1_1_1_3_1.set(NestedPartySubID_126);
          NstdPtysSubGrp_NoNestedPartySubIDs_126.insert(NestedPartySubID_126.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_126(1538252935);
          noNestedPartySubIDs_1_1_1_3_1.set(NestedPartySubIDType_126);
          NstdPtysSubGrp_NoNestedPartySubIDs_126.insert(NestedPartySubIDType_126.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_126);

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_1);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_1);
      }
      noSides_0_1.addGroup(noAllocs_1_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_1_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_11;
      FIX::AllocAccount AllocAccount_23("STRING_1522611879");
      noAllocs_1_1_2.set(AllocAccount_23);
      PreAllocGrp_NoAllocs_11.insert(AllocAccount_23.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_23(563410017);
      noAllocs_1_1_2.set(AllocAcctIDSource_23);
      PreAllocGrp_NoAllocs_11.insert(AllocAcctIDSource_23.getString());
      FIX::AllocQty AllocQty_22;
      AllocQty_22.setString("9253493");
      noAllocs_1_1_2.set(AllocQty_22);
      PreAllocGrp_NoAllocs_11.insert(AllocQty_22.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_18("EUR");
      noAllocs_1_1_2.set(AllocSettlCurrency_18);
      PreAllocGrp_NoAllocs_11.insert(AllocSettlCurrency_18.getString());
      FIX::IndividualAllocID IndividualAllocID_23("STRING_688454243");
      noAllocs_1_1_2.set(IndividualAllocID_23);
      PreAllocGrp_NoAllocs_11.insert(IndividualAllocID_23.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_11);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_66;
        FIX::NestedPartyID NestedPartyID_66("STRING_203218519");
        noNestedPartyIDs_1_2_2_0.set(NestedPartyID_66);
        NestedParties_NoNestedPartyIDs_66.insert(NestedPartyID_66.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_66('1');
        noNestedPartyIDs_1_2_2_0.set(NestedPartyIDSource_66);
        NestedParties_NoNestedPartyIDs_66.insert(NestedPartyIDSource_66.getString());
        FIX::NestedPartyRole NestedPartyRole_66(140639415);
        noNestedPartyIDs_1_2_2_0.set(NestedPartyRole_66);
        NestedParties_NoNestedPartyIDs_66.insert(NestedPartyRole_66.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_66);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_127;
          FIX::NestedPartySubID NestedPartySubID_127("STRING_1765781716");
          noNestedPartySubIDs_1_2_0_3_0.set(NestedPartySubID_127);
          NstdPtysSubGrp_NoNestedPartySubIDs_127.insert(NestedPartySubID_127.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_127(1457524659);
          noNestedPartySubIDs_1_2_0_3_0.set(NestedPartySubIDType_127);
          NstdPtysSubGrp_NoNestedPartySubIDs_127.insert(NestedPartySubIDType_127.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_127);

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_128;
          FIX::NestedPartySubID NestedPartySubID_128("STRING_232460742");
          noNestedPartySubIDs_1_2_0_3_1.set(NestedPartySubID_128);
          NstdPtysSubGrp_NoNestedPartySubIDs_128.insert(NestedPartySubID_128.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_128(1534410882);
          noNestedPartySubIDs_1_2_0_3_1.set(NestedPartySubIDType_128);
          NstdPtysSubGrp_NoNestedPartySubIDs_128.insert(NestedPartySubIDType_128.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_128);

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_1);
        }
        noAllocs_1_1_2.addGroup(noNestedPartyIDs_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_67;
        FIX::NestedPartyID NestedPartyID_67("STRING_757858049");
        noNestedPartyIDs_1_2_2_1.set(NestedPartyID_67);
        NestedParties_NoNestedPartyIDs_67.insert(NestedPartyID_67.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_67('5');
        noNestedPartyIDs_1_2_2_1.set(NestedPartyIDSource_67);
        NestedParties_NoNestedPartyIDs_67.insert(NestedPartyIDSource_67.getString());
        FIX::NestedPartyRole NestedPartyRole_67(1754969099);
        noNestedPartyIDs_1_2_2_1.set(NestedPartyRole_67);
        NestedParties_NoNestedPartyIDs_67.insert(NestedPartyRole_67.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_67);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_129;
          FIX::NestedPartySubID NestedPartySubID_129("STRING_990177222");
          noNestedPartySubIDs_1_2_1_3_0.set(NestedPartySubID_129);
          NstdPtysSubGrp_NoNestedPartySubIDs_129.insert(NestedPartySubID_129.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_129(1026835981);
          noNestedPartySubIDs_1_2_1_3_0.set(NestedPartySubIDType_129);
          NstdPtysSubGrp_NoNestedPartySubIDs_129.insert(NestedPartySubIDType_129.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_129);

          noNestedPartyIDs_1_2_2_1.addGroup(noNestedPartySubIDs_1_2_1_3_0);
        }
        noAllocs_1_1_2.addGroup(noNestedPartyIDs_1_2_2_1);
      }
      noSides_0_1.addGroup(noAllocs_1_1_2);
    }
    msg.addGroup(noSides_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_15;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_15("GBP");
  msg.set(BenchmarkCurveCurrency_15);
  SpreadOrBenchmarkCurveData_15.insert(BenchmarkCurveCurrency_15.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_15("STRING_Euribor");
  msg.set(BenchmarkCurveName_15);
  SpreadOrBenchmarkCurveData_15.insert(BenchmarkCurveName_15.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_15("STRING_1859155418");
  msg.set(BenchmarkCurvePoint_15);
  SpreadOrBenchmarkCurveData_15.insert(BenchmarkCurvePoint_15.getString());
  FIX::BenchmarkPrice BenchmarkPrice_15;
  BenchmarkPrice_15.setString("8614318");
  msg.set(BenchmarkPrice_15);
  SpreadOrBenchmarkCurveData_15.insert(BenchmarkPrice_15.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_15(980415462);
  msg.set(BenchmarkPriceType_15);
  SpreadOrBenchmarkCurveData_15.insert(BenchmarkPriceType_15.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_15("STRING_1138497592");
  msg.set(BenchmarkSecurityID_15);
  SpreadOrBenchmarkCurveData_15.insert(BenchmarkSecurityID_15.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_15("STRING_1371518928");
  msg.set(BenchmarkSecurityIDSource_15);
  SpreadOrBenchmarkCurveData_15.insert(BenchmarkSecurityIDSource_15.getString());
  FIX::Spread Spread_15;
  Spread_15.setString("671426");
  msg.set(Spread_15);
  SpreadOrBenchmarkCurveData_15.insert(Spread_15.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_15);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::NewOrderCross::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_24;
    FIX::StipulationType StipulationType_24("STRING_STRUCT");
    noStipulations_0_0.set(StipulationType_24);
    Stipulations_NoStipulations_24.insert(StipulationType_24.getString());
    FIX::StipulationValue StipulationValue_24("STRING_630552652");
    noStipulations_0_0.set(StipulationValue_24);
    Stipulations_NoStipulations_24.insert(StipulationValue_24.getString());
    all_values.push_back(Stipulations_NoStipulations_24);

    msg.addGroup(noStipulations_0_0);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderCross::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_9;
    FIX::StrategyParameterName StrategyParameterName_9("STRING_824488905");
    noStrategyParameters_0_0.set(StrategyParameterName_9);
    StrategyParametersGrp_NoStrategyParameters_9.insert(StrategyParameterName_9.getString());
    FIX::StrategyParameterType StrategyParameterType_9(27);
    noStrategyParameters_0_0.set(StrategyParameterType_9);
    StrategyParametersGrp_NoStrategyParameters_9.insert(StrategyParameterType_9.getString());
    FIX::StrategyParameterValue StrategyParameterValue_9("STRING_2143070518");
    noStrategyParameters_0_0.set(StrategyParameterValue_9);
    StrategyParametersGrp_NoStrategyParameters_9.insert(StrategyParameterValue_9.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_9);

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_10;
    FIX::StrategyParameterName StrategyParameterName_10("STRING_1004680355");
    noStrategyParameters_0_1.set(StrategyParameterName_10);
    StrategyParametersGrp_NoStrategyParameters_10.insert(StrategyParameterName_10.getString());
    FIX::StrategyParameterType StrategyParameterType_10(3);
    noStrategyParameters_0_1.set(StrategyParameterType_10);
    StrategyParametersGrp_NoStrategyParameters_10.insert(StrategyParameterType_10.getString());
    FIX::StrategyParameterValue StrategyParameterValue_10("STRING_1987978779");
    noStrategyParameters_0_1.set(StrategyParameterValue_10);
    StrategyParametersGrp_NoStrategyParameters_10.insert(StrategyParameterValue_10.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_10);

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderCross::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_4;
    FIX::TradingSessionID TradingSessionID_35("STRING_2");
    noTradingSessions_0_0.set(TradingSessionID_35);
    TrdgSesGrp_NoTradingSessions_4.insert(TradingSessionID_35.getString());
    FIX::TradingSessionSubID TradingSessionSubID_35("STRING_1");
    noTradingSessions_0_0.set(TradingSessionSubID_35);
    TrdgSesGrp_NoTradingSessions_4.insert(TradingSessionSubID_35.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_4);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_5;
    FIX::TradingSessionID TradingSessionID_36("STRING_4");
    noTradingSessions_0_1.set(TradingSessionID_36);
    TrdgSesGrp_NoTradingSessions_5.insert(TradingSessionID_36.getString());
    FIX::TradingSessionSubID TradingSessionSubID_36("STRING_6");
    noTradingSessions_0_1.set(TradingSessionSubID_36);
    TrdgSesGrp_NoTradingSessions_5.insert(TradingSessionSubID_36.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_5);

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::NewOrderCross::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_6;
    FIX::TradingSessionID TradingSessionID_37("STRING_4");
    noTradingSessions_0_2.set(TradingSessionID_37);
    TrdgSesGrp_NoTradingSessions_6.insert(TradingSessionID_37.getString());
    FIX::TradingSessionSubID TradingSessionSubID_37("STRING_7");
    noTradingSessions_0_2.set(TradingSessionSubID_37);
    TrdgSesGrp_NoTradingSessions_6.insert(TradingSessionSubID_37.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_6);

    msg.addGroup(noTradingSessions_0_2);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_3;
  FIX::TriggerAction TriggerAction_3('3');
  msg.set(TriggerAction_3);
  TriggeringInstruction_3.insert(TriggerAction_3.getString());
  FIX::TriggerNewPrice TriggerNewPrice_3;
  TriggerNewPrice_3.setString("6006895");
  msg.set(TriggerNewPrice_3);
  TriggeringInstruction_3.insert(TriggerNewPrice_3.getString());
  FIX::TriggerNewQty TriggerNewQty_3;
  TriggerNewQty_3.setString("11112573");
  msg.set(TriggerNewQty_3);
  TriggeringInstruction_3.insert(TriggerNewQty_3.getString());
  FIX::TriggerOrderType TriggerOrderType_3('1');
  msg.set(TriggerOrderType_3);
  TriggeringInstruction_3.insert(TriggerOrderType_3.getString());
  FIX::TriggerPrice TriggerPrice_3;
  TriggerPrice_3.setString("16275255");
  msg.set(TriggerPrice_3);
  TriggeringInstruction_3.insert(TriggerPrice_3.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_3('U');
  msg.set(TriggerPriceDirection_3);
  TriggeringInstruction_3.insert(TriggerPriceDirection_3.getString());
  FIX::TriggerPriceType TriggerPriceType_3('4');
  msg.set(TriggerPriceType_3);
  TriggeringInstruction_3.insert(TriggerPriceType_3.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_3('0');
  msg.set(TriggerPriceTypeScope_3);
  TriggeringInstruction_3.insert(TriggerPriceTypeScope_3.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_3("STRING_99093466");
  msg.set(TriggerSecurityDesc_3);
  TriggeringInstruction_3.insert(TriggerSecurityDesc_3.getString());
  FIX::TriggerSecurityID TriggerSecurityID_3("STRING_588873393");
  msg.set(TriggerSecurityID_3);
  TriggeringInstruction_3.insert(TriggerSecurityID_3.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_3("STRING_1153950555");
  msg.set(TriggerSecurityIDSource_3);
  TriggeringInstruction_3.insert(TriggerSecurityIDSource_3.getString());
  FIX::TriggerSymbol TriggerSymbol_3("STRING_1237591058");
  msg.set(TriggerSymbol_3);
  TriggeringInstruction_3.insert(TriggerSymbol_3.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_3("STRING_1960392322");
  msg.set(TriggerTradingSessionID_3);
  TriggeringInstruction_3.insert(TriggerTradingSessionID_3.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_3("STRING_1221093190");
  msg.set(TriggerTradingSessionSubID_3);
  TriggeringInstruction_3.insert(TriggerTradingSessionSubID_3.getString());
  FIX::TriggerType TriggerType_3('3');
  msg.set(TriggerType_3);
  TriggeringInstruction_3.insert(TriggerType_3.getString());
  all_values.push_back(TriggeringInstruction_3);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderCross::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_58;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_58("DATA_1851645842");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingIssuer_58.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_58(1073990564);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingIssuerLen_58.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_58("DATA_1384044739");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingSecurityDesc_58.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_58(2095412706);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingSecurityDescLen_58.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_58;
    UnderlyingAdjustedQuantity_58.setString("10695774");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_58);
    UnderlyingInstrument_58.insert(UnderlyingAdjustedQuantity_58.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_58;
    UnderlyingAllocationPercent_58.setString("14.460000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_58);
    UnderlyingInstrument_58.insert(UnderlyingAllocationPercent_58.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_58;
    UnderlyingAttachmentPoint_58.setString("44.410000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_58);
    UnderlyingInstrument_58.insert(UnderlyingAttachmentPoint_58.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_58("STRING_910072566");
    noUnderlyings_0_0.set(UnderlyingCFICode_58);
    UnderlyingInstrument_58.insert(UnderlyingCFICode_58.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_58("STRING_1386561216");
    noUnderlyings_0_0.set(UnderlyingCPProgram_58);
    UnderlyingInstrument_58.insert(UnderlyingCPProgram_58.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_58("STRING_625746856");
    noUnderlyings_0_0.set(UnderlyingCPRegType_58);
    UnderlyingInstrument_58.insert(UnderlyingCPRegType_58.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_58;
    UnderlyingCapValue_58.setString("3688657");
    noUnderlyings_0_0.set(UnderlyingCapValue_58);
    UnderlyingInstrument_58.insert(UnderlyingCapValue_58.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_58;
    UnderlyingCashAmount_58.setString("18419219");
    noUnderlyings_0_0.set(UnderlyingCashAmount_58);
    UnderlyingInstrument_58.insert(UnderlyingCashAmount_58.getString());
    FIX::UnderlyingCashType UnderlyingCashType_58("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_58);
    UnderlyingInstrument_58.insert(UnderlyingCashType_58.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_58;
    UnderlyingContractMultiplier_58.setString("13620698");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_58);
    UnderlyingInstrument_58.insert(UnderlyingContractMultiplier_58.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_58(907657181);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_58);
    UnderlyingInstrument_58.insert(UnderlyingContractMultiplierUnit_58.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_58("COUNTRY_2072003389");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_58);
    UnderlyingInstrument_58.insert(UnderlyingCountryOfIssue_58.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_58("LOCALMKTDATE_1962759380");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_58);
    UnderlyingInstrument_58.insert(UnderlyingCouponPaymentDate_58.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_58;
    UnderlyingCouponRate_58.setString("45.630000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_58);
    UnderlyingInstrument_58.insert(UnderlyingCouponRate_58.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_58("STRING_1897660340");
    noUnderlyings_0_0.set(UnderlyingCreditRating_58);
    UnderlyingInstrument_58.insert(UnderlyingCreditRating_58.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_58("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_58);
    UnderlyingInstrument_58.insert(UnderlyingCurrency_58.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_58;
    UnderlyingCurrentValue_58.setString("16251019");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_58);
    UnderlyingInstrument_58.insert(UnderlyingCurrentValue_58.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_58;
    UnderlyingDetachmentPoint_58.setString("63.380000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_58);
    UnderlyingInstrument_58.insert(UnderlyingDetachmentPoint_58.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_58;
    UnderlyingDirtyPrice_58.setString("3579460");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_58);
    UnderlyingInstrument_58.insert(UnderlyingDirtyPrice_58.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_58;
    UnderlyingEndPrice_58.setString("664916");
    noUnderlyings_0_0.set(UnderlyingEndPrice_58);
    UnderlyingInstrument_58.insert(UnderlyingEndPrice_58.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_58;
    UnderlyingEndValue_58.setString("6228032");
    noUnderlyings_0_0.set(UnderlyingEndValue_58);
    UnderlyingInstrument_58.insert(UnderlyingEndValue_58.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_58(1595537136);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_58);
    UnderlyingInstrument_58.insert(UnderlyingExerciseStyle_58.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_58;
    UnderlyingFXRate_58.setString("20268839");
    noUnderlyings_0_0.set(UnderlyingFXRate_58);
    UnderlyingInstrument_58.insert(UnderlyingFXRate_58.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_58('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_58);
    UnderlyingInstrument_58.insert(UnderlyingFXRateCalc_58.getString());
    FIX::UnderlyingFactor UnderlyingFactor_58;
    UnderlyingFactor_58.setString("12149114");
    noUnderlyings_0_0.set(UnderlyingFactor_58);
    UnderlyingInstrument_58.insert(UnderlyingFactor_58.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_58(438956182);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_58);
    UnderlyingInstrument_58.insert(UnderlyingFlowScheduleType_58.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_58("STRING_1548058630");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_58);
    UnderlyingInstrument_58.insert(UnderlyingInstrRegistry_58.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_58("LOCALMKTDATE_141418342");
    noUnderlyings_0_0.set(UnderlyingIssueDate_58);
    UnderlyingInstrument_58.insert(UnderlyingIssueDate_58.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_58("STRING_1823000921");
    noUnderlyings_0_0.set(UnderlyingIssuer_58);
    UnderlyingInstrument_58.insert(UnderlyingIssuer_58.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_58("STRING_1495987688");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_58);
    UnderlyingInstrument_58.insert(UnderlyingLocaleOfIssue_58.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_58("LOCALMKTDATE_1210995777");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_58);
    UnderlyingInstrument_58.insert(UnderlyingMaturityDate_58.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_58("MONTHYEAR_2064242367");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_58);
    UnderlyingInstrument_58.insert(UnderlyingMaturityMonthYear_58.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_58("TZTIMEONLY_1890902129");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_58);
    UnderlyingInstrument_58.insert(UnderlyingMaturityTime_58.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_58;
    UnderlyingNotionalPercentageOutstanding_58.setString("83.430000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_58);
    UnderlyingInstrument_58.insert(UnderlyingNotionalPercentageOutstanding_58.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_58('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_58);
    UnderlyingInstrument_58.insert(UnderlyingOptAttribute_58.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_58;
    UnderlyingOriginalNotionalPercentageOutstanding_58.setString("53.370000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_58);
    UnderlyingInstrument_58.insert(UnderlyingOriginalNotionalPercentageOutstanding_58.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_58("STRING_342450460");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_58);
    UnderlyingInstrument_58.insert(UnderlyingPriceUnitOfMeasure_58.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_58;
    UnderlyingPriceUnitOfMeasureQty_58.setString("9977582");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_58);
    UnderlyingInstrument_58.insert(UnderlyingPriceUnitOfMeasureQty_58.getString());
    FIX::UnderlyingProduct UnderlyingProduct_58(1458205350);
    noUnderlyings_0_0.set(UnderlyingProduct_58);
    UnderlyingInstrument_58.insert(UnderlyingProduct_58.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_58(1704520307);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_58);
    UnderlyingInstrument_58.insert(UnderlyingPutOrCall_58.getString());
    FIX::UnderlyingPx UnderlyingPx_58;
    UnderlyingPx_58.setString("19054154");
    noUnderlyings_0_0.set(UnderlyingPx_58);
    UnderlyingInstrument_58.insert(UnderlyingPx_58.getString());
    FIX::UnderlyingQty UnderlyingQty_58;
    UnderlyingQty_58.setString("13827250");
    noUnderlyings_0_0.set(UnderlyingQty_58);
    UnderlyingInstrument_58.insert(UnderlyingQty_58.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_58("LOCALMKTDATE_1519796039");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_58);
    UnderlyingInstrument_58.insert(UnderlyingRedemptionDate_58.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_58("STRING_1776846382");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_58);
    UnderlyingInstrument_58.insert(UnderlyingRepoCollateralSecurityType_58.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_58;
    UnderlyingRepurchaseRate_58.setString("17.830000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_58);
    UnderlyingInstrument_58.insert(UnderlyingRepurchaseRate_58.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_58(815113637);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_58);
    UnderlyingInstrument_58.insert(UnderlyingRepurchaseTerm_58.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_58("STRING_2035698993");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_58);
    UnderlyingInstrument_58.insert(UnderlyingRestructuringType_58.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_58("STRING_610520064");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityDesc_58.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_58("EXCHANGE_283966328");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityExchange_58.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_58("STRING_246161423");
    noUnderlyings_0_0.set(UnderlyingSecurityID_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityID_58.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_58("STRING_677011739");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityIDSource_58.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_58("STRING_906769573");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_58);
    UnderlyingInstrument_58.insert(UnderlyingSecuritySubType_58.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_58("STRING_1841698559");
    noUnderlyings_0_0.set(UnderlyingSecurityType_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityType_58.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_58("STRING_556412087");
    noUnderlyings_0_0.set(UnderlyingSeniority_58);
    UnderlyingInstrument_58.insert(UnderlyingSeniority_58.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_58("STRING_603182361");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_58);
    UnderlyingInstrument_58.insert(UnderlyingSettlMethod_58.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_58(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_58);
    UnderlyingInstrument_58.insert(UnderlyingSettlementType_58.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_58;
    UnderlyingStartValue_58.setString("9953682");
    noUnderlyings_0_0.set(UnderlyingStartValue_58);
    UnderlyingInstrument_58.insert(UnderlyingStartValue_58.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_58("STRING_3757343");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_58);
    UnderlyingInstrument_58.insert(UnderlyingStateOrProvinceOfIssue_58.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_58("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_58);
    UnderlyingInstrument_58.insert(UnderlyingStrikeCurrency_58.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_58;
    UnderlyingStrikePrice_58.setString("14997450");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_58);
    UnderlyingInstrument_58.insert(UnderlyingStrikePrice_58.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_58("STRING_114056808");
    noUnderlyings_0_0.set(UnderlyingSymbol_58);
    UnderlyingInstrument_58.insert(UnderlyingSymbol_58.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_58("STRING_587644261");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_58);
    UnderlyingInstrument_58.insert(UnderlyingSymbolSfx_58.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_58("STRING_1243163512");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_58);
    UnderlyingInstrument_58.insert(UnderlyingTimeUnit_58.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_58("STRING_87641503");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_58);
    UnderlyingInstrument_58.insert(UnderlyingUnitOfMeasure_58.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_58;
    UnderlyingUnitOfMeasureQty_58.setString("18909641");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_58);
    UnderlyingInstrument_58.insert(UnderlyingUnitOfMeasureQty_58.getString());
    all_values.push_back(UnderlyingInstrument_58);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_114;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_114("STRING_430091964");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_114);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_114.insert(UnderlyingSecurityAltID_114.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_114("STRING_741238834");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_114);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_114.insert(UnderlyingSecurityAltIDSource_114.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_114);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_115;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_115("STRING_923050551");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_115);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_115.insert(UnderlyingSecurityAltID_115.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_115("STRING_2134612271");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_115);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_115.insert(UnderlyingSecurityAltIDSource_115.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_115);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_116;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_116("STRING_499170653");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_116);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_116.insert(UnderlyingSecurityAltID_116.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_116("STRING_158291994");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_116);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_116.insert(UnderlyingSecurityAltIDSource_116.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_116);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_114;
      FIX::UnderlyingStipType UnderlyingStipType_114("STRING_128533387");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_114);
      UnderlyingStipulations_NoUnderlyingStips_114.insert(UnderlyingStipType_114.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_114("STRING_1291193778");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_114);
      UnderlyingStipulations_NoUnderlyingStips_114.insert(UnderlyingStipValue_114.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_114);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_118;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_118("STRING_16748732");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_118);
      UndlyInstrumentParties_NoUndlyInstrumentParties_118.insert(UnderlyingInstrumentPartyID_118.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_118('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_118);
      UndlyInstrumentParties_NoUndlyInstrumentParties_118.insert(UnderlyingInstrumentPartyIDSource_118.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_118(458520980);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_118);
      UndlyInstrumentParties_NoUndlyInstrumentParties_118.insert(UnderlyingInstrumentPartyRole_118.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_118);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_227("STRING_431241933");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_227);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227.insert(UnderlyingInstrumentPartySubID_227.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_227(1365290554);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_227);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227.insert(UnderlyingInstrumentPartySubIDType_227.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_228("STRING_2104608714");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_228);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228.insert(UnderlyingInstrumentPartySubID_228.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_228(987654021);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_228);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228.insert(UnderlyingInstrumentPartySubIDType_228.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_10;
  FIX::Yield Yield_10;
  Yield_10.setString("29.150000");
  msg.set(Yield_10);
  YieldData_10.insert(Yield_10.getString());
  FIX::YieldCalcDate YieldCalcDate_10("LOCALMKTDATE_866251403");
  msg.set(YieldCalcDate_10);
  YieldData_10.insert(YieldCalcDate_10.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_10("LOCALMKTDATE_1983022290");
  msg.set(YieldRedemptionDate_10);
  YieldData_10.insert(YieldRedemptionDate_10.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_10;
  YieldRedemptionPrice_10.setString("19722302");
  msg.set(YieldRedemptionPrice_10);
  YieldData_10.insert(YieldRedemptionPrice_10.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_10(1916796083);
  msg.set(YieldRedemptionPriceType_10);
  YieldData_10.insert(YieldRedemptionPriceType_10.getString());
  FIX::YieldType YieldType_10("STRING_WORST");
  msg.set(YieldType_10);
  YieldData_10.insert(YieldType_10.getString());
  all_values.push_back(YieldData_10);


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
