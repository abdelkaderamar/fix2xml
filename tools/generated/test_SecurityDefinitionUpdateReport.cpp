#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityDefinitionUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinitionUpdateReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityDefinitionUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityDefinitionUpdateReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_21("LOCALMKTDATE_1312585139");
  msg.set(ClearingBusinessDate_21);
  SecurityDefinitionUpdateReport_0.insert(ClearingBusinessDate_21.getString());
  FIX::CorporateAction CorporateAction_7("MULTIPLECHARVALUE_Q");
  msg.set(CorporateAction_7);
  SecurityDefinitionUpdateReport_0.insert(CorporateAction_7.getString());
  FIX::Currency Currency_55("GBP");
  msg.set(Currency_55);
  SecurityDefinitionUpdateReport_0.insert(Currency_55.getString());
  FIX::EncodedText EncodedText_79("DATA_1051738194");
  msg.set(EncodedText_79);
  SecurityDefinitionUpdateReport_0.insert(EncodedText_79.getString());
  FIX::EncodedTextLen EncodedTextLen_79(1755028359);
  msg.set(EncodedTextLen_79);
  SecurityDefinitionUpdateReport_0.insert(EncodedTextLen_79.getString());
  FIX::SecurityReportID SecurityReportID_2(956819525);
  msg.set(SecurityReportID_2);
  SecurityDefinitionUpdateReport_0.insert(SecurityReportID_2.getString());
  FIX::SecurityReqID SecurityReqID_5("STRING_76473092");
  msg.set(SecurityReqID_5);
  SecurityDefinitionUpdateReport_0.insert(SecurityReqID_5.getString());
  FIX::SecurityResponseID SecurityResponseID_3("STRING_1857478106");
  msg.set(SecurityResponseID_3);
  SecurityDefinitionUpdateReport_0.insert(SecurityResponseID_3.getString());
  FIX::SecurityResponseType SecurityResponseType_1(3);
  msg.set(SecurityResponseType_1);
  SecurityDefinitionUpdateReport_0.insert(SecurityResponseType_1.getString());
  FIX::SecurityUpdateAction SecurityUpdateAction_1('D');
  msg.set(SecurityUpdateAction_1);
  SecurityDefinitionUpdateReport_0.insert(SecurityUpdateAction_1.getString());
  FIX::Text Text_79("STRING_1879242690");
  msg.set(Text_79);
  SecurityDefinitionUpdateReport_0.insert(Text_79.getString());
  FIX::TransactTime TransactTime_54(FIX::UTCTIMESTAMP(7, 45, 14, 17, 32017));
  msg.set(TransactTime_54);
  SecurityDefinitionUpdateReport_0.insert(TransactTime_54.getString());
  all_values.push_back(SecurityDefinitionUpdateReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_13;
  FIX::ApplID ApplID_13("STRING_1895064032");
  msg.set(ApplID_13);
  ApplicationSequenceControl_13.insert(ApplID_13.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_13(782878903);
  msg.set(ApplLastSeqNum_13);
  ApplicationSequenceControl_13.insert(ApplLastSeqNum_13.getString());
  FIX::ApplResendFlag ApplResendFlag_13(false);
  msg.set(ApplResendFlag_13);
  ApplicationSequenceControl_13.insert(ApplResendFlag_13.getString());
  FIX::ApplSeqNum ApplSeqNum_13(1076870441);
  msg.set(ApplSeqNum_13);
  ApplicationSequenceControl_13.insert(ApplSeqNum_13.getString());
  all_values.push_back(ApplicationSequenceControl_13);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_102;
    FIX::EncodedLegIssuer EncodedLegIssuer_102("DATA_1867861976");
    noLegs_0_0.set(EncodedLegIssuer_102);
    InstrumentLeg_102.insert(EncodedLegIssuer_102.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_102(1996760685);
    noLegs_0_0.set(EncodedLegIssuerLen_102);
    InstrumentLeg_102.insert(EncodedLegIssuerLen_102.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_102("DATA_744949099");
    noLegs_0_0.set(EncodedLegSecurityDesc_102);
    InstrumentLeg_102.insert(EncodedLegSecurityDesc_102.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_102(294359544);
    noLegs_0_0.set(EncodedLegSecurityDescLen_102);
    InstrumentLeg_102.insert(EncodedLegSecurityDescLen_102.getString());
    FIX::LegCFICode LegCFICode_102("STRING_1029568711");
    noLegs_0_0.set(LegCFICode_102);
    InstrumentLeg_102.insert(LegCFICode_102.getString());
    FIX::LegContractMultiplier LegContractMultiplier_102;
    LegContractMultiplier_102.setString("13021033");
    noLegs_0_0.set(LegContractMultiplier_102);
    InstrumentLeg_102.insert(LegContractMultiplier_102.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_102(825873311);
    noLegs_0_0.set(LegContractMultiplierUnit_102);
    InstrumentLeg_102.insert(LegContractMultiplierUnit_102.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_102("MONTHYEAR_194670202");
    noLegs_0_0.set(LegContractSettlMonth_102);
    InstrumentLeg_102.insert(LegContractSettlMonth_102.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_102("COUNTRY_2000118404");
    noLegs_0_0.set(LegCountryOfIssue_102);
    InstrumentLeg_102.insert(LegCountryOfIssue_102.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_102("LOCALMKTDATE_1796850819");
    noLegs_0_0.set(LegCouponPaymentDate_102);
    InstrumentLeg_102.insert(LegCouponPaymentDate_102.getString());
    FIX::LegCouponRate LegCouponRate_102;
    LegCouponRate_102.setString("6.220000");
    noLegs_0_0.set(LegCouponRate_102);
    InstrumentLeg_102.insert(LegCouponRate_102.getString());
    FIX::LegCreditRating LegCreditRating_102("STRING_904372950");
    noLegs_0_0.set(LegCreditRating_102);
    InstrumentLeg_102.insert(LegCreditRating_102.getString());
    FIX::LegCurrency LegCurrency_102("CAN");
    noLegs_0_0.set(LegCurrency_102);
    InstrumentLeg_102.insert(LegCurrency_102.getString());
    FIX::LegDatedDate LegDatedDate_102("LOCALMKTDATE_980846042");
    noLegs_0_0.set(LegDatedDate_102);
    InstrumentLeg_102.insert(LegDatedDate_102.getString());
    FIX::LegExerciseStyle LegExerciseStyle_102(1114389989);
    noLegs_0_0.set(LegExerciseStyle_102);
    InstrumentLeg_102.insert(LegExerciseStyle_102.getString());
    FIX::LegFactor LegFactor_102;
    LegFactor_102.setString("14199784");
    noLegs_0_0.set(LegFactor_102);
    InstrumentLeg_102.insert(LegFactor_102.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_102(1958492053);
    noLegs_0_0.set(LegFlowScheduleType_102);
    InstrumentLeg_102.insert(LegFlowScheduleType_102.getString());
    FIX::LegInstrRegistry LegInstrRegistry_102("STRING_846149031");
    noLegs_0_0.set(LegInstrRegistry_102);
    InstrumentLeg_102.insert(LegInstrRegistry_102.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_102("LOCALMKTDATE_464560041");
    noLegs_0_0.set(LegInterestAccrualDate_102);
    InstrumentLeg_102.insert(LegInterestAccrualDate_102.getString());
    FIX::LegIssueDate LegIssueDate_102("LOCALMKTDATE_1773178884");
    noLegs_0_0.set(LegIssueDate_102);
    InstrumentLeg_102.insert(LegIssueDate_102.getString());
    FIX::LegIssuer LegIssuer_102("STRING_139074148");
    noLegs_0_0.set(LegIssuer_102);
    InstrumentLeg_102.insert(LegIssuer_102.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_102("STRING_917298515");
    noLegs_0_0.set(LegLocaleOfIssue_102);
    InstrumentLeg_102.insert(LegLocaleOfIssue_102.getString());
    FIX::LegMaturityDate LegMaturityDate_102("LOCALMKTDATE_1903214233");
    noLegs_0_0.set(LegMaturityDate_102);
    InstrumentLeg_102.insert(LegMaturityDate_102.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_102("MONTHYEAR_119144003");
    noLegs_0_0.set(LegMaturityMonthYear_102);
    InstrumentLeg_102.insert(LegMaturityMonthYear_102.getString());
    FIX::LegMaturityTime LegMaturityTime_102("TZTIMEONLY_2103557176");
    noLegs_0_0.set(LegMaturityTime_102);
    InstrumentLeg_102.insert(LegMaturityTime_102.getString());
    FIX::LegOptAttribute LegOptAttribute_102('1');
    noLegs_0_0.set(LegOptAttribute_102);
    InstrumentLeg_102.insert(LegOptAttribute_102.getString());
    FIX::LegOptionRatio LegOptionRatio_102;
    LegOptionRatio_102.setString("9020229");
    noLegs_0_0.set(LegOptionRatio_102);
    InstrumentLeg_102.insert(LegOptionRatio_102.getString());
    FIX::LegPool LegPool_102("STRING_1367462802");
    noLegs_0_0.set(LegPool_102);
    InstrumentLeg_102.insert(LegPool_102.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_102("STRING_580181411");
    noLegs_0_0.set(LegPriceUnitOfMeasure_102);
    InstrumentLeg_102.insert(LegPriceUnitOfMeasure_102.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_102;
    LegPriceUnitOfMeasureQty_102.setString("276532");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_102);
    InstrumentLeg_102.insert(LegPriceUnitOfMeasureQty_102.getString());
    FIX::LegProduct LegProduct_102(1087841130);
    noLegs_0_0.set(LegProduct_102);
    InstrumentLeg_102.insert(LegProduct_102.getString());
    FIX::LegPutOrCall LegPutOrCall_102(429458448);
    noLegs_0_0.set(LegPutOrCall_102);
    InstrumentLeg_102.insert(LegPutOrCall_102.getString());
    FIX::LegRatioQty LegRatioQty_102;
    LegRatioQty_102.setString("7726023");
    noLegs_0_0.set(LegRatioQty_102);
    InstrumentLeg_102.insert(LegRatioQty_102.getString());
    FIX::LegRedemptionDate LegRedemptionDate_102("LOCALMKTDATE_1382200674");
    noLegs_0_0.set(LegRedemptionDate_102);
    InstrumentLeg_102.insert(LegRedemptionDate_102.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_102("STRING_1459027159");
    noLegs_0_0.set(LegRepoCollateralSecurityType_102);
    InstrumentLeg_102.insert(LegRepoCollateralSecurityType_102.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_102;
    LegRepurchaseRate_102.setString("57.460000");
    noLegs_0_0.set(LegRepurchaseRate_102);
    InstrumentLeg_102.insert(LegRepurchaseRate_102.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_102(60590337);
    noLegs_0_0.set(LegRepurchaseTerm_102);
    InstrumentLeg_102.insert(LegRepurchaseTerm_102.getString());
    FIX::LegSecurityDesc LegSecurityDesc_102("STRING_1653697361");
    noLegs_0_0.set(LegSecurityDesc_102);
    InstrumentLeg_102.insert(LegSecurityDesc_102.getString());
    FIX::LegSecurityExchange LegSecurityExchange_102("EXCHANGE_1927340502");
    noLegs_0_0.set(LegSecurityExchange_102);
    InstrumentLeg_102.insert(LegSecurityExchange_102.getString());
    FIX::LegSecurityID LegSecurityID_102("STRING_1857441156");
    noLegs_0_0.set(LegSecurityID_102);
    InstrumentLeg_102.insert(LegSecurityID_102.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_102("STRING_2056947984");
    noLegs_0_0.set(LegSecurityIDSource_102);
    InstrumentLeg_102.insert(LegSecurityIDSource_102.getString());
    FIX::LegSecuritySubType LegSecuritySubType_102("STRING_684229805");
    noLegs_0_0.set(LegSecuritySubType_102);
    InstrumentLeg_102.insert(LegSecuritySubType_102.getString());
    FIX::LegSecurityType LegSecurityType_102("STRING_1114353039");
    noLegs_0_0.set(LegSecurityType_102);
    InstrumentLeg_102.insert(LegSecurityType_102.getString());
    FIX::LegSide LegSide_102('1');
    noLegs_0_0.set(LegSide_102);
    InstrumentLeg_102.insert(LegSide_102.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_102("STRING_1665075847");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_102);
    InstrumentLeg_102.insert(LegStateOrProvinceOfIssue_102.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_102("CHF");
    noLegs_0_0.set(LegStrikeCurrency_102);
    InstrumentLeg_102.insert(LegStrikeCurrency_102.getString());
    FIX::LegStrikePrice LegStrikePrice_102;
    LegStrikePrice_102.setString("14760842");
    noLegs_0_0.set(LegStrikePrice_102);
    InstrumentLeg_102.insert(LegStrikePrice_102.getString());
    FIX::LegSymbol LegSymbol_102("STRING_927408411");
    noLegs_0_0.set(LegSymbol_102);
    InstrumentLeg_102.insert(LegSymbol_102.getString());
    FIX::LegSymbolSfx LegSymbolSfx_102("STRING_1006589370");
    noLegs_0_0.set(LegSymbolSfx_102);
    InstrumentLeg_102.insert(LegSymbolSfx_102.getString());
    FIX::LegTimeUnit LegTimeUnit_102("STRING_1101779488");
    noLegs_0_0.set(LegTimeUnit_102);
    InstrumentLeg_102.insert(LegTimeUnit_102.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_102("STRING_1066482560");
    noLegs_0_0.set(LegUnitOfMeasure_102);
    InstrumentLeg_102.insert(LegUnitOfMeasure_102.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_102;
    LegUnitOfMeasureQty_102.setString("19238878");
    noLegs_0_0.set(LegUnitOfMeasureQty_102);
    InstrumentLeg_102.insert(LegUnitOfMeasureQty_102.getString());
    all_values.push_back(InstrumentLeg_102);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_180;
      FIX::LegSecurityAltID LegSecurityAltID_180("STRING_1185626563");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_180);
      LegSecAltIDGrp_NoLegSecurityAltID_180.insert(LegSecurityAltID_180.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_180("STRING_1879961414");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_180);
      LegSecAltIDGrp_NoLegSecurityAltID_180.insert(LegSecurityAltIDSource_180.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_180);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_181;
      FIX::LegSecurityAltID LegSecurityAltID_181("STRING_360821044");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_181);
      LegSecAltIDGrp_NoLegSecurityAltID_181.insert(LegSecurityAltID_181.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_181("STRING_2087649469");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_181);
      LegSecAltIDGrp_NoLegSecurityAltID_181.insert(LegSecurityAltIDSource_181.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_181);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_103;
    FIX::EncodedLegIssuer EncodedLegIssuer_103("DATA_1099940568");
    noLegs_0_1.set(EncodedLegIssuer_103);
    InstrumentLeg_103.insert(EncodedLegIssuer_103.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_103(941002455);
    noLegs_0_1.set(EncodedLegIssuerLen_103);
    InstrumentLeg_103.insert(EncodedLegIssuerLen_103.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_103("DATA_2115302722");
    noLegs_0_1.set(EncodedLegSecurityDesc_103);
    InstrumentLeg_103.insert(EncodedLegSecurityDesc_103.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_103(40298050);
    noLegs_0_1.set(EncodedLegSecurityDescLen_103);
    InstrumentLeg_103.insert(EncodedLegSecurityDescLen_103.getString());
    FIX::LegCFICode LegCFICode_103("STRING_1370460903");
    noLegs_0_1.set(LegCFICode_103);
    InstrumentLeg_103.insert(LegCFICode_103.getString());
    FIX::LegContractMultiplier LegContractMultiplier_103;
    LegContractMultiplier_103.setString("7404214");
    noLegs_0_1.set(LegContractMultiplier_103);
    InstrumentLeg_103.insert(LegContractMultiplier_103.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_103(1422498725);
    noLegs_0_1.set(LegContractMultiplierUnit_103);
    InstrumentLeg_103.insert(LegContractMultiplierUnit_103.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_103("MONTHYEAR_682004415");
    noLegs_0_1.set(LegContractSettlMonth_103);
    InstrumentLeg_103.insert(LegContractSettlMonth_103.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_103("COUNTRY_667643524");
    noLegs_0_1.set(LegCountryOfIssue_103);
    InstrumentLeg_103.insert(LegCountryOfIssue_103.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_103("LOCALMKTDATE_1483089062");
    noLegs_0_1.set(LegCouponPaymentDate_103);
    InstrumentLeg_103.insert(LegCouponPaymentDate_103.getString());
    FIX::LegCouponRate LegCouponRate_103;
    LegCouponRate_103.setString("81.280000");
    noLegs_0_1.set(LegCouponRate_103);
    InstrumentLeg_103.insert(LegCouponRate_103.getString());
    FIX::LegCreditRating LegCreditRating_103("STRING_447500379");
    noLegs_0_1.set(LegCreditRating_103);
    InstrumentLeg_103.insert(LegCreditRating_103.getString());
    FIX::LegCurrency LegCurrency_103("JPY");
    noLegs_0_1.set(LegCurrency_103);
    InstrumentLeg_103.insert(LegCurrency_103.getString());
    FIX::LegDatedDate LegDatedDate_103("LOCALMKTDATE_1131730184");
    noLegs_0_1.set(LegDatedDate_103);
    InstrumentLeg_103.insert(LegDatedDate_103.getString());
    FIX::LegExerciseStyle LegExerciseStyle_103(159915962);
    noLegs_0_1.set(LegExerciseStyle_103);
    InstrumentLeg_103.insert(LegExerciseStyle_103.getString());
    FIX::LegFactor LegFactor_103;
    LegFactor_103.setString("13672169");
    noLegs_0_1.set(LegFactor_103);
    InstrumentLeg_103.insert(LegFactor_103.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_103(649322383);
    noLegs_0_1.set(LegFlowScheduleType_103);
    InstrumentLeg_103.insert(LegFlowScheduleType_103.getString());
    FIX::LegInstrRegistry LegInstrRegistry_103("STRING_241175342");
    noLegs_0_1.set(LegInstrRegistry_103);
    InstrumentLeg_103.insert(LegInstrRegistry_103.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_103("LOCALMKTDATE_1909246277");
    noLegs_0_1.set(LegInterestAccrualDate_103);
    InstrumentLeg_103.insert(LegInterestAccrualDate_103.getString());
    FIX::LegIssueDate LegIssueDate_103("LOCALMKTDATE_2125406636");
    noLegs_0_1.set(LegIssueDate_103);
    InstrumentLeg_103.insert(LegIssueDate_103.getString());
    FIX::LegIssuer LegIssuer_103("STRING_1168583753");
    noLegs_0_1.set(LegIssuer_103);
    InstrumentLeg_103.insert(LegIssuer_103.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_103("STRING_768352000");
    noLegs_0_1.set(LegLocaleOfIssue_103);
    InstrumentLeg_103.insert(LegLocaleOfIssue_103.getString());
    FIX::LegMaturityDate LegMaturityDate_103("LOCALMKTDATE_1079702476");
    noLegs_0_1.set(LegMaturityDate_103);
    InstrumentLeg_103.insert(LegMaturityDate_103.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_103("MONTHYEAR_87582665");
    noLegs_0_1.set(LegMaturityMonthYear_103);
    InstrumentLeg_103.insert(LegMaturityMonthYear_103.getString());
    FIX::LegMaturityTime LegMaturityTime_103("TZTIMEONLY_544756238");
    noLegs_0_1.set(LegMaturityTime_103);
    InstrumentLeg_103.insert(LegMaturityTime_103.getString());
    FIX::LegOptAttribute LegOptAttribute_103('1');
    noLegs_0_1.set(LegOptAttribute_103);
    InstrumentLeg_103.insert(LegOptAttribute_103.getString());
    FIX::LegOptionRatio LegOptionRatio_103;
    LegOptionRatio_103.setString("12732092");
    noLegs_0_1.set(LegOptionRatio_103);
    InstrumentLeg_103.insert(LegOptionRatio_103.getString());
    FIX::LegPool LegPool_103("STRING_277234004");
    noLegs_0_1.set(LegPool_103);
    InstrumentLeg_103.insert(LegPool_103.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_103("STRING_150549946");
    noLegs_0_1.set(LegPriceUnitOfMeasure_103);
    InstrumentLeg_103.insert(LegPriceUnitOfMeasure_103.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_103;
    LegPriceUnitOfMeasureQty_103.setString("12133750");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_103);
    InstrumentLeg_103.insert(LegPriceUnitOfMeasureQty_103.getString());
    FIX::LegProduct LegProduct_103(1377174573);
    noLegs_0_1.set(LegProduct_103);
    InstrumentLeg_103.insert(LegProduct_103.getString());
    FIX::LegPutOrCall LegPutOrCall_103(1091552401);
    noLegs_0_1.set(LegPutOrCall_103);
    InstrumentLeg_103.insert(LegPutOrCall_103.getString());
    FIX::LegRatioQty LegRatioQty_103;
    LegRatioQty_103.setString("11811941");
    noLegs_0_1.set(LegRatioQty_103);
    InstrumentLeg_103.insert(LegRatioQty_103.getString());
    FIX::LegRedemptionDate LegRedemptionDate_103("LOCALMKTDATE_1417472623");
    noLegs_0_1.set(LegRedemptionDate_103);
    InstrumentLeg_103.insert(LegRedemptionDate_103.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_103("STRING_314529657");
    noLegs_0_1.set(LegRepoCollateralSecurityType_103);
    InstrumentLeg_103.insert(LegRepoCollateralSecurityType_103.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_103;
    LegRepurchaseRate_103.setString("55.510000");
    noLegs_0_1.set(LegRepurchaseRate_103);
    InstrumentLeg_103.insert(LegRepurchaseRate_103.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_103(692487700);
    noLegs_0_1.set(LegRepurchaseTerm_103);
    InstrumentLeg_103.insert(LegRepurchaseTerm_103.getString());
    FIX::LegSecurityDesc LegSecurityDesc_103("STRING_996534072");
    noLegs_0_1.set(LegSecurityDesc_103);
    InstrumentLeg_103.insert(LegSecurityDesc_103.getString());
    FIX::LegSecurityExchange LegSecurityExchange_103("EXCHANGE_441775427");
    noLegs_0_1.set(LegSecurityExchange_103);
    InstrumentLeg_103.insert(LegSecurityExchange_103.getString());
    FIX::LegSecurityID LegSecurityID_103("STRING_28093115");
    noLegs_0_1.set(LegSecurityID_103);
    InstrumentLeg_103.insert(LegSecurityID_103.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_103("STRING_1184752200");
    noLegs_0_1.set(LegSecurityIDSource_103);
    InstrumentLeg_103.insert(LegSecurityIDSource_103.getString());
    FIX::LegSecuritySubType LegSecuritySubType_103("STRING_889275806");
    noLegs_0_1.set(LegSecuritySubType_103);
    InstrumentLeg_103.insert(LegSecuritySubType_103.getString());
    FIX::LegSecurityType LegSecurityType_103("STRING_1221139686");
    noLegs_0_1.set(LegSecurityType_103);
    InstrumentLeg_103.insert(LegSecurityType_103.getString());
    FIX::LegSide LegSide_103('1');
    noLegs_0_1.set(LegSide_103);
    InstrumentLeg_103.insert(LegSide_103.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_103("STRING_2021005990");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_103);
    InstrumentLeg_103.insert(LegStateOrProvinceOfIssue_103.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_103("CAN");
    noLegs_0_1.set(LegStrikeCurrency_103);
    InstrumentLeg_103.insert(LegStrikeCurrency_103.getString());
    FIX::LegStrikePrice LegStrikePrice_103;
    LegStrikePrice_103.setString("5228447");
    noLegs_0_1.set(LegStrikePrice_103);
    InstrumentLeg_103.insert(LegStrikePrice_103.getString());
    FIX::LegSymbol LegSymbol_103("STRING_1622230990");
    noLegs_0_1.set(LegSymbol_103);
    InstrumentLeg_103.insert(LegSymbol_103.getString());
    FIX::LegSymbolSfx LegSymbolSfx_103("STRING_263930594");
    noLegs_0_1.set(LegSymbolSfx_103);
    InstrumentLeg_103.insert(LegSymbolSfx_103.getString());
    FIX::LegTimeUnit LegTimeUnit_103("STRING_500767714");
    noLegs_0_1.set(LegTimeUnit_103);
    InstrumentLeg_103.insert(LegTimeUnit_103.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_103("STRING_643331095");
    noLegs_0_1.set(LegUnitOfMeasure_103);
    InstrumentLeg_103.insert(LegUnitOfMeasure_103.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_103;
    LegUnitOfMeasureQty_103.setString("10322825");
    noLegs_0_1.set(LegUnitOfMeasureQty_103);
    InstrumentLeg_103.insert(LegUnitOfMeasureQty_103.getString());
    all_values.push_back(InstrumentLeg_103);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_182;
      FIX::LegSecurityAltID LegSecurityAltID_182("STRING_730913761");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_182);
      LegSecAltIDGrp_NoLegSecurityAltID_182.insert(LegSecurityAltID_182.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_182("STRING_1577038832");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_182);
      LegSecAltIDGrp_NoLegSecurityAltID_182.insert(LegSecurityAltIDSource_182.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_182);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_183;
      FIX::LegSecurityAltID LegSecurityAltID_183("STRING_1370199093");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_183);
      LegSecAltIDGrp_NoLegSecurityAltID_183.insert(LegSecurityAltID_183.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_183("STRING_2004122989");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_183);
      LegSecAltIDGrp_NoLegSecurityAltID_183.insert(LegSecurityAltIDSource_183.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_183);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_184;
      FIX::LegSecurityAltID LegSecurityAltID_184("STRING_1854272837");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_184);
      LegSecAltIDGrp_NoLegSecurityAltID_184.insert(LegSecurityAltID_184.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_184("STRING_1520749039");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_184);
      LegSecAltIDGrp_NoLegSecurityAltID_184.insert(LegSecurityAltIDSource_184.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_184);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_73;
  FIX::AttachmentPoint AttachmentPoint_73;
  AttachmentPoint_73.setString("43.910000");
  msg.set(AttachmentPoint_73);
  Instrument_73.insert(AttachmentPoint_73.getString());
  FIX::CFICode CFICode_73("STRING_1083963762");
  msg.set(CFICode_73);
  Instrument_73.insert(CFICode_73.getString());
  FIX::CPProgram CPProgram_73(2);
  msg.set(CPProgram_73);
  Instrument_73.insert(CPProgram_73.getString());
  FIX::CPRegType CPRegType_73("STRING_103724868");
  msg.set(CPRegType_73);
  Instrument_73.insert(CPRegType_73.getString());
  FIX::CapPrice CapPrice_73;
  CapPrice_73.setString("3539527");
  msg.set(CapPrice_73);
  Instrument_73.insert(CapPrice_73.getString());
  FIX::ContractMultiplier ContractMultiplier_73;
  ContractMultiplier_73.setString("7793474");
  msg.set(ContractMultiplier_73);
  Instrument_73.insert(ContractMultiplier_73.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_73(0);
  msg.set(ContractMultiplierUnit_73);
  Instrument_73.insert(ContractMultiplierUnit_73.getString());
  FIX::ContractSettlMonth ContractSettlMonth_73("MONTHYEAR_1046440438");
  msg.set(ContractSettlMonth_73);
  Instrument_73.insert(ContractSettlMonth_73.getString());
  FIX::CountryOfIssue CountryOfIssue_73("COUNTRY_1775881522");
  msg.set(CountryOfIssue_73);
  Instrument_73.insert(CountryOfIssue_73.getString());
  FIX::CouponPaymentDate CouponPaymentDate_73("LOCALMKTDATE_319632198");
  msg.set(CouponPaymentDate_73);
  Instrument_73.insert(CouponPaymentDate_73.getString());
  FIX::CouponRate CouponRate_73;
  CouponRate_73.setString("35.530000");
  msg.set(CouponRate_73);
  Instrument_73.insert(CouponRate_73.getString());
  FIX::CreditRating CreditRating_73("STRING_813150074");
  msg.set(CreditRating_73);
  Instrument_73.insert(CreditRating_73.getString());
  FIX::DatedDate DatedDate_73("LOCALMKTDATE_1208908005");
  msg.set(DatedDate_73);
  Instrument_73.insert(DatedDate_73.getString());
  FIX::DetachmentPoint DetachmentPoint_73;
  DetachmentPoint_73.setString("95.910000");
  msg.set(DetachmentPoint_73);
  Instrument_73.insert(DetachmentPoint_73.getString());
  FIX::EncodedIssuer EncodedIssuer_73("DATA_2095584739");
  msg.set(EncodedIssuer_73);
  Instrument_73.insert(EncodedIssuer_73.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_73(1082430347);
  msg.set(EncodedIssuerLen_73);
  Instrument_73.insert(EncodedIssuerLen_73.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_73("DATA_1529245239");
  msg.set(EncodedSecurityDesc_73);
  Instrument_73.insert(EncodedSecurityDesc_73.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_73(450269056);
  msg.set(EncodedSecurityDescLen_73);
  Instrument_73.insert(EncodedSecurityDescLen_73.getString());
  FIX::ExerciseStyle ExerciseStyle_73(0);
  msg.set(ExerciseStyle_73);
  Instrument_73.insert(ExerciseStyle_73.getString());
  FIX::Factor Factor_73;
  Factor_73.setString("10039925");
  msg.set(Factor_73);
  Instrument_73.insert(Factor_73.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_73(false);
  msg.set(FlexProductEligibilityIndicator_73);
  Instrument_73.insert(FlexProductEligibilityIndicator_73.getString());
  FIX::FlexibleIndicator FlexibleIndicator_73(false);
  msg.set(FlexibleIndicator_73);
  Instrument_73.insert(FlexibleIndicator_73.getString());
  FIX::FloorPrice FloorPrice_73;
  FloorPrice_73.setString("16473236");
  msg.set(FloorPrice_73);
  Instrument_73.insert(FloorPrice_73.getString());
  FIX::FlowScheduleType FlowScheduleType_73(0);
  msg.set(FlowScheduleType_73);
  Instrument_73.insert(FlowScheduleType_73.getString());
  FIX::InstrRegistry InstrRegistry_73("STRING_1539029330");
  msg.set(InstrRegistry_73);
  Instrument_73.insert(InstrRegistry_73.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_73('2');
  msg.set(InstrmtAssignmentMethod_73);
  Instrument_73.insert(InstrmtAssignmentMethod_73.getString());
  FIX::InterestAccrualDate InterestAccrualDate_73("LOCALMKTDATE_1176037430");
  msg.set(InterestAccrualDate_73);
  Instrument_73.insert(InterestAccrualDate_73.getString());
  FIX::IssueDate IssueDate_73("LOCALMKTDATE_761744775");
  msg.set(IssueDate_73);
  Instrument_73.insert(IssueDate_73.getString());
  FIX::Issuer Issuer_73("STRING_87393131");
  msg.set(Issuer_73);
  Instrument_73.insert(Issuer_73.getString());
  FIX::ListMethod ListMethod_73(1);
  msg.set(ListMethod_73);
  Instrument_73.insert(ListMethod_73.getString());
  FIX::LocaleOfIssue LocaleOfIssue_73("STRING_135010166");
  msg.set(LocaleOfIssue_73);
  Instrument_73.insert(LocaleOfIssue_73.getString());
  FIX::MaturityDate MaturityDate_73("LOCALMKTDATE_1157407522");
  msg.set(MaturityDate_73);
  Instrument_73.insert(MaturityDate_73.getString());
  FIX::MaturityMonthYear MaturityMonthYear_73("MONTHYEAR_1966790381");
  msg.set(MaturityMonthYear_73);
  Instrument_73.insert(MaturityMonthYear_73.getString());
  FIX::MaturityTime MaturityTime_73("TZTIMEONLY_599827959");
  msg.set(MaturityTime_73);
  Instrument_73.insert(MaturityTime_73.getString());
  FIX::MinPriceIncrement MinPriceIncrement_73;
  MinPriceIncrement_73.setString("12611323");
  msg.set(MinPriceIncrement_73);
  Instrument_73.insert(MinPriceIncrement_73.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_73;
  MinPriceIncrementAmount_73.setString("1732594");
  msg.set(MinPriceIncrementAmount_73);
  Instrument_73.insert(MinPriceIncrementAmount_73.getString());
  FIX::NTPositionLimit NTPositionLimit_73(1379175409);
  msg.set(NTPositionLimit_73);
  Instrument_73.insert(NTPositionLimit_73.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_73;
  NotionalPercentageOutstanding_73.setString("91.610000");
  msg.set(NotionalPercentageOutstanding_73);
  Instrument_73.insert(NotionalPercentageOutstanding_73.getString());
  FIX::OptAttribute OptAttribute_73('1');
  msg.set(OptAttribute_73);
  Instrument_73.insert(OptAttribute_73.getString());
  FIX::OptPayoutAmount OptPayoutAmount_73;
  OptPayoutAmount_73.setString("10075732");
  msg.set(OptPayoutAmount_73);
  Instrument_73.insert(OptPayoutAmount_73.getString());
  FIX::OptPayoutType OptPayoutType_73(1);
  msg.set(OptPayoutType_73);
  Instrument_73.insert(OptPayoutType_73.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_73;
  OriginalNotionalPercentageOutstanding_73.setString("98.130000");
  msg.set(OriginalNotionalPercentageOutstanding_73);
  Instrument_73.insert(OriginalNotionalPercentageOutstanding_73.getString());
  FIX::Pool Pool_73("STRING_1820723358");
  msg.set(Pool_73);
  Instrument_73.insert(Pool_73.getString());
  FIX::PositionLimit PositionLimit_73(520045717);
  msg.set(PositionLimit_73);
  Instrument_73.insert(PositionLimit_73.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_73("STRING_STD");
  msg.set(PriceQuoteMethod_73);
  Instrument_73.insert(PriceQuoteMethod_73.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_73("STRING_1768824449");
  msg.set(PriceUnitOfMeasure_73);
  Instrument_73.insert(PriceUnitOfMeasure_73.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_73;
  PriceUnitOfMeasureQty_73.setString("16024760");
  msg.set(PriceUnitOfMeasureQty_73);
  Instrument_73.insert(PriceUnitOfMeasureQty_73.getString());
  FIX::Product Product_75(9);
  msg.set(Product_75);
  Instrument_73.insert(Product_75.getString());
  FIX::ProductComplex ProductComplex_73("STRING_71609858");
  msg.set(ProductComplex_73);
  Instrument_73.insert(ProductComplex_73.getString());
  FIX::PutOrCall PutOrCall_73(0);
  msg.set(PutOrCall_73);
  Instrument_73.insert(PutOrCall_73.getString());
  FIX::RedemptionDate RedemptionDate_73("LOCALMKTDATE_680693576");
  msg.set(RedemptionDate_73);
  Instrument_73.insert(RedemptionDate_73.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_73("STRING_785809509");
  msg.set(RepoCollateralSecurityType_73);
  Instrument_73.insert(RepoCollateralSecurityType_73.getString());
  FIX::RepurchaseRate RepurchaseRate_73;
  RepurchaseRate_73.setString("66.290000");
  msg.set(RepurchaseRate_73);
  Instrument_73.insert(RepurchaseRate_73.getString());
  FIX::RepurchaseTerm RepurchaseTerm_73(180533605);
  msg.set(RepurchaseTerm_73);
  Instrument_73.insert(RepurchaseTerm_73.getString());
  FIX::RestructuringType RestructuringType_73("STRING_MM");
  msg.set(RestructuringType_73);
  Instrument_73.insert(RestructuringType_73.getString());
  FIX::SecurityDesc SecurityDesc_73("STRING_410372311");
  msg.set(SecurityDesc_73);
  Instrument_73.insert(SecurityDesc_73.getString());
  FIX::SecurityExchange SecurityExchange_73("EXCHANGE_411287394");
  msg.set(SecurityExchange_73);
  Instrument_73.insert(SecurityExchange_73.getString());
  FIX::SecurityGroup SecurityGroup_73("STRING_1560845536");
  msg.set(SecurityGroup_73);
  Instrument_73.insert(SecurityGroup_73.getString());
  FIX::SecurityID SecurityID_73("STRING_1172117086");
  msg.set(SecurityID_73);
  Instrument_73.insert(SecurityID_73.getString());
  FIX::SecurityIDSource SecurityIDSource_73("STRING_E");
  msg.set(SecurityIDSource_73);
  Instrument_73.insert(SecurityIDSource_73.getString());
  FIX::SecurityStatus SecurityStatus_73("STRING_2");
  msg.set(SecurityStatus_73);
  Instrument_73.insert(SecurityStatus_73.getString());
  FIX::SecuritySubType SecuritySubType_74("STRING_1307127253");
  msg.set(SecuritySubType_74);
  Instrument_73.insert(SecuritySubType_74.getString());
  FIX::SecurityType SecurityType_75("STRING_AMENDED");
  msg.set(SecurityType_75);
  Instrument_73.insert(SecurityType_75.getString());
  FIX::Seniority Seniority_73("STRING_SR");
  msg.set(Seniority_73);
  Instrument_73.insert(Seniority_73.getString());
  FIX::SettlMethod SettlMethod_73('C');
  msg.set(SettlMethod_73);
  Instrument_73.insert(SettlMethod_73.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_73("STRING_769736790");
  msg.set(SettleOnOpenFlag_73);
  Instrument_73.insert(SettleOnOpenFlag_73.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_73("STRING_288754711");
  msg.set(StateOrProvinceOfIssue_73);
  Instrument_73.insert(StateOrProvinceOfIssue_73.getString());
  FIX::StrikeCurrency StrikeCurrency_73("USD");
  msg.set(StrikeCurrency_73);
  Instrument_73.insert(StrikeCurrency_73.getString());
  FIX::StrikeMultiplier StrikeMultiplier_73;
  StrikeMultiplier_73.setString("15084546");
  msg.set(StrikeMultiplier_73);
  Instrument_73.insert(StrikeMultiplier_73.getString());
  FIX::StrikePrice StrikePrice_73;
  StrikePrice_73.setString("21462202");
  msg.set(StrikePrice_73);
  Instrument_73.insert(StrikePrice_73.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_73(5);
  msg.set(StrikePriceBoundaryMethod_73);
  Instrument_73.insert(StrikePriceBoundaryMethod_73.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_73;
  StrikePriceBoundaryPrecision_73.setString("44.330000");
  msg.set(StrikePriceBoundaryPrecision_73);
  Instrument_73.insert(StrikePriceBoundaryPrecision_73.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_73(4);
  msg.set(StrikePriceDeterminationMethod_73);
  Instrument_73.insert(StrikePriceDeterminationMethod_73.getString());
  FIX::StrikeValue StrikeValue_73;
  StrikeValue_73.setString("17399093");
  msg.set(StrikeValue_73);
  Instrument_73.insert(StrikeValue_73.getString());
  FIX::Symbol Symbol_73("STRING_1950143837");
  msg.set(Symbol_73);
  Instrument_73.insert(Symbol_73.getString());
  FIX::SymbolSfx SymbolSfx_73("STRING_WI");
  msg.set(SymbolSfx_73);
  Instrument_73.insert(SymbolSfx_73.getString());
  FIX::TimeUnit TimeUnit_73("STRING_Mo");
  msg.set(TimeUnit_73);
  Instrument_73.insert(TimeUnit_73.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_73(2);
  msg.set(UnderlyingPriceDeterminationMethod_73);
  Instrument_73.insert(UnderlyingPriceDeterminationMethod_73.getString());
  FIX::UnitOfMeasure UnitOfMeasure_73("STRING_Bcf");
  msg.set(UnitOfMeasure_73);
  Instrument_73.insert(UnitOfMeasure_73.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_73;
  UnitOfMeasureQty_73.setString("1076856");
  msg.set(UnitOfMeasureQty_73);
  Instrument_73.insert(UnitOfMeasureQty_73.getString());
  FIX::ValuationMethod ValuationMethod_73("STRING_FUT");
  msg.set(ValuationMethod_73);
  Instrument_73.insert(ValuationMethod_73.getString());
  all_values.push_back(Instrument_73);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_137;
    FIX::ComplexEventCondition ComplexEventCondition_137(2);
    noComplexEvents_0_0.set(ComplexEventCondition_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventCondition_137.getString());
    FIX::ComplexEventPrice ComplexEventPrice_137;
    ComplexEventPrice_137.setString("3405883");
    noComplexEvents_0_0.set(ComplexEventPrice_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventPrice_137.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_137(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventPriceBoundaryMethod_137.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_137;
    ComplexEventPriceBoundaryPrecision_137.setString("45.800000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventPriceBoundaryPrecision_137.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_137(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventPriceTimeType_137.getString());
    FIX::ComplexEventType ComplexEventType_137(8);
    noComplexEvents_0_0.set(ComplexEventType_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventType_137.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_137;
    ComplexOptPayoutAmount_137.setString("5615180");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexOptPayoutAmount_137.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_137);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_285;
      FIX::ComplexEventEndDate ComplexEventEndDate_285(FIX::UTCTIMESTAMP(16, 6, 11, 24, 22000));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_285);
      ComplexEventDates_NoComplexEventDates_285.insert(ComplexEventEndDate_285.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_285(FIX::UTCTIMESTAMP(5, 53, 32, 17, 32005));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_285);
      ComplexEventDates_NoComplexEventDates_285.insert(ComplexEventStartDate_285.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_285);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_567;
        FIX::ComplexEventEndTime ComplexEventEndTime_567(FIX::UTCTIMEONLY(20, 7, 1));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_567);
        ComplexEventTimes_NoComplexEventTimes_567.insert(ComplexEventEndTime_567.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_567(FIX::UTCTIMEONLY(23, 22, 47));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_567);
        ComplexEventTimes_NoComplexEventTimes_567.insert(ComplexEventStartTime_567.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_567);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_286;
      FIX::ComplexEventEndDate ComplexEventEndDate_286(FIX::UTCTIMESTAMP(9, 2, 8, 18, 22009));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_286);
      ComplexEventDates_NoComplexEventDates_286.insert(ComplexEventEndDate_286.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_286(FIX::UTCTIMESTAMP(19, 31, 35, 22, 12016));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_286);
      ComplexEventDates_NoComplexEventDates_286.insert(ComplexEventStartDate_286.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_286);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_568;
        FIX::ComplexEventEndTime ComplexEventEndTime_568(FIX::UTCTIMEONLY(1, 34, 26));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_568);
        ComplexEventTimes_NoComplexEventTimes_568.insert(ComplexEventEndTime_568.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_568(FIX::UTCTIMEONLY(4, 38, 24));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_568);
        ComplexEventTimes_NoComplexEventTimes_568.insert(ComplexEventStartTime_568.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_568);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_569;
        FIX::ComplexEventEndTime ComplexEventEndTime_569(FIX::UTCTIMEONLY(14, 31, 21));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_569);
        ComplexEventTimes_NoComplexEventTimes_569.insert(ComplexEventEndTime_569.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_569(FIX::UTCTIMEONLY(22, 44, 29));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_569);
        ComplexEventTimes_NoComplexEventTimes_569.insert(ComplexEventStartTime_569.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_569);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_141;
    FIX::EventDate EventDate_141("LOCALMKTDATE_1043343825");
    noEvents_0_0.set(EventDate_141);
    EvntGrp_NoEvents_141.insert(EventDate_141.getString());
    FIX::EventPx EventPx_141;
    EventPx_141.setString("3290883");
    noEvents_0_0.set(EventPx_141);
    EvntGrp_NoEvents_141.insert(EventPx_141.getString());
    FIX::EventText EventText_141("STRING_1026249979");
    noEvents_0_0.set(EventText_141);
    EvntGrp_NoEvents_141.insert(EventText_141.getString());
    FIX::EventTime EventTime_141(FIX::UTCTIMESTAMP(12, 58, 47, 4, 112014));
    noEvents_0_0.set(EventTime_141);
    EvntGrp_NoEvents_141.insert(EventTime_141.getString());
    FIX::EventType EventType_141(15);
    noEvents_0_0.set(EventType_141);
    EvntGrp_NoEvents_141.insert(EventType_141.getString());
    all_values.push_back(EvntGrp_NoEvents_141);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_139;
    FIX::InstrumentPartyID InstrumentPartyID_139("STRING_1610088438");
    noInstrumentParties_0_0.set(InstrumentPartyID_139);
    InstrumentParties_NoInstrumentParties_139.insert(InstrumentPartyID_139.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_139('7');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_139);
    InstrumentParties_NoInstrumentParties_139.insert(InstrumentPartyIDSource_139.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_139(520203548);
    noInstrumentParties_0_0.set(InstrumentPartyRole_139);
    InstrumentParties_NoInstrumentParties_139.insert(InstrumentPartyRole_139.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_139);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278;
      FIX::InstrumentPartySubID InstrumentPartySubID_278("STRING_1617368621");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_278);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278.insert(InstrumentPartySubID_278.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_278(1146775835);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_278);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278.insert(InstrumentPartySubIDType_278.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279;
      FIX::InstrumentPartySubID InstrumentPartySubID_279("STRING_997852381");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_279);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279.insert(InstrumentPartySubID_279.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_279(1984176153);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_279);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279.insert(InstrumentPartySubIDType_279.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280;
      FIX::InstrumentPartySubID InstrumentPartySubID_280("STRING_2063341213");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_280);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280.insert(InstrumentPartySubID_280.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_280(1901681605);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_280);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280.insert(InstrumentPartySubIDType_280.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_140;
    FIX::InstrumentPartyID InstrumentPartyID_140("STRING_1671680574");
    noInstrumentParties_0_1.set(InstrumentPartyID_140);
    InstrumentParties_NoInstrumentParties_140.insert(InstrumentPartyID_140.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_140('4');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_140);
    InstrumentParties_NoInstrumentParties_140.insert(InstrumentPartyIDSource_140.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_140(1807874509);
    noInstrumentParties_0_1.set(InstrumentPartyRole_140);
    InstrumentParties_NoInstrumentParties_140.insert(InstrumentPartyRole_140.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_140);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281;
      FIX::InstrumentPartySubID InstrumentPartySubID_281("STRING_2011329585");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_281);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281.insert(InstrumentPartySubID_281.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_281(824116731);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_281);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281.insert(InstrumentPartySubIDType_281.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282;
      FIX::InstrumentPartySubID InstrumentPartySubID_282("STRING_1901885691");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_282);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282.insert(InstrumentPartySubID_282.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_282(558416047);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_282);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282.insert(InstrumentPartySubIDType_282.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_141;
    FIX::InstrumentPartyID InstrumentPartyID_141("STRING_76920542");
    noInstrumentParties_0_2.set(InstrumentPartyID_141);
    InstrumentParties_NoInstrumentParties_141.insert(InstrumentPartyID_141.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_141('7');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_141);
    InstrumentParties_NoInstrumentParties_141.insert(InstrumentPartyIDSource_141.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_141(887504430);
    noInstrumentParties_0_2.set(InstrumentPartyRole_141);
    InstrumentParties_NoInstrumentParties_141.insert(InstrumentPartyRole_141.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_141);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283;
      FIX::InstrumentPartySubID InstrumentPartySubID_283("STRING_1893666655");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_283);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283.insert(InstrumentPartySubID_283.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_283(800017571);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_283);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283.insert(InstrumentPartySubIDType_283.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_153;
    FIX::SecurityAltID SecurityAltID_153("STRING_2145237043");
    noSecurityAltID_0_0.set(SecurityAltID_153);
    SecAltIDGrp_NoSecurityAltID_153.insert(SecurityAltID_153.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_153("STRING_541050459");
    noSecurityAltID_0_0.set(SecurityAltIDSource_153);
    SecAltIDGrp_NoSecurityAltID_153.insert(SecurityAltIDSource_153.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_153);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_154;
    FIX::SecurityAltID SecurityAltID_154("STRING_1291790073");
    noSecurityAltID_0_1.set(SecurityAltID_154);
    SecAltIDGrp_NoSecurityAltID_154.insert(SecurityAltID_154.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_154("STRING_164134069");
    noSecurityAltID_0_1.set(SecurityAltIDSource_154);
    SecAltIDGrp_NoSecurityAltID_154.insert(SecurityAltIDSource_154.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_154);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_155;
    FIX::SecurityAltID SecurityAltID_155("STRING_471193325");
    noSecurityAltID_0_2.set(SecurityAltID_155);
    SecAltIDGrp_NoSecurityAltID_155.insert(SecurityAltID_155.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_155("STRING_1803438107");
    noSecurityAltID_0_2.set(SecurityAltIDSource_155);
    SecAltIDGrp_NoSecurityAltID_155.insert(SecurityAltIDSource_155.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_155);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_146;
  FIX::SecurityXML SecurityXML_147("XMLDATA_1774222508");
  msg.set(SecurityXML_147);
  FIX::SecurityXMLLen SecurityXMLLen_73(1239791112);
  msg.set(SecurityXMLLen_73);
  FIX::SecurityXMLSchema SecurityXMLSchema_73("STRING_176158008");
  msg.set(SecurityXMLSchema_73);
  SecurityXML_146.insert(SecurityXMLSchema_73.getString());
  all_values.push_back(SecurityXML_146);

  // InstrumentExtension
  multiset<string> InstrumentExtension_10;
  FIX::DeliveryForm DeliveryForm_10(2);
  msg.set(DeliveryForm_10);
  InstrumentExtension_10.insert(DeliveryForm_10.getString());
  FIX::PctAtRisk PctAtRisk_10;
  PctAtRisk_10.setString("60.850000");
  msg.set(PctAtRisk_10);
  InstrumentExtension_10.insert(PctAtRisk_10.getString());
  all_values.push_back(InstrumentExtension_10);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_20;
    FIX::InstrAttribType InstrAttribType_20(20);
    noInstrAttrib_0_0.set(InstrAttribType_20);
    AttrbGrp_NoInstrAttrib_20.insert(InstrAttribType_20.getString());
    FIX::InstrAttribValue InstrAttribValue_20("STRING_546368591");
    noInstrAttrib_0_0.set(InstrAttribValue_20);
    AttrbGrp_NoInstrAttrib_20.insert(InstrAttribValue_20.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_20);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_21;
    FIX::InstrAttribType InstrAttribType_21(29);
    noInstrAttrib_0_1.set(InstrAttribType_21);
    AttrbGrp_NoInstrAttrib_21.insert(InstrAttribType_21.getString());
    FIX::InstrAttribValue InstrAttribValue_21("STRING_427757886");
    noInstrAttrib_0_1.set(InstrAttribValue_21);
    AttrbGrp_NoInstrAttrib_21.insert(InstrAttribValue_21.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_21);

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_22;
    FIX::InstrAttribType InstrAttribType_22(28);
    noInstrAttrib_0_2.set(InstrAttribType_22);
    AttrbGrp_NoInstrAttrib_22.insert(InstrAttribType_22.getString());
    FIX::InstrAttribValue InstrAttribValue_22("STRING_1654524563");
    noInstrAttrib_0_2.set(InstrAttribValue_22);
    AttrbGrp_NoInstrAttrib_22.insert(InstrAttribValue_22.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_22);

    msg.addGroup(noInstrAttrib_0_2);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_8;
    FIX::MarketID MarketID_18("EXCHANGE_229808584");
    noMarketSegments_0_0.set(MarketID_18);
    MarketSegmentGrp_NoMarketSegments_8.insert(MarketID_18.getString());
    FIX::MarketSegmentID MarketSegmentID_18("STRING_1518370501");
    noMarketSegments_0_0.set(MarketSegmentID_18);
    MarketSegmentGrp_NoMarketSegments_8.insert(MarketSegmentID_18.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_8);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_10;
    FIX::ExpirationCycle ExpirationCycle_11(0);
    noMarketSegments_0_0.set(ExpirationCycle_11);
    BaseTradingRules_10.insert(ExpirationCycle_11.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_10(0);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_10);
    BaseTradingRules_10.insert(ImpliedMarketIndicator_10.getString());
    FIX::MaxPriceVariation MaxPriceVariation_10;
    MaxPriceVariation_10.setString("20767865");
    noMarketSegments_0_0.set(MaxPriceVariation_10);
    BaseTradingRules_10.insert(MaxPriceVariation_10.getString());
    FIX::MaxTradeVol MaxTradeVol_10;
    MaxTradeVol_10.setString("9891860");
    noMarketSegments_0_0.set(MaxTradeVol_10);
    BaseTradingRules_10.insert(MaxTradeVol_10.getString());
    FIX::MinTradeVol MinTradeVol_10;
    MinTradeVol_10.setString("7819564");
    noMarketSegments_0_0.set(MinTradeVol_10);
    BaseTradingRules_10.insert(MinTradeVol_10.getString());
    FIX::MultilegModel MultilegModel_12(0);
    noMarketSegments_0_0.set(MultilegModel_12);
    BaseTradingRules_10.insert(MultilegModel_12.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_12(2);
    noMarketSegments_0_0.set(MultilegPriceMethod_12);
    BaseTradingRules_10.insert(MultilegPriceMethod_12.getString());
    FIX::PriceType PriceType_43(11);
    noMarketSegments_0_0.set(PriceType_43);
    BaseTradingRules_10.insert(PriceType_43.getString());
    FIX::RoundLot RoundLot_10;
    RoundLot_10.setString("16168249");
    noMarketSegments_0_0.set(RoundLot_10);
    BaseTradingRules_10.insert(RoundLot_10.getString());
    FIX::TradingCurrency TradingCurrency_10("CHF");
    noMarketSegments_0_0.set(TradingCurrency_10);
    BaseTradingRules_10.insert(TradingCurrency_10.getString());
    all_values.push_back(BaseTradingRules_10);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_23;
      FIX::LotType LotType_27('4');
      noLotTypeRules_0_1_0.set(LotType_27);
      LotTypeRules_NoLotTypeRules_23.insert(LotType_27.getString());
      FIX::MinLotSize MinLotSize_23;
      MinLotSize_23.setString("6900269");
      noLotTypeRules_0_1_0.set(MinLotSize_23);
      LotTypeRules_NoLotTypeRules_23.insert(MinLotSize_23.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_23);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_10;
    FIX::HighLimitPrice HighLimitPrice_10;
    HighLimitPrice_10.setString("4815850");
    noMarketSegments_0_0.set(HighLimitPrice_10);
    PriceLimits_10.insert(HighLimitPrice_10.getString());
    FIX::LowLimitPrice LowLimitPrice_10;
    LowLimitPrice_10.setString("10620348");
    noMarketSegments_0_0.set(LowLimitPrice_10);
    PriceLimits_10.insert(LowLimitPrice_10.getString());
    FIX::PriceLimitType PriceLimitType_10(1);
    noMarketSegments_0_0.set(PriceLimitType_10);
    PriceLimits_10.insert(PriceLimitType_10.getString());
    FIX::TradingReferencePrice TradingReferencePrice_10;
    TradingReferencePrice_10.setString("17213761");
    noMarketSegments_0_0.set(TradingReferencePrice_10);
    PriceLimits_10.insert(TradingReferencePrice_10.getString());
    all_values.push_back(PriceLimits_10);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_17;
      FIX::EndTickPriceRange EndTickPriceRange_17;
      EndTickPriceRange_17.setString("21399570");
      noTickRules_0_1_0.set(EndTickPriceRange_17);
      TickRules_NoTickRules_17.insert(EndTickPriceRange_17.getString());
      FIX::StartTickPriceRange StartTickPriceRange_17;
      StartTickPriceRange_17.setString("2835685");
      noTickRules_0_1_0.set(StartTickPriceRange_17);
      TickRules_NoTickRules_17.insert(StartTickPriceRange_17.getString());
      FIX::TickIncrement TickIncrement_17;
      TickIncrement_17.setString("4136430");
      noTickRules_0_1_0.set(TickIncrement_17);
      TickRules_NoTickRules_17.insert(TickIncrement_17.getString());
      FIX::TickRuleType TickRuleType_17(0);
      noTickRules_0_1_0.set(TickRuleType_17);
      TickRules_NoTickRules_17.insert(TickRuleType_17.getString());
      all_values.push_back(TickRules_NoTickRules_17);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_20;
      FIX::NestedInstrAttribType NestedInstrAttribType_20(1652434429);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_20);
      NestedInstrumentAttribute_NoNestedInstrAttrib_20.insert(NestedInstrAttribType_20.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_20("STRING_1093791191");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_20);
      NestedInstrumentAttribute_NoNestedInstrAttrib_20.insert(NestedInstrAttribValue_20.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_20);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_21;
      FIX::NestedInstrAttribType NestedInstrAttribType_21(900502696);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_21);
      NestedInstrumentAttribute_NoNestedInstrAttrib_21.insert(NestedInstrAttribType_21.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_21("STRING_1159475345");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_21);
      NestedInstrumentAttribute_NoNestedInstrAttrib_21.insert(NestedInstrAttribValue_21.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_21);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_15;
      FIX::TradingSessionID TradingSessionID_78("STRING_3");
      noTradingSessionRules_0_1_0.set(TradingSessionID_78);
      TradingSessionRulesGrp_NoTradingSessionRules_15.insert(TradingSessionID_78.getString());
      FIX::TradingSessionSubID TradingSessionSubID_78("STRING_3");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_78);
      TradingSessionRulesGrp_NoTradingSessionRules_15.insert(TradingSessionSubID_78.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_15);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_36;
        FIX::ExecInstValue ExecInstValue_36('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_36);
        ExecInstRules_NoExecInstRules_36.insert(ExecInstValue_36.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_36);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_37;
        FIX::ExecInstValue ExecInstValue_37('4');
        noExecInstRules_0_0_2_1.set(ExecInstValue_37);
        ExecInstRules_NoExecInstRules_37.insert(ExecInstValue_37.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_37);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_38;
        FIX::ExecInstValue ExecInstValue_38('9');
        noExecInstRules_0_0_2_2.set(ExecInstValue_38);
        ExecInstRules_NoExecInstRules_38.insert(ExecInstValue_38.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_38);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_30;
        FIX::MDBookType MDBookType_32(2);
        noMDFeedTypes_0_0_2_0.set(MDBookType_32);
        MarketDataFeedTypes_NoMDFeedTypes_30.insert(MDBookType_32.getString());
        FIX::MDFeedType MDFeedType_32("STRING_880780685");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_32);
        MarketDataFeedTypes_NoMDFeedTypes_30.insert(MDFeedType_32.getString());
        FIX::MarketDepth MarketDepth_33(277134261);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_33);
        MarketDataFeedTypes_NoMDFeedTypes_30.insert(MarketDepth_33.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_30);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_31;
        FIX::MDBookType MDBookType_33(3);
        noMDFeedTypes_0_0_2_1.set(MDBookType_33);
        MarketDataFeedTypes_NoMDFeedTypes_31.insert(MDBookType_33.getString());
        FIX::MDFeedType MDFeedType_33("STRING_995070970");
        noMDFeedTypes_0_0_2_1.set(MDFeedType_33);
        MarketDataFeedTypes_NoMDFeedTypes_31.insert(MDFeedType_33.getString());
        FIX::MarketDepth MarketDepth_34(803027160);
        noMDFeedTypes_0_0_2_1.set(MarketDepth_34);
        MarketDataFeedTypes_NoMDFeedTypes_31.insert(MarketDepth_34.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_31);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_33;
        FIX::MatchAlgorithm MatchAlgorithm_33("STRING_253667681");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_33);
        MatchRules_NoMatchRules_33.insert(MatchAlgorithm_33.getString());
        FIX::MatchType MatchType_38("STRING_S3");
        noMatchRules_0_0_2_0.set(MatchType_38);
        MatchRules_NoMatchRules_33.insert(MatchType_38.getString());
        all_values.push_back(MatchRules_NoMatchRules_33);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_34;
        FIX::MatchAlgorithm MatchAlgorithm_34("STRING_1237790432");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_34);
        MatchRules_NoMatchRules_34.insert(MatchAlgorithm_34.getString());
        FIX::MatchType MatchType_39("STRING_M3");
        noMatchRules_0_0_2_1.set(MatchType_39);
        MatchRules_NoMatchRules_34.insert(MatchType_39.getString());
        all_values.push_back(MatchRules_NoMatchRules_34);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_35;
        FIX::MatchAlgorithm MatchAlgorithm_35("STRING_1809819957");
        noMatchRules_0_0_2_2.set(MatchAlgorithm_35);
        MatchRules_NoMatchRules_35.insert(MatchAlgorithm_35.getString());
        FIX::MatchType MatchType_40("STRING_M6");
        noMatchRules_0_0_2_2.set(MatchType_40);
        MatchRules_NoMatchRules_35.insert(MatchType_40.getString());
        all_values.push_back(MatchRules_NoMatchRules_35);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_38;
        FIX::OrdType OrdType_61('E');
        noOrdTypeRules_0_0_2_0.set(OrdType_61);
        OrdTypeRules_NoOrdTypeRules_38.insert(OrdType_61.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_38);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_39;
        FIX::OrdType OrdType_62('4');
        noOrdTypeRules_0_0_2_1.set(OrdType_62);
        OrdTypeRules_NoOrdTypeRules_39.insert(OrdType_62.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_39);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_38;
        FIX::TimeInForce TimeInForce_51('0');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_51);
        TimeInForceRules_NoTimeInForceRules_38.insert(TimeInForce_51.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_38);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_39;
        FIX::TimeInForce TimeInForce_52('2');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_52);
        TimeInForceRules_NoTimeInForceRules_39.insert(TimeInForce_52.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_39);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_40;
        FIX::TimeInForce TimeInForce_53('1');
        noTimeInForceRules_0_0_2_2.set(TimeInForce_53);
        TimeInForceRules_NoTimeInForceRules_40.insert(TimeInForce_53.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_40);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_16;
      FIX::TradingSessionID TradingSessionID_79("STRING_4");
      noTradingSessionRules_0_1_1.set(TradingSessionID_79);
      TradingSessionRulesGrp_NoTradingSessionRules_16.insert(TradingSessionID_79.getString());
      FIX::TradingSessionSubID TradingSessionSubID_79("STRING_4");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_79);
      TradingSessionRulesGrp_NoTradingSessionRules_16.insert(TradingSessionSubID_79.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_16);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_39;
        FIX::ExecInstValue ExecInstValue_39('4');
        noExecInstRules_0_1_2_0.set(ExecInstValue_39);
        ExecInstRules_NoExecInstRules_39.insert(ExecInstValue_39.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_39);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_32;
        FIX::MDBookType MDBookType_34(2);
        noMDFeedTypes_0_1_2_0.set(MDBookType_34);
        MarketDataFeedTypes_NoMDFeedTypes_32.insert(MDBookType_34.getString());
        FIX::MDFeedType MDFeedType_34("STRING_395812242");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_34);
        MarketDataFeedTypes_NoMDFeedTypes_32.insert(MDFeedType_34.getString());
        FIX::MarketDepth MarketDepth_35(775557291);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_35);
        MarketDataFeedTypes_NoMDFeedTypes_32.insert(MarketDepth_35.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_32);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_33;
        FIX::MDBookType MDBookType_35(1);
        noMDFeedTypes_0_1_2_1.set(MDBookType_35);
        MarketDataFeedTypes_NoMDFeedTypes_33.insert(MDBookType_35.getString());
        FIX::MDFeedType MDFeedType_35("STRING_1331720033");
        noMDFeedTypes_0_1_2_1.set(MDFeedType_35);
        MarketDataFeedTypes_NoMDFeedTypes_33.insert(MDFeedType_35.getString());
        FIX::MarketDepth MarketDepth_36(524552048);
        noMDFeedTypes_0_1_2_1.set(MarketDepth_36);
        MarketDataFeedTypes_NoMDFeedTypes_33.insert(MarketDepth_36.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_33);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_34;
        FIX::MDBookType MDBookType_36(3);
        noMDFeedTypes_0_1_2_2.set(MDBookType_36);
        MarketDataFeedTypes_NoMDFeedTypes_34.insert(MDBookType_36.getString());
        FIX::MDFeedType MDFeedType_36("STRING_65017070");
        noMDFeedTypes_0_1_2_2.set(MDFeedType_36);
        MarketDataFeedTypes_NoMDFeedTypes_34.insert(MDFeedType_36.getString());
        FIX::MarketDepth MarketDepth_37(801686309);
        noMDFeedTypes_0_1_2_2.set(MarketDepth_37);
        MarketDataFeedTypes_NoMDFeedTypes_34.insert(MarketDepth_37.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_34);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_36;
        FIX::MatchAlgorithm MatchAlgorithm_36("STRING_1060088041");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_36);
        MatchRules_NoMatchRules_36.insert(MatchAlgorithm_36.getString());
        FIX::MatchType MatchType_41("STRING_S4");
        noMatchRules_0_1_2_0.set(MatchType_41);
        MatchRules_NoMatchRules_36.insert(MatchType_41.getString());
        all_values.push_back(MatchRules_NoMatchRules_36);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_37;
        FIX::MatchAlgorithm MatchAlgorithm_37("STRING_958032331");
        noMatchRules_0_1_2_1.set(MatchAlgorithm_37);
        MatchRules_NoMatchRules_37.insert(MatchAlgorithm_37.getString());
        FIX::MatchType MatchType_42("STRING_7");
        noMatchRules_0_1_2_1.set(MatchType_42);
        MatchRules_NoMatchRules_37.insert(MatchType_42.getString());
        all_values.push_back(MatchRules_NoMatchRules_37);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_38;
        FIX::MatchAlgorithm MatchAlgorithm_38("STRING_950283949");
        noMatchRules_0_1_2_2.set(MatchAlgorithm_38);
        MatchRules_NoMatchRules_38.insert(MatchAlgorithm_38.getString());
        FIX::MatchType MatchType_43("STRING_S3");
        noMatchRules_0_1_2_2.set(MatchType_43);
        MatchRules_NoMatchRules_38.insert(MatchType_43.getString());
        all_values.push_back(MatchRules_NoMatchRules_38);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_40;
        FIX::OrdType OrdType_63('3');
        noOrdTypeRules_0_1_2_0.set(OrdType_63);
        OrdTypeRules_NoOrdTypeRules_40.insert(OrdType_63.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_40);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_41;
        FIX::OrdType OrdType_64('4');
        noOrdTypeRules_0_1_2_1.set(OrdType_64);
        OrdTypeRules_NoOrdTypeRules_41.insert(OrdType_64.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_41);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_41;
        FIX::TimeInForce TimeInForce_54('3');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_54);
        TimeInForceRules_NoTimeInForceRules_41.insert(TimeInForce_54.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_41);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_17;
      FIX::TradingSessionID TradingSessionID_80("STRING_1");
      noTradingSessionRules_0_1_2.set(TradingSessionID_80);
      TradingSessionRulesGrp_NoTradingSessionRules_17.insert(TradingSessionID_80.getString());
      FIX::TradingSessionSubID TradingSessionSubID_80("STRING_3");
      noTradingSessionRules_0_1_2.set(TradingSessionSubID_80);
      TradingSessionRulesGrp_NoTradingSessionRules_17.insert(TradingSessionSubID_80.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_17);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_40;
        FIX::ExecInstValue ExecInstValue_40('1');
        noExecInstRules_0_2_2_0.set(ExecInstValue_40);
        ExecInstRules_NoExecInstRules_40.insert(ExecInstValue_40.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_40);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_41;
        FIX::ExecInstValue ExecInstValue_41('2');
        noExecInstRules_0_2_2_1.set(ExecInstValue_41);
        ExecInstRules_NoExecInstRules_41.insert(ExecInstValue_41.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_41);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_42;
        FIX::ExecInstValue ExecInstValue_42('2');
        noExecInstRules_0_2_2_2.set(ExecInstValue_42);
        ExecInstRules_NoExecInstRules_42.insert(ExecInstValue_42.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_42);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_35;
        FIX::MDBookType MDBookType_37(3);
        noMDFeedTypes_0_2_2_0.set(MDBookType_37);
        MarketDataFeedTypes_NoMDFeedTypes_35.insert(MDBookType_37.getString());
        FIX::MDFeedType MDFeedType_37("STRING_304513939");
        noMDFeedTypes_0_2_2_0.set(MDFeedType_37);
        MarketDataFeedTypes_NoMDFeedTypes_35.insert(MDFeedType_37.getString());
        FIX::MarketDepth MarketDepth_38(2072221760);
        noMDFeedTypes_0_2_2_0.set(MarketDepth_38);
        MarketDataFeedTypes_NoMDFeedTypes_35.insert(MarketDepth_38.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_35);

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_39;
        FIX::MatchAlgorithm MatchAlgorithm_39("STRING_700326182");
        noMatchRules_0_2_2_0.set(MatchAlgorithm_39);
        MatchRules_NoMatchRules_39.insert(MatchAlgorithm_39.getString());
        FIX::MatchType MatchType_44("STRING_A4");
        noMatchRules_0_2_2_0.set(MatchType_44);
        MatchRules_NoMatchRules_39.insert(MatchType_44.getString());
        all_values.push_back(MatchRules_NoMatchRules_39);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_40;
        FIX::MatchAlgorithm MatchAlgorithm_40("STRING_1564827464");
        noMatchRules_0_2_2_1.set(MatchAlgorithm_40);
        MatchRules_NoMatchRules_40.insert(MatchAlgorithm_40.getString());
        FIX::MatchType MatchType_45("STRING_AQ");
        noMatchRules_0_2_2_1.set(MatchType_45);
        MatchRules_NoMatchRules_40.insert(MatchType_45.getString());
        all_values.push_back(MatchRules_NoMatchRules_40);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_42;
        FIX::OrdType OrdType_65('Q');
        noOrdTypeRules_0_2_2_0.set(OrdType_65);
        OrdTypeRules_NoOrdTypeRules_42.insert(OrdType_65.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_42);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_43;
        FIX::OrdType OrdType_66('P');
        noOrdTypeRules_0_2_2_1.set(OrdType_66);
        OrdTypeRules_NoOrdTypeRules_43.insert(OrdType_66.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_43);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_44;
        FIX::OrdType OrdType_67('H');
        noOrdTypeRules_0_2_2_2.set(OrdType_67);
        OrdTypeRules_NoOrdTypeRules_44.insert(OrdType_67.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_44);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_42;
        FIX::TimeInForce TimeInForce_55('9');
        noTimeInForceRules_0_2_2_0.set(TimeInForce_55);
        TimeInForceRules_NoTimeInForceRules_42.insert(TimeInForce_55.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_42);

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_43;
        FIX::TimeInForce TimeInForce_56('1');
        noTimeInForceRules_0_2_2_1.set(TimeInForce_56);
        TimeInForceRules_NoTimeInForceRules_43.insert(TimeInForce_56.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_43);

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_1);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_13;
      FIX::EndStrikePxRange EndStrikePxRange_13;
      EndStrikePxRange_13.setString("1759397");
      noStrikeRules_0_1_0.set(EndStrikePxRange_13);
      StrikeRules_NoStrikeRules_13.insert(EndStrikePxRange_13.getString());
      FIX::StartStrikePxRange StartStrikePxRange_13;
      StartStrikePxRange_13.setString("2865638");
      noStrikeRules_0_1_0.set(StartStrikePxRange_13);
      StrikeRules_NoStrikeRules_13.insert(StartStrikePxRange_13.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_13(81555455);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_13);
      StrikeRules_NoStrikeRules_13.insert(StrikeExerciseStyle_13.getString());
      FIX::StrikeIncrement StrikeIncrement_13;
      StrikeIncrement_13.setString("6579143");
      noStrikeRules_0_1_0.set(StrikeIncrement_13);
      StrikeRules_NoStrikeRules_13.insert(StrikeIncrement_13.getString());
      FIX::StrikeRuleID StrikeRuleID_13("STRING_899184141");
      noStrikeRules_0_1_0.set(StrikeRuleID_13);
      StrikeRules_NoStrikeRules_13.insert(StrikeRuleID_13.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_13);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_29;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_29("MONTHYEAR_1546300581");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_29);
        MaturityRules_NoMaturityRules_29.insert(EndMaturityMonthYear_29.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_29(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityMonthYearFormat_29.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_29(749367432);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityMonthYearIncrement_29.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_29(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityMonthYearIncrementUnits_29.getString());
        FIX::MaturityRuleID MaturityRuleID_29("STRING_1754887018");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityRuleID_29.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_29("MONTHYEAR_334862412");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_29);
        MaturityRules_NoMaturityRules_29.insert(StartMaturityMonthYear_29.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_29);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_30;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_30("MONTHYEAR_993220672");
        noMaturityRules_0_0_2_1.set(EndMaturityMonthYear_30);
        MaturityRules_NoMaturityRules_30.insert(EndMaturityMonthYear_30.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_30(2);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearFormat_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityMonthYearFormat_30.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_30(598565142);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrement_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityMonthYearIncrement_30.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_30(1);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrementUnits_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityMonthYearIncrementUnits_30.getString());
        FIX::MaturityRuleID MaturityRuleID_30("STRING_1914824425");
        noMaturityRules_0_0_2_1.set(MaturityRuleID_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityRuleID_30.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_30("MONTHYEAR_523303255");
        noMaturityRules_0_0_2_1.set(StartMaturityMonthYear_30);
        MaturityRules_NoMaturityRules_30.insert(StartMaturityMonthYear_30.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_30);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_31;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_31("MONTHYEAR_1453983627");
        noMaturityRules_0_0_2_2.set(EndMaturityMonthYear_31);
        MaturityRules_NoMaturityRules_31.insert(EndMaturityMonthYear_31.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_31(1);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearFormat_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityMonthYearFormat_31.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_31(1223598658);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrement_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityMonthYearIncrement_31.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_31(3);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrementUnits_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityMonthYearIncrementUnits_31.getString());
        FIX::MaturityRuleID MaturityRuleID_31("STRING_352229526");
        noMaturityRules_0_0_2_2.set(MaturityRuleID_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityRuleID_31.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_31("MONTHYEAR_300962462");
        noMaturityRules_0_0_2_2.set(StartMaturityMonthYear_31);
        MaturityRules_NoMaturityRules_31.insert(StartMaturityMonthYear_31.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_31);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments noMarketSegments_0_1;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_9;
    FIX::MarketID MarketID_19("EXCHANGE_1892168162");
    noMarketSegments_0_1.set(MarketID_19);
    MarketSegmentGrp_NoMarketSegments_9.insert(MarketID_19.getString());
    FIX::MarketSegmentID MarketSegmentID_19("STRING_301809164");
    noMarketSegments_0_1.set(MarketSegmentID_19);
    MarketSegmentGrp_NoMarketSegments_9.insert(MarketSegmentID_19.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_9);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_11;
    FIX::ExpirationCycle ExpirationCycle_12(1);
    noMarketSegments_0_1.set(ExpirationCycle_12);
    BaseTradingRules_11.insert(ExpirationCycle_12.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_11(2);
    noMarketSegments_0_1.set(ImpliedMarketIndicator_11);
    BaseTradingRules_11.insert(ImpliedMarketIndicator_11.getString());
    FIX::MaxPriceVariation MaxPriceVariation_11;
    MaxPriceVariation_11.setString("13114768");
    noMarketSegments_0_1.set(MaxPriceVariation_11);
    BaseTradingRules_11.insert(MaxPriceVariation_11.getString());
    FIX::MaxTradeVol MaxTradeVol_11;
    MaxTradeVol_11.setString("16637761");
    noMarketSegments_0_1.set(MaxTradeVol_11);
    BaseTradingRules_11.insert(MaxTradeVol_11.getString());
    FIX::MinTradeVol MinTradeVol_11;
    MinTradeVol_11.setString("10005685");
    noMarketSegments_0_1.set(MinTradeVol_11);
    BaseTradingRules_11.insert(MinTradeVol_11.getString());
    FIX::MultilegModel MultilegModel_13(1);
    noMarketSegments_0_1.set(MultilegModel_13);
    BaseTradingRules_11.insert(MultilegModel_13.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_13(1);
    noMarketSegments_0_1.set(MultilegPriceMethod_13);
    BaseTradingRules_11.insert(MultilegPriceMethod_13.getString());
    FIX::PriceType PriceType_44(2);
    noMarketSegments_0_1.set(PriceType_44);
    BaseTradingRules_11.insert(PriceType_44.getString());
    FIX::RoundLot RoundLot_11;
    RoundLot_11.setString("21453309");
    noMarketSegments_0_1.set(RoundLot_11);
    BaseTradingRules_11.insert(RoundLot_11.getString());
    FIX::TradingCurrency TradingCurrency_11("CHF");
    noMarketSegments_0_1.set(TradingCurrency_11);
    BaseTradingRules_11.insert(TradingCurrency_11.getString());
    all_values.push_back(BaseTradingRules_11);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_24;
      FIX::LotType LotType_28('2');
      noLotTypeRules_1_1_0.set(LotType_28);
      LotTypeRules_NoLotTypeRules_24.insert(LotType_28.getString());
      FIX::MinLotSize MinLotSize_24;
      MinLotSize_24.setString("6255852");
      noLotTypeRules_1_1_0.set(MinLotSize_24);
      LotTypeRules_NoLotTypeRules_24.insert(MinLotSize_24.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_24);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_25;
      FIX::LotType LotType_29('1');
      noLotTypeRules_1_1_1.set(LotType_29);
      LotTypeRules_NoLotTypeRules_25.insert(LotType_29.getString());
      FIX::MinLotSize MinLotSize_25;
      MinLotSize_25.setString("14760579");
      noLotTypeRules_1_1_1.set(MinLotSize_25);
      LotTypeRules_NoLotTypeRules_25.insert(MinLotSize_25.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_25);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_26;
      FIX::LotType LotType_30('1');
      noLotTypeRules_1_1_2.set(LotType_30);
      LotTypeRules_NoLotTypeRules_26.insert(LotType_30.getString());
      FIX::MinLotSize MinLotSize_26;
      MinLotSize_26.setString("14971427");
      noLotTypeRules_1_1_2.set(MinLotSize_26);
      LotTypeRules_NoLotTypeRules_26.insert(MinLotSize_26.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_26);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_11;
    FIX::HighLimitPrice HighLimitPrice_11;
    HighLimitPrice_11.setString("9388848");
    noMarketSegments_0_1.set(HighLimitPrice_11);
    PriceLimits_11.insert(HighLimitPrice_11.getString());
    FIX::LowLimitPrice LowLimitPrice_11;
    LowLimitPrice_11.setString("15590128");
    noMarketSegments_0_1.set(LowLimitPrice_11);
    PriceLimits_11.insert(LowLimitPrice_11.getString());
    FIX::PriceLimitType PriceLimitType_11(0);
    noMarketSegments_0_1.set(PriceLimitType_11);
    PriceLimits_11.insert(PriceLimitType_11.getString());
    FIX::TradingReferencePrice TradingReferencePrice_11;
    TradingReferencePrice_11.setString("7062256");
    noMarketSegments_0_1.set(TradingReferencePrice_11);
    PriceLimits_11.insert(TradingReferencePrice_11.getString());
    all_values.push_back(PriceLimits_11);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_18;
      FIX::EndTickPriceRange EndTickPriceRange_18;
      EndTickPriceRange_18.setString("10198233");
      noTickRules_1_1_0.set(EndTickPriceRange_18);
      TickRules_NoTickRules_18.insert(EndTickPriceRange_18.getString());
      FIX::StartTickPriceRange StartTickPriceRange_18;
      StartTickPriceRange_18.setString("11738925");
      noTickRules_1_1_0.set(StartTickPriceRange_18);
      TickRules_NoTickRules_18.insert(StartTickPriceRange_18.getString());
      FIX::TickIncrement TickIncrement_18;
      TickIncrement_18.setString("11584310");
      noTickRules_1_1_0.set(TickIncrement_18);
      TickRules_NoTickRules_18.insert(TickIncrement_18.getString());
      FIX::TickRuleType TickRuleType_18(3);
      noTickRules_1_1_0.set(TickRuleType_18);
      TickRules_NoTickRules_18.insert(TickRuleType_18.getString());
      all_values.push_back(TickRules_NoTickRules_18);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_1_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_19;
      FIX::EndTickPriceRange EndTickPriceRange_19;
      EndTickPriceRange_19.setString("15261220");
      noTickRules_1_1_1.set(EndTickPriceRange_19);
      TickRules_NoTickRules_19.insert(EndTickPriceRange_19.getString());
      FIX::StartTickPriceRange StartTickPriceRange_19;
      StartTickPriceRange_19.setString("14593935");
      noTickRules_1_1_1.set(StartTickPriceRange_19);
      TickRules_NoTickRules_19.insert(StartTickPriceRange_19.getString());
      FIX::TickIncrement TickIncrement_19;
      TickIncrement_19.setString("16358353");
      noTickRules_1_1_1.set(TickIncrement_19);
      TickRules_NoTickRules_19.insert(TickIncrement_19.getString());
      FIX::TickRuleType TickRuleType_19(2);
      noTickRules_1_1_1.set(TickRuleType_19);
      TickRules_NoTickRules_19.insert(TickRuleType_19.getString());
      all_values.push_back(TickRules_NoTickRules_19);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_22;
      FIX::NestedInstrAttribType NestedInstrAttribType_22(455703864);
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribType_22);
      NestedInstrumentAttribute_NoNestedInstrAttrib_22.insert(NestedInstrAttribType_22.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_22("STRING_991924448");
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribValue_22);
      NestedInstrumentAttribute_NoNestedInstrAttrib_22.insert(NestedInstrAttribValue_22.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_22);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_23;
      FIX::NestedInstrAttribType NestedInstrAttribType_23(1155698621);
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribType_23);
      NestedInstrumentAttribute_NoNestedInstrAttrib_23.insert(NestedInstrAttribType_23.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_23("STRING_1456272373");
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribValue_23);
      NestedInstrumentAttribute_NoNestedInstrAttrib_23.insert(NestedInstrAttribValue_23.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_23);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_18;
      FIX::TradingSessionID TradingSessionID_81("STRING_5");
      noTradingSessionRules_1_1_0.set(TradingSessionID_81);
      TradingSessionRulesGrp_NoTradingSessionRules_18.insert(TradingSessionID_81.getString());
      FIX::TradingSessionSubID TradingSessionSubID_81("STRING_1");
      noTradingSessionRules_1_1_0.set(TradingSessionSubID_81);
      TradingSessionRulesGrp_NoTradingSessionRules_18.insert(TradingSessionSubID_81.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_18);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_43;
        FIX::ExecInstValue ExecInstValue_43('1');
        noExecInstRules_1_0_2_0.set(ExecInstValue_43);
        ExecInstRules_NoExecInstRules_43.insert(ExecInstValue_43.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_43);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_36;
        FIX::MDBookType MDBookType_38(3);
        noMDFeedTypes_1_0_2_0.set(MDBookType_38);
        MarketDataFeedTypes_NoMDFeedTypes_36.insert(MDBookType_38.getString());
        FIX::MDFeedType MDFeedType_38("STRING_1381766514");
        noMDFeedTypes_1_0_2_0.set(MDFeedType_38);
        MarketDataFeedTypes_NoMDFeedTypes_36.insert(MDFeedType_38.getString());
        FIX::MarketDepth MarketDepth_39(892715770);
        noMDFeedTypes_1_0_2_0.set(MarketDepth_39);
        MarketDataFeedTypes_NoMDFeedTypes_36.insert(MarketDepth_39.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_36);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_37;
        FIX::MDBookType MDBookType_39(1);
        noMDFeedTypes_1_0_2_1.set(MDBookType_39);
        MarketDataFeedTypes_NoMDFeedTypes_37.insert(MDBookType_39.getString());
        FIX::MDFeedType MDFeedType_39("STRING_710340854");
        noMDFeedTypes_1_0_2_1.set(MDFeedType_39);
        MarketDataFeedTypes_NoMDFeedTypes_37.insert(MDFeedType_39.getString());
        FIX::MarketDepth MarketDepth_40(1853163438);
        noMDFeedTypes_1_0_2_1.set(MarketDepth_40);
        MarketDataFeedTypes_NoMDFeedTypes_37.insert(MarketDepth_40.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_37);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_38;
        FIX::MDBookType MDBookType_40(2);
        noMDFeedTypes_1_0_2_2.set(MDBookType_40);
        MarketDataFeedTypes_NoMDFeedTypes_38.insert(MDBookType_40.getString());
        FIX::MDFeedType MDFeedType_40("STRING_1649225679");
        noMDFeedTypes_1_0_2_2.set(MDFeedType_40);
        MarketDataFeedTypes_NoMDFeedTypes_38.insert(MDFeedType_40.getString());
        FIX::MarketDepth MarketDepth_41(1264692601);
        noMDFeedTypes_1_0_2_2.set(MarketDepth_41);
        MarketDataFeedTypes_NoMDFeedTypes_38.insert(MarketDepth_41.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_38);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_41;
        FIX::MatchAlgorithm MatchAlgorithm_41("STRING_207967634");
        noMatchRules_1_0_2_0.set(MatchAlgorithm_41);
        MatchRules_NoMatchRules_41.insert(MatchAlgorithm_41.getString());
        FIX::MatchType MatchType_46("STRING_AQ");
        noMatchRules_1_0_2_0.set(MatchType_46);
        MatchRules_NoMatchRules_41.insert(MatchType_46.getString());
        all_values.push_back(MatchRules_NoMatchRules_41);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_42;
        FIX::MatchAlgorithm MatchAlgorithm_42("STRING_165613243");
        noMatchRules_1_0_2_1.set(MatchAlgorithm_42);
        MatchRules_NoMatchRules_42.insert(MatchAlgorithm_42.getString());
        FIX::MatchType MatchType_47("STRING_2");
        noMatchRules_1_0_2_1.set(MatchType_47);
        MatchRules_NoMatchRules_42.insert(MatchType_47.getString());
        all_values.push_back(MatchRules_NoMatchRules_42);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_43;
        FIX::MatchAlgorithm MatchAlgorithm_43("STRING_210472448");
        noMatchRules_1_0_2_2.set(MatchAlgorithm_43);
        MatchRules_NoMatchRules_43.insert(MatchAlgorithm_43.getString());
        FIX::MatchType MatchType_48("STRING_M6");
        noMatchRules_1_0_2_2.set(MatchType_48);
        MatchRules_NoMatchRules_43.insert(MatchType_48.getString());
        all_values.push_back(MatchRules_NoMatchRules_43);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_45;
        FIX::OrdType OrdType_68('B');
        noOrdTypeRules_1_0_2_0.set(OrdType_68);
        OrdTypeRules_NoOrdTypeRules_45.insert(OrdType_68.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_45);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_44;
        FIX::TimeInForce TimeInForce_57('0');
        noTimeInForceRules_1_0_2_0.set(TimeInForce_57);
        TimeInForceRules_NoTimeInForceRules_44.insert(TimeInForce_57.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_44);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_45;
        FIX::TimeInForce TimeInForce_58('1');
        noTimeInForceRules_1_0_2_1.set(TimeInForce_58);
        TimeInForceRules_NoTimeInForceRules_45.insert(TimeInForce_58.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_45);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_1);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_19;
      FIX::TradingSessionID TradingSessionID_82("STRING_2");
      noTradingSessionRules_1_1_1.set(TradingSessionID_82);
      TradingSessionRulesGrp_NoTradingSessionRules_19.insert(TradingSessionID_82.getString());
      FIX::TradingSessionSubID TradingSessionSubID_82("STRING_5");
      noTradingSessionRules_1_1_1.set(TradingSessionSubID_82);
      TradingSessionRulesGrp_NoTradingSessionRules_19.insert(TradingSessionSubID_82.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_19);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_44;
        FIX::ExecInstValue ExecInstValue_44('1');
        noExecInstRules_1_1_2_0.set(ExecInstValue_44);
        ExecInstRules_NoExecInstRules_44.insert(ExecInstValue_44.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_44);

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_39;
        FIX::MDBookType MDBookType_41(2);
        noMDFeedTypes_1_1_2_0.set(MDBookType_41);
        MarketDataFeedTypes_NoMDFeedTypes_39.insert(MDBookType_41.getString());
        FIX::MDFeedType MDFeedType_41("STRING_1700521045");
        noMDFeedTypes_1_1_2_0.set(MDFeedType_41);
        MarketDataFeedTypes_NoMDFeedTypes_39.insert(MDFeedType_41.getString());
        FIX::MarketDepth MarketDepth_42(2094432759);
        noMDFeedTypes_1_1_2_0.set(MarketDepth_42);
        MarketDataFeedTypes_NoMDFeedTypes_39.insert(MarketDepth_42.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_39);

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_44;
        FIX::MatchAlgorithm MatchAlgorithm_44("STRING_1967651559");
        noMatchRules_1_1_2_0.set(MatchAlgorithm_44);
        MatchRules_NoMatchRules_44.insert(MatchAlgorithm_44.getString());
        FIX::MatchType MatchType_49("STRING_M6");
        noMatchRules_1_1_2_0.set(MatchType_49);
        MatchRules_NoMatchRules_44.insert(MatchType_49.getString());
        all_values.push_back(MatchRules_NoMatchRules_44);

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_46;
        FIX::OrdType OrdType_69('I');
        noOrdTypeRules_1_1_2_0.set(OrdType_69);
        OrdTypeRules_NoOrdTypeRules_46.insert(OrdType_69.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_46);

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_46;
        FIX::TimeInForce TimeInForce_59('3');
        noTimeInForceRules_1_1_2_0.set(TimeInForce_59);
        TimeInForceRules_NoTimeInForceRules_46.insert(TimeInForce_59.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_46);

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_0);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_14;
      FIX::EndStrikePxRange EndStrikePxRange_14;
      EndStrikePxRange_14.setString("16310427");
      noStrikeRules_1_1_0.set(EndStrikePxRange_14);
      StrikeRules_NoStrikeRules_14.insert(EndStrikePxRange_14.getString());
      FIX::StartStrikePxRange StartStrikePxRange_14;
      StartStrikePxRange_14.setString("880360");
      noStrikeRules_1_1_0.set(StartStrikePxRange_14);
      StrikeRules_NoStrikeRules_14.insert(StartStrikePxRange_14.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_14(1683256073);
      noStrikeRules_1_1_0.set(StrikeExerciseStyle_14);
      StrikeRules_NoStrikeRules_14.insert(StrikeExerciseStyle_14.getString());
      FIX::StrikeIncrement StrikeIncrement_14;
      StrikeIncrement_14.setString("7768325");
      noStrikeRules_1_1_0.set(StrikeIncrement_14);
      StrikeRules_NoStrikeRules_14.insert(StrikeIncrement_14.getString());
      FIX::StrikeRuleID StrikeRuleID_14("STRING_296003718");
      noStrikeRules_1_1_0.set(StrikeRuleID_14);
      StrikeRules_NoStrikeRules_14.insert(StrikeRuleID_14.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_14);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_32;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_32("MONTHYEAR_942445825");
        noMaturityRules_1_0_2_0.set(EndMaturityMonthYear_32);
        MaturityRules_NoMaturityRules_32.insert(EndMaturityMonthYear_32.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_32(1);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearFormat_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityMonthYearFormat_32.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_32(945769893);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrement_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityMonthYearIncrement_32.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_32(1);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrementUnits_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityMonthYearIncrementUnits_32.getString());
        FIX::MaturityRuleID MaturityRuleID_32("STRING_290878901");
        noMaturityRules_1_0_2_0.set(MaturityRuleID_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityRuleID_32.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_32("MONTHYEAR_468152231");
        noMaturityRules_1_0_2_0.set(StartMaturityMonthYear_32);
        MaturityRules_NoMaturityRules_32.insert(StartMaturityMonthYear_32.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_32);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_33;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_33("MONTHYEAR_249358366");
        noMaturityRules_1_0_2_1.set(EndMaturityMonthYear_33);
        MaturityRules_NoMaturityRules_33.insert(EndMaturityMonthYear_33.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_33(2);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearFormat_33);
        MaturityRules_NoMaturityRules_33.insert(MaturityMonthYearFormat_33.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_33(1629940683);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrement_33);
        MaturityRules_NoMaturityRules_33.insert(MaturityMonthYearIncrement_33.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_33(0);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrementUnits_33);
        MaturityRules_NoMaturityRules_33.insert(MaturityMonthYearIncrementUnits_33.getString());
        FIX::MaturityRuleID MaturityRuleID_33("STRING_17212181");
        noMaturityRules_1_0_2_1.set(MaturityRuleID_33);
        MaturityRules_NoMaturityRules_33.insert(MaturityRuleID_33.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_33("MONTHYEAR_1799944107");
        noMaturityRules_1_0_2_1.set(StartMaturityMonthYear_33);
        MaturityRules_NoMaturityRules_33.insert(StartMaturityMonthYear_33.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_33);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_15;
      FIX::EndStrikePxRange EndStrikePxRange_15;
      EndStrikePxRange_15.setString("14123027");
      noStrikeRules_1_1_1.set(EndStrikePxRange_15);
      StrikeRules_NoStrikeRules_15.insert(EndStrikePxRange_15.getString());
      FIX::StartStrikePxRange StartStrikePxRange_15;
      StartStrikePxRange_15.setString("17819402");
      noStrikeRules_1_1_1.set(StartStrikePxRange_15);
      StrikeRules_NoStrikeRules_15.insert(StartStrikePxRange_15.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_15(781018896);
      noStrikeRules_1_1_1.set(StrikeExerciseStyle_15);
      StrikeRules_NoStrikeRules_15.insert(StrikeExerciseStyle_15.getString());
      FIX::StrikeIncrement StrikeIncrement_15;
      StrikeIncrement_15.setString("9653401");
      noStrikeRules_1_1_1.set(StrikeIncrement_15);
      StrikeRules_NoStrikeRules_15.insert(StrikeIncrement_15.getString());
      FIX::StrikeRuleID StrikeRuleID_15("STRING_1728889377");
      noStrikeRules_1_1_1.set(StrikeRuleID_15);
      StrikeRules_NoStrikeRules_15.insert(StrikeRuleID_15.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_15);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_34;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_34("MONTHYEAR_785508012");
        noMaturityRules_1_1_2_0.set(EndMaturityMonthYear_34);
        MaturityRules_NoMaturityRules_34.insert(EndMaturityMonthYear_34.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_34(1);
        noMaturityRules_1_1_2_0.set(MaturityMonthYearFormat_34);
        MaturityRules_NoMaturityRules_34.insert(MaturityMonthYearFormat_34.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_34(1298642428);
        noMaturityRules_1_1_2_0.set(MaturityMonthYearIncrement_34);
        MaturityRules_NoMaturityRules_34.insert(MaturityMonthYearIncrement_34.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_34(1);
        noMaturityRules_1_1_2_0.set(MaturityMonthYearIncrementUnits_34);
        MaturityRules_NoMaturityRules_34.insert(MaturityMonthYearIncrementUnits_34.getString());
        FIX::MaturityRuleID MaturityRuleID_34("STRING_1305816347");
        noMaturityRules_1_1_2_0.set(MaturityRuleID_34);
        MaturityRules_NoMaturityRules_34.insert(MaturityRuleID_34.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_34("MONTHYEAR_1884936481");
        noMaturityRules_1_1_2_0.set(StartMaturityMonthYear_34);
        MaturityRules_NoMaturityRules_34.insert(StartMaturityMonthYear_34.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_34);

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_0);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_1);
    }
    msg.addGroup(noMarketSegments_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments noMarketSegments_0_2;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_10;
    FIX::MarketID MarketID_20("EXCHANGE_1916955165");
    noMarketSegments_0_2.set(MarketID_20);
    MarketSegmentGrp_NoMarketSegments_10.insert(MarketID_20.getString());
    FIX::MarketSegmentID MarketSegmentID_20("STRING_789375423");
    noMarketSegments_0_2.set(MarketSegmentID_20);
    MarketSegmentGrp_NoMarketSegments_10.insert(MarketSegmentID_20.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_10);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_12;
    FIX::ExpirationCycle ExpirationCycle_13(2);
    noMarketSegments_0_2.set(ExpirationCycle_13);
    BaseTradingRules_12.insert(ExpirationCycle_13.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_12(3);
    noMarketSegments_0_2.set(ImpliedMarketIndicator_12);
    BaseTradingRules_12.insert(ImpliedMarketIndicator_12.getString());
    FIX::MaxPriceVariation MaxPriceVariation_12;
    MaxPriceVariation_12.setString("15662080");
    noMarketSegments_0_2.set(MaxPriceVariation_12);
    BaseTradingRules_12.insert(MaxPriceVariation_12.getString());
    FIX::MaxTradeVol MaxTradeVol_12;
    MaxTradeVol_12.setString("1214926");
    noMarketSegments_0_2.set(MaxTradeVol_12);
    BaseTradingRules_12.insert(MaxTradeVol_12.getString());
    FIX::MinTradeVol MinTradeVol_12;
    MinTradeVol_12.setString("405413");
    noMarketSegments_0_2.set(MinTradeVol_12);
    BaseTradingRules_12.insert(MinTradeVol_12.getString());
    FIX::MultilegModel MultilegModel_14(2);
    noMarketSegments_0_2.set(MultilegModel_14);
    BaseTradingRules_12.insert(MultilegModel_14.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_14(2);
    noMarketSegments_0_2.set(MultilegPriceMethod_14);
    BaseTradingRules_12.insert(MultilegPriceMethod_14.getString());
    FIX::PriceType PriceType_45(4);
    noMarketSegments_0_2.set(PriceType_45);
    BaseTradingRules_12.insert(PriceType_45.getString());
    FIX::RoundLot RoundLot_12;
    RoundLot_12.setString("12128964");
    noMarketSegments_0_2.set(RoundLot_12);
    BaseTradingRules_12.insert(RoundLot_12.getString());
    FIX::TradingCurrency TradingCurrency_12("GBP");
    noMarketSegments_0_2.set(TradingCurrency_12);
    BaseTradingRules_12.insert(TradingCurrency_12.getString());
    all_values.push_back(BaseTradingRules_12);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_27;
      FIX::LotType LotType_31('2');
      noLotTypeRules_2_1_0.set(LotType_31);
      LotTypeRules_NoLotTypeRules_27.insert(LotType_31.getString());
      FIX::MinLotSize MinLotSize_27;
      MinLotSize_27.setString("9369205");
      noLotTypeRules_2_1_0.set(MinLotSize_27);
      LotTypeRules_NoLotTypeRules_27.insert(MinLotSize_27.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_27);

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_12;
    FIX::HighLimitPrice HighLimitPrice_12;
    HighLimitPrice_12.setString("15649491");
    noMarketSegments_0_2.set(HighLimitPrice_12);
    PriceLimits_12.insert(HighLimitPrice_12.getString());
    FIX::LowLimitPrice LowLimitPrice_12;
    LowLimitPrice_12.setString("6917891");
    noMarketSegments_0_2.set(LowLimitPrice_12);
    PriceLimits_12.insert(LowLimitPrice_12.getString());
    FIX::PriceLimitType PriceLimitType_12(2);
    noMarketSegments_0_2.set(PriceLimitType_12);
    PriceLimits_12.insert(PriceLimitType_12.getString());
    FIX::TradingReferencePrice TradingReferencePrice_12;
    TradingReferencePrice_12.setString("8297682");
    noMarketSegments_0_2.set(TradingReferencePrice_12);
    PriceLimits_12.insert(TradingReferencePrice_12.getString());
    all_values.push_back(PriceLimits_12);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_2_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_20;
      FIX::EndTickPriceRange EndTickPriceRange_20;
      EndTickPriceRange_20.setString("13703999");
      noTickRules_2_1_0.set(EndTickPriceRange_20);
      TickRules_NoTickRules_20.insert(EndTickPriceRange_20.getString());
      FIX::StartTickPriceRange StartTickPriceRange_20;
      StartTickPriceRange_20.setString("17951083");
      noTickRules_2_1_0.set(StartTickPriceRange_20);
      TickRules_NoTickRules_20.insert(StartTickPriceRange_20.getString());
      FIX::TickIncrement TickIncrement_20;
      TickIncrement_20.setString("20551351");
      noTickRules_2_1_0.set(TickIncrement_20);
      TickRules_NoTickRules_20.insert(TickIncrement_20.getString());
      FIX::TickRuleType TickRuleType_20(4);
      noTickRules_2_1_0.set(TickRuleType_20);
      TickRules_NoTickRules_20.insert(TickRuleType_20.getString());
      all_values.push_back(TickRules_NoTickRules_20);

      noMarketSegments_0_2.addGroup(noTickRules_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_2_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_21;
      FIX::EndTickPriceRange EndTickPriceRange_21;
      EndTickPriceRange_21.setString("4331326");
      noTickRules_2_1_1.set(EndTickPriceRange_21);
      TickRules_NoTickRules_21.insert(EndTickPriceRange_21.getString());
      FIX::StartTickPriceRange StartTickPriceRange_21;
      StartTickPriceRange_21.setString("13098588");
      noTickRules_2_1_1.set(StartTickPriceRange_21);
      TickRules_NoTickRules_21.insert(StartTickPriceRange_21.getString());
      FIX::TickIncrement TickIncrement_21;
      TickIncrement_21.setString("19442479");
      noTickRules_2_1_1.set(TickIncrement_21);
      TickRules_NoTickRules_21.insert(TickIncrement_21.getString());
      FIX::TickRuleType TickRuleType_21(4);
      noTickRules_2_1_1.set(TickRuleType_21);
      TickRules_NoTickRules_21.insert(TickRuleType_21.getString());
      all_values.push_back(TickRules_NoTickRules_21);

      noMarketSegments_0_2.addGroup(noTickRules_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_2_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_22;
      FIX::EndTickPriceRange EndTickPriceRange_22;
      EndTickPriceRange_22.setString("4681915");
      noTickRules_2_1_2.set(EndTickPriceRange_22);
      TickRules_NoTickRules_22.insert(EndTickPriceRange_22.getString());
      FIX::StartTickPriceRange StartTickPriceRange_22;
      StartTickPriceRange_22.setString("16817007");
      noTickRules_2_1_2.set(StartTickPriceRange_22);
      TickRules_NoTickRules_22.insert(StartTickPriceRange_22.getString());
      FIX::TickIncrement TickIncrement_22;
      TickIncrement_22.setString("17009958");
      noTickRules_2_1_2.set(TickIncrement_22);
      TickRules_NoTickRules_22.insert(TickIncrement_22.getString());
      FIX::TickRuleType TickRuleType_22(4);
      noTickRules_2_1_2.set(TickRuleType_22);
      TickRules_NoTickRules_22.insert(TickRuleType_22.getString());
      all_values.push_back(TickRules_NoTickRules_22);

      noMarketSegments_0_2.addGroup(noTickRules_2_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_24;
      FIX::NestedInstrAttribType NestedInstrAttribType_24(1006239819);
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribType_24);
      NestedInstrumentAttribute_NoNestedInstrAttrib_24.insert(NestedInstrAttribType_24.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_24("STRING_676291326");
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribValue_24);
      NestedInstrumentAttribute_NoNestedInstrAttrib_24.insert(NestedInstrAttribValue_24.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_24);

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_20;
      FIX::TradingSessionID TradingSessionID_83("STRING_4");
      noTradingSessionRules_2_1_0.set(TradingSessionID_83);
      TradingSessionRulesGrp_NoTradingSessionRules_20.insert(TradingSessionID_83.getString());
      FIX::TradingSessionSubID TradingSessionSubID_83("STRING_1");
      noTradingSessionRules_2_1_0.set(TradingSessionSubID_83);
      TradingSessionRulesGrp_NoTradingSessionRules_20.insert(TradingSessionSubID_83.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_20);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_45;
        FIX::ExecInstValue ExecInstValue_45('2');
        noExecInstRules_2_0_2_0.set(ExecInstValue_45);
        ExecInstRules_NoExecInstRules_45.insert(ExecInstValue_45.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_45);

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_46;
        FIX::ExecInstValue ExecInstValue_46('1');
        noExecInstRules_2_0_2_1.set(ExecInstValue_46);
        ExecInstRules_NoExecInstRules_46.insert(ExecInstValue_46.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_46);

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_40;
        FIX::MDBookType MDBookType_42(2);
        noMDFeedTypes_2_0_2_0.set(MDBookType_42);
        MarketDataFeedTypes_NoMDFeedTypes_40.insert(MDBookType_42.getString());
        FIX::MDFeedType MDFeedType_42("STRING_1565129090");
        noMDFeedTypes_2_0_2_0.set(MDFeedType_42);
        MarketDataFeedTypes_NoMDFeedTypes_40.insert(MDFeedType_42.getString());
        FIX::MarketDepth MarketDepth_43(1897883949);
        noMDFeedTypes_2_0_2_0.set(MarketDepth_43);
        MarketDataFeedTypes_NoMDFeedTypes_40.insert(MarketDepth_43.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_40);

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_41;
        FIX::MDBookType MDBookType_43(3);
        noMDFeedTypes_2_0_2_1.set(MDBookType_43);
        MarketDataFeedTypes_NoMDFeedTypes_41.insert(MDBookType_43.getString());
        FIX::MDFeedType MDFeedType_43("STRING_982594588");
        noMDFeedTypes_2_0_2_1.set(MDFeedType_43);
        MarketDataFeedTypes_NoMDFeedTypes_41.insert(MDFeedType_43.getString());
        FIX::MarketDepth MarketDepth_44(442189427);
        noMDFeedTypes_2_0_2_1.set(MarketDepth_44);
        MarketDataFeedTypes_NoMDFeedTypes_41.insert(MarketDepth_44.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_41);

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_45;
        FIX::MatchAlgorithm MatchAlgorithm_45("STRING_1812362789");
        noMatchRules_2_0_2_0.set(MatchAlgorithm_45);
        MatchRules_NoMatchRules_45.insert(MatchAlgorithm_45.getString());
        FIX::MatchType MatchType_50("STRING_M2");
        noMatchRules_2_0_2_0.set(MatchType_50);
        MatchRules_NoMatchRules_45.insert(MatchType_50.getString());
        all_values.push_back(MatchRules_NoMatchRules_45);

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_46;
        FIX::MatchAlgorithm MatchAlgorithm_46("STRING_2089290162");
        noMatchRules_2_0_2_1.set(MatchAlgorithm_46);
        MatchRules_NoMatchRules_46.insert(MatchAlgorithm_46.getString());
        FIX::MatchType MatchType_51("STRING_6");
        noMatchRules_2_0_2_1.set(MatchType_51);
        MatchRules_NoMatchRules_46.insert(MatchType_51.getString());
        all_values.push_back(MatchRules_NoMatchRules_46);

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_47;
        FIX::OrdType OrdType_70('P');
        noOrdTypeRules_2_0_2_0.set(OrdType_70);
        OrdTypeRules_NoOrdTypeRules_47.insert(OrdType_70.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_47);

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_48;
        FIX::OrdType OrdType_71('D');
        noOrdTypeRules_2_0_2_1.set(OrdType_71);
        OrdTypeRules_NoOrdTypeRules_48.insert(OrdType_71.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_48);

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_49;
        FIX::OrdType OrdType_72('P');
        noOrdTypeRules_2_0_2_2.set(OrdType_72);
        OrdTypeRules_NoOrdTypeRules_49.insert(OrdType_72.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_49);

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_47;
        FIX::TimeInForce TimeInForce_60('9');
        noTimeInForceRules_2_0_2_0.set(TimeInForce_60);
        TimeInForceRules_NoTimeInForceRules_47.insert(TimeInForce_60.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_47);

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_0);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_21;
      FIX::TradingSessionID TradingSessionID_84("STRING_5");
      noTradingSessionRules_2_1_1.set(TradingSessionID_84);
      TradingSessionRulesGrp_NoTradingSessionRules_21.insert(TradingSessionID_84.getString());
      FIX::TradingSessionSubID TradingSessionSubID_84("STRING_6");
      noTradingSessionRules_2_1_1.set(TradingSessionSubID_84);
      TradingSessionRulesGrp_NoTradingSessionRules_21.insert(TradingSessionSubID_84.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_21);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_47;
        FIX::ExecInstValue ExecInstValue_47('1');
        noExecInstRules_2_1_2_0.set(ExecInstValue_47);
        ExecInstRules_NoExecInstRules_47.insert(ExecInstValue_47.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_47);

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_48;
        FIX::ExecInstValue ExecInstValue_48('1');
        noExecInstRules_2_1_2_1.set(ExecInstValue_48);
        ExecInstRules_NoExecInstRules_48.insert(ExecInstValue_48.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_48);

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_42;
        FIX::MDBookType MDBookType_44(3);
        noMDFeedTypes_2_1_2_0.set(MDBookType_44);
        MarketDataFeedTypes_NoMDFeedTypes_42.insert(MDBookType_44.getString());
        FIX::MDFeedType MDFeedType_44("STRING_906781672");
        noMDFeedTypes_2_1_2_0.set(MDFeedType_44);
        MarketDataFeedTypes_NoMDFeedTypes_42.insert(MDFeedType_44.getString());
        FIX::MarketDepth MarketDepth_45(1136210427);
        noMDFeedTypes_2_1_2_0.set(MarketDepth_45);
        MarketDataFeedTypes_NoMDFeedTypes_42.insert(MarketDepth_45.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_42);

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_43;
        FIX::MDBookType MDBookType_45(3);
        noMDFeedTypes_2_1_2_1.set(MDBookType_45);
        MarketDataFeedTypes_NoMDFeedTypes_43.insert(MDBookType_45.getString());
        FIX::MDFeedType MDFeedType_45("STRING_39853225");
        noMDFeedTypes_2_1_2_1.set(MDFeedType_45);
        MarketDataFeedTypes_NoMDFeedTypes_43.insert(MDFeedType_45.getString());
        FIX::MarketDepth MarketDepth_46(1021819267);
        noMDFeedTypes_2_1_2_1.set(MarketDepth_46);
        MarketDataFeedTypes_NoMDFeedTypes_43.insert(MarketDepth_46.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_43);

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_44;
        FIX::MDBookType MDBookType_46(3);
        noMDFeedTypes_2_1_2_2.set(MDBookType_46);
        MarketDataFeedTypes_NoMDFeedTypes_44.insert(MDBookType_46.getString());
        FIX::MDFeedType MDFeedType_46("STRING_1263160229");
        noMDFeedTypes_2_1_2_2.set(MDFeedType_46);
        MarketDataFeedTypes_NoMDFeedTypes_44.insert(MDFeedType_46.getString());
        FIX::MarketDepth MarketDepth_47(214407972);
        noMDFeedTypes_2_1_2_2.set(MarketDepth_47);
        MarketDataFeedTypes_NoMDFeedTypes_44.insert(MarketDepth_47.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_44);

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_47;
        FIX::MatchAlgorithm MatchAlgorithm_47("STRING_1013560530");
        noMatchRules_2_1_2_0.set(MatchAlgorithm_47);
        MatchRules_NoMatchRules_47.insert(MatchAlgorithm_47.getString());
        FIX::MatchType MatchType_52("STRING_A4");
        noMatchRules_2_1_2_0.set(MatchType_52);
        MatchRules_NoMatchRules_47.insert(MatchType_52.getString());
        all_values.push_back(MatchRules_NoMatchRules_47);

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_48;
        FIX::MatchAlgorithm MatchAlgorithm_48("STRING_1633603873");
        noMatchRules_2_1_2_1.set(MatchAlgorithm_48);
        MatchRules_NoMatchRules_48.insert(MatchAlgorithm_48.getString());
        FIX::MatchType MatchType_53("STRING_MT");
        noMatchRules_2_1_2_1.set(MatchType_53);
        MatchRules_NoMatchRules_48.insert(MatchType_53.getString());
        all_values.push_back(MatchRules_NoMatchRules_48);

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_49;
        FIX::MatchAlgorithm MatchAlgorithm_49("STRING_1062807484");
        noMatchRules_2_1_2_2.set(MatchAlgorithm_49);
        MatchRules_NoMatchRules_49.insert(MatchAlgorithm_49.getString());
        FIX::MatchType MatchType_54("STRING_M5");
        noMatchRules_2_1_2_2.set(MatchType_54);
        MatchRules_NoMatchRules_49.insert(MatchType_54.getString());
        all_values.push_back(MatchRules_NoMatchRules_49);

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_50;
        FIX::OrdType OrdType_73('G');
        noOrdTypeRules_2_1_2_0.set(OrdType_73);
        OrdTypeRules_NoOrdTypeRules_50.insert(OrdType_73.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_50);

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_51;
        FIX::OrdType OrdType_74('I');
        noOrdTypeRules_2_1_2_1.set(OrdType_74);
        OrdTypeRules_NoOrdTypeRules_51.insert(OrdType_74.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_51);

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_52;
        FIX::OrdType OrdType_75('2');
        noOrdTypeRules_2_1_2_2.set(OrdType_75);
        OrdTypeRules_NoOrdTypeRules_52.insert(OrdType_75.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_52);

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_48;
        FIX::TimeInForce TimeInForce_61('0');
        noTimeInForceRules_2_1_2_0.set(TimeInForce_61);
        TimeInForceRules_NoTimeInForceRules_48.insert(TimeInForce_61.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_48);

        noTradingSessionRules_2_1_1.addGroup(noTimeInForceRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_49;
        FIX::TimeInForce TimeInForce_62('5');
        noTimeInForceRules_2_1_2_1.set(TimeInForce_62);
        TimeInForceRules_NoTimeInForceRules_49.insert(TimeInForce_62.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_49);

        noTradingSessionRules_2_1_1.addGroup(noTimeInForceRules_2_1_2_1);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_16;
      FIX::EndStrikePxRange EndStrikePxRange_16;
      EndStrikePxRange_16.setString("20337840");
      noStrikeRules_2_1_0.set(EndStrikePxRange_16);
      StrikeRules_NoStrikeRules_16.insert(EndStrikePxRange_16.getString());
      FIX::StartStrikePxRange StartStrikePxRange_16;
      StartStrikePxRange_16.setString("8979033");
      noStrikeRules_2_1_0.set(StartStrikePxRange_16);
      StrikeRules_NoStrikeRules_16.insert(StartStrikePxRange_16.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_16(1894595619);
      noStrikeRules_2_1_0.set(StrikeExerciseStyle_16);
      StrikeRules_NoStrikeRules_16.insert(StrikeExerciseStyle_16.getString());
      FIX::StrikeIncrement StrikeIncrement_16;
      StrikeIncrement_16.setString("11169734");
      noStrikeRules_2_1_0.set(StrikeIncrement_16);
      StrikeRules_NoStrikeRules_16.insert(StrikeIncrement_16.getString());
      FIX::StrikeRuleID StrikeRuleID_16("STRING_314640081");
      noStrikeRules_2_1_0.set(StrikeRuleID_16);
      StrikeRules_NoStrikeRules_16.insert(StrikeRuleID_16.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_16);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_35;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_35("MONTHYEAR_1206402709");
        noMaturityRules_2_0_2_0.set(EndMaturityMonthYear_35);
        MaturityRules_NoMaturityRules_35.insert(EndMaturityMonthYear_35.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_35(0);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearFormat_35);
        MaturityRules_NoMaturityRules_35.insert(MaturityMonthYearFormat_35.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_35(2079476666);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrement_35);
        MaturityRules_NoMaturityRules_35.insert(MaturityMonthYearIncrement_35.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_35(0);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrementUnits_35);
        MaturityRules_NoMaturityRules_35.insert(MaturityMonthYearIncrementUnits_35.getString());
        FIX::MaturityRuleID MaturityRuleID_35("STRING_1538157671");
        noMaturityRules_2_0_2_0.set(MaturityRuleID_35);
        MaturityRules_NoMaturityRules_35.insert(MaturityRuleID_35.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_35("MONTHYEAR_2119329891");
        noMaturityRules_2_0_2_0.set(StartMaturityMonthYear_35);
        MaturityRules_NoMaturityRules_35.insert(StartMaturityMonthYear_35.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_35);

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_0);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_17;
      FIX::EndStrikePxRange EndStrikePxRange_17;
      EndStrikePxRange_17.setString("12169487");
      noStrikeRules_2_1_1.set(EndStrikePxRange_17);
      StrikeRules_NoStrikeRules_17.insert(EndStrikePxRange_17.getString());
      FIX::StartStrikePxRange StartStrikePxRange_17;
      StartStrikePxRange_17.setString("6240378");
      noStrikeRules_2_1_1.set(StartStrikePxRange_17);
      StrikeRules_NoStrikeRules_17.insert(StartStrikePxRange_17.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_17(1235006472);
      noStrikeRules_2_1_1.set(StrikeExerciseStyle_17);
      StrikeRules_NoStrikeRules_17.insert(StrikeExerciseStyle_17.getString());
      FIX::StrikeIncrement StrikeIncrement_17;
      StrikeIncrement_17.setString("14313567");
      noStrikeRules_2_1_1.set(StrikeIncrement_17);
      StrikeRules_NoStrikeRules_17.insert(StrikeIncrement_17.getString());
      FIX::StrikeRuleID StrikeRuleID_17("STRING_1275047150");
      noStrikeRules_2_1_1.set(StrikeRuleID_17);
      StrikeRules_NoStrikeRules_17.insert(StrikeRuleID_17.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_17);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_36;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_36("MONTHYEAR_1775273953");
        noMaturityRules_2_1_2_0.set(EndMaturityMonthYear_36);
        MaturityRules_NoMaturityRules_36.insert(EndMaturityMonthYear_36.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_36(1);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearFormat_36);
        MaturityRules_NoMaturityRules_36.insert(MaturityMonthYearFormat_36.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_36(1556833311);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearIncrement_36);
        MaturityRules_NoMaturityRules_36.insert(MaturityMonthYearIncrement_36.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_36(1);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearIncrementUnits_36);
        MaturityRules_NoMaturityRules_36.insert(MaturityMonthYearIncrementUnits_36.getString());
        FIX::MaturityRuleID MaturityRuleID_36("STRING_2059650389");
        noMaturityRules_2_1_2_0.set(MaturityRuleID_36);
        MaturityRules_NoMaturityRules_36.insert(MaturityRuleID_36.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_36("MONTHYEAR_1633534793");
        noMaturityRules_2_1_2_0.set(StartMaturityMonthYear_36);
        MaturityRules_NoMaturityRules_36.insert(StartMaturityMonthYear_36.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_36);

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_37;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_37("MONTHYEAR_1695211788");
        noMaturityRules_2_1_2_1.set(EndMaturityMonthYear_37);
        MaturityRules_NoMaturityRules_37.insert(EndMaturityMonthYear_37.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_37(0);
        noMaturityRules_2_1_2_1.set(MaturityMonthYearFormat_37);
        MaturityRules_NoMaturityRules_37.insert(MaturityMonthYearFormat_37.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_37(238839274);
        noMaturityRules_2_1_2_1.set(MaturityMonthYearIncrement_37);
        MaturityRules_NoMaturityRules_37.insert(MaturityMonthYearIncrement_37.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_37(2);
        noMaturityRules_2_1_2_1.set(MaturityMonthYearIncrementUnits_37);
        MaturityRules_NoMaturityRules_37.insert(MaturityMonthYearIncrementUnits_37.getString());
        FIX::MaturityRuleID MaturityRuleID_37("STRING_879776821");
        noMaturityRules_2_1_2_1.set(MaturityRuleID_37);
        MaturityRules_NoMaturityRules_37.insert(MaturityRuleID_37.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_37("MONTHYEAR_830089249");
        noMaturityRules_2_1_2_1.set(StartMaturityMonthYear_37);
        MaturityRules_NoMaturityRules_37.insert(StartMaturityMonthYear_37.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_37);

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_1);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_18;
      FIX::EndStrikePxRange EndStrikePxRange_18;
      EndStrikePxRange_18.setString("9684727");
      noStrikeRules_2_1_2.set(EndStrikePxRange_18);
      StrikeRules_NoStrikeRules_18.insert(EndStrikePxRange_18.getString());
      FIX::StartStrikePxRange StartStrikePxRange_18;
      StartStrikePxRange_18.setString("7660772");
      noStrikeRules_2_1_2.set(StartStrikePxRange_18);
      StrikeRules_NoStrikeRules_18.insert(StartStrikePxRange_18.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_18(1727992617);
      noStrikeRules_2_1_2.set(StrikeExerciseStyle_18);
      StrikeRules_NoStrikeRules_18.insert(StrikeExerciseStyle_18.getString());
      FIX::StrikeIncrement StrikeIncrement_18;
      StrikeIncrement_18.setString("7155847");
      noStrikeRules_2_1_2.set(StrikeIncrement_18);
      StrikeRules_NoStrikeRules_18.insert(StrikeIncrement_18.getString());
      FIX::StrikeRuleID StrikeRuleID_18("STRING_1883050752");
      noStrikeRules_2_1_2.set(StrikeRuleID_18);
      StrikeRules_NoStrikeRules_18.insert(StrikeRuleID_18.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_18);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_38;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_38("MONTHYEAR_1888279715");
        noMaturityRules_2_2_2_0.set(EndMaturityMonthYear_38);
        MaturityRules_NoMaturityRules_38.insert(EndMaturityMonthYear_38.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_38(2);
        noMaturityRules_2_2_2_0.set(MaturityMonthYearFormat_38);
        MaturityRules_NoMaturityRules_38.insert(MaturityMonthYearFormat_38.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_38(302817172);
        noMaturityRules_2_2_2_0.set(MaturityMonthYearIncrement_38);
        MaturityRules_NoMaturityRules_38.insert(MaturityMonthYearIncrement_38.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_38(1);
        noMaturityRules_2_2_2_0.set(MaturityMonthYearIncrementUnits_38);
        MaturityRules_NoMaturityRules_38.insert(MaturityMonthYearIncrementUnits_38.getString());
        FIX::MaturityRuleID MaturityRuleID_38("STRING_1137099301");
        noMaturityRules_2_2_2_0.set(MaturityRuleID_38);
        MaturityRules_NoMaturityRules_38.insert(MaturityRuleID_38.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_38("MONTHYEAR_1840974844");
        noMaturityRules_2_2_2_0.set(StartMaturityMonthYear_38);
        MaturityRules_NoMaturityRules_38.insert(StartMaturityMonthYear_38.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_38);

        noStrikeRules_2_1_2.addGroup(noMaturityRules_2_2_2_0);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_2);
    }
    msg.addGroup(noMarketSegments_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_30;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_30("GBP");
  msg.set(BenchmarkCurveCurrency_30);
  SpreadOrBenchmarkCurveData_30.insert(BenchmarkCurveCurrency_30.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_30("STRING_EUREPO");
  msg.set(BenchmarkCurveName_30);
  SpreadOrBenchmarkCurveData_30.insert(BenchmarkCurveName_30.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_30("STRING_879641800");
  msg.set(BenchmarkCurvePoint_30);
  SpreadOrBenchmarkCurveData_30.insert(BenchmarkCurvePoint_30.getString());
  FIX::BenchmarkPrice BenchmarkPrice_30;
  BenchmarkPrice_30.setString("16379211");
  msg.set(BenchmarkPrice_30);
  SpreadOrBenchmarkCurveData_30.insert(BenchmarkPrice_30.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_30(1592576211);
  msg.set(BenchmarkPriceType_30);
  SpreadOrBenchmarkCurveData_30.insert(BenchmarkPriceType_30.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_30("STRING_980725154");
  msg.set(BenchmarkSecurityID_30);
  SpreadOrBenchmarkCurveData_30.insert(BenchmarkSecurityID_30.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_30("STRING_1265711441");
  msg.set(BenchmarkSecurityIDSource_30);
  SpreadOrBenchmarkCurveData_30.insert(BenchmarkSecurityIDSource_30.getString());
  FIX::Spread Spread_30;
  Spread_30.setString("2062599");
  msg.set(Spread_30);
  SpreadOrBenchmarkCurveData_30.insert(Spread_30.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_30);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_55;
    FIX::StipulationType StipulationType_55("STRING_PROTECT");
    noStipulations_0_0.set(StipulationType_55);
    Stipulations_NoStipulations_55.insert(StipulationType_55.getString());
    FIX::StipulationValue StipulationValue_55("STRING_118426680");
    noStipulations_0_0.set(StipulationValue_55);
    Stipulations_NoStipulations_55.insert(StipulationValue_55.getString());
    all_values.push_back(Stipulations_NoStipulations_55);

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_127;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_127("DATA_1504037371");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_127);
    UnderlyingInstrument_127.insert(EncodedUnderlyingIssuer_127.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_127(641580231);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_127);
    UnderlyingInstrument_127.insert(EncodedUnderlyingIssuerLen_127.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_127("DATA_114965237");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_127);
    UnderlyingInstrument_127.insert(EncodedUnderlyingSecurityDesc_127.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_127(496307861);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_127);
    UnderlyingInstrument_127.insert(EncodedUnderlyingSecurityDescLen_127.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_127;
    UnderlyingAdjustedQuantity_127.setString("15213570");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_127);
    UnderlyingInstrument_127.insert(UnderlyingAdjustedQuantity_127.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_127;
    UnderlyingAllocationPercent_127.setString("44.870000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_127);
    UnderlyingInstrument_127.insert(UnderlyingAllocationPercent_127.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_127;
    UnderlyingAttachmentPoint_127.setString("6.110000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_127);
    UnderlyingInstrument_127.insert(UnderlyingAttachmentPoint_127.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_127("STRING_139950666");
    noUnderlyings_0_0.set(UnderlyingCFICode_127);
    UnderlyingInstrument_127.insert(UnderlyingCFICode_127.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_127("STRING_525563456");
    noUnderlyings_0_0.set(UnderlyingCPProgram_127);
    UnderlyingInstrument_127.insert(UnderlyingCPProgram_127.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_127("STRING_32881685");
    noUnderlyings_0_0.set(UnderlyingCPRegType_127);
    UnderlyingInstrument_127.insert(UnderlyingCPRegType_127.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_127;
    UnderlyingCapValue_127.setString("20230014");
    noUnderlyings_0_0.set(UnderlyingCapValue_127);
    UnderlyingInstrument_127.insert(UnderlyingCapValue_127.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_127;
    UnderlyingCashAmount_127.setString("4207125");
    noUnderlyings_0_0.set(UnderlyingCashAmount_127);
    UnderlyingInstrument_127.insert(UnderlyingCashAmount_127.getString());
    FIX::UnderlyingCashType UnderlyingCashType_127("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_127);
    UnderlyingInstrument_127.insert(UnderlyingCashType_127.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_127;
    UnderlyingContractMultiplier_127.setString("8174875");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_127);
    UnderlyingInstrument_127.insert(UnderlyingContractMultiplier_127.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_127(723529679);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_127);
    UnderlyingInstrument_127.insert(UnderlyingContractMultiplierUnit_127.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_127("COUNTRY_1593950485");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_127);
    UnderlyingInstrument_127.insert(UnderlyingCountryOfIssue_127.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_127("LOCALMKTDATE_1954586884");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_127);
    UnderlyingInstrument_127.insert(UnderlyingCouponPaymentDate_127.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_127;
    UnderlyingCouponRate_127.setString("8.750000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_127);
    UnderlyingInstrument_127.insert(UnderlyingCouponRate_127.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_127("STRING_1238585813");
    noUnderlyings_0_0.set(UnderlyingCreditRating_127);
    UnderlyingInstrument_127.insert(UnderlyingCreditRating_127.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_127("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_127);
    UnderlyingInstrument_127.insert(UnderlyingCurrency_127.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_127;
    UnderlyingCurrentValue_127.setString("21182276");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_127);
    UnderlyingInstrument_127.insert(UnderlyingCurrentValue_127.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_127;
    UnderlyingDetachmentPoint_127.setString("87.810000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_127);
    UnderlyingInstrument_127.insert(UnderlyingDetachmentPoint_127.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_127;
    UnderlyingDirtyPrice_127.setString("1796425");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_127);
    UnderlyingInstrument_127.insert(UnderlyingDirtyPrice_127.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_127;
    UnderlyingEndPrice_127.setString("9514691");
    noUnderlyings_0_0.set(UnderlyingEndPrice_127);
    UnderlyingInstrument_127.insert(UnderlyingEndPrice_127.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_127;
    UnderlyingEndValue_127.setString("7698165");
    noUnderlyings_0_0.set(UnderlyingEndValue_127);
    UnderlyingInstrument_127.insert(UnderlyingEndValue_127.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_127(385902438);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_127);
    UnderlyingInstrument_127.insert(UnderlyingExerciseStyle_127.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_127;
    UnderlyingFXRate_127.setString("13415439");
    noUnderlyings_0_0.set(UnderlyingFXRate_127);
    UnderlyingInstrument_127.insert(UnderlyingFXRate_127.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_127('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_127);
    UnderlyingInstrument_127.insert(UnderlyingFXRateCalc_127.getString());
    FIX::UnderlyingFactor UnderlyingFactor_127;
    UnderlyingFactor_127.setString("5043291");
    noUnderlyings_0_0.set(UnderlyingFactor_127);
    UnderlyingInstrument_127.insert(UnderlyingFactor_127.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_127(1217669899);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_127);
    UnderlyingInstrument_127.insert(UnderlyingFlowScheduleType_127.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_127("STRING_2082679529");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_127);
    UnderlyingInstrument_127.insert(UnderlyingInstrRegistry_127.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_127("LOCALMKTDATE_1145909349");
    noUnderlyings_0_0.set(UnderlyingIssueDate_127);
    UnderlyingInstrument_127.insert(UnderlyingIssueDate_127.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_127("STRING_1332635137");
    noUnderlyings_0_0.set(UnderlyingIssuer_127);
    UnderlyingInstrument_127.insert(UnderlyingIssuer_127.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_127("STRING_431503743");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_127);
    UnderlyingInstrument_127.insert(UnderlyingLocaleOfIssue_127.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_127("LOCALMKTDATE_519782753");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_127);
    UnderlyingInstrument_127.insert(UnderlyingMaturityDate_127.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_127("MONTHYEAR_130205976");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_127);
    UnderlyingInstrument_127.insert(UnderlyingMaturityMonthYear_127.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_127("TZTIMEONLY_1896284354");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_127);
    UnderlyingInstrument_127.insert(UnderlyingMaturityTime_127.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_127;
    UnderlyingNotionalPercentageOutstanding_127.setString("34.200000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_127);
    UnderlyingInstrument_127.insert(UnderlyingNotionalPercentageOutstanding_127.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_127('6');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_127);
    UnderlyingInstrument_127.insert(UnderlyingOptAttribute_127.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_127;
    UnderlyingOriginalNotionalPercentageOutstanding_127.setString("60.390000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_127);
    UnderlyingInstrument_127.insert(UnderlyingOriginalNotionalPercentageOutstanding_127.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_127("STRING_535251190");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_127);
    UnderlyingInstrument_127.insert(UnderlyingPriceUnitOfMeasure_127.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_127;
    UnderlyingPriceUnitOfMeasureQty_127.setString("10764819");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_127);
    UnderlyingInstrument_127.insert(UnderlyingPriceUnitOfMeasureQty_127.getString());
    FIX::UnderlyingProduct UnderlyingProduct_127(1702843791);
    noUnderlyings_0_0.set(UnderlyingProduct_127);
    UnderlyingInstrument_127.insert(UnderlyingProduct_127.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_127(1352738774);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_127);
    UnderlyingInstrument_127.insert(UnderlyingPutOrCall_127.getString());
    FIX::UnderlyingPx UnderlyingPx_127;
    UnderlyingPx_127.setString("18000116");
    noUnderlyings_0_0.set(UnderlyingPx_127);
    UnderlyingInstrument_127.insert(UnderlyingPx_127.getString());
    FIX::UnderlyingQty UnderlyingQty_127;
    UnderlyingQty_127.setString("11493106");
    noUnderlyings_0_0.set(UnderlyingQty_127);
    UnderlyingInstrument_127.insert(UnderlyingQty_127.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_127("LOCALMKTDATE_1159842010");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_127);
    UnderlyingInstrument_127.insert(UnderlyingRedemptionDate_127.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_127("STRING_69548844");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_127);
    UnderlyingInstrument_127.insert(UnderlyingRepoCollateralSecurityType_127.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_127;
    UnderlyingRepurchaseRate_127.setString("27.930000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_127);
    UnderlyingInstrument_127.insert(UnderlyingRepurchaseRate_127.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_127(1173509655);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_127);
    UnderlyingInstrument_127.insert(UnderlyingRepurchaseTerm_127.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_127("STRING_804098781");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_127);
    UnderlyingInstrument_127.insert(UnderlyingRestructuringType_127.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_127("STRING_211156758");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_127);
    UnderlyingInstrument_127.insert(UnderlyingSecurityDesc_127.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_127("EXCHANGE_677614789");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_127);
    UnderlyingInstrument_127.insert(UnderlyingSecurityExchange_127.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_127("STRING_983741281");
    noUnderlyings_0_0.set(UnderlyingSecurityID_127);
    UnderlyingInstrument_127.insert(UnderlyingSecurityID_127.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_127("STRING_1162625877");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_127);
    UnderlyingInstrument_127.insert(UnderlyingSecurityIDSource_127.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_127("STRING_1447431364");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_127);
    UnderlyingInstrument_127.insert(UnderlyingSecuritySubType_127.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_127("STRING_1369643719");
    noUnderlyings_0_0.set(UnderlyingSecurityType_127);
    UnderlyingInstrument_127.insert(UnderlyingSecurityType_127.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_127("STRING_356686166");
    noUnderlyings_0_0.set(UnderlyingSeniority_127);
    UnderlyingInstrument_127.insert(UnderlyingSeniority_127.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_127("STRING_2026073522");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_127);
    UnderlyingInstrument_127.insert(UnderlyingSettlMethod_127.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_127(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_127);
    UnderlyingInstrument_127.insert(UnderlyingSettlementType_127.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_127;
    UnderlyingStartValue_127.setString("15743560");
    noUnderlyings_0_0.set(UnderlyingStartValue_127);
    UnderlyingInstrument_127.insert(UnderlyingStartValue_127.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_127("STRING_1961269403");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_127);
    UnderlyingInstrument_127.insert(UnderlyingStateOrProvinceOfIssue_127.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_127("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_127);
    UnderlyingInstrument_127.insert(UnderlyingStrikeCurrency_127.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_127;
    UnderlyingStrikePrice_127.setString("2452894");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_127);
    UnderlyingInstrument_127.insert(UnderlyingStrikePrice_127.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_127("STRING_1392181293");
    noUnderlyings_0_0.set(UnderlyingSymbol_127);
    UnderlyingInstrument_127.insert(UnderlyingSymbol_127.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_127("STRING_889713530");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_127);
    UnderlyingInstrument_127.insert(UnderlyingSymbolSfx_127.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_127("STRING_2141573853");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_127);
    UnderlyingInstrument_127.insert(UnderlyingTimeUnit_127.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_127("STRING_2051914713");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_127);
    UnderlyingInstrument_127.insert(UnderlyingUnitOfMeasure_127.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_127;
    UnderlyingUnitOfMeasureQty_127.setString("15454829");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_127);
    UnderlyingInstrument_127.insert(UnderlyingUnitOfMeasureQty_127.getString());
    all_values.push_back(UnderlyingInstrument_127);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_252;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_252("STRING_439682255");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_252);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_252.insert(UnderlyingSecurityAltID_252.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_252("STRING_474481253");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_252);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_252.insert(UnderlyingSecurityAltIDSource_252.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_252);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_253;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_253("STRING_1478616388");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_253);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_253.insert(UnderlyingSecurityAltID_253.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_253("STRING_1792421029");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_253);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_253.insert(UnderlyingSecurityAltIDSource_253.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_253);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_254;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_254("STRING_127009222");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_254);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_254.insert(UnderlyingSecurityAltID_254.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_254("STRING_480443368");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_254);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_254.insert(UnderlyingSecurityAltIDSource_254.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_254);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_245;
      FIX::UnderlyingStipType UnderlyingStipType_245("STRING_196558067");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_245);
      UnderlyingStipulations_NoUnderlyingStips_245.insert(UnderlyingStipType_245.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_245("STRING_720856162");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_245);
      UnderlyingStipulations_NoUnderlyingStips_245.insert(UnderlyingStipValue_245.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_245);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_246;
      FIX::UnderlyingStipType UnderlyingStipType_246("STRING_1978289047");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_246);
      UnderlyingStipulations_NoUnderlyingStips_246.insert(UnderlyingStipType_246.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_246("STRING_1000656848");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_246);
      UnderlyingStipulations_NoUnderlyingStips_246.insert(UnderlyingStipValue_246.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_246);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_256;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_256("STRING_508420188");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_256);
      UndlyInstrumentParties_NoUndlyInstrumentParties_256.insert(UnderlyingInstrumentPartyID_256.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_256('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_256);
      UndlyInstrumentParties_NoUndlyInstrumentParties_256.insert(UnderlyingInstrumentPartyIDSource_256.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_256(2094638798);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_256);
      UndlyInstrumentParties_NoUndlyInstrumentParties_256.insert(UnderlyingInstrumentPartyRole_256.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_256);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_507("STRING_1206558200");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_507);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507.insert(UnderlyingInstrumentPartySubID_507.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_507(303841316);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_507);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507.insert(UnderlyingInstrumentPartySubIDType_507.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_508("STRING_1834441426");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_508);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508.insert(UnderlyingInstrumentPartySubID_508.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_508(933047390);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_508);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508.insert(UnderlyingInstrumentPartySubIDType_508.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_257;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_257("STRING_1878197381");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_257);
      UndlyInstrumentParties_NoUndlyInstrumentParties_257.insert(UnderlyingInstrumentPartyID_257.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_257('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_257);
      UndlyInstrumentParties_NoUndlyInstrumentParties_257.insert(UnderlyingInstrumentPartyIDSource_257.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_257(1805445930);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_257);
      UndlyInstrumentParties_NoUndlyInstrumentParties_257.insert(UnderlyingInstrumentPartyRole_257.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_257);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_509("STRING_1893516680");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_509);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509.insert(UnderlyingInstrumentPartySubID_509.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_509(1050143575);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_509);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509.insert(UnderlyingInstrumentPartySubIDType_509.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_25;
  FIX::Yield Yield_25;
  Yield_25.setString("48.180000");
  msg.set(Yield_25);
  YieldData_25.insert(Yield_25.getString());
  FIX::YieldCalcDate YieldCalcDate_25("LOCALMKTDATE_1887606885");
  msg.set(YieldCalcDate_25);
  YieldData_25.insert(YieldCalcDate_25.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_25("LOCALMKTDATE_954574640");
  msg.set(YieldRedemptionDate_25);
  YieldData_25.insert(YieldRedemptionDate_25.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_25;
  YieldRedemptionPrice_25.setString("7779341");
  msg.set(YieldRedemptionPrice_25);
  YieldData_25.insert(YieldRedemptionPrice_25.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_25(1663379482);
  msg.set(YieldRedemptionPriceType_25);
  YieldData_25.insert(YieldRedemptionPriceType_25.getString());
  FIX::YieldType YieldType_25("STRING_PUT");
  msg.set(YieldType_25);
  YieldData_25.insert(YieldType_25.getString());
  all_values.push_back(YieldData_25);


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
