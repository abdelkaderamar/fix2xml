#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/ExecutionAcknowledgement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ExecutionAcknowledgement, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ExecutionAcknowledgement msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ExecutionAcknowledgement_0;
  FIX::AvgPx AvgPx_4;
  AvgPx_4.setString("12418297");
  msg.set(AvgPx_4);
  ExecutionAcknowledgement_0.insert(AvgPx_4.getString());
  FIX::ClOrdID ClOrdID_21("STRING_854727783");
  msg.set(ClOrdID_21);
  ExecutionAcknowledgement_0.insert(ClOrdID_21.getString());
  FIX::CumQty CumQty_0;
  CumQty_0.setString("10603703");
  msg.set(CumQty_0);
  ExecutionAcknowledgement_0.insert(CumQty_0.getString());
  FIX::DKReason DKReason_1('B');
  msg.set(DKReason_1);
  ExecutionAcknowledgement_0.insert(DKReason_1.getString());
  FIX::EncodedText EncodedText_38("DATA_1479563785");
  msg.set(EncodedText_38);
  ExecutionAcknowledgement_0.insert(EncodedText_38.getString());
  FIX::EncodedTextLen EncodedTextLen_38(954237285);
  msg.set(EncodedTextLen_38);
  ExecutionAcknowledgement_0.insert(EncodedTextLen_38.getString());
  FIX::ExecAckStatus ExecAckStatus_0('0');
  msg.set(ExecAckStatus_0);
  ExecutionAcknowledgement_0.insert(ExecAckStatus_0.getString());
  FIX::ExecID ExecID_22("STRING_1110364392");
  msg.set(ExecID_22);
  ExecutionAcknowledgement_0.insert(ExecID_22.getString());
  FIX::LastParPx LastParPx_6;
  LastParPx_6.setString("10197112");
  msg.set(LastParPx_6);
  ExecutionAcknowledgement_0.insert(LastParPx_6.getString());
  FIX::LastPx LastPx_7;
  LastPx_7.setString("3937945");
  msg.set(LastPx_7);
  ExecutionAcknowledgement_0.insert(LastPx_7.getString());
  FIX::LastQty LastQty_7;
  LastQty_7.setString("12159758");
  msg.set(LastQty_7);
  ExecutionAcknowledgement_0.insert(LastQty_7.getString());
  FIX::OrderID OrderID_20("STRING_1825997759");
  msg.set(OrderID_20);
  ExecutionAcknowledgement_0.insert(OrderID_20.getString());
  FIX::PriceType PriceType_19(7);
  msg.set(PriceType_19);
  ExecutionAcknowledgement_0.insert(PriceType_19.getString());
  FIX::SecondaryOrderID SecondaryOrderID_17("STRING_1867134090");
  msg.set(SecondaryOrderID_17);
  ExecutionAcknowledgement_0.insert(SecondaryOrderID_17.getString());
  FIX::Side Side_20('9');
  msg.set(Side_20);
  ExecutionAcknowledgement_0.insert(Side_20.getString());
  FIX::Text Text_38("STRING_961914869");
  msg.set(Text_38);
  ExecutionAcknowledgement_0.insert(Text_38.getString());
  all_values.push_back(ExecutionAcknowledgement_0);

  all_compo_names.insert("ExecutionAcknowledgement");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::ExecutionAcknowledgement::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_44;
    FIX::EncodedLegIssuer EncodedLegIssuer_44("DATA_532975374");
    noLegs_0_0.set(EncodedLegIssuer_44);
    InstrumentLeg_44.insert(EncodedLegIssuer_44.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_44(2088037430);
    noLegs_0_0.set(EncodedLegIssuerLen_44);
    InstrumentLeg_44.insert(EncodedLegIssuerLen_44.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_44("DATA_1015373499");
    noLegs_0_0.set(EncodedLegSecurityDesc_44);
    InstrumentLeg_44.insert(EncodedLegSecurityDesc_44.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_44(298326067);
    noLegs_0_0.set(EncodedLegSecurityDescLen_44);
    InstrumentLeg_44.insert(EncodedLegSecurityDescLen_44.getString());
    FIX::LegCFICode LegCFICode_44("STRING_383387322");
    noLegs_0_0.set(LegCFICode_44);
    InstrumentLeg_44.insert(LegCFICode_44.getString());
    FIX::LegContractMultiplier LegContractMultiplier_44;
    LegContractMultiplier_44.setString("6115460");
    noLegs_0_0.set(LegContractMultiplier_44);
    InstrumentLeg_44.insert(LegContractMultiplier_44.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_44(597276998);
    noLegs_0_0.set(LegContractMultiplierUnit_44);
    InstrumentLeg_44.insert(LegContractMultiplierUnit_44.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_44("MONTHYEAR_826919408");
    noLegs_0_0.set(LegContractSettlMonth_44);
    InstrumentLeg_44.insert(LegContractSettlMonth_44.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_44("COUNTRY_431301166");
    noLegs_0_0.set(LegCountryOfIssue_44);
    InstrumentLeg_44.insert(LegCountryOfIssue_44.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_44("LOCALMKTDATE_1472000613");
    noLegs_0_0.set(LegCouponPaymentDate_44);
    InstrumentLeg_44.insert(LegCouponPaymentDate_44.getString());
    FIX::LegCouponRate LegCouponRate_44;
    LegCouponRate_44.setString("0.010000");
    noLegs_0_0.set(LegCouponRate_44);
    InstrumentLeg_44.insert(LegCouponRate_44.getString());
    FIX::LegCreditRating LegCreditRating_44("STRING_1570693072");
    noLegs_0_0.set(LegCreditRating_44);
    InstrumentLeg_44.insert(LegCreditRating_44.getString());
    FIX::LegCurrency LegCurrency_44("EUR");
    noLegs_0_0.set(LegCurrency_44);
    InstrumentLeg_44.insert(LegCurrency_44.getString());
    FIX::LegDatedDate LegDatedDate_44("LOCALMKTDATE_665039146");
    noLegs_0_0.set(LegDatedDate_44);
    InstrumentLeg_44.insert(LegDatedDate_44.getString());
    FIX::LegExerciseStyle LegExerciseStyle_44(1200550135);
    noLegs_0_0.set(LegExerciseStyle_44);
    InstrumentLeg_44.insert(LegExerciseStyle_44.getString());
    FIX::LegFactor LegFactor_44;
    LegFactor_44.setString("1656589");
    noLegs_0_0.set(LegFactor_44);
    InstrumentLeg_44.insert(LegFactor_44.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_44(63170718);
    noLegs_0_0.set(LegFlowScheduleType_44);
    InstrumentLeg_44.insert(LegFlowScheduleType_44.getString());
    FIX::LegInstrRegistry LegInstrRegistry_44("STRING_532630273");
    noLegs_0_0.set(LegInstrRegistry_44);
    InstrumentLeg_44.insert(LegInstrRegistry_44.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_44("LOCALMKTDATE_1119896256");
    noLegs_0_0.set(LegInterestAccrualDate_44);
    InstrumentLeg_44.insert(LegInterestAccrualDate_44.getString());
    FIX::LegIssueDate LegIssueDate_44("LOCALMKTDATE_1468115835");
    noLegs_0_0.set(LegIssueDate_44);
    InstrumentLeg_44.insert(LegIssueDate_44.getString());
    FIX::LegIssuer LegIssuer_44("STRING_1642994665");
    noLegs_0_0.set(LegIssuer_44);
    InstrumentLeg_44.insert(LegIssuer_44.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_44("STRING_2139607554");
    noLegs_0_0.set(LegLocaleOfIssue_44);
    InstrumentLeg_44.insert(LegLocaleOfIssue_44.getString());
    FIX::LegMaturityDate LegMaturityDate_44("LOCALMKTDATE_1861910398");
    noLegs_0_0.set(LegMaturityDate_44);
    InstrumentLeg_44.insert(LegMaturityDate_44.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_44("MONTHYEAR_711486883");
    noLegs_0_0.set(LegMaturityMonthYear_44);
    InstrumentLeg_44.insert(LegMaturityMonthYear_44.getString());
    FIX::LegMaturityTime LegMaturityTime_44("TZTIMEONLY_1818121665");
    noLegs_0_0.set(LegMaturityTime_44);
    InstrumentLeg_44.insert(LegMaturityTime_44.getString());
    FIX::LegOptAttribute LegOptAttribute_44('7');
    noLegs_0_0.set(LegOptAttribute_44);
    InstrumentLeg_44.insert(LegOptAttribute_44.getString());
    FIX::LegOptionRatio LegOptionRatio_44;
    LegOptionRatio_44.setString("4311373");
    noLegs_0_0.set(LegOptionRatio_44);
    InstrumentLeg_44.insert(LegOptionRatio_44.getString());
    FIX::LegPool LegPool_44("STRING_457225578");
    noLegs_0_0.set(LegPool_44);
    InstrumentLeg_44.insert(LegPool_44.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_44("STRING_1041857744");
    noLegs_0_0.set(LegPriceUnitOfMeasure_44);
    InstrumentLeg_44.insert(LegPriceUnitOfMeasure_44.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_44;
    LegPriceUnitOfMeasureQty_44.setString("7571996");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_44);
    InstrumentLeg_44.insert(LegPriceUnitOfMeasureQty_44.getString());
    FIX::LegProduct LegProduct_44(990200952);
    noLegs_0_0.set(LegProduct_44);
    InstrumentLeg_44.insert(LegProduct_44.getString());
    FIX::LegPutOrCall LegPutOrCall_44(982411526);
    noLegs_0_0.set(LegPutOrCall_44);
    InstrumentLeg_44.insert(LegPutOrCall_44.getString());
    FIX::LegRatioQty LegRatioQty_44;
    LegRatioQty_44.setString("17725731");
    noLegs_0_0.set(LegRatioQty_44);
    InstrumentLeg_44.insert(LegRatioQty_44.getString());
    FIX::LegRedemptionDate LegRedemptionDate_44("LOCALMKTDATE_1288527019");
    noLegs_0_0.set(LegRedemptionDate_44);
    InstrumentLeg_44.insert(LegRedemptionDate_44.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_44("STRING_1365798848");
    noLegs_0_0.set(LegRepoCollateralSecurityType_44);
    InstrumentLeg_44.insert(LegRepoCollateralSecurityType_44.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_44;
    LegRepurchaseRate_44.setString("55.730000");
    noLegs_0_0.set(LegRepurchaseRate_44);
    InstrumentLeg_44.insert(LegRepurchaseRate_44.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_44(1885804018);
    noLegs_0_0.set(LegRepurchaseTerm_44);
    InstrumentLeg_44.insert(LegRepurchaseTerm_44.getString());
    FIX::LegSecurityDesc LegSecurityDesc_44("STRING_45234609");
    noLegs_0_0.set(LegSecurityDesc_44);
    InstrumentLeg_44.insert(LegSecurityDesc_44.getString());
    FIX::LegSecurityExchange LegSecurityExchange_44("EXCHANGE_667936739");
    noLegs_0_0.set(LegSecurityExchange_44);
    InstrumentLeg_44.insert(LegSecurityExchange_44.getString());
    FIX::LegSecurityID LegSecurityID_44("STRING_1210320983");
    noLegs_0_0.set(LegSecurityID_44);
    InstrumentLeg_44.insert(LegSecurityID_44.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_44("STRING_1223354610");
    noLegs_0_0.set(LegSecurityIDSource_44);
    InstrumentLeg_44.insert(LegSecurityIDSource_44.getString());
    FIX::LegSecuritySubType LegSecuritySubType_44("STRING_91146163");
    noLegs_0_0.set(LegSecuritySubType_44);
    InstrumentLeg_44.insert(LegSecuritySubType_44.getString());
    FIX::LegSecurityType LegSecurityType_44("STRING_1556143335");
    noLegs_0_0.set(LegSecurityType_44);
    InstrumentLeg_44.insert(LegSecurityType_44.getString());
    FIX::LegSide LegSide_44('3');
    noLegs_0_0.set(LegSide_44);
    InstrumentLeg_44.insert(LegSide_44.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_44("STRING_756185309");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_44);
    InstrumentLeg_44.insert(LegStateOrProvinceOfIssue_44.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_44("CHF");
    noLegs_0_0.set(LegStrikeCurrency_44);
    InstrumentLeg_44.insert(LegStrikeCurrency_44.getString());
    FIX::LegStrikePrice LegStrikePrice_44;
    LegStrikePrice_44.setString("8193560");
    noLegs_0_0.set(LegStrikePrice_44);
    InstrumentLeg_44.insert(LegStrikePrice_44.getString());
    FIX::LegSymbol LegSymbol_44("STRING_1141840096");
    noLegs_0_0.set(LegSymbol_44);
    InstrumentLeg_44.insert(LegSymbol_44.getString());
    FIX::LegSymbolSfx LegSymbolSfx_44("STRING_1614198441");
    noLegs_0_0.set(LegSymbolSfx_44);
    InstrumentLeg_44.insert(LegSymbolSfx_44.getString());
    FIX::LegTimeUnit LegTimeUnit_44("STRING_139988214");
    noLegs_0_0.set(LegTimeUnit_44);
    InstrumentLeg_44.insert(LegTimeUnit_44.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_44("STRING_637351113");
    noLegs_0_0.set(LegUnitOfMeasure_44);
    InstrumentLeg_44.insert(LegUnitOfMeasure_44.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_44;
    LegUnitOfMeasureQty_44.setString("16063223");
    noLegs_0_0.set(LegUnitOfMeasureQty_44);
    InstrumentLeg_44.insert(LegUnitOfMeasureQty_44.getString());
    all_values.push_back(InstrumentLeg_44);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_83;
      FIX::LegSecurityAltID LegSecurityAltID_83("STRING_1348837996");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_83);
      LegSecAltIDGrp_NoLegSecurityAltID_83.insert(LegSecurityAltID_83.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_83("STRING_1276960365");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_83);
      LegSecAltIDGrp_NoLegSecurityAltID_83.insert(LegSecurityAltIDSource_83.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_83);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_84;
      FIX::LegSecurityAltID LegSecurityAltID_84("STRING_2081841488");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_84);
      LegSecAltIDGrp_NoLegSecurityAltID_84.insert(LegSecurityAltID_84.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_84("STRING_1779975322");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_84);
      LegSecAltIDGrp_NoLegSecurityAltID_84.insert(LegSecurityAltIDSource_84.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_84);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_85;
      FIX::LegSecurityAltID LegSecurityAltID_85("STRING_1734185943");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_85);
      LegSecAltIDGrp_NoLegSecurityAltID_85.insert(LegSecurityAltID_85.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_85("STRING_976215584");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_85);
      LegSecAltIDGrp_NoLegSecurityAltID_85.insert(LegSecurityAltIDSource_85.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_85);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_24;
  FIX::AttachmentPoint AttachmentPoint_24;
  AttachmentPoint_24.setString("13.070000");
  msg.set(AttachmentPoint_24);
  Instrument_24.insert(AttachmentPoint_24.getString());
  FIX::CFICode CFICode_24("STRING_576903247");
  msg.set(CFICode_24);
  Instrument_24.insert(CFICode_24.getString());
  FIX::CPProgram CPProgram_24(2);
  msg.set(CPProgram_24);
  Instrument_24.insert(CPProgram_24.getString());
  FIX::CPRegType CPRegType_24("STRING_14780792");
  msg.set(CPRegType_24);
  Instrument_24.insert(CPRegType_24.getString());
  FIX::CapPrice CapPrice_24;
  CapPrice_24.setString("18654302");
  msg.set(CapPrice_24);
  Instrument_24.insert(CapPrice_24.getString());
  FIX::ContractMultiplier ContractMultiplier_24;
  ContractMultiplier_24.setString("11769423");
  msg.set(ContractMultiplier_24);
  Instrument_24.insert(ContractMultiplier_24.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_24(0);
  msg.set(ContractMultiplierUnit_24);
  Instrument_24.insert(ContractMultiplierUnit_24.getString());
  FIX::ContractSettlMonth ContractSettlMonth_24("MONTHYEAR_1603750637");
  msg.set(ContractSettlMonth_24);
  Instrument_24.insert(ContractSettlMonth_24.getString());
  FIX::CountryOfIssue CountryOfIssue_24("COUNTRY_1222176919");
  msg.set(CountryOfIssue_24);
  Instrument_24.insert(CountryOfIssue_24.getString());
  FIX::CouponPaymentDate CouponPaymentDate_24("LOCALMKTDATE_919353104");
  msg.set(CouponPaymentDate_24);
  Instrument_24.insert(CouponPaymentDate_24.getString());
  FIX::CouponRate CouponRate_24;
  CouponRate_24.setString("79.720000");
  msg.set(CouponRate_24);
  Instrument_24.insert(CouponRate_24.getString());
  FIX::CreditRating CreditRating_24("STRING_298047881");
  msg.set(CreditRating_24);
  Instrument_24.insert(CreditRating_24.getString());
  FIX::DatedDate DatedDate_24("LOCALMKTDATE_1010499267");
  msg.set(DatedDate_24);
  Instrument_24.insert(DatedDate_24.getString());
  FIX::DetachmentPoint DetachmentPoint_24;
  DetachmentPoint_24.setString("76.600000");
  msg.set(DetachmentPoint_24);
  Instrument_24.insert(DetachmentPoint_24.getString());
  FIX::EncodedIssuer EncodedIssuer_24("DATA_626691095");
  msg.set(EncodedIssuer_24);
  Instrument_24.insert(EncodedIssuer_24.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_24(1766684576);
  msg.set(EncodedIssuerLen_24);
  Instrument_24.insert(EncodedIssuerLen_24.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_24("DATA_684457483");
  msg.set(EncodedSecurityDesc_24);
  Instrument_24.insert(EncodedSecurityDesc_24.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_24(1120993280);
  msg.set(EncodedSecurityDescLen_24);
  Instrument_24.insert(EncodedSecurityDescLen_24.getString());
  FIX::ExerciseStyle ExerciseStyle_24(0);
  msg.set(ExerciseStyle_24);
  Instrument_24.insert(ExerciseStyle_24.getString());
  FIX::Factor Factor_24;
  Factor_24.setString("18262975");
  msg.set(Factor_24);
  Instrument_24.insert(Factor_24.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_24(false);
  msg.set(FlexProductEligibilityIndicator_24);
  Instrument_24.insert(FlexProductEligibilityIndicator_24.getString());
  FIX::FlexibleIndicator FlexibleIndicator_24(true);
  msg.set(FlexibleIndicator_24);
  Instrument_24.insert(FlexibleIndicator_24.getString());
  FIX::FloorPrice FloorPrice_24;
  FloorPrice_24.setString("3161650");
  msg.set(FloorPrice_24);
  Instrument_24.insert(FloorPrice_24.getString());
  FIX::FlowScheduleType FlowScheduleType_24(3);
  msg.set(FlowScheduleType_24);
  Instrument_24.insert(FlowScheduleType_24.getString());
  FIX::InstrRegistry InstrRegistry_24("STRING_432960135");
  msg.set(InstrRegistry_24);
  Instrument_24.insert(InstrRegistry_24.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_24('1');
  msg.set(InstrmtAssignmentMethod_24);
  Instrument_24.insert(InstrmtAssignmentMethod_24.getString());
  FIX::InterestAccrualDate InterestAccrualDate_24("LOCALMKTDATE_1323507138");
  msg.set(InterestAccrualDate_24);
  Instrument_24.insert(InterestAccrualDate_24.getString());
  FIX::IssueDate IssueDate_24("LOCALMKTDATE_367317975");
  msg.set(IssueDate_24);
  Instrument_24.insert(IssueDate_24.getString());
  FIX::Issuer Issuer_24("STRING_1297494715");
  msg.set(Issuer_24);
  Instrument_24.insert(Issuer_24.getString());
  FIX::ListMethod ListMethod_24(1);
  msg.set(ListMethod_24);
  Instrument_24.insert(ListMethod_24.getString());
  FIX::LocaleOfIssue LocaleOfIssue_24("STRING_1343533559");
  msg.set(LocaleOfIssue_24);
  Instrument_24.insert(LocaleOfIssue_24.getString());
  FIX::MaturityDate MaturityDate_24("LOCALMKTDATE_1687186022");
  msg.set(MaturityDate_24);
  Instrument_24.insert(MaturityDate_24.getString());
  FIX::MaturityMonthYear MaturityMonthYear_24("MONTHYEAR_1487112680");
  msg.set(MaturityMonthYear_24);
  Instrument_24.insert(MaturityMonthYear_24.getString());
  FIX::MaturityTime MaturityTime_24("TZTIMEONLY_1154677021");
  msg.set(MaturityTime_24);
  Instrument_24.insert(MaturityTime_24.getString());
  FIX::MinPriceIncrement MinPriceIncrement_24;
  MinPriceIncrement_24.setString("17019668");
  msg.set(MinPriceIncrement_24);
  Instrument_24.insert(MinPriceIncrement_24.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_24;
  MinPriceIncrementAmount_24.setString("12050592");
  msg.set(MinPriceIncrementAmount_24);
  Instrument_24.insert(MinPriceIncrementAmount_24.getString());
  FIX::NTPositionLimit NTPositionLimit_24(184135684);
  msg.set(NTPositionLimit_24);
  Instrument_24.insert(NTPositionLimit_24.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_24;
  NotionalPercentageOutstanding_24.setString("31.790000");
  msg.set(NotionalPercentageOutstanding_24);
  Instrument_24.insert(NotionalPercentageOutstanding_24.getString());
  FIX::OptAttribute OptAttribute_24('6');
  msg.set(OptAttribute_24);
  Instrument_24.insert(OptAttribute_24.getString());
  FIX::OptPayoutAmount OptPayoutAmount_24;
  OptPayoutAmount_24.setString("14063126");
  msg.set(OptPayoutAmount_24);
  Instrument_24.insert(OptPayoutAmount_24.getString());
  FIX::OptPayoutType OptPayoutType_24(2);
  msg.set(OptPayoutType_24);
  Instrument_24.insert(OptPayoutType_24.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_24;
  OriginalNotionalPercentageOutstanding_24.setString("42.610000");
  msg.set(OriginalNotionalPercentageOutstanding_24);
  Instrument_24.insert(OriginalNotionalPercentageOutstanding_24.getString());
  FIX::Pool Pool_24("STRING_1704360485");
  msg.set(Pool_24);
  Instrument_24.insert(Pool_24.getString());
  FIX::PositionLimit PositionLimit_24(1735751902);
  msg.set(PositionLimit_24);
  Instrument_24.insert(PositionLimit_24.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_24("STRING_INX");
  msg.set(PriceQuoteMethod_24);
  Instrument_24.insert(PriceQuoteMethod_24.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_24("STRING_183567932");
  msg.set(PriceUnitOfMeasure_24);
  Instrument_24.insert(PriceUnitOfMeasure_24.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_24;
  PriceUnitOfMeasureQty_24.setString("13549528");
  msg.set(PriceUnitOfMeasureQty_24);
  Instrument_24.insert(PriceUnitOfMeasureQty_24.getString());
  FIX::Product Product_26(1);
  msg.set(Product_26);
  Instrument_24.insert(Product_26.getString());
  FIX::ProductComplex ProductComplex_24("STRING_1304561212");
  msg.set(ProductComplex_24);
  Instrument_24.insert(ProductComplex_24.getString());
  FIX::PutOrCall PutOrCall_24(1);
  msg.set(PutOrCall_24);
  Instrument_24.insert(PutOrCall_24.getString());
  FIX::RedemptionDate RedemptionDate_24("LOCALMKTDATE_1766433335");
  msg.set(RedemptionDate_24);
  Instrument_24.insert(RedemptionDate_24.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_24("STRING_1892269285");
  msg.set(RepoCollateralSecurityType_24);
  Instrument_24.insert(RepoCollateralSecurityType_24.getString());
  FIX::RepurchaseRate RepurchaseRate_24;
  RepurchaseRate_24.setString("13.090000");
  msg.set(RepurchaseRate_24);
  Instrument_24.insert(RepurchaseRate_24.getString());
  FIX::RepurchaseTerm RepurchaseTerm_24(2082598379);
  msg.set(RepurchaseTerm_24);
  Instrument_24.insert(RepurchaseTerm_24.getString());
  FIX::RestructuringType RestructuringType_24("STRING_MM");
  msg.set(RestructuringType_24);
  Instrument_24.insert(RestructuringType_24.getString());
  FIX::SecurityDesc SecurityDesc_24("STRING_657531445");
  msg.set(SecurityDesc_24);
  Instrument_24.insert(SecurityDesc_24.getString());
  FIX::SecurityExchange SecurityExchange_24("EXCHANGE_1600117772");
  msg.set(SecurityExchange_24);
  Instrument_24.insert(SecurityExchange_24.getString());
  FIX::SecurityGroup SecurityGroup_24("STRING_1114839548");
  msg.set(SecurityGroup_24);
  Instrument_24.insert(SecurityGroup_24.getString());
  FIX::SecurityID SecurityID_24("STRING_1024849420");
  msg.set(SecurityID_24);
  Instrument_24.insert(SecurityID_24.getString());
  FIX::SecurityIDSource SecurityIDSource_24("STRING_A");
  msg.set(SecurityIDSource_24);
  Instrument_24.insert(SecurityIDSource_24.getString());
  FIX::SecurityStatus SecurityStatus_24("STRING_2");
  msg.set(SecurityStatus_24);
  Instrument_24.insert(SecurityStatus_24.getString());
  FIX::SecuritySubType SecuritySubType_25("STRING_220899332");
  msg.set(SecuritySubType_25);
  Instrument_24.insert(SecuritySubType_25.getString());
  FIX::SecurityType SecurityType_26("STRING_MIO");
  msg.set(SecurityType_26);
  Instrument_24.insert(SecurityType_26.getString());
  FIX::Seniority Seniority_24("STRING_SR");
  msg.set(Seniority_24);
  Instrument_24.insert(Seniority_24.getString());
  FIX::SettlMethod SettlMethod_24('P');
  msg.set(SettlMethod_24);
  Instrument_24.insert(SettlMethod_24.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_24("STRING_1991798028");
  msg.set(SettleOnOpenFlag_24);
  Instrument_24.insert(SettleOnOpenFlag_24.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_24("STRING_422253665");
  msg.set(StateOrProvinceOfIssue_24);
  Instrument_24.insert(StateOrProvinceOfIssue_24.getString());
  FIX::StrikeCurrency StrikeCurrency_24("USD");
  msg.set(StrikeCurrency_24);
  Instrument_24.insert(StrikeCurrency_24.getString());
  FIX::StrikeMultiplier StrikeMultiplier_24;
  StrikeMultiplier_24.setString("10835799");
  msg.set(StrikeMultiplier_24);
  Instrument_24.insert(StrikeMultiplier_24.getString());
  FIX::StrikePrice StrikePrice_24;
  StrikePrice_24.setString("8185409");
  msg.set(StrikePrice_24);
  Instrument_24.insert(StrikePrice_24.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_24(3);
  msg.set(StrikePriceBoundaryMethod_24);
  Instrument_24.insert(StrikePriceBoundaryMethod_24.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_24;
  StrikePriceBoundaryPrecision_24.setString("5.670000");
  msg.set(StrikePriceBoundaryPrecision_24);
  Instrument_24.insert(StrikePriceBoundaryPrecision_24.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_24(3);
  msg.set(StrikePriceDeterminationMethod_24);
  Instrument_24.insert(StrikePriceDeterminationMethod_24.getString());
  FIX::StrikeValue StrikeValue_24;
  StrikeValue_24.setString("21112184");
  msg.set(StrikeValue_24);
  Instrument_24.insert(StrikeValue_24.getString());
  FIX::Symbol Symbol_24("STRING_1667172488");
  msg.set(Symbol_24);
  Instrument_24.insert(Symbol_24.getString());
  FIX::SymbolSfx SymbolSfx_24("STRING_CD");
  msg.set(SymbolSfx_24);
  Instrument_24.insert(SymbolSfx_24.getString());
  FIX::TimeUnit TimeUnit_24("STRING_Wk");
  msg.set(TimeUnit_24);
  Instrument_24.insert(TimeUnit_24.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_24(1);
  msg.set(UnderlyingPriceDeterminationMethod_24);
  Instrument_24.insert(UnderlyingPriceDeterminationMethod_24.getString());
  FIX::UnitOfMeasure UnitOfMeasure_24("STRING_MWh");
  msg.set(UnitOfMeasure_24);
  Instrument_24.insert(UnitOfMeasure_24.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_24;
  UnitOfMeasureQty_24.setString("9647137");
  msg.set(UnitOfMeasureQty_24);
  Instrument_24.insert(UnitOfMeasureQty_24.getString());
  FIX::ValuationMethod ValuationMethod_24("STRING_FUT");
  msg.set(ValuationMethod_24);
  Instrument_24.insert(ValuationMethod_24.getString());
  all_values.push_back(Instrument_24);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::ExecutionAcknowledgement::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_50;
    FIX::ComplexEventCondition ComplexEventCondition_50(2);
    noComplexEvents_0_0.set(ComplexEventCondition_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventCondition_50.getString());
    FIX::ComplexEventPrice ComplexEventPrice_50;
    ComplexEventPrice_50.setString("11613726");
    noComplexEvents_0_0.set(ComplexEventPrice_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventPrice_50.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_50(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventPriceBoundaryMethod_50.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_50;
    ComplexEventPriceBoundaryPrecision_50.setString("65.260000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventPriceBoundaryPrecision_50.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_50(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventPriceTimeType_50.getString());
    FIX::ComplexEventType ComplexEventType_50(5);
    noComplexEvents_0_0.set(ComplexEventType_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventType_50.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_50;
    ComplexOptPayoutAmount_50.setString("7241822");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexOptPayoutAmount_50.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_50);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_102;
      FIX::ComplexEventEndDate ComplexEventEndDate_102(FIX::UTCTIMESTAMP(7, 0, 10, 20, 6, 2009));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_102);
      ComplexEventDates_NoComplexEventDates_102.insert(ComplexEventEndDate_102.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_102(FIX::UTCTIMESTAMP(21, 1, 19, 24, 9, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_102);
      ComplexEventDates_NoComplexEventDates_102.insert(ComplexEventStartDate_102.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_102);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_209;
        FIX::ComplexEventEndTime ComplexEventEndTime_209(FIX::UTCTIMEONLY(7, 27, 44));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_209);
        ComplexEventTimes_NoComplexEventTimes_209.insert(ComplexEventEndTime_209.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_209(FIX::UTCTIMEONLY(7, 55, 0));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_209);
        ComplexEventTimes_NoComplexEventTimes_209.insert(ComplexEventStartTime_209.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_209);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_210;
        FIX::ComplexEventEndTime ComplexEventEndTime_210(FIX::UTCTIMEONLY(14, 22, 31));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_210);
        ComplexEventTimes_NoComplexEventTimes_210.insert(ComplexEventEndTime_210.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_210(FIX::UTCTIMEONLY(1, 30, 55));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_210);
        ComplexEventTimes_NoComplexEventTimes_210.insert(ComplexEventStartTime_210.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_210);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_103;
      FIX::ComplexEventEndDate ComplexEventEndDate_103(FIX::UTCTIMESTAMP(1, 56, 23, 2, 6, 2012));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_103);
      ComplexEventDates_NoComplexEventDates_103.insert(ComplexEventEndDate_103.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_103(FIX::UTCTIMESTAMP(6, 24, 35, 26, 9, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_103);
      ComplexEventDates_NoComplexEventDates_103.insert(ComplexEventStartDate_103.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_103);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_211;
        FIX::ComplexEventEndTime ComplexEventEndTime_211(FIX::UTCTIMEONLY(19, 56, 17));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_211);
        ComplexEventTimes_NoComplexEventTimes_211.insert(ComplexEventEndTime_211.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_211(FIX::UTCTIMEONLY(20, 5, 44));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_211);
        ComplexEventTimes_NoComplexEventTimes_211.insert(ComplexEventStartTime_211.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_211);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_212;
        FIX::ComplexEventEndTime ComplexEventEndTime_212(FIX::UTCTIMEONLY(19, 59, 44));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_212);
        ComplexEventTimes_NoComplexEventTimes_212.insert(ComplexEventEndTime_212.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_212(FIX::UTCTIMEONLY(0, 15, 7));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_212);
        ComplexEventTimes_NoComplexEventTimes_212.insert(ComplexEventStartTime_212.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_212);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_213;
        FIX::ComplexEventEndTime ComplexEventEndTime_213(FIX::UTCTIMEONLY(8, 55, 4));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_213);
        ComplexEventTimes_NoComplexEventTimes_213.insert(ComplexEventEndTime_213.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_213(FIX::UTCTIMEONLY(4, 26, 14));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_213);
        ComplexEventTimes_NoComplexEventTimes_213.insert(ComplexEventStartTime_213.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_213);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_51;
    FIX::ComplexEventCondition ComplexEventCondition_51(1);
    noComplexEvents_0_1.set(ComplexEventCondition_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventCondition_51.getString());
    FIX::ComplexEventPrice ComplexEventPrice_51;
    ComplexEventPrice_51.setString("21280652");
    noComplexEvents_0_1.set(ComplexEventPrice_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventPrice_51.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_51(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventPriceBoundaryMethod_51.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_51;
    ComplexEventPriceBoundaryPrecision_51.setString("36.170000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventPriceBoundaryPrecision_51.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_51(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventPriceTimeType_51.getString());
    FIX::ComplexEventType ComplexEventType_51(4);
    noComplexEvents_0_1.set(ComplexEventType_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventType_51.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_51;
    ComplexOptPayoutAmount_51.setString("18589679");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexOptPayoutAmount_51.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_51);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_104;
      FIX::ComplexEventEndDate ComplexEventEndDate_104(FIX::UTCTIMESTAMP(22, 57, 16, 6, 3, 2017));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_104);
      ComplexEventDates_NoComplexEventDates_104.insert(ComplexEventEndDate_104.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_104(FIX::UTCTIMESTAMP(21, 52, 32, 9, 9, 2011));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_104);
      ComplexEventDates_NoComplexEventDates_104.insert(ComplexEventStartDate_104.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_104);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_214;
        FIX::ComplexEventEndTime ComplexEventEndTime_214(FIX::UTCTIMEONLY(11, 48, 57));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_214);
        ComplexEventTimes_NoComplexEventTimes_214.insert(ComplexEventEndTime_214.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_214(FIX::UTCTIMEONLY(17, 23, 52));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_214);
        ComplexEventTimes_NoComplexEventTimes_214.insert(ComplexEventStartTime_214.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_214);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_215;
        FIX::ComplexEventEndTime ComplexEventEndTime_215(FIX::UTCTIMEONLY(6, 42, 24));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_215);
        ComplexEventTimes_NoComplexEventTimes_215.insert(ComplexEventEndTime_215.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_215(FIX::UTCTIMEONLY(7, 2, 53));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_215);
        ComplexEventTimes_NoComplexEventTimes_215.insert(ComplexEventStartTime_215.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_215);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_105;
      FIX::ComplexEventEndDate ComplexEventEndDate_105(FIX::UTCTIMESTAMP(13, 42, 56, 23, 10, 2001));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_105);
      ComplexEventDates_NoComplexEventDates_105.insert(ComplexEventEndDate_105.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_105(FIX::UTCTIMESTAMP(10, 33, 23, 0, 6, 2014));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_105);
      ComplexEventDates_NoComplexEventDates_105.insert(ComplexEventStartDate_105.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_105);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_216;
        FIX::ComplexEventEndTime ComplexEventEndTime_216(FIX::UTCTIMEONLY(1, 17, 43));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_216);
        ComplexEventTimes_NoComplexEventTimes_216.insert(ComplexEventEndTime_216.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_216(FIX::UTCTIMEONLY(10, 7, 12));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_216);
        ComplexEventTimes_NoComplexEventTimes_216.insert(ComplexEventStartTime_216.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_216);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_217;
        FIX::ComplexEventEndTime ComplexEventEndTime_217(FIX::UTCTIMEONLY(17, 46, 54));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_217);
        ComplexEventTimes_NoComplexEventTimes_217.insert(ComplexEventEndTime_217.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_217(FIX::UTCTIMEONLY(17, 57, 3));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_217);
        ComplexEventTimes_NoComplexEventTimes_217.insert(ComplexEventStartTime_217.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_217);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_218;
        FIX::ComplexEventEndTime ComplexEventEndTime_218(FIX::UTCTIMEONLY(14, 37, 22));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_218);
        ComplexEventTimes_NoComplexEventTimes_218.insert(ComplexEventEndTime_218.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_218(FIX::UTCTIMEONLY(10, 3, 20));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_218);
        ComplexEventTimes_NoComplexEventTimes_218.insert(ComplexEventStartTime_218.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_218);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::ExecutionAcknowledgement::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_48;
    FIX::EventDate EventDate_48("LOCALMKTDATE_2143292917");
    noEvents_0_0.set(EventDate_48);
    EvntGrp_NoEvents_48.insert(EventDate_48.getString());
    FIX::EventPx EventPx_48;
    EventPx_48.setString("10046871");
    noEvents_0_0.set(EventPx_48);
    EvntGrp_NoEvents_48.insert(EventPx_48.getString());
    FIX::EventText EventText_48("STRING_37821377");
    noEvents_0_0.set(EventText_48);
    EvntGrp_NoEvents_48.insert(EventText_48.getString());
    FIX::EventTime EventTime_48(FIX::UTCTIMESTAMP(13, 46, 9, 23, 4, 2008));
    noEvents_0_0.set(EventTime_48);
    EvntGrp_NoEvents_48.insert(EventTime_48.getString());
    FIX::EventType EventType_48(19);
    noEvents_0_0.set(EventType_48);
    EvntGrp_NoEvents_48.insert(EventType_48.getString());
    all_values.push_back(EvntGrp_NoEvents_48);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_49;
    FIX::EventDate EventDate_49("LOCALMKTDATE_1841920106");
    noEvents_0_1.set(EventDate_49);
    EvntGrp_NoEvents_49.insert(EventDate_49.getString());
    FIX::EventPx EventPx_49;
    EventPx_49.setString("19564120");
    noEvents_0_1.set(EventPx_49);
    EvntGrp_NoEvents_49.insert(EventPx_49.getString());
    FIX::EventText EventText_49("STRING_2080268750");
    noEvents_0_1.set(EventText_49);
    EvntGrp_NoEvents_49.insert(EventText_49.getString());
    FIX::EventTime EventTime_49(FIX::UTCTIMESTAMP(0, 28, 42, 2, 11, 2013));
    noEvents_0_1.set(EventTime_49);
    EvntGrp_NoEvents_49.insert(EventTime_49.getString());
    FIX::EventType EventType_49(14);
    noEvents_0_1.set(EventType_49);
    EvntGrp_NoEvents_49.insert(EventType_49.getString());
    all_values.push_back(EvntGrp_NoEvents_49);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_42;
    FIX::InstrumentPartyID InstrumentPartyID_42("STRING_195821449");
    noInstrumentParties_0_0.set(InstrumentPartyID_42);
    InstrumentParties_NoInstrumentParties_42.insert(InstrumentPartyID_42.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_42('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_42);
    InstrumentParties_NoInstrumentParties_42.insert(InstrumentPartyIDSource_42.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_42(951547741);
    noInstrumentParties_0_0.set(InstrumentPartyRole_42);
    InstrumentParties_NoInstrumentParties_42.insert(InstrumentPartyRole_42.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_42);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86;
      FIX::InstrumentPartySubID InstrumentPartySubID_86("STRING_723221265");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_86);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86.insert(InstrumentPartySubID_86.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_86(2107212665);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_86);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86.insert(InstrumentPartySubIDType_86.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87;
      FIX::InstrumentPartySubID InstrumentPartySubID_87("STRING_1123714891");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_87);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87.insert(InstrumentPartySubID_87.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_87(1102943014);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_87);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87.insert(InstrumentPartySubIDType_87.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_43;
    FIX::InstrumentPartyID InstrumentPartyID_43("STRING_2103021934");
    noInstrumentParties_0_1.set(InstrumentPartyID_43);
    InstrumentParties_NoInstrumentParties_43.insert(InstrumentPartyID_43.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_43('2');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_43);
    InstrumentParties_NoInstrumentParties_43.insert(InstrumentPartyIDSource_43.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_43(1140764391);
    noInstrumentParties_0_1.set(InstrumentPartyRole_43);
    InstrumentParties_NoInstrumentParties_43.insert(InstrumentPartyRole_43.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_43);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88;
      FIX::InstrumentPartySubID InstrumentPartySubID_88("STRING_2021226096");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_88);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88.insert(InstrumentPartySubID_88.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_88(1448235637);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_88);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88.insert(InstrumentPartySubIDType_88.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_44;
    FIX::InstrumentPartyID InstrumentPartyID_44("STRING_1593581629");
    noInstrumentParties_0_2.set(InstrumentPartyID_44);
    InstrumentParties_NoInstrumentParties_44.insert(InstrumentPartyID_44.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_44('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_44);
    InstrumentParties_NoInstrumentParties_44.insert(InstrumentPartyIDSource_44.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_44(2105354501);
    noInstrumentParties_0_2.set(InstrumentPartyRole_44);
    InstrumentParties_NoInstrumentParties_44.insert(InstrumentPartyRole_44.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_44);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89;
      FIX::InstrumentPartySubID InstrumentPartySubID_89("STRING_1097783478");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_89);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89.insert(InstrumentPartySubID_89.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_89(1799790959);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_89);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89.insert(InstrumentPartySubIDType_89.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90;
      FIX::InstrumentPartySubID InstrumentPartySubID_90("STRING_1533374417");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_90);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90.insert(InstrumentPartySubID_90.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_90(1030568580);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_90);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90.insert(InstrumentPartySubIDType_90.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ExecutionAcknowledgement::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_43;
    FIX::SecurityAltID SecurityAltID_43("STRING_388730338");
    noSecurityAltID_0_0.set(SecurityAltID_43);
    SecAltIDGrp_NoSecurityAltID_43.insert(SecurityAltID_43.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_43("STRING_1043749709");
    noSecurityAltID_0_0.set(SecurityAltIDSource_43);
    SecAltIDGrp_NoSecurityAltID_43.insert(SecurityAltIDSource_43.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_43);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_48;
  FIX::SecurityXML SecurityXML_49("XMLDATA_77356753");
  msg.set(SecurityXML_49);
  FIX::SecurityXMLLen SecurityXMLLen_24(1711044536);
  msg.set(SecurityXMLLen_24);
  FIX::SecurityXMLSchema SecurityXMLSchema_24("STRING_268082743");
  msg.set(SecurityXMLSchema_24);
  SecurityXML_48.insert(SecurityXMLSchema_24.getString());
  all_values.push_back(SecurityXML_48);
  all_compo_names.insert("SecurityXML");

  // OrderQtyData
  multiset<string> OrderQtyData_5;
  FIX::CashOrderQty CashOrderQty_5;
  CashOrderQty_5.setString("13946927");
  msg.set(CashOrderQty_5);
  OrderQtyData_5.insert(CashOrderQty_5.getString());
  FIX::OrderPercent OrderPercent_5;
  OrderPercent_5.setString("53.620000");
  msg.set(OrderPercent_5);
  OrderQtyData_5.insert(OrderPercent_5.getString());
  FIX::OrderQty OrderQty_15;
  OrderQty_15.setString("17284175");
  msg.set(OrderQty_15);
  OrderQtyData_5.insert(OrderQty_15.getString());
  FIX::RoundingDirection RoundingDirection_5('1');
  msg.set(RoundingDirection_5);
  OrderQtyData_5.insert(RoundingDirection_5.getString());
  FIX::RoundingModulus RoundingModulus_5;
  RoundingModulus_5.setString("18335982");
  msg.set(RoundingModulus_5);
  OrderQtyData_5.insert(RoundingModulus_5.getString());
  all_values.push_back(OrderQtyData_5);
  all_compo_names.insert("OrderQtyData");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ExecutionAcknowledgement::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_40;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_40("DATA_850441245");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_40);
    UnderlyingInstrument_40.insert(EncodedUnderlyingIssuer_40.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_40(409335890);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_40);
    UnderlyingInstrument_40.insert(EncodedUnderlyingIssuerLen_40.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_40("DATA_492210681");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_40);
    UnderlyingInstrument_40.insert(EncodedUnderlyingSecurityDesc_40.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_40(1974156137);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_40);
    UnderlyingInstrument_40.insert(EncodedUnderlyingSecurityDescLen_40.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_40;
    UnderlyingAdjustedQuantity_40.setString("15122789");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_40);
    UnderlyingInstrument_40.insert(UnderlyingAdjustedQuantity_40.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_40;
    UnderlyingAllocationPercent_40.setString("89.670000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_40);
    UnderlyingInstrument_40.insert(UnderlyingAllocationPercent_40.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_40;
    UnderlyingAttachmentPoint_40.setString("45.160000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_40);
    UnderlyingInstrument_40.insert(UnderlyingAttachmentPoint_40.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_40("STRING_505559648");
    noUnderlyings_0_0.set(UnderlyingCFICode_40);
    UnderlyingInstrument_40.insert(UnderlyingCFICode_40.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_40("STRING_53264787");
    noUnderlyings_0_0.set(UnderlyingCPProgram_40);
    UnderlyingInstrument_40.insert(UnderlyingCPProgram_40.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_40("STRING_1828816964");
    noUnderlyings_0_0.set(UnderlyingCPRegType_40);
    UnderlyingInstrument_40.insert(UnderlyingCPRegType_40.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_40;
    UnderlyingCapValue_40.setString("19537952");
    noUnderlyings_0_0.set(UnderlyingCapValue_40);
    UnderlyingInstrument_40.insert(UnderlyingCapValue_40.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_40;
    UnderlyingCashAmount_40.setString("16468464");
    noUnderlyings_0_0.set(UnderlyingCashAmount_40);
    UnderlyingInstrument_40.insert(UnderlyingCashAmount_40.getString());
    FIX::UnderlyingCashType UnderlyingCashType_40("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_40);
    UnderlyingInstrument_40.insert(UnderlyingCashType_40.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_40;
    UnderlyingContractMultiplier_40.setString("19116661");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_40);
    UnderlyingInstrument_40.insert(UnderlyingContractMultiplier_40.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_40(1223808763);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_40);
    UnderlyingInstrument_40.insert(UnderlyingContractMultiplierUnit_40.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_40("COUNTRY_326123554");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_40);
    UnderlyingInstrument_40.insert(UnderlyingCountryOfIssue_40.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_40("LOCALMKTDATE_1563973450");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_40);
    UnderlyingInstrument_40.insert(UnderlyingCouponPaymentDate_40.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_40;
    UnderlyingCouponRate_40.setString("95.320000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_40);
    UnderlyingInstrument_40.insert(UnderlyingCouponRate_40.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_40("STRING_1356692134");
    noUnderlyings_0_0.set(UnderlyingCreditRating_40);
    UnderlyingInstrument_40.insert(UnderlyingCreditRating_40.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_40("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_40);
    UnderlyingInstrument_40.insert(UnderlyingCurrency_40.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_40;
    UnderlyingCurrentValue_40.setString("2529581");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_40);
    UnderlyingInstrument_40.insert(UnderlyingCurrentValue_40.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_40;
    UnderlyingDetachmentPoint_40.setString("9.220000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_40);
    UnderlyingInstrument_40.insert(UnderlyingDetachmentPoint_40.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_40;
    UnderlyingDirtyPrice_40.setString("5619907");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_40);
    UnderlyingInstrument_40.insert(UnderlyingDirtyPrice_40.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_40;
    UnderlyingEndPrice_40.setString("5210409");
    noUnderlyings_0_0.set(UnderlyingEndPrice_40);
    UnderlyingInstrument_40.insert(UnderlyingEndPrice_40.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_40;
    UnderlyingEndValue_40.setString("11506299");
    noUnderlyings_0_0.set(UnderlyingEndValue_40);
    UnderlyingInstrument_40.insert(UnderlyingEndValue_40.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_40(1178036121);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_40);
    UnderlyingInstrument_40.insert(UnderlyingExerciseStyle_40.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_40;
    UnderlyingFXRate_40.setString("1019748");
    noUnderlyings_0_0.set(UnderlyingFXRate_40);
    UnderlyingInstrument_40.insert(UnderlyingFXRate_40.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_40('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_40);
    UnderlyingInstrument_40.insert(UnderlyingFXRateCalc_40.getString());
    FIX::UnderlyingFactor UnderlyingFactor_40;
    UnderlyingFactor_40.setString("8641507");
    noUnderlyings_0_0.set(UnderlyingFactor_40);
    UnderlyingInstrument_40.insert(UnderlyingFactor_40.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_40(634456525);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_40);
    UnderlyingInstrument_40.insert(UnderlyingFlowScheduleType_40.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_40("STRING_1444101771");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_40);
    UnderlyingInstrument_40.insert(UnderlyingInstrRegistry_40.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_40("LOCALMKTDATE_1273486636");
    noUnderlyings_0_0.set(UnderlyingIssueDate_40);
    UnderlyingInstrument_40.insert(UnderlyingIssueDate_40.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_40("STRING_1126667206");
    noUnderlyings_0_0.set(UnderlyingIssuer_40);
    UnderlyingInstrument_40.insert(UnderlyingIssuer_40.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_40("STRING_1270774260");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_40);
    UnderlyingInstrument_40.insert(UnderlyingLocaleOfIssue_40.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_40("LOCALMKTDATE_638281893");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_40);
    UnderlyingInstrument_40.insert(UnderlyingMaturityDate_40.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_40("MONTHYEAR_1574416173");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_40);
    UnderlyingInstrument_40.insert(UnderlyingMaturityMonthYear_40.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_40("TZTIMEONLY_1078365128");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_40);
    UnderlyingInstrument_40.insert(UnderlyingMaturityTime_40.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_40;
    UnderlyingNotionalPercentageOutstanding_40.setString("15.420000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_40);
    UnderlyingInstrument_40.insert(UnderlyingNotionalPercentageOutstanding_40.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_40('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_40);
    UnderlyingInstrument_40.insert(UnderlyingOptAttribute_40.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_40;
    UnderlyingOriginalNotionalPercentageOutstanding_40.setString("84.450000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_40);
    UnderlyingInstrument_40.insert(UnderlyingOriginalNotionalPercentageOutstanding_40.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_40("STRING_950153180");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_40);
    UnderlyingInstrument_40.insert(UnderlyingPriceUnitOfMeasure_40.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_40;
    UnderlyingPriceUnitOfMeasureQty_40.setString("11270437");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_40);
    UnderlyingInstrument_40.insert(UnderlyingPriceUnitOfMeasureQty_40.getString());
    FIX::UnderlyingProduct UnderlyingProduct_40(2135522169);
    noUnderlyings_0_0.set(UnderlyingProduct_40);
    UnderlyingInstrument_40.insert(UnderlyingProduct_40.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_40(714335671);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_40);
    UnderlyingInstrument_40.insert(UnderlyingPutOrCall_40.getString());
    FIX::UnderlyingPx UnderlyingPx_40;
    UnderlyingPx_40.setString("2033688");
    noUnderlyings_0_0.set(UnderlyingPx_40);
    UnderlyingInstrument_40.insert(UnderlyingPx_40.getString());
    FIX::UnderlyingQty UnderlyingQty_40;
    UnderlyingQty_40.setString("3141620");
    noUnderlyings_0_0.set(UnderlyingQty_40);
    UnderlyingInstrument_40.insert(UnderlyingQty_40.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_40("LOCALMKTDATE_130825473");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_40);
    UnderlyingInstrument_40.insert(UnderlyingRedemptionDate_40.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_40("STRING_813068377");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_40);
    UnderlyingInstrument_40.insert(UnderlyingRepoCollateralSecurityType_40.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_40;
    UnderlyingRepurchaseRate_40.setString("42.090000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_40);
    UnderlyingInstrument_40.insert(UnderlyingRepurchaseRate_40.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_40(1956889642);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_40);
    UnderlyingInstrument_40.insert(UnderlyingRepurchaseTerm_40.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_40("STRING_1811498247");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_40);
    UnderlyingInstrument_40.insert(UnderlyingRestructuringType_40.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_40("STRING_1923812405");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_40);
    UnderlyingInstrument_40.insert(UnderlyingSecurityDesc_40.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_40("EXCHANGE_1712826916");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_40);
    UnderlyingInstrument_40.insert(UnderlyingSecurityExchange_40.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_40("STRING_226005358");
    noUnderlyings_0_0.set(UnderlyingSecurityID_40);
    UnderlyingInstrument_40.insert(UnderlyingSecurityID_40.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_40("STRING_297369695");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_40);
    UnderlyingInstrument_40.insert(UnderlyingSecurityIDSource_40.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_40("STRING_715973268");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_40);
    UnderlyingInstrument_40.insert(UnderlyingSecuritySubType_40.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_40("STRING_1404041479");
    noUnderlyings_0_0.set(UnderlyingSecurityType_40);
    UnderlyingInstrument_40.insert(UnderlyingSecurityType_40.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_40("STRING_399344556");
    noUnderlyings_0_0.set(UnderlyingSeniority_40);
    UnderlyingInstrument_40.insert(UnderlyingSeniority_40.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_40("STRING_1309633794");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_40);
    UnderlyingInstrument_40.insert(UnderlyingSettlMethod_40.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_40(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_40);
    UnderlyingInstrument_40.insert(UnderlyingSettlementType_40.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_40;
    UnderlyingStartValue_40.setString("10338010");
    noUnderlyings_0_0.set(UnderlyingStartValue_40);
    UnderlyingInstrument_40.insert(UnderlyingStartValue_40.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_40("STRING_606251917");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_40);
    UnderlyingInstrument_40.insert(UnderlyingStateOrProvinceOfIssue_40.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_40("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_40);
    UnderlyingInstrument_40.insert(UnderlyingStrikeCurrency_40.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_40;
    UnderlyingStrikePrice_40.setString("18770261");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_40);
    UnderlyingInstrument_40.insert(UnderlyingStrikePrice_40.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_40("STRING_2032477107");
    noUnderlyings_0_0.set(UnderlyingSymbol_40);
    UnderlyingInstrument_40.insert(UnderlyingSymbol_40.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_40("STRING_1587400812");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_40);
    UnderlyingInstrument_40.insert(UnderlyingSymbolSfx_40.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_40("STRING_807907658");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_40);
    UnderlyingInstrument_40.insert(UnderlyingTimeUnit_40.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_40("STRING_1028835001");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_40);
    UnderlyingInstrument_40.insert(UnderlyingUnitOfMeasure_40.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_40;
    UnderlyingUnitOfMeasureQty_40.setString("10675981");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_40);
    UnderlyingInstrument_40.insert(UnderlyingUnitOfMeasureQty_40.getString());
    all_values.push_back(UnderlyingInstrument_40);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_85;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_85("STRING_1978988181");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_85);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_85.insert(UnderlyingSecurityAltID_85.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_85("STRING_47158206");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_85);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_85.insert(UnderlyingSecurityAltIDSource_85.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_85);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_86;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_86("STRING_1555644624");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_86);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_86.insert(UnderlyingSecurityAltID_86.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_86("STRING_545840204");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_86);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_86.insert(UnderlyingSecurityAltIDSource_86.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_86);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_87;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_87("STRING_250527051");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_87);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_87.insert(UnderlyingSecurityAltID_87.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_87("STRING_1869806699");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_87);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_87.insert(UnderlyingSecurityAltIDSource_87.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_87);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_79;
      FIX::UnderlyingStipType UnderlyingStipType_79("STRING_1063595428");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_79);
      UnderlyingStipulations_NoUnderlyingStips_79.insert(UnderlyingStipType_79.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_79("STRING_1393177261");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_79);
      UnderlyingStipulations_NoUnderlyingStips_79.insert(UnderlyingStipValue_79.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_79);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_80;
      FIX::UnderlyingStipType UnderlyingStipType_80("STRING_486071671");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_80);
      UnderlyingStipulations_NoUnderlyingStips_80.insert(UnderlyingStipType_80.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_80("STRING_727610027");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_80);
      UnderlyingStipulations_NoUnderlyingStips_80.insert(UnderlyingStipValue_80.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_80);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_81;
      FIX::UnderlyingStipType UnderlyingStipType_81("STRING_1169506018");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_81);
      UnderlyingStipulations_NoUnderlyingStips_81.insert(UnderlyingStipType_81.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_81("STRING_51414940");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_81);
      UnderlyingStipulations_NoUnderlyingStips_81.insert(UnderlyingStipValue_81.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_81);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_75;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_75("STRING_1466875713");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_75);
      UndlyInstrumentParties_NoUndlyInstrumentParties_75.insert(UnderlyingInstrumentPartyID_75.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_75('7');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_75);
      UndlyInstrumentParties_NoUndlyInstrumentParties_75.insert(UnderlyingInstrumentPartyIDSource_75.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_75(210173217);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_75);
      UndlyInstrumentParties_NoUndlyInstrumentParties_75.insert(UnderlyingInstrumentPartyRole_75.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_75);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_147("STRING_2077022002");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_147);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147.insert(UnderlyingInstrumentPartySubID_147.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_147(330881795);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_147);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147.insert(UnderlyingInstrumentPartySubIDType_147.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_148("STRING_752537703");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_148);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148.insert(UnderlyingInstrumentPartySubID_148.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_148(535790271);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_148);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148.insert(UnderlyingInstrumentPartySubIDType_148.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_76;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_76("STRING_1725077009");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_76);
      UndlyInstrumentParties_NoUndlyInstrumentParties_76.insert(UnderlyingInstrumentPartyID_76.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_76('7');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_76);
      UndlyInstrumentParties_NoUndlyInstrumentParties_76.insert(UnderlyingInstrumentPartyIDSource_76.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_76(265332801);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_76);
      UndlyInstrumentParties_NoUndlyInstrumentParties_76.insert(UnderlyingInstrumentPartyRole_76.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_76);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_149("STRING_205439507");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_149);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149.insert(UnderlyingInstrumentPartySubID_149.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_149(1073240460);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_149);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149.insert(UnderlyingInstrumentPartySubIDType_149.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }

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
