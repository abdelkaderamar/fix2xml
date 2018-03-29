#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/PositionMaintenanceRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionMaintenanceRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::PositionMaintenanceRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionMaintenanceRequest_0;
  FIX::Account Account_31("STRING_384024118");
  msg.set(Account_31);
  PositionMaintenanceRequest_0.insert(Account_31.getString());
  FIX::AccountType AccountType_26(1);
  msg.set(AccountType_26);
  PositionMaintenanceRequest_0.insert(AccountType_26.getString());
  FIX::AcctIDSource AcctIDSource_24(3);
  msg.set(AcctIDSource_24);
  PositionMaintenanceRequest_0.insert(AcctIDSource_24.getString());
  FIX::AdjustmentType AdjustmentType_1(2);
  msg.set(AdjustmentType_1);
  PositionMaintenanceRequest_0.insert(AdjustmentType_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_16("LOCALMKTDATE_1731529520");
  msg.set(ClearingBusinessDate_16);
  PositionMaintenanceRequest_0.insert(ClearingBusinessDate_16.getString());
  FIX::ContraryInstructionIndicator ContraryInstructionIndicator_1(true);
  msg.set(ContraryInstructionIndicator_1);
  PositionMaintenanceRequest_0.insert(ContraryInstructionIndicator_1.getString());
  FIX::Currency Currency_53("CAN");
  msg.set(Currency_53);
  PositionMaintenanceRequest_0.insert(Currency_53.getString());
  FIX::EncodedText EncodedText_73("DATA_943429480");
  msg.set(EncodedText_73);
  PositionMaintenanceRequest_0.insert(EncodedText_73.getString());
  FIX::EncodedTextLen EncodedTextLen_73(1186311727);
  msg.set(EncodedTextLen_73);
  PositionMaintenanceRequest_0.insert(EncodedTextLen_73.getString());
  FIX::OrigPosReqRefID OrigPosReqRefID_1("STRING_580933260");
  msg.set(OrigPosReqRefID_1);
  PositionMaintenanceRequest_0.insert(OrigPosReqRefID_1.getString());
  FIX::PosMaintAction PosMaintAction_1(2);
  msg.set(PosMaintAction_1);
  PositionMaintenanceRequest_0.insert(PosMaintAction_1.getString());
  FIX::PosMaintRptRefID PosMaintRptRefID_2("STRING_556767453");
  msg.set(PosMaintRptRefID_2);
  PositionMaintenanceRequest_0.insert(PosMaintRptRefID_2.getString());
  FIX::PosReqID PosReqID_2("STRING_912596004");
  msg.set(PosReqID_2);
  PositionMaintenanceRequest_0.insert(PosReqID_2.getString());
  FIX::PosTransType PosTransType_1(1);
  msg.set(PosTransType_1);
  PositionMaintenanceRequest_0.insert(PosTransType_1.getString());
  FIX::PriorSpreadIndicator PriorSpreadIndicator_1(true);
  msg.set(PriorSpreadIndicator_1);
  PositionMaintenanceRequest_0.insert(PriorSpreadIndicator_1.getString());
  FIX::SettlCurrency SettlCurrency_23("CHF");
  msg.set(SettlCurrency_23);
  PositionMaintenanceRequest_0.insert(SettlCurrency_23.getString());
  FIX::SettlSessID SettlSessID_8("STRING_ITD");
  msg.set(SettlSessID_8);
  PositionMaintenanceRequest_0.insert(SettlSessID_8.getString());
  FIX::SettlSessSubID SettlSessSubID_7("STRING_1672705479");
  msg.set(SettlSessSubID_7);
  PositionMaintenanceRequest_0.insert(SettlSessSubID_7.getString());
  FIX::Text Text_73("STRING_46066016");
  msg.set(Text_73);
  PositionMaintenanceRequest_0.insert(Text_73.getString());
  FIX::ThresholdAmount ThresholdAmount_2;
  ThresholdAmount_2.setString("2127084");
  msg.set(ThresholdAmount_2);
  PositionMaintenanceRequest_0.insert(ThresholdAmount_2.getString());
  FIX::TransactTime TransactTime_55(FIX::UTCTIMESTAMP(2, 16, 22, 19, 11, 2012));
  msg.set(TransactTime_55);
  PositionMaintenanceRequest_0.insert(TransactTime_55.getString());
  all_values.push_back(PositionMaintenanceRequest_0);

  all_compo_names.insert("PositionMaintenanceRequest");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionMaintenanceRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_95;
    FIX::EncodedLegIssuer EncodedLegIssuer_95("DATA_1160064755");
    noLegs_0_0.set(EncodedLegIssuer_95);
    InstrumentLeg_95.insert(EncodedLegIssuer_95.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_95(576415384);
    noLegs_0_0.set(EncodedLegIssuerLen_95);
    InstrumentLeg_95.insert(EncodedLegIssuerLen_95.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_95("DATA_1738573939");
    noLegs_0_0.set(EncodedLegSecurityDesc_95);
    InstrumentLeg_95.insert(EncodedLegSecurityDesc_95.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_95(1134968519);
    noLegs_0_0.set(EncodedLegSecurityDescLen_95);
    InstrumentLeg_95.insert(EncodedLegSecurityDescLen_95.getString());
    FIX::LegCFICode LegCFICode_95("STRING_428966939");
    noLegs_0_0.set(LegCFICode_95);
    InstrumentLeg_95.insert(LegCFICode_95.getString());
    FIX::LegContractMultiplier LegContractMultiplier_95;
    LegContractMultiplier_95.setString("13226198");
    noLegs_0_0.set(LegContractMultiplier_95);
    InstrumentLeg_95.insert(LegContractMultiplier_95.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_95(1525436225);
    noLegs_0_0.set(LegContractMultiplierUnit_95);
    InstrumentLeg_95.insert(LegContractMultiplierUnit_95.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_95("MONTHYEAR_454118564");
    noLegs_0_0.set(LegContractSettlMonth_95);
    InstrumentLeg_95.insert(LegContractSettlMonth_95.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_95("COUNTRY_1366462507");
    noLegs_0_0.set(LegCountryOfIssue_95);
    InstrumentLeg_95.insert(LegCountryOfIssue_95.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_95("LOCALMKTDATE_321382057");
    noLegs_0_0.set(LegCouponPaymentDate_95);
    InstrumentLeg_95.insert(LegCouponPaymentDate_95.getString());
    FIX::LegCouponRate LegCouponRate_95;
    LegCouponRate_95.setString("2.910000");
    noLegs_0_0.set(LegCouponRate_95);
    InstrumentLeg_95.insert(LegCouponRate_95.getString());
    FIX::LegCreditRating LegCreditRating_95("STRING_1947395767");
    noLegs_0_0.set(LegCreditRating_95);
    InstrumentLeg_95.insert(LegCreditRating_95.getString());
    FIX::LegCurrency LegCurrency_95("CAN");
    noLegs_0_0.set(LegCurrency_95);
    InstrumentLeg_95.insert(LegCurrency_95.getString());
    FIX::LegDatedDate LegDatedDate_95("LOCALMKTDATE_712508123");
    noLegs_0_0.set(LegDatedDate_95);
    InstrumentLeg_95.insert(LegDatedDate_95.getString());
    FIX::LegExerciseStyle LegExerciseStyle_95(420946461);
    noLegs_0_0.set(LegExerciseStyle_95);
    InstrumentLeg_95.insert(LegExerciseStyle_95.getString());
    FIX::LegFactor LegFactor_95;
    LegFactor_95.setString("7981153");
    noLegs_0_0.set(LegFactor_95);
    InstrumentLeg_95.insert(LegFactor_95.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_95(829856549);
    noLegs_0_0.set(LegFlowScheduleType_95);
    InstrumentLeg_95.insert(LegFlowScheduleType_95.getString());
    FIX::LegInstrRegistry LegInstrRegistry_95("STRING_1433239434");
    noLegs_0_0.set(LegInstrRegistry_95);
    InstrumentLeg_95.insert(LegInstrRegistry_95.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_95("LOCALMKTDATE_841404499");
    noLegs_0_0.set(LegInterestAccrualDate_95);
    InstrumentLeg_95.insert(LegInterestAccrualDate_95.getString());
    FIX::LegIssueDate LegIssueDate_95("LOCALMKTDATE_355078381");
    noLegs_0_0.set(LegIssueDate_95);
    InstrumentLeg_95.insert(LegIssueDate_95.getString());
    FIX::LegIssuer LegIssuer_95("STRING_1479305450");
    noLegs_0_0.set(LegIssuer_95);
    InstrumentLeg_95.insert(LegIssuer_95.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_95("STRING_1054112937");
    noLegs_0_0.set(LegLocaleOfIssue_95);
    InstrumentLeg_95.insert(LegLocaleOfIssue_95.getString());
    FIX::LegMaturityDate LegMaturityDate_95("LOCALMKTDATE_528525471");
    noLegs_0_0.set(LegMaturityDate_95);
    InstrumentLeg_95.insert(LegMaturityDate_95.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_95("MONTHYEAR_1514640485");
    noLegs_0_0.set(LegMaturityMonthYear_95);
    InstrumentLeg_95.insert(LegMaturityMonthYear_95.getString());
    FIX::LegMaturityTime LegMaturityTime_95("TZTIMEONLY_595799345");
    noLegs_0_0.set(LegMaturityTime_95);
    InstrumentLeg_95.insert(LegMaturityTime_95.getString());
    FIX::LegOptAttribute LegOptAttribute_95('2');
    noLegs_0_0.set(LegOptAttribute_95);
    InstrumentLeg_95.insert(LegOptAttribute_95.getString());
    FIX::LegOptionRatio LegOptionRatio_95;
    LegOptionRatio_95.setString("12890409");
    noLegs_0_0.set(LegOptionRatio_95);
    InstrumentLeg_95.insert(LegOptionRatio_95.getString());
    FIX::LegPool LegPool_95("STRING_1305299619");
    noLegs_0_0.set(LegPool_95);
    InstrumentLeg_95.insert(LegPool_95.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_95("STRING_397473491");
    noLegs_0_0.set(LegPriceUnitOfMeasure_95);
    InstrumentLeg_95.insert(LegPriceUnitOfMeasure_95.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_95;
    LegPriceUnitOfMeasureQty_95.setString("9469839");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_95);
    InstrumentLeg_95.insert(LegPriceUnitOfMeasureQty_95.getString());
    FIX::LegProduct LegProduct_95(317880726);
    noLegs_0_0.set(LegProduct_95);
    InstrumentLeg_95.insert(LegProduct_95.getString());
    FIX::LegPutOrCall LegPutOrCall_95(973888876);
    noLegs_0_0.set(LegPutOrCall_95);
    InstrumentLeg_95.insert(LegPutOrCall_95.getString());
    FIX::LegRatioQty LegRatioQty_95;
    LegRatioQty_95.setString("5380742");
    noLegs_0_0.set(LegRatioQty_95);
    InstrumentLeg_95.insert(LegRatioQty_95.getString());
    FIX::LegRedemptionDate LegRedemptionDate_95("LOCALMKTDATE_1452849245");
    noLegs_0_0.set(LegRedemptionDate_95);
    InstrumentLeg_95.insert(LegRedemptionDate_95.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_95("STRING_1402855815");
    noLegs_0_0.set(LegRepoCollateralSecurityType_95);
    InstrumentLeg_95.insert(LegRepoCollateralSecurityType_95.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_95;
    LegRepurchaseRate_95.setString("40.650000");
    noLegs_0_0.set(LegRepurchaseRate_95);
    InstrumentLeg_95.insert(LegRepurchaseRate_95.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_95(830801822);
    noLegs_0_0.set(LegRepurchaseTerm_95);
    InstrumentLeg_95.insert(LegRepurchaseTerm_95.getString());
    FIX::LegSecurityDesc LegSecurityDesc_95("STRING_1856974379");
    noLegs_0_0.set(LegSecurityDesc_95);
    InstrumentLeg_95.insert(LegSecurityDesc_95.getString());
    FIX::LegSecurityExchange LegSecurityExchange_95("EXCHANGE_1079672924");
    noLegs_0_0.set(LegSecurityExchange_95);
    InstrumentLeg_95.insert(LegSecurityExchange_95.getString());
    FIX::LegSecurityID LegSecurityID_95("STRING_1152183880");
    noLegs_0_0.set(LegSecurityID_95);
    InstrumentLeg_95.insert(LegSecurityID_95.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_95("STRING_1349921022");
    noLegs_0_0.set(LegSecurityIDSource_95);
    InstrumentLeg_95.insert(LegSecurityIDSource_95.getString());
    FIX::LegSecuritySubType LegSecuritySubType_95("STRING_879585043");
    noLegs_0_0.set(LegSecuritySubType_95);
    InstrumentLeg_95.insert(LegSecuritySubType_95.getString());
    FIX::LegSecurityType LegSecurityType_95("STRING_1179481014");
    noLegs_0_0.set(LegSecurityType_95);
    InstrumentLeg_95.insert(LegSecurityType_95.getString());
    FIX::LegSide LegSide_95('1');
    noLegs_0_0.set(LegSide_95);
    InstrumentLeg_95.insert(LegSide_95.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_95("STRING_1592093167");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_95);
    InstrumentLeg_95.insert(LegStateOrProvinceOfIssue_95.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_95("CAN");
    noLegs_0_0.set(LegStrikeCurrency_95);
    InstrumentLeg_95.insert(LegStrikeCurrency_95.getString());
    FIX::LegStrikePrice LegStrikePrice_95;
    LegStrikePrice_95.setString("2744660");
    noLegs_0_0.set(LegStrikePrice_95);
    InstrumentLeg_95.insert(LegStrikePrice_95.getString());
    FIX::LegSymbol LegSymbol_95("STRING_886183261");
    noLegs_0_0.set(LegSymbol_95);
    InstrumentLeg_95.insert(LegSymbol_95.getString());
    FIX::LegSymbolSfx LegSymbolSfx_95("STRING_891671346");
    noLegs_0_0.set(LegSymbolSfx_95);
    InstrumentLeg_95.insert(LegSymbolSfx_95.getString());
    FIX::LegTimeUnit LegTimeUnit_95("STRING_629544449");
    noLegs_0_0.set(LegTimeUnit_95);
    InstrumentLeg_95.insert(LegTimeUnit_95.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_95("STRING_218005064");
    noLegs_0_0.set(LegUnitOfMeasure_95);
    InstrumentLeg_95.insert(LegUnitOfMeasure_95.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_95;
    LegUnitOfMeasureQty_95.setString("19457842");
    noLegs_0_0.set(LegUnitOfMeasureQty_95);
    InstrumentLeg_95.insert(LegUnitOfMeasureQty_95.getString());
    all_values.push_back(InstrumentLeg_95);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_195;
      FIX::LegSecurityAltID LegSecurityAltID_195("STRING_1732645549");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_195);
      LegSecAltIDGrp_NoLegSecurityAltID_195.insert(LegSecurityAltID_195.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_195("STRING_394099980");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_195);
      LegSecAltIDGrp_NoLegSecurityAltID_195.insert(LegSecurityAltIDSource_195.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_195);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_64;
  FIX::AttachmentPoint AttachmentPoint_64;
  AttachmentPoint_64.setString("21.460000");
  msg.set(AttachmentPoint_64);
  Instrument_64.insert(AttachmentPoint_64.getString());
  FIX::CFICode CFICode_64("STRING_874202889");
  msg.set(CFICode_64);
  Instrument_64.insert(CFICode_64.getString());
  FIX::CPProgram CPProgram_64(2);
  msg.set(CPProgram_64);
  Instrument_64.insert(CPProgram_64.getString());
  FIX::CPRegType CPRegType_64("STRING_1760625638");
  msg.set(CPRegType_64);
  Instrument_64.insert(CPRegType_64.getString());
  FIX::CapPrice CapPrice_64;
  CapPrice_64.setString("18211868");
  msg.set(CapPrice_64);
  Instrument_64.insert(CapPrice_64.getString());
  FIX::ContractMultiplier ContractMultiplier_64;
  ContractMultiplier_64.setString("20172803");
  msg.set(ContractMultiplier_64);
  Instrument_64.insert(ContractMultiplier_64.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_64(1);
  msg.set(ContractMultiplierUnit_64);
  Instrument_64.insert(ContractMultiplierUnit_64.getString());
  FIX::ContractSettlMonth ContractSettlMonth_64("MONTHYEAR_211777456");
  msg.set(ContractSettlMonth_64);
  Instrument_64.insert(ContractSettlMonth_64.getString());
  FIX::CountryOfIssue CountryOfIssue_64("COUNTRY_1322645924");
  msg.set(CountryOfIssue_64);
  Instrument_64.insert(CountryOfIssue_64.getString());
  FIX::CouponPaymentDate CouponPaymentDate_64("LOCALMKTDATE_1989886681");
  msg.set(CouponPaymentDate_64);
  Instrument_64.insert(CouponPaymentDate_64.getString());
  FIX::CouponRate CouponRate_64;
  CouponRate_64.setString("15.220000");
  msg.set(CouponRate_64);
  Instrument_64.insert(CouponRate_64.getString());
  FIX::CreditRating CreditRating_64("STRING_5964098");
  msg.set(CreditRating_64);
  Instrument_64.insert(CreditRating_64.getString());
  FIX::DatedDate DatedDate_64("LOCALMKTDATE_1699377412");
  msg.set(DatedDate_64);
  Instrument_64.insert(DatedDate_64.getString());
  FIX::DetachmentPoint DetachmentPoint_64;
  DetachmentPoint_64.setString("7.980000");
  msg.set(DetachmentPoint_64);
  Instrument_64.insert(DetachmentPoint_64.getString());
  FIX::EncodedIssuer EncodedIssuer_64("DATA_1158147978");
  msg.set(EncodedIssuer_64);
  Instrument_64.insert(EncodedIssuer_64.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_64(901814786);
  msg.set(EncodedIssuerLen_64);
  Instrument_64.insert(EncodedIssuerLen_64.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_64("DATA_1884245842");
  msg.set(EncodedSecurityDesc_64);
  Instrument_64.insert(EncodedSecurityDesc_64.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_64(190145345);
  msg.set(EncodedSecurityDescLen_64);
  Instrument_64.insert(EncodedSecurityDescLen_64.getString());
  FIX::ExerciseStyle ExerciseStyle_64(0);
  msg.set(ExerciseStyle_64);
  Instrument_64.insert(ExerciseStyle_64.getString());
  FIX::Factor Factor_64;
  Factor_64.setString("13288553");
  msg.set(Factor_64);
  Instrument_64.insert(Factor_64.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_64(true);
  msg.set(FlexProductEligibilityIndicator_64);
  Instrument_64.insert(FlexProductEligibilityIndicator_64.getString());
  FIX::FlexibleIndicator FlexibleIndicator_64(false);
  msg.set(FlexibleIndicator_64);
  Instrument_64.insert(FlexibleIndicator_64.getString());
  FIX::FloorPrice FloorPrice_64;
  FloorPrice_64.setString("16033214");
  msg.set(FloorPrice_64);
  Instrument_64.insert(FloorPrice_64.getString());
  FIX::FlowScheduleType FlowScheduleType_64(4);
  msg.set(FlowScheduleType_64);
  Instrument_64.insert(FlowScheduleType_64.getString());
  FIX::InstrRegistry InstrRegistry_64("STRING_1095904451");
  msg.set(InstrRegistry_64);
  Instrument_64.insert(InstrRegistry_64.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_64('8');
  msg.set(InstrmtAssignmentMethod_64);
  Instrument_64.insert(InstrmtAssignmentMethod_64.getString());
  FIX::InterestAccrualDate InterestAccrualDate_64("LOCALMKTDATE_747277498");
  msg.set(InterestAccrualDate_64);
  Instrument_64.insert(InterestAccrualDate_64.getString());
  FIX::IssueDate IssueDate_64("LOCALMKTDATE_894205087");
  msg.set(IssueDate_64);
  Instrument_64.insert(IssueDate_64.getString());
  FIX::Issuer Issuer_64("STRING_1243452152");
  msg.set(Issuer_64);
  Instrument_64.insert(Issuer_64.getString());
  FIX::ListMethod ListMethod_64(1);
  msg.set(ListMethod_64);
  Instrument_64.insert(ListMethod_64.getString());
  FIX::LocaleOfIssue LocaleOfIssue_64("STRING_1288305067");
  msg.set(LocaleOfIssue_64);
  Instrument_64.insert(LocaleOfIssue_64.getString());
  FIX::MaturityDate MaturityDate_64("LOCALMKTDATE_459120650");
  msg.set(MaturityDate_64);
  Instrument_64.insert(MaturityDate_64.getString());
  FIX::MaturityMonthYear MaturityMonthYear_64("MONTHYEAR_1206642288");
  msg.set(MaturityMonthYear_64);
  Instrument_64.insert(MaturityMonthYear_64.getString());
  FIX::MaturityTime MaturityTime_64("TZTIMEONLY_840221019");
  msg.set(MaturityTime_64);
  Instrument_64.insert(MaturityTime_64.getString());
  FIX::MinPriceIncrement MinPriceIncrement_64;
  MinPriceIncrement_64.setString("722626");
  msg.set(MinPriceIncrement_64);
  Instrument_64.insert(MinPriceIncrement_64.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_64;
  MinPriceIncrementAmount_64.setString("8803454");
  msg.set(MinPriceIncrementAmount_64);
  Instrument_64.insert(MinPriceIncrementAmount_64.getString());
  FIX::NTPositionLimit NTPositionLimit_64(710017698);
  msg.set(NTPositionLimit_64);
  Instrument_64.insert(NTPositionLimit_64.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_64;
  NotionalPercentageOutstanding_64.setString("35.060000");
  msg.set(NotionalPercentageOutstanding_64);
  Instrument_64.insert(NotionalPercentageOutstanding_64.getString());
  FIX::OptAttribute OptAttribute_64('1');
  msg.set(OptAttribute_64);
  Instrument_64.insert(OptAttribute_64.getString());
  FIX::OptPayoutAmount OptPayoutAmount_64;
  OptPayoutAmount_64.setString("20326636");
  msg.set(OptPayoutAmount_64);
  Instrument_64.insert(OptPayoutAmount_64.getString());
  FIX::OptPayoutType OptPayoutType_64(3);
  msg.set(OptPayoutType_64);
  Instrument_64.insert(OptPayoutType_64.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_64;
  OriginalNotionalPercentageOutstanding_64.setString("8.210000");
  msg.set(OriginalNotionalPercentageOutstanding_64);
  Instrument_64.insert(OriginalNotionalPercentageOutstanding_64.getString());
  FIX::Pool Pool_64("STRING_2038627720");
  msg.set(Pool_64);
  Instrument_64.insert(Pool_64.getString());
  FIX::PositionLimit PositionLimit_64(53590303);
  msg.set(PositionLimit_64);
  Instrument_64.insert(PositionLimit_64.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_64("STRING_STD");
  msg.set(PriceQuoteMethod_64);
  Instrument_64.insert(PriceQuoteMethod_64.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_64("STRING_1049292051");
  msg.set(PriceUnitOfMeasure_64);
  Instrument_64.insert(PriceUnitOfMeasure_64.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_64;
  PriceUnitOfMeasureQty_64.setString("9554050");
  msg.set(PriceUnitOfMeasureQty_64);
  Instrument_64.insert(PriceUnitOfMeasureQty_64.getString());
  FIX::Product Product_66(12);
  msg.set(Product_66);
  Instrument_64.insert(Product_66.getString());
  FIX::ProductComplex ProductComplex_64("STRING_1239437396");
  msg.set(ProductComplex_64);
  Instrument_64.insert(ProductComplex_64.getString());
  FIX::PutOrCall PutOrCall_64(0);
  msg.set(PutOrCall_64);
  Instrument_64.insert(PutOrCall_64.getString());
  FIX::RedemptionDate RedemptionDate_64("LOCALMKTDATE_939905527");
  msg.set(RedemptionDate_64);
  Instrument_64.insert(RedemptionDate_64.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_64("STRING_882526568");
  msg.set(RepoCollateralSecurityType_64);
  Instrument_64.insert(RepoCollateralSecurityType_64.getString());
  FIX::RepurchaseRate RepurchaseRate_64;
  RepurchaseRate_64.setString("44.530000");
  msg.set(RepurchaseRate_64);
  Instrument_64.insert(RepurchaseRate_64.getString());
  FIX::RepurchaseTerm RepurchaseTerm_64(395743308);
  msg.set(RepurchaseTerm_64);
  Instrument_64.insert(RepurchaseTerm_64.getString());
  FIX::RestructuringType RestructuringType_64("STRING_MM");
  msg.set(RestructuringType_64);
  Instrument_64.insert(RestructuringType_64.getString());
  FIX::SecurityDesc SecurityDesc_64("STRING_262025256");
  msg.set(SecurityDesc_64);
  Instrument_64.insert(SecurityDesc_64.getString());
  FIX::SecurityExchange SecurityExchange_64("EXCHANGE_481125539");
  msg.set(SecurityExchange_64);
  Instrument_64.insert(SecurityExchange_64.getString());
  FIX::SecurityGroup SecurityGroup_64("STRING_11592852");
  msg.set(SecurityGroup_64);
  Instrument_64.insert(SecurityGroup_64.getString());
  FIX::SecurityID SecurityID_64("STRING_1156230343");
  msg.set(SecurityID_64);
  Instrument_64.insert(SecurityID_64.getString());
  FIX::SecurityIDSource SecurityIDSource_64("STRING_2");
  msg.set(SecurityIDSource_64);
  Instrument_64.insert(SecurityIDSource_64.getString());
  FIX::SecurityStatus SecurityStatus_64("STRING_2");
  msg.set(SecurityStatus_64);
  Instrument_64.insert(SecurityStatus_64.getString());
  FIX::SecuritySubType SecuritySubType_65("STRING_297051763");
  msg.set(SecuritySubType_65);
  Instrument_64.insert(SecuritySubType_65.getString());
  FIX::SecurityType SecurityType_66("STRING_OOP");
  msg.set(SecurityType_66);
  Instrument_64.insert(SecurityType_66.getString());
  FIX::Seniority Seniority_64("STRING_SD");
  msg.set(Seniority_64);
  Instrument_64.insert(Seniority_64.getString());
  FIX::SettlMethod SettlMethod_64('C');
  msg.set(SettlMethod_64);
  Instrument_64.insert(SettlMethod_64.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_64("STRING_108477334");
  msg.set(SettleOnOpenFlag_64);
  Instrument_64.insert(SettleOnOpenFlag_64.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_64("STRING_283536382");
  msg.set(StateOrProvinceOfIssue_64);
  Instrument_64.insert(StateOrProvinceOfIssue_64.getString());
  FIX::StrikeCurrency StrikeCurrency_64("CAN");
  msg.set(StrikeCurrency_64);
  Instrument_64.insert(StrikeCurrency_64.getString());
  FIX::StrikeMultiplier StrikeMultiplier_64;
  StrikeMultiplier_64.setString("13756593");
  msg.set(StrikeMultiplier_64);
  Instrument_64.insert(StrikeMultiplier_64.getString());
  FIX::StrikePrice StrikePrice_64;
  StrikePrice_64.setString("17324704");
  msg.set(StrikePrice_64);
  Instrument_64.insert(StrikePrice_64.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_64(1);
  msg.set(StrikePriceBoundaryMethod_64);
  Instrument_64.insert(StrikePriceBoundaryMethod_64.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_64;
  StrikePriceBoundaryPrecision_64.setString("65.030000");
  msg.set(StrikePriceBoundaryPrecision_64);
  Instrument_64.insert(StrikePriceBoundaryPrecision_64.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_64(4);
  msg.set(StrikePriceDeterminationMethod_64);
  Instrument_64.insert(StrikePriceDeterminationMethod_64.getString());
  FIX::StrikeValue StrikeValue_64;
  StrikeValue_64.setString("13230576");
  msg.set(StrikeValue_64);
  Instrument_64.insert(StrikeValue_64.getString());
  FIX::Symbol Symbol_64("STRING_119574475");
  msg.set(Symbol_64);
  Instrument_64.insert(Symbol_64.getString());
  FIX::SymbolSfx SymbolSfx_64("STRING_CD");
  msg.set(SymbolSfx_64);
  Instrument_64.insert(SymbolSfx_64.getString());
  FIX::TimeUnit TimeUnit_64("STRING_Mo");
  msg.set(TimeUnit_64);
  Instrument_64.insert(TimeUnit_64.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_64(2);
  msg.set(UnderlyingPriceDeterminationMethod_64);
  Instrument_64.insert(UnderlyingPriceDeterminationMethod_64.getString());
  FIX::UnitOfMeasure UnitOfMeasure_64("STRING_oz_tr");
  msg.set(UnitOfMeasure_64);
  Instrument_64.insert(UnitOfMeasure_64.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_64;
  UnitOfMeasureQty_64.setString("12403504");
  msg.set(UnitOfMeasureQty_64);
  Instrument_64.insert(UnitOfMeasureQty_64.getString());
  FIX::ValuationMethod ValuationMethod_64("STRING_CDS");
  msg.set(ValuationMethod_64);
  Instrument_64.insert(ValuationMethod_64.getString());
  all_values.push_back(Instrument_64);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionMaintenanceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_133;
    FIX::ComplexEventCondition ComplexEventCondition_133(2);
    noComplexEvents_0_0.set(ComplexEventCondition_133);
    ComplexEvents_NoComplexEvents_133.insert(ComplexEventCondition_133.getString());
    FIX::ComplexEventPrice ComplexEventPrice_133;
    ComplexEventPrice_133.setString("10662734");
    noComplexEvents_0_0.set(ComplexEventPrice_133);
    ComplexEvents_NoComplexEvents_133.insert(ComplexEventPrice_133.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_133(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_133);
    ComplexEvents_NoComplexEvents_133.insert(ComplexEventPriceBoundaryMethod_133.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_133;
    ComplexEventPriceBoundaryPrecision_133.setString("65.350000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_133);
    ComplexEvents_NoComplexEvents_133.insert(ComplexEventPriceBoundaryPrecision_133.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_133(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_133);
    ComplexEvents_NoComplexEvents_133.insert(ComplexEventPriceTimeType_133.getString());
    FIX::ComplexEventType ComplexEventType_133(7);
    noComplexEvents_0_0.set(ComplexEventType_133);
    ComplexEvents_NoComplexEvents_133.insert(ComplexEventType_133.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_133;
    ComplexOptPayoutAmount_133.setString("18247268");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_133);
    ComplexEvents_NoComplexEvents_133.insert(ComplexOptPayoutAmount_133.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_133);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_271;
      FIX::ComplexEventEndDate ComplexEventEndDate_271(FIX::UTCTIMESTAMP(10, 14, 44, 4, 1, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_271);
      ComplexEventDates_NoComplexEventDates_271.insert(ComplexEventEndDate_271.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_271(FIX::UTCTIMESTAMP(17, 29, 35, 6, 5, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_271);
      ComplexEventDates_NoComplexEventDates_271.insert(ComplexEventStartDate_271.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_271);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_554;
        FIX::ComplexEventEndTime ComplexEventEndTime_554(FIX::UTCTIMEONLY(0, 44, 29));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_554);
        ComplexEventTimes_NoComplexEventTimes_554.insert(ComplexEventEndTime_554.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_554(FIX::UTCTIMEONLY(2, 18, 49));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_554);
        ComplexEventTimes_NoComplexEventTimes_554.insert(ComplexEventStartTime_554.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_554);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_134;
    FIX::ComplexEventCondition ComplexEventCondition_134(2);
    noComplexEvents_0_1.set(ComplexEventCondition_134);
    ComplexEvents_NoComplexEvents_134.insert(ComplexEventCondition_134.getString());
    FIX::ComplexEventPrice ComplexEventPrice_134;
    ComplexEventPrice_134.setString("8670359");
    noComplexEvents_0_1.set(ComplexEventPrice_134);
    ComplexEvents_NoComplexEvents_134.insert(ComplexEventPrice_134.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_134(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_134);
    ComplexEvents_NoComplexEvents_134.insert(ComplexEventPriceBoundaryMethod_134.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_134;
    ComplexEventPriceBoundaryPrecision_134.setString("74.640000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_134);
    ComplexEvents_NoComplexEvents_134.insert(ComplexEventPriceBoundaryPrecision_134.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_134(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_134);
    ComplexEvents_NoComplexEvents_134.insert(ComplexEventPriceTimeType_134.getString());
    FIX::ComplexEventType ComplexEventType_134(7);
    noComplexEvents_0_1.set(ComplexEventType_134);
    ComplexEvents_NoComplexEvents_134.insert(ComplexEventType_134.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_134;
    ComplexOptPayoutAmount_134.setString("3105706");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_134);
    ComplexEvents_NoComplexEvents_134.insert(ComplexOptPayoutAmount_134.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_134);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_272;
      FIX::ComplexEventEndDate ComplexEventEndDate_272(FIX::UTCTIMESTAMP(17, 21, 53, 22, 11, 2016));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_272);
      ComplexEventDates_NoComplexEventDates_272.insert(ComplexEventEndDate_272.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_272(FIX::UTCTIMESTAMP(7, 13, 42, 1, 6, 2005));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_272);
      ComplexEventDates_NoComplexEventDates_272.insert(ComplexEventStartDate_272.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_272);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_555;
        FIX::ComplexEventEndTime ComplexEventEndTime_555(FIX::UTCTIMEONLY(17, 27, 7));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_555);
        ComplexEventTimes_NoComplexEventTimes_555.insert(ComplexEventEndTime_555.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_555(FIX::UTCTIMEONLY(9, 17, 33));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_555);
        ComplexEventTimes_NoComplexEventTimes_555.insert(ComplexEventStartTime_555.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_555);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_556;
        FIX::ComplexEventEndTime ComplexEventEndTime_556(FIX::UTCTIMEONLY(16, 23, 31));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_556);
        ComplexEventTimes_NoComplexEventTimes_556.insert(ComplexEventEndTime_556.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_556(FIX::UTCTIMEONLY(14, 46, 27));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_556);
        ComplexEventTimes_NoComplexEventTimes_556.insert(ComplexEventStartTime_556.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_556);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::PositionMaintenanceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_125;
    FIX::EventDate EventDate_125("LOCALMKTDATE_2126742796");
    noEvents_0_0.set(EventDate_125);
    EvntGrp_NoEvents_125.insert(EventDate_125.getString());
    FIX::EventPx EventPx_125;
    EventPx_125.setString("12276403");
    noEvents_0_0.set(EventPx_125);
    EvntGrp_NoEvents_125.insert(EventPx_125.getString());
    FIX::EventText EventText_125("STRING_1465391780");
    noEvents_0_0.set(EventText_125);
    EvntGrp_NoEvents_125.insert(EventText_125.getString());
    FIX::EventTime EventTime_125(FIX::UTCTIMESTAMP(14, 4, 21, 2, 6, 2003));
    noEvents_0_0.set(EventTime_125);
    EvntGrp_NoEvents_125.insert(EventTime_125.getString());
    FIX::EventType EventType_125(99);
    noEvents_0_0.set(EventType_125);
    EvntGrp_NoEvents_125.insert(EventType_125.getString());
    all_values.push_back(EvntGrp_NoEvents_125);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_126;
    FIX::EventDate EventDate_126("LOCALMKTDATE_1623909014");
    noEvents_0_1.set(EventDate_126);
    EvntGrp_NoEvents_126.insert(EventDate_126.getString());
    FIX::EventPx EventPx_126;
    EventPx_126.setString("743973");
    noEvents_0_1.set(EventPx_126);
    EvntGrp_NoEvents_126.insert(EventPx_126.getString());
    FIX::EventText EventText_126("STRING_1653929843");
    noEvents_0_1.set(EventText_126);
    EvntGrp_NoEvents_126.insert(EventText_126.getString());
    FIX::EventTime EventTime_126(FIX::UTCTIMESTAMP(6, 42, 59, 14, 5, 2010));
    noEvents_0_1.set(EventTime_126);
    EvntGrp_NoEvents_126.insert(EventTime_126.getString());
    FIX::EventType EventType_126(4);
    noEvents_0_1.set(EventType_126);
    EvntGrp_NoEvents_126.insert(EventType_126.getString());
    all_values.push_back(EvntGrp_NoEvents_126);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_127;
    FIX::EventDate EventDate_127("LOCALMKTDATE_564877878");
    noEvents_0_2.set(EventDate_127);
    EvntGrp_NoEvents_127.insert(EventDate_127.getString());
    FIX::EventPx EventPx_127;
    EventPx_127.setString("12443163");
    noEvents_0_2.set(EventPx_127);
    EvntGrp_NoEvents_127.insert(EventPx_127.getString());
    FIX::EventText EventText_127("STRING_43483278");
    noEvents_0_2.set(EventText_127);
    EvntGrp_NoEvents_127.insert(EventText_127.getString());
    FIX::EventTime EventTime_127(FIX::UTCTIMESTAMP(11, 44, 28, 22, 12, 2000));
    noEvents_0_2.set(EventTime_127);
    EvntGrp_NoEvents_127.insert(EventTime_127.getString());
    FIX::EventType EventType_127(12);
    noEvents_0_2.set(EventType_127);
    EvntGrp_NoEvents_127.insert(EventType_127.getString());
    all_values.push_back(EvntGrp_NoEvents_127);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_129;
    FIX::InstrumentPartyID InstrumentPartyID_129("STRING_998045862");
    noInstrumentParties_0_0.set(InstrumentPartyID_129);
    InstrumentParties_NoInstrumentParties_129.insert(InstrumentPartyID_129.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_129('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_129);
    InstrumentParties_NoInstrumentParties_129.insert(InstrumentPartyIDSource_129.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_129(1543481667);
    noInstrumentParties_0_0.set(InstrumentPartyRole_129);
    InstrumentParties_NoInstrumentParties_129.insert(InstrumentPartyRole_129.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_129);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243;
      FIX::InstrumentPartySubID InstrumentPartySubID_243("STRING_1502835275");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_243);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243.insert(InstrumentPartySubID_243.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_243(1052969076);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_243);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243.insert(InstrumentPartySubIDType_243.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244;
      FIX::InstrumentPartySubID InstrumentPartySubID_244("STRING_31798490");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_244);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244.insert(InstrumentPartySubID_244.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_244(99985927);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_244);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244.insert(InstrumentPartySubIDType_244.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_130;
    FIX::InstrumentPartyID InstrumentPartyID_130("STRING_529394443");
    noInstrumentParties_0_1.set(InstrumentPartyID_130);
    InstrumentParties_NoInstrumentParties_130.insert(InstrumentPartyID_130.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_130('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_130);
    InstrumentParties_NoInstrumentParties_130.insert(InstrumentPartyIDSource_130.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_130(1753915770);
    noInstrumentParties_0_1.set(InstrumentPartyRole_130);
    InstrumentParties_NoInstrumentParties_130.insert(InstrumentPartyRole_130.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_130);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245;
      FIX::InstrumentPartySubID InstrumentPartySubID_245("STRING_907686597");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_245);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245.insert(InstrumentPartySubID_245.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_245(487666684);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_245);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245.insert(InstrumentPartySubIDType_245.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246;
      FIX::InstrumentPartySubID InstrumentPartySubID_246("STRING_1007081546");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_246);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246.insert(InstrumentPartySubID_246.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_246(304078947);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_246);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246.insert(InstrumentPartySubIDType_246.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247;
      FIX::InstrumentPartySubID InstrumentPartySubID_247("STRING_154565616");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_247);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247.insert(InstrumentPartySubID_247.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_247(939338014);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_247);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247.insert(InstrumentPartySubIDType_247.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_131;
    FIX::InstrumentPartyID InstrumentPartyID_131("STRING_958051710");
    noInstrumentParties_0_2.set(InstrumentPartyID_131);
    InstrumentParties_NoInstrumentParties_131.insert(InstrumentPartyID_131.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_131('7');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_131);
    InstrumentParties_NoInstrumentParties_131.insert(InstrumentPartyIDSource_131.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_131(36170738);
    noInstrumentParties_0_2.set(InstrumentPartyRole_131);
    InstrumentParties_NoInstrumentParties_131.insert(InstrumentPartyRole_131.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_131);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248;
      FIX::InstrumentPartySubID InstrumentPartySubID_248("STRING_668144136");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_248);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248.insert(InstrumentPartySubID_248.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_248(712014661);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_248);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248.insert(InstrumentPartySubIDType_248.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionMaintenanceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_120;
    FIX::SecurityAltID SecurityAltID_120("STRING_311238236");
    noSecurityAltID_0_0.set(SecurityAltID_120);
    SecAltIDGrp_NoSecurityAltID_120.insert(SecurityAltID_120.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_120("STRING_63346844");
    noSecurityAltID_0_0.set(SecurityAltIDSource_120);
    SecAltIDGrp_NoSecurityAltID_120.insert(SecurityAltIDSource_120.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_120);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_128;
  FIX::SecurityXML SecurityXML_129("XMLDATA_1745261256");
  msg.set(SecurityXML_129);
  FIX::SecurityXMLLen SecurityXMLLen_64(2081075132);
  msg.set(SecurityXMLLen_64);
  FIX::SecurityXMLSchema SecurityXMLSchema_64("STRING_642319395");
  msg.set(SecurityXMLSchema_64);
  SecurityXML_128.insert(SecurityXMLSchema_64.getString());
  all_values.push_back(SecurityXML_128);
  all_compo_names.insert("SecurityXML");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionMaintenanceRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_98;
    FIX::PartyID PartyID_98("STRING_931637346");
    noPartyIDs_0_0.set(PartyID_98);
    Parties_NoPartyIDs_98.insert(PartyID_98.getString());
    FIX::PartyIDSource PartyIDSource_98('6');
    noPartyIDs_0_0.set(PartyIDSource_98);
    Parties_NoPartyIDs_98.insert(PartyIDSource_98.getString());
    FIX::PartyRole PartyRole_98(69);
    noPartyIDs_0_0.set(PartyRole_98);
    Parties_NoPartyIDs_98.insert(PartyRole_98.getString());
    all_values.push_back(Parties_NoPartyIDs_98);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_217;
      FIX::PartySubID PartySubID_217("STRING_1330653844");
      noPartySubIDs_0_1_0.set(PartySubID_217);
      PtysSubGrp_NoPartySubIDs_217.insert(PartySubID_217.getString());
      FIX::PartySubIDType PartySubIDType_217(18);
      noPartySubIDs_0_1_0.set(PartySubIDType_217);
      PtysSubGrp_NoPartySubIDs_217.insert(PartySubIDType_217.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_217);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_218;
      FIX::PartySubID PartySubID_218("STRING_1250015092");
      noPartySubIDs_0_1_1.set(PartySubID_218);
      PtysSubGrp_NoPartySubIDs_218.insert(PartySubID_218.getString());
      FIX::PartySubIDType PartySubIDType_218(12);
      noPartySubIDs_0_1_1.set(PartySubIDType_218);
      PtysSubGrp_NoPartySubIDs_218.insert(PartySubIDType_218.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_218);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionMaintenanceRequest::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_8;
    FIX::PosAmt PosAmt_8;
    PosAmt_8.setString("13562109");
    noPosAmt_0_0.set(PosAmt_8);
    PositionAmountData_NoPosAmt_8.insert(PosAmt_8.getString());
    FIX::PosAmtType PosAmtType_8("STRING_IMTM");
    noPosAmt_0_0.set(PosAmtType_8);
    PositionAmountData_NoPosAmt_8.insert(PosAmtType_8.getString());
    FIX::PositionCurrency PositionCurrency_8("STRING_521919957");
    noPosAmt_0_0.set(PositionCurrency_8);
    PositionAmountData_NoPosAmt_8.insert(PositionCurrency_8.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_8);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionMaintenanceRequest::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_5;
    FIX::LongQty LongQty_5;
    LongQty_5.setString("15247385");
    noPositions_0_0.set(LongQty_5);
    PositionQty_NoPositions_5.insert(LongQty_5.getString());
    FIX::PosQtyStatus PosQtyStatus_5(2);
    noPositions_0_0.set(PosQtyStatus_5);
    PositionQty_NoPositions_5.insert(PosQtyStatus_5.getString());
    FIX::PosType PosType_5("STRING_IES");
    noPositions_0_0.set(PosType_5);
    PositionQty_NoPositions_5.insert(PosType_5.getString());
    FIX::QuantityDate QuantityDate_5("LOCALMKTDATE_1679304194");
    noPositions_0_0.set(QuantityDate_5);
    PositionQty_NoPositions_5.insert(QuantityDate_5.getString());
    FIX::ShortQty ShortQty_5;
    ShortQty_5.setString("3208558");
    noPositions_0_0.set(ShortQty_5);
    PositionQty_NoPositions_5.insert(ShortQty_5.getString());
    all_values.push_back(PositionQty_NoPositions_5);
    all_compo_names.insert("PositionQty.NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_83;
      FIX::NestedPartyID NestedPartyID_83("STRING_251264041");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_83);
      NestedParties_NoNestedPartyIDs_83.insert(NestedPartyID_83.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_83('3');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_83);
      NestedParties_NoNestedPartyIDs_83.insert(NestedPartyIDSource_83.getString());
      FIX::NestedPartyRole NestedPartyRole_83(232595901);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_83);
      NestedParties_NoNestedPartyIDs_83.insert(NestedPartyRole_83.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_83);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_179;
        FIX::NestedPartySubID NestedPartySubID_179("STRING_1069041269");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_179);
        NstdPtysSubGrp_NoNestedPartySubIDs_179.insert(NestedPartySubID_179.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_179(722349885);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_179);
        NstdPtysSubGrp_NoNestedPartySubIDs_179.insert(NestedPartySubIDType_179.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_179);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_180;
        FIX::NestedPartySubID NestedPartySubID_180("STRING_1230646414");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_180);
        NstdPtysSubGrp_NoNestedPartySubIDs_180.insert(NestedPartySubID_180.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_180(1132388113);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_180);
        NstdPtysSubGrp_NoNestedPartySubIDs_180.insert(NestedPartySubIDType_180.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_180);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_84;
      FIX::NestedPartyID NestedPartyID_84("STRING_320127493");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_84);
      NestedParties_NoNestedPartyIDs_84.insert(NestedPartyID_84.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_84('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_84);
      NestedParties_NoNestedPartyIDs_84.insert(NestedPartyIDSource_84.getString());
      FIX::NestedPartyRole NestedPartyRole_84(1774707508);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_84);
      NestedParties_NoNestedPartyIDs_84.insert(NestedPartyRole_84.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_84);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_181;
        FIX::NestedPartySubID NestedPartySubID_181("STRING_2095875245");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_181);
        NstdPtysSubGrp_NoNestedPartySubIDs_181.insert(NestedPartySubID_181.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_181(1602526076);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_181);
        NstdPtysSubGrp_NoNestedPartySubIDs_181.insert(NestedPartySubIDType_181.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_181);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_182;
        FIX::NestedPartySubID NestedPartySubID_182("STRING_58511536");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_182);
        NstdPtysSubGrp_NoNestedPartySubIDs_182.insert(NestedPartySubID_182.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_182(1166608198);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_182);
        NstdPtysSubGrp_NoNestedPartySubIDs_182.insert(NestedPartySubIDType_182.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_182);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_183;
        FIX::NestedPartySubID NestedPartySubID_183("STRING_785696272");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_183);
        NstdPtysSubGrp_NoNestedPartySubIDs_183.insert(NestedPartySubID_183.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_183(678671643);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_183);
        NstdPtysSubGrp_NoNestedPartySubIDs_183.insert(NestedPartySubIDType_183.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_183);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_85;
      FIX::NestedPartyID NestedPartyID_85("STRING_269139642");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_85);
      NestedParties_NoNestedPartyIDs_85.insert(NestedPartyID_85.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_85('6');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_85);
      NestedParties_NoNestedPartyIDs_85.insert(NestedPartyIDSource_85.getString());
      FIX::NestedPartyRole NestedPartyRole_85(1828226194);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_85);
      NestedParties_NoNestedPartyIDs_85.insert(NestedPartyRole_85.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_85);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_184;
        FIX::NestedPartySubID NestedPartySubID_184("STRING_1105924288");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_184);
        NstdPtysSubGrp_NoNestedPartySubIDs_184.insert(NestedPartySubID_184.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_184(202662503);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_184);
        NstdPtysSubGrp_NoNestedPartySubIDs_184.insert(NestedPartySubIDType_184.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_184);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_185;
        FIX::NestedPartySubID NestedPartySubID_185("STRING_1741764501");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_185);
        NstdPtysSubGrp_NoNestedPartySubIDs_185.insert(NestedPartySubID_185.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_185(483179218);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_185);
        NstdPtysSubGrp_NoNestedPartySubIDs_185.insert(NestedPartySubIDType_185.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_185);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_6;
    FIX::LongQty LongQty_6;
    LongQty_6.setString("17316640");
    noPositions_0_1.set(LongQty_6);
    PositionQty_NoPositions_6.insert(LongQty_6.getString());
    FIX::PosQtyStatus PosQtyStatus_6(0);
    noPositions_0_1.set(PosQtyStatus_6);
    PositionQty_NoPositions_6.insert(PosQtyStatus_6.getString());
    FIX::PosType PosType_6("STRING_EP");
    noPositions_0_1.set(PosType_6);
    PositionQty_NoPositions_6.insert(PosType_6.getString());
    FIX::QuantityDate QuantityDate_6("LOCALMKTDATE_2052519876");
    noPositions_0_1.set(QuantityDate_6);
    PositionQty_NoPositions_6.insert(QuantityDate_6.getString());
    FIX::ShortQty ShortQty_6;
    ShortQty_6.setString("13933182");
    noPositions_0_1.set(ShortQty_6);
    PositionQty_NoPositions_6.insert(ShortQty_6.getString());
    all_values.push_back(PositionQty_NoPositions_6);
    all_compo_names.insert("PositionQty.NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_86;
      FIX::NestedPartyID NestedPartyID_86("STRING_262062836");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_86);
      NestedParties_NoNestedPartyIDs_86.insert(NestedPartyID_86.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_86('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_86);
      NestedParties_NoNestedPartyIDs_86.insert(NestedPartyIDSource_86.getString());
      FIX::NestedPartyRole NestedPartyRole_86(1185671982);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_86);
      NestedParties_NoNestedPartyIDs_86.insert(NestedPartyRole_86.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_86);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_186;
        FIX::NestedPartySubID NestedPartySubID_186("STRING_200780404");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_186);
        NstdPtysSubGrp_NoNestedPartySubIDs_186.insert(NestedPartySubID_186.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_186(268834748);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_186);
        NstdPtysSubGrp_NoNestedPartySubIDs_186.insert(NestedPartySubIDType_186.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_186);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_187;
        FIX::NestedPartySubID NestedPartySubID_187("STRING_316008570");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_187);
        NstdPtysSubGrp_NoNestedPartySubIDs_187.insert(NestedPartySubID_187.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_187(520907897);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_187);
        NstdPtysSubGrp_NoNestedPartySubIDs_187.insert(NestedPartySubIDType_187.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_187);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_87;
      FIX::NestedPartyID NestedPartyID_87("STRING_1433072647");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_87);
      NestedParties_NoNestedPartyIDs_87.insert(NestedPartyID_87.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_87('2');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_87);
      NestedParties_NoNestedPartyIDs_87.insert(NestedPartyIDSource_87.getString());
      FIX::NestedPartyRole NestedPartyRole_87(1012228402);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_87);
      NestedParties_NoNestedPartyIDs_87.insert(NestedPartyRole_87.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_87);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_188;
        FIX::NestedPartySubID NestedPartySubID_188("STRING_1545758506");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_188);
        NstdPtysSubGrp_NoNestedPartySubIDs_188.insert(NestedPartySubID_188.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_188(1070739938);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_188);
        NstdPtysSubGrp_NoNestedPartySubIDs_188.insert(NestedPartySubIDType_188.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_188);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_189;
        FIX::NestedPartySubID NestedPartySubID_189("STRING_400588794");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_189);
        NstdPtysSubGrp_NoNestedPartySubIDs_189.insert(NestedPartySubID_189.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_189(183971131);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_189);
        NstdPtysSubGrp_NoNestedPartySubIDs_189.insert(NestedPartySubIDType_189.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_189);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_88;
      FIX::NestedPartyID NestedPartyID_88("STRING_1749411582");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_88);
      NestedParties_NoNestedPartyIDs_88.insert(NestedPartyID_88.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_88('6');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_88);
      NestedParties_NoNestedPartyIDs_88.insert(NestedPartyIDSource_88.getString());
      FIX::NestedPartyRole NestedPartyRole_88(252823526);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_88);
      NestedParties_NoNestedPartyIDs_88.insert(NestedPartyRole_88.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_88);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_190;
        FIX::NestedPartySubID NestedPartySubID_190("STRING_147595386");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_190);
        NstdPtysSubGrp_NoNestedPartySubIDs_190.insert(NestedPartySubID_190.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_190(1358747815);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_190);
        NstdPtysSubGrp_NoNestedPartySubIDs_190.insert(NestedPartySubIDType_190.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_190);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_191;
        FIX::NestedPartySubID NestedPartySubID_191("STRING_1632816631");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_191);
        NstdPtysSubGrp_NoNestedPartySubIDs_191.insert(NestedPartySubID_191.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_191(1889359888);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_191);
        NstdPtysSubGrp_NoNestedPartySubIDs_191.insert(NestedPartySubIDType_191.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_191);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_192;
        FIX::NestedPartySubID NestedPartySubID_192("STRING_1841927033");
        noNestedPartySubIDs_1_2_2_2.set(NestedPartySubID_192);
        NstdPtysSubGrp_NoNestedPartySubIDs_192.insert(NestedPartySubID_192.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_192(1216996990);
        noNestedPartySubIDs_1_2_2_2.set(NestedPartySubIDType_192);
        NstdPtysSubGrp_NoNestedPartySubIDs_192.insert(NestedPartySubIDType_192.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_192);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noPositions_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoPositions noPositions_0_2;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_7;
    FIX::LongQty LongQty_7;
    LongQty_7.setString("19041335");
    noPositions_0_2.set(LongQty_7);
    PositionQty_NoPositions_7.insert(LongQty_7.getString());
    FIX::PosQtyStatus PosQtyStatus_7(0);
    noPositions_0_2.set(PosQtyStatus_7);
    PositionQty_NoPositions_7.insert(PosQtyStatus_7.getString());
    FIX::PosType PosType_7("STRING_DLT");
    noPositions_0_2.set(PosType_7);
    PositionQty_NoPositions_7.insert(PosType_7.getString());
    FIX::QuantityDate QuantityDate_7("LOCALMKTDATE_1149968210");
    noPositions_0_2.set(QuantityDate_7);
    PositionQty_NoPositions_7.insert(QuantityDate_7.getString());
    FIX::ShortQty ShortQty_7;
    ShortQty_7.setString("21231906");
    noPositions_0_2.set(ShortQty_7);
    PositionQty_NoPositions_7.insert(ShortQty_7.getString());
    all_values.push_back(PositionQty_NoPositions_7);
    all_compo_names.insert("PositionQty.NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_89;
      FIX::NestedPartyID NestedPartyID_89("STRING_628398728");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_89);
      NestedParties_NoNestedPartyIDs_89.insert(NestedPartyID_89.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_89('1');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_89);
      NestedParties_NoNestedPartyIDs_89.insert(NestedPartyIDSource_89.getString());
      FIX::NestedPartyRole NestedPartyRole_89(567716512);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_89);
      NestedParties_NoNestedPartyIDs_89.insert(NestedPartyRole_89.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_89);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_193;
        FIX::NestedPartySubID NestedPartySubID_193("STRING_1430213685");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_193);
        NstdPtysSubGrp_NoNestedPartySubIDs_193.insert(NestedPartySubID_193.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_193(883725082);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_193);
        NstdPtysSubGrp_NoNestedPartySubIDs_193.insert(NestedPartySubIDType_193.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_193);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_90;
      FIX::NestedPartyID NestedPartyID_90("STRING_1350087030");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_90);
      NestedParties_NoNestedPartyIDs_90.insert(NestedPartyID_90.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_90('7');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_90);
      NestedParties_NoNestedPartyIDs_90.insert(NestedPartyIDSource_90.getString());
      FIX::NestedPartyRole NestedPartyRole_90(826957512);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_90);
      NestedParties_NoNestedPartyIDs_90.insert(NestedPartyRole_90.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_90);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_194;
        FIX::NestedPartySubID NestedPartySubID_194("STRING_2097266928");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_194);
        NstdPtysSubGrp_NoNestedPartySubIDs_194.insert(NestedPartySubID_194.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_194(225232370);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_194);
        NstdPtysSubGrp_NoNestedPartySubIDs_194.insert(NestedPartySubIDType_194.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_194);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_195;
        FIX::NestedPartySubID NestedPartySubID_195("STRING_1285571723");
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubID_195);
        NstdPtysSubGrp_NoNestedPartySubIDs_195.insert(NestedPartySubID_195.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_195(350372074);
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubIDType_195);
        NstdPtysSubGrp_NoNestedPartySubIDs_195.insert(NestedPartySubIDType_195.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_195);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_196;
        FIX::NestedPartySubID NestedPartySubID_196("STRING_409203501");
        noNestedPartySubIDs_2_1_2_2.set(NestedPartySubID_196);
        NstdPtysSubGrp_NoNestedPartySubIDs_196.insert(NestedPartySubID_196.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_196(887499657);
        noNestedPartySubIDs_2_1_2_2.set(NestedPartySubIDType_196);
        NstdPtysSubGrp_NoNestedPartySubIDs_196.insert(NestedPartySubIDType_196.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_196);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_2);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_91;
      FIX::NestedPartyID NestedPartyID_91("STRING_1020100511");
      noNestedPartyIDs_2_1_2.set(NestedPartyID_91);
      NestedParties_NoNestedPartyIDs_91.insert(NestedPartyID_91.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_91('6');
      noNestedPartyIDs_2_1_2.set(NestedPartyIDSource_91);
      NestedParties_NoNestedPartyIDs_91.insert(NestedPartyIDSource_91.getString());
      FIX::NestedPartyRole NestedPartyRole_91(170170137);
      noNestedPartyIDs_2_1_2.set(NestedPartyRole_91);
      NestedParties_NoNestedPartyIDs_91.insert(NestedPartyRole_91.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_91);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_197;
        FIX::NestedPartySubID NestedPartySubID_197("STRING_2020774843");
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubID_197);
        NstdPtysSubGrp_NoNestedPartySubIDs_197.insert(NestedPartySubID_197.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_197(1802986768);
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubIDType_197);
        NstdPtysSubGrp_NoNestedPartySubIDs_197.insert(NestedPartySubIDType_197.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_197);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_2);
    }
    msg.addGroup(noPositions_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::PositionMaintenanceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_25;
    FIX::TradingSessionID TradingSessionID_77("STRING_5");
    noTradingSessions_0_0.set(TradingSessionID_77);
    TrdgSesGrp_NoTradingSessions_25.insert(TradingSessionID_77.getString());
    FIX::TradingSessionSubID TradingSessionSubID_77("STRING_1");
    noTradingSessions_0_0.set(TradingSessionSubID_77);
    TrdgSesGrp_NoTradingSessions_25.insert(TradingSessionSubID_77.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_25);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_26;
    FIX::TradingSessionID TradingSessionID_78("STRING_5");
    noTradingSessions_0_1.set(TradingSessionID_78);
    TrdgSesGrp_NoTradingSessions_26.insert(TradingSessionID_78.getString());
    FIX::TradingSessionSubID TradingSessionSubID_78("STRING_7");
    noTradingSessions_0_1.set(TradingSessionSubID_78);
    TrdgSesGrp_NoTradingSessions_26.insert(TradingSessionSubID_78.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_26);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_27;
    FIX::TradingSessionID TradingSessionID_79("STRING_5");
    noTradingSessions_0_2.set(TradingSessionID_79);
    TrdgSesGrp_NoTradingSessions_27.insert(TradingSessionID_79.getString());
    FIX::TradingSessionSubID TradingSessionSubID_79("STRING_1");
    noTradingSessions_0_2.set(TradingSessionSubID_79);
    TrdgSesGrp_NoTradingSessions_27.insert(TradingSessionSubID_79.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_27);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionMaintenanceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_92;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_92("DATA_1231145737");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_92);
    UnderlyingInstrument_92.insert(EncodedUnderlyingIssuer_92.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_92(297105373);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_92);
    UnderlyingInstrument_92.insert(EncodedUnderlyingIssuerLen_92.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_92("DATA_414263619");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_92);
    UnderlyingInstrument_92.insert(EncodedUnderlyingSecurityDesc_92.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_92(1798862249);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_92);
    UnderlyingInstrument_92.insert(EncodedUnderlyingSecurityDescLen_92.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_92;
    UnderlyingAdjustedQuantity_92.setString("11262845");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_92);
    UnderlyingInstrument_92.insert(UnderlyingAdjustedQuantity_92.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_92;
    UnderlyingAllocationPercent_92.setString("73.040000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_92);
    UnderlyingInstrument_92.insert(UnderlyingAllocationPercent_92.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_92;
    UnderlyingAttachmentPoint_92.setString("36.830000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_92);
    UnderlyingInstrument_92.insert(UnderlyingAttachmentPoint_92.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_92("STRING_328887887");
    noUnderlyings_0_0.set(UnderlyingCFICode_92);
    UnderlyingInstrument_92.insert(UnderlyingCFICode_92.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_92("STRING_412796340");
    noUnderlyings_0_0.set(UnderlyingCPProgram_92);
    UnderlyingInstrument_92.insert(UnderlyingCPProgram_92.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_92("STRING_1362061195");
    noUnderlyings_0_0.set(UnderlyingCPRegType_92);
    UnderlyingInstrument_92.insert(UnderlyingCPRegType_92.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_92;
    UnderlyingCapValue_92.setString("5437196");
    noUnderlyings_0_0.set(UnderlyingCapValue_92);
    UnderlyingInstrument_92.insert(UnderlyingCapValue_92.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_92;
    UnderlyingCashAmount_92.setString("3625796");
    noUnderlyings_0_0.set(UnderlyingCashAmount_92);
    UnderlyingInstrument_92.insert(UnderlyingCashAmount_92.getString());
    FIX::UnderlyingCashType UnderlyingCashType_92("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_92);
    UnderlyingInstrument_92.insert(UnderlyingCashType_92.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_92;
    UnderlyingContractMultiplier_92.setString("18292913");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_92);
    UnderlyingInstrument_92.insert(UnderlyingContractMultiplier_92.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_92(712951695);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_92);
    UnderlyingInstrument_92.insert(UnderlyingContractMultiplierUnit_92.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_92("COUNTRY_1996497067");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_92);
    UnderlyingInstrument_92.insert(UnderlyingCountryOfIssue_92.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_92("LOCALMKTDATE_569307404");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_92);
    UnderlyingInstrument_92.insert(UnderlyingCouponPaymentDate_92.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_92;
    UnderlyingCouponRate_92.setString("22.060000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_92);
    UnderlyingInstrument_92.insert(UnderlyingCouponRate_92.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_92("STRING_511040447");
    noUnderlyings_0_0.set(UnderlyingCreditRating_92);
    UnderlyingInstrument_92.insert(UnderlyingCreditRating_92.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_92("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_92);
    UnderlyingInstrument_92.insert(UnderlyingCurrency_92.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_92;
    UnderlyingCurrentValue_92.setString("3843316");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_92);
    UnderlyingInstrument_92.insert(UnderlyingCurrentValue_92.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_92;
    UnderlyingDetachmentPoint_92.setString("6.610000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_92);
    UnderlyingInstrument_92.insert(UnderlyingDetachmentPoint_92.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_92;
    UnderlyingDirtyPrice_92.setString("16628365");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_92);
    UnderlyingInstrument_92.insert(UnderlyingDirtyPrice_92.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_92;
    UnderlyingEndPrice_92.setString("20995498");
    noUnderlyings_0_0.set(UnderlyingEndPrice_92);
    UnderlyingInstrument_92.insert(UnderlyingEndPrice_92.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_92;
    UnderlyingEndValue_92.setString("12674807");
    noUnderlyings_0_0.set(UnderlyingEndValue_92);
    UnderlyingInstrument_92.insert(UnderlyingEndValue_92.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_92(181575029);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_92);
    UnderlyingInstrument_92.insert(UnderlyingExerciseStyle_92.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_92;
    UnderlyingFXRate_92.setString("13767275");
    noUnderlyings_0_0.set(UnderlyingFXRate_92);
    UnderlyingInstrument_92.insert(UnderlyingFXRate_92.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_92('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_92);
    UnderlyingInstrument_92.insert(UnderlyingFXRateCalc_92.getString());
    FIX::UnderlyingFactor UnderlyingFactor_92;
    UnderlyingFactor_92.setString("19977653");
    noUnderlyings_0_0.set(UnderlyingFactor_92);
    UnderlyingInstrument_92.insert(UnderlyingFactor_92.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_92(629612282);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_92);
    UnderlyingInstrument_92.insert(UnderlyingFlowScheduleType_92.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_92("STRING_198192543");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_92);
    UnderlyingInstrument_92.insert(UnderlyingInstrRegistry_92.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_92("LOCALMKTDATE_147387046");
    noUnderlyings_0_0.set(UnderlyingIssueDate_92);
    UnderlyingInstrument_92.insert(UnderlyingIssueDate_92.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_92("STRING_1043875901");
    noUnderlyings_0_0.set(UnderlyingIssuer_92);
    UnderlyingInstrument_92.insert(UnderlyingIssuer_92.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_92("STRING_1997054792");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_92);
    UnderlyingInstrument_92.insert(UnderlyingLocaleOfIssue_92.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_92("LOCALMKTDATE_1273671552");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_92);
    UnderlyingInstrument_92.insert(UnderlyingMaturityDate_92.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_92("MONTHYEAR_740869558");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_92);
    UnderlyingInstrument_92.insert(UnderlyingMaturityMonthYear_92.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_92("TZTIMEONLY_384674827");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_92);
    UnderlyingInstrument_92.insert(UnderlyingMaturityTime_92.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_92;
    UnderlyingNotionalPercentageOutstanding_92.setString("94.390000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_92);
    UnderlyingInstrument_92.insert(UnderlyingNotionalPercentageOutstanding_92.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_92('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_92);
    UnderlyingInstrument_92.insert(UnderlyingOptAttribute_92.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_92;
    UnderlyingOriginalNotionalPercentageOutstanding_92.setString("60.220000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_92);
    UnderlyingInstrument_92.insert(UnderlyingOriginalNotionalPercentageOutstanding_92.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_92("STRING_2146279111");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_92);
    UnderlyingInstrument_92.insert(UnderlyingPriceUnitOfMeasure_92.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_92;
    UnderlyingPriceUnitOfMeasureQty_92.setString("15162455");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_92);
    UnderlyingInstrument_92.insert(UnderlyingPriceUnitOfMeasureQty_92.getString());
    FIX::UnderlyingProduct UnderlyingProduct_92(1186545940);
    noUnderlyings_0_0.set(UnderlyingProduct_92);
    UnderlyingInstrument_92.insert(UnderlyingProduct_92.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_92(1828086858);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_92);
    UnderlyingInstrument_92.insert(UnderlyingPutOrCall_92.getString());
    FIX::UnderlyingPx UnderlyingPx_92;
    UnderlyingPx_92.setString("817135");
    noUnderlyings_0_0.set(UnderlyingPx_92);
    UnderlyingInstrument_92.insert(UnderlyingPx_92.getString());
    FIX::UnderlyingQty UnderlyingQty_92;
    UnderlyingQty_92.setString("10355593");
    noUnderlyings_0_0.set(UnderlyingQty_92);
    UnderlyingInstrument_92.insert(UnderlyingQty_92.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_92("LOCALMKTDATE_249910614");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_92);
    UnderlyingInstrument_92.insert(UnderlyingRedemptionDate_92.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_92("STRING_1814765772");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_92);
    UnderlyingInstrument_92.insert(UnderlyingRepoCollateralSecurityType_92.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_92;
    UnderlyingRepurchaseRate_92.setString("98.060000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_92);
    UnderlyingInstrument_92.insert(UnderlyingRepurchaseRate_92.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_92(989388155);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_92);
    UnderlyingInstrument_92.insert(UnderlyingRepurchaseTerm_92.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_92("STRING_420546581");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_92);
    UnderlyingInstrument_92.insert(UnderlyingRestructuringType_92.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_92("STRING_1930931448");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_92);
    UnderlyingInstrument_92.insert(UnderlyingSecurityDesc_92.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_92("EXCHANGE_1384368817");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_92);
    UnderlyingInstrument_92.insert(UnderlyingSecurityExchange_92.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_92("STRING_2083383175");
    noUnderlyings_0_0.set(UnderlyingSecurityID_92);
    UnderlyingInstrument_92.insert(UnderlyingSecurityID_92.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_92("STRING_1882997670");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_92);
    UnderlyingInstrument_92.insert(UnderlyingSecurityIDSource_92.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_92("STRING_504365941");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_92);
    UnderlyingInstrument_92.insert(UnderlyingSecuritySubType_92.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_92("STRING_117474556");
    noUnderlyings_0_0.set(UnderlyingSecurityType_92);
    UnderlyingInstrument_92.insert(UnderlyingSecurityType_92.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_92("STRING_1112241621");
    noUnderlyings_0_0.set(UnderlyingSeniority_92);
    UnderlyingInstrument_92.insert(UnderlyingSeniority_92.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_92("STRING_1618896396");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_92);
    UnderlyingInstrument_92.insert(UnderlyingSettlMethod_92.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_92(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_92);
    UnderlyingInstrument_92.insert(UnderlyingSettlementType_92.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_92;
    UnderlyingStartValue_92.setString("17418539");
    noUnderlyings_0_0.set(UnderlyingStartValue_92);
    UnderlyingInstrument_92.insert(UnderlyingStartValue_92.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_92("STRING_1817088939");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_92);
    UnderlyingInstrument_92.insert(UnderlyingStateOrProvinceOfIssue_92.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_92("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_92);
    UnderlyingInstrument_92.insert(UnderlyingStrikeCurrency_92.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_92;
    UnderlyingStrikePrice_92.setString("16666600");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_92);
    UnderlyingInstrument_92.insert(UnderlyingStrikePrice_92.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_92("STRING_1388814828");
    noUnderlyings_0_0.set(UnderlyingSymbol_92);
    UnderlyingInstrument_92.insert(UnderlyingSymbol_92.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_92("STRING_1379115714");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_92);
    UnderlyingInstrument_92.insert(UnderlyingSymbolSfx_92.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_92("STRING_2051334911");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_92);
    UnderlyingInstrument_92.insert(UnderlyingTimeUnit_92.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_92("STRING_843890620");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_92);
    UnderlyingInstrument_92.insert(UnderlyingUnitOfMeasure_92.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_92;
    UnderlyingUnitOfMeasureQty_92.setString("3852979");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_92);
    UnderlyingInstrument_92.insert(UnderlyingUnitOfMeasureQty_92.getString());
    all_values.push_back(UnderlyingInstrument_92);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_184;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_184("STRING_842686083");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_184);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_184.insert(UnderlyingSecurityAltID_184.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_184("STRING_1901543484");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_184);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_184.insert(UnderlyingSecurityAltIDSource_184.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_184);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_185;
      FIX::UnderlyingStipType UnderlyingStipType_185("STRING_523289294");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_185);
      UnderlyingStipulations_NoUnderlyingStips_185.insert(UnderlyingStipType_185.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_185("STRING_1983257050");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_185);
      UnderlyingStipulations_NoUnderlyingStips_185.insert(UnderlyingStipValue_185.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_185);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_186;
      FIX::UnderlyingStipType UnderlyingStipType_186("STRING_1725208937");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_186);
      UnderlyingStipulations_NoUnderlyingStips_186.insert(UnderlyingStipType_186.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_186("STRING_773199908");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_186);
      UnderlyingStipulations_NoUnderlyingStips_186.insert(UnderlyingStipValue_186.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_186);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_187;
      FIX::UnderlyingStipType UnderlyingStipType_187("STRING_1650539174");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_187);
      UnderlyingStipulations_NoUnderlyingStips_187.insert(UnderlyingStipType_187.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_187("STRING_1124325095");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_187);
      UnderlyingStipulations_NoUnderlyingStips_187.insert(UnderlyingStipValue_187.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_187);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_171;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_171("STRING_2071085755");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_171);
      UndlyInstrumentParties_NoUndlyInstrumentParties_171.insert(UnderlyingInstrumentPartyID_171.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_171('9');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_171);
      UndlyInstrumentParties_NoUndlyInstrumentParties_171.insert(UnderlyingInstrumentPartyIDSource_171.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_171(999473233);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_171);
      UndlyInstrumentParties_NoUndlyInstrumentParties_171.insert(UnderlyingInstrumentPartyRole_171.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_171);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_340("STRING_643286917");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_340);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340.insert(UnderlyingInstrumentPartySubID_340.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_340(1503839174);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_340);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340.insert(UnderlyingInstrumentPartySubIDType_340.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_341("STRING_2124459839");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_341);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341.insert(UnderlyingInstrumentPartySubID_341.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_341(1755528538);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_341);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341.insert(UnderlyingInstrumentPartySubIDType_341.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_172;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_172("STRING_975251922");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_172);
      UndlyInstrumentParties_NoUndlyInstrumentParties_172.insert(UnderlyingInstrumentPartyID_172.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_172('2');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_172);
      UndlyInstrumentParties_NoUndlyInstrumentParties_172.insert(UnderlyingInstrumentPartyIDSource_172.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_172(1349898793);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_172);
      UndlyInstrumentParties_NoUndlyInstrumentParties_172.insert(UnderlyingInstrumentPartyRole_172.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_172);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_342("STRING_59875698");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_342);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342.insert(UnderlyingInstrumentPartySubID_342.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_342(1988144949);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_342);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342.insert(UnderlyingInstrumentPartySubIDType_342.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_343("STRING_164033650");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_343);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343.insert(UnderlyingInstrumentPartySubID_343.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_343(1448690526);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_343);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343.insert(UnderlyingInstrumentPartySubIDType_343.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_344("STRING_1219777016");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_344);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344.insert(UnderlyingInstrumentPartySubID_344.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_344(67884913);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_344);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344.insert(UnderlyingInstrumentPartySubIDType_344.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_173;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_173("STRING_145097498");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_173);
      UndlyInstrumentParties_NoUndlyInstrumentParties_173.insert(UnderlyingInstrumentPartyID_173.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_173('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_173);
      UndlyInstrumentParties_NoUndlyInstrumentParties_173.insert(UnderlyingInstrumentPartyIDSource_173.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_173(1718472199);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_173);
      UndlyInstrumentParties_NoUndlyInstrumentParties_173.insert(UnderlyingInstrumentPartyRole_173.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_173);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_345("STRING_1359134817");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_345);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345.insert(UnderlyingInstrumentPartySubID_345.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_345(260638129);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_345);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345.insert(UnderlyingInstrumentPartySubIDType_345.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_93;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_93("DATA_1511072876");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_93);
    UnderlyingInstrument_93.insert(EncodedUnderlyingIssuer_93.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_93(1194908219);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_93);
    UnderlyingInstrument_93.insert(EncodedUnderlyingIssuerLen_93.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_93("DATA_1985847066");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_93);
    UnderlyingInstrument_93.insert(EncodedUnderlyingSecurityDesc_93.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_93(136789136);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_93);
    UnderlyingInstrument_93.insert(EncodedUnderlyingSecurityDescLen_93.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_93;
    UnderlyingAdjustedQuantity_93.setString("6979637");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_93);
    UnderlyingInstrument_93.insert(UnderlyingAdjustedQuantity_93.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_93;
    UnderlyingAllocationPercent_93.setString("85.130000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_93);
    UnderlyingInstrument_93.insert(UnderlyingAllocationPercent_93.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_93;
    UnderlyingAttachmentPoint_93.setString("72.000000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_93);
    UnderlyingInstrument_93.insert(UnderlyingAttachmentPoint_93.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_93("STRING_621565853");
    noUnderlyings_0_1.set(UnderlyingCFICode_93);
    UnderlyingInstrument_93.insert(UnderlyingCFICode_93.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_93("STRING_1870461408");
    noUnderlyings_0_1.set(UnderlyingCPProgram_93);
    UnderlyingInstrument_93.insert(UnderlyingCPProgram_93.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_93("STRING_751366785");
    noUnderlyings_0_1.set(UnderlyingCPRegType_93);
    UnderlyingInstrument_93.insert(UnderlyingCPRegType_93.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_93;
    UnderlyingCapValue_93.setString("4810674");
    noUnderlyings_0_1.set(UnderlyingCapValue_93);
    UnderlyingInstrument_93.insert(UnderlyingCapValue_93.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_93;
    UnderlyingCashAmount_93.setString("3662646");
    noUnderlyings_0_1.set(UnderlyingCashAmount_93);
    UnderlyingInstrument_93.insert(UnderlyingCashAmount_93.getString());
    FIX::UnderlyingCashType UnderlyingCashType_93("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_93);
    UnderlyingInstrument_93.insert(UnderlyingCashType_93.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_93;
    UnderlyingContractMultiplier_93.setString("4580436");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_93);
    UnderlyingInstrument_93.insert(UnderlyingContractMultiplier_93.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_93(2121793215);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_93);
    UnderlyingInstrument_93.insert(UnderlyingContractMultiplierUnit_93.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_93("COUNTRY_1082974234");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_93);
    UnderlyingInstrument_93.insert(UnderlyingCountryOfIssue_93.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_93("LOCALMKTDATE_402776101");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_93);
    UnderlyingInstrument_93.insert(UnderlyingCouponPaymentDate_93.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_93;
    UnderlyingCouponRate_93.setString("83.600000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_93);
    UnderlyingInstrument_93.insert(UnderlyingCouponRate_93.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_93("STRING_1727831448");
    noUnderlyings_0_1.set(UnderlyingCreditRating_93);
    UnderlyingInstrument_93.insert(UnderlyingCreditRating_93.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_93("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_93);
    UnderlyingInstrument_93.insert(UnderlyingCurrency_93.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_93;
    UnderlyingCurrentValue_93.setString("18918650");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_93);
    UnderlyingInstrument_93.insert(UnderlyingCurrentValue_93.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_93;
    UnderlyingDetachmentPoint_93.setString("23.250000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_93);
    UnderlyingInstrument_93.insert(UnderlyingDetachmentPoint_93.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_93;
    UnderlyingDirtyPrice_93.setString("2371630");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_93);
    UnderlyingInstrument_93.insert(UnderlyingDirtyPrice_93.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_93;
    UnderlyingEndPrice_93.setString("19597500");
    noUnderlyings_0_1.set(UnderlyingEndPrice_93);
    UnderlyingInstrument_93.insert(UnderlyingEndPrice_93.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_93;
    UnderlyingEndValue_93.setString("20564398");
    noUnderlyings_0_1.set(UnderlyingEndValue_93);
    UnderlyingInstrument_93.insert(UnderlyingEndValue_93.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_93(1842238011);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_93);
    UnderlyingInstrument_93.insert(UnderlyingExerciseStyle_93.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_93;
    UnderlyingFXRate_93.setString("15307385");
    noUnderlyings_0_1.set(UnderlyingFXRate_93);
    UnderlyingInstrument_93.insert(UnderlyingFXRate_93.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_93('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_93);
    UnderlyingInstrument_93.insert(UnderlyingFXRateCalc_93.getString());
    FIX::UnderlyingFactor UnderlyingFactor_93;
    UnderlyingFactor_93.setString("10538891");
    noUnderlyings_0_1.set(UnderlyingFactor_93);
    UnderlyingInstrument_93.insert(UnderlyingFactor_93.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_93(1791376693);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_93);
    UnderlyingInstrument_93.insert(UnderlyingFlowScheduleType_93.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_93("STRING_260328986");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_93);
    UnderlyingInstrument_93.insert(UnderlyingInstrRegistry_93.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_93("LOCALMKTDATE_101313751");
    noUnderlyings_0_1.set(UnderlyingIssueDate_93);
    UnderlyingInstrument_93.insert(UnderlyingIssueDate_93.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_93("STRING_1629740111");
    noUnderlyings_0_1.set(UnderlyingIssuer_93);
    UnderlyingInstrument_93.insert(UnderlyingIssuer_93.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_93("STRING_397118122");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_93);
    UnderlyingInstrument_93.insert(UnderlyingLocaleOfIssue_93.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_93("LOCALMKTDATE_799277496");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_93);
    UnderlyingInstrument_93.insert(UnderlyingMaturityDate_93.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_93("MONTHYEAR_444944977");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_93);
    UnderlyingInstrument_93.insert(UnderlyingMaturityMonthYear_93.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_93("TZTIMEONLY_149011675");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_93);
    UnderlyingInstrument_93.insert(UnderlyingMaturityTime_93.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_93;
    UnderlyingNotionalPercentageOutstanding_93.setString("33.490000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_93);
    UnderlyingInstrument_93.insert(UnderlyingNotionalPercentageOutstanding_93.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_93('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_93);
    UnderlyingInstrument_93.insert(UnderlyingOptAttribute_93.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_93;
    UnderlyingOriginalNotionalPercentageOutstanding_93.setString("84.600000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_93);
    UnderlyingInstrument_93.insert(UnderlyingOriginalNotionalPercentageOutstanding_93.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_93("STRING_1901910837");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_93);
    UnderlyingInstrument_93.insert(UnderlyingPriceUnitOfMeasure_93.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_93;
    UnderlyingPriceUnitOfMeasureQty_93.setString("5341874");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_93);
    UnderlyingInstrument_93.insert(UnderlyingPriceUnitOfMeasureQty_93.getString());
    FIX::UnderlyingProduct UnderlyingProduct_93(1008100772);
    noUnderlyings_0_1.set(UnderlyingProduct_93);
    UnderlyingInstrument_93.insert(UnderlyingProduct_93.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_93(212470869);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_93);
    UnderlyingInstrument_93.insert(UnderlyingPutOrCall_93.getString());
    FIX::UnderlyingPx UnderlyingPx_93;
    UnderlyingPx_93.setString("5084969");
    noUnderlyings_0_1.set(UnderlyingPx_93);
    UnderlyingInstrument_93.insert(UnderlyingPx_93.getString());
    FIX::UnderlyingQty UnderlyingQty_93;
    UnderlyingQty_93.setString("20910750");
    noUnderlyings_0_1.set(UnderlyingQty_93);
    UnderlyingInstrument_93.insert(UnderlyingQty_93.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_93("LOCALMKTDATE_615246970");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_93);
    UnderlyingInstrument_93.insert(UnderlyingRedemptionDate_93.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_93("STRING_1832705343");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_93);
    UnderlyingInstrument_93.insert(UnderlyingRepoCollateralSecurityType_93.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_93;
    UnderlyingRepurchaseRate_93.setString("28.070000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_93);
    UnderlyingInstrument_93.insert(UnderlyingRepurchaseRate_93.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_93(1077898769);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_93);
    UnderlyingInstrument_93.insert(UnderlyingRepurchaseTerm_93.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_93("STRING_850091357");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_93);
    UnderlyingInstrument_93.insert(UnderlyingRestructuringType_93.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_93("STRING_1415804258");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_93);
    UnderlyingInstrument_93.insert(UnderlyingSecurityDesc_93.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_93("EXCHANGE_841757446");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_93);
    UnderlyingInstrument_93.insert(UnderlyingSecurityExchange_93.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_93("STRING_1087254387");
    noUnderlyings_0_1.set(UnderlyingSecurityID_93);
    UnderlyingInstrument_93.insert(UnderlyingSecurityID_93.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_93("STRING_1228070622");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_93);
    UnderlyingInstrument_93.insert(UnderlyingSecurityIDSource_93.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_93("STRING_750713622");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_93);
    UnderlyingInstrument_93.insert(UnderlyingSecuritySubType_93.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_93("STRING_782008750");
    noUnderlyings_0_1.set(UnderlyingSecurityType_93);
    UnderlyingInstrument_93.insert(UnderlyingSecurityType_93.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_93("STRING_611325537");
    noUnderlyings_0_1.set(UnderlyingSeniority_93);
    UnderlyingInstrument_93.insert(UnderlyingSeniority_93.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_93("STRING_1647453380");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_93);
    UnderlyingInstrument_93.insert(UnderlyingSettlMethod_93.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_93(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_93);
    UnderlyingInstrument_93.insert(UnderlyingSettlementType_93.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_93;
    UnderlyingStartValue_93.setString("2552185");
    noUnderlyings_0_1.set(UnderlyingStartValue_93);
    UnderlyingInstrument_93.insert(UnderlyingStartValue_93.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_93("STRING_1907782366");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_93);
    UnderlyingInstrument_93.insert(UnderlyingStateOrProvinceOfIssue_93.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_93("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_93);
    UnderlyingInstrument_93.insert(UnderlyingStrikeCurrency_93.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_93;
    UnderlyingStrikePrice_93.setString("1574168");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_93);
    UnderlyingInstrument_93.insert(UnderlyingStrikePrice_93.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_93("STRING_589005529");
    noUnderlyings_0_1.set(UnderlyingSymbol_93);
    UnderlyingInstrument_93.insert(UnderlyingSymbol_93.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_93("STRING_182420023");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_93);
    UnderlyingInstrument_93.insert(UnderlyingSymbolSfx_93.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_93("STRING_306428516");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_93);
    UnderlyingInstrument_93.insert(UnderlyingTimeUnit_93.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_93("STRING_2009848879");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_93);
    UnderlyingInstrument_93.insert(UnderlyingUnitOfMeasure_93.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_93;
    UnderlyingUnitOfMeasureQty_93.setString("3503427");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_93);
    UnderlyingInstrument_93.insert(UnderlyingUnitOfMeasureQty_93.getString());
    all_values.push_back(UnderlyingInstrument_93);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_185;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_185("STRING_1764276068");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_185);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_185.insert(UnderlyingSecurityAltID_185.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_185("STRING_884530175");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_185);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_185.insert(UnderlyingSecurityAltIDSource_185.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_185);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_188;
      FIX::UnderlyingStipType UnderlyingStipType_188("STRING_1976746937");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_188);
      UnderlyingStipulations_NoUnderlyingStips_188.insert(UnderlyingStipType_188.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_188("STRING_1393027158");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_188);
      UnderlyingStipulations_NoUnderlyingStips_188.insert(UnderlyingStipValue_188.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_188);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_189;
      FIX::UnderlyingStipType UnderlyingStipType_189("STRING_11015460");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_189);
      UnderlyingStipulations_NoUnderlyingStips_189.insert(UnderlyingStipType_189.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_189("STRING_444510259");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_189);
      UnderlyingStipulations_NoUnderlyingStips_189.insert(UnderlyingStipValue_189.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_189);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_174;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_174("STRING_1682438267");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_174);
      UndlyInstrumentParties_NoUndlyInstrumentParties_174.insert(UnderlyingInstrumentPartyID_174.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_174('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_174);
      UndlyInstrumentParties_NoUndlyInstrumentParties_174.insert(UnderlyingInstrumentPartyIDSource_174.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_174(1928340210);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_174);
      UndlyInstrumentParties_NoUndlyInstrumentParties_174.insert(UnderlyingInstrumentPartyRole_174.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_174);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_346("STRING_216682827");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_346);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346.insert(UnderlyingInstrumentPartySubID_346.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_346(868110949);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_346);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346.insert(UnderlyingInstrumentPartySubIDType_346.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_347("STRING_31345851");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_347);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347.insert(UnderlyingInstrumentPartySubID_347.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_347(967396449);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_347);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347.insert(UnderlyingInstrumentPartySubIDType_347.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_348("STRING_1650119699");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_348);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348.insert(UnderlyingInstrumentPartySubID_348.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_348(642671389);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_348);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348.insert(UnderlyingInstrumentPartySubIDType_348.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_175;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_175("STRING_467366182");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_175);
      UndlyInstrumentParties_NoUndlyInstrumentParties_175.insert(UnderlyingInstrumentPartyID_175.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_175('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_175);
      UndlyInstrumentParties_NoUndlyInstrumentParties_175.insert(UnderlyingInstrumentPartyIDSource_175.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_175(897889971);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_175);
      UndlyInstrumentParties_NoUndlyInstrumentParties_175.insert(UnderlyingInstrumentPartyRole_175.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_175);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_349("STRING_1128262014");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_349);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349.insert(UnderlyingInstrumentPartySubID_349.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_349(635365017);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_349);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349.insert(UnderlyingInstrumentPartySubIDType_349.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_94;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_94("DATA_385081741");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_94);
    UnderlyingInstrument_94.insert(EncodedUnderlyingIssuer_94.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_94(1717267543);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_94);
    UnderlyingInstrument_94.insert(EncodedUnderlyingIssuerLen_94.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_94("DATA_817785040");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_94);
    UnderlyingInstrument_94.insert(EncodedUnderlyingSecurityDesc_94.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_94(691510257);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_94);
    UnderlyingInstrument_94.insert(EncodedUnderlyingSecurityDescLen_94.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_94;
    UnderlyingAdjustedQuantity_94.setString("15796327");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_94);
    UnderlyingInstrument_94.insert(UnderlyingAdjustedQuantity_94.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_94;
    UnderlyingAllocationPercent_94.setString("78.010000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_94);
    UnderlyingInstrument_94.insert(UnderlyingAllocationPercent_94.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_94;
    UnderlyingAttachmentPoint_94.setString("72.340000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_94);
    UnderlyingInstrument_94.insert(UnderlyingAttachmentPoint_94.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_94("STRING_1196425195");
    noUnderlyings_0_2.set(UnderlyingCFICode_94);
    UnderlyingInstrument_94.insert(UnderlyingCFICode_94.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_94("STRING_2052657976");
    noUnderlyings_0_2.set(UnderlyingCPProgram_94);
    UnderlyingInstrument_94.insert(UnderlyingCPProgram_94.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_94("STRING_1965741335");
    noUnderlyings_0_2.set(UnderlyingCPRegType_94);
    UnderlyingInstrument_94.insert(UnderlyingCPRegType_94.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_94;
    UnderlyingCapValue_94.setString("10256884");
    noUnderlyings_0_2.set(UnderlyingCapValue_94);
    UnderlyingInstrument_94.insert(UnderlyingCapValue_94.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_94;
    UnderlyingCashAmount_94.setString("12982014");
    noUnderlyings_0_2.set(UnderlyingCashAmount_94);
    UnderlyingInstrument_94.insert(UnderlyingCashAmount_94.getString());
    FIX::UnderlyingCashType UnderlyingCashType_94("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_94);
    UnderlyingInstrument_94.insert(UnderlyingCashType_94.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_94;
    UnderlyingContractMultiplier_94.setString("14701987");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_94);
    UnderlyingInstrument_94.insert(UnderlyingContractMultiplier_94.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_94(228966691);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_94);
    UnderlyingInstrument_94.insert(UnderlyingContractMultiplierUnit_94.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_94("COUNTRY_1511711414");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_94);
    UnderlyingInstrument_94.insert(UnderlyingCountryOfIssue_94.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_94("LOCALMKTDATE_845124124");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_94);
    UnderlyingInstrument_94.insert(UnderlyingCouponPaymentDate_94.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_94;
    UnderlyingCouponRate_94.setString("32.530000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_94);
    UnderlyingInstrument_94.insert(UnderlyingCouponRate_94.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_94("STRING_314986644");
    noUnderlyings_0_2.set(UnderlyingCreditRating_94);
    UnderlyingInstrument_94.insert(UnderlyingCreditRating_94.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_94("USD");
    noUnderlyings_0_2.set(UnderlyingCurrency_94);
    UnderlyingInstrument_94.insert(UnderlyingCurrency_94.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_94;
    UnderlyingCurrentValue_94.setString("3463324");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_94);
    UnderlyingInstrument_94.insert(UnderlyingCurrentValue_94.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_94;
    UnderlyingDetachmentPoint_94.setString("34.010000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_94);
    UnderlyingInstrument_94.insert(UnderlyingDetachmentPoint_94.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_94;
    UnderlyingDirtyPrice_94.setString("3805702");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_94);
    UnderlyingInstrument_94.insert(UnderlyingDirtyPrice_94.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_94;
    UnderlyingEndPrice_94.setString("9890038");
    noUnderlyings_0_2.set(UnderlyingEndPrice_94);
    UnderlyingInstrument_94.insert(UnderlyingEndPrice_94.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_94;
    UnderlyingEndValue_94.setString("3490859");
    noUnderlyings_0_2.set(UnderlyingEndValue_94);
    UnderlyingInstrument_94.insert(UnderlyingEndValue_94.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_94(1719104234);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_94);
    UnderlyingInstrument_94.insert(UnderlyingExerciseStyle_94.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_94;
    UnderlyingFXRate_94.setString("18868938");
    noUnderlyings_0_2.set(UnderlyingFXRate_94);
    UnderlyingInstrument_94.insert(UnderlyingFXRate_94.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_94('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_94);
    UnderlyingInstrument_94.insert(UnderlyingFXRateCalc_94.getString());
    FIX::UnderlyingFactor UnderlyingFactor_94;
    UnderlyingFactor_94.setString("6998826");
    noUnderlyings_0_2.set(UnderlyingFactor_94);
    UnderlyingInstrument_94.insert(UnderlyingFactor_94.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_94(374775225);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_94);
    UnderlyingInstrument_94.insert(UnderlyingFlowScheduleType_94.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_94("STRING_961832577");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_94);
    UnderlyingInstrument_94.insert(UnderlyingInstrRegistry_94.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_94("LOCALMKTDATE_269666496");
    noUnderlyings_0_2.set(UnderlyingIssueDate_94);
    UnderlyingInstrument_94.insert(UnderlyingIssueDate_94.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_94("STRING_1192560266");
    noUnderlyings_0_2.set(UnderlyingIssuer_94);
    UnderlyingInstrument_94.insert(UnderlyingIssuer_94.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_94("STRING_1653342834");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_94);
    UnderlyingInstrument_94.insert(UnderlyingLocaleOfIssue_94.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_94("LOCALMKTDATE_1849299270");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_94);
    UnderlyingInstrument_94.insert(UnderlyingMaturityDate_94.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_94("MONTHYEAR_213204419");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_94);
    UnderlyingInstrument_94.insert(UnderlyingMaturityMonthYear_94.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_94("TZTIMEONLY_1404176420");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_94);
    UnderlyingInstrument_94.insert(UnderlyingMaturityTime_94.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_94;
    UnderlyingNotionalPercentageOutstanding_94.setString("8.170000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_94);
    UnderlyingInstrument_94.insert(UnderlyingNotionalPercentageOutstanding_94.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_94('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_94);
    UnderlyingInstrument_94.insert(UnderlyingOptAttribute_94.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_94;
    UnderlyingOriginalNotionalPercentageOutstanding_94.setString("41.070000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_94);
    UnderlyingInstrument_94.insert(UnderlyingOriginalNotionalPercentageOutstanding_94.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_94("STRING_1923929302");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_94);
    UnderlyingInstrument_94.insert(UnderlyingPriceUnitOfMeasure_94.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_94;
    UnderlyingPriceUnitOfMeasureQty_94.setString("14165802");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_94);
    UnderlyingInstrument_94.insert(UnderlyingPriceUnitOfMeasureQty_94.getString());
    FIX::UnderlyingProduct UnderlyingProduct_94(1051707254);
    noUnderlyings_0_2.set(UnderlyingProduct_94);
    UnderlyingInstrument_94.insert(UnderlyingProduct_94.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_94(1246644398);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_94);
    UnderlyingInstrument_94.insert(UnderlyingPutOrCall_94.getString());
    FIX::UnderlyingPx UnderlyingPx_94;
    UnderlyingPx_94.setString("16455469");
    noUnderlyings_0_2.set(UnderlyingPx_94);
    UnderlyingInstrument_94.insert(UnderlyingPx_94.getString());
    FIX::UnderlyingQty UnderlyingQty_94;
    UnderlyingQty_94.setString("4159350");
    noUnderlyings_0_2.set(UnderlyingQty_94);
    UnderlyingInstrument_94.insert(UnderlyingQty_94.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_94("LOCALMKTDATE_2091768522");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_94);
    UnderlyingInstrument_94.insert(UnderlyingRedemptionDate_94.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_94("STRING_1655370179");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_94);
    UnderlyingInstrument_94.insert(UnderlyingRepoCollateralSecurityType_94.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_94;
    UnderlyingRepurchaseRate_94.setString("16.650000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_94);
    UnderlyingInstrument_94.insert(UnderlyingRepurchaseRate_94.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_94(1006091826);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_94);
    UnderlyingInstrument_94.insert(UnderlyingRepurchaseTerm_94.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_94("STRING_385820733");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_94);
    UnderlyingInstrument_94.insert(UnderlyingRestructuringType_94.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_94("STRING_1077254160");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_94);
    UnderlyingInstrument_94.insert(UnderlyingSecurityDesc_94.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_94("EXCHANGE_887811579");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_94);
    UnderlyingInstrument_94.insert(UnderlyingSecurityExchange_94.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_94("STRING_766390987");
    noUnderlyings_0_2.set(UnderlyingSecurityID_94);
    UnderlyingInstrument_94.insert(UnderlyingSecurityID_94.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_94("STRING_2066258045");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_94);
    UnderlyingInstrument_94.insert(UnderlyingSecurityIDSource_94.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_94("STRING_1236897514");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_94);
    UnderlyingInstrument_94.insert(UnderlyingSecuritySubType_94.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_94("STRING_338011573");
    noUnderlyings_0_2.set(UnderlyingSecurityType_94);
    UnderlyingInstrument_94.insert(UnderlyingSecurityType_94.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_94("STRING_1805668253");
    noUnderlyings_0_2.set(UnderlyingSeniority_94);
    UnderlyingInstrument_94.insert(UnderlyingSeniority_94.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_94("STRING_1813648349");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_94);
    UnderlyingInstrument_94.insert(UnderlyingSettlMethod_94.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_94(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_94);
    UnderlyingInstrument_94.insert(UnderlyingSettlementType_94.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_94;
    UnderlyingStartValue_94.setString("329598");
    noUnderlyings_0_2.set(UnderlyingStartValue_94);
    UnderlyingInstrument_94.insert(UnderlyingStartValue_94.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_94("STRING_627997278");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_94);
    UnderlyingInstrument_94.insert(UnderlyingStateOrProvinceOfIssue_94.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_94("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_94);
    UnderlyingInstrument_94.insert(UnderlyingStrikeCurrency_94.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_94;
    UnderlyingStrikePrice_94.setString("1338564");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_94);
    UnderlyingInstrument_94.insert(UnderlyingStrikePrice_94.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_94("STRING_1009376292");
    noUnderlyings_0_2.set(UnderlyingSymbol_94);
    UnderlyingInstrument_94.insert(UnderlyingSymbol_94.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_94("STRING_1438724515");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_94);
    UnderlyingInstrument_94.insert(UnderlyingSymbolSfx_94.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_94("STRING_1538032885");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_94);
    UnderlyingInstrument_94.insert(UnderlyingTimeUnit_94.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_94("STRING_1907617110");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_94);
    UnderlyingInstrument_94.insert(UnderlyingUnitOfMeasure_94.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_94;
    UnderlyingUnitOfMeasureQty_94.setString("15571032");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_94);
    UnderlyingInstrument_94.insert(UnderlyingUnitOfMeasureQty_94.getString());
    all_values.push_back(UnderlyingInstrument_94);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_186;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_186("STRING_1684062764");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_186);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_186.insert(UnderlyingSecurityAltID_186.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_186("STRING_826199849");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_186);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_186.insert(UnderlyingSecurityAltIDSource_186.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_186);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_187;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_187("STRING_1664690599");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_187);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_187.insert(UnderlyingSecurityAltID_187.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_187("STRING_783223514");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_187);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_187.insert(UnderlyingSecurityAltIDSource_187.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_187);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_188;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_188("STRING_324263126");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_188);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_188.insert(UnderlyingSecurityAltID_188.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_188("STRING_2080625620");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_188);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_188.insert(UnderlyingSecurityAltIDSource_188.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_188);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_190;
      FIX::UnderlyingStipType UnderlyingStipType_190("STRING_1979633305");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_190);
      UnderlyingStipulations_NoUnderlyingStips_190.insert(UnderlyingStipType_190.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_190("STRING_664063637");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_190);
      UnderlyingStipulations_NoUnderlyingStips_190.insert(UnderlyingStipValue_190.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_190);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_176;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_176("STRING_217970391");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_176);
      UndlyInstrumentParties_NoUndlyInstrumentParties_176.insert(UnderlyingInstrumentPartyID_176.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_176('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_176);
      UndlyInstrumentParties_NoUndlyInstrumentParties_176.insert(UnderlyingInstrumentPartyIDSource_176.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_176(473928145);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_176);
      UndlyInstrumentParties_NoUndlyInstrumentParties_176.insert(UnderlyingInstrumentPartyRole_176.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_176);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_350("STRING_1660092195");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_350);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350.insert(UnderlyingInstrumentPartySubID_350.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_350(1710825659);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_350);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350.insert(UnderlyingInstrumentPartySubIDType_350.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_351("STRING_1322372951");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_351);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351.insert(UnderlyingInstrumentPartySubID_351.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_351(1318276800);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_351);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351.insert(UnderlyingInstrumentPartySubIDType_351.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
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
