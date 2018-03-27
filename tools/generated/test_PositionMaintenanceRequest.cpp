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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::PositionMaintenanceRequest msg;

  list<multiset<string>> all_values;
  multiset<string> PositionMaintenanceRequest_0;
  FIX::Account Account_29("STRING_758910976");
  msg.set(Account_29);
  PositionMaintenanceRequest_0.insert(Account_29.getString());
  FIX::AccountType AccountType_25(8);
  msg.set(AccountType_25);
  PositionMaintenanceRequest_0.insert(AccountType_25.getString());
  FIX::AcctIDSource AcctIDSource_22(99);
  msg.set(AcctIDSource_22);
  PositionMaintenanceRequest_0.insert(AcctIDSource_22.getString());
  FIX::AdjustmentType AdjustmentType_1(3);
  msg.set(AdjustmentType_1);
  PositionMaintenanceRequest_0.insert(AdjustmentType_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_16("LOCALMKTDATE_1588093917");
  msg.set(ClearingBusinessDate_16);
  PositionMaintenanceRequest_0.insert(ClearingBusinessDate_16.getString());
  FIX::ContraryInstructionIndicator ContraryInstructionIndicator_1(false);
  msg.set(ContraryInstructionIndicator_1);
  PositionMaintenanceRequest_0.insert(ContraryInstructionIndicator_1.getString());
  FIX::Currency Currency_42("CAN");
  msg.set(Currency_42);
  PositionMaintenanceRequest_0.insert(Currency_42.getString());
  FIX::EncodedText EncodedText_68("DATA_1767111586");
  msg.set(EncodedText_68);
  PositionMaintenanceRequest_0.insert(EncodedText_68.getString());
  FIX::EncodedTextLen EncodedTextLen_68(1564414445);
  msg.set(EncodedTextLen_68);
  PositionMaintenanceRequest_0.insert(EncodedTextLen_68.getString());
  FIX::OrigPosReqRefID OrigPosReqRefID_1("STRING_382428959");
  msg.set(OrigPosReqRefID_1);
  PositionMaintenanceRequest_0.insert(OrigPosReqRefID_1.getString());
  FIX::PosMaintAction PosMaintAction_1(2);
  msg.set(PosMaintAction_1);
  PositionMaintenanceRequest_0.insert(PosMaintAction_1.getString());
  FIX::PosMaintRptRefID PosMaintRptRefID_2("STRING_2069046430");
  msg.set(PosMaintRptRefID_2);
  PositionMaintenanceRequest_0.insert(PosMaintRptRefID_2.getString());
  FIX::PosReqID PosReqID_2("STRING_1937987692");
  msg.set(PosReqID_2);
  PositionMaintenanceRequest_0.insert(PosReqID_2.getString());
  FIX::PosTransType PosTransType_1(4);
  msg.set(PosTransType_1);
  PositionMaintenanceRequest_0.insert(PosTransType_1.getString());
  FIX::PriorSpreadIndicator PriorSpreadIndicator_1(false);
  msg.set(PriorSpreadIndicator_1);
  PositionMaintenanceRequest_0.insert(PriorSpreadIndicator_1.getString());
  FIX::SettlCurrency SettlCurrency_23("GBP");
  msg.set(SettlCurrency_23);
  PositionMaintenanceRequest_0.insert(SettlCurrency_23.getString());
  FIX::SettlSessID SettlSessID_8("STRING_RTH");
  msg.set(SettlSessID_8);
  PositionMaintenanceRequest_0.insert(SettlSessID_8.getString());
  FIX::SettlSessSubID SettlSessSubID_7("STRING_1636918949");
  msg.set(SettlSessSubID_7);
  PositionMaintenanceRequest_0.insert(SettlSessSubID_7.getString());
  FIX::Text Text_68("STRING_283242051");
  msg.set(Text_68);
  PositionMaintenanceRequest_0.insert(Text_68.getString());
  FIX::ThresholdAmount ThresholdAmount_2;
  ThresholdAmount_2.setString("10205225");
  msg.set(ThresholdAmount_2);
  PositionMaintenanceRequest_0.insert(ThresholdAmount_2.getString());
  FIX::TransactTime TransactTime_44(FIX::UTCTIMESTAMP(6, 20, 6, 22, 62000));
  msg.set(TransactTime_44);
  PositionMaintenanceRequest_0.insert(TransactTime_44.getString());
  all_values.push_back(PositionMaintenanceRequest_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionMaintenanceRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_67;
    FIX::EncodedLegIssuer EncodedLegIssuer_67("DATA_121420875");
    noLegs_0_0.set(EncodedLegIssuer_67);
    InstrumentLeg_67.insert(EncodedLegIssuer_67.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_67(168974780);
    noLegs_0_0.set(EncodedLegIssuerLen_67);
    InstrumentLeg_67.insert(EncodedLegIssuerLen_67.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_67("DATA_1624834145");
    noLegs_0_0.set(EncodedLegSecurityDesc_67);
    InstrumentLeg_67.insert(EncodedLegSecurityDesc_67.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_67(858387152);
    noLegs_0_0.set(EncodedLegSecurityDescLen_67);
    InstrumentLeg_67.insert(EncodedLegSecurityDescLen_67.getString());
    FIX::LegCFICode LegCFICode_67("STRING_2126476360");
    noLegs_0_0.set(LegCFICode_67);
    InstrumentLeg_67.insert(LegCFICode_67.getString());
    FIX::LegContractMultiplier LegContractMultiplier_67;
    LegContractMultiplier_67.setString("10654444");
    noLegs_0_0.set(LegContractMultiplier_67);
    InstrumentLeg_67.insert(LegContractMultiplier_67.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_67(399267599);
    noLegs_0_0.set(LegContractMultiplierUnit_67);
    InstrumentLeg_67.insert(LegContractMultiplierUnit_67.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_67("MONTHYEAR_1080839298");
    noLegs_0_0.set(LegContractSettlMonth_67);
    InstrumentLeg_67.insert(LegContractSettlMonth_67.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_67("COUNTRY_842789961");
    noLegs_0_0.set(LegCountryOfIssue_67);
    InstrumentLeg_67.insert(LegCountryOfIssue_67.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_67("LOCALMKTDATE_18895537");
    noLegs_0_0.set(LegCouponPaymentDate_67);
    InstrumentLeg_67.insert(LegCouponPaymentDate_67.getString());
    FIX::LegCouponRate LegCouponRate_67;
    LegCouponRate_67.setString("0.960000");
    noLegs_0_0.set(LegCouponRate_67);
    InstrumentLeg_67.insert(LegCouponRate_67.getString());
    FIX::LegCreditRating LegCreditRating_67("STRING_1225218920");
    noLegs_0_0.set(LegCreditRating_67);
    InstrumentLeg_67.insert(LegCreditRating_67.getString());
    FIX::LegCurrency LegCurrency_67("USD");
    noLegs_0_0.set(LegCurrency_67);
    InstrumentLeg_67.insert(LegCurrency_67.getString());
    FIX::LegDatedDate LegDatedDate_67("LOCALMKTDATE_1015722965");
    noLegs_0_0.set(LegDatedDate_67);
    InstrumentLeg_67.insert(LegDatedDate_67.getString());
    FIX::LegExerciseStyle LegExerciseStyle_67(411625950);
    noLegs_0_0.set(LegExerciseStyle_67);
    InstrumentLeg_67.insert(LegExerciseStyle_67.getString());
    FIX::LegFactor LegFactor_67;
    LegFactor_67.setString("20094072");
    noLegs_0_0.set(LegFactor_67);
    InstrumentLeg_67.insert(LegFactor_67.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_67(1148138271);
    noLegs_0_0.set(LegFlowScheduleType_67);
    InstrumentLeg_67.insert(LegFlowScheduleType_67.getString());
    FIX::LegInstrRegistry LegInstrRegistry_67("STRING_1008701085");
    noLegs_0_0.set(LegInstrRegistry_67);
    InstrumentLeg_67.insert(LegInstrRegistry_67.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_67("LOCALMKTDATE_5387219");
    noLegs_0_0.set(LegInterestAccrualDate_67);
    InstrumentLeg_67.insert(LegInterestAccrualDate_67.getString());
    FIX::LegIssueDate LegIssueDate_67("LOCALMKTDATE_637573573");
    noLegs_0_0.set(LegIssueDate_67);
    InstrumentLeg_67.insert(LegIssueDate_67.getString());
    FIX::LegIssuer LegIssuer_67("STRING_1291943136");
    noLegs_0_0.set(LegIssuer_67);
    InstrumentLeg_67.insert(LegIssuer_67.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_67("STRING_1025909779");
    noLegs_0_0.set(LegLocaleOfIssue_67);
    InstrumentLeg_67.insert(LegLocaleOfIssue_67.getString());
    FIX::LegMaturityDate LegMaturityDate_67("LOCALMKTDATE_2130126589");
    noLegs_0_0.set(LegMaturityDate_67);
    InstrumentLeg_67.insert(LegMaturityDate_67.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_67("MONTHYEAR_931938550");
    noLegs_0_0.set(LegMaturityMonthYear_67);
    InstrumentLeg_67.insert(LegMaturityMonthYear_67.getString());
    FIX::LegMaturityTime LegMaturityTime_67("TZTIMEONLY_1760307280");
    noLegs_0_0.set(LegMaturityTime_67);
    InstrumentLeg_67.insert(LegMaturityTime_67.getString());
    FIX::LegOptAttribute LegOptAttribute_67('1');
    noLegs_0_0.set(LegOptAttribute_67);
    InstrumentLeg_67.insert(LegOptAttribute_67.getString());
    FIX::LegOptionRatio LegOptionRatio_67;
    LegOptionRatio_67.setString("7473497");
    noLegs_0_0.set(LegOptionRatio_67);
    InstrumentLeg_67.insert(LegOptionRatio_67.getString());
    FIX::LegPool LegPool_67("STRING_1137714613");
    noLegs_0_0.set(LegPool_67);
    InstrumentLeg_67.insert(LegPool_67.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_67("STRING_1320388611");
    noLegs_0_0.set(LegPriceUnitOfMeasure_67);
    InstrumentLeg_67.insert(LegPriceUnitOfMeasure_67.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_67;
    LegPriceUnitOfMeasureQty_67.setString("18082027");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_67);
    InstrumentLeg_67.insert(LegPriceUnitOfMeasureQty_67.getString());
    FIX::LegProduct LegProduct_67(1259135488);
    noLegs_0_0.set(LegProduct_67);
    InstrumentLeg_67.insert(LegProduct_67.getString());
    FIX::LegPutOrCall LegPutOrCall_67(1489363392);
    noLegs_0_0.set(LegPutOrCall_67);
    InstrumentLeg_67.insert(LegPutOrCall_67.getString());
    FIX::LegRatioQty LegRatioQty_67;
    LegRatioQty_67.setString("12855532");
    noLegs_0_0.set(LegRatioQty_67);
    InstrumentLeg_67.insert(LegRatioQty_67.getString());
    FIX::LegRedemptionDate LegRedemptionDate_67("LOCALMKTDATE_2117522640");
    noLegs_0_0.set(LegRedemptionDate_67);
    InstrumentLeg_67.insert(LegRedemptionDate_67.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_67("STRING_1468356104");
    noLegs_0_0.set(LegRepoCollateralSecurityType_67);
    InstrumentLeg_67.insert(LegRepoCollateralSecurityType_67.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_67;
    LegRepurchaseRate_67.setString("39.960000");
    noLegs_0_0.set(LegRepurchaseRate_67);
    InstrumentLeg_67.insert(LegRepurchaseRate_67.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_67(369306591);
    noLegs_0_0.set(LegRepurchaseTerm_67);
    InstrumentLeg_67.insert(LegRepurchaseTerm_67.getString());
    FIX::LegSecurityDesc LegSecurityDesc_67("STRING_401711754");
    noLegs_0_0.set(LegSecurityDesc_67);
    InstrumentLeg_67.insert(LegSecurityDesc_67.getString());
    FIX::LegSecurityExchange LegSecurityExchange_67("EXCHANGE_1046303957");
    noLegs_0_0.set(LegSecurityExchange_67);
    InstrumentLeg_67.insert(LegSecurityExchange_67.getString());
    FIX::LegSecurityID LegSecurityID_67("STRING_388202129");
    noLegs_0_0.set(LegSecurityID_67);
    InstrumentLeg_67.insert(LegSecurityID_67.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_67("STRING_899481850");
    noLegs_0_0.set(LegSecurityIDSource_67);
    InstrumentLeg_67.insert(LegSecurityIDSource_67.getString());
    FIX::LegSecuritySubType LegSecuritySubType_67("STRING_124039229");
    noLegs_0_0.set(LegSecuritySubType_67);
    InstrumentLeg_67.insert(LegSecuritySubType_67.getString());
    FIX::LegSecurityType LegSecurityType_67("STRING_258433724");
    noLegs_0_0.set(LegSecurityType_67);
    InstrumentLeg_67.insert(LegSecurityType_67.getString());
    FIX::LegSide LegSide_67('1');
    noLegs_0_0.set(LegSide_67);
    InstrumentLeg_67.insert(LegSide_67.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_67("STRING_1139762194");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_67);
    InstrumentLeg_67.insert(LegStateOrProvinceOfIssue_67.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_67("GBP");
    noLegs_0_0.set(LegStrikeCurrency_67);
    InstrumentLeg_67.insert(LegStrikeCurrency_67.getString());
    FIX::LegStrikePrice LegStrikePrice_67;
    LegStrikePrice_67.setString("1404168");
    noLegs_0_0.set(LegStrikePrice_67);
    InstrumentLeg_67.insert(LegStrikePrice_67.getString());
    FIX::LegSymbol LegSymbol_67("STRING_1678760759");
    noLegs_0_0.set(LegSymbol_67);
    InstrumentLeg_67.insert(LegSymbol_67.getString());
    FIX::LegSymbolSfx LegSymbolSfx_67("STRING_1186125529");
    noLegs_0_0.set(LegSymbolSfx_67);
    InstrumentLeg_67.insert(LegSymbolSfx_67.getString());
    FIX::LegTimeUnit LegTimeUnit_67("STRING_777990391");
    noLegs_0_0.set(LegTimeUnit_67);
    InstrumentLeg_67.insert(LegTimeUnit_67.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_67("STRING_823220248");
    noLegs_0_0.set(LegUnitOfMeasure_67);
    InstrumentLeg_67.insert(LegUnitOfMeasure_67.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_67;
    LegUnitOfMeasureQty_67.setString("645516");
    noLegs_0_0.set(LegUnitOfMeasureQty_67);
    InstrumentLeg_67.insert(LegUnitOfMeasureQty_67.getString());
    all_values.push_back(InstrumentLeg_67);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_120;
      FIX::LegSecurityAltID LegSecurityAltID_120("STRING_1755158798");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_120);
      LegSecAltIDGrp_NoLegSecurityAltID_120.insert(LegSecurityAltID_120.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_120("STRING_1824858940");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_120);
      LegSecAltIDGrp_NoLegSecurityAltID_120.insert(LegSecurityAltIDSource_120.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_120);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_54;
  FIX::AttachmentPoint AttachmentPoint_54;
  AttachmentPoint_54.setString("44.910000");
  msg.set(AttachmentPoint_54);
  Instrument_54.insert(AttachmentPoint_54.getString());
  FIX::CFICode CFICode_54("STRING_355024855");
  msg.set(CFICode_54);
  Instrument_54.insert(CFICode_54.getString());
  FIX::CPProgram CPProgram_54(2);
  msg.set(CPProgram_54);
  Instrument_54.insert(CPProgram_54.getString());
  FIX::CPRegType CPRegType_54("STRING_1843863103");
  msg.set(CPRegType_54);
  Instrument_54.insert(CPRegType_54.getString());
  FIX::CapPrice CapPrice_54;
  CapPrice_54.setString("157439");
  msg.set(CapPrice_54);
  Instrument_54.insert(CapPrice_54.getString());
  FIX::ContractMultiplier ContractMultiplier_54;
  ContractMultiplier_54.setString("20742253");
  msg.set(ContractMultiplier_54);
  Instrument_54.insert(ContractMultiplier_54.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_54(2);
  msg.set(ContractMultiplierUnit_54);
  Instrument_54.insert(ContractMultiplierUnit_54.getString());
  FIX::ContractSettlMonth ContractSettlMonth_54("MONTHYEAR_1301297170");
  msg.set(ContractSettlMonth_54);
  Instrument_54.insert(ContractSettlMonth_54.getString());
  FIX::CountryOfIssue CountryOfIssue_54("COUNTRY_2044264387");
  msg.set(CountryOfIssue_54);
  Instrument_54.insert(CountryOfIssue_54.getString());
  FIX::CouponPaymentDate CouponPaymentDate_54("LOCALMKTDATE_506615303");
  msg.set(CouponPaymentDate_54);
  Instrument_54.insert(CouponPaymentDate_54.getString());
  FIX::CouponRate CouponRate_54;
  CouponRate_54.setString("11.660000");
  msg.set(CouponRate_54);
  Instrument_54.insert(CouponRate_54.getString());
  FIX::CreditRating CreditRating_54("STRING_266087330");
  msg.set(CreditRating_54);
  Instrument_54.insert(CreditRating_54.getString());
  FIX::DatedDate DatedDate_54("LOCALMKTDATE_908327057");
  msg.set(DatedDate_54);
  Instrument_54.insert(DatedDate_54.getString());
  FIX::DetachmentPoint DetachmentPoint_54;
  DetachmentPoint_54.setString("14.750000");
  msg.set(DetachmentPoint_54);
  Instrument_54.insert(DetachmentPoint_54.getString());
  FIX::EncodedIssuer EncodedIssuer_54("DATA_654289459");
  msg.set(EncodedIssuer_54);
  Instrument_54.insert(EncodedIssuer_54.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_54(1807808908);
  msg.set(EncodedIssuerLen_54);
  Instrument_54.insert(EncodedIssuerLen_54.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_54("DATA_527670704");
  msg.set(EncodedSecurityDesc_54);
  Instrument_54.insert(EncodedSecurityDesc_54.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_54(912723183);
  msg.set(EncodedSecurityDescLen_54);
  Instrument_54.insert(EncodedSecurityDescLen_54.getString());
  FIX::ExerciseStyle ExerciseStyle_54(0);
  msg.set(ExerciseStyle_54);
  Instrument_54.insert(ExerciseStyle_54.getString());
  FIX::Factor Factor_54;
  Factor_54.setString("16674328");
  msg.set(Factor_54);
  Instrument_54.insert(Factor_54.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_54(true);
  msg.set(FlexProductEligibilityIndicator_54);
  Instrument_54.insert(FlexProductEligibilityIndicator_54.getString());
  FIX::FlexibleIndicator FlexibleIndicator_54(true);
  msg.set(FlexibleIndicator_54);
  Instrument_54.insert(FlexibleIndicator_54.getString());
  FIX::FloorPrice FloorPrice_54;
  FloorPrice_54.setString("18078497");
  msg.set(FloorPrice_54);
  Instrument_54.insert(FloorPrice_54.getString());
  FIX::FlowScheduleType FlowScheduleType_54(4);
  msg.set(FlowScheduleType_54);
  Instrument_54.insert(FlowScheduleType_54.getString());
  FIX::InstrRegistry InstrRegistry_54("STRING_1198520179");
  msg.set(InstrRegistry_54);
  Instrument_54.insert(InstrRegistry_54.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_54('4');
  msg.set(InstrmtAssignmentMethod_54);
  Instrument_54.insert(InstrmtAssignmentMethod_54.getString());
  FIX::InterestAccrualDate InterestAccrualDate_54("LOCALMKTDATE_1937280217");
  msg.set(InterestAccrualDate_54);
  Instrument_54.insert(InterestAccrualDate_54.getString());
  FIX::IssueDate IssueDate_54("LOCALMKTDATE_1263071840");
  msg.set(IssueDate_54);
  Instrument_54.insert(IssueDate_54.getString());
  FIX::Issuer Issuer_54("STRING_1198989792");
  msg.set(Issuer_54);
  Instrument_54.insert(Issuer_54.getString());
  FIX::ListMethod ListMethod_54(0);
  msg.set(ListMethod_54);
  Instrument_54.insert(ListMethod_54.getString());
  FIX::LocaleOfIssue LocaleOfIssue_54("STRING_940447132");
  msg.set(LocaleOfIssue_54);
  Instrument_54.insert(LocaleOfIssue_54.getString());
  FIX::MaturityDate MaturityDate_54("LOCALMKTDATE_1722464283");
  msg.set(MaturityDate_54);
  Instrument_54.insert(MaturityDate_54.getString());
  FIX::MaturityMonthYear MaturityMonthYear_54("MONTHYEAR_1899980223");
  msg.set(MaturityMonthYear_54);
  Instrument_54.insert(MaturityMonthYear_54.getString());
  FIX::MaturityTime MaturityTime_54("TZTIMEONLY_1755537038");
  msg.set(MaturityTime_54);
  Instrument_54.insert(MaturityTime_54.getString());
  FIX::MinPriceIncrement MinPriceIncrement_54;
  MinPriceIncrement_54.setString("14188437");
  msg.set(MinPriceIncrement_54);
  Instrument_54.insert(MinPriceIncrement_54.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_54;
  MinPriceIncrementAmount_54.setString("19157241");
  msg.set(MinPriceIncrementAmount_54);
  Instrument_54.insert(MinPriceIncrementAmount_54.getString());
  FIX::NTPositionLimit NTPositionLimit_54(1682278785);
  msg.set(NTPositionLimit_54);
  Instrument_54.insert(NTPositionLimit_54.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_54;
  NotionalPercentageOutstanding_54.setString("29.370000");
  msg.set(NotionalPercentageOutstanding_54);
  Instrument_54.insert(NotionalPercentageOutstanding_54.getString());
  FIX::OptAttribute OptAttribute_54('1');
  msg.set(OptAttribute_54);
  Instrument_54.insert(OptAttribute_54.getString());
  FIX::OptPayoutAmount OptPayoutAmount_54;
  OptPayoutAmount_54.setString("15790595");
  msg.set(OptPayoutAmount_54);
  Instrument_54.insert(OptPayoutAmount_54.getString());
  FIX::OptPayoutType OptPayoutType_54(2);
  msg.set(OptPayoutType_54);
  Instrument_54.insert(OptPayoutType_54.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_54;
  OriginalNotionalPercentageOutstanding_54.setString("52.030000");
  msg.set(OriginalNotionalPercentageOutstanding_54);
  Instrument_54.insert(OriginalNotionalPercentageOutstanding_54.getString());
  FIX::Pool Pool_54("STRING_1845146854");
  msg.set(Pool_54);
  Instrument_54.insert(Pool_54.getString());
  FIX::PositionLimit PositionLimit_54(1872045298);
  msg.set(PositionLimit_54);
  Instrument_54.insert(PositionLimit_54.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_54("STRING_INT");
  msg.set(PriceQuoteMethod_54);
  Instrument_54.insert(PriceQuoteMethod_54.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_54("STRING_351952666");
  msg.set(PriceUnitOfMeasure_54);
  Instrument_54.insert(PriceUnitOfMeasure_54.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_54;
  PriceUnitOfMeasureQty_54.setString("15323705");
  msg.set(PriceUnitOfMeasureQty_54);
  Instrument_54.insert(PriceUnitOfMeasureQty_54.getString());
  FIX::Product Product_56(1);
  msg.set(Product_56);
  Instrument_54.insert(Product_56.getString());
  FIX::ProductComplex ProductComplex_54("STRING_1264675849");
  msg.set(ProductComplex_54);
  Instrument_54.insert(ProductComplex_54.getString());
  FIX::PutOrCall PutOrCall_54(0);
  msg.set(PutOrCall_54);
  Instrument_54.insert(PutOrCall_54.getString());
  FIX::RedemptionDate RedemptionDate_54("LOCALMKTDATE_878116633");
  msg.set(RedemptionDate_54);
  Instrument_54.insert(RedemptionDate_54.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_54("STRING_699975059");
  msg.set(RepoCollateralSecurityType_54);
  Instrument_54.insert(RepoCollateralSecurityType_54.getString());
  FIX::RepurchaseRate RepurchaseRate_54;
  RepurchaseRate_54.setString("15.490000");
  msg.set(RepurchaseRate_54);
  Instrument_54.insert(RepurchaseRate_54.getString());
  FIX::RepurchaseTerm RepurchaseTerm_54(538482702);
  msg.set(RepurchaseTerm_54);
  Instrument_54.insert(RepurchaseTerm_54.getString());
  FIX::RestructuringType RestructuringType_54("STRING_MR");
  msg.set(RestructuringType_54);
  Instrument_54.insert(RestructuringType_54.getString());
  FIX::SecurityDesc SecurityDesc_54("STRING_1574941728");
  msg.set(SecurityDesc_54);
  Instrument_54.insert(SecurityDesc_54.getString());
  FIX::SecurityExchange SecurityExchange_54("EXCHANGE_976839162");
  msg.set(SecurityExchange_54);
  Instrument_54.insert(SecurityExchange_54.getString());
  FIX::SecurityGroup SecurityGroup_54("STRING_1603831598");
  msg.set(SecurityGroup_54);
  Instrument_54.insert(SecurityGroup_54.getString());
  FIX::SecurityID SecurityID_54("STRING_690529920");
  msg.set(SecurityID_54);
  Instrument_54.insert(SecurityID_54.getString());
  FIX::SecurityIDSource SecurityIDSource_54("STRING_1");
  msg.set(SecurityIDSource_54);
  Instrument_54.insert(SecurityIDSource_54.getString());
  FIX::SecurityStatus SecurityStatus_54("STRING_1");
  msg.set(SecurityStatus_54);
  Instrument_54.insert(SecurityStatus_54.getString());
  FIX::SecuritySubType SecuritySubType_55("STRING_1630977053");
  msg.set(SecuritySubType_55);
  Instrument_54.insert(SecuritySubType_55.getString());
  FIX::SecurityType SecurityType_56("STRING_BRIDGE");
  msg.set(SecurityType_56);
  Instrument_54.insert(SecurityType_56.getString());
  FIX::Seniority Seniority_54("STRING_SD");
  msg.set(Seniority_54);
  Instrument_54.insert(Seniority_54.getString());
  FIX::SettlMethod SettlMethod_54('P');
  msg.set(SettlMethod_54);
  Instrument_54.insert(SettlMethod_54.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_54("STRING_1022169680");
  msg.set(SettleOnOpenFlag_54);
  Instrument_54.insert(SettleOnOpenFlag_54.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_54("STRING_522040408");
  msg.set(StateOrProvinceOfIssue_54);
  Instrument_54.insert(StateOrProvinceOfIssue_54.getString());
  FIX::StrikeCurrency StrikeCurrency_54("GBP");
  msg.set(StrikeCurrency_54);
  Instrument_54.insert(StrikeCurrency_54.getString());
  FIX::StrikeMultiplier StrikeMultiplier_54;
  StrikeMultiplier_54.setString("15915780");
  msg.set(StrikeMultiplier_54);
  Instrument_54.insert(StrikeMultiplier_54.getString());
  FIX::StrikePrice StrikePrice_54;
  StrikePrice_54.setString("2054014");
  msg.set(StrikePrice_54);
  Instrument_54.insert(StrikePrice_54.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_54(1);
  msg.set(StrikePriceBoundaryMethod_54);
  Instrument_54.insert(StrikePriceBoundaryMethod_54.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_54;
  StrikePriceBoundaryPrecision_54.setString("32.960000");
  msg.set(StrikePriceBoundaryPrecision_54);
  Instrument_54.insert(StrikePriceBoundaryPrecision_54.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_54(4);
  msg.set(StrikePriceDeterminationMethod_54);
  Instrument_54.insert(StrikePriceDeterminationMethod_54.getString());
  FIX::StrikeValue StrikeValue_54;
  StrikeValue_54.setString("200688");
  msg.set(StrikeValue_54);
  Instrument_54.insert(StrikeValue_54.getString());
  FIX::Symbol Symbol_54("STRING_701456326");
  msg.set(Symbol_54);
  Instrument_54.insert(Symbol_54.getString());
  FIX::SymbolSfx SymbolSfx_54("STRING_WI");
  msg.set(SymbolSfx_54);
  Instrument_54.insert(SymbolSfx_54.getString());
  FIX::TimeUnit TimeUnit_54("STRING_Mo");
  msg.set(TimeUnit_54);
  Instrument_54.insert(TimeUnit_54.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_54(2);
  msg.set(UnderlyingPriceDeterminationMethod_54);
  Instrument_54.insert(UnderlyingPriceDeterminationMethod_54.getString());
  FIX::UnitOfMeasure UnitOfMeasure_54("STRING_MWh");
  msg.set(UnitOfMeasure_54);
  Instrument_54.insert(UnitOfMeasure_54.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_54;
  UnitOfMeasureQty_54.setString("19164663");
  msg.set(UnitOfMeasureQty_54);
  Instrument_54.insert(UnitOfMeasureQty_54.getString());
  FIX::ValuationMethod ValuationMethod_54("STRING_CDSD");
  msg.set(ValuationMethod_54);
  Instrument_54.insert(ValuationMethod_54.getString());
  all_values.push_back(Instrument_54);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionMaintenanceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_105;
    FIX::ComplexEventCondition ComplexEventCondition_105(1);
    noComplexEvents_0_0.set(ComplexEventCondition_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventCondition_105.getString());
    FIX::ComplexEventPrice ComplexEventPrice_105;
    ComplexEventPrice_105.setString("13287393");
    noComplexEvents_0_0.set(ComplexEventPrice_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPrice_105.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_105(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPriceBoundaryMethod_105.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_105;
    ComplexEventPriceBoundaryPrecision_105.setString("59.460000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPriceBoundaryPrecision_105.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_105(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPriceTimeType_105.getString());
    FIX::ComplexEventType ComplexEventType_105(4);
    noComplexEvents_0_0.set(ComplexEventType_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventType_105.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_105;
    ComplexOptPayoutAmount_105.setString("2633922");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexOptPayoutAmount_105.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_105);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_216;
      FIX::ComplexEventEndDate ComplexEventEndDate_216(FIX::UTCTIMESTAMP(0, 48, 13, 3, 12000));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_216);
      ComplexEventDates_NoComplexEventDates_216.insert(ComplexEventEndDate_216.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_216(FIX::UTCTIMESTAMP(18, 7, 4, 25, 12007));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_216);
      ComplexEventDates_NoComplexEventDates_216.insert(ComplexEventStartDate_216.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_216);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_427;
        FIX::ComplexEventEndTime ComplexEventEndTime_427(FIX::UTCTIMEONLY(8, 0, 3));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_427);
        ComplexEventTimes_NoComplexEventTimes_427.insert(ComplexEventEndTime_427.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_427(FIX::UTCTIMEONLY(9, 50, 57));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_427);
        ComplexEventTimes_NoComplexEventTimes_427.insert(ComplexEventStartTime_427.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_427);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_428;
        FIX::ComplexEventEndTime ComplexEventEndTime_428(FIX::UTCTIMEONLY(3, 28, 5));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_428);
        ComplexEventTimes_NoComplexEventTimes_428.insert(ComplexEventEndTime_428.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_428(FIX::UTCTIMEONLY(5, 24, 36));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_428);
        ComplexEventTimes_NoComplexEventTimes_428.insert(ComplexEventStartTime_428.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_428);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_429;
        FIX::ComplexEventEndTime ComplexEventEndTime_429(FIX::UTCTIMEONLY(16, 16, 23));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_429);
        ComplexEventTimes_NoComplexEventTimes_429.insert(ComplexEventEndTime_429.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_429(FIX::UTCTIMEONLY(21, 57, 16));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_429);
        ComplexEventTimes_NoComplexEventTimes_429.insert(ComplexEventStartTime_429.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_429);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_217;
      FIX::ComplexEventEndDate ComplexEventEndDate_217(FIX::UTCTIMESTAMP(4, 12, 20, 24, 12008));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_217);
      ComplexEventDates_NoComplexEventDates_217.insert(ComplexEventEndDate_217.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_217(FIX::UTCTIMESTAMP(12, 54, 50, 11, 82016));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_217);
      ComplexEventDates_NoComplexEventDates_217.insert(ComplexEventStartDate_217.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_217);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_430;
        FIX::ComplexEventEndTime ComplexEventEndTime_430(FIX::UTCTIMEONLY(11, 36, 39));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_430);
        ComplexEventTimes_NoComplexEventTimes_430.insert(ComplexEventEndTime_430.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_430(FIX::UTCTIMEONLY(10, 56, 6));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_430);
        ComplexEventTimes_NoComplexEventTimes_430.insert(ComplexEventStartTime_430.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_430);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_431;
        FIX::ComplexEventEndTime ComplexEventEndTime_431(FIX::UTCTIMEONLY(4, 15, 22));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_431);
        ComplexEventTimes_NoComplexEventTimes_431.insert(ComplexEventEndTime_431.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_431(FIX::UTCTIMEONLY(12, 19, 12));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_431);
        ComplexEventTimes_NoComplexEventTimes_431.insert(ComplexEventStartTime_431.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_431);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_432;
        FIX::ComplexEventEndTime ComplexEventEndTime_432(FIX::UTCTIMEONLY(16, 17, 16));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_432);
        ComplexEventTimes_NoComplexEventTimes_432.insert(ComplexEventEndTime_432.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_432(FIX::UTCTIMEONLY(21, 18, 35));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_432);
        ComplexEventTimes_NoComplexEventTimes_432.insert(ComplexEventStartTime_432.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_432);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::PositionMaintenanceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_109;
    FIX::EventDate EventDate_109("LOCALMKTDATE_234909184");
    noEvents_0_0.set(EventDate_109);
    EvntGrp_NoEvents_109.insert(EventDate_109.getString());
    FIX::EventPx EventPx_109;
    EventPx_109.setString("4852079");
    noEvents_0_0.set(EventPx_109);
    EvntGrp_NoEvents_109.insert(EventPx_109.getString());
    FIX::EventText EventText_109("STRING_992428593");
    noEvents_0_0.set(EventText_109);
    EvntGrp_NoEvents_109.insert(EventText_109.getString());
    FIX::EventTime EventTime_109(FIX::UTCTIMESTAMP(22, 41, 33, 22, 112010));
    noEvents_0_0.set(EventTime_109);
    EvntGrp_NoEvents_109.insert(EventTime_109.getString());
    FIX::EventType EventType_109(1);
    noEvents_0_0.set(EventType_109);
    EvntGrp_NoEvents_109.insert(EventType_109.getString());
    all_values.push_back(EvntGrp_NoEvents_109);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_110;
    FIX::EventDate EventDate_110("LOCALMKTDATE_980569688");
    noEvents_0_1.set(EventDate_110);
    EvntGrp_NoEvents_110.insert(EventDate_110.getString());
    FIX::EventPx EventPx_110;
    EventPx_110.setString("7323400");
    noEvents_0_1.set(EventPx_110);
    EvntGrp_NoEvents_110.insert(EventPx_110.getString());
    FIX::EventText EventText_110("STRING_1754016866");
    noEvents_0_1.set(EventText_110);
    EvntGrp_NoEvents_110.insert(EventText_110.getString());
    FIX::EventTime EventTime_110(FIX::UTCTIMESTAMP(21, 33, 38, 21, 102007));
    noEvents_0_1.set(EventTime_110);
    EvntGrp_NoEvents_110.insert(EventTime_110.getString());
    FIX::EventType EventType_110(19);
    noEvents_0_1.set(EventType_110);
    EvntGrp_NoEvents_110.insert(EventType_110.getString());
    all_values.push_back(EvntGrp_NoEvents_110);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_97;
    FIX::InstrumentPartyID InstrumentPartyID_97("STRING_2012945885");
    noInstrumentParties_0_0.set(InstrumentPartyID_97);
    InstrumentParties_NoInstrumentParties_97.insert(InstrumentPartyID_97.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_97('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_97);
    InstrumentParties_NoInstrumentParties_97.insert(InstrumentPartyIDSource_97.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_97(1203648129);
    noInstrumentParties_0_0.set(InstrumentPartyRole_97);
    InstrumentParties_NoInstrumentParties_97.insert(InstrumentPartyRole_97.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_97);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194;
      FIX::InstrumentPartySubID InstrumentPartySubID_194("STRING_1587682728");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_194);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194.insert(InstrumentPartySubID_194.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_194(360898999);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_194);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194.insert(InstrumentPartySubIDType_194.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195;
      FIX::InstrumentPartySubID InstrumentPartySubID_195("STRING_571210753");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_195);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195.insert(InstrumentPartySubID_195.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_195(1610593921);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_195);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195.insert(InstrumentPartySubIDType_195.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_98;
    FIX::InstrumentPartyID InstrumentPartyID_98("STRING_595808183");
    noInstrumentParties_0_1.set(InstrumentPartyID_98);
    InstrumentParties_NoInstrumentParties_98.insert(InstrumentPartyID_98.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_98('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_98);
    InstrumentParties_NoInstrumentParties_98.insert(InstrumentPartyIDSource_98.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_98(455538866);
    noInstrumentParties_0_1.set(InstrumentPartyRole_98);
    InstrumentParties_NoInstrumentParties_98.insert(InstrumentPartyRole_98.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_98);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196;
      FIX::InstrumentPartySubID InstrumentPartySubID_196("STRING_708803782");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_196);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196.insert(InstrumentPartySubID_196.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_196(1837620428);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_196);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196.insert(InstrumentPartySubIDType_196.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197;
      FIX::InstrumentPartySubID InstrumentPartySubID_197("STRING_829479347");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_197);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197.insert(InstrumentPartySubID_197.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_197(900756432);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_197);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197.insert(InstrumentPartySubIDType_197.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_99;
    FIX::InstrumentPartyID InstrumentPartyID_99("STRING_620742850");
    noInstrumentParties_0_2.set(InstrumentPartyID_99);
    InstrumentParties_NoInstrumentParties_99.insert(InstrumentPartyID_99.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_99('2');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_99);
    InstrumentParties_NoInstrumentParties_99.insert(InstrumentPartyIDSource_99.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_99(1015278392);
    noInstrumentParties_0_2.set(InstrumentPartyRole_99);
    InstrumentParties_NoInstrumentParties_99.insert(InstrumentPartyRole_99.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_99);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198;
      FIX::InstrumentPartySubID InstrumentPartySubID_198("STRING_690730776");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_198);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198.insert(InstrumentPartySubID_198.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_198(621811610);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_198);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198.insert(InstrumentPartySubIDType_198.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionMaintenanceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_107;
    FIX::SecurityAltID SecurityAltID_107("STRING_240799597");
    noSecurityAltID_0_0.set(SecurityAltID_107);
    SecAltIDGrp_NoSecurityAltID_107.insert(SecurityAltID_107.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_107("STRING_1227047844");
    noSecurityAltID_0_0.set(SecurityAltIDSource_107);
    SecAltIDGrp_NoSecurityAltID_107.insert(SecurityAltIDSource_107.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_107);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_108;
    FIX::SecurityAltID SecurityAltID_108("STRING_1011384355");
    noSecurityAltID_0_1.set(SecurityAltID_108);
    SecAltIDGrp_NoSecurityAltID_108.insert(SecurityAltID_108.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_108("STRING_1103780562");
    noSecurityAltID_0_1.set(SecurityAltIDSource_108);
    SecAltIDGrp_NoSecurityAltID_108.insert(SecurityAltIDSource_108.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_108);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_108;
  FIX::SecurityXML SecurityXML_109("XMLDATA_854647393");
  msg.set(SecurityXML_109);
  FIX::SecurityXMLLen SecurityXMLLen_54(2061657345);
  msg.set(SecurityXMLLen_54);
  FIX::SecurityXMLSchema SecurityXMLSchema_54("STRING_1092147772");
  msg.set(SecurityXMLSchema_54);
  SecurityXML_108.insert(SecurityXMLSchema_54.getString());
  all_values.push_back(SecurityXML_108);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionMaintenanceRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_100;
    FIX::PartyID PartyID_100("STRING_1927119582");
    noPartyIDs_0_0.set(PartyID_100);
    Parties_NoPartyIDs_100.insert(PartyID_100.getString());
    FIX::PartyIDSource PartyIDSource_100('3');
    noPartyIDs_0_0.set(PartyIDSource_100);
    Parties_NoPartyIDs_100.insert(PartyIDSource_100.getString());
    FIX::PartyRole PartyRole_100(8);
    noPartyIDs_0_0.set(PartyRole_100);
    Parties_NoPartyIDs_100.insert(PartyRole_100.getString());
    all_values.push_back(Parties_NoPartyIDs_100);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_195;
      FIX::PartySubID PartySubID_195("STRING_1571201159");
      noPartySubIDs_0_1_0.set(PartySubID_195);
      PtysSubGrp_NoPartySubIDs_195.insert(PartySubID_195.getString());
      FIX::PartySubIDType PartySubIDType_195(9);
      noPartySubIDs_0_1_0.set(PartySubIDType_195);
      PtysSubGrp_NoPartySubIDs_195.insert(PartySubIDType_195.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_195);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_196;
      FIX::PartySubID PartySubID_196("STRING_1707859174");
      noPartySubIDs_0_1_1.set(PartySubID_196);
      PtysSubGrp_NoPartySubIDs_196.insert(PartySubID_196.getString());
      FIX::PartySubIDType PartySubIDType_196(24);
      noPartySubIDs_0_1_1.set(PartySubIDType_196);
      PtysSubGrp_NoPartySubIDs_196.insert(PartySubIDType_196.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_196);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_197;
      FIX::PartySubID PartySubID_197("STRING_1979834329");
      noPartySubIDs_0_1_2.set(PartySubID_197);
      PtysSubGrp_NoPartySubIDs_197.insert(PartySubID_197.getString());
      FIX::PartySubIDType PartySubIDType_197(16);
      noPartySubIDs_0_1_2.set(PartySubIDType_197);
      PtysSubGrp_NoPartySubIDs_197.insert(PartySubIDType_197.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_197);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionMaintenanceRequest::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_11;
    FIX::PosAmt PosAmt_11;
    PosAmt_11.setString("13739656");
    noPosAmt_0_0.set(PosAmt_11);
    PositionAmountData_NoPosAmt_11.insert(PosAmt_11.getString());
    FIX::PosAmtType PosAmtType_11("STRING_VADJ");
    noPosAmt_0_0.set(PosAmtType_11);
    PositionAmountData_NoPosAmt_11.insert(PosAmtType_11.getString());
    FIX::PositionCurrency PositionCurrency_11("STRING_1179987079");
    noPosAmt_0_0.set(PositionCurrency_11);
    PositionAmountData_NoPosAmt_11.insert(PositionCurrency_11.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_11);

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_12;
    FIX::PosAmt PosAmt_12;
    PosAmt_12.setString("559613");
    noPosAmt_0_1.set(PosAmt_12);
    PositionAmountData_NoPosAmt_12.insert(PosAmt_12.getString());
    FIX::PosAmtType PosAmtType_12("STRING_SMTM");
    noPosAmt_0_1.set(PosAmtType_12);
    PositionAmountData_NoPosAmt_12.insert(PosAmtType_12.getString());
    FIX::PositionCurrency PositionCurrency_12("STRING_1800729929");
    noPosAmt_0_1.set(PositionCurrency_12);
    PositionAmountData_NoPosAmt_12.insert(PositionCurrency_12.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_12);

    msg.addGroup(noPosAmt_0_1);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionMaintenanceRequest::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_5;
    FIX::LongQty LongQty_5;
    LongQty_5.setString("10941491");
    noPositions_0_0.set(LongQty_5);
    PositionQty_NoPositions_5.insert(LongQty_5.getString());
    FIX::PosQtyStatus PosQtyStatus_5(0);
    noPositions_0_0.set(PosQtyStatus_5);
    PositionQty_NoPositions_5.insert(PosQtyStatus_5.getString());
    FIX::PosType PosType_5("STRING_ASF");
    noPositions_0_0.set(PosType_5);
    PositionQty_NoPositions_5.insert(PosType_5.getString());
    FIX::QuantityDate QuantityDate_5("LOCALMKTDATE_1715960806");
    noPositions_0_0.set(QuantityDate_5);
    PositionQty_NoPositions_5.insert(QuantityDate_5.getString());
    FIX::ShortQty ShortQty_5;
    ShortQty_5.setString("2892637");
    noPositions_0_0.set(ShortQty_5);
    PositionQty_NoPositions_5.insert(ShortQty_5.getString());
    all_values.push_back(PositionQty_NoPositions_5);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_90;
      FIX::NestedPartyID NestedPartyID_90("STRING_795525002");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_90);
      NestedParties_NoNestedPartyIDs_90.insert(NestedPartyID_90.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_90('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_90);
      NestedParties_NoNestedPartyIDs_90.insert(NestedPartyIDSource_90.getString());
      FIX::NestedPartyRole NestedPartyRole_90(2049663021);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_90);
      NestedParties_NoNestedPartyIDs_90.insert(NestedPartyRole_90.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_90);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_171;
        FIX::NestedPartySubID NestedPartySubID_171("STRING_1214821769");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_171);
        NstdPtysSubGrp_NoNestedPartySubIDs_171.insert(NestedPartySubID_171.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_171(994327146);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_171);
        NstdPtysSubGrp_NoNestedPartySubIDs_171.insert(NestedPartySubIDType_171.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_171);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_6;
    FIX::LongQty LongQty_6;
    LongQty_6.setString("14696514");
    noPositions_0_1.set(LongQty_6);
    PositionQty_NoPositions_6.insert(LongQty_6.getString());
    FIX::PosQtyStatus PosQtyStatus_6(1);
    noPositions_0_1.set(PosQtyStatus_6);
    PositionQty_NoPositions_6.insert(PosQtyStatus_6.getString());
    FIX::PosType PosType_6("STRING_PNTN");
    noPositions_0_1.set(PosType_6);
    PositionQty_NoPositions_6.insert(PosType_6.getString());
    FIX::QuantityDate QuantityDate_6("LOCALMKTDATE_345294913");
    noPositions_0_1.set(QuantityDate_6);
    PositionQty_NoPositions_6.insert(QuantityDate_6.getString());
    FIX::ShortQty ShortQty_6;
    ShortQty_6.setString("21311061");
    noPositions_0_1.set(ShortQty_6);
    PositionQty_NoPositions_6.insert(ShortQty_6.getString());
    all_values.push_back(PositionQty_NoPositions_6);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_91;
      FIX::NestedPartyID NestedPartyID_91("STRING_1729321060");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_91);
      NestedParties_NoNestedPartyIDs_91.insert(NestedPartyID_91.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_91('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_91);
      NestedParties_NoNestedPartyIDs_91.insert(NestedPartyIDSource_91.getString());
      FIX::NestedPartyRole NestedPartyRole_91(1435874522);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_91);
      NestedParties_NoNestedPartyIDs_91.insert(NestedPartyRole_91.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_91);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_172;
        FIX::NestedPartySubID NestedPartySubID_172("STRING_160792240");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_172);
        NstdPtysSubGrp_NoNestedPartySubIDs_172.insert(NestedPartySubID_172.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_172(778241173);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_172);
        NstdPtysSubGrp_NoNestedPartySubIDs_172.insert(NestedPartySubIDType_172.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_172);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noPositions_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoPositions noPositions_0_2;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_7;
    FIX::LongQty LongQty_7;
    LongQty_7.setString("7881537");
    noPositions_0_2.set(LongQty_7);
    PositionQty_NoPositions_7.insert(LongQty_7.getString());
    FIX::PosQtyStatus PosQtyStatus_7(2);
    noPositions_0_2.set(PosQtyStatus_7);
    PositionQty_NoPositions_7.insert(PosQtyStatus_7.getString());
    FIX::PosType PosType_7("STRING_PA");
    noPositions_0_2.set(PosType_7);
    PositionQty_NoPositions_7.insert(PosType_7.getString());
    FIX::QuantityDate QuantityDate_7("LOCALMKTDATE_844115159");
    noPositions_0_2.set(QuantityDate_7);
    PositionQty_NoPositions_7.insert(QuantityDate_7.getString());
    FIX::ShortQty ShortQty_7;
    ShortQty_7.setString("15652610");
    noPositions_0_2.set(ShortQty_7);
    PositionQty_NoPositions_7.insert(ShortQty_7.getString());
    all_values.push_back(PositionQty_NoPositions_7);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_92;
      FIX::NestedPartyID NestedPartyID_92("STRING_858467245");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_92);
      NestedParties_NoNestedPartyIDs_92.insert(NestedPartyID_92.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_92('5');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_92);
      NestedParties_NoNestedPartyIDs_92.insert(NestedPartyIDSource_92.getString());
      FIX::NestedPartyRole NestedPartyRole_92(718549706);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_92);
      NestedParties_NoNestedPartyIDs_92.insert(NestedPartyRole_92.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_92);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_173;
        FIX::NestedPartySubID NestedPartySubID_173("STRING_80403768");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_173);
        NstdPtysSubGrp_NoNestedPartySubIDs_173.insert(NestedPartySubID_173.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_173(1007813423);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_173);
        NstdPtysSubGrp_NoNestedPartySubIDs_173.insert(NestedPartySubIDType_173.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_173);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    msg.addGroup(noPositions_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::PositionMaintenanceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_22;
    FIX::TradingSessionID TradingSessionID_58("STRING_3");
    noTradingSessions_0_0.set(TradingSessionID_58);
    TrdgSesGrp_NoTradingSessions_22.insert(TradingSessionID_58.getString());
    FIX::TradingSessionSubID TradingSessionSubID_58("STRING_3");
    noTradingSessions_0_0.set(TradingSessionSubID_58);
    TrdgSesGrp_NoTradingSessions_22.insert(TradingSessionSubID_58.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_22);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_23;
    FIX::TradingSessionID TradingSessionID_59("STRING_1");
    noTradingSessions_0_1.set(TradingSessionID_59);
    TrdgSesGrp_NoTradingSessions_23.insert(TradingSessionID_59.getString());
    FIX::TradingSessionSubID TradingSessionSubID_59("STRING_7");
    noTradingSessions_0_1.set(TradingSessionSubID_59);
    TrdgSesGrp_NoTradingSessions_23.insert(TradingSessionSubID_59.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_23);

    msg.addGroup(noTradingSessions_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionMaintenanceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_82;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_82("DATA_1258455438");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_82);
    UnderlyingInstrument_82.insert(EncodedUnderlyingIssuer_82.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_82(1848268932);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_82);
    UnderlyingInstrument_82.insert(EncodedUnderlyingIssuerLen_82.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_82("DATA_222773673");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_82);
    UnderlyingInstrument_82.insert(EncodedUnderlyingSecurityDesc_82.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_82(88817367);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_82);
    UnderlyingInstrument_82.insert(EncodedUnderlyingSecurityDescLen_82.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_82;
    UnderlyingAdjustedQuantity_82.setString("460801");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_82);
    UnderlyingInstrument_82.insert(UnderlyingAdjustedQuantity_82.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_82;
    UnderlyingAllocationPercent_82.setString("61.490000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_82);
    UnderlyingInstrument_82.insert(UnderlyingAllocationPercent_82.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_82;
    UnderlyingAttachmentPoint_82.setString("4.560000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_82);
    UnderlyingInstrument_82.insert(UnderlyingAttachmentPoint_82.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_82("STRING_1775401257");
    noUnderlyings_0_0.set(UnderlyingCFICode_82);
    UnderlyingInstrument_82.insert(UnderlyingCFICode_82.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_82("STRING_1897877800");
    noUnderlyings_0_0.set(UnderlyingCPProgram_82);
    UnderlyingInstrument_82.insert(UnderlyingCPProgram_82.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_82("STRING_1926254978");
    noUnderlyings_0_0.set(UnderlyingCPRegType_82);
    UnderlyingInstrument_82.insert(UnderlyingCPRegType_82.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_82;
    UnderlyingCapValue_82.setString("11895893");
    noUnderlyings_0_0.set(UnderlyingCapValue_82);
    UnderlyingInstrument_82.insert(UnderlyingCapValue_82.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_82;
    UnderlyingCashAmount_82.setString("20586700");
    noUnderlyings_0_0.set(UnderlyingCashAmount_82);
    UnderlyingInstrument_82.insert(UnderlyingCashAmount_82.getString());
    FIX::UnderlyingCashType UnderlyingCashType_82("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_82);
    UnderlyingInstrument_82.insert(UnderlyingCashType_82.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_82;
    UnderlyingContractMultiplier_82.setString("19777431");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_82);
    UnderlyingInstrument_82.insert(UnderlyingContractMultiplier_82.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_82(1397576651);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_82);
    UnderlyingInstrument_82.insert(UnderlyingContractMultiplierUnit_82.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_82("COUNTRY_367757109");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_82);
    UnderlyingInstrument_82.insert(UnderlyingCountryOfIssue_82.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_82("LOCALMKTDATE_674374639");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_82);
    UnderlyingInstrument_82.insert(UnderlyingCouponPaymentDate_82.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_82;
    UnderlyingCouponRate_82.setString("40.660000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_82);
    UnderlyingInstrument_82.insert(UnderlyingCouponRate_82.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_82("STRING_1979231643");
    noUnderlyings_0_0.set(UnderlyingCreditRating_82);
    UnderlyingInstrument_82.insert(UnderlyingCreditRating_82.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_82("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_82);
    UnderlyingInstrument_82.insert(UnderlyingCurrency_82.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_82;
    UnderlyingCurrentValue_82.setString("5502977");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_82);
    UnderlyingInstrument_82.insert(UnderlyingCurrentValue_82.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_82;
    UnderlyingDetachmentPoint_82.setString("83.440000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_82);
    UnderlyingInstrument_82.insert(UnderlyingDetachmentPoint_82.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_82;
    UnderlyingDirtyPrice_82.setString("14076844");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_82);
    UnderlyingInstrument_82.insert(UnderlyingDirtyPrice_82.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_82;
    UnderlyingEndPrice_82.setString("15581111");
    noUnderlyings_0_0.set(UnderlyingEndPrice_82);
    UnderlyingInstrument_82.insert(UnderlyingEndPrice_82.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_82;
    UnderlyingEndValue_82.setString("13108572");
    noUnderlyings_0_0.set(UnderlyingEndValue_82);
    UnderlyingInstrument_82.insert(UnderlyingEndValue_82.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_82(136129568);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_82);
    UnderlyingInstrument_82.insert(UnderlyingExerciseStyle_82.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_82;
    UnderlyingFXRate_82.setString("17190889");
    noUnderlyings_0_0.set(UnderlyingFXRate_82);
    UnderlyingInstrument_82.insert(UnderlyingFXRate_82.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_82('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_82);
    UnderlyingInstrument_82.insert(UnderlyingFXRateCalc_82.getString());
    FIX::UnderlyingFactor UnderlyingFactor_82;
    UnderlyingFactor_82.setString("5147470");
    noUnderlyings_0_0.set(UnderlyingFactor_82);
    UnderlyingInstrument_82.insert(UnderlyingFactor_82.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_82(947404941);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_82);
    UnderlyingInstrument_82.insert(UnderlyingFlowScheduleType_82.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_82("STRING_685957345");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_82);
    UnderlyingInstrument_82.insert(UnderlyingInstrRegistry_82.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_82("LOCALMKTDATE_215532370");
    noUnderlyings_0_0.set(UnderlyingIssueDate_82);
    UnderlyingInstrument_82.insert(UnderlyingIssueDate_82.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_82("STRING_1170178614");
    noUnderlyings_0_0.set(UnderlyingIssuer_82);
    UnderlyingInstrument_82.insert(UnderlyingIssuer_82.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_82("STRING_774774712");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_82);
    UnderlyingInstrument_82.insert(UnderlyingLocaleOfIssue_82.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_82("LOCALMKTDATE_261612567");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_82);
    UnderlyingInstrument_82.insert(UnderlyingMaturityDate_82.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_82("MONTHYEAR_1376574763");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_82);
    UnderlyingInstrument_82.insert(UnderlyingMaturityMonthYear_82.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_82("TZTIMEONLY_1265155169");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_82);
    UnderlyingInstrument_82.insert(UnderlyingMaturityTime_82.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_82;
    UnderlyingNotionalPercentageOutstanding_82.setString("38.250000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_82);
    UnderlyingInstrument_82.insert(UnderlyingNotionalPercentageOutstanding_82.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_82('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_82);
    UnderlyingInstrument_82.insert(UnderlyingOptAttribute_82.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_82;
    UnderlyingOriginalNotionalPercentageOutstanding_82.setString("64.990000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_82);
    UnderlyingInstrument_82.insert(UnderlyingOriginalNotionalPercentageOutstanding_82.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_82("STRING_1079119528");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_82);
    UnderlyingInstrument_82.insert(UnderlyingPriceUnitOfMeasure_82.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_82;
    UnderlyingPriceUnitOfMeasureQty_82.setString("10381553");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_82);
    UnderlyingInstrument_82.insert(UnderlyingPriceUnitOfMeasureQty_82.getString());
    FIX::UnderlyingProduct UnderlyingProduct_82(1600939003);
    noUnderlyings_0_0.set(UnderlyingProduct_82);
    UnderlyingInstrument_82.insert(UnderlyingProduct_82.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_82(909379008);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_82);
    UnderlyingInstrument_82.insert(UnderlyingPutOrCall_82.getString());
    FIX::UnderlyingPx UnderlyingPx_82;
    UnderlyingPx_82.setString("2882483");
    noUnderlyings_0_0.set(UnderlyingPx_82);
    UnderlyingInstrument_82.insert(UnderlyingPx_82.getString());
    FIX::UnderlyingQty UnderlyingQty_82;
    UnderlyingQty_82.setString("19686961");
    noUnderlyings_0_0.set(UnderlyingQty_82);
    UnderlyingInstrument_82.insert(UnderlyingQty_82.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_82("LOCALMKTDATE_1583753647");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_82);
    UnderlyingInstrument_82.insert(UnderlyingRedemptionDate_82.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_82("STRING_1103602377");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_82);
    UnderlyingInstrument_82.insert(UnderlyingRepoCollateralSecurityType_82.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_82;
    UnderlyingRepurchaseRate_82.setString("41.080000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_82);
    UnderlyingInstrument_82.insert(UnderlyingRepurchaseRate_82.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_82(969111884);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_82);
    UnderlyingInstrument_82.insert(UnderlyingRepurchaseTerm_82.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_82("STRING_283399406");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_82);
    UnderlyingInstrument_82.insert(UnderlyingRestructuringType_82.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_82("STRING_203258161");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_82);
    UnderlyingInstrument_82.insert(UnderlyingSecurityDesc_82.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_82("EXCHANGE_1918020229");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_82);
    UnderlyingInstrument_82.insert(UnderlyingSecurityExchange_82.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_82("STRING_1691083852");
    noUnderlyings_0_0.set(UnderlyingSecurityID_82);
    UnderlyingInstrument_82.insert(UnderlyingSecurityID_82.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_82("STRING_1761369286");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_82);
    UnderlyingInstrument_82.insert(UnderlyingSecurityIDSource_82.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_82("STRING_1081393844");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_82);
    UnderlyingInstrument_82.insert(UnderlyingSecuritySubType_82.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_82("STRING_1827213420");
    noUnderlyings_0_0.set(UnderlyingSecurityType_82);
    UnderlyingInstrument_82.insert(UnderlyingSecurityType_82.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_82("STRING_1332974610");
    noUnderlyings_0_0.set(UnderlyingSeniority_82);
    UnderlyingInstrument_82.insert(UnderlyingSeniority_82.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_82("STRING_508895751");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_82);
    UnderlyingInstrument_82.insert(UnderlyingSettlMethod_82.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_82(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_82);
    UnderlyingInstrument_82.insert(UnderlyingSettlementType_82.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_82;
    UnderlyingStartValue_82.setString("1328959");
    noUnderlyings_0_0.set(UnderlyingStartValue_82);
    UnderlyingInstrument_82.insert(UnderlyingStartValue_82.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_82("STRING_1194853096");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_82);
    UnderlyingInstrument_82.insert(UnderlyingStateOrProvinceOfIssue_82.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_82("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_82);
    UnderlyingInstrument_82.insert(UnderlyingStrikeCurrency_82.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_82;
    UnderlyingStrikePrice_82.setString("19696278");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_82);
    UnderlyingInstrument_82.insert(UnderlyingStrikePrice_82.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_82("STRING_671621795");
    noUnderlyings_0_0.set(UnderlyingSymbol_82);
    UnderlyingInstrument_82.insert(UnderlyingSymbol_82.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_82("STRING_532165632");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_82);
    UnderlyingInstrument_82.insert(UnderlyingSymbolSfx_82.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_82("STRING_1087299329");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_82);
    UnderlyingInstrument_82.insert(UnderlyingTimeUnit_82.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_82("STRING_561151972");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_82);
    UnderlyingInstrument_82.insert(UnderlyingUnitOfMeasure_82.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_82;
    UnderlyingUnitOfMeasureQty_82.setString("16591345");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_82);
    UnderlyingInstrument_82.insert(UnderlyingUnitOfMeasureQty_82.getString());
    all_values.push_back(UnderlyingInstrument_82);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_163;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_163("STRING_1640271500");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_163);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_163.insert(UnderlyingSecurityAltID_163.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_163("STRING_549806207");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_163);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_163.insert(UnderlyingSecurityAltIDSource_163.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_163);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_164;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_164("STRING_1584681184");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_164);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_164.insert(UnderlyingSecurityAltID_164.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_164("STRING_402166860");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_164);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_164.insert(UnderlyingSecurityAltIDSource_164.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_164);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_165;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_165("STRING_838054518");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_165);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_165.insert(UnderlyingSecurityAltID_165.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_165("STRING_1405893649");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_165);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_165.insert(UnderlyingSecurityAltIDSource_165.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_165);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_156;
      FIX::UnderlyingStipType UnderlyingStipType_156("STRING_1941656896");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_156);
      UnderlyingStipulations_NoUnderlyingStips_156.insert(UnderlyingStipType_156.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_156("STRING_1058854109");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_156);
      UnderlyingStipulations_NoUnderlyingStips_156.insert(UnderlyingStipValue_156.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_156);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_157;
      FIX::UnderlyingStipType UnderlyingStipType_157("STRING_807548744");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_157);
      UnderlyingStipulations_NoUnderlyingStips_157.insert(UnderlyingStipType_157.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_157("STRING_77572654");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_157);
      UnderlyingStipulations_NoUnderlyingStips_157.insert(UnderlyingStipValue_157.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_157);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_158;
      FIX::UnderlyingStipType UnderlyingStipType_158("STRING_1262112270");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_158);
      UnderlyingStipulations_NoUnderlyingStips_158.insert(UnderlyingStipType_158.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_158("STRING_578085325");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_158);
      UnderlyingStipulations_NoUnderlyingStips_158.insert(UnderlyingStipValue_158.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_158);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_164;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_164("STRING_875997908");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_164);
      UndlyInstrumentParties_NoUndlyInstrumentParties_164.insert(UnderlyingInstrumentPartyID_164.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_164('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_164);
      UndlyInstrumentParties_NoUndlyInstrumentParties_164.insert(UnderlyingInstrumentPartyIDSource_164.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_164(1448386278);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_164);
      UndlyInstrumentParties_NoUndlyInstrumentParties_164.insert(UnderlyingInstrumentPartyRole_164.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_164);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_317("STRING_20891272");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_317);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317.insert(UnderlyingInstrumentPartySubID_317.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_317(1642863136);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_317);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317.insert(UnderlyingInstrumentPartySubIDType_317.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_165;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_165("STRING_194384773");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_165);
      UndlyInstrumentParties_NoUndlyInstrumentParties_165.insert(UnderlyingInstrumentPartyID_165.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_165('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_165);
      UndlyInstrumentParties_NoUndlyInstrumentParties_165.insert(UnderlyingInstrumentPartyIDSource_165.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_165(2052872364);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_165);
      UndlyInstrumentParties_NoUndlyInstrumentParties_165.insert(UnderlyingInstrumentPartyRole_165.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_165);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_318("STRING_1037888529");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_318);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318.insert(UnderlyingInstrumentPartySubID_318.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_318(577010512);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_318);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318.insert(UnderlyingInstrumentPartySubIDType_318.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_319("STRING_2029624923");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_319);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319.insert(UnderlyingInstrumentPartySubID_319.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_319(2125187858);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_319);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319.insert(UnderlyingInstrumentPartySubIDType_319.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_320("STRING_1138162484");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_320);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320.insert(UnderlyingInstrumentPartySubID_320.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_320(1541275823);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_320);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320.insert(UnderlyingInstrumentPartySubIDType_320.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_166;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_166("STRING_2108930039");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_166);
      UndlyInstrumentParties_NoUndlyInstrumentParties_166.insert(UnderlyingInstrumentPartyID_166.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_166('6');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_166);
      UndlyInstrumentParties_NoUndlyInstrumentParties_166.insert(UnderlyingInstrumentPartyIDSource_166.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_166(2091082030);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_166);
      UndlyInstrumentParties_NoUndlyInstrumentParties_166.insert(UnderlyingInstrumentPartyRole_166.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_166);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_321("STRING_1033117197");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_321);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321.insert(UnderlyingInstrumentPartySubID_321.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_321(781652901);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_321);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321.insert(UnderlyingInstrumentPartySubIDType_321.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_322("STRING_804537577");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_322);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322.insert(UnderlyingInstrumentPartySubID_322.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_322(871554057);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_322);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322.insert(UnderlyingInstrumentPartySubIDType_322.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_323("STRING_575826149");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_323);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323.insert(UnderlyingInstrumentPartySubID_323.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_323(1863391686);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_323);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323.insert(UnderlyingInstrumentPartySubIDType_323.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_83;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_83("DATA_1679102802");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_83);
    UnderlyingInstrument_83.insert(EncodedUnderlyingIssuer_83.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_83(653398803);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_83);
    UnderlyingInstrument_83.insert(EncodedUnderlyingIssuerLen_83.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_83("DATA_978020308");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_83);
    UnderlyingInstrument_83.insert(EncodedUnderlyingSecurityDesc_83.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_83(109704479);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_83);
    UnderlyingInstrument_83.insert(EncodedUnderlyingSecurityDescLen_83.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_83;
    UnderlyingAdjustedQuantity_83.setString("2745716");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_83);
    UnderlyingInstrument_83.insert(UnderlyingAdjustedQuantity_83.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_83;
    UnderlyingAllocationPercent_83.setString("82.170000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_83);
    UnderlyingInstrument_83.insert(UnderlyingAllocationPercent_83.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_83;
    UnderlyingAttachmentPoint_83.setString("36.490000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_83);
    UnderlyingInstrument_83.insert(UnderlyingAttachmentPoint_83.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_83("STRING_1722957940");
    noUnderlyings_0_1.set(UnderlyingCFICode_83);
    UnderlyingInstrument_83.insert(UnderlyingCFICode_83.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_83("STRING_1915507087");
    noUnderlyings_0_1.set(UnderlyingCPProgram_83);
    UnderlyingInstrument_83.insert(UnderlyingCPProgram_83.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_83("STRING_1790074921");
    noUnderlyings_0_1.set(UnderlyingCPRegType_83);
    UnderlyingInstrument_83.insert(UnderlyingCPRegType_83.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_83;
    UnderlyingCapValue_83.setString("12183374");
    noUnderlyings_0_1.set(UnderlyingCapValue_83);
    UnderlyingInstrument_83.insert(UnderlyingCapValue_83.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_83;
    UnderlyingCashAmount_83.setString("21098918");
    noUnderlyings_0_1.set(UnderlyingCashAmount_83);
    UnderlyingInstrument_83.insert(UnderlyingCashAmount_83.getString());
    FIX::UnderlyingCashType UnderlyingCashType_83("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_83);
    UnderlyingInstrument_83.insert(UnderlyingCashType_83.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_83;
    UnderlyingContractMultiplier_83.setString("11237261");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_83);
    UnderlyingInstrument_83.insert(UnderlyingContractMultiplier_83.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_83(1459867503);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_83);
    UnderlyingInstrument_83.insert(UnderlyingContractMultiplierUnit_83.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_83("COUNTRY_1896224171");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_83);
    UnderlyingInstrument_83.insert(UnderlyingCountryOfIssue_83.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_83("LOCALMKTDATE_1700736657");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_83);
    UnderlyingInstrument_83.insert(UnderlyingCouponPaymentDate_83.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_83;
    UnderlyingCouponRate_83.setString("87.780000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_83);
    UnderlyingInstrument_83.insert(UnderlyingCouponRate_83.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_83("STRING_1873928381");
    noUnderlyings_0_1.set(UnderlyingCreditRating_83);
    UnderlyingInstrument_83.insert(UnderlyingCreditRating_83.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_83("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_83);
    UnderlyingInstrument_83.insert(UnderlyingCurrency_83.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_83;
    UnderlyingCurrentValue_83.setString("18353747");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_83);
    UnderlyingInstrument_83.insert(UnderlyingCurrentValue_83.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_83;
    UnderlyingDetachmentPoint_83.setString("58.310000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_83);
    UnderlyingInstrument_83.insert(UnderlyingDetachmentPoint_83.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_83;
    UnderlyingDirtyPrice_83.setString("6793993");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_83);
    UnderlyingInstrument_83.insert(UnderlyingDirtyPrice_83.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_83;
    UnderlyingEndPrice_83.setString("12340187");
    noUnderlyings_0_1.set(UnderlyingEndPrice_83);
    UnderlyingInstrument_83.insert(UnderlyingEndPrice_83.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_83;
    UnderlyingEndValue_83.setString("2079993");
    noUnderlyings_0_1.set(UnderlyingEndValue_83);
    UnderlyingInstrument_83.insert(UnderlyingEndValue_83.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_83(1461052237);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_83);
    UnderlyingInstrument_83.insert(UnderlyingExerciseStyle_83.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_83;
    UnderlyingFXRate_83.setString("20385562");
    noUnderlyings_0_1.set(UnderlyingFXRate_83);
    UnderlyingInstrument_83.insert(UnderlyingFXRate_83.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_83('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_83);
    UnderlyingInstrument_83.insert(UnderlyingFXRateCalc_83.getString());
    FIX::UnderlyingFactor UnderlyingFactor_83;
    UnderlyingFactor_83.setString("20368783");
    noUnderlyings_0_1.set(UnderlyingFactor_83);
    UnderlyingInstrument_83.insert(UnderlyingFactor_83.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_83(1754464316);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_83);
    UnderlyingInstrument_83.insert(UnderlyingFlowScheduleType_83.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_83("STRING_611172592");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_83);
    UnderlyingInstrument_83.insert(UnderlyingInstrRegistry_83.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_83("LOCALMKTDATE_542793541");
    noUnderlyings_0_1.set(UnderlyingIssueDate_83);
    UnderlyingInstrument_83.insert(UnderlyingIssueDate_83.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_83("STRING_585000976");
    noUnderlyings_0_1.set(UnderlyingIssuer_83);
    UnderlyingInstrument_83.insert(UnderlyingIssuer_83.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_83("STRING_720877071");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_83);
    UnderlyingInstrument_83.insert(UnderlyingLocaleOfIssue_83.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_83("LOCALMKTDATE_817365203");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_83);
    UnderlyingInstrument_83.insert(UnderlyingMaturityDate_83.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_83("MONTHYEAR_291535545");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_83);
    UnderlyingInstrument_83.insert(UnderlyingMaturityMonthYear_83.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_83("TZTIMEONLY_342577072");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_83);
    UnderlyingInstrument_83.insert(UnderlyingMaturityTime_83.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_83;
    UnderlyingNotionalPercentageOutstanding_83.setString("94.960000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_83);
    UnderlyingInstrument_83.insert(UnderlyingNotionalPercentageOutstanding_83.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_83('5');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_83);
    UnderlyingInstrument_83.insert(UnderlyingOptAttribute_83.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_83;
    UnderlyingOriginalNotionalPercentageOutstanding_83.setString("19.940000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_83);
    UnderlyingInstrument_83.insert(UnderlyingOriginalNotionalPercentageOutstanding_83.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_83("STRING_1611176925");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_83);
    UnderlyingInstrument_83.insert(UnderlyingPriceUnitOfMeasure_83.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_83;
    UnderlyingPriceUnitOfMeasureQty_83.setString("219671");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_83);
    UnderlyingInstrument_83.insert(UnderlyingPriceUnitOfMeasureQty_83.getString());
    FIX::UnderlyingProduct UnderlyingProduct_83(843503988);
    noUnderlyings_0_1.set(UnderlyingProduct_83);
    UnderlyingInstrument_83.insert(UnderlyingProduct_83.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_83(587419422);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_83);
    UnderlyingInstrument_83.insert(UnderlyingPutOrCall_83.getString());
    FIX::UnderlyingPx UnderlyingPx_83;
    UnderlyingPx_83.setString("14818347");
    noUnderlyings_0_1.set(UnderlyingPx_83);
    UnderlyingInstrument_83.insert(UnderlyingPx_83.getString());
    FIX::UnderlyingQty UnderlyingQty_83;
    UnderlyingQty_83.setString("5922445");
    noUnderlyings_0_1.set(UnderlyingQty_83);
    UnderlyingInstrument_83.insert(UnderlyingQty_83.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_83("LOCALMKTDATE_140672432");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_83);
    UnderlyingInstrument_83.insert(UnderlyingRedemptionDate_83.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_83("STRING_676359832");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_83);
    UnderlyingInstrument_83.insert(UnderlyingRepoCollateralSecurityType_83.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_83;
    UnderlyingRepurchaseRate_83.setString("92.440000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_83);
    UnderlyingInstrument_83.insert(UnderlyingRepurchaseRate_83.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_83(832087926);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_83);
    UnderlyingInstrument_83.insert(UnderlyingRepurchaseTerm_83.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_83("STRING_1412160785");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_83);
    UnderlyingInstrument_83.insert(UnderlyingRestructuringType_83.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_83("STRING_6580369");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_83);
    UnderlyingInstrument_83.insert(UnderlyingSecurityDesc_83.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_83("EXCHANGE_6970109");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_83);
    UnderlyingInstrument_83.insert(UnderlyingSecurityExchange_83.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_83("STRING_2091560121");
    noUnderlyings_0_1.set(UnderlyingSecurityID_83);
    UnderlyingInstrument_83.insert(UnderlyingSecurityID_83.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_83("STRING_1240599070");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_83);
    UnderlyingInstrument_83.insert(UnderlyingSecurityIDSource_83.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_83("STRING_214969489");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_83);
    UnderlyingInstrument_83.insert(UnderlyingSecuritySubType_83.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_83("STRING_1405128710");
    noUnderlyings_0_1.set(UnderlyingSecurityType_83);
    UnderlyingInstrument_83.insert(UnderlyingSecurityType_83.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_83("STRING_1131671700");
    noUnderlyings_0_1.set(UnderlyingSeniority_83);
    UnderlyingInstrument_83.insert(UnderlyingSeniority_83.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_83("STRING_1294522927");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_83);
    UnderlyingInstrument_83.insert(UnderlyingSettlMethod_83.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_83(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_83);
    UnderlyingInstrument_83.insert(UnderlyingSettlementType_83.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_83;
    UnderlyingStartValue_83.setString("7386523");
    noUnderlyings_0_1.set(UnderlyingStartValue_83);
    UnderlyingInstrument_83.insert(UnderlyingStartValue_83.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_83("STRING_1905695519");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_83);
    UnderlyingInstrument_83.insert(UnderlyingStateOrProvinceOfIssue_83.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_83("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_83);
    UnderlyingInstrument_83.insert(UnderlyingStrikeCurrency_83.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_83;
    UnderlyingStrikePrice_83.setString("4790889");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_83);
    UnderlyingInstrument_83.insert(UnderlyingStrikePrice_83.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_83("STRING_507198545");
    noUnderlyings_0_1.set(UnderlyingSymbol_83);
    UnderlyingInstrument_83.insert(UnderlyingSymbol_83.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_83("STRING_1615188890");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_83);
    UnderlyingInstrument_83.insert(UnderlyingSymbolSfx_83.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_83("STRING_821666015");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_83);
    UnderlyingInstrument_83.insert(UnderlyingTimeUnit_83.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_83("STRING_900038041");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_83);
    UnderlyingInstrument_83.insert(UnderlyingUnitOfMeasure_83.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_83;
    UnderlyingUnitOfMeasureQty_83.setString("16747478");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_83);
    UnderlyingInstrument_83.insert(UnderlyingUnitOfMeasureQty_83.getString());
    all_values.push_back(UnderlyingInstrument_83);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_166;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_166("STRING_363731318");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_166);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_166.insert(UnderlyingSecurityAltID_166.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_166("STRING_1696715073");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_166);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_166.insert(UnderlyingSecurityAltIDSource_166.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_166);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_159;
      FIX::UnderlyingStipType UnderlyingStipType_159("STRING_951150741");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_159);
      UnderlyingStipulations_NoUnderlyingStips_159.insert(UnderlyingStipType_159.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_159("STRING_1031066127");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_159);
      UnderlyingStipulations_NoUnderlyingStips_159.insert(UnderlyingStipValue_159.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_159);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_167;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_167("STRING_1091823173");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_167);
      UndlyInstrumentParties_NoUndlyInstrumentParties_167.insert(UnderlyingInstrumentPartyID_167.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_167('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_167);
      UndlyInstrumentParties_NoUndlyInstrumentParties_167.insert(UnderlyingInstrumentPartyIDSource_167.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_167(413788457);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_167);
      UndlyInstrumentParties_NoUndlyInstrumentParties_167.insert(UnderlyingInstrumentPartyRole_167.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_167);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_324("STRING_972103096");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_324);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324.insert(UnderlyingInstrumentPartySubID_324.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_324(420368826);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_324);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324.insert(UnderlyingInstrumentPartySubIDType_324.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_325("STRING_1930881208");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_325);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325.insert(UnderlyingInstrumentPartySubID_325.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_325(916179570);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_325);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325.insert(UnderlyingInstrumentPartySubIDType_325.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_326("STRING_1660967897");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_326);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326.insert(UnderlyingInstrumentPartySubID_326.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_326(2145850697);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_326);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326.insert(UnderlyingInstrumentPartySubIDType_326.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_168;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_168("STRING_173824632");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_168);
      UndlyInstrumentParties_NoUndlyInstrumentParties_168.insert(UnderlyingInstrumentPartyID_168.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_168('6');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_168);
      UndlyInstrumentParties_NoUndlyInstrumentParties_168.insert(UnderlyingInstrumentPartyIDSource_168.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_168(1292889977);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_168);
      UndlyInstrumentParties_NoUndlyInstrumentParties_168.insert(UnderlyingInstrumentPartyRole_168.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_168);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_327("STRING_1383808318");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_327);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327.insert(UnderlyingInstrumentPartySubID_327.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_327(1051101848);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_327);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327.insert(UnderlyingInstrumentPartySubIDType_327.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_328("STRING_1158181423");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_328);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328.insert(UnderlyingInstrumentPartySubID_328.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_328(559978015);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_328);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328.insert(UnderlyingInstrumentPartySubIDType_328.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }

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
