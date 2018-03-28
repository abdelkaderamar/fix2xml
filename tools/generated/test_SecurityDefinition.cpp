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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityDefinition msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityDefinition_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_20("LOCALMKTDATE_1465970882");
  msg.set(ClearingBusinessDate_20);
  SecurityDefinition_0.insert(ClearingBusinessDate_20.getString());
  FIX::CorporateAction CorporateAction_8("MULTIPLECHARVALUE_U");
  msg.set(CorporateAction_8);
  SecurityDefinition_0.insert(CorporateAction_8.getString());
  FIX::Currency Currency_57("JPY");
  msg.set(Currency_57);
  SecurityDefinition_0.insert(Currency_57.getString());
  FIX::EncodedText EncodedText_86("DATA_1954010818");
  msg.set(EncodedText_86);
  SecurityDefinition_0.insert(EncodedText_86.getString());
  FIX::EncodedTextLen EncodedTextLen_86(1165881077);
  msg.set(EncodedTextLen_86);
  SecurityDefinition_0.insert(EncodedTextLen_86.getString());
  FIX::SecurityReportID SecurityReportID_1(406001879);
  msg.set(SecurityReportID_1);
  SecurityDefinition_0.insert(SecurityReportID_1.getString());
  FIX::SecurityReqID SecurityReqID_3("STRING_588899865");
  msg.set(SecurityReqID_3);
  SecurityDefinition_0.insert(SecurityReqID_3.getString());
  FIX::SecurityResponseID SecurityResponseID_2("STRING_51555477");
  msg.set(SecurityResponseID_2);
  SecurityDefinition_0.insert(SecurityResponseID_2.getString());
  FIX::SecurityResponseType SecurityResponseType_0(5);
  msg.set(SecurityResponseType_0);
  SecurityDefinition_0.insert(SecurityResponseType_0.getString());
  FIX::Text Text_86("STRING_1033626100");
  msg.set(Text_86);
  SecurityDefinition_0.insert(Text_86.getString());
  FIX::TransactTime TransactTime_55(FIX::UTCTIMESTAMP(23, 4, 38, 4, 5, 2007));
  msg.set(TransactTime_55);
  SecurityDefinition_0.insert(TransactTime_55.getString());
  all_values.push_back(SecurityDefinition_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_12;
  FIX::ApplID ApplID_12("STRING_780859669");
  msg.set(ApplID_12);
  ApplicationSequenceControl_12.insert(ApplID_12.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_12(968126071);
  msg.set(ApplLastSeqNum_12);
  ApplicationSequenceControl_12.insert(ApplLastSeqNum_12.getString());
  FIX::ApplResendFlag ApplResendFlag_12(true);
  msg.set(ApplResendFlag_12);
  ApplicationSequenceControl_12.insert(ApplResendFlag_12.getString());
  FIX::ApplSeqNum ApplSeqNum_12(1767554648);
  msg.set(ApplSeqNum_12);
  ApplicationSequenceControl_12.insert(ApplSeqNum_12.getString());
  all_values.push_back(ApplicationSequenceControl_12);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinition::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_116;
    FIX::EncodedLegIssuer EncodedLegIssuer_116("DATA_365380113");
    noLegs_0_0.set(EncodedLegIssuer_116);
    InstrumentLeg_116.insert(EncodedLegIssuer_116.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_116(549548244);
    noLegs_0_0.set(EncodedLegIssuerLen_116);
    InstrumentLeg_116.insert(EncodedLegIssuerLen_116.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_116("DATA_736743244");
    noLegs_0_0.set(EncodedLegSecurityDesc_116);
    InstrumentLeg_116.insert(EncodedLegSecurityDesc_116.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_116(937486558);
    noLegs_0_0.set(EncodedLegSecurityDescLen_116);
    InstrumentLeg_116.insert(EncodedLegSecurityDescLen_116.getString());
    FIX::LegCFICode LegCFICode_116("STRING_1683489133");
    noLegs_0_0.set(LegCFICode_116);
    InstrumentLeg_116.insert(LegCFICode_116.getString());
    FIX::LegContractMultiplier LegContractMultiplier_116;
    LegContractMultiplier_116.setString("10708668");
    noLegs_0_0.set(LegContractMultiplier_116);
    InstrumentLeg_116.insert(LegContractMultiplier_116.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_116(1862031432);
    noLegs_0_0.set(LegContractMultiplierUnit_116);
    InstrumentLeg_116.insert(LegContractMultiplierUnit_116.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_116("MONTHYEAR_1531110881");
    noLegs_0_0.set(LegContractSettlMonth_116);
    InstrumentLeg_116.insert(LegContractSettlMonth_116.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_116("COUNTRY_389354087");
    noLegs_0_0.set(LegCountryOfIssue_116);
    InstrumentLeg_116.insert(LegCountryOfIssue_116.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_116("LOCALMKTDATE_501465342");
    noLegs_0_0.set(LegCouponPaymentDate_116);
    InstrumentLeg_116.insert(LegCouponPaymentDate_116.getString());
    FIX::LegCouponRate LegCouponRate_116;
    LegCouponRate_116.setString("59.980000");
    noLegs_0_0.set(LegCouponRate_116);
    InstrumentLeg_116.insert(LegCouponRate_116.getString());
    FIX::LegCreditRating LegCreditRating_116("STRING_438754684");
    noLegs_0_0.set(LegCreditRating_116);
    InstrumentLeg_116.insert(LegCreditRating_116.getString());
    FIX::LegCurrency LegCurrency_116("EUR");
    noLegs_0_0.set(LegCurrency_116);
    InstrumentLeg_116.insert(LegCurrency_116.getString());
    FIX::LegDatedDate LegDatedDate_116("LOCALMKTDATE_844756563");
    noLegs_0_0.set(LegDatedDate_116);
    InstrumentLeg_116.insert(LegDatedDate_116.getString());
    FIX::LegExerciseStyle LegExerciseStyle_116(896892378);
    noLegs_0_0.set(LegExerciseStyle_116);
    InstrumentLeg_116.insert(LegExerciseStyle_116.getString());
    FIX::LegFactor LegFactor_116;
    LegFactor_116.setString("11878389");
    noLegs_0_0.set(LegFactor_116);
    InstrumentLeg_116.insert(LegFactor_116.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_116(931747538);
    noLegs_0_0.set(LegFlowScheduleType_116);
    InstrumentLeg_116.insert(LegFlowScheduleType_116.getString());
    FIX::LegInstrRegistry LegInstrRegistry_116("STRING_1930518478");
    noLegs_0_0.set(LegInstrRegistry_116);
    InstrumentLeg_116.insert(LegInstrRegistry_116.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_116("LOCALMKTDATE_1656087728");
    noLegs_0_0.set(LegInterestAccrualDate_116);
    InstrumentLeg_116.insert(LegInterestAccrualDate_116.getString());
    FIX::LegIssueDate LegIssueDate_116("LOCALMKTDATE_1165775041");
    noLegs_0_0.set(LegIssueDate_116);
    InstrumentLeg_116.insert(LegIssueDate_116.getString());
    FIX::LegIssuer LegIssuer_116("STRING_399697134");
    noLegs_0_0.set(LegIssuer_116);
    InstrumentLeg_116.insert(LegIssuer_116.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_116("STRING_718743938");
    noLegs_0_0.set(LegLocaleOfIssue_116);
    InstrumentLeg_116.insert(LegLocaleOfIssue_116.getString());
    FIX::LegMaturityDate LegMaturityDate_116("LOCALMKTDATE_643419350");
    noLegs_0_0.set(LegMaturityDate_116);
    InstrumentLeg_116.insert(LegMaturityDate_116.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_116("MONTHYEAR_1936324954");
    noLegs_0_0.set(LegMaturityMonthYear_116);
    InstrumentLeg_116.insert(LegMaturityMonthYear_116.getString());
    FIX::LegMaturityTime LegMaturityTime_116("TZTIMEONLY_1903797147");
    noLegs_0_0.set(LegMaturityTime_116);
    InstrumentLeg_116.insert(LegMaturityTime_116.getString());
    FIX::LegOptAttribute LegOptAttribute_116('1');
    noLegs_0_0.set(LegOptAttribute_116);
    InstrumentLeg_116.insert(LegOptAttribute_116.getString());
    FIX::LegOptionRatio LegOptionRatio_116;
    LegOptionRatio_116.setString("7569673");
    noLegs_0_0.set(LegOptionRatio_116);
    InstrumentLeg_116.insert(LegOptionRatio_116.getString());
    FIX::LegPool LegPool_116("STRING_662694190");
    noLegs_0_0.set(LegPool_116);
    InstrumentLeg_116.insert(LegPool_116.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_116("STRING_1044350019");
    noLegs_0_0.set(LegPriceUnitOfMeasure_116);
    InstrumentLeg_116.insert(LegPriceUnitOfMeasure_116.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_116;
    LegPriceUnitOfMeasureQty_116.setString("16485716");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_116);
    InstrumentLeg_116.insert(LegPriceUnitOfMeasureQty_116.getString());
    FIX::LegProduct LegProduct_116(1028074303);
    noLegs_0_0.set(LegProduct_116);
    InstrumentLeg_116.insert(LegProduct_116.getString());
    FIX::LegPutOrCall LegPutOrCall_116(1593898263);
    noLegs_0_0.set(LegPutOrCall_116);
    InstrumentLeg_116.insert(LegPutOrCall_116.getString());
    FIX::LegRatioQty LegRatioQty_116;
    LegRatioQty_116.setString("2378312");
    noLegs_0_0.set(LegRatioQty_116);
    InstrumentLeg_116.insert(LegRatioQty_116.getString());
    FIX::LegRedemptionDate LegRedemptionDate_116("LOCALMKTDATE_1965560862");
    noLegs_0_0.set(LegRedemptionDate_116);
    InstrumentLeg_116.insert(LegRedemptionDate_116.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_116("STRING_1129903749");
    noLegs_0_0.set(LegRepoCollateralSecurityType_116);
    InstrumentLeg_116.insert(LegRepoCollateralSecurityType_116.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_116;
    LegRepurchaseRate_116.setString("81.460000");
    noLegs_0_0.set(LegRepurchaseRate_116);
    InstrumentLeg_116.insert(LegRepurchaseRate_116.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_116(1680108646);
    noLegs_0_0.set(LegRepurchaseTerm_116);
    InstrumentLeg_116.insert(LegRepurchaseTerm_116.getString());
    FIX::LegSecurityDesc LegSecurityDesc_116("STRING_513530982");
    noLegs_0_0.set(LegSecurityDesc_116);
    InstrumentLeg_116.insert(LegSecurityDesc_116.getString());
    FIX::LegSecurityExchange LegSecurityExchange_116("EXCHANGE_1698052233");
    noLegs_0_0.set(LegSecurityExchange_116);
    InstrumentLeg_116.insert(LegSecurityExchange_116.getString());
    FIX::LegSecurityID LegSecurityID_116("STRING_34090340");
    noLegs_0_0.set(LegSecurityID_116);
    InstrumentLeg_116.insert(LegSecurityID_116.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_116("STRING_483933332");
    noLegs_0_0.set(LegSecurityIDSource_116);
    InstrumentLeg_116.insert(LegSecurityIDSource_116.getString());
    FIX::LegSecuritySubType LegSecuritySubType_116("STRING_2136806917");
    noLegs_0_0.set(LegSecuritySubType_116);
    InstrumentLeg_116.insert(LegSecuritySubType_116.getString());
    FIX::LegSecurityType LegSecurityType_116("STRING_342082852");
    noLegs_0_0.set(LegSecurityType_116);
    InstrumentLeg_116.insert(LegSecurityType_116.getString());
    FIX::LegSide LegSide_116('1');
    noLegs_0_0.set(LegSide_116);
    InstrumentLeg_116.insert(LegSide_116.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_116("STRING_834079833");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_116);
    InstrumentLeg_116.insert(LegStateOrProvinceOfIssue_116.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_116("USD");
    noLegs_0_0.set(LegStrikeCurrency_116);
    InstrumentLeg_116.insert(LegStrikeCurrency_116.getString());
    FIX::LegStrikePrice LegStrikePrice_116;
    LegStrikePrice_116.setString("17658273");
    noLegs_0_0.set(LegStrikePrice_116);
    InstrumentLeg_116.insert(LegStrikePrice_116.getString());
    FIX::LegSymbol LegSymbol_116("STRING_1022010060");
    noLegs_0_0.set(LegSymbol_116);
    InstrumentLeg_116.insert(LegSymbol_116.getString());
    FIX::LegSymbolSfx LegSymbolSfx_116("STRING_169176097");
    noLegs_0_0.set(LegSymbolSfx_116);
    InstrumentLeg_116.insert(LegSymbolSfx_116.getString());
    FIX::LegTimeUnit LegTimeUnit_116("STRING_784118764");
    noLegs_0_0.set(LegTimeUnit_116);
    InstrumentLeg_116.insert(LegTimeUnit_116.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_116("STRING_1421707195");
    noLegs_0_0.set(LegUnitOfMeasure_116);
    InstrumentLeg_116.insert(LegUnitOfMeasure_116.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_116;
    LegUnitOfMeasureQty_116.setString("8879200");
    noLegs_0_0.set(LegUnitOfMeasureQty_116);
    InstrumentLeg_116.insert(LegUnitOfMeasureQty_116.getString());
    all_values.push_back(InstrumentLeg_116);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_235;
      FIX::LegSecurityAltID LegSecurityAltID_235("STRING_1210548501");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_235);
      LegSecAltIDGrp_NoLegSecurityAltID_235.insert(LegSecurityAltID_235.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_235("STRING_644233535");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_235);
      LegSecAltIDGrp_NoLegSecurityAltID_235.insert(LegSecurityAltIDSource_235.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_235);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_117;
    FIX::EncodedLegIssuer EncodedLegIssuer_117("DATA_704333485");
    noLegs_0_1.set(EncodedLegIssuer_117);
    InstrumentLeg_117.insert(EncodedLegIssuer_117.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_117(1967515879);
    noLegs_0_1.set(EncodedLegIssuerLen_117);
    InstrumentLeg_117.insert(EncodedLegIssuerLen_117.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_117("DATA_1306927725");
    noLegs_0_1.set(EncodedLegSecurityDesc_117);
    InstrumentLeg_117.insert(EncodedLegSecurityDesc_117.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_117(1748683504);
    noLegs_0_1.set(EncodedLegSecurityDescLen_117);
    InstrumentLeg_117.insert(EncodedLegSecurityDescLen_117.getString());
    FIX::LegCFICode LegCFICode_117("STRING_1468603927");
    noLegs_0_1.set(LegCFICode_117);
    InstrumentLeg_117.insert(LegCFICode_117.getString());
    FIX::LegContractMultiplier LegContractMultiplier_117;
    LegContractMultiplier_117.setString("1875183");
    noLegs_0_1.set(LegContractMultiplier_117);
    InstrumentLeg_117.insert(LegContractMultiplier_117.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_117(1195098120);
    noLegs_0_1.set(LegContractMultiplierUnit_117);
    InstrumentLeg_117.insert(LegContractMultiplierUnit_117.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_117("MONTHYEAR_1706435220");
    noLegs_0_1.set(LegContractSettlMonth_117);
    InstrumentLeg_117.insert(LegContractSettlMonth_117.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_117("COUNTRY_5595594");
    noLegs_0_1.set(LegCountryOfIssue_117);
    InstrumentLeg_117.insert(LegCountryOfIssue_117.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_117("LOCALMKTDATE_177518221");
    noLegs_0_1.set(LegCouponPaymentDate_117);
    InstrumentLeg_117.insert(LegCouponPaymentDate_117.getString());
    FIX::LegCouponRate LegCouponRate_117;
    LegCouponRate_117.setString("97.180000");
    noLegs_0_1.set(LegCouponRate_117);
    InstrumentLeg_117.insert(LegCouponRate_117.getString());
    FIX::LegCreditRating LegCreditRating_117("STRING_1685704240");
    noLegs_0_1.set(LegCreditRating_117);
    InstrumentLeg_117.insert(LegCreditRating_117.getString());
    FIX::LegCurrency LegCurrency_117("CHF");
    noLegs_0_1.set(LegCurrency_117);
    InstrumentLeg_117.insert(LegCurrency_117.getString());
    FIX::LegDatedDate LegDatedDate_117("LOCALMKTDATE_1719794580");
    noLegs_0_1.set(LegDatedDate_117);
    InstrumentLeg_117.insert(LegDatedDate_117.getString());
    FIX::LegExerciseStyle LegExerciseStyle_117(1174982535);
    noLegs_0_1.set(LegExerciseStyle_117);
    InstrumentLeg_117.insert(LegExerciseStyle_117.getString());
    FIX::LegFactor LegFactor_117;
    LegFactor_117.setString("4075415");
    noLegs_0_1.set(LegFactor_117);
    InstrumentLeg_117.insert(LegFactor_117.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_117(2061877433);
    noLegs_0_1.set(LegFlowScheduleType_117);
    InstrumentLeg_117.insert(LegFlowScheduleType_117.getString());
    FIX::LegInstrRegistry LegInstrRegistry_117("STRING_647715646");
    noLegs_0_1.set(LegInstrRegistry_117);
    InstrumentLeg_117.insert(LegInstrRegistry_117.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_117("LOCALMKTDATE_1241621406");
    noLegs_0_1.set(LegInterestAccrualDate_117);
    InstrumentLeg_117.insert(LegInterestAccrualDate_117.getString());
    FIX::LegIssueDate LegIssueDate_117("LOCALMKTDATE_1153369015");
    noLegs_0_1.set(LegIssueDate_117);
    InstrumentLeg_117.insert(LegIssueDate_117.getString());
    FIX::LegIssuer LegIssuer_117("STRING_1308287663");
    noLegs_0_1.set(LegIssuer_117);
    InstrumentLeg_117.insert(LegIssuer_117.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_117("STRING_859965129");
    noLegs_0_1.set(LegLocaleOfIssue_117);
    InstrumentLeg_117.insert(LegLocaleOfIssue_117.getString());
    FIX::LegMaturityDate LegMaturityDate_117("LOCALMKTDATE_27895428");
    noLegs_0_1.set(LegMaturityDate_117);
    InstrumentLeg_117.insert(LegMaturityDate_117.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_117("MONTHYEAR_1477463760");
    noLegs_0_1.set(LegMaturityMonthYear_117);
    InstrumentLeg_117.insert(LegMaturityMonthYear_117.getString());
    FIX::LegMaturityTime LegMaturityTime_117("TZTIMEONLY_1644083893");
    noLegs_0_1.set(LegMaturityTime_117);
    InstrumentLeg_117.insert(LegMaturityTime_117.getString());
    FIX::LegOptAttribute LegOptAttribute_117('1');
    noLegs_0_1.set(LegOptAttribute_117);
    InstrumentLeg_117.insert(LegOptAttribute_117.getString());
    FIX::LegOptionRatio LegOptionRatio_117;
    LegOptionRatio_117.setString("2179001");
    noLegs_0_1.set(LegOptionRatio_117);
    InstrumentLeg_117.insert(LegOptionRatio_117.getString());
    FIX::LegPool LegPool_117("STRING_924138360");
    noLegs_0_1.set(LegPool_117);
    InstrumentLeg_117.insert(LegPool_117.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_117("STRING_512667476");
    noLegs_0_1.set(LegPriceUnitOfMeasure_117);
    InstrumentLeg_117.insert(LegPriceUnitOfMeasure_117.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_117;
    LegPriceUnitOfMeasureQty_117.setString("8621336");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_117);
    InstrumentLeg_117.insert(LegPriceUnitOfMeasureQty_117.getString());
    FIX::LegProduct LegProduct_117(1628471845);
    noLegs_0_1.set(LegProduct_117);
    InstrumentLeg_117.insert(LegProduct_117.getString());
    FIX::LegPutOrCall LegPutOrCall_117(332699707);
    noLegs_0_1.set(LegPutOrCall_117);
    InstrumentLeg_117.insert(LegPutOrCall_117.getString());
    FIX::LegRatioQty LegRatioQty_117;
    LegRatioQty_117.setString("215777");
    noLegs_0_1.set(LegRatioQty_117);
    InstrumentLeg_117.insert(LegRatioQty_117.getString());
    FIX::LegRedemptionDate LegRedemptionDate_117("LOCALMKTDATE_1229671702");
    noLegs_0_1.set(LegRedemptionDate_117);
    InstrumentLeg_117.insert(LegRedemptionDate_117.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_117("STRING_1801303635");
    noLegs_0_1.set(LegRepoCollateralSecurityType_117);
    InstrumentLeg_117.insert(LegRepoCollateralSecurityType_117.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_117;
    LegRepurchaseRate_117.setString("61.400000");
    noLegs_0_1.set(LegRepurchaseRate_117);
    InstrumentLeg_117.insert(LegRepurchaseRate_117.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_117(277286174);
    noLegs_0_1.set(LegRepurchaseTerm_117);
    InstrumentLeg_117.insert(LegRepurchaseTerm_117.getString());
    FIX::LegSecurityDesc LegSecurityDesc_117("STRING_1360255207");
    noLegs_0_1.set(LegSecurityDesc_117);
    InstrumentLeg_117.insert(LegSecurityDesc_117.getString());
    FIX::LegSecurityExchange LegSecurityExchange_117("EXCHANGE_214691734");
    noLegs_0_1.set(LegSecurityExchange_117);
    InstrumentLeg_117.insert(LegSecurityExchange_117.getString());
    FIX::LegSecurityID LegSecurityID_117("STRING_454804395");
    noLegs_0_1.set(LegSecurityID_117);
    InstrumentLeg_117.insert(LegSecurityID_117.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_117("STRING_80421277");
    noLegs_0_1.set(LegSecurityIDSource_117);
    InstrumentLeg_117.insert(LegSecurityIDSource_117.getString());
    FIX::LegSecuritySubType LegSecuritySubType_117("STRING_1900395975");
    noLegs_0_1.set(LegSecuritySubType_117);
    InstrumentLeg_117.insert(LegSecuritySubType_117.getString());
    FIX::LegSecurityType LegSecurityType_117("STRING_1145853598");
    noLegs_0_1.set(LegSecurityType_117);
    InstrumentLeg_117.insert(LegSecurityType_117.getString());
    FIX::LegSide LegSide_117('4');
    noLegs_0_1.set(LegSide_117);
    InstrumentLeg_117.insert(LegSide_117.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_117("STRING_1472706907");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_117);
    InstrumentLeg_117.insert(LegStateOrProvinceOfIssue_117.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_117("EUR");
    noLegs_0_1.set(LegStrikeCurrency_117);
    InstrumentLeg_117.insert(LegStrikeCurrency_117.getString());
    FIX::LegStrikePrice LegStrikePrice_117;
    LegStrikePrice_117.setString("13871006");
    noLegs_0_1.set(LegStrikePrice_117);
    InstrumentLeg_117.insert(LegStrikePrice_117.getString());
    FIX::LegSymbol LegSymbol_117("STRING_821068131");
    noLegs_0_1.set(LegSymbol_117);
    InstrumentLeg_117.insert(LegSymbol_117.getString());
    FIX::LegSymbolSfx LegSymbolSfx_117("STRING_318911");
    noLegs_0_1.set(LegSymbolSfx_117);
    InstrumentLeg_117.insert(LegSymbolSfx_117.getString());
    FIX::LegTimeUnit LegTimeUnit_117("STRING_392986060");
    noLegs_0_1.set(LegTimeUnit_117);
    InstrumentLeg_117.insert(LegTimeUnit_117.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_117("STRING_2129355794");
    noLegs_0_1.set(LegUnitOfMeasure_117);
    InstrumentLeg_117.insert(LegUnitOfMeasure_117.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_117;
    LegUnitOfMeasureQty_117.setString("8602840");
    noLegs_0_1.set(LegUnitOfMeasureQty_117);
    InstrumentLeg_117.insert(LegUnitOfMeasureQty_117.getString());
    all_values.push_back(InstrumentLeg_117);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_236;
      FIX::LegSecurityAltID LegSecurityAltID_236("STRING_1459335906");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_236);
      LegSecAltIDGrp_NoLegSecurityAltID_236.insert(LegSecurityAltID_236.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_236("STRING_356884286");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_236);
      LegSecAltIDGrp_NoLegSecurityAltID_236.insert(LegSecurityAltIDSource_236.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_236);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_237;
      FIX::LegSecurityAltID LegSecurityAltID_237("STRING_1870484111");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_237);
      LegSecAltIDGrp_NoLegSecurityAltID_237.insert(LegSecurityAltID_237.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_237("STRING_1677236054");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_237);
      LegSecAltIDGrp_NoLegSecurityAltID_237.insert(LegSecurityAltIDSource_237.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_237);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::SecurityDefinition::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_118;
    FIX::EncodedLegIssuer EncodedLegIssuer_118("DATA_1281022646");
    noLegs_0_2.set(EncodedLegIssuer_118);
    InstrumentLeg_118.insert(EncodedLegIssuer_118.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_118(235667939);
    noLegs_0_2.set(EncodedLegIssuerLen_118);
    InstrumentLeg_118.insert(EncodedLegIssuerLen_118.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_118("DATA_391886088");
    noLegs_0_2.set(EncodedLegSecurityDesc_118);
    InstrumentLeg_118.insert(EncodedLegSecurityDesc_118.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_118(762010843);
    noLegs_0_2.set(EncodedLegSecurityDescLen_118);
    InstrumentLeg_118.insert(EncodedLegSecurityDescLen_118.getString());
    FIX::LegCFICode LegCFICode_118("STRING_568367647");
    noLegs_0_2.set(LegCFICode_118);
    InstrumentLeg_118.insert(LegCFICode_118.getString());
    FIX::LegContractMultiplier LegContractMultiplier_118;
    LegContractMultiplier_118.setString("4134638");
    noLegs_0_2.set(LegContractMultiplier_118);
    InstrumentLeg_118.insert(LegContractMultiplier_118.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_118(1991682545);
    noLegs_0_2.set(LegContractMultiplierUnit_118);
    InstrumentLeg_118.insert(LegContractMultiplierUnit_118.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_118("MONTHYEAR_222187634");
    noLegs_0_2.set(LegContractSettlMonth_118);
    InstrumentLeg_118.insert(LegContractSettlMonth_118.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_118("COUNTRY_622559988");
    noLegs_0_2.set(LegCountryOfIssue_118);
    InstrumentLeg_118.insert(LegCountryOfIssue_118.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_118("LOCALMKTDATE_121485071");
    noLegs_0_2.set(LegCouponPaymentDate_118);
    InstrumentLeg_118.insert(LegCouponPaymentDate_118.getString());
    FIX::LegCouponRate LegCouponRate_118;
    LegCouponRate_118.setString("28.410000");
    noLegs_0_2.set(LegCouponRate_118);
    InstrumentLeg_118.insert(LegCouponRate_118.getString());
    FIX::LegCreditRating LegCreditRating_118("STRING_837251722");
    noLegs_0_2.set(LegCreditRating_118);
    InstrumentLeg_118.insert(LegCreditRating_118.getString());
    FIX::LegCurrency LegCurrency_118("JPY");
    noLegs_0_2.set(LegCurrency_118);
    InstrumentLeg_118.insert(LegCurrency_118.getString());
    FIX::LegDatedDate LegDatedDate_118("LOCALMKTDATE_590164049");
    noLegs_0_2.set(LegDatedDate_118);
    InstrumentLeg_118.insert(LegDatedDate_118.getString());
    FIX::LegExerciseStyle LegExerciseStyle_118(1722143064);
    noLegs_0_2.set(LegExerciseStyle_118);
    InstrumentLeg_118.insert(LegExerciseStyle_118.getString());
    FIX::LegFactor LegFactor_118;
    LegFactor_118.setString("140200");
    noLegs_0_2.set(LegFactor_118);
    InstrumentLeg_118.insert(LegFactor_118.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_118(2062870957);
    noLegs_0_2.set(LegFlowScheduleType_118);
    InstrumentLeg_118.insert(LegFlowScheduleType_118.getString());
    FIX::LegInstrRegistry LegInstrRegistry_118("STRING_1895495549");
    noLegs_0_2.set(LegInstrRegistry_118);
    InstrumentLeg_118.insert(LegInstrRegistry_118.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_118("LOCALMKTDATE_920201204");
    noLegs_0_2.set(LegInterestAccrualDate_118);
    InstrumentLeg_118.insert(LegInterestAccrualDate_118.getString());
    FIX::LegIssueDate LegIssueDate_118("LOCALMKTDATE_1302488001");
    noLegs_0_2.set(LegIssueDate_118);
    InstrumentLeg_118.insert(LegIssueDate_118.getString());
    FIX::LegIssuer LegIssuer_118("STRING_569080033");
    noLegs_0_2.set(LegIssuer_118);
    InstrumentLeg_118.insert(LegIssuer_118.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_118("STRING_920520115");
    noLegs_0_2.set(LegLocaleOfIssue_118);
    InstrumentLeg_118.insert(LegLocaleOfIssue_118.getString());
    FIX::LegMaturityDate LegMaturityDate_118("LOCALMKTDATE_1695474061");
    noLegs_0_2.set(LegMaturityDate_118);
    InstrumentLeg_118.insert(LegMaturityDate_118.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_118("MONTHYEAR_550952179");
    noLegs_0_2.set(LegMaturityMonthYear_118);
    InstrumentLeg_118.insert(LegMaturityMonthYear_118.getString());
    FIX::LegMaturityTime LegMaturityTime_118("TZTIMEONLY_1780804156");
    noLegs_0_2.set(LegMaturityTime_118);
    InstrumentLeg_118.insert(LegMaturityTime_118.getString());
    FIX::LegOptAttribute LegOptAttribute_118('2');
    noLegs_0_2.set(LegOptAttribute_118);
    InstrumentLeg_118.insert(LegOptAttribute_118.getString());
    FIX::LegOptionRatio LegOptionRatio_118;
    LegOptionRatio_118.setString("20102880");
    noLegs_0_2.set(LegOptionRatio_118);
    InstrumentLeg_118.insert(LegOptionRatio_118.getString());
    FIX::LegPool LegPool_118("STRING_2137688442");
    noLegs_0_2.set(LegPool_118);
    InstrumentLeg_118.insert(LegPool_118.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_118("STRING_1839356012");
    noLegs_0_2.set(LegPriceUnitOfMeasure_118);
    InstrumentLeg_118.insert(LegPriceUnitOfMeasure_118.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_118;
    LegPriceUnitOfMeasureQty_118.setString("15400404");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_118);
    InstrumentLeg_118.insert(LegPriceUnitOfMeasureQty_118.getString());
    FIX::LegProduct LegProduct_118(1271227440);
    noLegs_0_2.set(LegProduct_118);
    InstrumentLeg_118.insert(LegProduct_118.getString());
    FIX::LegPutOrCall LegPutOrCall_118(2075023952);
    noLegs_0_2.set(LegPutOrCall_118);
    InstrumentLeg_118.insert(LegPutOrCall_118.getString());
    FIX::LegRatioQty LegRatioQty_118;
    LegRatioQty_118.setString("19319265");
    noLegs_0_2.set(LegRatioQty_118);
    InstrumentLeg_118.insert(LegRatioQty_118.getString());
    FIX::LegRedemptionDate LegRedemptionDate_118("LOCALMKTDATE_2033238283");
    noLegs_0_2.set(LegRedemptionDate_118);
    InstrumentLeg_118.insert(LegRedemptionDate_118.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_118("STRING_495907951");
    noLegs_0_2.set(LegRepoCollateralSecurityType_118);
    InstrumentLeg_118.insert(LegRepoCollateralSecurityType_118.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_118;
    LegRepurchaseRate_118.setString("67.800000");
    noLegs_0_2.set(LegRepurchaseRate_118);
    InstrumentLeg_118.insert(LegRepurchaseRate_118.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_118(1877437181);
    noLegs_0_2.set(LegRepurchaseTerm_118);
    InstrumentLeg_118.insert(LegRepurchaseTerm_118.getString());
    FIX::LegSecurityDesc LegSecurityDesc_118("STRING_718095585");
    noLegs_0_2.set(LegSecurityDesc_118);
    InstrumentLeg_118.insert(LegSecurityDesc_118.getString());
    FIX::LegSecurityExchange LegSecurityExchange_118("EXCHANGE_820466768");
    noLegs_0_2.set(LegSecurityExchange_118);
    InstrumentLeg_118.insert(LegSecurityExchange_118.getString());
    FIX::LegSecurityID LegSecurityID_118("STRING_1998922252");
    noLegs_0_2.set(LegSecurityID_118);
    InstrumentLeg_118.insert(LegSecurityID_118.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_118("STRING_153054778");
    noLegs_0_2.set(LegSecurityIDSource_118);
    InstrumentLeg_118.insert(LegSecurityIDSource_118.getString());
    FIX::LegSecuritySubType LegSecuritySubType_118("STRING_1657718491");
    noLegs_0_2.set(LegSecuritySubType_118);
    InstrumentLeg_118.insert(LegSecuritySubType_118.getString());
    FIX::LegSecurityType LegSecurityType_118("STRING_427728071");
    noLegs_0_2.set(LegSecurityType_118);
    InstrumentLeg_118.insert(LegSecurityType_118.getString());
    FIX::LegSide LegSide_118('1');
    noLegs_0_2.set(LegSide_118);
    InstrumentLeg_118.insert(LegSide_118.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_118("STRING_100398892");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_118);
    InstrumentLeg_118.insert(LegStateOrProvinceOfIssue_118.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_118("GBP");
    noLegs_0_2.set(LegStrikeCurrency_118);
    InstrumentLeg_118.insert(LegStrikeCurrency_118.getString());
    FIX::LegStrikePrice LegStrikePrice_118;
    LegStrikePrice_118.setString("157862");
    noLegs_0_2.set(LegStrikePrice_118);
    InstrumentLeg_118.insert(LegStrikePrice_118.getString());
    FIX::LegSymbol LegSymbol_118("STRING_1897883037");
    noLegs_0_2.set(LegSymbol_118);
    InstrumentLeg_118.insert(LegSymbol_118.getString());
    FIX::LegSymbolSfx LegSymbolSfx_118("STRING_602656502");
    noLegs_0_2.set(LegSymbolSfx_118);
    InstrumentLeg_118.insert(LegSymbolSfx_118.getString());
    FIX::LegTimeUnit LegTimeUnit_118("STRING_1318274203");
    noLegs_0_2.set(LegTimeUnit_118);
    InstrumentLeg_118.insert(LegTimeUnit_118.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_118("STRING_319479422");
    noLegs_0_2.set(LegUnitOfMeasure_118);
    InstrumentLeg_118.insert(LegUnitOfMeasure_118.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_118;
    LegUnitOfMeasureQty_118.setString("15231766");
    noLegs_0_2.set(LegUnitOfMeasureQty_118);
    InstrumentLeg_118.insert(LegUnitOfMeasureQty_118.getString());
    all_values.push_back(InstrumentLeg_118);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_238;
      FIX::LegSecurityAltID LegSecurityAltID_238("STRING_870431601");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_238);
      LegSecAltIDGrp_NoLegSecurityAltID_238.insert(LegSecurityAltID_238.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_238("STRING_1156497126");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_238);
      LegSecAltIDGrp_NoLegSecurityAltID_238.insert(LegSecurityAltIDSource_238.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_238);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_73;
  FIX::AttachmentPoint AttachmentPoint_73;
  AttachmentPoint_73.setString("65.180000");
  msg.set(AttachmentPoint_73);
  Instrument_73.insert(AttachmentPoint_73.getString());
  FIX::CFICode CFICode_73("STRING_733236039");
  msg.set(CFICode_73);
  Instrument_73.insert(CFICode_73.getString());
  FIX::CPProgram CPProgram_73(2);
  msg.set(CPProgram_73);
  Instrument_73.insert(CPProgram_73.getString());
  FIX::CPRegType CPRegType_73("STRING_527008882");
  msg.set(CPRegType_73);
  Instrument_73.insert(CPRegType_73.getString());
  FIX::CapPrice CapPrice_73;
  CapPrice_73.setString("1257928");
  msg.set(CapPrice_73);
  Instrument_73.insert(CapPrice_73.getString());
  FIX::ContractMultiplier ContractMultiplier_73;
  ContractMultiplier_73.setString("2704457");
  msg.set(ContractMultiplier_73);
  Instrument_73.insert(ContractMultiplier_73.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_73(1);
  msg.set(ContractMultiplierUnit_73);
  Instrument_73.insert(ContractMultiplierUnit_73.getString());
  FIX::ContractSettlMonth ContractSettlMonth_73("MONTHYEAR_2057719464");
  msg.set(ContractSettlMonth_73);
  Instrument_73.insert(ContractSettlMonth_73.getString());
  FIX::CountryOfIssue CountryOfIssue_73("COUNTRY_156200347");
  msg.set(CountryOfIssue_73);
  Instrument_73.insert(CountryOfIssue_73.getString());
  FIX::CouponPaymentDate CouponPaymentDate_73("LOCALMKTDATE_950457137");
  msg.set(CouponPaymentDate_73);
  Instrument_73.insert(CouponPaymentDate_73.getString());
  FIX::CouponRate CouponRate_73;
  CouponRate_73.setString("25.960000");
  msg.set(CouponRate_73);
  Instrument_73.insert(CouponRate_73.getString());
  FIX::CreditRating CreditRating_73("STRING_2033637528");
  msg.set(CreditRating_73);
  Instrument_73.insert(CreditRating_73.getString());
  FIX::DatedDate DatedDate_73("LOCALMKTDATE_1668552722");
  msg.set(DatedDate_73);
  Instrument_73.insert(DatedDate_73.getString());
  FIX::DetachmentPoint DetachmentPoint_73;
  DetachmentPoint_73.setString("93.650000");
  msg.set(DetachmentPoint_73);
  Instrument_73.insert(DetachmentPoint_73.getString());
  FIX::EncodedIssuer EncodedIssuer_73("DATA_1885076133");
  msg.set(EncodedIssuer_73);
  Instrument_73.insert(EncodedIssuer_73.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_73(1821607500);
  msg.set(EncodedIssuerLen_73);
  Instrument_73.insert(EncodedIssuerLen_73.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_73("DATA_438844208");
  msg.set(EncodedSecurityDesc_73);
  Instrument_73.insert(EncodedSecurityDesc_73.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_73(165320556);
  msg.set(EncodedSecurityDescLen_73);
  Instrument_73.insert(EncodedSecurityDescLen_73.getString());
  FIX::ExerciseStyle ExerciseStyle_73(0);
  msg.set(ExerciseStyle_73);
  Instrument_73.insert(ExerciseStyle_73.getString());
  FIX::Factor Factor_73;
  Factor_73.setString("5392431");
  msg.set(Factor_73);
  Instrument_73.insert(Factor_73.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_73(false);
  msg.set(FlexProductEligibilityIndicator_73);
  Instrument_73.insert(FlexProductEligibilityIndicator_73.getString());
  FIX::FlexibleIndicator FlexibleIndicator_73(false);
  msg.set(FlexibleIndicator_73);
  Instrument_73.insert(FlexibleIndicator_73.getString());
  FIX::FloorPrice FloorPrice_73;
  FloorPrice_73.setString("5550293");
  msg.set(FloorPrice_73);
  Instrument_73.insert(FloorPrice_73.getString());
  FIX::FlowScheduleType FlowScheduleType_73(0);
  msg.set(FlowScheduleType_73);
  Instrument_73.insert(FlowScheduleType_73.getString());
  FIX::InstrRegistry InstrRegistry_73("STRING_1775154549");
  msg.set(InstrRegistry_73);
  Instrument_73.insert(InstrRegistry_73.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_73('1');
  msg.set(InstrmtAssignmentMethod_73);
  Instrument_73.insert(InstrmtAssignmentMethod_73.getString());
  FIX::InterestAccrualDate InterestAccrualDate_73("LOCALMKTDATE_237586854");
  msg.set(InterestAccrualDate_73);
  Instrument_73.insert(InterestAccrualDate_73.getString());
  FIX::IssueDate IssueDate_73("LOCALMKTDATE_1150847519");
  msg.set(IssueDate_73);
  Instrument_73.insert(IssueDate_73.getString());
  FIX::Issuer Issuer_73("STRING_592084473");
  msg.set(Issuer_73);
  Instrument_73.insert(Issuer_73.getString());
  FIX::ListMethod ListMethod_73(0);
  msg.set(ListMethod_73);
  Instrument_73.insert(ListMethod_73.getString());
  FIX::LocaleOfIssue LocaleOfIssue_73("STRING_159860997");
  msg.set(LocaleOfIssue_73);
  Instrument_73.insert(LocaleOfIssue_73.getString());
  FIX::MaturityDate MaturityDate_73("LOCALMKTDATE_1427220991");
  msg.set(MaturityDate_73);
  Instrument_73.insert(MaturityDate_73.getString());
  FIX::MaturityMonthYear MaturityMonthYear_73("MONTHYEAR_1841254495");
  msg.set(MaturityMonthYear_73);
  Instrument_73.insert(MaturityMonthYear_73.getString());
  FIX::MaturityTime MaturityTime_73("TZTIMEONLY_1306562917");
  msg.set(MaturityTime_73);
  Instrument_73.insert(MaturityTime_73.getString());
  FIX::MinPriceIncrement MinPriceIncrement_73;
  MinPriceIncrement_73.setString("19542298");
  msg.set(MinPriceIncrement_73);
  Instrument_73.insert(MinPriceIncrement_73.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_73;
  MinPriceIncrementAmount_73.setString("19670473");
  msg.set(MinPriceIncrementAmount_73);
  Instrument_73.insert(MinPriceIncrementAmount_73.getString());
  FIX::NTPositionLimit NTPositionLimit_73(1577008629);
  msg.set(NTPositionLimit_73);
  Instrument_73.insert(NTPositionLimit_73.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_73;
  NotionalPercentageOutstanding_73.setString("54.120000");
  msg.set(NotionalPercentageOutstanding_73);
  Instrument_73.insert(NotionalPercentageOutstanding_73.getString());
  FIX::OptAttribute OptAttribute_73('1');
  msg.set(OptAttribute_73);
  Instrument_73.insert(OptAttribute_73.getString());
  FIX::OptPayoutAmount OptPayoutAmount_73;
  OptPayoutAmount_73.setString("17332089");
  msg.set(OptPayoutAmount_73);
  Instrument_73.insert(OptPayoutAmount_73.getString());
  FIX::OptPayoutType OptPayoutType_73(3);
  msg.set(OptPayoutType_73);
  Instrument_73.insert(OptPayoutType_73.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_73;
  OriginalNotionalPercentageOutstanding_73.setString("57.910000");
  msg.set(OriginalNotionalPercentageOutstanding_73);
  Instrument_73.insert(OriginalNotionalPercentageOutstanding_73.getString());
  FIX::Pool Pool_73("STRING_1619362857");
  msg.set(Pool_73);
  Instrument_73.insert(Pool_73.getString());
  FIX::PositionLimit PositionLimit_73(732821624);
  msg.set(PositionLimit_73);
  Instrument_73.insert(PositionLimit_73.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_73("STRING_STD");
  msg.set(PriceQuoteMethod_73);
  Instrument_73.insert(PriceQuoteMethod_73.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_73("STRING_1356955342");
  msg.set(PriceUnitOfMeasure_73);
  Instrument_73.insert(PriceUnitOfMeasure_73.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_73;
  PriceUnitOfMeasureQty_73.setString("4069454");
  msg.set(PriceUnitOfMeasureQty_73);
  Instrument_73.insert(PriceUnitOfMeasureQty_73.getString());
  FIX::Product Product_75(6);
  msg.set(Product_75);
  Instrument_73.insert(Product_75.getString());
  FIX::ProductComplex ProductComplex_73("STRING_1522275898");
  msg.set(ProductComplex_73);
  Instrument_73.insert(ProductComplex_73.getString());
  FIX::PutOrCall PutOrCall_73(1);
  msg.set(PutOrCall_73);
  Instrument_73.insert(PutOrCall_73.getString());
  FIX::RedemptionDate RedemptionDate_73("LOCALMKTDATE_1744638817");
  msg.set(RedemptionDate_73);
  Instrument_73.insert(RedemptionDate_73.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_73("STRING_1689983942");
  msg.set(RepoCollateralSecurityType_73);
  Instrument_73.insert(RepoCollateralSecurityType_73.getString());
  FIX::RepurchaseRate RepurchaseRate_73;
  RepurchaseRate_73.setString("26.240000");
  msg.set(RepurchaseRate_73);
  Instrument_73.insert(RepurchaseRate_73.getString());
  FIX::RepurchaseTerm RepurchaseTerm_73(152184471);
  msg.set(RepurchaseTerm_73);
  Instrument_73.insert(RepurchaseTerm_73.getString());
  FIX::RestructuringType RestructuringType_73("STRING_MM");
  msg.set(RestructuringType_73);
  Instrument_73.insert(RestructuringType_73.getString());
  FIX::SecurityDesc SecurityDesc_73("STRING_549673526");
  msg.set(SecurityDesc_73);
  Instrument_73.insert(SecurityDesc_73.getString());
  FIX::SecurityExchange SecurityExchange_73("EXCHANGE_2025487976");
  msg.set(SecurityExchange_73);
  Instrument_73.insert(SecurityExchange_73.getString());
  FIX::SecurityGroup SecurityGroup_73("STRING_1845678229");
  msg.set(SecurityGroup_73);
  Instrument_73.insert(SecurityGroup_73.getString());
  FIX::SecurityID SecurityID_73("STRING_1700521045");
  msg.set(SecurityID_73);
  Instrument_73.insert(SecurityID_73.getString());
  FIX::SecurityIDSource SecurityIDSource_73("STRING_I");
  msg.set(SecurityIDSource_73);
  Instrument_73.insert(SecurityIDSource_73.getString());
  FIX::SecurityStatus SecurityStatus_73("STRING_2");
  msg.set(SecurityStatus_73);
  Instrument_73.insert(SecurityStatus_73.getString());
  FIX::SecuritySubType SecuritySubType_74("STRING_1860382043");
  msg.set(SecuritySubType_74);
  Instrument_73.insert(SecuritySubType_74.getString());
  FIX::SecurityType SecurityType_75("STRING_CP");
  msg.set(SecurityType_75);
  Instrument_73.insert(SecurityType_75.getString());
  FIX::Seniority Seniority_73("STRING_SB");
  msg.set(Seniority_73);
  Instrument_73.insert(Seniority_73.getString());
  FIX::SettlMethod SettlMethod_73('C');
  msg.set(SettlMethod_73);
  Instrument_73.insert(SettlMethod_73.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_73("STRING_1704056019");
  msg.set(SettleOnOpenFlag_73);
  Instrument_73.insert(SettleOnOpenFlag_73.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_73("STRING_319547615");
  msg.set(StateOrProvinceOfIssue_73);
  Instrument_73.insert(StateOrProvinceOfIssue_73.getString());
  FIX::StrikeCurrency StrikeCurrency_73("CAN");
  msg.set(StrikeCurrency_73);
  Instrument_73.insert(StrikeCurrency_73.getString());
  FIX::StrikeMultiplier StrikeMultiplier_73;
  StrikeMultiplier_73.setString("493471");
  msg.set(StrikeMultiplier_73);
  Instrument_73.insert(StrikeMultiplier_73.getString());
  FIX::StrikePrice StrikePrice_73;
  StrikePrice_73.setString("347116");
  msg.set(StrikePrice_73);
  Instrument_73.insert(StrikePrice_73.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_73(4);
  msg.set(StrikePriceBoundaryMethod_73);
  Instrument_73.insert(StrikePriceBoundaryMethod_73.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_73;
  StrikePriceBoundaryPrecision_73.setString("29.540000");
  msg.set(StrikePriceBoundaryPrecision_73);
  Instrument_73.insert(StrikePriceBoundaryPrecision_73.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_73(1);
  msg.set(StrikePriceDeterminationMethod_73);
  Instrument_73.insert(StrikePriceDeterminationMethod_73.getString());
  FIX::StrikeValue StrikeValue_73;
  StrikeValue_73.setString("17624419");
  msg.set(StrikeValue_73);
  Instrument_73.insert(StrikeValue_73.getString());
  FIX::Symbol Symbol_73("STRING_653840814");
  msg.set(Symbol_73);
  Instrument_73.insert(Symbol_73.getString());
  FIX::SymbolSfx SymbolSfx_73("STRING_WI");
  msg.set(SymbolSfx_73);
  Instrument_73.insert(SymbolSfx_73.getString());
  FIX::TimeUnit TimeUnit_73("STRING_D");
  msg.set(TimeUnit_73);
  Instrument_73.insert(TimeUnit_73.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_73(4);
  msg.set(UnderlyingPriceDeterminationMethod_73);
  Instrument_73.insert(UnderlyingPriceDeterminationMethod_73.getString());
  FIX::UnitOfMeasure UnitOfMeasure_73("STRING_Bcf");
  msg.set(UnitOfMeasure_73);
  Instrument_73.insert(UnitOfMeasure_73.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_73;
  UnitOfMeasureQty_73.setString("19188920");
  msg.set(UnitOfMeasureQty_73);
  Instrument_73.insert(UnitOfMeasureQty_73.getString());
  FIX::ValuationMethod ValuationMethod_73("STRING_EQTY");
  msg.set(ValuationMethod_73);
  Instrument_73.insert(ValuationMethod_73.getString());
  all_values.push_back(Instrument_73);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinition::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_140;
    FIX::ComplexEventCondition ComplexEventCondition_140(2);
    noComplexEvents_0_0.set(ComplexEventCondition_140);
    ComplexEvents_NoComplexEvents_140.insert(ComplexEventCondition_140.getString());
    FIX::ComplexEventPrice ComplexEventPrice_140;
    ComplexEventPrice_140.setString("16085761");
    noComplexEvents_0_0.set(ComplexEventPrice_140);
    ComplexEvents_NoComplexEvents_140.insert(ComplexEventPrice_140.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_140(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_140);
    ComplexEvents_NoComplexEvents_140.insert(ComplexEventPriceBoundaryMethod_140.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_140;
    ComplexEventPriceBoundaryPrecision_140.setString("45.150000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_140);
    ComplexEvents_NoComplexEvents_140.insert(ComplexEventPriceBoundaryPrecision_140.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_140(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_140);
    ComplexEvents_NoComplexEvents_140.insert(ComplexEventPriceTimeType_140.getString());
    FIX::ComplexEventType ComplexEventType_140(6);
    noComplexEvents_0_0.set(ComplexEventType_140);
    ComplexEvents_NoComplexEvents_140.insert(ComplexEventType_140.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_140;
    ComplexOptPayoutAmount_140.setString("7961219");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_140);
    ComplexEvents_NoComplexEvents_140.insert(ComplexOptPayoutAmount_140.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_140);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_288;
      FIX::ComplexEventEndDate ComplexEventEndDate_288(FIX::UTCTIMESTAMP(11, 45, 8, 8, 5, 2002));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_288);
      ComplexEventDates_NoComplexEventDates_288.insert(ComplexEventEndDate_288.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_288(FIX::UTCTIMESTAMP(8, 26, 37, 17, 5, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_288);
      ComplexEventDates_NoComplexEventDates_288.insert(ComplexEventStartDate_288.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_288);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_583;
        FIX::ComplexEventEndTime ComplexEventEndTime_583(FIX::UTCTIMEONLY(0, 50, 10));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_583);
        ComplexEventTimes_NoComplexEventTimes_583.insert(ComplexEventEndTime_583.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_583(FIX::UTCTIMEONLY(3, 2, 41));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_583);
        ComplexEventTimes_NoComplexEventTimes_583.insert(ComplexEventStartTime_583.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_583);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_584;
        FIX::ComplexEventEndTime ComplexEventEndTime_584(FIX::UTCTIMEONLY(17, 35, 11));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_584);
        ComplexEventTimes_NoComplexEventTimes_584.insert(ComplexEventEndTime_584.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_584(FIX::UTCTIMEONLY(2, 43, 16));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_584);
        ComplexEventTimes_NoComplexEventTimes_584.insert(ComplexEventStartTime_584.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_584);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_141;
    FIX::ComplexEventCondition ComplexEventCondition_141(1);
    noComplexEvents_0_1.set(ComplexEventCondition_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventCondition_141.getString());
    FIX::ComplexEventPrice ComplexEventPrice_141;
    ComplexEventPrice_141.setString("4654968");
    noComplexEvents_0_1.set(ComplexEventPrice_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventPrice_141.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_141(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventPriceBoundaryMethod_141.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_141;
    ComplexEventPriceBoundaryPrecision_141.setString("31.750000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventPriceBoundaryPrecision_141.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_141(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventPriceTimeType_141.getString());
    FIX::ComplexEventType ComplexEventType_141(2);
    noComplexEvents_0_1.set(ComplexEventType_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventType_141.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_141;
    ComplexOptPayoutAmount_141.setString("11396587");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexOptPayoutAmount_141.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_141);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_289;
      FIX::ComplexEventEndDate ComplexEventEndDate_289(FIX::UTCTIMESTAMP(9, 58, 28, 22, 8, 2015));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_289);
      ComplexEventDates_NoComplexEventDates_289.insert(ComplexEventEndDate_289.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_289(FIX::UTCTIMESTAMP(8, 54, 27, 26, 2, 2009));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_289);
      ComplexEventDates_NoComplexEventDates_289.insert(ComplexEventStartDate_289.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_289);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_585;
        FIX::ComplexEventEndTime ComplexEventEndTime_585(FIX::UTCTIMEONLY(2, 47, 0));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_585);
        ComplexEventTimes_NoComplexEventTimes_585.insert(ComplexEventEndTime_585.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_585(FIX::UTCTIMEONLY(13, 35, 46));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_585);
        ComplexEventTimes_NoComplexEventTimes_585.insert(ComplexEventStartTime_585.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_585);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_586;
        FIX::ComplexEventEndTime ComplexEventEndTime_586(FIX::UTCTIMEONLY(22, 32, 43));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_586);
        ComplexEventTimes_NoComplexEventTimes_586.insert(ComplexEventEndTime_586.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_586(FIX::UTCTIMEONLY(19, 2, 14));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_586);
        ComplexEventTimes_NoComplexEventTimes_586.insert(ComplexEventStartTime_586.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_586);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_290;
      FIX::ComplexEventEndDate ComplexEventEndDate_290(FIX::UTCTIMESTAMP(3, 4, 25, 9, 1, 2005));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_290);
      ComplexEventDates_NoComplexEventDates_290.insert(ComplexEventEndDate_290.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_290(FIX::UTCTIMESTAMP(12, 15, 37, 6, 9, 2010));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_290);
      ComplexEventDates_NoComplexEventDates_290.insert(ComplexEventStartDate_290.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_290);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_587;
        FIX::ComplexEventEndTime ComplexEventEndTime_587(FIX::UTCTIMEONLY(4, 40, 57));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_587);
        ComplexEventTimes_NoComplexEventTimes_587.insert(ComplexEventEndTime_587.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_587(FIX::UTCTIMEONLY(10, 32, 13));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_587);
        ComplexEventTimes_NoComplexEventTimes_587.insert(ComplexEventStartTime_587.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_587);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_588;
        FIX::ComplexEventEndTime ComplexEventEndTime_588(FIX::UTCTIMEONLY(7, 45, 5));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_588);
        ComplexEventTimes_NoComplexEventTimes_588.insert(ComplexEventEndTime_588.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_588(FIX::UTCTIMEONLY(8, 59, 31));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_588);
        ComplexEventTimes_NoComplexEventTimes_588.insert(ComplexEventStartTime_588.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_588);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_291;
      FIX::ComplexEventEndDate ComplexEventEndDate_291(FIX::UTCTIMESTAMP(14, 35, 35, 4, 4, 2008));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_291);
      ComplexEventDates_NoComplexEventDates_291.insert(ComplexEventEndDate_291.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_291(FIX::UTCTIMESTAMP(3, 11, 28, 9, 8, 2002));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_291);
      ComplexEventDates_NoComplexEventDates_291.insert(ComplexEventStartDate_291.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_291);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_589;
        FIX::ComplexEventEndTime ComplexEventEndTime_589(FIX::UTCTIMEONLY(11, 19, 13));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_589);
        ComplexEventTimes_NoComplexEventTimes_589.insert(ComplexEventEndTime_589.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_589(FIX::UTCTIMEONLY(9, 38, 2));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_589);
        ComplexEventTimes_NoComplexEventTimes_589.insert(ComplexEventStartTime_589.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_589);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_590;
        FIX::ComplexEventEndTime ComplexEventEndTime_590(FIX::UTCTIMEONLY(9, 40, 8));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_590);
        ComplexEventTimes_NoComplexEventTimes_590.insert(ComplexEventEndTime_590.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_590(FIX::UTCTIMEONLY(4, 7, 48));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_590);
        ComplexEventTimes_NoComplexEventTimes_590.insert(ComplexEventStartTime_590.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_590);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_591;
        FIX::ComplexEventEndTime ComplexEventEndTime_591(FIX::UTCTIMEONLY(14, 16, 38));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_591);
        ComplexEventTimes_NoComplexEventTimes_591.insert(ComplexEventEndTime_591.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_591(FIX::UTCTIMEONLY(19, 34, 0));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_591);
        ComplexEventTimes_NoComplexEventTimes_591.insert(ComplexEventStartTime_591.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_591);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityDefinition::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_143;
    FIX::EventDate EventDate_143("LOCALMKTDATE_63596978");
    noEvents_0_0.set(EventDate_143);
    EvntGrp_NoEvents_143.insert(EventDate_143.getString());
    FIX::EventPx EventPx_143;
    EventPx_143.setString("13562513");
    noEvents_0_0.set(EventPx_143);
    EvntGrp_NoEvents_143.insert(EventPx_143.getString());
    FIX::EventText EventText_143("STRING_830351936");
    noEvents_0_0.set(EventText_143);
    EvntGrp_NoEvents_143.insert(EventText_143.getString());
    FIX::EventTime EventTime_143(FIX::UTCTIMESTAMP(23, 35, 6, 2, 8, 2011));
    noEvents_0_0.set(EventTime_143);
    EvntGrp_NoEvents_143.insert(EventTime_143.getString());
    FIX::EventType EventType_143(99);
    noEvents_0_0.set(EventType_143);
    EvntGrp_NoEvents_143.insert(EventType_143.getString());
    all_values.push_back(EvntGrp_NoEvents_143);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_144;
    FIX::EventDate EventDate_144("LOCALMKTDATE_150270980");
    noEvents_0_1.set(EventDate_144);
    EvntGrp_NoEvents_144.insert(EventDate_144.getString());
    FIX::EventPx EventPx_144;
    EventPx_144.setString("10333747");
    noEvents_0_1.set(EventPx_144);
    EvntGrp_NoEvents_144.insert(EventPx_144.getString());
    FIX::EventText EventText_144("STRING_248100414");
    noEvents_0_1.set(EventText_144);
    EvntGrp_NoEvents_144.insert(EventText_144.getString());
    FIX::EventTime EventTime_144(FIX::UTCTIMESTAMP(2, 34, 24, 4, 3, 2012));
    noEvents_0_1.set(EventTime_144);
    EvntGrp_NoEvents_144.insert(EventTime_144.getString());
    FIX::EventType EventType_144(9);
    noEvents_0_1.set(EventType_144);
    EvntGrp_NoEvents_144.insert(EventType_144.getString());
    all_values.push_back(EvntGrp_NoEvents_144);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::SecurityDefinition::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_145;
    FIX::EventDate EventDate_145("LOCALMKTDATE_781612109");
    noEvents_0_2.set(EventDate_145);
    EvntGrp_NoEvents_145.insert(EventDate_145.getString());
    FIX::EventPx EventPx_145;
    EventPx_145.setString("13031366");
    noEvents_0_2.set(EventPx_145);
    EvntGrp_NoEvents_145.insert(EventPx_145.getString());
    FIX::EventText EventText_145("STRING_1061990344");
    noEvents_0_2.set(EventText_145);
    EvntGrp_NoEvents_145.insert(EventText_145.getString());
    FIX::EventTime EventTime_145(FIX::UTCTIMESTAMP(4, 12, 33, 12, 12, 2017));
    noEvents_0_2.set(EventTime_145);
    EvntGrp_NoEvents_145.insert(EventTime_145.getString());
    FIX::EventType EventType_145(6);
    noEvents_0_2.set(EventType_145);
    EvntGrp_NoEvents_145.insert(EventType_145.getString());
    all_values.push_back(EvntGrp_NoEvents_145);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinition::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_141;
    FIX::InstrumentPartyID InstrumentPartyID_141("STRING_2082098829");
    noInstrumentParties_0_0.set(InstrumentPartyID_141);
    InstrumentParties_NoInstrumentParties_141.insert(InstrumentPartyID_141.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_141('6');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_141);
    InstrumentParties_NoInstrumentParties_141.insert(InstrumentPartyIDSource_141.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_141(1527828047);
    noInstrumentParties_0_0.set(InstrumentPartyRole_141);
    InstrumentParties_NoInstrumentParties_141.insert(InstrumentPartyRole_141.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_141);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287;
      FIX::InstrumentPartySubID InstrumentPartySubID_287("STRING_1856595434");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_287);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287.insert(InstrumentPartySubID_287.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_287(1372672234);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_287);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287.insert(InstrumentPartySubIDType_287.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288;
      FIX::InstrumentPartySubID InstrumentPartySubID_288("STRING_1771402218");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_288);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288.insert(InstrumentPartySubID_288.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_288(822458585);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_288);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288.insert(InstrumentPartySubIDType_288.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_142;
    FIX::InstrumentPartyID InstrumentPartyID_142("STRING_1522943214");
    noInstrumentParties_0_1.set(InstrumentPartyID_142);
    InstrumentParties_NoInstrumentParties_142.insert(InstrumentPartyID_142.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_142('6');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_142);
    InstrumentParties_NoInstrumentParties_142.insert(InstrumentPartyIDSource_142.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_142(1070558999);
    noInstrumentParties_0_1.set(InstrumentPartyRole_142);
    InstrumentParties_NoInstrumentParties_142.insert(InstrumentPartyRole_142.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_142);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289;
      FIX::InstrumentPartySubID InstrumentPartySubID_289("STRING_1658354030");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_289);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289.insert(InstrumentPartySubID_289.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_289(2060855553);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_289);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289.insert(InstrumentPartySubIDType_289.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290;
      FIX::InstrumentPartySubID InstrumentPartySubID_290("STRING_1057326267");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_290);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290.insert(InstrumentPartySubID_290.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_290(952338890);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_290);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290.insert(InstrumentPartySubIDType_290.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::SecurityDefinition::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_143;
    FIX::InstrumentPartyID InstrumentPartyID_143("STRING_915356632");
    noInstrumentParties_0_2.set(InstrumentPartyID_143);
    InstrumentParties_NoInstrumentParties_143.insert(InstrumentPartyID_143.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_143('7');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_143);
    InstrumentParties_NoInstrumentParties_143.insert(InstrumentPartyIDSource_143.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_143(1678286679);
    noInstrumentParties_0_2.set(InstrumentPartyRole_143);
    InstrumentParties_NoInstrumentParties_143.insert(InstrumentPartyRole_143.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_143);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291;
      FIX::InstrumentPartySubID InstrumentPartySubID_291("STRING_2033585377");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_291);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291.insert(InstrumentPartySubID_291.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_291(592793375);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_291);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291.insert(InstrumentPartySubIDType_291.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinition::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_156;
    FIX::SecurityAltID SecurityAltID_156("STRING_1904995893");
    noSecurityAltID_0_0.set(SecurityAltID_156);
    SecAltIDGrp_NoSecurityAltID_156.insert(SecurityAltID_156.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_156("STRING_2014859387");
    noSecurityAltID_0_0.set(SecurityAltIDSource_156);
    SecAltIDGrp_NoSecurityAltID_156.insert(SecurityAltIDSource_156.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_156);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_157;
    FIX::SecurityAltID SecurityAltID_157("STRING_1210565333");
    noSecurityAltID_0_1.set(SecurityAltID_157);
    SecAltIDGrp_NoSecurityAltID_157.insert(SecurityAltID_157.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_157("STRING_258451101");
    noSecurityAltID_0_1.set(SecurityAltIDSource_157);
    SecAltIDGrp_NoSecurityAltID_157.insert(SecurityAltIDSource_157.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_157);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::SecurityDefinition::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_158;
    FIX::SecurityAltID SecurityAltID_158("STRING_1940798582");
    noSecurityAltID_0_2.set(SecurityAltID_158);
    SecAltIDGrp_NoSecurityAltID_158.insert(SecurityAltID_158.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_158("STRING_1455630365");
    noSecurityAltID_0_2.set(SecurityAltIDSource_158);
    SecAltIDGrp_NoSecurityAltID_158.insert(SecurityAltIDSource_158.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_158);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_146;
  FIX::SecurityXML SecurityXML_147("XMLDATA_2115641326");
  msg.set(SecurityXML_147);
  FIX::SecurityXMLLen SecurityXMLLen_73(549606066);
  msg.set(SecurityXMLLen_73);
  FIX::SecurityXMLSchema SecurityXMLSchema_73("STRING_1390245546");
  msg.set(SecurityXMLSchema_73);
  SecurityXML_146.insert(SecurityXMLSchema_73.getString());
  all_values.push_back(SecurityXML_146);

  // InstrumentExtension
  multiset<string> InstrumentExtension_9;
  FIX::DeliveryForm DeliveryForm_9(1);
  msg.set(DeliveryForm_9);
  InstrumentExtension_9.insert(DeliveryForm_9.getString());
  FIX::PctAtRisk PctAtRisk_9;
  PctAtRisk_9.setString("41.130000");
  msg.set(PctAtRisk_9);
  InstrumentExtension_9.insert(PctAtRisk_9.getString());
  all_values.push_back(InstrumentExtension_9);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinition::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_17;
    FIX::InstrAttribType InstrAttribType_17(19);
    noInstrAttrib_0_0.set(InstrAttribType_17);
    AttrbGrp_NoInstrAttrib_17.insert(InstrAttribType_17.getString());
    FIX::InstrAttribValue InstrAttribValue_17("STRING_1302622699");
    noInstrAttrib_0_0.set(InstrAttribValue_17);
    AttrbGrp_NoInstrAttrib_17.insert(InstrAttribValue_17.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_17);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_18;
    FIX::InstrAttribType InstrAttribType_18(24);
    noInstrAttrib_0_1.set(InstrAttribType_18);
    AttrbGrp_NoInstrAttrib_18.insert(InstrAttribType_18.getString());
    FIX::InstrAttribValue InstrAttribValue_18("STRING_1119326154");
    noInstrAttrib_0_1.set(InstrAttribValue_18);
    AttrbGrp_NoInstrAttrib_18.insert(InstrAttribValue_18.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_18);

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::SecurityDefinition::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_19;
    FIX::InstrAttribType InstrAttribType_19(6);
    noInstrAttrib_0_2.set(InstrAttribType_19);
    AttrbGrp_NoInstrAttrib_19.insert(InstrAttribType_19.getString());
    FIX::InstrAttribValue InstrAttribValue_19("STRING_599319435");
    noInstrAttrib_0_2.set(InstrAttribValue_19);
    AttrbGrp_NoInstrAttrib_19.insert(InstrAttribValue_19.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_19);

    msg.addGroup(noInstrAttrib_0_2);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::SecurityDefinition::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_5;
    FIX::MarketID MarketID_14("EXCHANGE_2022307936");
    noMarketSegments_0_0.set(MarketID_14);
    MarketSegmentGrp_NoMarketSegments_5.insert(MarketID_14.getString());
    FIX::MarketSegmentID MarketSegmentID_14("STRING_110189818");
    noMarketSegments_0_0.set(MarketSegmentID_14);
    MarketSegmentGrp_NoMarketSegments_5.insert(MarketSegmentID_14.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_5);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_7;
    FIX::ExpirationCycle ExpirationCycle_7(1);
    noMarketSegments_0_0.set(ExpirationCycle_7);
    BaseTradingRules_7.insert(ExpirationCycle_7.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_7(3);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_7);
    BaseTradingRules_7.insert(ImpliedMarketIndicator_7.getString());
    FIX::MaxPriceVariation MaxPriceVariation_7;
    MaxPriceVariation_7.setString("10625287");
    noMarketSegments_0_0.set(MaxPriceVariation_7);
    BaseTradingRules_7.insert(MaxPriceVariation_7.getString());
    FIX::MaxTradeVol MaxTradeVol_7;
    MaxTradeVol_7.setString("8711300");
    noMarketSegments_0_0.set(MaxTradeVol_7);
    BaseTradingRules_7.insert(MaxTradeVol_7.getString());
    FIX::MinTradeVol MinTradeVol_7;
    MinTradeVol_7.setString("16625992");
    noMarketSegments_0_0.set(MinTradeVol_7);
    BaseTradingRules_7.insert(MinTradeVol_7.getString());
    FIX::MultilegModel MultilegModel_9(1);
    noMarketSegments_0_0.set(MultilegModel_9);
    BaseTradingRules_7.insert(MultilegModel_9.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_9(4);
    noMarketSegments_0_0.set(MultilegPriceMethod_9);
    BaseTradingRules_7.insert(MultilegPriceMethod_9.getString());
    FIX::PriceType PriceType_41(19);
    noMarketSegments_0_0.set(PriceType_41);
    BaseTradingRules_7.insert(PriceType_41.getString());
    FIX::RoundLot RoundLot_7;
    RoundLot_7.setString("11861251");
    noMarketSegments_0_0.set(RoundLot_7);
    BaseTradingRules_7.insert(RoundLot_7.getString());
    FIX::TradingCurrency TradingCurrency_7("USD");
    noMarketSegments_0_0.set(TradingCurrency_7);
    BaseTradingRules_7.insert(TradingCurrency_7.getString());
    all_values.push_back(BaseTradingRules_7);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_15;
      FIX::LotType LotType_21('2');
      noLotTypeRules_0_1_0.set(LotType_21);
      LotTypeRules_NoLotTypeRules_15.insert(LotType_21.getString());
      FIX::MinLotSize MinLotSize_15;
      MinLotSize_15.setString("15646643");
      noLotTypeRules_0_1_0.set(MinLotSize_15);
      LotTypeRules_NoLotTypeRules_15.insert(MinLotSize_15.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_15);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_16;
      FIX::LotType LotType_22('2');
      noLotTypeRules_0_1_1.set(LotType_22);
      LotTypeRules_NoLotTypeRules_16.insert(LotType_22.getString());
      FIX::MinLotSize MinLotSize_16;
      MinLotSize_16.setString("19684244");
      noLotTypeRules_0_1_1.set(MinLotSize_16);
      LotTypeRules_NoLotTypeRules_16.insert(MinLotSize_16.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_16);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_7;
    FIX::HighLimitPrice HighLimitPrice_7;
    HighLimitPrice_7.setString("15328220");
    noMarketSegments_0_0.set(HighLimitPrice_7);
    PriceLimits_7.insert(HighLimitPrice_7.getString());
    FIX::LowLimitPrice LowLimitPrice_7;
    LowLimitPrice_7.setString("13964218");
    noMarketSegments_0_0.set(LowLimitPrice_7);
    PriceLimits_7.insert(LowLimitPrice_7.getString());
    FIX::PriceLimitType PriceLimitType_7(0);
    noMarketSegments_0_0.set(PriceLimitType_7);
    PriceLimits_7.insert(PriceLimitType_7.getString());
    FIX::TradingReferencePrice TradingReferencePrice_7;
    TradingReferencePrice_7.setString("21205778");
    noMarketSegments_0_0.set(TradingReferencePrice_7);
    PriceLimits_7.insert(TradingReferencePrice_7.getString());
    all_values.push_back(PriceLimits_7);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_14;
      FIX::EndTickPriceRange EndTickPriceRange_14;
      EndTickPriceRange_14.setString("15292938");
      noTickRules_0_1_0.set(EndTickPriceRange_14);
      TickRules_NoTickRules_14.insert(EndTickPriceRange_14.getString());
      FIX::StartTickPriceRange StartTickPriceRange_14;
      StartTickPriceRange_14.setString("2699617");
      noTickRules_0_1_0.set(StartTickPriceRange_14);
      TickRules_NoTickRules_14.insert(StartTickPriceRange_14.getString());
      FIX::TickIncrement TickIncrement_14;
      TickIncrement_14.setString("4815113");
      noTickRules_0_1_0.set(TickIncrement_14);
      TickRules_NoTickRules_14.insert(TickIncrement_14.getString());
      FIX::TickRuleType TickRuleType_14(0);
      noTickRules_0_1_0.set(TickRuleType_14);
      TickRules_NoTickRules_14.insert(TickRuleType_14.getString());
      all_values.push_back(TickRules_NoTickRules_14);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_15;
      FIX::EndTickPriceRange EndTickPriceRange_15;
      EndTickPriceRange_15.setString("13892879");
      noTickRules_0_1_1.set(EndTickPriceRange_15);
      TickRules_NoTickRules_15.insert(EndTickPriceRange_15.getString());
      FIX::StartTickPriceRange StartTickPriceRange_15;
      StartTickPriceRange_15.setString("11595936");
      noTickRules_0_1_1.set(StartTickPriceRange_15);
      TickRules_NoTickRules_15.insert(StartTickPriceRange_15.getString());
      FIX::TickIncrement TickIncrement_15;
      TickIncrement_15.setString("20706394");
      noTickRules_0_1_1.set(TickIncrement_15);
      TickRules_NoTickRules_15.insert(TickIncrement_15.getString());
      FIX::TickRuleType TickRuleType_15(4);
      noTickRules_0_1_1.set(TickRuleType_15);
      TickRules_NoTickRules_15.insert(TickRuleType_15.getString());
      all_values.push_back(TickRules_NoTickRules_15);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_0_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_16;
      FIX::EndTickPriceRange EndTickPriceRange_16;
      EndTickPriceRange_16.setString("10344179");
      noTickRules_0_1_2.set(EndTickPriceRange_16);
      TickRules_NoTickRules_16.insert(EndTickPriceRange_16.getString());
      FIX::StartTickPriceRange StartTickPriceRange_16;
      StartTickPriceRange_16.setString("333455");
      noTickRules_0_1_2.set(StartTickPriceRange_16);
      TickRules_NoTickRules_16.insert(StartTickPriceRange_16.getString());
      FIX::TickIncrement TickIncrement_16;
      TickIncrement_16.setString("13874628");
      noTickRules_0_1_2.set(TickIncrement_16);
      TickRules_NoTickRules_16.insert(TickIncrement_16.getString());
      FIX::TickRuleType TickRuleType_16(4);
      noTickRules_0_1_2.set(TickRuleType_16);
      TickRules_NoTickRules_16.insert(TickRuleType_16.getString());
      all_values.push_back(TickRules_NoTickRules_16);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_11;
      FIX::NestedInstrAttribType NestedInstrAttribType_11(111109220);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_11);
      NestedInstrumentAttribute_NoNestedInstrAttrib_11.insert(NestedInstrAttribType_11.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_11("STRING_1481684129");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_11);
      NestedInstrumentAttribute_NoNestedInstrAttrib_11.insert(NestedInstrAttribValue_11.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_11);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_9;
      FIX::TradingSessionID TradingSessionID_76("STRING_1");
      noTradingSessionRules_0_1_0.set(TradingSessionID_76);
      TradingSessionRulesGrp_NoTradingSessionRules_9.insert(TradingSessionID_76.getString());
      FIX::TradingSessionSubID TradingSessionSubID_76("STRING_7");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_76);
      TradingSessionRulesGrp_NoTradingSessionRules_9.insert(TradingSessionSubID_76.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_9);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_22;
        FIX::ExecInstValue ExecInstValue_22('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_22);
        ExecInstRules_NoExecInstRules_22.insert(ExecInstValue_22.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_22);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_19;
        FIX::MDBookType MDBookType_21(3);
        noMDFeedTypes_0_0_2_0.set(MDBookType_21);
        MarketDataFeedTypes_NoMDFeedTypes_19.insert(MDBookType_21.getString());
        FIX::MDFeedType MDFeedType_21("STRING_346747226");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_21);
        MarketDataFeedTypes_NoMDFeedTypes_19.insert(MDFeedType_21.getString());
        FIX::MarketDepth MarketDepth_23(1606295506);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_23);
        MarketDataFeedTypes_NoMDFeedTypes_19.insert(MarketDepth_23.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_19);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_18;
        FIX::MatchAlgorithm MatchAlgorithm_18("STRING_167688044");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_18);
        MatchRules_NoMatchRules_18.insert(MatchAlgorithm_18.getString());
        FIX::MatchType MatchType_24("STRING_S3");
        noMatchRules_0_0_2_0.set(MatchType_24);
        MatchRules_NoMatchRules_18.insert(MatchType_24.getString());
        all_values.push_back(MatchRules_NoMatchRules_18);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_19;
        FIX::MatchAlgorithm MatchAlgorithm_19("STRING_1877102356");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_19);
        MatchRules_NoMatchRules_19.insert(MatchAlgorithm_19.getString());
        FIX::MatchType MatchType_25("STRING_4");
        noMatchRules_0_0_2_1.set(MatchType_25);
        MatchRules_NoMatchRules_19.insert(MatchType_25.getString());
        all_values.push_back(MatchRules_NoMatchRules_19);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_20;
        FIX::MatchAlgorithm MatchAlgorithm_20("STRING_964728096");
        noMatchRules_0_0_2_2.set(MatchAlgorithm_20);
        MatchRules_NoMatchRules_20.insert(MatchAlgorithm_20.getString());
        FIX::MatchType MatchType_26("STRING_A3");
        noMatchRules_0_0_2_2.set(MatchType_26);
        MatchRules_NoMatchRules_20.insert(MatchType_26.getString());
        all_values.push_back(MatchRules_NoMatchRules_20);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_26;
        FIX::OrdType OrdType_52('C');
        noOrdTypeRules_0_0_2_0.set(OrdType_52);
        OrdTypeRules_NoOrdTypeRules_26.insert(OrdType_52.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_26);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_23;
        FIX::TimeInForce TimeInForce_36('7');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_36);
        TimeInForceRules_NoTimeInForceRules_23.insert(TimeInForce_36.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_23);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_24;
        FIX::TimeInForce TimeInForce_37('2');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_37);
        TimeInForceRules_NoTimeInForceRules_24.insert(TimeInForce_37.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_24);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_25;
        FIX::TimeInForce TimeInForce_38('7');
        noTimeInForceRules_0_0_2_2.set(TimeInForce_38);
        TimeInForceRules_NoTimeInForceRules_25.insert(TimeInForce_38.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_25);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_10;
      FIX::TradingSessionID TradingSessionID_77("STRING_1");
      noTradingSessionRules_0_1_1.set(TradingSessionID_77);
      TradingSessionRulesGrp_NoTradingSessionRules_10.insert(TradingSessionID_77.getString());
      FIX::TradingSessionSubID TradingSessionSubID_77("STRING_6");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_77);
      TradingSessionRulesGrp_NoTradingSessionRules_10.insert(TradingSessionSubID_77.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_10);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_23;
        FIX::ExecInstValue ExecInstValue_23('4');
        noExecInstRules_0_1_2_0.set(ExecInstValue_23);
        ExecInstRules_NoExecInstRules_23.insert(ExecInstValue_23.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_23);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_20;
        FIX::MDBookType MDBookType_22(3);
        noMDFeedTypes_0_1_2_0.set(MDBookType_22);
        MarketDataFeedTypes_NoMDFeedTypes_20.insert(MDBookType_22.getString());
        FIX::MDFeedType MDFeedType_22("STRING_1136896649");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_22);
        MarketDataFeedTypes_NoMDFeedTypes_20.insert(MDFeedType_22.getString());
        FIX::MarketDepth MarketDepth_24(1259271925);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_24);
        MarketDataFeedTypes_NoMDFeedTypes_20.insert(MarketDepth_24.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_20);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_21;
        FIX::MDBookType MDBookType_23(1);
        noMDFeedTypes_0_1_2_1.set(MDBookType_23);
        MarketDataFeedTypes_NoMDFeedTypes_21.insert(MDBookType_23.getString());
        FIX::MDFeedType MDFeedType_23("STRING_678619040");
        noMDFeedTypes_0_1_2_1.set(MDFeedType_23);
        MarketDataFeedTypes_NoMDFeedTypes_21.insert(MDFeedType_23.getString());
        FIX::MarketDepth MarketDepth_25(1790996281);
        noMDFeedTypes_0_1_2_1.set(MarketDepth_25);
        MarketDataFeedTypes_NoMDFeedTypes_21.insert(MarketDepth_25.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_21);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_21;
        FIX::MatchAlgorithm MatchAlgorithm_21("STRING_1406466545");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_21);
        MatchRules_NoMatchRules_21.insert(MatchAlgorithm_21.getString());
        FIX::MatchType MatchType_27("STRING_3");
        noMatchRules_0_1_2_0.set(MatchType_27);
        MatchRules_NoMatchRules_21.insert(MatchType_27.getString());
        all_values.push_back(MatchRules_NoMatchRules_21);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_22;
        FIX::MatchAlgorithm MatchAlgorithm_22("STRING_1661848266");
        noMatchRules_0_1_2_1.set(MatchAlgorithm_22);
        MatchRules_NoMatchRules_22.insert(MatchAlgorithm_22.getString());
        FIX::MatchType MatchType_28("STRING_AQ");
        noMatchRules_0_1_2_1.set(MatchType_28);
        MatchRules_NoMatchRules_22.insert(MatchType_28.getString());
        all_values.push_back(MatchRules_NoMatchRules_22);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_23;
        FIX::MatchAlgorithm MatchAlgorithm_23("STRING_1971696632");
        noMatchRules_0_1_2_2.set(MatchAlgorithm_23);
        MatchRules_NoMatchRules_23.insert(MatchAlgorithm_23.getString());
        FIX::MatchType MatchType_29("STRING_A1");
        noMatchRules_0_1_2_2.set(MatchType_29);
        MatchRules_NoMatchRules_23.insert(MatchType_29.getString());
        all_values.push_back(MatchRules_NoMatchRules_23);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_27;
        FIX::OrdType OrdType_53('5');
        noOrdTypeRules_0_1_2_0.set(OrdType_53);
        OrdTypeRules_NoOrdTypeRules_27.insert(OrdType_53.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_27);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_28;
        FIX::OrdType OrdType_54('B');
        noOrdTypeRules_0_1_2_1.set(OrdType_54);
        OrdTypeRules_NoOrdTypeRules_28.insert(OrdType_54.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_28);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_26;
        FIX::TimeInForce TimeInForce_39('7');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_39);
        TimeInForceRules_NoTimeInForceRules_26.insert(TimeInForce_39.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_26);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_8;
      FIX::EndStrikePxRange EndStrikePxRange_8;
      EndStrikePxRange_8.setString("1591378");
      noStrikeRules_0_1_0.set(EndStrikePxRange_8);
      StrikeRules_NoStrikeRules_8.insert(EndStrikePxRange_8.getString());
      FIX::StartStrikePxRange StartStrikePxRange_8;
      StartStrikePxRange_8.setString("21314600");
      noStrikeRules_0_1_0.set(StartStrikePxRange_8);
      StrikeRules_NoStrikeRules_8.insert(StartStrikePxRange_8.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_8(16744686);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_8);
      StrikeRules_NoStrikeRules_8.insert(StrikeExerciseStyle_8.getString());
      FIX::StrikeIncrement StrikeIncrement_8;
      StrikeIncrement_8.setString("16966402");
      noStrikeRules_0_1_0.set(StrikeIncrement_8);
      StrikeRules_NoStrikeRules_8.insert(StrikeIncrement_8.getString());
      FIX::StrikeRuleID StrikeRuleID_8("STRING_68497427");
      noStrikeRules_0_1_0.set(StrikeRuleID_8);
      StrikeRules_NoStrikeRules_8.insert(StrikeRuleID_8.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_8);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_15;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_15("MONTHYEAR_98768985");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_15);
        MaturityRules_NoMaturityRules_15.insert(EndMaturityMonthYear_15.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_15(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityMonthYearFormat_15.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_15(253938677);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityMonthYearIncrement_15.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_15(1);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityMonthYearIncrementUnits_15.getString());
        FIX::MaturityRuleID MaturityRuleID_15("STRING_117196538");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityRuleID_15.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_15("MONTHYEAR_1402101382");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_15);
        MaturityRules_NoMaturityRules_15.insert(StartMaturityMonthYear_15.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_15);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_16;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_16("MONTHYEAR_938430792");
        noMaturityRules_0_0_2_1.set(EndMaturityMonthYear_16);
        MaturityRules_NoMaturityRules_16.insert(EndMaturityMonthYear_16.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_16(1);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearFormat_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityMonthYearFormat_16.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_16(513889659);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrement_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityMonthYearIncrement_16.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_16(1);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrementUnits_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityMonthYearIncrementUnits_16.getString());
        FIX::MaturityRuleID MaturityRuleID_16("STRING_1932712227");
        noMaturityRules_0_0_2_1.set(MaturityRuleID_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityRuleID_16.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_16("MONTHYEAR_157402292");
        noMaturityRules_0_0_2_1.set(StartMaturityMonthYear_16);
        MaturityRules_NoMaturityRules_16.insert(StartMaturityMonthYear_16.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_16);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_17;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_17("MONTHYEAR_1148479903");
        noMaturityRules_0_0_2_2.set(EndMaturityMonthYear_17);
        MaturityRules_NoMaturityRules_17.insert(EndMaturityMonthYear_17.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_17(1);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearFormat_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityMonthYearFormat_17.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_17(1782351698);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrement_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityMonthYearIncrement_17.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_17(1);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrementUnits_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityMonthYearIncrementUnits_17.getString());
        FIX::MaturityRuleID MaturityRuleID_17("STRING_84542734");
        noMaturityRules_0_0_2_2.set(MaturityRuleID_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityRuleID_17.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_17("MONTHYEAR_1606564682");
        noMaturityRules_0_0_2_2.set(StartMaturityMonthYear_17);
        MaturityRules_NoMaturityRules_17.insert(StartMaturityMonthYear_17.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_17);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_9;
      FIX::EndStrikePxRange EndStrikePxRange_9;
      EndStrikePxRange_9.setString("17835046");
      noStrikeRules_0_1_1.set(EndStrikePxRange_9);
      StrikeRules_NoStrikeRules_9.insert(EndStrikePxRange_9.getString());
      FIX::StartStrikePxRange StartStrikePxRange_9;
      StartStrikePxRange_9.setString("16055544");
      noStrikeRules_0_1_1.set(StartStrikePxRange_9);
      StrikeRules_NoStrikeRules_9.insert(StartStrikePxRange_9.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_9(1598465711);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_9);
      StrikeRules_NoStrikeRules_9.insert(StrikeExerciseStyle_9.getString());
      FIX::StrikeIncrement StrikeIncrement_9;
      StrikeIncrement_9.setString("17483150");
      noStrikeRules_0_1_1.set(StrikeIncrement_9);
      StrikeRules_NoStrikeRules_9.insert(StrikeIncrement_9.getString());
      FIX::StrikeRuleID StrikeRuleID_9("STRING_708701311");
      noStrikeRules_0_1_1.set(StrikeRuleID_9);
      StrikeRules_NoStrikeRules_9.insert(StrikeRuleID_9.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_9);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_18;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_18("MONTHYEAR_530369865");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_18);
        MaturityRules_NoMaturityRules_18.insert(EndMaturityMonthYear_18.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_18(1);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityMonthYearFormat_18.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_18(805733940);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityMonthYearIncrement_18.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_18(3);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityMonthYearIncrementUnits_18.getString());
        FIX::MaturityRuleID MaturityRuleID_18("STRING_416995755");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityRuleID_18.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_18("MONTHYEAR_874231368");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_18);
        MaturityRules_NoMaturityRules_18.insert(StartMaturityMonthYear_18.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_18);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_19;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_19("MONTHYEAR_1040353350");
        noMaturityRules_0_1_2_1.set(EndMaturityMonthYear_19);
        MaturityRules_NoMaturityRules_19.insert(EndMaturityMonthYear_19.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_19(0);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearFormat_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityMonthYearFormat_19.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_19(950405555);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrement_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityMonthYearIncrement_19.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_19(3);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrementUnits_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityMonthYearIncrementUnits_19.getString());
        FIX::MaturityRuleID MaturityRuleID_19("STRING_51080389");
        noMaturityRules_0_1_2_1.set(MaturityRuleID_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityRuleID_19.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_19("MONTHYEAR_1067602093");
        noMaturityRules_0_1_2_1.set(StartMaturityMonthYear_19);
        MaturityRules_NoMaturityRules_19.insert(StartMaturityMonthYear_19.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_19);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_20;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_20("MONTHYEAR_548909761");
        noMaturityRules_0_1_2_2.set(EndMaturityMonthYear_20);
        MaturityRules_NoMaturityRules_20.insert(EndMaturityMonthYear_20.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_20(2);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearFormat_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityMonthYearFormat_20.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_20(174211633);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearIncrement_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityMonthYearIncrement_20.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_20(0);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearIncrementUnits_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityMonthYearIncrementUnits_20.getString());
        FIX::MaturityRuleID MaturityRuleID_20("STRING_517773951");
        noMaturityRules_0_1_2_2.set(MaturityRuleID_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityRuleID_20.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_20("MONTHYEAR_2106923860");
        noMaturityRules_0_1_2_2.set(StartMaturityMonthYear_20);
        MaturityRules_NoMaturityRules_20.insert(StartMaturityMonthYear_20.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_20);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_10;
      FIX::EndStrikePxRange EndStrikePxRange_10;
      EndStrikePxRange_10.setString("12202017");
      noStrikeRules_0_1_2.set(EndStrikePxRange_10);
      StrikeRules_NoStrikeRules_10.insert(EndStrikePxRange_10.getString());
      FIX::StartStrikePxRange StartStrikePxRange_10;
      StartStrikePxRange_10.setString("16662538");
      noStrikeRules_0_1_2.set(StartStrikePxRange_10);
      StrikeRules_NoStrikeRules_10.insert(StartStrikePxRange_10.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_10(1151135337);
      noStrikeRules_0_1_2.set(StrikeExerciseStyle_10);
      StrikeRules_NoStrikeRules_10.insert(StrikeExerciseStyle_10.getString());
      FIX::StrikeIncrement StrikeIncrement_10;
      StrikeIncrement_10.setString("8550697");
      noStrikeRules_0_1_2.set(StrikeIncrement_10);
      StrikeRules_NoStrikeRules_10.insert(StrikeIncrement_10.getString());
      FIX::StrikeRuleID StrikeRuleID_10("STRING_181614727");
      noStrikeRules_0_1_2.set(StrikeRuleID_10);
      StrikeRules_NoStrikeRules_10.insert(StrikeRuleID_10.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_10);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_21;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_21("MONTHYEAR_314150798");
        noMaturityRules_0_2_2_0.set(EndMaturityMonthYear_21);
        MaturityRules_NoMaturityRules_21.insert(EndMaturityMonthYear_21.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_21(2);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearFormat_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityMonthYearFormat_21.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_21(693748917);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrement_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityMonthYearIncrement_21.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_21(1);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrementUnits_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityMonthYearIncrementUnits_21.getString());
        FIX::MaturityRuleID MaturityRuleID_21("STRING_1565950755");
        noMaturityRules_0_2_2_0.set(MaturityRuleID_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityRuleID_21.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_21("MONTHYEAR_1402450228");
        noMaturityRules_0_2_2_0.set(StartMaturityMonthYear_21);
        MaturityRules_NoMaturityRules_21.insert(StartMaturityMonthYear_21.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_21);

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_22;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_22("MONTHYEAR_586890361");
        noMaturityRules_0_2_2_1.set(EndMaturityMonthYear_22);
        MaturityRules_NoMaturityRules_22.insert(EndMaturityMonthYear_22.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_22(1);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearFormat_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityMonthYearFormat_22.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_22(122805738);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearIncrement_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityMonthYearIncrement_22.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_22(2);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearIncrementUnits_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityMonthYearIncrementUnits_22.getString());
        FIX::MaturityRuleID MaturityRuleID_22("STRING_495951524");
        noMaturityRules_0_2_2_1.set(MaturityRuleID_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityRuleID_22.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_22("MONTHYEAR_539801494");
        noMaturityRules_0_2_2_1.set(StartMaturityMonthYear_22);
        MaturityRules_NoMaturityRules_22.insert(StartMaturityMonthYear_22.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_22);

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_23;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_23("MONTHYEAR_119372022");
        noMaturityRules_0_2_2_2.set(EndMaturityMonthYear_23);
        MaturityRules_NoMaturityRules_23.insert(EndMaturityMonthYear_23.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_23(2);
        noMaturityRules_0_2_2_2.set(MaturityMonthYearFormat_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityMonthYearFormat_23.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_23(1055566234);
        noMaturityRules_0_2_2_2.set(MaturityMonthYearIncrement_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityMonthYearIncrement_23.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_23(1);
        noMaturityRules_0_2_2_2.set(MaturityMonthYearIncrementUnits_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityMonthYearIncrementUnits_23.getString());
        FIX::MaturityRuleID MaturityRuleID_23("STRING_683113254");
        noMaturityRules_0_2_2_2.set(MaturityRuleID_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityRuleID_23.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_23("MONTHYEAR_1106646624");
        noMaturityRules_0_2_2_2.set(StartMaturityMonthYear_23);
        MaturityRules_NoMaturityRules_23.insert(StartMaturityMonthYear_23.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_23);

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_2);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_27;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_27("EUR");
  msg.set(BenchmarkCurveCurrency_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkCurveCurrency_27.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_27("STRING_Euribor");
  msg.set(BenchmarkCurveName_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkCurveName_27.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_27("STRING_164107656");
  msg.set(BenchmarkCurvePoint_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkCurvePoint_27.getString());
  FIX::BenchmarkPrice BenchmarkPrice_27;
  BenchmarkPrice_27.setString("1473387");
  msg.set(BenchmarkPrice_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkPrice_27.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_27(466448109);
  msg.set(BenchmarkPriceType_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkPriceType_27.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_27("STRING_123547868");
  msg.set(BenchmarkSecurityID_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkSecurityID_27.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_27("STRING_1367540501");
  msg.set(BenchmarkSecurityIDSource_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkSecurityIDSource_27.getString());
  FIX::Spread Spread_27;
  Spread_27.setString("21327019");
  msg.set(Spread_27);
  SpreadOrBenchmarkCurveData_27.insert(Spread_27.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_27);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinition::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_38;
    FIX::StipulationType StipulationType_38("STRING_REFPRIN");
    noStipulations_0_0.set(StipulationType_38);
    Stipulations_NoStipulations_38.insert(StipulationType_38.getString());
    FIX::StipulationValue StipulationValue_38("STRING_166833043");
    noStipulations_0_0.set(StipulationValue_38);
    Stipulations_NoStipulations_38.insert(StipulationValue_38.getString());
    all_values.push_back(Stipulations_NoStipulations_38);

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinition::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_112;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_112("DATA_389277414");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_112);
    UnderlyingInstrument_112.insert(EncodedUnderlyingIssuer_112.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_112(2131952416);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_112);
    UnderlyingInstrument_112.insert(EncodedUnderlyingIssuerLen_112.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_112("DATA_1056626547");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_112);
    UnderlyingInstrument_112.insert(EncodedUnderlyingSecurityDesc_112.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_112(154410275);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_112);
    UnderlyingInstrument_112.insert(EncodedUnderlyingSecurityDescLen_112.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_112;
    UnderlyingAdjustedQuantity_112.setString("15504195");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_112);
    UnderlyingInstrument_112.insert(UnderlyingAdjustedQuantity_112.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_112;
    UnderlyingAllocationPercent_112.setString("31.270000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_112);
    UnderlyingInstrument_112.insert(UnderlyingAllocationPercent_112.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_112;
    UnderlyingAttachmentPoint_112.setString("6.370000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_112);
    UnderlyingInstrument_112.insert(UnderlyingAttachmentPoint_112.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_112("STRING_1499256496");
    noUnderlyings_0_0.set(UnderlyingCFICode_112);
    UnderlyingInstrument_112.insert(UnderlyingCFICode_112.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_112("STRING_434398866");
    noUnderlyings_0_0.set(UnderlyingCPProgram_112);
    UnderlyingInstrument_112.insert(UnderlyingCPProgram_112.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_112("STRING_2133924939");
    noUnderlyings_0_0.set(UnderlyingCPRegType_112);
    UnderlyingInstrument_112.insert(UnderlyingCPRegType_112.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_112;
    UnderlyingCapValue_112.setString("19952080");
    noUnderlyings_0_0.set(UnderlyingCapValue_112);
    UnderlyingInstrument_112.insert(UnderlyingCapValue_112.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_112;
    UnderlyingCashAmount_112.setString("9742003");
    noUnderlyings_0_0.set(UnderlyingCashAmount_112);
    UnderlyingInstrument_112.insert(UnderlyingCashAmount_112.getString());
    FIX::UnderlyingCashType UnderlyingCashType_112("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_112);
    UnderlyingInstrument_112.insert(UnderlyingCashType_112.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_112;
    UnderlyingContractMultiplier_112.setString("13840292");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_112);
    UnderlyingInstrument_112.insert(UnderlyingContractMultiplier_112.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_112(2029766594);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_112);
    UnderlyingInstrument_112.insert(UnderlyingContractMultiplierUnit_112.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_112("COUNTRY_1175590890");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_112);
    UnderlyingInstrument_112.insert(UnderlyingCountryOfIssue_112.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_112("LOCALMKTDATE_2067142501");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_112);
    UnderlyingInstrument_112.insert(UnderlyingCouponPaymentDate_112.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_112;
    UnderlyingCouponRate_112.setString("95.700000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_112);
    UnderlyingInstrument_112.insert(UnderlyingCouponRate_112.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_112("STRING_1165486913");
    noUnderlyings_0_0.set(UnderlyingCreditRating_112);
    UnderlyingInstrument_112.insert(UnderlyingCreditRating_112.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_112("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_112);
    UnderlyingInstrument_112.insert(UnderlyingCurrency_112.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_112;
    UnderlyingCurrentValue_112.setString("13295945");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_112);
    UnderlyingInstrument_112.insert(UnderlyingCurrentValue_112.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_112;
    UnderlyingDetachmentPoint_112.setString("6.570000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_112);
    UnderlyingInstrument_112.insert(UnderlyingDetachmentPoint_112.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_112;
    UnderlyingDirtyPrice_112.setString("14040518");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_112);
    UnderlyingInstrument_112.insert(UnderlyingDirtyPrice_112.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_112;
    UnderlyingEndPrice_112.setString("14531424");
    noUnderlyings_0_0.set(UnderlyingEndPrice_112);
    UnderlyingInstrument_112.insert(UnderlyingEndPrice_112.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_112;
    UnderlyingEndValue_112.setString("5190775");
    noUnderlyings_0_0.set(UnderlyingEndValue_112);
    UnderlyingInstrument_112.insert(UnderlyingEndValue_112.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_112(1389270154);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_112);
    UnderlyingInstrument_112.insert(UnderlyingExerciseStyle_112.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_112;
    UnderlyingFXRate_112.setString("5803419");
    noUnderlyings_0_0.set(UnderlyingFXRate_112);
    UnderlyingInstrument_112.insert(UnderlyingFXRate_112.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_112('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_112);
    UnderlyingInstrument_112.insert(UnderlyingFXRateCalc_112.getString());
    FIX::UnderlyingFactor UnderlyingFactor_112;
    UnderlyingFactor_112.setString("15561031");
    noUnderlyings_0_0.set(UnderlyingFactor_112);
    UnderlyingInstrument_112.insert(UnderlyingFactor_112.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_112(943219626);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_112);
    UnderlyingInstrument_112.insert(UnderlyingFlowScheduleType_112.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_112("STRING_983481541");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_112);
    UnderlyingInstrument_112.insert(UnderlyingInstrRegistry_112.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_112("LOCALMKTDATE_1540571965");
    noUnderlyings_0_0.set(UnderlyingIssueDate_112);
    UnderlyingInstrument_112.insert(UnderlyingIssueDate_112.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_112("STRING_1999846173");
    noUnderlyings_0_0.set(UnderlyingIssuer_112);
    UnderlyingInstrument_112.insert(UnderlyingIssuer_112.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_112("STRING_1137891816");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_112);
    UnderlyingInstrument_112.insert(UnderlyingLocaleOfIssue_112.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_112("LOCALMKTDATE_943507841");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_112);
    UnderlyingInstrument_112.insert(UnderlyingMaturityDate_112.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_112("MONTHYEAR_163955652");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_112);
    UnderlyingInstrument_112.insert(UnderlyingMaturityMonthYear_112.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_112("TZTIMEONLY_1879192453");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_112);
    UnderlyingInstrument_112.insert(UnderlyingMaturityTime_112.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_112;
    UnderlyingNotionalPercentageOutstanding_112.setString("6.890000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_112);
    UnderlyingInstrument_112.insert(UnderlyingNotionalPercentageOutstanding_112.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_112('5');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_112);
    UnderlyingInstrument_112.insert(UnderlyingOptAttribute_112.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_112;
    UnderlyingOriginalNotionalPercentageOutstanding_112.setString("37.440000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_112);
    UnderlyingInstrument_112.insert(UnderlyingOriginalNotionalPercentageOutstanding_112.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_112("STRING_143005062");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_112);
    UnderlyingInstrument_112.insert(UnderlyingPriceUnitOfMeasure_112.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_112;
    UnderlyingPriceUnitOfMeasureQty_112.setString("15725548");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_112);
    UnderlyingInstrument_112.insert(UnderlyingPriceUnitOfMeasureQty_112.getString());
    FIX::UnderlyingProduct UnderlyingProduct_112(1971447057);
    noUnderlyings_0_0.set(UnderlyingProduct_112);
    UnderlyingInstrument_112.insert(UnderlyingProduct_112.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_112(1527034310);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_112);
    UnderlyingInstrument_112.insert(UnderlyingPutOrCall_112.getString());
    FIX::UnderlyingPx UnderlyingPx_112;
    UnderlyingPx_112.setString("14548378");
    noUnderlyings_0_0.set(UnderlyingPx_112);
    UnderlyingInstrument_112.insert(UnderlyingPx_112.getString());
    FIX::UnderlyingQty UnderlyingQty_112;
    UnderlyingQty_112.setString("9995543");
    noUnderlyings_0_0.set(UnderlyingQty_112);
    UnderlyingInstrument_112.insert(UnderlyingQty_112.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_112("LOCALMKTDATE_1446693163");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_112);
    UnderlyingInstrument_112.insert(UnderlyingRedemptionDate_112.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_112("STRING_296283747");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_112);
    UnderlyingInstrument_112.insert(UnderlyingRepoCollateralSecurityType_112.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_112;
    UnderlyingRepurchaseRate_112.setString("75.650000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_112);
    UnderlyingInstrument_112.insert(UnderlyingRepurchaseRate_112.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_112(450891384);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_112);
    UnderlyingInstrument_112.insert(UnderlyingRepurchaseTerm_112.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_112("STRING_1233887476");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_112);
    UnderlyingInstrument_112.insert(UnderlyingRestructuringType_112.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_112("STRING_1347152135");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_112);
    UnderlyingInstrument_112.insert(UnderlyingSecurityDesc_112.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_112("EXCHANGE_1749912041");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_112);
    UnderlyingInstrument_112.insert(UnderlyingSecurityExchange_112.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_112("STRING_490455666");
    noUnderlyings_0_0.set(UnderlyingSecurityID_112);
    UnderlyingInstrument_112.insert(UnderlyingSecurityID_112.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_112("STRING_652810925");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_112);
    UnderlyingInstrument_112.insert(UnderlyingSecurityIDSource_112.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_112("STRING_121505903");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_112);
    UnderlyingInstrument_112.insert(UnderlyingSecuritySubType_112.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_112("STRING_1879725820");
    noUnderlyings_0_0.set(UnderlyingSecurityType_112);
    UnderlyingInstrument_112.insert(UnderlyingSecurityType_112.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_112("STRING_1233152921");
    noUnderlyings_0_0.set(UnderlyingSeniority_112);
    UnderlyingInstrument_112.insert(UnderlyingSeniority_112.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_112("STRING_715710030");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_112);
    UnderlyingInstrument_112.insert(UnderlyingSettlMethod_112.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_112(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_112);
    UnderlyingInstrument_112.insert(UnderlyingSettlementType_112.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_112;
    UnderlyingStartValue_112.setString("288888");
    noUnderlyings_0_0.set(UnderlyingStartValue_112);
    UnderlyingInstrument_112.insert(UnderlyingStartValue_112.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_112("STRING_1699191571");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_112);
    UnderlyingInstrument_112.insert(UnderlyingStateOrProvinceOfIssue_112.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_112("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_112);
    UnderlyingInstrument_112.insert(UnderlyingStrikeCurrency_112.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_112;
    UnderlyingStrikePrice_112.setString("6895997");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_112);
    UnderlyingInstrument_112.insert(UnderlyingStrikePrice_112.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_112("STRING_1624941528");
    noUnderlyings_0_0.set(UnderlyingSymbol_112);
    UnderlyingInstrument_112.insert(UnderlyingSymbol_112.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_112("STRING_45207076");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_112);
    UnderlyingInstrument_112.insert(UnderlyingSymbolSfx_112.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_112("STRING_421308545");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_112);
    UnderlyingInstrument_112.insert(UnderlyingTimeUnit_112.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_112("STRING_1920222217");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_112);
    UnderlyingInstrument_112.insert(UnderlyingUnitOfMeasure_112.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_112;
    UnderlyingUnitOfMeasureQty_112.setString("6435615");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_112);
    UnderlyingInstrument_112.insert(UnderlyingUnitOfMeasureQty_112.getString());
    all_values.push_back(UnderlyingInstrument_112);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_231;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_231("STRING_2063227280");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_231);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_231.insert(UnderlyingSecurityAltID_231.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_231("STRING_68632825");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_231);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_231.insert(UnderlyingSecurityAltIDSource_231.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_231);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_232;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_232("STRING_2110905699");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_232);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_232.insert(UnderlyingSecurityAltID_232.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_232("STRING_1442777942");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_232);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_232.insert(UnderlyingSecurityAltIDSource_232.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_232);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_233;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_233("STRING_1523470650");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_233);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_233.insert(UnderlyingSecurityAltID_233.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_233("STRING_962976351");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_233);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_233.insert(UnderlyingSecurityAltIDSource_233.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_233);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_224;
      FIX::UnderlyingStipType UnderlyingStipType_224("STRING_1819754398");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_224);
      UnderlyingStipulations_NoUnderlyingStips_224.insert(UnderlyingStipType_224.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_224("STRING_980533916");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_224);
      UnderlyingStipulations_NoUnderlyingStips_224.insert(UnderlyingStipValue_224.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_224);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_225;
      FIX::UnderlyingStipType UnderlyingStipType_225("STRING_1192878842");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_225);
      UnderlyingStipulations_NoUnderlyingStips_225.insert(UnderlyingStipType_225.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_225("STRING_906158226");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_225);
      UnderlyingStipulations_NoUnderlyingStips_225.insert(UnderlyingStipValue_225.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_225);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_223;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_223("STRING_795307235");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_223);
      UndlyInstrumentParties_NoUndlyInstrumentParties_223.insert(UnderlyingInstrumentPartyID_223.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_223('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_223);
      UndlyInstrumentParties_NoUndlyInstrumentParties_223.insert(UnderlyingInstrumentPartyIDSource_223.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_223(833013328);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_223);
      UndlyInstrumentParties_NoUndlyInstrumentParties_223.insert(UnderlyingInstrumentPartyRole_223.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_223);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_441("STRING_1128856064");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_441);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441.insert(UnderlyingInstrumentPartySubID_441.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_441(2066166249);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_441);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441.insert(UnderlyingInstrumentPartySubIDType_441.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_442("STRING_1632523169");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_442);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442.insert(UnderlyingInstrumentPartySubID_442.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_442(269717785);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_442);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442.insert(UnderlyingInstrumentPartySubIDType_442.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_443("STRING_2095055148");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_443);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443.insert(UnderlyingInstrumentPartySubID_443.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_443(1184231092);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_443);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443.insert(UnderlyingInstrumentPartySubIDType_443.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_224;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_224("STRING_951151472");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_224);
      UndlyInstrumentParties_NoUndlyInstrumentParties_224.insert(UnderlyingInstrumentPartyID_224.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_224('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_224);
      UndlyInstrumentParties_NoUndlyInstrumentParties_224.insert(UnderlyingInstrumentPartyIDSource_224.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_224(1873830831);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_224);
      UndlyInstrumentParties_NoUndlyInstrumentParties_224.insert(UnderlyingInstrumentPartyRole_224.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_224);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_444("STRING_2021513649");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_444);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444.insert(UnderlyingInstrumentPartySubID_444.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_444(147655728);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_444);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444.insert(UnderlyingInstrumentPartySubIDType_444.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_225;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_225("STRING_201347922");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_225);
      UndlyInstrumentParties_NoUndlyInstrumentParties_225.insert(UnderlyingInstrumentPartyID_225.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_225('5');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_225);
      UndlyInstrumentParties_NoUndlyInstrumentParties_225.insert(UnderlyingInstrumentPartyIDSource_225.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_225(287114370);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_225);
      UndlyInstrumentParties_NoUndlyInstrumentParties_225.insert(UnderlyingInstrumentPartyRole_225.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_225);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_445("STRING_586224421");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_445);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445.insert(UnderlyingInstrumentPartySubID_445.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_445(250536421);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_445);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445.insert(UnderlyingInstrumentPartySubIDType_445.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_22;
  FIX::Yield Yield_22;
  Yield_22.setString("94.960000");
  msg.set(Yield_22);
  YieldData_22.insert(Yield_22.getString());
  FIX::YieldCalcDate YieldCalcDate_22("LOCALMKTDATE_2109695072");
  msg.set(YieldCalcDate_22);
  YieldData_22.insert(YieldCalcDate_22.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_22("LOCALMKTDATE_1213512772");
  msg.set(YieldRedemptionDate_22);
  YieldData_22.insert(YieldRedemptionDate_22.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_22;
  YieldRedemptionPrice_22.setString("1543733");
  msg.set(YieldRedemptionPrice_22);
  YieldData_22.insert(YieldRedemptionPrice_22.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_22(1781965822);
  msg.set(YieldRedemptionPriceType_22);
  YieldData_22.insert(YieldRedemptionPriceType_22.getString());
  FIX::YieldType YieldType_22("STRING_CHANGE");
  msg.set(YieldType_22);
  YieldData_22.insert(YieldType_22.getString());
  all_values.push_back(YieldData_22);


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
