#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityDefinition.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinition, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityDefinition msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityDefinition_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_20("LOCALMKTDATE_502399714");
  msg.set(ClearingBusinessDate_20);
  SecurityDefinition_0.insert(ClearingBusinessDate_20.getString());
  FIX::CorporateAction CorporateAction_7("MULTIPLECHARVALUE_C");
  msg.set(CorporateAction_7);
  SecurityDefinition_0.insert(CorporateAction_7.getString());
  FIX::Currency Currency_59("GBP");
  msg.set(Currency_59);
  SecurityDefinition_0.insert(Currency_59.getString());
  FIX::EncodedText EncodedText_75("DATA_466014042");
  msg.set(EncodedText_75);
  SecurityDefinition_0.insert(EncodedText_75.getString());
  FIX::EncodedTextLen EncodedTextLen_75(138820566);
  msg.set(EncodedTextLen_75);
  SecurityDefinition_0.insert(EncodedTextLen_75.getString());
  FIX::SecurityReportID SecurityReportID_1(483217468);
  msg.set(SecurityReportID_1);
  SecurityDefinition_0.insert(SecurityReportID_1.getString());
  FIX::SecurityReqID SecurityReqID_3("STRING_1912053582");
  msg.set(SecurityReqID_3);
  SecurityDefinition_0.insert(SecurityReqID_3.getString());
  FIX::SecurityResponseID SecurityResponseID_2("STRING_478943701");
  msg.set(SecurityResponseID_2);
  SecurityDefinition_0.insert(SecurityResponseID_2.getString());
  FIX::SecurityResponseType SecurityResponseType_0(3);
  msg.set(SecurityResponseType_0);
  SecurityDefinition_0.insert(SecurityResponseType_0.getString());
  FIX::Text Text_75("STRING_1353803031");
  msg.set(Text_75);
  SecurityDefinition_0.insert(Text_75.getString());
  FIX::TransactTime TransactTime_60(FIX::UTCTIMESTAMP(9, 14, 59, 17, 2, 2010));
  msg.set(TransactTime_60);
  SecurityDefinition_0.insert(TransactTime_60.getString());
  all_values.push_back(SecurityDefinition_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_12;
  FIX::ApplID ApplID_12("STRING_477569520");
  msg.set(ApplID_12);
  ApplicationSequenceControl_12.insert(ApplID_12.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_12(818992897);
  msg.set(ApplLastSeqNum_12);
  ApplicationSequenceControl_12.insert(ApplLastSeqNum_12.getString());
  FIX::ApplResendFlag ApplResendFlag_12(false);
  msg.set(ApplResendFlag_12);
  ApplicationSequenceControl_12.insert(ApplResendFlag_12.getString());
  FIX::ApplSeqNum ApplSeqNum_12(666749736);
  msg.set(ApplSeqNum_12);
  ApplicationSequenceControl_12.insert(ApplSeqNum_12.getString());
  all_values.push_back(ApplicationSequenceControl_12);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinition::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_124;
    FIX::EncodedLegIssuer EncodedLegIssuer_124("DATA_87887512");
    noLegs_0_0.set(EncodedLegIssuer_124);
    InstrumentLeg_124.insert(EncodedLegIssuer_124.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_124(786615537);
    noLegs_0_0.set(EncodedLegIssuerLen_124);
    InstrumentLeg_124.insert(EncodedLegIssuerLen_124.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_124("DATA_1579682824");
    noLegs_0_0.set(EncodedLegSecurityDesc_124);
    InstrumentLeg_124.insert(EncodedLegSecurityDesc_124.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_124(112286960);
    noLegs_0_0.set(EncodedLegSecurityDescLen_124);
    InstrumentLeg_124.insert(EncodedLegSecurityDescLen_124.getString());
    FIX::LegCFICode LegCFICode_124("STRING_1810023574");
    noLegs_0_0.set(LegCFICode_124);
    InstrumentLeg_124.insert(LegCFICode_124.getString());
    FIX::LegContractMultiplier LegContractMultiplier_124;
    LegContractMultiplier_124.setString("16766203");
    noLegs_0_0.set(LegContractMultiplier_124);
    InstrumentLeg_124.insert(LegContractMultiplier_124.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_124(1951210171);
    noLegs_0_0.set(LegContractMultiplierUnit_124);
    InstrumentLeg_124.insert(LegContractMultiplierUnit_124.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_124("MONTHYEAR_261002207");
    noLegs_0_0.set(LegContractSettlMonth_124);
    InstrumentLeg_124.insert(LegContractSettlMonth_124.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_124("COUNTRY_31536370");
    noLegs_0_0.set(LegCountryOfIssue_124);
    InstrumentLeg_124.insert(LegCountryOfIssue_124.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_124("LOCALMKTDATE_481371041");
    noLegs_0_0.set(LegCouponPaymentDate_124);
    InstrumentLeg_124.insert(LegCouponPaymentDate_124.getString());
    FIX::LegCouponRate LegCouponRate_124;
    LegCouponRate_124.setString("35.330000");
    noLegs_0_0.set(LegCouponRate_124);
    InstrumentLeg_124.insert(LegCouponRate_124.getString());
    FIX::LegCreditRating LegCreditRating_124("STRING_676021285");
    noLegs_0_0.set(LegCreditRating_124);
    InstrumentLeg_124.insert(LegCreditRating_124.getString());
    FIX::LegCurrency LegCurrency_124("EUR");
    noLegs_0_0.set(LegCurrency_124);
    InstrumentLeg_124.insert(LegCurrency_124.getString());
    FIX::LegDatedDate LegDatedDate_124("LOCALMKTDATE_1159238753");
    noLegs_0_0.set(LegDatedDate_124);
    InstrumentLeg_124.insert(LegDatedDate_124.getString());
    FIX::LegExerciseStyle LegExerciseStyle_124(711955017);
    noLegs_0_0.set(LegExerciseStyle_124);
    InstrumentLeg_124.insert(LegExerciseStyle_124.getString());
    FIX::LegFactor LegFactor_124;
    LegFactor_124.setString("1572941");
    noLegs_0_0.set(LegFactor_124);
    InstrumentLeg_124.insert(LegFactor_124.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_124(2132896963);
    noLegs_0_0.set(LegFlowScheduleType_124);
    InstrumentLeg_124.insert(LegFlowScheduleType_124.getString());
    FIX::LegInstrRegistry LegInstrRegistry_124("STRING_2065758048");
    noLegs_0_0.set(LegInstrRegistry_124);
    InstrumentLeg_124.insert(LegInstrRegistry_124.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_124("LOCALMKTDATE_1021952607");
    noLegs_0_0.set(LegInterestAccrualDate_124);
    InstrumentLeg_124.insert(LegInterestAccrualDate_124.getString());
    FIX::LegIssueDate LegIssueDate_124("LOCALMKTDATE_966762621");
    noLegs_0_0.set(LegIssueDate_124);
    InstrumentLeg_124.insert(LegIssueDate_124.getString());
    FIX::LegIssuer LegIssuer_124("STRING_2017060195");
    noLegs_0_0.set(LegIssuer_124);
    InstrumentLeg_124.insert(LegIssuer_124.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_124("STRING_1822350447");
    noLegs_0_0.set(LegLocaleOfIssue_124);
    InstrumentLeg_124.insert(LegLocaleOfIssue_124.getString());
    FIX::LegMaturityDate LegMaturityDate_124("LOCALMKTDATE_456570954");
    noLegs_0_0.set(LegMaturityDate_124);
    InstrumentLeg_124.insert(LegMaturityDate_124.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_124("MONTHYEAR_659110956");
    noLegs_0_0.set(LegMaturityMonthYear_124);
    InstrumentLeg_124.insert(LegMaturityMonthYear_124.getString());
    FIX::LegMaturityTime LegMaturityTime_124("TZTIMEONLY_1606002965");
    noLegs_0_0.set(LegMaturityTime_124);
    InstrumentLeg_124.insert(LegMaturityTime_124.getString());
    FIX::LegOptAttribute LegOptAttribute_124('9');
    noLegs_0_0.set(LegOptAttribute_124);
    InstrumentLeg_124.insert(LegOptAttribute_124.getString());
    FIX::LegOptionRatio LegOptionRatio_124;
    LegOptionRatio_124.setString("14781038");
    noLegs_0_0.set(LegOptionRatio_124);
    InstrumentLeg_124.insert(LegOptionRatio_124.getString());
    FIX::LegPool LegPool_124("STRING_1218131444");
    noLegs_0_0.set(LegPool_124);
    InstrumentLeg_124.insert(LegPool_124.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_124("STRING_1600890210");
    noLegs_0_0.set(LegPriceUnitOfMeasure_124);
    InstrumentLeg_124.insert(LegPriceUnitOfMeasure_124.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_124;
    LegPriceUnitOfMeasureQty_124.setString("2754480");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_124);
    InstrumentLeg_124.insert(LegPriceUnitOfMeasureQty_124.getString());
    FIX::LegProduct LegProduct_124(1306018957);
    noLegs_0_0.set(LegProduct_124);
    InstrumentLeg_124.insert(LegProduct_124.getString());
    FIX::LegPutOrCall LegPutOrCall_124(240022100);
    noLegs_0_0.set(LegPutOrCall_124);
    InstrumentLeg_124.insert(LegPutOrCall_124.getString());
    FIX::LegRatioQty LegRatioQty_124;
    LegRatioQty_124.setString("18551309");
    noLegs_0_0.set(LegRatioQty_124);
    InstrumentLeg_124.insert(LegRatioQty_124.getString());
    FIX::LegRedemptionDate LegRedemptionDate_124("LOCALMKTDATE_1418305917");
    noLegs_0_0.set(LegRedemptionDate_124);
    InstrumentLeg_124.insert(LegRedemptionDate_124.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_124("STRING_2050045674");
    noLegs_0_0.set(LegRepoCollateralSecurityType_124);
    InstrumentLeg_124.insert(LegRepoCollateralSecurityType_124.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_124;
    LegRepurchaseRate_124.setString("75.780000");
    noLegs_0_0.set(LegRepurchaseRate_124);
    InstrumentLeg_124.insert(LegRepurchaseRate_124.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_124(1222032441);
    noLegs_0_0.set(LegRepurchaseTerm_124);
    InstrumentLeg_124.insert(LegRepurchaseTerm_124.getString());
    FIX::LegSecurityDesc LegSecurityDesc_124("STRING_163564233");
    noLegs_0_0.set(LegSecurityDesc_124);
    InstrumentLeg_124.insert(LegSecurityDesc_124.getString());
    FIX::LegSecurityExchange LegSecurityExchange_124("EXCHANGE_1415803949");
    noLegs_0_0.set(LegSecurityExchange_124);
    InstrumentLeg_124.insert(LegSecurityExchange_124.getString());
    FIX::LegSecurityID LegSecurityID_124("STRING_1703403482");
    noLegs_0_0.set(LegSecurityID_124);
    InstrumentLeg_124.insert(LegSecurityID_124.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_124("STRING_1850577766");
    noLegs_0_0.set(LegSecurityIDSource_124);
    InstrumentLeg_124.insert(LegSecurityIDSource_124.getString());
    FIX::LegSecuritySubType LegSecuritySubType_124("STRING_2091825234");
    noLegs_0_0.set(LegSecuritySubType_124);
    InstrumentLeg_124.insert(LegSecuritySubType_124.getString());
    FIX::LegSecurityType LegSecurityType_124("STRING_503304917");
    noLegs_0_0.set(LegSecurityType_124);
    InstrumentLeg_124.insert(LegSecurityType_124.getString());
    FIX::LegSide LegSide_124('1');
    noLegs_0_0.set(LegSide_124);
    InstrumentLeg_124.insert(LegSide_124.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_124("STRING_1103580339");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_124);
    InstrumentLeg_124.insert(LegStateOrProvinceOfIssue_124.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_124("CHF");
    noLegs_0_0.set(LegStrikeCurrency_124);
    InstrumentLeg_124.insert(LegStrikeCurrency_124.getString());
    FIX::LegStrikePrice LegStrikePrice_124;
    LegStrikePrice_124.setString("10889936");
    noLegs_0_0.set(LegStrikePrice_124);
    InstrumentLeg_124.insert(LegStrikePrice_124.getString());
    FIX::LegSymbol LegSymbol_124("STRING_1133534334");
    noLegs_0_0.set(LegSymbol_124);
    InstrumentLeg_124.insert(LegSymbol_124.getString());
    FIX::LegSymbolSfx LegSymbolSfx_124("STRING_560691329");
    noLegs_0_0.set(LegSymbolSfx_124);
    InstrumentLeg_124.insert(LegSymbolSfx_124.getString());
    FIX::LegTimeUnit LegTimeUnit_124("STRING_2055756275");
    noLegs_0_0.set(LegTimeUnit_124);
    InstrumentLeg_124.insert(LegTimeUnit_124.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_124("STRING_1003110881");
    noLegs_0_0.set(LegUnitOfMeasure_124);
    InstrumentLeg_124.insert(LegUnitOfMeasure_124.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_124;
    LegUnitOfMeasureQty_124.setString("2355581");
    noLegs_0_0.set(LegUnitOfMeasureQty_124);
    InstrumentLeg_124.insert(LegUnitOfMeasureQty_124.getString());
    all_values.push_back(InstrumentLeg_124);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_240;
      FIX::LegSecurityAltID LegSecurityAltID_240("STRING_1662221838");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_240);
      LegSecAltIDGrp_NoLegSecurityAltID_240.insert(LegSecurityAltID_240.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_240("STRING_1841561093");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_240);
      LegSecAltIDGrp_NoLegSecurityAltID_240.insert(LegSecurityAltIDSource_240.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_240);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_125;
    FIX::EncodedLegIssuer EncodedLegIssuer_125("DATA_1298984056");
    noLegs_0_1.set(EncodedLegIssuer_125);
    InstrumentLeg_125.insert(EncodedLegIssuer_125.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_125(992842044);
    noLegs_0_1.set(EncodedLegIssuerLen_125);
    InstrumentLeg_125.insert(EncodedLegIssuerLen_125.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_125("DATA_912208889");
    noLegs_0_1.set(EncodedLegSecurityDesc_125);
    InstrumentLeg_125.insert(EncodedLegSecurityDesc_125.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_125(752390618);
    noLegs_0_1.set(EncodedLegSecurityDescLen_125);
    InstrumentLeg_125.insert(EncodedLegSecurityDescLen_125.getString());
    FIX::LegCFICode LegCFICode_125("STRING_1268290142");
    noLegs_0_1.set(LegCFICode_125);
    InstrumentLeg_125.insert(LegCFICode_125.getString());
    FIX::LegContractMultiplier LegContractMultiplier_125;
    LegContractMultiplier_125.setString("707441");
    noLegs_0_1.set(LegContractMultiplier_125);
    InstrumentLeg_125.insert(LegContractMultiplier_125.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_125(992412718);
    noLegs_0_1.set(LegContractMultiplierUnit_125);
    InstrumentLeg_125.insert(LegContractMultiplierUnit_125.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_125("MONTHYEAR_975937416");
    noLegs_0_1.set(LegContractSettlMonth_125);
    InstrumentLeg_125.insert(LegContractSettlMonth_125.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_125("COUNTRY_1489050116");
    noLegs_0_1.set(LegCountryOfIssue_125);
    InstrumentLeg_125.insert(LegCountryOfIssue_125.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_125("LOCALMKTDATE_894974744");
    noLegs_0_1.set(LegCouponPaymentDate_125);
    InstrumentLeg_125.insert(LegCouponPaymentDate_125.getString());
    FIX::LegCouponRate LegCouponRate_125;
    LegCouponRate_125.setString("13.470000");
    noLegs_0_1.set(LegCouponRate_125);
    InstrumentLeg_125.insert(LegCouponRate_125.getString());
    FIX::LegCreditRating LegCreditRating_125("STRING_563598909");
    noLegs_0_1.set(LegCreditRating_125);
    InstrumentLeg_125.insert(LegCreditRating_125.getString());
    FIX::LegCurrency LegCurrency_125("JPY");
    noLegs_0_1.set(LegCurrency_125);
    InstrumentLeg_125.insert(LegCurrency_125.getString());
    FIX::LegDatedDate LegDatedDate_125("LOCALMKTDATE_119518743");
    noLegs_0_1.set(LegDatedDate_125);
    InstrumentLeg_125.insert(LegDatedDate_125.getString());
    FIX::LegExerciseStyle LegExerciseStyle_125(761633096);
    noLegs_0_1.set(LegExerciseStyle_125);
    InstrumentLeg_125.insert(LegExerciseStyle_125.getString());
    FIX::LegFactor LegFactor_125;
    LegFactor_125.setString("15728668");
    noLegs_0_1.set(LegFactor_125);
    InstrumentLeg_125.insert(LegFactor_125.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_125(622823660);
    noLegs_0_1.set(LegFlowScheduleType_125);
    InstrumentLeg_125.insert(LegFlowScheduleType_125.getString());
    FIX::LegInstrRegistry LegInstrRegistry_125("STRING_143077666");
    noLegs_0_1.set(LegInstrRegistry_125);
    InstrumentLeg_125.insert(LegInstrRegistry_125.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_125("LOCALMKTDATE_528963573");
    noLegs_0_1.set(LegInterestAccrualDate_125);
    InstrumentLeg_125.insert(LegInterestAccrualDate_125.getString());
    FIX::LegIssueDate LegIssueDate_125("LOCALMKTDATE_1838083594");
    noLegs_0_1.set(LegIssueDate_125);
    InstrumentLeg_125.insert(LegIssueDate_125.getString());
    FIX::LegIssuer LegIssuer_125("STRING_1829300035");
    noLegs_0_1.set(LegIssuer_125);
    InstrumentLeg_125.insert(LegIssuer_125.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_125("STRING_1617957227");
    noLegs_0_1.set(LegLocaleOfIssue_125);
    InstrumentLeg_125.insert(LegLocaleOfIssue_125.getString());
    FIX::LegMaturityDate LegMaturityDate_125("LOCALMKTDATE_824134280");
    noLegs_0_1.set(LegMaturityDate_125);
    InstrumentLeg_125.insert(LegMaturityDate_125.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_125("MONTHYEAR_242507716");
    noLegs_0_1.set(LegMaturityMonthYear_125);
    InstrumentLeg_125.insert(LegMaturityMonthYear_125.getString());
    FIX::LegMaturityTime LegMaturityTime_125("TZTIMEONLY_1526229855");
    noLegs_0_1.set(LegMaturityTime_125);
    InstrumentLeg_125.insert(LegMaturityTime_125.getString());
    FIX::LegOptAttribute LegOptAttribute_125('1');
    noLegs_0_1.set(LegOptAttribute_125);
    InstrumentLeg_125.insert(LegOptAttribute_125.getString());
    FIX::LegOptionRatio LegOptionRatio_125;
    LegOptionRatio_125.setString("4780658");
    noLegs_0_1.set(LegOptionRatio_125);
    InstrumentLeg_125.insert(LegOptionRatio_125.getString());
    FIX::LegPool LegPool_125("STRING_1891073436");
    noLegs_0_1.set(LegPool_125);
    InstrumentLeg_125.insert(LegPool_125.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_125("STRING_1341983352");
    noLegs_0_1.set(LegPriceUnitOfMeasure_125);
    InstrumentLeg_125.insert(LegPriceUnitOfMeasure_125.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_125;
    LegPriceUnitOfMeasureQty_125.setString("1721432");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_125);
    InstrumentLeg_125.insert(LegPriceUnitOfMeasureQty_125.getString());
    FIX::LegProduct LegProduct_125(1042573844);
    noLegs_0_1.set(LegProduct_125);
    InstrumentLeg_125.insert(LegProduct_125.getString());
    FIX::LegPutOrCall LegPutOrCall_125(187341748);
    noLegs_0_1.set(LegPutOrCall_125);
    InstrumentLeg_125.insert(LegPutOrCall_125.getString());
    FIX::LegRatioQty LegRatioQty_125;
    LegRatioQty_125.setString("10843521");
    noLegs_0_1.set(LegRatioQty_125);
    InstrumentLeg_125.insert(LegRatioQty_125.getString());
    FIX::LegRedemptionDate LegRedemptionDate_125("LOCALMKTDATE_1794964463");
    noLegs_0_1.set(LegRedemptionDate_125);
    InstrumentLeg_125.insert(LegRedemptionDate_125.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_125("STRING_1455631890");
    noLegs_0_1.set(LegRepoCollateralSecurityType_125);
    InstrumentLeg_125.insert(LegRepoCollateralSecurityType_125.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_125;
    LegRepurchaseRate_125.setString("63.770000");
    noLegs_0_1.set(LegRepurchaseRate_125);
    InstrumentLeg_125.insert(LegRepurchaseRate_125.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_125(639893533);
    noLegs_0_1.set(LegRepurchaseTerm_125);
    InstrumentLeg_125.insert(LegRepurchaseTerm_125.getString());
    FIX::LegSecurityDesc LegSecurityDesc_125("STRING_284085658");
    noLegs_0_1.set(LegSecurityDesc_125);
    InstrumentLeg_125.insert(LegSecurityDesc_125.getString());
    FIX::LegSecurityExchange LegSecurityExchange_125("EXCHANGE_496662845");
    noLegs_0_1.set(LegSecurityExchange_125);
    InstrumentLeg_125.insert(LegSecurityExchange_125.getString());
    FIX::LegSecurityID LegSecurityID_125("STRING_1534868278");
    noLegs_0_1.set(LegSecurityID_125);
    InstrumentLeg_125.insert(LegSecurityID_125.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_125("STRING_496807005");
    noLegs_0_1.set(LegSecurityIDSource_125);
    InstrumentLeg_125.insert(LegSecurityIDSource_125.getString());
    FIX::LegSecuritySubType LegSecuritySubType_125("STRING_1060261754");
    noLegs_0_1.set(LegSecuritySubType_125);
    InstrumentLeg_125.insert(LegSecuritySubType_125.getString());
    FIX::LegSecurityType LegSecurityType_125("STRING_445923608");
    noLegs_0_1.set(LegSecurityType_125);
    InstrumentLeg_125.insert(LegSecurityType_125.getString());
    FIX::LegSide LegSide_125('2');
    noLegs_0_1.set(LegSide_125);
    InstrumentLeg_125.insert(LegSide_125.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_125("STRING_1179780497");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_125);
    InstrumentLeg_125.insert(LegStateOrProvinceOfIssue_125.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_125("EUR");
    noLegs_0_1.set(LegStrikeCurrency_125);
    InstrumentLeg_125.insert(LegStrikeCurrency_125.getString());
    FIX::LegStrikePrice LegStrikePrice_125;
    LegStrikePrice_125.setString("18026041");
    noLegs_0_1.set(LegStrikePrice_125);
    InstrumentLeg_125.insert(LegStrikePrice_125.getString());
    FIX::LegSymbol LegSymbol_125("STRING_1350634370");
    noLegs_0_1.set(LegSymbol_125);
    InstrumentLeg_125.insert(LegSymbol_125.getString());
    FIX::LegSymbolSfx LegSymbolSfx_125("STRING_2079679108");
    noLegs_0_1.set(LegSymbolSfx_125);
    InstrumentLeg_125.insert(LegSymbolSfx_125.getString());
    FIX::LegTimeUnit LegTimeUnit_125("STRING_1493204103");
    noLegs_0_1.set(LegTimeUnit_125);
    InstrumentLeg_125.insert(LegTimeUnit_125.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_125("STRING_1032450758");
    noLegs_0_1.set(LegUnitOfMeasure_125);
    InstrumentLeg_125.insert(LegUnitOfMeasure_125.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_125;
    LegUnitOfMeasureQty_125.setString("15501526");
    noLegs_0_1.set(LegUnitOfMeasureQty_125);
    InstrumentLeg_125.insert(LegUnitOfMeasureQty_125.getString());
    all_values.push_back(InstrumentLeg_125);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_241;
      FIX::LegSecurityAltID LegSecurityAltID_241("STRING_1274958474");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_241);
      LegSecAltIDGrp_NoLegSecurityAltID_241.insert(LegSecurityAltID_241.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_241("STRING_928898895");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_241);
      LegSecAltIDGrp_NoLegSecurityAltID_241.insert(LegSecurityAltIDSource_241.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_241);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_242;
      FIX::LegSecurityAltID LegSecurityAltID_242("STRING_1997099898");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_242);
      LegSecAltIDGrp_NoLegSecurityAltID_242.insert(LegSecurityAltID_242.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_242("STRING_1753024319");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_242);
      LegSecAltIDGrp_NoLegSecurityAltID_242.insert(LegSecurityAltIDSource_242.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_242);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::SecurityDefinition::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_126;
    FIX::EncodedLegIssuer EncodedLegIssuer_126("DATA_672488683");
    noLegs_0_2.set(EncodedLegIssuer_126);
    InstrumentLeg_126.insert(EncodedLegIssuer_126.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_126(1191599602);
    noLegs_0_2.set(EncodedLegIssuerLen_126);
    InstrumentLeg_126.insert(EncodedLegIssuerLen_126.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_126("DATA_1925167608");
    noLegs_0_2.set(EncodedLegSecurityDesc_126);
    InstrumentLeg_126.insert(EncodedLegSecurityDesc_126.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_126(1715062528);
    noLegs_0_2.set(EncodedLegSecurityDescLen_126);
    InstrumentLeg_126.insert(EncodedLegSecurityDescLen_126.getString());
    FIX::LegCFICode LegCFICode_126("STRING_1378941350");
    noLegs_0_2.set(LegCFICode_126);
    InstrumentLeg_126.insert(LegCFICode_126.getString());
    FIX::LegContractMultiplier LegContractMultiplier_126;
    LegContractMultiplier_126.setString("8620361");
    noLegs_0_2.set(LegContractMultiplier_126);
    InstrumentLeg_126.insert(LegContractMultiplier_126.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_126(1362543343);
    noLegs_0_2.set(LegContractMultiplierUnit_126);
    InstrumentLeg_126.insert(LegContractMultiplierUnit_126.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_126("MONTHYEAR_687089592");
    noLegs_0_2.set(LegContractSettlMonth_126);
    InstrumentLeg_126.insert(LegContractSettlMonth_126.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_126("COUNTRY_2017132517");
    noLegs_0_2.set(LegCountryOfIssue_126);
    InstrumentLeg_126.insert(LegCountryOfIssue_126.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_126("LOCALMKTDATE_2002436876");
    noLegs_0_2.set(LegCouponPaymentDate_126);
    InstrumentLeg_126.insert(LegCouponPaymentDate_126.getString());
    FIX::LegCouponRate LegCouponRate_126;
    LegCouponRate_126.setString("52.500000");
    noLegs_0_2.set(LegCouponRate_126);
    InstrumentLeg_126.insert(LegCouponRate_126.getString());
    FIX::LegCreditRating LegCreditRating_126("STRING_366311714");
    noLegs_0_2.set(LegCreditRating_126);
    InstrumentLeg_126.insert(LegCreditRating_126.getString());
    FIX::LegCurrency LegCurrency_126("GBP");
    noLegs_0_2.set(LegCurrency_126);
    InstrumentLeg_126.insert(LegCurrency_126.getString());
    FIX::LegDatedDate LegDatedDate_126("LOCALMKTDATE_1426573469");
    noLegs_0_2.set(LegDatedDate_126);
    InstrumentLeg_126.insert(LegDatedDate_126.getString());
    FIX::LegExerciseStyle LegExerciseStyle_126(1835745114);
    noLegs_0_2.set(LegExerciseStyle_126);
    InstrumentLeg_126.insert(LegExerciseStyle_126.getString());
    FIX::LegFactor LegFactor_126;
    LegFactor_126.setString("14458309");
    noLegs_0_2.set(LegFactor_126);
    InstrumentLeg_126.insert(LegFactor_126.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_126(458870318);
    noLegs_0_2.set(LegFlowScheduleType_126);
    InstrumentLeg_126.insert(LegFlowScheduleType_126.getString());
    FIX::LegInstrRegistry LegInstrRegistry_126("STRING_895818171");
    noLegs_0_2.set(LegInstrRegistry_126);
    InstrumentLeg_126.insert(LegInstrRegistry_126.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_126("LOCALMKTDATE_849062797");
    noLegs_0_2.set(LegInterestAccrualDate_126);
    InstrumentLeg_126.insert(LegInterestAccrualDate_126.getString());
    FIX::LegIssueDate LegIssueDate_126("LOCALMKTDATE_113990828");
    noLegs_0_2.set(LegIssueDate_126);
    InstrumentLeg_126.insert(LegIssueDate_126.getString());
    FIX::LegIssuer LegIssuer_126("STRING_98968893");
    noLegs_0_2.set(LegIssuer_126);
    InstrumentLeg_126.insert(LegIssuer_126.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_126("STRING_781258257");
    noLegs_0_2.set(LegLocaleOfIssue_126);
    InstrumentLeg_126.insert(LegLocaleOfIssue_126.getString());
    FIX::LegMaturityDate LegMaturityDate_126("LOCALMKTDATE_1607194931");
    noLegs_0_2.set(LegMaturityDate_126);
    InstrumentLeg_126.insert(LegMaturityDate_126.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_126("MONTHYEAR_1131419651");
    noLegs_0_2.set(LegMaturityMonthYear_126);
    InstrumentLeg_126.insert(LegMaturityMonthYear_126.getString());
    FIX::LegMaturityTime LegMaturityTime_126("TZTIMEONLY_183927297");
    noLegs_0_2.set(LegMaturityTime_126);
    InstrumentLeg_126.insert(LegMaturityTime_126.getString());
    FIX::LegOptAttribute LegOptAttribute_126('1');
    noLegs_0_2.set(LegOptAttribute_126);
    InstrumentLeg_126.insert(LegOptAttribute_126.getString());
    FIX::LegOptionRatio LegOptionRatio_126;
    LegOptionRatio_126.setString("2588944");
    noLegs_0_2.set(LegOptionRatio_126);
    InstrumentLeg_126.insert(LegOptionRatio_126.getString());
    FIX::LegPool LegPool_126("STRING_1112826192");
    noLegs_0_2.set(LegPool_126);
    InstrumentLeg_126.insert(LegPool_126.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_126("STRING_1626665917");
    noLegs_0_2.set(LegPriceUnitOfMeasure_126);
    InstrumentLeg_126.insert(LegPriceUnitOfMeasure_126.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_126;
    LegPriceUnitOfMeasureQty_126.setString("20119187");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_126);
    InstrumentLeg_126.insert(LegPriceUnitOfMeasureQty_126.getString());
    FIX::LegProduct LegProduct_126(1785314876);
    noLegs_0_2.set(LegProduct_126);
    InstrumentLeg_126.insert(LegProduct_126.getString());
    FIX::LegPutOrCall LegPutOrCall_126(670781871);
    noLegs_0_2.set(LegPutOrCall_126);
    InstrumentLeg_126.insert(LegPutOrCall_126.getString());
    FIX::LegRatioQty LegRatioQty_126;
    LegRatioQty_126.setString("17896027");
    noLegs_0_2.set(LegRatioQty_126);
    InstrumentLeg_126.insert(LegRatioQty_126.getString());
    FIX::LegRedemptionDate LegRedemptionDate_126("LOCALMKTDATE_1352893756");
    noLegs_0_2.set(LegRedemptionDate_126);
    InstrumentLeg_126.insert(LegRedemptionDate_126.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_126("STRING_2049723221");
    noLegs_0_2.set(LegRepoCollateralSecurityType_126);
    InstrumentLeg_126.insert(LegRepoCollateralSecurityType_126.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_126;
    LegRepurchaseRate_126.setString("52.490000");
    noLegs_0_2.set(LegRepurchaseRate_126);
    InstrumentLeg_126.insert(LegRepurchaseRate_126.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_126(567953451);
    noLegs_0_2.set(LegRepurchaseTerm_126);
    InstrumentLeg_126.insert(LegRepurchaseTerm_126.getString());
    FIX::LegSecurityDesc LegSecurityDesc_126("STRING_589329165");
    noLegs_0_2.set(LegSecurityDesc_126);
    InstrumentLeg_126.insert(LegSecurityDesc_126.getString());
    FIX::LegSecurityExchange LegSecurityExchange_126("EXCHANGE_373804118");
    noLegs_0_2.set(LegSecurityExchange_126);
    InstrumentLeg_126.insert(LegSecurityExchange_126.getString());
    FIX::LegSecurityID LegSecurityID_126("STRING_422906679");
    noLegs_0_2.set(LegSecurityID_126);
    InstrumentLeg_126.insert(LegSecurityID_126.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_126("STRING_1560504416");
    noLegs_0_2.set(LegSecurityIDSource_126);
    InstrumentLeg_126.insert(LegSecurityIDSource_126.getString());
    FIX::LegSecuritySubType LegSecuritySubType_126("STRING_740115832");
    noLegs_0_2.set(LegSecuritySubType_126);
    InstrumentLeg_126.insert(LegSecuritySubType_126.getString());
    FIX::LegSecurityType LegSecurityType_126("STRING_1812728186");
    noLegs_0_2.set(LegSecurityType_126);
    InstrumentLeg_126.insert(LegSecurityType_126.getString());
    FIX::LegSide LegSide_126('8');
    noLegs_0_2.set(LegSide_126);
    InstrumentLeg_126.insert(LegSide_126.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_126("STRING_19205653");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_126);
    InstrumentLeg_126.insert(LegStateOrProvinceOfIssue_126.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_126("EUR");
    noLegs_0_2.set(LegStrikeCurrency_126);
    InstrumentLeg_126.insert(LegStrikeCurrency_126.getString());
    FIX::LegStrikePrice LegStrikePrice_126;
    LegStrikePrice_126.setString("4780759");
    noLegs_0_2.set(LegStrikePrice_126);
    InstrumentLeg_126.insert(LegStrikePrice_126.getString());
    FIX::LegSymbol LegSymbol_126("STRING_249324175");
    noLegs_0_2.set(LegSymbol_126);
    InstrumentLeg_126.insert(LegSymbol_126.getString());
    FIX::LegSymbolSfx LegSymbolSfx_126("STRING_1028413082");
    noLegs_0_2.set(LegSymbolSfx_126);
    InstrumentLeg_126.insert(LegSymbolSfx_126.getString());
    FIX::LegTimeUnit LegTimeUnit_126("STRING_592066800");
    noLegs_0_2.set(LegTimeUnit_126);
    InstrumentLeg_126.insert(LegTimeUnit_126.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_126("STRING_348293069");
    noLegs_0_2.set(LegUnitOfMeasure_126);
    InstrumentLeg_126.insert(LegUnitOfMeasure_126.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_126;
    LegUnitOfMeasureQty_126.setString("18096713");
    noLegs_0_2.set(LegUnitOfMeasureQty_126);
    InstrumentLeg_126.insert(LegUnitOfMeasureQty_126.getString());
    all_values.push_back(InstrumentLeg_126);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_243;
      FIX::LegSecurityAltID LegSecurityAltID_243("STRING_1479712720");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_243);
      LegSecAltIDGrp_NoLegSecurityAltID_243.insert(LegSecurityAltID_243.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_243("STRING_1993598637");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_243);
      LegSecAltIDGrp_NoLegSecurityAltID_243.insert(LegSecurityAltIDSource_243.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_243);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_79;
  FIX::AttachmentPoint AttachmentPoint_79;
  AttachmentPoint_79.setString("77.510000");
  msg.set(AttachmentPoint_79);
  Instrument_79.insert(AttachmentPoint_79.getString());
  FIX::CFICode CFICode_79("STRING_1738607198");
  msg.set(CFICode_79);
  Instrument_79.insert(CFICode_79.getString());
  FIX::CPProgram CPProgram_79(99);
  msg.set(CPProgram_79);
  Instrument_79.insert(CPProgram_79.getString());
  FIX::CPRegType CPRegType_79("STRING_1308010020");
  msg.set(CPRegType_79);
  Instrument_79.insert(CPRegType_79.getString());
  FIX::CapPrice CapPrice_79;
  CapPrice_79.setString("16030423");
  msg.set(CapPrice_79);
  Instrument_79.insert(CapPrice_79.getString());
  FIX::ContractMultiplier ContractMultiplier_79;
  ContractMultiplier_79.setString("5967724");
  msg.set(ContractMultiplier_79);
  Instrument_79.insert(ContractMultiplier_79.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_79(1);
  msg.set(ContractMultiplierUnit_79);
  Instrument_79.insert(ContractMultiplierUnit_79.getString());
  FIX::ContractSettlMonth ContractSettlMonth_79("MONTHYEAR_1245161457");
  msg.set(ContractSettlMonth_79);
  Instrument_79.insert(ContractSettlMonth_79.getString());
  FIX::CountryOfIssue CountryOfIssue_79("COUNTRY_1949666166");
  msg.set(CountryOfIssue_79);
  Instrument_79.insert(CountryOfIssue_79.getString());
  FIX::CouponPaymentDate CouponPaymentDate_79("LOCALMKTDATE_1881031465");
  msg.set(CouponPaymentDate_79);
  Instrument_79.insert(CouponPaymentDate_79.getString());
  FIX::CouponRate CouponRate_79;
  CouponRate_79.setString("67.060000");
  msg.set(CouponRate_79);
  Instrument_79.insert(CouponRate_79.getString());
  FIX::CreditRating CreditRating_79("STRING_370135969");
  msg.set(CreditRating_79);
  Instrument_79.insert(CreditRating_79.getString());
  FIX::DatedDate DatedDate_79("LOCALMKTDATE_322876983");
  msg.set(DatedDate_79);
  Instrument_79.insert(DatedDate_79.getString());
  FIX::DetachmentPoint DetachmentPoint_79;
  DetachmentPoint_79.setString("8.240000");
  msg.set(DetachmentPoint_79);
  Instrument_79.insert(DetachmentPoint_79.getString());
  FIX::EncodedIssuer EncodedIssuer_79("DATA_793042648");
  msg.set(EncodedIssuer_79);
  Instrument_79.insert(EncodedIssuer_79.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_79(1883381399);
  msg.set(EncodedIssuerLen_79);
  Instrument_79.insert(EncodedIssuerLen_79.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_79("DATA_715753008");
  msg.set(EncodedSecurityDesc_79);
  Instrument_79.insert(EncodedSecurityDesc_79.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_79(458287186);
  msg.set(EncodedSecurityDescLen_79);
  Instrument_79.insert(EncodedSecurityDescLen_79.getString());
  FIX::ExerciseStyle ExerciseStyle_79(2);
  msg.set(ExerciseStyle_79);
  Instrument_79.insert(ExerciseStyle_79.getString());
  FIX::Factor Factor_79;
  Factor_79.setString("7349586");
  msg.set(Factor_79);
  Instrument_79.insert(Factor_79.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_79(false);
  msg.set(FlexProductEligibilityIndicator_79);
  Instrument_79.insert(FlexProductEligibilityIndicator_79.getString());
  FIX::FlexibleIndicator FlexibleIndicator_79(true);
  msg.set(FlexibleIndicator_79);
  Instrument_79.insert(FlexibleIndicator_79.getString());
  FIX::FloorPrice FloorPrice_79;
  FloorPrice_79.setString("12130346");
  msg.set(FloorPrice_79);
  Instrument_79.insert(FloorPrice_79.getString());
  FIX::FlowScheduleType FlowScheduleType_79(1);
  msg.set(FlowScheduleType_79);
  Instrument_79.insert(FlowScheduleType_79.getString());
  FIX::InstrRegistry InstrRegistry_79("STRING_1824664143");
  msg.set(InstrRegistry_79);
  Instrument_79.insert(InstrRegistry_79.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_79('1');
  msg.set(InstrmtAssignmentMethod_79);
  Instrument_79.insert(InstrmtAssignmentMethod_79.getString());
  FIX::InterestAccrualDate InterestAccrualDate_79("LOCALMKTDATE_409410435");
  msg.set(InterestAccrualDate_79);
  Instrument_79.insert(InterestAccrualDate_79.getString());
  FIX::IssueDate IssueDate_79("LOCALMKTDATE_1486851835");
  msg.set(IssueDate_79);
  Instrument_79.insert(IssueDate_79.getString());
  FIX::Issuer Issuer_79("STRING_1856879517");
  msg.set(Issuer_79);
  Instrument_79.insert(Issuer_79.getString());
  FIX::ListMethod ListMethod_79(0);
  msg.set(ListMethod_79);
  Instrument_79.insert(ListMethod_79.getString());
  FIX::LocaleOfIssue LocaleOfIssue_79("STRING_1332966824");
  msg.set(LocaleOfIssue_79);
  Instrument_79.insert(LocaleOfIssue_79.getString());
  FIX::MaturityDate MaturityDate_79("LOCALMKTDATE_1538223620");
  msg.set(MaturityDate_79);
  Instrument_79.insert(MaturityDate_79.getString());
  FIX::MaturityMonthYear MaturityMonthYear_79("MONTHYEAR_1480246706");
  msg.set(MaturityMonthYear_79);
  Instrument_79.insert(MaturityMonthYear_79.getString());
  FIX::MaturityTime MaturityTime_79("TZTIMEONLY_144424358");
  msg.set(MaturityTime_79);
  Instrument_79.insert(MaturityTime_79.getString());
  FIX::MinPriceIncrement MinPriceIncrement_79;
  MinPriceIncrement_79.setString("6987499");
  msg.set(MinPriceIncrement_79);
  Instrument_79.insert(MinPriceIncrement_79.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_79;
  MinPriceIncrementAmount_79.setString("9358054");
  msg.set(MinPriceIncrementAmount_79);
  Instrument_79.insert(MinPriceIncrementAmount_79.getString());
  FIX::NTPositionLimit NTPositionLimit_79(741196768);
  msg.set(NTPositionLimit_79);
  Instrument_79.insert(NTPositionLimit_79.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_79;
  NotionalPercentageOutstanding_79.setString("82.370000");
  msg.set(NotionalPercentageOutstanding_79);
  Instrument_79.insert(NotionalPercentageOutstanding_79.getString());
  FIX::OptAttribute OptAttribute_79('3');
  msg.set(OptAttribute_79);
  Instrument_79.insert(OptAttribute_79.getString());
  FIX::OptPayoutAmount OptPayoutAmount_79;
  OptPayoutAmount_79.setString("5433792");
  msg.set(OptPayoutAmount_79);
  Instrument_79.insert(OptPayoutAmount_79.getString());
  FIX::OptPayoutType OptPayoutType_79(3);
  msg.set(OptPayoutType_79);
  Instrument_79.insert(OptPayoutType_79.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_79;
  OriginalNotionalPercentageOutstanding_79.setString("99.210000");
  msg.set(OriginalNotionalPercentageOutstanding_79);
  Instrument_79.insert(OriginalNotionalPercentageOutstanding_79.getString());
  FIX::Pool Pool_79("STRING_913515255");
  msg.set(Pool_79);
  Instrument_79.insert(Pool_79.getString());
  FIX::PositionLimit PositionLimit_79(586483037);
  msg.set(PositionLimit_79);
  Instrument_79.insert(PositionLimit_79.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_79("STRING_INX");
  msg.set(PriceQuoteMethod_79);
  Instrument_79.insert(PriceQuoteMethod_79.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_79("STRING_1706557904");
  msg.set(PriceUnitOfMeasure_79);
  Instrument_79.insert(PriceUnitOfMeasure_79.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_79;
  PriceUnitOfMeasureQty_79.setString("3223807");
  msg.set(PriceUnitOfMeasureQty_79);
  Instrument_79.insert(PriceUnitOfMeasureQty_79.getString());
  FIX::Product Product_81(13);
  msg.set(Product_81);
  Instrument_79.insert(Product_81.getString());
  FIX::ProductComplex ProductComplex_79("STRING_17361442");
  msg.set(ProductComplex_79);
  Instrument_79.insert(ProductComplex_79.getString());
  FIX::PutOrCall PutOrCall_79(1);
  msg.set(PutOrCall_79);
  Instrument_79.insert(PutOrCall_79.getString());
  FIX::RedemptionDate RedemptionDate_79("LOCALMKTDATE_1061665119");
  msg.set(RedemptionDate_79);
  Instrument_79.insert(RedemptionDate_79.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_79("STRING_1976638281");
  msg.set(RepoCollateralSecurityType_79);
  Instrument_79.insert(RepoCollateralSecurityType_79.getString());
  FIX::RepurchaseRate RepurchaseRate_79;
  RepurchaseRate_79.setString("26.240000");
  msg.set(RepurchaseRate_79);
  Instrument_79.insert(RepurchaseRate_79.getString());
  FIX::RepurchaseTerm RepurchaseTerm_79(127216105);
  msg.set(RepurchaseTerm_79);
  Instrument_79.insert(RepurchaseTerm_79.getString());
  FIX::RestructuringType RestructuringType_79("STRING_FR");
  msg.set(RestructuringType_79);
  Instrument_79.insert(RestructuringType_79.getString());
  FIX::SecurityDesc SecurityDesc_79("STRING_1412713119");
  msg.set(SecurityDesc_79);
  Instrument_79.insert(SecurityDesc_79.getString());
  FIX::SecurityExchange SecurityExchange_79("EXCHANGE_1932317539");
  msg.set(SecurityExchange_79);
  Instrument_79.insert(SecurityExchange_79.getString());
  FIX::SecurityGroup SecurityGroup_79("STRING_299682435");
  msg.set(SecurityGroup_79);
  Instrument_79.insert(SecurityGroup_79.getString());
  FIX::SecurityID SecurityID_79("STRING_752081306");
  msg.set(SecurityID_79);
  Instrument_79.insert(SecurityID_79.getString());
  FIX::SecurityIDSource SecurityIDSource_79("STRING_I");
  msg.set(SecurityIDSource_79);
  Instrument_79.insert(SecurityIDSource_79.getString());
  FIX::SecurityStatus SecurityStatus_79("STRING_2");
  msg.set(SecurityStatus_79);
  Instrument_79.insert(SecurityStatus_79.getString());
  FIX::SecuritySubType SecuritySubType_80("STRING_2085048130");
  msg.set(SecuritySubType_80);
  Instrument_79.insert(SecuritySubType_80.getString());
  FIX::SecurityType SecurityType_81("STRING_MF");
  msg.set(SecurityType_81);
  Instrument_79.insert(SecurityType_81.getString());
  FIX::Seniority Seniority_79("STRING_SD");
  msg.set(Seniority_79);
  Instrument_79.insert(Seniority_79.getString());
  FIX::SettlMethod SettlMethod_79('P');
  msg.set(SettlMethod_79);
  Instrument_79.insert(SettlMethod_79.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_79("STRING_1731203374");
  msg.set(SettleOnOpenFlag_79);
  Instrument_79.insert(SettleOnOpenFlag_79.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_79("STRING_309890408");
  msg.set(StateOrProvinceOfIssue_79);
  Instrument_79.insert(StateOrProvinceOfIssue_79.getString());
  FIX::StrikeCurrency StrikeCurrency_79("CAN");
  msg.set(StrikeCurrency_79);
  Instrument_79.insert(StrikeCurrency_79.getString());
  FIX::StrikeMultiplier StrikeMultiplier_79;
  StrikeMultiplier_79.setString("3433736");
  msg.set(StrikeMultiplier_79);
  Instrument_79.insert(StrikeMultiplier_79.getString());
  FIX::StrikePrice StrikePrice_79;
  StrikePrice_79.setString("13665648");
  msg.set(StrikePrice_79);
  Instrument_79.insert(StrikePrice_79.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_79(4);
  msg.set(StrikePriceBoundaryMethod_79);
  Instrument_79.insert(StrikePriceBoundaryMethod_79.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_79;
  StrikePriceBoundaryPrecision_79.setString("35.440000");
  msg.set(StrikePriceBoundaryPrecision_79);
  Instrument_79.insert(StrikePriceBoundaryPrecision_79.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_79(4);
  msg.set(StrikePriceDeterminationMethod_79);
  Instrument_79.insert(StrikePriceDeterminationMethod_79.getString());
  FIX::StrikeValue StrikeValue_79;
  StrikeValue_79.setString("9638670");
  msg.set(StrikeValue_79);
  Instrument_79.insert(StrikeValue_79.getString());
  FIX::Symbol Symbol_79("STRING_1737126993");
  msg.set(Symbol_79);
  Instrument_79.insert(Symbol_79.getString());
  FIX::SymbolSfx SymbolSfx_79("STRING_WI");
  msg.set(SymbolSfx_79);
  Instrument_79.insert(SymbolSfx_79.getString());
  FIX::TimeUnit TimeUnit_79("STRING_H");
  msg.set(TimeUnit_79);
  Instrument_79.insert(TimeUnit_79.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_79(3);
  msg.set(UnderlyingPriceDeterminationMethod_79);
  Instrument_79.insert(UnderlyingPriceDeterminationMethod_79.getString());
  FIX::UnitOfMeasure UnitOfMeasure_79("STRING_Gal");
  msg.set(UnitOfMeasure_79);
  Instrument_79.insert(UnitOfMeasure_79.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_79;
  UnitOfMeasureQty_79.setString("780457");
  msg.set(UnitOfMeasureQty_79);
  Instrument_79.insert(UnitOfMeasureQty_79.getString());
  FIX::ValuationMethod ValuationMethod_79("STRING_FUTDA");
  msg.set(ValuationMethod_79);
  Instrument_79.insert(ValuationMethod_79.getString());
  all_values.push_back(Instrument_79);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinition::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_151;
    FIX::ComplexEventCondition ComplexEventCondition_151(2);
    noComplexEvents_0_0.set(ComplexEventCondition_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventCondition_151.getString());
    FIX::ComplexEventPrice ComplexEventPrice_151;
    ComplexEventPrice_151.setString("11052310");
    noComplexEvents_0_0.set(ComplexEventPrice_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventPrice_151.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_151(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventPriceBoundaryMethod_151.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_151;
    ComplexEventPriceBoundaryPrecision_151.setString("78.540000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventPriceBoundaryPrecision_151.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_151(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventPriceTimeType_151.getString());
    FIX::ComplexEventType ComplexEventType_151(8);
    noComplexEvents_0_0.set(ComplexEventType_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventType_151.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_151;
    ComplexOptPayoutAmount_151.setString("18308891");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexOptPayoutAmount_151.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_151);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_307;
      FIX::ComplexEventEndDate ComplexEventEndDate_307(FIX::UTCTIMESTAMP(11, 41, 44, 16, 9, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_307);
      ComplexEventDates_NoComplexEventDates_307.insert(ComplexEventEndDate_307.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_307(FIX::UTCTIMESTAMP(7, 35, 41, 21, 12, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_307);
      ComplexEventDates_NoComplexEventDates_307.insert(ComplexEventStartDate_307.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_307);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_617;
        FIX::ComplexEventEndTime ComplexEventEndTime_617(FIX::UTCTIMEONLY(20, 1, 39));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_617);
        ComplexEventTimes_NoComplexEventTimes_617.insert(ComplexEventEndTime_617.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_617(FIX::UTCTIMEONLY(4, 13, 22));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_617);
        ComplexEventTimes_NoComplexEventTimes_617.insert(ComplexEventStartTime_617.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_617);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_308;
      FIX::ComplexEventEndDate ComplexEventEndDate_308(FIX::UTCTIMESTAMP(8, 17, 42, 23, 5, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_308);
      ComplexEventDates_NoComplexEventDates_308.insert(ComplexEventEndDate_308.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_308(FIX::UTCTIMESTAMP(3, 18, 33, 3, 3, 2009));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_308);
      ComplexEventDates_NoComplexEventDates_308.insert(ComplexEventStartDate_308.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_308);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_618;
        FIX::ComplexEventEndTime ComplexEventEndTime_618(FIX::UTCTIMEONLY(16, 39, 53));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_618);
        ComplexEventTimes_NoComplexEventTimes_618.insert(ComplexEventEndTime_618.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_618(FIX::UTCTIMEONLY(19, 10, 3));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_618);
        ComplexEventTimes_NoComplexEventTimes_618.insert(ComplexEventStartTime_618.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_618);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_309;
      FIX::ComplexEventEndDate ComplexEventEndDate_309(FIX::UTCTIMESTAMP(22, 56, 50, 21, 5, 2009));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_309);
      ComplexEventDates_NoComplexEventDates_309.insert(ComplexEventEndDate_309.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_309(FIX::UTCTIMESTAMP(0, 16, 44, 27, 12, 2001));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_309);
      ComplexEventDates_NoComplexEventDates_309.insert(ComplexEventStartDate_309.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_309);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_619;
        FIX::ComplexEventEndTime ComplexEventEndTime_619(FIX::UTCTIMEONLY(20, 12, 4));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_619);
        ComplexEventTimes_NoComplexEventTimes_619.insert(ComplexEventEndTime_619.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_619(FIX::UTCTIMEONLY(6, 37, 27));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_619);
        ComplexEventTimes_NoComplexEventTimes_619.insert(ComplexEventStartTime_619.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_619);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_620;
        FIX::ComplexEventEndTime ComplexEventEndTime_620(FIX::UTCTIMEONLY(9, 7, 14));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_620);
        ComplexEventTimes_NoComplexEventTimes_620.insert(ComplexEventEndTime_620.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_620(FIX::UTCTIMEONLY(2, 24, 34));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_620);
        ComplexEventTimes_NoComplexEventTimes_620.insert(ComplexEventStartTime_620.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_620);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_621;
        FIX::ComplexEventEndTime ComplexEventEndTime_621(FIX::UTCTIMEONLY(3, 22, 44));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_621);
        ComplexEventTimes_NoComplexEventTimes_621.insert(ComplexEventEndTime_621.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_621(FIX::UTCTIMEONLY(3, 47, 27));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_621);
        ComplexEventTimes_NoComplexEventTimes_621.insert(ComplexEventStartTime_621.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_621);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityDefinition::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_159;
    FIX::EventDate EventDate_159("LOCALMKTDATE_113786035");
    noEvents_0_0.set(EventDate_159);
    EvntGrp_NoEvents_159.insert(EventDate_159.getString());
    FIX::EventPx EventPx_159;
    EventPx_159.setString("1242318");
    noEvents_0_0.set(EventPx_159);
    EvntGrp_NoEvents_159.insert(EventPx_159.getString());
    FIX::EventText EventText_159("STRING_903904806");
    noEvents_0_0.set(EventText_159);
    EvntGrp_NoEvents_159.insert(EventText_159.getString());
    FIX::EventTime EventTime_159(FIX::UTCTIMESTAMP(4, 0, 22, 20, 5, 2006));
    noEvents_0_0.set(EventTime_159);
    EvntGrp_NoEvents_159.insert(EventTime_159.getString());
    FIX::EventType EventType_159(13);
    noEvents_0_0.set(EventType_159);
    EvntGrp_NoEvents_159.insert(EventType_159.getString());
    all_values.push_back(EvntGrp_NoEvents_159);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_160;
    FIX::EventDate EventDate_160("LOCALMKTDATE_1216040302");
    noEvents_0_1.set(EventDate_160);
    EvntGrp_NoEvents_160.insert(EventDate_160.getString());
    FIX::EventPx EventPx_160;
    EventPx_160.setString("20653009");
    noEvents_0_1.set(EventPx_160);
    EvntGrp_NoEvents_160.insert(EventPx_160.getString());
    FIX::EventText EventText_160("STRING_1799985339");
    noEvents_0_1.set(EventText_160);
    EvntGrp_NoEvents_160.insert(EventText_160.getString());
    FIX::EventTime EventTime_160(FIX::UTCTIMESTAMP(20, 38, 58, 4, 9, 2005));
    noEvents_0_1.set(EventTime_160);
    EvntGrp_NoEvents_160.insert(EventTime_160.getString());
    FIX::EventType EventType_160(19);
    noEvents_0_1.set(EventType_160);
    EvntGrp_NoEvents_160.insert(EventType_160.getString());
    all_values.push_back(EvntGrp_NoEvents_160);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinition::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_162;
    FIX::InstrumentPartyID InstrumentPartyID_162("STRING_569497998");
    noInstrumentParties_0_0.set(InstrumentPartyID_162);
    InstrumentParties_NoInstrumentParties_162.insert(InstrumentPartyID_162.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_162('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_162);
    InstrumentParties_NoInstrumentParties_162.insert(InstrumentPartyIDSource_162.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_162(1535678518);
    noInstrumentParties_0_0.set(InstrumentPartyRole_162);
    InstrumentParties_NoInstrumentParties_162.insert(InstrumentPartyRole_162.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_162);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341;
      FIX::InstrumentPartySubID InstrumentPartySubID_341("STRING_1284686424");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_341);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341.insert(InstrumentPartySubID_341.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_341(1171528477);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_341);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341.insert(InstrumentPartySubIDType_341.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342;
      FIX::InstrumentPartySubID InstrumentPartySubID_342("STRING_169770525");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_342);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342.insert(InstrumentPartySubID_342.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_342(81109043);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_342);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342.insert(InstrumentPartySubIDType_342.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343;
      FIX::InstrumentPartySubID InstrumentPartySubID_343("STRING_1285314513");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_343);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343.insert(InstrumentPartySubID_343.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_343(294002328);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_343);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343.insert(InstrumentPartySubIDType_343.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_163;
    FIX::InstrumentPartyID InstrumentPartyID_163("STRING_985013850");
    noInstrumentParties_0_1.set(InstrumentPartyID_163);
    InstrumentParties_NoInstrumentParties_163.insert(InstrumentPartyID_163.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_163('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_163);
    InstrumentParties_NoInstrumentParties_163.insert(InstrumentPartyIDSource_163.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_163(170150517);
    noInstrumentParties_0_1.set(InstrumentPartyRole_163);
    InstrumentParties_NoInstrumentParties_163.insert(InstrumentPartyRole_163.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_163);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344;
      FIX::InstrumentPartySubID InstrumentPartySubID_344("STRING_1612795890");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_344);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344.insert(InstrumentPartySubID_344.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_344(1835957701);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_344);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344.insert(InstrumentPartySubIDType_344.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::SecurityDefinition::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_164;
    FIX::InstrumentPartyID InstrumentPartyID_164("STRING_2106314015");
    noInstrumentParties_0_2.set(InstrumentPartyID_164);
    InstrumentParties_NoInstrumentParties_164.insert(InstrumentPartyID_164.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_164('2');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_164);
    InstrumentParties_NoInstrumentParties_164.insert(InstrumentPartyIDSource_164.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_164(30263765);
    noInstrumentParties_0_2.set(InstrumentPartyRole_164);
    InstrumentParties_NoInstrumentParties_164.insert(InstrumentPartyRole_164.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_164);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345;
      FIX::InstrumentPartySubID InstrumentPartySubID_345("STRING_1996807295");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_345);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345.insert(InstrumentPartySubID_345.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_345(1830249105);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_345);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345.insert(InstrumentPartySubIDType_345.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346;
      FIX::InstrumentPartySubID InstrumentPartySubID_346("STRING_958406553");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_346);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346.insert(InstrumentPartySubID_346.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_346(1094359187);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_346);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346.insert(InstrumentPartySubIDType_346.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinition::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_176;
    FIX::SecurityAltID SecurityAltID_176("STRING_1005351872");
    noSecurityAltID_0_0.set(SecurityAltID_176);
    SecAltIDGrp_NoSecurityAltID_176.insert(SecurityAltID_176.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_176("STRING_591386971");
    noSecurityAltID_0_0.set(SecurityAltIDSource_176);
    SecAltIDGrp_NoSecurityAltID_176.insert(SecurityAltIDSource_176.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_176);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_158;
  FIX::SecurityXML SecurityXML_159("XMLDATA_569057368");
  msg.set(SecurityXML_159);
  FIX::SecurityXMLLen SecurityXMLLen_79(741959027);
  msg.set(SecurityXMLLen_79);
  FIX::SecurityXMLSchema SecurityXMLSchema_79("STRING_2015645090");
  msg.set(SecurityXMLSchema_79);
  SecurityXML_158.insert(SecurityXMLSchema_79.getString());
  all_values.push_back(SecurityXML_158);

  // InstrumentExtension
  multiset<string> InstrumentExtension_9;
  FIX::DeliveryForm DeliveryForm_9(1);
  msg.set(DeliveryForm_9);
  InstrumentExtension_9.insert(DeliveryForm_9.getString());
  FIX::PctAtRisk PctAtRisk_9;
  PctAtRisk_9.setString("70.250000");
  msg.set(PctAtRisk_9);
  InstrumentExtension_9.insert(PctAtRisk_9.getString());
  all_values.push_back(InstrumentExtension_9);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinition::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_20;
    FIX::InstrAttribType InstrAttribType_20(3);
    noInstrAttrib_0_0.set(InstrAttribType_20);
    AttrbGrp_NoInstrAttrib_20.insert(InstrAttribType_20.getString());
    FIX::InstrAttribValue InstrAttribValue_20("STRING_988116383");
    noInstrAttrib_0_0.set(InstrAttribValue_20);
    AttrbGrp_NoInstrAttrib_20.insert(InstrAttribValue_20.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_20);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_21;
    FIX::InstrAttribType InstrAttribType_21(10);
    noInstrAttrib_0_1.set(InstrAttribType_21);
    AttrbGrp_NoInstrAttrib_21.insert(InstrAttribType_21.getString());
    FIX::InstrAttribValue InstrAttribValue_21("STRING_2141804109");
    noInstrAttrib_0_1.set(InstrAttribValue_21);
    AttrbGrp_NoInstrAttrib_21.insert(InstrAttribValue_21.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_21);

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::SecurityDefinition::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_22;
    FIX::InstrAttribType InstrAttribType_22(9);
    noInstrAttrib_0_2.set(InstrAttribType_22);
    AttrbGrp_NoInstrAttrib_22.insert(InstrAttribType_22.getString());
    FIX::InstrAttribValue InstrAttribValue_22("STRING_1265009882");
    noInstrAttrib_0_2.set(InstrAttribValue_22);
    AttrbGrp_NoInstrAttrib_22.insert(InstrAttribValue_22.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_22);

    msg.addGroup(noInstrAttrib_0_2);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::SecurityDefinition::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_3;
    FIX::MarketID MarketID_12("EXCHANGE_1451889236");
    noMarketSegments_0_0.set(MarketID_12);
    MarketSegmentGrp_NoMarketSegments_3.insert(MarketID_12.getString());
    FIX::MarketSegmentID MarketSegmentID_12("STRING_102540084");
    noMarketSegments_0_0.set(MarketSegmentID_12);
    MarketSegmentGrp_NoMarketSegments_3.insert(MarketSegmentID_12.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_3);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_5;
    FIX::ExpirationCycle ExpirationCycle_5(0);
    noMarketSegments_0_0.set(ExpirationCycle_5);
    BaseTradingRules_5.insert(ExpirationCycle_5.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_5(1);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_5);
    BaseTradingRules_5.insert(ImpliedMarketIndicator_5.getString());
    FIX::MaxPriceVariation MaxPriceVariation_5;
    MaxPriceVariation_5.setString("19045885");
    noMarketSegments_0_0.set(MaxPriceVariation_5);
    BaseTradingRules_5.insert(MaxPriceVariation_5.getString());
    FIX::MaxTradeVol MaxTradeVol_5;
    MaxTradeVol_5.setString("5818227");
    noMarketSegments_0_0.set(MaxTradeVol_5);
    BaseTradingRules_5.insert(MaxTradeVol_5.getString());
    FIX::MinTradeVol MinTradeVol_5;
    MinTradeVol_5.setString("13105138");
    noMarketSegments_0_0.set(MinTradeVol_5);
    BaseTradingRules_5.insert(MinTradeVol_5.getString());
    FIX::MultilegModel MultilegModel_7(1);
    noMarketSegments_0_0.set(MultilegModel_7);
    BaseTradingRules_5.insert(MultilegModel_7.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_7(2);
    noMarketSegments_0_0.set(MultilegPriceMethod_7);
    BaseTradingRules_5.insert(MultilegPriceMethod_7.getString());
    FIX::PriceType PriceType_36(18);
    noMarketSegments_0_0.set(PriceType_36);
    BaseTradingRules_5.insert(PriceType_36.getString());
    FIX::RoundLot RoundLot_5;
    RoundLot_5.setString("8908059");
    noMarketSegments_0_0.set(RoundLot_5);
    BaseTradingRules_5.insert(RoundLot_5.getString());
    FIX::TradingCurrency TradingCurrency_5("CAN");
    noMarketSegments_0_0.set(TradingCurrency_5);
    BaseTradingRules_5.insert(TradingCurrency_5.getString());
    all_values.push_back(BaseTradingRules_5);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_8;
      FIX::LotType LotType_11('4');
      noLotTypeRules_0_1_0.set(LotType_11);
      LotTypeRules_NoLotTypeRules_8.insert(LotType_11.getString());
      FIX::MinLotSize MinLotSize_8;
      MinLotSize_8.setString("1010638");
      noLotTypeRules_0_1_0.set(MinLotSize_8);
      LotTypeRules_NoLotTypeRules_8.insert(MinLotSize_8.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_8);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_9;
      FIX::LotType LotType_12('2');
      noLotTypeRules_0_1_1.set(LotType_12);
      LotTypeRules_NoLotTypeRules_9.insert(LotType_12.getString());
      FIX::MinLotSize MinLotSize_9;
      MinLotSize_9.setString("20483988");
      noLotTypeRules_0_1_1.set(MinLotSize_9);
      LotTypeRules_NoLotTypeRules_9.insert(MinLotSize_9.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_9);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_5;
    FIX::HighLimitPrice HighLimitPrice_5;
    HighLimitPrice_5.setString("6701212");
    noMarketSegments_0_0.set(HighLimitPrice_5);
    PriceLimits_5.insert(HighLimitPrice_5.getString());
    FIX::LowLimitPrice LowLimitPrice_5;
    LowLimitPrice_5.setString("14490397");
    noMarketSegments_0_0.set(LowLimitPrice_5);
    PriceLimits_5.insert(LowLimitPrice_5.getString());
    FIX::PriceLimitType PriceLimitType_5(0);
    noMarketSegments_0_0.set(PriceLimitType_5);
    PriceLimits_5.insert(PriceLimitType_5.getString());
    FIX::TradingReferencePrice TradingReferencePrice_5;
    TradingReferencePrice_5.setString("1047183");
    noMarketSegments_0_0.set(TradingReferencePrice_5);
    PriceLimits_5.insert(TradingReferencePrice_5.getString());
    all_values.push_back(PriceLimits_5);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_8;
      FIX::EndTickPriceRange EndTickPriceRange_8;
      EndTickPriceRange_8.setString("18157747");
      noTickRules_0_1_0.set(EndTickPriceRange_8);
      TickRules_NoTickRules_8.insert(EndTickPriceRange_8.getString());
      FIX::StartTickPriceRange StartTickPriceRange_8;
      StartTickPriceRange_8.setString("10749939");
      noTickRules_0_1_0.set(StartTickPriceRange_8);
      TickRules_NoTickRules_8.insert(StartTickPriceRange_8.getString());
      FIX::TickIncrement TickIncrement_8;
      TickIncrement_8.setString("16011294");
      noTickRules_0_1_0.set(TickIncrement_8);
      TickRules_NoTickRules_8.insert(TickIncrement_8.getString());
      FIX::TickRuleType TickRuleType_8(3);
      noTickRules_0_1_0.set(TickRuleType_8);
      TickRules_NoTickRules_8.insert(TickRuleType_8.getString());
      all_values.push_back(TickRules_NoTickRules_8);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_6;
      FIX::NestedInstrAttribType NestedInstrAttribType_6(611532728);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_6);
      NestedInstrumentAttribute_NoNestedInstrAttrib_6.insert(NestedInstrAttribType_6.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_6("STRING_2117201821");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_6);
      NestedInstrumentAttribute_NoNestedInstrAttrib_6.insert(NestedInstrAttribValue_6.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_6);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_5;
      FIX::TradingSessionID TradingSessionID_72("STRING_5");
      noTradingSessionRules_0_1_0.set(TradingSessionID_72);
      TradingSessionRulesGrp_NoTradingSessionRules_5.insert(TradingSessionID_72.getString());
      FIX::TradingSessionSubID TradingSessionSubID_72("STRING_2");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_72);
      TradingSessionRulesGrp_NoTradingSessionRules_5.insert(TradingSessionSubID_72.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_5);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_12;
        FIX::ExecInstValue ExecInstValue_12('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_12);
        ExecInstRules_NoExecInstRules_12.insert(ExecInstValue_12.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_12);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_12;
        FIX::MDBookType MDBookType_14(3);
        noMDFeedTypes_0_0_2_0.set(MDBookType_14);
        MarketDataFeedTypes_NoMDFeedTypes_12.insert(MDBookType_14.getString());
        FIX::MDFeedType MDFeedType_14("STRING_701008229");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_14);
        MarketDataFeedTypes_NoMDFeedTypes_12.insert(MDFeedType_14.getString());
        FIX::MarketDepth MarketDepth_15(1692782006);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_15);
        MarketDataFeedTypes_NoMDFeedTypes_12.insert(MarketDepth_15.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_12);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_10;
        FIX::MatchAlgorithm MatchAlgorithm_10("STRING_2041785801");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_10);
        MatchRules_NoMatchRules_10.insert(MatchAlgorithm_10.getString());
        FIX::MatchType MatchType_15("STRING_S5");
        noMatchRules_0_0_2_0.set(MatchType_15);
        MatchRules_NoMatchRules_10.insert(MatchType_15.getString());
        all_values.push_back(MatchRules_NoMatchRules_10);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_11;
        FIX::MatchAlgorithm MatchAlgorithm_11("STRING_628297094");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_11);
        MatchRules_NoMatchRules_11.insert(MatchAlgorithm_11.getString());
        FIX::MatchType MatchType_16("STRING_S4");
        noMatchRules_0_0_2_1.set(MatchType_16);
        MatchRules_NoMatchRules_11.insert(MatchType_16.getString());
        all_values.push_back(MatchRules_NoMatchRules_11);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_12;
        FIX::MatchAlgorithm MatchAlgorithm_12("STRING_137833071");
        noMatchRules_0_0_2_2.set(MatchAlgorithm_12);
        MatchRules_NoMatchRules_12.insert(MatchAlgorithm_12.getString());
        FIX::MatchType MatchType_17("STRING_S4");
        noMatchRules_0_0_2_2.set(MatchType_17);
        MatchRules_NoMatchRules_12.insert(MatchType_17.getString());
        all_values.push_back(MatchRules_NoMatchRules_12);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_16;
        FIX::OrdType OrdType_45('H');
        noOrdTypeRules_0_0_2_0.set(OrdType_45);
        OrdTypeRules_NoOrdTypeRules_16.insert(OrdType_45.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_16);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_17;
        FIX::OrdType OrdType_46('Q');
        noOrdTypeRules_0_0_2_1.set(OrdType_46);
        OrdTypeRules_NoOrdTypeRules_17.insert(OrdType_46.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_17);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_18;
        FIX::OrdType OrdType_47('2');
        noOrdTypeRules_0_0_2_2.set(OrdType_47);
        OrdTypeRules_NoOrdTypeRules_18.insert(OrdType_47.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_18);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_12;
        FIX::TimeInForce TimeInForce_23('0');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_23);
        TimeInForceRules_NoTimeInForceRules_12.insert(TimeInForce_23.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_12);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_13;
        FIX::TimeInForce TimeInForce_24('4');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_24);
        TimeInForceRules_NoTimeInForceRules_13.insert(TimeInForce_24.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_13);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_14;
        FIX::TimeInForce TimeInForce_25('7');
        noTimeInForceRules_0_0_2_2.set(TimeInForce_25);
        TimeInForceRules_NoTimeInForceRules_14.insert(TimeInForce_25.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_14);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_5;
      FIX::EndStrikePxRange EndStrikePxRange_5;
      EndStrikePxRange_5.setString("7212589");
      noStrikeRules_0_1_0.set(EndStrikePxRange_5);
      StrikeRules_NoStrikeRules_5.insert(EndStrikePxRange_5.getString());
      FIX::StartStrikePxRange StartStrikePxRange_5;
      StartStrikePxRange_5.setString("2131287");
      noStrikeRules_0_1_0.set(StartStrikePxRange_5);
      StrikeRules_NoStrikeRules_5.insert(StartStrikePxRange_5.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_5(128300330);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_5);
      StrikeRules_NoStrikeRules_5.insert(StrikeExerciseStyle_5.getString());
      FIX::StrikeIncrement StrikeIncrement_5;
      StrikeIncrement_5.setString("17905733");
      noStrikeRules_0_1_0.set(StrikeIncrement_5);
      StrikeRules_NoStrikeRules_5.insert(StrikeIncrement_5.getString());
      FIX::StrikeRuleID StrikeRuleID_5("STRING_824661445");
      noStrikeRules_0_1_0.set(StrikeRuleID_5);
      StrikeRules_NoStrikeRules_5.insert(StrikeRuleID_5.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_5);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_9;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_9("MONTHYEAR_1992039118");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_9);
        MaturityRules_NoMaturityRules_9.insert(EndMaturityMonthYear_9.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_9(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityMonthYearFormat_9.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_9(170276760);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityMonthYearIncrement_9.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_9(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityMonthYearIncrementUnits_9.getString());
        FIX::MaturityRuleID MaturityRuleID_9("STRING_131094183");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityRuleID_9.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_9("MONTHYEAR_2147123533");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_9);
        MaturityRules_NoMaturityRules_9.insert(StartMaturityMonthYear_9.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_9);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_10;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_10("MONTHYEAR_914846970");
        noMaturityRules_0_0_2_1.set(EndMaturityMonthYear_10);
        MaturityRules_NoMaturityRules_10.insert(EndMaturityMonthYear_10.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_10(2);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearFormat_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityMonthYearFormat_10.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_10(1692421891);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrement_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityMonthYearIncrement_10.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_10(0);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrementUnits_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityMonthYearIncrementUnits_10.getString());
        FIX::MaturityRuleID MaturityRuleID_10("STRING_726404566");
        noMaturityRules_0_0_2_1.set(MaturityRuleID_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityRuleID_10.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_10("MONTHYEAR_2128526153");
        noMaturityRules_0_0_2_1.set(StartMaturityMonthYear_10);
        MaturityRules_NoMaturityRules_10.insert(StartMaturityMonthYear_10.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_10);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_6;
      FIX::EndStrikePxRange EndStrikePxRange_6;
      EndStrikePxRange_6.setString("18087884");
      noStrikeRules_0_1_1.set(EndStrikePxRange_6);
      StrikeRules_NoStrikeRules_6.insert(EndStrikePxRange_6.getString());
      FIX::StartStrikePxRange StartStrikePxRange_6;
      StartStrikePxRange_6.setString("16442497");
      noStrikeRules_0_1_1.set(StartStrikePxRange_6);
      StrikeRules_NoStrikeRules_6.insert(StartStrikePxRange_6.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_6(118875576);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_6);
      StrikeRules_NoStrikeRules_6.insert(StrikeExerciseStyle_6.getString());
      FIX::StrikeIncrement StrikeIncrement_6;
      StrikeIncrement_6.setString("17466137");
      noStrikeRules_0_1_1.set(StrikeIncrement_6);
      StrikeRules_NoStrikeRules_6.insert(StrikeIncrement_6.getString());
      FIX::StrikeRuleID StrikeRuleID_6("STRING_515675141");
      noStrikeRules_0_1_1.set(StrikeRuleID_6);
      StrikeRules_NoStrikeRules_6.insert(StrikeRuleID_6.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_6);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_11;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_11("MONTHYEAR_1585354399");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_11);
        MaturityRules_NoMaturityRules_11.insert(EndMaturityMonthYear_11.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_11(1);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityMonthYearFormat_11.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_11(1110259140);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityMonthYearIncrement_11.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_11(3);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityMonthYearIncrementUnits_11.getString());
        FIX::MaturityRuleID MaturityRuleID_11("STRING_1850970362");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityRuleID_11.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_11("MONTHYEAR_1869742037");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_11);
        MaturityRules_NoMaturityRules_11.insert(StartMaturityMonthYear_11.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_11);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_12;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_12("MONTHYEAR_469280082");
        noMaturityRules_0_1_2_1.set(EndMaturityMonthYear_12);
        MaturityRules_NoMaturityRules_12.insert(EndMaturityMonthYear_12.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_12(1);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearFormat_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityMonthYearFormat_12.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_12(2082870754);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrement_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityMonthYearIncrement_12.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_12(0);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrementUnits_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityMonthYearIncrementUnits_12.getString());
        FIX::MaturityRuleID MaturityRuleID_12("STRING_67835352");
        noMaturityRules_0_1_2_1.set(MaturityRuleID_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityRuleID_12.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_12("MONTHYEAR_760048551");
        noMaturityRules_0_1_2_1.set(StartMaturityMonthYear_12);
        MaturityRules_NoMaturityRules_12.insert(StartMaturityMonthYear_12.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_12);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_1);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_7;
      FIX::EndStrikePxRange EndStrikePxRange_7;
      EndStrikePxRange_7.setString("6955989");
      noStrikeRules_0_1_2.set(EndStrikePxRange_7);
      StrikeRules_NoStrikeRules_7.insert(EndStrikePxRange_7.getString());
      FIX::StartStrikePxRange StartStrikePxRange_7;
      StartStrikePxRange_7.setString("20598744");
      noStrikeRules_0_1_2.set(StartStrikePxRange_7);
      StrikeRules_NoStrikeRules_7.insert(StartStrikePxRange_7.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_7(1500648313);
      noStrikeRules_0_1_2.set(StrikeExerciseStyle_7);
      StrikeRules_NoStrikeRules_7.insert(StrikeExerciseStyle_7.getString());
      FIX::StrikeIncrement StrikeIncrement_7;
      StrikeIncrement_7.setString("8658756");
      noStrikeRules_0_1_2.set(StrikeIncrement_7);
      StrikeRules_NoStrikeRules_7.insert(StrikeIncrement_7.getString());
      FIX::StrikeRuleID StrikeRuleID_7("STRING_1074922515");
      noStrikeRules_0_1_2.set(StrikeRuleID_7);
      StrikeRules_NoStrikeRules_7.insert(StrikeRuleID_7.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_7);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_13;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_13("MONTHYEAR_865515561");
        noMaturityRules_0_2_2_0.set(EndMaturityMonthYear_13);
        MaturityRules_NoMaturityRules_13.insert(EndMaturityMonthYear_13.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_13(0);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearFormat_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityMonthYearFormat_13.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_13(316361261);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrement_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityMonthYearIncrement_13.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_13(0);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrementUnits_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityMonthYearIncrementUnits_13.getString());
        FIX::MaturityRuleID MaturityRuleID_13("STRING_1022777169");
        noMaturityRules_0_2_2_0.set(MaturityRuleID_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityRuleID_13.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_13("MONTHYEAR_1042765827");
        noMaturityRules_0_2_2_0.set(StartMaturityMonthYear_13);
        MaturityRules_NoMaturityRules_13.insert(StartMaturityMonthYear_13.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_13);

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_14;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_14("MONTHYEAR_391496310");
        noMaturityRules_0_2_2_1.set(EndMaturityMonthYear_14);
        MaturityRules_NoMaturityRules_14.insert(EndMaturityMonthYear_14.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_14(0);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearFormat_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityMonthYearFormat_14.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_14(539531928);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearIncrement_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityMonthYearIncrement_14.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_14(2);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearIncrementUnits_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityMonthYearIncrementUnits_14.getString());
        FIX::MaturityRuleID MaturityRuleID_14("STRING_283212091");
        noMaturityRules_0_2_2_1.set(MaturityRuleID_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityRuleID_14.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_14("MONTHYEAR_1055207069");
        noMaturityRules_0_2_2_1.set(StartMaturityMonthYear_14);
        MaturityRules_NoMaturityRules_14.insert(StartMaturityMonthYear_14.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_14);

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_1);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_2);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoMarketSegments noMarketSegments_0_1;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_4;
    FIX::MarketID MarketID_13("EXCHANGE_1474161215");
    noMarketSegments_0_1.set(MarketID_13);
    MarketSegmentGrp_NoMarketSegments_4.insert(MarketID_13.getString());
    FIX::MarketSegmentID MarketSegmentID_13("STRING_1868566490");
    noMarketSegments_0_1.set(MarketSegmentID_13);
    MarketSegmentGrp_NoMarketSegments_4.insert(MarketSegmentID_13.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_4);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_6;
    FIX::ExpirationCycle ExpirationCycle_6(0);
    noMarketSegments_0_1.set(ExpirationCycle_6);
    BaseTradingRules_6.insert(ExpirationCycle_6.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_6(3);
    noMarketSegments_0_1.set(ImpliedMarketIndicator_6);
    BaseTradingRules_6.insert(ImpliedMarketIndicator_6.getString());
    FIX::MaxPriceVariation MaxPriceVariation_6;
    MaxPriceVariation_6.setString("9142545");
    noMarketSegments_0_1.set(MaxPriceVariation_6);
    BaseTradingRules_6.insert(MaxPriceVariation_6.getString());
    FIX::MaxTradeVol MaxTradeVol_6;
    MaxTradeVol_6.setString("8159155");
    noMarketSegments_0_1.set(MaxTradeVol_6);
    BaseTradingRules_6.insert(MaxTradeVol_6.getString());
    FIX::MinTradeVol MinTradeVol_6;
    MinTradeVol_6.setString("1591950");
    noMarketSegments_0_1.set(MinTradeVol_6);
    BaseTradingRules_6.insert(MinTradeVol_6.getString());
    FIX::MultilegModel MultilegModel_8(1);
    noMarketSegments_0_1.set(MultilegModel_8);
    BaseTradingRules_6.insert(MultilegModel_8.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_8(4);
    noMarketSegments_0_1.set(MultilegPriceMethod_8);
    BaseTradingRules_6.insert(MultilegPriceMethod_8.getString());
    FIX::PriceType PriceType_37(17);
    noMarketSegments_0_1.set(PriceType_37);
    BaseTradingRules_6.insert(PriceType_37.getString());
    FIX::RoundLot RoundLot_6;
    RoundLot_6.setString("19811150");
    noMarketSegments_0_1.set(RoundLot_6);
    BaseTradingRules_6.insert(RoundLot_6.getString());
    FIX::TradingCurrency TradingCurrency_6("EUR");
    noMarketSegments_0_1.set(TradingCurrency_6);
    BaseTradingRules_6.insert(TradingCurrency_6.getString());
    all_values.push_back(BaseTradingRules_6);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_10;
      FIX::LotType LotType_13('2');
      noLotTypeRules_1_1_0.set(LotType_13);
      LotTypeRules_NoLotTypeRules_10.insert(LotType_13.getString());
      FIX::MinLotSize MinLotSize_10;
      MinLotSize_10.setString("2077954");
      noLotTypeRules_1_1_0.set(MinLotSize_10);
      LotTypeRules_NoLotTypeRules_10.insert(MinLotSize_10.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_10);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_11;
      FIX::LotType LotType_14('1');
      noLotTypeRules_1_1_1.set(LotType_14);
      LotTypeRules_NoLotTypeRules_11.insert(LotType_14.getString());
      FIX::MinLotSize MinLotSize_11;
      MinLotSize_11.setString("1483262");
      noLotTypeRules_1_1_1.set(MinLotSize_11);
      LotTypeRules_NoLotTypeRules_11.insert(MinLotSize_11.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_11);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_12;
      FIX::LotType LotType_15('1');
      noLotTypeRules_1_1_2.set(LotType_15);
      LotTypeRules_NoLotTypeRules_12.insert(LotType_15.getString());
      FIX::MinLotSize MinLotSize_12;
      MinLotSize_12.setString("1131378");
      noLotTypeRules_1_1_2.set(MinLotSize_12);
      LotTypeRules_NoLotTypeRules_12.insert(MinLotSize_12.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_12);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_6;
    FIX::HighLimitPrice HighLimitPrice_6;
    HighLimitPrice_6.setString("21380957");
    noMarketSegments_0_1.set(HighLimitPrice_6);
    PriceLimits_6.insert(HighLimitPrice_6.getString());
    FIX::LowLimitPrice LowLimitPrice_6;
    LowLimitPrice_6.setString("84155");
    noMarketSegments_0_1.set(LowLimitPrice_6);
    PriceLimits_6.insert(LowLimitPrice_6.getString());
    FIX::PriceLimitType PriceLimitType_6(0);
    noMarketSegments_0_1.set(PriceLimitType_6);
    PriceLimits_6.insert(PriceLimitType_6.getString());
    FIX::TradingReferencePrice TradingReferencePrice_6;
    TradingReferencePrice_6.setString("10133892");
    noMarketSegments_0_1.set(TradingReferencePrice_6);
    PriceLimits_6.insert(TradingReferencePrice_6.getString());
    all_values.push_back(PriceLimits_6);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_9;
      FIX::EndTickPriceRange EndTickPriceRange_9;
      EndTickPriceRange_9.setString("9150879");
      noTickRules_1_1_0.set(EndTickPriceRange_9);
      TickRules_NoTickRules_9.insert(EndTickPriceRange_9.getString());
      FIX::StartTickPriceRange StartTickPriceRange_9;
      StartTickPriceRange_9.setString("16974711");
      noTickRules_1_1_0.set(StartTickPriceRange_9);
      TickRules_NoTickRules_9.insert(StartTickPriceRange_9.getString());
      FIX::TickIncrement TickIncrement_9;
      TickIncrement_9.setString("15907132");
      noTickRules_1_1_0.set(TickIncrement_9);
      TickRules_NoTickRules_9.insert(TickIncrement_9.getString());
      FIX::TickRuleType TickRuleType_9(1);
      noTickRules_1_1_0.set(TickRuleType_9);
      TickRules_NoTickRules_9.insert(TickRuleType_9.getString());
      all_values.push_back(TickRules_NoTickRules_9);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_1_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_10;
      FIX::EndTickPriceRange EndTickPriceRange_10;
      EndTickPriceRange_10.setString("19806832");
      noTickRules_1_1_1.set(EndTickPriceRange_10);
      TickRules_NoTickRules_10.insert(EndTickPriceRange_10.getString());
      FIX::StartTickPriceRange StartTickPriceRange_10;
      StartTickPriceRange_10.setString("4984367");
      noTickRules_1_1_1.set(StartTickPriceRange_10);
      TickRules_NoTickRules_10.insert(StartTickPriceRange_10.getString());
      FIX::TickIncrement TickIncrement_10;
      TickIncrement_10.setString("7521374");
      noTickRules_1_1_1.set(TickIncrement_10);
      TickRules_NoTickRules_10.insert(TickIncrement_10.getString());
      FIX::TickRuleType TickRuleType_10(3);
      noTickRules_1_1_1.set(TickRuleType_10);
      TickRules_NoTickRules_10.insert(TickRuleType_10.getString());
      all_values.push_back(TickRules_NoTickRules_10);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_7;
      FIX::NestedInstrAttribType NestedInstrAttribType_7(1189074160);
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribType_7);
      NestedInstrumentAttribute_NoNestedInstrAttrib_7.insert(NestedInstrAttribType_7.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_7("STRING_468536998");
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribValue_7);
      NestedInstrumentAttribute_NoNestedInstrAttrib_7.insert(NestedInstrAttribValue_7.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_7);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_8;
      FIX::NestedInstrAttribType NestedInstrAttribType_8(279297425);
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribType_8);
      NestedInstrumentAttribute_NoNestedInstrAttrib_8.insert(NestedInstrAttribType_8.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_8("STRING_1348269257");
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribValue_8);
      NestedInstrumentAttribute_NoNestedInstrAttrib_8.insert(NestedInstrAttribValue_8.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_8);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_6;
      FIX::TradingSessionID TradingSessionID_73("STRING_4");
      noTradingSessionRules_1_1_0.set(TradingSessionID_73);
      TradingSessionRulesGrp_NoTradingSessionRules_6.insert(TradingSessionID_73.getString());
      FIX::TradingSessionSubID TradingSessionSubID_73("STRING_3");
      noTradingSessionRules_1_1_0.set(TradingSessionSubID_73);
      TradingSessionRulesGrp_NoTradingSessionRules_6.insert(TradingSessionSubID_73.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_6);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_13;
        FIX::ExecInstValue ExecInstValue_13('6');
        noExecInstRules_1_0_2_0.set(ExecInstValue_13);
        ExecInstRules_NoExecInstRules_13.insert(ExecInstValue_13.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_13);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_14;
        FIX::ExecInstValue ExecInstValue_14('1');
        noExecInstRules_1_0_2_1.set(ExecInstValue_14);
        ExecInstRules_NoExecInstRules_14.insert(ExecInstValue_14.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_14);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_13;
        FIX::MDBookType MDBookType_15(2);
        noMDFeedTypes_1_0_2_0.set(MDBookType_15);
        MarketDataFeedTypes_NoMDFeedTypes_13.insert(MDBookType_15.getString());
        FIX::MDFeedType MDFeedType_15("STRING_357793988");
        noMDFeedTypes_1_0_2_0.set(MDFeedType_15);
        MarketDataFeedTypes_NoMDFeedTypes_13.insert(MDFeedType_15.getString());
        FIX::MarketDepth MarketDepth_16(1462555615);
        noMDFeedTypes_1_0_2_0.set(MarketDepth_16);
        MarketDataFeedTypes_NoMDFeedTypes_13.insert(MarketDepth_16.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_13);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_14;
        FIX::MDBookType MDBookType_16(2);
        noMDFeedTypes_1_0_2_1.set(MDBookType_16);
        MarketDataFeedTypes_NoMDFeedTypes_14.insert(MDBookType_16.getString());
        FIX::MDFeedType MDFeedType_16("STRING_49848256");
        noMDFeedTypes_1_0_2_1.set(MDFeedType_16);
        MarketDataFeedTypes_NoMDFeedTypes_14.insert(MDFeedType_16.getString());
        FIX::MarketDepth MarketDepth_17(1575693500);
        noMDFeedTypes_1_0_2_1.set(MarketDepth_17);
        MarketDataFeedTypes_NoMDFeedTypes_14.insert(MarketDepth_17.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_14);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_13;
        FIX::MatchAlgorithm MatchAlgorithm_13("STRING_58263786");
        noMatchRules_1_0_2_0.set(MatchAlgorithm_13);
        MatchRules_NoMatchRules_13.insert(MatchAlgorithm_13.getString());
        FIX::MatchType MatchType_18("STRING_2");
        noMatchRules_1_0_2_0.set(MatchType_18);
        MatchRules_NoMatchRules_13.insert(MatchType_18.getString());
        all_values.push_back(MatchRules_NoMatchRules_13);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_14;
        FIX::MatchAlgorithm MatchAlgorithm_14("STRING_906702720");
        noMatchRules_1_0_2_1.set(MatchAlgorithm_14);
        MatchRules_NoMatchRules_14.insert(MatchAlgorithm_14.getString());
        FIX::MatchType MatchType_19("STRING_1");
        noMatchRules_1_0_2_1.set(MatchType_19);
        MatchRules_NoMatchRules_14.insert(MatchType_19.getString());
        all_values.push_back(MatchRules_NoMatchRules_14);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_19;
        FIX::OrdType OrdType_48('C');
        noOrdTypeRules_1_0_2_0.set(OrdType_48);
        OrdTypeRules_NoOrdTypeRules_19.insert(OrdType_48.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_19);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_20;
        FIX::OrdType OrdType_49('K');
        noOrdTypeRules_1_0_2_1.set(OrdType_49);
        OrdTypeRules_NoOrdTypeRules_20.insert(OrdType_49.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_20);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_15;
        FIX::TimeInForce TimeInForce_26('4');
        noTimeInForceRules_1_0_2_0.set(TimeInForce_26);
        TimeInForceRules_NoTimeInForceRules_15.insert(TimeInForce_26.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_15);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_7;
      FIX::TradingSessionID TradingSessionID_74("STRING_3");
      noTradingSessionRules_1_1_1.set(TradingSessionID_74);
      TradingSessionRulesGrp_NoTradingSessionRules_7.insert(TradingSessionID_74.getString());
      FIX::TradingSessionSubID TradingSessionSubID_74("STRING_7");
      noTradingSessionRules_1_1_1.set(TradingSessionSubID_74);
      TradingSessionRulesGrp_NoTradingSessionRules_7.insert(TradingSessionSubID_74.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_7);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_15;
        FIX::ExecInstValue ExecInstValue_15('5');
        noExecInstRules_1_1_2_0.set(ExecInstValue_15);
        ExecInstRules_NoExecInstRules_15.insert(ExecInstValue_15.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_15);

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_15;
        FIX::MDBookType MDBookType_17(3);
        noMDFeedTypes_1_1_2_0.set(MDBookType_17);
        MarketDataFeedTypes_NoMDFeedTypes_15.insert(MDBookType_17.getString());
        FIX::MDFeedType MDFeedType_17("STRING_793790794");
        noMDFeedTypes_1_1_2_0.set(MDFeedType_17);
        MarketDataFeedTypes_NoMDFeedTypes_15.insert(MDFeedType_17.getString());
        FIX::MarketDepth MarketDepth_18(1286863002);
        noMDFeedTypes_1_1_2_0.set(MarketDepth_18);
        MarketDataFeedTypes_NoMDFeedTypes_15.insert(MarketDepth_18.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_15);

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_16;
        FIX::MDBookType MDBookType_18(1);
        noMDFeedTypes_1_1_2_1.set(MDBookType_18);
        MarketDataFeedTypes_NoMDFeedTypes_16.insert(MDBookType_18.getString());
        FIX::MDFeedType MDFeedType_18("STRING_166265754");
        noMDFeedTypes_1_1_2_1.set(MDFeedType_18);
        MarketDataFeedTypes_NoMDFeedTypes_16.insert(MDFeedType_18.getString());
        FIX::MarketDepth MarketDepth_19(582230815);
        noMDFeedTypes_1_1_2_1.set(MarketDepth_19);
        MarketDataFeedTypes_NoMDFeedTypes_16.insert(MarketDepth_19.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_16);

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_17;
        FIX::MDBookType MDBookType_19(2);
        noMDFeedTypes_1_1_2_2.set(MDBookType_19);
        MarketDataFeedTypes_NoMDFeedTypes_17.insert(MDBookType_19.getString());
        FIX::MDFeedType MDFeedType_19("STRING_847237248");
        noMDFeedTypes_1_1_2_2.set(MDFeedType_19);
        MarketDataFeedTypes_NoMDFeedTypes_17.insert(MDFeedType_19.getString());
        FIX::MarketDepth MarketDepth_20(732229383);
        noMDFeedTypes_1_1_2_2.set(MarketDepth_20);
        MarketDataFeedTypes_NoMDFeedTypes_17.insert(MarketDepth_20.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_17);

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_15;
        FIX::MatchAlgorithm MatchAlgorithm_15("STRING_601612451");
        noMatchRules_1_1_2_0.set(MatchAlgorithm_15);
        MatchRules_NoMatchRules_15.insert(MatchAlgorithm_15.getString());
        FIX::MatchType MatchType_20("STRING_S4");
        noMatchRules_1_1_2_0.set(MatchType_20);
        MatchRules_NoMatchRules_15.insert(MatchType_20.getString());
        all_values.push_back(MatchRules_NoMatchRules_15);

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_16;
        FIX::MatchAlgorithm MatchAlgorithm_16("STRING_1085521909");
        noMatchRules_1_1_2_1.set(MatchAlgorithm_16);
        MatchRules_NoMatchRules_16.insert(MatchAlgorithm_16.getString());
        FIX::MatchType MatchType_21("STRING_AQ");
        noMatchRules_1_1_2_1.set(MatchType_21);
        MatchRules_NoMatchRules_16.insert(MatchType_21.getString());
        all_values.push_back(MatchRules_NoMatchRules_16);

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_17;
        FIX::MatchAlgorithm MatchAlgorithm_17("STRING_1139871627");
        noMatchRules_1_1_2_2.set(MatchAlgorithm_17);
        MatchRules_NoMatchRules_17.insert(MatchAlgorithm_17.getString());
        FIX::MatchType MatchType_22("STRING_M1");
        noMatchRules_1_1_2_2.set(MatchType_22);
        MatchRules_NoMatchRules_17.insert(MatchType_22.getString());
        all_values.push_back(MatchRules_NoMatchRules_17);

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_21;
        FIX::OrdType OrdType_50('M');
        noOrdTypeRules_1_1_2_0.set(OrdType_50);
        OrdTypeRules_NoOrdTypeRules_21.insert(OrdType_50.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_21);

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_22;
        FIX::OrdType OrdType_51('P');
        noOrdTypeRules_1_1_2_1.set(OrdType_51);
        OrdTypeRules_NoOrdTypeRules_22.insert(OrdType_51.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_22);

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_16;
        FIX::TimeInForce TimeInForce_27('8');
        noTimeInForceRules_1_1_2_0.set(TimeInForce_27);
        TimeInForceRules_NoTimeInForceRules_16.insert(TimeInForce_27.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_16);

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_17;
        FIX::TimeInForce TimeInForce_28('3');
        noTimeInForceRules_1_1_2_1.set(TimeInForce_28);
        TimeInForceRules_NoTimeInForceRules_17.insert(TimeInForce_28.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_17);

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_1);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_8;
      FIX::TradingSessionID TradingSessionID_75("STRING_2");
      noTradingSessionRules_1_1_2.set(TradingSessionID_75);
      TradingSessionRulesGrp_NoTradingSessionRules_8.insert(TradingSessionID_75.getString());
      FIX::TradingSessionSubID TradingSessionSubID_75("STRING_6");
      noTradingSessionRules_1_1_2.set(TradingSessionSubID_75);
      TradingSessionRulesGrp_NoTradingSessionRules_8.insert(TradingSessionSubID_75.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_8);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_16;
        FIX::ExecInstValue ExecInstValue_16('2');
        noExecInstRules_1_2_2_0.set(ExecInstValue_16);
        ExecInstRules_NoExecInstRules_16.insert(ExecInstValue_16.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_16);

        noTradingSessionRules_1_1_2.addGroup(noExecInstRules_1_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_2_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_17;
        FIX::ExecInstValue ExecInstValue_17('1');
        noExecInstRules_1_2_2_1.set(ExecInstValue_17);
        ExecInstRules_NoExecInstRules_17.insert(ExecInstValue_17.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_17);

        noTradingSessionRules_1_1_2.addGroup(noExecInstRules_1_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_2_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_18;
        FIX::ExecInstValue ExecInstValue_18('2');
        noExecInstRules_1_2_2_2.set(ExecInstValue_18);
        ExecInstRules_NoExecInstRules_18.insert(ExecInstValue_18.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_18);

        noTradingSessionRules_1_1_2.addGroup(noExecInstRules_1_2_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_18;
        FIX::MDBookType MDBookType_20(1);
        noMDFeedTypes_1_2_2_0.set(MDBookType_20);
        MarketDataFeedTypes_NoMDFeedTypes_18.insert(MDBookType_20.getString());
        FIX::MDFeedType MDFeedType_20("STRING_165401951");
        noMDFeedTypes_1_2_2_0.set(MDFeedType_20);
        MarketDataFeedTypes_NoMDFeedTypes_18.insert(MDFeedType_20.getString());
        FIX::MarketDepth MarketDepth_21(60308243);
        noMDFeedTypes_1_2_2_0.set(MarketDepth_21);
        MarketDataFeedTypes_NoMDFeedTypes_18.insert(MarketDepth_21.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_18);

        noTradingSessionRules_1_1_2.addGroup(noMDFeedTypes_1_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_19;
        FIX::MDBookType MDBookType_21(3);
        noMDFeedTypes_1_2_2_1.set(MDBookType_21);
        MarketDataFeedTypes_NoMDFeedTypes_19.insert(MDBookType_21.getString());
        FIX::MDFeedType MDFeedType_21("STRING_1452264953");
        noMDFeedTypes_1_2_2_1.set(MDFeedType_21);
        MarketDataFeedTypes_NoMDFeedTypes_19.insert(MDFeedType_21.getString());
        FIX::MarketDepth MarketDepth_22(77605547);
        noMDFeedTypes_1_2_2_1.set(MarketDepth_22);
        MarketDataFeedTypes_NoMDFeedTypes_19.insert(MarketDepth_22.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_19);

        noTradingSessionRules_1_1_2.addGroup(noMDFeedTypes_1_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_2_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_20;
        FIX::MDBookType MDBookType_22(3);
        noMDFeedTypes_1_2_2_2.set(MDBookType_22);
        MarketDataFeedTypes_NoMDFeedTypes_20.insert(MDBookType_22.getString());
        FIX::MDFeedType MDFeedType_22("STRING_2034495768");
        noMDFeedTypes_1_2_2_2.set(MDFeedType_22);
        MarketDataFeedTypes_NoMDFeedTypes_20.insert(MDFeedType_22.getString());
        FIX::MarketDepth MarketDepth_23(1780605846);
        noMDFeedTypes_1_2_2_2.set(MarketDepth_23);
        MarketDataFeedTypes_NoMDFeedTypes_20.insert(MarketDepth_23.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_20);

        noTradingSessionRules_1_1_2.addGroup(noMDFeedTypes_1_2_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_18;
        FIX::MatchAlgorithm MatchAlgorithm_18("STRING_619241503");
        noMatchRules_1_2_2_0.set(MatchAlgorithm_18);
        MatchRules_NoMatchRules_18.insert(MatchAlgorithm_18.getString());
        FIX::MatchType MatchType_23("STRING_S5");
        noMatchRules_1_2_2_0.set(MatchType_23);
        MatchRules_NoMatchRules_18.insert(MatchType_23.getString());
        all_values.push_back(MatchRules_NoMatchRules_18);

        noTradingSessionRules_1_1_2.addGroup(noMatchRules_1_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_19;
        FIX::MatchAlgorithm MatchAlgorithm_19("STRING_392315492");
        noMatchRules_1_2_2_1.set(MatchAlgorithm_19);
        MatchRules_NoMatchRules_19.insert(MatchAlgorithm_19.getString());
        FIX::MatchType MatchType_24("STRING_S1");
        noMatchRules_1_2_2_1.set(MatchType_24);
        MatchRules_NoMatchRules_19.insert(MatchType_24.getString());
        all_values.push_back(MatchRules_NoMatchRules_19);

        noTradingSessionRules_1_1_2.addGroup(noMatchRules_1_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_2_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_20;
        FIX::MatchAlgorithm MatchAlgorithm_20("STRING_341610401");
        noMatchRules_1_2_2_2.set(MatchAlgorithm_20);
        MatchRules_NoMatchRules_20.insert(MatchAlgorithm_20.getString());
        FIX::MatchType MatchType_25("STRING_3");
        noMatchRules_1_2_2_2.set(MatchType_25);
        MatchRules_NoMatchRules_20.insert(MatchType_25.getString());
        all_values.push_back(MatchRules_NoMatchRules_20);

        noTradingSessionRules_1_1_2.addGroup(noMatchRules_1_2_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_23;
        FIX::OrdType OrdType_52('J');
        noOrdTypeRules_1_2_2_0.set(OrdType_52);
        OrdTypeRules_NoOrdTypeRules_23.insert(OrdType_52.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_23);

        noTradingSessionRules_1_1_2.addGroup(noOrdTypeRules_1_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_2_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_24;
        FIX::OrdType OrdType_53('6');
        noOrdTypeRules_1_2_2_1.set(OrdType_53);
        OrdTypeRules_NoOrdTypeRules_24.insert(OrdType_53.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_24);

        noTradingSessionRules_1_1_2.addGroup(noOrdTypeRules_1_2_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_18;
        FIX::TimeInForce TimeInForce_29('5');
        noTimeInForceRules_1_2_2_0.set(TimeInForce_29);
        TimeInForceRules_NoTimeInForceRules_18.insert(TimeInForce_29.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_18);

        noTradingSessionRules_1_1_2.addGroup(noTimeInForceRules_1_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_19;
        FIX::TimeInForce TimeInForce_30('2');
        noTimeInForceRules_1_2_2_1.set(TimeInForce_30);
        TimeInForceRules_NoTimeInForceRules_19.insert(TimeInForce_30.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_19);

        noTradingSessionRules_1_1_2.addGroup(noTimeInForceRules_1_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_2_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_20;
        FIX::TimeInForce TimeInForce_31('5');
        noTimeInForceRules_1_2_2_2.set(TimeInForce_31);
        TimeInForceRules_NoTimeInForceRules_20.insert(TimeInForce_31.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_20);

        noTradingSessionRules_1_1_2.addGroup(noTimeInForceRules_1_2_2_2);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_8;
      FIX::EndStrikePxRange EndStrikePxRange_8;
      EndStrikePxRange_8.setString("646398");
      noStrikeRules_1_1_0.set(EndStrikePxRange_8);
      StrikeRules_NoStrikeRules_8.insert(EndStrikePxRange_8.getString());
      FIX::StartStrikePxRange StartStrikePxRange_8;
      StartStrikePxRange_8.setString("6251732");
      noStrikeRules_1_1_0.set(StartStrikePxRange_8);
      StrikeRules_NoStrikeRules_8.insert(StartStrikePxRange_8.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_8(1983103283);
      noStrikeRules_1_1_0.set(StrikeExerciseStyle_8);
      StrikeRules_NoStrikeRules_8.insert(StrikeExerciseStyle_8.getString());
      FIX::StrikeIncrement StrikeIncrement_8;
      StrikeIncrement_8.setString("21155500");
      noStrikeRules_1_1_0.set(StrikeIncrement_8);
      StrikeRules_NoStrikeRules_8.insert(StrikeIncrement_8.getString());
      FIX::StrikeRuleID StrikeRuleID_8("STRING_241572737");
      noStrikeRules_1_1_0.set(StrikeRuleID_8);
      StrikeRules_NoStrikeRules_8.insert(StrikeRuleID_8.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_8);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_15;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_15("MONTHYEAR_1863148996");
        noMaturityRules_1_0_2_0.set(EndMaturityMonthYear_15);
        MaturityRules_NoMaturityRules_15.insert(EndMaturityMonthYear_15.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_15(0);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearFormat_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityMonthYearFormat_15.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_15(227829792);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrement_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityMonthYearIncrement_15.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_15(0);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrementUnits_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityMonthYearIncrementUnits_15.getString());
        FIX::MaturityRuleID MaturityRuleID_15("STRING_1297149317");
        noMaturityRules_1_0_2_0.set(MaturityRuleID_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityRuleID_15.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_15("MONTHYEAR_1680094745");
        noMaturityRules_1_0_2_0.set(StartMaturityMonthYear_15);
        MaturityRules_NoMaturityRules_15.insert(StartMaturityMonthYear_15.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_15);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_16;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_16("MONTHYEAR_2001062787");
        noMaturityRules_1_0_2_1.set(EndMaturityMonthYear_16);
        MaturityRules_NoMaturityRules_16.insert(EndMaturityMonthYear_16.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_16(2);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearFormat_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityMonthYearFormat_16.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_16(1567106865);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrement_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityMonthYearIncrement_16.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_16(2);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrementUnits_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityMonthYearIncrementUnits_16.getString());
        FIX::MaturityRuleID MaturityRuleID_16("STRING_31318151");
        noMaturityRules_1_0_2_1.set(MaturityRuleID_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityRuleID_16.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_16("MONTHYEAR_38864720");
        noMaturityRules_1_0_2_1.set(StartMaturityMonthYear_16);
        MaturityRules_NoMaturityRules_16.insert(StartMaturityMonthYear_16.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_16);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_9;
      FIX::EndStrikePxRange EndStrikePxRange_9;
      EndStrikePxRange_9.setString("8902734");
      noStrikeRules_1_1_1.set(EndStrikePxRange_9);
      StrikeRules_NoStrikeRules_9.insert(EndStrikePxRange_9.getString());
      FIX::StartStrikePxRange StartStrikePxRange_9;
      StartStrikePxRange_9.setString("4236336");
      noStrikeRules_1_1_1.set(StartStrikePxRange_9);
      StrikeRules_NoStrikeRules_9.insert(StartStrikePxRange_9.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_9(1748129594);
      noStrikeRules_1_1_1.set(StrikeExerciseStyle_9);
      StrikeRules_NoStrikeRules_9.insert(StrikeExerciseStyle_9.getString());
      FIX::StrikeIncrement StrikeIncrement_9;
      StrikeIncrement_9.setString("12318838");
      noStrikeRules_1_1_1.set(StrikeIncrement_9);
      StrikeRules_NoStrikeRules_9.insert(StrikeIncrement_9.getString());
      FIX::StrikeRuleID StrikeRuleID_9("STRING_1320263015");
      noStrikeRules_1_1_1.set(StrikeRuleID_9);
      StrikeRules_NoStrikeRules_9.insert(StrikeRuleID_9.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_9);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_17;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_17("MONTHYEAR_2087226042");
        noMaturityRules_1_1_2_0.set(EndMaturityMonthYear_17);
        MaturityRules_NoMaturityRules_17.insert(EndMaturityMonthYear_17.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_17(2);
        noMaturityRules_1_1_2_0.set(MaturityMonthYearFormat_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityMonthYearFormat_17.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_17(54603419);
        noMaturityRules_1_1_2_0.set(MaturityMonthYearIncrement_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityMonthYearIncrement_17.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_17(3);
        noMaturityRules_1_1_2_0.set(MaturityMonthYearIncrementUnits_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityMonthYearIncrementUnits_17.getString());
        FIX::MaturityRuleID MaturityRuleID_17("STRING_918139291");
        noMaturityRules_1_1_2_0.set(MaturityRuleID_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityRuleID_17.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_17("MONTHYEAR_2114488594");
        noMaturityRules_1_1_2_0.set(StartMaturityMonthYear_17);
        MaturityRules_NoMaturityRules_17.insert(StartMaturityMonthYear_17.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_17);

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_18;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_18("MONTHYEAR_1766432520");
        noMaturityRules_1_1_2_1.set(EndMaturityMonthYear_18);
        MaturityRules_NoMaturityRules_18.insert(EndMaturityMonthYear_18.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_18(1);
        noMaturityRules_1_1_2_1.set(MaturityMonthYearFormat_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityMonthYearFormat_18.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_18(592178160);
        noMaturityRules_1_1_2_1.set(MaturityMonthYearIncrement_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityMonthYearIncrement_18.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_18(3);
        noMaturityRules_1_1_2_1.set(MaturityMonthYearIncrementUnits_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityMonthYearIncrementUnits_18.getString());
        FIX::MaturityRuleID MaturityRuleID_18("STRING_950845609");
        noMaturityRules_1_1_2_1.set(MaturityRuleID_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityRuleID_18.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_18("MONTHYEAR_833750897");
        noMaturityRules_1_1_2_1.set(StartMaturityMonthYear_18);
        MaturityRules_NoMaturityRules_18.insert(StartMaturityMonthYear_18.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_18);

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_19;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_19("MONTHYEAR_1664479996");
        noMaturityRules_1_1_2_2.set(EndMaturityMonthYear_19);
        MaturityRules_NoMaturityRules_19.insert(EndMaturityMonthYear_19.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_19(0);
        noMaturityRules_1_1_2_2.set(MaturityMonthYearFormat_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityMonthYearFormat_19.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_19(1206216527);
        noMaturityRules_1_1_2_2.set(MaturityMonthYearIncrement_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityMonthYearIncrement_19.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_19(1);
        noMaturityRules_1_1_2_2.set(MaturityMonthYearIncrementUnits_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityMonthYearIncrementUnits_19.getString());
        FIX::MaturityRuleID MaturityRuleID_19("STRING_442484549");
        noMaturityRules_1_1_2_2.set(MaturityRuleID_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityRuleID_19.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_19("MONTHYEAR_355882196");
        noMaturityRules_1_1_2_2.set(StartMaturityMonthYear_19);
        MaturityRules_NoMaturityRules_19.insert(StartMaturityMonthYear_19.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_19);

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_2);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_10;
      FIX::EndStrikePxRange EndStrikePxRange_10;
      EndStrikePxRange_10.setString("14249208");
      noStrikeRules_1_1_2.set(EndStrikePxRange_10);
      StrikeRules_NoStrikeRules_10.insert(EndStrikePxRange_10.getString());
      FIX::StartStrikePxRange StartStrikePxRange_10;
      StartStrikePxRange_10.setString("2960636");
      noStrikeRules_1_1_2.set(StartStrikePxRange_10);
      StrikeRules_NoStrikeRules_10.insert(StartStrikePxRange_10.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_10(596497306);
      noStrikeRules_1_1_2.set(StrikeExerciseStyle_10);
      StrikeRules_NoStrikeRules_10.insert(StrikeExerciseStyle_10.getString());
      FIX::StrikeIncrement StrikeIncrement_10;
      StrikeIncrement_10.setString("8445441");
      noStrikeRules_1_1_2.set(StrikeIncrement_10);
      StrikeRules_NoStrikeRules_10.insert(StrikeIncrement_10.getString());
      FIX::StrikeRuleID StrikeRuleID_10("STRING_1930248675");
      noStrikeRules_1_1_2.set(StrikeRuleID_10);
      StrikeRules_NoStrikeRules_10.insert(StrikeRuleID_10.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_10);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_20;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_20("MONTHYEAR_883408824");
        noMaturityRules_1_2_2_0.set(EndMaturityMonthYear_20);
        MaturityRules_NoMaturityRules_20.insert(EndMaturityMonthYear_20.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_20(1);
        noMaturityRules_1_2_2_0.set(MaturityMonthYearFormat_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityMonthYearFormat_20.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_20(1051449101);
        noMaturityRules_1_2_2_0.set(MaturityMonthYearIncrement_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityMonthYearIncrement_20.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_20(3);
        noMaturityRules_1_2_2_0.set(MaturityMonthYearIncrementUnits_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityMonthYearIncrementUnits_20.getString());
        FIX::MaturityRuleID MaturityRuleID_20("STRING_1904922385");
        noMaturityRules_1_2_2_0.set(MaturityRuleID_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityRuleID_20.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_20("MONTHYEAR_224228468");
        noMaturityRules_1_2_2_0.set(StartMaturityMonthYear_20);
        MaturityRules_NoMaturityRules_20.insert(StartMaturityMonthYear_20.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_20);

        noStrikeRules_1_1_2.addGroup(noMaturityRules_1_2_2_0);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_2);
    }
    msg.addGroup(noMarketSegments_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_26;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_26("USD");
  msg.set(BenchmarkCurveCurrency_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkCurveCurrency_26.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_26("STRING_LIBOR");
  msg.set(BenchmarkCurveName_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkCurveName_26.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_26("STRING_840956990");
  msg.set(BenchmarkCurvePoint_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkCurvePoint_26.getString());
  FIX::BenchmarkPrice BenchmarkPrice_26;
  BenchmarkPrice_26.setString("9577989");
  msg.set(BenchmarkPrice_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkPrice_26.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_26(1609403868);
  msg.set(BenchmarkPriceType_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkPriceType_26.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_26("STRING_807961936");
  msg.set(BenchmarkSecurityID_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkSecurityID_26.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_26("STRING_576747863");
  msg.set(BenchmarkSecurityIDSource_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkSecurityIDSource_26.getString());
  FIX::Spread Spread_26;
  Spread_26.setString("4446993");
  msg.set(Spread_26);
  SpreadOrBenchmarkCurveData_26.insert(Spread_26.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_26);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinition::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_40;
    FIX::StipulationType StipulationType_40("STRING_AVFICO");
    noStipulations_0_0.set(StipulationType_40);
    Stipulations_NoStipulations_40.insert(StipulationType_40.getString());
    FIX::StipulationValue StipulationValue_40("STRING_1395544995");
    noStipulations_0_0.set(StipulationValue_40);
    Stipulations_NoStipulations_40.insert(StipulationValue_40.getString());
    all_values.push_back(Stipulations_NoStipulations_40);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_41;
    FIX::StipulationType StipulationType_41("STRING_PRIMARY");
    noStipulations_0_1.set(StipulationType_41);
    Stipulations_NoStipulations_41.insert(StipulationType_41.getString());
    FIX::StipulationValue StipulationValue_41("STRING_1695796367");
    noStipulations_0_1.set(StipulationValue_41);
    Stipulations_NoStipulations_41.insert(StipulationValue_41.getString());
    all_values.push_back(Stipulations_NoStipulations_41);

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinition::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_118;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_118("DATA_1292623873");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_118);
    UnderlyingInstrument_118.insert(EncodedUnderlyingIssuer_118.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_118(1440622508);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_118);
    UnderlyingInstrument_118.insert(EncodedUnderlyingIssuerLen_118.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_118("DATA_357056854");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_118);
    UnderlyingInstrument_118.insert(EncodedUnderlyingSecurityDesc_118.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_118(1648506069);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_118);
    UnderlyingInstrument_118.insert(EncodedUnderlyingSecurityDescLen_118.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_118;
    UnderlyingAdjustedQuantity_118.setString("7180597");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_118);
    UnderlyingInstrument_118.insert(UnderlyingAdjustedQuantity_118.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_118;
    UnderlyingAllocationPercent_118.setString("5.430000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_118);
    UnderlyingInstrument_118.insert(UnderlyingAllocationPercent_118.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_118;
    UnderlyingAttachmentPoint_118.setString("97.280000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_118);
    UnderlyingInstrument_118.insert(UnderlyingAttachmentPoint_118.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_118("STRING_1562603850");
    noUnderlyings_0_0.set(UnderlyingCFICode_118);
    UnderlyingInstrument_118.insert(UnderlyingCFICode_118.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_118("STRING_435885570");
    noUnderlyings_0_0.set(UnderlyingCPProgram_118);
    UnderlyingInstrument_118.insert(UnderlyingCPProgram_118.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_118("STRING_725335185");
    noUnderlyings_0_0.set(UnderlyingCPRegType_118);
    UnderlyingInstrument_118.insert(UnderlyingCPRegType_118.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_118;
    UnderlyingCapValue_118.setString("2985290");
    noUnderlyings_0_0.set(UnderlyingCapValue_118);
    UnderlyingInstrument_118.insert(UnderlyingCapValue_118.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_118;
    UnderlyingCashAmount_118.setString("11089240");
    noUnderlyings_0_0.set(UnderlyingCashAmount_118);
    UnderlyingInstrument_118.insert(UnderlyingCashAmount_118.getString());
    FIX::UnderlyingCashType UnderlyingCashType_118("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_118);
    UnderlyingInstrument_118.insert(UnderlyingCashType_118.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_118;
    UnderlyingContractMultiplier_118.setString("7825837");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_118);
    UnderlyingInstrument_118.insert(UnderlyingContractMultiplier_118.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_118(866362813);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_118);
    UnderlyingInstrument_118.insert(UnderlyingContractMultiplierUnit_118.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_118("COUNTRY_2001012755");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_118);
    UnderlyingInstrument_118.insert(UnderlyingCountryOfIssue_118.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_118("LOCALMKTDATE_1568937369");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_118);
    UnderlyingInstrument_118.insert(UnderlyingCouponPaymentDate_118.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_118;
    UnderlyingCouponRate_118.setString("39.450000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_118);
    UnderlyingInstrument_118.insert(UnderlyingCouponRate_118.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_118("STRING_544793684");
    noUnderlyings_0_0.set(UnderlyingCreditRating_118);
    UnderlyingInstrument_118.insert(UnderlyingCreditRating_118.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_118("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_118);
    UnderlyingInstrument_118.insert(UnderlyingCurrency_118.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_118;
    UnderlyingCurrentValue_118.setString("67139");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_118);
    UnderlyingInstrument_118.insert(UnderlyingCurrentValue_118.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_118;
    UnderlyingDetachmentPoint_118.setString("26.470000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_118);
    UnderlyingInstrument_118.insert(UnderlyingDetachmentPoint_118.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_118;
    UnderlyingDirtyPrice_118.setString("20980908");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_118);
    UnderlyingInstrument_118.insert(UnderlyingDirtyPrice_118.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_118;
    UnderlyingEndPrice_118.setString("4514132");
    noUnderlyings_0_0.set(UnderlyingEndPrice_118);
    UnderlyingInstrument_118.insert(UnderlyingEndPrice_118.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_118;
    UnderlyingEndValue_118.setString("3230290");
    noUnderlyings_0_0.set(UnderlyingEndValue_118);
    UnderlyingInstrument_118.insert(UnderlyingEndValue_118.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_118(2129407171);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_118);
    UnderlyingInstrument_118.insert(UnderlyingExerciseStyle_118.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_118;
    UnderlyingFXRate_118.setString("18469582");
    noUnderlyings_0_0.set(UnderlyingFXRate_118);
    UnderlyingInstrument_118.insert(UnderlyingFXRate_118.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_118('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_118);
    UnderlyingInstrument_118.insert(UnderlyingFXRateCalc_118.getString());
    FIX::UnderlyingFactor UnderlyingFactor_118;
    UnderlyingFactor_118.setString("16777198");
    noUnderlyings_0_0.set(UnderlyingFactor_118);
    UnderlyingInstrument_118.insert(UnderlyingFactor_118.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_118(1761530591);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_118);
    UnderlyingInstrument_118.insert(UnderlyingFlowScheduleType_118.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_118("STRING_1702060313");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_118);
    UnderlyingInstrument_118.insert(UnderlyingInstrRegistry_118.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_118("LOCALMKTDATE_970858750");
    noUnderlyings_0_0.set(UnderlyingIssueDate_118);
    UnderlyingInstrument_118.insert(UnderlyingIssueDate_118.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_118("STRING_2118587445");
    noUnderlyings_0_0.set(UnderlyingIssuer_118);
    UnderlyingInstrument_118.insert(UnderlyingIssuer_118.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_118("STRING_1203082735");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_118);
    UnderlyingInstrument_118.insert(UnderlyingLocaleOfIssue_118.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_118("LOCALMKTDATE_1688918496");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_118);
    UnderlyingInstrument_118.insert(UnderlyingMaturityDate_118.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_118("MONTHYEAR_624224341");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_118);
    UnderlyingInstrument_118.insert(UnderlyingMaturityMonthYear_118.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_118("TZTIMEONLY_1300602463");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_118);
    UnderlyingInstrument_118.insert(UnderlyingMaturityTime_118.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_118;
    UnderlyingNotionalPercentageOutstanding_118.setString("86.990000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_118);
    UnderlyingInstrument_118.insert(UnderlyingNotionalPercentageOutstanding_118.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_118('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_118);
    UnderlyingInstrument_118.insert(UnderlyingOptAttribute_118.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_118;
    UnderlyingOriginalNotionalPercentageOutstanding_118.setString("76.480000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_118);
    UnderlyingInstrument_118.insert(UnderlyingOriginalNotionalPercentageOutstanding_118.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_118("STRING_1402567726");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_118);
    UnderlyingInstrument_118.insert(UnderlyingPriceUnitOfMeasure_118.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_118;
    UnderlyingPriceUnitOfMeasureQty_118.setString("215503");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_118);
    UnderlyingInstrument_118.insert(UnderlyingPriceUnitOfMeasureQty_118.getString());
    FIX::UnderlyingProduct UnderlyingProduct_118(1655238287);
    noUnderlyings_0_0.set(UnderlyingProduct_118);
    UnderlyingInstrument_118.insert(UnderlyingProduct_118.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_118(37667876);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_118);
    UnderlyingInstrument_118.insert(UnderlyingPutOrCall_118.getString());
    FIX::UnderlyingPx UnderlyingPx_118;
    UnderlyingPx_118.setString("8879131");
    noUnderlyings_0_0.set(UnderlyingPx_118);
    UnderlyingInstrument_118.insert(UnderlyingPx_118.getString());
    FIX::UnderlyingQty UnderlyingQty_118;
    UnderlyingQty_118.setString("15087673");
    noUnderlyings_0_0.set(UnderlyingQty_118);
    UnderlyingInstrument_118.insert(UnderlyingQty_118.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_118("LOCALMKTDATE_1606605245");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_118);
    UnderlyingInstrument_118.insert(UnderlyingRedemptionDate_118.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_118("STRING_1451457098");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_118);
    UnderlyingInstrument_118.insert(UnderlyingRepoCollateralSecurityType_118.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_118;
    UnderlyingRepurchaseRate_118.setString("10.780000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_118);
    UnderlyingInstrument_118.insert(UnderlyingRepurchaseRate_118.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_118(1869015956);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_118);
    UnderlyingInstrument_118.insert(UnderlyingRepurchaseTerm_118.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_118("STRING_825316387");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_118);
    UnderlyingInstrument_118.insert(UnderlyingRestructuringType_118.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_118("STRING_2060274982");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_118);
    UnderlyingInstrument_118.insert(UnderlyingSecurityDesc_118.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_118("EXCHANGE_791904955");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_118);
    UnderlyingInstrument_118.insert(UnderlyingSecurityExchange_118.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_118("STRING_775923540");
    noUnderlyings_0_0.set(UnderlyingSecurityID_118);
    UnderlyingInstrument_118.insert(UnderlyingSecurityID_118.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_118("STRING_364204624");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_118);
    UnderlyingInstrument_118.insert(UnderlyingSecurityIDSource_118.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_118("STRING_1114934050");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_118);
    UnderlyingInstrument_118.insert(UnderlyingSecuritySubType_118.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_118("STRING_757847063");
    noUnderlyings_0_0.set(UnderlyingSecurityType_118);
    UnderlyingInstrument_118.insert(UnderlyingSecurityType_118.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_118("STRING_63679262");
    noUnderlyings_0_0.set(UnderlyingSeniority_118);
    UnderlyingInstrument_118.insert(UnderlyingSeniority_118.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_118("STRING_1524370490");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_118);
    UnderlyingInstrument_118.insert(UnderlyingSettlMethod_118.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_118(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_118);
    UnderlyingInstrument_118.insert(UnderlyingSettlementType_118.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_118;
    UnderlyingStartValue_118.setString("18252098");
    noUnderlyings_0_0.set(UnderlyingStartValue_118);
    UnderlyingInstrument_118.insert(UnderlyingStartValue_118.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_118("STRING_1078947156");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_118);
    UnderlyingInstrument_118.insert(UnderlyingStateOrProvinceOfIssue_118.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_118("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_118);
    UnderlyingInstrument_118.insert(UnderlyingStrikeCurrency_118.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_118;
    UnderlyingStrikePrice_118.setString("1345462");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_118);
    UnderlyingInstrument_118.insert(UnderlyingStrikePrice_118.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_118("STRING_800376903");
    noUnderlyings_0_0.set(UnderlyingSymbol_118);
    UnderlyingInstrument_118.insert(UnderlyingSymbol_118.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_118("STRING_273054344");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_118);
    UnderlyingInstrument_118.insert(UnderlyingSymbolSfx_118.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_118("STRING_1435148706");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_118);
    UnderlyingInstrument_118.insert(UnderlyingTimeUnit_118.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_118("STRING_1904415602");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_118);
    UnderlyingInstrument_118.insert(UnderlyingUnitOfMeasure_118.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_118;
    UnderlyingUnitOfMeasureQty_118.setString("13331642");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_118);
    UnderlyingInstrument_118.insert(UnderlyingUnitOfMeasureQty_118.getString());
    all_values.push_back(UnderlyingInstrument_118);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_236;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_236("STRING_1159499680");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_236);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_236.insert(UnderlyingSecurityAltID_236.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_236("STRING_1354714595");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_236);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_236.insert(UnderlyingSecurityAltIDSource_236.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_236);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_237;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_237("STRING_821357345");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_237);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_237.insert(UnderlyingSecurityAltID_237.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_237("STRING_1197167556");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_237);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_237.insert(UnderlyingSecurityAltIDSource_237.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_237);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_238;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_238("STRING_95144100");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_238);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_238.insert(UnderlyingSecurityAltID_238.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_238("STRING_182641091");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_238);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_238.insert(UnderlyingSecurityAltIDSource_238.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_238);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_222;
      FIX::UnderlyingStipType UnderlyingStipType_222("STRING_1546601198");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_222);
      UnderlyingStipulations_NoUnderlyingStips_222.insert(UnderlyingStipType_222.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_222("STRING_88718521");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_222);
      UnderlyingStipulations_NoUnderlyingStips_222.insert(UnderlyingStipValue_222.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_222);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_241;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_241("STRING_224433938");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_241);
      UndlyInstrumentParties_NoUndlyInstrumentParties_241.insert(UnderlyingInstrumentPartyID_241.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_241('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_241);
      UndlyInstrumentParties_NoUndlyInstrumentParties_241.insert(UnderlyingInstrumentPartyIDSource_241.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_241(1169726416);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_241);
      UndlyInstrumentParties_NoUndlyInstrumentParties_241.insert(UnderlyingInstrumentPartyRole_241.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_241);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_453("STRING_365714480");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_453);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453.insert(UnderlyingInstrumentPartySubID_453.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_453(137176818);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_453);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453.insert(UnderlyingInstrumentPartySubIDType_453.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_454("STRING_1758204541");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_454);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454.insert(UnderlyingInstrumentPartySubID_454.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_454(429393742);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_454);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454.insert(UnderlyingInstrumentPartySubIDType_454.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_455("STRING_1661547309");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_455);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455.insert(UnderlyingInstrumentPartySubID_455.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_455(2046287846);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_455);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455.insert(UnderlyingInstrumentPartySubIDType_455.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_119;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_119("DATA_107119948");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_119);
    UnderlyingInstrument_119.insert(EncodedUnderlyingIssuer_119.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_119(593010817);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_119);
    UnderlyingInstrument_119.insert(EncodedUnderlyingIssuerLen_119.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_119("DATA_1157746253");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_119);
    UnderlyingInstrument_119.insert(EncodedUnderlyingSecurityDesc_119.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_119(1903433599);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_119);
    UnderlyingInstrument_119.insert(EncodedUnderlyingSecurityDescLen_119.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_119;
    UnderlyingAdjustedQuantity_119.setString("7275570");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_119);
    UnderlyingInstrument_119.insert(UnderlyingAdjustedQuantity_119.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_119;
    UnderlyingAllocationPercent_119.setString("31.560000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_119);
    UnderlyingInstrument_119.insert(UnderlyingAllocationPercent_119.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_119;
    UnderlyingAttachmentPoint_119.setString("42.950000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_119);
    UnderlyingInstrument_119.insert(UnderlyingAttachmentPoint_119.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_119("STRING_15222118");
    noUnderlyings_0_1.set(UnderlyingCFICode_119);
    UnderlyingInstrument_119.insert(UnderlyingCFICode_119.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_119("STRING_1715055111");
    noUnderlyings_0_1.set(UnderlyingCPProgram_119);
    UnderlyingInstrument_119.insert(UnderlyingCPProgram_119.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_119("STRING_1362168550");
    noUnderlyings_0_1.set(UnderlyingCPRegType_119);
    UnderlyingInstrument_119.insert(UnderlyingCPRegType_119.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_119;
    UnderlyingCapValue_119.setString("13288248");
    noUnderlyings_0_1.set(UnderlyingCapValue_119);
    UnderlyingInstrument_119.insert(UnderlyingCapValue_119.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_119;
    UnderlyingCashAmount_119.setString("7270711");
    noUnderlyings_0_1.set(UnderlyingCashAmount_119);
    UnderlyingInstrument_119.insert(UnderlyingCashAmount_119.getString());
    FIX::UnderlyingCashType UnderlyingCashType_119("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_119);
    UnderlyingInstrument_119.insert(UnderlyingCashType_119.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_119;
    UnderlyingContractMultiplier_119.setString("26985");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_119);
    UnderlyingInstrument_119.insert(UnderlyingContractMultiplier_119.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_119(1924238700);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_119);
    UnderlyingInstrument_119.insert(UnderlyingContractMultiplierUnit_119.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_119("COUNTRY_664543597");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_119);
    UnderlyingInstrument_119.insert(UnderlyingCountryOfIssue_119.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_119("LOCALMKTDATE_185339613");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_119);
    UnderlyingInstrument_119.insert(UnderlyingCouponPaymentDate_119.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_119;
    UnderlyingCouponRate_119.setString("42.050000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_119);
    UnderlyingInstrument_119.insert(UnderlyingCouponRate_119.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_119("STRING_63661148");
    noUnderlyings_0_1.set(UnderlyingCreditRating_119);
    UnderlyingInstrument_119.insert(UnderlyingCreditRating_119.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_119("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_119);
    UnderlyingInstrument_119.insert(UnderlyingCurrency_119.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_119;
    UnderlyingCurrentValue_119.setString("2880950");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_119);
    UnderlyingInstrument_119.insert(UnderlyingCurrentValue_119.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_119;
    UnderlyingDetachmentPoint_119.setString("79.900000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_119);
    UnderlyingInstrument_119.insert(UnderlyingDetachmentPoint_119.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_119;
    UnderlyingDirtyPrice_119.setString("19805920");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_119);
    UnderlyingInstrument_119.insert(UnderlyingDirtyPrice_119.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_119;
    UnderlyingEndPrice_119.setString("12884525");
    noUnderlyings_0_1.set(UnderlyingEndPrice_119);
    UnderlyingInstrument_119.insert(UnderlyingEndPrice_119.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_119;
    UnderlyingEndValue_119.setString("6412824");
    noUnderlyings_0_1.set(UnderlyingEndValue_119);
    UnderlyingInstrument_119.insert(UnderlyingEndValue_119.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_119(2117768902);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_119);
    UnderlyingInstrument_119.insert(UnderlyingExerciseStyle_119.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_119;
    UnderlyingFXRate_119.setString("8991734");
    noUnderlyings_0_1.set(UnderlyingFXRate_119);
    UnderlyingInstrument_119.insert(UnderlyingFXRate_119.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_119('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_119);
    UnderlyingInstrument_119.insert(UnderlyingFXRateCalc_119.getString());
    FIX::UnderlyingFactor UnderlyingFactor_119;
    UnderlyingFactor_119.setString("16318325");
    noUnderlyings_0_1.set(UnderlyingFactor_119);
    UnderlyingInstrument_119.insert(UnderlyingFactor_119.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_119(797977655);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_119);
    UnderlyingInstrument_119.insert(UnderlyingFlowScheduleType_119.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_119("STRING_1177796161");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_119);
    UnderlyingInstrument_119.insert(UnderlyingInstrRegistry_119.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_119("LOCALMKTDATE_77359732");
    noUnderlyings_0_1.set(UnderlyingIssueDate_119);
    UnderlyingInstrument_119.insert(UnderlyingIssueDate_119.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_119("STRING_1955723908");
    noUnderlyings_0_1.set(UnderlyingIssuer_119);
    UnderlyingInstrument_119.insert(UnderlyingIssuer_119.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_119("STRING_933746112");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_119);
    UnderlyingInstrument_119.insert(UnderlyingLocaleOfIssue_119.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_119("LOCALMKTDATE_804916792");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_119);
    UnderlyingInstrument_119.insert(UnderlyingMaturityDate_119.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_119("MONTHYEAR_1766363416");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_119);
    UnderlyingInstrument_119.insert(UnderlyingMaturityMonthYear_119.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_119("TZTIMEONLY_962750407");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_119);
    UnderlyingInstrument_119.insert(UnderlyingMaturityTime_119.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_119;
    UnderlyingNotionalPercentageOutstanding_119.setString("89.100000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_119);
    UnderlyingInstrument_119.insert(UnderlyingNotionalPercentageOutstanding_119.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_119('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_119);
    UnderlyingInstrument_119.insert(UnderlyingOptAttribute_119.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_119;
    UnderlyingOriginalNotionalPercentageOutstanding_119.setString("53.090000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_119);
    UnderlyingInstrument_119.insert(UnderlyingOriginalNotionalPercentageOutstanding_119.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_119("STRING_1480086");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_119);
    UnderlyingInstrument_119.insert(UnderlyingPriceUnitOfMeasure_119.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_119;
    UnderlyingPriceUnitOfMeasureQty_119.setString("20610060");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_119);
    UnderlyingInstrument_119.insert(UnderlyingPriceUnitOfMeasureQty_119.getString());
    FIX::UnderlyingProduct UnderlyingProduct_119(746834807);
    noUnderlyings_0_1.set(UnderlyingProduct_119);
    UnderlyingInstrument_119.insert(UnderlyingProduct_119.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_119(4178608);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_119);
    UnderlyingInstrument_119.insert(UnderlyingPutOrCall_119.getString());
    FIX::UnderlyingPx UnderlyingPx_119;
    UnderlyingPx_119.setString("18377610");
    noUnderlyings_0_1.set(UnderlyingPx_119);
    UnderlyingInstrument_119.insert(UnderlyingPx_119.getString());
    FIX::UnderlyingQty UnderlyingQty_119;
    UnderlyingQty_119.setString("14113784");
    noUnderlyings_0_1.set(UnderlyingQty_119);
    UnderlyingInstrument_119.insert(UnderlyingQty_119.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_119("LOCALMKTDATE_189518222");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_119);
    UnderlyingInstrument_119.insert(UnderlyingRedemptionDate_119.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_119("STRING_123321632");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_119);
    UnderlyingInstrument_119.insert(UnderlyingRepoCollateralSecurityType_119.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_119;
    UnderlyingRepurchaseRate_119.setString("95.520000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_119);
    UnderlyingInstrument_119.insert(UnderlyingRepurchaseRate_119.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_119(463576357);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_119);
    UnderlyingInstrument_119.insert(UnderlyingRepurchaseTerm_119.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_119("STRING_934187299");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_119);
    UnderlyingInstrument_119.insert(UnderlyingRestructuringType_119.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_119("STRING_1763134638");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_119);
    UnderlyingInstrument_119.insert(UnderlyingSecurityDesc_119.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_119("EXCHANGE_739144347");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_119);
    UnderlyingInstrument_119.insert(UnderlyingSecurityExchange_119.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_119("STRING_767295735");
    noUnderlyings_0_1.set(UnderlyingSecurityID_119);
    UnderlyingInstrument_119.insert(UnderlyingSecurityID_119.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_119("STRING_904103554");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_119);
    UnderlyingInstrument_119.insert(UnderlyingSecurityIDSource_119.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_119("STRING_1380426818");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_119);
    UnderlyingInstrument_119.insert(UnderlyingSecuritySubType_119.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_119("STRING_737580989");
    noUnderlyings_0_1.set(UnderlyingSecurityType_119);
    UnderlyingInstrument_119.insert(UnderlyingSecurityType_119.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_119("STRING_1803277011");
    noUnderlyings_0_1.set(UnderlyingSeniority_119);
    UnderlyingInstrument_119.insert(UnderlyingSeniority_119.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_119("STRING_303619383");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_119);
    UnderlyingInstrument_119.insert(UnderlyingSettlMethod_119.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_119(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_119);
    UnderlyingInstrument_119.insert(UnderlyingSettlementType_119.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_119;
    UnderlyingStartValue_119.setString("4537710");
    noUnderlyings_0_1.set(UnderlyingStartValue_119);
    UnderlyingInstrument_119.insert(UnderlyingStartValue_119.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_119("STRING_1481415544");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_119);
    UnderlyingInstrument_119.insert(UnderlyingStateOrProvinceOfIssue_119.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_119("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_119);
    UnderlyingInstrument_119.insert(UnderlyingStrikeCurrency_119.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_119;
    UnderlyingStrikePrice_119.setString("2676780");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_119);
    UnderlyingInstrument_119.insert(UnderlyingStrikePrice_119.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_119("STRING_1104206428");
    noUnderlyings_0_1.set(UnderlyingSymbol_119);
    UnderlyingInstrument_119.insert(UnderlyingSymbol_119.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_119("STRING_2028374695");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_119);
    UnderlyingInstrument_119.insert(UnderlyingSymbolSfx_119.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_119("STRING_1230428415");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_119);
    UnderlyingInstrument_119.insert(UnderlyingTimeUnit_119.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_119("STRING_1924345338");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_119);
    UnderlyingInstrument_119.insert(UnderlyingUnitOfMeasure_119.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_119;
    UnderlyingUnitOfMeasureQty_119.setString("12148259");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_119);
    UnderlyingInstrument_119.insert(UnderlyingUnitOfMeasureQty_119.getString());
    all_values.push_back(UnderlyingInstrument_119);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_239;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_239("STRING_1925825424");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_239);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_239.insert(UnderlyingSecurityAltID_239.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_239("STRING_1128348301");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_239);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_239.insert(UnderlyingSecurityAltIDSource_239.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_239);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_223;
      FIX::UnderlyingStipType UnderlyingStipType_223("STRING_1930004033");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_223);
      UnderlyingStipulations_NoUnderlyingStips_223.insert(UnderlyingStipType_223.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_223("STRING_818625728");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_223);
      UnderlyingStipulations_NoUnderlyingStips_223.insert(UnderlyingStipValue_223.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_223);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_242;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_242("STRING_2119522255");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_242);
      UndlyInstrumentParties_NoUndlyInstrumentParties_242.insert(UnderlyingInstrumentPartyID_242.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_242('9');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_242);
      UndlyInstrumentParties_NoUndlyInstrumentParties_242.insert(UnderlyingInstrumentPartyIDSource_242.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_242(746149192);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_242);
      UndlyInstrumentParties_NoUndlyInstrumentParties_242.insert(UnderlyingInstrumentPartyRole_242.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_242);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_456("STRING_1876134660");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_456);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456.insert(UnderlyingInstrumentPartySubID_456.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_456(361800183);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_456);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456.insert(UnderlyingInstrumentPartySubIDType_456.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_243;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_243("STRING_1174759311");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_243);
      UndlyInstrumentParties_NoUndlyInstrumentParties_243.insert(UnderlyingInstrumentPartyID_243.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_243('4');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_243);
      UndlyInstrumentParties_NoUndlyInstrumentParties_243.insert(UnderlyingInstrumentPartyIDSource_243.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_243(1265903737);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_243);
      UndlyInstrumentParties_NoUndlyInstrumentParties_243.insert(UnderlyingInstrumentPartyRole_243.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_243);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_457("STRING_1233527736");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_457);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457.insert(UnderlyingInstrumentPartySubID_457.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_457(921697101);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_457);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457.insert(UnderlyingInstrumentPartySubIDType_457.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_21;
  FIX::Yield Yield_21;
  Yield_21.setString("18.640000");
  msg.set(Yield_21);
  YieldData_21.insert(Yield_21.getString());
  FIX::YieldCalcDate YieldCalcDate_21("LOCALMKTDATE_1455457640");
  msg.set(YieldCalcDate_21);
  YieldData_21.insert(YieldCalcDate_21.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_21("LOCALMKTDATE_1375468119");
  msg.set(YieldRedemptionDate_21);
  YieldData_21.insert(YieldRedemptionDate_21.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_21;
  YieldRedemptionPrice_21.setString("452537");
  msg.set(YieldRedemptionPrice_21);
  YieldData_21.insert(YieldRedemptionPrice_21.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_21(1754747276);
  msg.set(YieldRedemptionPriceType_21);
  YieldData_21.insert(YieldRedemptionPriceType_21.getString());
  FIX::YieldType YieldType_21("STRING_SEMIANNUAL");
  msg.set(YieldType_21);
  YieldData_21.insert(YieldType_21.getString());
  all_values.push_back(YieldData_21);


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
